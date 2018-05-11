#import "../InnerComponent/Debug/InnerComponent.tlb"
#include<iostream>
using namespace std;
using namespace InnerComponentLib;//name of the Library in IDL file....

void usingTlbFile() {
	CoInitialize(NULL);

	//For the interface called IX, a SmartPointer class called IXPtr would be generated....
	IMath1Ptr ptr(__uuidof(MathComponent));
	int Val = 0;
	ptr->AddFunc(123, 234, &Val);
	cout << "The Added value is " << Val << endl;
	ptr->SubFunc(432, 32, &Val);
	cout << "The Subtracted value is " << Val << endl;
	//No Release or CoUninitialize while using smart pointers...
}

void usingCoCreateInstance() {
	int val = 0;
	CoInitialize(NULL);
	IMath1* ptr = NULL;
	CoCreateInstance(__uuidof(MathComponent), NULL, CLSCTX_INPROC_SERVER, __uuidof(IMath1), (void**)&ptr);
	ptr->AddFunc(123, 234, &val);
	cout << "The Added value is " << val << endl;
	ptr->Release();
	CoUninitialize();
}

void usingGetClassObject() {
	CoInitialize(NULL);
	IClassFactory* pFact = NULL;
	HRESULT hr = CoGetClassObject(__uuidof(MathComponent), CLSCTX_INPROC_SERVER, NULL, __uuidof(IClassFactory), (void**)&pFact);
	IMath1* pMath = NULL;
	pFact->CreateInstance(NULL, __uuidof(IMath1), (void**)&pMath);
	int res = 0;
	pMath->AddFunc(123, 234, &res);
	cout << "The Added value is " << res << endl;
	pMath->Release();
	pFact->Release();
	CoUninitialize();
}


void main() {
	//usingTlbFile();
	//usingCoCreateInstance();
	//usingGetClassObject();
	//usingOuterComponent();
}
