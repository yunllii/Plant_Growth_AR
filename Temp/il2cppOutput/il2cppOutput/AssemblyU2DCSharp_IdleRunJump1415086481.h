#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t69676727;
// PhotonView
struct PhotonView_t899863581;
// PhotonTransformView
struct PhotonTransformView_t3716933429;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IdleRunJump
struct  IdleRunJump_t1415086481  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator IdleRunJump::animator
	Animator_t69676727 * ___animator_2;
	// System.Single IdleRunJump::DirectionDampTime
	float ___DirectionDampTime_3;
	// System.Boolean IdleRunJump::ApplyGravity
	bool ___ApplyGravity_4;
	// System.Single IdleRunJump::SynchronizedMaxSpeed
	float ___SynchronizedMaxSpeed_5;
	// System.Single IdleRunJump::TurnSpeedModifier
	float ___TurnSpeedModifier_6;
	// System.Single IdleRunJump::SynchronizedTurnSpeed
	float ___SynchronizedTurnSpeed_7;
	// System.Single IdleRunJump::SynchronizedSpeedAcceleration
	float ___SynchronizedSpeedAcceleration_8;
	// PhotonView IdleRunJump::m_PhotonView
	PhotonView_t899863581 * ___m_PhotonView_9;
	// PhotonTransformView IdleRunJump::m_TransformView
	PhotonTransformView_t3716933429 * ___m_TransformView_10;
	// System.Single IdleRunJump::m_SpeedModifier
	float ___m_SpeedModifier_11;

public:
	inline static int32_t get_offset_of_animator_2() { return static_cast<int32_t>(offsetof(IdleRunJump_t1415086481, ___animator_2)); }
	inline Animator_t69676727 * get_animator_2() const { return ___animator_2; }
	inline Animator_t69676727 ** get_address_of_animator_2() { return &___animator_2; }
	inline void set_animator_2(Animator_t69676727 * value)
	{
		___animator_2 = value;
		Il2CppCodeGenWriteBarrier(&___animator_2, value);
	}

	inline static int32_t get_offset_of_DirectionDampTime_3() { return static_cast<int32_t>(offsetof(IdleRunJump_t1415086481, ___DirectionDampTime_3)); }
	inline float get_DirectionDampTime_3() const { return ___DirectionDampTime_3; }
	inline float* get_address_of_DirectionDampTime_3() { return &___DirectionDampTime_3; }
	inline void set_DirectionDampTime_3(float value)
	{
		___DirectionDampTime_3 = value;
	}

	inline static int32_t get_offset_of_ApplyGravity_4() { return static_cast<int32_t>(offsetof(IdleRunJump_t1415086481, ___ApplyGravity_4)); }
	inline bool get_ApplyGravity_4() const { return ___ApplyGravity_4; }
	inline bool* get_address_of_ApplyGravity_4() { return &___ApplyGravity_4; }
	inline void set_ApplyGravity_4(bool value)
	{
		___ApplyGravity_4 = value;
	}

	inline static int32_t get_offset_of_SynchronizedMaxSpeed_5() { return static_cast<int32_t>(offsetof(IdleRunJump_t1415086481, ___SynchronizedMaxSpeed_5)); }
	inline float get_SynchronizedMaxSpeed_5() const { return ___SynchronizedMaxSpeed_5; }
	inline float* get_address_of_SynchronizedMaxSpeed_5() { return &___SynchronizedMaxSpeed_5; }
	inline void set_SynchronizedMaxSpeed_5(float value)
	{
		___SynchronizedMaxSpeed_5 = value;
	}

	inline static int32_t get_offset_of_TurnSpeedModifier_6() { return static_cast<int32_t>(offsetof(IdleRunJump_t1415086481, ___TurnSpeedModifier_6)); }
	inline float get_TurnSpeedModifier_6() const { return ___TurnSpeedModifier_6; }
	inline float* get_address_of_TurnSpeedModifier_6() { return &___TurnSpeedModifier_6; }
	inline void set_TurnSpeedModifier_6(float value)
	{
		___TurnSpeedModifier_6 = value;
	}

	inline static int32_t get_offset_of_SynchronizedTurnSpeed_7() { return static_cast<int32_t>(offsetof(IdleRunJump_t1415086481, ___SynchronizedTurnSpeed_7)); }
	inline float get_SynchronizedTurnSpeed_7() const { return ___SynchronizedTurnSpeed_7; }
	inline float* get_address_of_SynchronizedTurnSpeed_7() { return &___SynchronizedTurnSpeed_7; }
	inline void set_SynchronizedTurnSpeed_7(float value)
	{
		___SynchronizedTurnSpeed_7 = value;
	}

	inline static int32_t get_offset_of_SynchronizedSpeedAcceleration_8() { return static_cast<int32_t>(offsetof(IdleRunJump_t1415086481, ___SynchronizedSpeedAcceleration_8)); }
	inline float get_SynchronizedSpeedAcceleration_8() const { return ___SynchronizedSpeedAcceleration_8; }
	inline float* get_address_of_SynchronizedSpeedAcceleration_8() { return &___SynchronizedSpeedAcceleration_8; }
	inline void set_SynchronizedSpeedAcceleration_8(float value)
	{
		___SynchronizedSpeedAcceleration_8 = value;
	}

	inline static int32_t get_offset_of_m_PhotonView_9() { return static_cast<int32_t>(offsetof(IdleRunJump_t1415086481, ___m_PhotonView_9)); }
	inline PhotonView_t899863581 * get_m_PhotonView_9() const { return ___m_PhotonView_9; }
	inline PhotonView_t899863581 ** get_address_of_m_PhotonView_9() { return &___m_PhotonView_9; }
	inline void set_m_PhotonView_9(PhotonView_t899863581 * value)
	{
		___m_PhotonView_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_PhotonView_9, value);
	}

	inline static int32_t get_offset_of_m_TransformView_10() { return static_cast<int32_t>(offsetof(IdleRunJump_t1415086481, ___m_TransformView_10)); }
	inline PhotonTransformView_t3716933429 * get_m_TransformView_10() const { return ___m_TransformView_10; }
	inline PhotonTransformView_t3716933429 ** get_address_of_m_TransformView_10() { return &___m_TransformView_10; }
	inline void set_m_TransformView_10(PhotonTransformView_t3716933429 * value)
	{
		___m_TransformView_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_TransformView_10, value);
	}

	inline static int32_t get_offset_of_m_SpeedModifier_11() { return static_cast<int32_t>(offsetof(IdleRunJump_t1415086481, ___m_SpeedModifier_11)); }
	inline float get_m_SpeedModifier_11() const { return ___m_SpeedModifier_11; }
	inline float* get_address_of_m_SpeedModifier_11() { return &___m_SpeedModifier_11; }
	inline void set_m_SpeedModifier_11(float value)
	{
		___m_SpeedModifier_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
