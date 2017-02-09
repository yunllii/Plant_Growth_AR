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

// System.ComponentModel.RunWorkerCompletedEventArgs
struct RunWorkerCompletedEventArgs_t3512304465;
// System.Object
struct Il2CppObject;
// System.Exception
struct Exception_t1927440687;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Exception1927440687.h"

// System.Void System.ComponentModel.RunWorkerCompletedEventArgs::.ctor(System.Object,System.Exception,System.Boolean)
extern "C"  void RunWorkerCompletedEventArgs__ctor_m1889637151 (RunWorkerCompletedEventArgs_t3512304465 * __this, Il2CppObject * ___result0, Exception_t1927440687 * ___error1, bool ___cancelled2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.RunWorkerCompletedEventArgs::get_Result()
extern "C"  Il2CppObject * RunWorkerCompletedEventArgs_get_Result_m76206631 (RunWorkerCompletedEventArgs_t3512304465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.RunWorkerCompletedEventArgs::get_UserState()
extern "C"  Il2CppObject * RunWorkerCompletedEventArgs_get_UserState_m1215116594 (RunWorkerCompletedEventArgs_t3512304465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
