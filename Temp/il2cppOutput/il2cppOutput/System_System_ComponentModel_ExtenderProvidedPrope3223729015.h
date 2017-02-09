#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t4250402154;
// System.ComponentModel.IExtenderProvider
struct IExtenderProvider_t791831889;
// System.Type
struct Type_t;

#include "mscorlib_System_Attribute542643598.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExtenderProvidedPropertyAttribute
struct  ExtenderProvidedPropertyAttribute_t3223729015  : public Attribute_t542643598
{
public:
	// System.ComponentModel.PropertyDescriptor System.ComponentModel.ExtenderProvidedPropertyAttribute::extender
	PropertyDescriptor_t4250402154 * ___extender_0;
	// System.ComponentModel.IExtenderProvider System.ComponentModel.ExtenderProvidedPropertyAttribute::extenderProvider
	Il2CppObject * ___extenderProvider_1;
	// System.Type System.ComponentModel.ExtenderProvidedPropertyAttribute::receiver
	Type_t * ___receiver_2;

public:
	inline static int32_t get_offset_of_extender_0() { return static_cast<int32_t>(offsetof(ExtenderProvidedPropertyAttribute_t3223729015, ___extender_0)); }
	inline PropertyDescriptor_t4250402154 * get_extender_0() const { return ___extender_0; }
	inline PropertyDescriptor_t4250402154 ** get_address_of_extender_0() { return &___extender_0; }
	inline void set_extender_0(PropertyDescriptor_t4250402154 * value)
	{
		___extender_0 = value;
		Il2CppCodeGenWriteBarrier(&___extender_0, value);
	}

	inline static int32_t get_offset_of_extenderProvider_1() { return static_cast<int32_t>(offsetof(ExtenderProvidedPropertyAttribute_t3223729015, ___extenderProvider_1)); }
	inline Il2CppObject * get_extenderProvider_1() const { return ___extenderProvider_1; }
	inline Il2CppObject ** get_address_of_extenderProvider_1() { return &___extenderProvider_1; }
	inline void set_extenderProvider_1(Il2CppObject * value)
	{
		___extenderProvider_1 = value;
		Il2CppCodeGenWriteBarrier(&___extenderProvider_1, value);
	}

	inline static int32_t get_offset_of_receiver_2() { return static_cast<int32_t>(offsetof(ExtenderProvidedPropertyAttribute_t3223729015, ___receiver_2)); }
	inline Type_t * get_receiver_2() const { return ___receiver_2; }
	inline Type_t ** get_address_of_receiver_2() { return &___receiver_2; }
	inline void set_receiver_2(Type_t * value)
	{
		___receiver_2 = value;
		Il2CppCodeGenWriteBarrier(&___receiver_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
