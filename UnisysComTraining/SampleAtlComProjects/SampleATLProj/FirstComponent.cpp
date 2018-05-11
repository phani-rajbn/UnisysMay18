// FirstComponent.cpp : Implementation of CFirstComponent

#include "stdafx.h"
#include "FirstComponent.h"


// CFirstComponent


//Will take an Array of integers as arg and return the sum of those Elements...
STDMETHODIMP CFirstComponent::AddNumbers(VARIANT theArray, LONG* lResult)
{
	if ((theArray.vt & VT_I4) && (theArray.vt & VT_ARRAY)) {

		SAFEARRAY* pSa;
		pSa = theArray.parray;//get the array passed as arg....
		long lBound, uBound;
		SafeArrayGetLBound(pSa, 1, &lBound);
		SafeArrayGetUBound(pSa, 1, &uBound);
		long result = 0;
		long item = 0;
		for (long i = lBound; i <= uBound; i++) {
			SafeArrayGetElement(pSa, &i, &item);
			result += item;
		}
		*lResult = result;
		//SafeArrayDestroy(pSa);
	}
	else
		return E_INVALIDARG;
		return S_OK;
}
