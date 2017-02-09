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

// PickupController
struct PickupController_t3031549840;
// PhotonStream
struct PhotonStream_t2436786422;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t4070855101;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonStream2436786422.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo13590565.h"
#include "UnityEngine_UnityEngine_ControllerColliderHit4070855101.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void PickupController::.ctor()
extern "C"  void PickupController__ctor_m1759451011 (PickupController_t3031549840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::Awake()
extern "C"  void PickupController_Awake_m1125638096 (PickupController_t3031549840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::Update()
extern "C"  void PickupController_Update_m353862322 (PickupController_t3031549840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void PickupController_OnPhotonSerializeView_m1717449756 (PickupController_t3031549840 * __this, PhotonStream_t2436786422 * ___stream0, PhotonMessageInfo_t13590565  ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::UpdateSmoothedMovementDirection()
extern "C"  void PickupController_UpdateSmoothedMovementDirection_m3959668315 (PickupController_t3031549840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::ApplyJumping()
extern "C"  void PickupController_ApplyJumping_m3428004049 (PickupController_t3031549840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::ApplyGravity()
extern "C"  void PickupController_ApplyGravity_m1938501861 (PickupController_t3031549840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PickupController::CalculateJumpVerticalSpeed(System.Single)
extern "C"  float PickupController_CalculateJumpVerticalSpeed_m355276647 (PickupController_t3031549840 * __this, float ___targetJumpHeight0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::DidJump()
extern "C"  void PickupController_DidJump_m2948705322 (PickupController_t3031549840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
extern "C"  void PickupController_OnControllerColliderHit_m3418364369 (PickupController_t3031549840 * __this, ControllerColliderHit_t4070855101 * ___hit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PickupController::GetSpeed()
extern "C"  float PickupController_GetSpeed_m4082092474 (PickupController_t3031549840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsJumping()
extern "C"  bool PickupController_IsJumping_m3508450423 (PickupController_t3031549840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsGrounded()
extern "C"  bool PickupController_IsGrounded_m3707450865 (PickupController_t3031549840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PickupController::GetDirection()
extern "C"  Vector3_t2243707580  PickupController_GetDirection_m3686952752 (PickupController_t3031549840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsMovingBackwards()
extern "C"  bool PickupController_IsMovingBackwards_m4185086233 (PickupController_t3031549840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PickupController::GetLockCameraTimer()
extern "C"  float PickupController_GetLockCameraTimer_m2710761892 (PickupController_t3031549840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsMoving()
extern "C"  bool PickupController_IsMoving_m3444209989 (PickupController_t3031549840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::HasJumpReachedApex()
extern "C"  bool PickupController_HasJumpReachedApex_m3506717143 (PickupController_t3031549840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsGroundedWithTimeout()
extern "C"  bool PickupController_IsGroundedWithTimeout_m1137089064 (PickupController_t3031549840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::Reset()
extern "C"  void PickupController_Reset_m3199630436 (PickupController_t3031549840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
