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

// LoadBalancingPeer
struct LoadBalancingPeer_t3951471977;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t2218572769;
// System.String
struct String_t;
// TypedLobby
struct TypedLobby_t3014596312;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t2064209302;
// RoomOptions
struct RoomOptions_t590971513;
// EnterRoomParams
struct EnterRoomParams_t2222988781;
// OpJoinRandomRoomParams
struct OpJoinRandomRoomParams_t449785843;
// System.String[]
struct StringU5BU5D_t1642385972;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t995404622;
// System.Object
struct Il2CppObject;
// AuthenticationValues
struct AuthenticationValues_t1430961670;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// RaiseEventOptions
struct RaiseEventOptions_t565739090;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP3211808698.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_TypedLobby3014596312.h"
#include "AssemblyU2DCSharp_RoomOptions590971513.h"
#include "AssemblyU2DCSharp_EnterRoomParams2222988781.h"
#include "AssemblyU2DCSharp_OpJoinRandomRoomParams449785843.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable995404622.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_AuthenticationValues1430961670.h"
#include "AssemblyU2DCSharp_EncryptionMode2259972134.h"
#include "AssemblyU2DCSharp_RaiseEventOptions565739090.h"

// System.Void LoadBalancingPeer::.ctor(ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void LoadBalancingPeer__ctor_m1488502708 (LoadBalancingPeer_t3951471977 * __this, uint8_t ___protocolType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadBalancingPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void LoadBalancingPeer__ctor_m1401149571 (LoadBalancingPeer_t3951471977 * __this, Il2CppObject * ___listener0, uint8_t ___protocolType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::get_IsProtocolSecure()
extern "C"  bool LoadBalancingPeer_get_IsProtocolSecure_m1148323670 (LoadBalancingPeer_t3951471977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpGetRegions(System.String)
extern "C"  bool LoadBalancingPeer_OpGetRegions_m3485812142 (LoadBalancingPeer_t3951471977 * __this, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpJoinLobby(TypedLobby)
extern "C"  bool LoadBalancingPeer_OpJoinLobby_m2466323445 (LoadBalancingPeer_t3951471977 * __this, TypedLobby_t3014596312 * ___lobby0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpLeaveLobby()
extern "C"  bool LoadBalancingPeer_OpLeaveLobby_m2564799024 (LoadBalancingPeer_t3951471977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadBalancingPeer::RoomOptionsToOpParameters(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,RoomOptions)
extern "C"  void LoadBalancingPeer_RoomOptionsToOpParameters_m1748206178 (LoadBalancingPeer_t3951471977 * __this, Dictionary_2_t2064209302 * ___op0, RoomOptions_t590971513 * ___roomOptions1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpCreateRoom(EnterRoomParams)
extern "C"  bool LoadBalancingPeer_OpCreateRoom_m2647467011 (LoadBalancingPeer_t3951471977 * __this, EnterRoomParams_t2222988781 * ___opParams0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpJoinRoom(EnterRoomParams)
extern "C"  bool LoadBalancingPeer_OpJoinRoom_m3488155377 (LoadBalancingPeer_t3951471977 * __this, EnterRoomParams_t2222988781 * ___opParams0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpJoinRandomRoom(OpJoinRandomRoomParams)
extern "C"  bool LoadBalancingPeer_OpJoinRandomRoom_m1143725402 (LoadBalancingPeer_t3951471977 * __this, OpJoinRandomRoomParams_t449785843 * ___opJoinRandomRoomParams0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpLeaveRoom(System.Boolean)
extern "C"  bool LoadBalancingPeer_OpLeaveRoom_m382475832 (LoadBalancingPeer_t3951471977 * __this, bool ___becomeInactive0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpFindFriends(System.String[])
extern "C"  bool LoadBalancingPeer_OpFindFriends_m76755715 (LoadBalancingPeer_t3951471977 * __this, StringU5BU5D_t1642385972* ___friendsToFind0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpSetCustomPropertiesOfActor(System.Int32,ExitGames.Client.Photon.Hashtable)
extern "C"  bool LoadBalancingPeer_OpSetCustomPropertiesOfActor_m3164075090 (LoadBalancingPeer_t3951471977 * __this, int32_t ___actorNr0, Hashtable_t995404622 * ___actorProperties1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpSetPropertiesOfActor(System.Int32,ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,System.Boolean)
extern "C"  bool LoadBalancingPeer_OpSetPropertiesOfActor_m1254433124 (LoadBalancingPeer_t3951471977 * __this, int32_t ___actorNr0, Hashtable_t995404622 * ___actorProperties1, Hashtable_t995404622 * ___expectedProperties2, bool ___webForward3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadBalancingPeer::OpSetPropertyOfRoom(System.Byte,System.Object)
extern "C"  void LoadBalancingPeer_OpSetPropertyOfRoom_m3941081307 (LoadBalancingPeer_t3951471977 * __this, uint8_t ___propCode0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpSetCustomPropertiesOfRoom(ExitGames.Client.Photon.Hashtable,System.Boolean,System.Byte)
extern "C"  bool LoadBalancingPeer_OpSetCustomPropertiesOfRoom_m454821011 (LoadBalancingPeer_t3951471977 * __this, Hashtable_t995404622 * ___gameProperties0, bool ___broadcast1, uint8_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpSetPropertiesOfRoom(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,System.Boolean)
extern "C"  bool LoadBalancingPeer_OpSetPropertiesOfRoom_m1365983989 (LoadBalancingPeer_t3951471977 * __this, Hashtable_t995404622 * ___gameProperties0, Hashtable_t995404622 * ___expectedProperties1, bool ___webForward2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpAuthenticate(System.String,System.String,AuthenticationValues,System.String,System.Boolean)
extern "C"  bool LoadBalancingPeer_OpAuthenticate_m3549852687 (LoadBalancingPeer_t3951471977 * __this, String_t* ___appId0, String_t* ___appVersion1, AuthenticationValues_t1430961670 * ___authValues2, String_t* ___regionCode3, bool ___getLobbyStatistics4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpAuthenticateOnce(System.String,System.String,AuthenticationValues,System.String,EncryptionMode,ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  bool LoadBalancingPeer_OpAuthenticateOnce_m2891326527 (LoadBalancingPeer_t3951471977 * __this, String_t* ___appId0, String_t* ___appVersion1, AuthenticationValues_t1430961670 * ___authValues2, String_t* ___regionCode3, int32_t ___encryptionMode4, uint8_t ___expectedProtocol5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpChangeGroups(System.Byte[],System.Byte[])
extern "C"  bool LoadBalancingPeer_OpChangeGroups_m3797039005 (LoadBalancingPeer_t3951471977 * __this, ByteU5BU5D_t3397334013* ___groupsToRemove0, ByteU5BU5D_t3397334013* ___groupsToAdd1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpRaiseEvent(System.Byte,System.Object,System.Boolean,RaiseEventOptions)
extern "C"  bool LoadBalancingPeer_OpRaiseEvent_m3582216551 (LoadBalancingPeer_t3951471977 * __this, uint8_t ___eventCode0, Il2CppObject * ___customEventContent1, bool ___sendReliable2, RaiseEventOptions_t565739090 * ___raiseEventOptions3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadBalancingPeer::OpSettings(System.Boolean)
extern "C"  bool LoadBalancingPeer_OpSettings_m1600504017 (LoadBalancingPeer_t3951471977 * __this, bool ___receiveLobbyStats0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
