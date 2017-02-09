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

// NetworkingPeer
struct NetworkingPeer_t3034011222;
// System.String
struct String_t;
// AuthenticationValues
struct AuthenticationValues_t1430961670;
// TypedLobby
struct TypedLobby_t3014596312;
// Room
struct Room_t1042398373;
// PhotonPlayer
struct PhotonPlayer_t4120608827;
// System.Collections.Generic.List`1<Region>
struct List_1_t990992504;
// System.String[]
struct StringU5BU5D_t1642385972;
// EnterRoomParams
struct EnterRoomParams_t2222988781;
// OpJoinRandomRoomParams
struct OpJoinRandomRoomParams_t449785843;
// System.Object
struct Il2CppObject;
// RaiseEventOptions
struct RaiseEventOptions_t565739090;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t995404622;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t3648537128;
// ExitGames.Client.Photon.EventData
struct EventData_t126381822;
// PhotonPlayer[]
struct PhotonPlayerU5BU5D_t818546810;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t2064209302;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t2275869610;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// PhotonView
struct PhotonView_t899863581;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP3211808698.h"
#include "AssemblyU2DCSharp_AuthenticationValues1430961670.h"
#include "AssemblyU2DCSharp_ServerConnection1155372161.h"
#include "AssemblyU2DCSharp_ClientState3876498872.h"
#include "AssemblyU2DCSharp_TypedLobby3014596312.h"
#include "AssemblyU2DCSharp_Room1042398373.h"
#include "AssemblyU2DCSharp_PhotonPlayer4120608827.h"
#include "AssemblyU2DCSharp_CloudRegionCode989201940.h"
#include "AssemblyU2DCSharp_EnterRoomParams2222988781.h"
#include "AssemblyU2DCSharp_OpJoinRandomRoomParams449785843.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_RaiseEventOptions565739090.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable995404622.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationRe3648537128.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_EventData126381822.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel980888449.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode2706638303.h"
#include "AssemblyU2DCSharp_PhotonNetworkingMessage846703697.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_PhotonView899863581.h"
#include "AssemblyU2DCSharp_PhotonTargets112131816.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"

