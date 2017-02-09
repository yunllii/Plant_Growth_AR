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

// ExitGames.UtilityScripts.PlayerRoomIndexing
struct PlayerRoomIndexing_t1284878072;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// PhotonPlayer
struct PhotonPlayer_t4120608827;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t995404622;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonPlayer4120608827.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable995404622.h"

// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing::.ctor()
extern "C"  void PlayerRoomIndexing__ctor_m3500993152 (PlayerRoomIndexing_t1284878072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ExitGames.UtilityScripts.PlayerRoomIndexing::get_PlayerIds()
extern "C"  Int32U5BU5D_t3030399641* PlayerRoomIndexing_get_PlayerIds_m4030599540 (PlayerRoomIndexing_t1284878072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing::Awake()
extern "C"  void PlayerRoomIndexing_Awake_m3139077521 (PlayerRoomIndexing_t1284878072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing::OnJoinedRoom()
extern "C"  void PlayerRoomIndexing_OnJoinedRoom_m3177565965 (PlayerRoomIndexing_t1284878072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing::OnLeftRoom()
extern "C"  void PlayerRoomIndexing_OnLeftRoom_m1631826277 (PlayerRoomIndexing_t1284878072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing::OnPhotonPlayerConnected(PhotonPlayer)
extern "C"  void PlayerRoomIndexing_OnPhotonPlayerConnected_m3505162052 (PlayerRoomIndexing_t1284878072 * __this, PhotonPlayer_t4120608827 * ___newPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing::OnPhotonPlayerDisconnected(PhotonPlayer)
extern "C"  void PlayerRoomIndexing_OnPhotonPlayerDisconnected_m3772465774 (PlayerRoomIndexing_t1284878072 * __this, PhotonPlayer_t4120608827 * ___otherPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing::OnPhotonCustomRoomPropertiesChanged(ExitGames.Client.Photon.Hashtable)
extern "C"  void PlayerRoomIndexing_OnPhotonCustomRoomPropertiesChanged_m1777965822 (PlayerRoomIndexing_t1284878072 * __this, Hashtable_t995404622 * ___propertiesThatChanged0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing::OnMasterClientSwitched(PhotonPlayer)
extern "C"  void PlayerRoomIndexing_OnMasterClientSwitched_m3117065662 (PlayerRoomIndexing_t1284878072 * __this, PhotonPlayer_t4120608827 * ___newMasterClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.UtilityScripts.PlayerRoomIndexing::GetRoomIndex(PhotonPlayer)
extern "C"  int32_t PlayerRoomIndexing_GetRoomIndex_m2095934704 (PlayerRoomIndexing_t1284878072 * __this, PhotonPlayer_t4120608827 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing::SanitizeIndexing()
extern "C"  void PlayerRoomIndexing_SanitizeIndexing_m2713790665 (PlayerRoomIndexing_t1284878072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing::RefreshData()
extern "C"  void PlayerRoomIndexing_RefreshData_m1723980109 (PlayerRoomIndexing_t1284878072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing::AssignIndex(PhotonPlayer)
extern "C"  void PlayerRoomIndexing_AssignIndex_m3985043286 (PlayerRoomIndexing_t1284878072 * __this, PhotonPlayer_t4120608827 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.UtilityScripts.PlayerRoomIndexing::UnAssignIndex(PhotonPlayer)
extern "C"  void PlayerRoomIndexing_UnAssignIndex_m2318761925 (PlayerRoomIndexing_t1284878072 * __this, PhotonPlayer_t4120608827 * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
