﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor
struct ArrayPropertyDescriptor_t599180064;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::.ctor(System.Int32,System.Type)
extern "C"  void ArrayPropertyDescriptor__ctor_m3124389200 (ArrayPropertyDescriptor_t599180064 * __this, int32_t ___index0, Type_t * ___array_type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::get_ComponentType()
extern "C"  Type_t * ArrayPropertyDescriptor_get_ComponentType_m4279355744 (ArrayPropertyDescriptor_t599180064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::get_PropertyType()
extern "C"  Type_t * ArrayPropertyDescriptor_get_PropertyType_m226036514 (ArrayPropertyDescriptor_t599180064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::get_IsReadOnly()
extern "C"  bool ArrayPropertyDescriptor_get_IsReadOnly_m409944405 (ArrayPropertyDescriptor_t599180064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::GetValue(System.Object)
extern "C"  Il2CppObject * ArrayPropertyDescriptor_GetValue_m154220858 (ArrayPropertyDescriptor_t599180064 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::SetValue(System.Object,System.Object)
extern "C"  void ArrayPropertyDescriptor_SetValue_m3240874629 (ArrayPropertyDescriptor_t599180064 * __this, Il2CppObject * ___component0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::ResetValue(System.Object)
extern "C"  void ArrayPropertyDescriptor_ResetValue_m3319088440 (ArrayPropertyDescriptor_t599180064 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::CanResetValue(System.Object)
extern "C"  bool ArrayPropertyDescriptor_CanResetValue_m2178670360 (ArrayPropertyDescriptor_t599180064 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::ShouldSerializeValue(System.Object)
extern "C"  bool ArrayPropertyDescriptor_ShouldSerializeValue_m3107514032 (ArrayPropertyDescriptor_t599180064 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
