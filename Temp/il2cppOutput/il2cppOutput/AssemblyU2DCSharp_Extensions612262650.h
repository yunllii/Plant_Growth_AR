﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Reflection.ParameterInfo[]>
struct Dictionary_2_t2700743088;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Extensions
struct  Extensions_t612262650  : public Il2CppObject
{
public:

public:
};

struct Extensions_t612262650_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Reflection.ParameterInfo[]> Extensions::ParametersOfMethods
	Dictionary_2_t2700743088 * ___ParametersOfMethods_0;

public:
	inline static int32_t get_offset_of_ParametersOfMethods_0() { return static_cast<int32_t>(offsetof(Extensions_t612262650_StaticFields, ___ParametersOfMethods_0)); }
	inline Dictionary_2_t2700743088 * get_ParametersOfMethods_0() const { return ___ParametersOfMethods_0; }
	inline Dictionary_2_t2700743088 ** get_address_of_ParametersOfMethods_0() { return &___ParametersOfMethods_0; }
	inline void set_ParametersOfMethods_0(Dictionary_2_t2700743088 * value)
	{
		___ParametersOfMethods_0 = value;
		Il2CppCodeGenWriteBarrier(&___ParametersOfMethods_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
