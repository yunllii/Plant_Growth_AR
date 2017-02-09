#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.MaskedTextProvider
struct MaskedTextProvider_t2280059057;

#include "mscorlib_System_Object2689449295.h"
#include "System_System_ComponentModel_MaskedTextProvider_Ed3003187841.h"
#include "System_System_ComponentModel_MaskedTextProvider_Edit81707772.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MaskedTextProvider/EditPosition
struct  EditPosition_t3912732320  : public Il2CppObject
{
public:
	// System.ComponentModel.MaskedTextProvider System.ComponentModel.MaskedTextProvider/EditPosition::Parent
	MaskedTextProvider_t2280059057 * ___Parent_0;
	// System.ComponentModel.MaskedTextProvider/EditType System.ComponentModel.MaskedTextProvider/EditPosition::Type
	int32_t ___Type_1;
	// System.ComponentModel.MaskedTextProvider/EditState System.ComponentModel.MaskedTextProvider/EditPosition::State
	int32_t ___State_2;
	// System.Char System.ComponentModel.MaskedTextProvider/EditPosition::MaskCharacter
	Il2CppChar ___MaskCharacter_3;
	// System.Char System.ComponentModel.MaskedTextProvider/EditPosition::input
	Il2CppChar ___input_4;

public:
	inline static int32_t get_offset_of_Parent_0() { return static_cast<int32_t>(offsetof(EditPosition_t3912732320, ___Parent_0)); }
	inline MaskedTextProvider_t2280059057 * get_Parent_0() const { return ___Parent_0; }
	inline MaskedTextProvider_t2280059057 ** get_address_of_Parent_0() { return &___Parent_0; }
	inline void set_Parent_0(MaskedTextProvider_t2280059057 * value)
	{
		___Parent_0 = value;
		Il2CppCodeGenWriteBarrier(&___Parent_0, value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(EditPosition_t3912732320, ___Type_1)); }
	inline int32_t get_Type_1() const { return ___Type_1; }
	inline int32_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(int32_t value)
	{
		___Type_1 = value;
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(EditPosition_t3912732320, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_MaskCharacter_3() { return static_cast<int32_t>(offsetof(EditPosition_t3912732320, ___MaskCharacter_3)); }
	inline Il2CppChar get_MaskCharacter_3() const { return ___MaskCharacter_3; }
	inline Il2CppChar* get_address_of_MaskCharacter_3() { return &___MaskCharacter_3; }
	inline void set_MaskCharacter_3(Il2CppChar value)
	{
		___MaskCharacter_3 = value;
	}

	inline static int32_t get_offset_of_input_4() { return static_cast<int32_t>(offsetof(EditPosition_t3912732320, ___input_4)); }
	inline Il2CppChar get_input_4() const { return ___input_4; }
	inline Il2CppChar* get_address_of_input_4() { return &___input_4; }
	inline void set_input_4(Il2CppChar value)
	{
		___input_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
