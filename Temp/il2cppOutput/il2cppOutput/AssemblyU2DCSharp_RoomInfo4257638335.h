#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Client.Photon.Hashtable
struct Hashtable_t995404622;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoomInfo
struct  RoomInfo_t4257638335  : public Il2CppObject
{
public:
	// System.Boolean RoomInfo::<removedFromList>k__BackingField
	bool ___U3CremovedFromListU3Ek__BackingField_0;
	// ExitGames.Client.Photon.Hashtable RoomInfo::customPropertiesField
	Hashtable_t995404622 * ___customPropertiesField_1;
	// System.Byte RoomInfo::maxPlayersField
	uint8_t ___maxPlayersField_2;
	// System.String[] RoomInfo::expectedUsersField
	StringU5BU5D_t1642385972* ___expectedUsersField_3;
	// System.Boolean RoomInfo::openField
	bool ___openField_4;
	// System.Boolean RoomInfo::visibleField
	bool ___visibleField_5;
	// System.Boolean RoomInfo::autoCleanUpField
	bool ___autoCleanUpField_6;
	// System.String RoomInfo::nameField
	String_t* ___nameField_7;
	// System.Int32 RoomInfo::masterClientIdField
	int32_t ___masterClientIdField_8;
	// System.Boolean RoomInfo::<serverSideMasterClient>k__BackingField
	bool ___U3CserverSideMasterClientU3Ek__BackingField_9;
	// System.Int32 RoomInfo::<PlayerCount>k__BackingField
	int32_t ___U3CPlayerCountU3Ek__BackingField_10;
	// System.Boolean RoomInfo::<IsLocalClientInside>k__BackingField
	bool ___U3CIsLocalClientInsideU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CremovedFromListU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RoomInfo_t4257638335, ___U3CremovedFromListU3Ek__BackingField_0)); }
	inline bool get_U3CremovedFromListU3Ek__BackingField_0() const { return ___U3CremovedFromListU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CremovedFromListU3Ek__BackingField_0() { return &___U3CremovedFromListU3Ek__BackingField_0; }
	inline void set_U3CremovedFromListU3Ek__BackingField_0(bool value)
	{
		___U3CremovedFromListU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_customPropertiesField_1() { return static_cast<int32_t>(offsetof(RoomInfo_t4257638335, ___customPropertiesField_1)); }
	inline Hashtable_t995404622 * get_customPropertiesField_1() const { return ___customPropertiesField_1; }
	inline Hashtable_t995404622 ** get_address_of_customPropertiesField_1() { return &___customPropertiesField_1; }
	inline void set_customPropertiesField_1(Hashtable_t995404622 * value)
	{
		___customPropertiesField_1 = value;
		Il2CppCodeGenWriteBarrier(&___customPropertiesField_1, value);
	}

	inline static int32_t get_offset_of_maxPlayersField_2() { return static_cast<int32_t>(offsetof(RoomInfo_t4257638335, ___maxPlayersField_2)); }
	inline uint8_t get_maxPlayersField_2() const { return ___maxPlayersField_2; }
	inline uint8_t* get_address_of_maxPlayersField_2() { return &___maxPlayersField_2; }
	inline void set_maxPlayersField_2(uint8_t value)
	{
		___maxPlayersField_2 = value;
	}

	inline static int32_t get_offset_of_expectedUsersField_3() { return static_cast<int32_t>(offsetof(RoomInfo_t4257638335, ___expectedUsersField_3)); }
	inline StringU5BU5D_t1642385972* get_expectedUsersField_3() const { return ___expectedUsersField_3; }
	inline StringU5BU5D_t1642385972** get_address_of_expectedUsersField_3() { return &___expectedUsersField_3; }
	inline void set_expectedUsersField_3(StringU5BU5D_t1642385972* value)
	{
		___expectedUsersField_3 = value;
		Il2CppCodeGenWriteBarrier(&___expectedUsersField_3, value);
	}

	inline static int32_t get_offset_of_openField_4() { return static_cast<int32_t>(offsetof(RoomInfo_t4257638335, ___openField_4)); }
	inline bool get_openField_4() const { return ___openField_4; }
	inline bool* get_address_of_openField_4() { return &___openField_4; }
	inline void set_openField_4(bool value)
	{
		___openField_4 = value;
	}

	inline static int32_t get_offset_of_visibleField_5() { return static_cast<int32_t>(offsetof(RoomInfo_t4257638335, ___visibleField_5)); }
	inline bool get_visibleField_5() const { return ___visibleField_5; }
	inline bool* get_address_of_visibleField_5() { return &___visibleField_5; }
	inline void set_visibleField_5(bool value)
	{
		___visibleField_5 = value;
	}

	inline static int32_t get_offset_of_autoCleanUpField_6() { return static_cast<int32_t>(offsetof(RoomInfo_t4257638335, ___autoCleanUpField_6)); }
	inline bool get_autoCleanUpField_6() const { return ___autoCleanUpField_6; }
	inline bool* get_address_of_autoCleanUpField_6() { return &___autoCleanUpField_6; }
	inline void set_autoCleanUpField_6(bool value)
	{
		___autoCleanUpField_6 = value;
	}

	inline static int32_t get_offset_of_nameField_7() { return static_cast<int32_t>(offsetof(RoomInfo_t4257638335, ___nameField_7)); }
	inline String_t* get_nameField_7() const { return ___nameField_7; }
	inline String_t** get_address_of_nameField_7() { return &___nameField_7; }
	inline void set_nameField_7(String_t* value)
	{
		___nameField_7 = value;
		Il2CppCodeGenWriteBarrier(&___nameField_7, value);
	}

	inline static int32_t get_offset_of_masterClientIdField_8() { return static_cast<int32_t>(offsetof(RoomInfo_t4257638335, ___masterClientIdField_8)); }
	inline int32_t get_masterClientIdField_8() const { return ___masterClientIdField_8; }
	inline int32_t* get_address_of_masterClientIdField_8() { return &___masterClientIdField_8; }
	inline void set_masterClientIdField_8(int32_t value)
	{
		___masterClientIdField_8 = value;
	}

	inline static int32_t get_offset_of_U3CserverSideMasterClientU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RoomInfo_t4257638335, ___U3CserverSideMasterClientU3Ek__BackingField_9)); }
	inline bool get_U3CserverSideMasterClientU3Ek__BackingField_9() const { return ___U3CserverSideMasterClientU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CserverSideMasterClientU3Ek__BackingField_9() { return &___U3CserverSideMasterClientU3Ek__BackingField_9; }
	inline void set_U3CserverSideMasterClientU3Ek__BackingField_9(bool value)
	{
		___U3CserverSideMasterClientU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CPlayerCountU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RoomInfo_t4257638335, ___U3CPlayerCountU3Ek__BackingField_10)); }
	inline int32_t get_U3CPlayerCountU3Ek__BackingField_10() const { return ___U3CPlayerCountU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CPlayerCountU3Ek__BackingField_10() { return &___U3CPlayerCountU3Ek__BackingField_10; }
	inline void set_U3CPlayerCountU3Ek__BackingField_10(int32_t value)
	{
		___U3CPlayerCountU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CIsLocalClientInsideU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RoomInfo_t4257638335, ___U3CIsLocalClientInsideU3Ek__BackingField_11)); }
	inline bool get_U3CIsLocalClientInsideU3Ek__BackingField_11() const { return ___U3CIsLocalClientInsideU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CIsLocalClientInsideU3Ek__BackingField_11() { return &___U3CIsLocalClientInsideU3Ek__BackingField_11; }
	inline void set_U3CIsLocalClientInsideU3Ek__BackingField_11(bool value)
	{
		___U3CIsLocalClientInsideU3Ek__BackingField_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
