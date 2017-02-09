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

// System.String
struct String_t;
// AuthenticationValues
struct AuthenticationValues_t1430961670;
// Room
struct Room_t1042398373;
// PhotonPlayer
struct PhotonPlayer_t4120608827;
// PhotonPlayer[]
struct PhotonPlayerU5BU5D_t818546810;
// System.Collections.Generic.List`1<FriendInfo>
struct List_1_t3252793716;
// IPunPrefabPool
struct IPunPrefabPool_t2617987714;
// System.Collections.Generic.List`1<TypedLobbyInfo>
struct List_1_t3471576424;
// TypedLobby
struct TypedLobby_t3014596312;
// System.String[]
struct StringU5BU5D_t1642385972;
// RoomOptions
struct RoomOptions_t590971513;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t995404622;
// RoomInfo[]
struct RoomInfoU5BU5D_t3672612454;
// System.Object
struct Il2CppObject;
// RaiseEventOptions
struct RaiseEventOptions_t565739090;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// PhotonView
struct PhotonView_t899863581;
// System.Type
struct Type_t;
// System.Collections.Generic.HashSet`1<UnityEngine.GameObject>
struct HashSet_1_t89994001;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_ConnectionState4147259307.h"
#include "AssemblyU2DCSharp_ClientState3876498872.h"
#include "AssemblyU2DCSharp_ServerConnection1155372161.h"
#include "AssemblyU2DCSharp_AuthenticationValues1430961670.h"
#include "AssemblyU2DCSharp_TypedLobby3014596312.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP3211808698.h"
#include "AssemblyU2DCSharp_CloudRegionCode989201940.h"
#include "AssemblyU2DCSharp_RoomOptions590971513.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable995404622.h"
#include "AssemblyU2DCSharp_MatchmakingMode160361017.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_RaiseEventOptions565739090.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "AssemblyU2DCSharp_PhotonPlayer4120608827.h"
#include "AssemblyU2DCSharp_PhotonView899863581.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_PhotonTargets112131816.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void PhotonNetwork::.cctor()
extern "C"  void PhotonNetwork__cctor_m454421086 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonNetwork::get_gameVersion()
extern "C"  String_t* PhotonNetwork_get_gameVersion_m1933068691 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_gameVersion(System.String)
extern "C"  void PhotonNetwork_set_gameVersion_m546537952 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonNetwork::get_ServerAddress()
extern "C"  String_t* PhotonNetwork_get_ServerAddress_m3348553152 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_connected()
extern "C"  bool PhotonNetwork_get_connected_m3005645129 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_connecting()
extern "C"  bool PhotonNetwork_get_connecting_m1558575294 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_connectedAndReady()
extern "C"  bool PhotonNetwork_get_connectedAndReady_m4226012097 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ConnectionState PhotonNetwork::get_connectionState()
extern "C"  int32_t PhotonNetwork_get_connectionState_m1604553297 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ClientState PhotonNetwork::get_connectionStateDetailed()
extern "C"  int32_t PhotonNetwork_get_connectionStateDetailed_m3124134548 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ServerConnection PhotonNetwork::get_Server()
extern "C"  int32_t PhotonNetwork_get_Server_m4214471575 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AuthenticationValues PhotonNetwork::get_AuthValues()
extern "C"  AuthenticationValues_t1430961670 * PhotonNetwork_get_AuthValues_m1131106877 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_AuthValues(AuthenticationValues)
extern "C"  void PhotonNetwork_set_AuthValues_m810492072 (Il2CppObject * __this /* static, unused */, AuthenticationValues_t1430961670 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Room PhotonNetwork::get_room()
extern "C"  Room_t1042398373 * PhotonNetwork_get_room_m1295242937 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonNetwork::get_player()
extern "C"  PhotonPlayer_t4120608827 * PhotonNetwork_get_player_m1618354671 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonNetwork::get_masterClient()
extern "C"  PhotonPlayer_t4120608827 * PhotonNetwork_get_masterClient_m404079757 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonNetwork::get_playerName()
extern "C"  String_t* PhotonNetwork_get_playerName_m902920967 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_playerName(System.String)
extern "C"  void PhotonNetwork_set_playerName_m2546567654 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer[] PhotonNetwork::get_playerList()
extern "C"  PhotonPlayerU5BU5D_t818546810* PhotonNetwork_get_playerList_m308562995 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer[] PhotonNetwork::get_otherPlayers()
extern "C"  PhotonPlayerU5BU5D_t818546810* PhotonNetwork_get_otherPlayers_m2269380440 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<FriendInfo> PhotonNetwork::get_Friends()
extern "C"  List_1_t3252793716 * PhotonNetwork_get_Friends_m314415808 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_Friends(System.Collections.Generic.List`1<FriendInfo>)
extern "C"  void PhotonNetwork_set_Friends_m1223498553 (Il2CppObject * __this /* static, unused */, List_1_t3252793716 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_FriendsListAge()
extern "C"  int32_t PhotonNetwork_get_FriendsListAge_m1650243768 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IPunPrefabPool PhotonNetwork::get_PrefabPool()
extern "C"  Il2CppObject * PhotonNetwork_get_PrefabPool_m2895206823 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_PrefabPool(IPunPrefabPool)
extern "C"  void PhotonNetwork_set_PrefabPool_m3538130200 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_offlineMode()
extern "C"  bool PhotonNetwork_get_offlineMode_m2945344298 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_offlineMode(System.Boolean)
extern "C"  void PhotonNetwork_set_offlineMode_m3091678619 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_automaticallySyncScene()
extern "C"  bool PhotonNetwork_get_automaticallySyncScene_m3875811090 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_automaticallySyncScene(System.Boolean)
extern "C"  void PhotonNetwork_set_automaticallySyncScene_m3714371113 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_autoCleanUpPlayerObjects()
extern "C"  bool PhotonNetwork_get_autoCleanUpPlayerObjects_m1215772824 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_autoCleanUpPlayerObjects(System.Boolean)
extern "C"  void PhotonNetwork_set_autoCleanUpPlayerObjects_m2055521043 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_autoJoinLobby()
extern "C"  bool PhotonNetwork_get_autoJoinLobby_m3570021741 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_autoJoinLobby(System.Boolean)
extern "C"  void PhotonNetwork_set_autoJoinLobby_m2503863288 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_EnableLobbyStatistics()
extern "C"  bool PhotonNetwork_get_EnableLobbyStatistics_m577264944 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_EnableLobbyStatistics(System.Boolean)
extern "C"  void PhotonNetwork_set_EnableLobbyStatistics_m12341771 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<TypedLobbyInfo> PhotonNetwork::get_LobbyStatistics()
extern "C"  List_1_t3471576424 * PhotonNetwork_get_LobbyStatistics_m1583393890 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_LobbyStatistics(System.Collections.Generic.List`1<TypedLobbyInfo>)
extern "C"  void PhotonNetwork_set_LobbyStatistics_m1254638783 (Il2CppObject * __this /* static, unused */, List_1_t3471576424 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_insideLobby()
extern "C"  bool PhotonNetwork_get_insideLobby_m2161191826 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TypedLobby PhotonNetwork::get_lobby()
extern "C"  TypedLobby_t3014596312 * PhotonNetwork_get_lobby_m3317606421 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_lobby(TypedLobby)
extern "C"  void PhotonNetwork_set_lobby_m516185756 (Il2CppObject * __this /* static, unused */, TypedLobby_t3014596312 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_sendRate()
extern "C"  int32_t PhotonNetwork_get_sendRate_m790946900 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_sendRate(System.Int32)
extern "C"  void PhotonNetwork_set_sendRate_m1247018533 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_sendRateOnSerialize()
extern "C"  int32_t PhotonNetwork_get_sendRateOnSerialize_m3953993905 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_sendRateOnSerialize(System.Int32)
extern "C"  void PhotonNetwork_set_sendRateOnSerialize_m2468183664 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_isMessageQueueRunning()
extern "C"  bool PhotonNetwork_get_isMessageQueueRunning_m622772029 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_isMessageQueueRunning(System.Boolean)
extern "C"  void PhotonNetwork_set_isMessageQueueRunning_m389545512 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_unreliableCommandsLimit()
extern "C"  int32_t PhotonNetwork_get_unreliableCommandsLimit_m1991592104 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_unreliableCommandsLimit(System.Int32)
extern "C"  void PhotonNetwork_set_unreliableCommandsLimit_m2910799113 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double PhotonNetwork::get_time()
extern "C"  double PhotonNetwork_get_time_m990205952 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_ServerTimestamp()
extern "C"  int32_t PhotonNetwork_get_ServerTimestamp_m3991372575 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_isMasterClient()
extern "C"  bool PhotonNetwork_get_isMasterClient_m2660608337 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_inRoom()
extern "C"  bool PhotonNetwork_get_inRoom_m986349412 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_isNonMasterClientInRoom()
extern "C"  bool PhotonNetwork_get_isNonMasterClientInRoom_m2654827036 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_countOfPlayersOnMaster()
extern "C"  int32_t PhotonNetwork_get_countOfPlayersOnMaster_m2123540567 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_countOfPlayersInRooms()
extern "C"  int32_t PhotonNetwork_get_countOfPlayersInRooms_m2654643473 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_countOfPlayers()
extern "C"  int32_t PhotonNetwork_get_countOfPlayers_m685078168 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_countOfRooms()
extern "C"  int32_t PhotonNetwork_get_countOfRooms_m1146773990 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_NetworkStatisticsEnabled()
extern "C"  bool PhotonNetwork_get_NetworkStatisticsEnabled_m1497638422 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_NetworkStatisticsEnabled(System.Boolean)
extern "C"  void PhotonNetwork_set_NetworkStatisticsEnabled_m2977283099 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_ResentReliableCommands()
extern "C"  int32_t PhotonNetwork_get_ResentReliableCommands_m2785391799 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_CrcCheckEnabled()
extern "C"  bool PhotonNetwork_get_CrcCheckEnabled_m319367407 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_CrcCheckEnabled(System.Boolean)
extern "C"  void PhotonNetwork_set_CrcCheckEnabled_m2840510510 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_PacketLossByCrcCheck()
extern "C"  int32_t PhotonNetwork_get_PacketLossByCrcCheck_m1616483412 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_MaxResendsBeforeDisconnect()
extern "C"  int32_t PhotonNetwork_get_MaxResendsBeforeDisconnect_m3598959957 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_MaxResendsBeforeDisconnect(System.Int32)
extern "C"  void PhotonNetwork_set_MaxResendsBeforeDisconnect_m2249551476 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_QuickResends()
extern "C"  int32_t PhotonNetwork_get_QuickResends_m899751433 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_QuickResends(System.Int32)
extern "C"  void PhotonNetwork_set_QuickResends_m540373638 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SwitchToProtocol(ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void PhotonNetwork_SwitchToProtocol_m3050736488 (Il2CppObject * __this /* static, unused */, uint8_t ___cp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::ConnectUsingSettings(System.String)
extern "C"  bool PhotonNetwork_ConnectUsingSettings_m3483314744 (Il2CppObject * __this /* static, unused */, String_t* ___gameVersion0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::ConnectToMaster(System.String,System.Int32,System.String,System.String)
extern "C"  bool PhotonNetwork_ConnectToMaster_m735337885 (Il2CppObject * __this /* static, unused */, String_t* ___masterServerAddress0, int32_t ___port1, String_t* ___appID2, String_t* ___gameVersion3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::Reconnect()
extern "C"  bool PhotonNetwork_Reconnect_m4220033740 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::ReconnectAndRejoin()
extern "C"  bool PhotonNetwork_ReconnectAndRejoin_m3316851678 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::ConnectToBestCloudServer(System.String)
extern "C"  bool PhotonNetwork_ConnectToBestCloudServer_m1118146470 (Il2CppObject * __this /* static, unused */, String_t* ___gameVersion0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::ConnectToRegion(CloudRegionCode,System.String)
extern "C"  bool PhotonNetwork_ConnectToRegion_m3403656020 (Il2CppObject * __this /* static, unused */, int32_t ___region0, String_t* ___gameVersion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::OverrideBestCloudServer(CloudRegionCode)
extern "C"  void PhotonNetwork_OverrideBestCloudServer_m2119809855 (Il2CppObject * __this /* static, unused */, int32_t ___region0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RefreshCloudServerRating()
extern "C"  void PhotonNetwork_RefreshCloudServerRating_m4036131817 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::NetworkStatisticsReset()
extern "C"  void PhotonNetwork_NetworkStatisticsReset_m3791501353 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonNetwork::NetworkStatisticsToString()
extern "C"  String_t* PhotonNetwork_NetworkStatisticsToString_m3347718571 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::InitializeSecurity()
extern "C"  void PhotonNetwork_InitializeSecurity_m4073435037 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::VerifyCanUseNetwork()
extern "C"  bool PhotonNetwork_VerifyCanUseNetwork_m3647783669 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::Disconnect()
extern "C"  void PhotonNetwork_Disconnect_m4149758295 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::FindFriends(System.String[])
extern "C"  bool PhotonNetwork_FindFriends_m202717167 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___friendsToFind0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::CreateRoom(System.String)
extern "C"  bool PhotonNetwork_CreateRoom_m2371956056 (Il2CppObject * __this /* static, unused */, String_t* ___roomName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::CreateRoom(System.String,RoomOptions,TypedLobby)
extern "C"  bool PhotonNetwork_CreateRoom_m1629475167 (Il2CppObject * __this /* static, unused */, String_t* ___roomName0, RoomOptions_t590971513 * ___roomOptions1, TypedLobby_t3014596312 * ___typedLobby2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::CreateRoom(System.String,RoomOptions,TypedLobby,System.String[])
extern "C"  bool PhotonNetwork_CreateRoom_m626881691 (Il2CppObject * __this /* static, unused */, String_t* ___roomName0, RoomOptions_t590971513 * ___roomOptions1, TypedLobby_t3014596312 * ___typedLobby2, StringU5BU5D_t1642385972* ___expectedUsers3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinRoom(System.String)
extern "C"  bool PhotonNetwork_JoinRoom_m2121519708 (Il2CppObject * __this /* static, unused */, String_t* ___roomName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinRoom(System.String,System.String[])
extern "C"  bool PhotonNetwork_JoinRoom_m190864632 (Il2CppObject * __this /* static, unused */, String_t* ___roomName0, StringU5BU5D_t1642385972* ___expectedUsers1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinOrCreateRoom(System.String,RoomOptions,TypedLobby)
extern "C"  bool PhotonNetwork_JoinOrCreateRoom_m4223247928 (Il2CppObject * __this /* static, unused */, String_t* ___roomName0, RoomOptions_t590971513 * ___roomOptions1, TypedLobby_t3014596312 * ___typedLobby2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinOrCreateRoom(System.String,RoomOptions,TypedLobby,System.String[])
extern "C"  bool PhotonNetwork_JoinOrCreateRoom_m3963186892 (Il2CppObject * __this /* static, unused */, String_t* ___roomName0, RoomOptions_t590971513 * ___roomOptions1, TypedLobby_t3014596312 * ___typedLobby2, StringU5BU5D_t1642385972* ___expectedUsers3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinRandomRoom()
extern "C"  bool PhotonNetwork_JoinRandomRoom_m1151644737 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinRandomRoom(ExitGames.Client.Photon.Hashtable,System.Byte)
extern "C"  bool PhotonNetwork_JoinRandomRoom_m458347434 (Il2CppObject * __this /* static, unused */, Hashtable_t995404622 * ___expectedCustomRoomProperties0, uint8_t ___expectedMaxPlayers1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinRandomRoom(ExitGames.Client.Photon.Hashtable,System.Byte,MatchmakingMode,TypedLobby,System.String,System.String[])
extern "C"  bool PhotonNetwork_JoinRandomRoom_m921559447 (Il2CppObject * __this /* static, unused */, Hashtable_t995404622 * ___expectedCustomRoomProperties0, uint8_t ___expectedMaxPlayers1, uint8_t ___matchingType2, TypedLobby_t3014596312 * ___typedLobby3, String_t* ___sqlLobbyFilter4, StringU5BU5D_t1642385972* ___expectedUsers5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::ReJoinRoom(System.String)
extern "C"  bool PhotonNetwork_ReJoinRoom_m813731135 (Il2CppObject * __this /* static, unused */, String_t* ___roomName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::EnterOfflineRoom(System.String,RoomOptions,System.Boolean)
extern "C"  void PhotonNetwork_EnterOfflineRoom_m440642923 (Il2CppObject * __this /* static, unused */, String_t* ___roomName0, RoomOptions_t590971513 * ___roomOptions1, bool ___createdRoom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinLobby()
extern "C"  bool PhotonNetwork_JoinLobby_m411737487 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinLobby(TypedLobby)
extern "C"  bool PhotonNetwork_JoinLobby_m1494437781 (Il2CppObject * __this /* static, unused */, TypedLobby_t3014596312 * ___typedLobby0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::LeaveLobby()
extern "C"  bool PhotonNetwork_LeaveLobby_m4031837948 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::LeaveRoom()
extern "C"  bool PhotonNetwork_LeaveRoom_m3013279627 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// RoomInfo[] PhotonNetwork::GetRoomList()
extern "C"  RoomInfoU5BU5D_t3672612454* PhotonNetwork_GetRoomList_m2948078338 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetPlayerCustomProperties(ExitGames.Client.Photon.Hashtable)
extern "C"  void PhotonNetwork_SetPlayerCustomProperties_m2044299864 (Il2CppObject * __this /* static, unused */, Hashtable_t995404622 * ___customProperties0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RemovePlayerCustomProperties(System.String[])
extern "C"  void PhotonNetwork_RemovePlayerCustomProperties_m3004402570 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___customPropertiesToDelete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::RaiseEvent(System.Byte,System.Object,System.Boolean,RaiseEventOptions)
extern "C"  bool PhotonNetwork_RaiseEvent_m3881741947 (Il2CppObject * __this /* static, unused */, uint8_t ___eventCode0, Il2CppObject * ___eventContent1, bool ___sendReliable2, RaiseEventOptions_t565739090 * ___options3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::AllocateViewID()
extern "C"  int32_t PhotonNetwork_AllocateViewID_m3591207158 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::AllocateSceneViewID()
extern "C"  int32_t PhotonNetwork_AllocateSceneViewID_m533434080 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::AllocateViewID(System.Int32)
extern "C"  int32_t PhotonNetwork_AllocateViewID_m837476753 (Il2CppObject * __this /* static, unused */, int32_t ___ownerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] PhotonNetwork::AllocateSceneViewIDs(System.Int32)
extern "C"  Int32U5BU5D_t3030399641* PhotonNetwork_AllocateSceneViewIDs_m1419250542 (Il2CppObject * __this /* static, unused */, int32_t ___countOfNewViews0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::UnAllocateViewID(System.Int32)
extern "C"  void PhotonNetwork_UnAllocateViewID_m4241669110 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PhotonNetwork::Instantiate(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32)
extern "C"  GameObject_t1756533147 * PhotonNetwork_Instantiate_m3071047307 (Il2CppObject * __this /* static, unused */, String_t* ___prefabName0, Vector3_t2243707580  ___position1, Quaternion_t4030073918  ___rotation2, int32_t ___group3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PhotonNetwork::Instantiate(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,System.Object[])
extern "C"  GameObject_t1756533147 * PhotonNetwork_Instantiate_m2823694963 (Il2CppObject * __this /* static, unused */, String_t* ___prefabName0, Vector3_t2243707580  ___position1, Quaternion_t4030073918  ___rotation2, int32_t ___group3, ObjectU5BU5D_t3614634134* ___data4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PhotonNetwork::InstantiateSceneObject(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,System.Object[])
extern "C"  GameObject_t1756533147 * PhotonNetwork_InstantiateSceneObject_m1024710096 (Il2CppObject * __this /* static, unused */, String_t* ___prefabName0, Vector3_t2243707580  ___position1, Quaternion_t4030073918  ___rotation2, int32_t ___group3, ObjectU5BU5D_t3614634134* ___data4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::GetPing()
extern "C"  int32_t PhotonNetwork_GetPing_m2948959695 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::FetchServerTimestamp()
extern "C"  void PhotonNetwork_FetchServerTimestamp_m2944347622 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SendOutgoingCommands()
extern "C"  void PhotonNetwork_SendOutgoingCommands_m360745 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::CloseConnection(PhotonPlayer)
extern "C"  bool PhotonNetwork_CloseConnection_m324189820 (Il2CppObject * __this /* static, unused */, PhotonPlayer_t4120608827 * ___kickPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::SetMasterClient(PhotonPlayer)
extern "C"  bool PhotonNetwork_SetMasterClient_m4039216477 (Il2CppObject * __this /* static, unused */, PhotonPlayer_t4120608827 * ___masterClientPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::Destroy(PhotonView)
extern "C"  void PhotonNetwork_Destroy_m2254045600 (Il2CppObject * __this /* static, unused */, PhotonView_t899863581 * ___targetView0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::Destroy(UnityEngine.GameObject)
extern "C"  void PhotonNetwork_Destroy_m2077055285 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___targetGo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::DestroyPlayerObjects(PhotonPlayer)
extern "C"  void PhotonNetwork_DestroyPlayerObjects_m836571357 (Il2CppObject * __this /* static, unused */, PhotonPlayer_t4120608827 * ___targetPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::DestroyPlayerObjects(System.Int32)
extern "C"  void PhotonNetwork_DestroyPlayerObjects_m3974613001 (Il2CppObject * __this /* static, unused */, int32_t ___targetPlayerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::DestroyAll()
extern "C"  void PhotonNetwork_DestroyAll_m314658542 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RemoveRPCs(PhotonPlayer)
extern "C"  void PhotonNetwork_RemoveRPCs_m574137882 (Il2CppObject * __this /* static, unused */, PhotonPlayer_t4120608827 * ___targetPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RemoveRPCs(PhotonView)
extern "C"  void PhotonNetwork_RemoveRPCs_m726567238 (Il2CppObject * __this /* static, unused */, PhotonView_t899863581 * ___targetPhotonView0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RemoveRPCsInGroup(System.Int32)
extern "C"  void PhotonNetwork_RemoveRPCsInGroup_m1163619144 (Il2CppObject * __this /* static, unused */, int32_t ___targetGroup0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RPC(PhotonView,System.String,PhotonTargets,System.Boolean,System.Object[])
extern "C"  void PhotonNetwork_RPC_m1645242782 (Il2CppObject * __this /* static, unused */, PhotonView_t899863581 * ___view0, String_t* ___methodName1, int32_t ___target2, bool ___encrypt3, ObjectU5BU5D_t3614634134* ___parameters4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RPC(PhotonView,System.String,PhotonPlayer,System.Boolean,System.Object[])
extern "C"  void PhotonNetwork_RPC_m4271002613 (Il2CppObject * __this /* static, unused */, PhotonView_t899863581 * ___view0, String_t* ___methodName1, PhotonPlayer_t4120608827 * ___targetPlayer2, bool ___encrpyt3, ObjectU5BU5D_t3614634134* ___parameters4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::CacheSendMonoMessageTargets(System.Type)
extern "C"  void PhotonNetwork_CacheSendMonoMessageTargets_m7772716 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<UnityEngine.GameObject> PhotonNetwork::FindGameObjectsWithComponent(System.Type)
extern "C"  HashSet_1_t89994001 * PhotonNetwork_FindGameObjectsWithComponent_m3396879395 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetReceivingEnabled(System.Int32,System.Boolean)
extern "C"  void PhotonNetwork_SetReceivingEnabled_m2935273916 (Il2CppObject * __this /* static, unused */, int32_t ___group0, bool ___enabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetReceivingEnabled(System.Int32[],System.Int32[])
extern "C"  void PhotonNetwork_SetReceivingEnabled_m2306440 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___enableGroups0, Int32U5BU5D_t3030399641* ___disableGroups1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetSendingEnabled(System.Int32,System.Boolean)
extern "C"  void PhotonNetwork_SetSendingEnabled_m207829356 (Il2CppObject * __this /* static, unused */, int32_t ___group0, bool ___enabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetSendingEnabled(System.Int32[],System.Int32[])
extern "C"  void PhotonNetwork_SetSendingEnabled_m2576576960 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___enableGroups0, Int32U5BU5D_t3030399641* ___disableGroups1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetLevelPrefix(System.Int16)
extern "C"  void PhotonNetwork_SetLevelPrefix_m3520292342 (Il2CppObject * __this /* static, unused */, int16_t ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::LoadLevel(System.Int32)
extern "C"  void PhotonNetwork_LoadLevel_m2454501828 (Il2CppObject * __this /* static, unused */, int32_t ___levelNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::LoadLevel(System.String)
extern "C"  void PhotonNetwork_LoadLevel_m428830709 (Il2CppObject * __this /* static, unused */, String_t* ___levelName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::WebRpc(System.String,System.Object)
extern "C"  bool PhotonNetwork_WebRpc_m1525823392 (Il2CppObject * __this /* static, unused */, String_t* ___name0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::<PhotonNetwork>m__0()
extern "C"  int32_t PhotonNetwork_U3CPhotonNetworkU3Em__0_m1270168680 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
