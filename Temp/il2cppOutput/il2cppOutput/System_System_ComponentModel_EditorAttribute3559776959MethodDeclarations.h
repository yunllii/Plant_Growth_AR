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

// System.ComponentModel.EditorAttribute
struct EditorAttribute_t3559776959;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.ComponentModel.EditorAttribute::.ctor()
extern "C"  void EditorAttribute__ctor_m2526204672 (EditorAttribute_t3559776959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EditorAttribute::.ctor(System.String,System.String)
extern "C"  void EditorAttribute__ctor_m3488466142 (EditorAttribute_t3559776959 * __this, String_t* ___typeName0, String_t* ___baseTypeName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EditorAttribute::.ctor(System.String,System.Type)
extern "C"  void EditorAttribute__ctor_m2858242367 (EditorAttribute_t3559776959 * __this, String_t* ___typeName0, Type_t * ___baseType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EditorAttribute::.ctor(System.Type,System.Type)
extern "C"  void EditorAttribute__ctor_m5984286 (EditorAttribute_t3559776959 * __this, Type_t * ___type0, Type_t * ___baseType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.EditorAttribute::get_EditorBaseTypeName()
extern "C"  String_t* EditorAttribute_get_EditorBaseTypeName_m2498230921 (EditorAttribute_t3559776959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.EditorAttribute::get_EditorTypeName()
extern "C"  String_t* EditorAttribute_get_EditorTypeName_m961831462 (EditorAttribute_t3559776959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.EditorAttribute::get_TypeId()
extern "C"  Il2CppObject * EditorAttribute_get_TypeId_m2934537523 (EditorAttribute_t3559776959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EditorAttribute::Equals(System.Object)
extern "C"  bool EditorAttribute_Equals_m1798416147 (EditorAttribute_t3559776959 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.EditorAttribute::GetHashCode()
extern "C"  int32_t EditorAttribute_GetHashCode_m2621716125 (EditorAttribute_t3559776959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
