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

// PhotonTransformViewScaleControl
struct PhotonTransformViewScaleControl_t1333660648;
// PhotonTransformViewScaleModel
struct PhotonTransformViewScaleModel_t4204778372;
// PhotonStream
struct PhotonStream_t2436786422;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonTransformViewScaleModel4204778372.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_PhotonStream2436786422.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo13590565.h"

// System.Void PhotonTransformViewScaleControl::.ctor(PhotonTransformViewScaleModel)
extern "C"  void PhotonTransformViewScaleControl__ctor_m3523283867 (PhotonTransformViewScaleControl_t1333660648 * __this, PhotonTransformViewScaleModel_t4204778372 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewScaleControl::GetNetworkScale()
extern "C"  Vector3_t2243707580  PhotonTransformViewScaleControl_GetNetworkScale_m3355745153 (PhotonTransformViewScaleControl_t1333660648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PhotonTransformViewScaleControl::GetScale(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  PhotonTransformViewScaleControl_GetScale_m2215730836 (PhotonTransformViewScaleControl_t1333660648 * __this, Vector3_t2243707580  ___currentScale0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewScaleControl::OnPhotonSerializeView(UnityEngine.Vector3,PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonTransformViewScaleControl_OnPhotonSerializeView_m836806863 (PhotonTransformViewScaleControl_t1333660648 * __this, Vector3_t2243707580  ___currentScale0, PhotonStream_t2436786422 * ___stream1, PhotonMessageInfo_t13590565  ___info2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
