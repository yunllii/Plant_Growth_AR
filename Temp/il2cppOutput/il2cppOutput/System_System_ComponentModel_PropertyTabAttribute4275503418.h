#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.ComponentModel.PropertyTabScope[]
struct PropertyTabScopeU5BU5D_t1926118365;

#include "mscorlib_System_Attribute542643598.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyTabAttribute
struct  PropertyTabAttribute_t4275503418  : public Attribute_t542643598
{
public:
	// System.Type[] System.ComponentModel.PropertyTabAttribute::tabs
	TypeU5BU5D_t1664964607* ___tabs_0;
	// System.ComponentModel.PropertyTabScope[] System.ComponentModel.PropertyTabAttribute::scopes
	PropertyTabScopeU5BU5D_t1926118365* ___scopes_1;

public:
	inline static int32_t get_offset_of_tabs_0() { return static_cast<int32_t>(offsetof(PropertyTabAttribute_t4275503418, ___tabs_0)); }
	inline TypeU5BU5D_t1664964607* get_tabs_0() const { return ___tabs_0; }
	inline TypeU5BU5D_t1664964607** get_address_of_tabs_0() { return &___tabs_0; }
	inline void set_tabs_0(TypeU5BU5D_t1664964607* value)
	{
		___tabs_0 = value;
		Il2CppCodeGenWriteBarrier(&___tabs_0, value);
	}

	inline static int32_t get_offset_of_scopes_1() { return static_cast<int32_t>(offsetof(PropertyTabAttribute_t4275503418, ___scopes_1)); }
	inline PropertyTabScopeU5BU5D_t1926118365* get_scopes_1() const { return ___scopes_1; }
	inline PropertyTabScopeU5BU5D_t1926118365** get_address_of_scopes_1() { return &___scopes_1; }
	inline void set_scopes_1(PropertyTabScopeU5BU5D_t1926118365* value)
	{
		___scopes_1 = value;
		Il2CppCodeGenWriteBarrier(&___scopes_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
