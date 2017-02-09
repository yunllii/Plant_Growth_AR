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

// PhotonStream
struct PhotonStream_t2436786422;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// PhotonPlayer
struct PhotonPlayer_t4120608827;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_PhotonPlayer4120608827.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// System.Void PhotonStream::.ctor(System.Boolean,System.Object[])
extern "C"  void PhotonStream__ctor_m2691747938 (PhotonStream_t2436786422 * __this, bool ___write0, ObjectU5BU5D_t3614634134* ___incomingData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::SetReadStream(System.Object[],System.Byte)
extern "C"  void PhotonStream_SetReadStream_m1125638310 (PhotonStream_t2436786422 * __this, ObjectU5BU5D_t3614634134* ___incomingData0, uint8_t ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::ResetWriteStream()
extern "C"  void PhotonStream_ResetWriteStream_m306633389 (PhotonStream_t2436786422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonStream::get_isWriting()
extern "C"  bool PhotonStream_get_isWriting_m57365492 (PhotonStream_t2436786422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonStream::get_isReading()
extern "C"  bool PhotonStream_get_isReading_m2438839208 (PhotonStream_t2436786422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonStream::get_Count()
extern "C"  int32_t PhotonStream_get_Count_m741316181 (PhotonStream_t2436786422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PhotonStream::ReceiveNext()
extern "C"  Il2CppObject * PhotonStream_ReceiveNext_m1257961300 (PhotonStream_t2436786422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PhotonStream::PeekNext()
extern "C"  Il2CppObject * PhotonStream_PeekNext_m1232570768 (PhotonStream_t2436786422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::SendNext(System.Object)
extern "C"  void PhotonStream_SendNext_m4179565666 (PhotonStream_t2436786422 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] PhotonStream::ToArray()
extern "C"  ObjectU5BU5D_t3614634134* PhotonStream_ToArray_m2859696286 (PhotonStream_t2436786422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Boolean&)
extern "C"  void PhotonStream_Serialize_m1314004314 (PhotonStream_t2436786422 * __this, bool* ___myBool0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Int32&)
extern "C"  void PhotonStream_Serialize_m1134391686 (PhotonStream_t2436786422 * __this, int32_t* ___myInt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.String&)
extern "C"  void PhotonStream_Serialize_m2222493755 (PhotonStream_t2436786422 * __this, String_t** ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Char&)
extern "C"  void PhotonStream_Serialize_m966898148 (PhotonStream_t2436786422 * __this, Il2CppChar* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Int16&)
extern "C"  void PhotonStream_Serialize_m1699041752 (PhotonStream_t2436786422 * __this, int16_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Single&)
extern "C"  void PhotonStream_Serialize_m3071372584 (PhotonStream_t2436786422 * __this, float* ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(PhotonPlayer&)
extern "C"  void PhotonStream_Serialize_m2474985794 (PhotonStream_t2436786422 * __this, PhotonPlayer_t4120608827 ** ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(UnityEngine.Vector3&)
extern "C"  void PhotonStream_Serialize_m3909299576 (PhotonStream_t2436786422 * __this, Vector3_t2243707580 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(UnityEngine.Vector2&)
extern "C"  void PhotonStream_Serialize_m3909299481 (PhotonStream_t2436786422 * __this, Vector2_t2243707579 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(UnityEngine.Quaternion&)
extern "C"  void PhotonStream_Serialize_m4231407122 (PhotonStream_t2436786422 * __this, Quaternion_t4030073918 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
