#include "il2cpp-config.h"

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

// enemy
struct enemy_t1460818624;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1298513293;
// UnityEngine.Component
struct Component_t155969842;
// UnityEngine.Transform
struct Transform_t1533643861;
// UnityEngine.GameObject
struct GameObject_t3491225304;
// UnityEngine.Object
struct Object_t3015742792;
// UnityEngine.Collision2D
struct Collision2D_t143203769;
// System.String
struct String_t;
// EnemyGenerator
struct EnemyGenerator_t3496303284;
// EnemyGeneratorSe
struct EnemyGeneratorSe_t2972651467;
// MoveControl
struct MoveControl_t4223041131;
// Playercont
struct Playercont_t3613025495;
// Startbutton
struct Startbutton_t3222833783;
// System.Char[]
struct CharU5BU5D_t2618334639;
// System.Void
struct Void_t76566548;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t3843700483;

extern RuntimeClass* Vector3_t1139068063_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t3015742792_il2cpp_TypeInfo_var;
extern const uint32_t enemy_Update_m2267225418_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral667700571;
extern const uint32_t enemy_OnCollisionEnter2D_m84409201_MetadataUsageId;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t3491225304_m1165632107_RuntimeMethod_var;
extern const uint32_t EnemyGenerator_Update_m450178298_MetadataUsageId;
extern const uint32_t EnemyGeneratorSe_Update_m1357769262_MetadataUsageId;
extern const uint32_t MoveControl_Update_m3728997374_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral2827169377;
extern const uint32_t Playercont_Update_m2528001190_MetadataUsageId;
extern RuntimeClass* Debug_t3623187608_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1025869646;
extern Il2CppCodeGenString* _stringLiteral1697961139;
extern const uint32_t Playercont_OnCollisionEnter2D_m2734953615_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral3465548190;
extern const uint32_t Startbutton_toGameScene_m3620105130_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral866202269;
extern const uint32_t Startbutton_toTitle_m3128897013_MetadataUsageId;
struct ContactPoint2D_t2150885286 ;



#ifndef U3CMODULEU3E_T69226309_H
#define U3CMODULEU3E_T69226309_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t69226309 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T69226309_H
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
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T3137071784_H
#define VALUETYPE_T3137071784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3137071784  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3137071784_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3137071784_marshaled_com
{
};
#endif // VALUETYPE_T3137071784_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t2618334639* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t2618334639* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t2618334639** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t2618334639* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef QUATERNION_T1473945684_H
#define QUATERNION_T1473945684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t1473945684 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t1473945684, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t1473945684, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t1473945684, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t1473945684, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t1473945684_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t1473945684  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t1473945684_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t1473945684  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t1473945684 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t1473945684  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T1473945684_H
#ifndef INT32_T1818102459_H
#define INT32_T1818102459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t1818102459 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t1818102459, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T1818102459_H
#ifndef VOID_T76566548_H
#define VOID_T76566548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t76566548 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T76566548_H
#ifndef SINGLE_T472193993_H
#define SINGLE_T472193993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t472193993 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t472193993, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T472193993_H
#ifndef BOOLEAN_T3255453453_H
#define BOOLEAN_T3255453453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t3255453453 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t3255453453, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t3255453453_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t3255453453_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t3255453453_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T3255453453_H
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
#ifndef VECTOR2_T674680619_H
#define VECTOR2_T674680619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t674680619 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t674680619, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t674680619, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t674680619_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t674680619  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t674680619  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t674680619  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t674680619  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t674680619  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t674680619  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t674680619  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t674680619  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t674680619_StaticFields, ___zeroVector_2)); }
	inline Vector2_t674680619  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t674680619 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t674680619  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t674680619_StaticFields, ___oneVector_3)); }
	inline Vector2_t674680619  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t674680619 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t674680619  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t674680619_StaticFields, ___upVector_4)); }
	inline Vector2_t674680619  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t674680619 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t674680619  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t674680619_StaticFields, ___downVector_5)); }
	inline Vector2_t674680619  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t674680619 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t674680619  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t674680619_StaticFields, ___leftVector_6)); }
	inline Vector2_t674680619  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t674680619 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t674680619  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t674680619_StaticFields, ___rightVector_7)); }
	inline Vector2_t674680619  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t674680619 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t674680619  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t674680619_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t674680619  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t674680619 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t674680619  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t674680619_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t674680619  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t674680619 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t674680619  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T674680619_H
#ifndef VECTOR3_T1139068063_H
#define VECTOR3_T1139068063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t1139068063 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t1139068063, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t1139068063, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t1139068063, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t1139068063_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t1139068063  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t1139068063  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t1139068063  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t1139068063  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t1139068063  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t1139068063  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t1139068063  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t1139068063  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t1139068063  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t1139068063  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t1139068063_StaticFields, ___zeroVector_4)); }
	inline Vector3_t1139068063  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t1139068063 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t1139068063  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t1139068063_StaticFields, ___oneVector_5)); }
	inline Vector3_t1139068063  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t1139068063 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t1139068063  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t1139068063_StaticFields, ___upVector_6)); }
	inline Vector3_t1139068063  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t1139068063 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t1139068063  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t1139068063_StaticFields, ___downVector_7)); }
	inline Vector3_t1139068063  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t1139068063 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t1139068063  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t1139068063_StaticFields, ___leftVector_8)); }
	inline Vector3_t1139068063  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t1139068063 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t1139068063  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t1139068063_StaticFields, ___rightVector_9)); }
	inline Vector3_t1139068063  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t1139068063 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t1139068063  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t1139068063_StaticFields, ___forwardVector_10)); }
	inline Vector3_t1139068063  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t1139068063 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t1139068063  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t1139068063_StaticFields, ___backVector_11)); }
	inline Vector3_t1139068063  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t1139068063 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t1139068063  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t1139068063_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t1139068063  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t1139068063 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t1139068063  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t1139068063_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t1139068063  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t1139068063 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t1139068063  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T1139068063_H
