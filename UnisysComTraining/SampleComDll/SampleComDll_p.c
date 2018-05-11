

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0620 */
/* at Tue Jan 19 08:44:07 2038
 */
/* Compiler settings for SampleComDll.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0620 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "SampleComDll_h.h"

#define TYPE_FORMAT_STRING_SIZE   3                                 
#define PROC_FORMAT_STRING_SIZE   31                                
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _SampleComDll_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } SampleComDll_MIDL_TYPE_FORMAT_STRING;

typedef struct _SampleComDll_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } SampleComDll_MIDL_PROC_FORMAT_STRING;

typedef struct _SampleComDll_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } SampleComDll_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const SampleComDll_MIDL_TYPE_FORMAT_STRING SampleComDll__MIDL_TypeFormatString;
extern const SampleComDll_MIDL_PROC_FORMAT_STRING SampleComDll__MIDL_ProcFormatString;
extern const SampleComDll_MIDL_EXPR_FORMAT_STRING SampleComDll__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISimple_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISimple_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IExample_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IExample_ProxyInfo;



#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const SampleComDll_MIDL_PROC_FORMAT_STRING SampleComDll__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure ExampleFunc */


	/* Procedure SimpleFunc */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 24 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const SampleComDll_MIDL_TYPE_FORMAT_STRING SampleComDll__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */

			0x0
        }
    };


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ISimple, ver. 0.0,
   GUID={0x8B98A3BA,0xBC7F,0x4036,{0x87,0xDE,0x2E,0x3A,0x30,0x0D,0xAB,0x46}} */

#pragma code_seg(".orpc")
static const unsigned short ISimple_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ISimple_ProxyInfo =
    {
    &Object_StubDesc,
    SampleComDll__MIDL_ProcFormatString.Format,
    &ISimple_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISimple_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    SampleComDll__MIDL_ProcFormatString.Format,
    &ISimple_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _ISimpleProxyVtbl = 
{
    &ISimple_ProxyInfo,
    &IID_ISimple,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISimple::SimpleFunc */
};

const CInterfaceStubVtbl _ISimpleStubVtbl =
{
    &IID_ISimple,
    &ISimple_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IExample, ver. 0.0,
   GUID={0x3E3B1FDA,0x3601,0x4377,{0x9A,0x16,0x70,0xAA,0xEF,0xC9,0x09,0x5D}} */

#pragma code_seg(".orpc")
static const unsigned short IExample_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IExample_ProxyInfo =
    {
    &Object_StubDesc,
    SampleComDll__MIDL_ProcFormatString.Format,
    &IExample_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IExample_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    SampleComDll__MIDL_ProcFormatString.Format,
    &IExample_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IExampleProxyVtbl = 
{
    &IExample_ProxyInfo,
    &IID_IExample,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IExample::ExampleFunc */
};

const CInterfaceStubVtbl _IExampleStubVtbl =
{
    &IID_IExample,
    &IExample_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    SampleComDll__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x801026c, /* MIDL Version 8.1.620 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _SampleComDll_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_ISimpleProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IExampleProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _SampleComDll_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_ISimpleStubVtbl,
    ( CInterfaceStubVtbl *) &_IExampleStubVtbl,
    0
};

PCInterfaceName const _SampleComDll_InterfaceNamesList[] = 
{
    "ISimple",
    "IExample",
    0
};


#define _SampleComDll_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _SampleComDll, pIID, n)

int __stdcall _SampleComDll_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _SampleComDll, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _SampleComDll, 2, *pIndex )
    
}

const ExtendedProxyFileInfo SampleComDll_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _SampleComDll_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _SampleComDll_StubVtblList,
    (const PCInterfaceName * ) & _SampleComDll_InterfaceNamesList,
    0, /* no delegation */
    & _SampleComDll_IID_Lookup, 
    2,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

