﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type[]
struct TypeU5BU5D_t1664964607;

#include "System_System_ComponentModel_TypeConverter745995970.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeListConverter
struct  TypeListConverter_t2824544940  : public TypeConverter_t745995970
{
public:
	// System.Type[] System.ComponentModel.TypeListConverter::types
	TypeU5BU5D_t1664964607* ___types_0;

public:
	inline static int32_t get_offset_of_types_0() { return static_cast<int32_t>(offsetof(TypeListConverter_t2824544940, ___types_0)); }
	inline TypeU5BU5D_t1664964607* get_types_0() const { return ___types_0; }
	inline TypeU5BU5D_t1664964607** get_address_of_types_0() { return &___types_0; }
	inline void set_types_0(TypeU5BU5D_t1664964607* value)
	{
		___types_0 = value;
		Il2CppCodeGenWriteBarrier(&___types_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
