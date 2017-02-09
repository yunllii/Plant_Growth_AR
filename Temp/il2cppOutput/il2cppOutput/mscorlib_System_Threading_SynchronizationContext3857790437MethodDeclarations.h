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

// System.Threading.SynchronizationContext
struct SynchronizationContext_t3857790437;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t296893742;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_SendOrPostCallback296893742.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Threading_SynchronizationContext3857790437.h"

// System.Void System.Threading.SynchronizationContext::.ctor()
extern "C"  void SynchronizationContext__ctor_m1576930414 (SynchronizationContext_t3857790437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
extern "C"  SynchronizationContext_t3857790437 * SynchronizationContext_get_Current_m2617498083 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SynchronizationContext::OperationCompleted()
extern "C"  void SynchronizationContext_OperationCompleted_m3361952066 (SynchronizationContext_t3857790437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SynchronizationContext::OperationStarted()
extern "C"  void SynchronizationContext_OperationStarted_m2012044278 (SynchronizationContext_t3857790437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object)
extern "C"  void SynchronizationContext_Post_m841987043 (SynchronizationContext_t3857790437 * __this, SendOrPostCallback_t296893742 * ___d0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SynchronizationContext::SetSynchronizationContext(System.Threading.SynchronizationContext)
extern "C"  void SynchronizationContext_SetSynchronizationContext_m951246343 (Il2CppObject * __this /* static, unused */, SynchronizationContext_t3857790437 * ___syncContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
