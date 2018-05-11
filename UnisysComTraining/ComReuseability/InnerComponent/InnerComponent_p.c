

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Thu May 10 11:11:00 2018
 */
/* Compiler settings for InnerComponent.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
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


#include "InnerComponent_h.h"

#define TYPE_FORMAT_STRING_SIZE   7                                 
#define PROC_FORMAT_STRING_SIZE   97                                
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _InnerComponent_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } InnerComponent_MIDL_TYPE_FORMAT_STRING;

typedef struct _InnerComponent_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } InnerComponent_MIDL_PROC_FORMAT_STRING;

typedef struct _InnerComponent_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } InnerComponent_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const InnerComponent_MIDL_TYPE_FORMAT_STRING InnerComponent__MIDL_TypeFormatString;
extern const InnerComponent_MIDL_PROC_FORMAT_STRING InnerComponent__MIDL_ProcFormatString;
extern const InnerComponent_MIDL_EXPR_FORMAT_STRING InnerComponent__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMath1_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMath1_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMath2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMath2_ProxyInfo;



#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const InnerComponent_MIDL_PROC_FORMAT_STRING InnerComponent__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure MulFunc */


	/* Procedure AddFunc */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10 */	NdrFcShort( 0x2c ),	/* 44 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter iFirst */


	/* Parameter iFirst */

/* 24 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter iSecond */


	/* Parameter iSecond */

/* 30 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter iRes */


	/* Parameter iRes */

/* 36 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 42 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 44 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DivFunc */


	/* Procedure SubFunc */

/* 48 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 50 */	NdrFcLong( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x4 ),	/* 4 */
/* 56 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 58 */	NdrFcShort( 0x2c ),	/* 44 */
/* 60 */	NdrFcShort( 0x8 ),	/* 8 */
/* 62 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 64 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter iFirst */


	/* Parameter iFirst */

/* 72 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 74 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 76 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter iSecond */


	/* Parameter iSecond */

/* 78 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 80 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter iRes */


	/* Parameter iRes */

/* 84 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 86 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 88 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 90 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 92 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 94 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const InnerComponent_MIDL_TYPE_FORMAT_STRING InnerComponent__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/*  4 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */

			0x0
        }
    };


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IMath1, ver. 0.0,
   GUID={0x0F1D36F4,0xE836,0x4881,{0x85,0x58,0xBB,0x71,0x13,0xC9,0xA4,0x5D}} */

#pragma code_seg(".orpc")
static const unsigned short IMath1_FormatStringOffsetTable[] =
    {
    0,
    48
    };

static const MIDL_STUBLESS_PROXY_INFO IMath1_ProxyInfo =
    {
    &Object_StubDesc,
    InnerComponent__MIDL_ProcFormatString.Format,
    &IMath1_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMath1_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    InnerComponent__MIDL_ProcFormatString.Format,
    &IMath1_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _IMath1ProxyVtbl = 
{
    &IMath1_ProxyInfo,
    &IID_IMath1,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IMath1::AddFunc */ ,
    (void *) (INT_PTR) -1 /* IMath1::SubFunc */
};

const CInterfaceStubVtbl _IMath1StubVtbl =
{
    &IID_IMath1,
    &IMath1_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IMath2, ver. 0.0,
   GUID={0x2E4C65D7,0x7EFA,0x4C79,{0xBF,0x74,0x81,0xCF,0x97,0xCD,0xB6,0x95}} */

#pragma code_seg(".orpc")
static const unsigned short IMath2_FormatStringOffsetTable[] =
    {
    0,
    48
    };

static const MIDL_STUBLESS_PROXY_INFO IMath2_ProxyInfo =
    {
    &Object_StubDesc,
    InnerComponent__MIDL_ProcFormatString.Format,
    &IMath2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMath2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    InnerComponent__MIDL_ProcFormatString.Format,
    &IMath2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _IMath2ProxyVtbl = 
{
    &IMath2_ProxyInfo,
    &IID_IMath2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IMath2::MulFunc */ ,
    (void *) (INT_PTR) -1 /* IMath2::DivFunc */
};

const CInterfaceStubVtbl _IMath2StubVtbl =
{
    &IID_IMath2,
    &IMath2_ServerInfo,
    5,
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
    InnerComponent__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x800025b, /* MIDL Version 8.0.603 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _InnerComponent_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IMath2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMath1ProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _InnerComponent_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IMath2StubVtbl,
    ( CInterfaceStubVtbl *) &_IMath1StubVtbl,
    0
};

PCInterfaceName const _InnerComponent_InterfaceNamesList[] = 
{
    "IMath2",
    "IMath1",
    0
};


#define _InnerComponent_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _InnerComponent, pIID, n)

int __stdcall _InnerComponent_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _InnerComponent, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _InnerComponent, 2, *pIndex )
    
}

const ExtendedProxyFileInfo InnerComponent_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _InnerComponent_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _InnerComponent_StubVtblList,
    (const PCInterfaceName * ) & _InnerComponent_InterfaceNamesList,
    0, /* no delegation */
    & _InnerComponent_IID_Lookup, 
    2,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

