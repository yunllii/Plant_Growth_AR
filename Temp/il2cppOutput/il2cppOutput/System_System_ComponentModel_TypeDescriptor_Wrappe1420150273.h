#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t2438624375;

#include "System_System_ComponentModel_TypeDescriptionProvid2438624375.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider
struct  WrappedTypeDescriptionProvider_t1420150273  : public TypeDescriptionProvider_t2438624375
{
public:
	// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor/WrappedTypeDescriptionProvider::<Wrapped>k__BackingField
	TypeDescriptionProvider_t2438624375 * ___U3CWrappedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CWrappedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(WrappedTypeDescriptionProvider_t1420150273, ___U3CWrappedU3Ek__BackingField_2)); }
	inline TypeDescriptionProvider_t2438624375 * get_U3CWrappedU3Ek__BackingField_2() const { return ___U3CWrappedU3Ek__BackingField_2; }
	inline TypeDescriptionProvider_t2438624375 ** get_address_of_U3CWrappedU3Ek__BackingField_2() { return &___U3CWrappedU3Ek__BackingField_2; }
	inline void set_U3CWrappedU3Ek__BackingField_2(TypeDescriptionProvider_t2438624375 * value)
	{
		___U3CWrappedU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CWrappedU3Ek__BackingField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
