

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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

#ifndef __InnerComponent_h_h__
#define __InnerComponent_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMath1_FWD_DEFINED__
#define __IMath1_FWD_DEFINED__
typedef interface IMath1 IMath1;

#endif 	/* __IMath1_FWD_DEFINED__ */


#ifndef __IMath2_FWD_DEFINED__
#define __IMath2_FWD_DEFINED__
typedef interface IMath2 IMath2;

#endif 	/* __IMath2_FWD_DEFINED__ */


#ifndef __MathComponent_FWD_DEFINED__
#define __MathComponent_FWD_DEFINED__

#ifdef __cplusplus
typedef class MathComponent MathComponent;
#else
typedef struct MathComponent MathComponent;
#endif /* __cplusplus */

#endif 	/* __MathComponent_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IMath1_INTERFACE_DEFINED__
#define __IMath1_INTERFACE_DEFINED__

/* interface IMath1 */
/* [uuid][object] */ 


EXTERN_C const IID IID_IMath1;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0F1D36F4-E836-4881-8558-BB7113C9A45D")
    IMath1 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddFunc( 
            int iFirst,
            int iSecond,
            int *iRes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SubFunc( 
            int iFirst,
            int iSecond,
            int *iRes) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMath1Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMath1 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMath1 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMath1 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddFunc )( 
            IMath1 * This,
            int iFirst,
            int iSecond,
            int *iRes);
        
        HRESULT ( STDMETHODCALLTYPE *SubFunc )( 
            IMath1 * This,
            int iFirst,
            int iSecond,
            int *iRes);
        
        END_INTERFACE
    } IMath1Vtbl;

    interface IMath1
    {
        CONST_VTBL struct IMath1Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMath1_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMath1_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMath1_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMath1_AddFunc(This,iFirst,iSecond,iRes)	\
    ( (This)->lpVtbl -> AddFunc(This,iFirst,iSecond,iRes) ) 

#define IMath1_SubFunc(This,iFirst,iSecond,iRes)	\
    ( (This)->lpVtbl -> SubFunc(This,iFirst,iSecond,iRes) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMath1_INTERFACE_DEFINED__ */


#ifndef __IMath2_INTERFACE_DEFINED__
#define __IMath2_INTERFACE_DEFINED__

/* interface IMath2 */
/* [uuid][object] */ 


EXTERN_C const IID IID_IMath2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2E4C65D7-7EFA-4C79-BF74-81CF97CDB695")
    IMath2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE MulFunc( 
            int iFirst,
            int iSecond,
            int *iRes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DivFunc( 
            int iFirst,
            int iSecond,
            int *iRes) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMath2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMath2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMath2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMath2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *MulFunc )( 
            IMath2 * This,
            int iFirst,
            int iSecond,
            int *iRes);
        
        HRESULT ( STDMETHODCALLTYPE *DivFunc )( 
            IMath2 * This,
            int iFirst,
            int iSecond,
            int *iRes);
        
        END_INTERFACE
    } IMath2Vtbl;

    interface IMath2
    {
        CONST_VTBL struct IMath2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMath2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMath2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMath2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMath2_MulFunc(This,iFirst,iSecond,iRes)	\
    ( (This)->lpVtbl -> MulFunc(This,iFirst,iSecond,iRes) ) 

#define IMath2_DivFunc(This,iFirst,iSecond,iRes)	\
    ( (This)->lpVtbl -> DivFunc(This,iFirst,iSecond,iRes) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMath2_INTERFACE_DEFINED__ */



#ifndef __InnerComponentLib_LIBRARY_DEFINED__
#define __InnerComponentLib_LIBRARY_DEFINED__

/* library InnerComponentLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_InnerComponentLib;

EXTERN_C const CLSID CLSID_MathComponent;

#ifdef __cplusplus

class DECLSPEC_UUID("EA84B271-E211-47BA-9455-45CCB540E64C")
MathComponent;
#endif
#endif /* __InnerComponentLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


