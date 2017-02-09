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

// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t1159648263;
// System.Object
struct Il2CppObject;
// ExitGames.Client.Photon.StreamBuffer
struct StreamBuffer_t3747118964;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_StreamBuffe3747118964.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void ExitGames.Client.Photon.SerializeStreamMethod::.ctor(System.Object,System.IntPtr)
extern "C"  void SerializeStreamMethod__ctor_m3895968895 (SerializeStreamMethod_t1159648263 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 ExitGames.Client.Photon.SerializeStreamMethod::Invoke(ExitGames.Client.Photon.StreamBuffer,System.Object)
extern "C"  int16_t SerializeStreamMethod_Invoke_m2166009909 (SerializeStreamMethod_t1159648263 * __this, StreamBuffer_t3747118964 * ___outStream0, Il2CppObject * ___customObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ExitGames.Client.Photon.SerializeStreamMethod::BeginInvoke(ExitGames.Client.Photon.StreamBuffer,System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SerializeStreamMethod_BeginInvoke_m2369742212 (SerializeStreamMethod_t1159648263 * __this, StreamBuffer_t3747118964 * ___outStream0, Il2CppObject * ___customObject1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 ExitGames.Client.Photon.SerializeStreamMethod::EndInvoke(System.IAsyncResult)
extern "C"  int16_t SerializeStreamMethod_EndInvoke_m1851368829 (SerializeStreamMethod_t1159648263 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
