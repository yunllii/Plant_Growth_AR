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

// ExitGames.Demos.DemoAnimator.PlayerManager
struct PlayerManager_t514296090;
// UnityEngine.Collider
struct Collider_t3497673348;
// PhotonStream
struct PhotonStream_t2436786422;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"
#include "AssemblyU2DCSharp_PhotonStream2436786422.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo13590565.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1684909666.h"
#include "UnityEngine_UnityEngine_SceneManagement_LoadSceneM2981886439.h"

// System.Void ExitGames.Demos.DemoAnimator.PlayerManager::.ctor()
extern "C"  void PlayerManager__ctor_m1437480272 (PlayerManager_t514296090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Demos.DemoAnimator.PlayerManager::Awake()
extern "C"  void PlayerManager_Awake_m2066623493 (PlayerManager_t514296090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Demos.DemoAnimator.PlayerManager::Start()
extern "C"  void PlayerManager_Start_m3202438672 (PlayerManager_t514296090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Demos.DemoAnimator.PlayerManager::Update()
extern "C"  void PlayerManager_Update_m4251068177 (PlayerManager_t514296090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Demos.DemoAnimator.PlayerManager::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void PlayerManager_OnTriggerEnter_m503205308 (PlayerManager_t514296090 * __this, Collider_t3497673348 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Demos.DemoAnimator.PlayerManager::OnTriggerStay(UnityEngine.Collider)
extern "C"  void PlayerManager_OnTriggerStay_m1405306443 (PlayerManager_t514296090 * __this, Collider_t3497673348 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Demos.DemoAnimator.PlayerManager::CalledOnLevelWasLoaded(System.Int32)
extern "C"  void PlayerManager_CalledOnLevelWasLoaded_m1905250915 (PlayerManager_t514296090 * __this, int32_t ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Demos.DemoAnimator.PlayerManager::ProcessInputs()
extern "C"  void PlayerManager_ProcessInputs_m2863904980 (PlayerManager_t514296090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Demos.DemoAnimator.PlayerManager::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void PlayerManager_OnPhotonSerializeView_m2478755113 (PlayerManager_t514296090 * __this, PhotonStream_t2436786422 * ___stream0, PhotonMessageInfo_t13590565  ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Demos.DemoAnimator.PlayerManager::<Start>m__0(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
extern "C"  void PlayerManager_U3CStartU3Em__0_m1917022460 (PlayerManager_t514296090 * __this, Scene_t1684909666  ___scene0, int32_t ___loadingMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
