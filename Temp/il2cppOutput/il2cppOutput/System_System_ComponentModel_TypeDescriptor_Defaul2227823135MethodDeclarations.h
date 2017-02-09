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

// System.ComponentModel.TypeDescriptor/DefaultTypeDescriptionProvider
struct DefaultTypeDescriptionProvider_t2227823135;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t594940201;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void System.ComponentModel.TypeDescriptor/DefaultTypeDescriptionProvider::.ctor()
extern "C"  void DefaultTypeDescriptionProvider__ctor_m137956923 (DefaultTypeDescriptionProvider_t2227823135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/DefaultTypeDescriptionProvider::GetExtendedTypeDescriptor(System.Object)
extern "C"  Il2CppObject * DefaultTypeDescriptionProvider_GetExtendedTypeDescriptor_m2398825140 (DefaultTypeDescriptionProvider_t2227823135 * __this, Il2CppObject * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/DefaultTypeDescriptionProvider::GetTypeDescriptor(System.Type,System.Object)
extern "C"  Il2CppObject * DefaultTypeDescriptionProvider_GetTypeDescriptor_m1697119592 (DefaultTypeDescriptionProvider_t2227823135 * __this, Type_t * ___objectType0, Il2CppObject * ___instance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
