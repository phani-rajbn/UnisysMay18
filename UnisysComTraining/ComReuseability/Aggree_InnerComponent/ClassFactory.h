#pragma once
#include "./Header.h"

class CFactory : public IClassFactory {
private:
	long m_lRefCount;
public:
	CFactory() : m_lRefCount(0)
	{

	}
	///////////////////////IUnknown methods/////////////////
	STDMETHOD(QueryInterface)(REFIID riid, void** ppv) {
		//QueryInterface should be commutative and reflexive
		if ((riid == IID_IUnknown) || (riid == IID_IClassFactory))
			*ppv = (IClassFactory*)this;
		else
			return E_NOINTERFACE;
		((IClassFactory*)*ppv)->AddRef();
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
	////////////////////////////////////IClassFactory////////////////////////////////////////////////////
	STDMETHOD(CreateInstance)(IUnknown * pUnkOuter, REFIID riid, void ** ppvObject) {
		//Check for Aggregation.
		if ((pUnkOuter != NULL) && (riid != IID_IUnknown))
			return CLASS_E_NOAGGREGATION;
		//Create the COM object.
		AggreInnerComponent* pCOM = new AggreInnerComponent(pUnkOuter);
		//Inner Component so that its pointers are set...
		return pCOM->NonQI(riid, ppvObject);
	}
	STDMETHOD(LockServer)(BOOL fLock) override {
		return S_OK;
	}
};