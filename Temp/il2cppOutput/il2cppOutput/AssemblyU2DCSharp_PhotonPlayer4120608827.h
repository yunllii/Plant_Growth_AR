#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t995404622;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonPlayer
struct  PhotonPlayer_t4120608827  : public Il2CppObject
{
public:
	// System.Int32 PhotonPlayer::actorID
	int32_t ___actorID_0;
	// System.String PhotonPlayer::nameField
	String_t* ___nameField_1;
	// System.String PhotonPlayer::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_2;
	// System.Boolean PhotonPlayer::IsLocal
	bool ___IsLocal_3;
	// System.Boolean PhotonPlayer::<IsInactive>k__BackingField
	bool ___U3CIsInactiveU3Ek__BackingField_4;
	// ExitGames.Client.Photon.Hashtable PhotonPlayer::<CustomProperties>k__BackingField
	Hashtable_t995404622 * ___U3CCustomPropertiesU3Ek__BackingField_5;
	// System.Object PhotonPlayer::TagObject
	Il2CppObject * ___TagObject_6;

public:
	inline static int32_t get_offset_of_actorID_0() { return static_cast<int32_t>(offsetof(PhotonPlayer_t4120608827, ___actorID_0)); }
	inline int32_t get_actorID_0() const { return ___actorID_0; }
	inline int32_t* get_address_of_actorID_0() { return &___actorID_0; }
	inline void set_actorID_0(int32_t value)
	{
		___actorID_0 = value;
	}

	inline static int32_t get_offset_of_nameField_1() { return static_cast<int32_t>(offsetof(PhotonPlayer_t4120608827, ___nameField_1)); }
	inline String_t* get_nameField_1() const { return ___nameField_1; }
	inline String_t** get_address_of_nameField_1() { return &___nameField_1; }
	inline void set_nameField_1(String_t* value)
	{
		___nameField_1 = value;
		Il2CppCodeGenWriteBarrier(&___nameField_1, value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PhotonPlayer_t4120608827, ___U3CUserIdU3Ek__BackingField_2)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_2() const { return ___U3CUserIdU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_2() { return &___U3CUserIdU3Ek__BackingField_2; }
	inline void set_U3CUserIdU3Ek__BackingField_2(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUserIdU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_IsLocal_3() { return static_cast<int32_t>(offsetof(PhotonPlayer_t4120608827, ___IsLocal_3)); }
	inline bool get_IsLocal_3() const { return ___IsLocal_3; }
	inline bool* get_address_of_IsLocal_3() { return &___IsLocal_3; }
	inline void set_IsLocal_3(bool value)
	{
		___IsLocal_3 = value;
	}

	inline static int32_t get_offset_of_U3CIsInactiveU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PhotonPlayer_t4120608827, ___U3CIsInactiveU3Ek__BackingField_4)); }
	inline bool get_U3CIsInactiveU3Ek__BackingField_4() const { return ___U3CIsInactiveU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsInactiveU3Ek__BackingField_4() { return &___U3CIsInactiveU3Ek__BackingField_4; }
	inline void set_U3CIsInactiveU3Ek__BackingField_4(bool value)
	{
		___U3CIsInactiveU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CCustomPropertiesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PhotonPlayer_t4120608827, ___U3CCustomPropertiesU3Ek__BackingField_5)); }
	inline Hashtable_t995404622 * get_U3CCustomPropertiesU3Ek__BackingField_5() const { return ___U3CCustomPropertiesU3Ek__BackingField_5; }
	inline Hashtable_t995404622 ** get_address_of_U3CCustomPropertiesU3Ek__BackingField_5() { return &___U3CCustomPropertiesU3Ek__BackingField_5; }
	inline void set_U3CCustomPropertiesU3Ek__BackingField_5(Hashtable_t995404622 * value)
	{
		___U3CCustomPropertiesU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCustomPropertiesU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_TagObject_6() { return static_cast<int32_t>(offsetof(PhotonPlayer_t4120608827, ___TagObject_6)); }
	inline Il2CppObject * get_TagObject_6() const { return ___TagObject_6; }
	inline Il2CppObject ** get_address_of_TagObject_6() { return &___TagObject_6; }
	inline void set_TagObject_6(Il2CppObject * value)
	{
		___TagObject_6 = value;
		Il2CppCodeGenWriteBarrier(&___TagObject_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
