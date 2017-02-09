#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_Photon_MonoBehaviour3914164484.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SmoothSyncMovement
struct  SmoothSyncMovement_t4000196920  : public MonoBehaviour_t3914164484
{
public:
	// System.Single SmoothSyncMovement::SmoothingDelay
	float ___SmoothingDelay_3;
	// UnityEngine.Vector3 SmoothSyncMovement::correctPlayerPos
	Vector3_t2243707580  ___correctPlayerPos_4;
	// UnityEngine.Quaternion SmoothSyncMovement::correctPlayerRot
	Quaternion_t4030073918  ___correctPlayerRot_5;

public:
	inline static int32_t get_offset_of_SmoothingDelay_3() { return static_cast<int32_t>(offsetof(SmoothSyncMovement_t4000196920, ___SmoothingDelay_3)); }
	inline float get_SmoothingDelay_3() const { return ___SmoothingDelay_3; }
	inline float* get_address_of_SmoothingDelay_3() { return &___SmoothingDelay_3; }
	inline void set_SmoothingDelay_3(float value)
	{
		___SmoothingDelay_3 = value;
	}

	inline static int32_t get_offset_of_correctPlayerPos_4() { return static_cast<int32_t>(offsetof(SmoothSyncMovement_t4000196920, ___correctPlayerPos_4)); }
	inline Vector3_t2243707580  get_correctPlayerPos_4() const { return ___correctPlayerPos_4; }
	inline Vector3_t2243707580 * get_address_of_correctPlayerPos_4() { return &___correctPlayerPos_4; }
	inline void set_correctPlayerPos_4(Vector3_t2243707580  value)
	{
		___correctPlayerPos_4 = value;
	}

	inline static int32_t get_offset_of_correctPlayerRot_5() { return static_cast<int32_t>(offsetof(SmoothSyncMovement_t4000196920, ___correctPlayerRot_5)); }
	inline Quaternion_t4030073918  get_correctPlayerRot_5() const { return ___correctPlayerRot_5; }
	inline Quaternion_t4030073918 * get_address_of_correctPlayerRot_5() { return &___correctPlayerRot_5; }
	inline void set_correctPlayerRot_5(Quaternion_t4030073918  value)
	{
		___correctPlayerRot_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
