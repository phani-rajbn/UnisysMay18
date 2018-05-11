

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IMath1,0x0F1D36F4,0xE836,0x4881,0x85,0x58,0xBB,0x71,0x13,0xC9,0xA4,0x5D);


MIDL_DEFINE_GUID(IID, IID_IMath2,0x2E4C65D7,0x7EFA,0x4C79,0xBF,0x74,0x81,0xCF,0x97,0xCD,0xB6,0x95);


MIDL_DEFINE_GUID(IID, LIBID_InnerComponentLib,0x4235C24B,0xB5DA,0x456D,0x82,0x99,0x13,0xF0,0x88,0xF3,0x38,0xC0);


MIDL_DEFINE_GUID(CLSID, CLSID_MathComponent,0xEA84B271,0xE211,0x47BA,0x94,0x55,0x45,0xCC,0xB5,0x40,0xE6,0x4C);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



