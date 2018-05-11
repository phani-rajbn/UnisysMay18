#pragma once
#include"OuterComponent_h.h"
#include"OuterComponent_i.c"//MIDL generated C files for Interface defns and IID Defns...
#include"../InnerComponent/InnerComponent_h.h"
#include"../InnerComponent/InnerComponent_i.c"
#include<iostream>
using namespace std;
class OuterMathComponent :public IMath1, public IMath2, public IMath3 {
private:
	long m_lRefCount;
	//Inner Component reference;
	IMath1* m_pMath1;
	IMath2* m_pMath2;
public:
	STDMETHOD(Init)() {
		HRESULT hr = CoCreateInstance(CLSID_MathComponent, NULL, CLSCTX_INPROC_SERVER, IID_IMath1, (void**)&m_pMath1);
		if (FAILED(hr)) return hr;
		hr = m_pMath1->QueryInterface(IID_IMath2, (void**)&m_pMath2);
		return hr;
	}
	/////////////////IMath1 methods////////////////////
	STDMETHOD(AddFunc)(int iFirst, int iSecond, int* iRes) {
		cout << "From the outer guy" << endl;
		return m_pMath1->AddFunc(iFirst, iSecond, iRes);//Delegating to the Inner Commpoent
	}

	STDMETHOD(SubFunc)(int iFirst, int iSecond, int* iRes) {
		return m_pMath1->SubFunc(iFirst, iSecond, iRes);
	}
	////////////////////IMath2 methods//////////////////////
	STDMETHOD(MulFunc)(int iFirst, int iSecond, int* iRes) {
		*iRes = iFirst * iSecond;
		return S_OK;
	}

	STDMETHOD(DivFunc)(int iFirst, int iSecond, int* iRes) {
		if (iSecond == 0)
			return E_ABORT;
		*iRes = iFirst / iSecond;
		return S_OK;
	}
	////////////////IMath3 methods/////////////////////
	STDMETHOD(SqrFunc)(int iVal, int* iRes) {
		*iRes = iVal * iVal;
		return S_OK;
	}

	STDMETHOD(SqrtFunc)(int iVal, int* iRes) {
		*iRes = iVal;
		return S_OK;
	}
	///////////////////////IUnknown methods/////////////////
	STDMETHOD(QueryInterface)(REFIID riid, void** ppv) {
		//QueryInterface should be commutative and reflexive
		if (riid == IID_IUnknown)
			*ppv = (IMath1*)this;
		else if (riid == IID_IMath1)
			*ppv = (IMath1*)this;
		else if (riid == IID_IMath2)
			*ppv = (IMath2*)this;
		else if (riid == IID_IMath3)
			*ppv = (IMath3*)this;
		else
			return E_NOINTERFACE;
		((IMath1*)*ppv)->AddRef();
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
	OuterMathComponent() : m_lRefCount(0), m_pMath1(NULL), m_pMath2(NULL)
	{

	}
};