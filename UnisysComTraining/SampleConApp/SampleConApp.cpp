#include<iostream>
using namespace std;
#include<Windows.h>

#include"../SampleComDll/SampleComDll_h.h"
#include"../SampleComDll/SampleComDll_i.c"//MIDL generated files as dependencies...

//interface is a type def for struct in VC++ defined in a header file objBase.h.

#define IID_Simple 101//IDs of my classes....
#define IID_Example 102

interface QueryObject {
public:
	virtual void QueryPointer(int id, void** ppO) = 0;
	virtual void AddReference() = 0;
	virtual void ReleaseReference() = 0;
};
//base class
interface Simple :public QueryObject{
public:
	virtual void SimpleFunc() = 0;//pure virtual function in C++(Abstract methods).
};
//second base class
interface Example :public QueryObject{
public:
	virtual void ExampleFunc() = 0;
};

//C++ supports Multiple inheritance
class SimpleExample :public Simple, public Example {
private:
	long m_lRefCount;
	long m_lVarInfo;
public:
	SimpleExample() : m_lRefCount(0) {

	}
	~SimpleExample() {
		cout << "Simple Example object is deleted from memory" << endl;
	}
	void QueryPointer(int id, void** ppO) {
		if (id == IID_Simple)
			*ppO = (Simple*)this;
		else if (id == IID_Example)
			*ppO = (Example*)this;
		((Simple*)*ppO)->AddReference();
	}
	void AddReference() {
		this->m_lRefCount++;
	}

	void ReleaseReference(){
		this->m_lRefCount--;
		if (m_lRefCount == 0)
			delete this;
	}

	void ExampleFunc() {
		this->m_lVarInfo = 123;
		cout << "Example func implemented in SimpleExample and the value is set" << endl;
	}

	void SimpleFunc() {
		cout << "The set value is " << this->m_lVarInfo << endl;
		cout << "Simple func implemented in SimpleExample" << endl;
	}
};
//Factory method created to create the instance of our Component and return the requested base class pointer...
//Create the instance of the SimpleExample object and return its reference....
void CreateInstance(int iid, void** ppO) {
	SimpleExample* ex = new SimpleExample();
	ex->QueryPointer(iid, ppO);
}
void cppDemo() {
	Example* pEx = NULL;
	CreateInstance(IID_Example, (void**)&pEx);

	pEx->ExampleFunc();//setting the value

	Simple* pSimple = NULL;
	pEx->QueryPointer(IID_Simple, (void**)&pSimple);
	pEx->ReleaseReference();
	pSimple->SimpleFunc();//reading the value...
	pSimple->ReleaseReference();
}

void createComObj() {
	//Initialize the COM lib into UR process....
	HRESULT hr = CoInitialize(NULL);
	if (FAILED(hr)) {
		cout << "Failed to initalize the COM library";
		return;
	}
	ISimple* pSimple = NULL;
	hr = ::CoCreateInstance(CLSID_SimpleExample, NULL, CLSCTX_INPROC_SERVER, IID_ISimple, (void**)&pSimple);
	if (FAILED(hr)) {
		cout << "Failed to create the COM object" << endl;
		return;
	}
	pSimple->SimpleFunc();
	pSimple->Release();
	CoUninitialize();//Release the COM library....
}
void main() {
	//cppDemo();
	createComObj();
}

