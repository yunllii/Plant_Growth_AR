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

// System.ComponentModel.HandledEventHandler
struct HandledEventHandler_t1123367144;
// System.Object
struct Il2CppObject;
// System.ComponentModel.HandledEventArgs
struct HandledEventArgs_t1685735245;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_ComponentModel_HandledEventArgs1685735245.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.ComponentModel.HandledEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void HandledEventHandler__ctor_m1229195149 (HandledEventHandler_t1123367144 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.HandledEventHandler::Invoke(System.Object,System.ComponentModel.HandledEventArgs)
extern "C"  void HandledEventHandler_Invoke_m1463126811 (HandledEventHandler_t1123367144 * __this, Il2CppObject * ___sender0, HandledEventArgs_t1685735245 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ComponentModel.HandledEventHandler::BeginInvoke(System.Object,System.ComponentModel.HandledEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * HandledEventHandler_BeginInvoke_m3721665580 (HandledEventHandler_t1123367144 * __this, Il2CppObject * ___sender0, HandledEventArgs_t1685735245 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.HandledEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void HandledEventHandler_EndInvoke_m1380087803 (HandledEventHandler_t1123367144 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
