#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.ComponentModel.IComponent>
struct List_1_t369374376;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Container
struct  Container_t3759338679  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.ComponentModel.IComponent> System.ComponentModel.Container::c
	List_1_t369374376 * ___c_0;

public:
	inline static int32_t get_offset_of_c_0() { return static_cast<int32_t>(offsetof(Container_t3759338679, ___c_0)); }
	inline List_1_t369374376 * get_c_0() const { return ___c_0; }
	inline List_1_t369374376 ** get_address_of_c_0() { return &___c_0; }
	inline void set_c_0(List_1_t369374376 * value)
	{
		___c_0 = value;
		Il2CppCodeGenWriteBarrier(&___c_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
