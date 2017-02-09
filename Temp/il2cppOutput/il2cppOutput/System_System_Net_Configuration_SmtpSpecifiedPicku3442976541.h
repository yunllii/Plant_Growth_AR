#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t2048066811;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3473514151;

#include "System_Configuration_System_Configuration_Configur1776195828.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.SmtpSpecifiedPickupDirectoryElement
struct  SmtpSpecifiedPickupDirectoryElement_t3442976541  : public ConfigurationElement_t1776195828
{
public:

public:
};

struct SmtpSpecifiedPickupDirectoryElement_t3442976541_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SmtpSpecifiedPickupDirectoryElement::pickupDirectoryLocationProp
	ConfigurationProperty_t2048066811 * ___pickupDirectoryLocationProp_13;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SmtpSpecifiedPickupDirectoryElement::properties
	ConfigurationPropertyCollection_t3473514151 * ___properties_14;

public:
	inline static int32_t get_offset_of_pickupDirectoryLocationProp_13() { return static_cast<int32_t>(offsetof(SmtpSpecifiedPickupDirectoryElement_t3442976541_StaticFields, ___pickupDirectoryLocationProp_13)); }
	inline ConfigurationProperty_t2048066811 * get_pickupDirectoryLocationProp_13() const { return ___pickupDirectoryLocationProp_13; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_pickupDirectoryLocationProp_13() { return &___pickupDirectoryLocationProp_13; }
	inline void set_pickupDirectoryLocationProp_13(ConfigurationProperty_t2048066811 * value)
	{
		___pickupDirectoryLocationProp_13 = value;
		Il2CppCodeGenWriteBarrier(&___pickupDirectoryLocationProp_13, value);
	}

	inline static int32_t get_offset_of_properties_14() { return static_cast<int32_t>(offsetof(SmtpSpecifiedPickupDirectoryElement_t3442976541_StaticFields, ___properties_14)); }
	inline ConfigurationPropertyCollection_t3473514151 * get_properties_14() const { return ___properties_14; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of_properties_14() { return &___properties_14; }
	inline void set_properties_14(ConfigurationPropertyCollection_t3473514151 * value)
	{
		___properties_14 = value;
		Il2CppCodeGenWriteBarrier(&___properties_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
