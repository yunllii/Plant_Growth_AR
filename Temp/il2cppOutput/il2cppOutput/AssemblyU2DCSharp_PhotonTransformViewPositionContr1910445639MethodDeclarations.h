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

// PhotonTransformViewPositionControl
struct PhotonTransformViewPositionControl_t1910445639;
// PhotonTransformViewPositionModel
struct PhotonTransformViewPositionModel_t1204247907;
// PhotonStream
struct PhotonStream_t2436786422;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonTransformViewPositionModel1204247907.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_PhotonStream2436786422.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo13590565.h"

// System.Void PhotonTransformViewPositionControl::.ctor(PhotonTransformViewPositionModel)
extern "C"  void PhotonTransformViewPositionControl__ctor_m1576784027 (PhotonTransformViewPositionControl_t1910445639 * __this, PhotonTransformViewPositionModel_t1204247907 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewPositionControl::GetOldestStoredNetworkPosition()
extern "C"  Vector3_t2243707580  PhotonTransformViewPositionControl_GetOldestStoredNetworkPosition_m949989015 (PhotonTransformViewPositionControl_t1910445639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewPositionControl::SetSynchronizedValues(UnityEngine.Vector3,System.Single)
extern "C"  void PhotonTransformViewPositionControl_SetSynchronizedValues_m2273102306 (PhotonTransformViewPositionControl_t1910445639 * __this, Vector3_t2243707580  ___speed0, float ___turnSpeed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewPositionControl::UpdatePosition(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  PhotonTransformViewPositionControl_UpdatePosition_m3778718081 (PhotonTransformViewPositionControl_t1910445639 * __this, Vector3_t2243707580  ___currentPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewPositionControl::GetNetworkPosition()
extern "C"  Vector3_t2243707580  PhotonTransformViewPositionControl_GetNetworkPosition_m3036365765 (PhotonTransformViewPositionControl_t1910445639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewPositionControl::GetExtrapolatedPositionOffset()
extern "C"  Vector3_t2243707580  PhotonTransformViewPositionControl_GetExtrapolatedPositionOffset_m3045032263 (PhotonTransformViewPositionControl_t1910445639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewPositionControl::OnPhotonSerializeView(UnityEngine.Vector3,PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonTransformViewPositionControl_OnPhotonSerializeView_m4214735106 (PhotonTransformViewPositionControl_t1910445639 * __this, Vector3_t2243707580  ___currentPosition0, PhotonStream_t2436786422 * ___stream1, PhotonMessageInfo_t13590565  ___info2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewPositionControl::SerializeData(UnityEngine.Vector3,PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonTransformViewPositionControl_SerializeData_m2694634166 (PhotonTransformViewPositionControl_t1910445639 * __this, Vector3_t2243707580  ___currentPosition0, PhotonStream_t2436786422 * ___stream1, PhotonMessageInfo_t13590565  ___info2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewPositionControl::DeserializeData(PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonTransformViewPositionControl_DeserializeData_m1076973874 (PhotonTransformViewPositionControl_t1910445639 * __this, PhotonStream_t2436786422 * ___stream0, PhotonMessageInfo_t13590565  ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
