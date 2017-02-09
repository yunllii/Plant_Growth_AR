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
// System.ComponentModel.ComplexBindingPropertiesAttribute
struct ComplexBindingPropertiesAttribute_t527181054;

#include "mscorlib_System_Attribute542643598.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComplexBindingPropertiesAttribute
struct  ComplexBindingPropertiesAttribute_t527181054  : public Attribute_t542643598
{
public:
	// System.String System.ComponentModel.ComplexBindingPropertiesAttribute::data_source
	String_t* ___data_source_0;
	// System.String System.ComponentModel.ComplexBindingPropertiesAttribute::data_member
	String_t* ___data_member_1;

public:
	inline static int32_t get_offset_of_data_source_0() { return static_cast<int32_t>(offsetof(ComplexBindingPropertiesAttribute_t527181054, ___data_source_0)); }
	inline String_t* get_data_source_0() const { return ___data_source_0; }
	inline String_t** get_address_of_data_source_0() { return &___data_source_0; }
	inline void set_data_source_0(String_t* value)
	{
		___data_source_0 = value;
		Il2CppCodeGenWriteBarrier(&___data_source_0, value);
	}

	inline static int32_t get_offset_of_data_member_1() { return static_cast<int32_t>(offsetof(ComplexBindingPropertiesAttribute_t527181054, ___data_member_1)); }
	inline String_t* get_data_member_1() const { return ___data_member_1; }
	inline String_t** get_address_of_data_member_1() { return &___data_member_1; }
	inline void set_data_member_1(String_t* value)
	{
		___data_member_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_member_1, value);
	}
};

struct ComplexBindingPropertiesAttribute_t527181054_StaticFields
{
public:
	// System.ComponentModel.ComplexBindingPropertiesAttribute System.ComponentModel.ComplexBindingPropertiesAttribute::Default
	ComplexBindingPropertiesAttribute_t527181054 * ___Default_2;

public:
	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(ComplexBindingPropertiesAttribute_t527181054_StaticFields, ___Default_2)); }
	inline ComplexBindingPropertiesAttribute_t527181054 * get_Default_2() const { return ___Default_2; }
	inline ComplexBindingPropertiesAttribute_t527181054 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(ComplexBindingPropertiesAttribute_t527181054 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier(&___Default_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
