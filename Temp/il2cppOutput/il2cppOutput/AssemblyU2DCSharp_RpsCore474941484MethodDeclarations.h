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

// RpsCore
struct RpsCore_t474941484;
// PhotonPlayer
struct PhotonPlayer_t4120608827;
// System.Object
struct Il2CppObject;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Sprite
struct Sprite_t309593783;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonPlayer4120608827.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_RpsCore_Hand3764893688.h"
#include "AssemblyU2DCSharp_DisconnectCause1534558295.h"

// System.Void RpsCore::.ctor()
extern "C"  void RpsCore__ctor_m2980406097 (RpsCore_t474941484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::Start()
extern "C"  void RpsCore_Start_m1047234481 (RpsCore_t474941484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::Update()
extern "C"  void RpsCore_Update_m3905495158 (RpsCore_t474941484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnTurnBegins(System.Int32)
extern "C"  void RpsCore_OnTurnBegins_m4205269366 (RpsCore_t474941484 * __this, int32_t ___turn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnTurnCompleted(System.Int32)
extern "C"  void RpsCore_OnTurnCompleted_m1397618697 (RpsCore_t474941484 * __this, int32_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnPlayerMove(PhotonPlayer,System.Int32,System.Object)
extern "C"  void RpsCore_OnPlayerMove_m4112252860 (RpsCore_t474941484 * __this, PhotonPlayer_t4120608827 * ___photonPlayer0, int32_t ___turn1, Il2CppObject * ___move2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnPlayerFinished(PhotonPlayer,System.Int32,System.Object)
extern "C"  void RpsCore_OnPlayerFinished_m3192892051 (RpsCore_t474941484 * __this, PhotonPlayer_t4120608827 * ___photonPlayer0, int32_t ___turn1, Il2CppObject * ___move2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnTurnTimeEnds(System.Int32)
extern "C"  void RpsCore_OnTurnTimeEnds_m1038445361 (RpsCore_t474941484 * __this, int32_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::UpdateScores()
extern "C"  void RpsCore_UpdateScores_m1905805067 (RpsCore_t474941484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::StartTurn()
extern "C"  void RpsCore_StartTurn_m2610934804 (RpsCore_t474941484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::MakeTurn(RpsCore/Hand)
extern "C"  void RpsCore_MakeTurn_m3136245106 (RpsCore_t474941484 * __this, int32_t ___selection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnEndTurn()
extern "C"  void RpsCore_OnEndTurn_m3100306514 (RpsCore_t474941484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator RpsCore::ShowResultsBeginNextTurnCoroutine()
extern "C"  Il2CppObject * RpsCore_ShowResultsBeginNextTurnCoroutine_m2526499481 (RpsCore_t474941484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::EndGame()
extern "C"  void RpsCore_EndGame_m1212284544 (RpsCore_t474941484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::CalculateWinAndLoss()
extern "C"  void RpsCore_CalculateWinAndLoss_m2197790629 (RpsCore_t474941484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite RpsCore::SelectionToSprite(RpsCore/Hand)
extern "C"  Sprite_t309593783 * RpsCore_SelectionToSprite_m1873705748 (RpsCore_t474941484 * __this, int32_t ___hand0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::UpdatePlayerTexts()
extern "C"  void RpsCore_UpdatePlayerTexts_m4021591029 (RpsCore_t474941484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator RpsCore::CycleRemoteHandCoroutine()
extern "C"  Il2CppObject * RpsCore_CycleRemoteHandCoroutine_m3082003654 (RpsCore_t474941484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnClickRock()
extern "C"  void RpsCore_OnClickRock_m55314767 (RpsCore_t474941484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnClickPaper()
extern "C"  void RpsCore_OnClickPaper_m687588876 (RpsCore_t474941484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnClickScissors()
extern "C"  void RpsCore_OnClickScissors_m3538571585 (RpsCore_t474941484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnClickConnect()
extern "C"  void RpsCore_OnClickConnect_m732006736 (RpsCore_t474941484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnClickReConnectAndRejoin()
extern "C"  void RpsCore_OnClickReConnectAndRejoin_m2525442629 (RpsCore_t474941484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::RefreshUIViews()
extern "C"  void RpsCore_RefreshUIViews_m2994415390 (RpsCore_t474941484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnLeftRoom()
extern "C"  void RpsCore_OnLeftRoom_m362424524 (RpsCore_t474941484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnJoinedRoom()
extern "C"  void RpsCore_OnJoinedRoom_m2565234628 (RpsCore_t474941484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnPhotonPlayerConnected(PhotonPlayer)
extern "C"  void RpsCore_OnPhotonPlayerConnected_m3545058383 (RpsCore_t474941484 * __this, PhotonPlayer_t4120608827 * ___newPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnPhotonPlayerDisconnected(PhotonPlayer)
extern "C"  void RpsCore_OnPhotonPlayerDisconnected_m3541889869 (RpsCore_t474941484 * __this, PhotonPlayer_t4120608827 * ___otherPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RpsCore::OnConnectionFail(DisconnectCause)
extern "C"  void RpsCore_OnConnectionFail_m3078281937 (RpsCore_t474941484 * __this, int32_t ___cause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
