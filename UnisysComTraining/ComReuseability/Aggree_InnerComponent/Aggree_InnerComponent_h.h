

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Thu May 10 14:44:04 2018
 */
/* Compiler settings for Aggree_InnerComponent.idl:
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

#ifndef __Aggree_InnerComponent_h_h__
#define __Aggree_InnerComponent_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IAggreInner_FWD_DEFINED__
#define __IAggreInner_FWD_DEFINED__
typedef interface IAggreInner IAggreInner;

#endif 	/* __IAggreInner_FWD_DEFINED__ */


#ifndef __AggreInnerComponent_FWD_DEFINED__
#define __AggreInnerComponent_FWD_DEFINED__

#ifdef __cplusplus
typedef class AggreInnerComponent AggreInnerComponent;
#else
typedef struct AggreInnerComponent AggreInnerComponent;
#endif /* __cplusplus */

#endif 	/* __AggreInnerComponent_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IAggreInner_INTERFACE_DEFINED__
#define __IAggreInner_INTERFACE_DEFINED__

/* interface IAggreInner */
/* [uuid][object] */ 


EXTERN_C const IID IID_IAggreInner;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0A155255-F7D2-48BD-8FBF-5E1231EC6575")
    IAggreInner : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InnerMethod( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAggreInnerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAggreInner * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAggreInner * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAggreInner * This);
        
        HRESULT ( STDMETHODCALLTYPE *InnerMethod )( 
            IAggreInner * This);
        
        END_INTERFACE
    } IAggreInnerVtbl;

    interface IAggreInner
    {
        CONST_VTBL struct IAggreInnerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAggreInner_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAggreInner_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAggreInner_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAggreInner_InnerMethod(This)	\
    ( (This)->lpVtbl -> InnerMethod(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAggreInner_INTERFACE_DEFINED__ */



#ifndef __AggreInnerComponentLib_LIBRARY_DEFINED__
#define __AggreInnerComponentLib_LIBRARY_DEFINED__

/* library AggreInnerComponentLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_AggreInnerComponentLib;

EXTERN_C const CLSID CLSID_AggreInnerComponent;

#ifdef __cplusplus

class DECLSPEC_UUID("CE27CFA9-68ED-4EAC-BF26-A55A5B94D164")
AggreInnerComponent;
#endif
#endif /* __AggreInnerComponentLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


