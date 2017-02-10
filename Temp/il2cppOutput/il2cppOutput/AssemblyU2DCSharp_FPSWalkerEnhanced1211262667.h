#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.CharacterController
struct CharacterController_t4094781467;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FPSWalkerEnhanced
struct  FPSWalkerEnhanced_t1211262667  : public MonoBehaviour_t1158329972
{
public:
	// System.Single FPSWalkerEnhanced::walkSpeed
	float ___walkSpeed_2;
	// System.Single FPSWalkerEnhanced::runSpeed
	float ___runSpeed_3;
	// System.Boolean FPSWalkerEnhanced::limitDiagonalSpeed
	bool ___limitDiagonalSpeed_4;
	// System.Boolean FPSWalkerEnhanced::toggleRun
	bool ___toggleRun_5;
	// System.Single FPSWalkerEnhanced::jumpSpeed
	float ___jumpSpeed_6;
	// System.Single FPSWalkerEnhanced::gravity
	float ___gravity_7;
	// System.Single FPSWalkerEnhanced::fallingDamageThreshold
	float ___fallingDamageThreshold_8;
	// System.Boolean FPSWalkerEnhanced::slideWhenOverSlopeLimit
	bool ___slideWhenOverSlopeLimit_9;
	// System.Boolean FPSWalkerEnhanced::slideOnTaggedObjects
	bool ___slideOnTaggedObjects_10;
	// System.Single FPSWalkerEnhanced::slideSpeed
	float ___slideSpeed_11;
	// System.Boolean FPSWalkerEnhanced::airControl
	bool ___airControl_12;
	// System.Single FPSWalkerEnhanced::antiBumpFactor
	float ___antiBumpFactor_13;
	// System.Int32 FPSWalkerEnhanced::antiBunnyHopFactor
	int32_t ___antiBunnyHopFactor_14;
	// UnityEngine.Vector3 FPSWalkerEnhanced::moveDirection
	Vector3_t2243707580  ___moveDirection_15;
	// System.Boolean FPSWalkerEnhanced::grounded
	bool ___grounded_16;
	// UnityEngine.CharacterController FPSWalkerEnhanced::controller
	CharacterController_t4094781467 * ___controller_17;
	// UnityEngine.Transform FPSWalkerEnhanced::myTransform
	Transform_t3275118058 * ___myTransform_18;
	// System.Single FPSWalkerEnhanced::speed
	float ___speed_19;
	// UnityEngine.RaycastHit FPSWalkerEnhanced::hit
	RaycastHit_t87180320  ___hit_20;
	// System.Single FPSWalkerEnhanced::fallStartLevel
	float ___fallStartLevel_21;
	// System.Boolean FPSWalkerEnhanced::falling
	bool ___falling_22;
	// System.Single FPSWalkerEnhanced::slideLimit
	float ___slideLimit_23;
	// System.Single FPSWalkerEnhanced::rayDistance
	float ___rayDistance_24;
	// UnityEngine.Vector3 FPSWalkerEnhanced::contactPoint
	Vector3_t2243707580  ___contactPoint_25;
	// System.Boolean FPSWalkerEnhanced::playerControl
	bool ___playerControl_26;
	// System.Int32 FPSWalkerEnhanced::jumpTimer
	int32_t ___jumpTimer_27;

public:
	inline static int32_t get_offset_of_walkSpeed_2() { return static_cast<int32_t>(offsetof(FPSWalkerEnhanced_t1211262667, ___walkSpeed_2)); }
	inline float get_walkSpeed_2() const { return ___walkSpeed_2; }
	inline float* get_address_of_walkSpeed_2() { return &___walkSpeed_2; }
	inline void set_walkSpeed_2(float value)
	{
		___walkSpeed_2 = value;
	}

