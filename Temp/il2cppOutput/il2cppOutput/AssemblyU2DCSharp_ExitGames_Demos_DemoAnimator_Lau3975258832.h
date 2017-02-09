#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;
// ExitGames.Demos.DemoAnimator.LoaderAnime
struct LoaderAnime_t4252622961;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_Photon_PunBehaviour692890556.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Demos.DemoAnimator.Launcher
struct  Launcher_t3975258832  : public PunBehaviour_t692890556
{
public:
	// UnityEngine.GameObject ExitGames.Demos.DemoAnimator.Launcher::controlPanel
	GameObject_t1756533147 * ___controlPanel_3;
	// UnityEngine.UI.Text ExitGames.Demos.DemoAnimator.Launcher::feedbackText
	Text_t356221433 * ___feedbackText_4;
	// System.Byte ExitGames.Demos.DemoAnimator.Launcher::maxPlayersPerRoom
	uint8_t ___maxPlayersPerRoom_5;
	// ExitGames.Demos.DemoAnimator.LoaderAnime ExitGames.Demos.DemoAnimator.Launcher::loaderAnime
	LoaderAnime_t4252622961 * ___loaderAnime_6;
	// System.Boolean ExitGames.Demos.DemoAnimator.Launcher::isConnecting
	bool ___isConnecting_7;
	// System.String ExitGames.Demos.DemoAnimator.Launcher::_gameVersion
	String_t* ____gameVersion_8;

public:
	inline static int32_t get_offset_of_controlPanel_3() { return static_cast<int32_t>(offsetof(Launcher_t3975258832, ___controlPanel_3)); }
	inline GameObject_t1756533147 * get_controlPanel_3() const { return ___controlPanel_3; }
	inline GameObject_t1756533147 ** get_address_of_controlPanel_3() { return &___controlPanel_3; }
	inline void set_controlPanel_3(GameObject_t1756533147 * value)
	{
		___controlPanel_3 = value;
		Il2CppCodeGenWriteBarrier(&___controlPanel_3, value);
	}

	inline static int32_t get_offset_of_feedbackText_4() { return static_cast<int32_t>(offsetof(Launcher_t3975258832, ___feedbackText_4)); }
	inline Text_t356221433 * get_feedbackText_4() const { return ___feedbackText_4; }
	inline Text_t356221433 ** get_address_of_feedbackText_4() { return &___feedbackText_4; }
	inline void set_feedbackText_4(Text_t356221433 * value)
	{
		___feedbackText_4 = value;
		Il2CppCodeGenWriteBarrier(&___feedbackText_4, value);
	}

	inline static int32_t get_offset_of_maxPlayersPerRoom_5() { return static_cast<int32_t>(offsetof(Launcher_t3975258832, ___maxPlayersPerRoom_5)); }
	inline uint8_t get_maxPlayersPerRoom_5() const { return ___maxPlayersPerRoom_5; }
	inline uint8_t* get_address_of_maxPlayersPerRoom_5() { return &___maxPlayersPerRoom_5; }
	inline void set_maxPlayersPerRoom_5(uint8_t value)
	{
		___maxPlayersPerRoom_5 = value;
	}

	inline static int32_t get_offset_of_loaderAnime_6() { return static_cast<int32_t>(offsetof(Launcher_t3975258832, ___loaderAnime_6)); }
	inline LoaderAnime_t4252622961 * get_loaderAnime_6() const { return ___loaderAnime_6; }
	inline LoaderAnime_t4252622961 ** get_address_of_loaderAnime_6() { return &___loaderAnime_6; }
	inline void set_loaderAnime_6(LoaderAnime_t4252622961 * value)
	{
		___loaderAnime_6 = value;
		Il2CppCodeGenWriteBarrier(&___loaderAnime_6, value);
	}

	inline static int32_t get_offset_of_isConnecting_7() { return static_cast<int32_t>(offsetof(Launcher_t3975258832, ___isConnecting_7)); }
	inline bool get_isConnecting_7() const { return ___isConnecting_7; }
	inline bool* get_address_of_isConnecting_7() { return &___isConnecting_7; }
	inline void set_isConnecting_7(bool value)
	{
		___isConnecting_7 = value;
	}

	inline static int32_t get_offset_of__gameVersion_8() { return static_cast<int32_t>(offsetof(Launcher_t3975258832, ____gameVersion_8)); }
	inline String_t* get__gameVersion_8() const { return ____gameVersion_8; }
	inline String_t** get_address_of__gameVersion_8() { return &____gameVersion_8; }
	inline void set__gameVersion_8(String_t* value)
	{
		____gameVersion_8 = value;
		Il2CppCodeGenWriteBarrier(&____gameVersion_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
