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

// PickupCamera
struct PickupCamera_t291866563;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void PickupCamera::.ctor()
extern "C"  void PickupCamera__ctor_m4030946098 (PickupCamera_t291866563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::OnEnable()
extern "C"  void PickupCamera_OnEnable_m1506604270 (PickupCamera_t291866563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::DebugDrawStuff()
extern "C"  void PickupCamera_DebugDrawStuff_m3533359897 (PickupCamera_t291866563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PickupCamera::AngleDistance(System.Single,System.Single)
extern "C"  float PickupCamera_AngleDistance_m75338966 (PickupCamera_t291866563 * __this, float ___a0, float ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::Apply(UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void PickupCamera_Apply_m2882436808 (PickupCamera_t291866563 * __this, Transform_t3275118058 * ___dummyTarget0, Vector3_t2243707580  ___dummyCenter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::LateUpdate()
extern "C"  void PickupCamera_LateUpdate_m2113823431 (PickupCamera_t291866563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::Cut(UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void PickupCamera_Cut_m4122755116 (PickupCamera_t291866563 * __this, Transform_t3275118058 * ___dummyTarget0, Vector3_t2243707580  ___dummyCenter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::SetUpRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void PickupCamera_SetUpRotation_m2063110085 (PickupCamera_t291866563 * __this, Vector3_t2243707580  ___centerPos0, Vector3_t2243707580  ___headPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PickupCamera::GetCenterOffset()
extern "C"  Vector3_t2243707580  PickupCamera_GetCenterOffset_m4042059270 (PickupCamera_t291866563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