	inline static int32_t get_offset_of_runSpeed_3() { return static_cast<int32_t>(offsetof(FPSWalkerEnhanced_t1211262667, ___runSpeed_3)); }
	inline float get_runSpeed_3() const { return ___runSpeed_3; }
	inline float* get_address_of_runSpeed_3() { return &___runSpeed_3; }
	inline void set_runSpeed_3(float value)
	{
		___runSpeed_3 = value;
	}

	inline static int32_t get_offset_of_limitDiagonalSpeed_4() { return static_cast<int32_t>(offsetof(FPSWalkerEnhanced_t1211262667, ___limitDiagonalSpeed_4)); }
	inline bool get_limitDiagonalSpeed_4() const { return ___limitDiagonalSpeed_4; }
	inline bool* get_address_of_limitDiagonalSpeed_4() { return &___limitDiagonalSpeed_4; }
	inline void set_limitDiagonalSpeed_4(bool value)
	{
		___limitDiagonalSpeed_4 = value;
	}

	inline static int32_t get_offset_of_toggleRun_5() { return static_cast<int32_t>(offsetof(FPSWalkerEnhanced_t1211262667, ___toggleRun_5)); }
	inline bool get_toggleRun_5() const { return ___toggleRun_5; }
	inline bool* get_address_of_toggleRun_5() { return &___toggleRun_5; }
	inline void set_toggleRun_5(bool value)
	{
		___toggleRun_5 = value;
	}

	inline static int32_t get_offset_of_jumpSpeed_6() { return static_cast<int32_t>(offsetof(FPSWalkerEnhanced_t1211262667, ___jumpSpeed_6)); }
	inline float get_jumpSpeed_6() const { return ___jumpSpeed_6; }
	inline float* get_address_of_jumpSpeed_6() { return &___jumpSpeed_6; }
	inline void set_jumpSpeed_6(float value)
	{
		___jumpSpeed_6 = value;
	}

	inline static int32_t get_offset_of_gravity_7() { return static_cast<int32_t>(offsetof(FPSWalkerEnhanced_t1211262667, ___gravity_7)); }
	inline float get_gravity_7() const { return ___gravity_7; }
	inline float* get_address_of_gravity_7() { return &___gravity_7; }
	inline void set_gravity_7(float value)
	{
		___gravity_7 = value;
	}

	inline static int32_t get_offset_of_fallingDamageThreshold_8() { return static_cast<int32_t>(offsetof(FPSWalkerEnhanced_t1211262667, ___fallingDamageThreshold_8)); }
	inline float get_fallingDamageThreshold_8() const { return ___fallingDamageThreshold_8; }
	inline float* get_address_of_fallingDamageThreshold_8() { return &___fallingDamageThreshold_8; }
	inline void set_fallingDamageThreshold_8(float value)
	{
		___fallingDamageThreshold_8 = value;
	}

	inline static int32_t get_offset_of_slideWhenOverSlopeLimit_9() { return static_cast<int32_t>(offsetof(FPSWalkerEnhanced_t1211262667, ___slideWhenOverSlopeLimit_9)); }
	inline bool get_slideWhenOverSlopeLimit_9() const { return ___slideWhenOverSlopeLimit_9; }
	inline bool* get_address_of_slideWhenOverSlopeLimit_9() { return &___slideWhenOverSlopeLimit_9; }
	inline void set_slideWhenOverSlopeLimit_9(bool value)
	{
		___slideWhenOverSlopeLimit_9 = value;
	}

	inline static int32_t get_offset_of_slideOnTaggedObjects_10() { return static_cast<int32_t>(offsetof(FPSWalkerEnhanced_t1211262667, ___slideOnTaggedObjects_10)); }
	inline bool get_slideOnTaggedObjects_10() const { return ___slideOnTaggedObjects_10; }
	inline bool* get_address_of_slideOnTaggedObjects_10() { return &___slideOnTaggedObjects_10; }
	inline void set_slideOnTaggedObjects_10(bool value)
	{
		___slideOnTaggedObjects_10 = value;
	}

