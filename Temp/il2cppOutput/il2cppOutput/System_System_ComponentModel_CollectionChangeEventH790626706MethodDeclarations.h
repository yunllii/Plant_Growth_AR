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

// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t790626706;
// System.Object
struct Il2CppObject;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t1734749345;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_ComponentModel_CollectionChangeEvent1734749345.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.ComponentModel.CollectionChangeEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void CollectionChangeEventHandler__ctor_m471418715 (CollectionChangeEventHandler_t790626706 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.CollectionChangeEventHandler::Invoke(System.Object,System.ComponentModel.CollectionChangeEventArgs)
extern "C"  void CollectionChangeEventHandler_Invoke_m1100007127 (CollectionChangeEventHandler_t790626706 * __this, Il2CppObject * ___sender0, CollectionChangeEventArgs_t1734749345 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ComponentModel.CollectionChangeEventHandler::BeginInvoke(System.Object,System.ComponentModel.CollectionChangeEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CollectionChangeEventHandler_BeginInvoke_m1462915896 (CollectionChangeEventHandler_t790626706 * __this, Il2CppObject * ___sender0, CollectionChangeEventArgs_t1734749345 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.CollectionChangeEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void CollectionChangeEventHandler_EndInvoke_m3482772445 (CollectionChangeEventHandler_t790626706 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
