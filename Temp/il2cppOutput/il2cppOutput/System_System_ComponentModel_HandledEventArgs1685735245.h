﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_EventArgs3289624707.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.HandledEventArgs
struct  HandledEventArgs_t1685735245  : public EventArgs_t3289624707
{
public:
	// System.Boolean System.ComponentModel.HandledEventArgs::handled
	bool ___handled_1;

public:
	inline static int32_t get_offset_of_handled_1() { return static_cast<int32_t>(offsetof(HandledEventArgs_t1685735245, ___handled_1)); }
	inline bool get_handled_1() const { return ___handled_1; }
	inline bool* get_address_of_handled_1() { return &___handled_1; }
	inline void set_handled_1(bool value)
	{
		___handled_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
