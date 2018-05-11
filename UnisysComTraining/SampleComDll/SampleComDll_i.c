

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_ISimple,0x8B98A3BA,0xBC7F,0x4036,0x87,0xDE,0x2E,0x3A,0x30,0x0D,0xAB,0x46);


MIDL_DEFINE_GUID(IID, IID_IExample,0x3E3B1FDA,0x3601,0x4377,0x9A,0x16,0x70,0xAA,0xEF,0xC9,0x09,0x5D);


MIDL_DEFINE_GUID(IID, LIBID_SampleComDlllib,0x156E3765,0x2E91,0x4C4F,0xB2,0xF4,0x96,0xF2,0x5E,0x2E,0x41,0xAF);


MIDL_DEFINE_GUID(CLSID, CLSID_SimpleExample,0xDEFC49F5,0xF4C0,0x4574,0xA2,0x04,0xDC,0x2E,0x0C,0x1F,0xD8,0xE4);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



