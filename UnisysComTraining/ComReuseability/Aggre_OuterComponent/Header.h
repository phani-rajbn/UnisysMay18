#pragma once
#include"../Aggree_InnerComponent/Aggree_InnerComponent_h.h"
#include"../Aggree_InnerComponent/Aggree_InnerComponent_i.c"
#include"./Aggre_OuterComponent_h.h"
#include"./Aggre_OuterComponent_i.c"

class AggreOuterComponent : public IAggreOuter {
private:
	IUnknown* pInner;
	long m_lRefCount;
public:
	AggreOuterComponent():m_lRefCount(0), pInner(NULL)
	{

	}
	STDMETHOD(Init)() {
		return CoCreateInstance(CLSID_AggreInnerComponent, this, CLSCTX_INPROC_SERVER, IID_IUnknown, (void**)&pInner);
	}
	///////////////////////IUnknown methods/////////////////
	STDMETHOD(QueryInterface)(REFIID riid, void** ppv) {
		//QueryInterface should be commutative and reflexive
		if ((riid == IID_IUnknown) || (riid == IID_IAggreOuter))
			*ppv = (IAggreOuter*)this;
		else
			return pInner->QueryInterface(riid, ppv);
		((IAggreOuter*)*ppv)->AddRef();
		return S_OK;
	}
	STDMETHOD_(ULONG, AddRef)() {
		return InterlockedIncrement(&m_lRefCount);
	}
	STDMETHOD_(ULONG, Release)() {
		ULONG ul = InterlockedDecrement(&m_lRefCount);
		if (ul == 0)
			delete this;
		return ul;
	}
	////////////////////Aggree Method////////////////////////////
	STDMETHOD(OuterMethod)() {
		MessageBox(NULL, L"Outer method of the Aggregation", L"OuterComponent", MB_OK);
		return S_OK;
	}
};