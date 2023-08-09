#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>



// System.String
struct String_t;
// UniFramework.Utility.UniTimer
struct UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00;

IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00_il2cpp_TypeInfo_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE96DA1138933F0B5E02FAA527975CD31605AC399 
{
};

// UniFramework.Utility.UniTimer
struct UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00  : public RuntimeObject
{
	// System.Single UniFramework.Utility.UniTimer::_intervalTime
	float ____intervalTime_0;
	// System.Single UniFramework.Utility.UniTimer::_durationTime
	float ____durationTime_1;
	// System.Int64 UniFramework.Utility.UniTimer::_maxTriggerCount
	int64_t ____maxTriggerCount_2;
	// System.Single UniFramework.Utility.UniTimer::_delayTimer
	float ____delayTimer_3;
	// System.Single UniFramework.Utility.UniTimer::_durationTimer
	float ____durationTimer_4;
	// System.Single UniFramework.Utility.UniTimer::_intervalTimer
	float ____intervalTimer_5;
	// System.Int64 UniFramework.Utility.UniTimer::_triggerCount
	int64_t ____triggerCount_6;
	// System.Single UniFramework.Utility.UniTimer::<DelayTime>k__BackingField
	float ___U3CDelayTimeU3Ek__BackingField_7;
	// System.Boolean UniFramework.Utility.UniTimer::<IsOver>k__BackingField
	bool ___U3CIsOverU3Ek__BackingField_8;
	// System.Boolean UniFramework.Utility.UniTimer::<IsPause>k__BackingField
	bool ___U3CIsPauseU3Ek__BackingField_9;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <Module>

// <Module>

// UniFramework.Utility.UniTimer

// UniFramework.Utility.UniTimer

// System.ValueType

// System.ValueType

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int64

// System.Int64

// System.Single

// System.Single

// System.Void

// System.Void
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void UniFramework.Utility.UniTimer::.ctor(System.Single,System.Single,System.Single,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTimer__ctor_mFC254D1BBC834F1A8C49D8F5EBED129EAEF0754C (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* __this, float ___0_delay, float ___1_interval, float ___2_duration, int64_t ___3_maxTriggerCount, const RuntimeMethod* method) ;
// System.Boolean UniFramework.Utility.UniTimer::get_IsOver()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTimer_get_IsOver_mB3746B6834456AAA0CBB0682ADA65B0C92644E5C_inline (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* __this, const RuntimeMethod* method) ;
// System.Single UniFramework.Utility.UniTimer::get_DelayTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UniTimer_get_DelayTime_m4F706A75E345E44A555AA8177310285277458650_inline (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* __this, const RuntimeMethod* method) ;
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA (float ___0_val1, float ___1_val2, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UniFramework.Utility.UniTimer::set_DelayTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTimer_set_DelayTime_m6328B17B699FEEA931BFCAF252214970D98A9743_inline (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UniFramework.Utility.UniTimer::set_IsPause(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTimer_set_IsPause_m3EA3A07F4F2EE465791D29F43760081331D0F44F_inline (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UniFramework.Utility.UniTimer::set_IsOver(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTimer_set_IsOver_m3302CB0D36FB9EEB0184D261364F5A86A37EB622_inline (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UniFramework.Utility.UniTimer::get_IsPause()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTimer_get_IsPause_mF84751005B3C760D78366F7A5B8ED43C71510E26_inline (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* __this, const RuntimeMethod* method) ;
// System.Void UniFramework.Utility.UniTimer::Kill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTimer_Kill_mD0178639FBF1352BEAF64950ABA1F47262DB27FA (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UniFramework.Utility.UniTimer UniFramework.Utility.UniTimer::CreateOnceTimer(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* UniTimer_CreateOnceTimer_mABD8B5DC494DBDEC4C744A128E0E1A8E84BB05CA (float ___0_delay, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* V_0 = NULL;
	{
		// return new UniTimer(delay, -1, -1, 1);
		float L_0 = ___0_delay;
		UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* L_1 = (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00*)il2cpp_codegen_object_new(UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UniTimer__ctor_mFC254D1BBC834F1A8C49D8F5EBED129EAEF0754C(L_1, L_0, (-1.0f), (-1.0f), ((int64_t)1), NULL);
		V_0 = L_1;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* L_2 = V_0;
		return L_2;
	}
}
// UniFramework.Utility.UniTimer UniFramework.Utility.UniTimer::CreatePepeatTimer(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* UniTimer_CreatePepeatTimer_m7058929F8F2916904AE9D3426C973C47D66AB857 (float ___0_delay, float ___1_interval, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* V_0 = NULL;
	{
		// return new UniTimer(delay, interval, -1, -1);
		float L_0 = ___0_delay;
		float L_1 = ___1_interval;
		UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* L_2 = (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00*)il2cpp_codegen_object_new(UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UniTimer__ctor_mFC254D1BBC834F1A8C49D8F5EBED129EAEF0754C(L_2, L_0, L_1, (-1.0f), ((int64_t)(-1)), NULL);
		V_0 = L_2;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* L_3 = V_0;
		return L_3;
	}
}
// UniFramework.Utility.UniTimer UniFramework.Utility.UniTimer::CreatePepeatTimer(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* UniTimer_CreatePepeatTimer_mD2BB7A2375043B56E32527BD09EB2B9190EA050A (float ___0_delay, float ___1_interval, float ___2_duration, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* V_0 = NULL;
	{
		// return new UniTimer(delay, interval, duration, -1);
		float L_0 = ___0_delay;
		float L_1 = ___1_interval;
		float L_2 = ___2_duration;
		UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* L_3 = (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00*)il2cpp_codegen_object_new(UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UniTimer__ctor_mFC254D1BBC834F1A8C49D8F5EBED129EAEF0754C(L_3, L_0, L_1, L_2, ((int64_t)(-1)), NULL);
		V_0 = L_3;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* L_4 = V_0;
		return L_4;
	}
}
// UniFramework.Utility.UniTimer UniFramework.Utility.UniTimer::CreatePepeatTimer(System.Single,System.Single,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* UniTimer_CreatePepeatTimer_mC6C71AA05EFD88F3D54FE79E846A13B2A203A274 (float ___0_delay, float ___1_interval, int64_t ___2_maxTriggerCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* V_0 = NULL;
	{
		// return new UniTimer(delay, interval, -1, maxTriggerCount);
		float L_0 = ___0_delay;
		float L_1 = ___1_interval;
		int64_t L_2 = ___2_maxTriggerCount;
		UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* L_3 = (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00*)il2cpp_codegen_object_new(UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UniTimer__ctor_mFC254D1BBC834F1A8C49D8F5EBED129EAEF0754C(L_3, L_0, L_1, (-1.0f), L_2, NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* L_4 = V_0;
		return L_4;
	}
}
// UniFramework.Utility.UniTimer UniFramework.Utility.UniTimer::CreateDurationTimer(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* UniTimer_CreateDurationTimer_m44355D79E959F5BCC51E786511C051C96204BE38 (float ___0_delay, float ___1_duration, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* V_0 = NULL;
	{
		// return new UniTimer(delay, -1, duration, -1);
		float L_0 = ___0_delay;
		float L_1 = ___1_duration;
		UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* L_2 = (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00*)il2cpp_codegen_object_new(UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UniTimer__ctor_mFC254D1BBC834F1A8C49D8F5EBED129EAEF0754C(L_2, L_0, (-1.0f), L_1, ((int64_t)(-1)), NULL);
		V_0 = L_2;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* L_3 = V_0;
		return L_3;
	}
}
// UniFramework.Utility.UniTimer UniFramework.Utility.UniTimer::CreateForeverTimer(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* UniTimer_CreateForeverTimer_m89AD56AB88D3CABCA48E24B79EFE4070FC22043B (float ___0_delay, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* V_0 = NULL;
	{
		// return new UniTimer(delay, -1, -1, -1);
		float L_0 = ___0_delay;
		UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* L_1 = (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00*)il2cpp_codegen_object_new(UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UniTimer__ctor_mFC254D1BBC834F1A8C49D8F5EBED129EAEF0754C(L_1, L_0, (-1.0f), (-1.0f), ((int64_t)(-1)), NULL);
		V_0 = L_1;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* L_2 = V_0;
		return L_2;
	}
}
// System.Void UniFramework.Utility.UniTimer::set_DelayTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTimer_set_DelayTime_m6328B17B699FEEA931BFCAF252214970D98A9743 (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float DelayTime { private set; get; }
		float L_0 = ___0_value;
		__this->___U3CDelayTimeU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Single UniFramework.Utility.UniTimer::get_DelayTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniTimer_get_DelayTime_m4F706A75E345E44A555AA8177310285277458650 (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* __this, const RuntimeMethod* method) 
{
	{
		// public float DelayTime { private set; get; }
		float L_0 = __this->___U3CDelayTimeU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void UniFramework.Utility.UniTimer::set_IsOver(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTimer_set_IsOver_m3302CB0D36FB9EEB0184D261364F5A86A37EB622 (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsOver { private set; get; }
		bool L_0 = ___0_value;
		__this->___U3CIsOverU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Boolean UniFramework.Utility.UniTimer::get_IsOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTimer_get_IsOver_mB3746B6834456AAA0CBB0682ADA65B0C92644E5C (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsOver { private set; get; }
		bool L_0 = __this->___U3CIsOverU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void UniFramework.Utility.UniTimer::set_IsPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTimer_set_IsPause_m3EA3A07F4F2EE465791D29F43760081331D0F44F (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsPause { private set; get; }
		bool L_0 = ___0_value;
		__this->___U3CIsPauseU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Boolean UniFramework.Utility.UniTimer::get_IsPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTimer_get_IsPause_mF84751005B3C760D78366F7A5B8ED43C71510E26 (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPause { private set; get; }
		bool L_0 = __this->___U3CIsPauseU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Single UniFramework.Utility.UniTimer::get_Remaining()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniTimer_get_Remaining_mFCFF0978B6F79FFEDE8FA41BD958983AC605CAFC (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		// if (IsOver)
		bool L_0;
		L_0 = UniTimer_get_IsOver_mB3746B6834456AAA0CBB0682ADA65B0C92644E5C_inline(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return 0f;
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0013:
	{
		// return System.Math.Max(0f, DelayTime - _delayTimer);
		float L_2;
		L_2 = UniTimer_get_DelayTime_m4F706A75E345E44A555AA8177310285277458650_inline(__this, NULL);
		float L_3 = __this->____delayTimer_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA((0.0f), ((float)il2cpp_codegen_subtract(L_2, L_3)), NULL);
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		float L_5 = V_1;
		return L_5;
	}
}
// System.Void UniFramework.Utility.UniTimer::.ctor(System.Single,System.Single,System.Single,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTimer__ctor_mFC254D1BBC834F1A8C49D8F5EBED129EAEF0754C (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* __this, float ___0_delay, float ___1_interval, float ___2_duration, int64_t ___3_maxTriggerCount, const RuntimeMethod* method) 
{
	{
		// private float _delayTimer = 0;
		__this->____delayTimer_3 = (0.0f);
		// private float _durationTimer = 0;
		__this->____durationTimer_4 = (0.0f);
		// private float _intervalTimer = 0;
		__this->____intervalTimer_5 = (0.0f);
		// private long _triggerCount = 0;
		__this->____triggerCount_6 = ((int64_t)0);
		// public UniTimer(float delay, float interval, float duration, long maxTriggerCount)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// DelayTime = delay;
		float L_0 = ___0_delay;
		UniTimer_set_DelayTime_m6328B17B699FEEA931BFCAF252214970D98A9743_inline(__this, L_0, NULL);
		// _intervalTime = interval;
		float L_1 = ___1_interval;
		__this->____intervalTime_0 = L_1;
		// _durationTime = duration;
		float L_2 = ___2_duration;
		__this->____durationTime_1 = L_2;
		// _maxTriggerCount = maxTriggerCount;
		int64_t L_3 = ___3_maxTriggerCount;
		__this->____maxTriggerCount_2 = L_3;
		// }
		return;
	}
}
// System.Void UniFramework.Utility.UniTimer::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTimer_Pause_m7096E77183A757593E3501239E44F18455A7E7B8 (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* __this, const RuntimeMethod* method) 
{
	{
		// IsPause = true;
		UniTimer_set_IsPause_m3EA3A07F4F2EE465791D29F43760081331D0F44F_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Utility.UniTimer::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTimer_Resume_mC8A7B795D35EC753DB6A428FDAF4F0CECD1F9675 (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* __this, const RuntimeMethod* method) 
{
	{
		// IsPause = false;
		UniTimer_set_IsPause_m3EA3A07F4F2EE465791D29F43760081331D0F44F_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Utility.UniTimer::Kill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTimer_Kill_mD0178639FBF1352BEAF64950ABA1F47262DB27FA (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* __this, const RuntimeMethod* method) 
{
	{
		// IsOver = true;
		UniTimer_set_IsOver_m3302CB0D36FB9EEB0184D261364F5A86A37EB622_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Utility.UniTimer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTimer_Reset_mCC1E507EC6F6CF52C428A60993D6B762AE2094AA (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* __this, const RuntimeMethod* method) 
{
	{
		// _delayTimer = 0;
		__this->____delayTimer_3 = (0.0f);
		// _durationTimer = 0;
		__this->____durationTimer_4 = (0.0f);
		// _intervalTimer = 0;
		__this->____intervalTimer_5 = (0.0f);
		// _triggerCount = 0;
		__this->____triggerCount_6 = ((int64_t)0);
		// IsOver = false;
		UniTimer_set_IsOver_m3302CB0D36FB9EEB0184D261364F5A86A37EB622_inline(__this, (bool)0, NULL);
		// IsPause = false;
		UniTimer_set_IsPause_m3EA3A07F4F2EE465791D29F43760081331D0F44F_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Boolean UniFramework.Utility.UniTimer::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTimer_Update_m20103E5FFFCAA64AF084A045511FD64B0E881B4D (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* __this, float ___0_deltaTime, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B3_0 = 0;
	{
		// if (IsOver || IsPause)
		bool L_0;
		L_0 = UniTimer_get_IsOver_mB3746B6834456AAA0CBB0682ADA65B0C92644E5C_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1;
		L_1 = UniTimer_get_IsPause_mF84751005B3C760D78366F7A5B8ED43C71510E26_inline(__this, NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0135;
	}

IL_001d:
	{
		// _delayTimer += deltaTime;
		float L_3 = __this->____delayTimer_3;
		float L_4 = ___0_deltaTime;
		__this->____delayTimer_3 = ((float)il2cpp_codegen_add(L_3, L_4));
		// if (_delayTimer < DelayTime)
		float L_5 = __this->____delayTimer_3;
		float L_6;
		L_6 = UniTimer_get_DelayTime_m4F706A75E345E44A555AA8177310285277458650_inline(__this, NULL);
		V_2 = (bool)((((float)L_5) < ((float)L_6))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0135;
	}

IL_0044:
	{
		// if(_intervalTime > 0)
		float L_8 = __this->____intervalTime_0;
		V_3 = (bool)((((float)L_8) > ((float)(0.0f)))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0063;
		}
	}
	{
		// _intervalTimer += deltaTime;
		float L_10 = __this->____intervalTimer_5;
		float L_11 = ___0_deltaTime;
		__this->____intervalTimer_5 = ((float)il2cpp_codegen_add(L_10, L_11));
	}

IL_0063:
	{
		// if (_durationTime > 0)
		float L_12 = __this->____durationTime_1;
		V_4 = (bool)((((float)L_12) > ((float)(0.0f)))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0084;
		}
	}
	{
		// _durationTimer += deltaTime;
		float L_14 = __this->____durationTimer_4;
		float L_15 = ___0_deltaTime;
		__this->____durationTimer_4 = ((float)il2cpp_codegen_add(L_14, L_15));
	}

IL_0084:
	{
		// if (_intervalTime > 0)
		float L_16 = __this->____intervalTime_0;
		V_5 = (bool)((((float)L_16) > ((float)(0.0f)))? 1 : 0);
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_00bf;
		}
	}
	{
		// if (_intervalTimer < _intervalTime)
		float L_18 = __this->____intervalTimer_5;
		float L_19 = __this->____intervalTime_0;
		V_6 = (bool)((((float)L_18) < ((float)L_19))? 1 : 0);
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_00b3;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0135;
	}

IL_00b3:
	{
		// _intervalTimer = 0;
		__this->____intervalTimer_5 = (0.0f);
	}

IL_00bf:
	{
		// if (_durationTime > 0)
		float L_21 = __this->____durationTime_1;
		V_7 = (bool)((((float)L_21) > ((float)(0.0f)))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00f2;
		}
	}
	{
		// if (_durationTimer >= _durationTime)
		float L_23 = __this->____durationTimer_4;
		float L_24 = __this->____durationTime_1;
		V_8 = (bool)((((int32_t)((!(((float)L_23) >= ((float)L_24)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_00f1;
		}
	}
	{
		// Kill();
		UniTimer_Kill_mD0178639FBF1352BEAF64950ABA1F47262DB27FA(__this, NULL);
	}

IL_00f1:
	{
	}

IL_00f2:
	{
		// if (_maxTriggerCount > 0)
		int64_t L_26 = __this->____maxTriggerCount_2;
		V_9 = (bool)((((int64_t)L_26) > ((int64_t)((int64_t)0)))? 1 : 0);
		bool L_27 = V_9;
		if (!L_27)
		{
			goto IL_0131;
		}
	}
	{
		// _triggerCount++;
		int64_t L_28 = __this->____triggerCount_6;
		__this->____triggerCount_6 = ((int64_t)il2cpp_codegen_add(L_28, ((int64_t)1)));
		// if (_triggerCount >= _maxTriggerCount)
		int64_t L_29 = __this->____triggerCount_6;
		int64_t L_30 = __this->____maxTriggerCount_2;
		V_10 = (bool)((((int32_t)((((int64_t)L_29) < ((int64_t)L_30))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_10;
		if (!L_31)
		{
			goto IL_0130;
		}
	}
	{
		// Kill();
		UniTimer_Kill_mD0178639FBF1352BEAF64950ABA1F47262DB27FA(__this, NULL);
	}

IL_0130:
	{
	}

IL_0131:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0135;
	}

IL_0135:
	{
		// }
		bool L_32 = V_1;
		return L_32;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTimer_get_IsOver_mB3746B6834456AAA0CBB0682ADA65B0C92644E5C_inline (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsOver { private set; get; }
		bool L_0 = __this->___U3CIsOverU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UniTimer_get_DelayTime_m4F706A75E345E44A555AA8177310285277458650_inline (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* __this, const RuntimeMethod* method) 
{
	{
		// public float DelayTime { private set; get; }
		float L_0 = __this->___U3CDelayTimeU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTimer_set_DelayTime_m6328B17B699FEEA931BFCAF252214970D98A9743_inline (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float DelayTime { private set; get; }
		float L_0 = ___0_value;
		__this->___U3CDelayTimeU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTimer_set_IsPause_m3EA3A07F4F2EE465791D29F43760081331D0F44F_inline (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsPause { private set; get; }
		bool L_0 = ___0_value;
		__this->___U3CIsPauseU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTimer_set_IsOver_m3302CB0D36FB9EEB0184D261364F5A86A37EB622_inline (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsOver { private set; get; }
		bool L_0 = ___0_value;
		__this->___U3CIsOverU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTimer_get_IsPause_mF84751005B3C760D78366F7A5B8ED43C71510E26_inline (UniTimer_t3C22ADE0F074DF63C6976E1D4DE09AC8C5ADEB00* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPause { private set; get; }
		bool L_0 = __this->___U3CIsPauseU3Ek__BackingField_9;
		return L_0;
	}
}
