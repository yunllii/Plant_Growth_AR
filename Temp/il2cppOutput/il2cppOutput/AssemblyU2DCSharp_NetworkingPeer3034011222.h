#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// AuthenticationValues
struct AuthenticationValues_t1430961670;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_t2531697585;
// TypedLobby
struct TypedLobby_t3014596312;
// System.Collections.Generic.List`1<TypedLobbyInfo>
struct List_1_t3471576424;
// System.Collections.Generic.Dictionary`2<System.String,RoomInfo>
struct Dictionary_2_t1877450301;
// RoomInfo[]
struct RoomInfoU5BU5D_t3672612454;
// Room
struct Room_t1042398373;
// PhotonPlayer
struct PhotonPlayer_t4120608827;
// EnterRoomParams
struct EnterRoomParams_t2222988781;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.Generic.List`1<Region>
struct List_1_t990992504;
// System.Collections.Generic.Dictionary`2<System.Int32,PhotonPlayer>
struct Dictionary_2_t3128434462;
// PhotonPlayer[]
struct PhotonPlayerU5BU5D_t818546810;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t405338302;
// System.Collections.Generic.Dictionary`2<System.Int32,PhotonView>
struct Dictionary_2_t4202656512;
// PhotonStream
struct PhotonStream_t2436786422;
// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>
struct Dictionary_2_t3230257;
// IPunPrefabPool
struct IPunPrefabPool_t2617987714;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t3671312409;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>>
struct Dictionary_2_t342058070;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>
struct Dictionary_2_t2622459769;

