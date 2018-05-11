

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __SampleComDll_h_h__
#define __SampleComDll_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISimple_FWD_DEFINED__
#define __ISimple_FWD_DEFINED__
typedef interface ISimple ISimple;

#endif 	/* __ISimple_FWD_DEFINED__ */


#ifndef __IExample_FWD_DEFINED__
#define __IExample_FWD_DEFINED__
typedef interface IExample IExample;

#endif 	/* __IExample_FWD_DEFINED__ */


#ifndef __SimpleExample_FWD_DEFINED__
#define __SimpleExample_FWD_DEFINED__

#ifdef __cplusplus
typedef class SimpleExample SimpleExample;
#else
typedef struct SimpleExample SimpleExample;
#endif /* __cplusplus */

#endif 	/* __SimpleExample_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ISimple_INTERFACE_DEFINED__
#define __ISimple_INTERFACE_DEFINED__

/* interface ISimple */
/* [uuid][object] */ 


EXTERN_C const IID IID_ISimple;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8B98A3BA-BC7F-4036-87DE-2E3A300DAB46")
    ISimple : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SimpleFunc( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISimpleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISimple * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISimple * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISimple * This);
        
        HRESULT ( STDMETHODCALLTYPE *SimpleFunc )( 
            ISimple * This);
        
        END_INTERFACE
    } ISimpleVtbl;

    interface ISimple
    {
        CONST_VTBL struct ISimpleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISimple_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISimple_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISimple_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISimple_SimpleFunc(This)	\
    ( (This)->lpVtbl -> SimpleFunc(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISimple_INTERFACE_DEFINED__ */


#ifndef __IExample_INTERFACE_DEFINED__
#define __IExample_INTERFACE_DEFINED__

/* interface IExample */
/* [uuid][object] */ 


EXTERN_C const IID IID_IExample;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3E3B1FDA-3601-4377-9A16-70AAEFC9095D")
    IExample : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ExampleFunc( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IExampleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IExample * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IExample * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IExample * This);
        
        HRESULT ( STDMETHODCALLTYPE *ExampleFunc )( 
            IExample * This);
        
        END_INTERFACE
    } IExampleVtbl;

    interface IExample
    {
        CONST_VTBL struct IExampleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExample_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExample_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExample_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExample_ExampleFunc(This)	\
    ( (This)->lpVtbl -> ExampleFunc(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExample_INTERFACE_DEFINED__ */



#ifndef __SampleComDlllib_LIBRARY_DEFINED__
#define __SampleComDlllib_LIBRARY_DEFINED__

/* library SampleComDlllib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_SampleComDlllib;

EXTERN_C const CLSID CLSID_SimpleExample;

#ifdef __cplusplus

class DECLSPEC_UUID("DEFC49F5-F4C0-4574-A204-DC2E0C1FD8E4")
SimpleExample;
#endif
#endif /* __SampleComDlllib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


