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

// System.ComponentModel.AsyncOperation
struct AsyncOperation_t1185541675;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t3857790437;
// System.Object
struct Il2CppObject;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t296893742;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_SynchronizationContext3857790437.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Threading_SendOrPostCallback296893742.h"

// System.Void System.ComponentModel.AsyncOperation::.ctor(System.Threading.SynchronizationContext,System.Object)
extern "C"  void AsyncOperation__ctor_m3700624966 (AsyncOperation_t1185541675 * __this, SynchronizationContext_t3857790437 * ___ctx0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AsyncOperation::Finalize()
extern "C"  void AsyncOperation_Finalize_m91685994 (AsyncOperation_t1185541675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.SynchronizationContext System.ComponentModel.AsyncOperation::get_SynchronizationContext()
extern "C"  SynchronizationContext_t3857790437 * AsyncOperation_get_SynchronizationContext_m1274487589 (AsyncOperation_t1185541675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.AsyncOperation::get_UserSuppliedState()
extern "C"  Il2CppObject * AsyncOperation_get_UserSuppliedState_m2545295990 (AsyncOperation_t1185541675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AsyncOperation::OperationCompleted()
extern "C"  void AsyncOperation_OperationCompleted_m3178177178 (AsyncOperation_t1185541675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AsyncOperation::Post(System.Threading.SendOrPostCallback,System.Object)
extern "C"  void AsyncOperation_Post_m3167334613 (AsyncOperation_t1185541675 * __this, SendOrPostCallback_t296893742 * ___d0, Il2CppObject * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AsyncOperation::PostOperationCompleted(System.Threading.SendOrPostCallback,System.Object)
extern "C"  void AsyncOperation_PostOperationCompleted_m2278411045 (AsyncOperation_t1185541675 * __this, SendOrPostCallback_t296893742 * ___d0, Il2CppObject * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
