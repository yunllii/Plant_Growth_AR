﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour3914164484.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioRpc
struct  AudioRpc_t64563249  : public MonoBehaviour_t3914164484
{
public:
	// UnityEngine.AudioClip AudioRpc::marco
	AudioClip_t1932558630 * ___marco_3;
	// UnityEngine.AudioClip AudioRpc::polo
	AudioClip_t1932558630 * ___polo_4;
	// UnityEngine.AudioSource AudioRpc::m_Source
	AudioSource_t1135106623 * ___m_Source_5;

public:
	inline static int32_t get_offset_of_marco_3() { return static_cast<int32_t>(offsetof(AudioRpc_t64563249, ___marco_3)); }
	inline AudioClip_t1932558630 * get_marco_3() const { return ___marco_3; }
	inline AudioClip_t1932558630 ** get_address_of_marco_3() { return &___marco_3; }
	inline void set_marco_3(AudioClip_t1932558630 * value)
	{
		___marco_3 = value;
		Il2CppCodeGenWriteBarrier(&___marco_3, value);
	}

	inline static int32_t get_offset_of_polo_4() { return static_cast<int32_t>(offsetof(AudioRpc_t64563249, ___polo_4)); }
	inline AudioClip_t1932558630 * get_polo_4() const { return ___polo_4; }
	inline AudioClip_t1932558630 ** get_address_of_polo_4() { return &___polo_4; }
	inline void set_polo_4(AudioClip_t1932558630 * value)
	{
		___polo_4 = value;
		Il2CppCodeGenWriteBarrier(&___polo_4, value);
	}

	inline static int32_t get_offset_of_m_Source_5() { return static_cast<int32_t>(offsetof(AudioRpc_t64563249, ___m_Source_5)); }
	inline AudioSource_t1135106623 * get_m_Source_5() const { return ___m_Source_5; }
	inline AudioSource_t1135106623 ** get_address_of_m_Source_5() { return &___m_Source_5; }
	inline void set_m_Source_5(AudioSource_t1135106623 * value)
	{
		___m_Source_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Source_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
