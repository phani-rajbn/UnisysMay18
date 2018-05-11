#include"../OuterComponent/outercomponent_h.h"
#include"../OuterComponent/outercomponent_i.c"
#include"../InnerComponent/Innercomponent_h.h"
#include"../InnerComponent/Innercomponent_i.c"
#include"../Aggree_InnerComponent/Aggree_InnerComponent_h.h"
#include"../Aggree_InnerComponent/Aggree_InnerComponent_i.c"
#include"../Aggre_OuterComponent/Aggre_OuterComponent_h.h"
#include"../Aggre_OuterComponent/Aggre_OuterComponent_i.c"
#include<iostream>
using namespace std;
void containmentDemo() {
	HRESULT hr = CoInitialize(NULL);
	IMath3* pMath3 = NULL;
	IMath1* pMath = NULL;
	hr = CoCreateInstance(CLSID_OuterMathComponent, NULL, CLSCTX_INPROC_SERVER, IID_IMath3, (void**)&pMath3);
	if (FAILED(hr)) {
		cout << "CoCreateInstance has failed" << endl;
		return;
	}
	int res = 0;
	pMath3->SqrFunc(123, &res);
	pMath3->QueryInterface(IID_IMath1, (void**)&pMath);
	pMath->AddFunc(123, 234, &res);
	cout << "The result:" << res << endl;
	return;
}

void aggregationDemo() {
	HRESULT hr = CoInitialize(NULL);
	IAggreOuter* pOuter = NULL;
	hr = CoCreateInstance(CLSID_AggreOuterComponent, NULL, CLSCTX_INPROC_SERVER, IID_IAggreOuter, (void**)&pOuter);
	if (FAILED(hr)) {
		cout << "CoCreateInstance has failed" << endl;
		return;
	}
	pOuter->OuterMethod();
	IAggreInner* pInner = NULL;
	hr = pOuter->QueryInterface(IID_IAggreInner, (void**)&pInner);
	if (FAILED(hr))
	{
		cout << "Failed to get inner Component from outer" << endl;
		return;
	}
	pInner->InnerMethod();
	return;
}
int main() {
	aggregationDemo();
	//containmentDemo();
}