#include "AssemblyU2DCSharp_LoadBalancingPeer3951471977.h"
#include "AssemblyU2DCSharp_AuthModeOption918236656.h"
#include "AssemblyU2DCSharp_EncryptionMode2259972134.h"
#include "AssemblyU2DCSharp_ServerConnection1155372161.h"
#include "AssemblyU2DCSharp_ClientState3876498872.h"
#include "AssemblyU2DCSharp_JoinType4282379012.h"
#include "AssemblyU2DCSharp_CloudRegionCode989201940.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetworkingPeer
struct  NetworkingPeer_t3034011222  : public LoadBalancingPeer_t3951471977
{
public:
	// System.String NetworkingPeer::AppId
	String_t* ___AppId_37;
	// AuthenticationValues NetworkingPeer::<AuthValues>k__BackingField
	AuthenticationValues_t1430961670 * ___U3CAuthValuesU3Ek__BackingField_38;
	// System.String NetworkingPeer::tokenCache
	String_t* ___tokenCache_39;
	// AuthModeOption NetworkingPeer::AuthMode
	int32_t ___AuthMode_40;
	// EncryptionMode NetworkingPeer::EncryptionMode
	int32_t ___EncryptionMode_41;
	// System.Boolean NetworkingPeer::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField_42;
	// System.String NetworkingPeer::<MasterServerAddress>k__BackingField
	String_t* ___U3CMasterServerAddressU3Ek__BackingField_46;
	// System.String NetworkingPeer::<GameServerAddress>k__BackingField
	String_t* ___U3CGameServerAddressU3Ek__BackingField_47;
	// ServerConnection NetworkingPeer::<Server>k__BackingField
	int32_t ___U3CServerU3Ek__BackingField_48;
	// ClientState NetworkingPeer::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_49;
	// System.Boolean NetworkingPeer::IsInitialConnect
	bool ___IsInitialConnect_50;
	// System.Boolean NetworkingPeer::insideLobby
	bool ___insideLobby_51;
	// TypedLobby NetworkingPeer::<lobby>k__BackingField
	TypedLobby_t3014596312 * ___U3ClobbyU3Ek__BackingField_52;
	// System.Collections.Generic.List`1<TypedLobbyInfo> NetworkingPeer::LobbyStatistics
	List_1_t3471576424 * ___LobbyStatistics_53;
	// System.Collections.Generic.Dictionary`2<System.String,RoomInfo> NetworkingPeer::mGameList
	Dictionary_2_t1877450301 * ___mGameList_54;
	// RoomInfo[] NetworkingPeer::mGameListCopy
	RoomInfoU5BU5D_t3672612454* ___mGameListCopy_55;
	// System.String NetworkingPeer::playername
	String_t* ___playername_56;
	// System.Boolean NetworkingPeer::mPlayernameHasToBeUpdated
	bool ___mPlayernameHasToBeUpdated_57;
	// Room NetworkingPeer::currentRoom
	Room_t1042398373 * ___currentRoom_58;
	// PhotonPlayer NetworkingPeer::<LocalPlayer>k__BackingField
	PhotonPlayer_t4120608827 * ___U3CLocalPlayerU3Ek__BackingField_59;
	// System.Int32 NetworkingPeer::<PlayersOnMasterCount>k__BackingField
	int32_t ___U3CPlayersOnMasterCountU3Ek__BackingField_60;
	// System.Int32 NetworkingPeer::<PlayersInRoomsCount>k__BackingField
	int32_t ___U3CPlayersInRoomsCountU3Ek__BackingField_61;
	// System.Int32 NetworkingPeer::<RoomsCount>k__BackingField
	int32_t ___U3CRoomsCountU3Ek__BackingField_62;
	// JoinType NetworkingPeer::lastJoinType
	int32_t ___lastJoinType_63;
	// EnterRoomParams NetworkingPeer::enterRoomParamsCache
	EnterRoomParams_t2222988781 * ___enterRoomParamsCache_64;
	// System.Boolean NetworkingPeer::didAuthenticate
	bool ___didAuthenticate_65;
	// System.String[] NetworkingPeer::friendListRequested
	StringU5BU5D_t1642385972* ___friendListRequested_66;
	// System.Int32 NetworkingPeer::friendListTimestamp
	int32_t ___friendListTimestamp_67;
	// System.Boolean NetworkingPeer::isFetchingFriendList
	bool ___isFetchingFriendList_68;
	// System.Collections.Generic.List`1<Region> NetworkingPeer::<AvailableRegions>k__BackingField
	List_1_t990992504 * ___U3CAvailableRegionsU3Ek__BackingField_69;
	// CloudRegionCode NetworkingPeer::<CloudRegion>k__BackingField
	int32_t ___U3CCloudRegionU3Ek__BackingField_70;
	// System.Collections.Generic.Dictionary`2<System.Int32,PhotonPlayer> NetworkingPeer::mActors
	Dictionary_2_t3128434462 * ___mActors_71;
	// PhotonPlayer[] NetworkingPeer::mOtherPlayerListCopy
	PhotonPlayerU5BU5D_t818546810* ___mOtherPlayerListCopy_72;
	// PhotonPlayer[] NetworkingPeer::mPlayerListCopy
	PhotonPlayerU5BU5D_t818546810* ___mPlayerListCopy_73;
	// System.Boolean NetworkingPeer::hasSwitchedMC
	bool ___hasSwitchedMC_74;
	// System.Collections.Generic.HashSet`1<System.Int32> NetworkingPeer::allowedReceivingGroups
	HashSet_1_t405338302 * ___allowedReceivingGroups_75;
	// System.Collections.Generic.HashSet`1<System.Int32> NetworkingPeer::blockSendingGroups
	HashSet_1_t405338302 * ___blockSendingGroups_76;
	// System.Collections.Generic.Dictionary`2<System.Int32,PhotonView> NetworkingPeer::photonViewList
	Dictionary_2_t4202656512 * ___photonViewList_77;
	// PhotonStream NetworkingPeer::readStream
	PhotonStream_t2436786422 * ___readStream_78;
	// PhotonStream NetworkingPeer::pStream
	PhotonStream_t2436786422 * ___pStream_79;
	// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable> NetworkingPeer::dataPerGroupReliable
	Dictionary_2_t3230257 * ___dataPerGroupReliable_80;
	// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable> NetworkingPeer::dataPerGroupUnreliable
	Dictionary_2_t3230257 * ___dataPerGroupUnreliable_81;
	// System.Int16 NetworkingPeer::currentLevelPrefix
	int16_t ___currentLevelPrefix_82;
	// System.Boolean NetworkingPeer::loadingLevelAndPausedNetwork
	bool ___loadingLevelAndPausedNetwork_83;
	// IPunPrefabPool NetworkingPeer::ObjectPool
	Il2CppObject * ___ObjectPool_86;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>> NetworkingPeer::monoRPCMethodsCache
	Dictionary_2_t342058070 * ___monoRPCMethodsCache_88;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> NetworkingPeer::rpcShortcuts
	Dictionary_2_t3986656710 * ___rpcShortcuts_89;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]> NetworkingPeer::tempInstantiationData
	Dictionary_2_t2622459769 * ___tempInstantiationData_91;

