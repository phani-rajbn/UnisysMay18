// SinkClass.cpp : implementation file
//

#include "stdafx.h"
#include "ATLClient.h"
#include "SinkClass.h"


// CSinkClass

IMPLEMENT_DYNAMIC(CSinkClass, CCmdTarget)


CSinkClass::CSinkClass()
{
	EnableAutomation();
}

CSinkClass::~CSinkClass()
{
}


void CSinkClass::OnFinalRelease()
{
	// When the last reference for an automation object is released
	// OnFinalRelease is called.  The base class will automatically
	// deletes the object.  Add additional cleanup required for your
	// object before calling the base class.

	CCmdTarget::OnFinalRelease();
}


BEGIN_MESSAGE_MAP(CSinkClass, CCmdTarget)
END_MESSAGE_MAP()


BEGIN_DISPATCH_MAP(CSinkClass, CCmdTarget)
	DISP_FUNCTION(CSinkClass, "Click", Click, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION(CSinkClass, "Apple", Apple, VT_EMPTY, VTS_NONE)
END_DISPATCH_MAP()

// Note: we add support for IID_ISinkClass to support typesafe binding
//  from VBA.  This IID must match the GUID that is attached to the 
//  dispinterface in the .IDL file.

// {BEF646D4-A301-4226-B192-8C00DC3B0D8C}
static const IID IID_ISinkClass =
{ 0xBEF646D4, 0xA301, 0x4226, { 0xB1, 0x92, 0x8C, 0x0, 0xDC, 0x3B, 0xD, 0x8C } };

//UR DISPINTERFACE is provided with an ID in i.c file....
BEGIN_INTERFACE_MAP(CSinkClass, CCmdTarget)
	INTERFACE_PART(CSinkClass, DIID__IEventComponentEvents, Dispatch)
END_INTERFACE_MAP()


// CSinkClass message handlers
void CSinkClass::Click() {
	MessageBox(NULL, L"Click event is triggered", L"COM Client", MB_OK);
}

void CSinkClass::Apple() {
	MessageBox(NULL, L"Apple event is triggered", L"COM Client", MB_OK);
}
