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

#include "mscorlib_System_SystemException3877406272.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.WarningException
struct  WarningException_t2213195123  : public SystemException_t3877406272
{
public:
	// System.String System.ComponentModel.WarningException::helpUrl
	String_t* ___helpUrl_11;
	// System.String System.ComponentModel.WarningException::helpTopic
	String_t* ___helpTopic_12;

public:
	inline static int32_t get_offset_of_helpUrl_11() { return static_cast<int32_t>(offsetof(WarningException_t2213195123, ___helpUrl_11)); }
	inline String_t* get_helpUrl_11() const { return ___helpUrl_11; }
	inline String_t** get_address_of_helpUrl_11() { return &___helpUrl_11; }
	inline void set_helpUrl_11(String_t* value)
	{
		___helpUrl_11 = value;
		Il2CppCodeGenWriteBarrier(&___helpUrl_11, value);
	}

	inline static int32_t get_offset_of_helpTopic_12() { return static_cast<int32_t>(offsetof(WarningException_t2213195123, ___helpTopic_12)); }
	inline String_t* get_helpTopic_12() const { return ___helpTopic_12; }
	inline String_t** get_address_of_helpTopic_12() { return &___helpTopic_12; }
	inline void set_helpTopic_12(String_t* value)
	{
		___helpTopic_12 = value;
		Il2CppCodeGenWriteBarrier(&___helpTopic_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
