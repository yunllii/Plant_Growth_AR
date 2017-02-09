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

// System.ComponentModel.LicenseContext
struct LicenseContext_t192650050;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Assembly
struct Assembly_t4268412390;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_Assembly4268412390.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_ComponentModel_LicenseUsageMode2996119499.h"

// System.Void System.ComponentModel.LicenseContext::.ctor()
extern "C"  void LicenseContext__ctor_m2265576011 (LicenseContext_t192650050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.LicenseContext::GetSavedLicenseKey(System.Type,System.Reflection.Assembly)
extern "C"  String_t* LicenseContext_GetSavedLicenseKey_m676362376 (LicenseContext_t192650050 * __this, Type_t * ___type0, Assembly_t4268412390 * ___resourceAssembly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.LicenseContext::GetService(System.Type)
extern "C"  Il2CppObject * LicenseContext_GetService_m4064623204 (LicenseContext_t192650050 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseContext::SetSavedLicenseKey(System.Type,System.String)
extern "C"  void LicenseContext_SetSavedLicenseKey_m2295281433 (LicenseContext_t192650050 * __this, Type_t * ___type0, String_t* ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.LicenseUsageMode System.ComponentModel.LicenseContext::get_UsageMode()
extern "C"  int32_t LicenseContext_get_UsageMode_m2323536707 (LicenseContext_t192650050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
