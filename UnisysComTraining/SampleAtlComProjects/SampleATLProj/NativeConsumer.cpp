// NativeConsumer.cpp : Implementation of CNativeConsumer

#include "stdafx.h"
#include "NativeConsumer.h"
#include"../NativeDll/Header.h"//Include the header file that contains dllimport functions....


// CNativeConsumer



STDMETHODIMP CNativeConsumer::InvokeNativeMethod()
{
	BSTR strString = SysAllocString(L"Hello from COM");
	WelcomeMessaage(strString);
	int res = AddFunc(123, 234);
	wchar_t strContent[100];
	wsprintf(strContent, L"The added value is %d", res);
	MessageBox(NULL, strContent, L"COM Server", MB_OK);
	SysFreeString(strString);
	return S_OK;
}
