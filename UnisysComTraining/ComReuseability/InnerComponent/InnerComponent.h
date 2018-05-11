#include"InnerComponent_h.h"
#include"InnerComponent_i.c"//MIDL generated C files for Interface defns and IID Defns...

class MathComponent :public IMath1, public IMath2 {
private:
	long m_lRefCount;
public:
	/////////////////IMath1 methods////////////////////
	STDMETHOD(AddFunc)(int iFirst, int iSecond, int* iRes) {
		*iRes = iFirst + iSecond;
		return S_OK;
	}

	STDMETHOD(SubFunc)(int iFirst, int iSecond, int* iRes) {
		*iRes = iFirst - iSecond;
		return S_OK;
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
	///////////////////////IUnknown methods/////////////////
	STDMETHOD(QueryInterface)(REFIID riid, void** ppv) {
		//QueryInterface should be commutative and reflexive
		if (riid == IID_IUnknown)
			*ppv = (IMath1*)this;
		else if (riid == IID_IMath1)
			*ppv = (IMath1*)this;
		else if (riid == IID_IMath2)
			*ppv = (IMath2*)this;
		else
			return E_NOINTERFACE;
		((IMath1*)*ppv)->AddRef();
		return S_OK;
	}
	STDMETHOD_(ULONG, AddRef)(){
		return InterlockedIncrement(&m_lRefCount);
	}
	STDMETHOD_(ULONG, Release)() {
		ULONG ul = InterlockedDecrement(&m_lRefCount);
		if (ul == 0)
			delete this;
		return ul;
	}
	MathComponent() : m_lRefCount(0)
	{

	}
};