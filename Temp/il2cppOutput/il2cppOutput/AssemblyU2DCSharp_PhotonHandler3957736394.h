#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PhotonHandler
struct PhotonHandler_t3957736394;
// System.Diagnostics.Stopwatch
struct Stopwatch_t1380178105;
// System.Type
struct Type_t;
// System.String
struct String_t;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1903595547;
// System.Func`1<System.Boolean>
struct Func_1_t1485000104;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_CloudRegionCode989201940.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonHandler
struct  PhotonHandler_t3957736394  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 PhotonHandler::updateInterval
	int32_t ___updateInterval_3;
	// System.Int32 PhotonHandler::updateIntervalOnSerialize
	int32_t ___updateIntervalOnSerialize_4;
	// System.Int32 PhotonHandler::nextSendTickCount
	int32_t ___nextSendTickCount_5;
	// System.Int32 PhotonHandler::nextSendTickCountOnSerialize
	int32_t ___nextSendTickCountOnSerialize_6;

public:
	inline static int32_t get_offset_of_updateInterval_3() { return static_cast<int32_t>(offsetof(PhotonHandler_t3957736394, ___updateInterval_3)); }
	inline int32_t get_updateInterval_3() const { return ___updateInterval_3; }
	inline int32_t* get_address_of_updateInterval_3() { return &___updateInterval_3; }
	inline void set_updateInterval_3(int32_t value)
	{
		___updateInterval_3 = value;
	}

	inline static int32_t get_offset_of_updateIntervalOnSerialize_4() { return static_cast<int32_t>(offsetof(PhotonHandler_t3957736394, ___updateIntervalOnSerialize_4)); }
	inline int32_t get_updateIntervalOnSerialize_4() const { return ___updateIntervalOnSerialize_4; }
	inline int32_t* get_address_of_updateIntervalOnSerialize_4() { return &___updateIntervalOnSerialize_4; }
	inline void set_updateIntervalOnSerialize_4(int32_t value)
	{
		___updateIntervalOnSerialize_4 = value;
	}

	inline static int32_t get_offset_of_nextSendTickCount_5() { return static_cast<int32_t>(offsetof(PhotonHandler_t3957736394, ___nextSendTickCount_5)); }
	inline int32_t get_nextSendTickCount_5() const { return ___nextSendTickCount_5; }
	inline int32_t* get_address_of_nextSendTickCount_5() { return &___nextSendTickCount_5; }
	inline void set_nextSendTickCount_5(int32_t value)
	{
		___nextSendTickCount_5 = value;
	}

	inline static int32_t get_offset_of_nextSendTickCountOnSerialize_6() { return static_cast<int32_t>(offsetof(PhotonHandler_t3957736394, ___nextSendTickCountOnSerialize_6)); }
	inline int32_t get_nextSendTickCountOnSerialize_6() const { return ___nextSendTickCountOnSerialize_6; }
	inline int32_t* get_address_of_nextSendTickCountOnSerialize_6() { return &___nextSendTickCountOnSerialize_6; }
	inline void set_nextSendTickCountOnSerialize_6(int32_t value)
	{
		___nextSendTickCountOnSerialize_6 = value;
	}
};

struct PhotonHandler_t3957736394_StaticFields
{
public:
	// PhotonHandler PhotonHandler::SP
	PhotonHandler_t3957736394 * ___SP_2;
	// System.Boolean PhotonHandler::sendThreadShouldRun
	bool ___sendThreadShouldRun_7;
	// System.Diagnostics.Stopwatch PhotonHandler::timerToStopConnectionInBackground
	Stopwatch_t1380178105 * ___timerToStopConnectionInBackground_8;
	// System.Boolean PhotonHandler::AppQuits
	bool ___AppQuits_9;
	// System.Type PhotonHandler::PingImplementation
	Type_t * ___PingImplementation_10;
	// CloudRegionCode PhotonHandler::BestRegionCodeCurrently
	int32_t ___BestRegionCodeCurrently_12;
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> PhotonHandler::<>f__am$cache0
	UnityAction_2_t1903595547 * ___U3CU3Ef__amU24cache0_13;
	// System.Func`1<System.Boolean> PhotonHandler::<>f__mg$cache0
	Func_1_t1485000104 * ___U3CU3Ef__mgU24cache0_14;

public:
	inline static int32_t get_offset_of_SP_2() { return static_cast<int32_t>(offsetof(PhotonHandler_t3957736394_StaticFields, ___SP_2)); }
	inline PhotonHandler_t3957736394 * get_SP_2() const { return ___SP_2; }
	inline PhotonHandler_t3957736394 ** get_address_of_SP_2() { return &___SP_2; }
	inline void set_SP_2(PhotonHandler_t3957736394 * value)
	{
		___SP_2 = value;
		Il2CppCodeGenWriteBarrier(&___SP_2, value);
	}

