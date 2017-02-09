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

// System.ComponentModel.MultilineStringConverter
struct MultilineStringConverter_t3643519256;
// System.Object
struct Il2CppObject;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t3633625151;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.Type
struct Type_t;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3166009492;
// System.Attribute[]
struct AttributeU5BU5D_t4255796347;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void System.ComponentModel.MultilineStringConverter::.ctor()
extern "C"  void MultilineStringConverter__ctor_m3730406685 (MultilineStringConverter_t3643519256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.MultilineStringConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  Il2CppObject * MultilineStringConverter_ConvertTo_m1488688431 (MultilineStringConverter_t3643519256 * __this, Il2CppObject * ___context0, CultureInfo_t3500843524 * ___culture1, Il2CppObject * ___value2, Type_t * ___destinationType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.MultilineStringConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C"  PropertyDescriptorCollection_t3166009492 * MultilineStringConverter_GetProperties_m3324539545 (MultilineStringConverter_t3643519256 * __this, Il2CppObject * ___context0, Il2CppObject * ___value1, AttributeU5BU5D_t4255796347* ___attributes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MultilineStringConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool MultilineStringConverter_GetPropertiesSupported_m880285350 (MultilineStringConverter_t3643519256 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
