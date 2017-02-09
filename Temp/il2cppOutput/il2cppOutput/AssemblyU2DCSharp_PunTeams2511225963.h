#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>>
struct Dictionary_2_t2457806897;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PunTeams
struct  PunTeams_t2511225963  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct PunTeams_t2511225963_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>> PunTeams::PlayersPerTeam
	Dictionary_2_t2457806897 * ___PlayersPerTeam_2;

public:
	inline static int32_t get_offset_of_PlayersPerTeam_2() { return static_cast<int32_t>(offsetof(PunTeams_t2511225963_StaticFields, ___PlayersPerTeam_2)); }
	inline Dictionary_2_t2457806897 * get_PlayersPerTeam_2() const { return ___PlayersPerTeam_2; }
	inline Dictionary_2_t2457806897 ** get_address_of_PlayersPerTeam_2() { return &___PlayersPerTeam_2; }
	inline void set_PlayersPerTeam_2(Dictionary_2_t2457806897 * value)
	{
		___PlayersPerTeam_2 = value;
		Il2CppCodeGenWriteBarrier(&___PlayersPerTeam_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
