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

// ServerSettings
struct ServerSettings_t1038886298;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_CloudRegionCode989201940.h"

// System.Void ServerSettings::.ctor()
extern "C"  void ServerSettings__ctor_m600632807 (ServerSettings_t1038886298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerSettings::UseCloudBestRegion(System.String)
extern "C"  void ServerSettings_UseCloudBestRegion_m2653644827 (ServerSettings_t1038886298 * __this, String_t* ___cloudAppid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerSettings::UseCloud(System.String)
extern "C"  void ServerSettings_UseCloud_m157779495 (ServerSettings_t1038886298 * __this, String_t* ___cloudAppid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerSettings::UseCloud(System.String,CloudRegionCode)
extern "C"  void ServerSettings_UseCloud_m1692204879 (ServerSettings_t1038886298 * __this, String_t* ___cloudAppid0, int32_t ___code1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerSettings::UseMyServer(System.String,System.Int32,System.String)
extern "C"  void ServerSettings_UseMyServer_m1696884634 (ServerSettings_t1038886298 * __this, String_t* ___serverAddress0, int32_t ___serverPort1, String_t* ___application2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ServerSettings::IsAppId(System.String)
extern "C"  bool ServerSettings_IsAppId_m807301275 (Il2CppObject * __this /* static, unused */, String_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ServerSettings::ToString()
extern "C"  String_t* ServerSettings_ToString_m657578220 (ServerSettings_t1038886298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
