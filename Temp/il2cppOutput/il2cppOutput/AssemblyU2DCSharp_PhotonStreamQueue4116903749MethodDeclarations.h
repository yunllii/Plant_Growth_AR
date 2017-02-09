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

// PhotonStreamQueue
struct PhotonStreamQueue_t4116903749;
// System.Object
struct Il2CppObject;
// PhotonStream
struct PhotonStream_t2436786422;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_PhotonStream2436786422.h"

// System.Void PhotonStreamQueue::.ctor(System.Int32)
extern "C"  void PhotonStreamQueue__ctor_m4162442705 (PhotonStreamQueue_t4116903749 * __this, int32_t ___sampleRate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::BeginWritePackage()
extern "C"  void PhotonStreamQueue_BeginWritePackage_m3236046076 (PhotonStreamQueue_t4116903749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::Reset()
extern "C"  void PhotonStreamQueue_Reset_m4204875593 (PhotonStreamQueue_t4116903749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::SendNext(System.Object)
extern "C"  void PhotonStreamQueue_SendNext_m3299872793 (PhotonStreamQueue_t4116903749 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonStreamQueue::HasQueuedObjects()
extern "C"  bool PhotonStreamQueue_HasQueuedObjects_m3856619129 (PhotonStreamQueue_t4116903749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PhotonStreamQueue::ReceiveNext()
extern "C"  Il2CppObject * PhotonStreamQueue_ReceiveNext_m3790629761 (PhotonStreamQueue_t4116903749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::Serialize(PhotonStream)
extern "C"  void PhotonStreamQueue_Serialize_m1991737264 (PhotonStreamQueue_t4116903749 * __this, PhotonStream_t2436786422 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::Deserialize(PhotonStream)
extern "C"  void PhotonStreamQueue_Deserialize_m1987860289 (PhotonStreamQueue_t4116903749 * __this, PhotonStream_t2436786422 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
