

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 05:14:07 2038
 */
/* Compiler settings for C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\\DIA SDK\idl\dia2.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
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

#ifndef __dia2_h__
#define __dia2_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDiaLoadCallback_FWD_DEFINED__
#define __IDiaLoadCallback_FWD_DEFINED__
typedef interface IDiaLoadCallback IDiaLoadCallback;

#endif 	/* __IDiaLoadCallback_FWD_DEFINED__ */


#ifndef __IDiaLoadCallback2_FWD_DEFINED__
#define __IDiaLoadCallback2_FWD_DEFINED__
typedef interface IDiaLoadCallback2 IDiaLoadCallback2;

#endif 	/* __IDiaLoadCallback2_FWD_DEFINED__ */


#ifndef __IDiaReadExeAtOffsetCallback_FWD_DEFINED__
#define __IDiaReadExeAtOffsetCallback_FWD_DEFINED__
typedef interface IDiaReadExeAtOffsetCallback IDiaReadExeAtOffsetCallback;

#endif 	/* __IDiaReadExeAtOffsetCallback_FWD_DEFINED__ */


#ifndef __IDiaReadExeAtRVACallback_FWD_DEFINED__
#define __IDiaReadExeAtRVACallback_FWD_DEFINED__
typedef interface IDiaReadExeAtRVACallback IDiaReadExeAtRVACallback;

#endif 	/* __IDiaReadExeAtRVACallback_FWD_DEFINED__ */


#ifndef __IDiaDataSource_FWD_DEFINED__
#define __IDiaDataSource_FWD_DEFINED__
typedef interface IDiaDataSource IDiaDataSource;

#endif 	/* __IDiaDataSource_FWD_DEFINED__ */


#ifndef __IDiaEnumSymbols_FWD_DEFINED__
#define __IDiaEnumSymbols_FWD_DEFINED__
typedef interface IDiaEnumSymbols IDiaEnumSymbols;

#endif 	/* __IDiaEnumSymbols_FWD_DEFINED__ */


#ifndef __IDiaEnumSymbolsByAddr_FWD_DEFINED__
#define __IDiaEnumSymbolsByAddr_FWD_DEFINED__
typedef interface IDiaEnumSymbolsByAddr IDiaEnumSymbolsByAddr;

#endif 	/* __IDiaEnumSymbolsByAddr_FWD_DEFINED__ */


#ifndef __IDiaEnumSourceFiles_FWD_DEFINED__
#define __IDiaEnumSourceFiles_FWD_DEFINED__
typedef interface IDiaEnumSourceFiles IDiaEnumSourceFiles;

#endif 	/* __IDiaEnumSourceFiles_FWD_DEFINED__ */


#ifndef __IDiaEnumInputAssemblyFiles_FWD_DEFINED__
#define __IDiaEnumInputAssemblyFiles_FWD_DEFINED__
typedef interface IDiaEnumInputAssemblyFiles IDiaEnumInputAssemblyFiles;

#endif 	/* __IDiaEnumInputAssemblyFiles_FWD_DEFINED__ */


#ifndef __IDiaEnumLineNumbers_FWD_DEFINED__
#define __IDiaEnumLineNumbers_FWD_DEFINED__
typedef interface IDiaEnumLineNumbers IDiaEnumLineNumbers;

#endif 	/* __IDiaEnumLineNumbers_FWD_DEFINED__ */


#ifndef __IDiaEnumInjectedSources_FWD_DEFINED__
#define __IDiaEnumInjectedSources_FWD_DEFINED__
typedef interface IDiaEnumInjectedSources IDiaEnumInjectedSources;

#endif 	/* __IDiaEnumInjectedSources_FWD_DEFINED__ */


#ifndef __IDiaEnumSegments_FWD_DEFINED__
#define __IDiaEnumSegments_FWD_DEFINED__
typedef interface IDiaEnumSegments IDiaEnumSegments;

#endif 	/* __IDiaEnumSegments_FWD_DEFINED__ */


#ifndef __IDiaEnumSectionContribs_FWD_DEFINED__
#define __IDiaEnumSectionContribs_FWD_DEFINED__
typedef interface IDiaEnumSectionContribs IDiaEnumSectionContribs;

#endif 	/* __IDiaEnumSectionContribs_FWD_DEFINED__ */


#ifndef __IDiaEnumFrameData_FWD_DEFINED__
#define __IDiaEnumFrameData_FWD_DEFINED__
typedef interface IDiaEnumFrameData IDiaEnumFrameData;

#endif 	/* __IDiaEnumFrameData_FWD_DEFINED__ */


#ifndef __IDiaEnumDebugStreamData_FWD_DEFINED__
#define __IDiaEnumDebugStreamData_FWD_DEFINED__
typedef interface IDiaEnumDebugStreamData IDiaEnumDebugStreamData;

#endif 	/* __IDiaEnumDebugStreamData_FWD_DEFINED__ */


#ifndef __IDiaEnumDebugStreams_FWD_DEFINED__
#define __IDiaEnumDebugStreams_FWD_DEFINED__
typedef interface IDiaEnumDebugStreams IDiaEnumDebugStreams;

#endif 	/* __IDiaEnumDebugStreams_FWD_DEFINED__ */


#ifndef __IDiaAddressMap_FWD_DEFINED__
#define __IDiaAddressMap_FWD_DEFINED__
typedef interface IDiaAddressMap IDiaAddressMap;

#endif 	/* __IDiaAddressMap_FWD_DEFINED__ */


#ifndef __IDiaSession_FWD_DEFINED__
#define __IDiaSession_FWD_DEFINED__
typedef interface IDiaSession IDiaSession;

#endif 	/* __IDiaSession_FWD_DEFINED__ */


#ifndef __IDiaSymbol_FWD_DEFINED__
#define __IDiaSymbol_FWD_DEFINED__
typedef interface IDiaSymbol IDiaSymbol;

#endif 	/* __IDiaSymbol_FWD_DEFINED__ */


#ifndef __IDiaSymbol2_FWD_DEFINED__
#define __IDiaSymbol2_FWD_DEFINED__
typedef interface IDiaSymbol2 IDiaSymbol2;

#endif 	/* __IDiaSymbol2_FWD_DEFINED__ */


#ifndef __IDiaSymbol3_FWD_DEFINED__
#define __IDiaSymbol3_FWD_DEFINED__
typedef interface IDiaSymbol3 IDiaSymbol3;

#endif 	/* __IDiaSymbol3_FWD_DEFINED__ */


#ifndef __IDiaSymbol4_FWD_DEFINED__
#define __IDiaSymbol4_FWD_DEFINED__
typedef interface IDiaSymbol4 IDiaSymbol4;

#endif 	/* __IDiaSymbol4_FWD_DEFINED__ */


#ifndef __IDiaSymbol5_FWD_DEFINED__
#define __IDiaSymbol5_FWD_DEFINED__
typedef interface IDiaSymbol5 IDiaSymbol5;

#endif 	/* __IDiaSymbol5_FWD_DEFINED__ */


#ifndef __IDiaSymbol6_FWD_DEFINED__
#define __IDiaSymbol6_FWD_DEFINED__
typedef interface IDiaSymbol6 IDiaSymbol6;

#endif 	/* __IDiaSymbol6_FWD_DEFINED__ */


#ifndef __IDiaSymbol7_FWD_DEFINED__
#define __IDiaSymbol7_FWD_DEFINED__
typedef interface IDiaSymbol7 IDiaSymbol7;

#endif 	/* __IDiaSymbol7_FWD_DEFINED__ */


#ifndef __IDiaSymbol8_FWD_DEFINED__
#define __IDiaSymbol8_FWD_DEFINED__
typedef interface IDiaSymbol8 IDiaSymbol8;

#endif 	/* __IDiaSymbol8_FWD_DEFINED__ */


#ifndef __IDiaSourceFile_FWD_DEFINED__
#define __IDiaSourceFile_FWD_DEFINED__
typedef interface IDiaSourceFile IDiaSourceFile;

#endif 	/* __IDiaSourceFile_FWD_DEFINED__ */


#ifndef __IDiaInputAssemblyFile_FWD_DEFINED__
#define __IDiaInputAssemblyFile_FWD_DEFINED__
typedef interface IDiaInputAssemblyFile IDiaInputAssemblyFile;

#endif 	/* __IDiaInputAssemblyFile_FWD_DEFINED__ */


#ifndef __IDiaLineNumber_FWD_DEFINED__
#define __IDiaLineNumber_FWD_DEFINED__
typedef interface IDiaLineNumber IDiaLineNumber;

#endif 	/* __IDiaLineNumber_FWD_DEFINED__ */


#ifndef __IDiaSectionContrib_FWD_DEFINED__
#define __IDiaSectionContrib_FWD_DEFINED__
typedef interface IDiaSectionContrib IDiaSectionContrib;

#endif 	/* __IDiaSectionContrib_FWD_DEFINED__ */


#ifndef __IDiaSegment_FWD_DEFINED__
#define __IDiaSegment_FWD_DEFINED__
typedef interface IDiaSegment IDiaSegment;

#endif 	/* __IDiaSegment_FWD_DEFINED__ */


#ifndef __IDiaInjectedSource_FWD_DEFINED__
#define __IDiaInjectedSource_FWD_DEFINED__
typedef interface IDiaInjectedSource IDiaInjectedSource;

#endif 	/* __IDiaInjectedSource_FWD_DEFINED__ */


#ifndef __IDiaStackWalkFrame_FWD_DEFINED__
#define __IDiaStackWalkFrame_FWD_DEFINED__
typedef interface IDiaStackWalkFrame IDiaStackWalkFrame;

#endif 	/* __IDiaStackWalkFrame_FWD_DEFINED__ */


#ifndef __IDiaFrameData_FWD_DEFINED__
#define __IDiaFrameData_FWD_DEFINED__
typedef interface IDiaFrameData IDiaFrameData;

#endif 	/* __IDiaFrameData_FWD_DEFINED__ */


#ifndef __IDiaImageData_FWD_DEFINED__
#define __IDiaImageData_FWD_DEFINED__
typedef interface IDiaImageData IDiaImageData;

#endif 	/* __IDiaImageData_FWD_DEFINED__ */


#ifndef __IDiaTable_FWD_DEFINED__
#define __IDiaTable_FWD_DEFINED__
typedef interface IDiaTable IDiaTable;

#endif 	/* __IDiaTable_FWD_DEFINED__ */


#ifndef __IDiaEnumTables_FWD_DEFINED__
#define __IDiaEnumTables_FWD_DEFINED__
typedef interface IDiaEnumTables IDiaEnumTables;

#endif 	/* __IDiaEnumTables_FWD_DEFINED__ */


#ifndef __DiaSource_FWD_DEFINED__
#define __DiaSource_FWD_DEFINED__

#ifdef __cplusplus
typedef class DiaSource DiaSource;
#else
typedef struct DiaSource DiaSource;
#endif /* __cplusplus */

#endif 	/* __DiaSource_FWD_DEFINED__ */


#ifndef __DiaSourceAlt_FWD_DEFINED__
#define __DiaSourceAlt_FWD_DEFINED__

#ifdef __cplusplus
typedef class DiaSourceAlt DiaSourceAlt;
#else
typedef struct DiaSourceAlt DiaSourceAlt;
#endif /* __cplusplus */

#endif 	/* __DiaSourceAlt_FWD_DEFINED__ */


#ifndef __DiaStackWalker_FWD_DEFINED__
#define __DiaStackWalker_FWD_DEFINED__

#ifdef __cplusplus
typedef class DiaStackWalker DiaStackWalker;
#else
typedef struct DiaStackWalker DiaStackWalker;
#endif /* __cplusplus */

#endif 	/* __DiaStackWalker_FWD_DEFINED__ */


#ifndef __IDiaSectionContrib_FWD_DEFINED__
#define __IDiaSectionContrib_FWD_DEFINED__
typedef interface IDiaSectionContrib IDiaSectionContrib;

#endif 	/* __IDiaSectionContrib_FWD_DEFINED__ */


#ifndef __IDiaEnumSectionContribs_FWD_DEFINED__
#define __IDiaEnumSectionContribs_FWD_DEFINED__
typedef interface IDiaEnumSectionContribs IDiaEnumSectionContribs;

#endif 	/* __IDiaEnumSectionContribs_FWD_DEFINED__ */


#ifndef __IDiaSymbol_FWD_DEFINED__
#define __IDiaSymbol_FWD_DEFINED__
typedef interface IDiaSymbol IDiaSymbol;

#endif 	/* __IDiaSymbol_FWD_DEFINED__ */


#ifndef __IDiaSymbol2_FWD_DEFINED__
#define __IDiaSymbol2_FWD_DEFINED__
typedef interface IDiaSymbol2 IDiaSymbol2;

#endif 	/* __IDiaSymbol2_FWD_DEFINED__ */


#ifndef __IDiaSymbol3_FWD_DEFINED__
#define __IDiaSymbol3_FWD_DEFINED__
typedef interface IDiaSymbol3 IDiaSymbol3;

#endif 	/* __IDiaSymbol3_FWD_DEFINED__ */


#ifndef __IDiaSymbol4_FWD_DEFINED__
#define __IDiaSymbol4_FWD_DEFINED__
typedef interface IDiaSymbol4 IDiaSymbol4;

#endif 	/* __IDiaSymbol4_FWD_DEFINED__ */


#ifndef __IDiaSymbol5_FWD_DEFINED__
#define __IDiaSymbol5_FWD_DEFINED__
typedef interface IDiaSymbol5 IDiaSymbol5;

#endif 	/* __IDiaSymbol5_FWD_DEFINED__ */


#ifndef __IDiaSymbol6_FWD_DEFINED__
#define __IDiaSymbol6_FWD_DEFINED__
typedef interface IDiaSymbol6 IDiaSymbol6;

#endif 	/* __IDiaSymbol6_FWD_DEFINED__ */


#ifndef __IDiaSymbol7_FWD_DEFINED__
#define __IDiaSymbol7_FWD_DEFINED__
typedef interface IDiaSymbol7 IDiaSymbol7;

#endif 	/* __IDiaSymbol7_FWD_DEFINED__ */


#ifndef __IDiaSymbol8_FWD_DEFINED__
#define __IDiaSymbol8_FWD_DEFINED__
typedef interface IDiaSymbol8 IDiaSymbol8;

#endif 	/* __IDiaSymbol8_FWD_DEFINED__ */


#ifndef __IDiaPropertyStorage_FWD_DEFINED__
#define __IDiaPropertyStorage_FWD_DEFINED__
typedef interface IDiaPropertyStorage IDiaPropertyStorage;

#endif 	/* __IDiaPropertyStorage_FWD_DEFINED__ */


#ifndef __IDiaStackFrame_FWD_DEFINED__
#define __IDiaStackFrame_FWD_DEFINED__
typedef interface IDiaStackFrame IDiaStackFrame;

#endif 	/* __IDiaStackFrame_FWD_DEFINED__ */


#ifndef __IDiaEnumStackFrames_FWD_DEFINED__
#define __IDiaEnumStackFrames_FWD_DEFINED__
typedef interface IDiaEnumStackFrames IDiaEnumStackFrames;

#endif 	/* __IDiaEnumStackFrames_FWD_DEFINED__ */


#ifndef __IDiaStackWalkHelper_FWD_DEFINED__
#define __IDiaStackWalkHelper_FWD_DEFINED__
typedef interface IDiaStackWalkHelper IDiaStackWalkHelper;

#endif 	/* __IDiaStackWalkHelper_FWD_DEFINED__ */


#ifndef __IDiaStackWalker_FWD_DEFINED__
#define __IDiaStackWalker_FWD_DEFINED__
typedef interface IDiaStackWalker IDiaStackWalker;

#endif 	/* __IDiaStackWalker_FWD_DEFINED__ */


#ifndef __IDiaStackWalkHelper2_FWD_DEFINED__
#define __IDiaStackWalkHelper2_FWD_DEFINED__
typedef interface IDiaStackWalkHelper2 IDiaStackWalkHelper2;

#endif 	/* __IDiaStackWalkHelper2_FWD_DEFINED__ */


#ifndef __IDiaStackWalker2_FWD_DEFINED__
#define __IDiaStackWalker2_FWD_DEFINED__
typedef interface IDiaStackWalker2 IDiaStackWalker2;

#endif 	/* __IDiaStackWalker2_FWD_DEFINED__ */


/* header files for imported files */
#include "objidl.h"
#include "oaidl.h"
#include "propidl.h"
#include "cvconst.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_dia2_0000_0000 */
/* [local] */ 


enum NameSearchOptions
    {
        nsNone	= 0,
        nsfCaseSensitive	= 0x1,
        nsfCaseInsensitive	= 0x2,
        nsfFNameExt	= 0x4,
        nsfRegularExpression	= 0x8,
        nsfUndecoratedName	= 0x10,
        nsCaseSensitive	= nsfCaseSensitive,
        nsCaseInsensitive	= nsfCaseInsensitive,
        nsFNameExt	= ( nsfCaseInsensitive | nsfFNameExt ) ,
        nsRegularExpression	= ( nsfRegularExpression | nsfCaseSensitive ) ,
        nsCaseInRegularExpression	= ( nsfRegularExpression | nsfCaseInsensitive ) 
    } ;

enum __MIDL___MIDL_itf_dia2_0000_0000_0001
    {
        E_PDB_OK	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )( LONG  )0x6d << 16 )  )  | ( unsigned long  )1 ) ),
        E_PDB_USAGE	= ( E_PDB_OK + 1 ) ,
        E_PDB_OUT_OF_MEMORY	= ( E_PDB_USAGE + 1 ) ,
        E_PDB_FILE_SYSTEM	= ( E_PDB_OUT_OF_MEMORY + 1 ) ,
        E_PDB_NOT_FOUND	= ( E_PDB_FILE_SYSTEM + 1 ) ,
        E_PDB_INVALID_SIG	= ( E_PDB_NOT_FOUND + 1 ) ,
        E_PDB_INVALID_AGE	= ( E_PDB_INVALID_SIG + 1 ) ,
        E_PDB_PRECOMP_REQUIRED	= ( E_PDB_INVALID_AGE + 1 ) ,
        E_PDB_OUT_OF_TI	= ( E_PDB_PRECOMP_REQUIRED + 1 ) ,
        E_PDB_NOT_IMPLEMENTED	= ( E_PDB_OUT_OF_TI + 1 ) ,
        E_PDB_V1_PDB	= ( E_PDB_NOT_IMPLEMENTED + 1 ) ,
        E_PDB_FORMAT	= ( E_PDB_V1_PDB + 1 ) ,
        E_PDB_LIMIT	= ( E_PDB_FORMAT + 1 ) ,
        E_PDB_CORRUPT	= ( E_PDB_LIMIT + 1 ) ,
        E_PDB_TI16	= ( E_PDB_CORRUPT + 1 ) ,
        E_PDB_ACCESS_DENIED	= ( E_PDB_TI16 + 1 ) ,
        E_PDB_ILLEGAL_TYPE_EDIT	= ( E_PDB_ACCESS_DENIED + 1 ) ,
        E_PDB_INVALID_EXECUTABLE	= ( E_PDB_ILLEGAL_TYPE_EDIT + 1 ) ,
        E_PDB_DBG_NOT_FOUND	= ( E_PDB_INVALID_EXECUTABLE + 1 ) ,
        E_PDB_NO_DEBUG_INFO	= ( E_PDB_DBG_NOT_FOUND + 1 ) ,
        E_PDB_INVALID_EXE_TIMESTAMP	= ( E_PDB_NO_DEBUG_INFO + 1 ) ,
        E_PDB_RESERVED	= ( E_PDB_INVALID_EXE_TIMESTAMP + 1 ) ,
        E_PDB_DEBUG_INFO_NOT_IN_PDB	= ( E_PDB_RESERVED + 1 ) ,
        E_PDB_SYMSRV_BAD_CACHE_PATH	= ( E_PDB_DEBUG_INFO_NOT_IN_PDB + 1 ) ,
        E_PDB_SYMSRV_CACHE_FULL	= ( E_PDB_SYMSRV_BAD_CACHE_PATH + 1 ) ,
        E_PDB_OBJECT_DISPOSED	= ( E_PDB_SYMSRV_CACHE_FULL + 1 ) ,
        E_PDB_MAX	= ( E_PDB_OBJECT_DISPOSED + 1 ) 
    } ;
typedef void ( __cdecl *PfnPDBDebugDirV )( 
    BOOL __MIDL____MIDL_itf_dia2_0000_00000000,
    void *__MIDL____MIDL_itf_dia2_0000_00000001);




















extern RPC_IF_HANDLE __MIDL_itf_dia2_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dia2_0000_0000_v0_0_s_ifspec;

#ifndef __IDiaLoadCallback_INTERFACE_DEFINED__
#define __IDiaLoadCallback_INTERFACE_DEFINED__

/* interface IDiaLoadCallback */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaLoadCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C32ADB82-73F4-421b-95D5-A4706EDF5DBE")
    IDiaLoadCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE NotifyDebugDir( 
            /* [in] */ BOOL fExecutable,
            /* [in] */ DWORD cbData,
            /* [size_is][in] */ BYTE *pbData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifyOpenDBG( 
            /* [in] */ LPCOLESTR dbgPath,
            /* [in] */ HRESULT resultCode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifyOpenPDB( 
            /* [in] */ LPCOLESTR pdbPath,
            /* [in] */ HRESULT resultCode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RestrictRegistryAccess( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RestrictSymbolServerAccess( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaLoadCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaLoadCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaLoadCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaLoadCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *NotifyDebugDir )( 
            IDiaLoadCallback * This,
            /* [in] */ BOOL fExecutable,
            /* [in] */ DWORD cbData,
            /* [size_is][in] */ BYTE *pbData);
        
        HRESULT ( STDMETHODCALLTYPE *NotifyOpenDBG )( 
            IDiaLoadCallback * This,
            /* [in] */ LPCOLESTR dbgPath,
            /* [in] */ HRESULT resultCode);
        
        HRESULT ( STDMETHODCALLTYPE *NotifyOpenPDB )( 
            IDiaLoadCallback * This,
            /* [in] */ LPCOLESTR pdbPath,
            /* [in] */ HRESULT resultCode);
        
        HRESULT ( STDMETHODCALLTYPE *RestrictRegistryAccess )( 
            IDiaLoadCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *RestrictSymbolServerAccess )( 
            IDiaLoadCallback * This);
        
        END_INTERFACE
    } IDiaLoadCallbackVtbl;

    interface IDiaLoadCallback
    {
        CONST_VTBL struct IDiaLoadCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaLoadCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaLoadCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaLoadCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaLoadCallback_NotifyDebugDir(This,fExecutable,cbData,pbData)	\
    ( (This)->lpVtbl -> NotifyDebugDir(This,fExecutable,cbData,pbData) ) 

#define IDiaLoadCallback_NotifyOpenDBG(This,dbgPath,resultCode)	\
    ( (This)->lpVtbl -> NotifyOpenDBG(This,dbgPath,resultCode) ) 

#define IDiaLoadCallback_NotifyOpenPDB(This,pdbPath,resultCode)	\
    ( (This)->lpVtbl -> NotifyOpenPDB(This,pdbPath,resultCode) ) 

#define IDiaLoadCallback_RestrictRegistryAccess(This)	\
    ( (This)->lpVtbl -> RestrictRegistryAccess(This) ) 

#define IDiaLoadCallback_RestrictSymbolServerAccess(This)	\
    ( (This)->lpVtbl -> RestrictSymbolServerAccess(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaLoadCallback_INTERFACE_DEFINED__ */


#ifndef __IDiaLoadCallback2_INTERFACE_DEFINED__
#define __IDiaLoadCallback2_INTERFACE_DEFINED__

/* interface IDiaLoadCallback2 */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaLoadCallback2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4688a074-5a4d-4486-aea8-7b90711d9f7c")
    IDiaLoadCallback2 : public IDiaLoadCallback
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RestrictOriginalPathAccess( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RestrictReferencePathAccess( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RestrictDBGAccess( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RestrictSystemRootAccess( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaLoadCallback2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaLoadCallback2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaLoadCallback2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaLoadCallback2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *NotifyDebugDir )( 
            IDiaLoadCallback2 * This,
            /* [in] */ BOOL fExecutable,
            /* [in] */ DWORD cbData,
            /* [size_is][in] */ BYTE *pbData);
        
        HRESULT ( STDMETHODCALLTYPE *NotifyOpenDBG )( 
            IDiaLoadCallback2 * This,
            /* [in] */ LPCOLESTR dbgPath,
            /* [in] */ HRESULT resultCode);
        
        HRESULT ( STDMETHODCALLTYPE *NotifyOpenPDB )( 
            IDiaLoadCallback2 * This,
            /* [in] */ LPCOLESTR pdbPath,
            /* [in] */ HRESULT resultCode);
        
        HRESULT ( STDMETHODCALLTYPE *RestrictRegistryAccess )( 
            IDiaLoadCallback2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *RestrictSymbolServerAccess )( 
            IDiaLoadCallback2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *RestrictOriginalPathAccess )( 
            IDiaLoadCallback2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *RestrictReferencePathAccess )( 
            IDiaLoadCallback2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *RestrictDBGAccess )( 
            IDiaLoadCallback2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *RestrictSystemRootAccess )( 
            IDiaLoadCallback2 * This);
        
        END_INTERFACE
    } IDiaLoadCallback2Vtbl;

    interface IDiaLoadCallback2
    {
        CONST_VTBL struct IDiaLoadCallback2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaLoadCallback2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaLoadCallback2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaLoadCallback2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaLoadCallback2_NotifyDebugDir(This,fExecutable,cbData,pbData)	\
    ( (This)->lpVtbl -> NotifyDebugDir(This,fExecutable,cbData,pbData) ) 

#define IDiaLoadCallback2_NotifyOpenDBG(This,dbgPath,resultCode)	\
    ( (This)->lpVtbl -> NotifyOpenDBG(This,dbgPath,resultCode) ) 

#define IDiaLoadCallback2_NotifyOpenPDB(This,pdbPath,resultCode)	\
    ( (This)->lpVtbl -> NotifyOpenPDB(This,pdbPath,resultCode) ) 

#define IDiaLoadCallback2_RestrictRegistryAccess(This)	\
    ( (This)->lpVtbl -> RestrictRegistryAccess(This) ) 

#define IDiaLoadCallback2_RestrictSymbolServerAccess(This)	\
    ( (This)->lpVtbl -> RestrictSymbolServerAccess(This) ) 


#define IDiaLoadCallback2_RestrictOriginalPathAccess(This)	\
    ( (This)->lpVtbl -> RestrictOriginalPathAccess(This) ) 

#define IDiaLoadCallback2_RestrictReferencePathAccess(This)	\
    ( (This)->lpVtbl -> RestrictReferencePathAccess(This) ) 

#define IDiaLoadCallback2_RestrictDBGAccess(This)	\
    ( (This)->lpVtbl -> RestrictDBGAccess(This) ) 

#define IDiaLoadCallback2_RestrictSystemRootAccess(This)	\
    ( (This)->lpVtbl -> RestrictSystemRootAccess(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaLoadCallback2_INTERFACE_DEFINED__ */


#ifndef __IDiaReadExeAtOffsetCallback_INTERFACE_DEFINED__
#define __IDiaReadExeAtOffsetCallback_INTERFACE_DEFINED__

/* interface IDiaReadExeAtOffsetCallback */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaReadExeAtOffsetCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("587A461C-B80B-4f54-9194-5032589A6319")
    IDiaReadExeAtOffsetCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReadExecutableAt( 
            /* [in] */ DWORDLONG fileOffset,
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaReadExeAtOffsetCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaReadExeAtOffsetCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaReadExeAtOffsetCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaReadExeAtOffsetCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *ReadExecutableAt )( 
            IDiaReadExeAtOffsetCallback * This,
            /* [in] */ DWORDLONG fileOffset,
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData);
        
        END_INTERFACE
    } IDiaReadExeAtOffsetCallbackVtbl;

    interface IDiaReadExeAtOffsetCallback
    {
        CONST_VTBL struct IDiaReadExeAtOffsetCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaReadExeAtOffsetCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaReadExeAtOffsetCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaReadExeAtOffsetCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaReadExeAtOffsetCallback_ReadExecutableAt(This,fileOffset,cbData,pcbData,pbData)	\
    ( (This)->lpVtbl -> ReadExecutableAt(This,fileOffset,cbData,pcbData,pbData) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaReadExeAtOffsetCallback_INTERFACE_DEFINED__ */


#ifndef __IDiaReadExeAtRVACallback_INTERFACE_DEFINED__
#define __IDiaReadExeAtRVACallback_INTERFACE_DEFINED__

/* interface IDiaReadExeAtRVACallback */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaReadExeAtRVACallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8E3F80CA-7517-432a-BA07-285134AAEA8E")
    IDiaReadExeAtRVACallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReadExecutableAtRVA( 
            /* [in] */ DWORD relativeVirtualAddress,
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaReadExeAtRVACallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaReadExeAtRVACallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaReadExeAtRVACallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaReadExeAtRVACallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *ReadExecutableAtRVA )( 
            IDiaReadExeAtRVACallback * This,
            /* [in] */ DWORD relativeVirtualAddress,
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData);
        
        END_INTERFACE
    } IDiaReadExeAtRVACallbackVtbl;

    interface IDiaReadExeAtRVACallback
    {
        CONST_VTBL struct IDiaReadExeAtRVACallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaReadExeAtRVACallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaReadExeAtRVACallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaReadExeAtRVACallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaReadExeAtRVACallback_ReadExecutableAtRVA(This,relativeVirtualAddress,cbData,pcbData,pbData)	\
    ( (This)->lpVtbl -> ReadExecutableAtRVA(This,relativeVirtualAddress,cbData,pcbData,pbData) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaReadExeAtRVACallback_INTERFACE_DEFINED__ */


#ifndef __IDiaDataSource_INTERFACE_DEFINED__
#define __IDiaDataSource_INTERFACE_DEFINED__

/* interface IDiaDataSource */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaDataSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("79F1BB5F-B66E-48e5-B6A9-1545C323CA3D")
    IDiaDataSource : public IUnknown
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_lastError( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE loadDataFromPdb( 
            /* [in] */ LPCOLESTR pdbPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE loadAndValidateDataFromPdb( 
            /* [in] */ LPCOLESTR pdbPath,
            /* [in] */ GUID *pcsig70,
            /* [in] */ DWORD sig,
            /* [in] */ DWORD age) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE loadDataForExe( 
            /* [in] */ LPCOLESTR executable,
            /* [in] */ LPCOLESTR searchPath,
            /* [in] */ IUnknown *pCallback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE loadDataFromIStream( 
            /* [in] */ IStream *pIStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE openSession( 
            /* [out] */ IDiaSession **ppSession) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE loadDataFromCodeViewInfo( 
            /* [in] */ LPCOLESTR executable,
            /* [in] */ LPCOLESTR searchPath,
            /* [in] */ DWORD cbCvInfo,
            /* [size_is][in] */ BYTE *pbCvInfo,
            /* [in] */ IUnknown *pCallback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE loadDataFromMiscInfo( 
            /* [in] */ LPCOLESTR executable,
            /* [in] */ LPCOLESTR searchPath,
            /* [in] */ DWORD timeStampExe,
            /* [in] */ DWORD timeStampDbg,
            /* [in] */ DWORD sizeOfExe,
            /* [in] */ DWORD cbMiscInfo,
            /* [size_is][in] */ BYTE *pbMiscInfo,
            /* [in] */ IUnknown *pCallback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaDataSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaDataSource * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaDataSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaDataSource * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lastError )( 
            IDiaDataSource * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *loadDataFromPdb )( 
            IDiaDataSource * This,
            /* [in] */ LPCOLESTR pdbPath);
        
        HRESULT ( STDMETHODCALLTYPE *loadAndValidateDataFromPdb )( 
            IDiaDataSource * This,
            /* [in] */ LPCOLESTR pdbPath,
            /* [in] */ GUID *pcsig70,
            /* [in] */ DWORD sig,
            /* [in] */ DWORD age);
        
        HRESULT ( STDMETHODCALLTYPE *loadDataForExe )( 
            IDiaDataSource * This,
            /* [in] */ LPCOLESTR executable,
            /* [in] */ LPCOLESTR searchPath,
            /* [in] */ IUnknown *pCallback);
        
        HRESULT ( STDMETHODCALLTYPE *loadDataFromIStream )( 
            IDiaDataSource * This,
            /* [in] */ IStream *pIStream);
        
        HRESULT ( STDMETHODCALLTYPE *openSession )( 
            IDiaDataSource * This,
            /* [out] */ IDiaSession **ppSession);
        
        HRESULT ( STDMETHODCALLTYPE *loadDataFromCodeViewInfo )( 
            IDiaDataSource * This,
            /* [in] */ LPCOLESTR executable,
            /* [in] */ LPCOLESTR searchPath,
            /* [in] */ DWORD cbCvInfo,
            /* [size_is][in] */ BYTE *pbCvInfo,
            /* [in] */ IUnknown *pCallback);
        
        HRESULT ( STDMETHODCALLTYPE *loadDataFromMiscInfo )( 
            IDiaDataSource * This,
            /* [in] */ LPCOLESTR executable,
            /* [in] */ LPCOLESTR searchPath,
            /* [in] */ DWORD timeStampExe,
            /* [in] */ DWORD timeStampDbg,
            /* [in] */ DWORD sizeOfExe,
            /* [in] */ DWORD cbMiscInfo,
            /* [size_is][in] */ BYTE *pbMiscInfo,
            /* [in] */ IUnknown *pCallback);
        
        END_INTERFACE
    } IDiaDataSourceVtbl;

    interface IDiaDataSource
    {
        CONST_VTBL struct IDiaDataSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaDataSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaDataSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaDataSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaDataSource_get_lastError(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lastError(This,pRetVal) ) 

#define IDiaDataSource_loadDataFromPdb(This,pdbPath)	\
    ( (This)->lpVtbl -> loadDataFromPdb(This,pdbPath) ) 

#define IDiaDataSource_loadAndValidateDataFromPdb(This,pdbPath,pcsig70,sig,age)	\
    ( (This)->lpVtbl -> loadAndValidateDataFromPdb(This,pdbPath,pcsig70,sig,age) ) 

#define IDiaDataSource_loadDataForExe(This,executable,searchPath,pCallback)	\
    ( (This)->lpVtbl -> loadDataForExe(This,executable,searchPath,pCallback) ) 

#define IDiaDataSource_loadDataFromIStream(This,pIStream)	\
    ( (This)->lpVtbl -> loadDataFromIStream(This,pIStream) ) 

#define IDiaDataSource_openSession(This,ppSession)	\
    ( (This)->lpVtbl -> openSession(This,ppSession) ) 

#define IDiaDataSource_loadDataFromCodeViewInfo(This,executable,searchPath,cbCvInfo,pbCvInfo,pCallback)	\
    ( (This)->lpVtbl -> loadDataFromCodeViewInfo(This,executable,searchPath,cbCvInfo,pbCvInfo,pCallback) ) 

#define IDiaDataSource_loadDataFromMiscInfo(This,executable,searchPath,timeStampExe,timeStampDbg,sizeOfExe,cbMiscInfo,pbMiscInfo,pCallback)	\
    ( (This)->lpVtbl -> loadDataFromMiscInfo(This,executable,searchPath,timeStampExe,timeStampDbg,sizeOfExe,cbMiscInfo,pbMiscInfo,pCallback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaDataSource_INTERFACE_DEFINED__ */


#ifndef __IDiaEnumSymbols_INTERFACE_DEFINED__
#define __IDiaEnumSymbols_INTERFACE_DEFINED__

/* interface IDiaEnumSymbols */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaEnumSymbols;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CAB72C48-443B-48f5-9B0B-42F0820AB29A")
    IDiaEnumSymbols : public IUnknown
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pRetVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ DWORD index,
            /* [retval][out] */ IDiaSymbol **symbol) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [out] */ IDiaSymbol **rgelt,
            /* [out] */ ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IDiaEnumSymbols **ppenum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaEnumSymbolsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaEnumSymbols * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaEnumSymbols * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaEnumSymbols * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDiaEnumSymbols * This,
            /* [retval][out] */ IUnknown **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDiaEnumSymbols * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            IDiaEnumSymbols * This,
            /* [in] */ DWORD index,
            /* [retval][out] */ IDiaSymbol **symbol);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IDiaEnumSymbols * This,
            /* [in] */ ULONG celt,
            /* [out] */ IDiaSymbol **rgelt,
            /* [out] */ ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IDiaEnumSymbols * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IDiaEnumSymbols * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IDiaEnumSymbols * This,
            /* [out] */ IDiaEnumSymbols **ppenum);
        
        END_INTERFACE
    } IDiaEnumSymbolsVtbl;

    interface IDiaEnumSymbols
    {
        CONST_VTBL struct IDiaEnumSymbolsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaEnumSymbols_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaEnumSymbols_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaEnumSymbols_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaEnumSymbols_get__NewEnum(This,pRetVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pRetVal) ) 

#define IDiaEnumSymbols_get_Count(This,pRetVal)	\
    ( (This)->lpVtbl -> get_Count(This,pRetVal) ) 

#define IDiaEnumSymbols_Item(This,index,symbol)	\
    ( (This)->lpVtbl -> Item(This,index,symbol) ) 

#define IDiaEnumSymbols_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IDiaEnumSymbols_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IDiaEnumSymbols_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IDiaEnumSymbols_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaEnumSymbols_INTERFACE_DEFINED__ */


#ifndef __IDiaEnumSymbolsByAddr_INTERFACE_DEFINED__
#define __IDiaEnumSymbolsByAddr_INTERFACE_DEFINED__

/* interface IDiaEnumSymbolsByAddr */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaEnumSymbolsByAddr;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("624B7D9C-24EA-4421-9D06-3B577471C1FA")
    IDiaEnumSymbolsByAddr : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE symbolByAddr( 
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [retval][out] */ IDiaSymbol **ppSymbol) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE symbolByRVA( 
            /* [in] */ DWORD relativeVirtualAddress,
            /* [retval][out] */ IDiaSymbol **ppSymbol) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE symbolByVA( 
            /* [in] */ ULONGLONG virtualAddress,
            /* [retval][out] */ IDiaSymbol **ppSymbol) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [out] */ IDiaSymbol **rgelt,
            /* [out] */ ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Prev( 
            /* [in] */ ULONG celt,
            /* [out] */ IDiaSymbol **rgelt,
            /* [out] */ ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IDiaEnumSymbolsByAddr **ppenum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaEnumSymbolsByAddrVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaEnumSymbolsByAddr * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaEnumSymbolsByAddr * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaEnumSymbolsByAddr * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *symbolByAddr )( 
            IDiaEnumSymbolsByAddr * This,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [retval][out] */ IDiaSymbol **ppSymbol);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *symbolByRVA )( 
            IDiaEnumSymbolsByAddr * This,
            /* [in] */ DWORD relativeVirtualAddress,
            /* [retval][out] */ IDiaSymbol **ppSymbol);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *symbolByVA )( 
            IDiaEnumSymbolsByAddr * This,
            /* [in] */ ULONGLONG virtualAddress,
            /* [retval][out] */ IDiaSymbol **ppSymbol);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IDiaEnumSymbolsByAddr * This,
            /* [in] */ ULONG celt,
            /* [out] */ IDiaSymbol **rgelt,
            /* [out] */ ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Prev )( 
            IDiaEnumSymbolsByAddr * This,
            /* [in] */ ULONG celt,
            /* [out] */ IDiaSymbol **rgelt,
            /* [out] */ ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IDiaEnumSymbolsByAddr * This,
            /* [out] */ IDiaEnumSymbolsByAddr **ppenum);
        
        END_INTERFACE
    } IDiaEnumSymbolsByAddrVtbl;

    interface IDiaEnumSymbolsByAddr
    {
        CONST_VTBL struct IDiaEnumSymbolsByAddrVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaEnumSymbolsByAddr_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaEnumSymbolsByAddr_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaEnumSymbolsByAddr_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaEnumSymbolsByAddr_symbolByAddr(This,isect,offset,ppSymbol)	\
    ( (This)->lpVtbl -> symbolByAddr(This,isect,offset,ppSymbol) ) 

#define IDiaEnumSymbolsByAddr_symbolByRVA(This,relativeVirtualAddress,ppSymbol)	\
    ( (This)->lpVtbl -> symbolByRVA(This,relativeVirtualAddress,ppSymbol) ) 

#define IDiaEnumSymbolsByAddr_symbolByVA(This,virtualAddress,ppSymbol)	\
    ( (This)->lpVtbl -> symbolByVA(This,virtualAddress,ppSymbol) ) 

#define IDiaEnumSymbolsByAddr_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IDiaEnumSymbolsByAddr_Prev(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Prev(This,celt,rgelt,pceltFetched) ) 

#define IDiaEnumSymbolsByAddr_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaEnumSymbolsByAddr_INTERFACE_DEFINED__ */


#ifndef __IDiaEnumSourceFiles_INTERFACE_DEFINED__
#define __IDiaEnumSourceFiles_INTERFACE_DEFINED__

/* interface IDiaEnumSourceFiles */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaEnumSourceFiles;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("10F3DBD9-664F-4469-B808-9471C7A50538")
    IDiaEnumSourceFiles : public IUnknown
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pRetVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ DWORD index,
            /* [retval][out] */ IDiaSourceFile **sourceFile) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [out] */ IDiaSourceFile **rgelt,
            /* [out] */ ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IDiaEnumSourceFiles **ppenum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaEnumSourceFilesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaEnumSourceFiles * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaEnumSourceFiles * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaEnumSourceFiles * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDiaEnumSourceFiles * This,
            /* [retval][out] */ IUnknown **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDiaEnumSourceFiles * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            IDiaEnumSourceFiles * This,
            /* [in] */ DWORD index,
            /* [retval][out] */ IDiaSourceFile **sourceFile);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IDiaEnumSourceFiles * This,
            /* [in] */ ULONG celt,
            /* [out] */ IDiaSourceFile **rgelt,
            /* [out] */ ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IDiaEnumSourceFiles * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IDiaEnumSourceFiles * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IDiaEnumSourceFiles * This,
            /* [out] */ IDiaEnumSourceFiles **ppenum);
        
        END_INTERFACE
    } IDiaEnumSourceFilesVtbl;

    interface IDiaEnumSourceFiles
    {
        CONST_VTBL struct IDiaEnumSourceFilesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaEnumSourceFiles_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaEnumSourceFiles_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaEnumSourceFiles_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaEnumSourceFiles_get__NewEnum(This,pRetVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pRetVal) ) 

#define IDiaEnumSourceFiles_get_Count(This,pRetVal)	\
    ( (This)->lpVtbl -> get_Count(This,pRetVal) ) 

#define IDiaEnumSourceFiles_Item(This,index,sourceFile)	\
    ( (This)->lpVtbl -> Item(This,index,sourceFile) ) 

#define IDiaEnumSourceFiles_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IDiaEnumSourceFiles_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IDiaEnumSourceFiles_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IDiaEnumSourceFiles_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaEnumSourceFiles_INTERFACE_DEFINED__ */


#ifndef __IDiaEnumInputAssemblyFiles_INTERFACE_DEFINED__
#define __IDiaEnumInputAssemblyFiles_INTERFACE_DEFINED__

/* interface IDiaEnumInputAssemblyFiles */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaEnumInputAssemblyFiles;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1C7FF653-51F7-457E-8419-B20F57EF7E4D")
    IDiaEnumInputAssemblyFiles : public IUnknown
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pRetVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ DWORD index,
            /* [retval][out] */ IDiaInputAssemblyFile **file) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [out] */ IDiaInputAssemblyFile **rgelt,
            /* [out] */ ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IDiaEnumInputAssemblyFiles **ppenum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaEnumInputAssemblyFilesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaEnumInputAssemblyFiles * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaEnumInputAssemblyFiles * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaEnumInputAssemblyFiles * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDiaEnumInputAssemblyFiles * This,
            /* [retval][out] */ IUnknown **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDiaEnumInputAssemblyFiles * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            IDiaEnumInputAssemblyFiles * This,
            /* [in] */ DWORD index,
            /* [retval][out] */ IDiaInputAssemblyFile **file);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IDiaEnumInputAssemblyFiles * This,
            /* [in] */ ULONG celt,
            /* [out] */ IDiaInputAssemblyFile **rgelt,
            /* [out] */ ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IDiaEnumInputAssemblyFiles * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IDiaEnumInputAssemblyFiles * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IDiaEnumInputAssemblyFiles * This,
            /* [out] */ IDiaEnumInputAssemblyFiles **ppenum);
        
        END_INTERFACE
    } IDiaEnumInputAssemblyFilesVtbl;

    interface IDiaEnumInputAssemblyFiles
    {
        CONST_VTBL struct IDiaEnumInputAssemblyFilesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaEnumInputAssemblyFiles_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaEnumInputAssemblyFiles_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaEnumInputAssemblyFiles_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaEnumInputAssemblyFiles_get__NewEnum(This,pRetVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pRetVal) ) 

#define IDiaEnumInputAssemblyFiles_get_Count(This,pRetVal)	\
    ( (This)->lpVtbl -> get_Count(This,pRetVal) ) 

#define IDiaEnumInputAssemblyFiles_Item(This,index,file)	\
    ( (This)->lpVtbl -> Item(This,index,file) ) 

#define IDiaEnumInputAssemblyFiles_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IDiaEnumInputAssemblyFiles_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IDiaEnumInputAssemblyFiles_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IDiaEnumInputAssemblyFiles_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaEnumInputAssemblyFiles_INTERFACE_DEFINED__ */


#ifndef __IDiaEnumLineNumbers_INTERFACE_DEFINED__
#define __IDiaEnumLineNumbers_INTERFACE_DEFINED__

/* interface IDiaEnumLineNumbers */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaEnumLineNumbers;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FE30E878-54AC-44f1-81BA-39DE940F6052")
    IDiaEnumLineNumbers : public IUnknown
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pRetVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ DWORD index,
            /* [retval][out] */ IDiaLineNumber **lineNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [out] */ IDiaLineNumber **rgelt,
            /* [out] */ ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IDiaEnumLineNumbers **ppenum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaEnumLineNumbersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaEnumLineNumbers * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaEnumLineNumbers * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaEnumLineNumbers * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDiaEnumLineNumbers * This,
            /* [retval][out] */ IUnknown **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDiaEnumLineNumbers * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            IDiaEnumLineNumbers * This,
            /* [in] */ DWORD index,
            /* [retval][out] */ IDiaLineNumber **lineNumber);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IDiaEnumLineNumbers * This,
            /* [in] */ ULONG celt,
            /* [out] */ IDiaLineNumber **rgelt,
            /* [out] */ ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IDiaEnumLineNumbers * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IDiaEnumLineNumbers * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IDiaEnumLineNumbers * This,
            /* [out] */ IDiaEnumLineNumbers **ppenum);
        
        END_INTERFACE
    } IDiaEnumLineNumbersVtbl;

    interface IDiaEnumLineNumbers
    {
        CONST_VTBL struct IDiaEnumLineNumbersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaEnumLineNumbers_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaEnumLineNumbers_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaEnumLineNumbers_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaEnumLineNumbers_get__NewEnum(This,pRetVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pRetVal) ) 

#define IDiaEnumLineNumbers_get_Count(This,pRetVal)	\
    ( (This)->lpVtbl -> get_Count(This,pRetVal) ) 

#define IDiaEnumLineNumbers_Item(This,index,lineNumber)	\
    ( (This)->lpVtbl -> Item(This,index,lineNumber) ) 

#define IDiaEnumLineNumbers_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IDiaEnumLineNumbers_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IDiaEnumLineNumbers_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IDiaEnumLineNumbers_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaEnumLineNumbers_INTERFACE_DEFINED__ */


#ifndef __IDiaEnumInjectedSources_INTERFACE_DEFINED__
#define __IDiaEnumInjectedSources_INTERFACE_DEFINED__

/* interface IDiaEnumInjectedSources */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaEnumInjectedSources;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D5612573-6925-4468-8883-98CDEC8C384A")
    IDiaEnumInjectedSources : public IUnknown
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pRetVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ DWORD index,
            /* [retval][out] */ IDiaInjectedSource **injectedSource) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [out] */ IDiaInjectedSource **rgelt,
            /* [out] */ ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IDiaEnumInjectedSources **ppenum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaEnumInjectedSourcesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaEnumInjectedSources * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaEnumInjectedSources * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaEnumInjectedSources * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDiaEnumInjectedSources * This,
            /* [retval][out] */ IUnknown **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDiaEnumInjectedSources * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            IDiaEnumInjectedSources * This,
            /* [in] */ DWORD index,
            /* [retval][out] */ IDiaInjectedSource **injectedSource);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IDiaEnumInjectedSources * This,
            /* [in] */ ULONG celt,
            /* [out] */ IDiaInjectedSource **rgelt,
            /* [out] */ ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IDiaEnumInjectedSources * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IDiaEnumInjectedSources * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IDiaEnumInjectedSources * This,
            /* [out] */ IDiaEnumInjectedSources **ppenum);
        
        END_INTERFACE
    } IDiaEnumInjectedSourcesVtbl;

    interface IDiaEnumInjectedSources
    {
        CONST_VTBL struct IDiaEnumInjectedSourcesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaEnumInjectedSources_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaEnumInjectedSources_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaEnumInjectedSources_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaEnumInjectedSources_get__NewEnum(This,pRetVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pRetVal) ) 

#define IDiaEnumInjectedSources_get_Count(This,pRetVal)	\
    ( (This)->lpVtbl -> get_Count(This,pRetVal) ) 

#define IDiaEnumInjectedSources_Item(This,index,injectedSource)	\
    ( (This)->lpVtbl -> Item(This,index,injectedSource) ) 

#define IDiaEnumInjectedSources_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IDiaEnumInjectedSources_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IDiaEnumInjectedSources_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IDiaEnumInjectedSources_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaEnumInjectedSources_INTERFACE_DEFINED__ */


#ifndef __IDiaEnumSegments_INTERFACE_DEFINED__
#define __IDiaEnumSegments_INTERFACE_DEFINED__

/* interface IDiaEnumSegments */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaEnumSegments;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E8368CA9-01D1-419d-AC0C-E31235DBDA9F")
    IDiaEnumSegments : public IUnknown
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pRetVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ DWORD index,
            /* [retval][out] */ IDiaSegment **segment) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [out] */ IDiaSegment **rgelt,
            /* [out] */ ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IDiaEnumSegments **ppenum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaEnumSegmentsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaEnumSegments * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaEnumSegments * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaEnumSegments * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDiaEnumSegments * This,
            /* [retval][out] */ IUnknown **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDiaEnumSegments * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            IDiaEnumSegments * This,
            /* [in] */ DWORD index,
            /* [retval][out] */ IDiaSegment **segment);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IDiaEnumSegments * This,
            /* [in] */ ULONG celt,
            /* [out] */ IDiaSegment **rgelt,
            /* [out] */ ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IDiaEnumSegments * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IDiaEnumSegments * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IDiaEnumSegments * This,
            /* [out] */ IDiaEnumSegments **ppenum);
        
        END_INTERFACE
    } IDiaEnumSegmentsVtbl;

    interface IDiaEnumSegments
    {
        CONST_VTBL struct IDiaEnumSegmentsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaEnumSegments_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaEnumSegments_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaEnumSegments_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaEnumSegments_get__NewEnum(This,pRetVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pRetVal) ) 

#define IDiaEnumSegments_get_Count(This,pRetVal)	\
    ( (This)->lpVtbl -> get_Count(This,pRetVal) ) 

#define IDiaEnumSegments_Item(This,index,segment)	\
    ( (This)->lpVtbl -> Item(This,index,segment) ) 

#define IDiaEnumSegments_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IDiaEnumSegments_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IDiaEnumSegments_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IDiaEnumSegments_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaEnumSegments_INTERFACE_DEFINED__ */


#ifndef __IDiaEnumSectionContribs_INTERFACE_DEFINED__
#define __IDiaEnumSectionContribs_INTERFACE_DEFINED__

/* interface IDiaEnumSectionContribs */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaEnumSectionContribs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1994DEB2-2C82-4b1d-A57F-AFF424D54A68")
    IDiaEnumSectionContribs : public IUnknown
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pRetVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ DWORD index,
            /* [retval][out] */ IDiaSectionContrib **section) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [out] */ IDiaSectionContrib **rgelt,
            /* [out] */ ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IDiaEnumSectionContribs **ppenum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaEnumSectionContribsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaEnumSectionContribs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaEnumSectionContribs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaEnumSectionContribs * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDiaEnumSectionContribs * This,
            /* [retval][out] */ IUnknown **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDiaEnumSectionContribs * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            IDiaEnumSectionContribs * This,
            /* [in] */ DWORD index,
            /* [retval][out] */ IDiaSectionContrib **section);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IDiaEnumSectionContribs * This,
            /* [in] */ ULONG celt,
            /* [out] */ IDiaSectionContrib **rgelt,
            /* [out] */ ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IDiaEnumSectionContribs * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IDiaEnumSectionContribs * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IDiaEnumSectionContribs * This,
            /* [out] */ IDiaEnumSectionContribs **ppenum);
        
        END_INTERFACE
    } IDiaEnumSectionContribsVtbl;

    interface IDiaEnumSectionContribs
    {
        CONST_VTBL struct IDiaEnumSectionContribsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaEnumSectionContribs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaEnumSectionContribs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaEnumSectionContribs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaEnumSectionContribs_get__NewEnum(This,pRetVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pRetVal) ) 

#define IDiaEnumSectionContribs_get_Count(This,pRetVal)	\
    ( (This)->lpVtbl -> get_Count(This,pRetVal) ) 

#define IDiaEnumSectionContribs_Item(This,index,section)	\
    ( (This)->lpVtbl -> Item(This,index,section) ) 

#define IDiaEnumSectionContribs_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IDiaEnumSectionContribs_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IDiaEnumSectionContribs_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IDiaEnumSectionContribs_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaEnumSectionContribs_INTERFACE_DEFINED__ */


#ifndef __IDiaEnumFrameData_INTERFACE_DEFINED__
#define __IDiaEnumFrameData_INTERFACE_DEFINED__

/* interface IDiaEnumFrameData */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaEnumFrameData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9FC77A4B-3C1C-44ed-A798-6C1DEEA53E1F")
    IDiaEnumFrameData : public IUnknown
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pRetVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ DWORD index,
            /* [retval][out] */ IDiaFrameData **frame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [out] */ IDiaFrameData **rgelt,
            /* [out] */ ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IDiaEnumFrameData **ppenum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE frameByRVA( 
            /* [in] */ DWORD relativeVirtualAddress,
            /* [retval][out] */ IDiaFrameData **frame) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE frameByVA( 
            /* [in] */ ULONGLONG virtualAddress,
            /* [retval][out] */ IDiaFrameData **frame) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaEnumFrameDataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaEnumFrameData * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaEnumFrameData * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaEnumFrameData * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDiaEnumFrameData * This,
            /* [retval][out] */ IUnknown **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDiaEnumFrameData * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            IDiaEnumFrameData * This,
            /* [in] */ DWORD index,
            /* [retval][out] */ IDiaFrameData **frame);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IDiaEnumFrameData * This,
            /* [in] */ ULONG celt,
            /* [out] */ IDiaFrameData **rgelt,
            /* [out] */ ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IDiaEnumFrameData * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IDiaEnumFrameData * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IDiaEnumFrameData * This,
            /* [out] */ IDiaEnumFrameData **ppenum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *frameByRVA )( 
            IDiaEnumFrameData * This,
            /* [in] */ DWORD relativeVirtualAddress,
            /* [retval][out] */ IDiaFrameData **frame);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *frameByVA )( 
            IDiaEnumFrameData * This,
            /* [in] */ ULONGLONG virtualAddress,
            /* [retval][out] */ IDiaFrameData **frame);
        
        END_INTERFACE
    } IDiaEnumFrameDataVtbl;

    interface IDiaEnumFrameData
    {
        CONST_VTBL struct IDiaEnumFrameDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaEnumFrameData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaEnumFrameData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaEnumFrameData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaEnumFrameData_get__NewEnum(This,pRetVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pRetVal) ) 

#define IDiaEnumFrameData_get_Count(This,pRetVal)	\
    ( (This)->lpVtbl -> get_Count(This,pRetVal) ) 

#define IDiaEnumFrameData_Item(This,index,frame)	\
    ( (This)->lpVtbl -> Item(This,index,frame) ) 

#define IDiaEnumFrameData_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IDiaEnumFrameData_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IDiaEnumFrameData_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IDiaEnumFrameData_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#define IDiaEnumFrameData_frameByRVA(This,relativeVirtualAddress,frame)	\
    ( (This)->lpVtbl -> frameByRVA(This,relativeVirtualAddress,frame) ) 

#define IDiaEnumFrameData_frameByVA(This,virtualAddress,frame)	\
    ( (This)->lpVtbl -> frameByVA(This,virtualAddress,frame) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaEnumFrameData_INTERFACE_DEFINED__ */


#ifndef __IDiaEnumDebugStreamData_INTERFACE_DEFINED__
#define __IDiaEnumDebugStreamData_INTERFACE_DEFINED__

/* interface IDiaEnumDebugStreamData */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaEnumDebugStreamData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("486943E8-D187-4a6b-A3C4-291259FFF60D")
    IDiaEnumDebugStreamData : public IUnknown
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_name( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ DWORD index,
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData,
            /* [out] */ ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IDiaEnumDebugStreamData **ppenum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaEnumDebugStreamDataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaEnumDebugStreamData * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaEnumDebugStreamData * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaEnumDebugStreamData * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDiaEnumDebugStreamData * This,
            /* [retval][out] */ IUnknown **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDiaEnumDebugStreamData * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_name )( 
            IDiaEnumDebugStreamData * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            IDiaEnumDebugStreamData * This,
            /* [in] */ DWORD index,
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IDiaEnumDebugStreamData * This,
            /* [in] */ ULONG celt,
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData,
            /* [out] */ ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IDiaEnumDebugStreamData * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IDiaEnumDebugStreamData * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IDiaEnumDebugStreamData * This,
            /* [out] */ IDiaEnumDebugStreamData **ppenum);
        
        END_INTERFACE
    } IDiaEnumDebugStreamDataVtbl;

    interface IDiaEnumDebugStreamData
    {
        CONST_VTBL struct IDiaEnumDebugStreamDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaEnumDebugStreamData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaEnumDebugStreamData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaEnumDebugStreamData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaEnumDebugStreamData_get__NewEnum(This,pRetVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pRetVal) ) 

#define IDiaEnumDebugStreamData_get_Count(This,pRetVal)	\
    ( (This)->lpVtbl -> get_Count(This,pRetVal) ) 

#define IDiaEnumDebugStreamData_get_name(This,pRetVal)	\
    ( (This)->lpVtbl -> get_name(This,pRetVal) ) 

#define IDiaEnumDebugStreamData_Item(This,index,cbData,pcbData,pbData)	\
    ( (This)->lpVtbl -> Item(This,index,cbData,pcbData,pbData) ) 

#define IDiaEnumDebugStreamData_Next(This,celt,cbData,pcbData,pbData,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,cbData,pcbData,pbData,pceltFetched) ) 

#define IDiaEnumDebugStreamData_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IDiaEnumDebugStreamData_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IDiaEnumDebugStreamData_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaEnumDebugStreamData_INTERFACE_DEFINED__ */


#ifndef __IDiaEnumDebugStreams_INTERFACE_DEFINED__
#define __IDiaEnumDebugStreams_INTERFACE_DEFINED__

/* interface IDiaEnumDebugStreams */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaEnumDebugStreams;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("08CBB41E-47A6-4f87-92F1-1C9C87CED044")
    IDiaEnumDebugStreams : public IUnknown
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pRetVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT index,
            /* [retval][out] */ IDiaEnumDebugStreamData **stream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [out] */ IDiaEnumDebugStreamData **rgelt,
            /* [out] */ ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IDiaEnumDebugStreams **ppenum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaEnumDebugStreamsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaEnumDebugStreams * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaEnumDebugStreams * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaEnumDebugStreams * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDiaEnumDebugStreams * This,
            /* [retval][out] */ IUnknown **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDiaEnumDebugStreams * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            IDiaEnumDebugStreams * This,
            /* [in] */ VARIANT index,
            /* [retval][out] */ IDiaEnumDebugStreamData **stream);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IDiaEnumDebugStreams * This,
            /* [in] */ ULONG celt,
            /* [out] */ IDiaEnumDebugStreamData **rgelt,
            /* [out] */ ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IDiaEnumDebugStreams * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IDiaEnumDebugStreams * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IDiaEnumDebugStreams * This,
            /* [out] */ IDiaEnumDebugStreams **ppenum);
        
        END_INTERFACE
    } IDiaEnumDebugStreamsVtbl;

    interface IDiaEnumDebugStreams
    {
        CONST_VTBL struct IDiaEnumDebugStreamsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaEnumDebugStreams_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaEnumDebugStreams_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaEnumDebugStreams_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaEnumDebugStreams_get__NewEnum(This,pRetVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pRetVal) ) 

#define IDiaEnumDebugStreams_get_Count(This,pRetVal)	\
    ( (This)->lpVtbl -> get_Count(This,pRetVal) ) 

#define IDiaEnumDebugStreams_Item(This,index,stream)	\
    ( (This)->lpVtbl -> Item(This,index,stream) ) 

#define IDiaEnumDebugStreams_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IDiaEnumDebugStreams_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IDiaEnumDebugStreams_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IDiaEnumDebugStreams_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaEnumDebugStreams_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dia2_0000_0016 */
/* [local] */ 

struct DiaAddressMapEntry
    {
    DWORD rva;
    DWORD rvaTo;
    } ;


extern RPC_IF_HANDLE __MIDL_itf_dia2_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dia2_0000_0016_v0_0_s_ifspec;

#ifndef __IDiaAddressMap_INTERFACE_DEFINED__
#define __IDiaAddressMap_INTERFACE_DEFINED__

/* interface IDiaAddressMap */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaAddressMap;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B62A2E7A-067A-4ea3-B598-04C09717502C")
    IDiaAddressMap : public IUnknown
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_addressMapEnabled( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_addressMapEnabled( 
            /* [in] */ BOOL NewVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_relativeVirtualAddressEnabled( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_relativeVirtualAddressEnabled( 
            /* [in] */ BOOL NewVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_imageAlign( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_imageAlign( 
            /* [in] */ DWORD NewVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE set_imageHeaders( 
            /* [in] */ DWORD cbData,
            /* [size_is][in] */ BYTE *pbData,
            /* [in] */ BOOL originalHeaders) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE set_addressMap( 
            /* [in] */ DWORD cData,
            /* [size_is][in] */ struct DiaAddressMapEntry *pData,
            /* [in] */ BOOL imageToSymbols) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaAddressMapVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaAddressMap * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaAddressMap * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaAddressMap * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressMapEnabled )( 
            IDiaAddressMap * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_addressMapEnabled )( 
            IDiaAddressMap * This,
            /* [in] */ BOOL NewVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_relativeVirtualAddressEnabled )( 
            IDiaAddressMap * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_relativeVirtualAddressEnabled )( 
            IDiaAddressMap * This,
            /* [in] */ BOOL NewVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_imageAlign )( 
            IDiaAddressMap * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_imageAlign )( 
            IDiaAddressMap * This,
            /* [in] */ DWORD NewVal);
        
        HRESULT ( STDMETHODCALLTYPE *set_imageHeaders )( 
            IDiaAddressMap * This,
            /* [in] */ DWORD cbData,
            /* [size_is][in] */ BYTE *pbData,
            /* [in] */ BOOL originalHeaders);
        
        HRESULT ( STDMETHODCALLTYPE *set_addressMap )( 
            IDiaAddressMap * This,
            /* [in] */ DWORD cData,
            /* [size_is][in] */ struct DiaAddressMapEntry *pData,
            /* [in] */ BOOL imageToSymbols);
        
        END_INTERFACE
    } IDiaAddressMapVtbl;

    interface IDiaAddressMap
    {
        CONST_VTBL struct IDiaAddressMapVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaAddressMap_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaAddressMap_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaAddressMap_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaAddressMap_get_addressMapEnabled(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressMapEnabled(This,pRetVal) ) 

#define IDiaAddressMap_put_addressMapEnabled(This,NewVal)	\
    ( (This)->lpVtbl -> put_addressMapEnabled(This,NewVal) ) 

#define IDiaAddressMap_get_relativeVirtualAddressEnabled(This,pRetVal)	\
    ( (This)->lpVtbl -> get_relativeVirtualAddressEnabled(This,pRetVal) ) 

#define IDiaAddressMap_put_relativeVirtualAddressEnabled(This,NewVal)	\
    ( (This)->lpVtbl -> put_relativeVirtualAddressEnabled(This,NewVal) ) 

#define IDiaAddressMap_get_imageAlign(This,pRetVal)	\
    ( (This)->lpVtbl -> get_imageAlign(This,pRetVal) ) 

#define IDiaAddressMap_put_imageAlign(This,NewVal)	\
    ( (This)->lpVtbl -> put_imageAlign(This,NewVal) ) 

#define IDiaAddressMap_set_imageHeaders(This,cbData,pbData,originalHeaders)	\
    ( (This)->lpVtbl -> set_imageHeaders(This,cbData,pbData,originalHeaders) ) 

#define IDiaAddressMap_set_addressMap(This,cData,pData,imageToSymbols)	\
    ( (This)->lpVtbl -> set_addressMap(This,cData,pData,imageToSymbols) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaAddressMap_INTERFACE_DEFINED__ */


#ifndef __IDiaSession_INTERFACE_DEFINED__
#define __IDiaSession_INTERFACE_DEFINED__

/* interface IDiaSession */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaSession;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2F609EE1-D1C8-4E24-8288-3326BADCD211")
    IDiaSession : public IUnknown
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_loadAddress( 
            /* [retval][out] */ ULONGLONG *pRetVal) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_loadAddress( 
            /* [in] */ ULONGLONG NewVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_globalScope( 
            /* [retval][out] */ IDiaSymbol **pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE getEnumTables( 
            /* [out] */ IDiaEnumTables **ppEnumTables) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE getSymbolsByAddr( 
            /* [out] */ IDiaEnumSymbolsByAddr **ppEnumbyAddr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findChildren( 
            /* [in] */ IDiaSymbol *parent,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [out] */ IDiaEnumSymbols **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findChildrenEx( 
            /* [in] */ IDiaSymbol *parent,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [out] */ IDiaEnumSymbols **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findChildrenExByAddr( 
            /* [in] */ IDiaSymbol *parent,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [out] */ IDiaEnumSymbols **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findChildrenExByVA( 
            /* [in] */ IDiaSymbol *parent,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ ULONGLONG va,
            /* [out] */ IDiaEnumSymbols **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findChildrenExByRVA( 
            /* [in] */ IDiaSymbol *parent,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findSymbolByAddr( 
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [in] */ enum SymTagEnum symtag,
            /* [out] */ IDiaSymbol **ppSymbol) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findSymbolByRVA( 
            /* [in] */ DWORD rva,
            /* [in] */ enum SymTagEnum symtag,
            /* [out] */ IDiaSymbol **ppSymbol) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findSymbolByVA( 
            /* [in] */ ULONGLONG va,
            /* [in] */ enum SymTagEnum symtag,
            /* [out] */ IDiaSymbol **ppSymbol) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findSymbolByToken( 
            /* [in] */ ULONG token,
            /* [in] */ enum SymTagEnum symtag,
            /* [out] */ IDiaSymbol **ppSymbol) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE symsAreEquiv( 
            /* [in] */ IDiaSymbol *symbolA,
            /* [in] */ IDiaSymbol *symbolB) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE symbolById( 
            /* [in] */ DWORD id,
            /* [out] */ IDiaSymbol **ppSymbol) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findSymbolByRVAEx( 
            /* [in] */ DWORD rva,
            /* [in] */ enum SymTagEnum symtag,
            /* [out] */ IDiaSymbol **ppSymbol,
            /* [out] */ long *displacement) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findSymbolByVAEx( 
            /* [in] */ ULONGLONG va,
            /* [in] */ enum SymTagEnum symtag,
            /* [out] */ IDiaSymbol **ppSymbol,
            /* [out] */ long *displacement) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findFile( 
            /* [in] */ IDiaSymbol *pCompiland,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [out] */ IDiaEnumSourceFiles **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findFileById( 
            /* [in] */ DWORD uniqueId,
            /* [out] */ IDiaSourceFile **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findLines( 
            /* [in] */ IDiaSymbol *compiland,
            /* [in] */ IDiaSourceFile *file,
            /* [out] */ IDiaEnumLineNumbers **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findLinesByAddr( 
            /* [in] */ DWORD seg,
            /* [in] */ DWORD offset,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findLinesByRVA( 
            /* [in] */ DWORD rva,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findLinesByVA( 
            /* [in] */ ULONGLONG va,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findLinesByLinenum( 
            /* [in] */ IDiaSymbol *compiland,
            /* [in] */ IDiaSourceFile *file,
            /* [in] */ DWORD linenum,
            /* [in] */ DWORD column,
            /* [out] */ IDiaEnumLineNumbers **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findInjectedSource( 
            /* [in] */ LPCOLESTR srcFile,
            /* [out] */ IDiaEnumInjectedSources **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE getEnumDebugStreams( 
            /* [out] */ IDiaEnumDebugStreams **ppEnumDebugStreams) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findInlineFramesByAddr( 
            /* [in] */ IDiaSymbol *parent,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [out] */ IDiaEnumSymbols **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findInlineFramesByRVA( 
            /* [in] */ IDiaSymbol *parent,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findInlineFramesByVA( 
            /* [in] */ IDiaSymbol *parent,
            /* [in] */ ULONGLONG va,
            /* [out] */ IDiaEnumSymbols **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findInlineeLines( 
            /* [in] */ IDiaSymbol *parent,
            /* [out] */ IDiaEnumLineNumbers **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findInlineeLinesByAddr( 
            /* [in] */ IDiaSymbol *parent,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findInlineeLinesByRVA( 
            /* [in] */ IDiaSymbol *parent,
            /* [in] */ DWORD rva,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findInlineeLinesByVA( 
            /* [in] */ IDiaSymbol *parent,
            /* [in] */ ULONGLONG va,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findInlineeLinesByLinenum( 
            /* [in] */ IDiaSymbol *compiland,
            /* [in] */ IDiaSourceFile *file,
            /* [in] */ DWORD linenum,
            /* [in] */ DWORD column,
            /* [out] */ IDiaEnumLineNumbers **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findInlineesByName( 
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD option,
            /* [out] */ IDiaEnumSymbols **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findAcceleratorInlineeLinesByLinenum( 
            /* [in] */ IDiaSymbol *parent,
            /* [in] */ IDiaSourceFile *file,
            /* [in] */ DWORD linenum,
            /* [in] */ DWORD column,
            /* [out] */ IDiaEnumLineNumbers **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findSymbolsForAcceleratorPointerTag( 
            /* [in] */ IDiaSymbol *parent,
            /* [in] */ DWORD tagValue,
            /* [out] */ IDiaEnumSymbols **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findSymbolsByRVAForAcceleratorPointerTag( 
            /* [in] */ IDiaSymbol *parent,
            /* [in] */ DWORD tagValue,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findAcceleratorInlineesByName( 
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD option,
            /* [out] */ IDiaEnumSymbols **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE addressForVA( 
            /* [in] */ ULONGLONG va,
            /* [out] */ DWORD *pISect,
            /* [out] */ DWORD *pOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE addressForRVA( 
            /* [in] */ DWORD rva,
            /* [out] */ DWORD *pISect,
            /* [out] */ DWORD *pOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findILOffsetsByAddr( 
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findILOffsetsByRVA( 
            /* [in] */ DWORD rva,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findILOffsetsByVA( 
            /* [in] */ ULONGLONG va,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findInputAssemblyFiles( 
            /* [out] */ IDiaEnumInputAssemblyFiles **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findInputAssembly( 
            /* [in] */ DWORD index,
            /* [out] */ IDiaInputAssemblyFile **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findInputAssemblyById( 
            /* [in] */ DWORD uniqueId,
            /* [out] */ IDiaInputAssemblyFile **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE getFuncMDTokenMapSize( 
            /* [out] */ DWORD *pcb) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE getFuncMDTokenMap( 
            /* [in] */ DWORD cb,
            /* [out] */ DWORD *pcb,
            /* [size_is][out] */ BYTE *pb) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE getTypeMDTokenMapSize( 
            /* [out] */ DWORD *pcb) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE getTypeMDTokenMap( 
            /* [in] */ DWORD cb,
            /* [out] */ DWORD *pcb,
            /* [size_is][out] */ BYTE *pb) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE getNumberOfFunctionFragments_VA( 
            /* [in] */ ULONGLONG vaFunc,
            /* [in] */ DWORD cbFunc,
            /* [out] */ DWORD *pNumFragments) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE getNumberOfFunctionFragments_RVA( 
            /* [in] */ DWORD rvaFunc,
            /* [in] */ DWORD cbFunc,
            /* [out] */ DWORD *pNumFragments) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE getFunctionFragments_VA( 
            /* [in] */ ULONGLONG vaFunc,
            /* [in] */ DWORD cbFunc,
            /* [in] */ DWORD cFragments,
            /* [size_is][out] */ ULONGLONG *pVaFragment,
            /* [size_is][out] */ DWORD *pLenFragment) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE getFunctionFragments_RVA( 
            /* [in] */ DWORD rvaFunc,
            /* [in] */ DWORD cbFunc,
            /* [in] */ DWORD cFragments,
            /* [size_is][out] */ DWORD *pRvaFragment,
            /* [size_is][out] */ DWORD *pLenFragment) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE getExports( 
            /* [out] */ IDiaEnumSymbols **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE getHeapAllocationSites( 
            /* [out] */ IDiaEnumSymbols **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findInputAssemblyFile( 
            /* [in] */ IDiaSymbol *pSymbol,
            /* [out] */ IDiaInputAssemblyFile **ppResult) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaSessionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaSession * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaSession * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaSession * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_loadAddress )( 
            IDiaSession * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_loadAddress )( 
            IDiaSession * This,
            /* [in] */ ULONGLONG NewVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_globalScope )( 
            IDiaSession * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *getEnumTables )( 
            IDiaSession * This,
            /* [out] */ IDiaEnumTables **ppEnumTables);
        
        HRESULT ( STDMETHODCALLTYPE *getSymbolsByAddr )( 
            IDiaSession * This,
            /* [out] */ IDiaEnumSymbolsByAddr **ppEnumbyAddr);
        
        HRESULT ( STDMETHODCALLTYPE *findChildren )( 
            IDiaSession * This,
            /* [in] */ IDiaSymbol *parent,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenEx )( 
            IDiaSession * This,
            /* [in] */ IDiaSymbol *parent,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenExByAddr )( 
            IDiaSession * This,
            /* [in] */ IDiaSymbol *parent,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenExByVA )( 
            IDiaSession * This,
            /* [in] */ IDiaSymbol *parent,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ ULONGLONG va,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenExByRVA )( 
            IDiaSession * This,
            /* [in] */ IDiaSymbol *parent,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findSymbolByAddr )( 
            IDiaSession * This,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [in] */ enum SymTagEnum symtag,
            /* [out] */ IDiaSymbol **ppSymbol);
        
        HRESULT ( STDMETHODCALLTYPE *findSymbolByRVA )( 
            IDiaSession * This,
            /* [in] */ DWORD rva,
            /* [in] */ enum SymTagEnum symtag,
            /* [out] */ IDiaSymbol **ppSymbol);
        
        HRESULT ( STDMETHODCALLTYPE *findSymbolByVA )( 
            IDiaSession * This,
            /* [in] */ ULONGLONG va,
            /* [in] */ enum SymTagEnum symtag,
            /* [out] */ IDiaSymbol **ppSymbol);
        
        HRESULT ( STDMETHODCALLTYPE *findSymbolByToken )( 
            IDiaSession * This,
            /* [in] */ ULONG token,
            /* [in] */ enum SymTagEnum symtag,
            /* [out] */ IDiaSymbol **ppSymbol);
        
        HRESULT ( STDMETHODCALLTYPE *symsAreEquiv )( 
            IDiaSession * This,
            /* [in] */ IDiaSymbol *symbolA,
            /* [in] */ IDiaSymbol *symbolB);
        
        HRESULT ( STDMETHODCALLTYPE *symbolById )( 
            IDiaSession * This,
            /* [in] */ DWORD id,
            /* [out] */ IDiaSymbol **ppSymbol);
        
        HRESULT ( STDMETHODCALLTYPE *findSymbolByRVAEx )( 
            IDiaSession * This,
            /* [in] */ DWORD rva,
            /* [in] */ enum SymTagEnum symtag,
            /* [out] */ IDiaSymbol **ppSymbol,
            /* [out] */ long *displacement);
        
        HRESULT ( STDMETHODCALLTYPE *findSymbolByVAEx )( 
            IDiaSession * This,
            /* [in] */ ULONGLONG va,
            /* [in] */ enum SymTagEnum symtag,
            /* [out] */ IDiaSymbol **ppSymbol,
            /* [out] */ long *displacement);
        
        HRESULT ( STDMETHODCALLTYPE *findFile )( 
            IDiaSession * This,
            /* [in] */ IDiaSymbol *pCompiland,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [out] */ IDiaEnumSourceFiles **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findFileById )( 
            IDiaSession * This,
            /* [in] */ DWORD uniqueId,
            /* [out] */ IDiaSourceFile **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findLines )( 
            IDiaSession * This,
            /* [in] */ IDiaSymbol *compiland,
            /* [in] */ IDiaSourceFile *file,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findLinesByAddr )( 
            IDiaSession * This,
            /* [in] */ DWORD seg,
            /* [in] */ DWORD offset,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findLinesByRVA )( 
            IDiaSession * This,
            /* [in] */ DWORD rva,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findLinesByVA )( 
            IDiaSession * This,
            /* [in] */ ULONGLONG va,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findLinesByLinenum )( 
            IDiaSession * This,
            /* [in] */ IDiaSymbol *compiland,
            /* [in] */ IDiaSourceFile *file,
            /* [in] */ DWORD linenum,
            /* [in] */ DWORD column,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInjectedSource )( 
            IDiaSession * This,
            /* [in] */ LPCOLESTR srcFile,
            /* [out] */ IDiaEnumInjectedSources **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *getEnumDebugStreams )( 
            IDiaSession * This,
            /* [out] */ IDiaEnumDebugStreams **ppEnumDebugStreams);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineFramesByAddr )( 
            IDiaSession * This,
            /* [in] */ IDiaSymbol *parent,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineFramesByRVA )( 
            IDiaSession * This,
            /* [in] */ IDiaSymbol *parent,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineFramesByVA )( 
            IDiaSession * This,
            /* [in] */ IDiaSymbol *parent,
            /* [in] */ ULONGLONG va,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLines )( 
            IDiaSession * This,
            /* [in] */ IDiaSymbol *parent,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLinesByAddr )( 
            IDiaSession * This,
            /* [in] */ IDiaSymbol *parent,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLinesByRVA )( 
            IDiaSession * This,
            /* [in] */ IDiaSymbol *parent,
            /* [in] */ DWORD rva,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLinesByVA )( 
            IDiaSession * This,
            /* [in] */ IDiaSymbol *parent,
            /* [in] */ ULONGLONG va,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLinesByLinenum )( 
            IDiaSession * This,
            /* [in] */ IDiaSymbol *compiland,
            /* [in] */ IDiaSourceFile *file,
            /* [in] */ DWORD linenum,
            /* [in] */ DWORD column,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineesByName )( 
            IDiaSession * This,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD option,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findAcceleratorInlineeLinesByLinenum )( 
            IDiaSession * This,
            /* [in] */ IDiaSymbol *parent,
            /* [in] */ IDiaSourceFile *file,
            /* [in] */ DWORD linenum,
            /* [in] */ DWORD column,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findSymbolsForAcceleratorPointerTag )( 
            IDiaSession * This,
            /* [in] */ IDiaSymbol *parent,
            /* [in] */ DWORD tagValue,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findSymbolsByRVAForAcceleratorPointerTag )( 
            IDiaSession * This,
            /* [in] */ IDiaSymbol *parent,
            /* [in] */ DWORD tagValue,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findAcceleratorInlineesByName )( 
            IDiaSession * This,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD option,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *addressForVA )( 
            IDiaSession * This,
            /* [in] */ ULONGLONG va,
            /* [out] */ DWORD *pISect,
            /* [out] */ DWORD *pOffset);
        
        HRESULT ( STDMETHODCALLTYPE *addressForRVA )( 
            IDiaSession * This,
            /* [in] */ DWORD rva,
            /* [out] */ DWORD *pISect,
            /* [out] */ DWORD *pOffset);
        
        HRESULT ( STDMETHODCALLTYPE *findILOffsetsByAddr )( 
            IDiaSession * This,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findILOffsetsByRVA )( 
            IDiaSession * This,
            /* [in] */ DWORD rva,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findILOffsetsByVA )( 
            IDiaSession * This,
            /* [in] */ ULONGLONG va,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInputAssemblyFiles )( 
            IDiaSession * This,
            /* [out] */ IDiaEnumInputAssemblyFiles **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInputAssembly )( 
            IDiaSession * This,
            /* [in] */ DWORD index,
            /* [out] */ IDiaInputAssemblyFile **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInputAssemblyById )( 
            IDiaSession * This,
            /* [in] */ DWORD uniqueId,
            /* [out] */ IDiaInputAssemblyFile **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *getFuncMDTokenMapSize )( 
            IDiaSession * This,
            /* [out] */ DWORD *pcb);
        
        HRESULT ( STDMETHODCALLTYPE *getFuncMDTokenMap )( 
            IDiaSession * This,
            /* [in] */ DWORD cb,
            /* [out] */ DWORD *pcb,
            /* [size_is][out] */ BYTE *pb);
        
        HRESULT ( STDMETHODCALLTYPE *getTypeMDTokenMapSize )( 
            IDiaSession * This,
            /* [out] */ DWORD *pcb);
        
        HRESULT ( STDMETHODCALLTYPE *getTypeMDTokenMap )( 
            IDiaSession * This,
            /* [in] */ DWORD cb,
            /* [out] */ DWORD *pcb,
            /* [size_is][out] */ BYTE *pb);
        
        HRESULT ( STDMETHODCALLTYPE *getNumberOfFunctionFragments_VA )( 
            IDiaSession * This,
            /* [in] */ ULONGLONG vaFunc,
            /* [in] */ DWORD cbFunc,
            /* [out] */ DWORD *pNumFragments);
        
        HRESULT ( STDMETHODCALLTYPE *getNumberOfFunctionFragments_RVA )( 
            IDiaSession * This,
            /* [in] */ DWORD rvaFunc,
            /* [in] */ DWORD cbFunc,
            /* [out] */ DWORD *pNumFragments);
        
        HRESULT ( STDMETHODCALLTYPE *getFunctionFragments_VA )( 
            IDiaSession * This,
            /* [in] */ ULONGLONG vaFunc,
            /* [in] */ DWORD cbFunc,
            /* [in] */ DWORD cFragments,
            /* [size_is][out] */ ULONGLONG *pVaFragment,
            /* [size_is][out] */ DWORD *pLenFragment);
        
        HRESULT ( STDMETHODCALLTYPE *getFunctionFragments_RVA )( 
            IDiaSession * This,
            /* [in] */ DWORD rvaFunc,
            /* [in] */ DWORD cbFunc,
            /* [in] */ DWORD cFragments,
            /* [size_is][out] */ DWORD *pRvaFragment,
            /* [size_is][out] */ DWORD *pLenFragment);
        
        HRESULT ( STDMETHODCALLTYPE *getExports )( 
            IDiaSession * This,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *getHeapAllocationSites )( 
            IDiaSession * This,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInputAssemblyFile )( 
            IDiaSession * This,
            /* [in] */ IDiaSymbol *pSymbol,
            /* [out] */ IDiaInputAssemblyFile **ppResult);
        
        END_INTERFACE
    } IDiaSessionVtbl;

    interface IDiaSession
    {
        CONST_VTBL struct IDiaSessionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaSession_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaSession_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaSession_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaSession_get_loadAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_loadAddress(This,pRetVal) ) 

#define IDiaSession_put_loadAddress(This,NewVal)	\
    ( (This)->lpVtbl -> put_loadAddress(This,NewVal) ) 

#define IDiaSession_get_globalScope(This,pRetVal)	\
    ( (This)->lpVtbl -> get_globalScope(This,pRetVal) ) 

#define IDiaSession_getEnumTables(This,ppEnumTables)	\
    ( (This)->lpVtbl -> getEnumTables(This,ppEnumTables) ) 

#define IDiaSession_getSymbolsByAddr(This,ppEnumbyAddr)	\
    ( (This)->lpVtbl -> getSymbolsByAddr(This,ppEnumbyAddr) ) 

#define IDiaSession_findChildren(This,parent,symtag,name,compareFlags,ppResult)	\
    ( (This)->lpVtbl -> findChildren(This,parent,symtag,name,compareFlags,ppResult) ) 

#define IDiaSession_findChildrenEx(This,parent,symtag,name,compareFlags,ppResult)	\
    ( (This)->lpVtbl -> findChildrenEx(This,parent,symtag,name,compareFlags,ppResult) ) 

#define IDiaSession_findChildrenExByAddr(This,parent,symtag,name,compareFlags,isect,offset,ppResult)	\
    ( (This)->lpVtbl -> findChildrenExByAddr(This,parent,symtag,name,compareFlags,isect,offset,ppResult) ) 

#define IDiaSession_findChildrenExByVA(This,parent,symtag,name,compareFlags,va,ppResult)	\
    ( (This)->lpVtbl -> findChildrenExByVA(This,parent,symtag,name,compareFlags,va,ppResult) ) 

#define IDiaSession_findChildrenExByRVA(This,parent,symtag,name,compareFlags,rva,ppResult)	\
    ( (This)->lpVtbl -> findChildrenExByRVA(This,parent,symtag,name,compareFlags,rva,ppResult) ) 

#define IDiaSession_findSymbolByAddr(This,isect,offset,symtag,ppSymbol)	\
    ( (This)->lpVtbl -> findSymbolByAddr(This,isect,offset,symtag,ppSymbol) ) 

#define IDiaSession_findSymbolByRVA(This,rva,symtag,ppSymbol)	\
    ( (This)->lpVtbl -> findSymbolByRVA(This,rva,symtag,ppSymbol) ) 

#define IDiaSession_findSymbolByVA(This,va,symtag,ppSymbol)	\
    ( (This)->lpVtbl -> findSymbolByVA(This,va,symtag,ppSymbol) ) 

#define IDiaSession_findSymbolByToken(This,token,symtag,ppSymbol)	\
    ( (This)->lpVtbl -> findSymbolByToken(This,token,symtag,ppSymbol) ) 

#define IDiaSession_symsAreEquiv(This,symbolA,symbolB)	\
    ( (This)->lpVtbl -> symsAreEquiv(This,symbolA,symbolB) ) 

#define IDiaSession_symbolById(This,id,ppSymbol)	\
    ( (This)->lpVtbl -> symbolById(This,id,ppSymbol) ) 

#define IDiaSession_findSymbolByRVAEx(This,rva,symtag,ppSymbol,displacement)	\
    ( (This)->lpVtbl -> findSymbolByRVAEx(This,rva,symtag,ppSymbol,displacement) ) 

#define IDiaSession_findSymbolByVAEx(This,va,symtag,ppSymbol,displacement)	\
    ( (This)->lpVtbl -> findSymbolByVAEx(This,va,symtag,ppSymbol,displacement) ) 

#define IDiaSession_findFile(This,pCompiland,name,compareFlags,ppResult)	\
    ( (This)->lpVtbl -> findFile(This,pCompiland,name,compareFlags,ppResult) ) 

#define IDiaSession_findFileById(This,uniqueId,ppResult)	\
    ( (This)->lpVtbl -> findFileById(This,uniqueId,ppResult) ) 

#define IDiaSession_findLines(This,compiland,file,ppResult)	\
    ( (This)->lpVtbl -> findLines(This,compiland,file,ppResult) ) 

#define IDiaSession_findLinesByAddr(This,seg,offset,length,ppResult)	\
    ( (This)->lpVtbl -> findLinesByAddr(This,seg,offset,length,ppResult) ) 

#define IDiaSession_findLinesByRVA(This,rva,length,ppResult)	\
    ( (This)->lpVtbl -> findLinesByRVA(This,rva,length,ppResult) ) 

#define IDiaSession_findLinesByVA(This,va,length,ppResult)	\
    ( (This)->lpVtbl -> findLinesByVA(This,va,length,ppResult) ) 

#define IDiaSession_findLinesByLinenum(This,compiland,file,linenum,column,ppResult)	\
    ( (This)->lpVtbl -> findLinesByLinenum(This,compiland,file,linenum,column,ppResult) ) 

#define IDiaSession_findInjectedSource(This,srcFile,ppResult)	\
    ( (This)->lpVtbl -> findInjectedSource(This,srcFile,ppResult) ) 

#define IDiaSession_getEnumDebugStreams(This,ppEnumDebugStreams)	\
    ( (This)->lpVtbl -> getEnumDebugStreams(This,ppEnumDebugStreams) ) 

#define IDiaSession_findInlineFramesByAddr(This,parent,isect,offset,ppResult)	\
    ( (This)->lpVtbl -> findInlineFramesByAddr(This,parent,isect,offset,ppResult) ) 

#define IDiaSession_findInlineFramesByRVA(This,parent,rva,ppResult)	\
    ( (This)->lpVtbl -> findInlineFramesByRVA(This,parent,rva,ppResult) ) 

#define IDiaSession_findInlineFramesByVA(This,parent,va,ppResult)	\
    ( (This)->lpVtbl -> findInlineFramesByVA(This,parent,va,ppResult) ) 

#define IDiaSession_findInlineeLines(This,parent,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLines(This,parent,ppResult) ) 

#define IDiaSession_findInlineeLinesByAddr(This,parent,isect,offset,length,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLinesByAddr(This,parent,isect,offset,length,ppResult) ) 

#define IDiaSession_findInlineeLinesByRVA(This,parent,rva,length,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLinesByRVA(This,parent,rva,length,ppResult) ) 

#define IDiaSession_findInlineeLinesByVA(This,parent,va,length,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLinesByVA(This,parent,va,length,ppResult) ) 

#define IDiaSession_findInlineeLinesByLinenum(This,compiland,file,linenum,column,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLinesByLinenum(This,compiland,file,linenum,column,ppResult) ) 

#define IDiaSession_findInlineesByName(This,name,option,ppResult)	\
    ( (This)->lpVtbl -> findInlineesByName(This,name,option,ppResult) ) 

#define IDiaSession_findAcceleratorInlineeLinesByLinenum(This,parent,file,linenum,column,ppResult)	\
    ( (This)->lpVtbl -> findAcceleratorInlineeLinesByLinenum(This,parent,file,linenum,column,ppResult) ) 

#define IDiaSession_findSymbolsForAcceleratorPointerTag(This,parent,tagValue,ppResult)	\
    ( (This)->lpVtbl -> findSymbolsForAcceleratorPointerTag(This,parent,tagValue,ppResult) ) 

#define IDiaSession_findSymbolsByRVAForAcceleratorPointerTag(This,parent,tagValue,rva,ppResult)	\
    ( (This)->lpVtbl -> findSymbolsByRVAForAcceleratorPointerTag(This,parent,tagValue,rva,ppResult) ) 

#define IDiaSession_findAcceleratorInlineesByName(This,name,option,ppResult)	\
    ( (This)->lpVtbl -> findAcceleratorInlineesByName(This,name,option,ppResult) ) 

#define IDiaSession_addressForVA(This,va,pISect,pOffset)	\
    ( (This)->lpVtbl -> addressForVA(This,va,pISect,pOffset) ) 

#define IDiaSession_addressForRVA(This,rva,pISect,pOffset)	\
    ( (This)->lpVtbl -> addressForRVA(This,rva,pISect,pOffset) ) 

#define IDiaSession_findILOffsetsByAddr(This,isect,offset,length,ppResult)	\
    ( (This)->lpVtbl -> findILOffsetsByAddr(This,isect,offset,length,ppResult) ) 

#define IDiaSession_findILOffsetsByRVA(This,rva,length,ppResult)	\
    ( (This)->lpVtbl -> findILOffsetsByRVA(This,rva,length,ppResult) ) 

#define IDiaSession_findILOffsetsByVA(This,va,length,ppResult)	\
    ( (This)->lpVtbl -> findILOffsetsByVA(This,va,length,ppResult) ) 

#define IDiaSession_findInputAssemblyFiles(This,ppResult)	\
    ( (This)->lpVtbl -> findInputAssemblyFiles(This,ppResult) ) 

#define IDiaSession_findInputAssembly(This,index,ppResult)	\
    ( (This)->lpVtbl -> findInputAssembly(This,index,ppResult) ) 

#define IDiaSession_findInputAssemblyById(This,uniqueId,ppResult)	\
    ( (This)->lpVtbl -> findInputAssemblyById(This,uniqueId,ppResult) ) 

#define IDiaSession_getFuncMDTokenMapSize(This,pcb)	\
    ( (This)->lpVtbl -> getFuncMDTokenMapSize(This,pcb) ) 

#define IDiaSession_getFuncMDTokenMap(This,cb,pcb,pb)	\
    ( (This)->lpVtbl -> getFuncMDTokenMap(This,cb,pcb,pb) ) 

#define IDiaSession_getTypeMDTokenMapSize(This,pcb)	\
    ( (This)->lpVtbl -> getTypeMDTokenMapSize(This,pcb) ) 

#define IDiaSession_getTypeMDTokenMap(This,cb,pcb,pb)	\
    ( (This)->lpVtbl -> getTypeMDTokenMap(This,cb,pcb,pb) ) 

#define IDiaSession_getNumberOfFunctionFragments_VA(This,vaFunc,cbFunc,pNumFragments)	\
    ( (This)->lpVtbl -> getNumberOfFunctionFragments_VA(This,vaFunc,cbFunc,pNumFragments) ) 

#define IDiaSession_getNumberOfFunctionFragments_RVA(This,rvaFunc,cbFunc,pNumFragments)	\
    ( (This)->lpVtbl -> getNumberOfFunctionFragments_RVA(This,rvaFunc,cbFunc,pNumFragments) ) 

#define IDiaSession_getFunctionFragments_VA(This,vaFunc,cbFunc,cFragments,pVaFragment,pLenFragment)	\
    ( (This)->lpVtbl -> getFunctionFragments_VA(This,vaFunc,cbFunc,cFragments,pVaFragment,pLenFragment) ) 

#define IDiaSession_getFunctionFragments_RVA(This,rvaFunc,cbFunc,cFragments,pRvaFragment,pLenFragment)	\
    ( (This)->lpVtbl -> getFunctionFragments_RVA(This,rvaFunc,cbFunc,cFragments,pRvaFragment,pLenFragment) ) 

#define IDiaSession_getExports(This,ppResult)	\
    ( (This)->lpVtbl -> getExports(This,ppResult) ) 

#define IDiaSession_getHeapAllocationSites(This,ppResult)	\
    ( (This)->lpVtbl -> getHeapAllocationSites(This,ppResult) ) 

#define IDiaSession_findInputAssemblyFile(This,pSymbol,ppResult)	\
    ( (This)->lpVtbl -> findInputAssemblyFile(This,pSymbol,ppResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaSession_INTERFACE_DEFINED__ */


#ifndef __IDiaSymbol_INTERFACE_DEFINED__
#define __IDiaSymbol_INTERFACE_DEFINED__

/* interface IDiaSymbol */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaSymbol;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cb787b2f-bd6c-4635-ba52-933126bd2dcd")
    IDiaSymbol : public IUnknown
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_symIndexId( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_symTag( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_name( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_lexicalParent( 
            /* [retval][out] */ IDiaSymbol **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_classParent( 
            /* [retval][out] */ IDiaSymbol **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_type( 
            /* [retval][out] */ IDiaSymbol **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_dataKind( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_locationType( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_addressSection( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_addressOffset( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_relativeVirtualAddress( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_virtualAddress( 
            /* [retval][out] */ ULONGLONG *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_registerId( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_offset( 
            /* [retval][out] */ LONG *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_length( 
            /* [retval][out] */ ULONGLONG *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_slot( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_volatileType( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_constType( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_unalignedType( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_access( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_libraryName( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_platform( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_language( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_editAndContinueEnabled( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_frontEndMajor( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_frontEndMinor( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_frontEndBuild( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_backEndMajor( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_backEndMinor( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_backEndBuild( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_sourceFileName( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_unused( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_thunkOrdinal( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_thisAdjust( 
            /* [retval][out] */ LONG *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_virtualBaseOffset( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_virtual( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_intro( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_pure( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_callingConvention( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_value( 
            /* [retval][out] */ VARIANT *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_baseType( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_token( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_timeStamp( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_guid( 
            /* [retval][out] */ GUID *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_symbolsFileName( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_reference( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_count( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_bitPosition( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_arrayIndexType( 
            /* [retval][out] */ IDiaSymbol **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_packed( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_constructor( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_overloadedOperator( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_nested( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_hasNestedTypes( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_hasAssignmentOperator( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_hasCastOperator( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_scoped( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_virtualBaseClass( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_indirectVirtualBaseClass( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_virtualBasePointerOffset( 
            /* [retval][out] */ LONG *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_virtualTableShape( 
            /* [retval][out] */ IDiaSymbol **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_lexicalParentId( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_classParentId( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_typeId( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_arrayIndexTypeId( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_virtualTableShapeId( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_code( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_function( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_managed( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_msil( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_virtualBaseDispIndex( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_undecoratedName( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_age( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_signature( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_compilerGenerated( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_addressTaken( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_rank( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_lowerBound( 
            /* [retval][out] */ IDiaSymbol **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_upperBound( 
            /* [retval][out] */ IDiaSymbol **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_lowerBoundId( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_upperBoundId( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_dataBytes( 
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findChildren( 
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [out] */ IDiaEnumSymbols **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findChildrenEx( 
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [out] */ IDiaEnumSymbols **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findChildrenExByAddr( 
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [out] */ IDiaEnumSymbols **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findChildrenExByVA( 
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ ULONGLONG va,
            /* [out] */ IDiaEnumSymbols **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findChildrenExByRVA( 
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_targetSection( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_targetOffset( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_targetRelativeVirtualAddress( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_targetVirtualAddress( 
            /* [retval][out] */ ULONGLONG *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_machineType( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_oemId( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_oemSymbolId( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_types( 
            /* [in] */ DWORD cTypes,
            /* [out] */ DWORD *pcTypes,
            /* [size_is][size_is][out] */ IDiaSymbol **pTypes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_typeIds( 
            /* [in] */ DWORD cTypeIds,
            /* [out] */ DWORD *pcTypeIds,
            /* [size_is][out] */ DWORD *pdwTypeIds) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_objectPointerType( 
            /* [retval][out] */ IDiaSymbol **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_udtKind( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_undecoratedNameEx( 
            /* [in] */ DWORD undecorateOptions,
            /* [out] */ BSTR *name) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_noReturn( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_customCallingConvention( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_noInline( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_optimizedCodeDebugInfo( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_notReached( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_interruptReturn( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_farReturn( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isStatic( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_hasDebugInfo( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isLTCG( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isDataAligned( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_hasSecurityChecks( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_compilerName( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_hasAlloca( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_hasSetJump( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_hasLongJump( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_hasInlAsm( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_hasEH( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_hasSEH( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_hasEHa( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isNaked( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isAggregated( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isSplitted( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_container( 
            /* [retval][out] */ IDiaSymbol **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_inlSpec( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_noStackOrdering( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_virtualBaseTableType( 
            /* [retval][out] */ IDiaSymbol **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_hasManagedCode( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isHotpatchable( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isCVTCIL( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isMSILNetmodule( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isCTypes( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isStripped( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_frontEndQFE( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_backEndQFE( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_wasInlined( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_strictGSCheck( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isCxxReturnUdt( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isConstructorVirtualBase( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RValueReference( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_unmodifiedType( 
            /* [retval][out] */ IDiaSymbol **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_framePointerPresent( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isSafeBuffers( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_intrinsic( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_sealed( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_hfaFloat( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_hfaDouble( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_liveRangeStartAddressSection( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_liveRangeStartAddressOffset( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_liveRangeStartRelativeVirtualAddress( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_countLiveRanges( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_liveRangeLength( 
            /* [retval][out] */ ULONGLONG *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_offsetInUdt( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_paramBasePointerRegisterId( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_localBasePointerRegisterId( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isLocationControlFlowDependent( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_stride( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_numberOfRows( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_numberOfColumns( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isMatrixRowMajor( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_numericProperties( 
            /* [in] */ DWORD cnt,
            /* [out] */ DWORD *pcnt,
            /* [size_is][out] */ DWORD *pProperties) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_modifierValues( 
            /* [in] */ DWORD cnt,
            /* [out] */ DWORD *pcnt,
            /* [size_is][out] */ WORD *pModifiers) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isReturnValue( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isOptimizedAway( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_builtInKind( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_registerType( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_baseDataSlot( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_baseDataOffset( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_textureSlot( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_samplerSlot( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_uavSlot( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_sizeInUdt( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_memorySpaceKind( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_unmodifiedTypeId( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_subTypeId( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_subType( 
            /* [retval][out] */ IDiaSymbol **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_numberOfModifiers( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_numberOfRegisterIndices( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isHLSLData( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isPointerToDataMember( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isPointerToMemberFunction( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isSingleInheritance( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isMultipleInheritance( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isVirtualInheritance( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_restrictedType( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isPointerBasedOnSymbolValue( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_baseSymbol( 
            /* [retval][out] */ IDiaSymbol **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_baseSymbolId( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_objectFileName( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isAcceleratorGroupSharedLocal( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isAcceleratorPointerTagLiveRange( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isAcceleratorStubFunction( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_numberOfAcceleratorPointerTags( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isSdl( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isWinRTPointer( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isRefUdt( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isValueUdt( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isInterfaceUdt( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findInlineFramesByAddr( 
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [out] */ IDiaEnumSymbols **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findInlineFramesByRVA( 
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findInlineFramesByVA( 
            /* [in] */ ULONGLONG va,
            /* [out] */ IDiaEnumSymbols **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findInlineeLines( 
            /* [out] */ IDiaEnumLineNumbers **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findInlineeLinesByAddr( 
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findInlineeLinesByRVA( 
            /* [in] */ DWORD rva,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findInlineeLinesByVA( 
            /* [in] */ ULONGLONG va,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findSymbolsForAcceleratorPointerTag( 
            /* [in] */ DWORD tagValue,
            /* [out] */ IDiaEnumSymbols **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findSymbolsByRVAForAcceleratorPointerTag( 
            /* [in] */ DWORD tagValue,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_acceleratorPointerTags( 
            /* [in] */ DWORD cnt,
            /* [out] */ DWORD *pcnt,
            /* [size_is][out] */ DWORD *pPointerTags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE getSrcLineOnTypeDefn( 
            /* [out] */ IDiaLineNumber **ppResult) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isPGO( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_hasValidPGOCounts( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isOptimizedForSpeed( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PGOEntryCount( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PGOEdgeCount( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PGODynamicInstructionCount( 
            /* [retval][out] */ ULONGLONG *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_staticSize( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_finalLiveStaticSize( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_phaseName( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_hasControlFlowCheck( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_constantExport( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_dataExport( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_privateExport( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_noNameExport( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_exportHasExplicitlyAssignedOrdinal( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_exportIsForwarder( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ordinal( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_frameSize( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_exceptionHandlerAddressSection( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_exceptionHandlerAddressOffset( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_exceptionHandlerRelativeVirtualAddress( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_exceptionHandlerVirtualAddress( 
            /* [retval][out] */ ULONGLONG *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE findInputAssemblyFile( 
            /* [out] */ IDiaInputAssemblyFile **ppResult) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_characteristics( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_coffGroup( 
            /* [retval][out] */ IDiaSymbol **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_bindID( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_bindSpace( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_bindSlot( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaSymbolVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaSymbol * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaSymbol * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaSymbol * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_symIndexId )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_symTag )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_name )( 
            IDiaSymbol * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lexicalParent )( 
            IDiaSymbol * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_classParent )( 
            IDiaSymbol * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_type )( 
            IDiaSymbol * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_dataKind )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_locationType )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressSection )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressOffset )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_relativeVirtualAddress )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualAddress )( 
            IDiaSymbol * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_registerId )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_offset )( 
            IDiaSymbol * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_length )( 
            IDiaSymbol * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_slot )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_volatileType )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_constType )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unalignedType )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_access )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_libraryName )( 
            IDiaSymbol * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_platform )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_language )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_editAndContinueEnabled )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndMajor )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndMinor )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndBuild )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndMajor )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndMinor )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndBuild )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sourceFileName )( 
            IDiaSymbol * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unused )( 
            IDiaSymbol * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_thunkOrdinal )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_thisAdjust )( 
            IDiaSymbol * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseOffset )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtual )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_intro )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_pure )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_callingConvention )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_value )( 
            IDiaSymbol * This,
            /* [retval][out] */ VARIANT *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseType )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_token )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_timeStamp )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_guid )( 
            IDiaSymbol * This,
            /* [retval][out] */ GUID *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_symbolsFileName )( 
            IDiaSymbol * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_reference )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_count )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bitPosition )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_arrayIndexType )( 
            IDiaSymbol * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_packed )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_constructor )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_overloadedOperator )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_nested )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasNestedTypes )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasAssignmentOperator )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasCastOperator )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_scoped )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseClass )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_indirectVirtualBaseClass )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBasePointerOffset )( 
            IDiaSymbol * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualTableShape )( 
            IDiaSymbol * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lexicalParentId )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_classParentId )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_typeId )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_arrayIndexTypeId )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualTableShapeId )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_code )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_function )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_managed )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_msil )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseDispIndex )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_undecoratedName )( 
            IDiaSymbol * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_age )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_signature )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_compilerGenerated )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressTaken )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_rank )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lowerBound )( 
            IDiaSymbol * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_upperBound )( 
            IDiaSymbol * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lowerBoundId )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_upperBoundId )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_dataBytes )( 
            IDiaSymbol * This,
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData);
        
        HRESULT ( STDMETHODCALLTYPE *findChildren )( 
            IDiaSymbol * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenEx )( 
            IDiaSymbol * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenExByAddr )( 
            IDiaSymbol * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenExByVA )( 
            IDiaSymbol * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ ULONGLONG va,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenExByRVA )( 
            IDiaSymbol * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetSection )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetOffset )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetRelativeVirtualAddress )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetVirtualAddress )( 
            IDiaSymbol * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_machineType )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_oemId )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_oemSymbolId )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_types )( 
            IDiaSymbol * This,
            /* [in] */ DWORD cTypes,
            /* [out] */ DWORD *pcTypes,
            /* [size_is][size_is][out] */ IDiaSymbol **pTypes);
        
        HRESULT ( STDMETHODCALLTYPE *get_typeIds )( 
            IDiaSymbol * This,
            /* [in] */ DWORD cTypeIds,
            /* [out] */ DWORD *pcTypeIds,
            /* [size_is][out] */ DWORD *pdwTypeIds);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_objectPointerType )( 
            IDiaSymbol * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_udtKind )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_undecoratedNameEx )( 
            IDiaSymbol * This,
            /* [in] */ DWORD undecorateOptions,
            /* [out] */ BSTR *name);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noReturn )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_customCallingConvention )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noInline )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_optimizedCodeDebugInfo )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_notReached )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_interruptReturn )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_farReturn )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isStatic )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasDebugInfo )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isLTCG )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isDataAligned )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasSecurityChecks )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_compilerName )( 
            IDiaSymbol * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasAlloca )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasSetJump )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasLongJump )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasInlAsm )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasEH )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasSEH )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasEHa )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isNaked )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAggregated )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSplitted )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_container )( 
            IDiaSymbol * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_inlSpec )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noStackOrdering )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseTableType )( 
            IDiaSymbol * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasManagedCode )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isHotpatchable )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isCVTCIL )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isMSILNetmodule )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isCTypes )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isStripped )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndQFE )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndQFE )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_wasInlined )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_strictGSCheck )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isCxxReturnUdt )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isConstructorVirtualBase )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RValueReference )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unmodifiedType )( 
            IDiaSymbol * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_framePointerPresent )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSafeBuffers )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_intrinsic )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sealed )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hfaFloat )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hfaDouble )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeStartAddressSection )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeStartAddressOffset )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeStartRelativeVirtualAddress )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_countLiveRanges )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeLength )( 
            IDiaSymbol * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_offsetInUdt )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_paramBasePointerRegisterId )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_localBasePointerRegisterId )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isLocationControlFlowDependent )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_stride )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfRows )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfColumns )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isMatrixRowMajor )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_numericProperties )( 
            IDiaSymbol * This,
            /* [in] */ DWORD cnt,
            /* [out] */ DWORD *pcnt,
            /* [size_is][out] */ DWORD *pProperties);
        
        HRESULT ( STDMETHODCALLTYPE *get_modifierValues )( 
            IDiaSymbol * This,
            /* [in] */ DWORD cnt,
            /* [out] */ DWORD *pcnt,
            /* [size_is][out] */ WORD *pModifiers);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isReturnValue )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isOptimizedAway )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_builtInKind )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_registerType )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseDataSlot )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseDataOffset )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_textureSlot )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_samplerSlot )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_uavSlot )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sizeInUdt )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_memorySpaceKind )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unmodifiedTypeId )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_subTypeId )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_subType )( 
            IDiaSymbol * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfModifiers )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfRegisterIndices )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isHLSLData )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPointerToDataMember )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPointerToMemberFunction )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSingleInheritance )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isMultipleInheritance )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isVirtualInheritance )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_restrictedType )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPointerBasedOnSymbolValue )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseSymbol )( 
            IDiaSymbol * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseSymbolId )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_objectFileName )( 
            IDiaSymbol * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAcceleratorGroupSharedLocal )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAcceleratorPointerTagLiveRange )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAcceleratorStubFunction )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfAcceleratorPointerTags )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSdl )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isWinRTPointer )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isRefUdt )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isValueUdt )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isInterfaceUdt )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineFramesByAddr )( 
            IDiaSymbol * This,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineFramesByRVA )( 
            IDiaSymbol * This,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineFramesByVA )( 
            IDiaSymbol * This,
            /* [in] */ ULONGLONG va,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLines )( 
            IDiaSymbol * This,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLinesByAddr )( 
            IDiaSymbol * This,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLinesByRVA )( 
            IDiaSymbol * This,
            /* [in] */ DWORD rva,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLinesByVA )( 
            IDiaSymbol * This,
            /* [in] */ ULONGLONG va,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findSymbolsForAcceleratorPointerTag )( 
            IDiaSymbol * This,
            /* [in] */ DWORD tagValue,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findSymbolsByRVAForAcceleratorPointerTag )( 
            IDiaSymbol * This,
            /* [in] */ DWORD tagValue,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *get_acceleratorPointerTags )( 
            IDiaSymbol * This,
            /* [in] */ DWORD cnt,
            /* [out] */ DWORD *pcnt,
            /* [size_is][out] */ DWORD *pPointerTags);
        
        HRESULT ( STDMETHODCALLTYPE *getSrcLineOnTypeDefn )( 
            IDiaSymbol * This,
            /* [out] */ IDiaLineNumber **ppResult);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPGO )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasValidPGOCounts )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isOptimizedForSpeed )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PGOEntryCount )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PGOEdgeCount )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PGODynamicInstructionCount )( 
            IDiaSymbol * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_staticSize )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_finalLiveStaticSize )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_phaseName )( 
            IDiaSymbol * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasControlFlowCheck )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_constantExport )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_dataExport )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_privateExport )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noNameExport )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exportHasExplicitlyAssignedOrdinal )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exportIsForwarder )( 
            IDiaSymbol * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ordinal )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frameSize )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerAddressSection )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerAddressOffset )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerRelativeVirtualAddress )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerVirtualAddress )( 
            IDiaSymbol * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *findInputAssemblyFile )( 
            IDiaSymbol * This,
            /* [out] */ IDiaInputAssemblyFile **ppResult);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_characteristics )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_coffGroup )( 
            IDiaSymbol * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bindID )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bindSpace )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bindSlot )( 
            IDiaSymbol * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        END_INTERFACE
    } IDiaSymbolVtbl;

    interface IDiaSymbol
    {
        CONST_VTBL struct IDiaSymbolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaSymbol_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaSymbol_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaSymbol_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaSymbol_get_symIndexId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_symIndexId(This,pRetVal) ) 

#define IDiaSymbol_get_symTag(This,pRetVal)	\
    ( (This)->lpVtbl -> get_symTag(This,pRetVal) ) 

#define IDiaSymbol_get_name(This,pRetVal)	\
    ( (This)->lpVtbl -> get_name(This,pRetVal) ) 

#define IDiaSymbol_get_lexicalParent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lexicalParent(This,pRetVal) ) 

#define IDiaSymbol_get_classParent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_classParent(This,pRetVal) ) 

#define IDiaSymbol_get_type(This,pRetVal)	\
    ( (This)->lpVtbl -> get_type(This,pRetVal) ) 

#define IDiaSymbol_get_dataKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_dataKind(This,pRetVal) ) 

#define IDiaSymbol_get_locationType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_locationType(This,pRetVal) ) 

#define IDiaSymbol_get_addressSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressSection(This,pRetVal) ) 

#define IDiaSymbol_get_addressOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressOffset(This,pRetVal) ) 

#define IDiaSymbol_get_relativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_relativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol_get_virtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualAddress(This,pRetVal) ) 

#define IDiaSymbol_get_registerId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_registerId(This,pRetVal) ) 

#define IDiaSymbol_get_offset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_offset(This,pRetVal) ) 

#define IDiaSymbol_get_length(This,pRetVal)	\
    ( (This)->lpVtbl -> get_length(This,pRetVal) ) 

#define IDiaSymbol_get_slot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_slot(This,pRetVal) ) 

#define IDiaSymbol_get_volatileType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_volatileType(This,pRetVal) ) 

#define IDiaSymbol_get_constType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_constType(This,pRetVal) ) 

#define IDiaSymbol_get_unalignedType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unalignedType(This,pRetVal) ) 

#define IDiaSymbol_get_access(This,pRetVal)	\
    ( (This)->lpVtbl -> get_access(This,pRetVal) ) 

#define IDiaSymbol_get_libraryName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_libraryName(This,pRetVal) ) 

#define IDiaSymbol_get_platform(This,pRetVal)	\
    ( (This)->lpVtbl -> get_platform(This,pRetVal) ) 

#define IDiaSymbol_get_language(This,pRetVal)	\
    ( (This)->lpVtbl -> get_language(This,pRetVal) ) 

#define IDiaSymbol_get_editAndContinueEnabled(This,pRetVal)	\
    ( (This)->lpVtbl -> get_editAndContinueEnabled(This,pRetVal) ) 

#define IDiaSymbol_get_frontEndMajor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndMajor(This,pRetVal) ) 

#define IDiaSymbol_get_frontEndMinor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndMinor(This,pRetVal) ) 

#define IDiaSymbol_get_frontEndBuild(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndBuild(This,pRetVal) ) 

#define IDiaSymbol_get_backEndMajor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndMajor(This,pRetVal) ) 

#define IDiaSymbol_get_backEndMinor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndMinor(This,pRetVal) ) 

#define IDiaSymbol_get_backEndBuild(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndBuild(This,pRetVal) ) 

#define IDiaSymbol_get_sourceFileName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_sourceFileName(This,pRetVal) ) 

#define IDiaSymbol_get_unused(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unused(This,pRetVal) ) 

#define IDiaSymbol_get_thunkOrdinal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_thunkOrdinal(This,pRetVal) ) 

#define IDiaSymbol_get_thisAdjust(This,pRetVal)	\
    ( (This)->lpVtbl -> get_thisAdjust(This,pRetVal) ) 

#define IDiaSymbol_get_virtualBaseOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseOffset(This,pRetVal) ) 

#define IDiaSymbol_get_virtual(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtual(This,pRetVal) ) 

#define IDiaSymbol_get_intro(This,pRetVal)	\
    ( (This)->lpVtbl -> get_intro(This,pRetVal) ) 

#define IDiaSymbol_get_pure(This,pRetVal)	\
    ( (This)->lpVtbl -> get_pure(This,pRetVal) ) 

#define IDiaSymbol_get_callingConvention(This,pRetVal)	\
    ( (This)->lpVtbl -> get_callingConvention(This,pRetVal) ) 

#define IDiaSymbol_get_value(This,pRetVal)	\
    ( (This)->lpVtbl -> get_value(This,pRetVal) ) 

#define IDiaSymbol_get_baseType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseType(This,pRetVal) ) 

#define IDiaSymbol_get_token(This,pRetVal)	\
    ( (This)->lpVtbl -> get_token(This,pRetVal) ) 

#define IDiaSymbol_get_timeStamp(This,pRetVal)	\
    ( (This)->lpVtbl -> get_timeStamp(This,pRetVal) ) 

#define IDiaSymbol_get_guid(This,pRetVal)	\
    ( (This)->lpVtbl -> get_guid(This,pRetVal) ) 

#define IDiaSymbol_get_symbolsFileName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_symbolsFileName(This,pRetVal) ) 

#define IDiaSymbol_get_reference(This,pRetVal)	\
    ( (This)->lpVtbl -> get_reference(This,pRetVal) ) 

#define IDiaSymbol_get_count(This,pRetVal)	\
    ( (This)->lpVtbl -> get_count(This,pRetVal) ) 

#define IDiaSymbol_get_bitPosition(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bitPosition(This,pRetVal) ) 

#define IDiaSymbol_get_arrayIndexType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_arrayIndexType(This,pRetVal) ) 

#define IDiaSymbol_get_packed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_packed(This,pRetVal) ) 

#define IDiaSymbol_get_constructor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_constructor(This,pRetVal) ) 

#define IDiaSymbol_get_overloadedOperator(This,pRetVal)	\
    ( (This)->lpVtbl -> get_overloadedOperator(This,pRetVal) ) 

#define IDiaSymbol_get_nested(This,pRetVal)	\
    ( (This)->lpVtbl -> get_nested(This,pRetVal) ) 

#define IDiaSymbol_get_hasNestedTypes(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasNestedTypes(This,pRetVal) ) 

#define IDiaSymbol_get_hasAssignmentOperator(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasAssignmentOperator(This,pRetVal) ) 

#define IDiaSymbol_get_hasCastOperator(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasCastOperator(This,pRetVal) ) 

#define IDiaSymbol_get_scoped(This,pRetVal)	\
    ( (This)->lpVtbl -> get_scoped(This,pRetVal) ) 

#define IDiaSymbol_get_virtualBaseClass(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseClass(This,pRetVal) ) 

#define IDiaSymbol_get_indirectVirtualBaseClass(This,pRetVal)	\
    ( (This)->lpVtbl -> get_indirectVirtualBaseClass(This,pRetVal) ) 

#define IDiaSymbol_get_virtualBasePointerOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBasePointerOffset(This,pRetVal) ) 

#define IDiaSymbol_get_virtualTableShape(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualTableShape(This,pRetVal) ) 

#define IDiaSymbol_get_lexicalParentId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lexicalParentId(This,pRetVal) ) 

#define IDiaSymbol_get_classParentId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_classParentId(This,pRetVal) ) 

#define IDiaSymbol_get_typeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_typeId(This,pRetVal) ) 

#define IDiaSymbol_get_arrayIndexTypeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_arrayIndexTypeId(This,pRetVal) ) 

#define IDiaSymbol_get_virtualTableShapeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualTableShapeId(This,pRetVal) ) 

#define IDiaSymbol_get_code(This,pRetVal)	\
    ( (This)->lpVtbl -> get_code(This,pRetVal) ) 

#define IDiaSymbol_get_function(This,pRetVal)	\
    ( (This)->lpVtbl -> get_function(This,pRetVal) ) 

#define IDiaSymbol_get_managed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_managed(This,pRetVal) ) 

#define IDiaSymbol_get_msil(This,pRetVal)	\
    ( (This)->lpVtbl -> get_msil(This,pRetVal) ) 

#define IDiaSymbol_get_virtualBaseDispIndex(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseDispIndex(This,pRetVal) ) 

#define IDiaSymbol_get_undecoratedName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_undecoratedName(This,pRetVal) ) 

#define IDiaSymbol_get_age(This,pRetVal)	\
    ( (This)->lpVtbl -> get_age(This,pRetVal) ) 

#define IDiaSymbol_get_signature(This,pRetVal)	\
    ( (This)->lpVtbl -> get_signature(This,pRetVal) ) 

#define IDiaSymbol_get_compilerGenerated(This,pRetVal)	\
    ( (This)->lpVtbl -> get_compilerGenerated(This,pRetVal) ) 

#define IDiaSymbol_get_addressTaken(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressTaken(This,pRetVal) ) 

#define IDiaSymbol_get_rank(This,pRetVal)	\
    ( (This)->lpVtbl -> get_rank(This,pRetVal) ) 

#define IDiaSymbol_get_lowerBound(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lowerBound(This,pRetVal) ) 

#define IDiaSymbol_get_upperBound(This,pRetVal)	\
    ( (This)->lpVtbl -> get_upperBound(This,pRetVal) ) 

#define IDiaSymbol_get_lowerBoundId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lowerBoundId(This,pRetVal) ) 

#define IDiaSymbol_get_upperBoundId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_upperBoundId(This,pRetVal) ) 

#define IDiaSymbol_get_dataBytes(This,cbData,pcbData,pbData)	\
    ( (This)->lpVtbl -> get_dataBytes(This,cbData,pcbData,pbData) ) 

#define IDiaSymbol_findChildren(This,symtag,name,compareFlags,ppResult)	\
    ( (This)->lpVtbl -> findChildren(This,symtag,name,compareFlags,ppResult) ) 

#define IDiaSymbol_findChildrenEx(This,symtag,name,compareFlags,ppResult)	\
    ( (This)->lpVtbl -> findChildrenEx(This,symtag,name,compareFlags,ppResult) ) 

#define IDiaSymbol_findChildrenExByAddr(This,symtag,name,compareFlags,isect,offset,ppResult)	\
    ( (This)->lpVtbl -> findChildrenExByAddr(This,symtag,name,compareFlags,isect,offset,ppResult) ) 

#define IDiaSymbol_findChildrenExByVA(This,symtag,name,compareFlags,va,ppResult)	\
    ( (This)->lpVtbl -> findChildrenExByVA(This,symtag,name,compareFlags,va,ppResult) ) 

#define IDiaSymbol_findChildrenExByRVA(This,symtag,name,compareFlags,rva,ppResult)	\
    ( (This)->lpVtbl -> findChildrenExByRVA(This,symtag,name,compareFlags,rva,ppResult) ) 

#define IDiaSymbol_get_targetSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetSection(This,pRetVal) ) 

#define IDiaSymbol_get_targetOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetOffset(This,pRetVal) ) 

#define IDiaSymbol_get_targetRelativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetRelativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol_get_targetVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol_get_machineType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_machineType(This,pRetVal) ) 

#define IDiaSymbol_get_oemId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_oemId(This,pRetVal) ) 

#define IDiaSymbol_get_oemSymbolId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_oemSymbolId(This,pRetVal) ) 

#define IDiaSymbol_get_types(This,cTypes,pcTypes,pTypes)	\
    ( (This)->lpVtbl -> get_types(This,cTypes,pcTypes,pTypes) ) 

#define IDiaSymbol_get_typeIds(This,cTypeIds,pcTypeIds,pdwTypeIds)	\
    ( (This)->lpVtbl -> get_typeIds(This,cTypeIds,pcTypeIds,pdwTypeIds) ) 

#define IDiaSymbol_get_objectPointerType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_objectPointerType(This,pRetVal) ) 

#define IDiaSymbol_get_udtKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_udtKind(This,pRetVal) ) 

#define IDiaSymbol_get_undecoratedNameEx(This,undecorateOptions,name)	\
    ( (This)->lpVtbl -> get_undecoratedNameEx(This,undecorateOptions,name) ) 

#define IDiaSymbol_get_noReturn(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noReturn(This,pRetVal) ) 

#define IDiaSymbol_get_customCallingConvention(This,pRetVal)	\
    ( (This)->lpVtbl -> get_customCallingConvention(This,pRetVal) ) 

#define IDiaSymbol_get_noInline(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noInline(This,pRetVal) ) 

#define IDiaSymbol_get_optimizedCodeDebugInfo(This,pRetVal)	\
    ( (This)->lpVtbl -> get_optimizedCodeDebugInfo(This,pRetVal) ) 

#define IDiaSymbol_get_notReached(This,pRetVal)	\
    ( (This)->lpVtbl -> get_notReached(This,pRetVal) ) 

#define IDiaSymbol_get_interruptReturn(This,pRetVal)	\
    ( (This)->lpVtbl -> get_interruptReturn(This,pRetVal) ) 

#define IDiaSymbol_get_farReturn(This,pRetVal)	\
    ( (This)->lpVtbl -> get_farReturn(This,pRetVal) ) 

#define IDiaSymbol_get_isStatic(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isStatic(This,pRetVal) ) 

#define IDiaSymbol_get_hasDebugInfo(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasDebugInfo(This,pRetVal) ) 

#define IDiaSymbol_get_isLTCG(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isLTCG(This,pRetVal) ) 

#define IDiaSymbol_get_isDataAligned(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isDataAligned(This,pRetVal) ) 

#define IDiaSymbol_get_hasSecurityChecks(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasSecurityChecks(This,pRetVal) ) 

#define IDiaSymbol_get_compilerName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_compilerName(This,pRetVal) ) 

#define IDiaSymbol_get_hasAlloca(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasAlloca(This,pRetVal) ) 

#define IDiaSymbol_get_hasSetJump(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasSetJump(This,pRetVal) ) 

#define IDiaSymbol_get_hasLongJump(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasLongJump(This,pRetVal) ) 

#define IDiaSymbol_get_hasInlAsm(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasInlAsm(This,pRetVal) ) 

#define IDiaSymbol_get_hasEH(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasEH(This,pRetVal) ) 

#define IDiaSymbol_get_hasSEH(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasSEH(This,pRetVal) ) 

#define IDiaSymbol_get_hasEHa(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasEHa(This,pRetVal) ) 

#define IDiaSymbol_get_isNaked(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isNaked(This,pRetVal) ) 

#define IDiaSymbol_get_isAggregated(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAggregated(This,pRetVal) ) 

#define IDiaSymbol_get_isSplitted(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSplitted(This,pRetVal) ) 

#define IDiaSymbol_get_container(This,pRetVal)	\
    ( (This)->lpVtbl -> get_container(This,pRetVal) ) 

#define IDiaSymbol_get_inlSpec(This,pRetVal)	\
    ( (This)->lpVtbl -> get_inlSpec(This,pRetVal) ) 

#define IDiaSymbol_get_noStackOrdering(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noStackOrdering(This,pRetVal) ) 

#define IDiaSymbol_get_virtualBaseTableType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseTableType(This,pRetVal) ) 

#define IDiaSymbol_get_hasManagedCode(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasManagedCode(This,pRetVal) ) 

#define IDiaSymbol_get_isHotpatchable(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isHotpatchable(This,pRetVal) ) 

#define IDiaSymbol_get_isCVTCIL(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isCVTCIL(This,pRetVal) ) 

#define IDiaSymbol_get_isMSILNetmodule(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isMSILNetmodule(This,pRetVal) ) 

#define IDiaSymbol_get_isCTypes(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isCTypes(This,pRetVal) ) 

#define IDiaSymbol_get_isStripped(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isStripped(This,pRetVal) ) 

#define IDiaSymbol_get_frontEndQFE(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndQFE(This,pRetVal) ) 

#define IDiaSymbol_get_backEndQFE(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndQFE(This,pRetVal) ) 

#define IDiaSymbol_get_wasInlined(This,pRetVal)	\
    ( (This)->lpVtbl -> get_wasInlined(This,pRetVal) ) 

#define IDiaSymbol_get_strictGSCheck(This,pRetVal)	\
    ( (This)->lpVtbl -> get_strictGSCheck(This,pRetVal) ) 

#define IDiaSymbol_get_isCxxReturnUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isCxxReturnUdt(This,pRetVal) ) 

#define IDiaSymbol_get_isConstructorVirtualBase(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isConstructorVirtualBase(This,pRetVal) ) 

#define IDiaSymbol_get_RValueReference(This,pRetVal)	\
    ( (This)->lpVtbl -> get_RValueReference(This,pRetVal) ) 

#define IDiaSymbol_get_unmodifiedType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unmodifiedType(This,pRetVal) ) 

#define IDiaSymbol_get_framePointerPresent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_framePointerPresent(This,pRetVal) ) 

#define IDiaSymbol_get_isSafeBuffers(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSafeBuffers(This,pRetVal) ) 

#define IDiaSymbol_get_intrinsic(This,pRetVal)	\
    ( (This)->lpVtbl -> get_intrinsic(This,pRetVal) ) 

#define IDiaSymbol_get_sealed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_sealed(This,pRetVal) ) 

#define IDiaSymbol_get_hfaFloat(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hfaFloat(This,pRetVal) ) 

#define IDiaSymbol_get_hfaDouble(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hfaDouble(This,pRetVal) ) 

#define IDiaSymbol_get_liveRangeStartAddressSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeStartAddressSection(This,pRetVal) ) 

#define IDiaSymbol_get_liveRangeStartAddressOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeStartAddressOffset(This,pRetVal) ) 

#define IDiaSymbol_get_liveRangeStartRelativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeStartRelativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol_get_countLiveRanges(This,pRetVal)	\
    ( (This)->lpVtbl -> get_countLiveRanges(This,pRetVal) ) 

#define IDiaSymbol_get_liveRangeLength(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeLength(This,pRetVal) ) 

#define IDiaSymbol_get_offsetInUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_offsetInUdt(This,pRetVal) ) 

#define IDiaSymbol_get_paramBasePointerRegisterId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_paramBasePointerRegisterId(This,pRetVal) ) 

#define IDiaSymbol_get_localBasePointerRegisterId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_localBasePointerRegisterId(This,pRetVal) ) 

#define IDiaSymbol_get_isLocationControlFlowDependent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isLocationControlFlowDependent(This,pRetVal) ) 

#define IDiaSymbol_get_stride(This,pRetVal)	\
    ( (This)->lpVtbl -> get_stride(This,pRetVal) ) 

#define IDiaSymbol_get_numberOfRows(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfRows(This,pRetVal) ) 

#define IDiaSymbol_get_numberOfColumns(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfColumns(This,pRetVal) ) 

#define IDiaSymbol_get_isMatrixRowMajor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isMatrixRowMajor(This,pRetVal) ) 

#define IDiaSymbol_get_numericProperties(This,cnt,pcnt,pProperties)	\
    ( (This)->lpVtbl -> get_numericProperties(This,cnt,pcnt,pProperties) ) 

#define IDiaSymbol_get_modifierValues(This,cnt,pcnt,pModifiers)	\
    ( (This)->lpVtbl -> get_modifierValues(This,cnt,pcnt,pModifiers) ) 

#define IDiaSymbol_get_isReturnValue(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isReturnValue(This,pRetVal) ) 

#define IDiaSymbol_get_isOptimizedAway(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isOptimizedAway(This,pRetVal) ) 

#define IDiaSymbol_get_builtInKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_builtInKind(This,pRetVal) ) 

#define IDiaSymbol_get_registerType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_registerType(This,pRetVal) ) 

#define IDiaSymbol_get_baseDataSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseDataSlot(This,pRetVal) ) 

#define IDiaSymbol_get_baseDataOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseDataOffset(This,pRetVal) ) 

#define IDiaSymbol_get_textureSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_textureSlot(This,pRetVal) ) 

#define IDiaSymbol_get_samplerSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_samplerSlot(This,pRetVal) ) 

#define IDiaSymbol_get_uavSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_uavSlot(This,pRetVal) ) 

#define IDiaSymbol_get_sizeInUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_sizeInUdt(This,pRetVal) ) 

#define IDiaSymbol_get_memorySpaceKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_memorySpaceKind(This,pRetVal) ) 

#define IDiaSymbol_get_unmodifiedTypeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unmodifiedTypeId(This,pRetVal) ) 

#define IDiaSymbol_get_subTypeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_subTypeId(This,pRetVal) ) 

#define IDiaSymbol_get_subType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_subType(This,pRetVal) ) 

#define IDiaSymbol_get_numberOfModifiers(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfModifiers(This,pRetVal) ) 

#define IDiaSymbol_get_numberOfRegisterIndices(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfRegisterIndices(This,pRetVal) ) 

#define IDiaSymbol_get_isHLSLData(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isHLSLData(This,pRetVal) ) 

#define IDiaSymbol_get_isPointerToDataMember(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPointerToDataMember(This,pRetVal) ) 

#define IDiaSymbol_get_isPointerToMemberFunction(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPointerToMemberFunction(This,pRetVal) ) 

#define IDiaSymbol_get_isSingleInheritance(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSingleInheritance(This,pRetVal) ) 

#define IDiaSymbol_get_isMultipleInheritance(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isMultipleInheritance(This,pRetVal) ) 

#define IDiaSymbol_get_isVirtualInheritance(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isVirtualInheritance(This,pRetVal) ) 

#define IDiaSymbol_get_restrictedType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_restrictedType(This,pRetVal) ) 

#define IDiaSymbol_get_isPointerBasedOnSymbolValue(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPointerBasedOnSymbolValue(This,pRetVal) ) 

#define IDiaSymbol_get_baseSymbol(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseSymbol(This,pRetVal) ) 

#define IDiaSymbol_get_baseSymbolId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseSymbolId(This,pRetVal) ) 

#define IDiaSymbol_get_objectFileName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_objectFileName(This,pRetVal) ) 

#define IDiaSymbol_get_isAcceleratorGroupSharedLocal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAcceleratorGroupSharedLocal(This,pRetVal) ) 

#define IDiaSymbol_get_isAcceleratorPointerTagLiveRange(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAcceleratorPointerTagLiveRange(This,pRetVal) ) 

#define IDiaSymbol_get_isAcceleratorStubFunction(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAcceleratorStubFunction(This,pRetVal) ) 

#define IDiaSymbol_get_numberOfAcceleratorPointerTags(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfAcceleratorPointerTags(This,pRetVal) ) 

#define IDiaSymbol_get_isSdl(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSdl(This,pRetVal) ) 

#define IDiaSymbol_get_isWinRTPointer(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isWinRTPointer(This,pRetVal) ) 

#define IDiaSymbol_get_isRefUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isRefUdt(This,pRetVal) ) 

#define IDiaSymbol_get_isValueUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isValueUdt(This,pRetVal) ) 

#define IDiaSymbol_get_isInterfaceUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isInterfaceUdt(This,pRetVal) ) 

#define IDiaSymbol_findInlineFramesByAddr(This,isect,offset,ppResult)	\
    ( (This)->lpVtbl -> findInlineFramesByAddr(This,isect,offset,ppResult) ) 

#define IDiaSymbol_findInlineFramesByRVA(This,rva,ppResult)	\
    ( (This)->lpVtbl -> findInlineFramesByRVA(This,rva,ppResult) ) 

#define IDiaSymbol_findInlineFramesByVA(This,va,ppResult)	\
    ( (This)->lpVtbl -> findInlineFramesByVA(This,va,ppResult) ) 

#define IDiaSymbol_findInlineeLines(This,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLines(This,ppResult) ) 

#define IDiaSymbol_findInlineeLinesByAddr(This,isect,offset,length,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLinesByAddr(This,isect,offset,length,ppResult) ) 

#define IDiaSymbol_findInlineeLinesByRVA(This,rva,length,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLinesByRVA(This,rva,length,ppResult) ) 

#define IDiaSymbol_findInlineeLinesByVA(This,va,length,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLinesByVA(This,va,length,ppResult) ) 

#define IDiaSymbol_findSymbolsForAcceleratorPointerTag(This,tagValue,ppResult)	\
    ( (This)->lpVtbl -> findSymbolsForAcceleratorPointerTag(This,tagValue,ppResult) ) 

#define IDiaSymbol_findSymbolsByRVAForAcceleratorPointerTag(This,tagValue,rva,ppResult)	\
    ( (This)->lpVtbl -> findSymbolsByRVAForAcceleratorPointerTag(This,tagValue,rva,ppResult) ) 

#define IDiaSymbol_get_acceleratorPointerTags(This,cnt,pcnt,pPointerTags)	\
    ( (This)->lpVtbl -> get_acceleratorPointerTags(This,cnt,pcnt,pPointerTags) ) 

#define IDiaSymbol_getSrcLineOnTypeDefn(This,ppResult)	\
    ( (This)->lpVtbl -> getSrcLineOnTypeDefn(This,ppResult) ) 

#define IDiaSymbol_get_isPGO(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPGO(This,pRetVal) ) 

#define IDiaSymbol_get_hasValidPGOCounts(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasValidPGOCounts(This,pRetVal) ) 

#define IDiaSymbol_get_isOptimizedForSpeed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isOptimizedForSpeed(This,pRetVal) ) 

#define IDiaSymbol_get_PGOEntryCount(This,pRetVal)	\
    ( (This)->lpVtbl -> get_PGOEntryCount(This,pRetVal) ) 

#define IDiaSymbol_get_PGOEdgeCount(This,pRetVal)	\
    ( (This)->lpVtbl -> get_PGOEdgeCount(This,pRetVal) ) 

#define IDiaSymbol_get_PGODynamicInstructionCount(This,pRetVal)	\
    ( (This)->lpVtbl -> get_PGODynamicInstructionCount(This,pRetVal) ) 

#define IDiaSymbol_get_staticSize(This,pRetVal)	\
    ( (This)->lpVtbl -> get_staticSize(This,pRetVal) ) 

#define IDiaSymbol_get_finalLiveStaticSize(This,pRetVal)	\
    ( (This)->lpVtbl -> get_finalLiveStaticSize(This,pRetVal) ) 

#define IDiaSymbol_get_phaseName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_phaseName(This,pRetVal) ) 

#define IDiaSymbol_get_hasControlFlowCheck(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasControlFlowCheck(This,pRetVal) ) 

#define IDiaSymbol_get_constantExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_constantExport(This,pRetVal) ) 

#define IDiaSymbol_get_dataExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_dataExport(This,pRetVal) ) 

#define IDiaSymbol_get_privateExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_privateExport(This,pRetVal) ) 

#define IDiaSymbol_get_noNameExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noNameExport(This,pRetVal) ) 

#define IDiaSymbol_get_exportHasExplicitlyAssignedOrdinal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exportHasExplicitlyAssignedOrdinal(This,pRetVal) ) 

#define IDiaSymbol_get_exportIsForwarder(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exportIsForwarder(This,pRetVal) ) 

#define IDiaSymbol_get_ordinal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_ordinal(This,pRetVal) ) 

#define IDiaSymbol_get_frameSize(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frameSize(This,pRetVal) ) 

#define IDiaSymbol_get_exceptionHandlerAddressSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerAddressSection(This,pRetVal) ) 

#define IDiaSymbol_get_exceptionHandlerAddressOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerAddressOffset(This,pRetVal) ) 

#define IDiaSymbol_get_exceptionHandlerRelativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerRelativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol_get_exceptionHandlerVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol_findInputAssemblyFile(This,ppResult)	\
    ( (This)->lpVtbl -> findInputAssemblyFile(This,ppResult) ) 

#define IDiaSymbol_get_characteristics(This,pRetVal)	\
    ( (This)->lpVtbl -> get_characteristics(This,pRetVal) ) 

#define IDiaSymbol_get_coffGroup(This,pRetVal)	\
    ( (This)->lpVtbl -> get_coffGroup(This,pRetVal) ) 

#define IDiaSymbol_get_bindID(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bindID(This,pRetVal) ) 

#define IDiaSymbol_get_bindSpace(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bindSpace(This,pRetVal) ) 

#define IDiaSymbol_get_bindSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bindSlot(This,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_virtualBaseTableType_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ IDiaSymbol **pRetVal);


void __RPC_STUB IDiaSymbol_get_virtualBaseTableType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_hasManagedCode_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_hasManagedCode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_isHotpatchable_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_isHotpatchable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_isCVTCIL_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_isCVTCIL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_isMSILNetmodule_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_isMSILNetmodule_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_isCTypes_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_isCTypes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_isStripped_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_isStripped_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_frontEndQFE_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_frontEndQFE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_backEndQFE_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_backEndQFE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_wasInlined_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_wasInlined_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_strictGSCheck_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_strictGSCheck_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_isCxxReturnUdt_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_isCxxReturnUdt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_isConstructorVirtualBase_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_isConstructorVirtualBase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_RValueReference_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_RValueReference_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_unmodifiedType_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ IDiaSymbol **pRetVal);


void __RPC_STUB IDiaSymbol_get_unmodifiedType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_framePointerPresent_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_framePointerPresent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_isSafeBuffers_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_isSafeBuffers_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_intrinsic_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_intrinsic_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_sealed_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_sealed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_hfaFloat_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_hfaFloat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_hfaDouble_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_hfaDouble_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_liveRangeStartAddressSection_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_liveRangeStartAddressSection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_liveRangeStartAddressOffset_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_liveRangeStartAddressOffset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_liveRangeStartRelativeVirtualAddress_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_liveRangeStartRelativeVirtualAddress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_countLiveRanges_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_countLiveRanges_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_liveRangeLength_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ ULONGLONG *pRetVal);


void __RPC_STUB IDiaSymbol_get_liveRangeLength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_offsetInUdt_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_offsetInUdt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_paramBasePointerRegisterId_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_paramBasePointerRegisterId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_localBasePointerRegisterId_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_localBasePointerRegisterId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_isLocationControlFlowDependent_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_isLocationControlFlowDependent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_stride_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_stride_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_numberOfRows_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_numberOfRows_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_numberOfColumns_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_numberOfColumns_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_isMatrixRowMajor_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_isMatrixRowMajor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDiaSymbol_get_numericProperties_Proxy( 
    IDiaSymbol * This,
    /* [in] */ DWORD cnt,
    /* [out] */ DWORD *pcnt,
    /* [size_is][out] */ DWORD *pProperties);


void __RPC_STUB IDiaSymbol_get_numericProperties_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDiaSymbol_get_modifierValues_Proxy( 
    IDiaSymbol * This,
    /* [in] */ DWORD cnt,
    /* [out] */ DWORD *pcnt,
    /* [size_is][out] */ WORD *pModifiers);


void __RPC_STUB IDiaSymbol_get_modifierValues_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_isReturnValue_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_isReturnValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_isOptimizedAway_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_isOptimizedAway_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_builtInKind_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_builtInKind_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_registerType_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_registerType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_baseDataSlot_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_baseDataSlot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_baseDataOffset_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_baseDataOffset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_textureSlot_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_textureSlot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_samplerSlot_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_samplerSlot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_uavSlot_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_uavSlot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_sizeInUdt_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_sizeInUdt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_memorySpaceKind_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_memorySpaceKind_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_unmodifiedTypeId_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_unmodifiedTypeId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_subTypeId_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_subTypeId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_subType_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ IDiaSymbol **pRetVal);


void __RPC_STUB IDiaSymbol_get_subType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_numberOfModifiers_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_numberOfModifiers_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_numberOfRegisterIndices_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_numberOfRegisterIndices_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_isHLSLData_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_isHLSLData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_isPointerToDataMember_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_isPointerToDataMember_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_isPointerToMemberFunction_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_isPointerToMemberFunction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_isSingleInheritance_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_isSingleInheritance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_isMultipleInheritance_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_isMultipleInheritance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_isVirtualInheritance_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_isVirtualInheritance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_restrictedType_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_restrictedType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_isPointerBasedOnSymbolValue_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_isPointerBasedOnSymbolValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_baseSymbol_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ IDiaSymbol **pRetVal);


void __RPC_STUB IDiaSymbol_get_baseSymbol_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_baseSymbolId_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_baseSymbolId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_objectFileName_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BSTR *pRetVal);


void __RPC_STUB IDiaSymbol_get_objectFileName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_isAcceleratorGroupSharedLocal_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_isAcceleratorGroupSharedLocal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_isAcceleratorPointerTagLiveRange_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_isAcceleratorPointerTagLiveRange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_isAcceleratorStubFunction_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_isAcceleratorStubFunction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_numberOfAcceleratorPointerTags_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_numberOfAcceleratorPointerTags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_isSdl_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_isSdl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_isWinRTPointer_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_isWinRTPointer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_isRefUdt_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_isRefUdt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_isValueUdt_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_isValueUdt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_isInterfaceUdt_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_isInterfaceUdt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDiaSymbol_findInlineFramesByAddr_Proxy( 
    IDiaSymbol * This,
    /* [in] */ DWORD isect,
    /* [in] */ DWORD offset,
    /* [out] */ IDiaEnumSymbols **ppResult);


void __RPC_STUB IDiaSymbol_findInlineFramesByAddr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDiaSymbol_findInlineFramesByRVA_Proxy( 
    IDiaSymbol * This,
    /* [in] */ DWORD rva,
    /* [out] */ IDiaEnumSymbols **ppResult);


void __RPC_STUB IDiaSymbol_findInlineFramesByRVA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDiaSymbol_findInlineFramesByVA_Proxy( 
    IDiaSymbol * This,
    /* [in] */ ULONGLONG va,
    /* [out] */ IDiaEnumSymbols **ppResult);


void __RPC_STUB IDiaSymbol_findInlineFramesByVA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDiaSymbol_findInlineeLines_Proxy( 
    IDiaSymbol * This,
    /* [out] */ IDiaEnumLineNumbers **ppResult);


void __RPC_STUB IDiaSymbol_findInlineeLines_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDiaSymbol_findInlineeLinesByAddr_Proxy( 
    IDiaSymbol * This,
    /* [in] */ DWORD isect,
    /* [in] */ DWORD offset,
    /* [in] */ DWORD length,
    /* [out] */ IDiaEnumLineNumbers **ppResult);


void __RPC_STUB IDiaSymbol_findInlineeLinesByAddr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDiaSymbol_findInlineeLinesByRVA_Proxy( 
    IDiaSymbol * This,
    /* [in] */ DWORD rva,
    /* [in] */ DWORD length,
    /* [out] */ IDiaEnumLineNumbers **ppResult);


void __RPC_STUB IDiaSymbol_findInlineeLinesByRVA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDiaSymbol_findInlineeLinesByVA_Proxy( 
    IDiaSymbol * This,
    /* [in] */ ULONGLONG va,
    /* [in] */ DWORD length,
    /* [out] */ IDiaEnumLineNumbers **ppResult);


void __RPC_STUB IDiaSymbol_findInlineeLinesByVA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDiaSymbol_findSymbolsForAcceleratorPointerTag_Proxy( 
    IDiaSymbol * This,
    /* [in] */ DWORD tagValue,
    /* [out] */ IDiaEnumSymbols **ppResult);


void __RPC_STUB IDiaSymbol_findSymbolsForAcceleratorPointerTag_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDiaSymbol_findSymbolsByRVAForAcceleratorPointerTag_Proxy( 
    IDiaSymbol * This,
    /* [in] */ DWORD tagValue,
    /* [in] */ DWORD rva,
    /* [out] */ IDiaEnumSymbols **ppResult);


void __RPC_STUB IDiaSymbol_findSymbolsByRVAForAcceleratorPointerTag_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDiaSymbol_get_acceleratorPointerTags_Proxy( 
    IDiaSymbol * This,
    /* [in] */ DWORD cnt,
    /* [out] */ DWORD *pcnt,
    /* [size_is][out] */ DWORD *pPointerTags);


void __RPC_STUB IDiaSymbol_get_acceleratorPointerTags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDiaSymbol_getSrcLineOnTypeDefn_Proxy( 
    IDiaSymbol * This,
    /* [out] */ IDiaLineNumber **ppResult);


void __RPC_STUB IDiaSymbol_getSrcLineOnTypeDefn_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_isPGO_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_isPGO_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_hasValidPGOCounts_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_hasValidPGOCounts_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_isOptimizedForSpeed_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_isOptimizedForSpeed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_PGOEntryCount_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_PGOEntryCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_PGOEdgeCount_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_PGOEdgeCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_PGODynamicInstructionCount_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ ULONGLONG *pRetVal);


void __RPC_STUB IDiaSymbol_get_PGODynamicInstructionCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_staticSize_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_staticSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_finalLiveStaticSize_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_finalLiveStaticSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_phaseName_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BSTR *pRetVal);


void __RPC_STUB IDiaSymbol_get_phaseName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_hasControlFlowCheck_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_hasControlFlowCheck_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_constantExport_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_constantExport_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_dataExport_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_dataExport_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_privateExport_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_privateExport_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_noNameExport_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_noNameExport_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_exportHasExplicitlyAssignedOrdinal_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_exportHasExplicitlyAssignedOrdinal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_exportIsForwarder_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol_get_exportIsForwarder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_ordinal_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_ordinal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_frameSize_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_frameSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_exceptionHandlerAddressSection_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_exceptionHandlerAddressSection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_exceptionHandlerAddressOffset_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_exceptionHandlerAddressOffset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_exceptionHandlerRelativeVirtualAddress_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_exceptionHandlerRelativeVirtualAddress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_exceptionHandlerVirtualAddress_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ ULONGLONG *pRetVal);


void __RPC_STUB IDiaSymbol_get_exceptionHandlerVirtualAddress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDiaSymbol_findInputAssemblyFile_Proxy( 
    IDiaSymbol * This,
    /* [out] */ IDiaInputAssemblyFile **ppResult);


void __RPC_STUB IDiaSymbol_findInputAssemblyFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_characteristics_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_characteristics_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_coffGroup_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ IDiaSymbol **pRetVal);


void __RPC_STUB IDiaSymbol_get_coffGroup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_bindID_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_bindID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_bindSpace_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_bindSpace_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol_get_bindSlot_Proxy( 
    IDiaSymbol * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol_get_bindSlot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDiaSymbol_INTERFACE_DEFINED__ */


#ifndef __IDiaSymbol2_INTERFACE_DEFINED__
#define __IDiaSymbol2_INTERFACE_DEFINED__

/* interface IDiaSymbol2 */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaSymbol2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("611e86cd-b7d1-4546-8a15-070e2b07a427")
    IDiaSymbol2 : public IDiaSymbol
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isObjCClass( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isObjCCategory( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isObjCProtocol( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaSymbol2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaSymbol2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaSymbol2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaSymbol2 * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_symIndexId )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_symTag )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_name )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lexicalParent )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_classParent )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_type )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_dataKind )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_locationType )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressSection )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressOffset )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_relativeVirtualAddress )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualAddress )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_registerId )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_offset )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_length )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_slot )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_volatileType )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_constType )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unalignedType )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_access )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_libraryName )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_platform )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_language )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_editAndContinueEnabled )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndMajor )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndMinor )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndBuild )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndMajor )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndMinor )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndBuild )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sourceFileName )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unused )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_thunkOrdinal )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_thisAdjust )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseOffset )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtual )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_intro )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_pure )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_callingConvention )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_value )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ VARIANT *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseType )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_token )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_timeStamp )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_guid )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ GUID *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_symbolsFileName )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_reference )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_count )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bitPosition )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_arrayIndexType )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_packed )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_constructor )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_overloadedOperator )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_nested )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasNestedTypes )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasAssignmentOperator )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasCastOperator )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_scoped )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseClass )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_indirectVirtualBaseClass )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBasePointerOffset )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualTableShape )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lexicalParentId )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_classParentId )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_typeId )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_arrayIndexTypeId )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualTableShapeId )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_code )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_function )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_managed )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_msil )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseDispIndex )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_undecoratedName )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_age )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_signature )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_compilerGenerated )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressTaken )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_rank )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lowerBound )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_upperBound )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lowerBoundId )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_upperBoundId )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_dataBytes )( 
            IDiaSymbol2 * This,
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData);
        
        HRESULT ( STDMETHODCALLTYPE *findChildren )( 
            IDiaSymbol2 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenEx )( 
            IDiaSymbol2 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenExByAddr )( 
            IDiaSymbol2 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenExByVA )( 
            IDiaSymbol2 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ ULONGLONG va,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenExByRVA )( 
            IDiaSymbol2 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetSection )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetOffset )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetRelativeVirtualAddress )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetVirtualAddress )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_machineType )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_oemId )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_oemSymbolId )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_types )( 
            IDiaSymbol2 * This,
            /* [in] */ DWORD cTypes,
            /* [out] */ DWORD *pcTypes,
            /* [size_is][size_is][out] */ IDiaSymbol **pTypes);
        
        HRESULT ( STDMETHODCALLTYPE *get_typeIds )( 
            IDiaSymbol2 * This,
            /* [in] */ DWORD cTypeIds,
            /* [out] */ DWORD *pcTypeIds,
            /* [size_is][out] */ DWORD *pdwTypeIds);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_objectPointerType )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_udtKind )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_undecoratedNameEx )( 
            IDiaSymbol2 * This,
            /* [in] */ DWORD undecorateOptions,
            /* [out] */ BSTR *name);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noReturn )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_customCallingConvention )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noInline )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_optimizedCodeDebugInfo )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_notReached )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_interruptReturn )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_farReturn )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isStatic )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasDebugInfo )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isLTCG )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isDataAligned )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasSecurityChecks )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_compilerName )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasAlloca )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasSetJump )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasLongJump )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasInlAsm )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasEH )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasSEH )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasEHa )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isNaked )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAggregated )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSplitted )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_container )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_inlSpec )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noStackOrdering )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseTableType )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasManagedCode )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isHotpatchable )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isCVTCIL )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isMSILNetmodule )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isCTypes )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isStripped )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndQFE )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndQFE )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_wasInlined )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_strictGSCheck )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isCxxReturnUdt )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isConstructorVirtualBase )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RValueReference )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unmodifiedType )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_framePointerPresent )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSafeBuffers )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_intrinsic )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sealed )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hfaFloat )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hfaDouble )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeStartAddressSection )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeStartAddressOffset )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeStartRelativeVirtualAddress )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_countLiveRanges )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeLength )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_offsetInUdt )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_paramBasePointerRegisterId )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_localBasePointerRegisterId )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isLocationControlFlowDependent )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_stride )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfRows )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfColumns )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isMatrixRowMajor )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_numericProperties )( 
            IDiaSymbol2 * This,
            /* [in] */ DWORD cnt,
            /* [out] */ DWORD *pcnt,
            /* [size_is][out] */ DWORD *pProperties);
        
        HRESULT ( STDMETHODCALLTYPE *get_modifierValues )( 
            IDiaSymbol2 * This,
            /* [in] */ DWORD cnt,
            /* [out] */ DWORD *pcnt,
            /* [size_is][out] */ WORD *pModifiers);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isReturnValue )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isOptimizedAway )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_builtInKind )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_registerType )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseDataSlot )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseDataOffset )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_textureSlot )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_samplerSlot )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_uavSlot )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sizeInUdt )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_memorySpaceKind )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unmodifiedTypeId )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_subTypeId )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_subType )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfModifiers )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfRegisterIndices )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isHLSLData )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPointerToDataMember )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPointerToMemberFunction )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSingleInheritance )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isMultipleInheritance )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isVirtualInheritance )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_restrictedType )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPointerBasedOnSymbolValue )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseSymbol )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseSymbolId )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_objectFileName )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAcceleratorGroupSharedLocal )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAcceleratorPointerTagLiveRange )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAcceleratorStubFunction )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfAcceleratorPointerTags )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSdl )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isWinRTPointer )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isRefUdt )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isValueUdt )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isInterfaceUdt )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineFramesByAddr )( 
            IDiaSymbol2 * This,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineFramesByRVA )( 
            IDiaSymbol2 * This,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineFramesByVA )( 
            IDiaSymbol2 * This,
            /* [in] */ ULONGLONG va,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLines )( 
            IDiaSymbol2 * This,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLinesByAddr )( 
            IDiaSymbol2 * This,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLinesByRVA )( 
            IDiaSymbol2 * This,
            /* [in] */ DWORD rva,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLinesByVA )( 
            IDiaSymbol2 * This,
            /* [in] */ ULONGLONG va,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findSymbolsForAcceleratorPointerTag )( 
            IDiaSymbol2 * This,
            /* [in] */ DWORD tagValue,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findSymbolsByRVAForAcceleratorPointerTag )( 
            IDiaSymbol2 * This,
            /* [in] */ DWORD tagValue,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *get_acceleratorPointerTags )( 
            IDiaSymbol2 * This,
            /* [in] */ DWORD cnt,
            /* [out] */ DWORD *pcnt,
            /* [size_is][out] */ DWORD *pPointerTags);
        
        HRESULT ( STDMETHODCALLTYPE *getSrcLineOnTypeDefn )( 
            IDiaSymbol2 * This,
            /* [out] */ IDiaLineNumber **ppResult);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPGO )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasValidPGOCounts )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isOptimizedForSpeed )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PGOEntryCount )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PGOEdgeCount )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PGODynamicInstructionCount )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_staticSize )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_finalLiveStaticSize )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_phaseName )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasControlFlowCheck )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_constantExport )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_dataExport )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_privateExport )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noNameExport )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exportHasExplicitlyAssignedOrdinal )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exportIsForwarder )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ordinal )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frameSize )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerAddressSection )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerAddressOffset )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerRelativeVirtualAddress )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerVirtualAddress )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *findInputAssemblyFile )( 
            IDiaSymbol2 * This,
            /* [out] */ IDiaInputAssemblyFile **ppResult);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_characteristics )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_coffGroup )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bindID )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bindSpace )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bindSlot )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isObjCClass )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isObjCCategory )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isObjCProtocol )( 
            IDiaSymbol2 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        END_INTERFACE
    } IDiaSymbol2Vtbl;

    interface IDiaSymbol2
    {
        CONST_VTBL struct IDiaSymbol2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaSymbol2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaSymbol2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaSymbol2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaSymbol2_get_symIndexId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_symIndexId(This,pRetVal) ) 

#define IDiaSymbol2_get_symTag(This,pRetVal)	\
    ( (This)->lpVtbl -> get_symTag(This,pRetVal) ) 

#define IDiaSymbol2_get_name(This,pRetVal)	\
    ( (This)->lpVtbl -> get_name(This,pRetVal) ) 

#define IDiaSymbol2_get_lexicalParent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lexicalParent(This,pRetVal) ) 

#define IDiaSymbol2_get_classParent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_classParent(This,pRetVal) ) 

#define IDiaSymbol2_get_type(This,pRetVal)	\
    ( (This)->lpVtbl -> get_type(This,pRetVal) ) 

#define IDiaSymbol2_get_dataKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_dataKind(This,pRetVal) ) 

#define IDiaSymbol2_get_locationType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_locationType(This,pRetVal) ) 

#define IDiaSymbol2_get_addressSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressSection(This,pRetVal) ) 

#define IDiaSymbol2_get_addressOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressOffset(This,pRetVal) ) 

#define IDiaSymbol2_get_relativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_relativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol2_get_virtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualAddress(This,pRetVal) ) 

#define IDiaSymbol2_get_registerId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_registerId(This,pRetVal) ) 

#define IDiaSymbol2_get_offset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_offset(This,pRetVal) ) 

#define IDiaSymbol2_get_length(This,pRetVal)	\
    ( (This)->lpVtbl -> get_length(This,pRetVal) ) 

#define IDiaSymbol2_get_slot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_slot(This,pRetVal) ) 

#define IDiaSymbol2_get_volatileType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_volatileType(This,pRetVal) ) 

#define IDiaSymbol2_get_constType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_constType(This,pRetVal) ) 

#define IDiaSymbol2_get_unalignedType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unalignedType(This,pRetVal) ) 

#define IDiaSymbol2_get_access(This,pRetVal)	\
    ( (This)->lpVtbl -> get_access(This,pRetVal) ) 

#define IDiaSymbol2_get_libraryName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_libraryName(This,pRetVal) ) 

#define IDiaSymbol2_get_platform(This,pRetVal)	\
    ( (This)->lpVtbl -> get_platform(This,pRetVal) ) 

#define IDiaSymbol2_get_language(This,pRetVal)	\
    ( (This)->lpVtbl -> get_language(This,pRetVal) ) 

#define IDiaSymbol2_get_editAndContinueEnabled(This,pRetVal)	\
    ( (This)->lpVtbl -> get_editAndContinueEnabled(This,pRetVal) ) 

#define IDiaSymbol2_get_frontEndMajor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndMajor(This,pRetVal) ) 

#define IDiaSymbol2_get_frontEndMinor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndMinor(This,pRetVal) ) 

#define IDiaSymbol2_get_frontEndBuild(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndBuild(This,pRetVal) ) 

#define IDiaSymbol2_get_backEndMajor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndMajor(This,pRetVal) ) 

#define IDiaSymbol2_get_backEndMinor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndMinor(This,pRetVal) ) 

#define IDiaSymbol2_get_backEndBuild(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndBuild(This,pRetVal) ) 

#define IDiaSymbol2_get_sourceFileName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_sourceFileName(This,pRetVal) ) 

#define IDiaSymbol2_get_unused(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unused(This,pRetVal) ) 

#define IDiaSymbol2_get_thunkOrdinal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_thunkOrdinal(This,pRetVal) ) 

#define IDiaSymbol2_get_thisAdjust(This,pRetVal)	\
    ( (This)->lpVtbl -> get_thisAdjust(This,pRetVal) ) 

#define IDiaSymbol2_get_virtualBaseOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseOffset(This,pRetVal) ) 

#define IDiaSymbol2_get_virtual(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtual(This,pRetVal) ) 

#define IDiaSymbol2_get_intro(This,pRetVal)	\
    ( (This)->lpVtbl -> get_intro(This,pRetVal) ) 

#define IDiaSymbol2_get_pure(This,pRetVal)	\
    ( (This)->lpVtbl -> get_pure(This,pRetVal) ) 

#define IDiaSymbol2_get_callingConvention(This,pRetVal)	\
    ( (This)->lpVtbl -> get_callingConvention(This,pRetVal) ) 

#define IDiaSymbol2_get_value(This,pRetVal)	\
    ( (This)->lpVtbl -> get_value(This,pRetVal) ) 

#define IDiaSymbol2_get_baseType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseType(This,pRetVal) ) 

#define IDiaSymbol2_get_token(This,pRetVal)	\
    ( (This)->lpVtbl -> get_token(This,pRetVal) ) 

#define IDiaSymbol2_get_timeStamp(This,pRetVal)	\
    ( (This)->lpVtbl -> get_timeStamp(This,pRetVal) ) 

#define IDiaSymbol2_get_guid(This,pRetVal)	\
    ( (This)->lpVtbl -> get_guid(This,pRetVal) ) 

#define IDiaSymbol2_get_symbolsFileName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_symbolsFileName(This,pRetVal) ) 

#define IDiaSymbol2_get_reference(This,pRetVal)	\
    ( (This)->lpVtbl -> get_reference(This,pRetVal) ) 

#define IDiaSymbol2_get_count(This,pRetVal)	\
    ( (This)->lpVtbl -> get_count(This,pRetVal) ) 

#define IDiaSymbol2_get_bitPosition(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bitPosition(This,pRetVal) ) 

#define IDiaSymbol2_get_arrayIndexType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_arrayIndexType(This,pRetVal) ) 

#define IDiaSymbol2_get_packed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_packed(This,pRetVal) ) 

#define IDiaSymbol2_get_constructor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_constructor(This,pRetVal) ) 

#define IDiaSymbol2_get_overloadedOperator(This,pRetVal)	\
    ( (This)->lpVtbl -> get_overloadedOperator(This,pRetVal) ) 

#define IDiaSymbol2_get_nested(This,pRetVal)	\
    ( (This)->lpVtbl -> get_nested(This,pRetVal) ) 

#define IDiaSymbol2_get_hasNestedTypes(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasNestedTypes(This,pRetVal) ) 

#define IDiaSymbol2_get_hasAssignmentOperator(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasAssignmentOperator(This,pRetVal) ) 

#define IDiaSymbol2_get_hasCastOperator(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasCastOperator(This,pRetVal) ) 

#define IDiaSymbol2_get_scoped(This,pRetVal)	\
    ( (This)->lpVtbl -> get_scoped(This,pRetVal) ) 

#define IDiaSymbol2_get_virtualBaseClass(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseClass(This,pRetVal) ) 

#define IDiaSymbol2_get_indirectVirtualBaseClass(This,pRetVal)	\
    ( (This)->lpVtbl -> get_indirectVirtualBaseClass(This,pRetVal) ) 

#define IDiaSymbol2_get_virtualBasePointerOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBasePointerOffset(This,pRetVal) ) 

#define IDiaSymbol2_get_virtualTableShape(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualTableShape(This,pRetVal) ) 

#define IDiaSymbol2_get_lexicalParentId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lexicalParentId(This,pRetVal) ) 

#define IDiaSymbol2_get_classParentId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_classParentId(This,pRetVal) ) 

#define IDiaSymbol2_get_typeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_typeId(This,pRetVal) ) 

#define IDiaSymbol2_get_arrayIndexTypeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_arrayIndexTypeId(This,pRetVal) ) 

#define IDiaSymbol2_get_virtualTableShapeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualTableShapeId(This,pRetVal) ) 

#define IDiaSymbol2_get_code(This,pRetVal)	\
    ( (This)->lpVtbl -> get_code(This,pRetVal) ) 

#define IDiaSymbol2_get_function(This,pRetVal)	\
    ( (This)->lpVtbl -> get_function(This,pRetVal) ) 

#define IDiaSymbol2_get_managed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_managed(This,pRetVal) ) 

#define IDiaSymbol2_get_msil(This,pRetVal)	\
    ( (This)->lpVtbl -> get_msil(This,pRetVal) ) 

#define IDiaSymbol2_get_virtualBaseDispIndex(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseDispIndex(This,pRetVal) ) 

#define IDiaSymbol2_get_undecoratedName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_undecoratedName(This,pRetVal) ) 

#define IDiaSymbol2_get_age(This,pRetVal)	\
    ( (This)->lpVtbl -> get_age(This,pRetVal) ) 

#define IDiaSymbol2_get_signature(This,pRetVal)	\
    ( (This)->lpVtbl -> get_signature(This,pRetVal) ) 

#define IDiaSymbol2_get_compilerGenerated(This,pRetVal)	\
    ( (This)->lpVtbl -> get_compilerGenerated(This,pRetVal) ) 

#define IDiaSymbol2_get_addressTaken(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressTaken(This,pRetVal) ) 

#define IDiaSymbol2_get_rank(This,pRetVal)	\
    ( (This)->lpVtbl -> get_rank(This,pRetVal) ) 

#define IDiaSymbol2_get_lowerBound(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lowerBound(This,pRetVal) ) 

#define IDiaSymbol2_get_upperBound(This,pRetVal)	\
    ( (This)->lpVtbl -> get_upperBound(This,pRetVal) ) 

#define IDiaSymbol2_get_lowerBoundId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lowerBoundId(This,pRetVal) ) 

#define IDiaSymbol2_get_upperBoundId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_upperBoundId(This,pRetVal) ) 

#define IDiaSymbol2_get_dataBytes(This,cbData,pcbData,pbData)	\
    ( (This)->lpVtbl -> get_dataBytes(This,cbData,pcbData,pbData) ) 

#define IDiaSymbol2_findChildren(This,symtag,name,compareFlags,ppResult)	\
    ( (This)->lpVtbl -> findChildren(This,symtag,name,compareFlags,ppResult) ) 

#define IDiaSymbol2_findChildrenEx(This,symtag,name,compareFlags,ppResult)	\
    ( (This)->lpVtbl -> findChildrenEx(This,symtag,name,compareFlags,ppResult) ) 

#define IDiaSymbol2_findChildrenExByAddr(This,symtag,name,compareFlags,isect,offset,ppResult)	\
    ( (This)->lpVtbl -> findChildrenExByAddr(This,symtag,name,compareFlags,isect,offset,ppResult) ) 

#define IDiaSymbol2_findChildrenExByVA(This,symtag,name,compareFlags,va,ppResult)	\
    ( (This)->lpVtbl -> findChildrenExByVA(This,symtag,name,compareFlags,va,ppResult) ) 

#define IDiaSymbol2_findChildrenExByRVA(This,symtag,name,compareFlags,rva,ppResult)	\
    ( (This)->lpVtbl -> findChildrenExByRVA(This,symtag,name,compareFlags,rva,ppResult) ) 

#define IDiaSymbol2_get_targetSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetSection(This,pRetVal) ) 

#define IDiaSymbol2_get_targetOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetOffset(This,pRetVal) ) 

#define IDiaSymbol2_get_targetRelativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetRelativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol2_get_targetVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol2_get_machineType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_machineType(This,pRetVal) ) 

#define IDiaSymbol2_get_oemId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_oemId(This,pRetVal) ) 

#define IDiaSymbol2_get_oemSymbolId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_oemSymbolId(This,pRetVal) ) 

#define IDiaSymbol2_get_types(This,cTypes,pcTypes,pTypes)	\
    ( (This)->lpVtbl -> get_types(This,cTypes,pcTypes,pTypes) ) 

#define IDiaSymbol2_get_typeIds(This,cTypeIds,pcTypeIds,pdwTypeIds)	\
    ( (This)->lpVtbl -> get_typeIds(This,cTypeIds,pcTypeIds,pdwTypeIds) ) 

#define IDiaSymbol2_get_objectPointerType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_objectPointerType(This,pRetVal) ) 

#define IDiaSymbol2_get_udtKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_udtKind(This,pRetVal) ) 

#define IDiaSymbol2_get_undecoratedNameEx(This,undecorateOptions,name)	\
    ( (This)->lpVtbl -> get_undecoratedNameEx(This,undecorateOptions,name) ) 

#define IDiaSymbol2_get_noReturn(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noReturn(This,pRetVal) ) 

#define IDiaSymbol2_get_customCallingConvention(This,pRetVal)	\
    ( (This)->lpVtbl -> get_customCallingConvention(This,pRetVal) ) 

#define IDiaSymbol2_get_noInline(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noInline(This,pRetVal) ) 

#define IDiaSymbol2_get_optimizedCodeDebugInfo(This,pRetVal)	\
    ( (This)->lpVtbl -> get_optimizedCodeDebugInfo(This,pRetVal) ) 

#define IDiaSymbol2_get_notReached(This,pRetVal)	\
    ( (This)->lpVtbl -> get_notReached(This,pRetVal) ) 

#define IDiaSymbol2_get_interruptReturn(This,pRetVal)	\
    ( (This)->lpVtbl -> get_interruptReturn(This,pRetVal) ) 

#define IDiaSymbol2_get_farReturn(This,pRetVal)	\
    ( (This)->lpVtbl -> get_farReturn(This,pRetVal) ) 

#define IDiaSymbol2_get_isStatic(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isStatic(This,pRetVal) ) 

#define IDiaSymbol2_get_hasDebugInfo(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasDebugInfo(This,pRetVal) ) 

#define IDiaSymbol2_get_isLTCG(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isLTCG(This,pRetVal) ) 

#define IDiaSymbol2_get_isDataAligned(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isDataAligned(This,pRetVal) ) 

#define IDiaSymbol2_get_hasSecurityChecks(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasSecurityChecks(This,pRetVal) ) 

#define IDiaSymbol2_get_compilerName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_compilerName(This,pRetVal) ) 

#define IDiaSymbol2_get_hasAlloca(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasAlloca(This,pRetVal) ) 

#define IDiaSymbol2_get_hasSetJump(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasSetJump(This,pRetVal) ) 

#define IDiaSymbol2_get_hasLongJump(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasLongJump(This,pRetVal) ) 

#define IDiaSymbol2_get_hasInlAsm(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasInlAsm(This,pRetVal) ) 

#define IDiaSymbol2_get_hasEH(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasEH(This,pRetVal) ) 

#define IDiaSymbol2_get_hasSEH(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasSEH(This,pRetVal) ) 

#define IDiaSymbol2_get_hasEHa(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasEHa(This,pRetVal) ) 

#define IDiaSymbol2_get_isNaked(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isNaked(This,pRetVal) ) 

#define IDiaSymbol2_get_isAggregated(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAggregated(This,pRetVal) ) 

#define IDiaSymbol2_get_isSplitted(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSplitted(This,pRetVal) ) 

#define IDiaSymbol2_get_container(This,pRetVal)	\
    ( (This)->lpVtbl -> get_container(This,pRetVal) ) 

#define IDiaSymbol2_get_inlSpec(This,pRetVal)	\
    ( (This)->lpVtbl -> get_inlSpec(This,pRetVal) ) 

#define IDiaSymbol2_get_noStackOrdering(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noStackOrdering(This,pRetVal) ) 

#define IDiaSymbol2_get_virtualBaseTableType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseTableType(This,pRetVal) ) 

#define IDiaSymbol2_get_hasManagedCode(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasManagedCode(This,pRetVal) ) 

#define IDiaSymbol2_get_isHotpatchable(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isHotpatchable(This,pRetVal) ) 

#define IDiaSymbol2_get_isCVTCIL(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isCVTCIL(This,pRetVal) ) 

#define IDiaSymbol2_get_isMSILNetmodule(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isMSILNetmodule(This,pRetVal) ) 

#define IDiaSymbol2_get_isCTypes(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isCTypes(This,pRetVal) ) 

#define IDiaSymbol2_get_isStripped(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isStripped(This,pRetVal) ) 

#define IDiaSymbol2_get_frontEndQFE(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndQFE(This,pRetVal) ) 

#define IDiaSymbol2_get_backEndQFE(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndQFE(This,pRetVal) ) 

#define IDiaSymbol2_get_wasInlined(This,pRetVal)	\
    ( (This)->lpVtbl -> get_wasInlined(This,pRetVal) ) 

#define IDiaSymbol2_get_strictGSCheck(This,pRetVal)	\
    ( (This)->lpVtbl -> get_strictGSCheck(This,pRetVal) ) 

#define IDiaSymbol2_get_isCxxReturnUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isCxxReturnUdt(This,pRetVal) ) 

#define IDiaSymbol2_get_isConstructorVirtualBase(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isConstructorVirtualBase(This,pRetVal) ) 

#define IDiaSymbol2_get_RValueReference(This,pRetVal)	\
    ( (This)->lpVtbl -> get_RValueReference(This,pRetVal) ) 

#define IDiaSymbol2_get_unmodifiedType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unmodifiedType(This,pRetVal) ) 

#define IDiaSymbol2_get_framePointerPresent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_framePointerPresent(This,pRetVal) ) 

#define IDiaSymbol2_get_isSafeBuffers(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSafeBuffers(This,pRetVal) ) 

#define IDiaSymbol2_get_intrinsic(This,pRetVal)	\
    ( (This)->lpVtbl -> get_intrinsic(This,pRetVal) ) 

#define IDiaSymbol2_get_sealed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_sealed(This,pRetVal) ) 

#define IDiaSymbol2_get_hfaFloat(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hfaFloat(This,pRetVal) ) 

#define IDiaSymbol2_get_hfaDouble(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hfaDouble(This,pRetVal) ) 

#define IDiaSymbol2_get_liveRangeStartAddressSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeStartAddressSection(This,pRetVal) ) 

#define IDiaSymbol2_get_liveRangeStartAddressOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeStartAddressOffset(This,pRetVal) ) 

#define IDiaSymbol2_get_liveRangeStartRelativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeStartRelativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol2_get_countLiveRanges(This,pRetVal)	\
    ( (This)->lpVtbl -> get_countLiveRanges(This,pRetVal) ) 

#define IDiaSymbol2_get_liveRangeLength(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeLength(This,pRetVal) ) 

#define IDiaSymbol2_get_offsetInUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_offsetInUdt(This,pRetVal) ) 

#define IDiaSymbol2_get_paramBasePointerRegisterId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_paramBasePointerRegisterId(This,pRetVal) ) 

#define IDiaSymbol2_get_localBasePointerRegisterId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_localBasePointerRegisterId(This,pRetVal) ) 

#define IDiaSymbol2_get_isLocationControlFlowDependent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isLocationControlFlowDependent(This,pRetVal) ) 

#define IDiaSymbol2_get_stride(This,pRetVal)	\
    ( (This)->lpVtbl -> get_stride(This,pRetVal) ) 

#define IDiaSymbol2_get_numberOfRows(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfRows(This,pRetVal) ) 

#define IDiaSymbol2_get_numberOfColumns(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfColumns(This,pRetVal) ) 

#define IDiaSymbol2_get_isMatrixRowMajor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isMatrixRowMajor(This,pRetVal) ) 

#define IDiaSymbol2_get_numericProperties(This,cnt,pcnt,pProperties)	\
    ( (This)->lpVtbl -> get_numericProperties(This,cnt,pcnt,pProperties) ) 

#define IDiaSymbol2_get_modifierValues(This,cnt,pcnt,pModifiers)	\
    ( (This)->lpVtbl -> get_modifierValues(This,cnt,pcnt,pModifiers) ) 

#define IDiaSymbol2_get_isReturnValue(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isReturnValue(This,pRetVal) ) 

#define IDiaSymbol2_get_isOptimizedAway(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isOptimizedAway(This,pRetVal) ) 

#define IDiaSymbol2_get_builtInKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_builtInKind(This,pRetVal) ) 

#define IDiaSymbol2_get_registerType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_registerType(This,pRetVal) ) 

#define IDiaSymbol2_get_baseDataSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseDataSlot(This,pRetVal) ) 

#define IDiaSymbol2_get_baseDataOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseDataOffset(This,pRetVal) ) 

#define IDiaSymbol2_get_textureSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_textureSlot(This,pRetVal) ) 

#define IDiaSymbol2_get_samplerSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_samplerSlot(This,pRetVal) ) 

#define IDiaSymbol2_get_uavSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_uavSlot(This,pRetVal) ) 

#define IDiaSymbol2_get_sizeInUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_sizeInUdt(This,pRetVal) ) 

#define IDiaSymbol2_get_memorySpaceKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_memorySpaceKind(This,pRetVal) ) 

#define IDiaSymbol2_get_unmodifiedTypeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unmodifiedTypeId(This,pRetVal) ) 

#define IDiaSymbol2_get_subTypeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_subTypeId(This,pRetVal) ) 

#define IDiaSymbol2_get_subType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_subType(This,pRetVal) ) 

#define IDiaSymbol2_get_numberOfModifiers(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfModifiers(This,pRetVal) ) 

#define IDiaSymbol2_get_numberOfRegisterIndices(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfRegisterIndices(This,pRetVal) ) 

#define IDiaSymbol2_get_isHLSLData(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isHLSLData(This,pRetVal) ) 

#define IDiaSymbol2_get_isPointerToDataMember(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPointerToDataMember(This,pRetVal) ) 

#define IDiaSymbol2_get_isPointerToMemberFunction(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPointerToMemberFunction(This,pRetVal) ) 

#define IDiaSymbol2_get_isSingleInheritance(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSingleInheritance(This,pRetVal) ) 

#define IDiaSymbol2_get_isMultipleInheritance(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isMultipleInheritance(This,pRetVal) ) 

#define IDiaSymbol2_get_isVirtualInheritance(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isVirtualInheritance(This,pRetVal) ) 

#define IDiaSymbol2_get_restrictedType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_restrictedType(This,pRetVal) ) 

#define IDiaSymbol2_get_isPointerBasedOnSymbolValue(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPointerBasedOnSymbolValue(This,pRetVal) ) 

#define IDiaSymbol2_get_baseSymbol(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseSymbol(This,pRetVal) ) 

#define IDiaSymbol2_get_baseSymbolId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseSymbolId(This,pRetVal) ) 

#define IDiaSymbol2_get_objectFileName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_objectFileName(This,pRetVal) ) 

#define IDiaSymbol2_get_isAcceleratorGroupSharedLocal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAcceleratorGroupSharedLocal(This,pRetVal) ) 

#define IDiaSymbol2_get_isAcceleratorPointerTagLiveRange(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAcceleratorPointerTagLiveRange(This,pRetVal) ) 

#define IDiaSymbol2_get_isAcceleratorStubFunction(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAcceleratorStubFunction(This,pRetVal) ) 

#define IDiaSymbol2_get_numberOfAcceleratorPointerTags(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfAcceleratorPointerTags(This,pRetVal) ) 

#define IDiaSymbol2_get_isSdl(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSdl(This,pRetVal) ) 

#define IDiaSymbol2_get_isWinRTPointer(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isWinRTPointer(This,pRetVal) ) 

#define IDiaSymbol2_get_isRefUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isRefUdt(This,pRetVal) ) 

#define IDiaSymbol2_get_isValueUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isValueUdt(This,pRetVal) ) 

#define IDiaSymbol2_get_isInterfaceUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isInterfaceUdt(This,pRetVal) ) 

#define IDiaSymbol2_findInlineFramesByAddr(This,isect,offset,ppResult)	\
    ( (This)->lpVtbl -> findInlineFramesByAddr(This,isect,offset,ppResult) ) 

#define IDiaSymbol2_findInlineFramesByRVA(This,rva,ppResult)	\
    ( (This)->lpVtbl -> findInlineFramesByRVA(This,rva,ppResult) ) 

#define IDiaSymbol2_findInlineFramesByVA(This,va,ppResult)	\
    ( (This)->lpVtbl -> findInlineFramesByVA(This,va,ppResult) ) 

#define IDiaSymbol2_findInlineeLines(This,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLines(This,ppResult) ) 

#define IDiaSymbol2_findInlineeLinesByAddr(This,isect,offset,length,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLinesByAddr(This,isect,offset,length,ppResult) ) 

#define IDiaSymbol2_findInlineeLinesByRVA(This,rva,length,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLinesByRVA(This,rva,length,ppResult) ) 

#define IDiaSymbol2_findInlineeLinesByVA(This,va,length,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLinesByVA(This,va,length,ppResult) ) 

#define IDiaSymbol2_findSymbolsForAcceleratorPointerTag(This,tagValue,ppResult)	\
    ( (This)->lpVtbl -> findSymbolsForAcceleratorPointerTag(This,tagValue,ppResult) ) 

#define IDiaSymbol2_findSymbolsByRVAForAcceleratorPointerTag(This,tagValue,rva,ppResult)	\
    ( (This)->lpVtbl -> findSymbolsByRVAForAcceleratorPointerTag(This,tagValue,rva,ppResult) ) 

#define IDiaSymbol2_get_acceleratorPointerTags(This,cnt,pcnt,pPointerTags)	\
    ( (This)->lpVtbl -> get_acceleratorPointerTags(This,cnt,pcnt,pPointerTags) ) 

#define IDiaSymbol2_getSrcLineOnTypeDefn(This,ppResult)	\
    ( (This)->lpVtbl -> getSrcLineOnTypeDefn(This,ppResult) ) 

#define IDiaSymbol2_get_isPGO(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPGO(This,pRetVal) ) 

#define IDiaSymbol2_get_hasValidPGOCounts(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasValidPGOCounts(This,pRetVal) ) 

#define IDiaSymbol2_get_isOptimizedForSpeed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isOptimizedForSpeed(This,pRetVal) ) 

#define IDiaSymbol2_get_PGOEntryCount(This,pRetVal)	\
    ( (This)->lpVtbl -> get_PGOEntryCount(This,pRetVal) ) 

#define IDiaSymbol2_get_PGOEdgeCount(This,pRetVal)	\
    ( (This)->lpVtbl -> get_PGOEdgeCount(This,pRetVal) ) 

#define IDiaSymbol2_get_PGODynamicInstructionCount(This,pRetVal)	\
    ( (This)->lpVtbl -> get_PGODynamicInstructionCount(This,pRetVal) ) 

#define IDiaSymbol2_get_staticSize(This,pRetVal)	\
    ( (This)->lpVtbl -> get_staticSize(This,pRetVal) ) 

#define IDiaSymbol2_get_finalLiveStaticSize(This,pRetVal)	\
    ( (This)->lpVtbl -> get_finalLiveStaticSize(This,pRetVal) ) 

#define IDiaSymbol2_get_phaseName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_phaseName(This,pRetVal) ) 

#define IDiaSymbol2_get_hasControlFlowCheck(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasControlFlowCheck(This,pRetVal) ) 

#define IDiaSymbol2_get_constantExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_constantExport(This,pRetVal) ) 

#define IDiaSymbol2_get_dataExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_dataExport(This,pRetVal) ) 

#define IDiaSymbol2_get_privateExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_privateExport(This,pRetVal) ) 

#define IDiaSymbol2_get_noNameExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noNameExport(This,pRetVal) ) 

#define IDiaSymbol2_get_exportHasExplicitlyAssignedOrdinal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exportHasExplicitlyAssignedOrdinal(This,pRetVal) ) 

#define IDiaSymbol2_get_exportIsForwarder(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exportIsForwarder(This,pRetVal) ) 

#define IDiaSymbol2_get_ordinal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_ordinal(This,pRetVal) ) 

#define IDiaSymbol2_get_frameSize(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frameSize(This,pRetVal) ) 

#define IDiaSymbol2_get_exceptionHandlerAddressSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerAddressSection(This,pRetVal) ) 

#define IDiaSymbol2_get_exceptionHandlerAddressOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerAddressOffset(This,pRetVal) ) 

#define IDiaSymbol2_get_exceptionHandlerRelativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerRelativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol2_get_exceptionHandlerVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol2_findInputAssemblyFile(This,ppResult)	\
    ( (This)->lpVtbl -> findInputAssemblyFile(This,ppResult) ) 

#define IDiaSymbol2_get_characteristics(This,pRetVal)	\
    ( (This)->lpVtbl -> get_characteristics(This,pRetVal) ) 

#define IDiaSymbol2_get_coffGroup(This,pRetVal)	\
    ( (This)->lpVtbl -> get_coffGroup(This,pRetVal) ) 

#define IDiaSymbol2_get_bindID(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bindID(This,pRetVal) ) 

#define IDiaSymbol2_get_bindSpace(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bindSpace(This,pRetVal) ) 

#define IDiaSymbol2_get_bindSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bindSlot(This,pRetVal) ) 


#define IDiaSymbol2_get_isObjCClass(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isObjCClass(This,pRetVal) ) 

#define IDiaSymbol2_get_isObjCCategory(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isObjCCategory(This,pRetVal) ) 

#define IDiaSymbol2_get_isObjCProtocol(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isObjCProtocol(This,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol2_get_isObjCClass_Proxy( 
    IDiaSymbol2 * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol2_get_isObjCClass_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol2_get_isObjCCategory_Proxy( 
    IDiaSymbol2 * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol2_get_isObjCCategory_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol2_get_isObjCProtocol_Proxy( 
    IDiaSymbol2 * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol2_get_isObjCProtocol_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDiaSymbol2_INTERFACE_DEFINED__ */


#ifndef __IDiaSymbol3_INTERFACE_DEFINED__
#define __IDiaSymbol3_INTERFACE_DEFINED__

/* interface IDiaSymbol3 */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaSymbol3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("99b665f7-c1b2-49d3-89b2-a384361acab5")
    IDiaSymbol3 : public IDiaSymbol2
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_inlinee( 
            /* [retval][out] */ IDiaSymbol **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_inlineeId( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaSymbol3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaSymbol3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaSymbol3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaSymbol3 * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_symIndexId )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_symTag )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_name )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lexicalParent )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_classParent )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_type )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_dataKind )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_locationType )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressSection )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressOffset )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_relativeVirtualAddress )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualAddress )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_registerId )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_offset )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_length )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_slot )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_volatileType )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_constType )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unalignedType )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_access )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_libraryName )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_platform )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_language )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_editAndContinueEnabled )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndMajor )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndMinor )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndBuild )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndMajor )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndMinor )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndBuild )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sourceFileName )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unused )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_thunkOrdinal )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_thisAdjust )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseOffset )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtual )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_intro )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_pure )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_callingConvention )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_value )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ VARIANT *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseType )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_token )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_timeStamp )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_guid )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ GUID *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_symbolsFileName )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_reference )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_count )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bitPosition )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_arrayIndexType )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_packed )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_constructor )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_overloadedOperator )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_nested )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasNestedTypes )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasAssignmentOperator )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasCastOperator )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_scoped )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseClass )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_indirectVirtualBaseClass )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBasePointerOffset )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualTableShape )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lexicalParentId )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_classParentId )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_typeId )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_arrayIndexTypeId )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualTableShapeId )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_code )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_function )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_managed )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_msil )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseDispIndex )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_undecoratedName )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_age )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_signature )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_compilerGenerated )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressTaken )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_rank )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lowerBound )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_upperBound )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lowerBoundId )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_upperBoundId )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_dataBytes )( 
            IDiaSymbol3 * This,
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData);
        
        HRESULT ( STDMETHODCALLTYPE *findChildren )( 
            IDiaSymbol3 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenEx )( 
            IDiaSymbol3 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenExByAddr )( 
            IDiaSymbol3 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenExByVA )( 
            IDiaSymbol3 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ ULONGLONG va,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenExByRVA )( 
            IDiaSymbol3 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetSection )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetOffset )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetRelativeVirtualAddress )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetVirtualAddress )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_machineType )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_oemId )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_oemSymbolId )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_types )( 
            IDiaSymbol3 * This,
            /* [in] */ DWORD cTypes,
            /* [out] */ DWORD *pcTypes,
            /* [size_is][size_is][out] */ IDiaSymbol **pTypes);
        
        HRESULT ( STDMETHODCALLTYPE *get_typeIds )( 
            IDiaSymbol3 * This,
            /* [in] */ DWORD cTypeIds,
            /* [out] */ DWORD *pcTypeIds,
            /* [size_is][out] */ DWORD *pdwTypeIds);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_objectPointerType )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_udtKind )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_undecoratedNameEx )( 
            IDiaSymbol3 * This,
            /* [in] */ DWORD undecorateOptions,
            /* [out] */ BSTR *name);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noReturn )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_customCallingConvention )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noInline )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_optimizedCodeDebugInfo )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_notReached )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_interruptReturn )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_farReturn )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isStatic )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasDebugInfo )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isLTCG )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isDataAligned )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasSecurityChecks )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_compilerName )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasAlloca )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasSetJump )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasLongJump )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasInlAsm )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasEH )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasSEH )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasEHa )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isNaked )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAggregated )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSplitted )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_container )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_inlSpec )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noStackOrdering )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseTableType )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasManagedCode )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isHotpatchable )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isCVTCIL )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isMSILNetmodule )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isCTypes )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isStripped )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndQFE )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndQFE )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_wasInlined )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_strictGSCheck )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isCxxReturnUdt )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isConstructorVirtualBase )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RValueReference )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unmodifiedType )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_framePointerPresent )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSafeBuffers )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_intrinsic )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sealed )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hfaFloat )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hfaDouble )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeStartAddressSection )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeStartAddressOffset )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeStartRelativeVirtualAddress )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_countLiveRanges )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeLength )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_offsetInUdt )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_paramBasePointerRegisterId )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_localBasePointerRegisterId )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isLocationControlFlowDependent )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_stride )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfRows )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfColumns )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isMatrixRowMajor )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_numericProperties )( 
            IDiaSymbol3 * This,
            /* [in] */ DWORD cnt,
            /* [out] */ DWORD *pcnt,
            /* [size_is][out] */ DWORD *pProperties);
        
        HRESULT ( STDMETHODCALLTYPE *get_modifierValues )( 
            IDiaSymbol3 * This,
            /* [in] */ DWORD cnt,
            /* [out] */ DWORD *pcnt,
            /* [size_is][out] */ WORD *pModifiers);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isReturnValue )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isOptimizedAway )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_builtInKind )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_registerType )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseDataSlot )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseDataOffset )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_textureSlot )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_samplerSlot )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_uavSlot )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sizeInUdt )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_memorySpaceKind )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unmodifiedTypeId )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_subTypeId )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_subType )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfModifiers )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfRegisterIndices )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isHLSLData )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPointerToDataMember )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPointerToMemberFunction )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSingleInheritance )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isMultipleInheritance )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isVirtualInheritance )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_restrictedType )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPointerBasedOnSymbolValue )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseSymbol )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseSymbolId )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_objectFileName )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAcceleratorGroupSharedLocal )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAcceleratorPointerTagLiveRange )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAcceleratorStubFunction )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfAcceleratorPointerTags )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSdl )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isWinRTPointer )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isRefUdt )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isValueUdt )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isInterfaceUdt )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineFramesByAddr )( 
            IDiaSymbol3 * This,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineFramesByRVA )( 
            IDiaSymbol3 * This,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineFramesByVA )( 
            IDiaSymbol3 * This,
            /* [in] */ ULONGLONG va,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLines )( 
            IDiaSymbol3 * This,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLinesByAddr )( 
            IDiaSymbol3 * This,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLinesByRVA )( 
            IDiaSymbol3 * This,
            /* [in] */ DWORD rva,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLinesByVA )( 
            IDiaSymbol3 * This,
            /* [in] */ ULONGLONG va,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findSymbolsForAcceleratorPointerTag )( 
            IDiaSymbol3 * This,
            /* [in] */ DWORD tagValue,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findSymbolsByRVAForAcceleratorPointerTag )( 
            IDiaSymbol3 * This,
            /* [in] */ DWORD tagValue,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *get_acceleratorPointerTags )( 
            IDiaSymbol3 * This,
            /* [in] */ DWORD cnt,
            /* [out] */ DWORD *pcnt,
            /* [size_is][out] */ DWORD *pPointerTags);
        
        HRESULT ( STDMETHODCALLTYPE *getSrcLineOnTypeDefn )( 
            IDiaSymbol3 * This,
            /* [out] */ IDiaLineNumber **ppResult);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPGO )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasValidPGOCounts )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isOptimizedForSpeed )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PGOEntryCount )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PGOEdgeCount )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PGODynamicInstructionCount )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_staticSize )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_finalLiveStaticSize )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_phaseName )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasControlFlowCheck )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_constantExport )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_dataExport )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_privateExport )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noNameExport )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exportHasExplicitlyAssignedOrdinal )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exportIsForwarder )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ordinal )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frameSize )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerAddressSection )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerAddressOffset )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerRelativeVirtualAddress )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerVirtualAddress )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *findInputAssemblyFile )( 
            IDiaSymbol3 * This,
            /* [out] */ IDiaInputAssemblyFile **ppResult);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_characteristics )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_coffGroup )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bindID )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bindSpace )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bindSlot )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isObjCClass )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isObjCCategory )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isObjCProtocol )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_inlinee )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_inlineeId )( 
            IDiaSymbol3 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        END_INTERFACE
    } IDiaSymbol3Vtbl;

    interface IDiaSymbol3
    {
        CONST_VTBL struct IDiaSymbol3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaSymbol3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaSymbol3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaSymbol3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaSymbol3_get_symIndexId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_symIndexId(This,pRetVal) ) 

#define IDiaSymbol3_get_symTag(This,pRetVal)	\
    ( (This)->lpVtbl -> get_symTag(This,pRetVal) ) 

#define IDiaSymbol3_get_name(This,pRetVal)	\
    ( (This)->lpVtbl -> get_name(This,pRetVal) ) 

#define IDiaSymbol3_get_lexicalParent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lexicalParent(This,pRetVal) ) 

#define IDiaSymbol3_get_classParent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_classParent(This,pRetVal) ) 

#define IDiaSymbol3_get_type(This,pRetVal)	\
    ( (This)->lpVtbl -> get_type(This,pRetVal) ) 

#define IDiaSymbol3_get_dataKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_dataKind(This,pRetVal) ) 

#define IDiaSymbol3_get_locationType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_locationType(This,pRetVal) ) 

#define IDiaSymbol3_get_addressSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressSection(This,pRetVal) ) 

#define IDiaSymbol3_get_addressOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressOffset(This,pRetVal) ) 

#define IDiaSymbol3_get_relativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_relativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol3_get_virtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualAddress(This,pRetVal) ) 

#define IDiaSymbol3_get_registerId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_registerId(This,pRetVal) ) 

#define IDiaSymbol3_get_offset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_offset(This,pRetVal) ) 

#define IDiaSymbol3_get_length(This,pRetVal)	\
    ( (This)->lpVtbl -> get_length(This,pRetVal) ) 

#define IDiaSymbol3_get_slot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_slot(This,pRetVal) ) 

#define IDiaSymbol3_get_volatileType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_volatileType(This,pRetVal) ) 

#define IDiaSymbol3_get_constType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_constType(This,pRetVal) ) 

#define IDiaSymbol3_get_unalignedType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unalignedType(This,pRetVal) ) 

#define IDiaSymbol3_get_access(This,pRetVal)	\
    ( (This)->lpVtbl -> get_access(This,pRetVal) ) 

#define IDiaSymbol3_get_libraryName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_libraryName(This,pRetVal) ) 

#define IDiaSymbol3_get_platform(This,pRetVal)	\
    ( (This)->lpVtbl -> get_platform(This,pRetVal) ) 

#define IDiaSymbol3_get_language(This,pRetVal)	\
    ( (This)->lpVtbl -> get_language(This,pRetVal) ) 

#define IDiaSymbol3_get_editAndContinueEnabled(This,pRetVal)	\
    ( (This)->lpVtbl -> get_editAndContinueEnabled(This,pRetVal) ) 

#define IDiaSymbol3_get_frontEndMajor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndMajor(This,pRetVal) ) 

#define IDiaSymbol3_get_frontEndMinor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndMinor(This,pRetVal) ) 

#define IDiaSymbol3_get_frontEndBuild(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndBuild(This,pRetVal) ) 

#define IDiaSymbol3_get_backEndMajor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndMajor(This,pRetVal) ) 

#define IDiaSymbol3_get_backEndMinor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndMinor(This,pRetVal) ) 

#define IDiaSymbol3_get_backEndBuild(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndBuild(This,pRetVal) ) 

#define IDiaSymbol3_get_sourceFileName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_sourceFileName(This,pRetVal) ) 

#define IDiaSymbol3_get_unused(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unused(This,pRetVal) ) 

#define IDiaSymbol3_get_thunkOrdinal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_thunkOrdinal(This,pRetVal) ) 

#define IDiaSymbol3_get_thisAdjust(This,pRetVal)	\
    ( (This)->lpVtbl -> get_thisAdjust(This,pRetVal) ) 

#define IDiaSymbol3_get_virtualBaseOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseOffset(This,pRetVal) ) 

#define IDiaSymbol3_get_virtual(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtual(This,pRetVal) ) 

#define IDiaSymbol3_get_intro(This,pRetVal)	\
    ( (This)->lpVtbl -> get_intro(This,pRetVal) ) 

#define IDiaSymbol3_get_pure(This,pRetVal)	\
    ( (This)->lpVtbl -> get_pure(This,pRetVal) ) 

#define IDiaSymbol3_get_callingConvention(This,pRetVal)	\
    ( (This)->lpVtbl -> get_callingConvention(This,pRetVal) ) 

#define IDiaSymbol3_get_value(This,pRetVal)	\
    ( (This)->lpVtbl -> get_value(This,pRetVal) ) 

#define IDiaSymbol3_get_baseType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseType(This,pRetVal) ) 

#define IDiaSymbol3_get_token(This,pRetVal)	\
    ( (This)->lpVtbl -> get_token(This,pRetVal) ) 

#define IDiaSymbol3_get_timeStamp(This,pRetVal)	\
    ( (This)->lpVtbl -> get_timeStamp(This,pRetVal) ) 

#define IDiaSymbol3_get_guid(This,pRetVal)	\
    ( (This)->lpVtbl -> get_guid(This,pRetVal) ) 

#define IDiaSymbol3_get_symbolsFileName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_symbolsFileName(This,pRetVal) ) 

#define IDiaSymbol3_get_reference(This,pRetVal)	\
    ( (This)->lpVtbl -> get_reference(This,pRetVal) ) 

#define IDiaSymbol3_get_count(This,pRetVal)	\
    ( (This)->lpVtbl -> get_count(This,pRetVal) ) 

#define IDiaSymbol3_get_bitPosition(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bitPosition(This,pRetVal) ) 

#define IDiaSymbol3_get_arrayIndexType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_arrayIndexType(This,pRetVal) ) 

#define IDiaSymbol3_get_packed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_packed(This,pRetVal) ) 

#define IDiaSymbol3_get_constructor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_constructor(This,pRetVal) ) 

#define IDiaSymbol3_get_overloadedOperator(This,pRetVal)	\
    ( (This)->lpVtbl -> get_overloadedOperator(This,pRetVal) ) 

#define IDiaSymbol3_get_nested(This,pRetVal)	\
    ( (This)->lpVtbl -> get_nested(This,pRetVal) ) 

#define IDiaSymbol3_get_hasNestedTypes(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasNestedTypes(This,pRetVal) ) 

#define IDiaSymbol3_get_hasAssignmentOperator(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasAssignmentOperator(This,pRetVal) ) 

#define IDiaSymbol3_get_hasCastOperator(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasCastOperator(This,pRetVal) ) 

#define IDiaSymbol3_get_scoped(This,pRetVal)	\
    ( (This)->lpVtbl -> get_scoped(This,pRetVal) ) 

#define IDiaSymbol3_get_virtualBaseClass(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseClass(This,pRetVal) ) 

#define IDiaSymbol3_get_indirectVirtualBaseClass(This,pRetVal)	\
    ( (This)->lpVtbl -> get_indirectVirtualBaseClass(This,pRetVal) ) 

#define IDiaSymbol3_get_virtualBasePointerOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBasePointerOffset(This,pRetVal) ) 

#define IDiaSymbol3_get_virtualTableShape(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualTableShape(This,pRetVal) ) 

#define IDiaSymbol3_get_lexicalParentId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lexicalParentId(This,pRetVal) ) 

#define IDiaSymbol3_get_classParentId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_classParentId(This,pRetVal) ) 

#define IDiaSymbol3_get_typeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_typeId(This,pRetVal) ) 

#define IDiaSymbol3_get_arrayIndexTypeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_arrayIndexTypeId(This,pRetVal) ) 

#define IDiaSymbol3_get_virtualTableShapeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualTableShapeId(This,pRetVal) ) 

#define IDiaSymbol3_get_code(This,pRetVal)	\
    ( (This)->lpVtbl -> get_code(This,pRetVal) ) 

#define IDiaSymbol3_get_function(This,pRetVal)	\
    ( (This)->lpVtbl -> get_function(This,pRetVal) ) 

#define IDiaSymbol3_get_managed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_managed(This,pRetVal) ) 

#define IDiaSymbol3_get_msil(This,pRetVal)	\
    ( (This)->lpVtbl -> get_msil(This,pRetVal) ) 

#define IDiaSymbol3_get_virtualBaseDispIndex(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseDispIndex(This,pRetVal) ) 

#define IDiaSymbol3_get_undecoratedName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_undecoratedName(This,pRetVal) ) 

#define IDiaSymbol3_get_age(This,pRetVal)	\
    ( (This)->lpVtbl -> get_age(This,pRetVal) ) 

#define IDiaSymbol3_get_signature(This,pRetVal)	\
    ( (This)->lpVtbl -> get_signature(This,pRetVal) ) 

#define IDiaSymbol3_get_compilerGenerated(This,pRetVal)	\
    ( (This)->lpVtbl -> get_compilerGenerated(This,pRetVal) ) 

#define IDiaSymbol3_get_addressTaken(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressTaken(This,pRetVal) ) 

#define IDiaSymbol3_get_rank(This,pRetVal)	\
    ( (This)->lpVtbl -> get_rank(This,pRetVal) ) 

#define IDiaSymbol3_get_lowerBound(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lowerBound(This,pRetVal) ) 

#define IDiaSymbol3_get_upperBound(This,pRetVal)	\
    ( (This)->lpVtbl -> get_upperBound(This,pRetVal) ) 

#define IDiaSymbol3_get_lowerBoundId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lowerBoundId(This,pRetVal) ) 

#define IDiaSymbol3_get_upperBoundId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_upperBoundId(This,pRetVal) ) 

#define IDiaSymbol3_get_dataBytes(This,cbData,pcbData,pbData)	\
    ( (This)->lpVtbl -> get_dataBytes(This,cbData,pcbData,pbData) ) 

#define IDiaSymbol3_findChildren(This,symtag,name,compareFlags,ppResult)	\
    ( (This)->lpVtbl -> findChildren(This,symtag,name,compareFlags,ppResult) ) 

#define IDiaSymbol3_findChildrenEx(This,symtag,name,compareFlags,ppResult)	\
    ( (This)->lpVtbl -> findChildrenEx(This,symtag,name,compareFlags,ppResult) ) 

#define IDiaSymbol3_findChildrenExByAddr(This,symtag,name,compareFlags,isect,offset,ppResult)	\
    ( (This)->lpVtbl -> findChildrenExByAddr(This,symtag,name,compareFlags,isect,offset,ppResult) ) 

#define IDiaSymbol3_findChildrenExByVA(This,symtag,name,compareFlags,va,ppResult)	\
    ( (This)->lpVtbl -> findChildrenExByVA(This,symtag,name,compareFlags,va,ppResult) ) 

#define IDiaSymbol3_findChildrenExByRVA(This,symtag,name,compareFlags,rva,ppResult)	\
    ( (This)->lpVtbl -> findChildrenExByRVA(This,symtag,name,compareFlags,rva,ppResult) ) 

#define IDiaSymbol3_get_targetSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetSection(This,pRetVal) ) 

#define IDiaSymbol3_get_targetOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetOffset(This,pRetVal) ) 

#define IDiaSymbol3_get_targetRelativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetRelativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol3_get_targetVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol3_get_machineType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_machineType(This,pRetVal) ) 

#define IDiaSymbol3_get_oemId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_oemId(This,pRetVal) ) 

#define IDiaSymbol3_get_oemSymbolId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_oemSymbolId(This,pRetVal) ) 

#define IDiaSymbol3_get_types(This,cTypes,pcTypes,pTypes)	\
    ( (This)->lpVtbl -> get_types(This,cTypes,pcTypes,pTypes) ) 

#define IDiaSymbol3_get_typeIds(This,cTypeIds,pcTypeIds,pdwTypeIds)	\
    ( (This)->lpVtbl -> get_typeIds(This,cTypeIds,pcTypeIds,pdwTypeIds) ) 

#define IDiaSymbol3_get_objectPointerType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_objectPointerType(This,pRetVal) ) 

#define IDiaSymbol3_get_udtKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_udtKind(This,pRetVal) ) 

#define IDiaSymbol3_get_undecoratedNameEx(This,undecorateOptions,name)	\
    ( (This)->lpVtbl -> get_undecoratedNameEx(This,undecorateOptions,name) ) 

#define IDiaSymbol3_get_noReturn(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noReturn(This,pRetVal) ) 

#define IDiaSymbol3_get_customCallingConvention(This,pRetVal)	\
    ( (This)->lpVtbl -> get_customCallingConvention(This,pRetVal) ) 

#define IDiaSymbol3_get_noInline(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noInline(This,pRetVal) ) 

#define IDiaSymbol3_get_optimizedCodeDebugInfo(This,pRetVal)	\
    ( (This)->lpVtbl -> get_optimizedCodeDebugInfo(This,pRetVal) ) 

#define IDiaSymbol3_get_notReached(This,pRetVal)	\
    ( (This)->lpVtbl -> get_notReached(This,pRetVal) ) 

#define IDiaSymbol3_get_interruptReturn(This,pRetVal)	\
    ( (This)->lpVtbl -> get_interruptReturn(This,pRetVal) ) 

#define IDiaSymbol3_get_farReturn(This,pRetVal)	\
    ( (This)->lpVtbl -> get_farReturn(This,pRetVal) ) 

#define IDiaSymbol3_get_isStatic(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isStatic(This,pRetVal) ) 

#define IDiaSymbol3_get_hasDebugInfo(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasDebugInfo(This,pRetVal) ) 

#define IDiaSymbol3_get_isLTCG(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isLTCG(This,pRetVal) ) 

#define IDiaSymbol3_get_isDataAligned(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isDataAligned(This,pRetVal) ) 

#define IDiaSymbol3_get_hasSecurityChecks(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasSecurityChecks(This,pRetVal) ) 

#define IDiaSymbol3_get_compilerName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_compilerName(This,pRetVal) ) 

#define IDiaSymbol3_get_hasAlloca(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasAlloca(This,pRetVal) ) 

#define IDiaSymbol3_get_hasSetJump(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasSetJump(This,pRetVal) ) 

#define IDiaSymbol3_get_hasLongJump(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasLongJump(This,pRetVal) ) 

#define IDiaSymbol3_get_hasInlAsm(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasInlAsm(This,pRetVal) ) 

#define IDiaSymbol3_get_hasEH(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasEH(This,pRetVal) ) 

#define IDiaSymbol3_get_hasSEH(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasSEH(This,pRetVal) ) 

#define IDiaSymbol3_get_hasEHa(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasEHa(This,pRetVal) ) 

#define IDiaSymbol3_get_isNaked(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isNaked(This,pRetVal) ) 

#define IDiaSymbol3_get_isAggregated(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAggregated(This,pRetVal) ) 

#define IDiaSymbol3_get_isSplitted(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSplitted(This,pRetVal) ) 

#define IDiaSymbol3_get_container(This,pRetVal)	\
    ( (This)->lpVtbl -> get_container(This,pRetVal) ) 

#define IDiaSymbol3_get_inlSpec(This,pRetVal)	\
    ( (This)->lpVtbl -> get_inlSpec(This,pRetVal) ) 

#define IDiaSymbol3_get_noStackOrdering(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noStackOrdering(This,pRetVal) ) 

#define IDiaSymbol3_get_virtualBaseTableType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseTableType(This,pRetVal) ) 

#define IDiaSymbol3_get_hasManagedCode(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasManagedCode(This,pRetVal) ) 

#define IDiaSymbol3_get_isHotpatchable(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isHotpatchable(This,pRetVal) ) 

#define IDiaSymbol3_get_isCVTCIL(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isCVTCIL(This,pRetVal) ) 

#define IDiaSymbol3_get_isMSILNetmodule(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isMSILNetmodule(This,pRetVal) ) 

#define IDiaSymbol3_get_isCTypes(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isCTypes(This,pRetVal) ) 

#define IDiaSymbol3_get_isStripped(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isStripped(This,pRetVal) ) 

#define IDiaSymbol3_get_frontEndQFE(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndQFE(This,pRetVal) ) 

#define IDiaSymbol3_get_backEndQFE(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndQFE(This,pRetVal) ) 

#define IDiaSymbol3_get_wasInlined(This,pRetVal)	\
    ( (This)->lpVtbl -> get_wasInlined(This,pRetVal) ) 

#define IDiaSymbol3_get_strictGSCheck(This,pRetVal)	\
    ( (This)->lpVtbl -> get_strictGSCheck(This,pRetVal) ) 

#define IDiaSymbol3_get_isCxxReturnUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isCxxReturnUdt(This,pRetVal) ) 

#define IDiaSymbol3_get_isConstructorVirtualBase(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isConstructorVirtualBase(This,pRetVal) ) 

#define IDiaSymbol3_get_RValueReference(This,pRetVal)	\
    ( (This)->lpVtbl -> get_RValueReference(This,pRetVal) ) 

#define IDiaSymbol3_get_unmodifiedType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unmodifiedType(This,pRetVal) ) 

#define IDiaSymbol3_get_framePointerPresent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_framePointerPresent(This,pRetVal) ) 

#define IDiaSymbol3_get_isSafeBuffers(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSafeBuffers(This,pRetVal) ) 

#define IDiaSymbol3_get_intrinsic(This,pRetVal)	\
    ( (This)->lpVtbl -> get_intrinsic(This,pRetVal) ) 

#define IDiaSymbol3_get_sealed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_sealed(This,pRetVal) ) 

#define IDiaSymbol3_get_hfaFloat(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hfaFloat(This,pRetVal) ) 

#define IDiaSymbol3_get_hfaDouble(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hfaDouble(This,pRetVal) ) 

#define IDiaSymbol3_get_liveRangeStartAddressSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeStartAddressSection(This,pRetVal) ) 

#define IDiaSymbol3_get_liveRangeStartAddressOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeStartAddressOffset(This,pRetVal) ) 

#define IDiaSymbol3_get_liveRangeStartRelativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeStartRelativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol3_get_countLiveRanges(This,pRetVal)	\
    ( (This)->lpVtbl -> get_countLiveRanges(This,pRetVal) ) 

#define IDiaSymbol3_get_liveRangeLength(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeLength(This,pRetVal) ) 

#define IDiaSymbol3_get_offsetInUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_offsetInUdt(This,pRetVal) ) 

#define IDiaSymbol3_get_paramBasePointerRegisterId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_paramBasePointerRegisterId(This,pRetVal) ) 

#define IDiaSymbol3_get_localBasePointerRegisterId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_localBasePointerRegisterId(This,pRetVal) ) 

#define IDiaSymbol3_get_isLocationControlFlowDependent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isLocationControlFlowDependent(This,pRetVal) ) 

#define IDiaSymbol3_get_stride(This,pRetVal)	\
    ( (This)->lpVtbl -> get_stride(This,pRetVal) ) 

#define IDiaSymbol3_get_numberOfRows(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfRows(This,pRetVal) ) 

#define IDiaSymbol3_get_numberOfColumns(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfColumns(This,pRetVal) ) 

#define IDiaSymbol3_get_isMatrixRowMajor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isMatrixRowMajor(This,pRetVal) ) 

#define IDiaSymbol3_get_numericProperties(This,cnt,pcnt,pProperties)	\
    ( (This)->lpVtbl -> get_numericProperties(This,cnt,pcnt,pProperties) ) 

#define IDiaSymbol3_get_modifierValues(This,cnt,pcnt,pModifiers)	\
    ( (This)->lpVtbl -> get_modifierValues(This,cnt,pcnt,pModifiers) ) 

#define IDiaSymbol3_get_isReturnValue(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isReturnValue(This,pRetVal) ) 

#define IDiaSymbol3_get_isOptimizedAway(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isOptimizedAway(This,pRetVal) ) 

#define IDiaSymbol3_get_builtInKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_builtInKind(This,pRetVal) ) 

#define IDiaSymbol3_get_registerType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_registerType(This,pRetVal) ) 

#define IDiaSymbol3_get_baseDataSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseDataSlot(This,pRetVal) ) 

#define IDiaSymbol3_get_baseDataOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseDataOffset(This,pRetVal) ) 

#define IDiaSymbol3_get_textureSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_textureSlot(This,pRetVal) ) 

#define IDiaSymbol3_get_samplerSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_samplerSlot(This,pRetVal) ) 

#define IDiaSymbol3_get_uavSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_uavSlot(This,pRetVal) ) 

#define IDiaSymbol3_get_sizeInUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_sizeInUdt(This,pRetVal) ) 

#define IDiaSymbol3_get_memorySpaceKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_memorySpaceKind(This,pRetVal) ) 

#define IDiaSymbol3_get_unmodifiedTypeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unmodifiedTypeId(This,pRetVal) ) 

#define IDiaSymbol3_get_subTypeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_subTypeId(This,pRetVal) ) 

#define IDiaSymbol3_get_subType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_subType(This,pRetVal) ) 

#define IDiaSymbol3_get_numberOfModifiers(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfModifiers(This,pRetVal) ) 

#define IDiaSymbol3_get_numberOfRegisterIndices(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfRegisterIndices(This,pRetVal) ) 

#define IDiaSymbol3_get_isHLSLData(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isHLSLData(This,pRetVal) ) 

#define IDiaSymbol3_get_isPointerToDataMember(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPointerToDataMember(This,pRetVal) ) 

#define IDiaSymbol3_get_isPointerToMemberFunction(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPointerToMemberFunction(This,pRetVal) ) 

#define IDiaSymbol3_get_isSingleInheritance(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSingleInheritance(This,pRetVal) ) 

#define IDiaSymbol3_get_isMultipleInheritance(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isMultipleInheritance(This,pRetVal) ) 

#define IDiaSymbol3_get_isVirtualInheritance(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isVirtualInheritance(This,pRetVal) ) 

#define IDiaSymbol3_get_restrictedType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_restrictedType(This,pRetVal) ) 

#define IDiaSymbol3_get_isPointerBasedOnSymbolValue(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPointerBasedOnSymbolValue(This,pRetVal) ) 

#define IDiaSymbol3_get_baseSymbol(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseSymbol(This,pRetVal) ) 

#define IDiaSymbol3_get_baseSymbolId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseSymbolId(This,pRetVal) ) 

#define IDiaSymbol3_get_objectFileName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_objectFileName(This,pRetVal) ) 

#define IDiaSymbol3_get_isAcceleratorGroupSharedLocal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAcceleratorGroupSharedLocal(This,pRetVal) ) 

#define IDiaSymbol3_get_isAcceleratorPointerTagLiveRange(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAcceleratorPointerTagLiveRange(This,pRetVal) ) 

#define IDiaSymbol3_get_isAcceleratorStubFunction(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAcceleratorStubFunction(This,pRetVal) ) 

#define IDiaSymbol3_get_numberOfAcceleratorPointerTags(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfAcceleratorPointerTags(This,pRetVal) ) 

#define IDiaSymbol3_get_isSdl(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSdl(This,pRetVal) ) 

#define IDiaSymbol3_get_isWinRTPointer(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isWinRTPointer(This,pRetVal) ) 

#define IDiaSymbol3_get_isRefUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isRefUdt(This,pRetVal) ) 

#define IDiaSymbol3_get_isValueUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isValueUdt(This,pRetVal) ) 

#define IDiaSymbol3_get_isInterfaceUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isInterfaceUdt(This,pRetVal) ) 

#define IDiaSymbol3_findInlineFramesByAddr(This,isect,offset,ppResult)	\
    ( (This)->lpVtbl -> findInlineFramesByAddr(This,isect,offset,ppResult) ) 

#define IDiaSymbol3_findInlineFramesByRVA(This,rva,ppResult)	\
    ( (This)->lpVtbl -> findInlineFramesByRVA(This,rva,ppResult) ) 

#define IDiaSymbol3_findInlineFramesByVA(This,va,ppResult)	\
    ( (This)->lpVtbl -> findInlineFramesByVA(This,va,ppResult) ) 

#define IDiaSymbol3_findInlineeLines(This,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLines(This,ppResult) ) 

#define IDiaSymbol3_findInlineeLinesByAddr(This,isect,offset,length,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLinesByAddr(This,isect,offset,length,ppResult) ) 

#define IDiaSymbol3_findInlineeLinesByRVA(This,rva,length,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLinesByRVA(This,rva,length,ppResult) ) 

#define IDiaSymbol3_findInlineeLinesByVA(This,va,length,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLinesByVA(This,va,length,ppResult) ) 

#define IDiaSymbol3_findSymbolsForAcceleratorPointerTag(This,tagValue,ppResult)	\
    ( (This)->lpVtbl -> findSymbolsForAcceleratorPointerTag(This,tagValue,ppResult) ) 

#define IDiaSymbol3_findSymbolsByRVAForAcceleratorPointerTag(This,tagValue,rva,ppResult)	\
    ( (This)->lpVtbl -> findSymbolsByRVAForAcceleratorPointerTag(This,tagValue,rva,ppResult) ) 

#define IDiaSymbol3_get_acceleratorPointerTags(This,cnt,pcnt,pPointerTags)	\
    ( (This)->lpVtbl -> get_acceleratorPointerTags(This,cnt,pcnt,pPointerTags) ) 

#define IDiaSymbol3_getSrcLineOnTypeDefn(This,ppResult)	\
    ( (This)->lpVtbl -> getSrcLineOnTypeDefn(This,ppResult) ) 

#define IDiaSymbol3_get_isPGO(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPGO(This,pRetVal) ) 

#define IDiaSymbol3_get_hasValidPGOCounts(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasValidPGOCounts(This,pRetVal) ) 

#define IDiaSymbol3_get_isOptimizedForSpeed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isOptimizedForSpeed(This,pRetVal) ) 

#define IDiaSymbol3_get_PGOEntryCount(This,pRetVal)	\
    ( (This)->lpVtbl -> get_PGOEntryCount(This,pRetVal) ) 

#define IDiaSymbol3_get_PGOEdgeCount(This,pRetVal)	\
    ( (This)->lpVtbl -> get_PGOEdgeCount(This,pRetVal) ) 

#define IDiaSymbol3_get_PGODynamicInstructionCount(This,pRetVal)	\
    ( (This)->lpVtbl -> get_PGODynamicInstructionCount(This,pRetVal) ) 

#define IDiaSymbol3_get_staticSize(This,pRetVal)	\
    ( (This)->lpVtbl -> get_staticSize(This,pRetVal) ) 

#define IDiaSymbol3_get_finalLiveStaticSize(This,pRetVal)	\
    ( (This)->lpVtbl -> get_finalLiveStaticSize(This,pRetVal) ) 

#define IDiaSymbol3_get_phaseName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_phaseName(This,pRetVal) ) 

#define IDiaSymbol3_get_hasControlFlowCheck(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasControlFlowCheck(This,pRetVal) ) 

#define IDiaSymbol3_get_constantExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_constantExport(This,pRetVal) ) 

#define IDiaSymbol3_get_dataExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_dataExport(This,pRetVal) ) 

#define IDiaSymbol3_get_privateExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_privateExport(This,pRetVal) ) 

#define IDiaSymbol3_get_noNameExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noNameExport(This,pRetVal) ) 

#define IDiaSymbol3_get_exportHasExplicitlyAssignedOrdinal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exportHasExplicitlyAssignedOrdinal(This,pRetVal) ) 

#define IDiaSymbol3_get_exportIsForwarder(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exportIsForwarder(This,pRetVal) ) 

#define IDiaSymbol3_get_ordinal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_ordinal(This,pRetVal) ) 

#define IDiaSymbol3_get_frameSize(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frameSize(This,pRetVal) ) 

#define IDiaSymbol3_get_exceptionHandlerAddressSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerAddressSection(This,pRetVal) ) 

#define IDiaSymbol3_get_exceptionHandlerAddressOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerAddressOffset(This,pRetVal) ) 

#define IDiaSymbol3_get_exceptionHandlerRelativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerRelativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol3_get_exceptionHandlerVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol3_findInputAssemblyFile(This,ppResult)	\
    ( (This)->lpVtbl -> findInputAssemblyFile(This,ppResult) ) 

#define IDiaSymbol3_get_characteristics(This,pRetVal)	\
    ( (This)->lpVtbl -> get_characteristics(This,pRetVal) ) 

#define IDiaSymbol3_get_coffGroup(This,pRetVal)	\
    ( (This)->lpVtbl -> get_coffGroup(This,pRetVal) ) 

#define IDiaSymbol3_get_bindID(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bindID(This,pRetVal) ) 

#define IDiaSymbol3_get_bindSpace(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bindSpace(This,pRetVal) ) 

#define IDiaSymbol3_get_bindSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bindSlot(This,pRetVal) ) 


#define IDiaSymbol3_get_isObjCClass(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isObjCClass(This,pRetVal) ) 

#define IDiaSymbol3_get_isObjCCategory(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isObjCCategory(This,pRetVal) ) 

#define IDiaSymbol3_get_isObjCProtocol(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isObjCProtocol(This,pRetVal) ) 


#define IDiaSymbol3_get_inlinee(This,pRetVal)	\
    ( (This)->lpVtbl -> get_inlinee(This,pRetVal) ) 

#define IDiaSymbol3_get_inlineeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_inlineeId(This,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol3_get_inlinee_Proxy( 
    IDiaSymbol3 * This,
    /* [retval][out] */ IDiaSymbol **pRetVal);


void __RPC_STUB IDiaSymbol3_get_inlinee_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol3_get_inlineeId_Proxy( 
    IDiaSymbol3 * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol3_get_inlineeId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDiaSymbol3_INTERFACE_DEFINED__ */


#ifndef __IDiaSymbol4_INTERFACE_DEFINED__
#define __IDiaSymbol4_INTERFACE_DEFINED__

/* interface IDiaSymbol4 */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaSymbol4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bf6c88a7-e9d6-4346-99a1-d053de5a7808")
    IDiaSymbol4 : public IDiaSymbol3
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_noexcept( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaSymbol4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaSymbol4 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaSymbol4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaSymbol4 * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_symIndexId )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_symTag )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_name )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lexicalParent )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_classParent )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_type )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_dataKind )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_locationType )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressSection )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressOffset )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_relativeVirtualAddress )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualAddress )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_registerId )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_offset )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_length )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_slot )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_volatileType )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_constType )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unalignedType )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_access )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_libraryName )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_platform )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_language )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_editAndContinueEnabled )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndMajor )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndMinor )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndBuild )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndMajor )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndMinor )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndBuild )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sourceFileName )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unused )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_thunkOrdinal )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_thisAdjust )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseOffset )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtual )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_intro )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_pure )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_callingConvention )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_value )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ VARIANT *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseType )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_token )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_timeStamp )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_guid )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ GUID *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_symbolsFileName )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_reference )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_count )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bitPosition )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_arrayIndexType )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_packed )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_constructor )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_overloadedOperator )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_nested )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasNestedTypes )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasAssignmentOperator )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasCastOperator )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_scoped )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseClass )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_indirectVirtualBaseClass )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBasePointerOffset )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualTableShape )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lexicalParentId )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_classParentId )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_typeId )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_arrayIndexTypeId )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualTableShapeId )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_code )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_function )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_managed )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_msil )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseDispIndex )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_undecoratedName )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_age )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_signature )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_compilerGenerated )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressTaken )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_rank )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lowerBound )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_upperBound )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lowerBoundId )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_upperBoundId )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_dataBytes )( 
            IDiaSymbol4 * This,
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData);
        
        HRESULT ( STDMETHODCALLTYPE *findChildren )( 
            IDiaSymbol4 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenEx )( 
            IDiaSymbol4 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenExByAddr )( 
            IDiaSymbol4 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenExByVA )( 
            IDiaSymbol4 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ ULONGLONG va,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenExByRVA )( 
            IDiaSymbol4 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetSection )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetOffset )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetRelativeVirtualAddress )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetVirtualAddress )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_machineType )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_oemId )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_oemSymbolId )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_types )( 
            IDiaSymbol4 * This,
            /* [in] */ DWORD cTypes,
            /* [out] */ DWORD *pcTypes,
            /* [size_is][size_is][out] */ IDiaSymbol **pTypes);
        
        HRESULT ( STDMETHODCALLTYPE *get_typeIds )( 
            IDiaSymbol4 * This,
            /* [in] */ DWORD cTypeIds,
            /* [out] */ DWORD *pcTypeIds,
            /* [size_is][out] */ DWORD *pdwTypeIds);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_objectPointerType )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_udtKind )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_undecoratedNameEx )( 
            IDiaSymbol4 * This,
            /* [in] */ DWORD undecorateOptions,
            /* [out] */ BSTR *name);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noReturn )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_customCallingConvention )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noInline )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_optimizedCodeDebugInfo )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_notReached )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_interruptReturn )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_farReturn )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isStatic )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasDebugInfo )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isLTCG )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isDataAligned )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasSecurityChecks )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_compilerName )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasAlloca )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasSetJump )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasLongJump )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasInlAsm )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasEH )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasSEH )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasEHa )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isNaked )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAggregated )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSplitted )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_container )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_inlSpec )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noStackOrdering )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseTableType )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasManagedCode )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isHotpatchable )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isCVTCIL )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isMSILNetmodule )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isCTypes )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isStripped )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndQFE )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndQFE )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_wasInlined )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_strictGSCheck )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isCxxReturnUdt )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isConstructorVirtualBase )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RValueReference )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unmodifiedType )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_framePointerPresent )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSafeBuffers )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_intrinsic )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sealed )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hfaFloat )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hfaDouble )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeStartAddressSection )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeStartAddressOffset )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeStartRelativeVirtualAddress )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_countLiveRanges )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeLength )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_offsetInUdt )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_paramBasePointerRegisterId )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_localBasePointerRegisterId )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isLocationControlFlowDependent )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_stride )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfRows )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfColumns )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isMatrixRowMajor )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_numericProperties )( 
            IDiaSymbol4 * This,
            /* [in] */ DWORD cnt,
            /* [out] */ DWORD *pcnt,
            /* [size_is][out] */ DWORD *pProperties);
        
        HRESULT ( STDMETHODCALLTYPE *get_modifierValues )( 
            IDiaSymbol4 * This,
            /* [in] */ DWORD cnt,
            /* [out] */ DWORD *pcnt,
            /* [size_is][out] */ WORD *pModifiers);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isReturnValue )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isOptimizedAway )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_builtInKind )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_registerType )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseDataSlot )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseDataOffset )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_textureSlot )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_samplerSlot )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_uavSlot )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sizeInUdt )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_memorySpaceKind )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unmodifiedTypeId )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_subTypeId )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_subType )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfModifiers )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfRegisterIndices )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isHLSLData )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPointerToDataMember )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPointerToMemberFunction )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSingleInheritance )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isMultipleInheritance )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isVirtualInheritance )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_restrictedType )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPointerBasedOnSymbolValue )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseSymbol )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseSymbolId )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_objectFileName )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAcceleratorGroupSharedLocal )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAcceleratorPointerTagLiveRange )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAcceleratorStubFunction )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfAcceleratorPointerTags )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSdl )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isWinRTPointer )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isRefUdt )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isValueUdt )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isInterfaceUdt )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineFramesByAddr )( 
            IDiaSymbol4 * This,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineFramesByRVA )( 
            IDiaSymbol4 * This,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineFramesByVA )( 
            IDiaSymbol4 * This,
            /* [in] */ ULONGLONG va,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLines )( 
            IDiaSymbol4 * This,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLinesByAddr )( 
            IDiaSymbol4 * This,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLinesByRVA )( 
            IDiaSymbol4 * This,
            /* [in] */ DWORD rva,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLinesByVA )( 
            IDiaSymbol4 * This,
            /* [in] */ ULONGLONG va,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findSymbolsForAcceleratorPointerTag )( 
            IDiaSymbol4 * This,
            /* [in] */ DWORD tagValue,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findSymbolsByRVAForAcceleratorPointerTag )( 
            IDiaSymbol4 * This,
            /* [in] */ DWORD tagValue,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *get_acceleratorPointerTags )( 
            IDiaSymbol4 * This,
            /* [in] */ DWORD cnt,
            /* [out] */ DWORD *pcnt,
            /* [size_is][out] */ DWORD *pPointerTags);
        
        HRESULT ( STDMETHODCALLTYPE *getSrcLineOnTypeDefn )( 
            IDiaSymbol4 * This,
            /* [out] */ IDiaLineNumber **ppResult);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPGO )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasValidPGOCounts )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isOptimizedForSpeed )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PGOEntryCount )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PGOEdgeCount )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PGODynamicInstructionCount )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_staticSize )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_finalLiveStaticSize )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_phaseName )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasControlFlowCheck )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_constantExport )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_dataExport )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_privateExport )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noNameExport )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exportHasExplicitlyAssignedOrdinal )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exportIsForwarder )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ordinal )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frameSize )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerAddressSection )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerAddressOffset )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerRelativeVirtualAddress )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerVirtualAddress )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *findInputAssemblyFile )( 
            IDiaSymbol4 * This,
            /* [out] */ IDiaInputAssemblyFile **ppResult);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_characteristics )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_coffGroup )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bindID )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bindSpace )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bindSlot )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isObjCClass )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isObjCCategory )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isObjCProtocol )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_inlinee )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_inlineeId )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noexcept )( 
            IDiaSymbol4 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        END_INTERFACE
    } IDiaSymbol4Vtbl;

    interface IDiaSymbol4
    {
        CONST_VTBL struct IDiaSymbol4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaSymbol4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaSymbol4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaSymbol4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaSymbol4_get_symIndexId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_symIndexId(This,pRetVal) ) 

#define IDiaSymbol4_get_symTag(This,pRetVal)	\
    ( (This)->lpVtbl -> get_symTag(This,pRetVal) ) 

#define IDiaSymbol4_get_name(This,pRetVal)	\
    ( (This)->lpVtbl -> get_name(This,pRetVal) ) 

#define IDiaSymbol4_get_lexicalParent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lexicalParent(This,pRetVal) ) 

#define IDiaSymbol4_get_classParent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_classParent(This,pRetVal) ) 

#define IDiaSymbol4_get_type(This,pRetVal)	\
    ( (This)->lpVtbl -> get_type(This,pRetVal) ) 

#define IDiaSymbol4_get_dataKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_dataKind(This,pRetVal) ) 

#define IDiaSymbol4_get_locationType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_locationType(This,pRetVal) ) 

#define IDiaSymbol4_get_addressSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressSection(This,pRetVal) ) 

#define IDiaSymbol4_get_addressOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressOffset(This,pRetVal) ) 

#define IDiaSymbol4_get_relativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_relativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol4_get_virtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualAddress(This,pRetVal) ) 

#define IDiaSymbol4_get_registerId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_registerId(This,pRetVal) ) 

#define IDiaSymbol4_get_offset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_offset(This,pRetVal) ) 

#define IDiaSymbol4_get_length(This,pRetVal)	\
    ( (This)->lpVtbl -> get_length(This,pRetVal) ) 

#define IDiaSymbol4_get_slot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_slot(This,pRetVal) ) 

#define IDiaSymbol4_get_volatileType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_volatileType(This,pRetVal) ) 

#define IDiaSymbol4_get_constType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_constType(This,pRetVal) ) 

#define IDiaSymbol4_get_unalignedType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unalignedType(This,pRetVal) ) 

#define IDiaSymbol4_get_access(This,pRetVal)	\
    ( (This)->lpVtbl -> get_access(This,pRetVal) ) 

#define IDiaSymbol4_get_libraryName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_libraryName(This,pRetVal) ) 

#define IDiaSymbol4_get_platform(This,pRetVal)	\
    ( (This)->lpVtbl -> get_platform(This,pRetVal) ) 

#define IDiaSymbol4_get_language(This,pRetVal)	\
    ( (This)->lpVtbl -> get_language(This,pRetVal) ) 

#define IDiaSymbol4_get_editAndContinueEnabled(This,pRetVal)	\
    ( (This)->lpVtbl -> get_editAndContinueEnabled(This,pRetVal) ) 

#define IDiaSymbol4_get_frontEndMajor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndMajor(This,pRetVal) ) 

#define IDiaSymbol4_get_frontEndMinor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndMinor(This,pRetVal) ) 

#define IDiaSymbol4_get_frontEndBuild(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndBuild(This,pRetVal) ) 

#define IDiaSymbol4_get_backEndMajor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndMajor(This,pRetVal) ) 

#define IDiaSymbol4_get_backEndMinor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndMinor(This,pRetVal) ) 

#define IDiaSymbol4_get_backEndBuild(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndBuild(This,pRetVal) ) 

#define IDiaSymbol4_get_sourceFileName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_sourceFileName(This,pRetVal) ) 

#define IDiaSymbol4_get_unused(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unused(This,pRetVal) ) 

#define IDiaSymbol4_get_thunkOrdinal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_thunkOrdinal(This,pRetVal) ) 

#define IDiaSymbol4_get_thisAdjust(This,pRetVal)	\
    ( (This)->lpVtbl -> get_thisAdjust(This,pRetVal) ) 

#define IDiaSymbol4_get_virtualBaseOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseOffset(This,pRetVal) ) 

#define IDiaSymbol4_get_virtual(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtual(This,pRetVal) ) 

#define IDiaSymbol4_get_intro(This,pRetVal)	\
    ( (This)->lpVtbl -> get_intro(This,pRetVal) ) 

#define IDiaSymbol4_get_pure(This,pRetVal)	\
    ( (This)->lpVtbl -> get_pure(This,pRetVal) ) 

#define IDiaSymbol4_get_callingConvention(This,pRetVal)	\
    ( (This)->lpVtbl -> get_callingConvention(This,pRetVal) ) 

#define IDiaSymbol4_get_value(This,pRetVal)	\
    ( (This)->lpVtbl -> get_value(This,pRetVal) ) 

#define IDiaSymbol4_get_baseType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseType(This,pRetVal) ) 

#define IDiaSymbol4_get_token(This,pRetVal)	\
    ( (This)->lpVtbl -> get_token(This,pRetVal) ) 

#define IDiaSymbol4_get_timeStamp(This,pRetVal)	\
    ( (This)->lpVtbl -> get_timeStamp(This,pRetVal) ) 

#define IDiaSymbol4_get_guid(This,pRetVal)	\
    ( (This)->lpVtbl -> get_guid(This,pRetVal) ) 

#define IDiaSymbol4_get_symbolsFileName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_symbolsFileName(This,pRetVal) ) 

#define IDiaSymbol4_get_reference(This,pRetVal)	\
    ( (This)->lpVtbl -> get_reference(This,pRetVal) ) 

#define IDiaSymbol4_get_count(This,pRetVal)	\
    ( (This)->lpVtbl -> get_count(This,pRetVal) ) 

#define IDiaSymbol4_get_bitPosition(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bitPosition(This,pRetVal) ) 

#define IDiaSymbol4_get_arrayIndexType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_arrayIndexType(This,pRetVal) ) 

#define IDiaSymbol4_get_packed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_packed(This,pRetVal) ) 

#define IDiaSymbol4_get_constructor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_constructor(This,pRetVal) ) 

#define IDiaSymbol4_get_overloadedOperator(This,pRetVal)	\
    ( (This)->lpVtbl -> get_overloadedOperator(This,pRetVal) ) 

#define IDiaSymbol4_get_nested(This,pRetVal)	\
    ( (This)->lpVtbl -> get_nested(This,pRetVal) ) 

#define IDiaSymbol4_get_hasNestedTypes(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasNestedTypes(This,pRetVal) ) 

#define IDiaSymbol4_get_hasAssignmentOperator(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasAssignmentOperator(This,pRetVal) ) 

#define IDiaSymbol4_get_hasCastOperator(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasCastOperator(This,pRetVal) ) 

#define IDiaSymbol4_get_scoped(This,pRetVal)	\
    ( (This)->lpVtbl -> get_scoped(This,pRetVal) ) 

#define IDiaSymbol4_get_virtualBaseClass(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseClass(This,pRetVal) ) 

#define IDiaSymbol4_get_indirectVirtualBaseClass(This,pRetVal)	\
    ( (This)->lpVtbl -> get_indirectVirtualBaseClass(This,pRetVal) ) 

#define IDiaSymbol4_get_virtualBasePointerOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBasePointerOffset(This,pRetVal) ) 

#define IDiaSymbol4_get_virtualTableShape(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualTableShape(This,pRetVal) ) 

#define IDiaSymbol4_get_lexicalParentId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lexicalParentId(This,pRetVal) ) 

#define IDiaSymbol4_get_classParentId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_classParentId(This,pRetVal) ) 

#define IDiaSymbol4_get_typeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_typeId(This,pRetVal) ) 

#define IDiaSymbol4_get_arrayIndexTypeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_arrayIndexTypeId(This,pRetVal) ) 

#define IDiaSymbol4_get_virtualTableShapeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualTableShapeId(This,pRetVal) ) 

#define IDiaSymbol4_get_code(This,pRetVal)	\
    ( (This)->lpVtbl -> get_code(This,pRetVal) ) 

#define IDiaSymbol4_get_function(This,pRetVal)	\
    ( (This)->lpVtbl -> get_function(This,pRetVal) ) 

#define IDiaSymbol4_get_managed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_managed(This,pRetVal) ) 

#define IDiaSymbol4_get_msil(This,pRetVal)	\
    ( (This)->lpVtbl -> get_msil(This,pRetVal) ) 

#define IDiaSymbol4_get_virtualBaseDispIndex(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseDispIndex(This,pRetVal) ) 

#define IDiaSymbol4_get_undecoratedName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_undecoratedName(This,pRetVal) ) 

#define IDiaSymbol4_get_age(This,pRetVal)	\
    ( (This)->lpVtbl -> get_age(This,pRetVal) ) 

#define IDiaSymbol4_get_signature(This,pRetVal)	\
    ( (This)->lpVtbl -> get_signature(This,pRetVal) ) 

#define IDiaSymbol4_get_compilerGenerated(This,pRetVal)	\
    ( (This)->lpVtbl -> get_compilerGenerated(This,pRetVal) ) 

#define IDiaSymbol4_get_addressTaken(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressTaken(This,pRetVal) ) 

#define IDiaSymbol4_get_rank(This,pRetVal)	\
    ( (This)->lpVtbl -> get_rank(This,pRetVal) ) 

#define IDiaSymbol4_get_lowerBound(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lowerBound(This,pRetVal) ) 

#define IDiaSymbol4_get_upperBound(This,pRetVal)	\
    ( (This)->lpVtbl -> get_upperBound(This,pRetVal) ) 

#define IDiaSymbol4_get_lowerBoundId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lowerBoundId(This,pRetVal) ) 

#define IDiaSymbol4_get_upperBoundId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_upperBoundId(This,pRetVal) ) 

#define IDiaSymbol4_get_dataBytes(This,cbData,pcbData,pbData)	\
    ( (This)->lpVtbl -> get_dataBytes(This,cbData,pcbData,pbData) ) 

#define IDiaSymbol4_findChildren(This,symtag,name,compareFlags,ppResult)	\
    ( (This)->lpVtbl -> findChildren(This,symtag,name,compareFlags,ppResult) ) 

#define IDiaSymbol4_findChildrenEx(This,symtag,name,compareFlags,ppResult)	\
    ( (This)->lpVtbl -> findChildrenEx(This,symtag,name,compareFlags,ppResult) ) 

#define IDiaSymbol4_findChildrenExByAddr(This,symtag,name,compareFlags,isect,offset,ppResult)	\
    ( (This)->lpVtbl -> findChildrenExByAddr(This,symtag,name,compareFlags,isect,offset,ppResult) ) 

#define IDiaSymbol4_findChildrenExByVA(This,symtag,name,compareFlags,va,ppResult)	\
    ( (This)->lpVtbl -> findChildrenExByVA(This,symtag,name,compareFlags,va,ppResult) ) 

#define IDiaSymbol4_findChildrenExByRVA(This,symtag,name,compareFlags,rva,ppResult)	\
    ( (This)->lpVtbl -> findChildrenExByRVA(This,symtag,name,compareFlags,rva,ppResult) ) 

#define IDiaSymbol4_get_targetSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetSection(This,pRetVal) ) 

#define IDiaSymbol4_get_targetOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetOffset(This,pRetVal) ) 

#define IDiaSymbol4_get_targetRelativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetRelativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol4_get_targetVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol4_get_machineType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_machineType(This,pRetVal) ) 

#define IDiaSymbol4_get_oemId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_oemId(This,pRetVal) ) 

#define IDiaSymbol4_get_oemSymbolId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_oemSymbolId(This,pRetVal) ) 

#define IDiaSymbol4_get_types(This,cTypes,pcTypes,pTypes)	\
    ( (This)->lpVtbl -> get_types(This,cTypes,pcTypes,pTypes) ) 

#define IDiaSymbol4_get_typeIds(This,cTypeIds,pcTypeIds,pdwTypeIds)	\
    ( (This)->lpVtbl -> get_typeIds(This,cTypeIds,pcTypeIds,pdwTypeIds) ) 

#define IDiaSymbol4_get_objectPointerType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_objectPointerType(This,pRetVal) ) 

#define IDiaSymbol4_get_udtKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_udtKind(This,pRetVal) ) 

#define IDiaSymbol4_get_undecoratedNameEx(This,undecorateOptions,name)	\
    ( (This)->lpVtbl -> get_undecoratedNameEx(This,undecorateOptions,name) ) 

#define IDiaSymbol4_get_noReturn(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noReturn(This,pRetVal) ) 

#define IDiaSymbol4_get_customCallingConvention(This,pRetVal)	\
    ( (This)->lpVtbl -> get_customCallingConvention(This,pRetVal) ) 

#define IDiaSymbol4_get_noInline(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noInline(This,pRetVal) ) 

#define IDiaSymbol4_get_optimizedCodeDebugInfo(This,pRetVal)	\
    ( (This)->lpVtbl -> get_optimizedCodeDebugInfo(This,pRetVal) ) 

#define IDiaSymbol4_get_notReached(This,pRetVal)	\
    ( (This)->lpVtbl -> get_notReached(This,pRetVal) ) 

#define IDiaSymbol4_get_interruptReturn(This,pRetVal)	\
    ( (This)->lpVtbl -> get_interruptReturn(This,pRetVal) ) 

#define IDiaSymbol4_get_farReturn(This,pRetVal)	\
    ( (This)->lpVtbl -> get_farReturn(This,pRetVal) ) 

#define IDiaSymbol4_get_isStatic(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isStatic(This,pRetVal) ) 

#define IDiaSymbol4_get_hasDebugInfo(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasDebugInfo(This,pRetVal) ) 

#define IDiaSymbol4_get_isLTCG(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isLTCG(This,pRetVal) ) 

#define IDiaSymbol4_get_isDataAligned(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isDataAligned(This,pRetVal) ) 

#define IDiaSymbol4_get_hasSecurityChecks(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasSecurityChecks(This,pRetVal) ) 

#define IDiaSymbol4_get_compilerName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_compilerName(This,pRetVal) ) 

#define IDiaSymbol4_get_hasAlloca(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasAlloca(This,pRetVal) ) 

#define IDiaSymbol4_get_hasSetJump(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasSetJump(This,pRetVal) ) 

#define IDiaSymbol4_get_hasLongJump(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasLongJump(This,pRetVal) ) 

#define IDiaSymbol4_get_hasInlAsm(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasInlAsm(This,pRetVal) ) 

#define IDiaSymbol4_get_hasEH(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasEH(This,pRetVal) ) 

#define IDiaSymbol4_get_hasSEH(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasSEH(This,pRetVal) ) 

#define IDiaSymbol4_get_hasEHa(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasEHa(This,pRetVal) ) 

#define IDiaSymbol4_get_isNaked(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isNaked(This,pRetVal) ) 

#define IDiaSymbol4_get_isAggregated(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAggregated(This,pRetVal) ) 

#define IDiaSymbol4_get_isSplitted(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSplitted(This,pRetVal) ) 

#define IDiaSymbol4_get_container(This,pRetVal)	\
    ( (This)->lpVtbl -> get_container(This,pRetVal) ) 

#define IDiaSymbol4_get_inlSpec(This,pRetVal)	\
    ( (This)->lpVtbl -> get_inlSpec(This,pRetVal) ) 

#define IDiaSymbol4_get_noStackOrdering(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noStackOrdering(This,pRetVal) ) 

#define IDiaSymbol4_get_virtualBaseTableType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseTableType(This,pRetVal) ) 

#define IDiaSymbol4_get_hasManagedCode(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasManagedCode(This,pRetVal) ) 

#define IDiaSymbol4_get_isHotpatchable(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isHotpatchable(This,pRetVal) ) 

#define IDiaSymbol4_get_isCVTCIL(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isCVTCIL(This,pRetVal) ) 

#define IDiaSymbol4_get_isMSILNetmodule(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isMSILNetmodule(This,pRetVal) ) 

#define IDiaSymbol4_get_isCTypes(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isCTypes(This,pRetVal) ) 

#define IDiaSymbol4_get_isStripped(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isStripped(This,pRetVal) ) 

#define IDiaSymbol4_get_frontEndQFE(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndQFE(This,pRetVal) ) 

#define IDiaSymbol4_get_backEndQFE(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndQFE(This,pRetVal) ) 

#define IDiaSymbol4_get_wasInlined(This,pRetVal)	\
    ( (This)->lpVtbl -> get_wasInlined(This,pRetVal) ) 

#define IDiaSymbol4_get_strictGSCheck(This,pRetVal)	\
    ( (This)->lpVtbl -> get_strictGSCheck(This,pRetVal) ) 

#define IDiaSymbol4_get_isCxxReturnUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isCxxReturnUdt(This,pRetVal) ) 

#define IDiaSymbol4_get_isConstructorVirtualBase(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isConstructorVirtualBase(This,pRetVal) ) 

#define IDiaSymbol4_get_RValueReference(This,pRetVal)	\
    ( (This)->lpVtbl -> get_RValueReference(This,pRetVal) ) 

#define IDiaSymbol4_get_unmodifiedType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unmodifiedType(This,pRetVal) ) 

#define IDiaSymbol4_get_framePointerPresent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_framePointerPresent(This,pRetVal) ) 

#define IDiaSymbol4_get_isSafeBuffers(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSafeBuffers(This,pRetVal) ) 

#define IDiaSymbol4_get_intrinsic(This,pRetVal)	\
    ( (This)->lpVtbl -> get_intrinsic(This,pRetVal) ) 

#define IDiaSymbol4_get_sealed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_sealed(This,pRetVal) ) 

#define IDiaSymbol4_get_hfaFloat(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hfaFloat(This,pRetVal) ) 

#define IDiaSymbol4_get_hfaDouble(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hfaDouble(This,pRetVal) ) 

#define IDiaSymbol4_get_liveRangeStartAddressSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeStartAddressSection(This,pRetVal) ) 

#define IDiaSymbol4_get_liveRangeStartAddressOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeStartAddressOffset(This,pRetVal) ) 

#define IDiaSymbol4_get_liveRangeStartRelativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeStartRelativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol4_get_countLiveRanges(This,pRetVal)	\
    ( (This)->lpVtbl -> get_countLiveRanges(This,pRetVal) ) 

#define IDiaSymbol4_get_liveRangeLength(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeLength(This,pRetVal) ) 

#define IDiaSymbol4_get_offsetInUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_offsetInUdt(This,pRetVal) ) 

#define IDiaSymbol4_get_paramBasePointerRegisterId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_paramBasePointerRegisterId(This,pRetVal) ) 

#define IDiaSymbol4_get_localBasePointerRegisterId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_localBasePointerRegisterId(This,pRetVal) ) 

#define IDiaSymbol4_get_isLocationControlFlowDependent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isLocationControlFlowDependent(This,pRetVal) ) 

#define IDiaSymbol4_get_stride(This,pRetVal)	\
    ( (This)->lpVtbl -> get_stride(This,pRetVal) ) 

#define IDiaSymbol4_get_numberOfRows(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfRows(This,pRetVal) ) 

#define IDiaSymbol4_get_numberOfColumns(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfColumns(This,pRetVal) ) 

#define IDiaSymbol4_get_isMatrixRowMajor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isMatrixRowMajor(This,pRetVal) ) 

#define IDiaSymbol4_get_numericProperties(This,cnt,pcnt,pProperties)	\
    ( (This)->lpVtbl -> get_numericProperties(This,cnt,pcnt,pProperties) ) 

#define IDiaSymbol4_get_modifierValues(This,cnt,pcnt,pModifiers)	\
    ( (This)->lpVtbl -> get_modifierValues(This,cnt,pcnt,pModifiers) ) 

#define IDiaSymbol4_get_isReturnValue(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isReturnValue(This,pRetVal) ) 

#define IDiaSymbol4_get_isOptimizedAway(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isOptimizedAway(This,pRetVal) ) 

#define IDiaSymbol4_get_builtInKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_builtInKind(This,pRetVal) ) 

#define IDiaSymbol4_get_registerType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_registerType(This,pRetVal) ) 

#define IDiaSymbol4_get_baseDataSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseDataSlot(This,pRetVal) ) 

#define IDiaSymbol4_get_baseDataOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseDataOffset(This,pRetVal) ) 

#define IDiaSymbol4_get_textureSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_textureSlot(This,pRetVal) ) 

#define IDiaSymbol4_get_samplerSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_samplerSlot(This,pRetVal) ) 

#define IDiaSymbol4_get_uavSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_uavSlot(This,pRetVal) ) 

#define IDiaSymbol4_get_sizeInUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_sizeInUdt(This,pRetVal) ) 

#define IDiaSymbol4_get_memorySpaceKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_memorySpaceKind(This,pRetVal) ) 

#define IDiaSymbol4_get_unmodifiedTypeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unmodifiedTypeId(This,pRetVal) ) 

#define IDiaSymbol4_get_subTypeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_subTypeId(This,pRetVal) ) 

#define IDiaSymbol4_get_subType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_subType(This,pRetVal) ) 

#define IDiaSymbol4_get_numberOfModifiers(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfModifiers(This,pRetVal) ) 

#define IDiaSymbol4_get_numberOfRegisterIndices(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfRegisterIndices(This,pRetVal) ) 

#define IDiaSymbol4_get_isHLSLData(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isHLSLData(This,pRetVal) ) 

#define IDiaSymbol4_get_isPointerToDataMember(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPointerToDataMember(This,pRetVal) ) 

#define IDiaSymbol4_get_isPointerToMemberFunction(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPointerToMemberFunction(This,pRetVal) ) 

#define IDiaSymbol4_get_isSingleInheritance(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSingleInheritance(This,pRetVal) ) 

#define IDiaSymbol4_get_isMultipleInheritance(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isMultipleInheritance(This,pRetVal) ) 

#define IDiaSymbol4_get_isVirtualInheritance(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isVirtualInheritance(This,pRetVal) ) 

#define IDiaSymbol4_get_restrictedType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_restrictedType(This,pRetVal) ) 

#define IDiaSymbol4_get_isPointerBasedOnSymbolValue(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPointerBasedOnSymbolValue(This,pRetVal) ) 

#define IDiaSymbol4_get_baseSymbol(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseSymbol(This,pRetVal) ) 

#define IDiaSymbol4_get_baseSymbolId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseSymbolId(This,pRetVal) ) 

#define IDiaSymbol4_get_objectFileName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_objectFileName(This,pRetVal) ) 

#define IDiaSymbol4_get_isAcceleratorGroupSharedLocal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAcceleratorGroupSharedLocal(This,pRetVal) ) 

#define IDiaSymbol4_get_isAcceleratorPointerTagLiveRange(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAcceleratorPointerTagLiveRange(This,pRetVal) ) 

#define IDiaSymbol4_get_isAcceleratorStubFunction(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAcceleratorStubFunction(This,pRetVal) ) 

#define IDiaSymbol4_get_numberOfAcceleratorPointerTags(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfAcceleratorPointerTags(This,pRetVal) ) 

#define IDiaSymbol4_get_isSdl(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSdl(This,pRetVal) ) 

#define IDiaSymbol4_get_isWinRTPointer(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isWinRTPointer(This,pRetVal) ) 

#define IDiaSymbol4_get_isRefUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isRefUdt(This,pRetVal) ) 

#define IDiaSymbol4_get_isValueUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isValueUdt(This,pRetVal) ) 

#define IDiaSymbol4_get_isInterfaceUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isInterfaceUdt(This,pRetVal) ) 

#define IDiaSymbol4_findInlineFramesByAddr(This,isect,offset,ppResult)	\
    ( (This)->lpVtbl -> findInlineFramesByAddr(This,isect,offset,ppResult) ) 

#define IDiaSymbol4_findInlineFramesByRVA(This,rva,ppResult)	\
    ( (This)->lpVtbl -> findInlineFramesByRVA(This,rva,ppResult) ) 

#define IDiaSymbol4_findInlineFramesByVA(This,va,ppResult)	\
    ( (This)->lpVtbl -> findInlineFramesByVA(This,va,ppResult) ) 

#define IDiaSymbol4_findInlineeLines(This,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLines(This,ppResult) ) 

#define IDiaSymbol4_findInlineeLinesByAddr(This,isect,offset,length,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLinesByAddr(This,isect,offset,length,ppResult) ) 

#define IDiaSymbol4_findInlineeLinesByRVA(This,rva,length,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLinesByRVA(This,rva,length,ppResult) ) 

#define IDiaSymbol4_findInlineeLinesByVA(This,va,length,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLinesByVA(This,va,length,ppResult) ) 

#define IDiaSymbol4_findSymbolsForAcceleratorPointerTag(This,tagValue,ppResult)	\
    ( (This)->lpVtbl -> findSymbolsForAcceleratorPointerTag(This,tagValue,ppResult) ) 

#define IDiaSymbol4_findSymbolsByRVAForAcceleratorPointerTag(This,tagValue,rva,ppResult)	\
    ( (This)->lpVtbl -> findSymbolsByRVAForAcceleratorPointerTag(This,tagValue,rva,ppResult) ) 

#define IDiaSymbol4_get_acceleratorPointerTags(This,cnt,pcnt,pPointerTags)	\
    ( (This)->lpVtbl -> get_acceleratorPointerTags(This,cnt,pcnt,pPointerTags) ) 

#define IDiaSymbol4_getSrcLineOnTypeDefn(This,ppResult)	\
    ( (This)->lpVtbl -> getSrcLineOnTypeDefn(This,ppResult) ) 

#define IDiaSymbol4_get_isPGO(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPGO(This,pRetVal) ) 

#define IDiaSymbol4_get_hasValidPGOCounts(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasValidPGOCounts(This,pRetVal) ) 

#define IDiaSymbol4_get_isOptimizedForSpeed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isOptimizedForSpeed(This,pRetVal) ) 

#define IDiaSymbol4_get_PGOEntryCount(This,pRetVal)	\
    ( (This)->lpVtbl -> get_PGOEntryCount(This,pRetVal) ) 

#define IDiaSymbol4_get_PGOEdgeCount(This,pRetVal)	\
    ( (This)->lpVtbl -> get_PGOEdgeCount(This,pRetVal) ) 

#define IDiaSymbol4_get_PGODynamicInstructionCount(This,pRetVal)	\
    ( (This)->lpVtbl -> get_PGODynamicInstructionCount(This,pRetVal) ) 

#define IDiaSymbol4_get_staticSize(This,pRetVal)	\
    ( (This)->lpVtbl -> get_staticSize(This,pRetVal) ) 

#define IDiaSymbol4_get_finalLiveStaticSize(This,pRetVal)	\
    ( (This)->lpVtbl -> get_finalLiveStaticSize(This,pRetVal) ) 

#define IDiaSymbol4_get_phaseName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_phaseName(This,pRetVal) ) 

#define IDiaSymbol4_get_hasControlFlowCheck(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasControlFlowCheck(This,pRetVal) ) 

#define IDiaSymbol4_get_constantExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_constantExport(This,pRetVal) ) 

#define IDiaSymbol4_get_dataExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_dataExport(This,pRetVal) ) 

#define IDiaSymbol4_get_privateExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_privateExport(This,pRetVal) ) 

#define IDiaSymbol4_get_noNameExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noNameExport(This,pRetVal) ) 

#define IDiaSymbol4_get_exportHasExplicitlyAssignedOrdinal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exportHasExplicitlyAssignedOrdinal(This,pRetVal) ) 

#define IDiaSymbol4_get_exportIsForwarder(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exportIsForwarder(This,pRetVal) ) 

#define IDiaSymbol4_get_ordinal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_ordinal(This,pRetVal) ) 

#define IDiaSymbol4_get_frameSize(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frameSize(This,pRetVal) ) 

#define IDiaSymbol4_get_exceptionHandlerAddressSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerAddressSection(This,pRetVal) ) 

#define IDiaSymbol4_get_exceptionHandlerAddressOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerAddressOffset(This,pRetVal) ) 

#define IDiaSymbol4_get_exceptionHandlerRelativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerRelativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol4_get_exceptionHandlerVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol4_findInputAssemblyFile(This,ppResult)	\
    ( (This)->lpVtbl -> findInputAssemblyFile(This,ppResult) ) 

#define IDiaSymbol4_get_characteristics(This,pRetVal)	\
    ( (This)->lpVtbl -> get_characteristics(This,pRetVal) ) 

#define IDiaSymbol4_get_coffGroup(This,pRetVal)	\
    ( (This)->lpVtbl -> get_coffGroup(This,pRetVal) ) 

#define IDiaSymbol4_get_bindID(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bindID(This,pRetVal) ) 

#define IDiaSymbol4_get_bindSpace(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bindSpace(This,pRetVal) ) 

#define IDiaSymbol4_get_bindSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bindSlot(This,pRetVal) ) 


#define IDiaSymbol4_get_isObjCClass(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isObjCClass(This,pRetVal) ) 

#define IDiaSymbol4_get_isObjCCategory(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isObjCCategory(This,pRetVal) ) 

#define IDiaSymbol4_get_isObjCProtocol(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isObjCProtocol(This,pRetVal) ) 


#define IDiaSymbol4_get_inlinee(This,pRetVal)	\
    ( (This)->lpVtbl -> get_inlinee(This,pRetVal) ) 

#define IDiaSymbol4_get_inlineeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_inlineeId(This,pRetVal) ) 


#define IDiaSymbol4_get_noexcept(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noexcept(This,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol4_get_noexcept_Proxy( 
    IDiaSymbol4 * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol4_get_noexcept_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDiaSymbol4_INTERFACE_DEFINED__ */


#ifndef __IDiaSymbol5_INTERFACE_DEFINED__
#define __IDiaSymbol5_INTERFACE_DEFINED__

/* interface IDiaSymbol5 */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaSymbol5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("abe2de00-dc2d-4793-af9a-ef1d90832644")
    IDiaSymbol5 : public IDiaSymbol4
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_hasAbsoluteAddress( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaSymbol5Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaSymbol5 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaSymbol5 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaSymbol5 * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_symIndexId )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_symTag )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_name )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lexicalParent )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_classParent )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_type )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_dataKind )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_locationType )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressSection )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressOffset )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_relativeVirtualAddress )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualAddress )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_registerId )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_offset )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_length )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_slot )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_volatileType )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_constType )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unalignedType )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_access )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_libraryName )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_platform )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_language )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_editAndContinueEnabled )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndMajor )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndMinor )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndBuild )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndMajor )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndMinor )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndBuild )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sourceFileName )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unused )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_thunkOrdinal )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_thisAdjust )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseOffset )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtual )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_intro )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_pure )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_callingConvention )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_value )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ VARIANT *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseType )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_token )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_timeStamp )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_guid )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ GUID *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_symbolsFileName )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_reference )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_count )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bitPosition )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_arrayIndexType )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_packed )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_constructor )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_overloadedOperator )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_nested )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasNestedTypes )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasAssignmentOperator )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasCastOperator )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_scoped )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseClass )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_indirectVirtualBaseClass )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBasePointerOffset )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualTableShape )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lexicalParentId )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_classParentId )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_typeId )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_arrayIndexTypeId )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualTableShapeId )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_code )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_function )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_managed )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_msil )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseDispIndex )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_undecoratedName )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_age )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_signature )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_compilerGenerated )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressTaken )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_rank )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lowerBound )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_upperBound )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lowerBoundId )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_upperBoundId )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_dataBytes )( 
            IDiaSymbol5 * This,
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData);
        
        HRESULT ( STDMETHODCALLTYPE *findChildren )( 
            IDiaSymbol5 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenEx )( 
            IDiaSymbol5 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenExByAddr )( 
            IDiaSymbol5 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenExByVA )( 
            IDiaSymbol5 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ ULONGLONG va,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenExByRVA )( 
            IDiaSymbol5 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetSection )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetOffset )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetRelativeVirtualAddress )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetVirtualAddress )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_machineType )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_oemId )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_oemSymbolId )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_types )( 
            IDiaSymbol5 * This,
            /* [in] */ DWORD cTypes,
            /* [out] */ DWORD *pcTypes,
            /* [size_is][size_is][out] */ IDiaSymbol **pTypes);
        
        HRESULT ( STDMETHODCALLTYPE *get_typeIds )( 
            IDiaSymbol5 * This,
            /* [in] */ DWORD cTypeIds,
            /* [out] */ DWORD *pcTypeIds,
            /* [size_is][out] */ DWORD *pdwTypeIds);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_objectPointerType )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_udtKind )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_undecoratedNameEx )( 
            IDiaSymbol5 * This,
            /* [in] */ DWORD undecorateOptions,
            /* [out] */ BSTR *name);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noReturn )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_customCallingConvention )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noInline )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_optimizedCodeDebugInfo )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_notReached )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_interruptReturn )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_farReturn )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isStatic )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasDebugInfo )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isLTCG )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isDataAligned )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasSecurityChecks )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_compilerName )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasAlloca )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasSetJump )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasLongJump )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasInlAsm )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasEH )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasSEH )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasEHa )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isNaked )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAggregated )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSplitted )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_container )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_inlSpec )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noStackOrdering )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseTableType )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasManagedCode )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isHotpatchable )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isCVTCIL )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isMSILNetmodule )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isCTypes )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isStripped )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndQFE )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndQFE )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_wasInlined )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_strictGSCheck )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isCxxReturnUdt )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isConstructorVirtualBase )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RValueReference )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unmodifiedType )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_framePointerPresent )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSafeBuffers )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_intrinsic )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sealed )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hfaFloat )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hfaDouble )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeStartAddressSection )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeStartAddressOffset )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeStartRelativeVirtualAddress )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_countLiveRanges )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeLength )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_offsetInUdt )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_paramBasePointerRegisterId )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_localBasePointerRegisterId )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isLocationControlFlowDependent )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_stride )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfRows )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfColumns )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isMatrixRowMajor )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_numericProperties )( 
            IDiaSymbol5 * This,
            /* [in] */ DWORD cnt,
            /* [out] */ DWORD *pcnt,
            /* [size_is][out] */ DWORD *pProperties);
        
        HRESULT ( STDMETHODCALLTYPE *get_modifierValues )( 
            IDiaSymbol5 * This,
            /* [in] */ DWORD cnt,
            /* [out] */ DWORD *pcnt,
            /* [size_is][out] */ WORD *pModifiers);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isReturnValue )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isOptimizedAway )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_builtInKind )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_registerType )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseDataSlot )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseDataOffset )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_textureSlot )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_samplerSlot )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_uavSlot )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sizeInUdt )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_memorySpaceKind )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unmodifiedTypeId )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_subTypeId )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_subType )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfModifiers )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfRegisterIndices )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isHLSLData )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPointerToDataMember )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPointerToMemberFunction )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSingleInheritance )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isMultipleInheritance )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isVirtualInheritance )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_restrictedType )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPointerBasedOnSymbolValue )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseSymbol )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseSymbolId )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_objectFileName )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAcceleratorGroupSharedLocal )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAcceleratorPointerTagLiveRange )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAcceleratorStubFunction )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfAcceleratorPointerTags )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSdl )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isWinRTPointer )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isRefUdt )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isValueUdt )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isInterfaceUdt )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineFramesByAddr )( 
            IDiaSymbol5 * This,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineFramesByRVA )( 
            IDiaSymbol5 * This,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineFramesByVA )( 
            IDiaSymbol5 * This,
            /* [in] */ ULONGLONG va,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLines )( 
            IDiaSymbol5 * This,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLinesByAddr )( 
            IDiaSymbol5 * This,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLinesByRVA )( 
            IDiaSymbol5 * This,
            /* [in] */ DWORD rva,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLinesByVA )( 
            IDiaSymbol5 * This,
            /* [in] */ ULONGLONG va,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findSymbolsForAcceleratorPointerTag )( 
            IDiaSymbol5 * This,
            /* [in] */ DWORD tagValue,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findSymbolsByRVAForAcceleratorPointerTag )( 
            IDiaSymbol5 * This,
            /* [in] */ DWORD tagValue,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *get_acceleratorPointerTags )( 
            IDiaSymbol5 * This,
            /* [in] */ DWORD cnt,
            /* [out] */ DWORD *pcnt,
            /* [size_is][out] */ DWORD *pPointerTags);
        
        HRESULT ( STDMETHODCALLTYPE *getSrcLineOnTypeDefn )( 
            IDiaSymbol5 * This,
            /* [out] */ IDiaLineNumber **ppResult);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPGO )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasValidPGOCounts )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isOptimizedForSpeed )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PGOEntryCount )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PGOEdgeCount )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PGODynamicInstructionCount )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_staticSize )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_finalLiveStaticSize )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_phaseName )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasControlFlowCheck )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_constantExport )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_dataExport )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_privateExport )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noNameExport )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exportHasExplicitlyAssignedOrdinal )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exportIsForwarder )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ordinal )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frameSize )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerAddressSection )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerAddressOffset )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerRelativeVirtualAddress )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerVirtualAddress )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *findInputAssemblyFile )( 
            IDiaSymbol5 * This,
            /* [out] */ IDiaInputAssemblyFile **ppResult);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_characteristics )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_coffGroup )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bindID )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bindSpace )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bindSlot )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isObjCClass )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isObjCCategory )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isObjCProtocol )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_inlinee )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_inlineeId )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noexcept )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasAbsoluteAddress )( 
            IDiaSymbol5 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        END_INTERFACE
    } IDiaSymbol5Vtbl;

    interface IDiaSymbol5
    {
        CONST_VTBL struct IDiaSymbol5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaSymbol5_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaSymbol5_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaSymbol5_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaSymbol5_get_symIndexId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_symIndexId(This,pRetVal) ) 

#define IDiaSymbol5_get_symTag(This,pRetVal)	\
    ( (This)->lpVtbl -> get_symTag(This,pRetVal) ) 

#define IDiaSymbol5_get_name(This,pRetVal)	\
    ( (This)->lpVtbl -> get_name(This,pRetVal) ) 

#define IDiaSymbol5_get_lexicalParent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lexicalParent(This,pRetVal) ) 

#define IDiaSymbol5_get_classParent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_classParent(This,pRetVal) ) 

#define IDiaSymbol5_get_type(This,pRetVal)	\
    ( (This)->lpVtbl -> get_type(This,pRetVal) ) 

#define IDiaSymbol5_get_dataKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_dataKind(This,pRetVal) ) 

#define IDiaSymbol5_get_locationType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_locationType(This,pRetVal) ) 

#define IDiaSymbol5_get_addressSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressSection(This,pRetVal) ) 

#define IDiaSymbol5_get_addressOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressOffset(This,pRetVal) ) 

#define IDiaSymbol5_get_relativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_relativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol5_get_virtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualAddress(This,pRetVal) ) 

#define IDiaSymbol5_get_registerId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_registerId(This,pRetVal) ) 

#define IDiaSymbol5_get_offset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_offset(This,pRetVal) ) 

#define IDiaSymbol5_get_length(This,pRetVal)	\
    ( (This)->lpVtbl -> get_length(This,pRetVal) ) 

#define IDiaSymbol5_get_slot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_slot(This,pRetVal) ) 

#define IDiaSymbol5_get_volatileType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_volatileType(This,pRetVal) ) 

#define IDiaSymbol5_get_constType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_constType(This,pRetVal) ) 

#define IDiaSymbol5_get_unalignedType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unalignedType(This,pRetVal) ) 

#define IDiaSymbol5_get_access(This,pRetVal)	\
    ( (This)->lpVtbl -> get_access(This,pRetVal) ) 

#define IDiaSymbol5_get_libraryName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_libraryName(This,pRetVal) ) 

#define IDiaSymbol5_get_platform(This,pRetVal)	\
    ( (This)->lpVtbl -> get_platform(This,pRetVal) ) 

#define IDiaSymbol5_get_language(This,pRetVal)	\
    ( (This)->lpVtbl -> get_language(This,pRetVal) ) 

#define IDiaSymbol5_get_editAndContinueEnabled(This,pRetVal)	\
    ( (This)->lpVtbl -> get_editAndContinueEnabled(This,pRetVal) ) 

#define IDiaSymbol5_get_frontEndMajor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndMajor(This,pRetVal) ) 

#define IDiaSymbol5_get_frontEndMinor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndMinor(This,pRetVal) ) 

#define IDiaSymbol5_get_frontEndBuild(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndBuild(This,pRetVal) ) 

#define IDiaSymbol5_get_backEndMajor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndMajor(This,pRetVal) ) 

#define IDiaSymbol5_get_backEndMinor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndMinor(This,pRetVal) ) 

#define IDiaSymbol5_get_backEndBuild(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndBuild(This,pRetVal) ) 

#define IDiaSymbol5_get_sourceFileName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_sourceFileName(This,pRetVal) ) 

#define IDiaSymbol5_get_unused(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unused(This,pRetVal) ) 

#define IDiaSymbol5_get_thunkOrdinal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_thunkOrdinal(This,pRetVal) ) 

#define IDiaSymbol5_get_thisAdjust(This,pRetVal)	\
    ( (This)->lpVtbl -> get_thisAdjust(This,pRetVal) ) 

#define IDiaSymbol5_get_virtualBaseOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseOffset(This,pRetVal) ) 

#define IDiaSymbol5_get_virtual(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtual(This,pRetVal) ) 

#define IDiaSymbol5_get_intro(This,pRetVal)	\
    ( (This)->lpVtbl -> get_intro(This,pRetVal) ) 

#define IDiaSymbol5_get_pure(This,pRetVal)	\
    ( (This)->lpVtbl -> get_pure(This,pRetVal) ) 

#define IDiaSymbol5_get_callingConvention(This,pRetVal)	\
    ( (This)->lpVtbl -> get_callingConvention(This,pRetVal) ) 

#define IDiaSymbol5_get_value(This,pRetVal)	\
    ( (This)->lpVtbl -> get_value(This,pRetVal) ) 

#define IDiaSymbol5_get_baseType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseType(This,pRetVal) ) 

#define IDiaSymbol5_get_token(This,pRetVal)	\
    ( (This)->lpVtbl -> get_token(This,pRetVal) ) 

#define IDiaSymbol5_get_timeStamp(This,pRetVal)	\
    ( (This)->lpVtbl -> get_timeStamp(This,pRetVal) ) 

#define IDiaSymbol5_get_guid(This,pRetVal)	\
    ( (This)->lpVtbl -> get_guid(This,pRetVal) ) 

#define IDiaSymbol5_get_symbolsFileName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_symbolsFileName(This,pRetVal) ) 

#define IDiaSymbol5_get_reference(This,pRetVal)	\
    ( (This)->lpVtbl -> get_reference(This,pRetVal) ) 

#define IDiaSymbol5_get_count(This,pRetVal)	\
    ( (This)->lpVtbl -> get_count(This,pRetVal) ) 

#define IDiaSymbol5_get_bitPosition(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bitPosition(This,pRetVal) ) 

#define IDiaSymbol5_get_arrayIndexType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_arrayIndexType(This,pRetVal) ) 

#define IDiaSymbol5_get_packed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_packed(This,pRetVal) ) 

#define IDiaSymbol5_get_constructor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_constructor(This,pRetVal) ) 

#define IDiaSymbol5_get_overloadedOperator(This,pRetVal)	\
    ( (This)->lpVtbl -> get_overloadedOperator(This,pRetVal) ) 

#define IDiaSymbol5_get_nested(This,pRetVal)	\
    ( (This)->lpVtbl -> get_nested(This,pRetVal) ) 

#define IDiaSymbol5_get_hasNestedTypes(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasNestedTypes(This,pRetVal) ) 

#define IDiaSymbol5_get_hasAssignmentOperator(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasAssignmentOperator(This,pRetVal) ) 

#define IDiaSymbol5_get_hasCastOperator(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasCastOperator(This,pRetVal) ) 

#define IDiaSymbol5_get_scoped(This,pRetVal)	\
    ( (This)->lpVtbl -> get_scoped(This,pRetVal) ) 

#define IDiaSymbol5_get_virtualBaseClass(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseClass(This,pRetVal) ) 

#define IDiaSymbol5_get_indirectVirtualBaseClass(This,pRetVal)	\
    ( (This)->lpVtbl -> get_indirectVirtualBaseClass(This,pRetVal) ) 

#define IDiaSymbol5_get_virtualBasePointerOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBasePointerOffset(This,pRetVal) ) 

#define IDiaSymbol5_get_virtualTableShape(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualTableShape(This,pRetVal) ) 

#define IDiaSymbol5_get_lexicalParentId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lexicalParentId(This,pRetVal) ) 

#define IDiaSymbol5_get_classParentId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_classParentId(This,pRetVal) ) 

#define IDiaSymbol5_get_typeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_typeId(This,pRetVal) ) 

#define IDiaSymbol5_get_arrayIndexTypeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_arrayIndexTypeId(This,pRetVal) ) 

#define IDiaSymbol5_get_virtualTableShapeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualTableShapeId(This,pRetVal) ) 

#define IDiaSymbol5_get_code(This,pRetVal)	\
    ( (This)->lpVtbl -> get_code(This,pRetVal) ) 

#define IDiaSymbol5_get_function(This,pRetVal)	\
    ( (This)->lpVtbl -> get_function(This,pRetVal) ) 

#define IDiaSymbol5_get_managed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_managed(This,pRetVal) ) 

#define IDiaSymbol5_get_msil(This,pRetVal)	\
    ( (This)->lpVtbl -> get_msil(This,pRetVal) ) 

#define IDiaSymbol5_get_virtualBaseDispIndex(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseDispIndex(This,pRetVal) ) 

#define IDiaSymbol5_get_undecoratedName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_undecoratedName(This,pRetVal) ) 

#define IDiaSymbol5_get_age(This,pRetVal)	\
    ( (This)->lpVtbl -> get_age(This,pRetVal) ) 

#define IDiaSymbol5_get_signature(This,pRetVal)	\
    ( (This)->lpVtbl -> get_signature(This,pRetVal) ) 

#define IDiaSymbol5_get_compilerGenerated(This,pRetVal)	\
    ( (This)->lpVtbl -> get_compilerGenerated(This,pRetVal) ) 

#define IDiaSymbol5_get_addressTaken(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressTaken(This,pRetVal) ) 

#define IDiaSymbol5_get_rank(This,pRetVal)	\
    ( (This)->lpVtbl -> get_rank(This,pRetVal) ) 

#define IDiaSymbol5_get_lowerBound(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lowerBound(This,pRetVal) ) 

#define IDiaSymbol5_get_upperBound(This,pRetVal)	\
    ( (This)->lpVtbl -> get_upperBound(This,pRetVal) ) 

#define IDiaSymbol5_get_lowerBoundId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lowerBoundId(This,pRetVal) ) 

#define IDiaSymbol5_get_upperBoundId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_upperBoundId(This,pRetVal) ) 

#define IDiaSymbol5_get_dataBytes(This,cbData,pcbData,pbData)	\
    ( (This)->lpVtbl -> get_dataBytes(This,cbData,pcbData,pbData) ) 

#define IDiaSymbol5_findChildren(This,symtag,name,compareFlags,ppResult)	\
    ( (This)->lpVtbl -> findChildren(This,symtag,name,compareFlags,ppResult) ) 

#define IDiaSymbol5_findChildrenEx(This,symtag,name,compareFlags,ppResult)	\
    ( (This)->lpVtbl -> findChildrenEx(This,symtag,name,compareFlags,ppResult) ) 

#define IDiaSymbol5_findChildrenExByAddr(This,symtag,name,compareFlags,isect,offset,ppResult)	\
    ( (This)->lpVtbl -> findChildrenExByAddr(This,symtag,name,compareFlags,isect,offset,ppResult) ) 

#define IDiaSymbol5_findChildrenExByVA(This,symtag,name,compareFlags,va,ppResult)	\
    ( (This)->lpVtbl -> findChildrenExByVA(This,symtag,name,compareFlags,va,ppResult) ) 

#define IDiaSymbol5_findChildrenExByRVA(This,symtag,name,compareFlags,rva,ppResult)	\
    ( (This)->lpVtbl -> findChildrenExByRVA(This,symtag,name,compareFlags,rva,ppResult) ) 

#define IDiaSymbol5_get_targetSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetSection(This,pRetVal) ) 

#define IDiaSymbol5_get_targetOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetOffset(This,pRetVal) ) 

#define IDiaSymbol5_get_targetRelativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetRelativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol5_get_targetVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol5_get_machineType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_machineType(This,pRetVal) ) 

#define IDiaSymbol5_get_oemId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_oemId(This,pRetVal) ) 

#define IDiaSymbol5_get_oemSymbolId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_oemSymbolId(This,pRetVal) ) 

#define IDiaSymbol5_get_types(This,cTypes,pcTypes,pTypes)	\
    ( (This)->lpVtbl -> get_types(This,cTypes,pcTypes,pTypes) ) 

#define IDiaSymbol5_get_typeIds(This,cTypeIds,pcTypeIds,pdwTypeIds)	\
    ( (This)->lpVtbl -> get_typeIds(This,cTypeIds,pcTypeIds,pdwTypeIds) ) 

#define IDiaSymbol5_get_objectPointerType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_objectPointerType(This,pRetVal) ) 

#define IDiaSymbol5_get_udtKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_udtKind(This,pRetVal) ) 

#define IDiaSymbol5_get_undecoratedNameEx(This,undecorateOptions,name)	\
    ( (This)->lpVtbl -> get_undecoratedNameEx(This,undecorateOptions,name) ) 

#define IDiaSymbol5_get_noReturn(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noReturn(This,pRetVal) ) 

#define IDiaSymbol5_get_customCallingConvention(This,pRetVal)	\
    ( (This)->lpVtbl -> get_customCallingConvention(This,pRetVal) ) 

#define IDiaSymbol5_get_noInline(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noInline(This,pRetVal) ) 

#define IDiaSymbol5_get_optimizedCodeDebugInfo(This,pRetVal)	\
    ( (This)->lpVtbl -> get_optimizedCodeDebugInfo(This,pRetVal) ) 

#define IDiaSymbol5_get_notReached(This,pRetVal)	\
    ( (This)->lpVtbl -> get_notReached(This,pRetVal) ) 

#define IDiaSymbol5_get_interruptReturn(This,pRetVal)	\
    ( (This)->lpVtbl -> get_interruptReturn(This,pRetVal) ) 

#define IDiaSymbol5_get_farReturn(This,pRetVal)	\
    ( (This)->lpVtbl -> get_farReturn(This,pRetVal) ) 

#define IDiaSymbol5_get_isStatic(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isStatic(This,pRetVal) ) 

#define IDiaSymbol5_get_hasDebugInfo(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasDebugInfo(This,pRetVal) ) 

#define IDiaSymbol5_get_isLTCG(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isLTCG(This,pRetVal) ) 

#define IDiaSymbol5_get_isDataAligned(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isDataAligned(This,pRetVal) ) 

#define IDiaSymbol5_get_hasSecurityChecks(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasSecurityChecks(This,pRetVal) ) 

#define IDiaSymbol5_get_compilerName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_compilerName(This,pRetVal) ) 

#define IDiaSymbol5_get_hasAlloca(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasAlloca(This,pRetVal) ) 

#define IDiaSymbol5_get_hasSetJump(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasSetJump(This,pRetVal) ) 

#define IDiaSymbol5_get_hasLongJump(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasLongJump(This,pRetVal) ) 

#define IDiaSymbol5_get_hasInlAsm(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasInlAsm(This,pRetVal) ) 

#define IDiaSymbol5_get_hasEH(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasEH(This,pRetVal) ) 

#define IDiaSymbol5_get_hasSEH(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasSEH(This,pRetVal) ) 

#define IDiaSymbol5_get_hasEHa(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasEHa(This,pRetVal) ) 

#define IDiaSymbol5_get_isNaked(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isNaked(This,pRetVal) ) 

#define IDiaSymbol5_get_isAggregated(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAggregated(This,pRetVal) ) 

#define IDiaSymbol5_get_isSplitted(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSplitted(This,pRetVal) ) 

#define IDiaSymbol5_get_container(This,pRetVal)	\
    ( (This)->lpVtbl -> get_container(This,pRetVal) ) 

#define IDiaSymbol5_get_inlSpec(This,pRetVal)	\
    ( (This)->lpVtbl -> get_inlSpec(This,pRetVal) ) 

#define IDiaSymbol5_get_noStackOrdering(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noStackOrdering(This,pRetVal) ) 

#define IDiaSymbol5_get_virtualBaseTableType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseTableType(This,pRetVal) ) 

#define IDiaSymbol5_get_hasManagedCode(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasManagedCode(This,pRetVal) ) 

#define IDiaSymbol5_get_isHotpatchable(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isHotpatchable(This,pRetVal) ) 

#define IDiaSymbol5_get_isCVTCIL(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isCVTCIL(This,pRetVal) ) 

#define IDiaSymbol5_get_isMSILNetmodule(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isMSILNetmodule(This,pRetVal) ) 

#define IDiaSymbol5_get_isCTypes(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isCTypes(This,pRetVal) ) 

#define IDiaSymbol5_get_isStripped(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isStripped(This,pRetVal) ) 

#define IDiaSymbol5_get_frontEndQFE(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndQFE(This,pRetVal) ) 

#define IDiaSymbol5_get_backEndQFE(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndQFE(This,pRetVal) ) 

#define IDiaSymbol5_get_wasInlined(This,pRetVal)	\
    ( (This)->lpVtbl -> get_wasInlined(This,pRetVal) ) 

#define IDiaSymbol5_get_strictGSCheck(This,pRetVal)	\
    ( (This)->lpVtbl -> get_strictGSCheck(This,pRetVal) ) 

#define IDiaSymbol5_get_isCxxReturnUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isCxxReturnUdt(This,pRetVal) ) 

#define IDiaSymbol5_get_isConstructorVirtualBase(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isConstructorVirtualBase(This,pRetVal) ) 

#define IDiaSymbol5_get_RValueReference(This,pRetVal)	\
    ( (This)->lpVtbl -> get_RValueReference(This,pRetVal) ) 

#define IDiaSymbol5_get_unmodifiedType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unmodifiedType(This,pRetVal) ) 

#define IDiaSymbol5_get_framePointerPresent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_framePointerPresent(This,pRetVal) ) 

#define IDiaSymbol5_get_isSafeBuffers(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSafeBuffers(This,pRetVal) ) 

#define IDiaSymbol5_get_intrinsic(This,pRetVal)	\
    ( (This)->lpVtbl -> get_intrinsic(This,pRetVal) ) 

#define IDiaSymbol5_get_sealed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_sealed(This,pRetVal) ) 

#define IDiaSymbol5_get_hfaFloat(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hfaFloat(This,pRetVal) ) 

#define IDiaSymbol5_get_hfaDouble(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hfaDouble(This,pRetVal) ) 

#define IDiaSymbol5_get_liveRangeStartAddressSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeStartAddressSection(This,pRetVal) ) 

#define IDiaSymbol5_get_liveRangeStartAddressOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeStartAddressOffset(This,pRetVal) ) 

#define IDiaSymbol5_get_liveRangeStartRelativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeStartRelativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol5_get_countLiveRanges(This,pRetVal)	\
    ( (This)->lpVtbl -> get_countLiveRanges(This,pRetVal) ) 

#define IDiaSymbol5_get_liveRangeLength(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeLength(This,pRetVal) ) 

#define IDiaSymbol5_get_offsetInUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_offsetInUdt(This,pRetVal) ) 

#define IDiaSymbol5_get_paramBasePointerRegisterId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_paramBasePointerRegisterId(This,pRetVal) ) 

#define IDiaSymbol5_get_localBasePointerRegisterId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_localBasePointerRegisterId(This,pRetVal) ) 

#define IDiaSymbol5_get_isLocationControlFlowDependent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isLocationControlFlowDependent(This,pRetVal) ) 

#define IDiaSymbol5_get_stride(This,pRetVal)	\
    ( (This)->lpVtbl -> get_stride(This,pRetVal) ) 

#define IDiaSymbol5_get_numberOfRows(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfRows(This,pRetVal) ) 

#define IDiaSymbol5_get_numberOfColumns(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfColumns(This,pRetVal) ) 

#define IDiaSymbol5_get_isMatrixRowMajor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isMatrixRowMajor(This,pRetVal) ) 

#define IDiaSymbol5_get_numericProperties(This,cnt,pcnt,pProperties)	\
    ( (This)->lpVtbl -> get_numericProperties(This,cnt,pcnt,pProperties) ) 

#define IDiaSymbol5_get_modifierValues(This,cnt,pcnt,pModifiers)	\
    ( (This)->lpVtbl -> get_modifierValues(This,cnt,pcnt,pModifiers) ) 

#define IDiaSymbol5_get_isReturnValue(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isReturnValue(This,pRetVal) ) 

#define IDiaSymbol5_get_isOptimizedAway(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isOptimizedAway(This,pRetVal) ) 

#define IDiaSymbol5_get_builtInKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_builtInKind(This,pRetVal) ) 

#define IDiaSymbol5_get_registerType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_registerType(This,pRetVal) ) 

#define IDiaSymbol5_get_baseDataSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseDataSlot(This,pRetVal) ) 

#define IDiaSymbol5_get_baseDataOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseDataOffset(This,pRetVal) ) 

#define IDiaSymbol5_get_textureSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_textureSlot(This,pRetVal) ) 

#define IDiaSymbol5_get_samplerSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_samplerSlot(This,pRetVal) ) 

#define IDiaSymbol5_get_uavSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_uavSlot(This,pRetVal) ) 

#define IDiaSymbol5_get_sizeInUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_sizeInUdt(This,pRetVal) ) 

#define IDiaSymbol5_get_memorySpaceKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_memorySpaceKind(This,pRetVal) ) 

#define IDiaSymbol5_get_unmodifiedTypeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unmodifiedTypeId(This,pRetVal) ) 

#define IDiaSymbol5_get_subTypeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_subTypeId(This,pRetVal) ) 

#define IDiaSymbol5_get_subType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_subType(This,pRetVal) ) 

#define IDiaSymbol5_get_numberOfModifiers(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfModifiers(This,pRetVal) ) 

#define IDiaSymbol5_get_numberOfRegisterIndices(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfRegisterIndices(This,pRetVal) ) 

#define IDiaSymbol5_get_isHLSLData(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isHLSLData(This,pRetVal) ) 

#define IDiaSymbol5_get_isPointerToDataMember(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPointerToDataMember(This,pRetVal) ) 

#define IDiaSymbol5_get_isPointerToMemberFunction(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPointerToMemberFunction(This,pRetVal) ) 

#define IDiaSymbol5_get_isSingleInheritance(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSingleInheritance(This,pRetVal) ) 

#define IDiaSymbol5_get_isMultipleInheritance(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isMultipleInheritance(This,pRetVal) ) 

#define IDiaSymbol5_get_isVirtualInheritance(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isVirtualInheritance(This,pRetVal) ) 

#define IDiaSymbol5_get_restrictedType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_restrictedType(This,pRetVal) ) 

#define IDiaSymbol5_get_isPointerBasedOnSymbolValue(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPointerBasedOnSymbolValue(This,pRetVal) ) 

#define IDiaSymbol5_get_baseSymbol(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseSymbol(This,pRetVal) ) 

#define IDiaSymbol5_get_baseSymbolId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseSymbolId(This,pRetVal) ) 

#define IDiaSymbol5_get_objectFileName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_objectFileName(This,pRetVal) ) 

#define IDiaSymbol5_get_isAcceleratorGroupSharedLocal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAcceleratorGroupSharedLocal(This,pRetVal) ) 

#define IDiaSymbol5_get_isAcceleratorPointerTagLiveRange(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAcceleratorPointerTagLiveRange(This,pRetVal) ) 

#define IDiaSymbol5_get_isAcceleratorStubFunction(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAcceleratorStubFunction(This,pRetVal) ) 

#define IDiaSymbol5_get_numberOfAcceleratorPointerTags(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfAcceleratorPointerTags(This,pRetVal) ) 

#define IDiaSymbol5_get_isSdl(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSdl(This,pRetVal) ) 

#define IDiaSymbol5_get_isWinRTPointer(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isWinRTPointer(This,pRetVal) ) 

#define IDiaSymbol5_get_isRefUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isRefUdt(This,pRetVal) ) 

#define IDiaSymbol5_get_isValueUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isValueUdt(This,pRetVal) ) 

#define IDiaSymbol5_get_isInterfaceUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isInterfaceUdt(This,pRetVal) ) 

#define IDiaSymbol5_findInlineFramesByAddr(This,isect,offset,ppResult)	\
    ( (This)->lpVtbl -> findInlineFramesByAddr(This,isect,offset,ppResult) ) 

#define IDiaSymbol5_findInlineFramesByRVA(This,rva,ppResult)	\
    ( (This)->lpVtbl -> findInlineFramesByRVA(This,rva,ppResult) ) 

#define IDiaSymbol5_findInlineFramesByVA(This,va,ppResult)	\
    ( (This)->lpVtbl -> findInlineFramesByVA(This,va,ppResult) ) 

#define IDiaSymbol5_findInlineeLines(This,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLines(This,ppResult) ) 

#define IDiaSymbol5_findInlineeLinesByAddr(This,isect,offset,length,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLinesByAddr(This,isect,offset,length,ppResult) ) 

#define IDiaSymbol5_findInlineeLinesByRVA(This,rva,length,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLinesByRVA(This,rva,length,ppResult) ) 

#define IDiaSymbol5_findInlineeLinesByVA(This,va,length,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLinesByVA(This,va,length,ppResult) ) 

#define IDiaSymbol5_findSymbolsForAcceleratorPointerTag(This,tagValue,ppResult)	\
    ( (This)->lpVtbl -> findSymbolsForAcceleratorPointerTag(This,tagValue,ppResult) ) 

#define IDiaSymbol5_findSymbolsByRVAForAcceleratorPointerTag(This,tagValue,rva,ppResult)	\
    ( (This)->lpVtbl -> findSymbolsByRVAForAcceleratorPointerTag(This,tagValue,rva,ppResult) ) 

#define IDiaSymbol5_get_acceleratorPointerTags(This,cnt,pcnt,pPointerTags)	\
    ( (This)->lpVtbl -> get_acceleratorPointerTags(This,cnt,pcnt,pPointerTags) ) 

#define IDiaSymbol5_getSrcLineOnTypeDefn(This,ppResult)	\
    ( (This)->lpVtbl -> getSrcLineOnTypeDefn(This,ppResult) ) 

#define IDiaSymbol5_get_isPGO(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPGO(This,pRetVal) ) 

#define IDiaSymbol5_get_hasValidPGOCounts(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasValidPGOCounts(This,pRetVal) ) 

#define IDiaSymbol5_get_isOptimizedForSpeed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isOptimizedForSpeed(This,pRetVal) ) 

#define IDiaSymbol5_get_PGOEntryCount(This,pRetVal)	\
    ( (This)->lpVtbl -> get_PGOEntryCount(This,pRetVal) ) 

#define IDiaSymbol5_get_PGOEdgeCount(This,pRetVal)	\
    ( (This)->lpVtbl -> get_PGOEdgeCount(This,pRetVal) ) 

#define IDiaSymbol5_get_PGODynamicInstructionCount(This,pRetVal)	\
    ( (This)->lpVtbl -> get_PGODynamicInstructionCount(This,pRetVal) ) 

#define IDiaSymbol5_get_staticSize(This,pRetVal)	\
    ( (This)->lpVtbl -> get_staticSize(This,pRetVal) ) 

#define IDiaSymbol5_get_finalLiveStaticSize(This,pRetVal)	\
    ( (This)->lpVtbl -> get_finalLiveStaticSize(This,pRetVal) ) 

#define IDiaSymbol5_get_phaseName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_phaseName(This,pRetVal) ) 

#define IDiaSymbol5_get_hasControlFlowCheck(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasControlFlowCheck(This,pRetVal) ) 

#define IDiaSymbol5_get_constantExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_constantExport(This,pRetVal) ) 

#define IDiaSymbol5_get_dataExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_dataExport(This,pRetVal) ) 

#define IDiaSymbol5_get_privateExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_privateExport(This,pRetVal) ) 

#define IDiaSymbol5_get_noNameExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noNameExport(This,pRetVal) ) 

#define IDiaSymbol5_get_exportHasExplicitlyAssignedOrdinal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exportHasExplicitlyAssignedOrdinal(This,pRetVal) ) 

#define IDiaSymbol5_get_exportIsForwarder(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exportIsForwarder(This,pRetVal) ) 

#define IDiaSymbol5_get_ordinal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_ordinal(This,pRetVal) ) 

#define IDiaSymbol5_get_frameSize(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frameSize(This,pRetVal) ) 

#define IDiaSymbol5_get_exceptionHandlerAddressSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerAddressSection(This,pRetVal) ) 

#define IDiaSymbol5_get_exceptionHandlerAddressOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerAddressOffset(This,pRetVal) ) 

#define IDiaSymbol5_get_exceptionHandlerRelativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerRelativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol5_get_exceptionHandlerVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol5_findInputAssemblyFile(This,ppResult)	\
    ( (This)->lpVtbl -> findInputAssemblyFile(This,ppResult) ) 

#define IDiaSymbol5_get_characteristics(This,pRetVal)	\
    ( (This)->lpVtbl -> get_characteristics(This,pRetVal) ) 

#define IDiaSymbol5_get_coffGroup(This,pRetVal)	\
    ( (This)->lpVtbl -> get_coffGroup(This,pRetVal) ) 

#define IDiaSymbol5_get_bindID(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bindID(This,pRetVal) ) 

#define IDiaSymbol5_get_bindSpace(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bindSpace(This,pRetVal) ) 

#define IDiaSymbol5_get_bindSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bindSlot(This,pRetVal) ) 


#define IDiaSymbol5_get_isObjCClass(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isObjCClass(This,pRetVal) ) 

#define IDiaSymbol5_get_isObjCCategory(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isObjCCategory(This,pRetVal) ) 

#define IDiaSymbol5_get_isObjCProtocol(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isObjCProtocol(This,pRetVal) ) 


#define IDiaSymbol5_get_inlinee(This,pRetVal)	\
    ( (This)->lpVtbl -> get_inlinee(This,pRetVal) ) 

#define IDiaSymbol5_get_inlineeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_inlineeId(This,pRetVal) ) 


#define IDiaSymbol5_get_noexcept(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noexcept(This,pRetVal) ) 


#define IDiaSymbol5_get_hasAbsoluteAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasAbsoluteAddress(This,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol5_get_hasAbsoluteAddress_Proxy( 
    IDiaSymbol5 * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol5_get_hasAbsoluteAddress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDiaSymbol5_INTERFACE_DEFINED__ */


#ifndef __IDiaSymbol6_INTERFACE_DEFINED__
#define __IDiaSymbol6_INTERFACE_DEFINED__

/* interface IDiaSymbol6 */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaSymbol6;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8133dad3-75fe-4234-ac7e-f8e7a1d3cbb3")
    IDiaSymbol6 : public IDiaSymbol5
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isStaticMemberFunc( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaSymbol6Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaSymbol6 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaSymbol6 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaSymbol6 * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_symIndexId )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_symTag )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_name )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lexicalParent )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_classParent )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_type )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_dataKind )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_locationType )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressSection )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressOffset )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_relativeVirtualAddress )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualAddress )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_registerId )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_offset )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_length )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_slot )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_volatileType )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_constType )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unalignedType )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_access )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_libraryName )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_platform )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_language )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_editAndContinueEnabled )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndMajor )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndMinor )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndBuild )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndMajor )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndMinor )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndBuild )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sourceFileName )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unused )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_thunkOrdinal )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_thisAdjust )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseOffset )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtual )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_intro )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_pure )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_callingConvention )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_value )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ VARIANT *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseType )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_token )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_timeStamp )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_guid )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ GUID *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_symbolsFileName )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_reference )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_count )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bitPosition )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_arrayIndexType )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_packed )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_constructor )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_overloadedOperator )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_nested )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasNestedTypes )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasAssignmentOperator )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasCastOperator )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_scoped )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseClass )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_indirectVirtualBaseClass )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBasePointerOffset )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualTableShape )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lexicalParentId )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_classParentId )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_typeId )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_arrayIndexTypeId )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualTableShapeId )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_code )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_function )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_managed )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_msil )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseDispIndex )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_undecoratedName )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_age )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_signature )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_compilerGenerated )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressTaken )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_rank )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lowerBound )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_upperBound )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lowerBoundId )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_upperBoundId )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_dataBytes )( 
            IDiaSymbol6 * This,
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData);
        
        HRESULT ( STDMETHODCALLTYPE *findChildren )( 
            IDiaSymbol6 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenEx )( 
            IDiaSymbol6 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenExByAddr )( 
            IDiaSymbol6 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenExByVA )( 
            IDiaSymbol6 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ ULONGLONG va,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenExByRVA )( 
            IDiaSymbol6 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetSection )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetOffset )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetRelativeVirtualAddress )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetVirtualAddress )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_machineType )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_oemId )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_oemSymbolId )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_types )( 
            IDiaSymbol6 * This,
            /* [in] */ DWORD cTypes,
            /* [out] */ DWORD *pcTypes,
            /* [size_is][size_is][out] */ IDiaSymbol **pTypes);
        
        HRESULT ( STDMETHODCALLTYPE *get_typeIds )( 
            IDiaSymbol6 * This,
            /* [in] */ DWORD cTypeIds,
            /* [out] */ DWORD *pcTypeIds,
            /* [size_is][out] */ DWORD *pdwTypeIds);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_objectPointerType )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_udtKind )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_undecoratedNameEx )( 
            IDiaSymbol6 * This,
            /* [in] */ DWORD undecorateOptions,
            /* [out] */ BSTR *name);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noReturn )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_customCallingConvention )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noInline )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_optimizedCodeDebugInfo )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_notReached )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_interruptReturn )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_farReturn )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isStatic )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasDebugInfo )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isLTCG )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isDataAligned )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasSecurityChecks )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_compilerName )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasAlloca )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasSetJump )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasLongJump )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasInlAsm )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasEH )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasSEH )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasEHa )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isNaked )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAggregated )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSplitted )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_container )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_inlSpec )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noStackOrdering )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseTableType )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasManagedCode )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isHotpatchable )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isCVTCIL )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isMSILNetmodule )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isCTypes )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isStripped )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndQFE )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndQFE )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_wasInlined )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_strictGSCheck )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isCxxReturnUdt )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isConstructorVirtualBase )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RValueReference )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unmodifiedType )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_framePointerPresent )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSafeBuffers )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_intrinsic )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sealed )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hfaFloat )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hfaDouble )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeStartAddressSection )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeStartAddressOffset )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeStartRelativeVirtualAddress )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_countLiveRanges )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeLength )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_offsetInUdt )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_paramBasePointerRegisterId )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_localBasePointerRegisterId )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isLocationControlFlowDependent )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_stride )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfRows )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfColumns )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isMatrixRowMajor )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_numericProperties )( 
            IDiaSymbol6 * This,
            /* [in] */ DWORD cnt,
            /* [out] */ DWORD *pcnt,
            /* [size_is][out] */ DWORD *pProperties);
        
        HRESULT ( STDMETHODCALLTYPE *get_modifierValues )( 
            IDiaSymbol6 * This,
            /* [in] */ DWORD cnt,
            /* [out] */ DWORD *pcnt,
            /* [size_is][out] */ WORD *pModifiers);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isReturnValue )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isOptimizedAway )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_builtInKind )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_registerType )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseDataSlot )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseDataOffset )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_textureSlot )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_samplerSlot )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_uavSlot )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sizeInUdt )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_memorySpaceKind )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unmodifiedTypeId )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_subTypeId )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_subType )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfModifiers )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfRegisterIndices )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isHLSLData )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPointerToDataMember )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPointerToMemberFunction )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSingleInheritance )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isMultipleInheritance )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isVirtualInheritance )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_restrictedType )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPointerBasedOnSymbolValue )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseSymbol )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseSymbolId )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_objectFileName )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAcceleratorGroupSharedLocal )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAcceleratorPointerTagLiveRange )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAcceleratorStubFunction )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfAcceleratorPointerTags )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSdl )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isWinRTPointer )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isRefUdt )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isValueUdt )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isInterfaceUdt )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineFramesByAddr )( 
            IDiaSymbol6 * This,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineFramesByRVA )( 
            IDiaSymbol6 * This,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineFramesByVA )( 
            IDiaSymbol6 * This,
            /* [in] */ ULONGLONG va,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLines )( 
            IDiaSymbol6 * This,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLinesByAddr )( 
            IDiaSymbol6 * This,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLinesByRVA )( 
            IDiaSymbol6 * This,
            /* [in] */ DWORD rva,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLinesByVA )( 
            IDiaSymbol6 * This,
            /* [in] */ ULONGLONG va,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findSymbolsForAcceleratorPointerTag )( 
            IDiaSymbol6 * This,
            /* [in] */ DWORD tagValue,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findSymbolsByRVAForAcceleratorPointerTag )( 
            IDiaSymbol6 * This,
            /* [in] */ DWORD tagValue,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *get_acceleratorPointerTags )( 
            IDiaSymbol6 * This,
            /* [in] */ DWORD cnt,
            /* [out] */ DWORD *pcnt,
            /* [size_is][out] */ DWORD *pPointerTags);
        
        HRESULT ( STDMETHODCALLTYPE *getSrcLineOnTypeDefn )( 
            IDiaSymbol6 * This,
            /* [out] */ IDiaLineNumber **ppResult);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPGO )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasValidPGOCounts )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isOptimizedForSpeed )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PGOEntryCount )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PGOEdgeCount )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PGODynamicInstructionCount )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_staticSize )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_finalLiveStaticSize )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_phaseName )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasControlFlowCheck )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_constantExport )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_dataExport )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_privateExport )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noNameExport )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exportHasExplicitlyAssignedOrdinal )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exportIsForwarder )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ordinal )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frameSize )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerAddressSection )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerAddressOffset )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerRelativeVirtualAddress )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerVirtualAddress )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *findInputAssemblyFile )( 
            IDiaSymbol6 * This,
            /* [out] */ IDiaInputAssemblyFile **ppResult);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_characteristics )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_coffGroup )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bindID )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bindSpace )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bindSlot )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isObjCClass )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isObjCCategory )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isObjCProtocol )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_inlinee )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_inlineeId )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noexcept )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasAbsoluteAddress )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isStaticMemberFunc )( 
            IDiaSymbol6 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        END_INTERFACE
    } IDiaSymbol6Vtbl;

    interface IDiaSymbol6
    {
        CONST_VTBL struct IDiaSymbol6Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaSymbol6_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaSymbol6_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaSymbol6_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaSymbol6_get_symIndexId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_symIndexId(This,pRetVal) ) 

#define IDiaSymbol6_get_symTag(This,pRetVal)	\
    ( (This)->lpVtbl -> get_symTag(This,pRetVal) ) 

#define IDiaSymbol6_get_name(This,pRetVal)	\
    ( (This)->lpVtbl -> get_name(This,pRetVal) ) 

#define IDiaSymbol6_get_lexicalParent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lexicalParent(This,pRetVal) ) 

#define IDiaSymbol6_get_classParent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_classParent(This,pRetVal) ) 

#define IDiaSymbol6_get_type(This,pRetVal)	\
    ( (This)->lpVtbl -> get_type(This,pRetVal) ) 

#define IDiaSymbol6_get_dataKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_dataKind(This,pRetVal) ) 

#define IDiaSymbol6_get_locationType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_locationType(This,pRetVal) ) 

#define IDiaSymbol6_get_addressSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressSection(This,pRetVal) ) 

#define IDiaSymbol6_get_addressOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressOffset(This,pRetVal) ) 

#define IDiaSymbol6_get_relativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_relativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol6_get_virtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualAddress(This,pRetVal) ) 

#define IDiaSymbol6_get_registerId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_registerId(This,pRetVal) ) 

#define IDiaSymbol6_get_offset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_offset(This,pRetVal) ) 

#define IDiaSymbol6_get_length(This,pRetVal)	\
    ( (This)->lpVtbl -> get_length(This,pRetVal) ) 

#define IDiaSymbol6_get_slot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_slot(This,pRetVal) ) 

#define IDiaSymbol6_get_volatileType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_volatileType(This,pRetVal) ) 

#define IDiaSymbol6_get_constType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_constType(This,pRetVal) ) 

#define IDiaSymbol6_get_unalignedType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unalignedType(This,pRetVal) ) 

#define IDiaSymbol6_get_access(This,pRetVal)	\
    ( (This)->lpVtbl -> get_access(This,pRetVal) ) 

#define IDiaSymbol6_get_libraryName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_libraryName(This,pRetVal) ) 

#define IDiaSymbol6_get_platform(This,pRetVal)	\
    ( (This)->lpVtbl -> get_platform(This,pRetVal) ) 

#define IDiaSymbol6_get_language(This,pRetVal)	\
    ( (This)->lpVtbl -> get_language(This,pRetVal) ) 

#define IDiaSymbol6_get_editAndContinueEnabled(This,pRetVal)	\
    ( (This)->lpVtbl -> get_editAndContinueEnabled(This,pRetVal) ) 

#define IDiaSymbol6_get_frontEndMajor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndMajor(This,pRetVal) ) 

#define IDiaSymbol6_get_frontEndMinor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndMinor(This,pRetVal) ) 

#define IDiaSymbol6_get_frontEndBuild(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndBuild(This,pRetVal) ) 

#define IDiaSymbol6_get_backEndMajor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndMajor(This,pRetVal) ) 

#define IDiaSymbol6_get_backEndMinor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndMinor(This,pRetVal) ) 

#define IDiaSymbol6_get_backEndBuild(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndBuild(This,pRetVal) ) 

#define IDiaSymbol6_get_sourceFileName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_sourceFileName(This,pRetVal) ) 

#define IDiaSymbol6_get_unused(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unused(This,pRetVal) ) 

#define IDiaSymbol6_get_thunkOrdinal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_thunkOrdinal(This,pRetVal) ) 

#define IDiaSymbol6_get_thisAdjust(This,pRetVal)	\
    ( (This)->lpVtbl -> get_thisAdjust(This,pRetVal) ) 

#define IDiaSymbol6_get_virtualBaseOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseOffset(This,pRetVal) ) 

#define IDiaSymbol6_get_virtual(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtual(This,pRetVal) ) 

#define IDiaSymbol6_get_intro(This,pRetVal)	\
    ( (This)->lpVtbl -> get_intro(This,pRetVal) ) 

#define IDiaSymbol6_get_pure(This,pRetVal)	\
    ( (This)->lpVtbl -> get_pure(This,pRetVal) ) 

#define IDiaSymbol6_get_callingConvention(This,pRetVal)	\
    ( (This)->lpVtbl -> get_callingConvention(This,pRetVal) ) 

#define IDiaSymbol6_get_value(This,pRetVal)	\
    ( (This)->lpVtbl -> get_value(This,pRetVal) ) 

#define IDiaSymbol6_get_baseType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseType(This,pRetVal) ) 

#define IDiaSymbol6_get_token(This,pRetVal)	\
    ( (This)->lpVtbl -> get_token(This,pRetVal) ) 

#define IDiaSymbol6_get_timeStamp(This,pRetVal)	\
    ( (This)->lpVtbl -> get_timeStamp(This,pRetVal) ) 

#define IDiaSymbol6_get_guid(This,pRetVal)	\
    ( (This)->lpVtbl -> get_guid(This,pRetVal) ) 

#define IDiaSymbol6_get_symbolsFileName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_symbolsFileName(This,pRetVal) ) 

#define IDiaSymbol6_get_reference(This,pRetVal)	\
    ( (This)->lpVtbl -> get_reference(This,pRetVal) ) 

#define IDiaSymbol6_get_count(This,pRetVal)	\
    ( (This)->lpVtbl -> get_count(This,pRetVal) ) 

#define IDiaSymbol6_get_bitPosition(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bitPosition(This,pRetVal) ) 

#define IDiaSymbol6_get_arrayIndexType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_arrayIndexType(This,pRetVal) ) 

#define IDiaSymbol6_get_packed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_packed(This,pRetVal) ) 

#define IDiaSymbol6_get_constructor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_constructor(This,pRetVal) ) 

#define IDiaSymbol6_get_overloadedOperator(This,pRetVal)	\
    ( (This)->lpVtbl -> get_overloadedOperator(This,pRetVal) ) 

#define IDiaSymbol6_get_nested(This,pRetVal)	\
    ( (This)->lpVtbl -> get_nested(This,pRetVal) ) 

#define IDiaSymbol6_get_hasNestedTypes(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasNestedTypes(This,pRetVal) ) 

#define IDiaSymbol6_get_hasAssignmentOperator(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasAssignmentOperator(This,pRetVal) ) 

#define IDiaSymbol6_get_hasCastOperator(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasCastOperator(This,pRetVal) ) 

#define IDiaSymbol6_get_scoped(This,pRetVal)	\
    ( (This)->lpVtbl -> get_scoped(This,pRetVal) ) 

#define IDiaSymbol6_get_virtualBaseClass(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseClass(This,pRetVal) ) 

#define IDiaSymbol6_get_indirectVirtualBaseClass(This,pRetVal)	\
    ( (This)->lpVtbl -> get_indirectVirtualBaseClass(This,pRetVal) ) 

#define IDiaSymbol6_get_virtualBasePointerOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBasePointerOffset(This,pRetVal) ) 

#define IDiaSymbol6_get_virtualTableShape(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualTableShape(This,pRetVal) ) 

#define IDiaSymbol6_get_lexicalParentId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lexicalParentId(This,pRetVal) ) 

#define IDiaSymbol6_get_classParentId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_classParentId(This,pRetVal) ) 

#define IDiaSymbol6_get_typeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_typeId(This,pRetVal) ) 

#define IDiaSymbol6_get_arrayIndexTypeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_arrayIndexTypeId(This,pRetVal) ) 

#define IDiaSymbol6_get_virtualTableShapeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualTableShapeId(This,pRetVal) ) 

#define IDiaSymbol6_get_code(This,pRetVal)	\
    ( (This)->lpVtbl -> get_code(This,pRetVal) ) 

#define IDiaSymbol6_get_function(This,pRetVal)	\
    ( (This)->lpVtbl -> get_function(This,pRetVal) ) 

#define IDiaSymbol6_get_managed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_managed(This,pRetVal) ) 

#define IDiaSymbol6_get_msil(This,pRetVal)	\
    ( (This)->lpVtbl -> get_msil(This,pRetVal) ) 

#define IDiaSymbol6_get_virtualBaseDispIndex(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseDispIndex(This,pRetVal) ) 

#define IDiaSymbol6_get_undecoratedName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_undecoratedName(This,pRetVal) ) 

#define IDiaSymbol6_get_age(This,pRetVal)	\
    ( (This)->lpVtbl -> get_age(This,pRetVal) ) 

#define IDiaSymbol6_get_signature(This,pRetVal)	\
    ( (This)->lpVtbl -> get_signature(This,pRetVal) ) 

#define IDiaSymbol6_get_compilerGenerated(This,pRetVal)	\
    ( (This)->lpVtbl -> get_compilerGenerated(This,pRetVal) ) 

#define IDiaSymbol6_get_addressTaken(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressTaken(This,pRetVal) ) 

#define IDiaSymbol6_get_rank(This,pRetVal)	\
    ( (This)->lpVtbl -> get_rank(This,pRetVal) ) 

#define IDiaSymbol6_get_lowerBound(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lowerBound(This,pRetVal) ) 

#define IDiaSymbol6_get_upperBound(This,pRetVal)	\
    ( (This)->lpVtbl -> get_upperBound(This,pRetVal) ) 

#define IDiaSymbol6_get_lowerBoundId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lowerBoundId(This,pRetVal) ) 

#define IDiaSymbol6_get_upperBoundId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_upperBoundId(This,pRetVal) ) 

#define IDiaSymbol6_get_dataBytes(This,cbData,pcbData,pbData)	\
    ( (This)->lpVtbl -> get_dataBytes(This,cbData,pcbData,pbData) ) 

#define IDiaSymbol6_findChildren(This,symtag,name,compareFlags,ppResult)	\
    ( (This)->lpVtbl -> findChildren(This,symtag,name,compareFlags,ppResult) ) 

#define IDiaSymbol6_findChildrenEx(This,symtag,name,compareFlags,ppResult)	\
    ( (This)->lpVtbl -> findChildrenEx(This,symtag,name,compareFlags,ppResult) ) 

#define IDiaSymbol6_findChildrenExByAddr(This,symtag,name,compareFlags,isect,offset,ppResult)	\
    ( (This)->lpVtbl -> findChildrenExByAddr(This,symtag,name,compareFlags,isect,offset,ppResult) ) 

#define IDiaSymbol6_findChildrenExByVA(This,symtag,name,compareFlags,va,ppResult)	\
    ( (This)->lpVtbl -> findChildrenExByVA(This,symtag,name,compareFlags,va,ppResult) ) 

#define IDiaSymbol6_findChildrenExByRVA(This,symtag,name,compareFlags,rva,ppResult)	\
    ( (This)->lpVtbl -> findChildrenExByRVA(This,symtag,name,compareFlags,rva,ppResult) ) 

#define IDiaSymbol6_get_targetSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetSection(This,pRetVal) ) 

#define IDiaSymbol6_get_targetOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetOffset(This,pRetVal) ) 

#define IDiaSymbol6_get_targetRelativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetRelativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol6_get_targetVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol6_get_machineType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_machineType(This,pRetVal) ) 

#define IDiaSymbol6_get_oemId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_oemId(This,pRetVal) ) 

#define IDiaSymbol6_get_oemSymbolId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_oemSymbolId(This,pRetVal) ) 

#define IDiaSymbol6_get_types(This,cTypes,pcTypes,pTypes)	\
    ( (This)->lpVtbl -> get_types(This,cTypes,pcTypes,pTypes) ) 

#define IDiaSymbol6_get_typeIds(This,cTypeIds,pcTypeIds,pdwTypeIds)	\
    ( (This)->lpVtbl -> get_typeIds(This,cTypeIds,pcTypeIds,pdwTypeIds) ) 

#define IDiaSymbol6_get_objectPointerType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_objectPointerType(This,pRetVal) ) 

#define IDiaSymbol6_get_udtKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_udtKind(This,pRetVal) ) 

#define IDiaSymbol6_get_undecoratedNameEx(This,undecorateOptions,name)	\
    ( (This)->lpVtbl -> get_undecoratedNameEx(This,undecorateOptions,name) ) 

#define IDiaSymbol6_get_noReturn(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noReturn(This,pRetVal) ) 

#define IDiaSymbol6_get_customCallingConvention(This,pRetVal)	\
    ( (This)->lpVtbl -> get_customCallingConvention(This,pRetVal) ) 

#define IDiaSymbol6_get_noInline(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noInline(This,pRetVal) ) 

#define IDiaSymbol6_get_optimizedCodeDebugInfo(This,pRetVal)	\
    ( (This)->lpVtbl -> get_optimizedCodeDebugInfo(This,pRetVal) ) 

#define IDiaSymbol6_get_notReached(This,pRetVal)	\
    ( (This)->lpVtbl -> get_notReached(This,pRetVal) ) 

#define IDiaSymbol6_get_interruptReturn(This,pRetVal)	\
    ( (This)->lpVtbl -> get_interruptReturn(This,pRetVal) ) 

#define IDiaSymbol6_get_farReturn(This,pRetVal)	\
    ( (This)->lpVtbl -> get_farReturn(This,pRetVal) ) 

#define IDiaSymbol6_get_isStatic(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isStatic(This,pRetVal) ) 

#define IDiaSymbol6_get_hasDebugInfo(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasDebugInfo(This,pRetVal) ) 

#define IDiaSymbol6_get_isLTCG(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isLTCG(This,pRetVal) ) 

#define IDiaSymbol6_get_isDataAligned(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isDataAligned(This,pRetVal) ) 

#define IDiaSymbol6_get_hasSecurityChecks(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasSecurityChecks(This,pRetVal) ) 

#define IDiaSymbol6_get_compilerName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_compilerName(This,pRetVal) ) 

#define IDiaSymbol6_get_hasAlloca(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasAlloca(This,pRetVal) ) 

#define IDiaSymbol6_get_hasSetJump(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasSetJump(This,pRetVal) ) 

#define IDiaSymbol6_get_hasLongJump(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasLongJump(This,pRetVal) ) 

#define IDiaSymbol6_get_hasInlAsm(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasInlAsm(This,pRetVal) ) 

#define IDiaSymbol6_get_hasEH(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasEH(This,pRetVal) ) 

#define IDiaSymbol6_get_hasSEH(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasSEH(This,pRetVal) ) 

#define IDiaSymbol6_get_hasEHa(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasEHa(This,pRetVal) ) 

#define IDiaSymbol6_get_isNaked(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isNaked(This,pRetVal) ) 

#define IDiaSymbol6_get_isAggregated(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAggregated(This,pRetVal) ) 

#define IDiaSymbol6_get_isSplitted(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSplitted(This,pRetVal) ) 

#define IDiaSymbol6_get_container(This,pRetVal)	\
    ( (This)->lpVtbl -> get_container(This,pRetVal) ) 

#define IDiaSymbol6_get_inlSpec(This,pRetVal)	\
    ( (This)->lpVtbl -> get_inlSpec(This,pRetVal) ) 

#define IDiaSymbol6_get_noStackOrdering(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noStackOrdering(This,pRetVal) ) 

#define IDiaSymbol6_get_virtualBaseTableType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseTableType(This,pRetVal) ) 

#define IDiaSymbol6_get_hasManagedCode(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasManagedCode(This,pRetVal) ) 

#define IDiaSymbol6_get_isHotpatchable(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isHotpatchable(This,pRetVal) ) 

#define IDiaSymbol6_get_isCVTCIL(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isCVTCIL(This,pRetVal) ) 

#define IDiaSymbol6_get_isMSILNetmodule(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isMSILNetmodule(This,pRetVal) ) 

#define IDiaSymbol6_get_isCTypes(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isCTypes(This,pRetVal) ) 

#define IDiaSymbol6_get_isStripped(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isStripped(This,pRetVal) ) 

#define IDiaSymbol6_get_frontEndQFE(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndQFE(This,pRetVal) ) 

#define IDiaSymbol6_get_backEndQFE(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndQFE(This,pRetVal) ) 

#define IDiaSymbol6_get_wasInlined(This,pRetVal)	\
    ( (This)->lpVtbl -> get_wasInlined(This,pRetVal) ) 

#define IDiaSymbol6_get_strictGSCheck(This,pRetVal)	\
    ( (This)->lpVtbl -> get_strictGSCheck(This,pRetVal) ) 

#define IDiaSymbol6_get_isCxxReturnUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isCxxReturnUdt(This,pRetVal) ) 

#define IDiaSymbol6_get_isConstructorVirtualBase(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isConstructorVirtualBase(This,pRetVal) ) 

#define IDiaSymbol6_get_RValueReference(This,pRetVal)	\
    ( (This)->lpVtbl -> get_RValueReference(This,pRetVal) ) 

#define IDiaSymbol6_get_unmodifiedType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unmodifiedType(This,pRetVal) ) 

#define IDiaSymbol6_get_framePointerPresent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_framePointerPresent(This,pRetVal) ) 

#define IDiaSymbol6_get_isSafeBuffers(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSafeBuffers(This,pRetVal) ) 

#define IDiaSymbol6_get_intrinsic(This,pRetVal)	\
    ( (This)->lpVtbl -> get_intrinsic(This,pRetVal) ) 

#define IDiaSymbol6_get_sealed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_sealed(This,pRetVal) ) 

#define IDiaSymbol6_get_hfaFloat(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hfaFloat(This,pRetVal) ) 

#define IDiaSymbol6_get_hfaDouble(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hfaDouble(This,pRetVal) ) 

#define IDiaSymbol6_get_liveRangeStartAddressSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeStartAddressSection(This,pRetVal) ) 

#define IDiaSymbol6_get_liveRangeStartAddressOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeStartAddressOffset(This,pRetVal) ) 

#define IDiaSymbol6_get_liveRangeStartRelativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeStartRelativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol6_get_countLiveRanges(This,pRetVal)	\
    ( (This)->lpVtbl -> get_countLiveRanges(This,pRetVal) ) 

#define IDiaSymbol6_get_liveRangeLength(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeLength(This,pRetVal) ) 

#define IDiaSymbol6_get_offsetInUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_offsetInUdt(This,pRetVal) ) 

#define IDiaSymbol6_get_paramBasePointerRegisterId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_paramBasePointerRegisterId(This,pRetVal) ) 

#define IDiaSymbol6_get_localBasePointerRegisterId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_localBasePointerRegisterId(This,pRetVal) ) 

#define IDiaSymbol6_get_isLocationControlFlowDependent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isLocationControlFlowDependent(This,pRetVal) ) 

#define IDiaSymbol6_get_stride(This,pRetVal)	\
    ( (This)->lpVtbl -> get_stride(This,pRetVal) ) 

#define IDiaSymbol6_get_numberOfRows(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfRows(This,pRetVal) ) 

#define IDiaSymbol6_get_numberOfColumns(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfColumns(This,pRetVal) ) 

#define IDiaSymbol6_get_isMatrixRowMajor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isMatrixRowMajor(This,pRetVal) ) 

#define IDiaSymbol6_get_numericProperties(This,cnt,pcnt,pProperties)	\
    ( (This)->lpVtbl -> get_numericProperties(This,cnt,pcnt,pProperties) ) 

#define IDiaSymbol6_get_modifierValues(This,cnt,pcnt,pModifiers)	\
    ( (This)->lpVtbl -> get_modifierValues(This,cnt,pcnt,pModifiers) ) 

#define IDiaSymbol6_get_isReturnValue(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isReturnValue(This,pRetVal) ) 

#define IDiaSymbol6_get_isOptimizedAway(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isOptimizedAway(This,pRetVal) ) 

#define IDiaSymbol6_get_builtInKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_builtInKind(This,pRetVal) ) 

#define IDiaSymbol6_get_registerType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_registerType(This,pRetVal) ) 

#define IDiaSymbol6_get_baseDataSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseDataSlot(This,pRetVal) ) 

#define IDiaSymbol6_get_baseDataOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseDataOffset(This,pRetVal) ) 

#define IDiaSymbol6_get_textureSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_textureSlot(This,pRetVal) ) 

#define IDiaSymbol6_get_samplerSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_samplerSlot(This,pRetVal) ) 

#define IDiaSymbol6_get_uavSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_uavSlot(This,pRetVal) ) 

#define IDiaSymbol6_get_sizeInUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_sizeInUdt(This,pRetVal) ) 

#define IDiaSymbol6_get_memorySpaceKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_memorySpaceKind(This,pRetVal) ) 

#define IDiaSymbol6_get_unmodifiedTypeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unmodifiedTypeId(This,pRetVal) ) 

#define IDiaSymbol6_get_subTypeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_subTypeId(This,pRetVal) ) 

#define IDiaSymbol6_get_subType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_subType(This,pRetVal) ) 

#define IDiaSymbol6_get_numberOfModifiers(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfModifiers(This,pRetVal) ) 

#define IDiaSymbol6_get_numberOfRegisterIndices(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfRegisterIndices(This,pRetVal) ) 

#define IDiaSymbol6_get_isHLSLData(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isHLSLData(This,pRetVal) ) 

#define IDiaSymbol6_get_isPointerToDataMember(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPointerToDataMember(This,pRetVal) ) 

#define IDiaSymbol6_get_isPointerToMemberFunction(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPointerToMemberFunction(This,pRetVal) ) 

#define IDiaSymbol6_get_isSingleInheritance(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSingleInheritance(This,pRetVal) ) 

#define IDiaSymbol6_get_isMultipleInheritance(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isMultipleInheritance(This,pRetVal) ) 

#define IDiaSymbol6_get_isVirtualInheritance(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isVirtualInheritance(This,pRetVal) ) 

#define IDiaSymbol6_get_restrictedType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_restrictedType(This,pRetVal) ) 

#define IDiaSymbol6_get_isPointerBasedOnSymbolValue(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPointerBasedOnSymbolValue(This,pRetVal) ) 

#define IDiaSymbol6_get_baseSymbol(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseSymbol(This,pRetVal) ) 

#define IDiaSymbol6_get_baseSymbolId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseSymbolId(This,pRetVal) ) 

#define IDiaSymbol6_get_objectFileName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_objectFileName(This,pRetVal) ) 

#define IDiaSymbol6_get_isAcceleratorGroupSharedLocal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAcceleratorGroupSharedLocal(This,pRetVal) ) 

#define IDiaSymbol6_get_isAcceleratorPointerTagLiveRange(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAcceleratorPointerTagLiveRange(This,pRetVal) ) 

#define IDiaSymbol6_get_isAcceleratorStubFunction(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAcceleratorStubFunction(This,pRetVal) ) 

#define IDiaSymbol6_get_numberOfAcceleratorPointerTags(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfAcceleratorPointerTags(This,pRetVal) ) 

#define IDiaSymbol6_get_isSdl(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSdl(This,pRetVal) ) 

#define IDiaSymbol6_get_isWinRTPointer(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isWinRTPointer(This,pRetVal) ) 

#define IDiaSymbol6_get_isRefUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isRefUdt(This,pRetVal) ) 

#define IDiaSymbol6_get_isValueUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isValueUdt(This,pRetVal) ) 

#define IDiaSymbol6_get_isInterfaceUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isInterfaceUdt(This,pRetVal) ) 

#define IDiaSymbol6_findInlineFramesByAddr(This,isect,offset,ppResult)	\
    ( (This)->lpVtbl -> findInlineFramesByAddr(This,isect,offset,ppResult) ) 

#define IDiaSymbol6_findInlineFramesByRVA(This,rva,ppResult)	\
    ( (This)->lpVtbl -> findInlineFramesByRVA(This,rva,ppResult) ) 

#define IDiaSymbol6_findInlineFramesByVA(This,va,ppResult)	\
    ( (This)->lpVtbl -> findInlineFramesByVA(This,va,ppResult) ) 

#define IDiaSymbol6_findInlineeLines(This,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLines(This,ppResult) ) 

#define IDiaSymbol6_findInlineeLinesByAddr(This,isect,offset,length,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLinesByAddr(This,isect,offset,length,ppResult) ) 

#define IDiaSymbol6_findInlineeLinesByRVA(This,rva,length,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLinesByRVA(This,rva,length,ppResult) ) 

#define IDiaSymbol6_findInlineeLinesByVA(This,va,length,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLinesByVA(This,va,length,ppResult) ) 

#define IDiaSymbol6_findSymbolsForAcceleratorPointerTag(This,tagValue,ppResult)	\
    ( (This)->lpVtbl -> findSymbolsForAcceleratorPointerTag(This,tagValue,ppResult) ) 

#define IDiaSymbol6_findSymbolsByRVAForAcceleratorPointerTag(This,tagValue,rva,ppResult)	\
    ( (This)->lpVtbl -> findSymbolsByRVAForAcceleratorPointerTag(This,tagValue,rva,ppResult) ) 

#define IDiaSymbol6_get_acceleratorPointerTags(This,cnt,pcnt,pPointerTags)	\
    ( (This)->lpVtbl -> get_acceleratorPointerTags(This,cnt,pcnt,pPointerTags) ) 

#define IDiaSymbol6_getSrcLineOnTypeDefn(This,ppResult)	\
    ( (This)->lpVtbl -> getSrcLineOnTypeDefn(This,ppResult) ) 

#define IDiaSymbol6_get_isPGO(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPGO(This,pRetVal) ) 

#define IDiaSymbol6_get_hasValidPGOCounts(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasValidPGOCounts(This,pRetVal) ) 

#define IDiaSymbol6_get_isOptimizedForSpeed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isOptimizedForSpeed(This,pRetVal) ) 

#define IDiaSymbol6_get_PGOEntryCount(This,pRetVal)	\
    ( (This)->lpVtbl -> get_PGOEntryCount(This,pRetVal) ) 

#define IDiaSymbol6_get_PGOEdgeCount(This,pRetVal)	\
    ( (This)->lpVtbl -> get_PGOEdgeCount(This,pRetVal) ) 

#define IDiaSymbol6_get_PGODynamicInstructionCount(This,pRetVal)	\
    ( (This)->lpVtbl -> get_PGODynamicInstructionCount(This,pRetVal) ) 

#define IDiaSymbol6_get_staticSize(This,pRetVal)	\
    ( (This)->lpVtbl -> get_staticSize(This,pRetVal) ) 

#define IDiaSymbol6_get_finalLiveStaticSize(This,pRetVal)	\
    ( (This)->lpVtbl -> get_finalLiveStaticSize(This,pRetVal) ) 

#define IDiaSymbol6_get_phaseName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_phaseName(This,pRetVal) ) 

#define IDiaSymbol6_get_hasControlFlowCheck(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasControlFlowCheck(This,pRetVal) ) 

#define IDiaSymbol6_get_constantExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_constantExport(This,pRetVal) ) 

#define IDiaSymbol6_get_dataExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_dataExport(This,pRetVal) ) 

#define IDiaSymbol6_get_privateExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_privateExport(This,pRetVal) ) 

#define IDiaSymbol6_get_noNameExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noNameExport(This,pRetVal) ) 

#define IDiaSymbol6_get_exportHasExplicitlyAssignedOrdinal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exportHasExplicitlyAssignedOrdinal(This,pRetVal) ) 

#define IDiaSymbol6_get_exportIsForwarder(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exportIsForwarder(This,pRetVal) ) 

#define IDiaSymbol6_get_ordinal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_ordinal(This,pRetVal) ) 

#define IDiaSymbol6_get_frameSize(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frameSize(This,pRetVal) ) 

#define IDiaSymbol6_get_exceptionHandlerAddressSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerAddressSection(This,pRetVal) ) 

#define IDiaSymbol6_get_exceptionHandlerAddressOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerAddressOffset(This,pRetVal) ) 

#define IDiaSymbol6_get_exceptionHandlerRelativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerRelativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol6_get_exceptionHandlerVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol6_findInputAssemblyFile(This,ppResult)	\
    ( (This)->lpVtbl -> findInputAssemblyFile(This,ppResult) ) 

#define IDiaSymbol6_get_characteristics(This,pRetVal)	\
    ( (This)->lpVtbl -> get_characteristics(This,pRetVal) ) 

#define IDiaSymbol6_get_coffGroup(This,pRetVal)	\
    ( (This)->lpVtbl -> get_coffGroup(This,pRetVal) ) 

#define IDiaSymbol6_get_bindID(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bindID(This,pRetVal) ) 

#define IDiaSymbol6_get_bindSpace(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bindSpace(This,pRetVal) ) 

#define IDiaSymbol6_get_bindSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bindSlot(This,pRetVal) ) 


#define IDiaSymbol6_get_isObjCClass(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isObjCClass(This,pRetVal) ) 

#define IDiaSymbol6_get_isObjCCategory(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isObjCCategory(This,pRetVal) ) 

#define IDiaSymbol6_get_isObjCProtocol(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isObjCProtocol(This,pRetVal) ) 


#define IDiaSymbol6_get_inlinee(This,pRetVal)	\
    ( (This)->lpVtbl -> get_inlinee(This,pRetVal) ) 

#define IDiaSymbol6_get_inlineeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_inlineeId(This,pRetVal) ) 


#define IDiaSymbol6_get_noexcept(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noexcept(This,pRetVal) ) 


#define IDiaSymbol6_get_hasAbsoluteAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasAbsoluteAddress(This,pRetVal) ) 


#define IDiaSymbol6_get_isStaticMemberFunc(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isStaticMemberFunc(This,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol6_get_isStaticMemberFunc_Proxy( 
    IDiaSymbol6 * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol6_get_isStaticMemberFunc_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDiaSymbol6_INTERFACE_DEFINED__ */


#ifndef __IDiaSymbol7_INTERFACE_DEFINED__
#define __IDiaSymbol7_INTERFACE_DEFINED__

/* interface IDiaSymbol7 */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaSymbol7;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("64ce6cd5-7315-4328-86d6-10e303e010b4")
    IDiaSymbol7 : public IDiaSymbol6
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_isSignRet( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaSymbol7Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaSymbol7 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaSymbol7 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaSymbol7 * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_symIndexId )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_symTag )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_name )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lexicalParent )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_classParent )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_type )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_dataKind )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_locationType )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressSection )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressOffset )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_relativeVirtualAddress )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualAddress )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_registerId )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_offset )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_length )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_slot )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_volatileType )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_constType )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unalignedType )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_access )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_libraryName )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_platform )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_language )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_editAndContinueEnabled )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndMajor )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndMinor )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndBuild )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndMajor )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndMinor )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndBuild )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sourceFileName )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unused )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_thunkOrdinal )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_thisAdjust )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseOffset )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtual )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_intro )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_pure )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_callingConvention )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_value )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ VARIANT *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseType )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_token )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_timeStamp )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_guid )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ GUID *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_symbolsFileName )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_reference )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_count )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bitPosition )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_arrayIndexType )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_packed )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_constructor )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_overloadedOperator )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_nested )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasNestedTypes )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasAssignmentOperator )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasCastOperator )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_scoped )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseClass )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_indirectVirtualBaseClass )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBasePointerOffset )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualTableShape )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lexicalParentId )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_classParentId )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_typeId )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_arrayIndexTypeId )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualTableShapeId )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_code )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_function )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_managed )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_msil )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseDispIndex )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_undecoratedName )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_age )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_signature )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_compilerGenerated )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressTaken )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_rank )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lowerBound )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_upperBound )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lowerBoundId )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_upperBoundId )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_dataBytes )( 
            IDiaSymbol7 * This,
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData);
        
        HRESULT ( STDMETHODCALLTYPE *findChildren )( 
            IDiaSymbol7 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenEx )( 
            IDiaSymbol7 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenExByAddr )( 
            IDiaSymbol7 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenExByVA )( 
            IDiaSymbol7 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ ULONGLONG va,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenExByRVA )( 
            IDiaSymbol7 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetSection )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetOffset )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetRelativeVirtualAddress )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetVirtualAddress )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_machineType )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_oemId )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_oemSymbolId )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_types )( 
            IDiaSymbol7 * This,
            /* [in] */ DWORD cTypes,
            /* [out] */ DWORD *pcTypes,
            /* [size_is][size_is][out] */ IDiaSymbol **pTypes);
        
        HRESULT ( STDMETHODCALLTYPE *get_typeIds )( 
            IDiaSymbol7 * This,
            /* [in] */ DWORD cTypeIds,
            /* [out] */ DWORD *pcTypeIds,
            /* [size_is][out] */ DWORD *pdwTypeIds);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_objectPointerType )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_udtKind )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_undecoratedNameEx )( 
            IDiaSymbol7 * This,
            /* [in] */ DWORD undecorateOptions,
            /* [out] */ BSTR *name);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noReturn )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_customCallingConvention )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noInline )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_optimizedCodeDebugInfo )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_notReached )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_interruptReturn )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_farReturn )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isStatic )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasDebugInfo )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isLTCG )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isDataAligned )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasSecurityChecks )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_compilerName )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasAlloca )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasSetJump )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasLongJump )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasInlAsm )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasEH )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasSEH )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasEHa )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isNaked )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAggregated )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSplitted )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_container )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_inlSpec )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noStackOrdering )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseTableType )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasManagedCode )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isHotpatchable )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isCVTCIL )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isMSILNetmodule )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isCTypes )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isStripped )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndQFE )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndQFE )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_wasInlined )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_strictGSCheck )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isCxxReturnUdt )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isConstructorVirtualBase )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RValueReference )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unmodifiedType )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_framePointerPresent )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSafeBuffers )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_intrinsic )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sealed )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hfaFloat )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hfaDouble )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeStartAddressSection )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeStartAddressOffset )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeStartRelativeVirtualAddress )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_countLiveRanges )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeLength )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_offsetInUdt )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_paramBasePointerRegisterId )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_localBasePointerRegisterId )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isLocationControlFlowDependent )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_stride )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfRows )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfColumns )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isMatrixRowMajor )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_numericProperties )( 
            IDiaSymbol7 * This,
            /* [in] */ DWORD cnt,
            /* [out] */ DWORD *pcnt,
            /* [size_is][out] */ DWORD *pProperties);
        
        HRESULT ( STDMETHODCALLTYPE *get_modifierValues )( 
            IDiaSymbol7 * This,
            /* [in] */ DWORD cnt,
            /* [out] */ DWORD *pcnt,
            /* [size_is][out] */ WORD *pModifiers);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isReturnValue )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isOptimizedAway )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_builtInKind )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_registerType )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseDataSlot )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseDataOffset )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_textureSlot )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_samplerSlot )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_uavSlot )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sizeInUdt )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_memorySpaceKind )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unmodifiedTypeId )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_subTypeId )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_subType )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfModifiers )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfRegisterIndices )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isHLSLData )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPointerToDataMember )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPointerToMemberFunction )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSingleInheritance )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isMultipleInheritance )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isVirtualInheritance )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_restrictedType )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPointerBasedOnSymbolValue )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseSymbol )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseSymbolId )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_objectFileName )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAcceleratorGroupSharedLocal )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAcceleratorPointerTagLiveRange )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAcceleratorStubFunction )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfAcceleratorPointerTags )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSdl )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isWinRTPointer )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isRefUdt )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isValueUdt )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isInterfaceUdt )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineFramesByAddr )( 
            IDiaSymbol7 * This,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineFramesByRVA )( 
            IDiaSymbol7 * This,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineFramesByVA )( 
            IDiaSymbol7 * This,
            /* [in] */ ULONGLONG va,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLines )( 
            IDiaSymbol7 * This,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLinesByAddr )( 
            IDiaSymbol7 * This,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLinesByRVA )( 
            IDiaSymbol7 * This,
            /* [in] */ DWORD rva,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLinesByVA )( 
            IDiaSymbol7 * This,
            /* [in] */ ULONGLONG va,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findSymbolsForAcceleratorPointerTag )( 
            IDiaSymbol7 * This,
            /* [in] */ DWORD tagValue,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findSymbolsByRVAForAcceleratorPointerTag )( 
            IDiaSymbol7 * This,
            /* [in] */ DWORD tagValue,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *get_acceleratorPointerTags )( 
            IDiaSymbol7 * This,
            /* [in] */ DWORD cnt,
            /* [out] */ DWORD *pcnt,
            /* [size_is][out] */ DWORD *pPointerTags);
        
        HRESULT ( STDMETHODCALLTYPE *getSrcLineOnTypeDefn )( 
            IDiaSymbol7 * This,
            /* [out] */ IDiaLineNumber **ppResult);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPGO )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasValidPGOCounts )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isOptimizedForSpeed )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PGOEntryCount )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PGOEdgeCount )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PGODynamicInstructionCount )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_staticSize )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_finalLiveStaticSize )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_phaseName )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasControlFlowCheck )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_constantExport )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_dataExport )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_privateExport )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noNameExport )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exportHasExplicitlyAssignedOrdinal )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exportIsForwarder )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ordinal )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frameSize )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerAddressSection )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerAddressOffset )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerRelativeVirtualAddress )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerVirtualAddress )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *findInputAssemblyFile )( 
            IDiaSymbol7 * This,
            /* [out] */ IDiaInputAssemblyFile **ppResult);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_characteristics )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_coffGroup )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bindID )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bindSpace )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bindSlot )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isObjCClass )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isObjCCategory )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isObjCProtocol )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_inlinee )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_inlineeId )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noexcept )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasAbsoluteAddress )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isStaticMemberFunc )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSignRet )( 
            IDiaSymbol7 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        END_INTERFACE
    } IDiaSymbol7Vtbl;

    interface IDiaSymbol7
    {
        CONST_VTBL struct IDiaSymbol7Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaSymbol7_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaSymbol7_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaSymbol7_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaSymbol7_get_symIndexId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_symIndexId(This,pRetVal) ) 

#define IDiaSymbol7_get_symTag(This,pRetVal)	\
    ( (This)->lpVtbl -> get_symTag(This,pRetVal) ) 

#define IDiaSymbol7_get_name(This,pRetVal)	\
    ( (This)->lpVtbl -> get_name(This,pRetVal) ) 

#define IDiaSymbol7_get_lexicalParent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lexicalParent(This,pRetVal) ) 

#define IDiaSymbol7_get_classParent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_classParent(This,pRetVal) ) 

#define IDiaSymbol7_get_type(This,pRetVal)	\
    ( (This)->lpVtbl -> get_type(This,pRetVal) ) 

#define IDiaSymbol7_get_dataKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_dataKind(This,pRetVal) ) 

#define IDiaSymbol7_get_locationType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_locationType(This,pRetVal) ) 

#define IDiaSymbol7_get_addressSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressSection(This,pRetVal) ) 

#define IDiaSymbol7_get_addressOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressOffset(This,pRetVal) ) 

#define IDiaSymbol7_get_relativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_relativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol7_get_virtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualAddress(This,pRetVal) ) 

#define IDiaSymbol7_get_registerId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_registerId(This,pRetVal) ) 

#define IDiaSymbol7_get_offset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_offset(This,pRetVal) ) 

#define IDiaSymbol7_get_length(This,pRetVal)	\
    ( (This)->lpVtbl -> get_length(This,pRetVal) ) 

#define IDiaSymbol7_get_slot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_slot(This,pRetVal) ) 

#define IDiaSymbol7_get_volatileType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_volatileType(This,pRetVal) ) 

#define IDiaSymbol7_get_constType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_constType(This,pRetVal) ) 

#define IDiaSymbol7_get_unalignedType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unalignedType(This,pRetVal) ) 

#define IDiaSymbol7_get_access(This,pRetVal)	\
    ( (This)->lpVtbl -> get_access(This,pRetVal) ) 

#define IDiaSymbol7_get_libraryName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_libraryName(This,pRetVal) ) 

#define IDiaSymbol7_get_platform(This,pRetVal)	\
    ( (This)->lpVtbl -> get_platform(This,pRetVal) ) 

#define IDiaSymbol7_get_language(This,pRetVal)	\
    ( (This)->lpVtbl -> get_language(This,pRetVal) ) 

#define IDiaSymbol7_get_editAndContinueEnabled(This,pRetVal)	\
    ( (This)->lpVtbl -> get_editAndContinueEnabled(This,pRetVal) ) 

#define IDiaSymbol7_get_frontEndMajor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndMajor(This,pRetVal) ) 

#define IDiaSymbol7_get_frontEndMinor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndMinor(This,pRetVal) ) 

#define IDiaSymbol7_get_frontEndBuild(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndBuild(This,pRetVal) ) 

#define IDiaSymbol7_get_backEndMajor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndMajor(This,pRetVal) ) 

#define IDiaSymbol7_get_backEndMinor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndMinor(This,pRetVal) ) 

#define IDiaSymbol7_get_backEndBuild(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndBuild(This,pRetVal) ) 

#define IDiaSymbol7_get_sourceFileName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_sourceFileName(This,pRetVal) ) 

#define IDiaSymbol7_get_unused(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unused(This,pRetVal) ) 

#define IDiaSymbol7_get_thunkOrdinal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_thunkOrdinal(This,pRetVal) ) 

#define IDiaSymbol7_get_thisAdjust(This,pRetVal)	\
    ( (This)->lpVtbl -> get_thisAdjust(This,pRetVal) ) 

#define IDiaSymbol7_get_virtualBaseOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseOffset(This,pRetVal) ) 

#define IDiaSymbol7_get_virtual(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtual(This,pRetVal) ) 

#define IDiaSymbol7_get_intro(This,pRetVal)	\
    ( (This)->lpVtbl -> get_intro(This,pRetVal) ) 

#define IDiaSymbol7_get_pure(This,pRetVal)	\
    ( (This)->lpVtbl -> get_pure(This,pRetVal) ) 

#define IDiaSymbol7_get_callingConvention(This,pRetVal)	\
    ( (This)->lpVtbl -> get_callingConvention(This,pRetVal) ) 

#define IDiaSymbol7_get_value(This,pRetVal)	\
    ( (This)->lpVtbl -> get_value(This,pRetVal) ) 

#define IDiaSymbol7_get_baseType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseType(This,pRetVal) ) 

#define IDiaSymbol7_get_token(This,pRetVal)	\
    ( (This)->lpVtbl -> get_token(This,pRetVal) ) 

#define IDiaSymbol7_get_timeStamp(This,pRetVal)	\
    ( (This)->lpVtbl -> get_timeStamp(This,pRetVal) ) 

#define IDiaSymbol7_get_guid(This,pRetVal)	\
    ( (This)->lpVtbl -> get_guid(This,pRetVal) ) 

#define IDiaSymbol7_get_symbolsFileName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_symbolsFileName(This,pRetVal) ) 

#define IDiaSymbol7_get_reference(This,pRetVal)	\
    ( (This)->lpVtbl -> get_reference(This,pRetVal) ) 

#define IDiaSymbol7_get_count(This,pRetVal)	\
    ( (This)->lpVtbl -> get_count(This,pRetVal) ) 

#define IDiaSymbol7_get_bitPosition(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bitPosition(This,pRetVal) ) 

#define IDiaSymbol7_get_arrayIndexType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_arrayIndexType(This,pRetVal) ) 

#define IDiaSymbol7_get_packed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_packed(This,pRetVal) ) 

#define IDiaSymbol7_get_constructor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_constructor(This,pRetVal) ) 

#define IDiaSymbol7_get_overloadedOperator(This,pRetVal)	\
    ( (This)->lpVtbl -> get_overloadedOperator(This,pRetVal) ) 

#define IDiaSymbol7_get_nested(This,pRetVal)	\
    ( (This)->lpVtbl -> get_nested(This,pRetVal) ) 

#define IDiaSymbol7_get_hasNestedTypes(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasNestedTypes(This,pRetVal) ) 

#define IDiaSymbol7_get_hasAssignmentOperator(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasAssignmentOperator(This,pRetVal) ) 

#define IDiaSymbol7_get_hasCastOperator(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasCastOperator(This,pRetVal) ) 

#define IDiaSymbol7_get_scoped(This,pRetVal)	\
    ( (This)->lpVtbl -> get_scoped(This,pRetVal) ) 

#define IDiaSymbol7_get_virtualBaseClass(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseClass(This,pRetVal) ) 

#define IDiaSymbol7_get_indirectVirtualBaseClass(This,pRetVal)	\
    ( (This)->lpVtbl -> get_indirectVirtualBaseClass(This,pRetVal) ) 

#define IDiaSymbol7_get_virtualBasePointerOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBasePointerOffset(This,pRetVal) ) 

#define IDiaSymbol7_get_virtualTableShape(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualTableShape(This,pRetVal) ) 

#define IDiaSymbol7_get_lexicalParentId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lexicalParentId(This,pRetVal) ) 

#define IDiaSymbol7_get_classParentId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_classParentId(This,pRetVal) ) 

#define IDiaSymbol7_get_typeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_typeId(This,pRetVal) ) 

#define IDiaSymbol7_get_arrayIndexTypeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_arrayIndexTypeId(This,pRetVal) ) 

#define IDiaSymbol7_get_virtualTableShapeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualTableShapeId(This,pRetVal) ) 

#define IDiaSymbol7_get_code(This,pRetVal)	\
    ( (This)->lpVtbl -> get_code(This,pRetVal) ) 

#define IDiaSymbol7_get_function(This,pRetVal)	\
    ( (This)->lpVtbl -> get_function(This,pRetVal) ) 

#define IDiaSymbol7_get_managed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_managed(This,pRetVal) ) 

#define IDiaSymbol7_get_msil(This,pRetVal)	\
    ( (This)->lpVtbl -> get_msil(This,pRetVal) ) 

#define IDiaSymbol7_get_virtualBaseDispIndex(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseDispIndex(This,pRetVal) ) 

#define IDiaSymbol7_get_undecoratedName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_undecoratedName(This,pRetVal) ) 

#define IDiaSymbol7_get_age(This,pRetVal)	\
    ( (This)->lpVtbl -> get_age(This,pRetVal) ) 

#define IDiaSymbol7_get_signature(This,pRetVal)	\
    ( (This)->lpVtbl -> get_signature(This,pRetVal) ) 

#define IDiaSymbol7_get_compilerGenerated(This,pRetVal)	\
    ( (This)->lpVtbl -> get_compilerGenerated(This,pRetVal) ) 

#define IDiaSymbol7_get_addressTaken(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressTaken(This,pRetVal) ) 

#define IDiaSymbol7_get_rank(This,pRetVal)	\
    ( (This)->lpVtbl -> get_rank(This,pRetVal) ) 

#define IDiaSymbol7_get_lowerBound(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lowerBound(This,pRetVal) ) 

#define IDiaSymbol7_get_upperBound(This,pRetVal)	\
    ( (This)->lpVtbl -> get_upperBound(This,pRetVal) ) 

#define IDiaSymbol7_get_lowerBoundId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lowerBoundId(This,pRetVal) ) 

#define IDiaSymbol7_get_upperBoundId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_upperBoundId(This,pRetVal) ) 

#define IDiaSymbol7_get_dataBytes(This,cbData,pcbData,pbData)	\
    ( (This)->lpVtbl -> get_dataBytes(This,cbData,pcbData,pbData) ) 

#define IDiaSymbol7_findChildren(This,symtag,name,compareFlags,ppResult)	\
    ( (This)->lpVtbl -> findChildren(This,symtag,name,compareFlags,ppResult) ) 

#define IDiaSymbol7_findChildrenEx(This,symtag,name,compareFlags,ppResult)	\
    ( (This)->lpVtbl -> findChildrenEx(This,symtag,name,compareFlags,ppResult) ) 

#define IDiaSymbol7_findChildrenExByAddr(This,symtag,name,compareFlags,isect,offset,ppResult)	\
    ( (This)->lpVtbl -> findChildrenExByAddr(This,symtag,name,compareFlags,isect,offset,ppResult) ) 

#define IDiaSymbol7_findChildrenExByVA(This,symtag,name,compareFlags,va,ppResult)	\
    ( (This)->lpVtbl -> findChildrenExByVA(This,symtag,name,compareFlags,va,ppResult) ) 

#define IDiaSymbol7_findChildrenExByRVA(This,symtag,name,compareFlags,rva,ppResult)	\
    ( (This)->lpVtbl -> findChildrenExByRVA(This,symtag,name,compareFlags,rva,ppResult) ) 

#define IDiaSymbol7_get_targetSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetSection(This,pRetVal) ) 

#define IDiaSymbol7_get_targetOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetOffset(This,pRetVal) ) 

#define IDiaSymbol7_get_targetRelativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetRelativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol7_get_targetVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol7_get_machineType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_machineType(This,pRetVal) ) 

#define IDiaSymbol7_get_oemId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_oemId(This,pRetVal) ) 

#define IDiaSymbol7_get_oemSymbolId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_oemSymbolId(This,pRetVal) ) 

#define IDiaSymbol7_get_types(This,cTypes,pcTypes,pTypes)	\
    ( (This)->lpVtbl -> get_types(This,cTypes,pcTypes,pTypes) ) 

#define IDiaSymbol7_get_typeIds(This,cTypeIds,pcTypeIds,pdwTypeIds)	\
    ( (This)->lpVtbl -> get_typeIds(This,cTypeIds,pcTypeIds,pdwTypeIds) ) 

#define IDiaSymbol7_get_objectPointerType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_objectPointerType(This,pRetVal) ) 

#define IDiaSymbol7_get_udtKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_udtKind(This,pRetVal) ) 

#define IDiaSymbol7_get_undecoratedNameEx(This,undecorateOptions,name)	\
    ( (This)->lpVtbl -> get_undecoratedNameEx(This,undecorateOptions,name) ) 

#define IDiaSymbol7_get_noReturn(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noReturn(This,pRetVal) ) 

#define IDiaSymbol7_get_customCallingConvention(This,pRetVal)	\
    ( (This)->lpVtbl -> get_customCallingConvention(This,pRetVal) ) 

#define IDiaSymbol7_get_noInline(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noInline(This,pRetVal) ) 

#define IDiaSymbol7_get_optimizedCodeDebugInfo(This,pRetVal)	\
    ( (This)->lpVtbl -> get_optimizedCodeDebugInfo(This,pRetVal) ) 

#define IDiaSymbol7_get_notReached(This,pRetVal)	\
    ( (This)->lpVtbl -> get_notReached(This,pRetVal) ) 

#define IDiaSymbol7_get_interruptReturn(This,pRetVal)	\
    ( (This)->lpVtbl -> get_interruptReturn(This,pRetVal) ) 

#define IDiaSymbol7_get_farReturn(This,pRetVal)	\
    ( (This)->lpVtbl -> get_farReturn(This,pRetVal) ) 

#define IDiaSymbol7_get_isStatic(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isStatic(This,pRetVal) ) 

#define IDiaSymbol7_get_hasDebugInfo(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasDebugInfo(This,pRetVal) ) 

#define IDiaSymbol7_get_isLTCG(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isLTCG(This,pRetVal) ) 

#define IDiaSymbol7_get_isDataAligned(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isDataAligned(This,pRetVal) ) 

#define IDiaSymbol7_get_hasSecurityChecks(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasSecurityChecks(This,pRetVal) ) 

#define IDiaSymbol7_get_compilerName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_compilerName(This,pRetVal) ) 

#define IDiaSymbol7_get_hasAlloca(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasAlloca(This,pRetVal) ) 

#define IDiaSymbol7_get_hasSetJump(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasSetJump(This,pRetVal) ) 

#define IDiaSymbol7_get_hasLongJump(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasLongJump(This,pRetVal) ) 

#define IDiaSymbol7_get_hasInlAsm(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasInlAsm(This,pRetVal) ) 

#define IDiaSymbol7_get_hasEH(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasEH(This,pRetVal) ) 

#define IDiaSymbol7_get_hasSEH(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasSEH(This,pRetVal) ) 

#define IDiaSymbol7_get_hasEHa(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasEHa(This,pRetVal) ) 

#define IDiaSymbol7_get_isNaked(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isNaked(This,pRetVal) ) 

#define IDiaSymbol7_get_isAggregated(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAggregated(This,pRetVal) ) 

#define IDiaSymbol7_get_isSplitted(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSplitted(This,pRetVal) ) 

#define IDiaSymbol7_get_container(This,pRetVal)	\
    ( (This)->lpVtbl -> get_container(This,pRetVal) ) 

#define IDiaSymbol7_get_inlSpec(This,pRetVal)	\
    ( (This)->lpVtbl -> get_inlSpec(This,pRetVal) ) 

#define IDiaSymbol7_get_noStackOrdering(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noStackOrdering(This,pRetVal) ) 

#define IDiaSymbol7_get_virtualBaseTableType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseTableType(This,pRetVal) ) 

#define IDiaSymbol7_get_hasManagedCode(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasManagedCode(This,pRetVal) ) 

#define IDiaSymbol7_get_isHotpatchable(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isHotpatchable(This,pRetVal) ) 

#define IDiaSymbol7_get_isCVTCIL(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isCVTCIL(This,pRetVal) ) 

#define IDiaSymbol7_get_isMSILNetmodule(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isMSILNetmodule(This,pRetVal) ) 

#define IDiaSymbol7_get_isCTypes(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isCTypes(This,pRetVal) ) 

#define IDiaSymbol7_get_isStripped(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isStripped(This,pRetVal) ) 

#define IDiaSymbol7_get_frontEndQFE(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndQFE(This,pRetVal) ) 

#define IDiaSymbol7_get_backEndQFE(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndQFE(This,pRetVal) ) 

#define IDiaSymbol7_get_wasInlined(This,pRetVal)	\
    ( (This)->lpVtbl -> get_wasInlined(This,pRetVal) ) 

#define IDiaSymbol7_get_strictGSCheck(This,pRetVal)	\
    ( (This)->lpVtbl -> get_strictGSCheck(This,pRetVal) ) 

#define IDiaSymbol7_get_isCxxReturnUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isCxxReturnUdt(This,pRetVal) ) 

#define IDiaSymbol7_get_isConstructorVirtualBase(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isConstructorVirtualBase(This,pRetVal) ) 

#define IDiaSymbol7_get_RValueReference(This,pRetVal)	\
    ( (This)->lpVtbl -> get_RValueReference(This,pRetVal) ) 

#define IDiaSymbol7_get_unmodifiedType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unmodifiedType(This,pRetVal) ) 

#define IDiaSymbol7_get_framePointerPresent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_framePointerPresent(This,pRetVal) ) 

#define IDiaSymbol7_get_isSafeBuffers(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSafeBuffers(This,pRetVal) ) 

#define IDiaSymbol7_get_intrinsic(This,pRetVal)	\
    ( (This)->lpVtbl -> get_intrinsic(This,pRetVal) ) 

#define IDiaSymbol7_get_sealed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_sealed(This,pRetVal) ) 

#define IDiaSymbol7_get_hfaFloat(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hfaFloat(This,pRetVal) ) 

#define IDiaSymbol7_get_hfaDouble(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hfaDouble(This,pRetVal) ) 

#define IDiaSymbol7_get_liveRangeStartAddressSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeStartAddressSection(This,pRetVal) ) 

#define IDiaSymbol7_get_liveRangeStartAddressOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeStartAddressOffset(This,pRetVal) ) 

#define IDiaSymbol7_get_liveRangeStartRelativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeStartRelativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol7_get_countLiveRanges(This,pRetVal)	\
    ( (This)->lpVtbl -> get_countLiveRanges(This,pRetVal) ) 

#define IDiaSymbol7_get_liveRangeLength(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeLength(This,pRetVal) ) 

#define IDiaSymbol7_get_offsetInUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_offsetInUdt(This,pRetVal) ) 

#define IDiaSymbol7_get_paramBasePointerRegisterId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_paramBasePointerRegisterId(This,pRetVal) ) 

#define IDiaSymbol7_get_localBasePointerRegisterId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_localBasePointerRegisterId(This,pRetVal) ) 

#define IDiaSymbol7_get_isLocationControlFlowDependent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isLocationControlFlowDependent(This,pRetVal) ) 

#define IDiaSymbol7_get_stride(This,pRetVal)	\
    ( (This)->lpVtbl -> get_stride(This,pRetVal) ) 

#define IDiaSymbol7_get_numberOfRows(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfRows(This,pRetVal) ) 

#define IDiaSymbol7_get_numberOfColumns(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfColumns(This,pRetVal) ) 

#define IDiaSymbol7_get_isMatrixRowMajor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isMatrixRowMajor(This,pRetVal) ) 

#define IDiaSymbol7_get_numericProperties(This,cnt,pcnt,pProperties)	\
    ( (This)->lpVtbl -> get_numericProperties(This,cnt,pcnt,pProperties) ) 

#define IDiaSymbol7_get_modifierValues(This,cnt,pcnt,pModifiers)	\
    ( (This)->lpVtbl -> get_modifierValues(This,cnt,pcnt,pModifiers) ) 

#define IDiaSymbol7_get_isReturnValue(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isReturnValue(This,pRetVal) ) 

#define IDiaSymbol7_get_isOptimizedAway(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isOptimizedAway(This,pRetVal) ) 

#define IDiaSymbol7_get_builtInKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_builtInKind(This,pRetVal) ) 

#define IDiaSymbol7_get_registerType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_registerType(This,pRetVal) ) 

#define IDiaSymbol7_get_baseDataSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseDataSlot(This,pRetVal) ) 

#define IDiaSymbol7_get_baseDataOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseDataOffset(This,pRetVal) ) 

#define IDiaSymbol7_get_textureSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_textureSlot(This,pRetVal) ) 

#define IDiaSymbol7_get_samplerSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_samplerSlot(This,pRetVal) ) 

#define IDiaSymbol7_get_uavSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_uavSlot(This,pRetVal) ) 

#define IDiaSymbol7_get_sizeInUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_sizeInUdt(This,pRetVal) ) 

#define IDiaSymbol7_get_memorySpaceKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_memorySpaceKind(This,pRetVal) ) 

#define IDiaSymbol7_get_unmodifiedTypeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unmodifiedTypeId(This,pRetVal) ) 

#define IDiaSymbol7_get_subTypeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_subTypeId(This,pRetVal) ) 

#define IDiaSymbol7_get_subType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_subType(This,pRetVal) ) 

#define IDiaSymbol7_get_numberOfModifiers(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfModifiers(This,pRetVal) ) 

#define IDiaSymbol7_get_numberOfRegisterIndices(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfRegisterIndices(This,pRetVal) ) 

#define IDiaSymbol7_get_isHLSLData(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isHLSLData(This,pRetVal) ) 

#define IDiaSymbol7_get_isPointerToDataMember(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPointerToDataMember(This,pRetVal) ) 

#define IDiaSymbol7_get_isPointerToMemberFunction(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPointerToMemberFunction(This,pRetVal) ) 

#define IDiaSymbol7_get_isSingleInheritance(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSingleInheritance(This,pRetVal) ) 

#define IDiaSymbol7_get_isMultipleInheritance(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isMultipleInheritance(This,pRetVal) ) 

#define IDiaSymbol7_get_isVirtualInheritance(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isVirtualInheritance(This,pRetVal) ) 

#define IDiaSymbol7_get_restrictedType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_restrictedType(This,pRetVal) ) 

#define IDiaSymbol7_get_isPointerBasedOnSymbolValue(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPointerBasedOnSymbolValue(This,pRetVal) ) 

#define IDiaSymbol7_get_baseSymbol(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseSymbol(This,pRetVal) ) 

#define IDiaSymbol7_get_baseSymbolId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseSymbolId(This,pRetVal) ) 

#define IDiaSymbol7_get_objectFileName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_objectFileName(This,pRetVal) ) 

#define IDiaSymbol7_get_isAcceleratorGroupSharedLocal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAcceleratorGroupSharedLocal(This,pRetVal) ) 

#define IDiaSymbol7_get_isAcceleratorPointerTagLiveRange(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAcceleratorPointerTagLiveRange(This,pRetVal) ) 

#define IDiaSymbol7_get_isAcceleratorStubFunction(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAcceleratorStubFunction(This,pRetVal) ) 

#define IDiaSymbol7_get_numberOfAcceleratorPointerTags(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfAcceleratorPointerTags(This,pRetVal) ) 

#define IDiaSymbol7_get_isSdl(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSdl(This,pRetVal) ) 

#define IDiaSymbol7_get_isWinRTPointer(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isWinRTPointer(This,pRetVal) ) 

#define IDiaSymbol7_get_isRefUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isRefUdt(This,pRetVal) ) 

#define IDiaSymbol7_get_isValueUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isValueUdt(This,pRetVal) ) 

#define IDiaSymbol7_get_isInterfaceUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isInterfaceUdt(This,pRetVal) ) 

#define IDiaSymbol7_findInlineFramesByAddr(This,isect,offset,ppResult)	\
    ( (This)->lpVtbl -> findInlineFramesByAddr(This,isect,offset,ppResult) ) 

#define IDiaSymbol7_findInlineFramesByRVA(This,rva,ppResult)	\
    ( (This)->lpVtbl -> findInlineFramesByRVA(This,rva,ppResult) ) 

#define IDiaSymbol7_findInlineFramesByVA(This,va,ppResult)	\
    ( (This)->lpVtbl -> findInlineFramesByVA(This,va,ppResult) ) 

#define IDiaSymbol7_findInlineeLines(This,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLines(This,ppResult) ) 

#define IDiaSymbol7_findInlineeLinesByAddr(This,isect,offset,length,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLinesByAddr(This,isect,offset,length,ppResult) ) 

#define IDiaSymbol7_findInlineeLinesByRVA(This,rva,length,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLinesByRVA(This,rva,length,ppResult) ) 

#define IDiaSymbol7_findInlineeLinesByVA(This,va,length,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLinesByVA(This,va,length,ppResult) ) 

#define IDiaSymbol7_findSymbolsForAcceleratorPointerTag(This,tagValue,ppResult)	\
    ( (This)->lpVtbl -> findSymbolsForAcceleratorPointerTag(This,tagValue,ppResult) ) 

#define IDiaSymbol7_findSymbolsByRVAForAcceleratorPointerTag(This,tagValue,rva,ppResult)	\
    ( (This)->lpVtbl -> findSymbolsByRVAForAcceleratorPointerTag(This,tagValue,rva,ppResult) ) 

#define IDiaSymbol7_get_acceleratorPointerTags(This,cnt,pcnt,pPointerTags)	\
    ( (This)->lpVtbl -> get_acceleratorPointerTags(This,cnt,pcnt,pPointerTags) ) 

#define IDiaSymbol7_getSrcLineOnTypeDefn(This,ppResult)	\
    ( (This)->lpVtbl -> getSrcLineOnTypeDefn(This,ppResult) ) 

#define IDiaSymbol7_get_isPGO(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPGO(This,pRetVal) ) 

#define IDiaSymbol7_get_hasValidPGOCounts(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasValidPGOCounts(This,pRetVal) ) 

#define IDiaSymbol7_get_isOptimizedForSpeed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isOptimizedForSpeed(This,pRetVal) ) 

#define IDiaSymbol7_get_PGOEntryCount(This,pRetVal)	\
    ( (This)->lpVtbl -> get_PGOEntryCount(This,pRetVal) ) 

#define IDiaSymbol7_get_PGOEdgeCount(This,pRetVal)	\
    ( (This)->lpVtbl -> get_PGOEdgeCount(This,pRetVal) ) 

#define IDiaSymbol7_get_PGODynamicInstructionCount(This,pRetVal)	\
    ( (This)->lpVtbl -> get_PGODynamicInstructionCount(This,pRetVal) ) 

#define IDiaSymbol7_get_staticSize(This,pRetVal)	\
    ( (This)->lpVtbl -> get_staticSize(This,pRetVal) ) 

#define IDiaSymbol7_get_finalLiveStaticSize(This,pRetVal)	\
    ( (This)->lpVtbl -> get_finalLiveStaticSize(This,pRetVal) ) 

#define IDiaSymbol7_get_phaseName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_phaseName(This,pRetVal) ) 

#define IDiaSymbol7_get_hasControlFlowCheck(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasControlFlowCheck(This,pRetVal) ) 

#define IDiaSymbol7_get_constantExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_constantExport(This,pRetVal) ) 

#define IDiaSymbol7_get_dataExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_dataExport(This,pRetVal) ) 

#define IDiaSymbol7_get_privateExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_privateExport(This,pRetVal) ) 

#define IDiaSymbol7_get_noNameExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noNameExport(This,pRetVal) ) 

#define IDiaSymbol7_get_exportHasExplicitlyAssignedOrdinal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exportHasExplicitlyAssignedOrdinal(This,pRetVal) ) 

#define IDiaSymbol7_get_exportIsForwarder(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exportIsForwarder(This,pRetVal) ) 

#define IDiaSymbol7_get_ordinal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_ordinal(This,pRetVal) ) 

#define IDiaSymbol7_get_frameSize(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frameSize(This,pRetVal) ) 

#define IDiaSymbol7_get_exceptionHandlerAddressSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerAddressSection(This,pRetVal) ) 

#define IDiaSymbol7_get_exceptionHandlerAddressOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerAddressOffset(This,pRetVal) ) 

#define IDiaSymbol7_get_exceptionHandlerRelativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerRelativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol7_get_exceptionHandlerVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol7_findInputAssemblyFile(This,ppResult)	\
    ( (This)->lpVtbl -> findInputAssemblyFile(This,ppResult) ) 

#define IDiaSymbol7_get_characteristics(This,pRetVal)	\
    ( (This)->lpVtbl -> get_characteristics(This,pRetVal) ) 

#define IDiaSymbol7_get_coffGroup(This,pRetVal)	\
    ( (This)->lpVtbl -> get_coffGroup(This,pRetVal) ) 

#define IDiaSymbol7_get_bindID(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bindID(This,pRetVal) ) 

#define IDiaSymbol7_get_bindSpace(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bindSpace(This,pRetVal) ) 

#define IDiaSymbol7_get_bindSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bindSlot(This,pRetVal) ) 


#define IDiaSymbol7_get_isObjCClass(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isObjCClass(This,pRetVal) ) 

#define IDiaSymbol7_get_isObjCCategory(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isObjCCategory(This,pRetVal) ) 

#define IDiaSymbol7_get_isObjCProtocol(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isObjCProtocol(This,pRetVal) ) 


#define IDiaSymbol7_get_inlinee(This,pRetVal)	\
    ( (This)->lpVtbl -> get_inlinee(This,pRetVal) ) 

#define IDiaSymbol7_get_inlineeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_inlineeId(This,pRetVal) ) 


#define IDiaSymbol7_get_noexcept(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noexcept(This,pRetVal) ) 


#define IDiaSymbol7_get_hasAbsoluteAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasAbsoluteAddress(This,pRetVal) ) 


#define IDiaSymbol7_get_isStaticMemberFunc(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isStaticMemberFunc(This,pRetVal) ) 


#define IDiaSymbol7_get_isSignRet(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSignRet(This,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol7_get_isSignRet_Proxy( 
    IDiaSymbol7 * This,
    /* [retval][out] */ BOOL *pRetVal);


void __RPC_STUB IDiaSymbol7_get_isSignRet_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDiaSymbol7_INTERFACE_DEFINED__ */


#ifndef __IDiaSymbol8_INTERFACE_DEFINED__
#define __IDiaSymbol8_INTERFACE_DEFINED__

/* interface IDiaSymbol8 */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaSymbol8;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7f2e041f-1294-41bd-b83a-e715972d2ce3")
    IDiaSymbol8 : public IDiaSymbol7
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_coroutineKind( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_associatedSymbolKind( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_associatedSymbolSection( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_associatedSymbolOffset( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_associatedSymbolRva( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_associatedSymbolAddr( 
            /* [retval][out] */ ULONGLONG *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaSymbol8Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaSymbol8 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaSymbol8 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaSymbol8 * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_symIndexId )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_symTag )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_name )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lexicalParent )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_classParent )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_type )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_dataKind )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_locationType )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressSection )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressOffset )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_relativeVirtualAddress )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualAddress )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_registerId )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_offset )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_length )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_slot )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_volatileType )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_constType )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unalignedType )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_access )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_libraryName )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_platform )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_language )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_editAndContinueEnabled )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndMajor )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndMinor )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndBuild )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndMajor )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndMinor )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndBuild )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sourceFileName )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unused )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_thunkOrdinal )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_thisAdjust )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseOffset )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtual )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_intro )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_pure )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_callingConvention )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_value )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ VARIANT *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseType )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_token )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_timeStamp )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_guid )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ GUID *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_symbolsFileName )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_reference )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_count )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bitPosition )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_arrayIndexType )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_packed )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_constructor )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_overloadedOperator )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_nested )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasNestedTypes )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasAssignmentOperator )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasCastOperator )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_scoped )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseClass )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_indirectVirtualBaseClass )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBasePointerOffset )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualTableShape )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lexicalParentId )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_classParentId )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_typeId )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_arrayIndexTypeId )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualTableShapeId )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_code )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_function )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_managed )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_msil )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseDispIndex )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_undecoratedName )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_age )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_signature )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_compilerGenerated )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressTaken )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_rank )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lowerBound )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_upperBound )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lowerBoundId )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_upperBoundId )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_dataBytes )( 
            IDiaSymbol8 * This,
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData);
        
        HRESULT ( STDMETHODCALLTYPE *findChildren )( 
            IDiaSymbol8 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenEx )( 
            IDiaSymbol8 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenExByAddr )( 
            IDiaSymbol8 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenExByVA )( 
            IDiaSymbol8 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ ULONGLONG va,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findChildrenExByRVA )( 
            IDiaSymbol8 * This,
            /* [in] */ enum SymTagEnum symtag,
            /* [in] */ LPCOLESTR name,
            /* [in] */ DWORD compareFlags,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetSection )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetOffset )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetRelativeVirtualAddress )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_targetVirtualAddress )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_machineType )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_oemId )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_oemSymbolId )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_types )( 
            IDiaSymbol8 * This,
            /* [in] */ DWORD cTypes,
            /* [out] */ DWORD *pcTypes,
            /* [size_is][size_is][out] */ IDiaSymbol **pTypes);
        
        HRESULT ( STDMETHODCALLTYPE *get_typeIds )( 
            IDiaSymbol8 * This,
            /* [in] */ DWORD cTypeIds,
            /* [out] */ DWORD *pcTypeIds,
            /* [size_is][out] */ DWORD *pdwTypeIds);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_objectPointerType )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_udtKind )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_undecoratedNameEx )( 
            IDiaSymbol8 * This,
            /* [in] */ DWORD undecorateOptions,
            /* [out] */ BSTR *name);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noReturn )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_customCallingConvention )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noInline )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_optimizedCodeDebugInfo )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_notReached )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_interruptReturn )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_farReturn )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isStatic )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasDebugInfo )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isLTCG )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isDataAligned )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasSecurityChecks )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_compilerName )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasAlloca )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasSetJump )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasLongJump )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasInlAsm )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasEH )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasSEH )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasEHa )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isNaked )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAggregated )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSplitted )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_container )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_inlSpec )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noStackOrdering )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualBaseTableType )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasManagedCode )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isHotpatchable )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isCVTCIL )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isMSILNetmodule )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isCTypes )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isStripped )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frontEndQFE )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_backEndQFE )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_wasInlined )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_strictGSCheck )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isCxxReturnUdt )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isConstructorVirtualBase )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RValueReference )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unmodifiedType )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_framePointerPresent )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSafeBuffers )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_intrinsic )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sealed )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hfaFloat )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hfaDouble )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeStartAddressSection )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeStartAddressOffset )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeStartRelativeVirtualAddress )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_countLiveRanges )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_liveRangeLength )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_offsetInUdt )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_paramBasePointerRegisterId )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_localBasePointerRegisterId )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isLocationControlFlowDependent )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_stride )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfRows )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfColumns )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isMatrixRowMajor )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_numericProperties )( 
            IDiaSymbol8 * This,
            /* [in] */ DWORD cnt,
            /* [out] */ DWORD *pcnt,
            /* [size_is][out] */ DWORD *pProperties);
        
        HRESULT ( STDMETHODCALLTYPE *get_modifierValues )( 
            IDiaSymbol8 * This,
            /* [in] */ DWORD cnt,
            /* [out] */ DWORD *pcnt,
            /* [size_is][out] */ WORD *pModifiers);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isReturnValue )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isOptimizedAway )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_builtInKind )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_registerType )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseDataSlot )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseDataOffset )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_textureSlot )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_samplerSlot )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_uavSlot )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sizeInUdt )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_memorySpaceKind )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_unmodifiedTypeId )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_subTypeId )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_subType )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfModifiers )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfRegisterIndices )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isHLSLData )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPointerToDataMember )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPointerToMemberFunction )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSingleInheritance )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isMultipleInheritance )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isVirtualInheritance )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_restrictedType )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPointerBasedOnSymbolValue )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseSymbol )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_baseSymbolId )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_objectFileName )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAcceleratorGroupSharedLocal )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAcceleratorPointerTagLiveRange )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isAcceleratorStubFunction )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_numberOfAcceleratorPointerTags )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSdl )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isWinRTPointer )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isRefUdt )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isValueUdt )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isInterfaceUdt )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineFramesByAddr )( 
            IDiaSymbol8 * This,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineFramesByRVA )( 
            IDiaSymbol8 * This,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineFramesByVA )( 
            IDiaSymbol8 * This,
            /* [in] */ ULONGLONG va,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLines )( 
            IDiaSymbol8 * This,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLinesByAddr )( 
            IDiaSymbol8 * This,
            /* [in] */ DWORD isect,
            /* [in] */ DWORD offset,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLinesByRVA )( 
            IDiaSymbol8 * This,
            /* [in] */ DWORD rva,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findInlineeLinesByVA )( 
            IDiaSymbol8 * This,
            /* [in] */ ULONGLONG va,
            /* [in] */ DWORD length,
            /* [out] */ IDiaEnumLineNumbers **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findSymbolsForAcceleratorPointerTag )( 
            IDiaSymbol8 * This,
            /* [in] */ DWORD tagValue,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *findSymbolsByRVAForAcceleratorPointerTag )( 
            IDiaSymbol8 * This,
            /* [in] */ DWORD tagValue,
            /* [in] */ DWORD rva,
            /* [out] */ IDiaEnumSymbols **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *get_acceleratorPointerTags )( 
            IDiaSymbol8 * This,
            /* [in] */ DWORD cnt,
            /* [out] */ DWORD *pcnt,
            /* [size_is][out] */ DWORD *pPointerTags);
        
        HRESULT ( STDMETHODCALLTYPE *getSrcLineOnTypeDefn )( 
            IDiaSymbol8 * This,
            /* [out] */ IDiaLineNumber **ppResult);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isPGO )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasValidPGOCounts )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isOptimizedForSpeed )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PGOEntryCount )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PGOEdgeCount )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PGODynamicInstructionCount )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_staticSize )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_finalLiveStaticSize )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_phaseName )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasControlFlowCheck )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_constantExport )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_dataExport )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_privateExport )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noNameExport )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exportHasExplicitlyAssignedOrdinal )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exportIsForwarder )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ordinal )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frameSize )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerAddressSection )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerAddressOffset )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerRelativeVirtualAddress )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_exceptionHandlerVirtualAddress )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *findInputAssemblyFile )( 
            IDiaSymbol8 * This,
            /* [out] */ IDiaInputAssemblyFile **ppResult);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_characteristics )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_coffGroup )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bindID )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bindSpace )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bindSlot )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isObjCClass )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isObjCCategory )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isObjCProtocol )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_inlinee )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_inlineeId )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_noexcept )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hasAbsoluteAddress )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isStaticMemberFunc )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_isSignRet )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_coroutineKind )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_associatedSymbolKind )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_associatedSymbolSection )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_associatedSymbolOffset )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_associatedSymbolRva )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_associatedSymbolAddr )( 
            IDiaSymbol8 * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        END_INTERFACE
    } IDiaSymbol8Vtbl;

    interface IDiaSymbol8
    {
        CONST_VTBL struct IDiaSymbol8Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaSymbol8_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaSymbol8_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaSymbol8_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaSymbol8_get_symIndexId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_symIndexId(This,pRetVal) ) 

#define IDiaSymbol8_get_symTag(This,pRetVal)	\
    ( (This)->lpVtbl -> get_symTag(This,pRetVal) ) 

#define IDiaSymbol8_get_name(This,pRetVal)	\
    ( (This)->lpVtbl -> get_name(This,pRetVal) ) 

#define IDiaSymbol8_get_lexicalParent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lexicalParent(This,pRetVal) ) 

#define IDiaSymbol8_get_classParent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_classParent(This,pRetVal) ) 

#define IDiaSymbol8_get_type(This,pRetVal)	\
    ( (This)->lpVtbl -> get_type(This,pRetVal) ) 

#define IDiaSymbol8_get_dataKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_dataKind(This,pRetVal) ) 

#define IDiaSymbol8_get_locationType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_locationType(This,pRetVal) ) 

#define IDiaSymbol8_get_addressSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressSection(This,pRetVal) ) 

#define IDiaSymbol8_get_addressOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressOffset(This,pRetVal) ) 

#define IDiaSymbol8_get_relativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_relativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol8_get_virtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualAddress(This,pRetVal) ) 

#define IDiaSymbol8_get_registerId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_registerId(This,pRetVal) ) 

#define IDiaSymbol8_get_offset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_offset(This,pRetVal) ) 

#define IDiaSymbol8_get_length(This,pRetVal)	\
    ( (This)->lpVtbl -> get_length(This,pRetVal) ) 

#define IDiaSymbol8_get_slot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_slot(This,pRetVal) ) 

#define IDiaSymbol8_get_volatileType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_volatileType(This,pRetVal) ) 

#define IDiaSymbol8_get_constType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_constType(This,pRetVal) ) 

#define IDiaSymbol8_get_unalignedType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unalignedType(This,pRetVal) ) 

#define IDiaSymbol8_get_access(This,pRetVal)	\
    ( (This)->lpVtbl -> get_access(This,pRetVal) ) 

#define IDiaSymbol8_get_libraryName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_libraryName(This,pRetVal) ) 

#define IDiaSymbol8_get_platform(This,pRetVal)	\
    ( (This)->lpVtbl -> get_platform(This,pRetVal) ) 

#define IDiaSymbol8_get_language(This,pRetVal)	\
    ( (This)->lpVtbl -> get_language(This,pRetVal) ) 

#define IDiaSymbol8_get_editAndContinueEnabled(This,pRetVal)	\
    ( (This)->lpVtbl -> get_editAndContinueEnabled(This,pRetVal) ) 

#define IDiaSymbol8_get_frontEndMajor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndMajor(This,pRetVal) ) 

#define IDiaSymbol8_get_frontEndMinor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndMinor(This,pRetVal) ) 

#define IDiaSymbol8_get_frontEndBuild(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndBuild(This,pRetVal) ) 

#define IDiaSymbol8_get_backEndMajor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndMajor(This,pRetVal) ) 

#define IDiaSymbol8_get_backEndMinor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndMinor(This,pRetVal) ) 

#define IDiaSymbol8_get_backEndBuild(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndBuild(This,pRetVal) ) 

#define IDiaSymbol8_get_sourceFileName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_sourceFileName(This,pRetVal) ) 

#define IDiaSymbol8_get_unused(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unused(This,pRetVal) ) 

#define IDiaSymbol8_get_thunkOrdinal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_thunkOrdinal(This,pRetVal) ) 

#define IDiaSymbol8_get_thisAdjust(This,pRetVal)	\
    ( (This)->lpVtbl -> get_thisAdjust(This,pRetVal) ) 

#define IDiaSymbol8_get_virtualBaseOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseOffset(This,pRetVal) ) 

#define IDiaSymbol8_get_virtual(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtual(This,pRetVal) ) 

#define IDiaSymbol8_get_intro(This,pRetVal)	\
    ( (This)->lpVtbl -> get_intro(This,pRetVal) ) 

#define IDiaSymbol8_get_pure(This,pRetVal)	\
    ( (This)->lpVtbl -> get_pure(This,pRetVal) ) 

#define IDiaSymbol8_get_callingConvention(This,pRetVal)	\
    ( (This)->lpVtbl -> get_callingConvention(This,pRetVal) ) 

#define IDiaSymbol8_get_value(This,pRetVal)	\
    ( (This)->lpVtbl -> get_value(This,pRetVal) ) 

#define IDiaSymbol8_get_baseType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseType(This,pRetVal) ) 

#define IDiaSymbol8_get_token(This,pRetVal)	\
    ( (This)->lpVtbl -> get_token(This,pRetVal) ) 

#define IDiaSymbol8_get_timeStamp(This,pRetVal)	\
    ( (This)->lpVtbl -> get_timeStamp(This,pRetVal) ) 

#define IDiaSymbol8_get_guid(This,pRetVal)	\
    ( (This)->lpVtbl -> get_guid(This,pRetVal) ) 

#define IDiaSymbol8_get_symbolsFileName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_symbolsFileName(This,pRetVal) ) 

#define IDiaSymbol8_get_reference(This,pRetVal)	\
    ( (This)->lpVtbl -> get_reference(This,pRetVal) ) 

#define IDiaSymbol8_get_count(This,pRetVal)	\
    ( (This)->lpVtbl -> get_count(This,pRetVal) ) 

#define IDiaSymbol8_get_bitPosition(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bitPosition(This,pRetVal) ) 

#define IDiaSymbol8_get_arrayIndexType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_arrayIndexType(This,pRetVal) ) 

#define IDiaSymbol8_get_packed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_packed(This,pRetVal) ) 

#define IDiaSymbol8_get_constructor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_constructor(This,pRetVal) ) 

#define IDiaSymbol8_get_overloadedOperator(This,pRetVal)	\
    ( (This)->lpVtbl -> get_overloadedOperator(This,pRetVal) ) 

#define IDiaSymbol8_get_nested(This,pRetVal)	\
    ( (This)->lpVtbl -> get_nested(This,pRetVal) ) 

#define IDiaSymbol8_get_hasNestedTypes(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasNestedTypes(This,pRetVal) ) 

#define IDiaSymbol8_get_hasAssignmentOperator(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasAssignmentOperator(This,pRetVal) ) 

#define IDiaSymbol8_get_hasCastOperator(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasCastOperator(This,pRetVal) ) 

#define IDiaSymbol8_get_scoped(This,pRetVal)	\
    ( (This)->lpVtbl -> get_scoped(This,pRetVal) ) 

#define IDiaSymbol8_get_virtualBaseClass(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseClass(This,pRetVal) ) 

#define IDiaSymbol8_get_indirectVirtualBaseClass(This,pRetVal)	\
    ( (This)->lpVtbl -> get_indirectVirtualBaseClass(This,pRetVal) ) 

#define IDiaSymbol8_get_virtualBasePointerOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBasePointerOffset(This,pRetVal) ) 

#define IDiaSymbol8_get_virtualTableShape(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualTableShape(This,pRetVal) ) 

#define IDiaSymbol8_get_lexicalParentId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lexicalParentId(This,pRetVal) ) 

#define IDiaSymbol8_get_classParentId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_classParentId(This,pRetVal) ) 

#define IDiaSymbol8_get_typeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_typeId(This,pRetVal) ) 

#define IDiaSymbol8_get_arrayIndexTypeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_arrayIndexTypeId(This,pRetVal) ) 

#define IDiaSymbol8_get_virtualTableShapeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualTableShapeId(This,pRetVal) ) 

#define IDiaSymbol8_get_code(This,pRetVal)	\
    ( (This)->lpVtbl -> get_code(This,pRetVal) ) 

#define IDiaSymbol8_get_function(This,pRetVal)	\
    ( (This)->lpVtbl -> get_function(This,pRetVal) ) 

#define IDiaSymbol8_get_managed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_managed(This,pRetVal) ) 

#define IDiaSymbol8_get_msil(This,pRetVal)	\
    ( (This)->lpVtbl -> get_msil(This,pRetVal) ) 

#define IDiaSymbol8_get_virtualBaseDispIndex(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseDispIndex(This,pRetVal) ) 

#define IDiaSymbol8_get_undecoratedName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_undecoratedName(This,pRetVal) ) 

#define IDiaSymbol8_get_age(This,pRetVal)	\
    ( (This)->lpVtbl -> get_age(This,pRetVal) ) 

#define IDiaSymbol8_get_signature(This,pRetVal)	\
    ( (This)->lpVtbl -> get_signature(This,pRetVal) ) 

#define IDiaSymbol8_get_compilerGenerated(This,pRetVal)	\
    ( (This)->lpVtbl -> get_compilerGenerated(This,pRetVal) ) 

#define IDiaSymbol8_get_addressTaken(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressTaken(This,pRetVal) ) 

#define IDiaSymbol8_get_rank(This,pRetVal)	\
    ( (This)->lpVtbl -> get_rank(This,pRetVal) ) 

#define IDiaSymbol8_get_lowerBound(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lowerBound(This,pRetVal) ) 

#define IDiaSymbol8_get_upperBound(This,pRetVal)	\
    ( (This)->lpVtbl -> get_upperBound(This,pRetVal) ) 

#define IDiaSymbol8_get_lowerBoundId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lowerBoundId(This,pRetVal) ) 

#define IDiaSymbol8_get_upperBoundId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_upperBoundId(This,pRetVal) ) 

#define IDiaSymbol8_get_dataBytes(This,cbData,pcbData,pbData)	\
    ( (This)->lpVtbl -> get_dataBytes(This,cbData,pcbData,pbData) ) 

#define IDiaSymbol8_findChildren(This,symtag,name,compareFlags,ppResult)	\
    ( (This)->lpVtbl -> findChildren(This,symtag,name,compareFlags,ppResult) ) 

#define IDiaSymbol8_findChildrenEx(This,symtag,name,compareFlags,ppResult)	\
    ( (This)->lpVtbl -> findChildrenEx(This,symtag,name,compareFlags,ppResult) ) 

#define IDiaSymbol8_findChildrenExByAddr(This,symtag,name,compareFlags,isect,offset,ppResult)	\
    ( (This)->lpVtbl -> findChildrenExByAddr(This,symtag,name,compareFlags,isect,offset,ppResult) ) 

#define IDiaSymbol8_findChildrenExByVA(This,symtag,name,compareFlags,va,ppResult)	\
    ( (This)->lpVtbl -> findChildrenExByVA(This,symtag,name,compareFlags,va,ppResult) ) 

#define IDiaSymbol8_findChildrenExByRVA(This,symtag,name,compareFlags,rva,ppResult)	\
    ( (This)->lpVtbl -> findChildrenExByRVA(This,symtag,name,compareFlags,rva,ppResult) ) 

#define IDiaSymbol8_get_targetSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetSection(This,pRetVal) ) 

#define IDiaSymbol8_get_targetOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetOffset(This,pRetVal) ) 

#define IDiaSymbol8_get_targetRelativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetRelativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol8_get_targetVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_targetVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol8_get_machineType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_machineType(This,pRetVal) ) 

#define IDiaSymbol8_get_oemId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_oemId(This,pRetVal) ) 

#define IDiaSymbol8_get_oemSymbolId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_oemSymbolId(This,pRetVal) ) 

#define IDiaSymbol8_get_types(This,cTypes,pcTypes,pTypes)	\
    ( (This)->lpVtbl -> get_types(This,cTypes,pcTypes,pTypes) ) 

#define IDiaSymbol8_get_typeIds(This,cTypeIds,pcTypeIds,pdwTypeIds)	\
    ( (This)->lpVtbl -> get_typeIds(This,cTypeIds,pcTypeIds,pdwTypeIds) ) 

#define IDiaSymbol8_get_objectPointerType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_objectPointerType(This,pRetVal) ) 

#define IDiaSymbol8_get_udtKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_udtKind(This,pRetVal) ) 

#define IDiaSymbol8_get_undecoratedNameEx(This,undecorateOptions,name)	\
    ( (This)->lpVtbl -> get_undecoratedNameEx(This,undecorateOptions,name) ) 

#define IDiaSymbol8_get_noReturn(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noReturn(This,pRetVal) ) 

#define IDiaSymbol8_get_customCallingConvention(This,pRetVal)	\
    ( (This)->lpVtbl -> get_customCallingConvention(This,pRetVal) ) 

#define IDiaSymbol8_get_noInline(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noInline(This,pRetVal) ) 

#define IDiaSymbol8_get_optimizedCodeDebugInfo(This,pRetVal)	\
    ( (This)->lpVtbl -> get_optimizedCodeDebugInfo(This,pRetVal) ) 

#define IDiaSymbol8_get_notReached(This,pRetVal)	\
    ( (This)->lpVtbl -> get_notReached(This,pRetVal) ) 

#define IDiaSymbol8_get_interruptReturn(This,pRetVal)	\
    ( (This)->lpVtbl -> get_interruptReturn(This,pRetVal) ) 

#define IDiaSymbol8_get_farReturn(This,pRetVal)	\
    ( (This)->lpVtbl -> get_farReturn(This,pRetVal) ) 

#define IDiaSymbol8_get_isStatic(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isStatic(This,pRetVal) ) 

#define IDiaSymbol8_get_hasDebugInfo(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasDebugInfo(This,pRetVal) ) 

#define IDiaSymbol8_get_isLTCG(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isLTCG(This,pRetVal) ) 

#define IDiaSymbol8_get_isDataAligned(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isDataAligned(This,pRetVal) ) 

#define IDiaSymbol8_get_hasSecurityChecks(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasSecurityChecks(This,pRetVal) ) 

#define IDiaSymbol8_get_compilerName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_compilerName(This,pRetVal) ) 

#define IDiaSymbol8_get_hasAlloca(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasAlloca(This,pRetVal) ) 

#define IDiaSymbol8_get_hasSetJump(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasSetJump(This,pRetVal) ) 

#define IDiaSymbol8_get_hasLongJump(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasLongJump(This,pRetVal) ) 

#define IDiaSymbol8_get_hasInlAsm(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasInlAsm(This,pRetVal) ) 

#define IDiaSymbol8_get_hasEH(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasEH(This,pRetVal) ) 

#define IDiaSymbol8_get_hasSEH(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasSEH(This,pRetVal) ) 

#define IDiaSymbol8_get_hasEHa(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasEHa(This,pRetVal) ) 

#define IDiaSymbol8_get_isNaked(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isNaked(This,pRetVal) ) 

#define IDiaSymbol8_get_isAggregated(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAggregated(This,pRetVal) ) 

#define IDiaSymbol8_get_isSplitted(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSplitted(This,pRetVal) ) 

#define IDiaSymbol8_get_container(This,pRetVal)	\
    ( (This)->lpVtbl -> get_container(This,pRetVal) ) 

#define IDiaSymbol8_get_inlSpec(This,pRetVal)	\
    ( (This)->lpVtbl -> get_inlSpec(This,pRetVal) ) 

#define IDiaSymbol8_get_noStackOrdering(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noStackOrdering(This,pRetVal) ) 

#define IDiaSymbol8_get_virtualBaseTableType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualBaseTableType(This,pRetVal) ) 

#define IDiaSymbol8_get_hasManagedCode(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasManagedCode(This,pRetVal) ) 

#define IDiaSymbol8_get_isHotpatchable(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isHotpatchable(This,pRetVal) ) 

#define IDiaSymbol8_get_isCVTCIL(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isCVTCIL(This,pRetVal) ) 

#define IDiaSymbol8_get_isMSILNetmodule(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isMSILNetmodule(This,pRetVal) ) 

#define IDiaSymbol8_get_isCTypes(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isCTypes(This,pRetVal) ) 

#define IDiaSymbol8_get_isStripped(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isStripped(This,pRetVal) ) 

#define IDiaSymbol8_get_frontEndQFE(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frontEndQFE(This,pRetVal) ) 

#define IDiaSymbol8_get_backEndQFE(This,pRetVal)	\
    ( (This)->lpVtbl -> get_backEndQFE(This,pRetVal) ) 

#define IDiaSymbol8_get_wasInlined(This,pRetVal)	\
    ( (This)->lpVtbl -> get_wasInlined(This,pRetVal) ) 

#define IDiaSymbol8_get_strictGSCheck(This,pRetVal)	\
    ( (This)->lpVtbl -> get_strictGSCheck(This,pRetVal) ) 

#define IDiaSymbol8_get_isCxxReturnUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isCxxReturnUdt(This,pRetVal) ) 

#define IDiaSymbol8_get_isConstructorVirtualBase(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isConstructorVirtualBase(This,pRetVal) ) 

#define IDiaSymbol8_get_RValueReference(This,pRetVal)	\
    ( (This)->lpVtbl -> get_RValueReference(This,pRetVal) ) 

#define IDiaSymbol8_get_unmodifiedType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unmodifiedType(This,pRetVal) ) 

#define IDiaSymbol8_get_framePointerPresent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_framePointerPresent(This,pRetVal) ) 

#define IDiaSymbol8_get_isSafeBuffers(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSafeBuffers(This,pRetVal) ) 

#define IDiaSymbol8_get_intrinsic(This,pRetVal)	\
    ( (This)->lpVtbl -> get_intrinsic(This,pRetVal) ) 

#define IDiaSymbol8_get_sealed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_sealed(This,pRetVal) ) 

#define IDiaSymbol8_get_hfaFloat(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hfaFloat(This,pRetVal) ) 

#define IDiaSymbol8_get_hfaDouble(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hfaDouble(This,pRetVal) ) 

#define IDiaSymbol8_get_liveRangeStartAddressSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeStartAddressSection(This,pRetVal) ) 

#define IDiaSymbol8_get_liveRangeStartAddressOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeStartAddressOffset(This,pRetVal) ) 

#define IDiaSymbol8_get_liveRangeStartRelativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeStartRelativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol8_get_countLiveRanges(This,pRetVal)	\
    ( (This)->lpVtbl -> get_countLiveRanges(This,pRetVal) ) 

#define IDiaSymbol8_get_liveRangeLength(This,pRetVal)	\
    ( (This)->lpVtbl -> get_liveRangeLength(This,pRetVal) ) 

#define IDiaSymbol8_get_offsetInUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_offsetInUdt(This,pRetVal) ) 

#define IDiaSymbol8_get_paramBasePointerRegisterId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_paramBasePointerRegisterId(This,pRetVal) ) 

#define IDiaSymbol8_get_localBasePointerRegisterId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_localBasePointerRegisterId(This,pRetVal) ) 

#define IDiaSymbol8_get_isLocationControlFlowDependent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isLocationControlFlowDependent(This,pRetVal) ) 

#define IDiaSymbol8_get_stride(This,pRetVal)	\
    ( (This)->lpVtbl -> get_stride(This,pRetVal) ) 

#define IDiaSymbol8_get_numberOfRows(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfRows(This,pRetVal) ) 

#define IDiaSymbol8_get_numberOfColumns(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfColumns(This,pRetVal) ) 

#define IDiaSymbol8_get_isMatrixRowMajor(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isMatrixRowMajor(This,pRetVal) ) 

#define IDiaSymbol8_get_numericProperties(This,cnt,pcnt,pProperties)	\
    ( (This)->lpVtbl -> get_numericProperties(This,cnt,pcnt,pProperties) ) 

#define IDiaSymbol8_get_modifierValues(This,cnt,pcnt,pModifiers)	\
    ( (This)->lpVtbl -> get_modifierValues(This,cnt,pcnt,pModifiers) ) 

#define IDiaSymbol8_get_isReturnValue(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isReturnValue(This,pRetVal) ) 

#define IDiaSymbol8_get_isOptimizedAway(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isOptimizedAway(This,pRetVal) ) 

#define IDiaSymbol8_get_builtInKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_builtInKind(This,pRetVal) ) 

#define IDiaSymbol8_get_registerType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_registerType(This,pRetVal) ) 

#define IDiaSymbol8_get_baseDataSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseDataSlot(This,pRetVal) ) 

#define IDiaSymbol8_get_baseDataOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseDataOffset(This,pRetVal) ) 

#define IDiaSymbol8_get_textureSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_textureSlot(This,pRetVal) ) 

#define IDiaSymbol8_get_samplerSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_samplerSlot(This,pRetVal) ) 

#define IDiaSymbol8_get_uavSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_uavSlot(This,pRetVal) ) 

#define IDiaSymbol8_get_sizeInUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_sizeInUdt(This,pRetVal) ) 

#define IDiaSymbol8_get_memorySpaceKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_memorySpaceKind(This,pRetVal) ) 

#define IDiaSymbol8_get_unmodifiedTypeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_unmodifiedTypeId(This,pRetVal) ) 

#define IDiaSymbol8_get_subTypeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_subTypeId(This,pRetVal) ) 

#define IDiaSymbol8_get_subType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_subType(This,pRetVal) ) 

#define IDiaSymbol8_get_numberOfModifiers(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfModifiers(This,pRetVal) ) 

#define IDiaSymbol8_get_numberOfRegisterIndices(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfRegisterIndices(This,pRetVal) ) 

#define IDiaSymbol8_get_isHLSLData(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isHLSLData(This,pRetVal) ) 

#define IDiaSymbol8_get_isPointerToDataMember(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPointerToDataMember(This,pRetVal) ) 

#define IDiaSymbol8_get_isPointerToMemberFunction(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPointerToMemberFunction(This,pRetVal) ) 

#define IDiaSymbol8_get_isSingleInheritance(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSingleInheritance(This,pRetVal) ) 

#define IDiaSymbol8_get_isMultipleInheritance(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isMultipleInheritance(This,pRetVal) ) 

#define IDiaSymbol8_get_isVirtualInheritance(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isVirtualInheritance(This,pRetVal) ) 

#define IDiaSymbol8_get_restrictedType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_restrictedType(This,pRetVal) ) 

#define IDiaSymbol8_get_isPointerBasedOnSymbolValue(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPointerBasedOnSymbolValue(This,pRetVal) ) 

#define IDiaSymbol8_get_baseSymbol(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseSymbol(This,pRetVal) ) 

#define IDiaSymbol8_get_baseSymbolId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_baseSymbolId(This,pRetVal) ) 

#define IDiaSymbol8_get_objectFileName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_objectFileName(This,pRetVal) ) 

#define IDiaSymbol8_get_isAcceleratorGroupSharedLocal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAcceleratorGroupSharedLocal(This,pRetVal) ) 

#define IDiaSymbol8_get_isAcceleratorPointerTagLiveRange(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAcceleratorPointerTagLiveRange(This,pRetVal) ) 

#define IDiaSymbol8_get_isAcceleratorStubFunction(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isAcceleratorStubFunction(This,pRetVal) ) 

#define IDiaSymbol8_get_numberOfAcceleratorPointerTags(This,pRetVal)	\
    ( (This)->lpVtbl -> get_numberOfAcceleratorPointerTags(This,pRetVal) ) 

#define IDiaSymbol8_get_isSdl(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSdl(This,pRetVal) ) 

#define IDiaSymbol8_get_isWinRTPointer(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isWinRTPointer(This,pRetVal) ) 

#define IDiaSymbol8_get_isRefUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isRefUdt(This,pRetVal) ) 

#define IDiaSymbol8_get_isValueUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isValueUdt(This,pRetVal) ) 

#define IDiaSymbol8_get_isInterfaceUdt(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isInterfaceUdt(This,pRetVal) ) 

#define IDiaSymbol8_findInlineFramesByAddr(This,isect,offset,ppResult)	\
    ( (This)->lpVtbl -> findInlineFramesByAddr(This,isect,offset,ppResult) ) 

#define IDiaSymbol8_findInlineFramesByRVA(This,rva,ppResult)	\
    ( (This)->lpVtbl -> findInlineFramesByRVA(This,rva,ppResult) ) 

#define IDiaSymbol8_findInlineFramesByVA(This,va,ppResult)	\
    ( (This)->lpVtbl -> findInlineFramesByVA(This,va,ppResult) ) 

#define IDiaSymbol8_findInlineeLines(This,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLines(This,ppResult) ) 

#define IDiaSymbol8_findInlineeLinesByAddr(This,isect,offset,length,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLinesByAddr(This,isect,offset,length,ppResult) ) 

#define IDiaSymbol8_findInlineeLinesByRVA(This,rva,length,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLinesByRVA(This,rva,length,ppResult) ) 

#define IDiaSymbol8_findInlineeLinesByVA(This,va,length,ppResult)	\
    ( (This)->lpVtbl -> findInlineeLinesByVA(This,va,length,ppResult) ) 

#define IDiaSymbol8_findSymbolsForAcceleratorPointerTag(This,tagValue,ppResult)	\
    ( (This)->lpVtbl -> findSymbolsForAcceleratorPointerTag(This,tagValue,ppResult) ) 

#define IDiaSymbol8_findSymbolsByRVAForAcceleratorPointerTag(This,tagValue,rva,ppResult)	\
    ( (This)->lpVtbl -> findSymbolsByRVAForAcceleratorPointerTag(This,tagValue,rva,ppResult) ) 

#define IDiaSymbol8_get_acceleratorPointerTags(This,cnt,pcnt,pPointerTags)	\
    ( (This)->lpVtbl -> get_acceleratorPointerTags(This,cnt,pcnt,pPointerTags) ) 

#define IDiaSymbol8_getSrcLineOnTypeDefn(This,ppResult)	\
    ( (This)->lpVtbl -> getSrcLineOnTypeDefn(This,ppResult) ) 

#define IDiaSymbol8_get_isPGO(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isPGO(This,pRetVal) ) 

#define IDiaSymbol8_get_hasValidPGOCounts(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasValidPGOCounts(This,pRetVal) ) 

#define IDiaSymbol8_get_isOptimizedForSpeed(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isOptimizedForSpeed(This,pRetVal) ) 

#define IDiaSymbol8_get_PGOEntryCount(This,pRetVal)	\
    ( (This)->lpVtbl -> get_PGOEntryCount(This,pRetVal) ) 

#define IDiaSymbol8_get_PGOEdgeCount(This,pRetVal)	\
    ( (This)->lpVtbl -> get_PGOEdgeCount(This,pRetVal) ) 

#define IDiaSymbol8_get_PGODynamicInstructionCount(This,pRetVal)	\
    ( (This)->lpVtbl -> get_PGODynamicInstructionCount(This,pRetVal) ) 

#define IDiaSymbol8_get_staticSize(This,pRetVal)	\
    ( (This)->lpVtbl -> get_staticSize(This,pRetVal) ) 

#define IDiaSymbol8_get_finalLiveStaticSize(This,pRetVal)	\
    ( (This)->lpVtbl -> get_finalLiveStaticSize(This,pRetVal) ) 

#define IDiaSymbol8_get_phaseName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_phaseName(This,pRetVal) ) 

#define IDiaSymbol8_get_hasControlFlowCheck(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasControlFlowCheck(This,pRetVal) ) 

#define IDiaSymbol8_get_constantExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_constantExport(This,pRetVal) ) 

#define IDiaSymbol8_get_dataExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_dataExport(This,pRetVal) ) 

#define IDiaSymbol8_get_privateExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_privateExport(This,pRetVal) ) 

#define IDiaSymbol8_get_noNameExport(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noNameExport(This,pRetVal) ) 

#define IDiaSymbol8_get_exportHasExplicitlyAssignedOrdinal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exportHasExplicitlyAssignedOrdinal(This,pRetVal) ) 

#define IDiaSymbol8_get_exportIsForwarder(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exportIsForwarder(This,pRetVal) ) 

#define IDiaSymbol8_get_ordinal(This,pRetVal)	\
    ( (This)->lpVtbl -> get_ordinal(This,pRetVal) ) 

#define IDiaSymbol8_get_frameSize(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frameSize(This,pRetVal) ) 

#define IDiaSymbol8_get_exceptionHandlerAddressSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerAddressSection(This,pRetVal) ) 

#define IDiaSymbol8_get_exceptionHandlerAddressOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerAddressOffset(This,pRetVal) ) 

#define IDiaSymbol8_get_exceptionHandlerRelativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerRelativeVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol8_get_exceptionHandlerVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_exceptionHandlerVirtualAddress(This,pRetVal) ) 

#define IDiaSymbol8_findInputAssemblyFile(This,ppResult)	\
    ( (This)->lpVtbl -> findInputAssemblyFile(This,ppResult) ) 

#define IDiaSymbol8_get_characteristics(This,pRetVal)	\
    ( (This)->lpVtbl -> get_characteristics(This,pRetVal) ) 

#define IDiaSymbol8_get_coffGroup(This,pRetVal)	\
    ( (This)->lpVtbl -> get_coffGroup(This,pRetVal) ) 

#define IDiaSymbol8_get_bindID(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bindID(This,pRetVal) ) 

#define IDiaSymbol8_get_bindSpace(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bindSpace(This,pRetVal) ) 

#define IDiaSymbol8_get_bindSlot(This,pRetVal)	\
    ( (This)->lpVtbl -> get_bindSlot(This,pRetVal) ) 


#define IDiaSymbol8_get_isObjCClass(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isObjCClass(This,pRetVal) ) 

#define IDiaSymbol8_get_isObjCCategory(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isObjCCategory(This,pRetVal) ) 

#define IDiaSymbol8_get_isObjCProtocol(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isObjCProtocol(This,pRetVal) ) 


#define IDiaSymbol8_get_inlinee(This,pRetVal)	\
    ( (This)->lpVtbl -> get_inlinee(This,pRetVal) ) 

#define IDiaSymbol8_get_inlineeId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_inlineeId(This,pRetVal) ) 


#define IDiaSymbol8_get_noexcept(This,pRetVal)	\
    ( (This)->lpVtbl -> get_noexcept(This,pRetVal) ) 


#define IDiaSymbol8_get_hasAbsoluteAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_hasAbsoluteAddress(This,pRetVal) ) 


#define IDiaSymbol8_get_isStaticMemberFunc(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isStaticMemberFunc(This,pRetVal) ) 


#define IDiaSymbol8_get_isSignRet(This,pRetVal)	\
    ( (This)->lpVtbl -> get_isSignRet(This,pRetVal) ) 


#define IDiaSymbol8_get_coroutineKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_coroutineKind(This,pRetVal) ) 

#define IDiaSymbol8_get_associatedSymbolKind(This,pRetVal)	\
    ( (This)->lpVtbl -> get_associatedSymbolKind(This,pRetVal) ) 

#define IDiaSymbol8_get_associatedSymbolSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_associatedSymbolSection(This,pRetVal) ) 

#define IDiaSymbol8_get_associatedSymbolOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_associatedSymbolOffset(This,pRetVal) ) 

#define IDiaSymbol8_get_associatedSymbolRva(This,pRetVal)	\
    ( (This)->lpVtbl -> get_associatedSymbolRva(This,pRetVal) ) 

#define IDiaSymbol8_get_associatedSymbolAddr(This,pRetVal)	\
    ( (This)->lpVtbl -> get_associatedSymbolAddr(This,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol8_get_coroutineKind_Proxy( 
    IDiaSymbol8 * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol8_get_coroutineKind_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol8_get_associatedSymbolKind_Proxy( 
    IDiaSymbol8 * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol8_get_associatedSymbolKind_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol8_get_associatedSymbolSection_Proxy( 
    IDiaSymbol8 * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol8_get_associatedSymbolSection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol8_get_associatedSymbolOffset_Proxy( 
    IDiaSymbol8 * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol8_get_associatedSymbolOffset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol8_get_associatedSymbolRva_Proxy( 
    IDiaSymbol8 * This,
    /* [retval][out] */ DWORD *pRetVal);


void __RPC_STUB IDiaSymbol8_get_associatedSymbolRva_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE IDiaSymbol8_get_associatedSymbolAddr_Proxy( 
    IDiaSymbol8 * This,
    /* [retval][out] */ ULONGLONG *pRetVal);


void __RPC_STUB IDiaSymbol8_get_associatedSymbolAddr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDiaSymbol8_INTERFACE_DEFINED__ */


#ifndef __IDiaSourceFile_INTERFACE_DEFINED__
#define __IDiaSourceFile_INTERFACE_DEFINED__

/* interface IDiaSourceFile */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaSourceFile;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A2EF5353-F5A8-4eb3-90D2-CB526ACB3CDD")
    IDiaSourceFile : public IUnknown
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_uniqueId( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_fileName( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_checksumType( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_compilands( 
            /* [retval][out] */ IDiaEnumSymbols **pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_checksum( 
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaSourceFileVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaSourceFile * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaSourceFile * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaSourceFile * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_uniqueId )( 
            IDiaSourceFile * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_fileName )( 
            IDiaSourceFile * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_checksumType )( 
            IDiaSourceFile * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_compilands )( 
            IDiaSourceFile * This,
            /* [retval][out] */ IDiaEnumSymbols **pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_checksum )( 
            IDiaSourceFile * This,
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData);
        
        END_INTERFACE
    } IDiaSourceFileVtbl;

    interface IDiaSourceFile
    {
        CONST_VTBL struct IDiaSourceFileVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaSourceFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaSourceFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaSourceFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaSourceFile_get_uniqueId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_uniqueId(This,pRetVal) ) 

#define IDiaSourceFile_get_fileName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_fileName(This,pRetVal) ) 

#define IDiaSourceFile_get_checksumType(This,pRetVal)	\
    ( (This)->lpVtbl -> get_checksumType(This,pRetVal) ) 

#define IDiaSourceFile_get_compilands(This,pRetVal)	\
    ( (This)->lpVtbl -> get_compilands(This,pRetVal) ) 

#define IDiaSourceFile_get_checksum(This,cbData,pcbData,pbData)	\
    ( (This)->lpVtbl -> get_checksum(This,cbData,pcbData,pbData) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaSourceFile_INTERFACE_DEFINED__ */


#ifndef __IDiaInputAssemblyFile_INTERFACE_DEFINED__
#define __IDiaInputAssemblyFile_INTERFACE_DEFINED__

/* interface IDiaInputAssemblyFile */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaInputAssemblyFile;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3BFE56B0-390C-4863-9430-1F3D083B7684")
    IDiaInputAssemblyFile : public IUnknown
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_uniqueId( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_index( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_timestamp( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_pdbAvailableAtILMerge( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_fileName( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_version( 
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaInputAssemblyFileVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaInputAssemblyFile * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaInputAssemblyFile * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaInputAssemblyFile * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_uniqueId )( 
            IDiaInputAssemblyFile * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_index )( 
            IDiaInputAssemblyFile * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_timestamp )( 
            IDiaInputAssemblyFile * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_pdbAvailableAtILMerge )( 
            IDiaInputAssemblyFile * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_fileName )( 
            IDiaInputAssemblyFile * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_version )( 
            IDiaInputAssemblyFile * This,
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData);
        
        END_INTERFACE
    } IDiaInputAssemblyFileVtbl;

    interface IDiaInputAssemblyFile
    {
        CONST_VTBL struct IDiaInputAssemblyFileVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaInputAssemblyFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaInputAssemblyFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaInputAssemblyFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaInputAssemblyFile_get_uniqueId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_uniqueId(This,pRetVal) ) 

#define IDiaInputAssemblyFile_get_index(This,pRetVal)	\
    ( (This)->lpVtbl -> get_index(This,pRetVal) ) 

#define IDiaInputAssemblyFile_get_timestamp(This,pRetVal)	\
    ( (This)->lpVtbl -> get_timestamp(This,pRetVal) ) 

#define IDiaInputAssemblyFile_get_pdbAvailableAtILMerge(This,pRetVal)	\
    ( (This)->lpVtbl -> get_pdbAvailableAtILMerge(This,pRetVal) ) 

#define IDiaInputAssemblyFile_get_fileName(This,pRetVal)	\
    ( (This)->lpVtbl -> get_fileName(This,pRetVal) ) 

#define IDiaInputAssemblyFile_get_version(This,cbData,pcbData,pbData)	\
    ( (This)->lpVtbl -> get_version(This,cbData,pcbData,pbData) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaInputAssemblyFile_INTERFACE_DEFINED__ */


#ifndef __IDiaLineNumber_INTERFACE_DEFINED__
#define __IDiaLineNumber_INTERFACE_DEFINED__

/* interface IDiaLineNumber */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaLineNumber;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B388EB14-BE4D-421d-A8A1-6CF7AB057086")
    IDiaLineNumber : public IUnknown
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_compiland( 
            /* [retval][out] */ IDiaSymbol **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_sourceFile( 
            /* [retval][out] */ IDiaSourceFile **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_lineNumber( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_lineNumberEnd( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_columnNumber( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_columnNumberEnd( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_addressSection( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_addressOffset( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_relativeVirtualAddress( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_virtualAddress( 
            /* [retval][out] */ ULONGLONG *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_length( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_sourceFileId( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_statement( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_compilandId( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaLineNumberVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaLineNumber * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaLineNumber * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaLineNumber * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_compiland )( 
            IDiaLineNumber * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sourceFile )( 
            IDiaLineNumber * This,
            /* [retval][out] */ IDiaSourceFile **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lineNumber )( 
            IDiaLineNumber * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lineNumberEnd )( 
            IDiaLineNumber * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_columnNumber )( 
            IDiaLineNumber * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_columnNumberEnd )( 
            IDiaLineNumber * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressSection )( 
            IDiaLineNumber * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressOffset )( 
            IDiaLineNumber * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_relativeVirtualAddress )( 
            IDiaLineNumber * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualAddress )( 
            IDiaLineNumber * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_length )( 
            IDiaLineNumber * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sourceFileId )( 
            IDiaLineNumber * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_statement )( 
            IDiaLineNumber * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_compilandId )( 
            IDiaLineNumber * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        END_INTERFACE
    } IDiaLineNumberVtbl;

    interface IDiaLineNumber
    {
        CONST_VTBL struct IDiaLineNumberVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaLineNumber_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaLineNumber_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaLineNumber_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaLineNumber_get_compiland(This,pRetVal)	\
    ( (This)->lpVtbl -> get_compiland(This,pRetVal) ) 

#define IDiaLineNumber_get_sourceFile(This,pRetVal)	\
    ( (This)->lpVtbl -> get_sourceFile(This,pRetVal) ) 

#define IDiaLineNumber_get_lineNumber(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lineNumber(This,pRetVal) ) 

#define IDiaLineNumber_get_lineNumberEnd(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lineNumberEnd(This,pRetVal) ) 

#define IDiaLineNumber_get_columnNumber(This,pRetVal)	\
    ( (This)->lpVtbl -> get_columnNumber(This,pRetVal) ) 

#define IDiaLineNumber_get_columnNumberEnd(This,pRetVal)	\
    ( (This)->lpVtbl -> get_columnNumberEnd(This,pRetVal) ) 

#define IDiaLineNumber_get_addressSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressSection(This,pRetVal) ) 

#define IDiaLineNumber_get_addressOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressOffset(This,pRetVal) ) 

#define IDiaLineNumber_get_relativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_relativeVirtualAddress(This,pRetVal) ) 

#define IDiaLineNumber_get_virtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualAddress(This,pRetVal) ) 

#define IDiaLineNumber_get_length(This,pRetVal)	\
    ( (This)->lpVtbl -> get_length(This,pRetVal) ) 

#define IDiaLineNumber_get_sourceFileId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_sourceFileId(This,pRetVal) ) 

#define IDiaLineNumber_get_statement(This,pRetVal)	\
    ( (This)->lpVtbl -> get_statement(This,pRetVal) ) 

#define IDiaLineNumber_get_compilandId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_compilandId(This,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaLineNumber_INTERFACE_DEFINED__ */


#ifndef __IDiaSectionContrib_INTERFACE_DEFINED__
#define __IDiaSectionContrib_INTERFACE_DEFINED__

/* interface IDiaSectionContrib */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaSectionContrib;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0CF4B60E-35B1-4c6c-BDD8-854B9C8E3857")
    IDiaSectionContrib : public IUnknown
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_compiland( 
            /* [retval][out] */ IDiaSymbol **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_addressSection( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_addressOffset( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_relativeVirtualAddress( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_virtualAddress( 
            /* [retval][out] */ ULONGLONG *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_length( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_notPaged( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_code( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_initializedData( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_uninitializedData( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_remove( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_comdat( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_discardable( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_notCached( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_share( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_execute( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_read( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_write( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_dataCrc( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_relocationsCrc( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_compilandId( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_code16bit( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaSectionContribVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaSectionContrib * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaSectionContrib * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaSectionContrib * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_compiland )( 
            IDiaSectionContrib * This,
            /* [retval][out] */ IDiaSymbol **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressSection )( 
            IDiaSectionContrib * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressOffset )( 
            IDiaSectionContrib * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_relativeVirtualAddress )( 
            IDiaSectionContrib * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualAddress )( 
            IDiaSectionContrib * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_length )( 
            IDiaSectionContrib * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_notPaged )( 
            IDiaSectionContrib * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_code )( 
            IDiaSectionContrib * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_initializedData )( 
            IDiaSectionContrib * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_uninitializedData )( 
            IDiaSectionContrib * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_remove )( 
            IDiaSectionContrib * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_comdat )( 
            IDiaSectionContrib * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_discardable )( 
            IDiaSectionContrib * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_notCached )( 
            IDiaSectionContrib * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_share )( 
            IDiaSectionContrib * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_execute )( 
            IDiaSectionContrib * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_read )( 
            IDiaSectionContrib * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_write )( 
            IDiaSectionContrib * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_dataCrc )( 
            IDiaSectionContrib * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_relocationsCrc )( 
            IDiaSectionContrib * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_compilandId )( 
            IDiaSectionContrib * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_code16bit )( 
            IDiaSectionContrib * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        END_INTERFACE
    } IDiaSectionContribVtbl;

    interface IDiaSectionContrib
    {
        CONST_VTBL struct IDiaSectionContribVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaSectionContrib_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaSectionContrib_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaSectionContrib_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaSectionContrib_get_compiland(This,pRetVal)	\
    ( (This)->lpVtbl -> get_compiland(This,pRetVal) ) 

#define IDiaSectionContrib_get_addressSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressSection(This,pRetVal) ) 

#define IDiaSectionContrib_get_addressOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressOffset(This,pRetVal) ) 

#define IDiaSectionContrib_get_relativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_relativeVirtualAddress(This,pRetVal) ) 

#define IDiaSectionContrib_get_virtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualAddress(This,pRetVal) ) 

#define IDiaSectionContrib_get_length(This,pRetVal)	\
    ( (This)->lpVtbl -> get_length(This,pRetVal) ) 

#define IDiaSectionContrib_get_notPaged(This,pRetVal)	\
    ( (This)->lpVtbl -> get_notPaged(This,pRetVal) ) 

#define IDiaSectionContrib_get_code(This,pRetVal)	\
    ( (This)->lpVtbl -> get_code(This,pRetVal) ) 

#define IDiaSectionContrib_get_initializedData(This,pRetVal)	\
    ( (This)->lpVtbl -> get_initializedData(This,pRetVal) ) 

#define IDiaSectionContrib_get_uninitializedData(This,pRetVal)	\
    ( (This)->lpVtbl -> get_uninitializedData(This,pRetVal) ) 

#define IDiaSectionContrib_get_remove(This,pRetVal)	\
    ( (This)->lpVtbl -> get_remove(This,pRetVal) ) 

#define IDiaSectionContrib_get_comdat(This,pRetVal)	\
    ( (This)->lpVtbl -> get_comdat(This,pRetVal) ) 

#define IDiaSectionContrib_get_discardable(This,pRetVal)	\
    ( (This)->lpVtbl -> get_discardable(This,pRetVal) ) 

#define IDiaSectionContrib_get_notCached(This,pRetVal)	\
    ( (This)->lpVtbl -> get_notCached(This,pRetVal) ) 

#define IDiaSectionContrib_get_share(This,pRetVal)	\
    ( (This)->lpVtbl -> get_share(This,pRetVal) ) 

#define IDiaSectionContrib_get_execute(This,pRetVal)	\
    ( (This)->lpVtbl -> get_execute(This,pRetVal) ) 

#define IDiaSectionContrib_get_read(This,pRetVal)	\
    ( (This)->lpVtbl -> get_read(This,pRetVal) ) 

#define IDiaSectionContrib_get_write(This,pRetVal)	\
    ( (This)->lpVtbl -> get_write(This,pRetVal) ) 

#define IDiaSectionContrib_get_dataCrc(This,pRetVal)	\
    ( (This)->lpVtbl -> get_dataCrc(This,pRetVal) ) 

#define IDiaSectionContrib_get_relocationsCrc(This,pRetVal)	\
    ( (This)->lpVtbl -> get_relocationsCrc(This,pRetVal) ) 

#define IDiaSectionContrib_get_compilandId(This,pRetVal)	\
    ( (This)->lpVtbl -> get_compilandId(This,pRetVal) ) 

#define IDiaSectionContrib_get_code16bit(This,pRetVal)	\
    ( (This)->lpVtbl -> get_code16bit(This,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaSectionContrib_INTERFACE_DEFINED__ */


#ifndef __IDiaSegment_INTERFACE_DEFINED__
#define __IDiaSegment_INTERFACE_DEFINED__

/* interface IDiaSegment */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaSegment;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0775B784-C75B-4449-848B-B7BD3159545B")
    IDiaSegment : public IUnknown
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_frame( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_offset( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_length( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_read( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_write( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_execute( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_addressSection( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_relativeVirtualAddress( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_virtualAddress( 
            /* [retval][out] */ ULONGLONG *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaSegmentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaSegment * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaSegment * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaSegment * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_frame )( 
            IDiaSegment * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_offset )( 
            IDiaSegment * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_length )( 
            IDiaSegment * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_read )( 
            IDiaSegment * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_write )( 
            IDiaSegment * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_execute )( 
            IDiaSegment * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressSection )( 
            IDiaSegment * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_relativeVirtualAddress )( 
            IDiaSegment * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualAddress )( 
            IDiaSegment * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        END_INTERFACE
    } IDiaSegmentVtbl;

    interface IDiaSegment
    {
        CONST_VTBL struct IDiaSegmentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaSegment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaSegment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaSegment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaSegment_get_frame(This,pRetVal)	\
    ( (This)->lpVtbl -> get_frame(This,pRetVal) ) 

#define IDiaSegment_get_offset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_offset(This,pRetVal) ) 

#define IDiaSegment_get_length(This,pRetVal)	\
    ( (This)->lpVtbl -> get_length(This,pRetVal) ) 

#define IDiaSegment_get_read(This,pRetVal)	\
    ( (This)->lpVtbl -> get_read(This,pRetVal) ) 

#define IDiaSegment_get_write(This,pRetVal)	\
    ( (This)->lpVtbl -> get_write(This,pRetVal) ) 

#define IDiaSegment_get_execute(This,pRetVal)	\
    ( (This)->lpVtbl -> get_execute(This,pRetVal) ) 

#define IDiaSegment_get_addressSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressSection(This,pRetVal) ) 

#define IDiaSegment_get_relativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_relativeVirtualAddress(This,pRetVal) ) 

#define IDiaSegment_get_virtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualAddress(This,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaSegment_INTERFACE_DEFINED__ */


#ifndef __IDiaInjectedSource_INTERFACE_DEFINED__
#define __IDiaInjectedSource_INTERFACE_DEFINED__

/* interface IDiaInjectedSource */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaInjectedSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AE605CDC-8105-4a23-B710-3259F1E26112")
    IDiaInjectedSource : public IUnknown
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_crc( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_length( 
            /* [retval][out] */ ULONGLONG *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_filename( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_objectFilename( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_virtualFilename( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_sourceCompression( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_source( 
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaInjectedSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaInjectedSource * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaInjectedSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaInjectedSource * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_crc )( 
            IDiaInjectedSource * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_length )( 
            IDiaInjectedSource * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_filename )( 
            IDiaInjectedSource * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_objectFilename )( 
            IDiaInjectedSource * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualFilename )( 
            IDiaInjectedSource * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_sourceCompression )( 
            IDiaInjectedSource * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *get_source )( 
            IDiaInjectedSource * This,
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData);
        
        END_INTERFACE
    } IDiaInjectedSourceVtbl;

    interface IDiaInjectedSource
    {
        CONST_VTBL struct IDiaInjectedSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaInjectedSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaInjectedSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaInjectedSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaInjectedSource_get_crc(This,pRetVal)	\
    ( (This)->lpVtbl -> get_crc(This,pRetVal) ) 

#define IDiaInjectedSource_get_length(This,pRetVal)	\
    ( (This)->lpVtbl -> get_length(This,pRetVal) ) 

#define IDiaInjectedSource_get_filename(This,pRetVal)	\
    ( (This)->lpVtbl -> get_filename(This,pRetVal) ) 

#define IDiaInjectedSource_get_objectFilename(This,pRetVal)	\
    ( (This)->lpVtbl -> get_objectFilename(This,pRetVal) ) 

#define IDiaInjectedSource_get_virtualFilename(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualFilename(This,pRetVal) ) 

#define IDiaInjectedSource_get_sourceCompression(This,pRetVal)	\
    ( (This)->lpVtbl -> get_sourceCompression(This,pRetVal) ) 

#define IDiaInjectedSource_get_source(This,cbData,pcbData,pbData)	\
    ( (This)->lpVtbl -> get_source(This,cbData,pcbData,pbData) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaInjectedSource_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dia2_0000_0032 */
/* [local] */ 


enum __MIDL___MIDL_itf_dia2_0000_0032_0001
    {
        E_DIA_INPROLOG	= ( HRESULT  )(( ( ( ( unsigned long  )1 << 31 )  | ( ( unsigned long  )( LONG  )0x6d << 16 )  )  | ( unsigned long  )100 ) ),
        E_DIA_SYNTAX	= ( E_DIA_INPROLOG + 1 ) ,
        E_DIA_FRAME_ACCESS	= ( E_DIA_SYNTAX + 1 ) ,
        E_DIA_VALUE	= ( E_DIA_FRAME_ACCESS + 1 ) 
    } ;


extern RPC_IF_HANDLE __MIDL_itf_dia2_0000_0032_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dia2_0000_0032_v0_0_s_ifspec;

#ifndef __IDiaStackWalkFrame_INTERFACE_DEFINED__
#define __IDiaStackWalkFrame_INTERFACE_DEFINED__

/* interface IDiaStackWalkFrame */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaStackWalkFrame;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("07C590C1-438D-4F47-BDCD-4397BC81AD75")
    IDiaStackWalkFrame : public IUnknown
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_registerValue( 
            /* [in] */ DWORD index,
            /* [retval][out] */ ULONGLONG *pRetVal) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_registerValue( 
            /* [in] */ DWORD index,
            /* [in] */ ULONGLONG NewVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE readMemory( 
            /* [in] */ enum MemoryTypeEnum type,
            /* [in] */ ULONGLONG va,
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE searchForReturnAddress( 
            /* [in] */ IDiaFrameData *frame,
            /* [out] */ ULONGLONG *returnAddress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE searchForReturnAddressStart( 
            /* [in] */ IDiaFrameData *frame,
            /* [in] */ ULONGLONG startAddress,
            /* [out] */ ULONGLONG *returnAddress) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaStackWalkFrameVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaStackWalkFrame * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaStackWalkFrame * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaStackWalkFrame * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_registerValue )( 
            IDiaStackWalkFrame * This,
            /* [in] */ DWORD index,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_registerValue )( 
            IDiaStackWalkFrame * This,
            /* [in] */ DWORD index,
            /* [in] */ ULONGLONG NewVal);
        
        HRESULT ( STDMETHODCALLTYPE *readMemory )( 
            IDiaStackWalkFrame * This,
            /* [in] */ enum MemoryTypeEnum type,
            /* [in] */ ULONGLONG va,
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData);
        
        HRESULT ( STDMETHODCALLTYPE *searchForReturnAddress )( 
            IDiaStackWalkFrame * This,
            /* [in] */ IDiaFrameData *frame,
            /* [out] */ ULONGLONG *returnAddress);
        
        HRESULT ( STDMETHODCALLTYPE *searchForReturnAddressStart )( 
            IDiaStackWalkFrame * This,
            /* [in] */ IDiaFrameData *frame,
            /* [in] */ ULONGLONG startAddress,
            /* [out] */ ULONGLONG *returnAddress);
        
        END_INTERFACE
    } IDiaStackWalkFrameVtbl;

    interface IDiaStackWalkFrame
    {
        CONST_VTBL struct IDiaStackWalkFrameVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaStackWalkFrame_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaStackWalkFrame_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaStackWalkFrame_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaStackWalkFrame_get_registerValue(This,index,pRetVal)	\
    ( (This)->lpVtbl -> get_registerValue(This,index,pRetVal) ) 

#define IDiaStackWalkFrame_put_registerValue(This,index,NewVal)	\
    ( (This)->lpVtbl -> put_registerValue(This,index,NewVal) ) 

#define IDiaStackWalkFrame_readMemory(This,type,va,cbData,pcbData,pbData)	\
    ( (This)->lpVtbl -> readMemory(This,type,va,cbData,pcbData,pbData) ) 

#define IDiaStackWalkFrame_searchForReturnAddress(This,frame,returnAddress)	\
    ( (This)->lpVtbl -> searchForReturnAddress(This,frame,returnAddress) ) 

#define IDiaStackWalkFrame_searchForReturnAddressStart(This,frame,startAddress,returnAddress)	\
    ( (This)->lpVtbl -> searchForReturnAddressStart(This,frame,startAddress,returnAddress) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaStackWalkFrame_INTERFACE_DEFINED__ */


#ifndef __IDiaFrameData_INTERFACE_DEFINED__
#define __IDiaFrameData_INTERFACE_DEFINED__

/* interface IDiaFrameData */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaFrameData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A39184B7-6A36-42de-8EEC-7DF9F3F59F33")
    IDiaFrameData : public IUnknown
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_addressSection( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_addressOffset( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_relativeVirtualAddress( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_virtualAddress( 
            /* [retval][out] */ ULONGLONG *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_lengthBlock( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_lengthLocals( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_lengthParams( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_maxStack( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_lengthProlog( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_lengthSavedRegisters( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_program( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_systemExceptionHandling( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_cplusplusExceptionHandling( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_functionStart( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_allocatesBasePointer( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_type( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_functionParent( 
            /* [retval][out] */ IDiaFrameData **pRetVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE execute( 
            IDiaStackWalkFrame *frame) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaFrameDataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaFrameData * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaFrameData * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaFrameData * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressSection )( 
            IDiaFrameData * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_addressOffset )( 
            IDiaFrameData * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_relativeVirtualAddress )( 
            IDiaFrameData * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualAddress )( 
            IDiaFrameData * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lengthBlock )( 
            IDiaFrameData * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lengthLocals )( 
            IDiaFrameData * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lengthParams )( 
            IDiaFrameData * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_maxStack )( 
            IDiaFrameData * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lengthProlog )( 
            IDiaFrameData * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lengthSavedRegisters )( 
            IDiaFrameData * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_program )( 
            IDiaFrameData * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_systemExceptionHandling )( 
            IDiaFrameData * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_cplusplusExceptionHandling )( 
            IDiaFrameData * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_functionStart )( 
            IDiaFrameData * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_allocatesBasePointer )( 
            IDiaFrameData * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_type )( 
            IDiaFrameData * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_functionParent )( 
            IDiaFrameData * This,
            /* [retval][out] */ IDiaFrameData **pRetVal);
        
        HRESULT ( STDMETHODCALLTYPE *execute )( 
            IDiaFrameData * This,
            IDiaStackWalkFrame *frame);
        
        END_INTERFACE
    } IDiaFrameDataVtbl;

    interface IDiaFrameData
    {
        CONST_VTBL struct IDiaFrameDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaFrameData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaFrameData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaFrameData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaFrameData_get_addressSection(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressSection(This,pRetVal) ) 

#define IDiaFrameData_get_addressOffset(This,pRetVal)	\
    ( (This)->lpVtbl -> get_addressOffset(This,pRetVal) ) 

#define IDiaFrameData_get_relativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_relativeVirtualAddress(This,pRetVal) ) 

#define IDiaFrameData_get_virtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualAddress(This,pRetVal) ) 

#define IDiaFrameData_get_lengthBlock(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lengthBlock(This,pRetVal) ) 

#define IDiaFrameData_get_lengthLocals(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lengthLocals(This,pRetVal) ) 

#define IDiaFrameData_get_lengthParams(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lengthParams(This,pRetVal) ) 

#define IDiaFrameData_get_maxStack(This,pRetVal)	\
    ( (This)->lpVtbl -> get_maxStack(This,pRetVal) ) 

#define IDiaFrameData_get_lengthProlog(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lengthProlog(This,pRetVal) ) 

#define IDiaFrameData_get_lengthSavedRegisters(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lengthSavedRegisters(This,pRetVal) ) 

#define IDiaFrameData_get_program(This,pRetVal)	\
    ( (This)->lpVtbl -> get_program(This,pRetVal) ) 

#define IDiaFrameData_get_systemExceptionHandling(This,pRetVal)	\
    ( (This)->lpVtbl -> get_systemExceptionHandling(This,pRetVal) ) 

#define IDiaFrameData_get_cplusplusExceptionHandling(This,pRetVal)	\
    ( (This)->lpVtbl -> get_cplusplusExceptionHandling(This,pRetVal) ) 

#define IDiaFrameData_get_functionStart(This,pRetVal)	\
    ( (This)->lpVtbl -> get_functionStart(This,pRetVal) ) 

#define IDiaFrameData_get_allocatesBasePointer(This,pRetVal)	\
    ( (This)->lpVtbl -> get_allocatesBasePointer(This,pRetVal) ) 

#define IDiaFrameData_get_type(This,pRetVal)	\
    ( (This)->lpVtbl -> get_type(This,pRetVal) ) 

#define IDiaFrameData_get_functionParent(This,pRetVal)	\
    ( (This)->lpVtbl -> get_functionParent(This,pRetVal) ) 

#define IDiaFrameData_execute(This,frame)	\
    ( (This)->lpVtbl -> execute(This,frame) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaFrameData_INTERFACE_DEFINED__ */


#ifndef __IDiaImageData_INTERFACE_DEFINED__
#define __IDiaImageData_INTERFACE_DEFINED__

/* interface IDiaImageData */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaImageData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C8E40ED2-A1D9-4221-8692-3CE661184B44")
    IDiaImageData : public IUnknown
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_relativeVirtualAddress( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_virtualAddress( 
            /* [retval][out] */ ULONGLONG *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_imageBase( 
            /* [retval][out] */ ULONGLONG *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaImageDataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaImageData * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaImageData * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaImageData * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_relativeVirtualAddress )( 
            IDiaImageData * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_virtualAddress )( 
            IDiaImageData * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_imageBase )( 
            IDiaImageData * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        END_INTERFACE
    } IDiaImageDataVtbl;

    interface IDiaImageData
    {
        CONST_VTBL struct IDiaImageDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaImageData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaImageData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaImageData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaImageData_get_relativeVirtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_relativeVirtualAddress(This,pRetVal) ) 

#define IDiaImageData_get_virtualAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_virtualAddress(This,pRetVal) ) 

#define IDiaImageData_get_imageBase(This,pRetVal)	\
    ( (This)->lpVtbl -> get_imageBase(This,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaImageData_INTERFACE_DEFINED__ */


#ifndef __IDiaTable_INTERFACE_DEFINED__
#define __IDiaTable_INTERFACE_DEFINED__

/* interface IDiaTable */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaTable;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4A59FB77-ABAC-469b-A30B-9ECC85BFEF14")
    IDiaTable : public IEnumUnknown
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_name( 
            /* [retval][out] */ BSTR *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pRetVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ DWORD index,
            /* [retval][out] */ IUnknown **element) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaTableVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaTable * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaTable * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaTable * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IDiaTable * This,
            /* [annotation][in] */ 
            _In_  ULONG celt,
            /* [annotation][out] */ 
            _Out_writes_to_(celt,*pceltFetched)  IUnknown **rgelt,
            /* [annotation][out] */ 
            _Out_opt_  ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IDiaTable * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IDiaTable * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IDiaTable * This,
            /* [out] */ IEnumUnknown **ppenum);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDiaTable * This,
            /* [retval][out] */ IUnknown **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_name )( 
            IDiaTable * This,
            /* [retval][out] */ BSTR *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDiaTable * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            IDiaTable * This,
            /* [in] */ DWORD index,
            /* [retval][out] */ IUnknown **element);
        
        END_INTERFACE
    } IDiaTableVtbl;

    interface IDiaTable
    {
        CONST_VTBL struct IDiaTableVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaTable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaTable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaTable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaTable_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IDiaTable_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IDiaTable_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IDiaTable_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 


#define IDiaTable_get__NewEnum(This,pRetVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pRetVal) ) 

#define IDiaTable_get_name(This,pRetVal)	\
    ( (This)->lpVtbl -> get_name(This,pRetVal) ) 

#define IDiaTable_get_Count(This,pRetVal)	\
    ( (This)->lpVtbl -> get_Count(This,pRetVal) ) 

#define IDiaTable_Item(This,index,element)	\
    ( (This)->lpVtbl -> Item(This,index,element) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaTable_INTERFACE_DEFINED__ */


#ifndef __IDiaEnumTables_INTERFACE_DEFINED__
#define __IDiaEnumTables_INTERFACE_DEFINED__

/* interface IDiaEnumTables */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaEnumTables;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C65C2B0A-1150-4d7a-AFCC-E05BF3DEE81E")
    IDiaEnumTables : public IUnknown
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pRetVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT index,
            /* [retval][out] */ IDiaTable **table) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Next( 
            ULONG celt,
            IDiaTable **rgelt,
            ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IDiaEnumTables **ppenum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaEnumTablesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaEnumTables * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaEnumTables * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaEnumTables * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDiaEnumTables * This,
            /* [retval][out] */ IUnknown **pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDiaEnumTables * This,
            /* [retval][out] */ LONG *pRetVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            IDiaEnumTables * This,
            /* [in] */ VARIANT index,
            /* [retval][out] */ IDiaTable **table);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IDiaEnumTables * This,
            ULONG celt,
            IDiaTable **rgelt,
            ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IDiaEnumTables * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IDiaEnumTables * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IDiaEnumTables * This,
            /* [out] */ IDiaEnumTables **ppenum);
        
        END_INTERFACE
    } IDiaEnumTablesVtbl;

    interface IDiaEnumTables
    {
        CONST_VTBL struct IDiaEnumTablesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaEnumTables_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaEnumTables_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaEnumTables_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaEnumTables_get__NewEnum(This,pRetVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pRetVal) ) 

#define IDiaEnumTables_get_Count(This,pRetVal)	\
    ( (This)->lpVtbl -> get_Count(This,pRetVal) ) 

#define IDiaEnumTables_Item(This,index,table)	\
    ( (This)->lpVtbl -> Item(This,index,table) ) 

#define IDiaEnumTables_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IDiaEnumTables_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IDiaEnumTables_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IDiaEnumTables_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaEnumTables_INTERFACE_DEFINED__ */



#ifndef __Dia2Lib_LIBRARY_DEFINED__
#define __Dia2Lib_LIBRARY_DEFINED__

/* library Dia2Lib */
/* [helpstring][version][uuid] */ 





EXTERN_C const IID LIBID_Dia2Lib;

EXTERN_C const CLSID CLSID_DiaSource;

#ifdef __cplusplus

class DECLSPEC_UUID("e6756135-1e65-4d17-8576-610761398c3c")
DiaSource;
#endif

EXTERN_C const CLSID CLSID_DiaSourceAlt;

#ifdef __cplusplus

class DECLSPEC_UUID("91904831-49ca-4766-b95c-25397e2dd6dc")
DiaSourceAlt;
#endif

EXTERN_C const CLSID CLSID_DiaStackWalker;

#ifdef __cplusplus

class DECLSPEC_UUID("ce4a85db-5768-475b-a4e1-c0bca2112a6b")
DiaStackWalker;
#endif
#endif /* __Dia2Lib_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_dia2_0000_0038 */
/* [local] */ 

#define	DiaTable_Symbols	( L"Symbols" )

#define	DiaTable_Sections	( L"Sections" )

#define	DiaTable_SrcFiles	( L"SourceFiles" )

#define	DiaTable_LineNums	( L"LineNumbers" )

#define	DiaTable_SegMap	( L"SegmentMap" )

#define	DiaTable_Dbg	( L"Dbg" )

#define	DiaTable_InjSrc	( L"InjectedSource" )

#define	DiaTable_FrameData	( L"FrameData" )

#define	DiaTable_InputAssemblyFiles	( L"InputAssemblyFiles" )



extern RPC_IF_HANDLE __MIDL_itf_dia2_0000_0038_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dia2_0000_0038_v0_0_s_ifspec;

#ifndef __IDiaPropertyStorage_INTERFACE_DEFINED__
#define __IDiaPropertyStorage_INTERFACE_DEFINED__

/* interface IDiaPropertyStorage */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaPropertyStorage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9d416f9c-e184-45b2-a4f0-ce517f719e9b")
    IDiaPropertyStorage : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReadMultiple( 
            /* [in] */ ULONG cpspec,
            /* [size_is][in] */ const PROPSPEC *rgpspec,
            /* [size_is][out] */ PROPVARIANT *rgvar) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReadPropertyNames( 
            /* [in] */ ULONG cpropid,
            /* [size_is][in] */ const PROPID *rgpropid,
            /* [size_is][out][in] */ BSTR *rglpwstrName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Enum( 
            /* [out] */ IEnumSTATPROPSTG **ppenum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReadDWORD( 
            /* [in] */ PROPID id,
            /* [out] */ DWORD *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReadLONG( 
            /* [in] */ PROPID id,
            /* [out] */ LONG *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReadBOOL( 
            /* [in] */ PROPID id,
            /* [out] */ BOOL *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReadULONGLONG( 
            /* [in] */ PROPID id,
            /* [out] */ ULONGLONG *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReadBSTR( 
            /* [in] */ PROPID id,
            /* [out] */ BSTR *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaPropertyStorageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaPropertyStorage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaPropertyStorage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaPropertyStorage * This);
        
        HRESULT ( STDMETHODCALLTYPE *ReadMultiple )( 
            IDiaPropertyStorage * This,
            /* [in] */ ULONG cpspec,
            /* [size_is][in] */ const PROPSPEC *rgpspec,
            /* [size_is][out] */ PROPVARIANT *rgvar);
        
        HRESULT ( STDMETHODCALLTYPE *ReadPropertyNames )( 
            IDiaPropertyStorage * This,
            /* [in] */ ULONG cpropid,
            /* [size_is][in] */ const PROPID *rgpropid,
            /* [size_is][out][in] */ BSTR *rglpwstrName);
        
        HRESULT ( STDMETHODCALLTYPE *Enum )( 
            IDiaPropertyStorage * This,
            /* [out] */ IEnumSTATPROPSTG **ppenum);
        
        HRESULT ( STDMETHODCALLTYPE *ReadDWORD )( 
            IDiaPropertyStorage * This,
            /* [in] */ PROPID id,
            /* [out] */ DWORD *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *ReadLONG )( 
            IDiaPropertyStorage * This,
            /* [in] */ PROPID id,
            /* [out] */ LONG *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *ReadBOOL )( 
            IDiaPropertyStorage * This,
            /* [in] */ PROPID id,
            /* [out] */ BOOL *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *ReadULONGLONG )( 
            IDiaPropertyStorage * This,
            /* [in] */ PROPID id,
            /* [out] */ ULONGLONG *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *ReadBSTR )( 
            IDiaPropertyStorage * This,
            /* [in] */ PROPID id,
            /* [out] */ BSTR *pValue);
        
        END_INTERFACE
    } IDiaPropertyStorageVtbl;

    interface IDiaPropertyStorage
    {
        CONST_VTBL struct IDiaPropertyStorageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaPropertyStorage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaPropertyStorage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaPropertyStorage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaPropertyStorage_ReadMultiple(This,cpspec,rgpspec,rgvar)	\
    ( (This)->lpVtbl -> ReadMultiple(This,cpspec,rgpspec,rgvar) ) 

#define IDiaPropertyStorage_ReadPropertyNames(This,cpropid,rgpropid,rglpwstrName)	\
    ( (This)->lpVtbl -> ReadPropertyNames(This,cpropid,rgpropid,rglpwstrName) ) 

#define IDiaPropertyStorage_Enum(This,ppenum)	\
    ( (This)->lpVtbl -> Enum(This,ppenum) ) 

#define IDiaPropertyStorage_ReadDWORD(This,id,pValue)	\
    ( (This)->lpVtbl -> ReadDWORD(This,id,pValue) ) 

#define IDiaPropertyStorage_ReadLONG(This,id,pValue)	\
    ( (This)->lpVtbl -> ReadLONG(This,id,pValue) ) 

#define IDiaPropertyStorage_ReadBOOL(This,id,pValue)	\
    ( (This)->lpVtbl -> ReadBOOL(This,id,pValue) ) 

#define IDiaPropertyStorage_ReadULONGLONG(This,id,pValue)	\
    ( (This)->lpVtbl -> ReadULONGLONG(This,id,pValue) ) 

#define IDiaPropertyStorage_ReadBSTR(This,id,pValue)	\
    ( (This)->lpVtbl -> ReadBSTR(This,id,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaPropertyStorage_INTERFACE_DEFINED__ */


#ifndef __IDiaStackFrame_INTERFACE_DEFINED__
#define __IDiaStackFrame_INTERFACE_DEFINED__

/* interface IDiaStackFrame */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaStackFrame;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5edbc96d-cdd6-4792-afbe-cc89007d9610")
    IDiaStackFrame : public IUnknown
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_type( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_base( 
            /* [retval][out] */ ULONGLONG *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_size( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_returnAddress( 
            /* [retval][out] */ ULONGLONG *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_localsBase( 
            /* [retval][out] */ ULONGLONG *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_lengthLocals( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_lengthParams( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_lengthProlog( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_lengthSavedRegisters( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_systemExceptionHandling( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_cplusplusExceptionHandling( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_functionStart( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_allocatesBasePointer( 
            /* [retval][out] */ BOOL *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_maxStack( 
            /* [retval][out] */ DWORD *pRetVal) = 0;
        
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_registerValue( 
            /* [in] */ DWORD index,
            /* [retval][out] */ ULONGLONG *pRetVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaStackFrameVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaStackFrame * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaStackFrame * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaStackFrame * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_type )( 
            IDiaStackFrame * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_base )( 
            IDiaStackFrame * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_size )( 
            IDiaStackFrame * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_returnAddress )( 
            IDiaStackFrame * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_localsBase )( 
            IDiaStackFrame * This,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lengthLocals )( 
            IDiaStackFrame * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lengthParams )( 
            IDiaStackFrame * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lengthProlog )( 
            IDiaStackFrame * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_lengthSavedRegisters )( 
            IDiaStackFrame * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_systemExceptionHandling )( 
            IDiaStackFrame * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_cplusplusExceptionHandling )( 
            IDiaStackFrame * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_functionStart )( 
            IDiaStackFrame * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_allocatesBasePointer )( 
            IDiaStackFrame * This,
            /* [retval][out] */ BOOL *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_maxStack )( 
            IDiaStackFrame * This,
            /* [retval][out] */ DWORD *pRetVal);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_registerValue )( 
            IDiaStackFrame * This,
            /* [in] */ DWORD index,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        END_INTERFACE
    } IDiaStackFrameVtbl;

    interface IDiaStackFrame
    {
        CONST_VTBL struct IDiaStackFrameVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaStackFrame_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaStackFrame_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaStackFrame_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaStackFrame_get_type(This,pRetVal)	\
    ( (This)->lpVtbl -> get_type(This,pRetVal) ) 

#define IDiaStackFrame_get_base(This,pRetVal)	\
    ( (This)->lpVtbl -> get_base(This,pRetVal) ) 

#define IDiaStackFrame_get_size(This,pRetVal)	\
    ( (This)->lpVtbl -> get_size(This,pRetVal) ) 

#define IDiaStackFrame_get_returnAddress(This,pRetVal)	\
    ( (This)->lpVtbl -> get_returnAddress(This,pRetVal) ) 

#define IDiaStackFrame_get_localsBase(This,pRetVal)	\
    ( (This)->lpVtbl -> get_localsBase(This,pRetVal) ) 

#define IDiaStackFrame_get_lengthLocals(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lengthLocals(This,pRetVal) ) 

#define IDiaStackFrame_get_lengthParams(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lengthParams(This,pRetVal) ) 

#define IDiaStackFrame_get_lengthProlog(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lengthProlog(This,pRetVal) ) 

#define IDiaStackFrame_get_lengthSavedRegisters(This,pRetVal)	\
    ( (This)->lpVtbl -> get_lengthSavedRegisters(This,pRetVal) ) 

#define IDiaStackFrame_get_systemExceptionHandling(This,pRetVal)	\
    ( (This)->lpVtbl -> get_systemExceptionHandling(This,pRetVal) ) 

#define IDiaStackFrame_get_cplusplusExceptionHandling(This,pRetVal)	\
    ( (This)->lpVtbl -> get_cplusplusExceptionHandling(This,pRetVal) ) 

#define IDiaStackFrame_get_functionStart(This,pRetVal)	\
    ( (This)->lpVtbl -> get_functionStart(This,pRetVal) ) 

#define IDiaStackFrame_get_allocatesBasePointer(This,pRetVal)	\
    ( (This)->lpVtbl -> get_allocatesBasePointer(This,pRetVal) ) 

#define IDiaStackFrame_get_maxStack(This,pRetVal)	\
    ( (This)->lpVtbl -> get_maxStack(This,pRetVal) ) 

#define IDiaStackFrame_get_registerValue(This,index,pRetVal)	\
    ( (This)->lpVtbl -> get_registerValue(This,index,pRetVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaStackFrame_INTERFACE_DEFINED__ */


#ifndef __IDiaEnumStackFrames_INTERFACE_DEFINED__
#define __IDiaEnumStackFrames_INTERFACE_DEFINED__

/* interface IDiaEnumStackFrames */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaEnumStackFrames;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ec9d461d-ce74-4711-a020-7d8f9a1dd255")
    IDiaEnumStackFrames : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [out] */ IDiaStackFrame **rgelt,
            /* [out] */ ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaEnumStackFramesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaEnumStackFrames * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaEnumStackFrames * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaEnumStackFrames * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IDiaEnumStackFrames * This,
            /* [in] */ ULONG celt,
            /* [out] */ IDiaStackFrame **rgelt,
            /* [out] */ ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IDiaEnumStackFrames * This);
        
        END_INTERFACE
    } IDiaEnumStackFramesVtbl;

    interface IDiaEnumStackFrames
    {
        CONST_VTBL struct IDiaEnumStackFramesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaEnumStackFrames_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaEnumStackFrames_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaEnumStackFrames_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaEnumStackFrames_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IDiaEnumStackFrames_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaEnumStackFrames_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_dia2_0000_0041 */
/* [local] */ 

typedef /* [public] */ struct __MIDL___MIDL_itf_dia2_0000_0041_0001
    {
    DWORD ulOffStart;
    DWORD cbProcSize;
    DWORD cdwLocals;
    WORD cdwParams;
    WORD cdwFlags;
    } 	FPODATA;



extern RPC_IF_HANDLE __MIDL_itf_dia2_0000_0041_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dia2_0000_0041_v0_0_s_ifspec;

#ifndef __IDiaStackWalkHelper_INTERFACE_DEFINED__
#define __IDiaStackWalkHelper_INTERFACE_DEFINED__

/* interface IDiaStackWalkHelper */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaStackWalkHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("21F81B1B-C5BB-42A3-BC4F-CCBAA75B9F19")
    IDiaStackWalkHelper : public IUnknown
    {
    public:
        virtual /* [id][helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_registerValue( 
            /* [in] */ DWORD index,
            /* [retval][out] */ ULONGLONG *pRetVal) = 0;
        
        virtual /* [id][helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_registerValue( 
            /* [in] */ DWORD index,
            /* [in] */ ULONGLONG NewVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE readMemory( 
            /* [in] */ enum MemoryTypeEnum type,
            /* [in] */ ULONGLONG va,
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE searchForReturnAddress( 
            /* [in] */ IDiaFrameData *frame,
            /* [out] */ ULONGLONG *returnAddress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE searchForReturnAddressStart( 
            /* [in] */ IDiaFrameData *frame,
            /* [in] */ ULONGLONG startAddress,
            /* [out] */ ULONGLONG *returnAddress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE frameForVA( 
            /* [in] */ ULONGLONG va,
            /* [out] */ IDiaFrameData **ppFrame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE symbolForVA( 
            /* [in] */ ULONGLONG va,
            /* [out] */ IDiaSymbol **ppSymbol) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE pdataForVA( 
            /* [in] */ ULONGLONG va,
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE imageForVA( 
            /* [in] */ ULONGLONG vaContext,
            /* [out] */ ULONGLONG *pvaImageStart) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE addressForVA( 
            /* [in] */ ULONGLONG va,
            /* [out] */ DWORD *pISect,
            /* [out] */ DWORD *pOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE numberOfFunctionFragmentsForVA( 
            /* [in] */ ULONGLONG vaFunc,
            /* [in] */ DWORD cbFunc,
            /* [out] */ DWORD *pNumFragments) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE functionFragmentsForVA( 
            /* [in] */ ULONGLONG vaFunc,
            /* [in] */ DWORD cbFunc,
            /* [in] */ DWORD cFragments,
            /* [out] */ ULONGLONG *pVaFragment,
            /* [out] */ DWORD *pLenFragment) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaStackWalkHelperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaStackWalkHelper * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaStackWalkHelper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaStackWalkHelper * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_registerValue )( 
            IDiaStackWalkHelper * This,
            /* [in] */ DWORD index,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_registerValue )( 
            IDiaStackWalkHelper * This,
            /* [in] */ DWORD index,
            /* [in] */ ULONGLONG NewVal);
        
        HRESULT ( STDMETHODCALLTYPE *readMemory )( 
            IDiaStackWalkHelper * This,
            /* [in] */ enum MemoryTypeEnum type,
            /* [in] */ ULONGLONG va,
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData);
        
        HRESULT ( STDMETHODCALLTYPE *searchForReturnAddress )( 
            IDiaStackWalkHelper * This,
            /* [in] */ IDiaFrameData *frame,
            /* [out] */ ULONGLONG *returnAddress);
        
        HRESULT ( STDMETHODCALLTYPE *searchForReturnAddressStart )( 
            IDiaStackWalkHelper * This,
            /* [in] */ IDiaFrameData *frame,
            /* [in] */ ULONGLONG startAddress,
            /* [out] */ ULONGLONG *returnAddress);
        
        HRESULT ( STDMETHODCALLTYPE *frameForVA )( 
            IDiaStackWalkHelper * This,
            /* [in] */ ULONGLONG va,
            /* [out] */ IDiaFrameData **ppFrame);
        
        HRESULT ( STDMETHODCALLTYPE *symbolForVA )( 
            IDiaStackWalkHelper * This,
            /* [in] */ ULONGLONG va,
            /* [out] */ IDiaSymbol **ppSymbol);
        
        HRESULT ( STDMETHODCALLTYPE *pdataForVA )( 
            IDiaStackWalkHelper * This,
            /* [in] */ ULONGLONG va,
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData);
        
        HRESULT ( STDMETHODCALLTYPE *imageForVA )( 
            IDiaStackWalkHelper * This,
            /* [in] */ ULONGLONG vaContext,
            /* [out] */ ULONGLONG *pvaImageStart);
        
        HRESULT ( STDMETHODCALLTYPE *addressForVA )( 
            IDiaStackWalkHelper * This,
            /* [in] */ ULONGLONG va,
            /* [out] */ DWORD *pISect,
            /* [out] */ DWORD *pOffset);
        
        HRESULT ( STDMETHODCALLTYPE *numberOfFunctionFragmentsForVA )( 
            IDiaStackWalkHelper * This,
            /* [in] */ ULONGLONG vaFunc,
            /* [in] */ DWORD cbFunc,
            /* [out] */ DWORD *pNumFragments);
        
        HRESULT ( STDMETHODCALLTYPE *functionFragmentsForVA )( 
            IDiaStackWalkHelper * This,
            /* [in] */ ULONGLONG vaFunc,
            /* [in] */ DWORD cbFunc,
            /* [in] */ DWORD cFragments,
            /* [out] */ ULONGLONG *pVaFragment,
            /* [out] */ DWORD *pLenFragment);
        
        END_INTERFACE
    } IDiaStackWalkHelperVtbl;

    interface IDiaStackWalkHelper
    {
        CONST_VTBL struct IDiaStackWalkHelperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaStackWalkHelper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaStackWalkHelper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaStackWalkHelper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaStackWalkHelper_get_registerValue(This,index,pRetVal)	\
    ( (This)->lpVtbl -> get_registerValue(This,index,pRetVal) ) 

#define IDiaStackWalkHelper_put_registerValue(This,index,NewVal)	\
    ( (This)->lpVtbl -> put_registerValue(This,index,NewVal) ) 

#define IDiaStackWalkHelper_readMemory(This,type,va,cbData,pcbData,pbData)	\
    ( (This)->lpVtbl -> readMemory(This,type,va,cbData,pcbData,pbData) ) 

#define IDiaStackWalkHelper_searchForReturnAddress(This,frame,returnAddress)	\
    ( (This)->lpVtbl -> searchForReturnAddress(This,frame,returnAddress) ) 

#define IDiaStackWalkHelper_searchForReturnAddressStart(This,frame,startAddress,returnAddress)	\
    ( (This)->lpVtbl -> searchForReturnAddressStart(This,frame,startAddress,returnAddress) ) 

#define IDiaStackWalkHelper_frameForVA(This,va,ppFrame)	\
    ( (This)->lpVtbl -> frameForVA(This,va,ppFrame) ) 

#define IDiaStackWalkHelper_symbolForVA(This,va,ppSymbol)	\
    ( (This)->lpVtbl -> symbolForVA(This,va,ppSymbol) ) 

#define IDiaStackWalkHelper_pdataForVA(This,va,cbData,pcbData,pbData)	\
    ( (This)->lpVtbl -> pdataForVA(This,va,cbData,pcbData,pbData) ) 

#define IDiaStackWalkHelper_imageForVA(This,vaContext,pvaImageStart)	\
    ( (This)->lpVtbl -> imageForVA(This,vaContext,pvaImageStart) ) 

#define IDiaStackWalkHelper_addressForVA(This,va,pISect,pOffset)	\
    ( (This)->lpVtbl -> addressForVA(This,va,pISect,pOffset) ) 

#define IDiaStackWalkHelper_numberOfFunctionFragmentsForVA(This,vaFunc,cbFunc,pNumFragments)	\
    ( (This)->lpVtbl -> numberOfFunctionFragmentsForVA(This,vaFunc,cbFunc,pNumFragments) ) 

#define IDiaStackWalkHelper_functionFragmentsForVA(This,vaFunc,cbFunc,cFragments,pVaFragment,pLenFragment)	\
    ( (This)->lpVtbl -> functionFragmentsForVA(This,vaFunc,cbFunc,cFragments,pVaFragment,pLenFragment) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaStackWalkHelper_INTERFACE_DEFINED__ */


#ifndef __IDiaStackWalker_INTERFACE_DEFINED__
#define __IDiaStackWalker_INTERFACE_DEFINED__

/* interface IDiaStackWalker */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaStackWalker;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5485216b-a54c-469f-9670-52b24d5229bb")
    IDiaStackWalker : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE getEnumFrames( 
            /* [in] */ IDiaStackWalkHelper *pHelper,
            /* [out] */ IDiaEnumStackFrames **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE getEnumFrames2( 
            /* [in] */ enum CV_CPU_TYPE_e cpuid,
            /* [in] */ IDiaStackWalkHelper *pHelper,
            /* [out] */ IDiaEnumStackFrames **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaStackWalkerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaStackWalker * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaStackWalker * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaStackWalker * This);
        
        HRESULT ( STDMETHODCALLTYPE *getEnumFrames )( 
            IDiaStackWalker * This,
            /* [in] */ IDiaStackWalkHelper *pHelper,
            /* [out] */ IDiaEnumStackFrames **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *getEnumFrames2 )( 
            IDiaStackWalker * This,
            /* [in] */ enum CV_CPU_TYPE_e cpuid,
            /* [in] */ IDiaStackWalkHelper *pHelper,
            /* [out] */ IDiaEnumStackFrames **ppEnum);
        
        END_INTERFACE
    } IDiaStackWalkerVtbl;

    interface IDiaStackWalker
    {
        CONST_VTBL struct IDiaStackWalkerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaStackWalker_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaStackWalker_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaStackWalker_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaStackWalker_getEnumFrames(This,pHelper,ppEnum)	\
    ( (This)->lpVtbl -> getEnumFrames(This,pHelper,ppEnum) ) 

#define IDiaStackWalker_getEnumFrames2(This,cpuid,pHelper,ppEnum)	\
    ( (This)->lpVtbl -> getEnumFrames2(This,cpuid,pHelper,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaStackWalker_INTERFACE_DEFINED__ */


#ifndef __IDiaStackWalkHelper2_INTERFACE_DEFINED__
#define __IDiaStackWalkHelper2_INTERFACE_DEFINED__

/* interface IDiaStackWalkHelper2 */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaStackWalkHelper2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8222c490-507b-4bef-b3bd-41dca7b5934c")
    IDiaStackWalkHelper2 : public IDiaStackWalkHelper
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaStackWalkHelper2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaStackWalkHelper2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaStackWalkHelper2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaStackWalkHelper2 * This);
        
        /* [id][helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_registerValue )( 
            IDiaStackWalkHelper2 * This,
            /* [in] */ DWORD index,
            /* [retval][out] */ ULONGLONG *pRetVal);
        
        /* [id][helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_registerValue )( 
            IDiaStackWalkHelper2 * This,
            /* [in] */ DWORD index,
            /* [in] */ ULONGLONG NewVal);
        
        HRESULT ( STDMETHODCALLTYPE *readMemory )( 
            IDiaStackWalkHelper2 * This,
            /* [in] */ enum MemoryTypeEnum type,
            /* [in] */ ULONGLONG va,
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData);
        
        HRESULT ( STDMETHODCALLTYPE *searchForReturnAddress )( 
            IDiaStackWalkHelper2 * This,
            /* [in] */ IDiaFrameData *frame,
            /* [out] */ ULONGLONG *returnAddress);
        
        HRESULT ( STDMETHODCALLTYPE *searchForReturnAddressStart )( 
            IDiaStackWalkHelper2 * This,
            /* [in] */ IDiaFrameData *frame,
            /* [in] */ ULONGLONG startAddress,
            /* [out] */ ULONGLONG *returnAddress);
        
        HRESULT ( STDMETHODCALLTYPE *frameForVA )( 
            IDiaStackWalkHelper2 * This,
            /* [in] */ ULONGLONG va,
            /* [out] */ IDiaFrameData **ppFrame);
        
        HRESULT ( STDMETHODCALLTYPE *symbolForVA )( 
            IDiaStackWalkHelper2 * This,
            /* [in] */ ULONGLONG va,
            /* [out] */ IDiaSymbol **ppSymbol);
        
        HRESULT ( STDMETHODCALLTYPE *pdataForVA )( 
            IDiaStackWalkHelper2 * This,
            /* [in] */ ULONGLONG va,
            /* [in] */ DWORD cbData,
            /* [out] */ DWORD *pcbData,
            /* [size_is][out] */ BYTE *pbData);
        
        HRESULT ( STDMETHODCALLTYPE *imageForVA )( 
            IDiaStackWalkHelper2 * This,
            /* [in] */ ULONGLONG vaContext,
            /* [out] */ ULONGLONG *pvaImageStart);
        
        HRESULT ( STDMETHODCALLTYPE *addressForVA )( 
            IDiaStackWalkHelper2 * This,
            /* [in] */ ULONGLONG va,
            /* [out] */ DWORD *pISect,
            /* [out] */ DWORD *pOffset);
        
        HRESULT ( STDMETHODCALLTYPE *numberOfFunctionFragmentsForVA )( 
            IDiaStackWalkHelper2 * This,
            /* [in] */ ULONGLONG vaFunc,
            /* [in] */ DWORD cbFunc,
            /* [out] */ DWORD *pNumFragments);
        
        HRESULT ( STDMETHODCALLTYPE *functionFragmentsForVA )( 
            IDiaStackWalkHelper2 * This,
            /* [in] */ ULONGLONG vaFunc,
            /* [in] */ DWORD cbFunc,
            /* [in] */ DWORD cFragments,
            /* [out] */ ULONGLONG *pVaFragment,
            /* [out] */ DWORD *pLenFragment);
        
        END_INTERFACE
    } IDiaStackWalkHelper2Vtbl;

    interface IDiaStackWalkHelper2
    {
        CONST_VTBL struct IDiaStackWalkHelper2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaStackWalkHelper2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaStackWalkHelper2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaStackWalkHelper2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaStackWalkHelper2_get_registerValue(This,index,pRetVal)	\
    ( (This)->lpVtbl -> get_registerValue(This,index,pRetVal) ) 

#define IDiaStackWalkHelper2_put_registerValue(This,index,NewVal)	\
    ( (This)->lpVtbl -> put_registerValue(This,index,NewVal) ) 

#define IDiaStackWalkHelper2_readMemory(This,type,va,cbData,pcbData,pbData)	\
    ( (This)->lpVtbl -> readMemory(This,type,va,cbData,pcbData,pbData) ) 

#define IDiaStackWalkHelper2_searchForReturnAddress(This,frame,returnAddress)	\
    ( (This)->lpVtbl -> searchForReturnAddress(This,frame,returnAddress) ) 

#define IDiaStackWalkHelper2_searchForReturnAddressStart(This,frame,startAddress,returnAddress)	\
    ( (This)->lpVtbl -> searchForReturnAddressStart(This,frame,startAddress,returnAddress) ) 

#define IDiaStackWalkHelper2_frameForVA(This,va,ppFrame)	\
    ( (This)->lpVtbl -> frameForVA(This,va,ppFrame) ) 

#define IDiaStackWalkHelper2_symbolForVA(This,va,ppSymbol)	\
    ( (This)->lpVtbl -> symbolForVA(This,va,ppSymbol) ) 

#define IDiaStackWalkHelper2_pdataForVA(This,va,cbData,pcbData,pbData)	\
    ( (This)->lpVtbl -> pdataForVA(This,va,cbData,pcbData,pbData) ) 

#define IDiaStackWalkHelper2_imageForVA(This,vaContext,pvaImageStart)	\
    ( (This)->lpVtbl -> imageForVA(This,vaContext,pvaImageStart) ) 

#define IDiaStackWalkHelper2_addressForVA(This,va,pISect,pOffset)	\
    ( (This)->lpVtbl -> addressForVA(This,va,pISect,pOffset) ) 

#define IDiaStackWalkHelper2_numberOfFunctionFragmentsForVA(This,vaFunc,cbFunc,pNumFragments)	\
    ( (This)->lpVtbl -> numberOfFunctionFragmentsForVA(This,vaFunc,cbFunc,pNumFragments) ) 

#define IDiaStackWalkHelper2_functionFragmentsForVA(This,vaFunc,cbFunc,cFragments,pVaFragment,pLenFragment)	\
    ( (This)->lpVtbl -> functionFragmentsForVA(This,vaFunc,cbFunc,cFragments,pVaFragment,pLenFragment) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaStackWalkHelper2_INTERFACE_DEFINED__ */


#ifndef __IDiaStackWalker2_INTERFACE_DEFINED__
#define __IDiaStackWalker2_INTERFACE_DEFINED__

/* interface IDiaStackWalker2 */
/* [unique][helpstring][local][uuid][object] */ 


EXTERN_C const IID IID_IDiaStackWalker2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7c185885-a015-4cac-9411-0f4fb39b1f3a")
    IDiaStackWalker2 : public IDiaStackWalker
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IDiaStackWalker2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDiaStackWalker2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDiaStackWalker2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDiaStackWalker2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *getEnumFrames )( 
            IDiaStackWalker2 * This,
            /* [in] */ IDiaStackWalkHelper *pHelper,
            /* [out] */ IDiaEnumStackFrames **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *getEnumFrames2 )( 
            IDiaStackWalker2 * This,
            /* [in] */ enum CV_CPU_TYPE_e cpuid,
            /* [in] */ IDiaStackWalkHelper *pHelper,
            /* [out] */ IDiaEnumStackFrames **ppEnum);
        
        END_INTERFACE
    } IDiaStackWalker2Vtbl;

    interface IDiaStackWalker2
    {
        CONST_VTBL struct IDiaStackWalker2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDiaStackWalker2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDiaStackWalker2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDiaStackWalker2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDiaStackWalker2_getEnumFrames(This,pHelper,ppEnum)	\
    ( (This)->lpVtbl -> getEnumFrames(This,pHelper,ppEnum) ) 

#define IDiaStackWalker2_getEnumFrames2(This,cpuid,pHelper,ppEnum)	\
    ( (This)->lpVtbl -> getEnumFrames2(This,cpuid,pHelper,ppEnum) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDiaStackWalker2_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


