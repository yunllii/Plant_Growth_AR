#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.ComponentModel.MaskedTextProvider/EditPosition
struct EditPosition_t3912732320;
// System.ComponentModel.MaskedTextProvider
struct MaskedTextProvider_t2280059057;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_MaskedTextProvider2280059057.h"
#include "System_System_ComponentModel_MaskedTextProvider_Ed3003187841.h"
#include "System_System_ComponentModel_MaskedTextProvider_Edit81707772.h"
#include "System_System_ComponentModel_MaskedTextResultHint1963010672.h"

// System.Void System.ComponentModel.MaskedTextProvider/EditPosition::.ctor()
extern "C"  void EditPosition__ctor_m437909324 (EditPosition_t3912732320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider/EditPosition::.ctor(System.ComponentModel.MaskedTextProvider,System.ComponentModel.MaskedTextProvider/EditType,System.ComponentModel.MaskedTextProvider/EditState,System.Char)
extern "C"  void EditPosition__ctor_m3730171148 (EditPosition_t3912732320 * __this, MaskedTextProvider_t2280059057 * ___Parent0, int32_t ___Type1, int32_t ___State2, Il2CppChar ___MaskCharacter3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider/EditPosition::Reset()
extern "C"  void EditPosition_Reset_m622380301 (EditPosition_t3912732320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.MaskedTextProvider/EditPosition System.ComponentModel.MaskedTextProvider/EditPosition::Clone()
extern "C"  EditPosition_t3912732320 * EditPosition_Clone_m703623960 (EditPosition_t3912732320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.ComponentModel.MaskedTextProvider/EditPosition::get_Input()
extern "C"  Il2CppChar EditPosition_get_Input_m245186867 (EditPosition_t3912732320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider/EditPosition::set_Input(System.Char)
extern "C"  void EditPosition_set_Input_m550554468 (EditPosition_t3912732320 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider/EditPosition::IsAscii(System.Char)
extern "C"  bool EditPosition_IsAscii_m2135535936 (EditPosition_t3912732320 * __this, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider/EditPosition::Match(System.Char,System.ComponentModel.MaskedTextResultHint&,System.Boolean)
extern "C"  bool EditPosition_Match_m961416046 (EditPosition_t3912732320 * __this, Il2CppChar ___c0, int32_t* ___resultHint1, bool ___only_test2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider/EditPosition::get_FilledIn()
extern "C"  bool EditPosition_get_FilledIn_m3118613052 (EditPosition_t3912732320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider/EditPosition::get_Required()
extern "C"  bool EditPosition_get_Required_m2479297762 (EditPosition_t3912732320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider/EditPosition::get_Editable()
extern "C"  bool EditPosition_get_Editable_m171077563 (EditPosition_t3912732320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider/EditPosition::get_Visible()
extern "C"  bool EditPosition_get_Visible_m4119846155 (EditPosition_t3912732320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MaskedTextProvider/EditPosition::get_Text()
extern "C"  String_t* EditPosition_get_Text_m4235383101 (EditPosition_t3912732320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
