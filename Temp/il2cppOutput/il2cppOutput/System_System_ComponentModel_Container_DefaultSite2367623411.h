#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.IComponent
struct IComponent_t1000253244;
// System.ComponentModel.Container
struct Container_t3759338679;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Container/DefaultSite
struct  DefaultSite_t2367623411  : public Il2CppObject
{
public:
	// System.ComponentModel.IComponent System.ComponentModel.Container/DefaultSite::component
	Il2CppObject * ___component_0;
	// System.ComponentModel.Container System.ComponentModel.Container/DefaultSite::container
	Container_t3759338679 * ___container_1;
	// System.String System.ComponentModel.Container/DefaultSite::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_component_0() { return static_cast<int32_t>(offsetof(DefaultSite_t2367623411, ___component_0)); }
	inline Il2CppObject * get_component_0() const { return ___component_0; }
	inline Il2CppObject ** get_address_of_component_0() { return &___component_0; }
	inline void set_component_0(Il2CppObject * value)
	{
		___component_0 = value;
		Il2CppCodeGenWriteBarrier(&___component_0, value);
	}

	inline static int32_t get_offset_of_container_1() { return static_cast<int32_t>(offsetof(DefaultSite_t2367623411, ___container_1)); }
	inline Container_t3759338679 * get_container_1() const { return ___container_1; }
	inline Container_t3759338679 ** get_address_of_container_1() { return &___container_1; }
	inline void set_container_1(Container_t3759338679 * value)
	{
		___container_1 = value;
		Il2CppCodeGenWriteBarrier(&___container_1, value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(DefaultSite_t2367623411, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
