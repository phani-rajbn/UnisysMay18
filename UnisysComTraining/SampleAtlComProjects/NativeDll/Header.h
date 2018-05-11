#pragma once
#include<Windows.h>

//Provide the declarations of the functions....
int __declspec(dllimport) AddFunc(int iVal1, int iVal2);//This will be used by UR Dll Clients as header files....

void __declspec(dllimport) WelcomeMessaage(BSTR message);