﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.IntPtr[]
struct IntPtrU5BU5D_t1690941108;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t1867663187;
// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t2147277795;
// System.Object[]
struct ObjectU5BU5D_t3715313104;
// System.Collections.ArrayList
struct ArrayList_t1009438618;
// System.Runtime.Remoting.Contexts.CrossContextChannel
struct CrossContextChannel_t2551771611;
// System.Collections.IList
struct IList_t2050589414;
// System.Collections.Hashtable
struct Hashtable_t4262735797;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Int32[]
struct Int32U5BU5D_t579565188;
// System.Reflection.MethodBase
struct MethodBase_t840489999;
// System.Runtime.Remoting.Contexts.IDynamicProperty
struct IDynamicProperty_t3238916558;
// System.Runtime.Remoting.Contexts.IDynamicMessageSink
struct IDynamicMessageSink_t3850654276;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t1857748682;
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct SynchronizationAttribute_t3653254383;
// System.Threading.Timer
struct Timer_t2547537275;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t2132833155;
// System.String[]
struct StringU5BU5D_t2635374444;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t370943942;
// System.Runtime.Remoting.Contexts.Context
struct Context_t2158928792;
// System.Type[]
struct TypeU5BU5D_t3769363203;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t4153003670;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1710796050;
// System.Type
struct Type_t;
// System.Void
struct Void_t2848894715;
// System.Char[]
struct CharU5BU5D_t657434090;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t3380215848;
// System.Runtime.Remoting.Contexts.ContextCallbackObject
struct ContextCallbackObject_t1188206941;
// System.Runtime.Remoting.Lifetime.LeaseManager
struct LeaseManager_t67023432;
// System.Threading.Mutex
struct Mutex_t567397795;
// System.Threading.Thread
struct Thread_t2560945987;
// System.Threading.WaitHandle
struct WaitHandle_t1562832785;
// System.Threading.ExecutionContext
struct ExecutionContext_t1394449154;
// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t375276670;
// System.Runtime.Remoting.Messaging.IMessageCtrl
struct IMessageCtrl_t756589373;
// System.Runtime.Remoting.Messaging.IMessage
struct IMessage_t4122541683;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef EXCEPTION_T1050936770_H
#define EXCEPTION_T1050936770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t1050936770  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t1690941108* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t1050936770 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t1050936770, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t1690941108* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t1690941108** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t1690941108* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t1050936770, ___inner_exception_1)); }
	inline Exception_t1050936770 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t1050936770 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t1050936770 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t1050936770, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t1050936770, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t1050936770, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t1050936770, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t1050936770, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t1050936770, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t1050936770, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t1050936770, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t1050936770, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T1050936770_H
#ifndef CONSTRUCTIONLEVELACTIVATOR_T3954920495_H
#define CONSTRUCTIONLEVELACTIVATOR_T3954920495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ConstructionLevelActivator
struct  ConstructionLevelActivator_t3954920495  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTIONLEVELACTIVATOR_T3954920495_H
#ifndef CONTEXTLEVELACTIVATOR_T3862116030_H
#define CONTEXTLEVELACTIVATOR_T3862116030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ContextLevelActivator
struct  ContextLevelActivator_t3862116030  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ContextLevelActivator::m_NextActivator
	RuntimeObject* ___m_NextActivator_0;

