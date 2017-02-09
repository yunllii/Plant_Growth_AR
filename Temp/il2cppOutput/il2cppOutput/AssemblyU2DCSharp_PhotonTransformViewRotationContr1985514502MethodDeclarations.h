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

// PhotonTransformViewRotationControl
struct PhotonTransformViewRotationControl_t1985514502;
// PhotonTransformViewRotationModel
struct PhotonTransformViewRotationModel_t3365719546;
// PhotonStream
struct PhotonStream_t2436786422;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonTransformViewRotationModel3365719546.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "AssemblyU2DCSharp_PhotonStream2436786422.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo13590565.h"

// System.Void PhotonTransformViewRotationControl::.ctor(PhotonTransformViewRotationModel)
extern "C"  void PhotonTransformViewRotationControl__ctor_m718966779 (PhotonTransformViewRotationControl_t1985514502 * __this, PhotonTransformViewRotationModel_t3365719546 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion PhotonTransformViewRotationControl::GetNetworkRotation()
extern "C"  Quaternion_t4030073918  PhotonTransformViewRotationControl_GetNetworkRotation_m2746163419 (PhotonTransformViewRotationControl_t1985514502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion PhotonTransformViewRotationControl::GetRotation(UnityEngine.Quaternion)
extern "C"  Quaternion_t4030073918  PhotonTransformViewRotationControl_GetRotation_m3476470212 (PhotonTransformViewRotationControl_t1985514502 * __this, Quaternion_t4030073918  ___currentRotation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformViewRotationControl::OnPhotonSerializeView(UnityEngine.Quaternion,PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonTransformViewRotationControl_OnPhotonSerializeView_m428693993 (PhotonTransformViewRotationControl_t1985514502 * __this, Quaternion_t4030073918  ___currentRotation0, PhotonStream_t2436786422 * ___stream1, PhotonMessageInfo_t13590565  ___info2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
