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

// ChatGui
struct ChatGui_t1028549327;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel980888449.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Chat_Cha2365316599.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void ChatGui::.ctor()
extern "C"  void ChatGui__ctor_m847843816 (ChatGui_t1028549327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatGui::get_UserName()
extern "C"  String_t* ChatGui_get_UserName_m3722766232 (ChatGui_t1028549327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::set_UserName(System.String)
extern "C"  void ChatGui_set_UserName_m2006024171 (ChatGui_t1028549327 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::Start()
extern "C"  void ChatGui_Start_m568743892 (ChatGui_t1028549327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::Connect()
extern "C"  void ChatGui_Connect_m1421620342 (ChatGui_t1028549327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnApplicationQuit()
extern "C"  void ChatGui_OnApplicationQuit_m2536721498 (ChatGui_t1028549327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::Update()
extern "C"  void ChatGui_Update_m1854606587 (ChatGui_t1028549327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnEnterSend()
extern "C"  void ChatGui_OnEnterSend_m3929761803 (ChatGui_t1028549327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnClickSend()
extern "C"  void ChatGui_OnClickSend_m3769384561 (ChatGui_t1028549327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::SendChatMessage(System.String)
extern "C"  void ChatGui_SendChatMessage_m4151789545 (ChatGui_t1028549327 * __this, String_t* ___inputLine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::PostHelpToCurrentChannel()
extern "C"  void ChatGui_PostHelpToCurrentChannel_m2708406302 (ChatGui_t1028549327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C"  void ChatGui_DebugReturn_m1461719126 (ChatGui_t1028549327 * __this, uint8_t ___level0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnConnected()
extern "C"  void ChatGui_OnConnected_m3004563516 (ChatGui_t1028549327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnDisconnected()
extern "C"  void ChatGui_OnDisconnected_m3482047268 (ChatGui_t1028549327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnChatStateChange(ExitGames.Client.Photon.Chat.ChatState)
extern "C"  void ChatGui_OnChatStateChange_m1456160501 (ChatGui_t1028549327 * __this, int32_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnSubscribed(System.String[],System.Boolean[])
extern "C"  void ChatGui_OnSubscribed_m3434492142 (ChatGui_t1028549327 * __this, StringU5BU5D_t1642385972* ___channels0, BooleanU5BU5D_t3568034315* ___results1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::InstantiateChannelButton(System.String)
extern "C"  void ChatGui_InstantiateChannelButton_m322486987 (ChatGui_t1028549327 * __this, String_t* ___channelName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::InstantiateFriendButton(System.String)
extern "C"  void ChatGui_InstantiateFriendButton_m3756384662 (ChatGui_t1028549327 * __this, String_t* ___friendId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnUnsubscribed(System.String[])
extern "C"  void ChatGui_OnUnsubscribed_m1517183758 (ChatGui_t1028549327 * __this, StringU5BU5D_t1642385972* ___channels0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnGetMessages(System.String,System.String[],System.Object[])
extern "C"  void ChatGui_OnGetMessages_m2831431503 (ChatGui_t1028549327 * __this, String_t* ___channelName0, StringU5BU5D_t1642385972* ___senders1, ObjectU5BU5D_t3614634134* ___messages2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnPrivateMessage(System.String,System.Object,System.String)
extern "C"  void ChatGui_OnPrivateMessage_m2558472815 (ChatGui_t1028549327 * __this, String_t* ___sender0, Il2CppObject * ___message1, String_t* ___channelName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnStatusUpdate(System.String,System.Int32,System.Boolean,System.Object)
extern "C"  void ChatGui_OnStatusUpdate_m4103421674 (ChatGui_t1028549327 * __this, String_t* ___user0, int32_t ___status1, bool ___gotMessage2, Il2CppObject * ___message3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::AddMessageToSelectedChannel(System.String)
extern "C"  void ChatGui_AddMessageToSelectedChannel_m1261937747 (ChatGui_t1028549327 * __this, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::ShowChannel(System.String)
extern "C"  void ChatGui_ShowChannel_m3263572534 (ChatGui_t1028549327 * __this, String_t* ___channelName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OpenDashboard()
extern "C"  void ChatGui_OpenDashboard_m2387690052 (ChatGui_t1028549327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::.cctor()
extern "C"  void ChatGui__cctor_m3251658013 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
