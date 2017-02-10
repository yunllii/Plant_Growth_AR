#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkyboxRotator
struct  SkyboxRotator_t939545523  : public MonoBehaviour_t1158329972
{
public:
	// System.Single SkyboxRotator::RotationPerSecond
	float ___RotationPerSecond_2;
	// System.Boolean SkyboxRotator::_rotate
	bool ____rotate_3;

public:
	inline static int32_t get_offset_of_RotationPerSecond_2() { return static_cast<int32_t>(offsetof(SkyboxRotator_t939545523, ___RotationPerSecond_2)); }
	inline float get_RotationPerSecond_2() const { return ___RotationPerSecond_2; }
	inline float* get_address_of_RotationPerSecond_2() { return &___RotationPerSecond_2; }
	inline void set_RotationPerSecond_2(float value)
	{
		___RotationPerSecond_2 = value;
	}

	inline static int32_t get_offset_of__rotate_3() { return static_cast<int32_t>(offsetof(SkyboxRotator_t939545523, ____rotate_3)); }
	inline bool get__rotate_3() const { return ____rotate_3; }
	inline bool* get_address_of__rotate_3() { return &____rotate_3; }
	inline void set__rotate_3(bool value)
	{
		____rotate_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
