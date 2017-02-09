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

// System.Resources.ResourceManager
struct ResourceManager_t264715885;
// System.Type
struct Type_t;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Reflection.Assembly
struct Assembly_t4268412390;
// System.String
struct String_t;
// System.Resources.ResourceSet
struct ResourceSet_t1348327650;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.IO.Stream
struct Stream_t3255436806;
// System.Version
struct Version_t1755874712;
// System.Resources.MissingManifestResourceException
struct MissingManifestResourceException_t1579693920;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_Assembly4268412390.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"

// System.Void System.Resources.ResourceManager::.ctor()
extern "C"  void ResourceManager__ctor_m498829021 (ResourceManager_t264715885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceManager::.ctor(System.Type)
extern "C"  void ResourceManager__ctor_m593695846 (ResourceManager_t264715885 * __this, Type_t * ___resourceSource0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceManager::.cctor()
extern "C"  void ResourceManager__cctor_m2190112652 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Resources.ResourceManager::GetResourceSets(System.Reflection.Assembly,System.String)
extern "C"  Hashtable_t909839986 * ResourceManager_GetResourceSets_m1753197769 (Il2CppObject * __this /* static, unused */, Assembly_t4268412390 * ___assembly0, String_t* ___basename1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Resources.ResourceManager::get_IgnoreCase()
extern "C"  bool ResourceManager_get_IgnoreCase_m2726992974 (ResourceManager_t264715885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Resources.ResourceSet System.Resources.ResourceManager::GetResourceSet(System.Globalization.CultureInfo,System.Boolean,System.Boolean)
extern "C"  ResourceSet_t1348327650 * ResourceManager_GetResourceSet_m2445362260 (ResourceManager_t264715885 * __this, CultureInfo_t3500843524 * ___culture0, bool ___createIfNotExists1, bool ___tryParents2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Resources.ResourceManager::GetResourceFileName(System.Globalization.CultureInfo)
extern "C"  String_t* ResourceManager_GetResourceFileName_m420095099 (ResourceManager_t264715885 * __this, CultureInfo_t3500843524 * ___culture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Resources.ResourceManager::GetResourceFilePath(System.Globalization.CultureInfo)
extern "C"  String_t* ResourceManager_GetResourceFilePath_m2798100813 (ResourceManager_t264715885 * __this, CultureInfo_t3500843524 * ___culture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Resources.ResourceManager::GetManifestResourceStreamNoCase(System.Reflection.Assembly,System.String)
extern "C"  Stream_t3255436806 * ResourceManager_GetManifestResourceStreamNoCase_m3281230457 (ResourceManager_t264715885 * __this, Assembly_t4268412390 * ___ass0, String_t* ___fn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Resources.ResourceSet System.Resources.ResourceManager::InternalGetResourceSet(System.Globalization.CultureInfo,System.Boolean,System.Boolean)
extern "C"  ResourceSet_t1348327650 * ResourceManager_InternalGetResourceSet_m2637775153 (ResourceManager_t264715885 * __this, CultureInfo_t3500843524 * ___culture0, bool ___createIfNotExists1, bool ___tryParents2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Resources.ResourceManager::GetNeutralResourcesLanguage(System.Reflection.Assembly)
extern "C"  CultureInfo_t3500843524 * ResourceManager_GetNeutralResourcesLanguage_m4112845604 (Il2CppObject * __this /* static, unused */, Assembly_t4268412390 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Resources.ResourceManager::GetSatelliteContractVersion(System.Reflection.Assembly)
extern "C"  Version_t1755874712 * ResourceManager_GetSatelliteContractVersion_m1326371606 (Il2CppObject * __this /* static, unused */, Assembly_t4268412390 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Resources.MissingManifestResourceException System.Resources.ResourceManager::AssemblyResourceMissing(System.String)
extern "C"  MissingManifestResourceException_t1579693920 * ResourceManager_AssemblyResourceMissing_m3101463802 (ResourceManager_t264715885 * __this, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Resources.ResourceManager::GetManifestResourceName(System.String)
extern "C"  String_t* ResourceManager_GetManifestResourceName_m151436770 (ResourceManager_t264715885 * __this, String_t* ___fn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
