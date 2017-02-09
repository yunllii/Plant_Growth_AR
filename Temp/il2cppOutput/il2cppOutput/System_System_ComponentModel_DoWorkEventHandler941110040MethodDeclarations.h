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

// System.ComponentModel.DoWorkEventHandler
struct DoWorkEventHandler_t941110040;
// System.Object
struct Il2CppObject;
// System.ComponentModel.DoWorkEventArgs
struct DoWorkEventArgs_t62745097;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_ComponentModel_DoWorkEventArgs62745097.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.ComponentModel.DoWorkEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void DoWorkEventHandler__ctor_m4071938557 (DoWorkEventHandler_t941110040 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DoWorkEventHandler::Invoke(System.Object,System.ComponentModel.DoWorkEventArgs)
extern "C"  void DoWorkEventHandler_Invoke_m76602815 (DoWorkEventHandler_t941110040 * __this, Il2CppObject * ___sender0, DoWorkEventArgs_t62745097 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ComponentModel.DoWorkEventHandler::BeginInvoke(System.Object,System.ComponentModel.DoWorkEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DoWorkEventHandler_BeginInvoke_m3186765304 (DoWorkEventHandler_t941110040 * __this, Il2CppObject * ___sender0, DoWorkEventArgs_t62745097 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DoWorkEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void DoWorkEventHandler_EndInvoke_m3431321103 (DoWorkEventHandler_t941110040 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
