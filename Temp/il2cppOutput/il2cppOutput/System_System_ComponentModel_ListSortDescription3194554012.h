﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t4250402154;

#include "mscorlib_System_Object2689449295.h"
#include "System_System_ComponentModel_ListSortDirection4186912589.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListSortDescription
struct  ListSortDescription_t3194554012  : public Il2CppObject
{
public:
	// System.ComponentModel.PropertyDescriptor System.ComponentModel.ListSortDescription::propertyDescriptor
	PropertyDescriptor_t4250402154 * ___propertyDescriptor_0;
	// System.ComponentModel.ListSortDirection System.ComponentModel.ListSortDescription::sortDirection
	int32_t ___sortDirection_1;

public:
	inline static int32_t get_offset_of_propertyDescriptor_0() { return static_cast<int32_t>(offsetof(ListSortDescription_t3194554012, ___propertyDescriptor_0)); }
	inline PropertyDescriptor_t4250402154 * get_propertyDescriptor_0() const { return ___propertyDescriptor_0; }
	inline PropertyDescriptor_t4250402154 ** get_address_of_propertyDescriptor_0() { return &___propertyDescriptor_0; }
	inline void set_propertyDescriptor_0(PropertyDescriptor_t4250402154 * value)
	{
		___propertyDescriptor_0 = value;
		Il2CppCodeGenWriteBarrier(&___propertyDescriptor_0, value);
	}

	inline static int32_t get_offset_of_sortDirection_1() { return static_cast<int32_t>(offsetof(ListSortDescription_t3194554012, ___sortDirection_1)); }
	inline int32_t get_sortDirection_1() const { return ___sortDirection_1; }
	inline int32_t* get_address_of_sortDirection_1() { return &___sortDirection_1; }
	inline void set_sortDirection_1(int32_t value)
	{
		___sortDirection_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
