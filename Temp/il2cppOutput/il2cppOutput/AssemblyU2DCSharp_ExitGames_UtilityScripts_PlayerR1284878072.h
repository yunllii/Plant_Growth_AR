#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.UtilityScripts.PlayerRoomIndexing
struct PlayerRoomIndexing_t1284878072;
// ExitGames.UtilityScripts.PlayerRoomIndexing/RoomIndexingChanged
struct RoomIndexingChanged_t3550649017;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1079703083;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t3194695850;
// PhotonPlayer
struct PhotonPlayer_t4120608827;

#include "AssemblyU2DCSharp_Photon_PunBehaviour692890556.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.UtilityScripts.PlayerRoomIndexing
struct  PlayerRoomIndexing_t1284878072  : public PunBehaviour_t692890556
{
public:
	// ExitGames.UtilityScripts.PlayerRoomIndexing/RoomIndexingChanged ExitGames.UtilityScripts.PlayerRoomIndexing::OnRoomIndexingChanged
	RoomIndexingChanged_t3550649017 * ___OnRoomIndexingChanged_4;
	// System.Int32[] ExitGames.UtilityScripts.PlayerRoomIndexing::_playerIds
	Int32U5BU5D_t3030399641* ____playerIds_6;
	// System.Object ExitGames.UtilityScripts.PlayerRoomIndexing::_indexes
	Il2CppObject * ____indexes_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> ExitGames.UtilityScripts.PlayerRoomIndexing::_indexesLUT
	Dictionary_2_t1079703083 * ____indexesLUT_8;
	// System.Collections.Generic.List`1<System.Boolean> ExitGames.UtilityScripts.PlayerRoomIndexing::_indexesPool
	List_1_t3194695850 * ____indexesPool_9;
	// PhotonPlayer ExitGames.UtilityScripts.PlayerRoomIndexing::_p
	PhotonPlayer_t4120608827 * ____p_10;

public:
	inline static int32_t get_offset_of_OnRoomIndexingChanged_4() { return static_cast<int32_t>(offsetof(PlayerRoomIndexing_t1284878072, ___OnRoomIndexingChanged_4)); }
	inline RoomIndexingChanged_t3550649017 * get_OnRoomIndexingChanged_4() const { return ___OnRoomIndexingChanged_4; }
	inline RoomIndexingChanged_t3550649017 ** get_address_of_OnRoomIndexingChanged_4() { return &___OnRoomIndexingChanged_4; }
	inline void set_OnRoomIndexingChanged_4(RoomIndexingChanged_t3550649017 * value)
	{
		___OnRoomIndexingChanged_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnRoomIndexingChanged_4, value);
	}

	inline static int32_t get_offset_of__playerIds_6() { return static_cast<int32_t>(offsetof(PlayerRoomIndexing_t1284878072, ____playerIds_6)); }
	inline Int32U5BU5D_t3030399641* get__playerIds_6() const { return ____playerIds_6; }
	inline Int32U5BU5D_t3030399641** get_address_of__playerIds_6() { return &____playerIds_6; }
	inline void set__playerIds_6(Int32U5BU5D_t3030399641* value)
	{
		____playerIds_6 = value;
		Il2CppCodeGenWriteBarrier(&____playerIds_6, value);
	}

	inline static int32_t get_offset_of__indexes_7() { return static_cast<int32_t>(offsetof(PlayerRoomIndexing_t1284878072, ____indexes_7)); }
	inline Il2CppObject * get__indexes_7() const { return ____indexes_7; }
	inline Il2CppObject ** get_address_of__indexes_7() { return &____indexes_7; }
	inline void set__indexes_7(Il2CppObject * value)
	{
		____indexes_7 = value;
		Il2CppCodeGenWriteBarrier(&____indexes_7, value);
	}

	inline static int32_t get_offset_of__indexesLUT_8() { return static_cast<int32_t>(offsetof(PlayerRoomIndexing_t1284878072, ____indexesLUT_8)); }
	inline Dictionary_2_t1079703083 * get__indexesLUT_8() const { return ____indexesLUT_8; }
	inline Dictionary_2_t1079703083 ** get_address_of__indexesLUT_8() { return &____indexesLUT_8; }
	inline void set__indexesLUT_8(Dictionary_2_t1079703083 * value)
	{
		____indexesLUT_8 = value;
		Il2CppCodeGenWriteBarrier(&____indexesLUT_8, value);
	}

	inline static int32_t get_offset_of__indexesPool_9() { return static_cast<int32_t>(offsetof(PlayerRoomIndexing_t1284878072, ____indexesPool_9)); }
	inline List_1_t3194695850 * get__indexesPool_9() const { return ____indexesPool_9; }
	inline List_1_t3194695850 ** get_address_of__indexesPool_9() { return &____indexesPool_9; }
	inline void set__indexesPool_9(List_1_t3194695850 * value)
	{
		____indexesPool_9 = value;
		Il2CppCodeGenWriteBarrier(&____indexesPool_9, value);
	}

	inline static int32_t get_offset_of__p_10() { return static_cast<int32_t>(offsetof(PlayerRoomIndexing_t1284878072, ____p_10)); }
	inline PhotonPlayer_t4120608827 * get__p_10() const { return ____p_10; }
	inline PhotonPlayer_t4120608827 ** get_address_of__p_10() { return &____p_10; }
	inline void set__p_10(PhotonPlayer_t4120608827 * value)
	{
		____p_10 = value;
		Il2CppCodeGenWriteBarrier(&____p_10, value);
	}
};

struct PlayerRoomIndexing_t1284878072_StaticFields
{
public:
	// ExitGames.UtilityScripts.PlayerRoomIndexing ExitGames.UtilityScripts.PlayerRoomIndexing::instance
	PlayerRoomIndexing_t1284878072 * ___instance_3;

public:
	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(PlayerRoomIndexing_t1284878072_StaticFields, ___instance_3)); }
	inline PlayerRoomIndexing_t1284878072 * get_instance_3() const { return ___instance_3; }
	inline PlayerRoomIndexing_t1284878072 ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(PlayerRoomIndexing_t1284878072 * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier(&___instance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