public:
	inline static int32_t get_offset_of_AppId_37() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___AppId_37)); }
	inline String_t* get_AppId_37() const { return ___AppId_37; }
	inline String_t** get_address_of_AppId_37() { return &___AppId_37; }
	inline void set_AppId_37(String_t* value)
	{
		___AppId_37 = value;
		Il2CppCodeGenWriteBarrier(&___AppId_37, value);
	}

	inline static int32_t get_offset_of_U3CAuthValuesU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___U3CAuthValuesU3Ek__BackingField_38)); }
	inline AuthenticationValues_t1430961670 * get_U3CAuthValuesU3Ek__BackingField_38() const { return ___U3CAuthValuesU3Ek__BackingField_38; }
	inline AuthenticationValues_t1430961670 ** get_address_of_U3CAuthValuesU3Ek__BackingField_38() { return &___U3CAuthValuesU3Ek__BackingField_38; }
	inline void set_U3CAuthValuesU3Ek__BackingField_38(AuthenticationValues_t1430961670 * value)
	{
		___U3CAuthValuesU3Ek__BackingField_38 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAuthValuesU3Ek__BackingField_38, value);
	}

	inline static int32_t get_offset_of_tokenCache_39() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___tokenCache_39)); }
	inline String_t* get_tokenCache_39() const { return ___tokenCache_39; }
	inline String_t** get_address_of_tokenCache_39() { return &___tokenCache_39; }
	inline void set_tokenCache_39(String_t* value)
	{
		___tokenCache_39 = value;
		Il2CppCodeGenWriteBarrier(&___tokenCache_39, value);
	}

	inline static int32_t get_offset_of_AuthMode_40() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___AuthMode_40)); }
	inline int32_t get_AuthMode_40() const { return ___AuthMode_40; }
	inline int32_t* get_address_of_AuthMode_40() { return &___AuthMode_40; }
	inline void set_AuthMode_40(int32_t value)
	{
		___AuthMode_40 = value;
	}

	inline static int32_t get_offset_of_EncryptionMode_41() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___EncryptionMode_41)); }
	inline int32_t get_EncryptionMode_41() const { return ___EncryptionMode_41; }
	inline int32_t* get_address_of_EncryptionMode_41() { return &___EncryptionMode_41; }
	inline void set_EncryptionMode_41(int32_t value)
	{
		___EncryptionMode_41 = value;
	}

	inline static int32_t get_offset_of_U3CIsUsingNameServerU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___U3CIsUsingNameServerU3Ek__BackingField_42)); }
	inline bool get_U3CIsUsingNameServerU3Ek__BackingField_42() const { return ___U3CIsUsingNameServerU3Ek__BackingField_42; }
	inline bool* get_address_of_U3CIsUsingNameServerU3Ek__BackingField_42() { return &___U3CIsUsingNameServerU3Ek__BackingField_42; }
	inline void set_U3CIsUsingNameServerU3Ek__BackingField_42(bool value)
	{
		___U3CIsUsingNameServerU3Ek__BackingField_42 = value;
	}

	inline static int32_t get_offset_of_U3CMasterServerAddressU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___U3CMasterServerAddressU3Ek__BackingField_46)); }
	inline String_t* get_U3CMasterServerAddressU3Ek__BackingField_46() const { return ___U3CMasterServerAddressU3Ek__BackingField_46; }
	inline String_t** get_address_of_U3CMasterServerAddressU3Ek__BackingField_46() { return &___U3CMasterServerAddressU3Ek__BackingField_46; }
	inline void set_U3CMasterServerAddressU3Ek__BackingField_46(String_t* value)
	{
		___U3CMasterServerAddressU3Ek__BackingField_46 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMasterServerAddressU3Ek__BackingField_46, value);
	}

	inline static int32_t get_offset_of_U3CGameServerAddressU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___U3CGameServerAddressU3Ek__BackingField_47)); }
	inline String_t* get_U3CGameServerAddressU3Ek__BackingField_47() const { return ___U3CGameServerAddressU3Ek__BackingField_47; }
	inline String_t** get_address_of_U3CGameServerAddressU3Ek__BackingField_47() { return &___U3CGameServerAddressU3Ek__BackingField_47; }
	inline void set_U3CGameServerAddressU3Ek__BackingField_47(String_t* value)
	{
		___U3CGameServerAddressU3Ek__BackingField_47 = value;
		Il2CppCodeGenWriteBarrier(&___U3CGameServerAddressU3Ek__BackingField_47, value);
	}

	inline static int32_t get_offset_of_U3CServerU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___U3CServerU3Ek__BackingField_48)); }
	inline int32_t get_U3CServerU3Ek__BackingField_48() const { return ___U3CServerU3Ek__BackingField_48; }
	inline int32_t* get_address_of_U3CServerU3Ek__BackingField_48() { return &___U3CServerU3Ek__BackingField_48; }
	inline void set_U3CServerU3Ek__BackingField_48(int32_t value)
	{
		___U3CServerU3Ek__BackingField_48 = value;
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___U3CStateU3Ek__BackingField_49)); }
	inline int32_t get_U3CStateU3Ek__BackingField_49() const { return ___U3CStateU3Ek__BackingField_49; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_49() { return &___U3CStateU3Ek__BackingField_49; }
	inline void set_U3CStateU3Ek__BackingField_49(int32_t value)
	{
		___U3CStateU3Ek__BackingField_49 = value;
	}

	inline static int32_t get_offset_of_IsInitialConnect_50() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___IsInitialConnect_50)); }
	inline bool get_IsInitialConnect_50() const { return ___IsInitialConnect_50; }
	inline bool* get_address_of_IsInitialConnect_50() { return &___IsInitialConnect_50; }
	inline void set_IsInitialConnect_50(bool value)
	{
		___IsInitialConnect_50 = value;
	}

	inline static int32_t get_offset_of_insideLobby_51() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___insideLobby_51)); }
	inline bool get_insideLobby_51() const { return ___insideLobby_51; }
	inline bool* get_address_of_insideLobby_51() { return &___insideLobby_51; }
	inline void set_insideLobby_51(bool value)
	{
		___insideLobby_51 = value;
	}

	inline static int32_t get_offset_of_U3ClobbyU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___U3ClobbyU3Ek__BackingField_52)); }
	inline TypedLobby_t3014596312 * get_U3ClobbyU3Ek__BackingField_52() const { return ___U3ClobbyU3Ek__BackingField_52; }
	inline TypedLobby_t3014596312 ** get_address_of_U3ClobbyU3Ek__BackingField_52() { return &___U3ClobbyU3Ek__BackingField_52; }
	inline void set_U3ClobbyU3Ek__BackingField_52(TypedLobby_t3014596312 * value)
	{
		___U3ClobbyU3Ek__BackingField_52 = value;
		Il2CppCodeGenWriteBarrier(&___U3ClobbyU3Ek__BackingField_52, value);
	}

	inline static int32_t get_offset_of_LobbyStatistics_53() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___LobbyStatistics_53)); }
	inline List_1_t3471576424 * get_LobbyStatistics_53() const { return ___LobbyStatistics_53; }
	inline List_1_t3471576424 ** get_address_of_LobbyStatistics_53() { return &___LobbyStatistics_53; }
	inline void set_LobbyStatistics_53(List_1_t3471576424 * value)
	{
		___LobbyStatistics_53 = value;
		Il2CppCodeGenWriteBarrier(&___LobbyStatistics_53, value);
	}

	inline static int32_t get_offset_of_mGameList_54() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___mGameList_54)); }
	inline Dictionary_2_t1877450301 * get_mGameList_54() const { return ___mGameList_54; }
	inline Dictionary_2_t1877450301 ** get_address_of_mGameList_54() { return &___mGameList_54; }
	inline void set_mGameList_54(Dictionary_2_t1877450301 * value)
	{
		___mGameList_54 = value;
		Il2CppCodeGenWriteBarrier(&___mGameList_54, value);
	}

	inline static int32_t get_offset_of_mGameListCopy_55() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___mGameListCopy_55)); }
	inline RoomInfoU5BU5D_t3672612454* get_mGameListCopy_55() const { return ___mGameListCopy_55; }
	inline RoomInfoU5BU5D_t3672612454** get_address_of_mGameListCopy_55() { return &___mGameListCopy_55; }
	inline void set_mGameListCopy_55(RoomInfoU5BU5D_t3672612454* value)
	{
		___mGameListCopy_55 = value;
		Il2CppCodeGenWriteBarrier(&___mGameListCopy_55, value);
	}

	inline static int32_t get_offset_of_playername_56() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___playername_56)); }
	inline String_t* get_playername_56() const { return ___playername_56; }
	inline String_t** get_address_of_playername_56() { return &___playername_56; }
	inline void set_playername_56(String_t* value)
	{
		___playername_56 = value;
		Il2CppCodeGenWriteBarrier(&___playername_56, value);
	}

	inline static int32_t get_offset_of_mPlayernameHasToBeUpdated_57() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___mPlayernameHasToBeUpdated_57)); }
	inline bool get_mPlayernameHasToBeUpdated_57() const { return ___mPlayernameHasToBeUpdated_57; }
	inline bool* get_address_of_mPlayernameHasToBeUpdated_57() { return &___mPlayernameHasToBeUpdated_57; }
	inline void set_mPlayernameHasToBeUpdated_57(bool value)
	{
		___mPlayernameHasToBeUpdated_57 = value;
	}

	inline static int32_t get_offset_of_currentRoom_58() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___currentRoom_58)); }
	inline Room_t1042398373 * get_currentRoom_58() const { return ___currentRoom_58; }
	inline Room_t1042398373 ** get_address_of_currentRoom_58() { return &___currentRoom_58; }
	inline void set_currentRoom_58(Room_t1042398373 * value)
	{
		___currentRoom_58 = value;
		Il2CppCodeGenWriteBarrier(&___currentRoom_58, value);
	}

	inline static int32_t get_offset_of_U3CLocalPlayerU3Ek__BackingField_59() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___U3CLocalPlayerU3Ek__BackingField_59)); }
	inline PhotonPlayer_t4120608827 * get_U3CLocalPlayerU3Ek__BackingField_59() const { return ___U3CLocalPlayerU3Ek__BackingField_59; }
	inline PhotonPlayer_t4120608827 ** get_address_of_U3CLocalPlayerU3Ek__BackingField_59() { return &___U3CLocalPlayerU3Ek__BackingField_59; }
	inline void set_U3CLocalPlayerU3Ek__BackingField_59(PhotonPlayer_t4120608827 * value)
	{
		___U3CLocalPlayerU3Ek__BackingField_59 = value;
		Il2CppCodeGenWriteBarrier(&___U3CLocalPlayerU3Ek__BackingField_59, value);
	}

	inline static int32_t get_offset_of_U3CPlayersOnMasterCountU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___U3CPlayersOnMasterCountU3Ek__BackingField_60)); }
	inline int32_t get_U3CPlayersOnMasterCountU3Ek__BackingField_60() const { return ___U3CPlayersOnMasterCountU3Ek__BackingField_60; }
	inline int32_t* get_address_of_U3CPlayersOnMasterCountU3Ek__BackingField_60() { return &___U3CPlayersOnMasterCountU3Ek__BackingField_60; }
	inline void set_U3CPlayersOnMasterCountU3Ek__BackingField_60(int32_t value)
	{
		___U3CPlayersOnMasterCountU3Ek__BackingField_60 = value;
	}

	inline static int32_t get_offset_of_U3CPlayersInRoomsCountU3Ek__BackingField_61() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___U3CPlayersInRoomsCountU3Ek__BackingField_61)); }
	inline int32_t get_U3CPlayersInRoomsCountU3Ek__BackingField_61() const { return ___U3CPlayersInRoomsCountU3Ek__BackingField_61; }
	inline int32_t* get_address_of_U3CPlayersInRoomsCountU3Ek__BackingField_61() { return &___U3CPlayersInRoomsCountU3Ek__BackingField_61; }
	inline void set_U3CPlayersInRoomsCountU3Ek__BackingField_61(int32_t value)
	{
		___U3CPlayersInRoomsCountU3Ek__BackingField_61 = value;
	}

	inline static int32_t get_offset_of_U3CRoomsCountU3Ek__BackingField_62() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___U3CRoomsCountU3Ek__BackingField_62)); }
	inline int32_t get_U3CRoomsCountU3Ek__BackingField_62() const { return ___U3CRoomsCountU3Ek__BackingField_62; }
	inline int32_t* get_address_of_U3CRoomsCountU3Ek__BackingField_62() { return &___U3CRoomsCountU3Ek__BackingField_62; }
	inline void set_U3CRoomsCountU3Ek__BackingField_62(int32_t value)
	{
		___U3CRoomsCountU3Ek__BackingField_62 = value;
	}

	inline static int32_t get_offset_of_lastJoinType_63() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___lastJoinType_63)); }
	inline int32_t get_lastJoinType_63() const { return ___lastJoinType_63; }
	inline int32_t* get_address_of_lastJoinType_63() { return &___lastJoinType_63; }
	inline void set_lastJoinType_63(int32_t value)
	{
		___lastJoinType_63 = value;
	}

	inline static int32_t get_offset_of_enterRoomParamsCache_64() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___enterRoomParamsCache_64)); }
	inline EnterRoomParams_t2222988781 * get_enterRoomParamsCache_64() const { return ___enterRoomParamsCache_64; }
	inline EnterRoomParams_t2222988781 ** get_address_of_enterRoomParamsCache_64() { return &___enterRoomParamsCache_64; }
	inline void set_enterRoomParamsCache_64(EnterRoomParams_t2222988781 * value)
	{
		___enterRoomParamsCache_64 = value;
		Il2CppCodeGenWriteBarrier(&___enterRoomParamsCache_64, value);
	}

	inline static int32_t get_offset_of_didAuthenticate_65() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___didAuthenticate_65)); }
	inline bool get_didAuthenticate_65() const { return ___didAuthenticate_65; }
	inline bool* get_address_of_didAuthenticate_65() { return &___didAuthenticate_65; }
	inline void set_didAuthenticate_65(bool value)
	{
		___didAuthenticate_65 = value;
	}

	inline static int32_t get_offset_of_friendListRequested_66() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___friendListRequested_66)); }
	inline StringU5BU5D_t1642385972* get_friendListRequested_66() const { return ___friendListRequested_66; }
	inline StringU5BU5D_t1642385972** get_address_of_friendListRequested_66() { return &___friendListRequested_66; }
	inline void set_friendListRequested_66(StringU5BU5D_t1642385972* value)
	{
		___friendListRequested_66 = value;
		Il2CppCodeGenWriteBarrier(&___friendListRequested_66, value);
	}

	inline static int32_t get_offset_of_friendListTimestamp_67() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___friendListTimestamp_67)); }
	inline int32_t get_friendListTimestamp_67() const { return ___friendListTimestamp_67; }
	inline int32_t* get_address_of_friendListTimestamp_67() { return &___friendListTimestamp_67; }
	inline void set_friendListTimestamp_67(int32_t value)
	{
		___friendListTimestamp_67 = value;
	}

	inline static int32_t get_offset_of_isFetchingFriendList_68() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___isFetchingFriendList_68)); }
	inline bool get_isFetchingFriendList_68() const { return ___isFetchingFriendList_68; }
	inline bool* get_address_of_isFetchingFriendList_68() { return &___isFetchingFriendList_68; }
	inline void set_isFetchingFriendList_68(bool value)
	{
		___isFetchingFriendList_68 = value;
	}

	inline static int32_t get_offset_of_U3CAvailableRegionsU3Ek__BackingField_69() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___U3CAvailableRegionsU3Ek__BackingField_69)); }
	inline List_1_t990992504 * get_U3CAvailableRegionsU3Ek__BackingField_69() const { return ___U3CAvailableRegionsU3Ek__BackingField_69; }
	inline List_1_t990992504 ** get_address_of_U3CAvailableRegionsU3Ek__BackingField_69() { return &___U3CAvailableRegionsU3Ek__BackingField_69; }
	inline void set_U3CAvailableRegionsU3Ek__BackingField_69(List_1_t990992504 * value)
	{
		___U3CAvailableRegionsU3Ek__BackingField_69 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAvailableRegionsU3Ek__BackingField_69, value);
	}

	inline static int32_t get_offset_of_U3CCloudRegionU3Ek__BackingField_70() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___U3CCloudRegionU3Ek__BackingField_70)); }
	inline int32_t get_U3CCloudRegionU3Ek__BackingField_70() const { return ___U3CCloudRegionU3Ek__BackingField_70; }
	inline int32_t* get_address_of_U3CCloudRegionU3Ek__BackingField_70() { return &___U3CCloudRegionU3Ek__BackingField_70; }
	inline void set_U3CCloudRegionU3Ek__BackingField_70(int32_t value)
	{
		___U3CCloudRegionU3Ek__BackingField_70 = value;
	}

	inline static int32_t get_offset_of_mActors_71() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___mActors_71)); }
	inline Dictionary_2_t3128434462 * get_mActors_71() const { return ___mActors_71; }
	inline Dictionary_2_t3128434462 ** get_address_of_mActors_71() { return &___mActors_71; }
	inline void set_mActors_71(Dictionary_2_t3128434462 * value)
	{
		___mActors_71 = value;
		Il2CppCodeGenWriteBarrier(&___mActors_71, value);
	}

	inline static int32_t get_offset_of_mOtherPlayerListCopy_72() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___mOtherPlayerListCopy_72)); }
	inline PhotonPlayerU5BU5D_t818546810* get_mOtherPlayerListCopy_72() const { return ___mOtherPlayerListCopy_72; }
	inline PhotonPlayerU5BU5D_t818546810** get_address_of_mOtherPlayerListCopy_72() { return &___mOtherPlayerListCopy_72; }
	inline void set_mOtherPlayerListCopy_72(PhotonPlayerU5BU5D_t818546810* value)
	{
		___mOtherPlayerListCopy_72 = value;
		Il2CppCodeGenWriteBarrier(&___mOtherPlayerListCopy_72, value);
	}

	inline static int32_t get_offset_of_mPlayerListCopy_73() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___mPlayerListCopy_73)); }
	inline PhotonPlayerU5BU5D_t818546810* get_mPlayerListCopy_73() const { return ___mPlayerListCopy_73; }
	inline PhotonPlayerU5BU5D_t818546810** get_address_of_mPlayerListCopy_73() { return &___mPlayerListCopy_73; }
	inline void set_mPlayerListCopy_73(PhotonPlayerU5BU5D_t818546810* value)
	{
		___mPlayerListCopy_73 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayerListCopy_73, value);
	}

	inline static int32_t get_offset_of_hasSwitchedMC_74() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___hasSwitchedMC_74)); }
	inline bool get_hasSwitchedMC_74() const { return ___hasSwitchedMC_74; }
	inline bool* get_address_of_hasSwitchedMC_74() { return &___hasSwitchedMC_74; }
	inline void set_hasSwitchedMC_74(bool value)
	{
		___hasSwitchedMC_74 = value;
	}

	inline static int32_t get_offset_of_allowedReceivingGroups_75() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___allowedReceivingGroups_75)); }
	inline HashSet_1_t405338302 * get_allowedReceivingGroups_75() const { return ___allowedReceivingGroups_75; }
	inline HashSet_1_t405338302 ** get_address_of_allowedReceivingGroups_75() { return &___allowedReceivingGroups_75; }
	inline void set_allowedReceivingGroups_75(HashSet_1_t405338302 * value)
	{
		___allowedReceivingGroups_75 = value;
		Il2CppCodeGenWriteBarrier(&___allowedReceivingGroups_75, value);
	}

	inline static int32_t get_offset_of_blockSendingGroups_76() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___blockSendingGroups_76)); }
	inline HashSet_1_t405338302 * get_blockSendingGroups_76() const { return ___blockSendingGroups_76; }
	inline HashSet_1_t405338302 ** get_address_of_blockSendingGroups_76() { return &___blockSendingGroups_76; }
	inline void set_blockSendingGroups_76(HashSet_1_t405338302 * value)
	{
		___blockSendingGroups_76 = value;
		Il2CppCodeGenWriteBarrier(&___blockSendingGroups_76, value);
	}

	inline static int32_t get_offset_of_photonViewList_77() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___photonViewList_77)); }
	inline Dictionary_2_t4202656512 * get_photonViewList_77() const { return ___photonViewList_77; }
	inline Dictionary_2_t4202656512 ** get_address_of_photonViewList_77() { return &___photonViewList_77; }
	inline void set_photonViewList_77(Dictionary_2_t4202656512 * value)
	{
		___photonViewList_77 = value;
		Il2CppCodeGenWriteBarrier(&___photonViewList_77, value);
	}

	inline static int32_t get_offset_of_readStream_78() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___readStream_78)); }
	inline PhotonStream_t2436786422 * get_readStream_78() const { return ___readStream_78; }
	inline PhotonStream_t2436786422 ** get_address_of_readStream_78() { return &___readStream_78; }
	inline void set_readStream_78(PhotonStream_t2436786422 * value)
	{
		___readStream_78 = value;
		Il2CppCodeGenWriteBarrier(&___readStream_78, value);
	}

	inline static int32_t get_offset_of_pStream_79() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___pStream_79)); }
	inline PhotonStream_t2436786422 * get_pStream_79() const { return ___pStream_79; }
	inline PhotonStream_t2436786422 ** get_address_of_pStream_79() { return &___pStream_79; }
	inline void set_pStream_79(PhotonStream_t2436786422 * value)
	{
		___pStream_79 = value;
		Il2CppCodeGenWriteBarrier(&___pStream_79, value);
	}

	inline static int32_t get_offset_of_dataPerGroupReliable_80() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___dataPerGroupReliable_80)); }
	inline Dictionary_2_t3230257 * get_dataPerGroupReliable_80() const { return ___dataPerGroupReliable_80; }
	inline Dictionary_2_t3230257 ** get_address_of_dataPerGroupReliable_80() { return &___dataPerGroupReliable_80; }
	inline void set_dataPerGroupReliable_80(Dictionary_2_t3230257 * value)
	{
		___dataPerGroupReliable_80 = value;
		Il2CppCodeGenWriteBarrier(&___dataPerGroupReliable_80, value);
	}

	inline static int32_t get_offset_of_dataPerGroupUnreliable_81() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___dataPerGroupUnreliable_81)); }
	inline Dictionary_2_t3230257 * get_dataPerGroupUnreliable_81() const { return ___dataPerGroupUnreliable_81; }
	inline Dictionary_2_t3230257 ** get_address_of_dataPerGroupUnreliable_81() { return &___dataPerGroupUnreliable_81; }
	inline void set_dataPerGroupUnreliable_81(Dictionary_2_t3230257 * value)
	{
		___dataPerGroupUnreliable_81 = value;
		Il2CppCodeGenWriteBarrier(&___dataPerGroupUnreliable_81, value);
	}

	inline static int32_t get_offset_of_currentLevelPrefix_82() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___currentLevelPrefix_82)); }
	inline int16_t get_currentLevelPrefix_82() const { return ___currentLevelPrefix_82; }
	inline int16_t* get_address_of_currentLevelPrefix_82() { return &___currentLevelPrefix_82; }
	inline void set_currentLevelPrefix_82(int16_t value)
	{
		___currentLevelPrefix_82 = value;
	}

	inline static int32_t get_offset_of_loadingLevelAndPausedNetwork_83() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___loadingLevelAndPausedNetwork_83)); }
	inline bool get_loadingLevelAndPausedNetwork_83() const { return ___loadingLevelAndPausedNetwork_83; }
	inline bool* get_address_of_loadingLevelAndPausedNetwork_83() { return &___loadingLevelAndPausedNetwork_83; }
	inline void set_loadingLevelAndPausedNetwork_83(bool value)
	{
		___loadingLevelAndPausedNetwork_83 = value;
	}

	inline static int32_t get_offset_of_ObjectPool_86() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___ObjectPool_86)); }
	inline Il2CppObject * get_ObjectPool_86() const { return ___ObjectPool_86; }
	inline Il2CppObject ** get_address_of_ObjectPool_86() { return &___ObjectPool_86; }
	inline void set_ObjectPool_86(Il2CppObject * value)
	{
		___ObjectPool_86 = value;
		Il2CppCodeGenWriteBarrier(&___ObjectPool_86, value);
	}

	inline static int32_t get_offset_of_monoRPCMethodsCache_88() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___monoRPCMethodsCache_88)); }
	inline Dictionary_2_t342058070 * get_monoRPCMethodsCache_88() const { return ___monoRPCMethodsCache_88; }
	inline Dictionary_2_t342058070 ** get_address_of_monoRPCMethodsCache_88() { return &___monoRPCMethodsCache_88; }
	inline void set_monoRPCMethodsCache_88(Dictionary_2_t342058070 * value)
	{
		___monoRPCMethodsCache_88 = value;
		Il2CppCodeGenWriteBarrier(&___monoRPCMethodsCache_88, value);
	}

	inline static int32_t get_offset_of_rpcShortcuts_89() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___rpcShortcuts_89)); }
	inline Dictionary_2_t3986656710 * get_rpcShortcuts_89() const { return ___rpcShortcuts_89; }
	inline Dictionary_2_t3986656710 ** get_address_of_rpcShortcuts_89() { return &___rpcShortcuts_89; }
	inline void set_rpcShortcuts_89(Dictionary_2_t3986656710 * value)
	{
		___rpcShortcuts_89 = value;
		Il2CppCodeGenWriteBarrier(&___rpcShortcuts_89, value);
	}

	inline static int32_t get_offset_of_tempInstantiationData_91() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222, ___tempInstantiationData_91)); }
	inline Dictionary_2_t2622459769 * get_tempInstantiationData_91() const { return ___tempInstantiationData_91; }
	inline Dictionary_2_t2622459769 ** get_address_of_tempInstantiationData_91() { return &___tempInstantiationData_91; }
	inline void set_tempInstantiationData_91(Dictionary_2_t2622459769 * value)
	{
		___tempInstantiationData_91 = value;
		Il2CppCodeGenWriteBarrier(&___tempInstantiationData_91, value);
	}
};

