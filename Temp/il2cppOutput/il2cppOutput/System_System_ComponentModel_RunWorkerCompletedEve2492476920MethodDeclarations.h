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

// System.ComponentModel.RunWorkerCompletedEventHandler
struct RunWorkerCompletedEventHandler_t2492476920;
// System.Object
struct Il2CppObject;
// System.ComponentModel.RunWorkerCompletedEventArgs
struct RunWorkerCompletedEventArgs_t3512304465;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_ComponentModel_RunWorkerCompletedEve3512304465.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.ComponentModel.RunWorkerCompletedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void RunWorkerCompletedEventHandler__ctor_m844713237 (RunWorkerCompletedEventHandler_t2492476920 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.RunWorkerCompletedEventHandler::Invoke(System.Object,System.ComponentModel.RunWorkerCompletedEventArgs)
extern "C"  void RunWorkerCompletedEventHandler_Invoke_m831963343 (RunWorkerCompletedEventHandler_t2492476920 * __this, Il2CppObject * ___sender0, RunWorkerCompletedEventArgs_t3512304465 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ComponentModel.RunWorkerCompletedEventHandler::BeginInvoke(System.Object,System.ComponentModel.RunWorkerCompletedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * RunWorkerCompletedEventHandler_BeginInvoke_m349374840 (RunWorkerCompletedEventHandler_t2492476920 * __this, Il2CppObject * ___sender0, RunWorkerCompletedEventArgs_t3512304465 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.RunWorkerCompletedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void RunWorkerCompletedEventHandler_EndInvoke_m2673002455 (RunWorkerCompletedEventHandler_t2492476920 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