public:
	inline static int32_t get_offset_of_m_NextActivator_0() { return static_cast<int32_t>(offsetof(ContextLevelActivator_t3862116030, ___m_NextActivator_0)); }
	inline RuntimeObject* get_m_NextActivator_0() const { return ___m_NextActivator_0; }
	inline RuntimeObject** get_address_of_m_NextActivator_0() { return &___m_NextActivator_0; }
	inline void set_m_NextActivator_0(RuntimeObject* value)
	{
		___m_NextActivator_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_NextActivator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTLEVELACTIVATOR_T3862116030_H
#ifndef ATTRIBUTE_T3576420911_H
#define ATTRIBUTE_T3576420911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t3576420911  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T3576420911_H
#ifndef CHANNELINFO_T242625656_H
#define CHANNELINFO_T242625656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ChannelInfo
struct  ChannelInfo_t242625656  : public RuntimeObject
{
public:
	// System.Object[] System.Runtime.Remoting.ChannelInfo::channelData
	ObjectU5BU5D_t3715313104* ___channelData_0;

public:
	inline static int32_t get_offset_of_channelData_0() { return static_cast<int32_t>(offsetof(ChannelInfo_t242625656, ___channelData_0)); }
	inline ObjectU5BU5D_t3715313104* get_channelData_0() const { return ___channelData_0; }
	inline ObjectU5BU5D_t3715313104** get_address_of_channelData_0() { return &___channelData_0; }
	inline void set_channelData_0(ObjectU5BU5D_t3715313104* value)
	{
		___channelData_0 = value;
		Il2CppCodeGenWriteBarrier((&___channelData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELINFO_T242625656_H
#ifndef CHANNELSERVICES_T517115582_H
#define CHANNELSERVICES_T517115582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.ChannelServices
struct  ChannelServices_t517115582  : public RuntimeObject
{
public:

public:
};

struct ChannelServices_t517115582_StaticFields
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::registeredChannels
	ArrayList_t1009438618 * ___registeredChannels_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::delayedClientChannels
	ArrayList_t1009438618 * ___delayedClientChannels_1;
	// System.Runtime.Remoting.Contexts.CrossContextChannel System.Runtime.Remoting.Channels.ChannelServices::_crossContextSink
	CrossContextChannel_t2551771611 * ____crossContextSink_2;
	// System.String System.Runtime.Remoting.Channels.ChannelServices::CrossContextUrl
	String_t* ___CrossContextUrl_3;
	// System.Collections.IList System.Runtime.Remoting.Channels.ChannelServices::oldStartModeTypes
	RuntimeObject* ___oldStartModeTypes_4;

public:
	inline static int32_t get_offset_of_registeredChannels_0() { return static_cast<int32_t>(offsetof(ChannelServices_t517115582_StaticFields, ___registeredChannels_0)); }
	inline ArrayList_t1009438618 * get_registeredChannels_0() const { return ___registeredChannels_0; }
	inline ArrayList_t1009438618 ** get_address_of_registeredChannels_0() { return &___registeredChannels_0; }
	inline void set_registeredChannels_0(ArrayList_t1009438618 * value)
	{
		___registeredChannels_0 = value;
		Il2CppCodeGenWriteBarrier((&___registeredChannels_0), value);
	}

	inline static int32_t get_offset_of_delayedClientChannels_1() { return static_cast<int32_t>(offsetof(ChannelServices_t517115582_StaticFields, ___delayedClientChannels_1)); }
	inline ArrayList_t1009438618 * get_delayedClientChannels_1() const { return ___delayedClientChannels_1; }
	inline ArrayList_t1009438618 ** get_address_of_delayedClientChannels_1() { return &___delayedClientChannels_1; }
	inline void set_delayedClientChannels_1(ArrayList_t1009438618 * value)
	{
		___delayedClientChannels_1 = value;
		Il2CppCodeGenWriteBarrier((&___delayedClientChannels_1), value);
	}

	inline static int32_t get_offset_of__crossContextSink_2() { return static_cast<int32_t>(offsetof(ChannelServices_t517115582_StaticFields, ____crossContextSink_2)); }
	inline CrossContextChannel_t2551771611 * get__crossContextSink_2() const { return ____crossContextSink_2; }
	inline CrossContextChannel_t2551771611 ** get_address_of__crossContextSink_2() { return &____crossContextSink_2; }
	inline void set__crossContextSink_2(CrossContextChannel_t2551771611 * value)
	{
		____crossContextSink_2 = value;
		Il2CppCodeGenWriteBarrier((&____crossContextSink_2), value);
	}

	inline static int32_t get_offset_of_CrossContextUrl_3() { return static_cast<int32_t>(offsetof(ChannelServices_t517115582_StaticFields, ___CrossContextUrl_3)); }
	inline String_t* get_CrossContextUrl_3() const { return ___CrossContextUrl_3; }
	inline String_t** get_address_of_CrossContextUrl_3() { return &___CrossContextUrl_3; }
	inline void set_CrossContextUrl_3(String_t* value)
	{
		___CrossContextUrl_3 = value;
		Il2CppCodeGenWriteBarrier((&___CrossContextUrl_3), value);
	}

	inline static int32_t get_offset_of_oldStartModeTypes_4() { return static_cast<int32_t>(offsetof(ChannelServices_t517115582_StaticFields, ___oldStartModeTypes_4)); }
	inline RuntimeObject* get_oldStartModeTypes_4() const { return ___oldStartModeTypes_4; }
	inline RuntimeObject** get_address_of_oldStartModeTypes_4() { return &___oldStartModeTypes_4; }
	inline void set_oldStartModeTypes_4(RuntimeObject* value)
	{
		___oldStartModeTypes_4 = value;
		Il2CppCodeGenWriteBarrier((&___oldStartModeTypes_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELSERVICES_T517115582_H
#ifndef CROSSAPPDOMAINDATA_T3554352104_H
#define CROSSAPPDOMAINDATA_T3554352104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainData
struct  CrossAppDomainData_t3554352104  : public RuntimeObject
{
public:
	// System.Object System.Runtime.Remoting.Channels.CrossAppDomainData::_ContextID
	RuntimeObject * ____ContextID_0;
	// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainData::_DomainID
	int32_t ____DomainID_1;
	// System.String System.Runtime.Remoting.Channels.CrossAppDomainData::_processGuid
	String_t* ____processGuid_2;

public:
	inline static int32_t get_offset_of__ContextID_0() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t3554352104, ____ContextID_0)); }
	inline RuntimeObject * get__ContextID_0() const { return ____ContextID_0; }
	inline RuntimeObject ** get_address_of__ContextID_0() { return &____ContextID_0; }
	inline void set__ContextID_0(RuntimeObject * value)
	{
		____ContextID_0 = value;
		Il2CppCodeGenWriteBarrier((&____ContextID_0), value);
	}

	inline static int32_t get_offset_of__DomainID_1() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t3554352104, ____DomainID_1)); }
	inline int32_t get__DomainID_1() const { return ____DomainID_1; }
	inline int32_t* get_address_of__DomainID_1() { return &____DomainID_1; }
	inline void set__DomainID_1(int32_t value)
	{
		____DomainID_1 = value;
	}

	inline static int32_t get_offset_of__processGuid_2() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t3554352104, ____processGuid_2)); }
	inline String_t* get__processGuid_2() const { return ____processGuid_2; }
	inline String_t** get_address_of__processGuid_2() { return &____processGuid_2; }
	inline void set__processGuid_2(String_t* value)
	{
		____processGuid_2 = value;
		Il2CppCodeGenWriteBarrier((&____processGuid_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSAPPDOMAINDATA_T3554352104_H
#ifndef CROSSAPPDOMAINCHANNEL_T1767267272_H
#define CROSSAPPDOMAINCHANNEL_T1767267272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainChannel
struct  CrossAppDomainChannel_t1767267272  : public RuntimeObject
{
public:

public:
};

struct CrossAppDomainChannel_t1767267272_StaticFields
{
public:
	// System.Object System.Runtime.Remoting.Channels.CrossAppDomainChannel::s_lock
	RuntimeObject * ___s_lock_0;

public:
	inline static int32_t get_offset_of_s_lock_0() { return static_cast<int32_t>(offsetof(CrossAppDomainChannel_t1767267272_StaticFields, ___s_lock_0)); }
	inline RuntimeObject * get_s_lock_0() const { return ___s_lock_0; }
	inline RuntimeObject ** get_address_of_s_lock_0() { return &___s_lock_0; }
	inline void set_s_lock_0(RuntimeObject * value)
	{
		___s_lock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_lock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSAPPDOMAINCHANNEL_T1767267272_H
#ifndef CROSSAPPDOMAINSINK_T1042402513_H
#define CROSSAPPDOMAINSINK_T1042402513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainSink
struct  CrossAppDomainSink_t1042402513  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainSink::_domainID
	int32_t ____domainID_2;

public:
	inline static int32_t get_offset_of__domainID_2() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t1042402513, ____domainID_2)); }
	inline int32_t get__domainID_2() const { return ____domainID_2; }
	inline int32_t* get_address_of__domainID_2() { return &____domainID_2; }
	inline void set__domainID_2(int32_t value)
	{
		____domainID_2 = value;
	}
};

struct CrossAppDomainSink_t1042402513_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.CrossAppDomainSink::s_sinks
	Hashtable_t4262735797 * ___s_sinks_0;
	// System.Reflection.MethodInfo System.Runtime.Remoting.Channels.CrossAppDomainSink::processMessageMethod
	MethodInfo_t * ___processMessageMethod_1;

public:
	inline static int32_t get_offset_of_s_sinks_0() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t1042402513_StaticFields, ___s_sinks_0)); }
	inline Hashtable_t4262735797 * get_s_sinks_0() const { return ___s_sinks_0; }
	inline Hashtable_t4262735797 ** get_address_of_s_sinks_0() { return &___s_sinks_0; }
	inline void set_s_sinks_0(Hashtable_t4262735797 * value)
	{
		___s_sinks_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_sinks_0), value);
	}

	inline static int32_t get_offset_of_processMessageMethod_1() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t1042402513_StaticFields, ___processMessageMethod_1)); }
	inline MethodInfo_t * get_processMessageMethod_1() const { return ___processMessageMethod_1; }
	inline MethodInfo_t ** get_address_of_processMessageMethod_1() { return &___processMessageMethod_1; }
	inline void set_processMessageMethod_1(MethodInfo_t * value)
	{
		___processMessageMethod_1 = value;
		Il2CppCodeGenWriteBarrier((&___processMessageMethod_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSAPPDOMAINSINK_T1042402513_H
#ifndef ARGINFO_T4165897596_H
#define ARGINFO_T4165897596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ArgInfo
struct  ArgInfo_t4165897596  : public RuntimeObject
{
public:
	// System.Int32[] System.Runtime.Remoting.Messaging.ArgInfo::_paramMap
	Int32U5BU5D_t579565188* ____paramMap_0;
	// System.Int32 System.Runtime.Remoting.Messaging.ArgInfo::_inoutArgCount
	int32_t ____inoutArgCount_1;
	// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ArgInfo::_method
	MethodBase_t840489999 * ____method_2;

public:
	inline static int32_t get_offset_of__paramMap_0() { return static_cast<int32_t>(offsetof(ArgInfo_t4165897596, ____paramMap_0)); }
	inline Int32U5BU5D_t579565188* get__paramMap_0() const { return ____paramMap_0; }
	inline Int32U5BU5D_t579565188** get_address_of__paramMap_0() { return &____paramMap_0; }
	inline void set__paramMap_0(Int32U5BU5D_t579565188* value)
	{
		____paramMap_0 = value;
		Il2CppCodeGenWriteBarrier((&____paramMap_0), value);
	}

	inline static int32_t get_offset_of__inoutArgCount_1() { return static_cast<int32_t>(offsetof(ArgInfo_t4165897596, ____inoutArgCount_1)); }
	inline int32_t get__inoutArgCount_1() const { return ____inoutArgCount_1; }
	inline int32_t* get_address_of__inoutArgCount_1() { return &____inoutArgCount_1; }
	inline void set__inoutArgCount_1(int32_t value)
	{
		____inoutArgCount_1 = value;
	}

	inline static int32_t get_offset_of__method_2() { return static_cast<int32_t>(offsetof(ArgInfo_t4165897596, ____method_2)); }
	inline MethodBase_t840489999 * get__method_2() const { return ____method_2; }
	inline MethodBase_t840489999 ** get_address_of__method_2() { return &____method_2; }
	inline void set__method_2(MethodBase_t840489999 * value)
	{
		____method_2 = value;
		Il2CppCodeGenWriteBarrier((&____method_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGINFO_T4165897596_H
#ifndef SINKPROVIDERDATA_T2756370643_H
#define SINKPROVIDERDATA_T2756370643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.SinkProviderData
struct  SinkProviderData_t2756370643  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Channels.SinkProviderData::sinkName
	String_t* ___sinkName_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.SinkProviderData::children
	ArrayList_t1009438618 * ___children_1;
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.SinkProviderData::properties
	Hashtable_t4262735797 * ___properties_2;

public:
	inline static int32_t get_offset_of_sinkName_0() { return static_cast<int32_t>(offsetof(SinkProviderData_t2756370643, ___sinkName_0)); }
	inline String_t* get_sinkName_0() const { return ___sinkName_0; }
	inline String_t** get_address_of_sinkName_0() { return &___sinkName_0; }
	inline void set_sinkName_0(String_t* value)
	{
		___sinkName_0 = value;
		Il2CppCodeGenWriteBarrier((&___sinkName_0), value);
	}

	inline static int32_t get_offset_of_children_1() { return static_cast<int32_t>(offsetof(SinkProviderData_t2756370643, ___children_1)); }
	inline ArrayList_t1009438618 * get_children_1() const { return ___children_1; }
	inline ArrayList_t1009438618 ** get_address_of_children_1() { return &___children_1; }
	inline void set_children_1(ArrayList_t1009438618 * value)
	{
		___children_1 = value;
		Il2CppCodeGenWriteBarrier((&___children_1), value);
	}

	inline static int32_t get_offset_of_properties_2() { return static_cast<int32_t>(offsetof(SinkProviderData_t2756370643, ___properties_2)); }
	inline Hashtable_t4262735797 * get_properties_2() const { return ___properties_2; }
	inline Hashtable_t4262735797 ** get_address_of_properties_2() { return &___properties_2; }
	inline void set_properties_2(Hashtable_t4262735797 * value)
	{
		___properties_2 = value;
		Il2CppCodeGenWriteBarrier((&___properties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINKPROVIDERDATA_T2756370643_H
#ifndef DYNAMICPROPERTYCOLLECTION_T3380215848_H
#define DYNAMICPROPERTYCOLLECTION_T3380215848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct  DynamicPropertyCollection_t3380215848  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Contexts.DynamicPropertyCollection::_properties
	ArrayList_t1009438618 * ____properties_0;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(DynamicPropertyCollection_t3380215848, ____properties_0)); }
	inline ArrayList_t1009438618 * get__properties_0() const { return ____properties_0; }
	inline ArrayList_t1009438618 ** get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(ArrayList_t1009438618 * value)
	{
		____properties_0 = value;
		Il2CppCodeGenWriteBarrier((&____properties_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICPROPERTYCOLLECTION_T3380215848_H
#ifndef DYNAMICPROPERTYREG_T2926824170_H
#define DYNAMICPROPERTYREG_T2926824170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg
struct  DynamicPropertyReg_t2926824170  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Contexts.IDynamicProperty System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg::Property
	RuntimeObject* ___Property_0;
	// System.Runtime.Remoting.Contexts.IDynamicMessageSink System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg::Sink
	RuntimeObject* ___Sink_1;

public:
	inline static int32_t get_offset_of_Property_0() { return static_cast<int32_t>(offsetof(DynamicPropertyReg_t2926824170, ___Property_0)); }
	inline RuntimeObject* get_Property_0() const { return ___Property_0; }
	inline RuntimeObject** get_address_of_Property_0() { return &___Property_0; }
	inline void set_Property_0(RuntimeObject* value)
	{
		___Property_0 = value;
		Il2CppCodeGenWriteBarrier((&___Property_0), value);
	}

	inline static int32_t get_offset_of_Sink_1() { return static_cast<int32_t>(offsetof(DynamicPropertyReg_t2926824170, ___Sink_1)); }
	inline RuntimeObject* get_Sink_1() const { return ___Sink_1; }
	inline RuntimeObject** get_address_of_Sink_1() { return &___Sink_1; }
	inline void set_Sink_1(RuntimeObject* value)
	{
		___Sink_1 = value;
		Il2CppCodeGenWriteBarrier((&___Sink_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICPROPERTYREG_T2926824170_H
#ifndef HEADER_T590423160_H
#define HEADER_T590423160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.Header
struct  Header_t590423160  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Messaging.Header::HeaderNamespace
	String_t* ___HeaderNamespace_0;
	// System.Boolean System.Runtime.Remoting.Messaging.Header::MustUnderstand
	bool ___MustUnderstand_1;
	// System.String System.Runtime.Remoting.Messaging.Header::Name
	String_t* ___Name_2;
	// System.Object System.Runtime.Remoting.Messaging.Header::Value
	RuntimeObject * ___Value_3;

public:
	inline static int32_t get_offset_of_HeaderNamespace_0() { return static_cast<int32_t>(offsetof(Header_t590423160, ___HeaderNamespace_0)); }
	inline String_t* get_HeaderNamespace_0() const { return ___HeaderNamespace_0; }
	inline String_t** get_address_of_HeaderNamespace_0() { return &___HeaderNamespace_0; }
	inline void set_HeaderNamespace_0(String_t* value)
	{
		___HeaderNamespace_0 = value;
		Il2CppCodeGenWriteBarrier((&___HeaderNamespace_0), value);
	}

	inline static int32_t get_offset_of_MustUnderstand_1() { return static_cast<int32_t>(offsetof(Header_t590423160, ___MustUnderstand_1)); }
	inline bool get_MustUnderstand_1() const { return ___MustUnderstand_1; }
	inline bool* get_address_of_MustUnderstand_1() { return &___MustUnderstand_1; }
	inline void set_MustUnderstand_1(bool value)
	{
		___MustUnderstand_1 = value;
	}

	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(Header_t590423160, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier((&___Name_2), value);
	}

	inline static int32_t get_offset_of_Value_3() { return static_cast<int32_t>(offsetof(Header_t590423160, ___Value_3)); }
	inline RuntimeObject * get_Value_3() const { return ___Value_3; }
	inline RuntimeObject ** get_address_of_Value_3() { return &___Value_3; }
	inline void set_Value_3(RuntimeObject * value)
	{
		___Value_3 = value;
		Il2CppCodeGenWriteBarrier((&___Value_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADER_T590423160_H
#ifndef CROSSCONTEXTCHANNEL_T2551771611_H
#define CROSSCONTEXTCHANNEL_T2551771611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.CrossContextChannel
struct  CrossContextChannel_t2551771611  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSCONTEXTCHANNEL_T2551771611_H
#ifndef ENVOYTERMINATORSINK_T4003621778_H
#define ENVOYTERMINATORSINK_T4003621778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
struct  EnvoyTerminatorSink_t4003621778  : public RuntimeObject
{
public:

public:
};

struct EnvoyTerminatorSink_t4003621778_StaticFields
{
public:
	// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink System.Runtime.Remoting.Messaging.EnvoyTerminatorSink::Instance
	EnvoyTerminatorSink_t4003621778 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(EnvoyTerminatorSink_t4003621778_StaticFields, ___Instance_0)); }
	inline EnvoyTerminatorSink_t4003621778 * get_Instance_0() const { return ___Instance_0; }
	inline EnvoyTerminatorSink_t4003621778 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(EnvoyTerminatorSink_t4003621778 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVOYTERMINATORSINK_T4003621778_H
#ifndef SYNCHRONIZEDCLIENTCONTEXTSINK_T450672108_H
#define SYNCHRONIZEDCLIENTCONTEXTSINK_T450672108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.SynchronizedClientContextSink
struct  SynchronizedClientContextSink_t450672108  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizedClientContextSink::_next
	RuntimeObject* ____next_0;
	// System.Runtime.Remoting.Contexts.SynchronizationAttribute System.Runtime.Remoting.Contexts.SynchronizedClientContextSink::_att
	SynchronizationAttribute_t3653254383 * ____att_1;

public:
	inline static int32_t get_offset_of__next_0() { return static_cast<int32_t>(offsetof(SynchronizedClientContextSink_t450672108, ____next_0)); }
	inline RuntimeObject* get__next_0() const { return ____next_0; }
	inline RuntimeObject** get_address_of__next_0() { return &____next_0; }
	inline void set__next_0(RuntimeObject* value)
	{
		____next_0 = value;
		Il2CppCodeGenWriteBarrier((&____next_0), value);
	}

	inline static int32_t get_offset_of__att_1() { return static_cast<int32_t>(offsetof(SynchronizedClientContextSink_t450672108, ____att_1)); }
	inline SynchronizationAttribute_t3653254383 * get__att_1() const { return ____att_1; }
	inline SynchronizationAttribute_t3653254383 ** get_address_of__att_1() { return &____att_1; }
	inline void set__att_1(SynchronizationAttribute_t3653254383 * value)
	{
		____att_1 = value;
		Il2CppCodeGenWriteBarrier((&____att_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZEDCLIENTCONTEXTSINK_T450672108_H
#ifndef SYNCHRONIZEDSERVERCONTEXTSINK_T1119288578_H
#define SYNCHRONIZEDSERVERCONTEXTSINK_T1119288578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.SynchronizedServerContextSink
struct  SynchronizedServerContextSink_t1119288578  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizedServerContextSink::_next
	RuntimeObject* ____next_0;
	// System.Runtime.Remoting.Contexts.SynchronizationAttribute System.Runtime.Remoting.Contexts.SynchronizedServerContextSink::_att
	SynchronizationAttribute_t3653254383 * ____att_1;

public:
	inline static int32_t get_offset_of__next_0() { return static_cast<int32_t>(offsetof(SynchronizedServerContextSink_t1119288578, ____next_0)); }
	inline RuntimeObject* get__next_0() const { return ____next_0; }
	inline RuntimeObject** get_address_of__next_0() { return &____next_0; }
	inline void set__next_0(RuntimeObject* value)
	{
		____next_0 = value;
		Il2CppCodeGenWriteBarrier((&____next_0), value);
	}

	inline static int32_t get_offset_of__att_1() { return static_cast<int32_t>(offsetof(SynchronizedServerContextSink_t1119288578, ____att_1)); }
	inline SynchronizationAttribute_t3653254383 * get__att_1() const { return ____att_1; }
	inline SynchronizationAttribute_t3653254383 ** get_address_of__att_1() { return &____att_1; }
	inline void set__att_1(SynchronizationAttribute_t3653254383 * value)
	{
		____att_1 = value;
		Il2CppCodeGenWriteBarrier((&____att_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZEDSERVERCONTEXTSINK_T1119288578_H
#ifndef LEASEMANAGER_T67023432_H
#define LEASEMANAGER_T67023432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.LeaseManager
struct  LeaseManager_t67023432  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Lifetime.LeaseManager::_objects
	ArrayList_t1009438618 * ____objects_0;
	// System.Threading.Timer System.Runtime.Remoting.Lifetime.LeaseManager::_timer
	Timer_t2547537275 * ____timer_1;

public:
	inline static int32_t get_offset_of__objects_0() { return static_cast<int32_t>(offsetof(LeaseManager_t67023432, ____objects_0)); }
	inline ArrayList_t1009438618 * get__objects_0() const { return ____objects_0; }
	inline ArrayList_t1009438618 ** get_address_of__objects_0() { return &____objects_0; }
	inline void set__objects_0(ArrayList_t1009438618 * value)
	{
		____objects_0 = value;
		Il2CppCodeGenWriteBarrier((&____objects_0), value);
	}

	inline static int32_t get_offset_of__timer_1() { return static_cast<int32_t>(offsetof(LeaseManager_t67023432, ____timer_1)); }
	inline Timer_t2547537275 * get__timer_1() const { return ____timer_1; }
	inline Timer_t2547537275 ** get_address_of__timer_1() { return &____timer_1; }
	inline void set__timer_1(Timer_t2547537275 * value)
	{
		____timer_1 = value;
		Il2CppCodeGenWriteBarrier((&____timer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEASEMANAGER_T67023432_H
#ifndef LEASESINK_T1005090020_H
#define LEASESINK_T1005090020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.LeaseSink
struct  LeaseSink_t1005090020  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Lifetime.LeaseSink::_nextSink
	RuntimeObject* ____nextSink_0;

public:
	inline static int32_t get_offset_of__nextSink_0() { return static_cast<int32_t>(offsetof(LeaseSink_t1005090020, ____nextSink_0)); }
	inline RuntimeObject* get__nextSink_0() const { return ____nextSink_0; }
	inline RuntimeObject** get_address_of__nextSink_0() { return &____nextSink_0; }
	inline void set__nextSink_0(RuntimeObject* value)
	{
		____nextSink_0 = value;
		Il2CppCodeGenWriteBarrier((&____nextSink_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEASESINK_T1005090020_H
#ifndef METHODDICTIONARY_T2324758152_H
#define METHODDICTIONARY_T2324758152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodDictionary
struct  MethodDictionary_t2324758152  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::_internalProperties
	RuntimeObject* ____internalProperties_0;
	// System.Runtime.Remoting.Messaging.IMethodMessage System.Runtime.Remoting.Messaging.MethodDictionary::_message
	RuntimeObject* ____message_1;
	// System.String[] System.Runtime.Remoting.Messaging.MethodDictionary::_methodKeys
	StringU5BU5D_t2635374444* ____methodKeys_2;
	// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::_ownProperties
	bool ____ownProperties_3;

public:
	inline static int32_t get_offset_of__internalProperties_0() { return static_cast<int32_t>(offsetof(MethodDictionary_t2324758152, ____internalProperties_0)); }
	inline RuntimeObject* get__internalProperties_0() const { return ____internalProperties_0; }
	inline RuntimeObject** get_address_of__internalProperties_0() { return &____internalProperties_0; }
	inline void set__internalProperties_0(RuntimeObject* value)
	{
		____internalProperties_0 = value;
		Il2CppCodeGenWriteBarrier((&____internalProperties_0), value);
	}

	inline static int32_t get_offset_of__message_1() { return static_cast<int32_t>(offsetof(MethodDictionary_t2324758152, ____message_1)); }
	inline RuntimeObject* get__message_1() const { return ____message_1; }
	inline RuntimeObject** get_address_of__message_1() { return &____message_1; }
	inline void set__message_1(RuntimeObject* value)
	{
		____message_1 = value;
		Il2CppCodeGenWriteBarrier((&____message_1), value);
	}

	inline static int32_t get_offset_of__methodKeys_2() { return static_cast<int32_t>(offsetof(MethodDictionary_t2324758152, ____methodKeys_2)); }
	inline StringU5BU5D_t2635374444* get__methodKeys_2() const { return ____methodKeys_2; }
	inline StringU5BU5D_t2635374444** get_address_of__methodKeys_2() { return &____methodKeys_2; }
	inline void set__methodKeys_2(StringU5BU5D_t2635374444* value)
	{
		____methodKeys_2 = value;
		Il2CppCodeGenWriteBarrier((&____methodKeys_2), value);
	}

	inline static int32_t get_offset_of__ownProperties_3() { return static_cast<int32_t>(offsetof(MethodDictionary_t2324758152, ____ownProperties_3)); }
	inline bool get__ownProperties_3() const { return ____ownProperties_3; }
	inline bool* get_address_of__ownProperties_3() { return &____ownProperties_3; }
	inline void set__ownProperties_3(bool value)
	{
		____ownProperties_3 = value;
	}
};

struct MethodDictionary_t2324758152_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodDictionary::<>f__switch$map21
	Dictionary_2_t370943942 * ___U3CU3Ef__switchU24map21_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodDictionary::<>f__switch$map22
	Dictionary_2_t370943942 * ___U3CU3Ef__switchU24map22_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map21_4() { return static_cast<int32_t>(offsetof(MethodDictionary_t2324758152_StaticFields, ___U3CU3Ef__switchU24map21_4)); }
	inline Dictionary_2_t370943942 * get_U3CU3Ef__switchU24map21_4() const { return ___U3CU3Ef__switchU24map21_4; }
	inline Dictionary_2_t370943942 ** get_address_of_U3CU3Ef__switchU24map21_4() { return &___U3CU3Ef__switchU24map21_4; }
	inline void set_U3CU3Ef__switchU24map21_4(Dictionary_2_t370943942 * value)
	{
		___U3CU3Ef__switchU24map21_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map21_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map22_5() { return static_cast<int32_t>(offsetof(MethodDictionary_t2324758152_StaticFields, ___U3CU3Ef__switchU24map22_5)); }
	inline Dictionary_2_t370943942 * get_U3CU3Ef__switchU24map22_5() const { return ___U3CU3Ef__switchU24map22_5; }
	inline Dictionary_2_t370943942 ** get_address_of_U3CU3Ef__switchU24map22_5() { return &___U3CU3Ef__switchU24map22_5; }
	inline void set_U3CU3Ef__switchU24map22_5(Dictionary_2_t370943942 * value)
	{
		___U3CU3Ef__switchU24map22_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map22_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODDICTIONARY_T2324758152_H
#ifndef ACTIVATIONSERVICES_T259761356_H
#define ACTIVATIONSERVICES_T259761356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ActivationServices
struct  ActivationServices_t259761356  : public RuntimeObject
{
public:

public:
};

struct ActivationServices_t259761356_StaticFields
{
public:
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ActivationServices::_constructionActivator
	RuntimeObject* ____constructionActivator_0;

public:
	inline static int32_t get_offset_of__constructionActivator_0() { return static_cast<int32_t>(offsetof(ActivationServices_t259761356_StaticFields, ____constructionActivator_0)); }
	inline RuntimeObject* get__constructionActivator_0() const { return ____constructionActivator_0; }
	inline RuntimeObject** get_address_of__constructionActivator_0() { return &____constructionActivator_0; }
	inline void set__constructionActivator_0(RuntimeObject* value)
	{
		____constructionActivator_0 = value;
		Il2CppCodeGenWriteBarrier((&____constructionActivator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATIONSERVICES_T259761356_H
#ifndef APPDOMAINLEVELACTIVATOR_T3388493819_H
#define APPDOMAINLEVELACTIVATOR_T3388493819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.AppDomainLevelActivator
struct  AppDomainLevelActivator_t3388493819  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Activation.AppDomainLevelActivator::_activationUrl
	String_t* ____activationUrl_0;
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.AppDomainLevelActivator::_next
	RuntimeObject* ____next_1;

public:
	inline static int32_t get_offset_of__activationUrl_0() { return static_cast<int32_t>(offsetof(AppDomainLevelActivator_t3388493819, ____activationUrl_0)); }
	inline String_t* get__activationUrl_0() const { return ____activationUrl_0; }
	inline String_t** get_address_of__activationUrl_0() { return &____activationUrl_0; }
	inline void set__activationUrl_0(String_t* value)
	{
		____activationUrl_0 = value;
		Il2CppCodeGenWriteBarrier((&____activationUrl_0), value);
	}

	inline static int32_t get_offset_of__next_1() { return static_cast<int32_t>(offsetof(AppDomainLevelActivator_t3388493819, ____next_1)); }
	inline RuntimeObject* get__next_1() const { return ____next_1; }
	inline RuntimeObject** get_address_of__next_1() { return &____next_1; }
	inline void set__next_1(RuntimeObject* value)
	{
		____next_1 = value;
		Il2CppCodeGenWriteBarrier((&____next_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAINLEVELACTIVATOR_T3388493819_H
#ifndef CLIENTCONTEXTTERMINATORSINK_T1257535831_H
#define CLIENTCONTEXTTERMINATORSINK_T1257535831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ClientContextTerminatorSink
struct  ClientContextTerminatorSink_t1257535831  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Messaging.ClientContextTerminatorSink::_context
	Context_t2158928792 * ____context_0;

public:
	inline static int32_t get_offset_of__context_0() { return static_cast<int32_t>(offsetof(ClientContextTerminatorSink_t1257535831, ____context_0)); }
	inline Context_t2158928792 * get__context_0() const { return ____context_0; }
	inline Context_t2158928792 ** get_address_of__context_0() { return &____context_0; }
	inline void set__context_0(Context_t2158928792 * value)
	{
		____context_0 = value;
		Il2CppCodeGenWriteBarrier((&____context_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTCONTEXTTERMINATORSINK_T1257535831_H
#ifndef ACTIVATIONARGUMENTS_T2056399653_H
#define ACTIVATIONARGUMENTS_T2056399653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Hosting.ActivationArguments
struct  ActivationArguments_t2056399653  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATIONARGUMENTS_T2056399653_H
#ifndef METHODCALL_T1343622224_H
#define METHODCALL_T1343622224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodCall
struct  MethodCall_t1343622224  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_uri
	String_t* ____uri_0;
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_typeName
	String_t* ____typeName_1;
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_methodName
	String_t* ____methodName_2;
	// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::_args
	ObjectU5BU5D_t3715313104* ____args_3;
	// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::_methodSignature
	TypeU5BU5D_t3769363203* ____methodSignature_4;
	// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::_methodBase
	MethodBase_t840489999 * ____methodBase_5;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::_callContext
	LogicalCallContext_t4153003670 * ____callContext_6;
	// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::_genericArguments
	TypeU5BU5D_t3769363203* ____genericArguments_7;
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::ExternalProperties
	RuntimeObject* ___ExternalProperties_8;
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::InternalProperties
	RuntimeObject* ___InternalProperties_9;

public:
	inline static int32_t get_offset_of__uri_0() { return static_cast<int32_t>(offsetof(MethodCall_t1343622224, ____uri_0)); }
	inline String_t* get__uri_0() const { return ____uri_0; }
	inline String_t** get_address_of__uri_0() { return &____uri_0; }
	inline void set__uri_0(String_t* value)
	{
		____uri_0 = value;
		Il2CppCodeGenWriteBarrier((&____uri_0), value);
	}

	inline static int32_t get_offset_of__typeName_1() { return static_cast<int32_t>(offsetof(MethodCall_t1343622224, ____typeName_1)); }
	inline String_t* get__typeName_1() const { return ____typeName_1; }
	inline String_t** get_address_of__typeName_1() { return &____typeName_1; }
	inline void set__typeName_1(String_t* value)
	{
		____typeName_1 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_1), value);
	}

	inline static int32_t get_offset_of__methodName_2() { return static_cast<int32_t>(offsetof(MethodCall_t1343622224, ____methodName_2)); }
	inline String_t* get__methodName_2() const { return ____methodName_2; }
	inline String_t** get_address_of__methodName_2() { return &____methodName_2; }
	inline void set__methodName_2(String_t* value)
	{
		____methodName_2 = value;
		Il2CppCodeGenWriteBarrier((&____methodName_2), value);
	}

	inline static int32_t get_offset_of__args_3() { return static_cast<int32_t>(offsetof(MethodCall_t1343622224, ____args_3)); }
	inline ObjectU5BU5D_t3715313104* get__args_3() const { return ____args_3; }
	inline ObjectU5BU5D_t3715313104** get_address_of__args_3() { return &____args_3; }
	inline void set__args_3(ObjectU5BU5D_t3715313104* value)
	{
		____args_3 = value;
		Il2CppCodeGenWriteBarrier((&____args_3), value);
	}

	inline static int32_t get_offset_of__methodSignature_4() { return static_cast<int32_t>(offsetof(MethodCall_t1343622224, ____methodSignature_4)); }
	inline TypeU5BU5D_t3769363203* get__methodSignature_4() const { return ____methodSignature_4; }
	inline TypeU5BU5D_t3769363203** get_address_of__methodSignature_4() { return &____methodSignature_4; }
	inline void set__methodSignature_4(TypeU5BU5D_t3769363203* value)
	{
		____methodSignature_4 = value;
		Il2CppCodeGenWriteBarrier((&____methodSignature_4), value);
	}

	inline static int32_t get_offset_of__methodBase_5() { return static_cast<int32_t>(offsetof(MethodCall_t1343622224, ____methodBase_5)); }
	inline MethodBase_t840489999 * get__methodBase_5() const { return ____methodBase_5; }
	inline MethodBase_t840489999 ** get_address_of__methodBase_5() { return &____methodBase_5; }
	inline void set__methodBase_5(MethodBase_t840489999 * value)
	{
		____methodBase_5 = value;
		Il2CppCodeGenWriteBarrier((&____methodBase_5), value);
	}

	inline static int32_t get_offset_of__callContext_6() { return static_cast<int32_t>(offsetof(MethodCall_t1343622224, ____callContext_6)); }
	inline LogicalCallContext_t4153003670 * get__callContext_6() const { return ____callContext_6; }
	inline LogicalCallContext_t4153003670 ** get_address_of__callContext_6() { return &____callContext_6; }
	inline void set__callContext_6(LogicalCallContext_t4153003670 * value)
	{
		____callContext_6 = value;
		Il2CppCodeGenWriteBarrier((&____callContext_6), value);
	}

	inline static int32_t get_offset_of__genericArguments_7() { return static_cast<int32_t>(offsetof(MethodCall_t1343622224, ____genericArguments_7)); }
	inline TypeU5BU5D_t3769363203* get__genericArguments_7() const { return ____genericArguments_7; }
	inline TypeU5BU5D_t3769363203** get_address_of__genericArguments_7() { return &____genericArguments_7; }
	inline void set__genericArguments_7(TypeU5BU5D_t3769363203* value)
	{
		____genericArguments_7 = value;
		Il2CppCodeGenWriteBarrier((&____genericArguments_7), value);
	}

	inline static int32_t get_offset_of_ExternalProperties_8() { return static_cast<int32_t>(offsetof(MethodCall_t1343622224, ___ExternalProperties_8)); }
	inline RuntimeObject* get_ExternalProperties_8() const { return ___ExternalProperties_8; }
	inline RuntimeObject** get_address_of_ExternalProperties_8() { return &___ExternalProperties_8; }
	inline void set_ExternalProperties_8(RuntimeObject* value)
	{
		___ExternalProperties_8 = value;
		Il2CppCodeGenWriteBarrier((&___ExternalProperties_8), value);
	}

	inline static int32_t get_offset_of_InternalProperties_9() { return static_cast<int32_t>(offsetof(MethodCall_t1343622224, ___InternalProperties_9)); }
	inline RuntimeObject* get_InternalProperties_9() const { return ___InternalProperties_9; }
	inline RuntimeObject** get_address_of_InternalProperties_9() { return &___InternalProperties_9; }
	inline void set_InternalProperties_9(RuntimeObject* value)
	{
		___InternalProperties_9 = value;
		Il2CppCodeGenWriteBarrier((&___InternalProperties_9), value);
	}
};

struct MethodCall_t1343622224_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodCall::<>f__switch$map1F
	Dictionary_2_t370943942 * ___U3CU3Ef__switchU24map1F_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1F_10() { return static_cast<int32_t>(offsetof(MethodCall_t1343622224_StaticFields, ___U3CU3Ef__switchU24map1F_10)); }
	inline Dictionary_2_t370943942 * get_U3CU3Ef__switchU24map1F_10() const { return ___U3CU3Ef__switchU24map1F_10; }
	inline Dictionary_2_t370943942 ** get_address_of_U3CU3Ef__switchU24map1F_10() { return &___U3CU3Ef__switchU24map1F_10; }
	inline void set_U3CU3Ef__switchU24map1F_10(Dictionary_2_t370943942 * value)
	{
		___U3CU3Ef__switchU24map1F_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1F_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODCALL_T1343622224_H
#ifndef MARSHAL_T1784655706_H
#define MARSHAL_T1784655706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.Marshal
struct  Marshal_t1784655706  : public RuntimeObject
{
public:

public:
};

struct Marshal_t1784655706_StaticFields
{
public:
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemMaxDBCSCharSize
	int32_t ___SystemMaxDBCSCharSize_0;
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemDefaultCharSize
	int32_t ___SystemDefaultCharSize_1;

public:
	inline static int32_t get_offset_of_SystemMaxDBCSCharSize_0() { return static_cast<int32_t>(offsetof(Marshal_t1784655706_StaticFields, ___SystemMaxDBCSCharSize_0)); }
	inline int32_t get_SystemMaxDBCSCharSize_0() const { return ___SystemMaxDBCSCharSize_0; }
	inline int32_t* get_address_of_SystemMaxDBCSCharSize_0() { return &___SystemMaxDBCSCharSize_0; }
	inline void set_SystemMaxDBCSCharSize_0(int32_t value)
	{
		___SystemMaxDBCSCharSize_0 = value;
	}

	inline static int32_t get_offset_of_SystemDefaultCharSize_1() { return static_cast<int32_t>(offsetof(Marshal_t1784655706_StaticFields, ___SystemDefaultCharSize_1)); }
	inline int32_t get_SystemDefaultCharSize_1() const { return ___SystemDefaultCharSize_1; }
	inline int32_t* get_address_of_SystemDefaultCharSize_1() { return &___SystemDefaultCharSize_1; }
	inline void set_SystemDefaultCharSize_1(int32_t value)
	{
		___SystemDefaultCharSize_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHAL_T1784655706_H
#ifndef VALUETYPE_T656434274_H
#define VALUETYPE_T656434274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t656434274  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t656434274_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t656434274_marshaled_com
{
};
#endif // VALUETYPE_T656434274_H
#ifndef CRITICALFINALIZEROBJECT_T4180999090_H
#define CRITICALFINALIZEROBJECT_T4180999090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t4180999090  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T4180999090_H
#ifndef ERRORWRAPPER_T3794103536_H
#define ERRORWRAPPER_T3794103536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ErrorWrapper
struct  ErrorWrapper_t3794103536  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.InteropServices.ErrorWrapper::errorCode
	int32_t ___errorCode_0;

public:
	inline static int32_t get_offset_of_errorCode_0() { return static_cast<int32_t>(offsetof(ErrorWrapper_t3794103536, ___errorCode_0)); }
	inline int32_t get_errorCode_0() const { return ___errorCode_0; }
	inline int32_t* get_address_of_errorCode_0() { return &___errorCode_0; }
	inline void set_errorCode_0(int32_t value)
	{
		___errorCode_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORWRAPPER_T3794103536_H
#ifndef MARSHALBYREFOBJECT_T2910809033_H
#define MARSHALBYREFOBJECT_T2910809033_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2910809033  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t1710796050 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2910809033, ____identity_0)); }
	inline ServerIdentity_t1710796050 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t1710796050 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t1710796050 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2910809033_H
#ifndef CONSTRUCTIONCALL_T892247838_H
#define CONSTRUCTIONCALL_T892247838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ConstructionCall
struct  ConstructionCall_t892247838  : public MethodCall_t1343622224
{
public:
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Messaging.ConstructionCall::_activator
	RuntimeObject* ____activator_11;
	// System.Object[] System.Runtime.Remoting.Messaging.ConstructionCall::_activationAttributes
	ObjectU5BU5D_t3715313104* ____activationAttributes_12;
	// System.Collections.IList System.Runtime.Remoting.Messaging.ConstructionCall::_contextProperties
	RuntimeObject* ____contextProperties_13;
	// System.Type System.Runtime.Remoting.Messaging.ConstructionCall::_activationType
	Type_t * ____activationType_14;
	// System.String System.Runtime.Remoting.Messaging.ConstructionCall::_activationTypeName
	String_t* ____activationTypeName_15;
	// System.Boolean System.Runtime.Remoting.Messaging.ConstructionCall::_isContextOk
	bool ____isContextOk_16;

public:
	inline static int32_t get_offset_of__activator_11() { return static_cast<int32_t>(offsetof(ConstructionCall_t892247838, ____activator_11)); }
	inline RuntimeObject* get__activator_11() const { return ____activator_11; }
	inline RuntimeObject** get_address_of__activator_11() { return &____activator_11; }
	inline void set__activator_11(RuntimeObject* value)
	{
		____activator_11 = value;
		Il2CppCodeGenWriteBarrier((&____activator_11), value);
	}

	inline static int32_t get_offset_of__activationAttributes_12() { return static_cast<int32_t>(offsetof(ConstructionCall_t892247838, ____activationAttributes_12)); }
	inline ObjectU5BU5D_t3715313104* get__activationAttributes_12() const { return ____activationAttributes_12; }
	inline ObjectU5BU5D_t3715313104** get_address_of__activationAttributes_12() { return &____activationAttributes_12; }
	inline void set__activationAttributes_12(ObjectU5BU5D_t3715313104* value)
	{
		____activationAttributes_12 = value;
		Il2CppCodeGenWriteBarrier((&____activationAttributes_12), value);
	}

	inline static int32_t get_offset_of__contextProperties_13() { return static_cast<int32_t>(offsetof(ConstructionCall_t892247838, ____contextProperties_13)); }
	inline RuntimeObject* get__contextProperties_13() const { return ____contextProperties_13; }
	inline RuntimeObject** get_address_of__contextProperties_13() { return &____contextProperties_13; }
	inline void set__contextProperties_13(RuntimeObject* value)
	{
		____contextProperties_13 = value;
		Il2CppCodeGenWriteBarrier((&____contextProperties_13), value);
	}

	inline static int32_t get_offset_of__activationType_14() { return static_cast<int32_t>(offsetof(ConstructionCall_t892247838, ____activationType_14)); }
	inline Type_t * get__activationType_14() const { return ____activationType_14; }
	inline Type_t ** get_address_of__activationType_14() { return &____activationType_14; }
	inline void set__activationType_14(Type_t * value)
	{
		____activationType_14 = value;
		Il2CppCodeGenWriteBarrier((&____activationType_14), value);
	}

	inline static int32_t get_offset_of__activationTypeName_15() { return static_cast<int32_t>(offsetof(ConstructionCall_t892247838, ____activationTypeName_15)); }
	inline String_t* get__activationTypeName_15() const { return ____activationTypeName_15; }
	inline String_t** get_address_of__activationTypeName_15() { return &____activationTypeName_15; }
	inline void set__activationTypeName_15(String_t* value)
	{
		____activationTypeName_15 = value;
		Il2CppCodeGenWriteBarrier((&____activationTypeName_15), value);
	}

	inline static int32_t get_offset_of__isContextOk_16() { return static_cast<int32_t>(offsetof(ConstructionCall_t892247838, ____isContextOk_16)); }
	inline bool get__isContextOk_16() const { return ____isContextOk_16; }
	inline bool* get_address_of__isContextOk_16() { return &____isContextOk_16; }
	inline void set__isContextOk_16(bool value)
	{
		____isContextOk_16 = value;
	}
};

struct ConstructionCall_t892247838_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.ConstructionCall::<>f__switch$map20
	Dictionary_2_t370943942 * ___U3CU3Ef__switchU24map20_17;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map20_17() { return static_cast<int32_t>(offsetof(ConstructionCall_t892247838_StaticFields, ___U3CU3Ef__switchU24map20_17)); }
	inline Dictionary_2_t370943942 * get_U3CU3Ef__switchU24map20_17() const { return ___U3CU3Ef__switchU24map20_17; }
	inline Dictionary_2_t370943942 ** get_address_of_U3CU3Ef__switchU24map20_17() { return &___U3CU3Ef__switchU24map20_17; }
	inline void set_U3CU3Ef__switchU24map20_17(Dictionary_2_t370943942 * value)
	{
		___U3CU3Ef__switchU24map20_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map20_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTIONCALL_T892247838_H
#ifndef CONSTRUCTIONCALLDICTIONARY_T1922338052_H
#define CONSTRUCTIONCALLDICTIONARY_T1922338052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
struct  ConstructionCallDictionary_t1922338052  : public MethodDictionary_t2324758152
{
public:

public:
};

struct ConstructionCallDictionary_t1922338052_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.ConstructionCallDictionary::InternalKeys
	StringU5BU5D_t2635374444* ___InternalKeys_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.ConstructionCallDictionary::<>f__switch$map23
	Dictionary_2_t370943942 * ___U3CU3Ef__switchU24map23_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.ConstructionCallDictionary::<>f__switch$map24
	Dictionary_2_t370943942 * ___U3CU3Ef__switchU24map24_8;

public:
	inline static int32_t get_offset_of_InternalKeys_6() { return static_cast<int32_t>(offsetof(ConstructionCallDictionary_t1922338052_StaticFields, ___InternalKeys_6)); }
	inline StringU5BU5D_t2635374444* get_InternalKeys_6() const { return ___InternalKeys_6; }
	inline StringU5BU5D_t2635374444** get_address_of_InternalKeys_6() { return &___InternalKeys_6; }
	inline void set_InternalKeys_6(StringU5BU5D_t2635374444* value)
	{
		___InternalKeys_6 = value;
		Il2CppCodeGenWriteBarrier((&___InternalKeys_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map23_7() { return static_cast<int32_t>(offsetof(ConstructionCallDictionary_t1922338052_StaticFields, ___U3CU3Ef__switchU24map23_7)); }
	inline Dictionary_2_t370943942 * get_U3CU3Ef__switchU24map23_7() const { return ___U3CU3Ef__switchU24map23_7; }
	inline Dictionary_2_t370943942 ** get_address_of_U3CU3Ef__switchU24map23_7() { return &___U3CU3Ef__switchU24map23_7; }
	inline void set_U3CU3Ef__switchU24map23_7(Dictionary_2_t370943942 * value)
	{
		___U3CU3Ef__switchU24map23_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map23_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map24_8() { return static_cast<int32_t>(offsetof(ConstructionCallDictionary_t1922338052_StaticFields, ___U3CU3Ef__switchU24map24_8)); }
	inline Dictionary_2_t370943942 * get_U3CU3Ef__switchU24map24_8() const { return ___U3CU3Ef__switchU24map24_8; }
	inline Dictionary_2_t370943942 ** get_address_of_U3CU3Ef__switchU24map24_8() { return &___U3CU3Ef__switchU24map24_8; }
	inline void set_U3CU3Ef__switchU24map24_8(Dictionary_2_t370943942 * value)
	{
		___U3CU3Ef__switchU24map24_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map24_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTIONCALLDICTIONARY_T1922338052_H
#ifndef TIMESPAN_T1788691710_H
#define TIMESPAN_T1788691710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t1788691710 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t1788691710, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t1788691710_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t1788691710  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t1788691710  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t1788691710  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t1788691710_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t1788691710  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t1788691710 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t1788691710  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t1788691710_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t1788691710  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t1788691710 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t1788691710  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t1788691710_StaticFields, ___Zero_2)); }
	inline TimeSpan_t1788691710  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t1788691710 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t1788691710  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T1788691710_H
#ifndef CONTEXTBOUNDOBJECT_T3743826077_H
#define CONTEXTBOUNDOBJECT_T3743826077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ContextBoundObject
struct  ContextBoundObject_t3743826077  : public MarshalByRefObject_t2910809033
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTBOUNDOBJECT_T3743826077_H
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
#ifndef CONTEXTATTRIBUTE_T3891505101_H
#define CONTEXTATTRIBUTE_T3891505101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.ContextAttribute
struct  ContextAttribute_t3891505101  : public Attribute_t3576420911
{
public:
	// System.String System.Runtime.Remoting.Contexts.ContextAttribute::AttributeName
	String_t* ___AttributeName_0;

public:
	inline static int32_t get_offset_of_AttributeName_0() { return static_cast<int32_t>(offsetof(ContextAttribute_t3891505101, ___AttributeName_0)); }
	inline String_t* get_AttributeName_0() const { return ___AttributeName_0; }
	inline String_t** get_address_of_AttributeName_0() { return &___AttributeName_0; }
	inline void set_AttributeName_0(String_t* value)
	{
		___AttributeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___AttributeName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTATTRIBUTE_T3891505101_H
#ifndef DISPIDATTRIBUTE_T1676075573_H
#define DISPIDATTRIBUTE_T1676075573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.DispIdAttribute
struct  DispIdAttribute_t1676075573  : public Attribute_t3576420911
{
public:
	// System.Int32 System.Runtime.InteropServices.DispIdAttribute::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(DispIdAttribute_t1676075573, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPIDATTRIBUTE_T1676075573_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef GCHANDLE_T2478567855_H
#define GCHANDLE_T2478567855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t2478567855 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t2478567855, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T2478567855_H
#ifndef SYSTEMEXCEPTION_T1500096200_H
#define SYSTEMEXCEPTION_T1500096200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t1500096200  : public Exception_t1050936770
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T1500096200_H
#ifndef ENUM_T89768237_H
#define ENUM_T89768237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t89768237  : public ValueType_t656434274
{
public:

public:
};

struct Enum_t89768237_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t657434090* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t89768237_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t657434090* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t657434090** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t657434090* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t89768237_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t89768237_marshaled_com
{
};
#endif // ENUM_T89768237_H
#ifndef PRESERVESIGATTRIBUTE_T911812896_H
#define PRESERVESIGATTRIBUTE_T911812896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.PreserveSigAttribute
struct  PreserveSigAttribute_t911812896  : public Attribute_t3576420911
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESERVESIGATTRIBUTE_T911812896_H
#ifndef REMOTEACTIVATOR_T3160158498_H
#define REMOTEACTIVATOR_T3160158498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.RemoteActivator
struct  RemoteActivator_t3160158498  : public MarshalByRefObject_t2910809033
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTEACTIVATOR_T3160158498_H
#ifndef TYPELIBIMPORTCLASSATTRIBUTE_T2147218407_H
#define TYPELIBIMPORTCLASSATTRIBUTE_T2147218407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TypeLibImportClassAttribute
struct  TypeLibImportClassAttribute_t2147218407  : public Attribute_t3576420911
{
public:
	// System.String System.Runtime.InteropServices.TypeLibImportClassAttribute::_importClass
	String_t* ____importClass_0;

public:
	inline static int32_t get_offset_of__importClass_0() { return static_cast<int32_t>(offsetof(TypeLibImportClassAttribute_t2147218407, ____importClass_0)); }
	inline String_t* get__importClass_0() const { return ____importClass_0; }
	inline String_t** get_address_of__importClass_0() { return &____importClass_0; }
	inline void set__importClass_0(String_t* value)
	{
		____importClass_0 = value;
		Il2CppCodeGenWriteBarrier((&____importClass_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELIBIMPORTCLASSATTRIBUTE_T2147218407_H
#ifndef TYPELIBVERSIONATTRIBUTE_T2430839939_H
#define TYPELIBVERSIONATTRIBUTE_T2430839939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TypeLibVersionAttribute
struct  TypeLibVersionAttribute_t2430839939  : public Attribute_t3576420911
{
public:
	// System.Int32 System.Runtime.InteropServices.TypeLibVersionAttribute::major
	int32_t ___major_0;
	// System.Int32 System.Runtime.InteropServices.TypeLibVersionAttribute::minor
	int32_t ___minor_1;

public:
	inline static int32_t get_offset_of_major_0() { return static_cast<int32_t>(offsetof(TypeLibVersionAttribute_t2430839939, ___major_0)); }
	inline int32_t get_major_0() const { return ___major_0; }
	inline int32_t* get_address_of_major_0() { return &___major_0; }
	inline void set_major_0(int32_t value)
	{
		___major_0 = value;
	}

	inline static int32_t get_offset_of_minor_1() { return static_cast<int32_t>(offsetof(TypeLibVersionAttribute_t2430839939, ___minor_1)); }
	inline int32_t get_minor_1() const { return ___minor_1; }
	inline int32_t* get_address_of_minor_1() { return &___minor_1; }
	inline void set_minor_1(int32_t value)
	{
		___minor_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELIBVERSIONATTRIBUTE_T2430839939_H
#ifndef COMDEFAULTINTERFACEATTRIBUTE_T1135748256_H
#define COMDEFAULTINTERFACEATTRIBUTE_T1135748256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
struct  ComDefaultInterfaceAttribute_t1135748256  : public Attribute_t3576420911
{
public:
	// System.Type System.Runtime.InteropServices.ComDefaultInterfaceAttribute::_type
	Type_t * ____type_0;

public:
	inline static int32_t get_offset_of__type_0() { return static_cast<int32_t>(offsetof(ComDefaultInterfaceAttribute_t1135748256, ____type_0)); }
	inline Type_t * get__type_0() const { return ____type_0; }
	inline Type_t ** get_address_of__type_0() { return &____type_0; }
	inline void set__type_0(Type_t * value)
	{
		____type_0 = value;
		Il2CppCodeGenWriteBarrier((&____type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMDEFAULTINTERFACEATTRIBUTE_T1135748256_H
#ifndef CONSISTENCY_T3635553903_H
#define CONSISTENCY_T3635553903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.Consistency
struct  Consistency_t3635553903 
{
public:
	// System.Int32 System.Runtime.ConstrainedExecution.Consistency::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Consistency_t3635553903, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSISTENCY_T3635553903_H
#ifndef CER_T1254207395_H
#define CER_T1254207395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.Cer
struct  Cer_t1254207395 
{
public:
	// System.Int32 System.Runtime.ConstrainedExecution.Cer::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Cer_t1254207395, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CER_T1254207395_H
#ifndef CONTEXT_T2158928792_H
#define CONTEXT_T2158928792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.Context
struct  Context_t2158928792  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Remoting.Contexts.Context::domain_id
	int32_t ___domain_id_0;
	// System.Int32 System.Runtime.Remoting.Contexts.Context::context_id
	int32_t ___context_id_1;
	// System.UIntPtr System.Runtime.Remoting.Contexts.Context::static_data
	uintptr_t ___static_data_2;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::server_context_sink_chain
	RuntimeObject* ___server_context_sink_chain_4;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::client_context_sink_chain
	RuntimeObject* ___client_context_sink_chain_5;
	// System.Object[] System.Runtime.Remoting.Contexts.Context::datastore
	ObjectU5BU5D_t3715313104* ___datastore_6;
	// System.Collections.ArrayList System.Runtime.Remoting.Contexts.Context::context_properties
	ArrayList_t1009438618 * ___context_properties_7;
	// System.Boolean System.Runtime.Remoting.Contexts.Context::frozen
	bool ___frozen_8;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Contexts.Context::context_dynamic_properties
	DynamicPropertyCollection_t3380215848 * ___context_dynamic_properties_12;
	// System.Runtime.Remoting.Contexts.ContextCallbackObject System.Runtime.Remoting.Contexts.Context::callback_object
	ContextCallbackObject_t1188206941 * ___callback_object_13;

public:
	inline static int32_t get_offset_of_domain_id_0() { return static_cast<int32_t>(offsetof(Context_t2158928792, ___domain_id_0)); }
	inline int32_t get_domain_id_0() const { return ___domain_id_0; }
	inline int32_t* get_address_of_domain_id_0() { return &___domain_id_0; }
	inline void set_domain_id_0(int32_t value)
	{
		___domain_id_0 = value;
	}

	inline static int32_t get_offset_of_context_id_1() { return static_cast<int32_t>(offsetof(Context_t2158928792, ___context_id_1)); }
	inline int32_t get_context_id_1() const { return ___context_id_1; }
	inline int32_t* get_address_of_context_id_1() { return &___context_id_1; }
	inline void set_context_id_1(int32_t value)
	{
		___context_id_1 = value;
	}

	inline static int32_t get_offset_of_static_data_2() { return static_cast<int32_t>(offsetof(Context_t2158928792, ___static_data_2)); }
	inline uintptr_t get_static_data_2() const { return ___static_data_2; }
	inline uintptr_t* get_address_of_static_data_2() { return &___static_data_2; }
	inline void set_static_data_2(uintptr_t value)
	{
		___static_data_2 = value;
	}

	inline static int32_t get_offset_of_server_context_sink_chain_4() { return static_cast<int32_t>(offsetof(Context_t2158928792, ___server_context_sink_chain_4)); }
	inline RuntimeObject* get_server_context_sink_chain_4() const { return ___server_context_sink_chain_4; }
	inline RuntimeObject** get_address_of_server_context_sink_chain_4() { return &___server_context_sink_chain_4; }
	inline void set_server_context_sink_chain_4(RuntimeObject* value)
	{
		___server_context_sink_chain_4 = value;
		Il2CppCodeGenWriteBarrier((&___server_context_sink_chain_4), value);
	}

	inline static int32_t get_offset_of_client_context_sink_chain_5() { return static_cast<int32_t>(offsetof(Context_t2158928792, ___client_context_sink_chain_5)); }
	inline RuntimeObject* get_client_context_sink_chain_5() const { return ___client_context_sink_chain_5; }
	inline RuntimeObject** get_address_of_client_context_sink_chain_5() { return &___client_context_sink_chain_5; }
	inline void set_client_context_sink_chain_5(RuntimeObject* value)
	{
		___client_context_sink_chain_5 = value;
		Il2CppCodeGenWriteBarrier((&___client_context_sink_chain_5), value);
	}

	inline static int32_t get_offset_of_datastore_6() { return static_cast<int32_t>(offsetof(Context_t2158928792, ___datastore_6)); }
	inline ObjectU5BU5D_t3715313104* get_datastore_6() const { return ___datastore_6; }
	inline ObjectU5BU5D_t3715313104** get_address_of_datastore_6() { return &___datastore_6; }
	inline void set_datastore_6(ObjectU5BU5D_t3715313104* value)
	{
		___datastore_6 = value;
		Il2CppCodeGenWriteBarrier((&___datastore_6), value);
	}

	inline static int32_t get_offset_of_context_properties_7() { return static_cast<int32_t>(offsetof(Context_t2158928792, ___context_properties_7)); }
	inline ArrayList_t1009438618 * get_context_properties_7() const { return ___context_properties_7; }
	inline ArrayList_t1009438618 ** get_address_of_context_properties_7() { return &___context_properties_7; }
	inline void set_context_properties_7(ArrayList_t1009438618 * value)
	{
		___context_properties_7 = value;
		Il2CppCodeGenWriteBarrier((&___context_properties_7), value);
	}

	inline static int32_t get_offset_of_frozen_8() { return static_cast<int32_t>(offsetof(Context_t2158928792, ___frozen_8)); }
	inline bool get_frozen_8() const { return ___frozen_8; }
	inline bool* get_address_of_frozen_8() { return &___frozen_8; }
	inline void set_frozen_8(bool value)
	{
		___frozen_8 = value;
	}

	inline static int32_t get_offset_of_context_dynamic_properties_12() { return static_cast<int32_t>(offsetof(Context_t2158928792, ___context_dynamic_properties_12)); }
	inline DynamicPropertyCollection_t3380215848 * get_context_dynamic_properties_12() const { return ___context_dynamic_properties_12; }
	inline DynamicPropertyCollection_t3380215848 ** get_address_of_context_dynamic_properties_12() { return &___context_dynamic_properties_12; }
	inline void set_context_dynamic_properties_12(DynamicPropertyCollection_t3380215848 * value)
	{
		___context_dynamic_properties_12 = value;
		Il2CppCodeGenWriteBarrier((&___context_dynamic_properties_12), value);
	}

	inline static int32_t get_offset_of_callback_object_13() { return static_cast<int32_t>(offsetof(Context_t2158928792, ___callback_object_13)); }
	inline ContextCallbackObject_t1188206941 * get_callback_object_13() const { return ___callback_object_13; }
	inline ContextCallbackObject_t1188206941 ** get_address_of_callback_object_13() { return &___callback_object_13; }
	inline void set_callback_object_13(ContextCallbackObject_t1188206941 * value)
	{
		___callback_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___callback_object_13), value);
	}
};

struct Context_t2158928792_StaticFields
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::default_server_context_sink
	RuntimeObject* ___default_server_context_sink_3;
	// System.Int32 System.Runtime.Remoting.Contexts.Context::global_count
	int32_t ___global_count_9;
	// System.Collections.Hashtable System.Runtime.Remoting.Contexts.Context::namedSlots
	Hashtable_t4262735797 * ___namedSlots_10;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Contexts.Context::global_dynamic_properties
	DynamicPropertyCollection_t3380215848 * ___global_dynamic_properties_11;

public:
	inline static int32_t get_offset_of_default_server_context_sink_3() { return static_cast<int32_t>(offsetof(Context_t2158928792_StaticFields, ___default_server_context_sink_3)); }
	inline RuntimeObject* get_default_server_context_sink_3() const { return ___default_server_context_sink_3; }
	inline RuntimeObject** get_address_of_default_server_context_sink_3() { return &___default_server_context_sink_3; }
	inline void set_default_server_context_sink_3(RuntimeObject* value)
	{
		___default_server_context_sink_3 = value;
		Il2CppCodeGenWriteBarrier((&___default_server_context_sink_3), value);
	}

	inline static int32_t get_offset_of_global_count_9() { return static_cast<int32_t>(offsetof(Context_t2158928792_StaticFields, ___global_count_9)); }
	inline int32_t get_global_count_9() const { return ___global_count_9; }
	inline int32_t* get_address_of_global_count_9() { return &___global_count_9; }
	inline void set_global_count_9(int32_t value)
	{
		___global_count_9 = value;
	}

	inline static int32_t get_offset_of_namedSlots_10() { return static_cast<int32_t>(offsetof(Context_t2158928792_StaticFields, ___namedSlots_10)); }
	inline Hashtable_t4262735797 * get_namedSlots_10() const { return ___namedSlots_10; }
	inline Hashtable_t4262735797 ** get_address_of_namedSlots_10() { return &___namedSlots_10; }
	inline void set_namedSlots_10(Hashtable_t4262735797 * value)
	{
		___namedSlots_10 = value;
		Il2CppCodeGenWriteBarrier((&___namedSlots_10), value);
	}

	inline static int32_t get_offset_of_global_dynamic_properties_11() { return static_cast<int32_t>(offsetof(Context_t2158928792_StaticFields, ___global_dynamic_properties_11)); }
	inline DynamicPropertyCollection_t3380215848 * get_global_dynamic_properties_11() const { return ___global_dynamic_properties_11; }
	inline DynamicPropertyCollection_t3380215848 ** get_address_of_global_dynamic_properties_11() { return &___global_dynamic_properties_11; }
	inline void set_global_dynamic_properties_11(DynamicPropertyCollection_t3380215848 * value)
	{
		___global_dynamic_properties_11 = value;
		Il2CppCodeGenWriteBarrier((&___global_dynamic_properties_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXT_T2158928792_H
#ifndef ARGINFOTYPE_T1403183449_H
#define ARGINFOTYPE_T1403183449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ArgInfoType
struct  ArgInfoType_t1403183449 
{
public:
	// System.Byte System.Runtime.Remoting.Messaging.ArgInfoType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ArgInfoType_t1403183449, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGINFOTYPE_T1403183449_H
#ifndef LIFETIMESERVICES_T2348061467_H
#define LIFETIMESERVICES_T2348061467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.LifetimeServices
struct  LifetimeServices_t2348061467  : public RuntimeObject
{
public:

public:
};

struct LifetimeServices_t2348061467_StaticFields
{
public:
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_leaseManagerPollTime
	TimeSpan_t1788691710  ____leaseManagerPollTime_0;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_leaseTime
	TimeSpan_t1788691710  ____leaseTime_1;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_renewOnCallTime
	TimeSpan_t1788691710  ____renewOnCallTime_2;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_sponsorshipTimeout
	TimeSpan_t1788691710  ____sponsorshipTimeout_3;
	// System.Runtime.Remoting.Lifetime.LeaseManager System.Runtime.Remoting.Lifetime.LifetimeServices::_leaseManager
	LeaseManager_t67023432 * ____leaseManager_4;

public:
	inline static int32_t get_offset_of__leaseManagerPollTime_0() { return static_cast<int32_t>(offsetof(LifetimeServices_t2348061467_StaticFields, ____leaseManagerPollTime_0)); }
	inline TimeSpan_t1788691710  get__leaseManagerPollTime_0() const { return ____leaseManagerPollTime_0; }
	inline TimeSpan_t1788691710 * get_address_of__leaseManagerPollTime_0() { return &____leaseManagerPollTime_0; }
	inline void set__leaseManagerPollTime_0(TimeSpan_t1788691710  value)
	{
		____leaseManagerPollTime_0 = value;
	}

	inline static int32_t get_offset_of__leaseTime_1() { return static_cast<int32_t>(offsetof(LifetimeServices_t2348061467_StaticFields, ____leaseTime_1)); }
	inline TimeSpan_t1788691710  get__leaseTime_1() const { return ____leaseTime_1; }
	inline TimeSpan_t1788691710 * get_address_of__leaseTime_1() { return &____leaseTime_1; }
	inline void set__leaseTime_1(TimeSpan_t1788691710  value)
	{
		____leaseTime_1 = value;
	}

	inline static int32_t get_offset_of__renewOnCallTime_2() { return static_cast<int32_t>(offsetof(LifetimeServices_t2348061467_StaticFields, ____renewOnCallTime_2)); }
	inline TimeSpan_t1788691710  get__renewOnCallTime_2() const { return ____renewOnCallTime_2; }
	inline TimeSpan_t1788691710 * get_address_of__renewOnCallTime_2() { return &____renewOnCallTime_2; }
	inline void set__renewOnCallTime_2(TimeSpan_t1788691710  value)
	{
		____renewOnCallTime_2 = value;
	}

	inline static int32_t get_offset_of__sponsorshipTimeout_3() { return static_cast<int32_t>(offsetof(LifetimeServices_t2348061467_StaticFields, ____sponsorshipTimeout_3)); }
	inline TimeSpan_t1788691710  get__sponsorshipTimeout_3() const { return ____sponsorshipTimeout_3; }
	inline TimeSpan_t1788691710 * get_address_of__sponsorshipTimeout_3() { return &____sponsorshipTimeout_3; }
	inline void set__sponsorshipTimeout_3(TimeSpan_t1788691710  value)
	{
		____sponsorshipTimeout_3 = value;
	}

	inline static int32_t get_offset_of__leaseManager_4() { return static_cast<int32_t>(offsetof(LifetimeServices_t2348061467_StaticFields, ____leaseManager_4)); }
	inline LeaseManager_t67023432 * get__leaseManager_4() const { return ____leaseManager_4; }
	inline LeaseManager_t67023432 ** get_address_of__leaseManager_4() { return &____leaseManager_4; }
	inline void set__leaseManager_4(LeaseManager_t67023432 * value)
	{
		____leaseManager_4 = value;
		Il2CppCodeGenWriteBarrier((&____leaseManager_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIFETIMESERVICES_T2348061467_H
#ifndef SYNCHRONIZATIONATTRIBUTE_T3653254383_H
#define SYNCHRONIZATIONATTRIBUTE_T3653254383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct  SynchronizationAttribute_t3653254383  : public ContextAttribute_t3891505101
{
public:
	// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::_bReEntrant
	bool ____bReEntrant_1;
	// System.Int32 System.Runtime.Remoting.Contexts.SynchronizationAttribute::_flavor
	int32_t ____flavor_2;
	// System.Int32 System.Runtime.Remoting.Contexts.SynchronizationAttribute::_lockCount
	int32_t ____lockCount_3;
	// System.Threading.Mutex System.Runtime.Remoting.Contexts.SynchronizationAttribute::_mutex
	Mutex_t567397795 * ____mutex_4;
	// System.Threading.Thread System.Runtime.Remoting.Contexts.SynchronizationAttribute::_ownerThread
	Thread_t2560945987 * ____ownerThread_5;

public:
	inline static int32_t get_offset_of__bReEntrant_1() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t3653254383, ____bReEntrant_1)); }
	inline bool get__bReEntrant_1() const { return ____bReEntrant_1; }
	inline bool* get_address_of__bReEntrant_1() { return &____bReEntrant_1; }
	inline void set__bReEntrant_1(bool value)
	{
		____bReEntrant_1 = value;
	}

	inline static int32_t get_offset_of__flavor_2() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t3653254383, ____flavor_2)); }
	inline int32_t get__flavor_2() const { return ____flavor_2; }
	inline int32_t* get_address_of__flavor_2() { return &____flavor_2; }
	inline void set__flavor_2(int32_t value)
	{
		____flavor_2 = value;
	}

	inline static int32_t get_offset_of__lockCount_3() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t3653254383, ____lockCount_3)); }
	inline int32_t get__lockCount_3() const { return ____lockCount_3; }
	inline int32_t* get_address_of__lockCount_3() { return &____lockCount_3; }
	inline void set__lockCount_3(int32_t value)
	{
		____lockCount_3 = value;
	}

	inline static int32_t get_offset_of__mutex_4() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t3653254383, ____mutex_4)); }
	inline Mutex_t567397795 * get__mutex_4() const { return ____mutex_4; }
	inline Mutex_t567397795 ** get_address_of__mutex_4() { return &____mutex_4; }
	inline void set__mutex_4(Mutex_t567397795 * value)
	{
		____mutex_4 = value;
		Il2CppCodeGenWriteBarrier((&____mutex_4), value);
	}

	inline static int32_t get_offset_of__ownerThread_5() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t3653254383, ____ownerThread_5)); }
	inline Thread_t2560945987 * get__ownerThread_5() const { return ____ownerThread_5; }
	inline Thread_t2560945987 ** get_address_of__ownerThread_5() { return &____ownerThread_5; }
	inline void set__ownerThread_5(Thread_t2560945987 * value)
	{
		____ownerThread_5 = value;
		Il2CppCodeGenWriteBarrier((&____ownerThread_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONATTRIBUTE_T3653254383_H
#ifndef CONTEXTCALLBACKOBJECT_T1188206941_H
#define CONTEXTCALLBACKOBJECT_T1188206941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.ContextCallbackObject
struct  ContextCallbackObject_t1188206941  : public ContextBoundObject_t3743826077
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTCALLBACKOBJECT_T1188206941_H
#ifndef URLATTRIBUTE_T3743183508_H
#define URLATTRIBUTE_T3743183508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.UrlAttribute
struct  UrlAttribute_t3743183508  : public ContextAttribute_t3891505101
{
public:
	// System.String System.Runtime.Remoting.Activation.UrlAttribute::url
	String_t* ___url_1;

public:
	inline static int32_t get_offset_of_url_1() { return static_cast<int32_t>(offsetof(UrlAttribute_t3743183508, ___url_1)); }
	inline String_t* get_url_1() const { return ___url_1; }
	inline String_t** get_address_of_url_1() { return &___url_1; }
	inline void set_url_1(String_t* value)
	{
		___url_1 = value;
		Il2CppCodeGenWriteBarrier((&___url_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URLATTRIBUTE_T3743183508_H
#ifndef UNMANAGEDTYPE_T1292406206_H
#define UNMANAGEDTYPE_T1292406206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedType
struct  UnmanagedType_t1292406206 
{
public:
	// System.Int32 System.Runtime.InteropServices.UnmanagedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnmanagedType_t1292406206, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDTYPE_T1292406206_H
#ifndef SAFEHANDLE_T1847305982_H
#define SAFEHANDLE_T1847305982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SafeHandle
struct  SafeHandle_t1847305982  : public CriticalFinalizerObject_t4180999090
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::invalid_handle_value
	intptr_t ___invalid_handle_value_1;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::refcount
	int32_t ___refcount_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::owns_handle
	bool ___owns_handle_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_t1847305982, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_invalid_handle_value_1() { return static_cast<int32_t>(offsetof(SafeHandle_t1847305982, ___invalid_handle_value_1)); }
	inline intptr_t get_invalid_handle_value_1() const { return ___invalid_handle_value_1; }
	inline intptr_t* get_address_of_invalid_handle_value_1() { return &___invalid_handle_value_1; }
	inline void set_invalid_handle_value_1(intptr_t value)
	{
		___invalid_handle_value_1 = value;
	}

	inline static int32_t get_offset_of_refcount_2() { return static_cast<int32_t>(offsetof(SafeHandle_t1847305982, ___refcount_2)); }
	inline int32_t get_refcount_2() const { return ___refcount_2; }
	inline int32_t* get_address_of_refcount_2() { return &___refcount_2; }
	inline void set_refcount_2(int32_t value)
	{
		___refcount_2 = value;
	}

	inline static int32_t get_offset_of_owns_handle_3() { return static_cast<int32_t>(offsetof(SafeHandle_t1847305982, ___owns_handle_3)); }
	inline bool get_owns_handle_3() const { return ___owns_handle_3; }
	inline bool* get_address_of_owns_handle_3() { return &___owns_handle_3; }
	inline void set_owns_handle_3(bool value)
	{
		___owns_handle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLE_T1847305982_H
#ifndef MARSHALDIRECTIVEEXCEPTION_T1312783050_H
#define MARSHALDIRECTIVEEXCEPTION_T1312783050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.MarshalDirectiveException
struct  MarshalDirectiveException_t1312783050  : public SystemException_t1500096200
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALDIRECTIVEEXCEPTION_T1312783050_H
#ifndef ASYNCRESULT_T754744705_H
#define ASYNCRESULT_T754744705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.AsyncResult
struct  AsyncResult_t754744705  : public RuntimeObject
{
public:
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_state
	RuntimeObject * ___async_state_0;
	// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::handle
	WaitHandle_t1562832785 * ___handle_1;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_delegate
	RuntimeObject * ___async_delegate_2;
	// System.IntPtr System.Runtime.Remoting.Messaging.AsyncResult::data
	intptr_t ___data_3;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::object_data
	RuntimeObject * ___object_data_4;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::sync_completed
	bool ___sync_completed_5;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::completed
	bool ___completed_6;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::endinvoke_called
	bool ___endinvoke_called_7;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_callback
	RuntimeObject * ___async_callback_8;
	// System.Threading.ExecutionContext System.Runtime.Remoting.Messaging.AsyncResult::current
	ExecutionContext_t1394449154 * ___current_9;
	// System.Threading.ExecutionContext System.Runtime.Remoting.Messaging.AsyncResult::original
	ExecutionContext_t1394449154 * ___original_10;
	// System.Int32 System.Runtime.Remoting.Messaging.AsyncResult::gchandle
	int32_t ___gchandle_11;
	// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::call_message
	MonoMethodMessage_t375276670 * ___call_message_12;
	// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::message_ctrl
	RuntimeObject* ___message_ctrl_13;
	// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::reply_message
	RuntimeObject* ___reply_message_14;

public:
	inline static int32_t get_offset_of_async_state_0() { return static_cast<int32_t>(offsetof(AsyncResult_t754744705, ___async_state_0)); }
	inline RuntimeObject * get_async_state_0() const { return ___async_state_0; }
	inline RuntimeObject ** get_address_of_async_state_0() { return &___async_state_0; }
	inline void set_async_state_0(RuntimeObject * value)
	{
		___async_state_0 = value;
		Il2CppCodeGenWriteBarrier((&___async_state_0), value);
	}

	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(AsyncResult_t754744705, ___handle_1)); }
	inline WaitHandle_t1562832785 * get_handle_1() const { return ___handle_1; }
	inline WaitHandle_t1562832785 ** get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(WaitHandle_t1562832785 * value)
	{
		___handle_1 = value;
		Il2CppCodeGenWriteBarrier((&___handle_1), value);
	}

	inline static int32_t get_offset_of_async_delegate_2() { return static_cast<int32_t>(offsetof(AsyncResult_t754744705, ___async_delegate_2)); }
	inline RuntimeObject * get_async_delegate_2() const { return ___async_delegate_2; }
	inline RuntimeObject ** get_address_of_async_delegate_2() { return &___async_delegate_2; }
	inline void set_async_delegate_2(RuntimeObject * value)
	{
		___async_delegate_2 = value;
		Il2CppCodeGenWriteBarrier((&___async_delegate_2), value);
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(AsyncResult_t754744705, ___data_3)); }
	inline intptr_t get_data_3() const { return ___data_3; }
	inline intptr_t* get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(intptr_t value)
	{
		___data_3 = value;
	}

	inline static int32_t get_offset_of_object_data_4() { return static_cast<int32_t>(offsetof(AsyncResult_t754744705, ___object_data_4)); }
	inline RuntimeObject * get_object_data_4() const { return ___object_data_4; }
	inline RuntimeObject ** get_address_of_object_data_4() { return &___object_data_4; }
	inline void set_object_data_4(RuntimeObject * value)
	{
		___object_data_4 = value;
		Il2CppCodeGenWriteBarrier((&___object_data_4), value);
	}

	inline static int32_t get_offset_of_sync_completed_5() { return static_cast<int32_t>(offsetof(AsyncResult_t754744705, ___sync_completed_5)); }
	inline bool get_sync_completed_5() const { return ___sync_completed_5; }
	inline bool* get_address_of_sync_completed_5() { return &___sync_completed_5; }
	inline void set_sync_completed_5(bool value)
	{
		___sync_completed_5 = value;
	}

	inline static int32_t get_offset_of_completed_6() { return static_cast<int32_t>(offsetof(AsyncResult_t754744705, ___completed_6)); }
	inline bool get_completed_6() const { return ___completed_6; }
	inline bool* get_address_of_completed_6() { return &___completed_6; }
	inline void set_completed_6(bool value)
	{
		___completed_6 = value;
	}

	inline static int32_t get_offset_of_endinvoke_called_7() { return static_cast<int32_t>(offsetof(AsyncResult_t754744705, ___endinvoke_called_7)); }
	inline bool get_endinvoke_called_7() const { return ___endinvoke_called_7; }
	inline bool* get_address_of_endinvoke_called_7() { return &___endinvoke_called_7; }
	inline void set_endinvoke_called_7(bool value)
	{
		___endinvoke_called_7 = value;
	}

	inline static int32_t get_offset_of_async_callback_8() { return static_cast<int32_t>(offsetof(AsyncResult_t754744705, ___async_callback_8)); }
	inline RuntimeObject * get_async_callback_8() const { return ___async_callback_8; }
	inline RuntimeObject ** get_address_of_async_callback_8() { return &___async_callback_8; }
	inline void set_async_callback_8(RuntimeObject * value)
	{
		___async_callback_8 = value;
		Il2CppCodeGenWriteBarrier((&___async_callback_8), value);
	}

	inline static int32_t get_offset_of_current_9() { return static_cast<int32_t>(offsetof(AsyncResult_t754744705, ___current_9)); }
	inline ExecutionContext_t1394449154 * get_current_9() const { return ___current_9; }
	inline ExecutionContext_t1394449154 ** get_address_of_current_9() { return &___current_9; }
	inline void set_current_9(ExecutionContext_t1394449154 * value)
	{
		___current_9 = value;
		Il2CppCodeGenWriteBarrier((&___current_9), value);
	}

	inline static int32_t get_offset_of_original_10() { return static_cast<int32_t>(offsetof(AsyncResult_t754744705, ___original_10)); }
	inline ExecutionContext_t1394449154 * get_original_10() const { return ___original_10; }
	inline ExecutionContext_t1394449154 ** get_address_of_original_10() { return &___original_10; }
	inline void set_original_10(ExecutionContext_t1394449154 * value)
	{
		___original_10 = value;
		Il2CppCodeGenWriteBarrier((&___original_10), value);
	}

	inline static int32_t get_offset_of_gchandle_11() { return static_cast<int32_t>(offsetof(AsyncResult_t754744705, ___gchandle_11)); }
	inline int32_t get_gchandle_11() const { return ___gchandle_11; }
	inline int32_t* get_address_of_gchandle_11() { return &___gchandle_11; }
	inline void set_gchandle_11(int32_t value)
	{
		___gchandle_11 = value;
	}

	inline static int32_t get_offset_of_call_message_12() { return static_cast<int32_t>(offsetof(AsyncResult_t754744705, ___call_message_12)); }
	inline MonoMethodMessage_t375276670 * get_call_message_12() const { return ___call_message_12; }
	inline MonoMethodMessage_t375276670 ** get_address_of_call_message_12() { return &___call_message_12; }
	inline void set_call_message_12(MonoMethodMessage_t375276670 * value)
	{
		___call_message_12 = value;
		Il2CppCodeGenWriteBarrier((&___call_message_12), value);
	}

	inline static int32_t get_offset_of_message_ctrl_13() { return static_cast<int32_t>(offsetof(AsyncResult_t754744705, ___message_ctrl_13)); }
	inline RuntimeObject* get_message_ctrl_13() const { return ___message_ctrl_13; }
	inline RuntimeObject** get_address_of_message_ctrl_13() { return &___message_ctrl_13; }
	inline void set_message_ctrl_13(RuntimeObject* value)
	{
		___message_ctrl_13 = value;
		Il2CppCodeGenWriteBarrier((&___message_ctrl_13), value);
	}

	inline static int32_t get_offset_of_reply_message_14() { return static_cast<int32_t>(offsetof(AsyncResult_t754744705, ___reply_message_14)); }
	inline RuntimeObject* get_reply_message_14() const { return ___reply_message_14; }
	inline RuntimeObject** get_address_of_reply_message_14() { return &___reply_message_14; }
	inline void set_reply_message_14(RuntimeObject* value)
	{
		___reply_message_14 = value;
		Il2CppCodeGenWriteBarrier((&___reply_message_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCRESULT_T754744705_H
#ifndef GCHANDLETYPE_T2131696330_H
#define GCHANDLETYPE_T2131696330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t2131696330 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GCHandleType_t2131696330, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLETYPE_T2131696330_H
#ifndef EXTERNALEXCEPTION_T2659870595_H
#define EXTERNALEXCEPTION_T2659870595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t2659870595  : public SystemException_t1500096200
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T2659870595_H
#ifndef COMINTERFACETYPE_T3714581498_H
#define COMINTERFACETYPE_T3714581498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComInterfaceType
struct  ComInterfaceType_t3714581498 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComInterfaceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComInterfaceType_t3714581498, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMINTERFACETYPE_T3714581498_H
#ifndef CLASSINTERFACETYPE_T1817289829_H
#define CLASSINTERFACETYPE_T1817289829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceType
struct  ClassInterfaceType_t1817289829 
{
public:
	// System.Int32 System.Runtime.InteropServices.ClassInterfaceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ClassInterfaceType_t1817289829, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSINTERFACETYPE_T1817289829_H
#ifndef CALLINGCONVENTION_T2088818919_H
#define CALLINGCONVENTION_T2088818919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CallingConvention
struct  CallingConvention_t2088818919 
{
public:
	// System.Int32 System.Runtime.InteropServices.CallingConvention::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConvention_t2088818919, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLINGCONVENTION_T2088818919_H
#ifndef CHARSET_T1195312821_H
#define CHARSET_T1195312821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CharSet
struct  CharSet_t1195312821 
{
public:
	// System.Int32 System.Runtime.InteropServices.CharSet::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CharSet_t1195312821, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARSET_T1195312821_H
#ifndef COMEXCEPTION_T2461509433_H
#define COMEXCEPTION_T2461509433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.COMException
struct  COMException_t2461509433  : public ExternalException_t2659870595
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMEXCEPTION_T2461509433_H
#ifndef INTERFACETYPEATTRIBUTE_T1251190904_H
#define INTERFACETYPEATTRIBUTE_T1251190904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InterfaceTypeAttribute
struct  InterfaceTypeAttribute_t1251190904  : public Attribute_t3576420911
{
public:
	// System.Runtime.InteropServices.ComInterfaceType System.Runtime.InteropServices.InterfaceTypeAttribute::intType
	int32_t ___intType_0;

public:
	inline static int32_t get_offset_of_intType_0() { return static_cast<int32_t>(offsetof(InterfaceTypeAttribute_t1251190904, ___intType_0)); }
	inline int32_t get_intType_0() const { return ___intType_0; }
	inline int32_t* get_address_of_intType_0() { return &___intType_0; }
	inline void set_intType_0(int32_t value)
	{
		___intType_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERFACETYPEATTRIBUTE_T1251190904_H
#ifndef UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T665973166_H
#define UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T665973166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
struct  UnmanagedFunctionPointerAttribute_t665973166  : public Attribute_t3576420911
{
public:
	// System.Runtime.InteropServices.CallingConvention System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::call_conv
	int32_t ___call_conv_0;

public:
	inline static int32_t get_offset_of_call_conv_0() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t665973166, ___call_conv_0)); }
	inline int32_t get_call_conv_0() const { return ___call_conv_0; }
	inline int32_t* get_address_of_call_conv_0() { return &___call_conv_0; }
	inline void set_call_conv_0(int32_t value)
	{
		___call_conv_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T665973166_H
#ifndef CLASSINTERFACEATTRIBUTE_T2505733102_H
#define CLASSINTERFACEATTRIBUTE_T2505733102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceAttribute
struct  ClassInterfaceAttribute_t2505733102  : public Attribute_t3576420911
{
public:
	// System.Runtime.InteropServices.ClassInterfaceType System.Runtime.InteropServices.ClassInterfaceAttribute::ciType
	int32_t ___ciType_0;

public:
	inline static int32_t get_offset_of_ciType_0() { return static_cast<int32_t>(offsetof(ClassInterfaceAttribute_t2505733102, ___ciType_0)); }
	inline int32_t get_ciType_0() const { return ___ciType_0; }
	inline int32_t* get_address_of_ciType_0() { return &___ciType_0; }
	inline void set_ciType_0(int32_t value)
	{
		___ciType_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSINTERFACEATTRIBUTE_T2505733102_H
#ifndef RELIABILITYCONTRACTATTRIBUTE_T1700210355_H
#define RELIABILITYCONTRACTATTRIBUTE_T1700210355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
struct  ReliabilityContractAttribute_t1700210355  : public Attribute_t3576420911
{
public:
	// System.Runtime.ConstrainedExecution.Consistency System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::consistency
	int32_t ___consistency_0;
	// System.Runtime.ConstrainedExecution.Cer System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::cer
	int32_t ___cer_1;

public:
	inline static int32_t get_offset_of_consistency_0() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t1700210355, ___consistency_0)); }
	inline int32_t get_consistency_0() const { return ___consistency_0; }
	inline int32_t* get_address_of_consistency_0() { return &___consistency_0; }
	inline void set_consistency_0(int32_t value)
	{
		___consistency_0 = value;
	}

	inline static int32_t get_offset_of_cer_1() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t1700210355, ___cer_1)); }
	inline int32_t get_cer_1() const { return ___cer_1; }
	inline int32_t* get_address_of_cer_1() { return &___cer_1; }
	inline void set_cer_1(int32_t value)
	{
		___cer_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RELIABILITYCONTRACTATTRIBUTE_T1700210355_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize400 = { sizeof (ReliabilityContractAttribute_t1700210355), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable400[2] = 
{
	ReliabilityContractAttribute_t1700210355::get_offset_of_consistency_0(),
	ReliabilityContractAttribute_t1700210355::get_offset_of_cer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize401 = { sizeof (ActivationArguments_t2056399653), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize402 = { sizeof (COMException_t2461509433), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize403 = { sizeof (CallingConvention_t2088818919)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable403[6] = 
{
	CallingConvention_t2088818919::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize404 = { sizeof (CharSet_t1195312821)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable404[5] = 
{
	CharSet_t1195312821::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize405 = { sizeof (ClassInterfaceAttribute_t2505733102), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable405[1] = 
{
	ClassInterfaceAttribute_t2505733102::get_offset_of_ciType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize406 = { sizeof (ClassInterfaceType_t1817289829)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable406[4] = 
{
	ClassInterfaceType_t1817289829::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize407 = { sizeof (ComDefaultInterfaceAttribute_t1135748256), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable407[1] = 
{
	ComDefaultInterfaceAttribute_t1135748256::get_offset_of__type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize408 = { sizeof (ComInterfaceType_t3714581498)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable408[4] = 
{
	ComInterfaceType_t3714581498::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize409 = { sizeof (DispIdAttribute_t1676075573), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable409[1] = 
{
	DispIdAttribute_t1676075573::get_offset_of_id_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize410 = { sizeof (ErrorWrapper_t3794103536), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable410[1] = 
{
	ErrorWrapper_t3794103536::get_offset_of_errorCode_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize411 = { sizeof (ExternalException_t2659870595), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize412 = { sizeof (GCHandle_t2478567855)+ sizeof (RuntimeObject), sizeof(GCHandle_t2478567855 ), 0, 0 };
extern const int32_t g_FieldOffsetTable412[1] = 
{
	GCHandle_t2478567855::get_offset_of_handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize413 = { sizeof (GCHandleType_t2131696330)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable413[5] = 
{
	GCHandleType_t2131696330::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize414 = { sizeof (InterfaceTypeAttribute_t1251190904), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable414[1] = 
{
	InterfaceTypeAttribute_t1251190904::get_offset_of_intType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize415 = { sizeof (Marshal_t1784655706), -1, sizeof(Marshal_t1784655706_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable415[2] = 
{
	Marshal_t1784655706_StaticFields::get_offset_of_SystemMaxDBCSCharSize_0(),
	Marshal_t1784655706_StaticFields::get_offset_of_SystemDefaultCharSize_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize416 = { sizeof (MarshalDirectiveException_t1312783050), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable416[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize417 = { sizeof (PreserveSigAttribute_t911812896), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize418 = { sizeof (SafeHandle_t1847305982), sizeof(void*), 0, 0 };
extern const int32_t g_FieldOffsetTable418[4] = 
{
	SafeHandle_t1847305982::get_offset_of_handle_0(),
	SafeHandle_t1847305982::get_offset_of_invalid_handle_value_1(),
	SafeHandle_t1847305982::get_offset_of_refcount_2(),
	SafeHandle_t1847305982::get_offset_of_owns_handle_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize419 = { sizeof (TypeLibImportClassAttribute_t2147218407), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable419[1] = 
{
	TypeLibImportClassAttribute_t2147218407::get_offset_of__importClass_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize420 = { sizeof (TypeLibVersionAttribute_t2430839939), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable420[2] = 
{
	TypeLibVersionAttribute_t2430839939::get_offset_of_major_0(),
	TypeLibVersionAttribute_t2430839939::get_offset_of_minor_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize421 = { sizeof (UnmanagedFunctionPointerAttribute_t665973166), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable421[1] = 
{
	UnmanagedFunctionPointerAttribute_t665973166::get_offset_of_call_conv_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize422 = { sizeof (UnmanagedType_t1292406206)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable422[36] = 
{
	UnmanagedType_t1292406206::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize423 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize424 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize425 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize426 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize427 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize428 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize429 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize430 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize431 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize432 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize433 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize434 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize435 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize436 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize437 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize438 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize439 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize440 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize441 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize442 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize443 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize444 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize445 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize446 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize447 = { sizeof (ActivationServices_t259761356), -1, sizeof(ActivationServices_t259761356_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable447[1] = 
{
	ActivationServices_t259761356_StaticFields::get_offset_of__constructionActivator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize448 = { sizeof (AppDomainLevelActivator_t3388493819), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable448[2] = 
{
	AppDomainLevelActivator_t3388493819::get_offset_of__activationUrl_0(),
	AppDomainLevelActivator_t3388493819::get_offset_of__next_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize449 = { sizeof (ConstructionLevelActivator_t3954920495), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize450 = { sizeof (ContextLevelActivator_t3862116030), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable450[1] = 
{
	ContextLevelActivator_t3862116030::get_offset_of_m_NextActivator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize451 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize452 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize453 = { sizeof (RemoteActivator_t3160158498), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize454 = { sizeof (UrlAttribute_t3743183508), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable454[1] = 
{
	UrlAttribute_t3743183508::get_offset_of_url_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize455 = { sizeof (ChannelInfo_t242625656), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable455[1] = 
{
	ChannelInfo_t242625656::get_offset_of_channelData_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize456 = { sizeof (ChannelServices_t517115582), -1, sizeof(ChannelServices_t517115582_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable456[5] = 
{
	ChannelServices_t517115582_StaticFields::get_offset_of_registeredChannels_0(),
	ChannelServices_t517115582_StaticFields::get_offset_of_delayedClientChannels_1(),
	ChannelServices_t517115582_StaticFields::get_offset_of__crossContextSink_2(),
	ChannelServices_t517115582_StaticFields::get_offset_of_CrossContextUrl_3(),
	ChannelServices_t517115582_StaticFields::get_offset_of_oldStartModeTypes_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize457 = { sizeof (CrossAppDomainData_t3554352104), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable457[3] = 
{
	CrossAppDomainData_t3554352104::get_offset_of__ContextID_0(),
	CrossAppDomainData_t3554352104::get_offset_of__DomainID_1(),
	CrossAppDomainData_t3554352104::get_offset_of__processGuid_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize458 = { sizeof (CrossAppDomainChannel_t1767267272), -1, sizeof(CrossAppDomainChannel_t1767267272_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable458[1] = 
{
	CrossAppDomainChannel_t1767267272_StaticFields::get_offset_of_s_lock_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize459 = { sizeof (CrossAppDomainSink_t1042402513), -1, sizeof(CrossAppDomainSink_t1042402513_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable459[3] = 
{
	CrossAppDomainSink_t1042402513_StaticFields::get_offset_of_s_sinks_0(),
	CrossAppDomainSink_t1042402513_StaticFields::get_offset_of_processMessageMethod_1(),
	CrossAppDomainSink_t1042402513::get_offset_of__domainID_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize460 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize461 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize462 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize463 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize464 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize465 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize466 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize467 = { sizeof (SinkProviderData_t2756370643), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable467[3] = 
{
	SinkProviderData_t2756370643::get_offset_of_sinkName_0(),
	SinkProviderData_t2756370643::get_offset_of_children_1(),
	SinkProviderData_t2756370643::get_offset_of_properties_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize468 = { sizeof (Context_t2158928792), -1, sizeof(Context_t2158928792_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable468[14] = 
{
	Context_t2158928792::get_offset_of_domain_id_0(),
	Context_t2158928792::get_offset_of_context_id_1(),
	Context_t2158928792::get_offset_of_static_data_2(),
	Context_t2158928792_StaticFields::get_offset_of_default_server_context_sink_3(),
	Context_t2158928792::get_offset_of_server_context_sink_chain_4(),
	Context_t2158928792::get_offset_of_client_context_sink_chain_5(),
	Context_t2158928792::get_offset_of_datastore_6(),
	Context_t2158928792::get_offset_of_context_properties_7(),
	Context_t2158928792::get_offset_of_frozen_8(),
	Context_t2158928792_StaticFields::get_offset_of_global_count_9(),
	Context_t2158928792_StaticFields::get_offset_of_namedSlots_10(),
	Context_t2158928792_StaticFields::get_offset_of_global_dynamic_properties_11(),
	Context_t2158928792::get_offset_of_context_dynamic_properties_12(),
	Context_t2158928792::get_offset_of_callback_object_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize469 = { sizeof (DynamicPropertyCollection_t3380215848), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable469[1] = 
{
	DynamicPropertyCollection_t3380215848::get_offset_of__properties_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize470 = { sizeof (DynamicPropertyReg_t2926824170), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable470[2] = 
{
	DynamicPropertyReg_t2926824170::get_offset_of_Property_0(),
	DynamicPropertyReg_t2926824170::get_offset_of_Sink_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize471 = { sizeof (ContextCallbackObject_t1188206941), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize472 = { sizeof (ContextAttribute_t3891505101), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable472[1] = 
{
	ContextAttribute_t3891505101::get_offset_of_AttributeName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize473 = { sizeof (CrossContextChannel_t2551771611), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize474 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize475 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize476 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize477 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize478 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize479 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize480 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize481 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize482 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize483 = { sizeof (SynchronizationAttribute_t3653254383), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable483[5] = 
{
	SynchronizationAttribute_t3653254383::get_offset_of__bReEntrant_1(),
	SynchronizationAttribute_t3653254383::get_offset_of__flavor_2(),
	SynchronizationAttribute_t3653254383::get_offset_of__lockCount_3(),
	SynchronizationAttribute_t3653254383::get_offset_of__mutex_4(),
	SynchronizationAttribute_t3653254383::get_offset_of__ownerThread_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize484 = { sizeof (SynchronizedClientContextSink_t450672108), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable484[2] = 
{
	SynchronizedClientContextSink_t450672108::get_offset_of__next_0(),
	SynchronizedClientContextSink_t450672108::get_offset_of__att_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize485 = { sizeof (SynchronizedServerContextSink_t1119288578), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable485[2] = 
{
	SynchronizedServerContextSink_t1119288578::get_offset_of__next_0(),
	SynchronizedServerContextSink_t1119288578::get_offset_of__att_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize486 = { sizeof (LeaseManager_t67023432), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable486[2] = 
{
	LeaseManager_t67023432::get_offset_of__objects_0(),
	LeaseManager_t67023432::get_offset_of__timer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize487 = { sizeof (LeaseSink_t1005090020), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable487[1] = 
{
	LeaseSink_t1005090020::get_offset_of__nextSink_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize488 = { sizeof (LifetimeServices_t2348061467), -1, sizeof(LifetimeServices_t2348061467_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable488[5] = 
{
	LifetimeServices_t2348061467_StaticFields::get_offset_of__leaseManagerPollTime_0(),
	LifetimeServices_t2348061467_StaticFields::get_offset_of__leaseTime_1(),
	LifetimeServices_t2348061467_StaticFields::get_offset_of__renewOnCallTime_2(),
	LifetimeServices_t2348061467_StaticFields::get_offset_of__sponsorshipTimeout_3(),
	LifetimeServices_t2348061467_StaticFields::get_offset_of__leaseManager_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize489 = { sizeof (ArgInfoType_t1403183449)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable489[3] = 
{
	ArgInfoType_t1403183449::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize490 = { sizeof (ArgInfo_t4165897596), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable490[3] = 
{
	ArgInfo_t4165897596::get_offset_of__paramMap_0(),
	ArgInfo_t4165897596::get_offset_of__inoutArgCount_1(),
	ArgInfo_t4165897596::get_offset_of__method_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize491 = { sizeof (AsyncResult_t754744705), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable491[15] = 
{
	AsyncResult_t754744705::get_offset_of_async_state_0(),
	AsyncResult_t754744705::get_offset_of_handle_1(),
	AsyncResult_t754744705::get_offset_of_async_delegate_2(),
	AsyncResult_t754744705::get_offset_of_data_3(),
	AsyncResult_t754744705::get_offset_of_object_data_4(),
	AsyncResult_t754744705::get_offset_of_sync_completed_5(),
	AsyncResult_t754744705::get_offset_of_completed_6(),
	AsyncResult_t754744705::get_offset_of_endinvoke_called_7(),
	AsyncResult_t754744705::get_offset_of_async_callback_8(),
	AsyncResult_t754744705::get_offset_of_current_9(),
	AsyncResult_t754744705::get_offset_of_original_10(),
	AsyncResult_t754744705::get_offset_of_gchandle_11(),
	AsyncResult_t754744705::get_offset_of_call_message_12(),
	AsyncResult_t754744705::get_offset_of_message_ctrl_13(),
	AsyncResult_t754744705::get_offset_of_reply_message_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize492 = { sizeof (ClientContextTerminatorSink_t1257535831), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable492[1] = 
{
	ClientContextTerminatorSink_t1257535831::get_offset_of__context_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize493 = { sizeof (ConstructionCall_t892247838), -1, sizeof(ConstructionCall_t892247838_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable493[7] = 
{
	ConstructionCall_t892247838::get_offset_of__activator_11(),
	ConstructionCall_t892247838::get_offset_of__activationAttributes_12(),
	ConstructionCall_t892247838::get_offset_of__contextProperties_13(),
	ConstructionCall_t892247838::get_offset_of__activationType_14(),
	ConstructionCall_t892247838::get_offset_of__activationTypeName_15(),
	ConstructionCall_t892247838::get_offset_of__isContextOk_16(),
	ConstructionCall_t892247838_StaticFields::get_offset_of_U3CU3Ef__switchU24map20_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize494 = { sizeof (ConstructionCallDictionary_t1922338052), -1, sizeof(ConstructionCallDictionary_t1922338052_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable494[3] = 
{
	ConstructionCallDictionary_t1922338052_StaticFields::get_offset_of_InternalKeys_6(),
	ConstructionCallDictionary_t1922338052_StaticFields::get_offset_of_U3CU3Ef__switchU24map23_7(),
	ConstructionCallDictionary_t1922338052_StaticFields::get_offset_of_U3CU3Ef__switchU24map24_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize495 = { sizeof (EnvoyTerminatorSink_t4003621778), -1, sizeof(EnvoyTerminatorSink_t4003621778_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable495[1] = 
{
	EnvoyTerminatorSink_t4003621778_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize496 = { sizeof (Header_t590423160), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable496[4] = 
{
	Header_t590423160::get_offset_of_HeaderNamespace_0(),
	Header_t590423160::get_offset_of_MustUnderstand_1(),
	Header_t590423160::get_offset_of_Name_2(),
	Header_t590423160::get_offset_of_Value_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize497 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize498 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize499 = { 0, -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif