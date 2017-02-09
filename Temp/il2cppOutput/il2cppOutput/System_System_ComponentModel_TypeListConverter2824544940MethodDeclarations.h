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

// System.ComponentModel.TypeListConverter
struct TypeListConverter_t2824544940;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t3633625151;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t191679357;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.ComponentModel.TypeListConverter::.ctor(System.Type[])
extern "C"  void TypeListConverter__ctor_m580224486 (TypeListConverter_t2824544940 * __this, TypeU5BU5D_t1664964607* ___types0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeListConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool TypeListConverter_CanConvertFrom_m990396471 (TypeListConverter_t2824544940 * __this, Il2CppObject * ___context0, Type_t * ___sourceType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeListConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool TypeListConverter_CanConvertTo_m481212398 (TypeListConverter_t2824544940 * __this, Il2CppObject * ___context0, Type_t * ___destinationType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeListConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  Il2CppObject * TypeListConverter_ConvertFrom_m3512267873 (TypeListConverter_t2824544940 * __this, Il2CppObject * ___context0, CultureInfo_t3500843524 * ___culture1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeListConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  Il2CppObject * TypeListConverter_ConvertTo_m3162329027 (TypeListConverter_t2824544940 * __this, Il2CppObject * ___context0, CultureInfo_t3500843524 * ___culture1, Il2CppObject * ___value2, Type_t * ___destinationType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.TypeListConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern "C"  StandardValuesCollection_t191679357 * TypeListConverter_GetStandardValues_m611251498 (TypeListConverter_t2824544940 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeListConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool TypeListConverter_GetStandardValuesExclusive_m1306016360 (TypeListConverter_t2824544940 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeListConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool TypeListConverter_GetStandardValuesSupported_m3679572298 (TypeListConverter_t2824544940 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
