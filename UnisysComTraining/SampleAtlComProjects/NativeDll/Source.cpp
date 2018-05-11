#include<Windows.h>//Dont include the header file, as the header file is for UR clients.....

int __declspec(dllexport) AddFunc(int iVal1, int iVal2) {
	MessageBox(NULL, L"Add Func is called from the Native dll", L"Cpp DLL", MB_OK);
	return iVal1 + iVal2;
}

void __declspec(dllexport) WelcomeMessaage(BSTR message) {
	MessageBox(NULL, message, L"Cpp DLL", MB_OK);
}