	inline static int32_t get_offset_of_slideSpeed_11() { return static_cast<int32_t>(offsetof(FPSWalkerEnhanced_t1211262667, ___slideSpeed_11)); }
	inline float get_slideSpeed_11() const { return ___slideSpeed_11; }
	inline float* get_address_of_slideSpeed_11() { return &___slideSpeed_11; }
	inline void set_slideSpeed_11(float value)
	{
		___slideSpeed_11 = value;
	}

	inline static int32_t get_offset_of_airControl_12() { return static_cast<int32_t>(offsetof(FPSWalkerEnhanced_t1211262667, ___airControl_12)); }
	inline bool get_airControl_12() const { return ___airControl_12; }
	inline bool* get_address_of_airControl_12() { return &___airControl_12; }
	inline void set_airControl_12(bool value)
	{
		___airControl_12 = value;
	}

	inline static int32_t get_offset_of_antiBumpFactor_13() { return static_cast<int32_t>(offsetof(FPSWalkerEnhanced_t1211262667, ___antiBumpFactor_13)); }
	inline float get_antiBumpFactor_13() const { return ___antiBumpFactor_13; }
	inline float* get_address_of_antiBumpFactor_13() { return &___antiBumpFactor_13; }
	inline void set_antiBumpFactor_13(float value)
	{
		___antiBumpFactor_13 = value;
	}

	inline static int32_t get_offset_of_antiBunnyHopFactor_14() { return static_cast<int32_t>(offsetof(FPSWalkerEnhanced_t1211262667, ___antiBunnyHopFactor_14)); }
	inline int32_t get_antiBunnyHopFactor_14() const { return ___antiBunnyHopFactor_14; }
	inline int32_t* get_address_of_antiBunnyHopFactor_14() { return &___antiBunnyHopFactor_14; }
	inline void set_antiBunnyHopFactor_14(int32_t value)
	{
		___antiBunnyHopFactor_14 = value;
	}

	inline static int32_t get_offset_of_moveDirection_15() { return static_cast<int32_t>(offsetof(FPSWalkerEnhanced_t1211262667, ___moveDirection_15)); }
	inline Vector3_t2243707580  get_moveDirection_15() const { return ___moveDirection_15; }
	inline Vector3_t2243707580 * get_address_of_moveDirection_15() { return &___moveDirection_15; }
	inline void set_moveDirection_15(Vector3_t2243707580  value)
	{
		___moveDirection_15 = value;
	}

	inline static int32_t get_offset_of_grounded_16() { return static_cast<int32_t>(offsetof(FPSWalkerEnhanced_t1211262667, ___grounded_16)); }
	inline bool get_grounded_16() const { return ___grounded_16; }
	inline bool* get_address_of_grounded_16() { return &___grounded_16; }
	inline void set_grounded_16(bool value)
	{
		___grounded_16 = value;
	}

	inline static int32_t get_offset_of_controller_17() { return static_cast<int32_t>(offsetof(FPSWalkerEnhanced_t1211262667, ___controller_17)); }
	inline CharacterController_t4094781467 * get_controller_17() const { return ___controller_17; }
	inline CharacterController_t4094781467 ** get_address_of_controller_17() { return &___controller_17; }
	inline void set_controller_17(CharacterController_t4094781467 * value)
	{
		___controller_17 = value;
		Il2CppCodeGenWriteBarrier(&___controller_17, value);
	}

	inline static int32_t get_offset_of_myTransform_18() { return static_cast<int32_t>(offsetof(FPSWalkerEnhanced_t1211262667, ___myTransform_18)); }
	inline Transform_t3275118058 * get_myTransform_18() const { return ___myTransform_18; }
	inline Transform_t3275118058 ** get_address_of_myTransform_18() { return &___myTransform_18; }
	inline void set_myTransform_18(Transform_t3275118058 * value)
	{
		___myTransform_18 = value;
		Il2CppCodeGenWriteBarrier(&___myTransform_18, value);
	}