struct NetworkingPeer_t3034011222_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> NetworkingPeer::ProtocolToNameServerPort
	Dictionary_2_t2531697585 * ___ProtocolToNameServerPort_45;
	// System.Boolean NetworkingPeer::UsePrefabCache
	bool ___UsePrefabCache_85;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> NetworkingPeer::PrefabCache
	Dictionary_2_t3671312409 * ___PrefabCache_87;
	// System.String NetworkingPeer::OnPhotonInstantiateString
	String_t* ___OnPhotonInstantiateString_90;
	// System.Int32 NetworkingPeer::ObjectsInOneUpdate
	int32_t ___ObjectsInOneUpdate_92;

public:
	inline static int32_t get_offset_of_ProtocolToNameServerPort_45() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222_StaticFields, ___ProtocolToNameServerPort_45)); }
	inline Dictionary_2_t2531697585 * get_ProtocolToNameServerPort_45() const { return ___ProtocolToNameServerPort_45; }
	inline Dictionary_2_t2531697585 ** get_address_of_ProtocolToNameServerPort_45() { return &___ProtocolToNameServerPort_45; }
	inline void set_ProtocolToNameServerPort_45(Dictionary_2_t2531697585 * value)
	{
		___ProtocolToNameServerPort_45 = value;
		Il2CppCodeGenWriteBarrier(&___ProtocolToNameServerPort_45, value);
	}

	inline static int32_t get_offset_of_UsePrefabCache_85() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222_StaticFields, ___UsePrefabCache_85)); }
	inline bool get_UsePrefabCache_85() const { return ___UsePrefabCache_85; }
	inline bool* get_address_of_UsePrefabCache_85() { return &___UsePrefabCache_85; }
	inline void set_UsePrefabCache_85(bool value)
	{
		___UsePrefabCache_85 = value;
	}

	inline static int32_t get_offset_of_PrefabCache_87() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222_StaticFields, ___PrefabCache_87)); }
	inline Dictionary_2_t3671312409 * get_PrefabCache_87() const { return ___PrefabCache_87; }
	inline Dictionary_2_t3671312409 ** get_address_of_PrefabCache_87() { return &___PrefabCache_87; }
	inline void set_PrefabCache_87(Dictionary_2_t3671312409 * value)
	{
		___PrefabCache_87 = value;
		Il2CppCodeGenWriteBarrier(&___PrefabCache_87, value);
	}

	inline static int32_t get_offset_of_OnPhotonInstantiateString_90() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222_StaticFields, ___OnPhotonInstantiateString_90)); }
	inline String_t* get_OnPhotonInstantiateString_90() const { return ___OnPhotonInstantiateString_90; }
	inline String_t** get_address_of_OnPhotonInstantiateString_90() { return &___OnPhotonInstantiateString_90; }
	inline void set_OnPhotonInstantiateString_90(String_t* value)
	{
		___OnPhotonInstantiateString_90 = value;
		Il2CppCodeGenWriteBarrier(&___OnPhotonInstantiateString_90, value);
	}

	inline static int32_t get_offset_of_ObjectsInOneUpdate_92() { return static_cast<int32_t>(offsetof(NetworkingPeer_t3034011222_StaticFields, ___ObjectsInOneUpdate_92)); }
	inline int32_t get_ObjectsInOneUpdate_92() const { return ___ObjectsInOneUpdate_92; }
	inline int32_t* get_address_of_ObjectsInOneUpdate_92() { return &___ObjectsInOneUpdate_92; }
	inline void set_ObjectsInOneUpdate_92(int32_t value)
	{
		___ObjectsInOneUpdate_92 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
