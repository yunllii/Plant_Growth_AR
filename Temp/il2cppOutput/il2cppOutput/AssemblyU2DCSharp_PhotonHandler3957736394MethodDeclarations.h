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

// PhotonHandler
struct PhotonHandler_t3957736394;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CloudRegionCode989201940.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1684909666.h"
#include "UnityEngine_UnityEngine_SceneManagement_LoadSceneM2981886439.h"

// System.Void PhotonHandler::.ctor()
extern "C"  void PhotonHandler__ctor_m2156905801 (PhotonHandler_t3957736394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::Awake()
extern "C"  void PhotonHandler_Awake_m1819068426 (PhotonHandler_t3957736394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::Start()
extern "C"  void PhotonHandler_Start_m2098054545 (PhotonHandler_t3957736394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnApplicationQuit()
extern "C"  void PhotonHandler_OnApplicationQuit_m75667395 (PhotonHandler_t3957736394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnApplicationPause(System.Boolean)
extern "C"  void PhotonHandler_OnApplicationPause_m1805739255 (PhotonHandler_t3957736394 * __this, bool ___pause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnDestroy()
extern "C"  void PhotonHandler_OnDestroy_m1547600256 (PhotonHandler_t3957736394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::Update()
extern "C"  void PhotonHandler_Update_m2922598412 (PhotonHandler_t3957736394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnJoinedRoom()
extern "C"  void PhotonHandler_OnJoinedRoom_m1908981318 (PhotonHandler_t3957736394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnCreatedRoom()
extern "C"  void PhotonHandler_OnCreatedRoom_m1478301051 (PhotonHandler_t3957736394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::StartFallbackSendAckThread()
extern "C"  void PhotonHandler_StartFallbackSendAckThread_m862939596 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::StopFallbackSendAckThread()
extern "C"  void PhotonHandler_StopFallbackSendAckThread_m1182583572 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonHandler::FallbackSendAckThread()
extern "C"  bool PhotonHandler_FallbackSendAckThread_m3028084038 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CloudRegionCode PhotonHandler::get_BestRegionCodeInPreferences()
extern "C"  int32_t PhotonHandler_get_BestRegionCodeInPreferences_m815955981 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::set_BestRegionCodeInPreferences(CloudRegionCode)
extern "C"  void PhotonHandler_set_BestRegionCodeInPreferences_m75348658 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::PingAvailableRegionsAndConnectToBest()
extern "C"  void PhotonHandler_PingAvailableRegionsAndConnectToBest_m3127240945 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PhotonHandler::PingAvailableRegionsCoroutine(System.Boolean)
extern "C"  Il2CppObject * PhotonHandler_PingAvailableRegionsCoroutine_m2927708238 (PhotonHandler_t3957736394 * __this, bool ___connectToBest0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::.cctor()
extern "C"  void PhotonHandler__cctor_m3322438884 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::<Start>m__0(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
extern "C"  void PhotonHandler_U3CStartU3Em__0_m3486785867 (Il2CppObject * __this /* static, unused */, Scene_t1684909666  ___scene0, int32_t ___loadingMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
