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

// System.ComponentModel.TypeConverter/SimplePropertyDescriptor
struct SimplePropertyDescriptor_t586934322;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Attribute[]
struct AttributeU5BU5D_t4255796347;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.ComponentModel.TypeConverter/SimplePropertyDescriptor::.ctor(System.Type,System.String,System.Type)
extern "C"  void SimplePropertyDescriptor__ctor_m2772572302 (SimplePropertyDescriptor_t586934322 * __this, Type_t * ___componentType0, String_t* ___name1, Type_t * ___propertyType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeConverter/SimplePropertyDescriptor::.ctor(System.Type,System.String,System.Type,System.Attribute[])
extern "C"  void SimplePropertyDescriptor__ctor_m687233725 (SimplePropertyDescriptor_t586934322 * __this, Type_t * ___componentType0, String_t* ___name1, Type_t * ___propertyType2, AttributeU5BU5D_t4255796347* ___attributes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeConverter/SimplePropertyDescriptor::get_ComponentType()
extern "C"  Type_t * SimplePropertyDescriptor_get_ComponentType_m1408045782 (SimplePropertyDescriptor_t586934322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeConverter/SimplePropertyDescriptor::get_PropertyType()
extern "C"  Type_t * SimplePropertyDescriptor_get_PropertyType_m3980153932 (SimplePropertyDescriptor_t586934322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter/SimplePropertyDescriptor::get_IsReadOnly()
extern "C"  bool SimplePropertyDescriptor_get_IsReadOnly_m2762555983 (SimplePropertyDescriptor_t586934322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter/SimplePropertyDescriptor::ShouldSerializeValue(System.Object)
extern "C"  bool SimplePropertyDescriptor_ShouldSerializeValue_m3756638430 (SimplePropertyDescriptor_t586934322 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter/SimplePropertyDescriptor::CanResetValue(System.Object)
extern "C"  bool SimplePropertyDescriptor_CanResetValue_m2287517106 (SimplePropertyDescriptor_t586934322 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeConverter/SimplePropertyDescriptor::ResetValue(System.Object)
extern "C"  void SimplePropertyDescriptor_ResetValue_m1902196294 (SimplePropertyDescriptor_t586934322 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
