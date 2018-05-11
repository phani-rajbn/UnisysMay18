// dllmain.h : Declaration of module class.

class CSampleATLProjModule : public ATL::CAtlDllModuleT< CSampleATLProjModule >
{
public :
	DECLARE_LIBID(LIBID_SampleATLProjLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_SAMPLEATLPROJ, "{9BDB91E0-47BF-4B38-BAD6-B8D3296289F0}")
};

extern class CSampleATLProjModule _AtlModule;
