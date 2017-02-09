#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_PunTeams_Team3635662189.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnCollideSwitchTeam
struct  OnCollideSwitchTeam_t3159386164  : public MonoBehaviour_t1158329972
{
public:
	// PunTeams/Team OnCollideSwitchTeam::TeamToSwitchTo
	uint8_t ___TeamToSwitchTo_2;

public:
	inline static int32_t get_offset_of_TeamToSwitchTo_2() { return static_cast<int32_t>(offsetof(OnCollideSwitchTeam_t3159386164, ___TeamToSwitchTo_2)); }
	inline uint8_t get_TeamToSwitchTo_2() const { return ___TeamToSwitchTo_2; }
	inline uint8_t* get_address_of_TeamToSwitchTo_2() { return &___TeamToSwitchTo_2; }
	inline void set_TeamToSwitchTo_2(uint8_t value)
	{
		___TeamToSwitchTo_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
