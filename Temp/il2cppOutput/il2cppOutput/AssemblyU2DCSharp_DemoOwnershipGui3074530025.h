﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUISkin
struct GUISkin_t1436893342;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DemoOwnershipGui
struct  DemoOwnershipGui_t3074530025  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GUISkin DemoOwnershipGui::Skin
	GUISkin_t1436893342 * ___Skin_2;
	// System.Boolean DemoOwnershipGui::TransferOwnershipOnRequest
	bool ___TransferOwnershipOnRequest_3;

public:
	inline static int32_t get_offset_of_Skin_2() { return static_cast<int32_t>(offsetof(DemoOwnershipGui_t3074530025, ___Skin_2)); }
	inline GUISkin_t1436893342 * get_Skin_2() const { return ___Skin_2; }
	inline GUISkin_t1436893342 ** get_address_of_Skin_2() { return &___Skin_2; }
	inline void set_Skin_2(GUISkin_t1436893342 * value)
	{
		___Skin_2 = value;
		Il2CppCodeGenWriteBarrier(&___Skin_2, value);
	}

	inline static int32_t get_offset_of_TransferOwnershipOnRequest_3() { return static_cast<int32_t>(offsetof(DemoOwnershipGui_t3074530025, ___TransferOwnershipOnRequest_3)); }
	inline bool get_TransferOwnershipOnRequest_3() const { return ___TransferOwnershipOnRequest_3; }
	inline bool* get_address_of_TransferOwnershipOnRequest_3() { return &___TransferOwnershipOnRequest_3; }
	inline void set_TransferOwnershipOnRequest_3(bool value)
	{
		___TransferOwnershipOnRequest_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
