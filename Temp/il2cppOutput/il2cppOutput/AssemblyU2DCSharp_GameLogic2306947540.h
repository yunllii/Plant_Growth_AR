#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PhotonView
struct PhotonView_t899863581;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameLogic
struct  GameLogic_t2306947540  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct GameLogic_t2306947540_StaticFields
{
public:
	// System.Int32 GameLogic::playerWhoIsIt
	int32_t ___playerWhoIsIt_2;
	// PhotonView GameLogic::ScenePhotonView
	PhotonView_t899863581 * ___ScenePhotonView_3;

public:
	inline static int32_t get_offset_of_playerWhoIsIt_2() { return static_cast<int32_t>(offsetof(GameLogic_t2306947540_StaticFields, ___playerWhoIsIt_2)); }
	inline int32_t get_playerWhoIsIt_2() const { return ___playerWhoIsIt_2; }
	inline int32_t* get_address_of_playerWhoIsIt_2() { return &___playerWhoIsIt_2; }
	inline void set_playerWhoIsIt_2(int32_t value)
	{
		___playerWhoIsIt_2 = value;
	}

	inline static int32_t get_offset_of_ScenePhotonView_3() { return static_cast<int32_t>(offsetof(GameLogic_t2306947540_StaticFields, ___ScenePhotonView_3)); }
	inline PhotonView_t899863581 * get_ScenePhotonView_3() const { return ___ScenePhotonView_3; }
	inline PhotonView_t899863581 ** get_address_of_ScenePhotonView_3() { return &___ScenePhotonView_3; }
	inline void set_ScenePhotonView_3(PhotonView_t899863581 * value)
	{
		___ScenePhotonView_3 = value;
		Il2CppCodeGenWriteBarrier(&___ScenePhotonView_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
