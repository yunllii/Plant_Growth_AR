#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2509106130;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonStream
struct  PhotonStream_t2436786422  : public Il2CppObject
{
public:
	// System.Boolean PhotonStream::write
	bool ___write_0;
	// System.Collections.Generic.Queue`1<System.Object> PhotonStream::writeData
	Queue_1_t2509106130 * ___writeData_1;
	// System.Object[] PhotonStream::readData
	ObjectU5BU5D_t3614634134* ___readData_2;
	// System.Byte PhotonStream::currentItem
	uint8_t ___currentItem_3;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(PhotonStream_t2436786422, ___write_0)); }
	inline bool get_write_0() const { return ___write_0; }
	inline bool* get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(bool value)
	{
		___write_0 = value;
	}

	inline static int32_t get_offset_of_writeData_1() { return static_cast<int32_t>(offsetof(PhotonStream_t2436786422, ___writeData_1)); }
	inline Queue_1_t2509106130 * get_writeData_1() const { return ___writeData_1; }
	inline Queue_1_t2509106130 ** get_address_of_writeData_1() { return &___writeData_1; }
	inline void set_writeData_1(Queue_1_t2509106130 * value)
	{
		___writeData_1 = value;
		Il2CppCodeGenWriteBarrier(&___writeData_1, value);
	}

	inline static int32_t get_offset_of_readData_2() { return static_cast<int32_t>(offsetof(PhotonStream_t2436786422, ___readData_2)); }
	inline ObjectU5BU5D_t3614634134* get_readData_2() const { return ___readData_2; }
	inline ObjectU5BU5D_t3614634134** get_address_of_readData_2() { return &___readData_2; }
	inline void set_readData_2(ObjectU5BU5D_t3614634134* value)
	{
		___readData_2 = value;
		Il2CppCodeGenWriteBarrier(&___readData_2, value);
	}

	inline static int32_t get_offset_of_currentItem_3() { return static_cast<int32_t>(offsetof(PhotonStream_t2436786422, ___currentItem_3)); }
	inline uint8_t get_currentItem_3() const { return ___currentItem_3; }
	inline uint8_t* get_address_of_currentItem_3() { return &___currentItem_3; }
	inline void set_currentItem_3(uint8_t value)
	{
		___currentItem_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
