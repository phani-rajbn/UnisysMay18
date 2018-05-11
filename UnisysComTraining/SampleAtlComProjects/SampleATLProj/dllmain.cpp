// dllmain.cpp : Implementation of DllMain.

#include "stdafx.h"
#include "resource.h"
#include "SampleATLProj_i.h"
#include "dllmain.h"

CSampleATLProjModule _AtlModule;

class CSampleATLProjApp : public CWinApp
{
public:

// Overrides
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CSampleATLProjApp, CWinApp)
END_MESSAGE_MAP()

CSampleATLProjApp theApp;

BOOL CSampleATLProjApp::InitInstance()
{
	return CWinApp::InitInstance();
}

int CSampleATLProjApp::ExitInstance()
{
	return CWinApp::ExitInstance();
}
