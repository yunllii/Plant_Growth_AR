﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DragToMove
struct DragToMove_t3509972354;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragToMove/<RecordMouse>c__Iterator0
struct  U3CRecordMouseU3Ec__Iterator0_t1192151892  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 DragToMove/<RecordMouse>c__Iterator0::<v3>__0
	Vector3_t2243707580  ___U3Cv3U3E__0_0;
	// UnityEngine.Ray DragToMove/<RecordMouse>c__Iterator0::<inputRay>__1
	Ray_t2469606224  ___U3CinputRayU3E__1_1;
	// UnityEngine.RaycastHit DragToMove/<RecordMouse>c__Iterator0::<hit>__2
	RaycastHit_t87180320  ___U3ChitU3E__2_2;
	// DragToMove DragToMove/<RecordMouse>c__Iterator0::$this
	DragToMove_t3509972354 * ___U24this_3;
	// System.Object DragToMove/<RecordMouse>c__Iterator0::$current
	Il2CppObject * ___U24current_4;
	// System.Boolean DragToMove/<RecordMouse>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 DragToMove/<RecordMouse>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3Cv3U3E__0_0() { return static_cast<int32_t>(offsetof(U3CRecordMouseU3Ec__Iterator0_t1192151892, ___U3Cv3U3E__0_0)); }
	inline Vector3_t2243707580  get_U3Cv3U3E__0_0() const { return ___U3Cv3U3E__0_0; }
	inline Vector3_t2243707580 * get_address_of_U3Cv3U3E__0_0() { return &___U3Cv3U3E__0_0; }
	inline void set_U3Cv3U3E__0_0(Vector3_t2243707580  value)
	{
		___U3Cv3U3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CinputRayU3E__1_1() { return static_cast<int32_t>(offsetof(U3CRecordMouseU3Ec__Iterator0_t1192151892, ___U3CinputRayU3E__1_1)); }
	inline Ray_t2469606224  get_U3CinputRayU3E__1_1() const { return ___U3CinputRayU3E__1_1; }
	inline Ray_t2469606224 * get_address_of_U3CinputRayU3E__1_1() { return &___U3CinputRayU3E__1_1; }
	inline void set_U3CinputRayU3E__1_1(Ray_t2469606224  value)
	{
		___U3CinputRayU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U3ChitU3E__2_2() { return static_cast<int32_t>(offsetof(U3CRecordMouseU3Ec__Iterator0_t1192151892, ___U3ChitU3E__2_2)); }
	inline RaycastHit_t87180320  get_U3ChitU3E__2_2() const { return ___U3ChitU3E__2_2; }
	inline RaycastHit_t87180320 * get_address_of_U3ChitU3E__2_2() { return &___U3ChitU3E__2_2; }
	inline void set_U3ChitU3E__2_2(RaycastHit_t87180320  value)
	{
		___U3ChitU3E__2_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CRecordMouseU3Ec__Iterator0_t1192151892, ___U24this_3)); }
	inline DragToMove_t3509972354 * get_U24this_3() const { return ___U24this_3; }
	inline DragToMove_t3509972354 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(DragToMove_t3509972354 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_3, value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CRecordMouseU3Ec__Iterator0_t1192151892, ___U24current_4)); }
	inline Il2CppObject * get_U24current_4() const { return ___U24current_4; }
	inline Il2CppObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(Il2CppObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_4, value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CRecordMouseU3Ec__Iterator0_t1192151892, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CRecordMouseU3Ec__Iterator0_t1192151892, ___U24PC_6)); }
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
