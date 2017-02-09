#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.String
struct String_t;
// System.ComponentModel.MaskedTextProvider/EditPosition[]
struct EditPositionU5BU5D_t1929921249;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MaskedTextProvider
struct  MaskedTextProvider_t2280059057  : public Il2CppObject
{
public:
	// System.Boolean System.ComponentModel.MaskedTextProvider::allow_prompt_as_input
	bool ___allow_prompt_as_input_0;
	// System.Boolean System.ComponentModel.MaskedTextProvider::ascii_only
	bool ___ascii_only_1;
	// System.Globalization.CultureInfo System.ComponentModel.MaskedTextProvider::culture
	CultureInfo_t3500843524 * ___culture_2;
	// System.Boolean System.ComponentModel.MaskedTextProvider::include_literals
	bool ___include_literals_3;
	// System.Boolean System.ComponentModel.MaskedTextProvider::include_prompt
	bool ___include_prompt_4;
	// System.Boolean System.ComponentModel.MaskedTextProvider::is_password
	bool ___is_password_5;
	// System.String System.ComponentModel.MaskedTextProvider::mask
	String_t* ___mask_6;
	// System.Char System.ComponentModel.MaskedTextProvider::password_char
	Il2CppChar ___password_char_7;
	// System.Char System.ComponentModel.MaskedTextProvider::prompt_char
	Il2CppChar ___prompt_char_8;
	// System.Boolean System.ComponentModel.MaskedTextProvider::reset_on_prompt
	bool ___reset_on_prompt_9;
	// System.Boolean System.ComponentModel.MaskedTextProvider::reset_on_space
	bool ___reset_on_space_10;
	// System.Boolean System.ComponentModel.MaskedTextProvider::skip_literals
	bool ___skip_literals_11;
	// System.ComponentModel.MaskedTextProvider/EditPosition[] System.ComponentModel.MaskedTextProvider::edit_positions
	EditPositionU5BU5D_t1929921249* ___edit_positions_12;

public:
	inline static int32_t get_offset_of_allow_prompt_as_input_0() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t2280059057, ___allow_prompt_as_input_0)); }
	inline bool get_allow_prompt_as_input_0() const { return ___allow_prompt_as_input_0; }
	inline bool* get_address_of_allow_prompt_as_input_0() { return &___allow_prompt_as_input_0; }
	inline void set_allow_prompt_as_input_0(bool value)
	{
		___allow_prompt_as_input_0 = value;
	}

	inline static int32_t get_offset_of_ascii_only_1() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t2280059057, ___ascii_only_1)); }
	inline bool get_ascii_only_1() const { return ___ascii_only_1; }
	inline bool* get_address_of_ascii_only_1() { return &___ascii_only_1; }
	inline void set_ascii_only_1(bool value)
	{
		___ascii_only_1 = value;
	}

	inline static int32_t get_offset_of_culture_2() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t2280059057, ___culture_2)); }
	inline CultureInfo_t3500843524 * get_culture_2() const { return ___culture_2; }
	inline CultureInfo_t3500843524 ** get_address_of_culture_2() { return &___culture_2; }
	inline void set_culture_2(CultureInfo_t3500843524 * value)
	{
		___culture_2 = value;
		Il2CppCodeGenWriteBarrier(&___culture_2, value);
	}

	inline static int32_t get_offset_of_include_literals_3() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t2280059057, ___include_literals_3)); }
	inline bool get_include_literals_3() const { return ___include_literals_3; }
	inline bool* get_address_of_include_literals_3() { return &___include_literals_3; }
	inline void set_include_literals_3(bool value)
	{
		___include_literals_3 = value;
	}

	inline static int32_t get_offset_of_include_prompt_4() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t2280059057, ___include_prompt_4)); }
	inline bool get_include_prompt_4() const { return ___include_prompt_4; }
	inline bool* get_address_of_include_prompt_4() { return &___include_prompt_4; }
	inline void set_include_prompt_4(bool value)
	{
		___include_prompt_4 = value;
	}

	inline static int32_t get_offset_of_is_password_5() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t2280059057, ___is_password_5)); }
	inline bool get_is_password_5() const { return ___is_password_5; }
	inline bool* get_address_of_is_password_5() { return &___is_password_5; }
	inline void set_is_password_5(bool value)
	{
		___is_password_5 = value;
	}

	inline static int32_t get_offset_of_mask_6() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t2280059057, ___mask_6)); }
	inline String_t* get_mask_6() const { return ___mask_6; }
	inline String_t** get_address_of_mask_6() { return &___mask_6; }
	inline void set_mask_6(String_t* value)
	{
		___mask_6 = value;
		Il2CppCodeGenWriteBarrier(&___mask_6, value);
	}

	inline static int32_t get_offset_of_password_char_7() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t2280059057, ___password_char_7)); }
	inline Il2CppChar get_password_char_7() const { return ___password_char_7; }
	inline Il2CppChar* get_address_of_password_char_7() { return &___password_char_7; }
	inline void set_password_char_7(Il2CppChar value)
	{
		___password_char_7 = value;
	}

	inline static int32_t get_offset_of_prompt_char_8() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t2280059057, ___prompt_char_8)); }
	inline Il2CppChar get_prompt_char_8() const { return ___prompt_char_8; }
	inline Il2CppChar* get_address_of_prompt_char_8() { return &___prompt_char_8; }
	inline void set_prompt_char_8(Il2CppChar value)
	{
		___prompt_char_8 = value;
	}

	inline static int32_t get_offset_of_reset_on_prompt_9() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t2280059057, ___reset_on_prompt_9)); }
	inline bool get_reset_on_prompt_9() const { return ___reset_on_prompt_9; }
	inline bool* get_address_of_reset_on_prompt_9() { return &___reset_on_prompt_9; }
	inline void set_reset_on_prompt_9(bool value)
	{
		___reset_on_prompt_9 = value;
	}

	inline static int32_t get_offset_of_reset_on_space_10() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t2280059057, ___reset_on_space_10)); }
	inline bool get_reset_on_space_10() const { return ___reset_on_space_10; }
	inline bool* get_address_of_reset_on_space_10() { return &___reset_on_space_10; }
	inline void set_reset_on_space_10(bool value)
	{
		___reset_on_space_10 = value;
	}

	inline static int32_t get_offset_of_skip_literals_11() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t2280059057, ___skip_literals_11)); }
	inline bool get_skip_literals_11() const { return ___skip_literals_11; }
	inline bool* get_address_of_skip_literals_11() { return &___skip_literals_11; }
	inline void set_skip_literals_11(bool value)
	{
		___skip_literals_11 = value;
	}

	inline static int32_t get_offset_of_edit_positions_12() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t2280059057, ___edit_positions_12)); }
	inline EditPositionU5BU5D_t1929921249* get_edit_positions_12() const { return ___edit_positions_12; }
	inline EditPositionU5BU5D_t1929921249** get_address_of_edit_positions_12() { return &___edit_positions_12; }
	inline void set_edit_positions_12(EditPositionU5BU5D_t1929921249* value)
	{
		___edit_positions_12 = value;
		Il2CppCodeGenWriteBarrier(&___edit_positions_12, value);
	}
};

struct MaskedTextProvider_t2280059057_StaticFields
{
public:
	// System.Char System.ComponentModel.MaskedTextProvider::default_prompt_char
	Il2CppChar ___default_prompt_char_13;
	// System.Char System.ComponentModel.MaskedTextProvider::default_password_char
	Il2CppChar ___default_password_char_14;

public:
	inline static int32_t get_offset_of_default_prompt_char_13() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t2280059057_StaticFields, ___default_prompt_char_13)); }
	inline Il2CppChar get_default_prompt_char_13() const { return ___default_prompt_char_13; }
	inline Il2CppChar* get_address_of_default_prompt_char_13() { return &___default_prompt_char_13; }
	inline void set_default_prompt_char_13(Il2CppChar value)
	{
		___default_prompt_char_13 = value;
	}

	inline static int32_t get_offset_of_default_password_char_14() { return static_cast<int32_t>(offsetof(MaskedTextProvider_t2280059057_StaticFields, ___default_password_char_14)); }
	inline Il2CppChar get_default_password_char_14() const { return ___default_password_char_14; }
	inline Il2CppChar* get_address_of_default_password_char_14() { return &___default_password_char_14; }
	inline void set_default_password_char_14(Il2CppChar value)
	{
		___default_password_char_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
