

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Thu May 10 15:22:31 2018
 */
/* Compiler settings for Aggre_OuterComponent.idl:
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

#ifndef __Aggre_OuterComponent_h_h__
#define __Aggre_OuterComponent_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IAggreOuter_FWD_DEFINED__
#define __IAggreOuter_FWD_DEFINED__
typedef interface IAggreOuter IAggreOuter;

#endif 	/* __IAggreOuter_FWD_DEFINED__ */


#ifndef __AggreOuterComponent_FWD_DEFINED__
#define __AggreOuterComponent_FWD_DEFINED__

#ifdef __cplusplus
typedef class AggreOuterComponent AggreOuterComponent;
#else
typedef struct AggreOuterComponent AggreOuterComponent;
#endif /* __cplusplus */

#endif 	/* __AggreOuterComponent_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IAggreOuter_INTERFACE_DEFINED__
#define __IAggreOuter_INTERFACE_DEFINED__

/* interface IAggreOuter */
/* [uuid][object] */ 


EXTERN_C const IID IID_IAggreOuter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7D77A953-5C99-4AA0-926C-5EF215E212C1")
    IAggreOuter : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OuterMethod( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAggreOuterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAggreOuter * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAggreOuter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAggreOuter * This);
        
        HRESULT ( STDMETHODCALLTYPE *OuterMethod )( 
            IAggreOuter * This);
        
        END_INTERFACE
    } IAggreOuterVtbl;

    interface IAggreOuter
    {
        CONST_VTBL struct IAggreOuterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAggreOuter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAggreOuter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAggreOuter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAggreOuter_OuterMethod(This)	\
    ( (This)->lpVtbl -> OuterMethod(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAggreOuter_INTERFACE_DEFINED__ */



#ifndef __AggreOuterComponentLib_LIBRARY_DEFINED__
#define __AggreOuterComponentLib_LIBRARY_DEFINED__

/* library AggreOuterComponentLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_AggreOuterComponentLib;

EXTERN_C const CLSID CLSID_AggreOuterComponent;

#ifdef __cplusplus

class DECLSPEC_UUID("131F53C0-C3E3-4A4F-83DE-02A8C1F431B8")
AggreOuterComponent;
#endif
#endif /* __AggreOuterComponentLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


