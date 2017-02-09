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

#include "System_System_ComponentModel_CancelEventArgs1976499267.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoWorkEventArgs
struct  DoWorkEventArgs_t62745097  : public CancelEventArgs_t1976499267
{
public:
	// System.Object System.ComponentModel.DoWorkEventArgs::arg
	Il2CppObject * ___arg_2;
	// System.Object System.ComponentModel.DoWorkEventArgs::result
	Il2CppObject * ___result_3;

public:
	inline static int32_t get_offset_of_arg_2() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t62745097, ___arg_2)); }
	inline Il2CppObject * get_arg_2() const { return ___arg_2; }
	inline Il2CppObject ** get_address_of_arg_2() { return &___arg_2; }
	inline void set_arg_2(Il2CppObject * value)
	{
		___arg_2 = value;
		Il2CppCodeGenWriteBarrier(&___arg_2, value);
	}

	inline static int32_t get_offset_of_result_3() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t62745097, ___result_3)); }
	inline Il2CppObject * get_result_3() const { return ___result_3; }
	inline Il2CppObject ** get_address_of_result_3() { return &___result_3; }
	inline void set_result_3(Il2CppObject * value)
	{
		___result_3 = value;
		Il2CppCodeGenWriteBarrier(&___result_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
