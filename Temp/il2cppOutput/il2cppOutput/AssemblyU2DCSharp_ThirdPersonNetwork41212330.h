﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ThirdPersonCamera
struct ThirdPersonCamera_t2751132817;
// ThirdPersonController
struct ThirdPersonController_t1841729452;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour3914164484.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ThirdPersonNetwork
struct  ThirdPersonNetwork_t41212330  : public MonoBehaviour_t3914164484
{
public:
	// ThirdPersonCamera ThirdPersonNetwork::cameraScript
	ThirdPersonCamera_t2751132817 * ___cameraScript_3;
	// ThirdPersonController ThirdPersonNetwork::controllerScript
	ThirdPersonController_t1841729452 * ___controllerScript_4;
	// System.Boolean ThirdPersonNetwork::firstTake
	bool ___firstTake_5;
	// UnityEngine.Vector3 ThirdPersonNetwork::correctPlayerPos
	Vector3_t2243707580  ___correctPlayerPos_6;
	// UnityEngine.Quaternion ThirdPersonNetwork::correctPlayerRot
	Quaternion_t4030073918  ___correctPlayerRot_7;

public:
	inline static int32_t get_offset_of_cameraScript_3() { return static_cast<int32_t>(offsetof(ThirdPersonNetwork_t41212330, ___cameraScript_3)); }
	inline ThirdPersonCamera_t2751132817 * get_cameraScript_3() const { return ___cameraScript_3; }
	inline ThirdPersonCamera_t2751132817 ** get_address_of_cameraScript_3() { return &___cameraScript_3; }
	inline void set_cameraScript_3(ThirdPersonCamera_t2751132817 * value)
	{
		___cameraScript_3 = value;
		Il2CppCodeGenWriteBarrier(&___cameraScript_3, value);
	}

	inline static int32_t get_offset_of_controllerScript_4() { return static_cast<int32_t>(offsetof(ThirdPersonNetwork_t41212330, ___controllerScript_4)); }
	inline ThirdPersonController_t1841729452 * get_controllerScript_4() const { return ___controllerScript_4; }
	inline ThirdPersonController_t1841729452 ** get_address_of_controllerScript_4() { return &___controllerScript_4; }
	inline void set_controllerScript_4(ThirdPersonController_t1841729452 * value)
	{
		___controllerScript_4 = value;
		Il2CppCodeGenWriteBarrier(&___controllerScript_4, value);
	}

	inline static int32_t get_offset_of_firstTake_5() { return static_cast<int32_t>(offsetof(ThirdPersonNetwork_t41212330, ___firstTake_5)); }
	inline bool get_firstTake_5() const { return ___firstTake_5; }
	inline bool* get_address_of_firstTake_5() { return &___firstTake_5; }
	inline void set_firstTake_5(bool value)
	{
		___firstTake_5 = value;
	}

	inline static int32_t get_offset_of_correctPlayerPos_6() { return static_cast<int32_t>(offsetof(ThirdPersonNetwork_t41212330, ___correctPlayerPos_6)); }
	inline Vector3_t2243707580  get_correctPlayerPos_6() const { return ___correctPlayerPos_6; }
	inline Vector3_t2243707580 * get_address_of_correctPlayerPos_6() { return &___correctPlayerPos_6; }
	inline void set_correctPlayerPos_6(Vector3_t2243707580  value)
	{
		___correctPlayerPos_6 = value;
	}

	inline static int32_t get_offset_of_correctPlayerRot_7() { return static_cast<int32_t>(offsetof(ThirdPersonNetwork_t41212330, ___correctPlayerRot_7)); }
	inline Quaternion_t4030073918  get_correctPlayerRot_7() const { return ___correctPlayerRot_7; }
	inline Quaternion_t4030073918 * get_address_of_correctPlayerRot_7() { return &___correctPlayerRot_7; }
	inline void set_correctPlayerRot_7(Quaternion_t4030073918  value)
	{
		___correctPlayerRot_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
