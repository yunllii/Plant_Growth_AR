#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// IPunTurnManagerCallbacks
struct IPunTurnManagerCallbacks_t2751384592;
// System.Collections.Generic.HashSet`1<PhotonPlayer>
struct HashSet_1_t2454069681;

#include "AssemblyU2DCSharp_Photon_PunBehaviour692890556.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PunTurnManager
struct  PunTurnManager_t1878040655  : public PunBehaviour_t692890556
{
public:
	// System.Single PunTurnManager::TurnDuration
	float ___TurnDuration_3;
	// IPunTurnManagerCallbacks PunTurnManager::TurnManagerListener
	Il2CppObject * ___TurnManagerListener_4;
	// System.Collections.Generic.HashSet`1<PhotonPlayer> PunTurnManager::finishedPlayers
	HashSet_1_t2454069681 * ___finishedPlayers_5;
	// System.Boolean PunTurnManager::_isOverCallProcessed
	bool ____isOverCallProcessed_9;

public:
	inline static int32_t get_offset_of_TurnDuration_3() { return static_cast<int32_t>(offsetof(PunTurnManager_t1878040655, ___TurnDuration_3)); }
	inline float get_TurnDuration_3() const { return ___TurnDuration_3; }
	inline float* get_address_of_TurnDuration_3() { return &___TurnDuration_3; }
	inline void set_TurnDuration_3(float value)
	{
		___TurnDuration_3 = value;
	}

	inline static int32_t get_offset_of_TurnManagerListener_4() { return static_cast<int32_t>(offsetof(PunTurnManager_t1878040655, ___TurnManagerListener_4)); }
	inline Il2CppObject * get_TurnManagerListener_4() const { return ___TurnManagerListener_4; }
	inline Il2CppObject ** get_address_of_TurnManagerListener_4() { return &___TurnManagerListener_4; }
	inline void set_TurnManagerListener_4(Il2CppObject * value)
	{
		___TurnManagerListener_4 = value;
		Il2CppCodeGenWriteBarrier(&___TurnManagerListener_4, value);
	}

	inline static int32_t get_offset_of_finishedPlayers_5() { return static_cast<int32_t>(offsetof(PunTurnManager_t1878040655, ___finishedPlayers_5)); }
	inline HashSet_1_t2454069681 * get_finishedPlayers_5() const { return ___finishedPlayers_5; }
	inline HashSet_1_t2454069681 ** get_address_of_finishedPlayers_5() { return &___finishedPlayers_5; }
	inline void set_finishedPlayers_5(HashSet_1_t2454069681 * value)
	{
		___finishedPlayers_5 = value;
		Il2CppCodeGenWriteBarrier(&___finishedPlayers_5, value);
	}

	inline static int32_t get_offset_of__isOverCallProcessed_9() { return static_cast<int32_t>(offsetof(PunTurnManager_t1878040655, ____isOverCallProcessed_9)); }
	inline bool get__isOverCallProcessed_9() const { return ____isOverCallProcessed_9; }
	inline bool* get_address_of__isOverCallProcessed_9() { return &____isOverCallProcessed_9; }
	inline void set__isOverCallProcessed_9(bool value)
	{
		____isOverCallProcessed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
