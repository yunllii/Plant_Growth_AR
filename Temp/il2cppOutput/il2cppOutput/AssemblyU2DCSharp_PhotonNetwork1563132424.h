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
// PhotonHandler
struct PhotonHandler_t3957736394;
// NetworkingPeer
struct NetworkingPeer_t3034011222;
// ServerSettings
struct ServerSettings_t1038886298;
// System.Collections.Generic.List`1<FriendInfo>
struct List_1_t3252793716;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t3671312409;
// System.Collections.Generic.HashSet`1<UnityEngine.GameObject>
struct HashSet_1_t89994001;
// System.Type
struct Type_t;
// Room
struct Room_t1042398373;
// System.Diagnostics.Stopwatch
struct Stopwatch_t1380178105;
// PhotonNetwork/EventCallback
struct EventCallback_t2860523912;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_PhotonLogLevel1525257006.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonNetwork
struct  PhotonNetwork_t1563132424  : public Il2CppObject
{
public:

public:
};

struct PhotonNetwork_t1563132424_StaticFields
{
public:
	// System.String PhotonNetwork::<gameVersion>k__BackingField
	String_t* ___U3CgameVersionU3Ek__BackingField_1;
	// PhotonHandler PhotonNetwork::photonMono
	PhotonHandler_t3957736394 * ___photonMono_2;
	// NetworkingPeer PhotonNetwork::networkingPeer
	NetworkingPeer_t3034011222 * ___networkingPeer_3;
	// System.Int32 PhotonNetwork::MAX_VIEW_IDS
	int32_t ___MAX_VIEW_IDS_4;
	// ServerSettings PhotonNetwork::PhotonServerSettings
	ServerSettings_t1038886298 * ___PhotonServerSettings_7;
	// System.Boolean PhotonNetwork::InstantiateInRoomOnly
	bool ___InstantiateInRoomOnly_8;
	// PhotonLogLevel PhotonNetwork::logLevel
	int32_t ___logLevel_9;
	// System.Collections.Generic.List`1<FriendInfo> PhotonNetwork::<Friends>k__BackingField
	List_1_t3252793716 * ___U3CFriendsU3Ek__BackingField_10;
	// System.Single PhotonNetwork::precisionForVectorSynchronization
	float ___precisionForVectorSynchronization_11;
	// System.Single PhotonNetwork::precisionForQuaternionSynchronization
	float ___precisionForQuaternionSynchronization_12;
	// System.Single PhotonNetwork::precisionForFloatSynchronization
	float ___precisionForFloatSynchronization_13;
	// System.Boolean PhotonNetwork::UseRpcMonoBehaviourCache
	bool ___UseRpcMonoBehaviourCache_14;
	// System.Boolean PhotonNetwork::UsePrefabCache
	bool ___UsePrefabCache_15;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> PhotonNetwork::PrefabCache
	Dictionary_2_t3671312409 * ___PrefabCache_16;
	// System.Collections.Generic.HashSet`1<UnityEngine.GameObject> PhotonNetwork::SendMonoMessageTargets
	HashSet_1_t89994001 * ___SendMonoMessageTargets_17;
	// System.Type PhotonNetwork::SendMonoMessageTargetType
	Type_t * ___SendMonoMessageTargetType_18;
	// System.Boolean PhotonNetwork::StartRpcsAsCoroutine
	bool ___StartRpcsAsCoroutine_19;
	// System.Boolean PhotonNetwork::isOfflineMode
	bool ___isOfflineMode_20;
	// Room PhotonNetwork::offlineModeRoom
	Room_t1042398373 * ___offlineModeRoom_21;
	// System.Int32 PhotonNetwork::maxConnections
	int32_t ___maxConnections_22;
	// System.Boolean PhotonNetwork::_mAutomaticallySyncScene
	bool ____mAutomaticallySyncScene_23;
	// System.Boolean PhotonNetwork::m_autoCleanUpPlayerObjects
	bool ___m_autoCleanUpPlayerObjects_24;
	// System.Int32 PhotonNetwork::sendInterval
	int32_t ___sendInterval_25;
	// System.Int32 PhotonNetwork::sendIntervalOnSerialize
	int32_t ___sendIntervalOnSerialize_26;
	// System.Boolean PhotonNetwork::m_isMessageQueueRunning
	bool ___m_isMessageQueueRunning_27;
	// System.Boolean PhotonNetwork::UsePreciseTimer
	bool ___UsePreciseTimer_28;
	// System.Diagnostics.Stopwatch PhotonNetwork::startupStopwatch
	Stopwatch_t1380178105 * ___startupStopwatch_29;
	// System.Single PhotonNetwork::BackgroundTimeout
	float ___BackgroundTimeout_30;
	// PhotonNetwork/EventCallback PhotonNetwork::OnEventCall
	EventCallback_t2860523912 * ___OnEventCall_31;
	// System.Int32 PhotonNetwork::lastUsedViewSubId
	int32_t ___lastUsedViewSubId_32;
	// System.Int32 PhotonNetwork::lastUsedViewSubIdStatic
	int32_t ___lastUsedViewSubIdStatic_33;
	// System.Collections.Generic.List`1<System.Int32> PhotonNetwork::manuallyAllocatedViewIds
	List_1_t1440998580 * ___manuallyAllocatedViewIds_34;

public:
	inline static int32_t get_offset_of_U3CgameVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___U3CgameVersionU3Ek__BackingField_1)); }
	inline String_t* get_U3CgameVersionU3Ek__BackingField_1() const { return ___U3CgameVersionU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CgameVersionU3Ek__BackingField_1() { return &___U3CgameVersionU3Ek__BackingField_1; }
	inline void set_U3CgameVersionU3Ek__BackingField_1(String_t* value)
	{
		___U3CgameVersionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CgameVersionU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_photonMono_2() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___photonMono_2)); }
	inline PhotonHandler_t3957736394 * get_photonMono_2() const { return ___photonMono_2; }
	inline PhotonHandler_t3957736394 ** get_address_of_photonMono_2() { return &___photonMono_2; }
	inline void set_photonMono_2(PhotonHandler_t3957736394 * value)
	{
		___photonMono_2 = value;
		Il2CppCodeGenWriteBarrier(&___photonMono_2, value);
	}

	inline static int32_t get_offset_of_networkingPeer_3() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___networkingPeer_3)); }
	inline NetworkingPeer_t3034011222 * get_networkingPeer_3() const { return ___networkingPeer_3; }
	inline NetworkingPeer_t3034011222 ** get_address_of_networkingPeer_3() { return &___networkingPeer_3; }
	inline void set_networkingPeer_3(NetworkingPeer_t3034011222 * value)
	{
		___networkingPeer_3 = value;
		Il2CppCodeGenWriteBarrier(&___networkingPeer_3, value);
	}

	inline static int32_t get_offset_of_MAX_VIEW_IDS_4() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___MAX_VIEW_IDS_4)); }
	inline int32_t get_MAX_VIEW_IDS_4() const { return ___MAX_VIEW_IDS_4; }
	inline int32_t* get_address_of_MAX_VIEW_IDS_4() { return &___MAX_VIEW_IDS_4; }
	inline void set_MAX_VIEW_IDS_4(int32_t value)
	{
		___MAX_VIEW_IDS_4 = value;
	}

	inline static int32_t get_offset_of_PhotonServerSettings_7() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___PhotonServerSettings_7)); }
	inline ServerSettings_t1038886298 * get_PhotonServerSettings_7() const { return ___PhotonServerSettings_7; }
	inline ServerSettings_t1038886298 ** get_address_of_PhotonServerSettings_7() { return &___PhotonServerSettings_7; }
	inline void set_PhotonServerSettings_7(ServerSettings_t1038886298 * value)
	{
		___PhotonServerSettings_7 = value;
		Il2CppCodeGenWriteBarrier(&___PhotonServerSettings_7, value);
	}

	inline static int32_t get_offset_of_InstantiateInRoomOnly_8() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___InstantiateInRoomOnly_8)); }
	inline bool get_InstantiateInRoomOnly_8() const { return ___InstantiateInRoomOnly_8; }
	inline bool* get_address_of_InstantiateInRoomOnly_8() { return &___InstantiateInRoomOnly_8; }
	inline void set_InstantiateInRoomOnly_8(bool value)
	{
		___InstantiateInRoomOnly_8 = value;
	}

	inline static int32_t get_offset_of_logLevel_9() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___logLevel_9)); }
	inline int32_t get_logLevel_9() const { return ___logLevel_9; }
	inline int32_t* get_address_of_logLevel_9() { return &___logLevel_9; }
	inline void set_logLevel_9(int32_t value)
	{
		___logLevel_9 = value;
	}

	inline static int32_t get_offset_of_U3CFriendsU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___U3CFriendsU3Ek__BackingField_10)); }
	inline List_1_t3252793716 * get_U3CFriendsU3Ek__BackingField_10() const { return ___U3CFriendsU3Ek__BackingField_10; }
	inline List_1_t3252793716 ** get_address_of_U3CFriendsU3Ek__BackingField_10() { return &___U3CFriendsU3Ek__BackingField_10; }
	inline void set_U3CFriendsU3Ek__BackingField_10(List_1_t3252793716 * value)
	{
		___U3CFriendsU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CFriendsU3Ek__BackingField_10, value);
	}

	inline static int32_t get_offset_of_precisionForVectorSynchronization_11() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___precisionForVectorSynchronization_11)); }
	inline float get_precisionForVectorSynchronization_11() const { return ___precisionForVectorSynchronization_11; }
	inline float* get_address_of_precisionForVectorSynchronization_11() { return &___precisionForVectorSynchronization_11; }
	inline void set_precisionForVectorSynchronization_11(float value)
	{
		___precisionForVectorSynchronization_11 = value;
	}

	inline static int32_t get_offset_of_precisionForQuaternionSynchronization_12() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___precisionForQuaternionSynchronization_12)); }
	inline float get_precisionForQuaternionSynchronization_12() const { return ___precisionForQuaternionSynchronization_12; }
	inline float* get_address_of_precisionForQuaternionSynchronization_12() { return &___precisionForQuaternionSynchronization_12; }
	inline void set_precisionForQuaternionSynchronization_12(float value)
	{
		___precisionForQuaternionSynchronization_12 = value;
	}

	inline static int32_t get_offset_of_precisionForFloatSynchronization_13() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___precisionForFloatSynchronization_13)); }
	inline float get_precisionForFloatSynchronization_13() const { return ___precisionForFloatSynchronization_13; }
	inline float* get_address_of_precisionForFloatSynchronization_13() { return &___precisionForFloatSynchronization_13; }
	inline void set_precisionForFloatSynchronization_13(float value)
	{
		___precisionForFloatSynchronization_13 = value;
	}

	inline static int32_t get_offset_of_UseRpcMonoBehaviourCache_14() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___UseRpcMonoBehaviourCache_14)); }
	inline bool get_UseRpcMonoBehaviourCache_14() const { return ___UseRpcMonoBehaviourCache_14; }
	inline bool* get_address_of_UseRpcMonoBehaviourCache_14() { return &___UseRpcMonoBehaviourCache_14; }
	inline void set_UseRpcMonoBehaviourCache_14(bool value)
	{
		___UseRpcMonoBehaviourCache_14 = value;
	}

	inline static int32_t get_offset_of_UsePrefabCache_15() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___UsePrefabCache_15)); }
	inline bool get_UsePrefabCache_15() const { return ___UsePrefabCache_15; }
	inline bool* get_address_of_UsePrefabCache_15() { return &___UsePrefabCache_15; }
	inline void set_UsePrefabCache_15(bool value)
	{
		___UsePrefabCache_15 = value;
	}

	inline static int32_t get_offset_of_PrefabCache_16() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___PrefabCache_16)); }
	inline Dictionary_2_t3671312409 * get_PrefabCache_16() const { return ___PrefabCache_16; }
	inline Dictionary_2_t3671312409 ** get_address_of_PrefabCache_16() { return &___PrefabCache_16; }
	inline void set_PrefabCache_16(Dictionary_2_t3671312409 * value)
	{
		___PrefabCache_16 = value;
		Il2CppCodeGenWriteBarrier(&___PrefabCache_16, value);
	}

	inline static int32_t get_offset_of_SendMonoMessageTargets_17() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___SendMonoMessageTargets_17)); }
	inline HashSet_1_t89994001 * get_SendMonoMessageTargets_17() const { return ___SendMonoMessageTargets_17; }
	inline HashSet_1_t89994001 ** get_address_of_SendMonoMessageTargets_17() { return &___SendMonoMessageTargets_17; }
	inline void set_SendMonoMessageTargets_17(HashSet_1_t89994001 * value)
	{
		___SendMonoMessageTargets_17 = value;
		Il2CppCodeGenWriteBarrier(&___SendMonoMessageTargets_17, value);
	}

	inline static int32_t get_offset_of_SendMonoMessageTargetType_18() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___SendMonoMessageTargetType_18)); }
	inline Type_t * get_SendMonoMessageTargetType_18() const { return ___SendMonoMessageTargetType_18; }
	inline Type_t ** get_address_of_SendMonoMessageTargetType_18() { return &___SendMonoMessageTargetType_18; }
	inline void set_SendMonoMessageTargetType_18(Type_t * value)
	{
		___SendMonoMessageTargetType_18 = value;
		Il2CppCodeGenWriteBarrier(&___SendMonoMessageTargetType_18, value);
	}

	inline static int32_t get_offset_of_StartRpcsAsCoroutine_19() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___StartRpcsAsCoroutine_19)); }
	inline bool get_StartRpcsAsCoroutine_19() const { return ___StartRpcsAsCoroutine_19; }
	inline bool* get_address_of_StartRpcsAsCoroutine_19() { return &___StartRpcsAsCoroutine_19; }
	inline void set_StartRpcsAsCoroutine_19(bool value)
	{
		___StartRpcsAsCoroutine_19 = value;
	}

	inline static int32_t get_offset_of_isOfflineMode_20() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___isOfflineMode_20)); }
	inline bool get_isOfflineMode_20() const { return ___isOfflineMode_20; }
	inline bool* get_address_of_isOfflineMode_20() { return &___isOfflineMode_20; }
	inline void set_isOfflineMode_20(bool value)
	{
		___isOfflineMode_20 = value;
	}

	inline static int32_t get_offset_of_offlineModeRoom_21() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___offlineModeRoom_21)); }
	inline Room_t1042398373 * get_offlineModeRoom_21() const { return ___offlineModeRoom_21; }
	inline Room_t1042398373 ** get_address_of_offlineModeRoom_21() { return &___offlineModeRoom_21; }
	inline void set_offlineModeRoom_21(Room_t1042398373 * value)
	{
		___offlineModeRoom_21 = value;
		Il2CppCodeGenWriteBarrier(&___offlineModeRoom_21, value);
	}

	inline static int32_t get_offset_of_maxConnections_22() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___maxConnections_22)); }
	inline int32_t get_maxConnections_22() const { return ___maxConnections_22; }
	inline int32_t* get_address_of_maxConnections_22() { return &___maxConnections_22; }
	inline void set_maxConnections_22(int32_t value)
	{
		___maxConnections_22 = value;
	}

	inline static int32_t get_offset_of__mAutomaticallySyncScene_23() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ____mAutomaticallySyncScene_23)); }
	inline bool get__mAutomaticallySyncScene_23() const { return ____mAutomaticallySyncScene_23; }
	inline bool* get_address_of__mAutomaticallySyncScene_23() { return &____mAutomaticallySyncScene_23; }
	inline void set__mAutomaticallySyncScene_23(bool value)
	{
		____mAutomaticallySyncScene_23 = value;
	}

	inline static int32_t get_offset_of_m_autoCleanUpPlayerObjects_24() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___m_autoCleanUpPlayerObjects_24)); }
	inline bool get_m_autoCleanUpPlayerObjects_24() const { return ___m_autoCleanUpPlayerObjects_24; }
	inline bool* get_address_of_m_autoCleanUpPlayerObjects_24() { return &___m_autoCleanUpPlayerObjects_24; }
	inline void set_m_autoCleanUpPlayerObjects_24(bool value)
	{
		___m_autoCleanUpPlayerObjects_24 = value;
	}

	inline static int32_t get_offset_of_sendInterval_25() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___sendInterval_25)); }
	inline int32_t get_sendInterval_25() const { return ___sendInterval_25; }
	inline int32_t* get_address_of_sendInterval_25() { return &___sendInterval_25; }
	inline void set_sendInterval_25(int32_t value)
	{
		___sendInterval_25 = value;
	}

	inline static int32_t get_offset_of_sendIntervalOnSerialize_26() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___sendIntervalOnSerialize_26)); }
	inline int32_t get_sendIntervalOnSerialize_26() const { return ___sendIntervalOnSerialize_26; }
	inline int32_t* get_address_of_sendIntervalOnSerialize_26() { return &___sendIntervalOnSerialize_26; }
	inline void set_sendIntervalOnSerialize_26(int32_t value)
	{
		___sendIntervalOnSerialize_26 = value;
	}

	inline static int32_t get_offset_of_m_isMessageQueueRunning_27() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___m_isMessageQueueRunning_27)); }
	inline bool get_m_isMessageQueueRunning_27() const { return ___m_isMessageQueueRunning_27; }
	inline bool* get_address_of_m_isMessageQueueRunning_27() { return &___m_isMessageQueueRunning_27; }
	inline void set_m_isMessageQueueRunning_27(bool value)
	{
		___m_isMessageQueueRunning_27 = value;
	}

	inline static int32_t get_offset_of_UsePreciseTimer_28() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___UsePreciseTimer_28)); }
	inline bool get_UsePreciseTimer_28() const { return ___UsePreciseTimer_28; }
	inline bool* get_address_of_UsePreciseTimer_28() { return &___UsePreciseTimer_28; }
	inline void set_UsePreciseTimer_28(bool value)
	{
		___UsePreciseTimer_28 = value;
	}

	inline static int32_t get_offset_of_startupStopwatch_29() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___startupStopwatch_29)); }
	inline Stopwatch_t1380178105 * get_startupStopwatch_29() const { return ___startupStopwatch_29; }
	inline Stopwatch_t1380178105 ** get_address_of_startupStopwatch_29() { return &___startupStopwatch_29; }
	inline void set_startupStopwatch_29(Stopwatch_t1380178105 * value)
	{
		___startupStopwatch_29 = value;
		Il2CppCodeGenWriteBarrier(&___startupStopwatch_29, value);
	}

	inline static int32_t get_offset_of_BackgroundTimeout_30() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___BackgroundTimeout_30)); }
	inline float get_BackgroundTimeout_30() const { return ___BackgroundTimeout_30; }
	inline float* get_address_of_BackgroundTimeout_30() { return &___BackgroundTimeout_30; }
	inline void set_BackgroundTimeout_30(float value)
	{
		___BackgroundTimeout_30 = value;
	}

	inline static int32_t get_offset_of_OnEventCall_31() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___OnEventCall_31)); }
	inline EventCallback_t2860523912 * get_OnEventCall_31() const { return ___OnEventCall_31; }
	inline EventCallback_t2860523912 ** get_address_of_OnEventCall_31() { return &___OnEventCall_31; }
	inline void set_OnEventCall_31(EventCallback_t2860523912 * value)
	{
		___OnEventCall_31 = value;
		Il2CppCodeGenWriteBarrier(&___OnEventCall_31, value);
	}

	inline static int32_t get_offset_of_lastUsedViewSubId_32() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___lastUsedViewSubId_32)); }
	inline int32_t get_lastUsedViewSubId_32() const { return ___lastUsedViewSubId_32; }
	inline int32_t* get_address_of_lastUsedViewSubId_32() { return &___lastUsedViewSubId_32; }
	inline void set_lastUsedViewSubId_32(int32_t value)
	{
		___lastUsedViewSubId_32 = value;
	}

	inline static int32_t get_offset_of_lastUsedViewSubIdStatic_33() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___lastUsedViewSubIdStatic_33)); }
	inline int32_t get_lastUsedViewSubIdStatic_33() const { return ___lastUsedViewSubIdStatic_33; }
	inline int32_t* get_address_of_lastUsedViewSubIdStatic_33() { return &___lastUsedViewSubIdStatic_33; }
	inline void set_lastUsedViewSubIdStatic_33(int32_t value)
	{
		___lastUsedViewSubIdStatic_33 = value;
	}

	inline static int32_t get_offset_of_manuallyAllocatedViewIds_34() { return static_cast<int32_t>(offsetof(PhotonNetwork_t1563132424_StaticFields, ___manuallyAllocatedViewIds_34)); }
	inline List_1_t1440998580 * get_manuallyAllocatedViewIds_34() const { return ___manuallyAllocatedViewIds_34; }
	inline List_1_t1440998580 ** get_address_of_manuallyAllocatedViewIds_34() { return &___manuallyAllocatedViewIds_34; }
	inline void set_manuallyAllocatedViewIds_34(List_1_t1440998580 * value)
	{
		___manuallyAllocatedViewIds_34 = value;
		Il2CppCodeGenWriteBarrier(&___manuallyAllocatedViewIds_34, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