	inline static int32_t get_offset_of_sendThreadShouldRun_7() { return static_cast<int32_t>(offsetof(PhotonHandler_t3957736394_StaticFields, ___sendThreadShouldRun_7)); }
	inline bool get_sendThreadShouldRun_7() const { return ___sendThreadShouldRun_7; }
	inline bool* get_address_of_sendThreadShouldRun_7() { return &___sendThreadShouldRun_7; }
	inline void set_sendThreadShouldRun_7(bool value)
	{
		___sendThreadShouldRun_7 = value;
	}

	inline static int32_t get_offset_of_timerToStopConnectionInBackground_8() { return static_cast<int32_t>(offsetof(PhotonHandler_t3957736394_StaticFields, ___timerToStopConnectionInBackground_8)); }
	inline Stopwatch_t1380178105 * get_timerToStopConnectionInBackground_8() const { return ___timerToStopConnectionInBackground_8; }
	inline Stopwatch_t1380178105 ** get_address_of_timerToStopConnectionInBackground_8() { return &___timerToStopConnectionInBackground_8; }
	inline void set_timerToStopConnectionInBackground_8(Stopwatch_t1380178105 * value)
	{
		___timerToStopConnectionInBackground_8 = value;
		Il2CppCodeGenWriteBarrier(&___timerToStopConnectionInBackground_8, value);
	}

	inline static int32_t get_offset_of_AppQuits_9() { return static_cast<int32_t>(offsetof(PhotonHandler_t3957736394_StaticFields, ___AppQuits_9)); }
	inline bool get_AppQuits_9() const { return ___AppQuits_9; }
	inline bool* get_address_of_AppQuits_9() { return &___AppQuits_9; }
	inline void set_AppQuits_9(bool value)
	{
		___AppQuits_9 = value;
	}

	inline static int32_t get_offset_of_PingImplementation_10() { return static_cast<int32_t>(offsetof(PhotonHandler_t3957736394_StaticFields, ___PingImplementation_10)); }
	inline Type_t * get_PingImplementation_10() const { return ___PingImplementation_10; }
	inline Type_t ** get_address_of_PingImplementation_10() { return &___PingImplementation_10; }
	inline void set_PingImplementation_10(Type_t * value)
	{
		___PingImplementation_10 = value;
		Il2CppCodeGenWriteBarrier(&___PingImplementation_10, value);
	}

	inline static int32_t get_offset_of_BestRegionCodeCurrently_12() { return static_cast<int32_t>(offsetof(PhotonHandler_t3957736394_StaticFields, ___BestRegionCodeCurrently_12)); }
	inline int32_t get_BestRegionCodeCurrently_12() const { return ___BestRegionCodeCurrently_12; }
	inline int32_t* get_address_of_BestRegionCodeCurrently_12() { return &___BestRegionCodeCurrently_12; }
	inline void set_BestRegionCodeCurrently_12(int32_t value)
	{
		___BestRegionCodeCurrently_12 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_13() { return static_cast<int32_t>(offsetof(PhotonHandler_t3957736394_StaticFields, ___U3CU3Ef__amU24cache0_13)); }
	inline UnityAction_2_t1903595547 * get_U3CU3Ef__amU24cache0_13() const { return ___U3CU3Ef__amU24cache0_13; }
	inline UnityAction_2_t1903595547 ** get_address_of_U3CU3Ef__amU24cache0_13() { return &___U3CU3Ef__amU24cache0_13; }
	inline void set_U3CU3Ef__amU24cache0_13(UnityAction_2_t1903595547 * value)
	{
		___U3CU3Ef__amU24cache0_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_14() { return static_cast<int32_t>(offsetof(PhotonHandler_t3957736394_StaticFields, ___U3CU3Ef__mgU24cache0_14)); }
	inline Func_1_t1485000104 * get_U3CU3Ef__mgU24cache0_14() const { return ___U3CU3Ef__mgU24cache0_14; }
	inline Func_1_t1485000104 ** get_address_of_U3CU3Ef__mgU24cache0_14() { return &___U3CU3Ef__mgU24cache0_14; }
	inline void set_U3CU3Ef__mgU24cache0_14(Func_1_t1485000104 * value)
	{
		___U3CU3Ef__mgU24cache0_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
