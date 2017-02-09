#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUISkin
struct GUISkin_t1436893342;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_HubGui_DemoBtn4078322204.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HubGui
struct  HubGui_t2401392858  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GUISkin HubGui::Skin
	GUISkin_t1436893342 * ___Skin_2;
	// UnityEngine.Vector2 HubGui::scrollPos
	Vector2_t2243707579  ___scrollPos_3;
	// System.String HubGui::demoDescription
	String_t* ___demoDescription_4;
	// HubGui/DemoBtn HubGui::demoBtn
	DemoBtn_t4078322204  ___demoBtn_5;
	// HubGui/DemoBtn HubGui::webLink
	DemoBtn_t4078322204  ___webLink_6;
	// UnityEngine.GUIStyle HubGui::m_Headline
	GUIStyle_t1799908754 * ___m_Headline_7;

public:
	inline static int32_t get_offset_of_Skin_2() { return static_cast<int32_t>(offsetof(HubGui_t2401392858, ___Skin_2)); }
	inline GUISkin_t1436893342 * get_Skin_2() const { return ___Skin_2; }
	inline GUISkin_t1436893342 ** get_address_of_Skin_2() { return &___Skin_2; }
	inline void set_Skin_2(GUISkin_t1436893342 * value)
	{
		___Skin_2 = value;
		Il2CppCodeGenWriteBarrier(&___Skin_2, value);
	}

	inline static int32_t get_offset_of_scrollPos_3() { return static_cast<int32_t>(offsetof(HubGui_t2401392858, ___scrollPos_3)); }
	inline Vector2_t2243707579  get_scrollPos_3() const { return ___scrollPos_3; }
	inline Vector2_t2243707579 * get_address_of_scrollPos_3() { return &___scrollPos_3; }
	inline void set_scrollPos_3(Vector2_t2243707579  value)
	{
		___scrollPos_3 = value;
	}

	inline static int32_t get_offset_of_demoDescription_4() { return static_cast<int32_t>(offsetof(HubGui_t2401392858, ___demoDescription_4)); }
	inline String_t* get_demoDescription_4() const { return ___demoDescription_4; }
	inline String_t** get_address_of_demoDescription_4() { return &___demoDescription_4; }
	inline void set_demoDescription_4(String_t* value)
	{
		___demoDescription_4 = value;
		Il2CppCodeGenWriteBarrier(&___demoDescription_4, value);
	}

	inline static int32_t get_offset_of_demoBtn_5() { return static_cast<int32_t>(offsetof(HubGui_t2401392858, ___demoBtn_5)); }
	inline DemoBtn_t4078322204  get_demoBtn_5() const { return ___demoBtn_5; }
	inline DemoBtn_t4078322204 * get_address_of_demoBtn_5() { return &___demoBtn_5; }
	inline void set_demoBtn_5(DemoBtn_t4078322204  value)
	{
		___demoBtn_5 = value;
	}

	inline static int32_t get_offset_of_webLink_6() { return static_cast<int32_t>(offsetof(HubGui_t2401392858, ___webLink_6)); }
	inline DemoBtn_t4078322204  get_webLink_6() const { return ___webLink_6; }
	inline DemoBtn_t4078322204 * get_address_of_webLink_6() { return &___webLink_6; }
	inline void set_webLink_6(DemoBtn_t4078322204  value)
	{
		___webLink_6 = value;
	}

	inline static int32_t get_offset_of_m_Headline_7() { return static_cast<int32_t>(offsetof(HubGui_t2401392858, ___m_Headline_7)); }
	inline GUIStyle_t1799908754 * get_m_Headline_7() const { return ___m_Headline_7; }
	inline GUIStyle_t1799908754 ** get_address_of_m_Headline_7() { return &___m_Headline_7; }
	inline void set_m_Headline_7(GUIStyle_t1799908754 * value)
	{
		___m_Headline_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_Headline_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
