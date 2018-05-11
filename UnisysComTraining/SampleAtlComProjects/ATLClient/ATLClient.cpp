// ATLClient.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"../SampleATLProj/SampleATLProj_i.h"
#include "ATLClient.h"
#include "SinkClass.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// The one and only application object
CWinApp theApp;
//We are creating a Automation Client. The object is created at runtime using the methods of IDispatch instead of IUnknown. Our Component methods are invoked thro IDispatch methods instead of vTable Binding. In this program we will not include any of the server dependencies.... 
using namespace std;
void firstExample() 
{
	//Using IDispatch methods, we could invoke the methods that have Ids created for them. These IDs associated with the methods are called as DISPIDs and the interface is called dispInterfaces. All UR IDispatch derived interfaces are called as DispInterfaces. 
	DISPID diid;  //TO Hold DispID...
	IDispatch* pDisp;//IDispatch interface of the Component we create...
	CLSID clsid;//CLSID of the Component that we want to use...

	HRESULT hr = CoInitialize(NULL);
	hr = CLSIDFromProgID(OLESTR("SampleATLProj.MathComponent.1"), &clsid);
	//gets CLSID from the ProgID. Refer rgs file for the ProgID... 
	if (FAILED(hr)) {
		cout << "Failed to get the CLSID from the ProgID" << endl;
		return;
	}
	else cout << "CLSID of the Component is obtained" << endl;
	hr = CoCreateInstance(clsid, NULL, CLSCTX_INPROC_SERVER, IID_IDispatch, (void**)&pDisp);
	if (FAILED(hr)) {
		cout << "Failed to get the IDispatch interface" << endl;
		return;
	}
	else {
		cout << "Component is instantiated" << endl;
	}
	UINT count = 0;
	hr = pDisp->GetTypeInfoCount(&count);
	if (count != 1) {
		cout << "Type Information is not available for this Component, U can work with these methods only thro VTable Binding" << endl;
		return;
	}
	//Which method?
	LPOLESTR strMethodName = L"SubMethod";
	hr = pDisp->GetIDsOfNames(IID_NULL, &strMethodName, 1, LOCALE_USER_DEFAULT, &diid);
	if (FAILED(hr)) {
		cout << "Exiting the App because of Failure" << endl;
		return;
	}
	cout << "The DispId of this method is " << diid << endl;
	//Create the Array of paramters to be passed to the function..
	//All Data types in Automation are of the type VARIANT....
	VARIANTARG* pArgs = new VARIANTARG[3];
	for (int i = 0; i < 3; i++)
	{
		VariantInit(&pArgs[i]);
	}
	FLOAT fRes = 0.0;
	pArgs[0].vt = VT_R4 | VT_BYREF;//VT_R4 means float value
	pArgs[0].pfltVal = &fRes;

	pArgs[1].vt = VT_R4;
	pArgs[1].fltVal = 123;

	pArgs[2].vt = VT_R4;
	pArgs[2].fltVal = 234;

	DISPPARAMS dParams;
	dParams.cArgs = 3;
	dParams.cNamedArgs = 0;
	dParams.rgdispidNamedArgs = NULL;
	dParams.rgvarg = pArgs;
	//As we have got the DispId, we should be invoking the method....
	hr = pDisp->Invoke(diid, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &dParams, NULL, NULL, NULL);
	if (FAILED(hr)) {
		cout << "Failed to invoke the method with id " << diid << endl;
		return;
	}
	cout << "The result of this operation is  " << fRes << endl;
	pDisp->Release();
	CoUninitialize();
}
void arrayExample() {
	HRESULT hr = CoInitialize(NULL);
	IFirstComponent* pCom = NULL;
	hr = CoCreateInstance(CLSID_FirstComponent, NULL, CLSCTX_INPROC_SERVER, IID_IFirstComponent, (void**)&pCom);
	if (FAILED(hr)) {
		cout << "CocreateInstance has failed" << endl;
		return;
	}
	SAFEARRAY* pSa = NULL;
	SAFEARRAYBOUND bound[1];//Single dimensional Array...
	bound[0].cElements = 10;
	bound[0].lLbound = 0;

	pSa = SafeArrayCreate(VT_I4, 1, bound);

	for (long l = 0; l < bound[0].cElements; l++) {
		SafeArrayPutElement(pSa, &l, &l);//set the values into the array...
	}

	VARIANTARG arg;
	VariantInit(&arg);
	arg.vt = VT_ARRAY | VT_I4;//Array of integers...
	arg.parray = pSa;

	long res = 0;
	hr = pCom->AddNumbers(arg, &res);
	if (FAILED(hr)) {
		cout << "Adding numbers failed" << endl;
		return;
	}
	cout << "The Added result is "  << res << endl;
	pCom->Release();
	CoUninitialize();
}

void eventExample() {
	IEventComponent* pEc = NULL;//Create the interface pointer
	HRESULT hr = CoInitialize(NULL);
	hr = CoCreateInstance(CLSID_EventComponent, NULL, CLSCTX_INPROC_SERVER, IID_IEventComponent, (void**)&pEc);
	//Instantiate the COM object.
	if (FAILED(hr)) {
		return;
	}

	IConnectionPointContainer* pContainer = NULL;//Create the Container pointer
	hr = pEc->QueryInterface(IID_IConnectionPointContainer, (void**)&pContainer);//get the Container pointer object of the COM Component
	if (FAILED(hr)) {
		return;
	}
	IConnectionPoint* pCon = NULL;
	hr = pContainer->FindConnectionPoint(DIID__IEventComponentEvents, &pCon);//Get the Connection Point, its the DispInterface Id to search for...

	if (FAILED(hr)) {
		return;
	}

	//Map the SInk object to this connection point...
	CSinkClass* pSinkClass = new CSinkClass();
	IUnknown* pSink = NULL;
	IDispatch* pDisp = pSinkClass->GetIDispatch(TRUE);
	hr = pDisp->QueryInterface(IID_IUnknown, (void**)&pSink);//OBtain the IUnknown pointer of the SInk Class..
	DWORD dwCookie;
	pCon->Advise(pSink, &dwCookie);//LInking UR Com object with the sink object....
	pEc->InvokeMethod(L"test123"); //invoke the COM method which internally should call our outgoing Interface method....
	pCon->Unadvise(dwCookie);//Unhooking the client and the server... 
	pCon->Release();
	pContainer->Release();
	pEc->Release();
	CoUninitialize();
}
int main()
{
	//firstExample();
	//arrayExample();
	eventExample();
}
