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

// Photon.PunBehaviour
struct PunBehaviour_t692890556;
// PhotonPlayer
struct PhotonPlayer_t4120608827;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t995404622;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t3648537128;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonPlayer4120608827.h"
#include "AssemblyU2DCSharp_DisconnectCause1534558295.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo13590565.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable995404622.h"
#include "mscorlib_System_String2029220233.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationRe3648537128.h"

// System.Void Photon.PunBehaviour::.ctor()
extern "C"  void PunBehaviour__ctor_m1975277105 (PunBehaviour_t692890556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnConnectedToPhoton()
extern "C"  void PunBehaviour_OnConnectedToPhoton_m3142924442 (PunBehaviour_t692890556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnLeftRoom()
extern "C"  void PunBehaviour_OnLeftRoom_m2734307382 (PunBehaviour_t692890556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnMasterClientSwitched(PhotonPlayer)
extern "C"  void PunBehaviour_OnMasterClientSwitched_m1337745107 (PunBehaviour_t692890556 * __this, PhotonPlayer_t4120608827 * ___newMasterClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonCreateRoomFailed(System.Object[])
extern "C"  void PunBehaviour_OnPhotonCreateRoomFailed_m3693017420 (PunBehaviour_t692890556 * __this, ObjectU5BU5D_t3614634134* ___codeAndMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonJoinRoomFailed(System.Object[])
extern "C"  void PunBehaviour_OnPhotonJoinRoomFailed_m399667588 (PunBehaviour_t692890556 * __this, ObjectU5BU5D_t3614634134* ___codeAndMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnCreatedRoom()
extern "C"  void PunBehaviour_OnCreatedRoom_m3422892791 (PunBehaviour_t692890556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnJoinedLobby()
extern "C"  void PunBehaviour_OnJoinedLobby_m3218900193 (PunBehaviour_t692890556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnLeftLobby()
extern "C"  void PunBehaviour_OnLeftLobby_m3096731513 (PunBehaviour_t692890556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnFailedToConnectToPhoton(DisconnectCause)
extern "C"  void PunBehaviour_OnFailedToConnectToPhoton_m2109285760 (PunBehaviour_t692890556 * __this, int32_t ___cause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnDisconnectedFromPhoton()
extern "C"  void PunBehaviour_OnDisconnectedFromPhoton_m2924454873 (PunBehaviour_t692890556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnConnectionFail(DisconnectCause)
extern "C"  void PunBehaviour_OnConnectionFail_m644221481 (PunBehaviour_t692890556 * __this, int32_t ___cause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonInstantiate(PhotonMessageInfo)
extern "C"  void PunBehaviour_OnPhotonInstantiate_m3698076931 (PunBehaviour_t692890556 * __this, PhotonMessageInfo_t13590565  ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnReceivedRoomListUpdate()
extern "C"  void PunBehaviour_OnReceivedRoomListUpdate_m1320294335 (PunBehaviour_t692890556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnJoinedRoom()
extern "C"  void PunBehaviour_OnJoinedRoom_m784169158 (PunBehaviour_t692890556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonPlayerConnected(PhotonPlayer)
extern "C"  void PunBehaviour_OnPhotonPlayerConnected_m142751279 (PunBehaviour_t692890556 * __this, PhotonPlayer_t4120608827 * ___newPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonPlayerDisconnected(PhotonPlayer)
extern "C"  void PunBehaviour_OnPhotonPlayerDisconnected_m1243353581 (PunBehaviour_t692890556 * __this, PhotonPlayer_t4120608827 * ___otherPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonRandomJoinFailed(System.Object[])
extern "C"  void PunBehaviour_OnPhotonRandomJoinFailed_m1741981740 (PunBehaviour_t692890556 * __this, ObjectU5BU5D_t3614634134* ___codeAndMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnConnectedToMaster()
extern "C"  void PunBehaviour_OnConnectedToMaster_m69692582 (PunBehaviour_t692890556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonMaxCccuReached()
extern "C"  void PunBehaviour_OnPhotonMaxCccuReached_m3799954300 (PunBehaviour_t692890556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonCustomRoomPropertiesChanged(ExitGames.Client.Photon.Hashtable)
extern "C"  void PunBehaviour_OnPhotonCustomRoomPropertiesChanged_m3463206597 (PunBehaviour_t692890556 * __this, Hashtable_t995404622 * ___propertiesThatChanged0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnPhotonPlayerPropertiesChanged(System.Object[])
extern "C"  void PunBehaviour_OnPhotonPlayerPropertiesChanged_m1188806444 (PunBehaviour_t692890556 * __this, ObjectU5BU5D_t3614634134* ___playerAndUpdatedProps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnUpdatedFriendList()
extern "C"  void PunBehaviour_OnUpdatedFriendList_m4218633489 (PunBehaviour_t692890556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnCustomAuthenticationFailed(System.String)
extern "C"  void PunBehaviour_OnCustomAuthenticationFailed_m1799970864 (PunBehaviour_t692890556 * __this, String_t* ___debugMessage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnCustomAuthenticationResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void PunBehaviour_OnCustomAuthenticationResponse_m3634248499 (PunBehaviour_t692890556 * __this, Dictionary_2_t309261261 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnWebRpcResponse(ExitGames.Client.Photon.OperationResponse)
extern "C"  void PunBehaviour_OnWebRpcResponse_m3150402828 (PunBehaviour_t692890556 * __this, OperationResponse_t3648537128 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnOwnershipRequest(System.Object[])
extern "C"  void PunBehaviour_OnOwnershipRequest_m1120322158 (PunBehaviour_t692890556 * __this, ObjectU5BU5D_t3614634134* ___viewAndPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.PunBehaviour::OnLobbyStatisticsUpdate()
extern "C"  void PunBehaviour_OnLobbyStatisticsUpdate_m2769370008 (PunBehaviour_t692890556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
