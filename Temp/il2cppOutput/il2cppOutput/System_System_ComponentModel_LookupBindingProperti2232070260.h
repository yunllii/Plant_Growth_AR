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
// System.ComponentModel.LookupBindingPropertiesAttribute
struct LookupBindingPropertiesAttribute_t2232070260;

#include "mscorlib_System_Attribute542643598.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LookupBindingPropertiesAttribute
struct  LookupBindingPropertiesAttribute_t2232070260  : public Attribute_t542643598
{
public:
	// System.String System.ComponentModel.LookupBindingPropertiesAttribute::data_source
	String_t* ___data_source_0;
	// System.String System.ComponentModel.LookupBindingPropertiesAttribute::display_member
	String_t* ___display_member_1;
	// System.String System.ComponentModel.LookupBindingPropertiesAttribute::value_member
	String_t* ___value_member_2;
	// System.String System.ComponentModel.LookupBindingPropertiesAttribute::lookup_member
	String_t* ___lookup_member_3;

public:
	inline static int32_t get_offset_of_data_source_0() { return static_cast<int32_t>(offsetof(LookupBindingPropertiesAttribute_t2232070260, ___data_source_0)); }
	inline String_t* get_data_source_0() const { return ___data_source_0; }
	inline String_t** get_address_of_data_source_0() { return &___data_source_0; }
	inline void set_data_source_0(String_t* value)
	{
		___data_source_0 = value;
		Il2CppCodeGenWriteBarrier(&___data_source_0, value);
	}

	inline static int32_t get_offset_of_display_member_1() { return static_cast<int32_t>(offsetof(LookupBindingPropertiesAttribute_t2232070260, ___display_member_1)); }
	inline String_t* get_display_member_1() const { return ___display_member_1; }
	inline String_t** get_address_of_display_member_1() { return &___display_member_1; }
	inline void set_display_member_1(String_t* value)
	{
		___display_member_1 = value;
		Il2CppCodeGenWriteBarrier(&___display_member_1, value);
	}

	inline static int32_t get_offset_of_value_member_2() { return static_cast<int32_t>(offsetof(LookupBindingPropertiesAttribute_t2232070260, ___value_member_2)); }
	inline String_t* get_value_member_2() const { return ___value_member_2; }
	inline String_t** get_address_of_value_member_2() { return &___value_member_2; }
	inline void set_value_member_2(String_t* value)
	{
		___value_member_2 = value;
		Il2CppCodeGenWriteBarrier(&___value_member_2, value);
	}

	inline static int32_t get_offset_of_lookup_member_3() { return static_cast<int32_t>(offsetof(LookupBindingPropertiesAttribute_t2232070260, ___lookup_member_3)); }
	inline String_t* get_lookup_member_3() const { return ___lookup_member_3; }
	inline String_t** get_address_of_lookup_member_3() { return &___lookup_member_3; }
	inline void set_lookup_member_3(String_t* value)
	{
		___lookup_member_3 = value;
		Il2CppCodeGenWriteBarrier(&___lookup_member_3, value);
	}
};

struct LookupBindingPropertiesAttribute_t2232070260_StaticFields
{
public:
	// System.ComponentModel.LookupBindingPropertiesAttribute System.ComponentModel.LookupBindingPropertiesAttribute::Default
	LookupBindingPropertiesAttribute_t2232070260 * ___Default_4;

public:
	inline static int32_t get_offset_of_Default_4() { return static_cast<int32_t>(offsetof(LookupBindingPropertiesAttribute_t2232070260_StaticFields, ___Default_4)); }
	inline LookupBindingPropertiesAttribute_t2232070260 * get_Default_4() const { return ___Default_4; }
	inline LookupBindingPropertiesAttribute_t2232070260 ** get_address_of_Default_4() { return &___Default_4; }
	inline void set_Default_4(LookupBindingPropertiesAttribute_t2232070260 * value)
	{
		___Default_4 = value;
		Il2CppCodeGenWriteBarrier(&___Default_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
