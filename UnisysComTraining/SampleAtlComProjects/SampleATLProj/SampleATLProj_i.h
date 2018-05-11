

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Thu May 10 16:40:18 2018
 */
/* Compiler settings for SampleATLProj.idl:
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

#ifndef __SampleATLProj_i_h__
#define __SampleATLProj_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IFirstComponent_FWD_DEFINED__
#define __IFirstComponent_FWD_DEFINED__
typedef interface IFirstComponent IFirstComponent;

#endif 	/* __IFirstComponent_FWD_DEFINED__ */


#ifndef __FirstComponent_FWD_DEFINED__
#define __FirstComponent_FWD_DEFINED__

#ifdef __cplusplus
typedef class FirstComponent FirstComponent;
#else
typedef struct FirstComponent FirstComponent;
#endif /* __cplusplus */

#endif 	/* __FirstComponent_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IFirstComponent_INTERFACE_DEFINED__
#define __IFirstComponent_INTERFACE_DEFINED__

/* interface IFirstComponent */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IFirstComponent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5E70BFC9-2A95-4633-88FC-7915771B3D57")
    IFirstComponent : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddNumbers( 
            /* [in] */ VARIANT theArray,
            /* [out] */ LONG *lResult) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFirstComponentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFirstComponent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFirstComponent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFirstComponent * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFirstComponent * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFirstComponent * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFirstComponent * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFirstComponent * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddNumbers )( 
            IFirstComponent * This,
            /* [in] */ VARIANT theArray,
            /* [out] */ LONG *lResult);
        
        END_INTERFACE
    } IFirstComponentVtbl;

    interface IFirstComponent
    {
        CONST_VTBL struct IFirstComponentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFirstComponent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFirstComponent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFirstComponent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFirstComponent_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFirstComponent_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFirstComponent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFirstComponent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFirstComponent_AddNumbers(This,theArray,lResult)	\
    ( (This)->lpVtbl -> AddNumbers(This,theArray,lResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFirstComponent_INTERFACE_DEFINED__ */



#ifndef __SampleATLProjLib_LIBRARY_DEFINED__
#define __SampleATLProjLib_LIBRARY_DEFINED__

/* library SampleATLProjLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_SampleATLProjLib;

EXTERN_C const CLSID CLSID_FirstComponent;

#ifdef __cplusplus

class DECLSPEC_UUID("07F0CA23-B821-4D47-922C-5B9A3C9352B2")
FirstComponent;
#endif
#endif /* __SampleATLProjLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