	inline static int32_t get_offset_of_speed_19() { return static_cast<int32_t>(offsetof(FPSWalkerEnhanced_t1211262667, ___speed_19)); }
	inline float get_speed_19() const { return ___speed_19; }
	inline float* get_address_of_speed_19() { return &___speed_19; }
	inline void set_speed_19(float value)
	{
		___speed_19 = value;
	}

	inline static int32_t get_offset_of_hit_20() { return static_cast<int32_t>(offsetof(FPSWalkerEnhanced_t1211262667, ___hit_20)); }
	inline RaycastHit_t87180320  get_hit_20() const { return ___hit_20; }
	inline RaycastHit_t87180320 * get_address_of_hit_20() { return &___hit_20; }
	inline void set_hit_20(RaycastHit_t87180320  value)
	{
		___hit_20 = value;
	}

	inline static int32_t get_offset_of_fallStartLevel_21() { return static_cast<int32_t>(offsetof(FPSWalkerEnhanced_t1211262667, ___fallStartLevel_21)); }
	inline float get_fallStartLevel_21() const { return ___fallStartLevel_21; }
	inline float* get_address_of_fallStartLevel_21() { return &___fallStartLevel_21; }
	inline void set_fallStartLevel_21(float value)
	{
		___fallStartLevel_21 = value;
	}

	inline static int32_t get_offset_of_falling_22() { return static_cast<int32_t>(offsetof(FPSWalkerEnhanced_t1211262667, ___falling_22)); }
	inline bool get_falling_22() const { return ___falling_22; }
	inline bool* get_address_of_falling_22() { return &___falling_22; }
	inline void set_falling_22(bool value)
	{
		___falling_22 = value;
	}

	inline static int32_t get_offset_of_slideLimit_23() { return static_cast<int32_t>(offsetof(FPSWalkerEnhanced_t1211262667, ___slideLimit_23)); }
	inline float get_slideLimit_23() const { return ___slideLimit_23; }
	inline float* get_address_of_slideLimit_23() { return &___slideLimit_23; }
	inline void set_slideLimit_23(float value)
	{
		___slideLimit_23 = value;
	}

	inline static int32_t get_offset_of_rayDistance_24() { return static_cast<int32_t>(offsetof(FPSWalkerEnhanced_t1211262667, ___rayDistance_24)); }
	inline float get_rayDistance_24() const { return ___rayDistance_24; }
	inline float* get_address_of_rayDistance_24() { return &___rayDistance_24; }
	inline void set_rayDistance_24(float value)
	{
		___rayDistance_24 = value;
	}

	inline static int32_t get_offset_of_contactPoint_25() { return static_cast<int32_t>(offsetof(FPSWalkerEnhanced_t1211262667, ___contactPoint_25)); }
	inline Vector3_t2243707580  get_contactPoint_25() const { return ___contactPoint_25; }
	inline Vector3_t2243707580 * get_address_of_contactPoint_25() { return &___contactPoint_25; }
	inline void set_contactPoint_25(Vector3_t2243707580  value)
	{
		___contactPoint_25 = value;
	}

	inline static int32_t get_offset_of_playerControl_26() { return static_cast<int32_t>(offsetof(FPSWalkerEnhanced_t1211262667, ___playerControl_26)); }
	inline bool get_playerControl_26() const { return ___playerControl_26; }
	inline bool* get_address_of_playerControl_26() { return &___playerControl_26; }
	inline void set_playerControl_26(bool value)
	{
		___playerControl_26 = value;
	}

	inline static int32_t get_offset_of_jumpTimer_27() { return static_cast<int32_t>(offsetof(FPSWalkerEnhanced_t1211262667, ___jumpTimer_27)); }
	inline int32_t get_jumpTimer_27() const { return ___jumpTimer_27; }
	inline int32_t* get_address_of_jumpTimer_27() { return &___jumpTimer_27; }
	inline void set_jumpTimer_27(int32_t value)
	{
		___jumpTimer_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
