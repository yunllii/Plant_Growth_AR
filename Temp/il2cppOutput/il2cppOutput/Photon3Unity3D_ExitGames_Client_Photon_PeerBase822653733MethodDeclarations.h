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

// ExitGames.Client.Photon.PeerBase
struct PeerBase_t822653733;
// System.String
struct String_t;
// System.Type
struct Type_t;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t250795966;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t2470135126;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t2218572769;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t2323123337;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t2064209302;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t3648537128;
// ExitGames.Client.Photon.PeerBase/MyAction
struct MyAction_t1657508700;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel980888449.h"
#include "mscorlib_System_Object2689449295.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationRe3648537128.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase_My1657508700.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode2706638303.h"

// System.String ExitGames.Client.Photon.PeerBase::get_ClientVersion()
extern "C"  String_t* PeerBase_get_ClientVersion_m4045940908 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ExitGames.Client.Photon.PeerBase::get_SocketImplementation()
extern "C"  Type_t * PeerBase_get_SocketImplementation_m1589139367 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PeerBase::get_ServerAddress()
extern "C"  String_t* PeerBase_get_ServerAddress_m1999311996 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_ServerAddress(System.String)
extern "C"  void PeerBase_set_ServerAddress_m1769843693 (PeerBase_t822653733 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::get_TrafficStatsEnabled()
extern "C"  bool PeerBase_get_TrafficStatsEnabled_m3371541005 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PeerBase::get_TrafficStatsIncoming()
extern "C"  TrafficStats_t250795966 * PeerBase_get_TrafficStatsIncoming_m1261089285 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PeerBase::get_TrafficStatsOutgoing()
extern "C"  TrafficStats_t250795966 * PeerBase_get_TrafficStatsOutgoing_m1118621301 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PeerBase::get_TrafficStatsGameLevel()
extern "C"  TrafficStatsGameLevel_t2470135126 * PeerBase_get_TrafficStatsGameLevel_m1651107211 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::get_crcEnabled()
extern "C"  bool PeerBase_get_crcEnabled_m3428344707 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PeerBase::get_Listener()
extern "C"  Il2CppObject * PeerBase_get_Listener_m434840224 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PeerBase::get_debugOut()
extern "C"  uint8_t PeerBase_get_debugOut_m3907955243 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PeerBase::get_sentCountAllowance()
extern "C"  int32_t PeerBase_get_sentCountAllowance_m3500535801 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PeerBase::get_DisconnectTimeout()
extern "C"  int32_t PeerBase_get_DisconnectTimeout_m2876454309 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PeerBase::get_timePingInterval()
extern "C"  int32_t PeerBase_get_timePingInterval_m912638352 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.PeerBase::get_ChannelCount()
extern "C"  uint8_t PeerBase_get_ChannelCount_m2604493146 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PeerBase::get_limitOfUnreliableCommands()
extern "C"  int32_t PeerBase_get_limitOfUnreliableCommands_m623198273 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.PeerBase::get_QuickResendAttempts()
extern "C"  uint8_t PeerBase_get_QuickResendAttempts_m954690856 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::get_NetworkSimulationSettings()
extern "C"  NetworkSimulationSet_t2323123337 * PeerBase_get_NetworkSimulationSettings_m1641683380 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PeerBase::get_CommandLogSize()
extern "C"  int32_t PeerBase_get_CommandLogSize_m224001764 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::CommandLogResize()
extern "C"  void PeerBase_CommandLogResize_m3839318344 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::CommandLogInit()
extern "C"  void PeerBase_CommandLogInit_m3347985146 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::InitOnce()
extern "C"  void PeerBase_InitOnce_m3063915750 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PeerBase::GetHttpKeyValueString(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  String_t* PeerBase_GetHttpKeyValueString_m3139383914 (PeerBase_t822653733 * __this, Dictionary_2_t3943999495 * ___dic0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::get_IsIpv6()
extern "C"  bool PeerBase_get_IsIpv6_m2459413435 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.PeerBase::PrepareConnectData(System.String,System.String,System.Object)
extern "C"  ByteU5BU5D_t3397334013* PeerBase_PrepareConnectData_m1691151926 (PeerBase_t822653733 * __this, String_t* ___serverAddress0, String_t* ___appID1, Il2CppObject * ___custom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PeerBase::PepareWebSocketUrl(System.String,System.String,System.Object)
extern "C"  String_t* PeerBase_PepareWebSocketUrl_m3270575959 (PeerBase_t822653733 * __this, String_t* ___serverAddress0, String_t* ___appId1, Il2CppObject * ___customData2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::EnqueueOperation(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Byte,System.Boolean,System.Byte,System.Boolean)
extern "C"  bool PeerBase_EnqueueOperation_m3212509590 (PeerBase_t822653733 * __this, Dictionary_2_t2064209302 * ___parameters0, uint8_t ___opCode1, bool ___sendReliable2, uint8_t ___channelId3, bool ___encrypted4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::SendAcksOnly()
extern "C"  bool PeerBase_SendAcksOnly_m1473352543 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::InitCallback()
extern "C"  void PeerBase_InitCallback_m2650248812 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::get_IsSendingOnlyAcks()
extern "C"  bool PeerBase_get_IsSendingOnlyAcks_m841613004 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PeerBase::get_mtu()
extern "C"  int32_t PeerBase_get_mtu_m3012400854 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::ExchangeKeysForEncryption(System.Object)
extern "C"  bool PeerBase_ExchangeKeysForEncryption_m2985561652 (PeerBase_t822653733 * __this, Il2CppObject * ___lockObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::DeriveSharedKey(ExitGames.Client.Photon.OperationResponse)
extern "C"  void PeerBase_DeriveSharedKey_m295878150 (PeerBase_t822653733 * __this, OperationResponse_t3648537128 * ___operationResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueActionForDispatch(ExitGames.Client.Photon.PeerBase/MyAction)
extern "C"  void PeerBase_EnqueueActionForDispatch_m4070531746 (PeerBase_t822653733 * __this, MyAction_t1657508700 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C"  void PeerBase_EnqueueDebugReturn_m2000903833 (PeerBase_t822653733 * __this, uint8_t ___level0, String_t* ___debugReturn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueStatusCallback(ExitGames.Client.Photon.StatusCode)
extern "C"  void PeerBase_EnqueueStatusCallback_m2520519967 (PeerBase_t822653733 * __this, int32_t ___statusValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::InitPeerBase()
extern "C"  void PeerBase_InitPeerBase_m4016381414 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::DeserializeMessageAndCallback(System.Byte[])
extern "C"  bool PeerBase_DeserializeMessageAndCallback_m2142834512 (PeerBase_t822653733 * __this, ByteU5BU5D_t3397334013* ___inBuff0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::SendNetworkSimulated(ExitGames.Client.Photon.PeerBase/MyAction)
extern "C"  void PeerBase_SendNetworkSimulated_m4275030151 (PeerBase_t822653733 * __this, MyAction_t1657508700 * ___sendAction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::ReceiveNetworkSimulated(ExitGames.Client.Photon.PeerBase/MyAction)
extern "C"  void PeerBase_ReceiveNetworkSimulated_m3185670942 (PeerBase_t822653733 * __this, MyAction_t1657508700 * ___receiveAction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::NetworkSimRun()
extern "C"  void PeerBase_NetworkSimRun_m1829264845 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::UpdateRoundTripTimeAndVariance(System.Int32)
extern "C"  void PeerBase_UpdateRoundTripTimeAndVariance_m2179966203 (PeerBase_t822653733 * __this, int32_t ___lastRoundtripTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::InitEncryption(System.Byte[])
extern "C"  void PeerBase_InitEncryption_m4127505939 (PeerBase_t822653733 * __this, ByteU5BU5D_t3397334013* ___secret0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::.ctor()
extern "C"  void PeerBase__ctor_m756255873 (PeerBase_t822653733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
