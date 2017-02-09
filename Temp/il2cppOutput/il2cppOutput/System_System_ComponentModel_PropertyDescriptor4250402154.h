#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.TypeConverter
struct TypeConverter_t745995970;
// System.Collections.Hashtable
struct Hashtable_t909839986;

#include "System_System_ComponentModel_MemberDescriptor3749827553.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t4250402154  : public MemberDescriptor_t3749827553
{
public:
	// System.ComponentModel.TypeConverter System.ComponentModel.PropertyDescriptor::converter
	TypeConverter_t745995970 * ___converter_4;
	// System.Collections.Hashtable System.ComponentModel.PropertyDescriptor::notifiers
	Hashtable_t909839986 * ___notifiers_5;

public:
	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t4250402154, ___converter_4)); }
	inline TypeConverter_t745995970 * get_converter_4() const { return ___converter_4; }
	inline TypeConverter_t745995970 ** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(TypeConverter_t745995970 * value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier(&___converter_4, value);
	}

	inline static int32_t get_offset_of_notifiers_5() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t4250402154, ___notifiers_5)); }
	inline Hashtable_t909839986 * get_notifiers_5() const { return ___notifiers_5; }
	inline Hashtable_t909839986 ** get_address_of_notifiers_5() { return &___notifiers_5; }
	inline void set_notifiers_5(Hashtable_t909839986 * value)
	{
		___notifiers_5 = value;
		Il2CppCodeGenWriteBarrier(&___notifiers_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
