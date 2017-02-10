#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "mscorlib_System_Attribute542643598.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.DefaultParameterValueAttribute
struct  DefaultParameterValueAttribute_t589541489  : public Attribute_t542643598
{
public:
	// System.Object System.Runtime.InteropServices.DefaultParameterValueAttribute::value
	Il2CppObject * ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(DefaultParameterValueAttribute_t589541489, ___value_0)); }
	inline Il2CppObject * get_value_0() const { return ___value_0; }
	inline Il2CppObject ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Il2CppObject * value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier(&___value_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
