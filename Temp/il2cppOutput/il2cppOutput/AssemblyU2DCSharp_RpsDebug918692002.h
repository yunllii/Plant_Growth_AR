﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button
struct Button_t2872111280;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RpsDebug
struct  RpsDebug_t918692002  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button RpsDebug::ConnectionDebugButton
	Button_t2872111280 * ___ConnectionDebugButton_2;
	// System.Boolean RpsDebug::ShowConnectionDebug
	bool ___ShowConnectionDebug_3;

public:
	inline static int32_t get_offset_of_ConnectionDebugButton_2() { return static_cast<int32_t>(offsetof(RpsDebug_t918692002, ___ConnectionDebugButton_2)); }
	inline Button_t2872111280 * get_ConnectionDebugButton_2() const { return ___ConnectionDebugButton_2; }
	inline Button_t2872111280 ** get_address_of_ConnectionDebugButton_2() { return &___ConnectionDebugButton_2; }
	inline void set_ConnectionDebugButton_2(Button_t2872111280 * value)
	{
		___ConnectionDebugButton_2 = value;
		Il2CppCodeGenWriteBarrier(&___ConnectionDebugButton_2, value);
	}

	inline static int32_t get_offset_of_ShowConnectionDebug_3() { return static_cast<int32_t>(offsetof(RpsDebug_t918692002, ___ShowConnectionDebug_3)); }
	inline bool get_ShowConnectionDebug_3() const { return ___ShowConnectionDebug_3; }
	inline bool* get_address_of_ShowConnectionDebug_3() { return &___ShowConnectionDebug_3; }
	inline void set_ShowConnectionDebug_3(bool value)
	{
		___ShowConnectionDebug_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
