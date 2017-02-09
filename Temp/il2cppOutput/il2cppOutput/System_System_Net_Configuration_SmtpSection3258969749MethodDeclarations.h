#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Net.Configuration.SmtpSection
struct SmtpSection_t3258969749;
// System.String
struct String_t;
// System.Net.Configuration.SmtpNetworkElement
struct SmtpNetworkElement_t427678180;
// System.Net.Configuration.SmtpSpecifiedPickupDirectoryElement
struct SmtpSpecifiedPickupDirectoryElement_t3442976541;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3473514151;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Mail_SmtpDeliveryMethod1749648319.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Net.Configuration.SmtpSection::.ctor()
extern "C"  void SmtpSection__ctor_m1137736525 (SmtpSection_t3258969749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.SmtpDeliveryMethod System.Net.Configuration.SmtpSection::get_DeliveryMethod()
extern "C"  int32_t SmtpSection_get_DeliveryMethod_m3940139112 (SmtpSection_t3258969749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.SmtpSection::set_DeliveryMethod(System.Net.Mail.SmtpDeliveryMethod)
extern "C"  void SmtpSection_set_DeliveryMethod_m371014091 (SmtpSection_t3258969749 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Configuration.SmtpSection::get_From()
extern "C"  String_t* SmtpSection_get_From_m3091532879 (SmtpSection_t3258969749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.SmtpSection::set_From(System.String)
extern "C"  void SmtpSection_set_From_m3355672482 (SmtpSection_t3258969749 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.SmtpNetworkElement System.Net.Configuration.SmtpSection::get_Network()
extern "C"  SmtpNetworkElement_t427678180 * SmtpSection_get_Network_m2777441247 (SmtpSection_t3258969749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.SmtpSpecifiedPickupDirectoryElement System.Net.Configuration.SmtpSection::get_SpecifiedPickupDirectory()
extern "C"  SmtpSpecifiedPickupDirectoryElement_t3442976541 * SmtpSection_get_SpecifiedPickupDirectory_m2515433207 (SmtpSection_t3258969749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SmtpSection::get_Properties()
extern "C"  ConfigurationPropertyCollection_t3473514151 * SmtpSection_get_Properties_m3960277120 (SmtpSection_t3258969749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
