#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;

#include "System_System_ComponentModel_PropertyDescriptor4250402154.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DerivedPropertyDescriptor
struct  DerivedPropertyDescriptor_t1502098785  : public PropertyDescriptor_t4250402154
{
public:
	// System.Boolean System.ComponentModel.DerivedPropertyDescriptor::readOnly
	bool ___readOnly_6;
	// System.Type System.ComponentModel.DerivedPropertyDescriptor::componentType
	Type_t * ___componentType_7;
	// System.Type System.ComponentModel.DerivedPropertyDescriptor::propertyType
	Type_t * ___propertyType_8;
	// System.Reflection.PropertyInfo System.ComponentModel.DerivedPropertyDescriptor::prop
	PropertyInfo_t * ___prop_9;

public:
	inline static int32_t get_offset_of_readOnly_6() { return static_cast<int32_t>(offsetof(DerivedPropertyDescriptor_t1502098785, ___readOnly_6)); }
	inline bool get_readOnly_6() const { return ___readOnly_6; }
	inline bool* get_address_of_readOnly_6() { return &___readOnly_6; }
	inline void set_readOnly_6(bool value)
	{
		___readOnly_6 = value;
	}

	inline static int32_t get_offset_of_componentType_7() { return static_cast<int32_t>(offsetof(DerivedPropertyDescriptor_t1502098785, ___componentType_7)); }
	inline Type_t * get_componentType_7() const { return ___componentType_7; }
	inline Type_t ** get_address_of_componentType_7() { return &___componentType_7; }
	inline void set_componentType_7(Type_t * value)
	{
		___componentType_7 = value;
		Il2CppCodeGenWriteBarrier(&___componentType_7, value);
	}

	inline static int32_t get_offset_of_propertyType_8() { return static_cast<int32_t>(offsetof(DerivedPropertyDescriptor_t1502098785, ___propertyType_8)); }
	inline Type_t * get_propertyType_8() const { return ___propertyType_8; }
	inline Type_t ** get_address_of_propertyType_8() { return &___propertyType_8; }
	inline void set_propertyType_8(Type_t * value)
	{
		___propertyType_8 = value;
		Il2CppCodeGenWriteBarrier(&___propertyType_8, value);
	}

	inline static int32_t get_offset_of_prop_9() { return static_cast<int32_t>(offsetof(DerivedPropertyDescriptor_t1502098785, ___prop_9)); }
	inline PropertyInfo_t * get_prop_9() const { return ___prop_9; }
	inline PropertyInfo_t ** get_address_of_prop_9() { return &___prop_9; }
	inline void set_prop_9(PropertyInfo_t * value)
	{
		___prop_9 = value;
		Il2CppCodeGenWriteBarrier(&___prop_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
