﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.ComponentModel.RefreshEventHandler
struct RefreshEventHandler_t456069287;
// System.Object
struct Il2CppObject;
// System.ComponentModel.RefreshEventArgs
struct RefreshEventArgs_t2077477224;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_ComponentModel_RefreshEventArgs2077477224.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.ComponentModel.RefreshEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void RefreshEventHandler__ctor_m364042240 (RefreshEventHandler_t456069287 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.RefreshEventHandler::Invoke(System.ComponentModel.RefreshEventArgs)
extern "C"  void RefreshEventHandler_Invoke_m2415338745 (RefreshEventHandler_t456069287 * __this, RefreshEventArgs_t2077477224 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ComponentModel.RefreshEventHandler::BeginInvoke(System.ComponentModel.RefreshEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * RefreshEventHandler_BeginInvoke_m195317252 (RefreshEventHandler_t456069287 * __this, RefreshEventArgs_t2077477224 * ___e0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.RefreshEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void RefreshEventHandler_EndInvoke_m439483870 (RefreshEventHandler_t456069287 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
