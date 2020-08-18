// dllmain.h : Declaration of module class.

class CTestServerModule : public ATL::CAtlDllModuleT< CTestServerModule >
{
public :
	DECLARE_LIBID(LIBID_TestServerLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_TESTSERVER, "{d0df4a54-d702-42a2-b3f3-d8015d37d6fa}")
};

extern class CTestServerModule _AtlModule;
