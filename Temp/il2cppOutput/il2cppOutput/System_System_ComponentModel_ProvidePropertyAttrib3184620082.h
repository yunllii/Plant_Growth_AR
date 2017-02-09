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

#include "mscorlib_System_Attribute542643598.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ProvidePropertyAttribute
struct  ProvidePropertyAttribute_t3184620082  : public Attribute_t542643598
{
public:
	// System.String System.ComponentModel.ProvidePropertyAttribute::Property
	String_t* ___Property_0;
	// System.String System.ComponentModel.ProvidePropertyAttribute::Receiver
	String_t* ___Receiver_1;

public:
	inline static int32_t get_offset_of_Property_0() { return static_cast<int32_t>(offsetof(ProvidePropertyAttribute_t3184620082, ___Property_0)); }
	inline String_t* get_Property_0() const { return ___Property_0; }
	inline String_t** get_address_of_Property_0() { return &___Property_0; }
	inline void set_Property_0(String_t* value)
	{
		___Property_0 = value;
		Il2CppCodeGenWriteBarrier(&___Property_0, value);
	}

	inline static int32_t get_offset_of_Receiver_1() { return static_cast<int32_t>(offsetof(ProvidePropertyAttribute_t3184620082, ___Receiver_1)); }
	inline String_t* get_Receiver_1() const { return ___Receiver_1; }
	inline String_t** get_address_of_Receiver_1() { return &___Receiver_1; }
	inline void set_Receiver_1(String_t* value)
	{
		___Receiver_1 = value;
		Il2CppCodeGenWriteBarrier(&___Receiver_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
