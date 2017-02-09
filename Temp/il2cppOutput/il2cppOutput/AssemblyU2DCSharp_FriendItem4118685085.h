#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FriendItem
struct  FriendItem_t4118685085  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text FriendItem::NameLabel
	Text_t356221433 * ___NameLabel_2;
	// UnityEngine.UI.Text FriendItem::StatusLabel
	Text_t356221433 * ___StatusLabel_3;
	// UnityEngine.UI.Text FriendItem::Health
	Text_t356221433 * ___Health_4;

public:
	inline static int32_t get_offset_of_NameLabel_2() { return static_cast<int32_t>(offsetof(FriendItem_t4118685085, ___NameLabel_2)); }
	inline Text_t356221433 * get_NameLabel_2() const { return ___NameLabel_2; }
	inline Text_t356221433 ** get_address_of_NameLabel_2() { return &___NameLabel_2; }
	inline void set_NameLabel_2(Text_t356221433 * value)
	{
		___NameLabel_2 = value;
		Il2CppCodeGenWriteBarrier(&___NameLabel_2, value);
	}

	inline static int32_t get_offset_of_StatusLabel_3() { return static_cast<int32_t>(offsetof(FriendItem_t4118685085, ___StatusLabel_3)); }
	inline Text_t356221433 * get_StatusLabel_3() const { return ___StatusLabel_3; }
	inline Text_t356221433 ** get_address_of_StatusLabel_3() { return &___StatusLabel_3; }
	inline void set_StatusLabel_3(Text_t356221433 * value)
	{
		___StatusLabel_3 = value;
		Il2CppCodeGenWriteBarrier(&___StatusLabel_3, value);
	}

	inline static int32_t get_offset_of_Health_4() { return static_cast<int32_t>(offsetof(FriendItem_t4118685085, ___Health_4)); }
	inline Text_t356221433 * get_Health_4() const { return ___Health_4; }
	inline Text_t356221433 ** get_address_of_Health_4() { return &___Health_4; }
	inline void set_Health_4(Text_t356221433 * value)
	{
		___Health_4 = value;
		Il2CppCodeGenWriteBarrier(&___Health_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
