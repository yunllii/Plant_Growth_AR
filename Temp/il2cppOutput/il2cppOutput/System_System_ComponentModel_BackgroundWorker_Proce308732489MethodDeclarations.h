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

// System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler
struct ProcessWorkerEventHandler_t308732489;
// System.Object
struct Il2CppObject;
// System.ComponentModel.AsyncOperation
struct AsyncOperation_t1185541675;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t296893742;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_ComponentModel_AsyncOperation1185541675.h"
#include "mscorlib_System_Threading_SendOrPostCallback296893742.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ProcessWorkerEventHandler__ctor_m3338224045 (ProcessWorkerEventHandler_t308732489 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler::Invoke(System.Object,System.ComponentModel.AsyncOperation,System.Threading.SendOrPostCallback)
extern "C"  void ProcessWorkerEventHandler_Invoke_m3024089966 (ProcessWorkerEventHandler_t308732489 * __this, Il2CppObject * ___argument0, AsyncOperation_t1185541675 * ___async1, SendOrPostCallback_t296893742 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler::BeginInvoke(System.Object,System.ComponentModel.AsyncOperation,System.Threading.SendOrPostCallback,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ProcessWorkerEventHandler_BeginInvoke_m2707848517 (ProcessWorkerEventHandler_t308732489 * __this, Il2CppObject * ___argument0, AsyncOperation_t1185541675 * ___async1, SendOrPostCallback_t296893742 * ___callback2, AsyncCallback_t163412349 * ____callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ProcessWorkerEventHandler_EndInvoke_m2430774779 (ProcessWorkerEventHandler_t308732489 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
