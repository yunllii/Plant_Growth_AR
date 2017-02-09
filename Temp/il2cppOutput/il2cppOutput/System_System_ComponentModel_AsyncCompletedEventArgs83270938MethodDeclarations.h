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

// System.ComponentModel.AsyncCompletedEventArgs
struct AsyncCompletedEventArgs_t83270938;
// System.Exception
struct Exception_t1927440687;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.ComponentModel.AsyncCompletedEventArgs::.ctor(System.Exception,System.Boolean,System.Object)
extern "C"  void AsyncCompletedEventArgs__ctor_m2035203890 (AsyncCompletedEventArgs_t83270938 * __this, Exception_t1927440687 * ___error0, bool ___cancelled1, Il2CppObject * ___userState2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AsyncCompletedEventArgs::RaiseExceptionIfNecessary()
extern "C"  void AsyncCompletedEventArgs_RaiseExceptionIfNecessary_m3915856170 (AsyncCompletedEventArgs_t83270938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.AsyncCompletedEventArgs::get_Cancelled()
extern "C"  bool AsyncCompletedEventArgs_get_Cancelled_m1739331837 (AsyncCompletedEventArgs_t83270938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.ComponentModel.AsyncCompletedEventArgs::get_Error()
extern "C"  Exception_t1927440687 * AsyncCompletedEventArgs_get_Error_m3178619961 (AsyncCompletedEventArgs_t83270938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.AsyncCompletedEventArgs::get_UserState()
extern "C"  Il2CppObject * AsyncCompletedEventArgs_get_UserState_m3836331621 (AsyncCompletedEventArgs_t83270938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
