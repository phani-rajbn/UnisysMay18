

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Thu May 10 12:50:34 2018
 */
/* Compiler settings for OuterComponent.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __OuterComponent_h_h__
#define __OuterComponent_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMath3_FWD_DEFINED__
#define __IMath3_FWD_DEFINED__
typedef interface IMath3 IMath3;

#endif 	/* __IMath3_FWD_DEFINED__ */


#ifndef __OuterMathComponent_FWD_DEFINED__
#define __OuterMathComponent_FWD_DEFINED__

#ifdef __cplusplus
typedef class OuterMathComponent OuterMathComponent;
#else
typedef struct OuterMathComponent OuterMathComponent;
#endif /* __cplusplus */

#endif 	/* __OuterMathComponent_FWD_DEFINED__ */


/* header files for imported files */
#include "../InnerComponent/InnerComponent_h.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IMath3_INTERFACE_DEFINED__
#define __IMath3_INTERFACE_DEFINED__

/* interface IMath3 */
/* [uuid][object] */ 


EXTERN_C const IID IID_IMath3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("96E0A7F0-85D7-45B7-A5B8-A3C30B0029B9")
    IMath3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SqrFunc( 
            int iFirst,
            int *iRes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SqrtFunc( 
            int iFirst,
            int *iRes) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMath3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMath3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMath3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMath3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SqrFunc )( 
            IMath3 * This,
            int iFirst,
            int *iRes);
        
        HRESULT ( STDMETHODCALLTYPE *SqrtFunc )( 
            IMath3 * This,
            int iFirst,
            int *iRes);
        
        END_INTERFACE
    } IMath3Vtbl;

    interface IMath3
    {
        CONST_VTBL struct IMath3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMath3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMath3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMath3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMath3_SqrFunc(This,iFirst,iRes)	\
    ( (This)->lpVtbl -> SqrFunc(This,iFirst,iRes) ) 

#define IMath3_SqrtFunc(This,iFirst,iRes)	\
    ( (This)->lpVtbl -> SqrtFunc(This,iFirst,iRes) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMath3_INTERFACE_DEFINED__ */



#ifndef __OuterComponentLib_LIBRARY_DEFINED__
#define __OuterComponentLib_LIBRARY_DEFINED__

/* library OuterComponentLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_OuterComponentLib;

EXTERN_C const CLSID CLSID_OuterMathComponent;

#ifdef __cplusplus

class DECLSPEC_UUID("6E171CCC-C3E4-494B-8D11-BA01724C4F57")
OuterMathComponent;
#endif
#endif /* __OuterComponentLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


