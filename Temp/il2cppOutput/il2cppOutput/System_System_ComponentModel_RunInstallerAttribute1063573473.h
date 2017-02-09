#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.RunInstallerAttribute
struct RunInstallerAttribute_t1063573473;

#include "mscorlib_System_Attribute542643598.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RunInstallerAttribute
struct  RunInstallerAttribute_t1063573473  : public Attribute_t542643598
{
public:
	// System.Boolean System.ComponentModel.RunInstallerAttribute::runInstaller
	bool ___runInstaller_3;

public:
	inline static int32_t get_offset_of_runInstaller_3() { return static_cast<int32_t>(offsetof(RunInstallerAttribute_t1063573473, ___runInstaller_3)); }
	inline bool get_runInstaller_3() const { return ___runInstaller_3; }
	inline bool* get_address_of_runInstaller_3() { return &___runInstaller_3; }
	inline void set_runInstaller_3(bool value)
	{
		___runInstaller_3 = value;
	}
};

struct RunInstallerAttribute_t1063573473_StaticFields
{
public:
	// System.ComponentModel.RunInstallerAttribute System.ComponentModel.RunInstallerAttribute::Yes
	RunInstallerAttribute_t1063573473 * ___Yes_0;
	// System.ComponentModel.RunInstallerAttribute System.ComponentModel.RunInstallerAttribute::No
	RunInstallerAttribute_t1063573473 * ___No_1;
	// System.ComponentModel.RunInstallerAttribute System.ComponentModel.RunInstallerAttribute::Default
	RunInstallerAttribute_t1063573473 * ___Default_2;

public:
	inline static int32_t get_offset_of_Yes_0() { return static_cast<int32_t>(offsetof(RunInstallerAttribute_t1063573473_StaticFields, ___Yes_0)); }
	inline RunInstallerAttribute_t1063573473 * get_Yes_0() const { return ___Yes_0; }
	inline RunInstallerAttribute_t1063573473 ** get_address_of_Yes_0() { return &___Yes_0; }
	inline void set_Yes_0(RunInstallerAttribute_t1063573473 * value)
	{
		___Yes_0 = value;
		Il2CppCodeGenWriteBarrier(&___Yes_0, value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(RunInstallerAttribute_t1063573473_StaticFields, ___No_1)); }
	inline RunInstallerAttribute_t1063573473 * get_No_1() const { return ___No_1; }
	inline RunInstallerAttribute_t1063573473 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(RunInstallerAttribute_t1063573473 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier(&___No_1, value);
	}

	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(RunInstallerAttribute_t1063573473_StaticFields, ___Default_2)); }
	inline RunInstallerAttribute_t1063573473 * get_Default_2() const { return ___Default_2; }
	inline RunInstallerAttribute_t1063573473 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(RunInstallerAttribute_t1063573473 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier(&___Default_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
