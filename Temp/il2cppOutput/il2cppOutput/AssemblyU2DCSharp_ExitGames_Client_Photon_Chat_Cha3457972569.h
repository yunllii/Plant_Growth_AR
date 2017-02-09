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
// ExitGames.Client.Photon.Chat.AuthenticationValues
struct AuthenticationValues_t1914595372;
// System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>
struct Dictionary_2_t4186722369;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t362681087;
// ExitGames.Client.Photon.Chat.IChatClientListener
struct IChatClientListener_t3071226232;
// ExitGames.Client.Photon.Chat.ChatPeer
struct ChatPeer_t3121459608;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Chat_Cha2365316599.h"
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_Chat_Cha2300720745.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Chat.ChatClient
struct  ChatClient_t3457972569  : public Il2CppObject
{
public:
	// System.String ExitGames.Client.Photon.Chat.ChatClient::<NameServerAddress>k__BackingField
	String_t* ___U3CNameServerAddressU3Ek__BackingField_1;
	// System.String ExitGames.Client.Photon.Chat.ChatClient::<FrontendAddress>k__BackingField
	String_t* ___U3CFrontendAddressU3Ek__BackingField_2;
	// System.String ExitGames.Client.Photon.Chat.ChatClient::chatRegion
	String_t* ___chatRegion_3;
	// ExitGames.Client.Photon.Chat.ChatState ExitGames.Client.Photon.Chat.ChatClient::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_4;
	// ExitGames.Client.Photon.Chat.ChatDisconnectCause ExitGames.Client.Photon.Chat.ChatClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_5;
	// System.String ExitGames.Client.Photon.Chat.ChatClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_6;
	// System.String ExitGames.Client.Photon.Chat.ChatClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_7;
	// ExitGames.Client.Photon.Chat.AuthenticationValues ExitGames.Client.Photon.Chat.ChatClient::<AuthValues>k__BackingField
	AuthenticationValues_t1914595372 * ___U3CAuthValuesU3Ek__BackingField_8;
	// System.Int32 ExitGames.Client.Photon.Chat.ChatClient::MessageLimit
	int32_t ___MessageLimit_9;
	// System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel> ExitGames.Client.Photon.Chat.ChatClient::PublicChannels
	Dictionary_2_t4186722369 * ___PublicChannels_10;
	// System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel> ExitGames.Client.Photon.Chat.ChatClient::PrivateChannels
	Dictionary_2_t4186722369 * ___PrivateChannels_11;
	// System.Collections.Generic.HashSet`1<System.String> ExitGames.Client.Photon.Chat.ChatClient::PublicChannelsUnsubscribing
	HashSet_1_t362681087 * ___PublicChannelsUnsubscribing_12;
	// ExitGames.Client.Photon.Chat.IChatClientListener ExitGames.Client.Photon.Chat.ChatClient::listener
	Il2CppObject * ___listener_13;
	// ExitGames.Client.Photon.Chat.ChatPeer ExitGames.Client.Photon.Chat.ChatClient::chatPeer
	ChatPeer_t3121459608 * ___chatPeer_14;
	// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::didAuthenticate
	bool ___didAuthenticate_15;
	// System.Int32 ExitGames.Client.Photon.Chat.ChatClient::msDeltaForServiceCalls
	int32_t ___msDeltaForServiceCalls_16;
	// System.Int32 ExitGames.Client.Photon.Chat.ChatClient::msTimestampOfLastServiceCall
	int32_t ___msTimestampOfLastServiceCall_17;

public:
	inline static int32_t get_offset_of_U3CNameServerAddressU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ChatClient_t3457972569, ___U3CNameServerAddressU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameServerAddressU3Ek__BackingField_1() const { return ___U3CNameServerAddressU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameServerAddressU3Ek__BackingField_1() { return &___U3CNameServerAddressU3Ek__BackingField_1; }
	inline void set_U3CNameServerAddressU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameServerAddressU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNameServerAddressU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CFrontendAddressU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ChatClient_t3457972569, ___U3CFrontendAddressU3Ek__BackingField_2)); }
	inline String_t* get_U3CFrontendAddressU3Ek__BackingField_2() const { return ___U3CFrontendAddressU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CFrontendAddressU3Ek__BackingField_2() { return &___U3CFrontendAddressU3Ek__BackingField_2; }
	inline void set_U3CFrontendAddressU3Ek__BackingField_2(String_t* value)
	{
		___U3CFrontendAddressU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CFrontendAddressU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_chatRegion_3() { return static_cast<int32_t>(offsetof(ChatClient_t3457972569, ___chatRegion_3)); }
	inline String_t* get_chatRegion_3() const { return ___chatRegion_3; }
	inline String_t** get_address_of_chatRegion_3() { return &___chatRegion_3; }
	inline void set_chatRegion_3(String_t* value)
	{
		___chatRegion_3 = value;
		Il2CppCodeGenWriteBarrier(&___chatRegion_3, value);
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ChatClient_t3457972569, ___U3CStateU3Ek__BackingField_4)); }
	inline int32_t get_U3CStateU3Ek__BackingField_4() const { return ___U3CStateU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_4() { return &___U3CStateU3Ek__BackingField_4; }
	inline void set_U3CStateU3Ek__BackingField_4(int32_t value)
	{
		___U3CStateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CDisconnectedCauseU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ChatClient_t3457972569, ___U3CDisconnectedCauseU3Ek__BackingField_5)); }
	inline int32_t get_U3CDisconnectedCauseU3Ek__BackingField_5() const { return ___U3CDisconnectedCauseU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CDisconnectedCauseU3Ek__BackingField_5() { return &___U3CDisconnectedCauseU3Ek__BackingField_5; }
	inline void set_U3CDisconnectedCauseU3Ek__BackingField_5(int32_t value)
	{
		___U3CDisconnectedCauseU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CAppVersionU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ChatClient_t3457972569, ___U3CAppVersionU3Ek__BackingField_6)); }
	inline String_t* get_U3CAppVersionU3Ek__BackingField_6() const { return ___U3CAppVersionU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CAppVersionU3Ek__BackingField_6() { return &___U3CAppVersionU3Ek__BackingField_6; }
	inline void set_U3CAppVersionU3Ek__BackingField_6(String_t* value)
	{
		___U3CAppVersionU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAppVersionU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_U3CAppIdU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ChatClient_t3457972569, ___U3CAppIdU3Ek__BackingField_7)); }
	inline String_t* get_U3CAppIdU3Ek__BackingField_7() const { return ___U3CAppIdU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CAppIdU3Ek__BackingField_7() { return &___U3CAppIdU3Ek__BackingField_7; }
	inline void set_U3CAppIdU3Ek__BackingField_7(String_t* value)
	{
		___U3CAppIdU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAppIdU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3CAuthValuesU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ChatClient_t3457972569, ___U3CAuthValuesU3Ek__BackingField_8)); }
	inline AuthenticationValues_t1914595372 * get_U3CAuthValuesU3Ek__BackingField_8() const { return ___U3CAuthValuesU3Ek__BackingField_8; }
	inline AuthenticationValues_t1914595372 ** get_address_of_U3CAuthValuesU3Ek__BackingField_8() { return &___U3CAuthValuesU3Ek__BackingField_8; }
	inline void set_U3CAuthValuesU3Ek__BackingField_8(AuthenticationValues_t1914595372 * value)
	{
		___U3CAuthValuesU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAuthValuesU3Ek__BackingField_8, value);
	}

	inline static int32_t get_offset_of_MessageLimit_9() { return static_cast<int32_t>(offsetof(ChatClient_t3457972569, ___MessageLimit_9)); }
	inline int32_t get_MessageLimit_9() const { return ___MessageLimit_9; }
	inline int32_t* get_address_of_MessageLimit_9() { return &___MessageLimit_9; }
	inline void set_MessageLimit_9(int32_t value)
	{
		___MessageLimit_9 = value;
	}

	inline static int32_t get_offset_of_PublicChannels_10() { return static_cast<int32_t>(offsetof(ChatClient_t3457972569, ___PublicChannels_10)); }
	inline Dictionary_2_t4186722369 * get_PublicChannels_10() const { return ___PublicChannels_10; }
	inline Dictionary_2_t4186722369 ** get_address_of_PublicChannels_10() { return &___PublicChannels_10; }
	inline void set_PublicChannels_10(Dictionary_2_t4186722369 * value)
	{
		___PublicChannels_10 = value;
		Il2CppCodeGenWriteBarrier(&___PublicChannels_10, value);
	}

	inline static int32_t get_offset_of_PrivateChannels_11() { return static_cast<int32_t>(offsetof(ChatClient_t3457972569, ___PrivateChannels_11)); }
	inline Dictionary_2_t4186722369 * get_PrivateChannels_11() const { return ___PrivateChannels_11; }
	inline Dictionary_2_t4186722369 ** get_address_of_PrivateChannels_11() { return &___PrivateChannels_11; }
	inline void set_PrivateChannels_11(Dictionary_2_t4186722369 * value)
	{
		___PrivateChannels_11 = value;
		Il2CppCodeGenWriteBarrier(&___PrivateChannels_11, value);
	}

	inline static int32_t get_offset_of_PublicChannelsUnsubscribing_12() { return static_cast<int32_t>(offsetof(ChatClient_t3457972569, ___PublicChannelsUnsubscribing_12)); }
	inline HashSet_1_t362681087 * get_PublicChannelsUnsubscribing_12() const { return ___PublicChannelsUnsubscribing_12; }
	inline HashSet_1_t362681087 ** get_address_of_PublicChannelsUnsubscribing_12() { return &___PublicChannelsUnsubscribing_12; }
	inline void set_PublicChannelsUnsubscribing_12(HashSet_1_t362681087 * value)
	{
		___PublicChannelsUnsubscribing_12 = value;
		Il2CppCodeGenWriteBarrier(&___PublicChannelsUnsubscribing_12, value);
	}

	inline static int32_t get_offset_of_listener_13() { return static_cast<int32_t>(offsetof(ChatClient_t3457972569, ___listener_13)); }
	inline Il2CppObject * get_listener_13() const { return ___listener_13; }
	inline Il2CppObject ** get_address_of_listener_13() { return &___listener_13; }
	inline void set_listener_13(Il2CppObject * value)
	{
		___listener_13 = value;
		Il2CppCodeGenWriteBarrier(&___listener_13, value);
	}

	inline static int32_t get_offset_of_chatPeer_14() { return static_cast<int32_t>(offsetof(ChatClient_t3457972569, ___chatPeer_14)); }
	inline ChatPeer_t3121459608 * get_chatPeer_14() const { return ___chatPeer_14; }
	inline ChatPeer_t3121459608 ** get_address_of_chatPeer_14() { return &___chatPeer_14; }
	inline void set_chatPeer_14(ChatPeer_t3121459608 * value)
	{
		___chatPeer_14 = value;
		Il2CppCodeGenWriteBarrier(&___chatPeer_14, value);
	}

	inline static int32_t get_offset_of_didAuthenticate_15() { return static_cast<int32_t>(offsetof(ChatClient_t3457972569, ___didAuthenticate_15)); }
	inline bool get_didAuthenticate_15() const { return ___didAuthenticate_15; }
	inline bool* get_address_of_didAuthenticate_15() { return &___didAuthenticate_15; }
	inline void set_didAuthenticate_15(bool value)
	{
		___didAuthenticate_15 = value;
	}

	inline static int32_t get_offset_of_msDeltaForServiceCalls_16() { return static_cast<int32_t>(offsetof(ChatClient_t3457972569, ___msDeltaForServiceCalls_16)); }
	inline int32_t get_msDeltaForServiceCalls_16() const { return ___msDeltaForServiceCalls_16; }
	inline int32_t* get_address_of_msDeltaForServiceCalls_16() { return &___msDeltaForServiceCalls_16; }
	inline void set_msDeltaForServiceCalls_16(int32_t value)
	{
		___msDeltaForServiceCalls_16 = value;
	}

	inline static int32_t get_offset_of_msTimestampOfLastServiceCall_17() { return static_cast<int32_t>(offsetof(ChatClient_t3457972569, ___msTimestampOfLastServiceCall_17)); }
	inline int32_t get_msTimestampOfLastServiceCall_17() const { return ___msTimestampOfLastServiceCall_17; }
	inline int32_t* get_address_of_msTimestampOfLastServiceCall_17() { return &___msTimestampOfLastServiceCall_17; }
	inline void set_msTimestampOfLastServiceCall_17(int32_t value)
	{
		___msTimestampOfLastServiceCall_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
