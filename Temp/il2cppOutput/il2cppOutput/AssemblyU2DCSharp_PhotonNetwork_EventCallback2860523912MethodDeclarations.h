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

// PhotonNetwork/EventCallback
struct EventCallback_t2860523912;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void PhotonNetwork/EventCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void EventCallback__ctor_m723323585 (EventCallback_t2860523912 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork/EventCallback::Invoke(System.Byte,System.Object,System.Int32)
extern "C"  void EventCallback_Invoke_m2134878055 (EventCallback_t2860523912 * __this, uint8_t ___eventCode0, Il2CppObject * ___content1, int32_t ___senderId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult PhotonNetwork/EventCallback::BeginInvoke(System.Byte,System.Object,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EventCallback_BeginInvoke_m487510232 (EventCallback_t2860523912 * __this, uint8_t ___eventCode0, Il2CppObject * ___content1, int32_t ___senderId2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork/EventCallback::EndInvoke(System.IAsyncResult)
extern "C"  void EventCallback_EndInvoke_m1829164819 (EventCallback_t2860523912 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
