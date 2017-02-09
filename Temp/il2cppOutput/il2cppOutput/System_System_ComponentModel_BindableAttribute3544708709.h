#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.BindableAttribute
struct BindableAttribute_t3544708709;

#include "mscorlib_System_Attribute542643598.h"
#include "System_System_ComponentModel_BindingDirection2271780566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BindableAttribute
struct  BindableAttribute_t3544708709  : public Attribute_t542643598
{
public:
	// System.Boolean System.ComponentModel.BindableAttribute::bindable
	bool ___bindable_0;
	// System.ComponentModel.BindingDirection System.ComponentModel.BindableAttribute::direction
	int32_t ___direction_1;

public:
	inline static int32_t get_offset_of_bindable_0() { return static_cast<int32_t>(offsetof(BindableAttribute_t3544708709, ___bindable_0)); }
	inline bool get_bindable_0() const { return ___bindable_0; }
	inline bool* get_address_of_bindable_0() { return &___bindable_0; }
	inline void set_bindable_0(bool value)
	{
		___bindable_0 = value;
	}

	inline static int32_t get_offset_of_direction_1() { return static_cast<int32_t>(offsetof(BindableAttribute_t3544708709, ___direction_1)); }
	inline int32_t get_direction_1() const { return ___direction_1; }
	inline int32_t* get_address_of_direction_1() { return &___direction_1; }
	inline void set_direction_1(int32_t value)
	{
		___direction_1 = value;
	}
};

struct BindableAttribute_t3544708709_StaticFields
{
public:
	// System.ComponentModel.BindableAttribute System.ComponentModel.BindableAttribute::No
	BindableAttribute_t3544708709 * ___No_2;
	// System.ComponentModel.BindableAttribute System.ComponentModel.BindableAttribute::Yes
	BindableAttribute_t3544708709 * ___Yes_3;
	// System.ComponentModel.BindableAttribute System.ComponentModel.BindableAttribute::Default
	BindableAttribute_t3544708709 * ___Default_4;

public:
	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(BindableAttribute_t3544708709_StaticFields, ___No_2)); }
	inline BindableAttribute_t3544708709 * get_No_2() const { return ___No_2; }
	inline BindableAttribute_t3544708709 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(BindableAttribute_t3544708709 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier(&___No_2, value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(BindableAttribute_t3544708709_StaticFields, ___Yes_3)); }
	inline BindableAttribute_t3544708709 * get_Yes_3() const { return ___Yes_3; }
	inline BindableAttribute_t3544708709 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(BindableAttribute_t3544708709 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier(&___Yes_3, value);
	}

	inline static int32_t get_offset_of_Default_4() { return static_cast<int32_t>(offsetof(BindableAttribute_t3544708709_StaticFields, ___Default_4)); }
	inline BindableAttribute_t3544708709 * get_Default_4() const { return ___Default_4; }
	inline BindableAttribute_t3544708709 ** get_address_of_Default_4() { return &___Default_4; }
	inline void set_Default_4(BindableAttribute_t3544708709 * value)
	{
		___Default_4 = value;
		Il2CppCodeGenWriteBarrier(&___Default_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
