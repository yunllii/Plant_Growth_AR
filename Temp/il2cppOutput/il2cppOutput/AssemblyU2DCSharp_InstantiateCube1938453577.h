#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InstantiateCube
struct  InstantiateCube_t1938453577  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject InstantiateCube::Prefab
	GameObject_t1756533147 * ___Prefab_2;
	// System.Int32 InstantiateCube::InstantiateType
	int32_t ___InstantiateType_3;
	// System.Boolean InstantiateCube::showGui
	bool ___showGui_4;

public:
	inline static int32_t get_offset_of_Prefab_2() { return static_cast<int32_t>(offsetof(InstantiateCube_t1938453577, ___Prefab_2)); }
	inline GameObject_t1756533147 * get_Prefab_2() const { return ___Prefab_2; }
	inline GameObject_t1756533147 ** get_address_of_Prefab_2() { return &___Prefab_2; }
	inline void set_Prefab_2(GameObject_t1756533147 * value)
	{
		___Prefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___Prefab_2, value);
	}

	inline static int32_t get_offset_of_InstantiateType_3() { return static_cast<int32_t>(offsetof(InstantiateCube_t1938453577, ___InstantiateType_3)); }
	inline int32_t get_InstantiateType_3() const { return ___InstantiateType_3; }
	inline int32_t* get_address_of_InstantiateType_3() { return &___InstantiateType_3; }
	inline void set_InstantiateType_3(int32_t value)
	{
		___InstantiateType_3 = value;
	}

	inline static int32_t get_offset_of_showGui_4() { return static_cast<int32_t>(offsetof(InstantiateCube_t1938453577, ___showGui_4)); }
	inline bool get_showGui_4() const { return ___showGui_4; }
	inline bool* get_address_of_showGui_4() { return &___showGui_4; }
	inline void set_showGui_4(bool value)
	{
		___showGui_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
