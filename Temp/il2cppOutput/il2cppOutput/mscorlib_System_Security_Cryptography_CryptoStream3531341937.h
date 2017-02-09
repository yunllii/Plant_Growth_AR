#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Stream
struct Stream_t3255436806;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t281704372;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_Security_Cryptography_CryptoStream1337713182.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoStream
struct  CryptoStream_t3531341937  : public Stream_t3255436806
{
public:
	// System.IO.Stream System.Security.Cryptography.CryptoStream::_stream
	Stream_t3255436806 * ____stream_2;
	// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.CryptoStream::_transform
	Il2CppObject * ____transform_3;
	// System.Security.Cryptography.CryptoStreamMode System.Security.Cryptography.CryptoStream::_mode
	int32_t ____mode_4;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_currentBlock
	ByteU5BU5D_t3397334013* ____currentBlock_5;
	// System.Boolean System.Security.Cryptography.CryptoStream::_disposed
	bool ____disposed_6;
	// System.Boolean System.Security.Cryptography.CryptoStream::_flushedFinalBlock
	bool ____flushedFinalBlock_7;
	// System.Int32 System.Security.Cryptography.CryptoStream::_partialCount
	int32_t ____partialCount_8;
	// System.Boolean System.Security.Cryptography.CryptoStream::_endOfStream
	bool ____endOfStream_9;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_waitingBlock
	ByteU5BU5D_t3397334013* ____waitingBlock_10;
	// System.Int32 System.Security.Cryptography.CryptoStream::_waitingCount
	int32_t ____waitingCount_11;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_transformedBlock
	ByteU5BU5D_t3397334013* ____transformedBlock_12;
	// System.Int32 System.Security.Cryptography.CryptoStream::_transformedPos
	int32_t ____transformedPos_13;
	// System.Int32 System.Security.Cryptography.CryptoStream::_transformedCount
	int32_t ____transformedCount_14;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_workingBlock
	ByteU5BU5D_t3397334013* ____workingBlock_15;
	// System.Int32 System.Security.Cryptography.CryptoStream::_workingCount
	int32_t ____workingCount_16;

public:
	inline static int32_t get_offset_of__stream_2() { return static_cast<int32_t>(offsetof(CryptoStream_t3531341937, ____stream_2)); }
	inline Stream_t3255436806 * get__stream_2() const { return ____stream_2; }
	inline Stream_t3255436806 ** get_address_of__stream_2() { return &____stream_2; }
	inline void set__stream_2(Stream_t3255436806 * value)
	{
		____stream_2 = value;
		Il2CppCodeGenWriteBarrier(&____stream_2, value);
	}

	inline static int32_t get_offset_of__transform_3() { return static_cast<int32_t>(offsetof(CryptoStream_t3531341937, ____transform_3)); }
	inline Il2CppObject * get__transform_3() const { return ____transform_3; }
	inline Il2CppObject ** get_address_of__transform_3() { return &____transform_3; }
	inline void set__transform_3(Il2CppObject * value)
	{
		____transform_3 = value;
		Il2CppCodeGenWriteBarrier(&____transform_3, value);
	}

	inline static int32_t get_offset_of__mode_4() { return static_cast<int32_t>(offsetof(CryptoStream_t3531341937, ____mode_4)); }
	inline int32_t get__mode_4() const { return ____mode_4; }
	inline int32_t* get_address_of__mode_4() { return &____mode_4; }
	inline void set__mode_4(int32_t value)
	{
		____mode_4 = value;
	}

	inline static int32_t get_offset_of__currentBlock_5() { return static_cast<int32_t>(offsetof(CryptoStream_t3531341937, ____currentBlock_5)); }
	inline ByteU5BU5D_t3397334013* get__currentBlock_5() const { return ____currentBlock_5; }
	inline ByteU5BU5D_t3397334013** get_address_of__currentBlock_5() { return &____currentBlock_5; }
	inline void set__currentBlock_5(ByteU5BU5D_t3397334013* value)
	{
		____currentBlock_5 = value;
		Il2CppCodeGenWriteBarrier(&____currentBlock_5, value);
	}

	inline static int32_t get_offset_of__disposed_6() { return static_cast<int32_t>(offsetof(CryptoStream_t3531341937, ____disposed_6)); }
	inline bool get__disposed_6() const { return ____disposed_6; }
	inline bool* get_address_of__disposed_6() { return &____disposed_6; }
	inline void set__disposed_6(bool value)
	{
		____disposed_6 = value;
	}

