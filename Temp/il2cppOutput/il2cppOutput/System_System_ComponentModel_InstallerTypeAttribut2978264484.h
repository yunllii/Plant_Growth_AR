#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;

#include "mscorlib_System_Attribute542643598.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InstallerTypeAttribute
struct  InstallerTypeAttribute_t2978264484  : public Attribute_t542643598
{
public:
	// System.Type System.ComponentModel.InstallerTypeAttribute::installer
	Type_t * ___installer_0;

public:
	inline static int32_t get_offset_of_installer_0() { return static_cast<int32_t>(offsetof(InstallerTypeAttribute_t2978264484, ___installer_0)); }
	inline Type_t * get_installer_0() const { return ___installer_0; }
	inline Type_t ** get_address_of_installer_0() { return &___installer_0; }
	inline void set_installer_0(Type_t * value)
	{
		___installer_0 = value;
		Il2CppCodeGenWriteBarrier(&___installer_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
