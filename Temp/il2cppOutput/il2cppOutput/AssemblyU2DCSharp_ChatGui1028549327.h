#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t1642385972;
// System.String
struct String_t;
// ExitGames.Client.Photon.Chat.ChatClient
struct ChatClient_t3457972569;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.InputField
struct InputField_t1631627530;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Toggle
struct Toggle_t3976754468;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>
struct Dictionary_2_t1596566434;
// System.Collections.Generic.Dictionary`2<System.String,FriendItem>
struct Dictionary_2_t1738497051;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChatGui
struct  ChatGui_t1028549327  : public MonoBehaviour_t1158329972
{
public:
	// System.String[] ChatGui::ChannelsToJoinOnConnect
	StringU5BU5D_t1642385972* ___ChannelsToJoinOnConnect_2;
	// System.String[] ChatGui::FriendsList
	StringU5BU5D_t1642385972* ___FriendsList_3;
	// System.Int32 ChatGui::HistoryLengthToFetch
	int32_t ___HistoryLengthToFetch_4;
	// System.String ChatGui::<UserName>k__BackingField
	String_t* ___U3CUserNameU3Ek__BackingField_5;
	// System.String ChatGui::selectedChannelName
	String_t* ___selectedChannelName_6;
	// ExitGames.Client.Photon.Chat.ChatClient ChatGui::chatClient
	ChatClient_t3457972569 * ___chatClient_7;
	// UnityEngine.GameObject ChatGui::missingAppIdErrorPanel
	GameObject_t1756533147 * ___missingAppIdErrorPanel_8;
	// UnityEngine.GameObject ChatGui::ConnectingLabel
	GameObject_t1756533147 * ___ConnectingLabel_9;
	// UnityEngine.RectTransform ChatGui::ChatPanel
	RectTransform_t3349966182 * ___ChatPanel_10;
	// UnityEngine.GameObject ChatGui::UserIdFormPanel
	GameObject_t1756533147 * ___UserIdFormPanel_11;
	// UnityEngine.UI.InputField ChatGui::InputFieldChat
	InputField_t1631627530 * ___InputFieldChat_12;
	// UnityEngine.UI.Text ChatGui::CurrentChannelText
	Text_t356221433 * ___CurrentChannelText_13;
	// UnityEngine.UI.Toggle ChatGui::ChannelToggleToInstantiate
	Toggle_t3976754468 * ___ChannelToggleToInstantiate_14;
	// UnityEngine.GameObject ChatGui::FriendListUiItemtoInstantiate
	GameObject_t1756533147 * ___FriendListUiItemtoInstantiate_15;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle> ChatGui::channelToggles
	Dictionary_2_t1596566434 * ___channelToggles_16;
	// System.Collections.Generic.Dictionary`2<System.String,FriendItem> ChatGui::friendListItemLUT
	Dictionary_2_t1738497051 * ___friendListItemLUT_17;
	// System.Boolean ChatGui::ShowState
	bool ___ShowState_18;
	// UnityEngine.GameObject ChatGui::Title
	GameObject_t1756533147 * ___Title_19;
	// UnityEngine.UI.Text ChatGui::StateText
	Text_t356221433 * ___StateText_20;
	// UnityEngine.UI.Text ChatGui::UserIdText
	Text_t356221433 * ___UserIdText_21;
	// System.Int32 ChatGui::TestLength
	int32_t ___TestLength_23;
	// System.Byte[] ChatGui::testBytes
	ByteU5BU5D_t3397334013* ___testBytes_24;

public:
	inline static int32_t get_offset_of_ChannelsToJoinOnConnect_2() { return static_cast<int32_t>(offsetof(ChatGui_t1028549327, ___ChannelsToJoinOnConnect_2)); }
	inline StringU5BU5D_t1642385972* get_ChannelsToJoinOnConnect_2() const { return ___ChannelsToJoinOnConnect_2; }
	inline StringU5BU5D_t1642385972** get_address_of_ChannelsToJoinOnConnect_2() { return &___ChannelsToJoinOnConnect_2; }
	inline void set_ChannelsToJoinOnConnect_2(StringU5BU5D_t1642385972* value)
	{
		___ChannelsToJoinOnConnect_2 = value;
		Il2CppCodeGenWriteBarrier(&___ChannelsToJoinOnConnect_2, value);
	}

