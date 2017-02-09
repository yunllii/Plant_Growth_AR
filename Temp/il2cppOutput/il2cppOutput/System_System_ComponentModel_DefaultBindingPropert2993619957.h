#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.DefaultBindingPropertyAttribute
struct DefaultBindingPropertyAttribute_t2993619957;
// System.String
struct String_t;

#include "mscorlib_System_Attribute542643598.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultBindingPropertyAttribute
struct  DefaultBindingPropertyAttribute_t2993619957  : public Attribute_t542643598
{
public:
	// System.String System.ComponentModel.DefaultBindingPropertyAttribute::name
	String_t* ___name_1;

public:
	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(DefaultBindingPropertyAttribute_t2993619957, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}
};

struct DefaultBindingPropertyAttribute_t2993619957_StaticFields
{
public:
	// System.ComponentModel.DefaultBindingPropertyAttribute System.ComponentModel.DefaultBindingPropertyAttribute::Default
	DefaultBindingPropertyAttribute_t2993619957 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(DefaultBindingPropertyAttribute_t2993619957_StaticFields, ___Default_0)); }
	inline DefaultBindingPropertyAttribute_t2993619957 * get_Default_0() const { return ___Default_0; }
	inline DefaultBindingPropertyAttribute_t2993619957 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(DefaultBindingPropertyAttribute_t2993619957 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier(&___Default_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
