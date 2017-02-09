#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "mscorlib_System_EventArgs3289624707.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AddingNewEventArgs
struct  AddingNewEventArgs_t3938289828  : public EventArgs_t3289624707
{
public:
	// System.Object System.ComponentModel.AddingNewEventArgs::obj
	Il2CppObject * ___obj_1;

public:
	inline static int32_t get_offset_of_obj_1() { return static_cast<int32_t>(offsetof(AddingNewEventArgs_t3938289828, ___obj_1)); }
	inline Il2CppObject * get_obj_1() const { return ___obj_1; }
	inline Il2CppObject ** get_address_of_obj_1() { return &___obj_1; }
	inline void set_obj_1(Il2CppObject * value)
	{
		___obj_1 = value;
		Il2CppCodeGenWriteBarrier(&___obj_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
