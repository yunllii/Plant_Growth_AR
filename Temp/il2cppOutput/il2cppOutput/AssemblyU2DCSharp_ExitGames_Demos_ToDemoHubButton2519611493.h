#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExitGames.Demos.ToDemoHubButton
struct ToDemoHubButton_t2519611493;
// UnityEngine.CanvasGroup
struct CanvasGroup_t3296560743;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Demos.ToDemoHubButton
struct  ToDemoHubButton_t2519611493  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.CanvasGroup ExitGames.Demos.ToDemoHubButton::_canvasGroup
	CanvasGroup_t3296560743 * ____canvasGroup_3;

public:
	inline static int32_t get_offset_of__canvasGroup_3() { return static_cast<int32_t>(offsetof(ToDemoHubButton_t2519611493, ____canvasGroup_3)); }
	inline CanvasGroup_t3296560743 * get__canvasGroup_3() const { return ____canvasGroup_3; }
	inline CanvasGroup_t3296560743 ** get_address_of__canvasGroup_3() { return &____canvasGroup_3; }
	inline void set__canvasGroup_3(CanvasGroup_t3296560743 * value)
	{
		____canvasGroup_3 = value;
		Il2CppCodeGenWriteBarrier(&____canvasGroup_3, value);
	}
};

struct ToDemoHubButton_t2519611493_StaticFields
{
public:
	// ExitGames.Demos.ToDemoHubButton ExitGames.Demos.ToDemoHubButton::instance
	ToDemoHubButton_t2519611493 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(ToDemoHubButton_t2519611493_StaticFields, ___instance_2)); }
	inline ToDemoHubButton_t2519611493 * get_instance_2() const { return ___instance_2; }
	inline ToDemoHubButton_t2519611493 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(ToDemoHubButton_t2519611493 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
