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
// UnityEngine.UI.Slider
struct Slider_t297367283;
// ExitGames.Demos.DemoAnimator.PlayerManager
struct PlayerManager_t514296090;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Renderer
struct Renderer_t257310565;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Demos.DemoAnimator.PlayerUI
struct  PlayerUI_t308274001  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 ExitGames.Demos.DemoAnimator.PlayerUI::ScreenOffset
	Vector3_t2243707580  ___ScreenOffset_2;
	// UnityEngine.UI.Text ExitGames.Demos.DemoAnimator.PlayerUI::PlayerNameText
	Text_t356221433 * ___PlayerNameText_3;
	// UnityEngine.UI.Slider ExitGames.Demos.DemoAnimator.PlayerUI::PlayerHealthSlider
	Slider_t297367283 * ___PlayerHealthSlider_4;
	// ExitGames.Demos.DemoAnimator.PlayerManager ExitGames.Demos.DemoAnimator.PlayerUI::_target
	PlayerManager_t514296090 * ____target_5;
	// System.Single ExitGames.Demos.DemoAnimator.PlayerUI::_characterControllerHeight
	float ____characterControllerHeight_6;
	// UnityEngine.Transform ExitGames.Demos.DemoAnimator.PlayerUI::_targetTransform
	Transform_t3275118058 * ____targetTransform_7;
	// UnityEngine.Renderer ExitGames.Demos.DemoAnimator.PlayerUI::_targetRenderer
	Renderer_t257310565 * ____targetRenderer_8;
	// UnityEngine.Vector3 ExitGames.Demos.DemoAnimator.PlayerUI::_targetPosition
	Vector3_t2243707580  ____targetPosition_9;

public:
	inline static int32_t get_offset_of_ScreenOffset_2() { return static_cast<int32_t>(offsetof(PlayerUI_t308274001, ___ScreenOffset_2)); }
	inline Vector3_t2243707580  get_ScreenOffset_2() const { return ___ScreenOffset_2; }
	inline Vector3_t2243707580 * get_address_of_ScreenOffset_2() { return &___ScreenOffset_2; }
	inline void set_ScreenOffset_2(Vector3_t2243707580  value)
	{
		___ScreenOffset_2 = value;
	}

	inline static int32_t get_offset_of_PlayerNameText_3() { return static_cast<int32_t>(offsetof(PlayerUI_t308274001, ___PlayerNameText_3)); }
	inline Text_t356221433 * get_PlayerNameText_3() const { return ___PlayerNameText_3; }
	inline Text_t356221433 ** get_address_of_PlayerNameText_3() { return &___PlayerNameText_3; }
	inline void set_PlayerNameText_3(Text_t356221433 * value)
	{
		___PlayerNameText_3 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerNameText_3, value);
	}

	inline static int32_t get_offset_of_PlayerHealthSlider_4() { return static_cast<int32_t>(offsetof(PlayerUI_t308274001, ___PlayerHealthSlider_4)); }
	inline Slider_t297367283 * get_PlayerHealthSlider_4() const { return ___PlayerHealthSlider_4; }
	inline Slider_t297367283 ** get_address_of_PlayerHealthSlider_4() { return &___PlayerHealthSlider_4; }
	inline void set_PlayerHealthSlider_4(Slider_t297367283 * value)
	{
		___PlayerHealthSlider_4 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerHealthSlider_4, value);
	}

	inline static int32_t get_offset_of__target_5() { return static_cast<int32_t>(offsetof(PlayerUI_t308274001, ____target_5)); }
	inline PlayerManager_t514296090 * get__target_5() const { return ____target_5; }
	inline PlayerManager_t514296090 ** get_address_of__target_5() { return &____target_5; }
	inline void set__target_5(PlayerManager_t514296090 * value)
	{
		____target_5 = value;
		Il2CppCodeGenWriteBarrier(&____target_5, value);
	}

	inline static int32_t get_offset_of__characterControllerHeight_6() { return static_cast<int32_t>(offsetof(PlayerUI_t308274001, ____characterControllerHeight_6)); }
	inline float get__characterControllerHeight_6() const { return ____characterControllerHeight_6; }
	inline float* get_address_of__characterControllerHeight_6() { return &____characterControllerHeight_6; }
	inline void set__characterControllerHeight_6(float value)
	{
		____characterControllerHeight_6 = value;
	}

	inline static int32_t get_offset_of__targetTransform_7() { return static_cast<int32_t>(offsetof(PlayerUI_t308274001, ____targetTransform_7)); }
	inline Transform_t3275118058 * get__targetTransform_7() const { return ____targetTransform_7; }
	inline Transform_t3275118058 ** get_address_of__targetTransform_7() { return &____targetTransform_7; }
	inline void set__targetTransform_7(Transform_t3275118058 * value)
	{
		____targetTransform_7 = value;
		Il2CppCodeGenWriteBarrier(&____targetTransform_7, value);
	}

	inline static int32_t get_offset_of__targetRenderer_8() { return static_cast<int32_t>(offsetof(PlayerUI_t308274001, ____targetRenderer_8)); }
	inline Renderer_t257310565 * get__targetRenderer_8() const { return ____targetRenderer_8; }
	inline Renderer_t257310565 ** get_address_of__targetRenderer_8() { return &____targetRenderer_8; }
	inline void set__targetRenderer_8(Renderer_t257310565 * value)
	{
		____targetRenderer_8 = value;
		Il2CppCodeGenWriteBarrier(&____targetRenderer_8, value);
	}

	inline static int32_t get_offset_of__targetPosition_9() { return static_cast<int32_t>(offsetof(PlayerUI_t308274001, ____targetPosition_9)); }
	inline Vector3_t2243707580  get__targetPosition_9() const { return ____targetPosition_9; }
	inline Vector3_t2243707580 * get_address_of__targetPosition_9() { return &____targetPosition_9; }
	inline void set__targetPosition_9(Vector3_t2243707580  value)
	{
		____targetPosition_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
