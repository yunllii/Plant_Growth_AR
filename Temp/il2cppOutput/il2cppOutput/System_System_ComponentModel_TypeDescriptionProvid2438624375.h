#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor
struct EmptyCustomTypeDescriptor_t3729801536;
// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t2438624375;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptionProvider
struct  TypeDescriptionProvider_t2438624375  : public Il2CppObject
{
public:
	// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::_emptyCustomTypeDescriptor
	EmptyCustomTypeDescriptor_t3729801536 * ____emptyCustomTypeDescriptor_0;
	// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptionProvider::_parent
	TypeDescriptionProvider_t2438624375 * ____parent_1;

public:
	inline static int32_t get_offset_of__emptyCustomTypeDescriptor_0() { return static_cast<int32_t>(offsetof(TypeDescriptionProvider_t2438624375, ____emptyCustomTypeDescriptor_0)); }
	inline EmptyCustomTypeDescriptor_t3729801536 * get__emptyCustomTypeDescriptor_0() const { return ____emptyCustomTypeDescriptor_0; }
	inline EmptyCustomTypeDescriptor_t3729801536 ** get_address_of__emptyCustomTypeDescriptor_0() { return &____emptyCustomTypeDescriptor_0; }
	inline void set__emptyCustomTypeDescriptor_0(EmptyCustomTypeDescriptor_t3729801536 * value)
	{
		____emptyCustomTypeDescriptor_0 = value;
		Il2CppCodeGenWriteBarrier(&____emptyCustomTypeDescriptor_0, value);
	}

	inline static int32_t get_offset_of__parent_1() { return static_cast<int32_t>(offsetof(TypeDescriptionProvider_t2438624375, ____parent_1)); }
	inline TypeDescriptionProvider_t2438624375 * get__parent_1() const { return ____parent_1; }
	inline TypeDescriptionProvider_t2438624375 ** get_address_of__parent_1() { return &____parent_1; }
	inline void set__parent_1(TypeDescriptionProvider_t2438624375 * value)
	{
		____parent_1 = value;
		Il2CppCodeGenWriteBarrier(&____parent_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
