#include"ClassFactory.h"
////////////////Entry point//////////////////////////
BOOL APIENTRY DllMain(HANDLE handle, DWORD dwReason, LPVOID lpReserved) {
	return TRUE;
}

///////////////////////EXPORT FUNCTIONS OF COM///////////////////////
STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv) {
	//Check for the CLSID of our Component(Passed 1st parameter of the CoCreateInstance)...
	if (rclsid != CLSID_OuterMathComponent)
		return CLASS_E_CLASSNOTAVAILABLE;
	//Create the Instance of the ClassFactory
	CFactory* pFact = new CFactory();
	//Call the QI of the ClassFactory....
	return pFact->QueryInterface(riid, ppv);
}
//////////////NO NEED FOR OTHER FUNCTIONS/////////////////////////////