// System.Void NetworkingPeer::.ctor(System.String,ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void NetworkingPeer__ctor_m2917563925 (NetworkingPeer_t3034011222 * __this, String_t* ___playername0, uint8_t ___connectionProtocol1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_AppVersion()
extern "C"  String_t* NetworkingPeer_get_AppVersion_m3735378508 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AuthenticationValues NetworkingPeer::get_AuthValues()
extern "C"  AuthenticationValues_t1430961670 * NetworkingPeer_get_AuthValues_m701171765 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_AuthValues(AuthenticationValues)
extern "C"  void NetworkingPeer_set_AuthValues_m3842622226 (NetworkingPeer_t3034011222 * __this, AuthenticationValues_t1430961670 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_TokenForInit()
extern "C"  String_t* NetworkingPeer_get_TokenForInit_m2039199661 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::get_IsUsingNameServer()
extern "C"  bool NetworkingPeer_get_IsUsingNameServer_m4219790712 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_IsUsingNameServer(System.Boolean)
extern "C"  void NetworkingPeer_set_IsUsingNameServer_m1532049951 (NetworkingPeer_t3034011222 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_NameServerAddress()
extern "C"  String_t* NetworkingPeer_get_NameServerAddress_m2349185003 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_MasterServerAddress()
extern "C"  String_t* NetworkingPeer_get_MasterServerAddress_m1496453918 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_MasterServerAddress(System.String)
extern "C"  void NetworkingPeer_set_MasterServerAddress_m987536119 (NetworkingPeer_t3034011222 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_GameServerAddress()
extern "C"  String_t* NetworkingPeer_get_GameServerAddress_m1708723922 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_GameServerAddress(System.String)
extern "C"  void NetworkingPeer_set_GameServerAddress_m561571641 (NetworkingPeer_t3034011222 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ServerConnection NetworkingPeer::get_Server()
extern "C"  int32_t NetworkingPeer_get_Server_m2542119871 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_Server(ServerConnection)
extern "C"  void NetworkingPeer_set_Server_m1794897994 (NetworkingPeer_t3034011222 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ClientState NetworkingPeer::get_State()
extern "C"  int32_t NetworkingPeer_get_State_m2187637616 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_State(ClientState)
extern "C"  void NetworkingPeer_set_State_m2528250171 (NetworkingPeer_t3034011222 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TypedLobby NetworkingPeer::get_lobby()
extern "C"  TypedLobby_t3014596312 * NetworkingPeer_get_lobby_m456383689 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_lobby(TypedLobby)
extern "C"  void NetworkingPeer_set_lobby_m1271968718 (NetworkingPeer_t3034011222 * __this, TypedLobby_t3014596312 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::get_requestLobbyStatistics()
extern "C"  bool NetworkingPeer_get_requestLobbyStatistics_m1360110982 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_PlayerName()
extern "C"  String_t* NetworkingPeer_get_PlayerName_m2155939619 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_PlayerName(System.String)
extern "C"  void NetworkingPeer_set_PlayerName_m2732884296 (NetworkingPeer_t3034011222 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Room NetworkingPeer::get_CurrentRoom()
extern "C"  Room_t1042398373 * NetworkingPeer_get_CurrentRoom_m2470936214 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_CurrentRoom(Room)
extern "C"  void NetworkingPeer_set_CurrentRoom_m2068148643 (NetworkingPeer_t3034011222 * __this, Room_t1042398373 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer NetworkingPeer::get_LocalPlayer()
extern "C"  PhotonPlayer_t4120608827 * NetworkingPeer_get_LocalPlayer_m3040022262 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_LocalPlayer(PhotonPlayer)
extern "C"  void NetworkingPeer_set_LocalPlayer_m3022183425 (NetworkingPeer_t3034011222 * __this, PhotonPlayer_t4120608827 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_PlayersOnMasterCount()
extern "C"  int32_t NetworkingPeer_get_PlayersOnMasterCount_m2954198222 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_PlayersOnMasterCount(System.Int32)
extern "C"  void NetworkingPeer_set_PlayersOnMasterCount_m4113808117 (NetworkingPeer_t3034011222 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_PlayersInRoomsCount()
extern "C"  int32_t NetworkingPeer_get_PlayersInRoomsCount_m2810907586 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_PlayersInRoomsCount(System.Int32)
extern "C"  void NetworkingPeer_set_PlayersInRoomsCount_m3911433307 (NetworkingPeer_t3034011222 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_RoomsCount()
extern "C"  int32_t NetworkingPeer_get_RoomsCount_m2003630399 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_RoomsCount(System.Int32)
extern "C"  void NetworkingPeer_set_RoomsCount_m1290796426 (NetworkingPeer_t3034011222 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_FriendListAge()
extern "C"  int32_t NetworkingPeer_get_FriendListAge_m187506283 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::get_IsAuthorizeSecretAvailable()
extern "C"  bool NetworkingPeer_get_IsAuthorizeSecretAvailable_m4251566640 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Region> NetworkingPeer::get_AvailableRegions()
extern "C"  List_1_t990992504 * NetworkingPeer_get_AvailableRegions_m1542892605 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_AvailableRegions(System.Collections.Generic.List`1<Region>)
extern "C"  void NetworkingPeer_set_AvailableRegions_m4250913318 (NetworkingPeer_t3034011222 * __this, List_1_t990992504 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CloudRegionCode NetworkingPeer::get_CloudRegion()
extern "C"  int32_t NetworkingPeer_get_CloudRegion_m1364584640 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_CloudRegion(CloudRegionCode)
extern "C"  void NetworkingPeer_set_CloudRegion_m3554802207 (NetworkingPeer_t3034011222 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_mMasterClientId()
extern "C"  int32_t NetworkingPeer_get_mMasterClientId_m3610850889 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mMasterClientId(System.Int32)
extern "C"  void NetworkingPeer_set_mMasterClientId_m3184255148 (NetworkingPeer_t3034011222 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::GetNameServerAddress()
extern "C"  String_t* NetworkingPeer_GetNameServerAddress_m1620661116 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::Connect(System.String,System.String)
extern "C"  bool NetworkingPeer_Connect_m370588673 (NetworkingPeer_t3034011222 * __this, String_t* ___serverAddress0, String_t* ___applicationName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::ReconnectToMaster()
extern "C"  bool NetworkingPeer_ReconnectToMaster_m35339421 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::ReconnectAndRejoin()
extern "C"  bool NetworkingPeer_ReconnectAndRejoin_m2633951216 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::Connect(System.String,ServerConnection)
extern "C"  bool NetworkingPeer_Connect_m3192884084 (NetworkingPeer_t3034011222 * __this, String_t* ___serverAddress0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::ConnectToNameServer()
extern "C"  bool NetworkingPeer_ConnectToNameServer_m3211366452 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::ConnectToRegionMaster(CloudRegionCode)
extern "C"  bool NetworkingPeer_ConnectToRegionMaster_m1876143704 (NetworkingPeer_t3034011222 * __this, int32_t ___region0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetupProtocol(ServerConnection)
extern "C"  void NetworkingPeer_SetupProtocol_m2331858125 (NetworkingPeer_t3034011222 * __this, int32_t ___serverType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::Disconnect()
extern "C"  void NetworkingPeer_Disconnect_m173380239 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::CallAuthenticate()
extern "C"  bool NetworkingPeer_CallAuthenticate_m260639718 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::DisconnectToReconnect()
extern "C"  void NetworkingPeer_DisconnectToReconnect_m1002247521 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::GetRegions()
extern "C"  bool NetworkingPeer_GetRegions_m1437593978 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpFindFriends(System.String[])
extern "C"  bool NetworkingPeer_OpFindFriends_m1182727676 (NetworkingPeer_t3034011222 * __this, StringU5BU5D_t1642385972* ___friendsToFind0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpCreateGame(EnterRoomParams)
extern "C"  bool NetworkingPeer_OpCreateGame_m945438925 (NetworkingPeer_t3034011222 * __this, EnterRoomParams_t2222988781 * ___enterRoomParams0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpJoinRoom(EnterRoomParams)
extern "C"  bool NetworkingPeer_OpJoinRoom_m3474026438 (NetworkingPeer_t3034011222 * __this, EnterRoomParams_t2222988781 * ___opParams0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpJoinRandomRoom(OpJoinRandomRoomParams)
extern "C"  bool NetworkingPeer_OpJoinRandomRoom_m518739479 (NetworkingPeer_t3034011222 * __this, OpJoinRandomRoomParams_t449785843 * ___opJoinRandomRoomParams0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpLeave()
extern "C"  bool NetworkingPeer_OpLeave_m2708131863 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpRaiseEvent(System.Byte,System.Object,System.Boolean,RaiseEventOptions)
extern "C"  bool NetworkingPeer_OpRaiseEvent_m1017633486 (NetworkingPeer_t3034011222 * __this, uint8_t ___eventCode0, Il2CppObject * ___customEventContent1, bool ___sendReliable2, RaiseEventOptions_t565739090 * ___raiseEventOptions3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ReadoutProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,System.Int32)
extern "C"  void NetworkingPeer_ReadoutProperties_m1522950491 (NetworkingPeer_t3034011222 * __this, Hashtable_t995404622 * ___gameProperties0, Hashtable_t995404622 * ___pActorProperties1, int32_t ___targetActorNr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable NetworkingPeer::ReadoutPropertiesForActorNr(ExitGames.Client.Photon.Hashtable,System.Int32)
extern "C"  Hashtable_t995404622 * NetworkingPeer_ReadoutPropertiesForActorNr_m3788738282 (NetworkingPeer_t3034011222 * __this, Hashtable_t995404622 * ___actorProperties0, int32_t ___actorNr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ChangeLocalID(System.Int32)
extern "C"  void NetworkingPeer_ChangeLocalID_m749693970 (NetworkingPeer_t3034011222 * __this, int32_t ___newID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LeftLobbyCleanup()
extern "C"  void NetworkingPeer_LeftLobbyCleanup_m2569729300 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LeftRoomCleanup()
extern "C"  void NetworkingPeer_LeftRoomCleanup_m3225674791 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LocalCleanupAnythingInstantiated(System.Boolean)
extern "C"  void NetworkingPeer_LocalCleanupAnythingInstantiated_m2817531241 (NetworkingPeer_t3034011222 * __this, bool ___destroyInstantiatedGameObjects0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::GameEnteredOnGameServer(ExitGames.Client.Photon.OperationResponse)
extern "C"  void NetworkingPeer_GameEnteredOnGameServer_m2827288734 (NetworkingPeer_t3034011222 * __this, OperationResponse_t3648537128 * ___operationResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::AddNewPlayer(System.Int32,PhotonPlayer)
extern "C"  void NetworkingPeer_AddNewPlayer_m1298418857 (NetworkingPeer_t3034011222 * __this, int32_t ___ID0, PhotonPlayer_t4120608827 * ___player1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemovePlayer(System.Int32,PhotonPlayer)
extern "C"  void NetworkingPeer_RemovePlayer_m2270692748 (NetworkingPeer_t3034011222 * __this, int32_t ___ID0, PhotonPlayer_t4120608827 * ___player1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RebuildPlayerListCopies()
extern "C"  void NetworkingPeer_RebuildPlayerListCopies_m1770856082 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ResetPhotonViewsOnSerialize()
extern "C"  void NetworkingPeer_ResetPhotonViewsOnSerialize_m2855974153 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::HandleEventLeave(System.Int32,ExitGames.Client.Photon.EventData)
extern "C"  void NetworkingPeer_HandleEventLeave_m2205614259 (NetworkingPeer_t3034011222 * __this, int32_t ___actorID0, EventData_t126381822 * ___evLeave1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::CheckMasterClient(System.Int32)
extern "C"  void NetworkingPeer_CheckMasterClient_m2421029653 (NetworkingPeer_t3034011222 * __this, int32_t ___leavingPlayerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::UpdateMasterClient()
extern "C"  void NetworkingPeer_UpdateMasterClient_m192064655 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::ReturnLowestPlayerId(PhotonPlayer[],System.Int32)
extern "C"  int32_t NetworkingPeer_ReturnLowestPlayerId_m2966762373 (Il2CppObject * __this /* static, unused */, PhotonPlayerU5BU5D_t818546810* ___players0, int32_t ___playerIdToIgnore1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::SetMasterClient(System.Int32,System.Boolean)
extern "C"  bool NetworkingPeer_SetMasterClient_m2605432426 (NetworkingPeer_t3034011222 * __this, int32_t ___playerId0, bool ___sync1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::SetMasterClient(System.Int32)
extern "C"  bool NetworkingPeer_SetMasterClient_m3812670745 (NetworkingPeer_t3034011222 * __this, int32_t ___nextMasterId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer NetworkingPeer::GetPlayerWithId(System.Int32)
extern "C"  PhotonPlayer_t4120608827 * NetworkingPeer_GetPlayerWithId_m3960171314 (NetworkingPeer_t3034011222 * __this, int32_t ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendPlayerName()
extern "C"  void NetworkingPeer_SendPlayerName_m3023105971 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable NetworkingPeer::GetLocalActorProperties()
extern "C"  Hashtable_t995404622 * NetworkingPeer_GetLocalActorProperties_m2406847541 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C"  void NetworkingPeer_DebugReturn_m773411933 (NetworkingPeer_t3034011222 * __this, uint8_t ___level0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnOperationResponse(ExitGames.Client.Photon.OperationResponse)
extern "C"  void NetworkingPeer_OnOperationResponse_m2581349582 (NetworkingPeer_t3034011222 * __this, OperationResponse_t3648537128 * ___operationResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnStatusChanged(ExitGames.Client.Photon.StatusCode)
extern "C"  void NetworkingPeer_OnStatusChanged_m3566241605 (NetworkingPeer_t3034011222 * __this, int32_t ___statusCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnEvent(ExitGames.Client.Photon.EventData)
extern "C"  void NetworkingPeer_OnEvent_m531141630 (NetworkingPeer_t3034011222 * __this, EventData_t126381822 * ___photonEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnMessage(System.Object)
extern "C"  void NetworkingPeer_OnMessage_m819746347 (NetworkingPeer_t3034011222 * __this, Il2CppObject * ___messages0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetupEncryption(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>)
extern "C"  void NetworkingPeer_SetupEncryption_m1349874315 (NetworkingPeer_t3034011222 * __this, Dictionary_2_t2064209302 * ___encryptionData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::UpdatedActorList(System.Int32[])
extern "C"  void NetworkingPeer_UpdatedActorList_m3134326376 (NetworkingPeer_t3034011222 * __this, Int32U5BU5D_t3030399641* ___actorsInRoom0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendVacantViewIds()
extern "C"  void NetworkingPeer_SendVacantViewIds_m1311052251 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendMonoMessage(PhotonNetworkingMessage,System.Object[])
extern "C"  void NetworkingPeer_SendMonoMessage_m1390750886 (Il2CppObject * __this /* static, unused */, int32_t ___methodString0, ObjectU5BU5D_t3614634134* ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ExecuteRpc(ExitGames.Client.Photon.Hashtable,PhotonPlayer)
extern "C"  void NetworkingPeer_ExecuteRpc_m44945020 (NetworkingPeer_t3034011222 * __this, Hashtable_t995404622 * ___rpcData0, PhotonPlayer_t4120608827 * ___sender1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::CheckTypeMatch(System.Reflection.ParameterInfo[],System.Type[])
extern "C"  bool NetworkingPeer_CheckTypeMatch_m3863164080 (NetworkingPeer_t3034011222 * __this, ParameterInfoU5BU5D_t2275869610* ___methodParameters0, TypeU5BU5D_t1664964607* ___callParameterTypes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable NetworkingPeer::SendInstantiate(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,System.Int32[],System.Object[],System.Boolean)
extern "C"  Hashtable_t995404622 * NetworkingPeer_SendInstantiate_m1698655627 (NetworkingPeer_t3034011222 * __this, String_t* ___prefabName0, Vector3_t2243707580  ___position1, Quaternion_t4030073918  ___rotation2, int32_t ___group3, Int32U5BU5D_t3030399641* ___viewIDs4, ObjectU5BU5D_t3614634134* ___data5, bool ___isGlobalObject6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NetworkingPeer::DoInstantiate(ExitGames.Client.Photon.Hashtable,PhotonPlayer,UnityEngine.GameObject)
extern "C"  GameObject_t1756533147 * NetworkingPeer_DoInstantiate_m574637794 (NetworkingPeer_t3034011222 * __this, Hashtable_t995404622 * ___evData0, PhotonPlayer_t4120608827 * ___photonPlayer1, GameObject_t1756533147 * ___resourceGameObject2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::StoreInstantiationData(System.Int32,System.Object[])
extern "C"  void NetworkingPeer_StoreInstantiationData_m3207682040 (NetworkingPeer_t3034011222 * __this, int32_t ___instantiationId0, ObjectU5BU5D_t3614634134* ___instantiationData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] NetworkingPeer::FetchInstantiationData(System.Int32)
extern "C"  ObjectU5BU5D_t3614634134* NetworkingPeer_FetchInstantiationData_m2412962154 (NetworkingPeer_t3034011222 * __this, int32_t ___instantiationId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemoveInstantiationData(System.Int32)
extern "C"  void NetworkingPeer_RemoveInstantiationData_m343327351 (NetworkingPeer_t3034011222 * __this, int32_t ___instantiationId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::DestroyPlayerObjects(System.Int32,System.Boolean)
extern "C"  void NetworkingPeer_DestroyPlayerObjects_m1377816672 (NetworkingPeer_t3034011222 * __this, int32_t ___playerId0, bool ___localOnly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::DestroyAll(System.Boolean)
extern "C"  void NetworkingPeer_DestroyAll_m3664802239 (NetworkingPeer_t3034011222 * __this, bool ___localOnly0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemoveInstantiatedGO(UnityEngine.GameObject,System.Boolean)
extern "C"  void NetworkingPeer_RemoveInstantiatedGO_m1987133848 (NetworkingPeer_t3034011222 * __this, GameObject_t1756533147 * ___go0, bool ___localOnly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ServerCleanInstantiateAndDestroy(System.Int32,System.Int32,System.Boolean)
extern "C"  void NetworkingPeer_ServerCleanInstantiateAndDestroy_m1133901979 (NetworkingPeer_t3034011222 * __this, int32_t ___instantiateId0, int32_t ___creatorId1, bool ___isRuntimeInstantiated2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendDestroyOfPlayer(System.Int32)
extern "C"  void NetworkingPeer_SendDestroyOfPlayer_m3569998448 (NetworkingPeer_t3034011222 * __this, int32_t ___actorNr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendDestroyOfAll()
extern "C"  void NetworkingPeer_SendDestroyOfAll_m3778379265 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpRemoveFromServerInstantiationsOfPlayer(System.Int32)
extern "C"  void NetworkingPeer_OpRemoveFromServerInstantiationsOfPlayer_m2419930834 (NetworkingPeer_t3034011222 * __this, int32_t ___actorNr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RequestOwnership(System.Int32,System.Int32)
extern "C"  void NetworkingPeer_RequestOwnership_m3858525709 (NetworkingPeer_t3034011222 * __this, int32_t ___viewID0, int32_t ___fromOwner1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::TransferOwnership(System.Int32,System.Int32)
extern "C"  void NetworkingPeer_TransferOwnership_m1521097627 (NetworkingPeer_t3034011222 * __this, int32_t ___viewID0, int32_t ___playerID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::LocalCleanPhotonView(PhotonView)
extern "C"  bool NetworkingPeer_LocalCleanPhotonView_m1831024871 (NetworkingPeer_t3034011222 * __this, PhotonView_t899863581 * ___view0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView NetworkingPeer::GetPhotonView(System.Int32)
extern "C"  PhotonView_t899863581 * NetworkingPeer_GetPhotonView_m1302393899 (NetworkingPeer_t3034011222 * __this, int32_t ___viewID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RegisterPhotonView(PhotonView)
extern "C"  void NetworkingPeer_RegisterPhotonView_m453740214 (NetworkingPeer_t3034011222 * __this, PhotonView_t899863581 * ___netView0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpCleanRpcBuffer(System.Int32)
extern "C"  void NetworkingPeer_OpCleanRpcBuffer_m3357762889 (NetworkingPeer_t3034011222 * __this, int32_t ___actorNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpRemoveCompleteCacheOfPlayer(System.Int32)
extern "C"  void NetworkingPeer_OpRemoveCompleteCacheOfPlayer_m1358671486 (NetworkingPeer_t3034011222 * __this, int32_t ___actorNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpRemoveCompleteCache()
extern "C"  void NetworkingPeer_OpRemoveCompleteCache_m1019665383 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemoveCacheOfLeftPlayers()
extern "C"  void NetworkingPeer_RemoveCacheOfLeftPlayers_m813486923 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::CleanRpcBufferIfMine(PhotonView)
extern "C"  void NetworkingPeer_CleanRpcBufferIfMine_m3991356826 (NetworkingPeer_t3034011222 * __this, PhotonView_t899863581 * ___view0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpCleanRpcBuffer(PhotonView)
extern "C"  void NetworkingPeer_OpCleanRpcBuffer_m2680002127 (NetworkingPeer_t3034011222 * __this, PhotonView_t899863581 * ___view0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemoveRPCsInGroup(System.Int32)
extern "C"  void NetworkingPeer_RemoveRPCsInGroup_m3955067154 (NetworkingPeer_t3034011222 * __this, int32_t ___group0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetLevelPrefix(System.Int16)
extern "C"  void NetworkingPeer_SetLevelPrefix_m2394509776 (NetworkingPeer_t3034011222 * __this, int16_t ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RPC(PhotonView,System.String,PhotonTargets,PhotonPlayer,System.Boolean,System.Object[])
extern "C"  void NetworkingPeer_RPC_m396657009 (NetworkingPeer_t3034011222 * __this, PhotonView_t899863581 * ___view0, String_t* ___methodName1, int32_t ___target2, PhotonPlayer_t4120608827 * ___player3, bool ___encrypt4, ObjectU5BU5D_t3614634134* ___parameters5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetReceivingEnabled(System.Int32,System.Boolean)
extern "C"  void NetworkingPeer_SetReceivingEnabled_m559248578 (NetworkingPeer_t3034011222 * __this, int32_t ___group0, bool ___enabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetReceivingEnabled(System.Int32[],System.Int32[])
extern "C"  void NetworkingPeer_SetReceivingEnabled_m2294436786 (NetworkingPeer_t3034011222 * __this, Int32U5BU5D_t3030399641* ___enableGroups0, Int32U5BU5D_t3030399641* ___disableGroups1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetSendingEnabled(System.Int32,System.Boolean)
extern "C"  void NetworkingPeer_SetSendingEnabled_m1033981886 (NetworkingPeer_t3034011222 * __this, int32_t ___group0, bool ___enabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetSendingEnabled(System.Int32[],System.Int32[])
extern "C"  void NetworkingPeer_SetSendingEnabled_m3798735534 (NetworkingPeer_t3034011222 * __this, Int32U5BU5D_t3030399641* ___enableGroups0, Int32U5BU5D_t3030399641* ___disableGroups1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::NewSceneLoaded()
extern "C"  void NetworkingPeer_NewSceneLoaded_m2942932058 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RunViewUpdate()
extern "C"  void NetworkingPeer_RunViewUpdate_m2507067736 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] NetworkingPeer::OnSerializeWrite(PhotonView)
extern "C"  ObjectU5BU5D_t3614634134* NetworkingPeer_OnSerializeWrite_m1683398269 (NetworkingPeer_t3034011222 * __this, PhotonView_t899863581 * ___view0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnSerializeRead(System.Object[],PhotonPlayer,System.Int32,System.Int16)
extern "C"  void NetworkingPeer_OnSerializeRead_m3592718373 (NetworkingPeer_t3034011222 * __this, ObjectU5BU5D_t3614634134* ___data0, PhotonPlayer_t4120608827 * ___sender1, int32_t ___networkTime2, int16_t ___correctPrefix3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] NetworkingPeer::DeltaCompressionWrite(System.Object[],System.Object[])
extern "C"  ObjectU5BU5D_t3614634134* NetworkingPeer_DeltaCompressionWrite_m3637438335 (NetworkingPeer_t3034011222 * __this, ObjectU5BU5D_t3614634134* ___previousContent0, ObjectU5BU5D_t3614634134* ___currentContent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] NetworkingPeer::DeltaCompressionRead(System.Object[],System.Object[])
extern "C"  ObjectU5BU5D_t3614634134* NetworkingPeer_DeltaCompressionRead_m645822604 (NetworkingPeer_t3034011222 * __this, ObjectU5BU5D_t3614634134* ___lastOnSerializeDataReceived0, ObjectU5BU5D_t3614634134* ___incomingData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::AlmostEquals(System.Object[],System.Object[])
extern "C"  bool NetworkingPeer_AlmostEquals_m1921760534 (NetworkingPeer_t3034011222 * __this, ObjectU5BU5D_t3614634134* ___lastData0, ObjectU5BU5D_t3614634134* ___currentContent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::AlmostEquals(System.Object,System.Object)
extern "C"  bool NetworkingPeer_AlmostEquals_m1841146390 (NetworkingPeer_t3034011222 * __this, Il2CppObject * ___one0, Il2CppObject * ___two1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::GetMethod(UnityEngine.MonoBehaviour,System.String,System.Reflection.MethodInfo&)
extern "C"  bool NetworkingPeer_GetMethod_m2483547892 (Il2CppObject * __this /* static, unused */, MonoBehaviour_t1158329972 * ___monob0, String_t* ___methodType1, MethodInfo_t ** ___mi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LoadLevelIfSynced()
extern "C"  void NetworkingPeer_LoadLevelIfSynced_m2896104622 (NetworkingPeer_t3034011222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetLevelInPropsIfSynced(System.Object)
extern "C"  void NetworkingPeer_SetLevelInPropsIfSynced_m1465780841 (NetworkingPeer_t3034011222 * __this, Il2CppObject * ___levelId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetApp(System.String,System.String)
extern "C"  void NetworkingPeer_SetApp_m138895624 (NetworkingPeer_t3034011222 * __this, String_t* ___appId0, String_t* ___gameVersion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::WebRpc(System.String,System.Object)
extern "C"  bool NetworkingPeer_WebRpc_m1468176554 (NetworkingPeer_t3034011222 * __this, String_t* ___uriPath0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::.cctor()
extern "C"  void NetworkingPeer__cctor_m2078544848 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
