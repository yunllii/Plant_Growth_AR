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

// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_t626922954;
// System.Object
struct Il2CppObject;
// System.ComponentModel.PropertyChangingEventArgs
struct PropertyChangingEventArgs_t2525320927;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_ComponentModel_PropertyChangingEvent2525320927.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.ComponentModel.PropertyChangingEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void PropertyChangingEventHandler__ctor_m670600675 (PropertyChangingEventHandler_t626922954 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyChangingEventHandler::Invoke(System.Object,System.ComponentModel.PropertyChangingEventArgs)
extern "C"  void PropertyChangingEventHandler_Invoke_m2146482207 (PropertyChangingEventHandler_t626922954 * __this, Il2CppObject * ___sender0, PropertyChangingEventArgs_t2525320927 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ComponentModel.PropertyChangingEventHandler::BeginInvoke(System.Object,System.ComponentModel.PropertyChangingEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * PropertyChangingEventHandler_BeginInvoke_m1734815416 (PropertyChangingEventHandler_t626922954 * __this, Il2CppObject * ___sender0, PropertyChangingEventArgs_t2525320927 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyChangingEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void PropertyChangingEventHandler_EndInvoke_m377131885 (PropertyChangingEventHandler_t626922954 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
