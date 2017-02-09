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

// System.ComponentModel.MaskedTextProvider
struct MaskedTextProvider_t2280059057;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.ComponentModel.MaskedTextProvider/EditPosition[]
struct EditPositionU5BU5D_t1929921249;
// System.Object
struct Il2CppObject;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "System_System_ComponentModel_MaskedTextResultHint1963010672.h"

// System.Void System.ComponentModel.MaskedTextProvider::.ctor(System.String)
extern "C"  void MaskedTextProvider__ctor_m3978882474 (MaskedTextProvider_t2280059057 * __this, String_t* ___mask0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::.ctor(System.String,System.Boolean)
extern "C"  void MaskedTextProvider__ctor_m29057895 (MaskedTextProvider_t2280059057 * __this, String_t* ___mask0, bool ___restrictToAscii1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::.ctor(System.String,System.Globalization.CultureInfo)
extern "C"  void MaskedTextProvider__ctor_m1976795142 (MaskedTextProvider_t2280059057 * __this, String_t* ___mask0, CultureInfo_t3500843524 * ___culture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::.ctor(System.String,System.Char,System.Boolean)
extern "C"  void MaskedTextProvider__ctor_m482103200 (MaskedTextProvider_t2280059057 * __this, String_t* ___mask0, Il2CppChar ___passwordChar1, bool ___allowPromptAsInput2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::.ctor(System.String,System.Globalization.CultureInfo,System.Boolean)
extern "C"  void MaskedTextProvider__ctor_m2726502101 (MaskedTextProvider_t2280059057 * __this, String_t* ___mask0, CultureInfo_t3500843524 * ___culture1, bool ___restrictToAscii2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::.ctor(System.String,System.Globalization.CultureInfo,System.Char,System.Boolean)
extern "C"  void MaskedTextProvider__ctor_m1388836168 (MaskedTextProvider_t2280059057 * __this, String_t* ___mask0, CultureInfo_t3500843524 * ___culture1, Il2CppChar ___passwordChar2, bool ___allowPromptAsInput3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::.ctor(System.String,System.Globalization.CultureInfo,System.Boolean,System.Char,System.Char,System.Boolean)
extern "C"  void MaskedTextProvider__ctor_m531909940 (MaskedTextProvider_t2280059057 * __this, String_t* ___mask0, CultureInfo_t3500843524 * ___culture1, bool ___allowPromptAsInput2, Il2CppChar ___promptChar3, Il2CppChar ___passwordChar4, bool ___restrictToAscii5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::.cctor()
extern "C"  void MaskedTextProvider__cctor_m3294803253 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::SetMask(System.String)
extern "C"  void MaskedTextProvider_SetMask_m2504728234 (MaskedTextProvider_t2280059057 * __this, String_t* ___mask0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.MaskedTextProvider/EditPosition[] System.ComponentModel.MaskedTextProvider::ClonePositions()
extern "C"  EditPositionU5BU5D_t1929921249* MaskedTextProvider_ClonePositions_m1921335596 (MaskedTextProvider_t2280059057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::AddInternal(System.String,System.Int32&,System.ComponentModel.MaskedTextResultHint&,System.Boolean)
extern "C"  bool MaskedTextProvider_AddInternal_m42414083 (MaskedTextProvider_t2280059057 * __this, String_t* ___str_input0, int32_t* ___testPosition1, int32_t* ___resultHint2, bool ___only_test3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::AddInternal(System.Char,System.Int32&,System.ComponentModel.MaskedTextResultHint&,System.Boolean,System.Boolean)
extern "C"  bool MaskedTextProvider_AddInternal_m3251667233 (MaskedTextProvider_t2280059057 * __this, Il2CppChar ___input0, int32_t* ___testPosition1, int32_t* ___resultHint2, bool ___check_available_positions_first3, bool ___check_escape_char_first4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::VerifyStringInternal(System.String,System.Int32&,System.ComponentModel.MaskedTextResultHint&,System.Int32,System.Boolean)
extern "C"  bool MaskedTextProvider_VerifyStringInternal_m24359873 (MaskedTextProvider_t2280059057 * __this, String_t* ___input0, int32_t* ___testPosition1, int32_t* ___resultHint2, int32_t ___startIndex3, bool ___only_test4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::VerifyCharInternal(System.Char,System.Int32,System.ComponentModel.MaskedTextResultHint&,System.Boolean)
extern "C"  bool MaskedTextProvider_VerifyCharInternal_m2052608978 (MaskedTextProvider_t2280059057 * __this, Il2CppChar ___input0, int32_t ___position1, int32_t* ___hint2, bool ___only_test3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::IsInsertableString(System.String,System.Int32,System.Int32&,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_IsInsertableString_m4061320097 (MaskedTextProvider_t2280059057 * __this, String_t* ___str_input0, int32_t ___position1, int32_t* ___testPosition2, int32_t* ___resultHint3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::ShiftPositionsRight(System.ComponentModel.MaskedTextProvider/EditPosition[],System.Int32,System.Int32&,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_ShiftPositionsRight_m2133693863 (MaskedTextProvider_t2280059057 * __this, EditPositionU5BU5D_t1929921249* ___edit_positions0, int32_t ___start1, int32_t* ___testPosition2, int32_t* ___resultHint3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::ReplaceInternal(System.String,System.Int32,System.Int32,System.Int32&,System.ComponentModel.MaskedTextResultHint&,System.Boolean,System.Boolean)
extern "C"  bool MaskedTextProvider_ReplaceInternal_m1407177157 (MaskedTextProvider_t2280059057 * __this, String_t* ___input0, int32_t ___startPosition1, int32_t ___endPosition2, int32_t* ___testPosition3, int32_t* ___resultHint4, bool ___only_test5, bool ___dont_remove_at_end6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::ReplaceInternal(System.ComponentModel.MaskedTextProvider/EditPosition[],System.Char,System.Int32,System.Int32&,System.ComponentModel.MaskedTextResultHint&,System.Boolean)
extern "C"  bool MaskedTextProvider_ReplaceInternal_m1444297524 (MaskedTextProvider_t2280059057 * __this, EditPositionU5BU5D_t1929921249* ___edit_positions0, Il2CppChar ___input1, int32_t ___position2, int32_t* ___testPosition3, int32_t* ___resultHint4, bool ___only_test5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::RemoveAtInternal(System.Int32,System.Int32,System.Int32&,System.ComponentModel.MaskedTextResultHint&,System.Boolean)
extern "C"  bool MaskedTextProvider_RemoveAtInternal_m2087164731 (MaskedTextProvider_t2280059057 * __this, int32_t ___startPosition0, int32_t ___endPosition1, int32_t* ___testPosition2, int32_t* ___resultHint3, bool ___only_testing4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::InsertAtInternal(System.String,System.Int32,System.Int32&,System.ComponentModel.MaskedTextResultHint&,System.Boolean)
extern "C"  bool MaskedTextProvider_InsertAtInternal_m2291898229 (MaskedTextProvider_t2280059057 * __this, String_t* ___str_input0, int32_t ___position1, int32_t* ___testPosition2, int32_t* ___resultHint3, bool ___only_testing4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::Add(System.Char)
extern "C"  bool MaskedTextProvider_Add_m3740087040 (MaskedTextProvider_t2280059057 * __this, Il2CppChar ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::Add(System.String)
extern "C"  bool MaskedTextProvider_Add_m815399201 (MaskedTextProvider_t2280059057 * __this, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::Add(System.Char,System.Int32&,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_Add_m4202526348 (MaskedTextProvider_t2280059057 * __this, Il2CppChar ___input0, int32_t* ___testPosition1, int32_t* ___resultHint2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::Add(System.String,System.Int32&,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_Add_m2289532299 (MaskedTextProvider_t2280059057 * __this, String_t* ___input0, int32_t* ___testPosition1, int32_t* ___resultHint2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::Clear()
extern "C"  void MaskedTextProvider_Clear_m2878802335 (MaskedTextProvider_t2280059057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::Clear(System.ComponentModel.MaskedTextResultHint&)
extern "C"  void MaskedTextProvider_Clear_m1902347088 (MaskedTextProvider_t2280059057 * __this, int32_t* ___resultHint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.MaskedTextProvider::Clone()
extern "C"  Il2CppObject * MaskedTextProvider_Clone_m2451464244 (MaskedTextProvider_t2280059057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MaskedTextProvider::FindAssignedEditPositionFrom(System.Int32,System.Boolean)
extern "C"  int32_t MaskedTextProvider_FindAssignedEditPositionFrom_m2253591474 (MaskedTextProvider_t2280059057 * __this, int32_t ___position0, bool ___direction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MaskedTextProvider::FindAssignedEditPositionInRange(System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t MaskedTextProvider_FindAssignedEditPositionInRange_m3892266967 (MaskedTextProvider_t2280059057 * __this, int32_t ___startPosition0, int32_t ___endPosition1, bool ___direction2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MaskedTextProvider::FindEditPositionFrom(System.Int32,System.Boolean)
extern "C"  int32_t MaskedTextProvider_FindEditPositionFrom_m1329362834 (MaskedTextProvider_t2280059057 * __this, int32_t ___position0, bool ___direction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MaskedTextProvider::FindEditPositionInRange(System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t MaskedTextProvider_FindEditPositionInRange_m1605525015 (MaskedTextProvider_t2280059057 * __this, int32_t ___startPosition0, int32_t ___endPosition1, bool ___direction2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MaskedTextProvider::FindNonEditPositionFrom(System.Int32,System.Boolean)
extern "C"  int32_t MaskedTextProvider_FindNonEditPositionFrom_m4099464327 (MaskedTextProvider_t2280059057 * __this, int32_t ___position0, bool ___direction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MaskedTextProvider::FindNonEditPositionInRange(System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t MaskedTextProvider_FindNonEditPositionInRange_m2567777326 (MaskedTextProvider_t2280059057 * __this, int32_t ___startPosition0, int32_t ___endPosition1, bool ___direction2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MaskedTextProvider::FindUnassignedEditPositionFrom(System.Int32,System.Boolean)
extern "C"  int32_t MaskedTextProvider_FindUnassignedEditPositionFrom_m1734309959 (MaskedTextProvider_t2280059057 * __this, int32_t ___position0, bool ___direction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MaskedTextProvider::FindUnassignedEditPositionInRange(System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t MaskedTextProvider_FindUnassignedEditPositionInRange_m1002731438 (MaskedTextProvider_t2280059057 * __this, int32_t ___startPosition0, int32_t ___endPosition1, bool ___direction2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::GetOperationResultFromHint(System.ComponentModel.MaskedTextResultHint)
extern "C"  bool MaskedTextProvider_GetOperationResultFromHint_m4011204066 (Il2CppObject * __this /* static, unused */, int32_t ___hint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::InsertAt(System.Char,System.Int32)
extern "C"  bool MaskedTextProvider_InsertAt_m1641679806 (MaskedTextProvider_t2280059057 * __this, Il2CppChar ___input0, int32_t ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::InsertAt(System.String,System.Int32)
extern "C"  bool MaskedTextProvider_InsertAt_m3704184291 (MaskedTextProvider_t2280059057 * __this, String_t* ___input0, int32_t ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::InsertAt(System.Char,System.Int32,System.Int32&,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_InsertAt_m4246661738 (MaskedTextProvider_t2280059057 * __this, Il2CppChar ___input0, int32_t ___position1, int32_t* ___testPosition2, int32_t* ___resultHint3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::InsertAt(System.String,System.Int32,System.Int32&,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_InsertAt_m1430248861 (MaskedTextProvider_t2280059057 * __this, String_t* ___input0, int32_t ___position1, int32_t* ___testPosition2, int32_t* ___resultHint3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::IsAvailablePosition(System.Int32)
extern "C"  bool MaskedTextProvider_IsAvailablePosition_m1405668965 (MaskedTextProvider_t2280059057 * __this, int32_t ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::IsEditPosition(System.Int32)
extern "C"  bool MaskedTextProvider_IsEditPosition_m2308511184 (MaskedTextProvider_t2280059057 * __this, int32_t ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::IsValidInputChar(System.Char)
extern "C"  bool MaskedTextProvider_IsValidInputChar_m3771871483 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::IsValidMaskChar(System.Char)
extern "C"  bool MaskedTextProvider_IsValidMaskChar_m1815916657 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::IsValidPasswordChar(System.Char)
extern "C"  bool MaskedTextProvider_IsValidPasswordChar_m1329833432 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::Remove()
extern "C"  bool MaskedTextProvider_Remove_m3828337530 (MaskedTextProvider_t2280059057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::Remove(System.Int32&,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_Remove_m4038306156 (MaskedTextProvider_t2280059057 * __this, int32_t* ___testPosition0, int32_t* ___resultHint1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::RemoveAt(System.Int32)
extern "C"  bool MaskedTextProvider_RemoveAt_m1778791402 (MaskedTextProvider_t2280059057 * __this, int32_t ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::RemoveAt(System.Int32,System.Int32)
extern "C"  bool MaskedTextProvider_RemoveAt_m2055324209 (MaskedTextProvider_t2280059057 * __this, int32_t ___startPosition0, int32_t ___endPosition1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::RemoveAt(System.Int32,System.Int32,System.Int32&,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_RemoveAt_m1574492979 (MaskedTextProvider_t2280059057 * __this, int32_t ___startPosition0, int32_t ___endPosition1, int32_t* ___testPosition2, int32_t* ___resultHint3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::Replace(System.Char,System.Int32)
extern "C"  bool MaskedTextProvider_Replace_m3929879152 (MaskedTextProvider_t2280059057 * __this, Il2CppChar ___input0, int32_t ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::Replace(System.String,System.Int32)
extern "C"  bool MaskedTextProvider_Replace_m546420873 (MaskedTextProvider_t2280059057 * __this, String_t* ___input0, int32_t ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::Replace(System.Char,System.Int32,System.Int32&,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_Replace_m4202704572 (MaskedTextProvider_t2280059057 * __this, Il2CppChar ___input0, int32_t ___position1, int32_t* ___testPosition2, int32_t* ___resultHint3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::Replace(System.String,System.Int32,System.Int32&,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_Replace_m3799310683 (MaskedTextProvider_t2280059057 * __this, String_t* ___input0, int32_t ___position1, int32_t* ___testPosition2, int32_t* ___resultHint3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::Replace(System.Char,System.Int32,System.Int32,System.Int32&,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_Replace_m1743674859 (MaskedTextProvider_t2280059057 * __this, Il2CppChar ___input0, int32_t ___startPosition1, int32_t ___endPosition2, int32_t* ___testPosition3, int32_t* ___resultHint4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::Replace(System.String,System.Int32,System.Int32,System.Int32&,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_Replace_m1664003844 (MaskedTextProvider_t2280059057 * __this, String_t* ___input0, int32_t ___startPosition1, int32_t ___endPosition2, int32_t* ___testPosition3, int32_t* ___resultHint4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::Set(System.String)
extern "C"  bool MaskedTextProvider_Set_m372996926 (MaskedTextProvider_t2280059057 * __this, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::Set(System.String,System.Int32&,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_Set_m3796367886 (MaskedTextProvider_t2280059057 * __this, String_t* ___input0, int32_t* ___testPosition1, int32_t* ___resultHint2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MaskedTextProvider::ToDisplayString()
extern "C"  String_t* MaskedTextProvider_ToDisplayString_m4032231343 (MaskedTextProvider_t2280059057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MaskedTextProvider::ToString()
extern "C"  String_t* MaskedTextProvider_ToString_m2197041293 (MaskedTextProvider_t2280059057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MaskedTextProvider::ToString(System.Boolean)
extern "C"  String_t* MaskedTextProvider_ToString_m2897003458 (MaskedTextProvider_t2280059057 * __this, bool ___ignorePasswordChar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MaskedTextProvider::ToString(System.Boolean,System.Boolean)
extern "C"  String_t* MaskedTextProvider_ToString_m2634944741 (MaskedTextProvider_t2280059057 * __this, bool ___includePrompt0, bool ___includeLiterals1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MaskedTextProvider::ToString(System.Int32,System.Int32)
extern "C"  String_t* MaskedTextProvider_ToString_m3272536481 (MaskedTextProvider_t2280059057 * __this, int32_t ___startPosition0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MaskedTextProvider::ToString(System.Boolean,System.Int32,System.Int32)
extern "C"  String_t* MaskedTextProvider_ToString_m394221168 (MaskedTextProvider_t2280059057 * __this, bool ___ignorePasswordChar0, int32_t ___startPosition1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MaskedTextProvider::ToString(System.Boolean,System.Boolean,System.Int32,System.Int32)
extern "C"  String_t* MaskedTextProvider_ToString_m3170627313 (MaskedTextProvider_t2280059057 * __this, bool ___includePrompt0, bool ___includeLiterals1, int32_t ___startPosition2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MaskedTextProvider::ToString(System.Boolean,System.Boolean,System.Boolean,System.Int32,System.Int32)
extern "C"  String_t* MaskedTextProvider_ToString_m3547140418 (MaskedTextProvider_t2280059057 * __this, bool ___ignorePasswordChar0, bool ___includePrompt1, bool ___includeLiterals2, int32_t ___startPosition3, int32_t ___length4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::VerifyChar(System.Char,System.Int32,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_VerifyChar_m2001712014 (MaskedTextProvider_t2280059057 * __this, Il2CppChar ___input0, int32_t ___position1, int32_t* ___hint2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::VerifyEscapeChar(System.Char,System.Int32)
extern "C"  bool MaskedTextProvider_VerifyEscapeChar_m2185495424 (MaskedTextProvider_t2280059057 * __this, Il2CppChar ___input0, int32_t ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::VerifyString(System.String)
extern "C"  bool MaskedTextProvider_VerifyString_m3021806772 (MaskedTextProvider_t2280059057 * __this, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::VerifyString(System.String,System.Int32&,System.ComponentModel.MaskedTextResultHint&)
extern "C"  bool MaskedTextProvider_VerifyString_m3940325396 (MaskedTextProvider_t2280059057 * __this, String_t* ___input0, int32_t* ___testPosition1, int32_t* ___resultHint2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::get_AllowPromptAsInput()
extern "C"  bool MaskedTextProvider_get_AllowPromptAsInput_m2695819514 (MaskedTextProvider_t2280059057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::get_AsciiOnly()
extern "C"  bool MaskedTextProvider_get_AsciiOnly_m2551266190 (MaskedTextProvider_t2280059057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MaskedTextProvider::get_AssignedEditPositionCount()
extern "C"  int32_t MaskedTextProvider_get_AssignedEditPositionCount_m2682648115 (MaskedTextProvider_t2280059057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MaskedTextProvider::get_AvailableEditPositionCount()
extern "C"  int32_t MaskedTextProvider_get_AvailableEditPositionCount_m2348323368 (MaskedTextProvider_t2280059057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.ComponentModel.MaskedTextProvider::get_Culture()
extern "C"  CultureInfo_t3500843524 * MaskedTextProvider_get_Culture_m2188868920 (MaskedTextProvider_t2280059057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.ComponentModel.MaskedTextProvider::get_DefaultPasswordChar()
extern "C"  Il2CppChar MaskedTextProvider_get_DefaultPasswordChar_m2362841295 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MaskedTextProvider::get_EditPositionCount()
extern "C"  int32_t MaskedTextProvider_get_EditPositionCount_m2972934483 (MaskedTextProvider_t2280059057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.ComponentModel.MaskedTextProvider::get_EditPositions()
extern "C"  Il2CppObject * MaskedTextProvider_get_EditPositions_m2377118839 (MaskedTextProvider_t2280059057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::get_IncludeLiterals()
extern "C"  bool MaskedTextProvider_get_IncludeLiterals_m165862291 (MaskedTextProvider_t2280059057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::set_IncludeLiterals(System.Boolean)
extern "C"  void MaskedTextProvider_set_IncludeLiterals_m1909921530 (MaskedTextProvider_t2280059057 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::get_IncludePrompt()
extern "C"  bool MaskedTextProvider_get_IncludePrompt_m4160518635 (MaskedTextProvider_t2280059057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::set_IncludePrompt(System.Boolean)
extern "C"  void MaskedTextProvider_set_IncludePrompt_m1389795776 (MaskedTextProvider_t2280059057 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MaskedTextProvider::get_InvalidIndex()
extern "C"  int32_t MaskedTextProvider_get_InvalidIndex_m1920061394 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::get_IsPassword()
extern "C"  bool MaskedTextProvider_get_IsPassword_m1313340822 (MaskedTextProvider_t2280059057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::set_IsPassword(System.Boolean)
extern "C"  void MaskedTextProvider_set_IsPassword_m1233545221 (MaskedTextProvider_t2280059057 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.ComponentModel.MaskedTextProvider::get_Item(System.Int32)
extern "C"  Il2CppChar MaskedTextProvider_get_Item_m1618751991 (MaskedTextProvider_t2280059057 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MaskedTextProvider::get_LastAssignedPosition()
extern "C"  int32_t MaskedTextProvider_get_LastAssignedPosition_m2742281244 (MaskedTextProvider_t2280059057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MaskedTextProvider::get_Length()
extern "C"  int32_t MaskedTextProvider_get_Length_m3708361237 (MaskedTextProvider_t2280059057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MaskedTextProvider::get_Mask()
extern "C"  String_t* MaskedTextProvider_get_Mask_m3858727254 (MaskedTextProvider_t2280059057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::get_MaskCompleted()
extern "C"  bool MaskedTextProvider_get_MaskCompleted_m2081278850 (MaskedTextProvider_t2280059057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::get_MaskFull()
extern "C"  bool MaskedTextProvider_get_MaskFull_m4239319838 (MaskedTextProvider_t2280059057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.ComponentModel.MaskedTextProvider::get_PasswordChar()
extern "C"  Il2CppChar MaskedTextProvider_get_PasswordChar_m185885160 (MaskedTextProvider_t2280059057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::set_PasswordChar(System.Char)
extern "C"  void MaskedTextProvider_set_PasswordChar_m1098503379 (MaskedTextProvider_t2280059057 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.ComponentModel.MaskedTextProvider::get_PromptChar()
extern "C"  Il2CppChar MaskedTextProvider_get_PromptChar_m2419203127 (MaskedTextProvider_t2280059057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::set_PromptChar(System.Char)
extern "C"  void MaskedTextProvider_set_PromptChar_m2409579890 (MaskedTextProvider_t2280059057 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::get_ResetOnPrompt()
extern "C"  bool MaskedTextProvider_get_ResetOnPrompt_m1758682727 (MaskedTextProvider_t2280059057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::set_ResetOnPrompt(System.Boolean)
extern "C"  void MaskedTextProvider_set_ResetOnPrompt_m2751350302 (MaskedTextProvider_t2280059057 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::get_ResetOnSpace()
extern "C"  bool MaskedTextProvider_get_ResetOnSpace_m2617736323 (MaskedTextProvider_t2280059057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::set_ResetOnSpace(System.Boolean)
extern "C"  void MaskedTextProvider_set_ResetOnSpace_m342464882 (MaskedTextProvider_t2280059057 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MaskedTextProvider::get_SkipLiterals()
extern "C"  bool MaskedTextProvider_get_SkipLiterals_m3560570536 (MaskedTextProvider_t2280059057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MaskedTextProvider::set_SkipLiterals(System.Boolean)
extern "C"  void MaskedTextProvider_set_SkipLiterals_m3918828977 (MaskedTextProvider_t2280059057 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
