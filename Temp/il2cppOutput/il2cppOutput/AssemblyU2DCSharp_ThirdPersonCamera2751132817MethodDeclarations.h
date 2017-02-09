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

// ThirdPersonCamera
struct ThirdPersonCamera_t2751132817;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void ThirdPersonCamera::.ctor()
extern "C"  void ThirdPersonCamera__ctor_m2805428026 (ThirdPersonCamera_t2751132817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::OnEnable()
extern "C"  void ThirdPersonCamera_OnEnable_m2298864226 (ThirdPersonCamera_t2751132817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::DebugDrawStuff()
extern "C"  void ThirdPersonCamera_DebugDrawStuff_m2271167903 (ThirdPersonCamera_t2751132817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonCamera::AngleDistance(System.Single,System.Single)
extern "C"  float ThirdPersonCamera_AngleDistance_m523781778 (ThirdPersonCamera_t2751132817 * __this, float ___a0, float ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::Apply(UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void ThirdPersonCamera_Apply_m452712632 (ThirdPersonCamera_t2751132817 * __this, Transform_t3275118058 * ___dummyTarget0, Vector3_t2243707580  ___dummyCenter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::LateUpdate()
extern "C"  void ThirdPersonCamera_LateUpdate_m466960169 (ThirdPersonCamera_t2751132817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::Cut(UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void ThirdPersonCamera_Cut_m1995434900 (ThirdPersonCamera_t2751132817 * __this, Transform_t3275118058 * ___dummyTarget0, Vector3_t2243707580  ___dummyCenter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::SetUpRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void ThirdPersonCamera_SetUpRotation_m99799611 (ThirdPersonCamera_t2751132817 * __this, Vector3_t2243707580  ___centerPos0, Vector3_t2243707580  ___headPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ThirdPersonCamera::GetCenterOffset()
extern "C"  Vector3_t2243707580  ThirdPersonCamera_GetCenterOffset_m1742165310 (ThirdPersonCamera_t2751132817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
