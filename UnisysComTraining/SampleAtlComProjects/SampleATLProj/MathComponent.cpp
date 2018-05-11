// MathComponent.cpp : Implementation of CMathComponent

#include "stdafx.h"
#include "MathComponent.h"


// CMathComponent



STDMETHODIMP CMathComponent::AddMethod(float fVal1, float fVal2, float* fRes)
{
	*fRes = fVal1 + fVal2;
	return S_OK;
}

STDMETHODIMP CMathComponent::SubMethod(float fVal1, float fV2, float* fRes) {
	*fRes = fVal1 - fV2;
	return S_OK;
}
