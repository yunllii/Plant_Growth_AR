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

// System.ComponentModel.ProgressChangedEventHandler
struct ProgressChangedEventHandler_t839864825;
// System.Object
struct Il2CppObject;
// System.ComponentModel.ProgressChangedEventArgs
struct ProgressChangedEventArgs_t711712958;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_ComponentModel_ProgressChangedEventAr711712958.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.ComponentModel.ProgressChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ProgressChangedEventHandler__ctor_m1504811554 (ProgressChangedEventHandler_t839864825 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ProgressChangedEventHandler::Invoke(System.Object,System.ComponentModel.ProgressChangedEventArgs)
extern "C"  void ProgressChangedEventHandler_Invoke_m3688338267 (ProgressChangedEventHandler_t839864825 * __this, Il2CppObject * ___sender0, ProgressChangedEventArgs_t711712958 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ComponentModel.ProgressChangedEventHandler::BeginInvoke(System.Object,System.ComponentModel.ProgressChangedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ProgressChangedEventHandler_BeginInvoke_m1734111986 (ProgressChangedEventHandler_t839864825 * __this, Il2CppObject * ___sender0, ProgressChangedEventArgs_t711712958 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ProgressChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ProgressChangedEventHandler_EndInvoke_m755706576 (ProgressChangedEventHandler_t839864825 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
