#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.InputField
struct InputField_t1631627530;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_Photon_PunBehaviour692890556.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RpsDemoConnect
struct  RpsDemoConnect_t3312340854  : public PunBehaviour_t692890556
{
public:
	// UnityEngine.UI.InputField RpsDemoConnect::InputField
	InputField_t1631627530 * ___InputField_3;
	// System.String RpsDemoConnect::UserId
	String_t* ___UserId_4;
	// System.String RpsDemoConnect::previousRoom
	String_t* ___previousRoom_5;

public:
	inline static int32_t get_offset_of_InputField_3() { return static_cast<int32_t>(offsetof(RpsDemoConnect_t3312340854, ___InputField_3)); }
	inline InputField_t1631627530 * get_InputField_3() const { return ___InputField_3; }
	inline InputField_t1631627530 ** get_address_of_InputField_3() { return &___InputField_3; }
	inline void set_InputField_3(InputField_t1631627530 * value)
	{
		___InputField_3 = value;
		Il2CppCodeGenWriteBarrier(&___InputField_3, value);
	}

	inline static int32_t get_offset_of_UserId_4() { return static_cast<int32_t>(offsetof(RpsDemoConnect_t3312340854, ___UserId_4)); }
	inline String_t* get_UserId_4() const { return ___UserId_4; }
	inline String_t** get_address_of_UserId_4() { return &___UserId_4; }
	inline void set_UserId_4(String_t* value)
	{
		___UserId_4 = value;
		Il2CppCodeGenWriteBarrier(&___UserId_4, value);
	}

	inline static int32_t get_offset_of_previousRoom_5() { return static_cast<int32_t>(offsetof(RpsDemoConnect_t3312340854, ___previousRoom_5)); }
	inline String_t* get_previousRoom_5() const { return ___previousRoom_5; }
	inline String_t** get_address_of_previousRoom_5() { return &___previousRoom_5; }
	inline void set_previousRoom_5(String_t* value)
	{
		___previousRoom_5 = value;
		Il2CppCodeGenWriteBarrier(&___previousRoom_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
