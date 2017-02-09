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

// System.ComponentModel.LicenseManager
struct LicenseManager_t764408642;
// System.ComponentModel.LicenseContext
struct LicenseContext_t192650050;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.ComponentModel.License
struct License_t3326651051;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_LicenseContext192650050.h"
#include "System_System_ComponentModel_LicenseUsageMode2996119499.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_System_ComponentModel_License3326651051.h"

// System.Void System.ComponentModel.LicenseManager::.ctor()
extern "C"  void LicenseManager__ctor_m1207416127 (LicenseManager_t764408642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseManager::.cctor()
extern "C"  void LicenseManager__cctor_m492897194 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.LicenseContext System.ComponentModel.LicenseManager::get_CurrentContext()
extern "C"  LicenseContext_t192650050 * LicenseManager_get_CurrentContext_m4093872602 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseManager::set_CurrentContext(System.ComponentModel.LicenseContext)
extern "C"  void LicenseManager_set_CurrentContext_m1196272609 (Il2CppObject * __this /* static, unused */, LicenseContext_t192650050 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.LicenseUsageMode System.ComponentModel.LicenseManager::get_UsageMode()
extern "C"  int32_t LicenseManager_get_UsageMode_m1170510727 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.LicenseManager::CreateWithContext(System.Type,System.ComponentModel.LicenseContext)
extern "C"  Il2CppObject * LicenseManager_CreateWithContext_m1981519841 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, LicenseContext_t192650050 * ___creationContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.LicenseManager::CreateWithContext(System.Type,System.ComponentModel.LicenseContext,System.Object[])
extern "C"  Il2CppObject * LicenseManager_CreateWithContext_m3960087889 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, LicenseContext_t192650050 * ___creationContext1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.LicenseManager::IsLicensed(System.Type)
extern "C"  bool LicenseManager_IsLicensed_m313941509 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.LicenseManager::IsValid(System.Type)
extern "C"  bool LicenseManager_IsValid_m3346495970 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.LicenseManager::IsValid(System.Type,System.Object,System.ComponentModel.License&)
extern "C"  bool LicenseManager_IsValid_m1219885968 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Il2CppObject * ___instance1, License_t3326651051 ** ___license2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseManager::LockContext(System.Object)
extern "C"  void LicenseManager_LockContext_m1681728129 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___contextUser0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseManager::UnlockContext(System.Object)
extern "C"  void LicenseManager_UnlockContext_m680237512 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___contextUser0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseManager::Validate(System.Type)
extern "C"  void LicenseManager_Validate_m904301638 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.License System.ComponentModel.LicenseManager::Validate(System.Type,System.Object)
extern "C"  License_t3326651051 * LicenseManager_Validate_m3717939173 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Il2CppObject * ___instance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.LicenseManager::privateGetLicense(System.Type,System.Object,System.Boolean,System.ComponentModel.License&)
extern "C"  bool LicenseManager_privateGetLicense_m2580255413 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Il2CppObject * ___instance1, bool ___allowExceptions2, License_t3326651051 ** ___license3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
