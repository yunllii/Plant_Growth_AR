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

// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t3042952059;
// System.Object
struct Il2CppObject;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t1689446432;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_ComponentModel_PropertyChangedEventA1689446432.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.ComponentModel.PropertyChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void PropertyChangedEventHandler__ctor_m3283190984 (PropertyChangedEventHandler_t3042952059 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyChangedEventHandler::Invoke(System.Object,System.ComponentModel.PropertyChangedEventArgs)
extern "C"  void PropertyChangedEventHandler_Invoke_m3733684827 (PropertyChangedEventHandler_t3042952059 * __this, Il2CppObject * ___sender0, PropertyChangedEventArgs_t1689446432 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ComponentModel.PropertyChangedEventHandler::BeginInvoke(System.Object,System.ComponentModel.PropertyChangedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * PropertyChangedEventHandler_BeginInvoke_m3150012958 (PropertyChangedEventHandler_t3042952059 * __this, Il2CppObject * ___sender0, PropertyChangedEventArgs_t1689446432 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void PropertyChangedEventHandler_EndInvoke_m109495738 (PropertyChangedEventHandler_t3042952059 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
