#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// ToHubButton
struct ToHubButton_t1019813820;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ToHubButton
struct  ToHubButton_t1019813820  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Texture2D ToHubButton::ButtonTexture
	Texture2D_t3542995729 * ___ButtonTexture_2;
	// UnityEngine.Rect ToHubButton::ButtonRect
	Rect_t3681755626  ___ButtonRect_3;

public:
	inline static int32_t get_offset_of_ButtonTexture_2() { return static_cast<int32_t>(offsetof(ToHubButton_t1019813820, ___ButtonTexture_2)); }
	inline Texture2D_t3542995729 * get_ButtonTexture_2() const { return ___ButtonTexture_2; }
	inline Texture2D_t3542995729 ** get_address_of_ButtonTexture_2() { return &___ButtonTexture_2; }
	inline void set_ButtonTexture_2(Texture2D_t3542995729 * value)
	{
		___ButtonTexture_2 = value;
		Il2CppCodeGenWriteBarrier(&___ButtonTexture_2, value);
	}

	inline static int32_t get_offset_of_ButtonRect_3() { return static_cast<int32_t>(offsetof(ToHubButton_t1019813820, ___ButtonRect_3)); }
	inline Rect_t3681755626  get_ButtonRect_3() const { return ___ButtonRect_3; }
	inline Rect_t3681755626 * get_address_of_ButtonRect_3() { return &___ButtonRect_3; }
	inline void set_ButtonRect_3(Rect_t3681755626  value)
	{
		___ButtonRect_3 = value;
	}
};

struct ToHubButton_t1019813820_StaticFields
{
public:
	// ToHubButton ToHubButton::instance
	ToHubButton_t1019813820 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(ToHubButton_t1019813820_StaticFields, ___instance_4)); }
	inline ToHubButton_t1019813820 * get_instance_4() const { return ___instance_4; }
	inline ToHubButton_t1019813820 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(ToHubButton_t1019813820 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