	inline static int32_t get_offset_of_FriendsList_3() { return static_cast<int32_t>(offsetof(ChatGui_t1028549327, ___FriendsList_3)); }
	inline StringU5BU5D_t1642385972* get_FriendsList_3() const { return ___FriendsList_3; }
	inline StringU5BU5D_t1642385972** get_address_of_FriendsList_3() { return &___FriendsList_3; }
	inline void set_FriendsList_3(StringU5BU5D_t1642385972* value)
	{
		___FriendsList_3 = value;
		Il2CppCodeGenWriteBarrier(&___FriendsList_3, value);
	}

	inline static int32_t get_offset_of_HistoryLengthToFetch_4() { return static_cast<int32_t>(offsetof(ChatGui_t1028549327, ___HistoryLengthToFetch_4)); }
	inline int32_t get_HistoryLengthToFetch_4() const { return ___HistoryLengthToFetch_4; }
	inline int32_t* get_address_of_HistoryLengthToFetch_4() { return &___HistoryLengthToFetch_4; }
	inline void set_HistoryLengthToFetch_4(int32_t value)
	{
		___HistoryLengthToFetch_4 = value;
	}

	inline static int32_t get_offset_of_U3CUserNameU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ChatGui_t1028549327, ___U3CUserNameU3Ek__BackingField_5)); }
	inline String_t* get_U3CUserNameU3Ek__BackingField_5() const { return ___U3CUserNameU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CUserNameU3Ek__BackingField_5() { return &___U3CUserNameU3Ek__BackingField_5; }
	inline void set_U3CUserNameU3Ek__BackingField_5(String_t* value)
	{
		___U3CUserNameU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUserNameU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_selectedChannelName_6() { return static_cast<int32_t>(offsetof(ChatGui_t1028549327, ___selectedChannelName_6)); }
	inline String_t* get_selectedChannelName_6() const { return ___selectedChannelName_6; }
	inline String_t** get_address_of_selectedChannelName_6() { return &___selectedChannelName_6; }
	inline void set_selectedChannelName_6(String_t* value)
	{
		___selectedChannelName_6 = value;
		Il2CppCodeGenWriteBarrier(&___selectedChannelName_6, value);
	}

	inline static int32_t get_offset_of_chatClient_7() { return static_cast<int32_t>(offsetof(ChatGui_t1028549327, ___chatClient_7)); }
	inline ChatClient_t3457972569 * get_chatClient_7() const { return ___chatClient_7; }
	inline ChatClient_t3457972569 ** get_address_of_chatClient_7() { return &___chatClient_7; }
	inline void set_chatClient_7(ChatClient_t3457972569 * value)
	{
		___chatClient_7 = value;
		Il2CppCodeGenWriteBarrier(&___chatClient_7, value);
	}

	inline static int32_t get_offset_of_missingAppIdErrorPanel_8() { return static_cast<int32_t>(offsetof(ChatGui_t1028549327, ___missingAppIdErrorPanel_8)); }
	inline GameObject_t1756533147 * get_missingAppIdErrorPanel_8() const { return ___missingAppIdErrorPanel_8; }
	inline GameObject_t1756533147 ** get_address_of_missingAppIdErrorPanel_8() { return &___missingAppIdErrorPanel_8; }
	inline void set_missingAppIdErrorPanel_8(GameObject_t1756533147 * value)
	{
		___missingAppIdErrorPanel_8 = value;
		Il2CppCodeGenWriteBarrier(&___missingAppIdErrorPanel_8, value);
	}

	inline static int32_t get_offset_of_ConnectingLabel_9() { return static_cast<int32_t>(offsetof(ChatGui_t1028549327, ___ConnectingLabel_9)); }
	inline GameObject_t1756533147 * get_ConnectingLabel_9() const { return ___ConnectingLabel_9; }
	inline GameObject_t1756533147 ** get_address_of_ConnectingLabel_9() { return &___ConnectingLabel_9; }
	inline void set_ConnectingLabel_9(GameObject_t1756533147 * value)
	{
		___ConnectingLabel_9 = value;
		Il2CppCodeGenWriteBarrier(&___ConnectingLabel_9, value);
	}

	inline static int32_t get_offset_of_ChatPanel_10() { return static_cast<int32_t>(offsetof(ChatGui_t1028549327, ___ChatPanel_10)); }
	inline RectTransform_t3349966182 * get_ChatPanel_10() const { return ___ChatPanel_10; }
	inline RectTransform_t3349966182 ** get_address_of_ChatPanel_10() { return &___ChatPanel_10; }
	inline void set_ChatPanel_10(RectTransform_t3349966182 * value)
	{
		___ChatPanel_10 = value;
		Il2CppCodeGenWriteBarrier(&___ChatPanel_10, value);
	}

	inline static int32_t get_offset_of_UserIdFormPanel_11() { return static_cast<int32_t>(offsetof(ChatGui_t1028549327, ___UserIdFormPanel_11)); }
	inline GameObject_t1756533147 * get_UserIdFormPanel_11() const { return ___UserIdFormPanel_11; }
	inline GameObject_t1756533147 ** get_address_of_UserIdFormPanel_11() { return &___UserIdFormPanel_11; }
	inline void set_UserIdFormPanel_11(GameObject_t1756533147 * value)
	{
		___UserIdFormPanel_11 = value;
		Il2CppCodeGenWriteBarrier(&___UserIdFormPanel_11, value);
	}

	inline static int32_t get_offset_of_InputFieldChat_12() { return static_cast<int32_t>(offsetof(ChatGui_t1028549327, ___InputFieldChat_12)); }
	inline InputField_t1631627530 * get_InputFieldChat_12() const { return ___InputFieldChat_12; }
	inline InputField_t1631627530 ** get_address_of_InputFieldChat_12() { return &___InputFieldChat_12; }
	inline void set_InputFieldChat_12(InputField_t1631627530 * value)
	{
		___InputFieldChat_12 = value;
		Il2CppCodeGenWriteBarrier(&___InputFieldChat_12, value);
	}

	inline static int32_t get_offset_of_CurrentChannelText_13() { return static_cast<int32_t>(offsetof(ChatGui_t1028549327, ___CurrentChannelText_13)); }
	inline Text_t356221433 * get_CurrentChannelText_13() const { return ___CurrentChannelText_13; }
	inline Text_t356221433 ** get_address_of_CurrentChannelText_13() { return &___CurrentChannelText_13; }
	inline void set_CurrentChannelText_13(Text_t356221433 * value)
	{
		___CurrentChannelText_13 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentChannelText_13, value);
	}

	inline static int32_t get_offset_of_ChannelToggleToInstantiate_14() { return static_cast<int32_t>(offsetof(ChatGui_t1028549327, ___ChannelToggleToInstantiate_14)); }
	inline Toggle_t3976754468 * get_ChannelToggleToInstantiate_14() const { return ___ChannelToggleToInstantiate_14; }
	inline Toggle_t3976754468 ** get_address_of_ChannelToggleToInstantiate_14() { return &___ChannelToggleToInstantiate_14; }
	inline void set_ChannelToggleToInstantiate_14(Toggle_t3976754468 * value)
	{
		___ChannelToggleToInstantiate_14 = value;
		Il2CppCodeGenWriteBarrier(&___ChannelToggleToInstantiate_14, value);
	}

	inline static int32_t get_offset_of_FriendListUiItemtoInstantiate_15() { return static_cast<int32_t>(offsetof(ChatGui_t1028549327, ___FriendListUiItemtoInstantiate_15)); }
	inline GameObject_t1756533147 * get_FriendListUiItemtoInstantiate_15() const { return ___FriendListUiItemtoInstantiate_15; }
	inline GameObject_t1756533147 ** get_address_of_FriendListUiItemtoInstantiate_15() { return &___FriendListUiItemtoInstantiate_15; }
	inline void set_FriendListUiItemtoInstantiate_15(GameObject_t1756533147 * value)
	{
		___FriendListUiItemtoInstantiate_15 = value;
		Il2CppCodeGenWriteBarrier(&___FriendListUiItemtoInstantiate_15, value);
	}

	inline static int32_t get_offset_of_channelToggles_16() { return static_cast<int32_t>(offsetof(ChatGui_t1028549327, ___channelToggles_16)); }
	inline Dictionary_2_t1596566434 * get_channelToggles_16() const { return ___channelToggles_16; }
	inline Dictionary_2_t1596566434 ** get_address_of_channelToggles_16() { return &___channelToggles_16; }
	inline void set_channelToggles_16(Dictionary_2_t1596566434 * value)
	{
		___channelToggles_16 = value;
		Il2CppCodeGenWriteBarrier(&___channelToggles_16, value);
	}

	inline static int32_t get_offset_of_friendListItemLUT_17() { return static_cast<int32_t>(offsetof(ChatGui_t1028549327, ___friendListItemLUT_17)); }
	inline Dictionary_2_t1738497051 * get_friendListItemLUT_17() const { return ___friendListItemLUT_17; }
	inline Dictionary_2_t1738497051 ** get_address_of_friendListItemLUT_17() { return &___friendListItemLUT_17; }
	inline void set_friendListItemLUT_17(Dictionary_2_t1738497051 * value)
	{
		___friendListItemLUT_17 = value;
		Il2CppCodeGenWriteBarrier(&___friendListItemLUT_17, value);
	}

	inline static int32_t get_offset_of_ShowState_18() { return static_cast<int32_t>(offsetof(ChatGui_t1028549327, ___ShowState_18)); }
	inline bool get_ShowState_18() const { return ___ShowState_18; }
	inline bool* get_address_of_ShowState_18() { return &___ShowState_18; }
	inline void set_ShowState_18(bool value)
	{
		___ShowState_18 = value;
	}

	inline static int32_t get_offset_of_Title_19() { return static_cast<int32_t>(offsetof(ChatGui_t1028549327, ___Title_19)); }
	inline GameObject_t1756533147 * get_Title_19() const { return ___Title_19; }
	inline GameObject_t1756533147 ** get_address_of_Title_19() { return &___Title_19; }
	inline void set_Title_19(GameObject_t1756533147 * value)
	{
		___Title_19 = value;
		Il2CppCodeGenWriteBarrier(&___Title_19, value);
	}

	inline static int32_t get_offset_of_StateText_20() { return static_cast<int32_t>(offsetof(ChatGui_t1028549327, ___StateText_20)); }
	inline Text_t356221433 * get_StateText_20() const { return ___StateText_20; }
	inline Text_t356221433 ** get_address_of_StateText_20() { return &___StateText_20; }
	inline void set_StateText_20(Text_t356221433 * value)
	{
		___StateText_20 = value;
		Il2CppCodeGenWriteBarrier(&___StateText_20, value);
	}

	inline static int32_t get_offset_of_UserIdText_21() { return static_cast<int32_t>(offsetof(ChatGui_t1028549327, ___UserIdText_21)); }
	inline Text_t356221433 * get_UserIdText_21() const { return ___UserIdText_21; }
	inline Text_t356221433 ** get_address_of_UserIdText_21() { return &___UserIdText_21; }
	inline void set_UserIdText_21(Text_t356221433 * value)
	{
		___UserIdText_21 = value;
		Il2CppCodeGenWriteBarrier(&___UserIdText_21, value);
	}

	inline static int32_t get_offset_of_TestLength_23() { return static_cast<int32_t>(offsetof(ChatGui_t1028549327, ___TestLength_23)); }
	inline int32_t get_TestLength_23() const { return ___TestLength_23; }
	inline int32_t* get_address_of_TestLength_23() { return &___TestLength_23; }
	inline void set_TestLength_23(int32_t value)
	{
		___TestLength_23 = value;
	}

	inline static int32_t get_offset_of_testBytes_24() { return static_cast<int32_t>(offsetof(ChatGui_t1028549327, ___testBytes_24)); }
	inline ByteU5BU5D_t3397334013* get_testBytes_24() const { return ___testBytes_24; }
	inline ByteU5BU5D_t3397334013** get_address_of_testBytes_24() { return &___testBytes_24; }
	inline void set_testBytes_24(ByteU5BU5D_t3397334013* value)
	{
		___testBytes_24 = value;
		Il2CppCodeGenWriteBarrier(&___testBytes_24, value);
	}
};

struct ChatGui_t1028549327_StaticFields
{
public:
	// System.String ChatGui::HelpText
	String_t* ___HelpText_22;

public:
	inline static int32_t get_offset_of_HelpText_22() { return static_cast<int32_t>(offsetof(ChatGui_t1028549327_StaticFields, ___HelpText_22)); }
	inline String_t* get_HelpText_22() const { return ___HelpText_22; }
	inline String_t** get_address_of_HelpText_22() { return &___HelpText_22; }
	inline void set_HelpText_22(String_t* value)
	{
		___HelpText_22 = value;
		Il2CppCodeGenWriteBarrier(&___HelpText_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
