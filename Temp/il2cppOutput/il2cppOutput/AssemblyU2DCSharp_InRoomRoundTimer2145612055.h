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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InRoomRoundTimer
struct  InRoomRoundTimer_t2145612055  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 InRoomRoundTimer::SecondsPerTurn
	int32_t ___SecondsPerTurn_2;
	// System.Double InRoomRoundTimer::StartTime
	double ___StartTime_3;
	// UnityEngine.Rect InRoomRoundTimer::TextPos
	Rect_t3681755626  ___TextPos_4;
	// System.Boolean InRoomRoundTimer::startRoundWhenTimeIsSynced
	bool ___startRoundWhenTimeIsSynced_5;

public:
	inline static int32_t get_offset_of_SecondsPerTurn_2() { return static_cast<int32_t>(offsetof(InRoomRoundTimer_t2145612055, ___SecondsPerTurn_2)); }
	inline int32_t get_SecondsPerTurn_2() const { return ___SecondsPerTurn_2; }
	inline int32_t* get_address_of_SecondsPerTurn_2() { return &___SecondsPerTurn_2; }
	inline void set_SecondsPerTurn_2(int32_t value)
	{
		___SecondsPerTurn_2 = value;
	}

	inline static int32_t get_offset_of_StartTime_3() { return static_cast<int32_t>(offsetof(InRoomRoundTimer_t2145612055, ___StartTime_3)); }
	inline double get_StartTime_3() const { return ___StartTime_3; }
	inline double* get_address_of_StartTime_3() { return &___StartTime_3; }
	inline void set_StartTime_3(double value)
	{
		___StartTime_3 = value;
	}

	inline static int32_t get_offset_of_TextPos_4() { return static_cast<int32_t>(offsetof(InRoomRoundTimer_t2145612055, ___TextPos_4)); }
	inline Rect_t3681755626  get_TextPos_4() const { return ___TextPos_4; }
	inline Rect_t3681755626 * get_address_of_TextPos_4() { return &___TextPos_4; }
	inline void set_TextPos_4(Rect_t3681755626  value)
	{
		___TextPos_4 = value;
	}

	inline static int32_t get_offset_of_startRoundWhenTimeIsSynced_5() { return static_cast<int32_t>(offsetof(InRoomRoundTimer_t2145612055, ___startRoundWhenTimeIsSynced_5)); }
	inline bool get_startRoundWhenTimeIsSynced_5() const { return ___startRoundWhenTimeIsSynced_5; }
	inline bool* get_address_of_startRoundWhenTimeIsSynced_5() { return &___startRoundWhenTimeIsSynced_5; }
	inline void set_startRoundWhenTimeIsSynced_5(bool value)
	{
		___startRoundWhenTimeIsSynced_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
