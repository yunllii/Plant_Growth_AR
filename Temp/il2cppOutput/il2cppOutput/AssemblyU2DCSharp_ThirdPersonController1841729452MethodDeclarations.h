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

// ThirdPersonController
struct ThirdPersonController_t1841729452;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t4070855101;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ControllerColliderHit4070855101.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void ThirdPersonController::.ctor()
extern "C"  void ThirdPersonController__ctor_m378177617 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::Awake()
extern "C"  void ThirdPersonController_Awake_m1924817928 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::UpdateSmoothedMovementDirection()
extern "C"  void ThirdPersonController_UpdateSmoothedMovementDirection_m1233330509 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::ApplyJumping()
extern "C"  void ThirdPersonController_ApplyJumping_m592819499 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::ApplyGravity()
extern "C"  void ThirdPersonController_ApplyGravity_m1797327803 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonController::CalculateJumpVerticalSpeed(System.Single)
extern "C"  float ThirdPersonController_CalculateJumpVerticalSpeed_m2726700929 (ThirdPersonController_t1841729452 * __this, float ___targetJumpHeight0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::DidJump()
extern "C"  void ThirdPersonController_DidJump_m340125946 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::Update()
extern "C"  void ThirdPersonController_Update_m2602358774 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
extern "C"  void ThirdPersonController_OnControllerColliderHit_m3817990199 (ThirdPersonController_t1841729452 * __this, ControllerColliderHit_t4070855101 * ___hit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonController::GetSpeed()
extern "C"  float ThirdPersonController_GetSpeed_m2099953094 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsJumping()
extern "C"  bool ThirdPersonController_IsJumping_m4241837313 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsGrounded()
extern "C"  bool ThirdPersonController_IsGrounded_m1681158815 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ThirdPersonController::GetDirection()
extern "C"  Vector3_t2243707580  ThirdPersonController_GetDirection_m2215512592 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsMovingBackwards()
extern "C"  bool ThirdPersonController_IsMovingBackwards_m3791188231 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonController::GetLockCameraTimer()
extern "C"  float ThirdPersonController_GetLockCameraTimer_m3275980708 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsMoving()
extern "C"  bool ThirdPersonController_IsMoving_m738301783 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::HasJumpReachedApex()
extern "C"  bool ThirdPersonController_HasJumpReachedApex_m1787622145 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ThirdPersonController::IsGroundedWithTimeout()
extern "C"  bool ThirdPersonController_IsGroundedWithTimeout_m2028045564 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonController::Reset()
extern "C"  void ThirdPersonController_Reset_m1281581324 (ThirdPersonController_t1841729452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
