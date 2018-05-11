#pragma once
#include"./Aggree_InnerComponent_h.h"
#include"./Aggree_InnerComponent_i.c"

//As this COM object must  behave both like a Direct Component as well as inner Component delegated thro an outer Component, we will have 2 versions of IUnknown interface. 

interface INonDelIUnknown {
	STDMETHOD(NonQI)(REFIID riid, void** ppv) PURE;
	STDMETHOD_(ULONG, NonAddref)()PURE;
	STDMETHOD_(ULONG, NonRelease)()PURE;
};
class AggreInnerComponent : public IAggreInner, public INonDelIUnknown {
private: 
	long m_lRefCount;
	IUnknown* m_pOuterUnknown;//Its the IUnknown pointer of the Outer Component if it exists.
public: 
	AggreInnerComponent(IUnknown* ptr)
	{
		if(ptr != NULL) {
			m_pOuterUnknown = ptr;
		}
		else {
			//No Outer Component...
			m_pOuterUnknown = ((IUnknown*)(INonDelIUnknown*)this);
		}
	}
	//////////////////////INonDelUnknown methods//////////////////////////////
	STDMETHOD(NonQI)(REFIID riid, void** ppv){
		if (riid == IID_IUnknown)
		 *ppv = (INonDelIUnknown*)this;
		else if (riid == IID_IAggreInner)
			*ppv = (IAggreInner*)this;
		else
			return E_NOINTERFACE;
		((INonDelIUnknown*)*ppv)->NonAddref();
		return S_OK;
	}
	STDMETHOD_(ULONG, NonAddref)() {
		return InterlockedIncrement(&m_lRefCount);
	}
	STDMETHOD_(ULONG, NonRelease)() {
		ULONG ul = InterlockedDecrement(&m_lRefCount);
		if (ul == 0)
			delete this;
		return ul;
	}
	///////////////////////////Delegating Iunknown methods//////////////
	STDMETHOD(QueryInterface)(REFIID riid, void** ppv) {
		return m_pOuterUnknown->QueryInterface(riid, ppv);
	}
	STDMETHOD_(ULONG, AddRef)() {
		return m_pOuterUnknown->AddRef();
	}
	STDMETHOD_(ULONG, Release)() {
		return m_pOuterUnknown->Release();
	}
	//////////////////////////IAggreInner Methods//////////////////////
	STDMETHOD(InnerMethod)() {
		MessageBox(NULL, L"Inner Method of the Inner Component", L"Inner Component", MB_OK);
		return S_OK;
	}
};
