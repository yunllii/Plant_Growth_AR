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
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "AssemblyU2DCSharp_GUICustomAuth_GuiState201418673.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GUICustomAuth
struct  GUICustomAuth_t406084710  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rect GUICustomAuth::GuiRect
	Rect_t3681755626  ___GuiRect_2;
	// System.String GUICustomAuth::authName
	String_t* ___authName_3;
	// System.String GUICustomAuth::authToken
	String_t* ___authToken_4;
	// System.String GUICustomAuth::authDebugMessage
	String_t* ___authDebugMessage_5;
	// GUICustomAuth/GuiState GUICustomAuth::guiState
	int32_t ___guiState_6;
	// UnityEngine.GameObject GUICustomAuth::RootOf3dButtons
	GameObject_t1756533147 * ___RootOf3dButtons_7;

public:
	inline static int32_t get_offset_of_GuiRect_2() { return static_cast<int32_t>(offsetof(GUICustomAuth_t406084710, ___GuiRect_2)); }
	inline Rect_t3681755626  get_GuiRect_2() const { return ___GuiRect_2; }
	inline Rect_t3681755626 * get_address_of_GuiRect_2() { return &___GuiRect_2; }
	inline void set_GuiRect_2(Rect_t3681755626  value)
	{
		___GuiRect_2 = value;
	}

	inline static int32_t get_offset_of_authName_3() { return static_cast<int32_t>(offsetof(GUICustomAuth_t406084710, ___authName_3)); }
	inline String_t* get_authName_3() const { return ___authName_3; }
	inline String_t** get_address_of_authName_3() { return &___authName_3; }
	inline void set_authName_3(String_t* value)
	{
		___authName_3 = value;
		Il2CppCodeGenWriteBarrier(&___authName_3, value);
	}

	inline static int32_t get_offset_of_authToken_4() { return static_cast<int32_t>(offsetof(GUICustomAuth_t406084710, ___authToken_4)); }
	inline String_t* get_authToken_4() const { return ___authToken_4; }
	inline String_t** get_address_of_authToken_4() { return &___authToken_4; }
	inline void set_authToken_4(String_t* value)
	{
		___authToken_4 = value;
		Il2CppCodeGenWriteBarrier(&___authToken_4, value);
	}

	inline static int32_t get_offset_of_authDebugMessage_5() { return static_cast<int32_t>(offsetof(GUICustomAuth_t406084710, ___authDebugMessage_5)); }
	inline String_t* get_authDebugMessage_5() const { return ___authDebugMessage_5; }
	inline String_t** get_address_of_authDebugMessage_5() { return &___authDebugMessage_5; }
	inline void set_authDebugMessage_5(String_t* value)
	{
		___authDebugMessage_5 = value;
		Il2CppCodeGenWriteBarrier(&___authDebugMessage_5, value);
	}

	inline static int32_t get_offset_of_guiState_6() { return static_cast<int32_t>(offsetof(GUICustomAuth_t406084710, ___guiState_6)); }
	inline int32_t get_guiState_6() const { return ___guiState_6; }
	inline int32_t* get_address_of_guiState_6() { return &___guiState_6; }
	inline void set_guiState_6(int32_t value)
	{
		___guiState_6 = value;
	}

	inline static int32_t get_offset_of_RootOf3dButtons_7() { return static_cast<int32_t>(offsetof(GUICustomAuth_t406084710, ___RootOf3dButtons_7)); }
	inline GameObject_t1756533147 * get_RootOf3dButtons_7() const { return ___RootOf3dButtons_7; }
	inline GameObject_t1756533147 ** get_address_of_RootOf3dButtons_7() { return &___RootOf3dButtons_7; }
	inline void set_RootOf3dButtons_7(GameObject_t1756533147 * value)
	{
		___RootOf3dButtons_7 = value;
		Il2CppCodeGenWriteBarrier(&___RootOf3dButtons_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
