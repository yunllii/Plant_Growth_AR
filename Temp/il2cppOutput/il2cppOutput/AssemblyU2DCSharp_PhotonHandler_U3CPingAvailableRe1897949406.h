#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PhotonPingManager
struct PhotonPingManager_t2532484147;
// Region
struct Region_t1621871372;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerat525722178.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator0
struct  U3CPingAvailableRegionsCoroutineU3Ec__Iterator0_t1897949406  : public Il2CppObject
{
public:
	// PhotonPingManager PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator0::<pingManager>__0
	PhotonPingManager_t2532484147 * ___U3CpingManagerU3E__0_0;
	// System.Collections.Generic.List`1/Enumerator<Region> PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator0::$locvar0
	Enumerator_t525722178  ___U24locvar0_1;
	// Region PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator0::<best>__1
	Region_t1621871372 * ___U3CbestU3E__1_2;
	// System.Boolean PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator0::connectToBest
	bool ___connectToBest_3;
	// System.Object PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator0::$current
	Il2CppObject * ___U24current_4;
	// System.Boolean PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3CpingManagerU3E__0_0() { return static_cast<int32_t>(offsetof(U3CPingAvailableRegionsCoroutineU3Ec__Iterator0_t1897949406, ___U3CpingManagerU3E__0_0)); }
	inline PhotonPingManager_t2532484147 * get_U3CpingManagerU3E__0_0() const { return ___U3CpingManagerU3E__0_0; }
	inline PhotonPingManager_t2532484147 ** get_address_of_U3CpingManagerU3E__0_0() { return &___U3CpingManagerU3E__0_0; }
	inline void set_U3CpingManagerU3E__0_0(PhotonPingManager_t2532484147 * value)
	{
		___U3CpingManagerU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CpingManagerU3E__0_0, value);
	}

	inline static int32_t get_offset_of_U24locvar0_1() { return static_cast<int32_t>(offsetof(U3CPingAvailableRegionsCoroutineU3Ec__Iterator0_t1897949406, ___U24locvar0_1)); }
	inline Enumerator_t525722178  get_U24locvar0_1() const { return ___U24locvar0_1; }
	inline Enumerator_t525722178 * get_address_of_U24locvar0_1() { return &___U24locvar0_1; }
	inline void set_U24locvar0_1(Enumerator_t525722178  value)
	{
		___U24locvar0_1 = value;
	}

	inline static int32_t get_offset_of_U3CbestU3E__1_2() { return static_cast<int32_t>(offsetof(U3CPingAvailableRegionsCoroutineU3Ec__Iterator0_t1897949406, ___U3CbestU3E__1_2)); }
	inline Region_t1621871372 * get_U3CbestU3E__1_2() const { return ___U3CbestU3E__1_2; }
	inline Region_t1621871372 ** get_address_of_U3CbestU3E__1_2() { return &___U3CbestU3E__1_2; }
	inline void set_U3CbestU3E__1_2(Region_t1621871372 * value)
	{
		___U3CbestU3E__1_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CbestU3E__1_2, value);
	}

	inline static int32_t get_offset_of_connectToBest_3() { return static_cast<int32_t>(offsetof(U3CPingAvailableRegionsCoroutineU3Ec__Iterator0_t1897949406, ___connectToBest_3)); }
	inline bool get_connectToBest_3() const { return ___connectToBest_3; }
	inline bool* get_address_of_connectToBest_3() { return &___connectToBest_3; }
	inline void set_connectToBest_3(bool value)
	{
		___connectToBest_3 = value;
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CPingAvailableRegionsCoroutineU3Ec__Iterator0_t1897949406, ___U24current_4)); }
	inline Il2CppObject * get_U24current_4() const { return ___U24current_4; }
	inline Il2CppObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(Il2CppObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_4, value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CPingAvailableRegionsCoroutineU3Ec__Iterator0_t1897949406, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CPingAvailableRegionsCoroutineU3Ec__Iterator0_t1897949406, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
