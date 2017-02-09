#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Attribute542643598.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DataObjectFieldAttribute
struct  DataObjectFieldAttribute_t580021281  : public Attribute_t542643598
{
public:
	// System.Boolean System.ComponentModel.DataObjectFieldAttribute::primary_key
	bool ___primary_key_0;
	// System.Boolean System.ComponentModel.DataObjectFieldAttribute::is_identity
	bool ___is_identity_1;
	// System.Boolean System.ComponentModel.DataObjectFieldAttribute::is_nullable
	bool ___is_nullable_2;
	// System.Int32 System.ComponentModel.DataObjectFieldAttribute::length
	int32_t ___length_3;

public:
	inline static int32_t get_offset_of_primary_key_0() { return static_cast<int32_t>(offsetof(DataObjectFieldAttribute_t580021281, ___primary_key_0)); }
	inline bool get_primary_key_0() const { return ___primary_key_0; }
	inline bool* get_address_of_primary_key_0() { return &___primary_key_0; }
	inline void set_primary_key_0(bool value)
	{
		___primary_key_0 = value;
	}

	inline static int32_t get_offset_of_is_identity_1() { return static_cast<int32_t>(offsetof(DataObjectFieldAttribute_t580021281, ___is_identity_1)); }
	inline bool get_is_identity_1() const { return ___is_identity_1; }
	inline bool* get_address_of_is_identity_1() { return &___is_identity_1; }
	inline void set_is_identity_1(bool value)
	{
		___is_identity_1 = value;
	}

	inline static int32_t get_offset_of_is_nullable_2() { return static_cast<int32_t>(offsetof(DataObjectFieldAttribute_t580021281, ___is_nullable_2)); }
	inline bool get_is_nullable_2() const { return ___is_nullable_2; }
	inline bool* get_address_of_is_nullable_2() { return &___is_nullable_2; }
	inline void set_is_nullable_2(bool value)
	{
		___is_nullable_2 = value;
	}

	inline static int32_t get_offset_of_length_3() { return static_cast<int32_t>(offsetof(DataObjectFieldAttribute_t580021281, ___length_3)); }
	inline int32_t get_length_3() const { return ___length_3; }
	inline int32_t* get_address_of_length_3() { return &___length_3; }
	inline void set_length_3(int32_t value)
	{
		___length_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
