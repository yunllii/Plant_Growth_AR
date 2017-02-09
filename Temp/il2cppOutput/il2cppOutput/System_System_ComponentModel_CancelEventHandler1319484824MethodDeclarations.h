#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.ComponentModel.CancelEventHandler
struct CancelEventHandler_t1319484824;
// System.Object
struct Il2CppObject;
// System.ComponentModel.CancelEventArgs
struct CancelEventArgs_t1976499267;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_ComponentModel_CancelEventArgs1976499267.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.ComponentModel.CancelEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void CancelEventHandler__ctor_m3194024589 (CancelEventHandler_t1319484824 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.CancelEventHandler::Invoke(System.Object,System.ComponentModel.CancelEventArgs)
extern "C"  void CancelEventHandler_Invoke_m2665395927 (CancelEventHandler_t1319484824 * __this, Il2CppObject * ___sender0, CancelEventArgs_t1976499267 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ComponentModel.CancelEventHandler::BeginInvoke(System.Object,System.ComponentModel.CancelEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CancelEventHandler_BeginInvoke_m865654520 (CancelEventHandler_t1319484824 * __this, Il2CppObject * ___sender0, CancelEventArgs_t1976499267 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.CancelEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void CancelEventHandler_EndInvoke_m2403495511 (CancelEventHandler_t1319484824 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
