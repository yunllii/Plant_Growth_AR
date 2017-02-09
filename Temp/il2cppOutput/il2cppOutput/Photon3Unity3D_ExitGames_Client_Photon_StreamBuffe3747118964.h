#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "mscorlib_System_IO_Stream3255436806.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.StreamBuffer
struct  StreamBuffer_t3747118964  : public Stream_t3255436806
{
public:
	// System.Int32 ExitGames.Client.Photon.StreamBuffer::pos
	int32_t ___pos_3;
	// System.Int32 ExitGames.Client.Photon.StreamBuffer::len
	int32_t ___len_4;
	// System.Byte[] ExitGames.Client.Photon.StreamBuffer::buf
	ByteU5BU5D_t3397334013* ___buf_5;

public:
	inline static int32_t get_offset_of_pos_3() { return static_cast<int32_t>(offsetof(StreamBuffer_t3747118964, ___pos_3)); }
	inline int32_t get_pos_3() const { return ___pos_3; }
	inline int32_t* get_address_of_pos_3() { return &___pos_3; }
	inline void set_pos_3(int32_t value)
	{
		___pos_3 = value;
	}

	inline static int32_t get_offset_of_len_4() { return static_cast<int32_t>(offsetof(StreamBuffer_t3747118964, ___len_4)); }
	inline int32_t get_len_4() const { return ___len_4; }
	inline int32_t* get_address_of_len_4() { return &___len_4; }
	inline void set_len_4(int32_t value)
	{
		___len_4 = value;
	}

	inline static int32_t get_offset_of_buf_5() { return static_cast<int32_t>(offsetof(StreamBuffer_t3747118964, ___buf_5)); }
	inline ByteU5BU5D_t3397334013* get_buf_5() const { return ___buf_5; }
	inline ByteU5BU5D_t3397334013** get_address_of_buf_5() { return &___buf_5; }
	inline void set_buf_5(ByteU5BU5D_t3397334013* value)
	{
		___buf_5 = value;
		Il2CppCodeGenWriteBarrier(&___buf_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