#ifndef OBJECT_T3015742792_H
#define OBJECT_T3015742792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t3015742792  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t3015742792, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t3015742792_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t3015742792_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t3015742792_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t3015742792_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T3015742792_H
#ifndef COLLISION2D_T143203769_H
#define COLLISION2D_T143203769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision2D
struct  Collision2D_t143203769  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_Contacts
	ContactPoint2DU5BU5D_t3843700483* ___m_Contacts_4;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t674680619  ___m_RelativeVelocity_5;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_6;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t143203769, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t143203769, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t143203769, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t143203769, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_Contacts_4() { return static_cast<int32_t>(offsetof(Collision2D_t143203769, ___m_Contacts_4)); }
	inline ContactPoint2DU5BU5D_t3843700483* get_m_Contacts_4() const { return ___m_Contacts_4; }
	inline ContactPoint2DU5BU5D_t3843700483** get_address_of_m_Contacts_4() { return &___m_Contacts_4; }
	inline void set_m_Contacts_4(ContactPoint2DU5BU5D_t3843700483* value)
	{
		___m_Contacts_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Contacts_4), value);
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_5() { return static_cast<int32_t>(offsetof(Collision2D_t143203769, ___m_RelativeVelocity_5)); }
	inline Vector2_t674680619  get_m_RelativeVelocity_5() const { return ___m_RelativeVelocity_5; }
	inline Vector2_t674680619 * get_address_of_m_RelativeVelocity_5() { return &___m_RelativeVelocity_5; }
	inline void set_m_RelativeVelocity_5(Vector2_t674680619  value)
	{
		___m_RelativeVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_6() { return static_cast<int32_t>(offsetof(Collision2D_t143203769, ___m_Enabled_6)); }
	inline int32_t get_m_Enabled_6() const { return ___m_Enabled_6; }
	inline int32_t* get_address_of_m_Enabled_6() { return &___m_Enabled_6; }
	inline void set_m_Enabled_6(int32_t value)
	{
		___m_Enabled_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t143203769_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	ContactPoint2D_t2150885286 * ___m_Contacts_4;
	Vector2_t674680619  ___m_RelativeVelocity_5;
	int32_t ___m_Enabled_6;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t143203769_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	ContactPoint2D_t2150885286 * ___m_Contacts_4;
	Vector2_t674680619  ___m_RelativeVelocity_5;
	int32_t ___m_Enabled_6;
};
#endif // COLLISION2D_T143203769_H
#ifndef GAMEOBJECT_T3491225304_H
#define GAMEOBJECT_T3491225304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t3491225304  : public Object_t3015742792
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T3491225304_H
#ifndef COMPONENT_T155969842_H
#define COMPONENT_T155969842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t155969842  : public Object_t3015742792
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T155969842_H
#ifndef TRANSFORM_T1533643861_H
#define TRANSFORM_T1533643861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t1533643861  : public Component_t155969842
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T1533643861_H
#ifndef BEHAVIOUR_T964860148_H
#define BEHAVIOUR_T964860148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t964860148  : public Component_t155969842
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T964860148_H
#ifndef MONOBEHAVIOUR_T1298513293_H
#define MONOBEHAVIOUR_T1298513293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t1298513293  : public Behaviour_t964860148
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T1298513293_H
#ifndef ENEMYGENERATOR_T3496303284_H
#define ENEMYGENERATOR_T3496303284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyGenerator
struct  EnemyGenerator_t3496303284  : public MonoBehaviour_t1298513293
{
public:
	// System.Single EnemyGenerator::timer
	float ___timer_2;
	// System.Single EnemyGenerator::interval
	float ___interval_3;
	// UnityEngine.GameObject EnemyGenerator::ene
	GameObject_t3491225304 * ___ene_4;

public:
	inline static int32_t get_offset_of_timer_2() { return static_cast<int32_t>(offsetof(EnemyGenerator_t3496303284, ___timer_2)); }
	inline float get_timer_2() const { return ___timer_2; }
	inline float* get_address_of_timer_2() { return &___timer_2; }
	inline void set_timer_2(float value)
	{
		___timer_2 = value;
	}

	inline static int32_t get_offset_of_interval_3() { return static_cast<int32_t>(offsetof(EnemyGenerator_t3496303284, ___interval_3)); }
	inline float get_interval_3() const { return ___interval_3; }
	inline float* get_address_of_interval_3() { return &___interval_3; }
	inline void set_interval_3(float value)
	{
		___interval_3 = value;
	}

	inline static int32_t get_offset_of_ene_4() { return static_cast<int32_t>(offsetof(EnemyGenerator_t3496303284, ___ene_4)); }
	inline GameObject_t3491225304 * get_ene_4() const { return ___ene_4; }
	inline GameObject_t3491225304 ** get_address_of_ene_4() { return &___ene_4; }
	inline void set_ene_4(GameObject_t3491225304 * value)
	{
		___ene_4 = value;
		Il2CppCodeGenWriteBarrier((&___ene_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMYGENERATOR_T3496303284_H
#ifndef ENEMYGENERATORSE_T2972651467_H
#define ENEMYGENERATORSE_T2972651467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyGeneratorSe
struct  EnemyGeneratorSe_t2972651467  : public MonoBehaviour_t1298513293
{
public:
	// System.Single EnemyGeneratorSe::timer
	float ___timer_2;
	// System.Single EnemyGeneratorSe::interval
	float ___interval_3;
	// UnityEngine.GameObject EnemyGeneratorSe::ene
	GameObject_t3491225304 * ___ene_4;

public:
	inline static int32_t get_offset_of_timer_2() { return static_cast<int32_t>(offsetof(EnemyGeneratorSe_t2972651467, ___timer_2)); }
	inline float get_timer_2() const { return ___timer_2; }
	inline float* get_address_of_timer_2() { return &___timer_2; }
	inline void set_timer_2(float value)
	{
		___timer_2 = value;
	}

	inline static int32_t get_offset_of_interval_3() { return static_cast<int32_t>(offsetof(EnemyGeneratorSe_t2972651467, ___interval_3)); }
	inline float get_interval_3() const { return ___interval_3; }
	inline float* get_address_of_interval_3() { return &___interval_3; }
	inline void set_interval_3(float value)
	{
		___interval_3 = value;
	}

	inline static int32_t get_offset_of_ene_4() { return static_cast<int32_t>(offsetof(EnemyGeneratorSe_t2972651467, ___ene_4)); }
	inline GameObject_t3491225304 * get_ene_4() const { return ___ene_4; }
	inline GameObject_t3491225304 ** get_address_of_ene_4() { return &___ene_4; }
	inline void set_ene_4(GameObject_t3491225304 * value)
	{
		___ene_4 = value;
		Il2CppCodeGenWriteBarrier((&___ene_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMYGENERATORSE_T2972651467_H
#ifndef MOVECONTROL_T4223041131_H
#define MOVECONTROL_T4223041131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveControl
struct  MoveControl_t4223041131  : public MonoBehaviour_t1298513293
{
public:
	// UnityEngine.GameObject MoveControl::ghost
	GameObject_t3491225304 * ___ghost_2;
	// System.Boolean MoveControl::Rmove
	bool ___Rmove_3;
	// System.Boolean MoveControl::Lmove
	bool ___Lmove_4;
	// System.Single MoveControl::speed
	float ___speed_5;

public:
	inline static int32_t get_offset_of_ghost_2() { return static_cast<int32_t>(offsetof(MoveControl_t4223041131, ___ghost_2)); }
	inline GameObject_t3491225304 * get_ghost_2() const { return ___ghost_2; }
	inline GameObject_t3491225304 ** get_address_of_ghost_2() { return &___ghost_2; }
	inline void set_ghost_2(GameObject_t3491225304 * value)
	{
		___ghost_2 = value;
		Il2CppCodeGenWriteBarrier((&___ghost_2), value);
	}

	inline static int32_t get_offset_of_Rmove_3() { return static_cast<int32_t>(offsetof(MoveControl_t4223041131, ___Rmove_3)); }
	inline bool get_Rmove_3() const { return ___Rmove_3; }
	inline bool* get_address_of_Rmove_3() { return &___Rmove_3; }
	inline void set_Rmove_3(bool value)
	{
		___Rmove_3 = value;
	}

	inline static int32_t get_offset_of_Lmove_4() { return static_cast<int32_t>(offsetof(MoveControl_t4223041131, ___Lmove_4)); }
	inline bool get_Lmove_4() const { return ___Lmove_4; }
	inline bool* get_address_of_Lmove_4() { return &___Lmove_4; }
	inline void set_Lmove_4(bool value)
	{
		___Lmove_4 = value;
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(MoveControl_t4223041131, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVECONTROL_T4223041131_H
#ifndef PLAYERCONT_T3613025495_H
#define PLAYERCONT_T3613025495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Playercont
struct  Playercont_t3613025495  : public MonoBehaviour_t1298513293
{
public:
	// System.Int32 Playercont::hp
	int32_t ___hp_2;
	// UnityEngine.GameObject Playercont::hitpoint
	GameObject_t3491225304 * ___hitpoint_3;
	// UnityEngine.GameObject Playercont::hitpoint2
	GameObject_t3491225304 * ___hitpoint2_4;
	// UnityEngine.GameObject Playercont::hitpoint3
	GameObject_t3491225304 * ___hitpoint3_5;
	// UnityEngine.GameObject Playercont::hitpoint4
	GameObject_t3491225304 * ___hitpoint4_6;
	// UnityEngine.GameObject Playercont::hitpoint5
	GameObject_t3491225304 * ___hitpoint5_7;

public:
	inline static int32_t get_offset_of_hp_2() { return static_cast<int32_t>(offsetof(Playercont_t3613025495, ___hp_2)); }
	inline int32_t get_hp_2() const { return ___hp_2; }
	inline int32_t* get_address_of_hp_2() { return &___hp_2; }
	inline void set_hp_2(int32_t value)
	{
		___hp_2 = value;
	}

	inline static int32_t get_offset_of_hitpoint_3() { return static_cast<int32_t>(offsetof(Playercont_t3613025495, ___hitpoint_3)); }
	inline GameObject_t3491225304 * get_hitpoint_3() const { return ___hitpoint_3; }
	inline GameObject_t3491225304 ** get_address_of_hitpoint_3() { return &___hitpoint_3; }
	inline void set_hitpoint_3(GameObject_t3491225304 * value)
	{
		___hitpoint_3 = value;
		Il2CppCodeGenWriteBarrier((&___hitpoint_3), value);
	}

	inline static int32_t get_offset_of_hitpoint2_4() { return static_cast<int32_t>(offsetof(Playercont_t3613025495, ___hitpoint2_4)); }
	inline GameObject_t3491225304 * get_hitpoint2_4() const { return ___hitpoint2_4; }
	inline GameObject_t3491225304 ** get_address_of_hitpoint2_4() { return &___hitpoint2_4; }
	inline void set_hitpoint2_4(GameObject_t3491225304 * value)
	{
		___hitpoint2_4 = value;
		Il2CppCodeGenWriteBarrier((&___hitpoint2_4), value);
	}

	inline static int32_t get_offset_of_hitpoint3_5() { return static_cast<int32_t>(offsetof(Playercont_t3613025495, ___hitpoint3_5)); }
	inline GameObject_t3491225304 * get_hitpoint3_5() const { return ___hitpoint3_5; }
	inline GameObject_t3491225304 ** get_address_of_hitpoint3_5() { return &___hitpoint3_5; }
	inline void set_hitpoint3_5(GameObject_t3491225304 * value)
	{
		___hitpoint3_5 = value;
		Il2CppCodeGenWriteBarrier((&___hitpoint3_5), value);
	}

	inline static int32_t get_offset_of_hitpoint4_6() { return static_cast<int32_t>(offsetof(Playercont_t3613025495, ___hitpoint4_6)); }
	inline GameObject_t3491225304 * get_hitpoint4_6() const { return ___hitpoint4_6; }
	inline GameObject_t3491225304 ** get_address_of_hitpoint4_6() { return &___hitpoint4_6; }
	inline void set_hitpoint4_6(GameObject_t3491225304 * value)
	{
		___hitpoint4_6 = value;
		Il2CppCodeGenWriteBarrier((&___hitpoint4_6), value);
	}

	inline static int32_t get_offset_of_hitpoint5_7() { return static_cast<int32_t>(offsetof(Playercont_t3613025495, ___hitpoint5_7)); }
	inline GameObject_t3491225304 * get_hitpoint5_7() const { return ___hitpoint5_7; }
	inline GameObject_t3491225304 ** get_address_of_hitpoint5_7() { return &___hitpoint5_7; }
	inline void set_hitpoint5_7(GameObject_t3491225304 * value)
	{
		___hitpoint5_7 = value;
		Il2CppCodeGenWriteBarrier((&___hitpoint5_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONT_T3613025495_H
#ifndef STARTBUTTON_T3222833783_H
#define STARTBUTTON_T3222833783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Startbutton
struct  Startbutton_t3222833783  : public MonoBehaviour_t1298513293
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STARTBUTTON_T3222833783_H
#ifndef ENEMY_T1460818624_H
#define ENEMY_T1460818624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// enemy
struct  enemy_t1460818624  : public MonoBehaviour_t1298513293
{
public:
	// System.Single enemy::speed
	float ___speed_2;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(enemy_t1460818624, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMY_T1460818624_H


// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1536524373_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t1139068063  p1, Quaternion_t1473945684  p2, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m4075527766 (MonoBehaviour_t1298513293 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t1533643861 * Component_get_transform_m2280842635 (Component_t155969842 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t1139068063  Transform_get_position_m4287581258 (Transform_t1533643861 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m1153147917 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
extern "C"  void Vector3__ctor_m2015223295 (Vector3_t1139068063 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t1139068063  Vector3_op_Addition_m3040235785 (RuntimeObject * __this /* static, unused */, Vector3_t1139068063  p0, Vector3_t1139068063  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m2498894853 (Transform_t1533643861 * __this, Vector3_t1139068063  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t3491225304 * Component_get_gameObject_m3483458561 (Component_t155969842 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m768640608 (RuntimeObject * __this /* static, unused */, Object_t3015742792 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
extern "C"  GameObject_t3491225304 * Collision2D_get_gameObject_m1570277819 (Collision2D_t143203769 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GameObject::get_tag()
extern "C"  String_t* GameObject_get_tag_m2338936248 (GameObject_t3491225304 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m4169889428 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C"  float Random_Range_m1678901179 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t1473945684  Transform_get_rotation_m144773445 (Transform_t1533643861 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t3491225304_m1165632107(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t3491225304 * (*) (RuntimeObject * /* static, unused */, GameObject_t3491225304 *, Vector3_t1139068063 , Quaternion_t1473945684 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1536524373_gshared)(__this /* static, unused */, p0, p1, p2, method)
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t1533643861 * GameObject_get_transform_m3027371361 (GameObject_t3491225304 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m2100304719 (GameObject_t3491225304 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m4200502179 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4184581532 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void enemy::.ctor()
extern "C"  void enemy__ctor_m2593685766 (enemy_t1460818624 * __this, const RuntimeMethod* method)
{
	{
		__this->set_speed_2((4.0f));
		MonoBehaviour__ctor_m4075527766(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void enemy::Start()
extern "C"  void enemy_Start_m2170070882 (enemy_t1460818624 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void enemy::Update()
extern "C"  void enemy_Update_m2267225418 (enemy_t1460818624 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (enemy_Update_m2267225418_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t1139068063  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t1533643861 * L_0 = Component_get_transform_m2280842635(__this, /*hidden argument*/NULL);
		Transform_t1533643861 * L_1 = L_0;
		NullCheck(L_1);
		Vector3_t1139068063  L_2 = Transform_get_position_m4287581258(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_speed_2();
		float L_4 = Time_get_deltaTime_m1153147917(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t1139068063  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector3__ctor_m2015223295((&L_5), (0.0f), ((float)((float)((-L_3))*(float)L_4)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t1139068063_il2cpp_TypeInfo_var);
		Vector3_t1139068063  L_6 = Vector3_op_Addition_m3040235785(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_m2498894853(L_1, L_6, /*hidden argument*/NULL);
		Transform_t1533643861 * L_7 = Component_get_transform_m2280842635(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t1139068063  L_8 = Transform_get_position_m4287581258(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		float L_9 = (&V_0)->get_y_2();
		if ((!(((float)L_9) <= ((float)(-6.0f)))))
		{
			goto IL_0055;
		}
	}
	{
		GameObject_t3491225304 * L_10 = Component_get_gameObject_m3483458561(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3015742792_il2cpp_TypeInfo_var);
		Object_Destroy_m768640608(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
	}

IL_0055:
	{
		return;
	}
}
// System.Void enemy::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void enemy_OnCollisionEnter2D_m84409201 (enemy_t1460818624 * __this, Collision2D_t143203769 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (enemy_OnCollisionEnter2D_m84409201_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collision2D_t143203769 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t3491225304 * L_1 = Collision2D_get_gameObject_m1570277819(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m2338936248(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m4169889428(NULL /*static, unused*/, L_2, _stringLiteral667700571, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		GameObject_t3491225304 * L_4 = Component_get_gameObject_m3483458561(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3015742792_il2cpp_TypeInfo_var);
		Object_Destroy_m768640608(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void EnemyGenerator::.ctor()
extern "C"  void EnemyGenerator__ctor_m3350322307 (EnemyGenerator_t3496303284 * __this, const RuntimeMethod* method)
{
	{
		__this->set_interval_3((1.5f));
		MonoBehaviour__ctor_m4075527766(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyGenerator::Start()
extern "C"  void EnemyGenerator_Start_m2535053865 (EnemyGenerator_t3496303284 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void EnemyGenerator::Update()
extern "C"  void EnemyGenerator_Update_m450178298 (EnemyGenerator_t3496303284 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyGenerator_Update_m450178298_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_timer_2();
		float L_1 = Time_get_deltaTime_m1153147917(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_timer_2(((float)((float)L_0+(float)L_1)));
		float L_2 = __this->get_timer_2();
		float L_3 = __this->get_interval_3();
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_0074;
		}
	}
	{
		Transform_t1533643861 * L_4 = Component_get_transform_m2280842635(__this, /*hidden argument*/NULL);
		float L_5 = Random_Range_m1678901179(NULL /*static, unused*/, (-0.1f), (1.6f), /*hidden argument*/NULL);
		Vector3_t1139068063  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m2015223295((&L_6), L_5, (5.6f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_m2498894853(L_4, L_6, /*hidden argument*/NULL);
		GameObject_t3491225304 * L_7 = __this->get_ene_4();
		Transform_t1533643861 * L_8 = Component_get_transform_m2280842635(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t1139068063  L_9 = Transform_get_position_m4287581258(L_8, /*hidden argument*/NULL);
		Transform_t1533643861 * L_10 = Component_get_transform_m2280842635(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Quaternion_t1473945684  L_11 = Transform_get_rotation_m144773445(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3015742792_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t3491225304_m1165632107(NULL /*static, unused*/, L_7, L_9, L_11, /*hidden argument*/Object_Instantiate_TisGameObject_t3491225304_m1165632107_RuntimeMethod_var);
		__this->set_timer_2((0.0f));
	}

IL_0074:
	{
		return;
	}
}
// System.Void EnemyGeneratorSe::.ctor()
extern "C"  void EnemyGeneratorSe__ctor_m3622024910 (EnemyGeneratorSe_t2972651467 * __this, const RuntimeMethod* method)
{
	{
		__this->set_interval_3((2.2f));
		MonoBehaviour__ctor_m4075527766(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyGeneratorSe::Start()
extern "C"  void EnemyGeneratorSe_Start_m1334636321 (EnemyGeneratorSe_t2972651467 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void EnemyGeneratorSe::Update()
extern "C"  void EnemyGeneratorSe_Update_m1357769262 (EnemyGeneratorSe_t2972651467 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyGeneratorSe_Update_m1357769262_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_timer_2();
		float L_1 = Time_get_deltaTime_m1153147917(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_timer_2(((float)((float)L_0+(float)L_1)));
		float L_2 = __this->get_timer_2();
		float L_3 = __this->get_interval_3();
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_0074;
		}
	}
	{
		Transform_t1533643861 * L_4 = Component_get_transform_m2280842635(__this, /*hidden argument*/NULL);
		float L_5 = Random_Range_m1678901179(NULL /*static, unused*/, (-2.4f), (-0.4f), /*hidden argument*/NULL);
		Vector3_t1139068063  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m2015223295((&L_6), L_5, (5.6f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_m2498894853(L_4, L_6, /*hidden argument*/NULL);
		GameObject_t3491225304 * L_7 = __this->get_ene_4();
		Transform_t1533643861 * L_8 = Component_get_transform_m2280842635(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t1139068063  L_9 = Transform_get_position_m4287581258(L_8, /*hidden argument*/NULL);
		Transform_t1533643861 * L_10 = Component_get_transform_m2280842635(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Quaternion_t1473945684  L_11 = Transform_get_rotation_m144773445(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3015742792_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t3491225304_m1165632107(NULL /*static, unused*/, L_7, L_9, L_11, /*hidden argument*/Object_Instantiate_TisGameObject_t3491225304_m1165632107_RuntimeMethod_var);
		__this->set_timer_2((0.0f));
	}

IL_0074:
	{
		return;
	}
}
// System.Void MoveControl::.ctor()
extern "C"  void MoveControl__ctor_m3609554881 (MoveControl_t4223041131 * __this, const RuntimeMethod* method)
{
	{
		__this->set_speed_5((4.0f));
		MonoBehaviour__ctor_m4075527766(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoveControl::Start()
extern "C"  void MoveControl_Start_m1724712901 (MoveControl_t4223041131 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void MoveControl::Update()
extern "C"  void MoveControl_Update_m3728997374 (MoveControl_t4223041131 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveControl_Update_m3728997374_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t1139068063  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t1139068063  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		bool L_0 = __this->get_Rmove_3();
		if (!L_0)
		{
			goto IL_0063;
		}
	}
	{
		GameObject_t3491225304 * L_1 = __this->get_ghost_2();
		NullCheck(L_1);
		Transform_t1533643861 * L_2 = GameObject_get_transform_m3027371361(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t1139068063  L_3 = Transform_get_position_m4287581258(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = (&V_0)->get_x_1();
		if ((!(((double)(((double)((double)L_4)))) <= ((double)(2.2)))))
		{
			goto IL_0063;
		}
	}
	{
		GameObject_t3491225304 * L_5 = __this->get_ghost_2();
		NullCheck(L_5);
		Transform_t1533643861 * L_6 = GameObject_get_transform_m3027371361(L_5, /*hidden argument*/NULL);
		Transform_t1533643861 * L_7 = L_6;
		NullCheck(L_7);
		Vector3_t1139068063  L_8 = Transform_get_position_m4287581258(L_7, /*hidden argument*/NULL);
		float L_9 = __this->get_speed_5();
		float L_10 = Time_get_deltaTime_m1153147917(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t1139068063  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector3__ctor_m2015223295((&L_11), ((float)((float)L_9*(float)L_10)), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t1139068063_il2cpp_TypeInfo_var);
		Vector3_t1139068063  L_12 = Vector3_op_Addition_m3040235785(NULL /*static, unused*/, L_8, L_11, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_m2498894853(L_7, L_12, /*hidden argument*/NULL);
	}

IL_0063:
	{
		bool L_13 = __this->get_Lmove_4();
		if (!L_13)
		{
			goto IL_00c7;
		}
	}
	{
		GameObject_t3491225304 * L_14 = __this->get_ghost_2();
		NullCheck(L_14);
		Transform_t1533643861 * L_15 = GameObject_get_transform_m3027371361(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t1139068063  L_16 = Transform_get_position_m4287581258(L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		float L_17 = (&V_1)->get_x_1();
		if ((!(((double)(((double)((double)L_17)))) >= ((double)(-2.3)))))
		{
			goto IL_00c7;
		}
	}
	{
		GameObject_t3491225304 * L_18 = __this->get_ghost_2();
		NullCheck(L_18);
		Transform_t1533643861 * L_19 = GameObject_get_transform_m3027371361(L_18, /*hidden argument*/NULL);
		Transform_t1533643861 * L_20 = L_19;
		NullCheck(L_20);
		Vector3_t1139068063  L_21 = Transform_get_position_m4287581258(L_20, /*hidden argument*/NULL);
		float L_22 = __this->get_speed_5();
		float L_23 = Time_get_deltaTime_m1153147917(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t1139068063  L_24;
		memset(&L_24, 0, sizeof(L_24));
		Vector3__ctor_m2015223295((&L_24), ((float)((float)((-L_22))*(float)L_23)), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t1139068063_il2cpp_TypeInfo_var);
		Vector3_t1139068063  L_25 = Vector3_op_Addition_m3040235785(NULL /*static, unused*/, L_21, L_24, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_position_m2498894853(L_20, L_25, /*hidden argument*/NULL);
	}

IL_00c7:
	{
		return;
	}
}
// System.Void MoveControl::RightDown()
extern "C"  void MoveControl_RightDown_m2064077761 (MoveControl_t4223041131 * __this, const RuntimeMethod* method)
{
	{
		__this->set_Rmove_3((bool)1);
		return;
	}
}
// System.Void MoveControl::RightUp()
extern "C"  void MoveControl_RightUp_m1668653621 (MoveControl_t4223041131 * __this, const RuntimeMethod* method)
{
	{
		__this->set_Rmove_3((bool)0);
		return;
	}
}
// System.Void MoveControl::LeftDown()
extern "C"  void MoveControl_LeftDown_m2832332360 (MoveControl_t4223041131 * __this, const RuntimeMethod* method)
{
	{
		__this->set_Lmove_4((bool)1);
		return;
	}
}
// System.Void MoveControl::LeftUp()
extern "C"  void MoveControl_LeftUp_m2489423882 (MoveControl_t4223041131 * __this, const RuntimeMethod* method)
{
	{
		__this->set_Lmove_4((bool)0);
		return;
	}
}
// System.Void Playercont::.ctor()
extern "C"  void Playercont__ctor_m358687104 (Playercont_t3613025495 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m4075527766(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Playercont::Start()
extern "C"  void Playercont_Start_m3936528982 (Playercont_t3613025495 * __this, const RuntimeMethod* method)
{
	{
		__this->set_hp_2(5);
		return;
	}
}
// System.Void Playercont::Update()
extern "C"  void Playercont_Update_m2528001190 (Playercont_t3613025495 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Playercont_Update_m2528001190_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_hp_2();
		if ((((int32_t)L_0) < ((int32_t)5)))
		{
			goto IL_0054;
		}
	}
	{
		__this->set_hp_2(5);
		GameObject_t3491225304 * L_1 = __this->get_hitpoint_3();
		NullCheck(L_1);
		GameObject_SetActive_m2100304719(L_1, (bool)1, /*hidden argument*/NULL);
		GameObject_t3491225304 * L_2 = __this->get_hitpoint2_4();
		NullCheck(L_2);
		GameObject_SetActive_m2100304719(L_2, (bool)1, /*hidden argument*/NULL);
		GameObject_t3491225304 * L_3 = __this->get_hitpoint3_5();
		NullCheck(L_3);
		GameObject_SetActive_m2100304719(L_3, (bool)1, /*hidden argument*/NULL);
		GameObject_t3491225304 * L_4 = __this->get_hitpoint4_6();
		NullCheck(L_4);
		GameObject_SetActive_m2100304719(L_4, (bool)1, /*hidden argument*/NULL);
		GameObject_t3491225304 * L_5 = __this->get_hitpoint5_7();
		NullCheck(L_5);
		GameObject_SetActive_m2100304719(L_5, (bool)1, /*hidden argument*/NULL);
		goto IL_0183;
	}

IL_0054:
	{
		int32_t L_6 = __this->get_hp_2();
		if ((!(((uint32_t)L_6) == ((uint32_t)4))))
		{
			goto IL_00a1;
		}
	}
	{
		GameObject_t3491225304 * L_7 = __this->get_hitpoint_3();
		NullCheck(L_7);
		GameObject_SetActive_m2100304719(L_7, (bool)0, /*hidden argument*/NULL);
		GameObject_t3491225304 * L_8 = __this->get_hitpoint2_4();
		NullCheck(L_8);
		GameObject_SetActive_m2100304719(L_8, (bool)1, /*hidden argument*/NULL);
		GameObject_t3491225304 * L_9 = __this->get_hitpoint3_5();
		NullCheck(L_9);
		GameObject_SetActive_m2100304719(L_9, (bool)1, /*hidden argument*/NULL);
		GameObject_t3491225304 * L_10 = __this->get_hitpoint4_6();
		NullCheck(L_10);
		GameObject_SetActive_m2100304719(L_10, (bool)1, /*hidden argument*/NULL);
		GameObject_t3491225304 * L_11 = __this->get_hitpoint5_7();
		NullCheck(L_11);
		GameObject_SetActive_m2100304719(L_11, (bool)1, /*hidden argument*/NULL);
		goto IL_0183;
	}

IL_00a1:
	{
		int32_t L_12 = __this->get_hp_2();
		if ((!(((uint32_t)L_12) == ((uint32_t)3))))
		{
			goto IL_00ee;
		}
	}
	{
		GameObject_t3491225304 * L_13 = __this->get_hitpoint_3();
		NullCheck(L_13);
		GameObject_SetActive_m2100304719(L_13, (bool)0, /*hidden argument*/NULL);
		GameObject_t3491225304 * L_14 = __this->get_hitpoint2_4();
		NullCheck(L_14);
		GameObject_SetActive_m2100304719(L_14, (bool)0, /*hidden argument*/NULL);
		GameObject_t3491225304 * L_15 = __this->get_hitpoint3_5();
		NullCheck(L_15);
		GameObject_SetActive_m2100304719(L_15, (bool)1, /*hidden argument*/NULL);
		GameObject_t3491225304 * L_16 = __this->get_hitpoint4_6();
		NullCheck(L_16);
		GameObject_SetActive_m2100304719(L_16, (bool)1, /*hidden argument*/NULL);
		GameObject_t3491225304 * L_17 = __this->get_hitpoint5_7();
		NullCheck(L_17);
		GameObject_SetActive_m2100304719(L_17, (bool)1, /*hidden argument*/NULL);
		goto IL_0183;
	}

IL_00ee:
	{
		int32_t L_18 = __this->get_hp_2();
		if ((!(((uint32_t)L_18) == ((uint32_t)2))))
		{
			goto IL_013b;
		}
	}
	{
		GameObject_t3491225304 * L_19 = __this->get_hitpoint_3();
		NullCheck(L_19);
		GameObject_SetActive_m2100304719(L_19, (bool)0, /*hidden argument*/NULL);
		GameObject_t3491225304 * L_20 = __this->get_hitpoint2_4();
		NullCheck(L_20);
		GameObject_SetActive_m2100304719(L_20, (bool)0, /*hidden argument*/NULL);
		GameObject_t3491225304 * L_21 = __this->get_hitpoint3_5();
		NullCheck(L_21);
		GameObject_SetActive_m2100304719(L_21, (bool)0, /*hidden argument*/NULL);
		GameObject_t3491225304 * L_22 = __this->get_hitpoint4_6();
		NullCheck(L_22);
		GameObject_SetActive_m2100304719(L_22, (bool)1, /*hidden argument*/NULL);
		GameObject_t3491225304 * L_23 = __this->get_hitpoint5_7();
		NullCheck(L_23);
		GameObject_SetActive_m2100304719(L_23, (bool)1, /*hidden argument*/NULL);
		goto IL_0183;
	}

IL_013b:
	{
		int32_t L_24 = __this->get_hp_2();
		if ((!(((uint32_t)L_24) == ((uint32_t)1))))
		{
			goto IL_0183;
		}
	}
	{
		GameObject_t3491225304 * L_25 = __this->get_hitpoint_3();
		NullCheck(L_25);
		GameObject_SetActive_m2100304719(L_25, (bool)0, /*hidden argument*/NULL);
		GameObject_t3491225304 * L_26 = __this->get_hitpoint2_4();
		NullCheck(L_26);
		GameObject_SetActive_m2100304719(L_26, (bool)0, /*hidden argument*/NULL);
		GameObject_t3491225304 * L_27 = __this->get_hitpoint3_5();
		NullCheck(L_27);
		GameObject_SetActive_m2100304719(L_27, (bool)0, /*hidden argument*/NULL);
		GameObject_t3491225304 * L_28 = __this->get_hitpoint4_6();
		NullCheck(L_28);
		GameObject_SetActive_m2100304719(L_28, (bool)0, /*hidden argument*/NULL);
		GameObject_t3491225304 * L_29 = __this->get_hitpoint5_7();
		NullCheck(L_29);
		GameObject_SetActive_m2100304719(L_29, (bool)1, /*hidden argument*/NULL);
	}

IL_0183:
	{
		int32_t L_30 = __this->get_hp_2();
		if ((((int32_t)L_30) > ((int32_t)0)))
		{
			goto IL_01d5;
		}
	}
	{
		GameObject_t3491225304 * L_31 = __this->get_hitpoint_3();
		NullCheck(L_31);
		GameObject_SetActive_m2100304719(L_31, (bool)0, /*hidden argument*/NULL);
		GameObject_t3491225304 * L_32 = __this->get_hitpoint2_4();
		NullCheck(L_32);
		GameObject_SetActive_m2100304719(L_32, (bool)0, /*hidden argument*/NULL);
		GameObject_t3491225304 * L_33 = __this->get_hitpoint3_5();
		NullCheck(L_33);
		GameObject_SetActive_m2100304719(L_33, (bool)0, /*hidden argument*/NULL);
		GameObject_t3491225304 * L_34 = __this->get_hitpoint4_6();
		NullCheck(L_34);
		GameObject_SetActive_m2100304719(L_34, (bool)0, /*hidden argument*/NULL);
		GameObject_t3491225304 * L_35 = __this->get_hitpoint5_7();
		NullCheck(L_35);
		GameObject_SetActive_m2100304719(L_35, (bool)0, /*hidden argument*/NULL);
		SceneManager_LoadScene_m4200502179(NULL /*static, unused*/, _stringLiteral2827169377, /*hidden argument*/NULL);
	}

IL_01d5:
	{
		return;
	}
}
// System.Void Playercont::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void Playercont_OnCollisionEnter2D_m2734953615 (Playercont_t3613025495 * __this, Collision2D_t143203769 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Playercont_OnCollisionEnter2D_m2734953615_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collision2D_t143203769 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t3491225304 * L_1 = Collision2D_get_gameObject_m1570277819(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m2338936248(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m4169889428(NULL /*static, unused*/, L_2, _stringLiteral1025869646, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_4 = __this->get_hp_2();
		__this->set_hp_2(((int32_t)((int32_t)L_4-(int32_t)1)));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3623187608_il2cpp_TypeInfo_var);
		Debug_Log_m4184581532(NULL /*static, unused*/, _stringLiteral1697961139, /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Void Startbutton::.ctor()
extern "C"  void Startbutton__ctor_m3154004422 (Startbutton_t3222833783 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m4075527766(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Startbutton::Start()
extern "C"  void Startbutton_Start_m3745936967 (Startbutton_t3222833783 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Startbutton::Update()
extern "C"  void Startbutton_Update_m4179210544 (Startbutton_t3222833783 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Startbutton::toGameScene()
extern "C"  void Startbutton_toGameScene_m3620105130 (Startbutton_t3222833783 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Startbutton_toGameScene_m3620105130_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m4200502179(NULL /*static, unused*/, _stringLiteral3465548190, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Startbutton::toTitle()
extern "C"  void Startbutton_toTitle_m3128897013 (Startbutton_t3222833783 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Startbutton_toTitle_m3128897013_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m4200502179(NULL /*static, unused*/, _stringLiteral866202269, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
