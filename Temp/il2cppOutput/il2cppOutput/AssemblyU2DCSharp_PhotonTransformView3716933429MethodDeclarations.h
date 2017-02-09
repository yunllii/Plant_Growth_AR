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

// PhotonTransformView
struct PhotonTransformView_t3716933429;
// PhotonStream
struct PhotonStream_t2436786422;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_PhotonStream2436786422.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo13590565.h"

// System.Void PhotonTransformView::.ctor()
extern "C"  void PhotonTransformView__ctor_m1840791306 (PhotonTransformView_t3716933429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::Awake()
extern "C"  void PhotonTransformView_Awake_m3363353361 (PhotonTransformView_t3716933429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::OnEnable()
extern "C"  void PhotonTransformView_OnEnable_m408664410 (PhotonTransformView_t3716933429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::Update()
extern "C"  void PhotonTransformView_Update_m2203376413 (PhotonTransformView_t3716933429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::UpdatePosition()
extern "C"  void PhotonTransformView_UpdatePosition_m3981319558 (PhotonTransformView_t3716933429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::UpdateRotation()
extern "C"  void PhotonTransformView_UpdateRotation_m1161785829 (PhotonTransformView_t3716933429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::UpdateScale()
extern "C"  void PhotonTransformView_UpdateScale_m4057082041 (PhotonTransformView_t3716933429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::SetSynchronizedValues(UnityEngine.Vector3,System.Single)
extern "C"  void PhotonTransformView_SetSynchronizedValues_m894657496 (PhotonTransformView_t3716933429 * __this, Vector3_t2243707580  ___speed0, float ___turnSpeed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void PhotonTransformView_OnPhotonSerializeView_m3748007069 (PhotonTransformView_t3716933429 * __this, PhotonStream_t2436786422 * ___stream0, PhotonMessageInfo_t13590565  ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonTransformView::DoDrawEstimatedPositionError()
extern "C"  void PhotonTransformView_DoDrawEstimatedPositionError_m3688390398 (PhotonTransformView_t3716933429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
