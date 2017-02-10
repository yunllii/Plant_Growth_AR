#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;
// UnityEngine.UI.Dropdown
struct Dropdown_t1985816271;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkyboxChanger
struct  SkyboxChanger_t3808479796  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Material[] SkyboxChanger::Skyboxes
	MaterialU5BU5D_t3123989686* ___Skyboxes_2;
	// UnityEngine.UI.Dropdown SkyboxChanger::_dropdown
	Dropdown_t1985816271 * ____dropdown_3;

public:
	inline static int32_t get_offset_of_Skyboxes_2() { return static_cast<int32_t>(offsetof(SkyboxChanger_t3808479796, ___Skyboxes_2)); }
	inline MaterialU5BU5D_t3123989686* get_Skyboxes_2() const { return ___Skyboxes_2; }
	inline MaterialU5BU5D_t3123989686** get_address_of_Skyboxes_2() { return &___Skyboxes_2; }
	inline void set_Skyboxes_2(MaterialU5BU5D_t3123989686* value)
	{
		___Skyboxes_2 = value;
		Il2CppCodeGenWriteBarrier(&___Skyboxes_2, value);
	}

	inline static int32_t get_offset_of__dropdown_3() { return static_cast<int32_t>(offsetof(SkyboxChanger_t3808479796, ____dropdown_3)); }
	inline Dropdown_t1985816271 * get__dropdown_3() const { return ____dropdown_3; }
	inline Dropdown_t1985816271 ** get_address_of__dropdown_3() { return &____dropdown_3; }
	inline void set__dropdown_3(Dropdown_t1985816271 * value)
	{
		____dropdown_3 = value;
		Il2CppCodeGenWriteBarrier(&____dropdown_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
