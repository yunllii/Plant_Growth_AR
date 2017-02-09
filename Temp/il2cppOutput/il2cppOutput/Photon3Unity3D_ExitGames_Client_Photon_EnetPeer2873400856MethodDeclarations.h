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

// ExitGames.Client.Photon.EnetPeer
struct EnetPeer_t2873400856;
// ExitGames.Client.Photon.EncryptorManaged.Encryptor
struct Encryptor_t1736907404;
// ExitGames.Client.Photon.EncryptorManaged.Decryptor
struct Decryptor_t173433802;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t2064209302;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>
struct Queue_1_t1953271134;
// ExitGames.Client.Photon.NCommand
struct NCommand_t2133614299;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase_Eg3215798507.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_NCommand2133614299.h"

// ExitGames.Client.Photon.EncryptorManaged.Encryptor ExitGames.Client.Photon.EnetPeer::get_encryptor()
extern "C"  Encryptor_t1736907404 * EnetPeer_get_encryptor_m2078509073 (EnetPeer_t2873400856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.EncryptorManaged.Decryptor ExitGames.Client.Photon.EnetPeer::get_decryptor()
extern "C"  Decryptor_t173433802 * EnetPeer_get_decryptor_m1393614993 (EnetPeer_t2873400856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::.ctor()
extern "C"  void EnetPeer__ctor_m2821722796 (EnetPeer_t2873400856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::InitPeerBase()
extern "C"  void EnetPeer_InitPeerBase_m1122160879 (EnetPeer_t2873400856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::Connect(System.String,System.String,System.Object)
extern "C"  bool EnetPeer_Connect_m2424127442 (EnetPeer_t2873400856 * __this, String_t* ___ipport0, String_t* ___appID1, Il2CppObject * ___custom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::OnConnect()
extern "C"  void EnetPeer_OnConnect_m800256473 (EnetPeer_t2873400856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::Disconnect()
extern "C"  void EnetPeer_Disconnect_m3207520808 (EnetPeer_t2873400856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::StopConnection()
extern "C"  void EnetPeer_StopConnection_m2579816766 (EnetPeer_t2873400856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::FetchServerTimestamp()
extern "C"  void EnetPeer_FetchServerTimestamp_m753070513 (EnetPeer_t2873400856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::DispatchIncomingCommands()
extern "C"  bool EnetPeer_DispatchIncomingCommands_m2620237542 (EnetPeer_t2873400856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.EnetPeer::GetFragmentLength()
extern "C"  int32_t EnetPeer_GetFragmentLength_m3169751844 (EnetPeer_t2873400856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.EnetPeer::CalculateBufferLen()
extern "C"  int32_t EnetPeer_CalculateBufferLen_m113665599 (EnetPeer_t2873400856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.EnetPeer::CalculateInitialOffset()
extern "C"  int32_t EnetPeer_CalculateInitialOffset_m2188011071 (EnetPeer_t2873400856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::SendAcksOnly()
extern "C"  bool EnetPeer_SendAcksOnly_m335550300 (EnetPeer_t2873400856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::SendOutgoingCommands()
extern "C"  bool EnetPeer_SendOutgoingCommands_m293004664 (EnetPeer_t2873400856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::AreReliableCommandsInTransit()
extern "C"  bool EnetPeer_AreReliableCommandsInTransit_m3363095782 (EnetPeer_t2873400856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::EnqueueOperation(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Byte,System.Boolean,System.Byte,System.Boolean,ExitGames.Client.Photon.PeerBase/EgMessageType)
extern "C"  bool EnetPeer_EnqueueOperation_m2455999968 (EnetPeer_t2873400856 * __this, Dictionary_2_t2064209302 * ___parameters0, uint8_t ___opCode1, bool ___sendReliable2, uint8_t ___channelId3, bool ___encrypt4, uint8_t ___messageType5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::CreateAndEnqueueCommand(System.Byte,System.Byte[],System.Byte)
extern "C"  bool EnetPeer_CreateAndEnqueueCommand_m4177690299 (EnetPeer_t2873400856 * __this, uint8_t ___commandType0, ByteU5BU5D_t3397334013* ___payload1, uint8_t ___channelNumber2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.EnetPeer::SerializeOperationToMessage(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.PeerBase/EgMessageType,System.Boolean)
extern "C"  ByteU5BU5D_t3397334013* EnetPeer_SerializeOperationToMessage_m248342036 (EnetPeer_t2873400856 * __this, uint8_t ___opc0, Dictionary_2_t2064209302 * ___parameters1, uint8_t ___messageType2, bool ___encrypt3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.EnetPeer::SerializeToBuffer(System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>)
extern "C"  int32_t EnetPeer_SerializeToBuffer_m1123219505 (EnetPeer_t2873400856 * __this, Queue_1_t1953271134 * ___commandList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::SendData(System.Byte[],System.Int32)
extern "C"  void EnetPeer_SendData_m2451133342 (EnetPeer_t2873400856 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::SendToSocket(System.Byte[],System.Int32)
extern "C"  void EnetPeer_SendToSocket_m3665619602 (EnetPeer_t2873400856 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::SendDataEncrypted(System.Byte[],System.Int32)
extern "C"  void EnetPeer_SendDataEncrypted_m489363112 (EnetPeer_t2873400856 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::QueueSentCommand(ExitGames.Client.Photon.NCommand)
extern "C"  void EnetPeer_QueueSentCommand_m4290688893 (EnetPeer_t2873400856 * __this, NCommand_t2133614299 * ___command0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::QueueOutgoingReliableCommand(ExitGames.Client.Photon.NCommand)
extern "C"  void EnetPeer_QueueOutgoingReliableCommand_m1879057739 (EnetPeer_t2873400856 * __this, NCommand_t2133614299 * ___command0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::QueueOutgoingUnreliableCommand(ExitGames.Client.Photon.NCommand)
extern "C"  void EnetPeer_QueueOutgoingUnreliableCommand_m3425744164 (EnetPeer_t2873400856 * __this, NCommand_t2133614299 * ___command0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::QueueOutgoingAcknowledgement(ExitGames.Client.Photon.NCommand)
extern "C"  void EnetPeer_QueueOutgoingAcknowledgement_m2587259222 (EnetPeer_t2873400856 * __this, NCommand_t2133614299 * ___command0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::ReceiveIncomingCommands(System.Byte[],System.Int32)
extern "C"  void EnetPeer_ReceiveIncomingCommands_m1366303457 (EnetPeer_t2873400856 * __this, ByteU5BU5D_t3397334013* ___inBuff0, int32_t ___dataLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::ExecuteCommand(ExitGames.Client.Photon.NCommand)
extern "C"  bool EnetPeer_ExecuteCommand_m4102064367 (EnetPeer_t2873400856 * __this, NCommand_t2133614299 * ___command0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::QueueIncomingCommand(ExitGames.Client.Photon.NCommand)
extern "C"  bool EnetPeer_QueueIncomingCommand_m50766087 (EnetPeer_t2873400856 * __this, NCommand_t2133614299 * ___command0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.EnetPeer::RemoveSentReliableCommand(System.Int32,System.Int32)
extern "C"  NCommand_t2133614299 * EnetPeer_RemoveSentReliableCommand_m19622193 (EnetPeer_t2873400856 * __this, int32_t ___ackReceivedReliableSequenceNumber0, int32_t ___ackReceivedChannel1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::.cctor()
extern "C"  void EnetPeer__cctor_m3058376257 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::<ExecuteCommand>b__58_0()
extern "C"  void EnetPeer_U3CExecuteCommandU3Eb__58_0_m3883740440 (EnetPeer_t2873400856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
