// EventComponent.cpp : Implementation of CEventComponent

#include "stdafx.h"
#include "EventComponent.h"


// CEventComponent



STDMETHODIMP CEventComponent::InvokeMethod(BSTR strCaller)
{
	int res = MessageBox(NULL, strCaller, L"Com Server", MB_YESNO);
	if (res == IDYES) {
		//trigger the event.....
		Fire_Apple();
		Fire_Click();
	}
	else
		MessageBox(NULL, L"Event is not fired", L"COM Server", MB_OK);
	return S_OK;
}
