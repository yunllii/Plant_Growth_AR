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

// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t2940878176;
// System.String
struct String_t;
// System.Type
struct Type_t;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t2218572769;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t250795966;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t2470135126;
// ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate
struct IntegerMillisecondsDelegate_t1507343911;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t2323123337;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t2064209302;
// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t1159648263;
// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_t212185564;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_TrafficStats250795966.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_TrafficStat2470135126.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerStateVa1383826784.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_SupportClas1507343911.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP3211808698.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_SerializeSt1159648263.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DeserializeS212185564.h"

// System.Byte ExitGames.Client.Photon.PhotonPeer::get_ClientSdkIdShifted()
extern "C"  uint8_t PhotonPeer_get_ClientSdkIdShifted_m2188711574 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PhotonPeer::get_ClientVersion()
extern "C"  String_t* PhotonPeer_get_ClientVersion_m1432463921 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ExitGames.Client.Photon.PhotonPeer::get_SocketImplementation()
extern "C"  Type_t * PhotonPeer_get_SocketImplementation_m3931043418 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_SocketImplementation(System.Type)
extern "C"  void PhotonPeer_set_SocketImplementation_m3428411983 (PhotonPeer_t2940878176 * __this, Type_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::get_Listener()
extern "C"  Il2CppObject * PhotonPeer_get_Listener_m3927833165 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_Listener(ExitGames.Client.Photon.IPhotonPeerListener)
extern "C"  void PhotonPeer_set_Listener_m862200510 (PhotonPeer_t2940878176 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsIncoming()
extern "C"  TrafficStats_t250795966 * PhotonPeer_get_TrafficStatsIncoming_m2306313144 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TrafficStatsIncoming(ExitGames.Client.Photon.TrafficStats)
extern "C"  void PhotonPeer_set_TrafficStatsIncoming_m1223416313 (PhotonPeer_t2940878176 * __this, TrafficStats_t250795966 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsOutgoing()
extern "C"  TrafficStats_t250795966 * PhotonPeer_get_TrafficStatsOutgoing_m2214068314 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TrafficStatsOutgoing(ExitGames.Client.Photon.TrafficStats)
extern "C"  void PhotonPeer_set_TrafficStatsOutgoing_m2910838793 (PhotonPeer_t2940878176 * __this, TrafficStats_t250795966 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsGameLevel()
extern "C"  TrafficStatsGameLevel_t2470135126 * PhotonPeer_get_TrafficStatsGameLevel_m2654042022 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TrafficStatsGameLevel(ExitGames.Client.Photon.TrafficStatsGameLevel)
extern "C"  void PhotonPeer_set_TrafficStatsGameLevel_m1438134919 (PhotonPeer_t2940878176 * __this, TrafficStatsGameLevel_t2470135126 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsElapsedMs()
extern "C"  int64_t PhotonPeer_get_TrafficStatsElapsedMs_m1619646628 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsEnabled()
extern "C"  bool PhotonPeer_get_TrafficStatsEnabled_m3105775826 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TrafficStatsEnabled(System.Boolean)
extern "C"  void PhotonPeer_set_TrafficStatsEnabled_m102027721 (PhotonPeer_t2940878176 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::TrafficStatsReset()
extern "C"  void PhotonPeer_TrafficStatsReset_m607402915 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::InitializeTrafficStats()
extern "C"  void PhotonPeer_InitializeTrafficStats_m1149755564 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_CommandLogSize()
extern "C"  int32_t PhotonPeer_get_CommandLogSize_m1977953803 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.PhotonPeer::get_QuickResendAttempts()
extern "C"  uint8_t PhotonPeer_get_QuickResendAttempts_m2752996141 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_QuickResendAttempts(System.Byte)
extern "C"  void PhotonPeer_set_QuickResendAttempts_m1074766316 (PhotonPeer_t2940878176 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PeerStateValue ExitGames.Client.Photon.PhotonPeer::get_PeerState()
extern "C"  uint8_t PhotonPeer_get_PeerState_m4074614519 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_LimitOfUnreliableCommands()
extern "C"  int32_t PhotonPeer_get_LimitOfUnreliableCommands_m2838001734 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_LimitOfUnreliableCommands(System.Int32)
extern "C"  void PhotonPeer_set_LimitOfUnreliableCommands_m3812287641 (PhotonPeer_t2940878176 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_CrcEnabled()
extern "C"  bool PhotonPeer_get_CrcEnabled_m925068980 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_CrcEnabled(System.Boolean)
extern "C"  void PhotonPeer_set_CrcEnabled_m3898964527 (PhotonPeer_t2940878176 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_PacketLossByCrc()
extern "C"  int32_t PhotonPeer_get_PacketLossByCrc_m1001992875 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_ResentReliableCommands()
extern "C"  int32_t PhotonPeer_get_ResentReliableCommands_m847546600 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_ServerTimeInMilliSeconds()
extern "C"  int32_t PhotonPeer_get_ServerTimeInMilliSeconds_m3862387672 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_ConnectionTime()
extern "C"  int32_t PhotonPeer_get_ConnectionTime_m2656834054 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_LastSendOutgoingTime()
extern "C"  int32_t PhotonPeer_get_LastSendOutgoingTime_m675961998 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_LocalMsTimestampDelegate(ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate)
extern "C"  void PhotonPeer_set_LocalMsTimestampDelegate_m3269492624 (PhotonPeer_t2940878176 * __this, IntegerMillisecondsDelegate_t1507343911 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_RoundTripTime()
extern "C"  int32_t PhotonPeer_get_RoundTripTime_m1349293265 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_RoundTripTimeVariance()
extern "C"  int32_t PhotonPeer_get_RoundTripTimeVariance_m2665585866 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_TimestampOfLastSocketReceive()
extern "C"  int32_t PhotonPeer_get_TimestampOfLastSocketReceive_m2615506582 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PhotonPeer::get_ServerAddress()
extern "C"  String_t* PhotonPeer_get_ServerAddress_m16974593 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::get_UsedProtocol()
extern "C"  uint8_t PhotonPeer_get_UsedProtocol_m231967813 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::get_TransportProtocol()
extern "C"  uint8_t PhotonPeer_get_TransportProtocol_m401986517 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TransportProtocol(ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void PhotonPeer_set_TransportProtocol_m1785038336 (PhotonPeer_t2940878176 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_IsSimulationEnabled()
extern "C"  bool PhotonPeer_get_IsSimulationEnabled_m2477233739 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_IsSimulationEnabled(System.Boolean)
extern "C"  void PhotonPeer_set_IsSimulationEnabled_m3848882086 (PhotonPeer_t2940878176 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PhotonPeer::get_NetworkSimulationSettings()
extern "C"  NetworkSimulationSet_t2323123337 * PhotonPeer_get_NetworkSimulationSettings_m2197872635 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_MaximumTransferUnit()
extern "C"  int32_t PhotonPeer_get_MaximumTransferUnit_m3278562044 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_IsEncryptionAvailable()
extern "C"  bool PhotonPeer_get_IsEncryptionAvailable_m3287582627 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_IsSendingOnlyAcks()
extern "C"  bool PhotonPeer_get_IsSendingOnlyAcks_m1356652531 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_IsSendingOnlyAcks(System.Boolean)
extern "C"  void PhotonPeer_set_IsSendingOnlyAcks_m1779384292 (PhotonPeer_t2940878176 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::.ctor(ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void PhotonPeer__ctor_m2356993366 (PhotonPeer_t2940878176 * __this, uint8_t ___protocolType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void PhotonPeer__ctor_m476077861 (PhotonPeer_t2940878176 * __this, Il2CppObject * ___listener0, uint8_t ___protocolType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::Connect(System.String,System.String)
extern "C"  bool PhotonPeer_Connect_m3702473380 (PhotonPeer_t2940878176 * __this, String_t* ___serverAddress0, String_t* ___applicationName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::Connect(System.String,System.String,System.Object)
extern "C"  bool PhotonPeer_Connect_m1989910538 (PhotonPeer_t2940878176 * __this, String_t* ___serverAddress0, String_t* ___applicationName1, Il2CppObject * ___custom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::CreatePeerBase()
extern "C"  void PhotonPeer_CreatePeerBase_m3546869077 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect()
extern "C"  void PhotonPeer_Disconnect_m4059782688 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::StopThread()
extern "C"  void PhotonPeer_StopThread_m2861658798 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::FetchServerTimestamp()
extern "C"  void PhotonPeer_FetchServerTimestamp_m3173565241 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::EstablishEncryption()
extern "C"  bool PhotonPeer_EstablishEncryption_m3353380338 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::InitDatagramEncryption(System.Byte[],System.Byte[])
extern "C"  bool PhotonPeer_InitDatagramEncryption_m4242764008 (PhotonPeer_t2940878176 * __this, ByteU5BU5D_t3397334013* ___encryptionSecret0, ByteU5BU5D_t3397334013* ___hmacSecret1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::InitPayloadEncryption(System.Byte[])
extern "C"  void PhotonPeer_InitPayloadEncryption_m3591357684 (PhotonPeer_t2940878176 * __this, ByteU5BU5D_t3397334013* ___secret0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::Service()
extern "C"  void PhotonPeer_Service_m103679735 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOutgoingCommands()
extern "C"  bool PhotonPeer_SendOutgoingCommands_m2005647136 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendAcksOnly()
extern "C"  bool PhotonPeer_SendAcksOnly_m2937989668 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::DispatchIncomingCommands()
extern "C"  bool PhotonPeer_DispatchIncomingCommands_m728564398 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PhotonPeer::VitalStatsToString(System.Boolean)
extern "C"  String_t* PhotonPeer_VitalStatsToString_m1138300377 (PhotonPeer_t2940878176 * __this, bool ___all0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean)
extern "C"  bool PhotonPeer_OpCustom_m1130973640 (PhotonPeer_t2940878176 * __this, uint8_t ___customOpCode0, Dictionary_2_t2064209302 * ___customOpParameters1, bool ___sendReliable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean,System.Byte)
extern "C"  bool PhotonPeer_OpCustom_m3597456661 (PhotonPeer_t2940878176 * __this, uint8_t ___customOpCode0, Dictionary_2_t2064209302 * ___customOpParameters1, bool ___sendReliable2, uint8_t ___channelId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean,System.Byte,System.Boolean)
extern "C"  bool PhotonPeer_OpCustom_m3606292792 (PhotonPeer_t2940878176 * __this, uint8_t ___customOpCode0, Dictionary_2_t2064209302 * ___customOpParameters1, bool ___sendReliable2, uint8_t ___channelId3, bool ___encrypt4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::RegisterType(System.Type,System.Byte,ExitGames.Client.Photon.SerializeStreamMethod,ExitGames.Client.Photon.DeserializeStreamMethod)
extern "C"  bool PhotonPeer_RegisterType_m1188871798 (Il2CppObject * __this /* static, unused */, Type_t * ___customType0, uint8_t ___code1, SerializeStreamMethod_t1159648263 * ___serializeMethod2, DeserializeStreamMethod_t212185564 * ___constructor3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::.cctor()
extern "C"  void PhotonPeer__cctor_m3330942745 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::<EstablishEncryption>b__148_0()
extern "C"  bool PhotonPeer_U3CEstablishEncryptionU3Eb__148_0_m1725258580 (PhotonPeer_t2940878176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
