

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for TestServer.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
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

#ifndef __TestServer_i_h__
#define __TestServer_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDemoObj_FWD_DEFINED__
#define __IDemoObj_FWD_DEFINED__
typedef interface IDemoObj IDemoObj;

#endif 	/* __IDemoObj_FWD_DEFINED__ */


#ifndef __DemoObj_FWD_DEFINED__
#define __DemoObj_FWD_DEFINED__

#ifdef __cplusplus
typedef class DemoObj DemoObj;
#else
typedef struct DemoObj DemoObj;
#endif /* __cplusplus */

#endif 	/* __DemoObj_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IDemoObj_INTERFACE_DEFINED__
#define __IDemoObj_INTERFACE_DEFINED__

/* interface IDemoObj */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IDemoObj;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("938cdcdc-6107-45f9-9055-bff1d8f12a53")
    IDemoObj : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ LONG arg1,
            /* [in] */ LONG arg2,
            /* [retval][out] */ LONG *result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Sub( 
            /* [in] */ LONG arg1,
            /* [in] */ LONG arg2,
            /* [retval][out] */ LONG *result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDemoObjVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDemoObj * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDemoObj * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDemoObj * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDemoObj * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDemoObj * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDemoObj * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDemoObj * This,
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
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IDemoObj * This,
            /* [in] */ LONG arg1,
            /* [in] */ LONG arg2,
            /* [retval][out] */ LONG *result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Sub )( 
            IDemoObj * This,
            /* [in] */ LONG arg1,
            /* [in] */ LONG arg2,
            /* [retval][out] */ LONG *result);
        
        END_INTERFACE
    } IDemoObjVtbl;

    interface IDemoObj
    {
        CONST_VTBL struct IDemoObjVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDemoObj_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDemoObj_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDemoObj_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDemoObj_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDemoObj_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDemoObj_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDemoObj_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDemoObj_Add(This,arg1,arg2,result)	\
    ( (This)->lpVtbl -> Add(This,arg1,arg2,result) ) 

#define IDemoObj_Sub(This,arg1,arg2,result)	\
    ( (This)->lpVtbl -> Sub(This,arg1,arg2,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDemoObj_INTERFACE_DEFINED__ */



#ifndef __TestServerLib_LIBRARY_DEFINED__
#define __TestServerLib_LIBRARY_DEFINED__

/* library TestServerLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_TestServerLib;

EXTERN_C const CLSID CLSID_DemoObj;

#ifdef __cplusplus

class DECLSPEC_UUID("4f3dab6c-b986-430f-8551-18e2ec7c9b91")
DemoObj;
#endif
#endif /* __TestServerLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


