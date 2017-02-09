#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIText
struct GUIText_t2411476300;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DemoBoxesGui
struct  DemoBoxesGui_t1886963857  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean DemoBoxesGui::HideUI
	bool ___HideUI_2;
	// UnityEngine.GUIText DemoBoxesGui::GuiTextForTips
	GUIText_t2411476300 * ___GuiTextForTips_3;
	// System.Int32 DemoBoxesGui::tipsIndex
	int32_t ___tipsIndex_4;
	// System.String[] DemoBoxesGui::tips
	StringU5BU5D_t1642385972* ___tips_5;
	// System.Single DemoBoxesGui::timeSinceLastTip
	float ___timeSinceLastTip_7;

public:
	inline static int32_t get_offset_of_HideUI_2() { return static_cast<int32_t>(offsetof(DemoBoxesGui_t1886963857, ___HideUI_2)); }
	inline bool get_HideUI_2() const { return ___HideUI_2; }
	inline bool* get_address_of_HideUI_2() { return &___HideUI_2; }
	inline void set_HideUI_2(bool value)
	{
		___HideUI_2 = value;
	}

	inline static int32_t get_offset_of_GuiTextForTips_3() { return static_cast<int32_t>(offsetof(DemoBoxesGui_t1886963857, ___GuiTextForTips_3)); }
	inline GUIText_t2411476300 * get_GuiTextForTips_3() const { return ___GuiTextForTips_3; }
	inline GUIText_t2411476300 ** get_address_of_GuiTextForTips_3() { return &___GuiTextForTips_3; }
	inline void set_GuiTextForTips_3(GUIText_t2411476300 * value)
	{
		___GuiTextForTips_3 = value;
		Il2CppCodeGenWriteBarrier(&___GuiTextForTips_3, value);
	}

	inline static int32_t get_offset_of_tipsIndex_4() { return static_cast<int32_t>(offsetof(DemoBoxesGui_t1886963857, ___tipsIndex_4)); }
	inline int32_t get_tipsIndex_4() const { return ___tipsIndex_4; }
	inline int32_t* get_address_of_tipsIndex_4() { return &___tipsIndex_4; }
	inline void set_tipsIndex_4(int32_t value)
	{
		___tipsIndex_4 = value;
	}

	inline static int32_t get_offset_of_tips_5() { return static_cast<int32_t>(offsetof(DemoBoxesGui_t1886963857, ___tips_5)); }
	inline StringU5BU5D_t1642385972* get_tips_5() const { return ___tips_5; }
	inline StringU5BU5D_t1642385972** get_address_of_tips_5() { return &___tips_5; }
	inline void set_tips_5(StringU5BU5D_t1642385972* value)
	{
		___tips_5 = value;
		Il2CppCodeGenWriteBarrier(&___tips_5, value);
	}

	inline static int32_t get_offset_of_timeSinceLastTip_7() { return static_cast<int32_t>(offsetof(DemoBoxesGui_t1886963857, ___timeSinceLastTip_7)); }
	inline float get_timeSinceLastTip_7() const { return ___timeSinceLastTip_7; }
	inline float* get_address_of_timeSinceLastTip_7() { return &___timeSinceLastTip_7; }
	inline void set_timeSinceLastTip_7(float value)
	{
		___timeSinceLastTip_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