	inline static int32_t get_offset_of__flushedFinalBlock_7() { return static_cast<int32_t>(offsetof(CryptoStream_t3531341937, ____flushedFinalBlock_7)); }
	inline bool get__flushedFinalBlock_7() const { return ____flushedFinalBlock_7; }
	inline bool* get_address_of__flushedFinalBlock_7() { return &____flushedFinalBlock_7; }
	inline void set__flushedFinalBlock_7(bool value)
	{
		____flushedFinalBlock_7 = value;
	}

	inline static int32_t get_offset_of__partialCount_8() { return static_cast<int32_t>(offsetof(CryptoStream_t3531341937, ____partialCount_8)); }
	inline int32_t get__partialCount_8() const { return ____partialCount_8; }
	inline int32_t* get_address_of__partialCount_8() { return &____partialCount_8; }
	inline void set__partialCount_8(int32_t value)
	{
		____partialCount_8 = value;
	}

	inline static int32_t get_offset_of__endOfStream_9() { return static_cast<int32_t>(offsetof(CryptoStream_t3531341937, ____endOfStream_9)); }
	inline bool get__endOfStream_9() const { return ____endOfStream_9; }
	inline bool* get_address_of__endOfStream_9() { return &____endOfStream_9; }
	inline void set__endOfStream_9(bool value)
	{
		____endOfStream_9 = value;
	}

	inline static int32_t get_offset_of__waitingBlock_10() { return static_cast<int32_t>(offsetof(CryptoStream_t3531341937, ____waitingBlock_10)); }
	inline ByteU5BU5D_t3397334013* get__waitingBlock_10() const { return ____waitingBlock_10; }
	inline ByteU5BU5D_t3397334013** get_address_of__waitingBlock_10() { return &____waitingBlock_10; }
	inline void set__waitingBlock_10(ByteU5BU5D_t3397334013* value)
	{
		____waitingBlock_10 = value;
		Il2CppCodeGenWriteBarrier(&____waitingBlock_10, value);
	}

	inline static int32_t get_offset_of__waitingCount_11() { return static_cast<int32_t>(offsetof(CryptoStream_t3531341937, ____waitingCount_11)); }
	inline int32_t get__waitingCount_11() const { return ____waitingCount_11; }
	inline int32_t* get_address_of__waitingCount_11() { return &____waitingCount_11; }
	inline void set__waitingCount_11(int32_t value)
	{
		____waitingCount_11 = value;
	}

	inline static int32_t get_offset_of__transformedBlock_12() { return static_cast<int32_t>(offsetof(CryptoStream_t3531341937, ____transformedBlock_12)); }
	inline ByteU5BU5D_t3397334013* get__transformedBlock_12() const { return ____transformedBlock_12; }
	inline ByteU5BU5D_t3397334013** get_address_of__transformedBlock_12() { return &____transformedBlock_12; }
	inline void set__transformedBlock_12(ByteU5BU5D_t3397334013* value)
	{
		____transformedBlock_12 = value;
		Il2CppCodeGenWriteBarrier(&____transformedBlock_12, value);
	}

	inline static int32_t get_offset_of__transformedPos_13() { return static_cast<int32_t>(offsetof(CryptoStream_t3531341937, ____transformedPos_13)); }
	inline int32_t get__transformedPos_13() const { return ____transformedPos_13; }
	inline int32_t* get_address_of__transformedPos_13() { return &____transformedPos_13; }
	inline void set__transformedPos_13(int32_t value)
	{
		____transformedPos_13 = value;
	}

	inline static int32_t get_offset_of__transformedCount_14() { return static_cast<int32_t>(offsetof(CryptoStream_t3531341937, ____transformedCount_14)); }
	inline int32_t get__transformedCount_14() const { return ____transformedCount_14; }
	inline int32_t* get_address_of__transformedCount_14() { return &____transformedCount_14; }
	inline void set__transformedCount_14(int32_t value)
	{
		____transformedCount_14 = value;
	}

	inline static int32_t get_offset_of__workingBlock_15() { return static_cast<int32_t>(offsetof(CryptoStream_t3531341937, ____workingBlock_15)); }
	inline ByteU5BU5D_t3397334013* get__workingBlock_15() const { return ____workingBlock_15; }
	inline ByteU5BU5D_t3397334013** get_address_of__workingBlock_15() { return &____workingBlock_15; }
	inline void set__workingBlock_15(ByteU5BU5D_t3397334013* value)
	{
		____workingBlock_15 = value;
		Il2CppCodeGenWriteBarrier(&____workingBlock_15, value);
	}

	inline static int32_t get_offset_of__workingCount_16() { return static_cast<int32_t>(offsetof(CryptoStream_t3531341937, ____workingCount_16)); }
	inline int32_t get__workingCount_16() const { return ____workingCount_16; }
	inline int32_t* get_address_of__workingCount_16() { return &____workingCount_16; }
	inline void set__workingCount_16(int32_t value)
	{
		____workingCount_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
