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

// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t2276411942;
// System.Object
struct Il2CppObject;
// System.ComponentModel.ListChangedEventArgs
struct ListChangedEventArgs_t3132270315;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_ComponentModel_ListChangedEventArgs3132270315.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.ComponentModel.ListChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ListChangedEventHandler__ctor_m1609476863 (ListChangedEventHandler_t2276411942 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ListChangedEventHandler::Invoke(System.Object,System.ComponentModel.ListChangedEventArgs)
extern "C"  void ListChangedEventHandler_Invoke_m2113751515 (ListChangedEventHandler_t2276411942 * __this, Il2CppObject * ___sender0, ListChangedEventArgs_t3132270315 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ComponentModel.ListChangedEventHandler::BeginInvoke(System.Object,System.ComponentModel.ListChangedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ListChangedEventHandler_BeginInvoke_m865365000 (ListChangedEventHandler_t2276411942 * __this, Il2CppObject * ___sender0, ListChangedEventArgs_t3132270315 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ListChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ListChangedEventHandler_EndInvoke_m2224075705 (ListChangedEventHandler_t2276411942 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
