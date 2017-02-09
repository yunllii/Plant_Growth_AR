#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Toggle
struct Toggle_t3976754468;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.UtilityScripts.TextToggleIsOnTransition
struct  TextToggleIsOnTransition_t2505131529  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Toggle ExitGames.UtilityScripts.TextToggleIsOnTransition::toggle
	Toggle_t3976754468 * ___toggle_2;
	// UnityEngine.UI.Text ExitGames.UtilityScripts.TextToggleIsOnTransition::_text
	Text_t356221433 * ____text_3;
	// UnityEngine.Color ExitGames.UtilityScripts.TextToggleIsOnTransition::NormalOnColor
	Color_t2020392075  ___NormalOnColor_4;
	// UnityEngine.Color ExitGames.UtilityScripts.TextToggleIsOnTransition::NormalOffColor
	Color_t2020392075  ___NormalOffColor_5;
	// UnityEngine.Color ExitGames.UtilityScripts.TextToggleIsOnTransition::HoverOnColor
	Color_t2020392075  ___HoverOnColor_6;
	// UnityEngine.Color ExitGames.UtilityScripts.TextToggleIsOnTransition::HoverOffColor
	Color_t2020392075  ___HoverOffColor_7;
	// System.Boolean ExitGames.UtilityScripts.TextToggleIsOnTransition::isHover
	bool ___isHover_8;

public:
	inline static int32_t get_offset_of_toggle_2() { return static_cast<int32_t>(offsetof(TextToggleIsOnTransition_t2505131529, ___toggle_2)); }
	inline Toggle_t3976754468 * get_toggle_2() const { return ___toggle_2; }
	inline Toggle_t3976754468 ** get_address_of_toggle_2() { return &___toggle_2; }
	inline void set_toggle_2(Toggle_t3976754468 * value)
	{
		___toggle_2 = value;
		Il2CppCodeGenWriteBarrier(&___toggle_2, value);
	}

	inline static int32_t get_offset_of__text_3() { return static_cast<int32_t>(offsetof(TextToggleIsOnTransition_t2505131529, ____text_3)); }
	inline Text_t356221433 * get__text_3() const { return ____text_3; }
	inline Text_t356221433 ** get_address_of__text_3() { return &____text_3; }
	inline void set__text_3(Text_t356221433 * value)
	{
		____text_3 = value;
		Il2CppCodeGenWriteBarrier(&____text_3, value);
	}

	inline static int32_t get_offset_of_NormalOnColor_4() { return static_cast<int32_t>(offsetof(TextToggleIsOnTransition_t2505131529, ___NormalOnColor_4)); }
	inline Color_t2020392075  get_NormalOnColor_4() const { return ___NormalOnColor_4; }
	inline Color_t2020392075 * get_address_of_NormalOnColor_4() { return &___NormalOnColor_4; }
	inline void set_NormalOnColor_4(Color_t2020392075  value)
	{
		___NormalOnColor_4 = value;
	}

	inline static int32_t get_offset_of_NormalOffColor_5() { return static_cast<int32_t>(offsetof(TextToggleIsOnTransition_t2505131529, ___NormalOffColor_5)); }
	inline Color_t2020392075  get_NormalOffColor_5() const { return ___NormalOffColor_5; }
	inline Color_t2020392075 * get_address_of_NormalOffColor_5() { return &___NormalOffColor_5; }
	inline void set_NormalOffColor_5(Color_t2020392075  value)
	{
		___NormalOffColor_5 = value;
	}

	inline static int32_t get_offset_of_HoverOnColor_6() { return static_cast<int32_t>(offsetof(TextToggleIsOnTransition_t2505131529, ___HoverOnColor_6)); }
	inline Color_t2020392075  get_HoverOnColor_6() const { return ___HoverOnColor_6; }
	inline Color_t2020392075 * get_address_of_HoverOnColor_6() { return &___HoverOnColor_6; }
	inline void set_HoverOnColor_6(Color_t2020392075  value)
	{
		___HoverOnColor_6 = value;
	}

	inline static int32_t get_offset_of_HoverOffColor_7() { return static_cast<int32_t>(offsetof(TextToggleIsOnTransition_t2505131529, ___HoverOffColor_7)); }
	inline Color_t2020392075  get_HoverOffColor_7() const { return ___HoverOffColor_7; }
	inline Color_t2020392075 * get_address_of_HoverOffColor_7() { return &___HoverOffColor_7; }
	inline void set_HoverOffColor_7(Color_t2020392075  value)
	{
		___HoverOffColor_7 = value;
	}

	inline static int32_t get_offset_of_isHover_8() { return static_cast<int32_t>(offsetof(TextToggleIsOnTransition_t2505131529, ___isHover_8)); }
	inline bool get_isHover_8() const { return ___isHover_8; }
	inline bool* get_address_of_isHover_8() { return &___isHover_8; }
	inline void set_isHover_8(bool value)
	{
		___isHover_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
