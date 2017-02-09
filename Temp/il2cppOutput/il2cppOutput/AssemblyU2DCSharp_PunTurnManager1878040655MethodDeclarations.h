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

// PunTurnManager
struct PunTurnManager_t1878040655;
// System.Object
struct Il2CppObject;
// PhotonPlayer
struct PhotonPlayer_t4120608827;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t995404622;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_PhotonPlayer4120608827.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable995404622.h"

// System.Void PunTurnManager::.ctor()
extern "C"  void PunTurnManager__ctor_m3824016466 (PunTurnManager_t1878040655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PunTurnManager::get_Turn()
extern "C"  int32_t PunTurnManager_get_Turn_m1730846340 (PunTurnManager_t1878040655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTurnManager::set_Turn(System.Int32)
extern "C"  void PunTurnManager_set_Turn_m492812999 (PunTurnManager_t1878040655 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PunTurnManager::get_ElapsedTimeInTurn()
extern "C"  float PunTurnManager_get_ElapsedTimeInTurn_m2451708470 (PunTurnManager_t1878040655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PunTurnManager::get_RemainingSecondsInTurn()
extern "C"  float PunTurnManager_get_RemainingSecondsInTurn_m4004854634 (PunTurnManager_t1878040655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PunTurnManager::get_IsCompletedByAll()
extern "C"  bool PunTurnManager_get_IsCompletedByAll_m1611641456 (PunTurnManager_t1878040655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PunTurnManager::get_IsFinishedByMe()
extern "C"  bool PunTurnManager_get_IsFinishedByMe_m2012201430 (PunTurnManager_t1878040655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PunTurnManager::get_IsOver()
extern "C"  bool PunTurnManager_get_IsOver_m1842845131 (PunTurnManager_t1878040655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTurnManager::Start()
extern "C"  void PunTurnManager_Start_m3541157582 (PunTurnManager_t1878040655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTurnManager::Update()
extern "C"  void PunTurnManager_Update_m489857467 (PunTurnManager_t1878040655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTurnManager::BeginTurn()
extern "C"  void PunTurnManager_BeginTurn_m2105077112 (PunTurnManager_t1878040655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTurnManager::SendMove(System.Object,System.Boolean)
extern "C"  void PunTurnManager_SendMove_m980493636 (PunTurnManager_t1878040655 * __this, Il2CppObject * ___move0, bool ___finished1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PunTurnManager::GetPlayerFinishedTurn(PhotonPlayer)
extern "C"  bool PunTurnManager_GetPlayerFinishedTurn_m3840797865 (PunTurnManager_t1878040655 * __this, PhotonPlayer_t4120608827 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTurnManager::OnEvent(System.Byte,System.Object,System.Int32)
extern "C"  void PunTurnManager_OnEvent_m2403797953 (PunTurnManager_t1878040655 * __this, uint8_t ___eventCode0, Il2CppObject * ___content1, int32_t ___senderId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PunTurnManager::OnPhotonCustomRoomPropertiesChanged(ExitGames.Client.Photon.Hashtable)
extern "C"  void PunTurnManager_OnPhotonCustomRoomPropertiesChanged_m1904350188 (PunTurnManager_t1878040655 * __this, Hashtable_t995404622 * ___propertiesThatChanged0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
