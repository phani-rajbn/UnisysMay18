#include<Windows.h>
#include<iostream>
using namespace std;
#include"../SampleComDll/SampleComDll_h.h"
#include"../SampleComDll/SampleComDll_i.c"
//U should include the MIDL generated .c files that contain the defns of the IIds as well as the interfaces that we have created....

class SimpleExample : public ISimple, public IExample {
private:
	long m_lRefCount;//member of the type long...
public:
	SimpleExample() : m_lRefCount(0) {
		cout<<"COM component is created here";
	}

	STDMETHOD(SimpleFunc) (){
		cout<<"Simple Func is called by the COM";
		return S_OK;//success...
	}

	STDMETHOD(ExampleFunc)() {
		cout<<"Example func is implemented";
		return S_OK;
	}
	////////////////////////STD interface methods/////////////////////////////////
	STDMETHOD(QueryInterface)(REFIID riid, void** ppv) {
		*ppv = NULL;
		if (riid == IID_ISimple)
			*ppv = static_cast<ISimple*>(this);
		else if (riid == IID_IExample)
			*ppv = static_cast<IExample*>(this);
		else if (riid == IID_IUnknown)
			*ppv = static_cast<ISimple*>(this);
		else
			return E_NOINTERFACE;//Error that says that the specified interface is not supported..
		((ISimple*)(*ppv))->AddRef();
		return S_OK;
	}
	//Only 2 methods in COM that does not return HRESULT:AddRef and Release():ULONG....
	STDMETHOD_(ULONG, AddRef)() {
		return InterlockedIncrement(&m_lRefCount);
	}

	STDMETHOD_(ULONG, Release)() {
		ULONG ul = InterlockedDecrement(&m_lRefCount);
		if (ul == 0)
			delete this;
		return ul;
	}
};
///////////////////////Class Factory////////////////////////////////////////////
//COM provides ClassFactory for creating single instance of the COM object and obtain the requested interface pointer. U should create a class that implements an interface called IClassFactory. This interface is a COM interface, so it will be derived from IUnknown. UR ClassFactory class should implement both IUnknown as well as IClassFactory...
class CFactory : public IClassFactory {
private:
	long m_lRefCount;
public:
	CFactory():m_lRefCount(0)
	{
		cout<<"Class Factory is created here"<<endl;
	}
	//////////////////////////IClass Factory methods///////////////////////////////////////////
	//The last 2 parameters are same as the parameters of IUnknown. 1st parameter is an IUnknown pointer that contains a reference to the Outer Component if u have implemented COM reusability using Aggregation.  The First parameter should be NULL while the client creates the com object. 
	STDMETHOD(CreateInstance)(IUnknown* pOuter, REFIID riid, void** ppv) {
		if (pOuter != NULL)
			return CLASS_E_NOAGGREGATION; //Our Component is not contained in another component.
		SimpleExample* pSE = new SimpleExample();
		if (pSE == NULL)
			return E_OUTOFMEMORY;
		return pSE->QueryInterface(riid, ppv);
	}
	//This is required if UR Lib has more than one component and U wish to ensure that lib is not unloaded untill the all the components are destroyed....
	STDMETHOD(LockServer)(BOOL fLock) {
		return S_OK;
	}
////////////////////////////////////IUnknown methods///////////////////////////////////
	STDMETHOD(QueryInterface)(REFIID riid, void** ppv) {
		*ppv = NULL;
		if ((riid == IID_IUnknown) || (riid == IID_IClassFactory))
			*ppv = static_cast<IClassFactory*>(this);
		else return E_NOINTERFACE;
		(reinterpret_cast<IClassFactory*>(*ppv))->AddRef();
		return S_OK;
	}

	STDMETHOD_(ULONG, Release)() {
		ULONG ul = InterlockedDecrement(&m_lRefCount);
		if (ul == 0)
			delete this;
		return ul;
	}

	STDMETHOD_(ULONG, AddRef)() {
		return InterlockedIncrement(&m_lRefCount);
	}
};

//////////////////////////COM EXPORT FUNCTIONS///////////////////////////////////////////////
STDAPI DllGetClassObject(REFCLSID rclsId, REFIID riid, LPVOID* ppv) {
	//This will create the ClassObject based on the CLSID....
	//Delegate the QUeryINterface method of the classfactory...
	if (rclsId != CLSID_SimpleExample)
		return CLASS_E_CLASSNOTAVAILABLE;
	CFactory* pFact = new CFactory();
	return pFact->QueryInterface(riid, ppv);
}	

STDAPI DllRegisterServer() {
	return S_OK;
}

STDAPI DllUnregisterServer() {
	return S_OK;
}

STDAPI DllCanUnloadNow() {
	return S_OK;
}
///////////////////////////////Optional Entry point for dlls///////////////////////////////
BOOL APIENTRY DllMain(HANDLE handle, DWORD dwReason, LPVOID lpReserved) {
	if (dwReason == DLL_PROCESS_ATTACH)
		cout << "Dll is loaded into the process" << endl;
	else if (dwReason == DLL_PROCESS_DETACH)
		cout<<"Dll unloaded from the process"<<endl;
	return TRUE;
}
