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

#include "mscorlib_System_Attribute542643598.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AttributeProviderAttribute
struct  AttributeProviderAttribute_t780297797  : public Attribute_t542643598
{
public:
	// System.String System.ComponentModel.AttributeProviderAttribute::type_name
	String_t* ___type_name_0;
	// System.String System.ComponentModel.AttributeProviderAttribute::property_name
	String_t* ___property_name_1;

public:
	inline static int32_t get_offset_of_type_name_0() { return static_cast<int32_t>(offsetof(AttributeProviderAttribute_t780297797, ___type_name_0)); }
	inline String_t* get_type_name_0() const { return ___type_name_0; }
	inline String_t** get_address_of_type_name_0() { return &___type_name_0; }
	inline void set_type_name_0(String_t* value)
	{
		___type_name_0 = value;
		Il2CppCodeGenWriteBarrier(&___type_name_0, value);
	}

	inline static int32_t get_offset_of_property_name_1() { return static_cast<int32_t>(offsetof(AttributeProviderAttribute_t780297797, ___property_name_1)); }
	inline String_t* get_property_name_1() const { return ___property_name_1; }
	inline String_t** get_address_of_property_name_1() { return &___property_name_1; }
	inline void set_property_name_1(String_t* value)
	{
		___property_name_1 = value;
		Il2CppCodeGenWriteBarrier(&___property_name_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
