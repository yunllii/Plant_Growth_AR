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

// System.ComponentModel.AddingNewEventHandler
struct AddingNewEventHandler_t1821432365;
// System.Object
struct Il2CppObject;
// System.ComponentModel.AddingNewEventArgs
struct AddingNewEventArgs_t3938289828;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_ComponentModel_AddingNewEventArgs3938289828.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.ComponentModel.AddingNewEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void AddingNewEventHandler__ctor_m1626954338 (AddingNewEventHandler_t1821432365 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AddingNewEventHandler::Invoke(System.Object,System.ComponentModel.AddingNewEventArgs)
extern "C"  void AddingNewEventHandler_Invoke_m2062984923 (AddingNewEventHandler_t1821432365 * __this, Il2CppObject * ___sender0, AddingNewEventArgs_t3938289828 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ComponentModel.AddingNewEventHandler::BeginInvoke(System.Object,System.ComponentModel.AddingNewEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AddingNewEventHandler_BeginInvoke_m3878227902 (AddingNewEventHandler_t1821432365 * __this, Il2CppObject * ___sender0, AddingNewEventArgs_t3938289828 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AddingNewEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void AddingNewEventHandler_EndInvoke_m3515232244 (AddingNewEventHandler_t1821432365 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
