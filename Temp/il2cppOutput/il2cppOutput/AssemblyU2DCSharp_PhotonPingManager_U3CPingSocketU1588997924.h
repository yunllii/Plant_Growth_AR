#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Region
struct Region_t1621871372;
// ExitGames.Client.Photon.PhotonPing
struct PhotonPing_t3196351980;
// System.String
struct String_t;
// System.Diagnostics.Stopwatch
struct Stopwatch_t1380178105;
// PhotonPingManager
struct PhotonPingManager_t2532484147;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonPingManager/<PingSocket>c__Iterator0
struct  U3CPingSocketU3Ec__Iterator0_t1588997924  : public Il2CppObject
{
public:
	// Region PhotonPingManager/<PingSocket>c__Iterator0::region
	Region_t1621871372 * ___region_0;
	// ExitGames.Client.Photon.PhotonPing PhotonPingManager/<PingSocket>c__Iterator0::<ping>__0
	PhotonPing_t3196351980 * ___U3CpingU3E__0_1;
	// System.Single PhotonPingManager/<PingSocket>c__Iterator0::<rttSum>__1
	float ___U3CrttSumU3E__1_2;
	// System.Int32 PhotonPingManager/<PingSocket>c__Iterator0::<replyCount>__2
	int32_t ___U3CreplyCountU3E__2_3;
	// System.String PhotonPingManager/<PingSocket>c__Iterator0::<regionAddress>__3
	String_t* ___U3CregionAddressU3E__3_4;
	// System.Int32 PhotonPingManager/<PingSocket>c__Iterator0::<indexOfColon>__4
	int32_t ___U3CindexOfColonU3E__4_5;
	// System.Int32 PhotonPingManager/<PingSocket>c__Iterator0::<i>__5
	int32_t ___U3CiU3E__5_6;
	// System.Boolean PhotonPingManager/<PingSocket>c__Iterator0::<overtime>__6
	bool ___U3CovertimeU3E__6_7;
	// System.Diagnostics.Stopwatch PhotonPingManager/<PingSocket>c__Iterator0::<sw>__7
	Stopwatch_t1380178105 * ___U3CswU3E__7_8;
	// System.Int32 PhotonPingManager/<PingSocket>c__Iterator0::<rtt>__8
	int32_t ___U3CrttU3E__8_9;
	// PhotonPingManager PhotonPingManager/<PingSocket>c__Iterator0::$this
	PhotonPingManager_t2532484147 * ___U24this_10;
	// System.Object PhotonPingManager/<PingSocket>c__Iterator0::$current
	Il2CppObject * ___U24current_11;
	// System.Boolean PhotonPingManager/<PingSocket>c__Iterator0::$disposing
	bool ___U24disposing_12;
	// System.Int32 PhotonPingManager/<PingSocket>c__Iterator0::$PC
	int32_t ___U24PC_13;

public:
	inline static int32_t get_offset_of_region_0() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ec__Iterator0_t1588997924, ___region_0)); }
	inline Region_t1621871372 * get_region_0() const { return ___region_0; }
	inline Region_t1621871372 ** get_address_of_region_0() { return &___region_0; }
	inline void set_region_0(Region_t1621871372 * value)
	{
		___region_0 = value;
		Il2CppCodeGenWriteBarrier(&___region_0, value);
	}

	inline static int32_t get_offset_of_U3CpingU3E__0_1() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ec__Iterator0_t1588997924, ___U3CpingU3E__0_1)); }
	inline PhotonPing_t3196351980 * get_U3CpingU3E__0_1() const { return ___U3CpingU3E__0_1; }
	inline PhotonPing_t3196351980 ** get_address_of_U3CpingU3E__0_1() { return &___U3CpingU3E__0_1; }
	inline void set_U3CpingU3E__0_1(PhotonPing_t3196351980 * value)
	{
		___U3CpingU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CpingU3E__0_1, value);
	}

	inline static int32_t get_offset_of_U3CrttSumU3E__1_2() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ec__Iterator0_t1588997924, ___U3CrttSumU3E__1_2)); }
	inline float get_U3CrttSumU3E__1_2() const { return ___U3CrttSumU3E__1_2; }
	inline float* get_address_of_U3CrttSumU3E__1_2() { return &___U3CrttSumU3E__1_2; }
	inline void set_U3CrttSumU3E__1_2(float value)
	{
		___U3CrttSumU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_U3CreplyCountU3E__2_3() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ec__Iterator0_t1588997924, ___U3CreplyCountU3E__2_3)); }
	inline int32_t get_U3CreplyCountU3E__2_3() const { return ___U3CreplyCountU3E__2_3; }
	inline int32_t* get_address_of_U3CreplyCountU3E__2_3() { return &___U3CreplyCountU3E__2_3; }
	inline void set_U3CreplyCountU3E__2_3(int32_t value)
	{
		___U3CreplyCountU3E__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CregionAddressU3E__3_4() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ec__Iterator0_t1588997924, ___U3CregionAddressU3E__3_4)); }
	inline String_t* get_U3CregionAddressU3E__3_4() const { return ___U3CregionAddressU3E__3_4; }
	inline String_t** get_address_of_U3CregionAddressU3E__3_4() { return &___U3CregionAddressU3E__3_4; }
	inline void set_U3CregionAddressU3E__3_4(String_t* value)
	{
		___U3CregionAddressU3E__3_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CregionAddressU3E__3_4, value);
	}

	inline static int32_t get_offset_of_U3CindexOfColonU3E__4_5() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ec__Iterator0_t1588997924, ___U3CindexOfColonU3E__4_5)); }
	inline int32_t get_U3CindexOfColonU3E__4_5() const { return ___U3CindexOfColonU3E__4_5; }
	inline int32_t* get_address_of_U3CindexOfColonU3E__4_5() { return &___U3CindexOfColonU3E__4_5; }
	inline void set_U3CindexOfColonU3E__4_5(int32_t value)
	{
		___U3CindexOfColonU3E__4_5 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E__5_6() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ec__Iterator0_t1588997924, ___U3CiU3E__5_6)); }
	inline int32_t get_U3CiU3E__5_6() const { return ___U3CiU3E__5_6; }
	inline int32_t* get_address_of_U3CiU3E__5_6() { return &___U3CiU3E__5_6; }
	inline void set_U3CiU3E__5_6(int32_t value)
	{
		___U3CiU3E__5_6 = value;
	}

	inline static int32_t get_offset_of_U3CovertimeU3E__6_7() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ec__Iterator0_t1588997924, ___U3CovertimeU3E__6_7)); }
	inline bool get_U3CovertimeU3E__6_7() const { return ___U3CovertimeU3E__6_7; }
	inline bool* get_address_of_U3CovertimeU3E__6_7() { return &___U3CovertimeU3E__6_7; }
	inline void set_U3CovertimeU3E__6_7(bool value)
	{
		___U3CovertimeU3E__6_7 = value;
	}

	inline static int32_t get_offset_of_U3CswU3E__7_8() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ec__Iterator0_t1588997924, ___U3CswU3E__7_8)); }
	inline Stopwatch_t1380178105 * get_U3CswU3E__7_8() const { return ___U3CswU3E__7_8; }
	inline Stopwatch_t1380178105 ** get_address_of_U3CswU3E__7_8() { return &___U3CswU3E__7_8; }
	inline void set_U3CswU3E__7_8(Stopwatch_t1380178105 * value)
	{
		___U3CswU3E__7_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CswU3E__7_8, value);
	}

	inline static int32_t get_offset_of_U3CrttU3E__8_9() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ec__Iterator0_t1588997924, ___U3CrttU3E__8_9)); }
	inline int32_t get_U3CrttU3E__8_9() const { return ___U3CrttU3E__8_9; }
	inline int32_t* get_address_of_U3CrttU3E__8_9() { return &___U3CrttU3E__8_9; }
	inline void set_U3CrttU3E__8_9(int32_t value)
	{
		___U3CrttU3E__8_9 = value;
	}

	inline static int32_t get_offset_of_U24this_10() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ec__Iterator0_t1588997924, ___U24this_10)); }
	inline PhotonPingManager_t2532484147 * get_U24this_10() const { return ___U24this_10; }
	inline PhotonPingManager_t2532484147 ** get_address_of_U24this_10() { return &___U24this_10; }
	inline void set_U24this_10(PhotonPingManager_t2532484147 * value)
	{
		___U24this_10 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_10, value);
	}

	inline static int32_t get_offset_of_U24current_11() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ec__Iterator0_t1588997924, ___U24current_11)); }
	inline Il2CppObject * get_U24current_11() const { return ___U24current_11; }
	inline Il2CppObject ** get_address_of_U24current_11() { return &___U24current_11; }
	inline void set_U24current_11(Il2CppObject * value)
	{
		___U24current_11 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_11, value);
	}

	inline static int32_t get_offset_of_U24disposing_12() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ec__Iterator0_t1588997924, ___U24disposing_12)); }
	inline bool get_U24disposing_12() const { return ___U24disposing_12; }
	inline bool* get_address_of_U24disposing_12() { return &___U24disposing_12; }
	inline void set_U24disposing_12(bool value)
	{
		___U24disposing_12 = value;
	}

	inline static int32_t get_offset_of_U24PC_13() { return static_cast<int32_t>(offsetof(U3CPingSocketU3Ec__Iterator0_t1588997924, ___U24PC_13)); }
	inline int32_t get_U24PC_13() const { return ___U24PC_13; }
	inline int32_t* get_address_of_U24PC_13() { return &___U24PC_13; }
	inline void set_U24PC_13(int32_t value)
	{
		___U24PC_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
