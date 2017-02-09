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

// PhotonPingManager
struct PhotonPingManager_t2532484147;
// Region
struct Region_t1621871372;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Region1621871372.h"
#include "mscorlib_System_String2029220233.h"

// System.Void PhotonPingManager::.ctor()
extern "C"  void PhotonPingManager__ctor_m2881971468 (PhotonPingManager_t2532484147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Region PhotonPingManager::get_BestRegion()
extern "C"  Region_t1621871372 * PhotonPingManager_get_BestRegion_m2782904308 (PhotonPingManager_t2532484147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonPingManager::get_Done()
extern "C"  bool PhotonPingManager_get_Done_m3373597279 (PhotonPingManager_t2532484147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PhotonPingManager::PingSocket(Region)
extern "C"  Il2CppObject * PhotonPingManager_PingSocket_m3416323013 (PhotonPingManager_t2532484147 * __this, Region_t1621871372 * ___region0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonPingManager::ResolveHost(System.String)
extern "C"  String_t* PhotonPingManager_ResolveHost_m3220270517 (Il2CppObject * __this /* static, unused */, String_t* ___hostName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPingManager::.cctor()
extern "C"  void PhotonPingManager__cctor_m3800261313 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
