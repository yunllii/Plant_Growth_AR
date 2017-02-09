#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Attribute542643598.h"
#include "System_System_ComponentModel_DataObjectMethodType1069349368.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DataObjectMethodAttribute
struct  DataObjectMethodAttribute_t1292727732  : public Attribute_t542643598
{
public:
	// System.ComponentModel.DataObjectMethodType System.ComponentModel.DataObjectMethodAttribute::_methodType
	int32_t ____methodType_0;
	// System.Boolean System.ComponentModel.DataObjectMethodAttribute::_isDefault
	bool ____isDefault_1;

public:
	inline static int32_t get_offset_of__methodType_0() { return static_cast<int32_t>(offsetof(DataObjectMethodAttribute_t1292727732, ____methodType_0)); }
	inline int32_t get__methodType_0() const { return ____methodType_0; }
	inline int32_t* get_address_of__methodType_0() { return &____methodType_0; }
	inline void set__methodType_0(int32_t value)
	{
		____methodType_0 = value;
	}

	inline static int32_t get_offset_of__isDefault_1() { return static_cast<int32_t>(offsetof(DataObjectMethodAttribute_t1292727732, ____isDefault_1)); }
	inline bool get__isDefault_1() const { return ____isDefault_1; }
	inline bool* get_address_of__isDefault_1() { return &____isDefault_1; }
	inline void set__isDefault_1(bool value)
	{
		____isDefault_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
