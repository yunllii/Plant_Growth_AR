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

// System.ComponentModel.TypeConverter
struct TypeConverter_t745995970;
// System.Type
struct Type_t;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t3633625151;
// System.Object
struct Il2CppObject;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3166009492;
// System.Attribute[]
struct AttributeU5BU5D_t4255796347;
// System.Collections.ICollection
struct ICollection_t91669223;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t191679357;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_ComponentModel_PropertyDescriptorCol3166009492.h"

// System.Void System.ComponentModel.TypeConverter::.ctor()
extern "C"  void TypeConverter__ctor_m3380301159 (TypeConverter_t745995970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertFrom(System.Type)
extern "C"  bool TypeConverter_CanConvertFrom_m1824018217 (TypeConverter_t745995970 * __this, Type_t * ___sourceType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool TypeConverter_CanConvertFrom_m1277808141 (TypeConverter_t745995970 * __this, Il2CppObject * ___context0, Type_t * ___sourceType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertTo(System.Type)
extern "C"  bool TypeConverter_CanConvertTo_m3984515018 (TypeConverter_t745995970 * __this, Type_t * ___destinationType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool TypeConverter_CanConvertTo_m3192242134 (TypeConverter_t745995970 * __this, Il2CppObject * ___context0, Type_t * ___destinationType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFrom(System.Object)
extern "C"  Il2CppObject * TypeConverter_ConvertFrom_m757293553 (TypeConverter_t745995970 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  Il2CppObject * TypeConverter_ConvertFrom_m3174062747 (TypeConverter_t745995970 * __this, Il2CppObject * ___context0, CultureInfo_t3500843524 * ___culture1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromInvariantString(System.String)
extern "C"  Il2CppObject * TypeConverter_ConvertFromInvariantString_m1701603654 (TypeConverter_t745995970 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromInvariantString(System.ComponentModel.ITypeDescriptorContext,System.String)
extern "C"  Il2CppObject * TypeConverter_ConvertFromInvariantString_m1072000636 (TypeConverter_t745995970 * __this, Il2CppObject * ___context0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromString(System.String)
extern "C"  Il2CppObject * TypeConverter_ConvertFromString_m1918759906 (TypeConverter_t745995970 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromString(System.ComponentModel.ITypeDescriptorContext,System.String)
extern "C"  Il2CppObject * TypeConverter_ConvertFromString_m3964413992 (TypeConverter_t745995970 * __this, Il2CppObject * ___context0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromString(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.String)
extern "C"  Il2CppObject * TypeConverter_ConvertFromString_m3568010184 (TypeConverter_t745995970 * __this, Il2CppObject * ___context0, CultureInfo_t3500843524 * ___culture1, String_t* ___text2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertTo(System.Object,System.Type)
extern "C"  Il2CppObject * TypeConverter_ConvertTo_m2094680623 (TypeConverter_t745995970 * __this, Il2CppObject * ___value0, Type_t * ___destinationType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  Il2CppObject * TypeConverter_ConvertTo_m528793397 (TypeConverter_t745995970 * __this, Il2CppObject * ___context0, CultureInfo_t3500843524 * ___culture1, Il2CppObject * ___value2, Type_t * ___destinationType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToInvariantString(System.Object)
extern "C"  String_t* TypeConverter_ConvertToInvariantString_m2615559221 (TypeConverter_t745995970 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToInvariantString(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C"  String_t* TypeConverter_ConvertToInvariantString_m407162877 (TypeConverter_t745995970 * __this, Il2CppObject * ___context0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToString(System.Object)
extern "C"  String_t* TypeConverter_ConvertToString_m3590519313 (TypeConverter_t745995970 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToString(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C"  String_t* TypeConverter_ConvertToString_m127192225 (TypeConverter_t745995970 * __this, Il2CppObject * ___context0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToString(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  String_t* TypeConverter_ConvertToString_m3857592759 (TypeConverter_t745995970 * __this, Il2CppObject * ___context0, CultureInfo_t3500843524 * ___culture1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.ComponentModel.TypeConverter::GetConvertFromException(System.Object)
extern "C"  Exception_t1927440687 * TypeConverter_GetConvertFromException_m3896630974 (TypeConverter_t745995970 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.ComponentModel.TypeConverter::GetConvertToException(System.Object,System.Type)
extern "C"  Exception_t1927440687 * TypeConverter_GetConvertToException_m2034503704 (TypeConverter_t745995970 * __this, Il2CppObject * ___value0, Type_t * ___destinationType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::CreateInstance(System.Collections.IDictionary)
extern "C"  Il2CppObject * TypeConverter_CreateInstance_m181105910 (TypeConverter_t745995970 * __this, Il2CppObject * ___propertyValues0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::CreateInstance(System.ComponentModel.ITypeDescriptorContext,System.Collections.IDictionary)
extern "C"  Il2CppObject * TypeConverter_CreateInstance_m730852506 (TypeConverter_t745995970 * __this, Il2CppObject * ___context0, Il2CppObject * ___propertyValues1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetCreateInstanceSupported()
extern "C"  bool TypeConverter_GetCreateInstanceSupported_m2039946542 (TypeConverter_t745995970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetCreateInstanceSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool TypeConverter_GetCreateInstanceSupported_m3327069518 (TypeConverter_t745995970 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeConverter::GetProperties(System.Object)
extern "C"  PropertyDescriptorCollection_t3166009492 * TypeConverter_GetProperties_m4062849658 (TypeConverter_t745995970 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C"  PropertyDescriptorCollection_t3166009492 * TypeConverter_GetProperties_m429017404 (TypeConverter_t745995970 * __this, Il2CppObject * ___context0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C"  PropertyDescriptorCollection_t3166009492 * TypeConverter_GetProperties_m15921575 (TypeConverter_t745995970 * __this, Il2CppObject * ___context0, Il2CppObject * ___value1, AttributeU5BU5D_t4255796347* ___attributes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetPropertiesSupported()
extern "C"  bool TypeConverter_GetPropertiesSupported_m1977186088 (TypeConverter_t745995970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool TypeConverter_GetPropertiesSupported_m2000239600 (TypeConverter_t745995970 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.ComponentModel.TypeConverter::GetStandardValues()
extern "C"  Il2CppObject * TypeConverter_GetStandardValues_m416881382 (TypeConverter_t745995970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.TypeConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern "C"  StandardValuesCollection_t191679357 * TypeConverter_GetStandardValues_m514712678 (TypeConverter_t745995970 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesExclusive()
extern "C"  bool TypeConverter_GetStandardValuesExclusive_m3237904548 (TypeConverter_t745995970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool TypeConverter_GetStandardValuesExclusive_m2288047432 (TypeConverter_t745995970 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesSupported()
extern "C"  bool TypeConverter_GetStandardValuesSupported_m131672382 (TypeConverter_t745995970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool TypeConverter_GetStandardValuesSupported_m3265864058 (TypeConverter_t745995970 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::IsValid(System.Object)
extern "C"  bool TypeConverter_IsValid_m1056524665 (TypeConverter_t745995970 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::IsValid(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C"  bool TypeConverter_IsValid_m2898541297 (TypeConverter_t745995970 * __this, Il2CppObject * ___context0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeConverter::SortProperties(System.ComponentModel.PropertyDescriptorCollection,System.String[])
extern "C"  PropertyDescriptorCollection_t3166009492 * TypeConverter_SortProperties_m1516114003 (TypeConverter_t745995970 * __this, PropertyDescriptorCollection_t3166009492 * ___props0, StringU5BU5D_t1642385972* ___names1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
