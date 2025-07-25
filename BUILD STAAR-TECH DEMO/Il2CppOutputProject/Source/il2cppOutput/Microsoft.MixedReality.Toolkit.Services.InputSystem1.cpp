﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct Dictionary_2_t99258040B667AD054EDE09515EFC6475271347D4;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`3<System.String,UnityEngine.Transform,System.String>
struct Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD;
// System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct IDictionary_2_t00C9B5F2CC48E236650AFE4CAADE51D9EB00E353;
// System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>
struct IEnumerator_1_tA235ABA4AA406A804DE5381B007B1427B8741B11;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct IMixedRealityGestureHandler_1_tDD630CA456B9637F03AAA163B2B2940B7776C69F;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>
struct IMixedRealityGestureHandler_1_t089B860A1441B2916090DC4791D82D024B0C038E;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>
struct IMixedRealityGestureHandler_1_t0A6A8EE9622546FFF67B365C595883EF2858496D;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>
struct IMixedRealityGestureHandler_1_t4ACD9C07E55327963BB0C857421B51704EA7CA85;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct IMixedRealityInputHandler_1_tB96C9EB26311047478692CD4EA158B1862C1A45C;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>
struct IMixedRealityInputHandler_1_tF04C7976A0DDAFAB436AB651A91AC34AC0B0BF88;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>
struct IMixedRealityInputHandler_1_t14E75FB263DF33F3C857F51522F83F4E4F6638DA;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>
struct IMixedRealityInputHandler_1_tBDCA226328D966CBB4DB59D7769FA55EFE647367;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>
struct IMixedRealityInputHandler_1_tB2D657CE869C8683B11A9FA077E51609A1D6A95B;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct InputEventData_1_t9912FB5BCD3E745BE7F975C9F3E0EA1DCAC114DA;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>
struct InputEventData_1_t4EF18F529455F87A02DD28A49212B7B093A97CF1;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct InputEventData_1_t8BA709B500978D2FF6CBE02840D448EC4F1B96FF;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion>
struct InputEventData_1_tF68721C6A55FBBB8C3B93B2EB342522FAD3F7716;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single>
struct InputEventData_1_tA8DA12BEACD164A612EE93A1868A0EF98A7193CA;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2>
struct InputEventData_1_tA191CDE875C3A37876AF9EBEC1082E9A97791713;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>
struct InputEventData_1_t72EB43FD8BF708F94C8860821D368A0E9B230155;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct KeyCollection_t95D192504CE070F92C621E6D7F7CF6B8F3A8DE9E;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct List_1_t0BF018D6B425B2A6B6E26EF2C14844DEFEF35A8C;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct SourcePoseEventData_1_tFE8555246DDB23EE10ACB4694CD556E6CB2EA1EA;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>
struct SourcePoseEventData_1_t0C3E52D1B6B037B26D3125432D5FC5A1632236D5;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>
struct SourcePoseEventData_1_tACD69D8464067CAB384CC33C478335A93920D0C2;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>
struct SourcePoseEventData_1_t424CC2521693730C3C44C26B3EB1E7CA4F3529EA;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>
struct SourcePoseEventData_1_tEEC6D7835C6D2171E6766178D4C5272FAE422494;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct ValueCollection_t0CA0E0CBF565698EFAC83E4437DE7BD748259DB6;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>[]
struct EntryU5BU5D_t54FA8B74437CCE3C1881D6BA53327B5BF8251FEA;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_tD0842E695B3632D45419367277A08EEA1B2E22F3;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F;
// Microsoft.MixedReality.Toolkit.Physics.RayStep[]
struct RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource
struct BaseGenericInputSource_t983CE64ED607AD7D615AE906B29D78B89BC4B6F9;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer
struct BaseRayStabilizer_tFC7BFA95792DF321D647D60B39131F943CF657D9;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.MixedReality.Toolkit.Input.DictationEventData
struct DictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// System.Exception
struct Exception_t;
// Microsoft.MixedReality.Toolkit.Input.FocusEventData
struct FocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.Input.GazeProvider
struct GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764;
// Microsoft.MixedReality.Toolkit.Physics.GazeStabilizer
struct GazeStabilizer_tBFF05492B799C4F0241BD35049B35A5C1B587D10;
// Microsoft.MixedReality.Toolkit.Input.GenericPointer
struct GenericPointer_tFF914BF1E1E3CF91EBEFBC364A586C28DACBBCE7;
// Microsoft.MixedReality.Toolkit.Input.HandMeshInfo
struct HandMeshInfo_tD99A773B6804BA0497422760646D27DF9A5EB636;
// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData
struct HandTrackingInputEventData_t4D2EA53F7605800166D3AA5A8A34EFF4C6CCB139;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// Microsoft.MixedReality.Toolkit.Physics.IBaseRayStabilizer
struct IBaseRayStabilizer_t5415FCC55766A20AA305652D632E50990B9CC844;
// Microsoft.MixedReality.Toolkit.Input.ICursorModifier
struct ICursorModifier_tC92A87978B2D158C14C080F80A375226AFC0E9DB;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler
struct IMixedRealityBaseInputHandler_tD5A6B0773EE333DF2093B8ED35D9808CEC5DCDB8;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController
struct IMixedRealityController_t30769B0E5BEC9AF82820A8983DE77F98CBE98DC8;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor
struct IMixedRealityCursor_t91C9BF2FDFDF7DE443B045E25B3C1110BD56AF43;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler
struct IMixedRealityDictationHandler_t11FEE47AFE526B4D2F8E91C0CFC430E47B76C03A;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler
struct IMixedRealityFocusChangedHandler_t72FE5A113A51A35C36DA67789766F9CD4F7A69C5;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler
struct IMixedRealityFocusHandler_tD0C2AA219563F8BD3CE819D0510553BF041A90D8;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler
struct IMixedRealityGestureHandler_t7B31870B1D549DCB19CAC6B518B0AB3A454180FB;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler
struct IMixedRealityHandJointHandler_t3B3D9548A79A9E2599D70D5B3DEC37A56DCACD82;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler
struct IMixedRealityHandMeshHandler_t96F62F66F2A78C9A0CF1439C6717E8007F81FAB8;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler
struct IMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler
struct IMixedRealityInputHandler_t473158012DB9CEDED34D3E67CDF460FEC832B9C6;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t3BE4DEE2B9A2B52798B355A7D3C80B3359393E9C;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_tC8C6CA2DB07D67431BAAB603F549294D0C3E2616;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler
struct IMixedRealityPointerHandler_t72C39FEFB7745C2DDB4CFC4F2D241DEFE575C0D1;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler
struct IMixedRealitySourcePoseHandler_tADF1DF2DE94864C6FA9E43F55A01DE42BE023C9B;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler
struct IMixedRealitySourceStateHandler_t851C38B2BC0C1AF0BDBD3B985D15026F0C6FDB67;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler
struct IMixedRealitySpeechHandler_t4BE1C6AE73FCF96206DDC65F62AF13709A32565F;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler
struct IMixedRealityTouchHandler_tE5FCC5A0B711B1356C8D026DD2EF62EFAFBCE844;
// Microsoft.MixedReality.Toolkit.Input.IPointerResult
struct IPointerResult_tD3EFF5EF45786DC1BCF0A050F8F929FE63F249B7;
// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9;
// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener
struct InputSystemGlobalHandlerListener_t6D199696B69A68F0DB57E685C5A0D3656F417833;
// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener
struct InputSystemGlobalListener_t35C2E6176D79EADF5B304B877FE7559F42B70EF9;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule
struct MixedRealityInputModule_t76F66FFFC2F805CEB169ABB00F69053EA20B6E99;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData
struct SourceStateEventData_tF68358C62720A3DE79F698D981E3F0C7E6023F2F;
// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct SpeechEventData_t5107F68604DE41246F6BCAAA3E0A436668499454;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21;
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A;
// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData
struct PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0;
// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult
struct PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD;
// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences
struct PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF;
// Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer
struct InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46;
// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c
struct U3CU3Ec_t0F6AC43D4D871BC09215158A773B76836B7F3026;
// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c
struct U3CU3Ec_t8751182FFB7410C8B81BCA7DE7E0706E992AABFE;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16
struct U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData
struct PointerData_tFFB8BD6689DF7417692F19AD49E7AAF716C1F95E;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c
struct U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c
struct U3CU3Ec_t4D8185309F9B1907934895922AA541E0E2B66979;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityCursor_t91C9BF2FDFDF7DE443B045E25B3C1110BD56AF43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityDictationHandler_t11FEE47AFE526B4D2F8E91C0CFC430E47B76C03A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityEventSystem_t53E462EB5EACBDD1B155445FB7557C04D14E8CC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityFocusChangedHandler_t72FE5A113A51A35C36DA67789766F9CD4F7A69C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityFocusHandler_tD0C2AA219563F8BD3CE819D0510553BF041A90D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_1_t089B860A1441B2916090DC4791D82D024B0C038E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_1_t0A6A8EE9622546FFF67B365C595883EF2858496D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_1_t4ACD9C07E55327963BB0C857421B51704EA7CA85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_1_tDD630CA456B9637F03AAA163B2B2940B7776C69F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGestureHandler_t7B31870B1D549DCB19CAC6B518B0AB3A454180FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityHandJointHandler_t3B3D9548A79A9E2599D70D5B3DEC37A56DCACD82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityHandMeshHandler_t96F62F66F2A78C9A0CF1439C6717E8007F81FAB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_t14E75FB263DF33F3C857F51522F83F4E4F6638DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_tB2D657CE869C8683B11A9FA077E51609A1D6A95B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_tB96C9EB26311047478692CD4EA158B1862C1A45C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_tBDCA226328D966CBB4DB59D7769FA55EFE647367_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_1_tF04C7976A0DDAFAB436AB651A91AC34AC0B0BF88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputHandler_t473158012DB9CEDED34D3E67CDF460FEC832B9C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityPointerHandler_t72C39FEFB7745C2DDB4CFC4F2D241DEFE575C0D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityPointer_tC8C6CA2DB07D67431BAAB603F549294D0C3E2616_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySourcePoseHandler_tADF1DF2DE94864C6FA9E43F55A01DE42BE023C9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySourceStateHandler_t851C38B2BC0C1AF0BDBD3B985D15026F0C6FDB67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySpeechHandler_t4BE1C6AE73FCF96206DDC65F62AF13709A32565F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityTouchHandler_tE5FCC5A0B711B1356C8D026DD2EF62EFAFBCE844_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_t0E796648590ACE4F99DF53EE3B84DC78E0BC90AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0F6AC43D4D871BC09215158A773B76836B7F3026_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4D8185309F9B1907934895922AA541E0E2B66979_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t8751182FFB7410C8B81BCA7DE7E0706E992AABFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral033695E8FCCB2AD8ED3D6CA47B0D7673411B3701;
IL2CPP_EXTERN_C String_t* _stringLiteral193EAB9F1EC19468783C52A94D9B84DF6D5BEE4F;
IL2CPP_EXTERN_C String_t* _stringLiteral3F670F51C586102E4AD2E77FED417809FF46F3D8;
IL2CPP_EXTERN_C String_t* _stringLiteral8646EE7CB5D6509C0ECF1B9EA3BEB8B77A6CB742;
IL2CPP_EXTERN_C String_t* _stringLiteral8A4B7834144C35546E7F3AA5FB0F9239B88B8B6A;
IL2CPP_EXTERN_C String_t* _stringLiteral9CFDCFFDD9F8EAA25BCF8F12B4E2CF9CE83B9B29;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CEnsureInputSystemValidU3Ed__4_t424E31491A983DD9C3C7D47CE1F8AB8D229284CC_m49B82F3673C9EC419C693780276113BF027A606F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CEnsureInputSystemValidU3Ed__4_tCF34C36AA551AD9C2FEB35D21B884AC4356CD8CE_m0E9AD5E6BDD5E16BF62BA9E9AFBCE6F48C449C84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CRaiseSourceDetectedU3Ed__83_t3AB1C3A53168AD67F2F99E828066D344D79C7B5B_m389F0C6F9457148D28A1898D299BABD985AEF2AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t035FE53428BD664E75786F7B5DA5A565D39C3744_mBA89AFBE17E9186D1D1076D81D1B4F8CB300F6C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t87FC0C2ED9C76D28865B69B198B310238401E375_mA1493D95FE0134CDF8A431D667B48B57738A036C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__69_t2C38FD5FEB6E8495C49026132CE012E15CE70F35_mDB365E64058510072F725FB50DECCC912C309807_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m272B0D799E55D4AFEF7503463F62F0A6181E1B23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4C03F360649AEC870F575452D949D5AA7F5E524E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m740A93CA40F5086CBE6AAD1953511F29C0C79677_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1A1FFE750FA22BC282BB1627120FACD66DC06688_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisDictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111_m5A19C57392C80A20F40581BFC976CD55F8B7C884_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisFocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F_mA0CEDB25413DA6F1F22CBCE7562C74043E88256B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t4D2EA53F7605800166D3AA5A8A34EFF4C6CCB139_mFC9ADF3708EAAC27E6DFB51FC5B78B86B31CC9F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_t4EF18F529455F87A02DD28A49212B7B093A97CF1_mED1B4FBB47980E0B4B3D956EB44B334BE918E575_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_t72EB43FD8BF708F94C8860821D368A0E9B230155_m62A87FAEC646F374D4141B957C987FBBF26E24C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_t8BA709B500978D2FF6CBE02840D448EC4F1B96FF_m1E3E202BC14BE1ECF1091269C877D5BD62C32234_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_t9912FB5BCD3E745BE7F975C9F3E0EA1DCAC114DA_m84A289B8354064BDFE63E5D7F8ACCD1A3FBA9F7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_tA191CDE875C3A37876AF9EBEC1082E9A97791713_m3BD6F5316F05BE269929A602E4D601BB4D9730A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_tA8DA12BEACD164A612EE93A1868A0EF98A7193CA_m4BA25FFBEC9B7D5746EED774755CCC86853AF21A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_1_tF68721C6A55FBBB8C3B93B2EB342522FAD3F7716_m58A38EED48A64E53564CE960FC7E587AA59EDB44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B_mB609AEAF0D60B613C32BB4235A06C54B19F67889_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t0C3E52D1B6B037B26D3125432D5FC5A1632236D5_mEB5A92597134F8DE06AD8AE44FE17AC57793ECE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t424CC2521693730C3C44C26B3EB1E7CA4F3529EA_m62CD04716E20AF90C6519E22C41D7068039C0135_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tACD69D8464067CAB384CC33C478335A93920D0C2_mD4D3917CBBC369EA129D9A0BD13AFB95D19B6D51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tEEC6D7835C6D2171E6766178D4C5272FAE422494_mC92DDC0CD1DE7EBC7BE983B200F12104F8AF5963_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tFE8555246DDB23EE10ACB4694CD556E6CB2EA1EA_m794B7BC2DE09AE0B32C41FD3CBBF54DE7269BDAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSourceStateEventData_tF68358C62720A3DE79F698D981E3F0C7E6023F2F_m05F9622A822012A8FC1E8B14ACDD13CF099183B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisSpeechEventData_t5107F68604DE41246F6BCAAA3E0A436668499454_mA03D959893C9A5100B4FD4AC8765DA8D3E2A26C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mC46BD470B0652003AFBFB8B04AEF73D7C6DB159A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_mF53019A241FF3BABC04CBCA26C0E9CCF4C9D794B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_mF8D942B3C732E0B13F3DFF28BAD89A267A87F443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_IEnumerator_Reset_m6BC88D00366EC84F37A0C5735AABF2AB64D07AEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityObjectExtensions_IsNull_TisGazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764_mDB9EC825667B69C463D0AE6B1F4F7253381856BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t7B31870B1D549DCB19CAC6B518B0AB3A454180FB_m434186312034A181EFF425A69B16C31411FE20A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_mDECD9C5C329204B6BDD8823D339F9C9D9A0C1C23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_t473158012DB9CEDED34D3E67CDF460FEC832B9C6_m510EE68187412AC23FD57F109B90D5FAA40469C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityObjectExtensions_IsNull_TisIMixedRealitySpeechHandler_t4BE1C6AE73FCF96206DDC65F62AF13709A32565F_m2E617E072A7F7715BD1A1FF12DB6330839EB8072_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F;
struct RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct Dictionary_2_t99258040B667AD054EDE09515EFC6475271347D4  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t54FA8B74437CCE3C1881D6BA53327B5BF8251FEA* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t95D192504CE070F92C621E6D7F7CF6B8F3A8DE9E * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0CA0E0CBF565698EFAC83E4437DE7BD748259DB6 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t99258040B667AD054EDE09515EFC6475271347D4, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t99258040B667AD054EDE09515EFC6475271347D4, ___entries_1)); }
	inline EntryU5BU5D_t54FA8B74437CCE3C1881D6BA53327B5BF8251FEA* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t54FA8B74437CCE3C1881D6BA53327B5BF8251FEA** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t54FA8B74437CCE3C1881D6BA53327B5BF8251FEA* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t99258040B667AD054EDE09515EFC6475271347D4, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t99258040B667AD054EDE09515EFC6475271347D4, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t99258040B667AD054EDE09515EFC6475271347D4, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t99258040B667AD054EDE09515EFC6475271347D4, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t99258040B667AD054EDE09515EFC6475271347D4, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t99258040B667AD054EDE09515EFC6475271347D4, ___keys_7)); }
	inline KeyCollection_t95D192504CE070F92C621E6D7F7CF6B8F3A8DE9E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t95D192504CE070F92C621E6D7F7CF6B8F3A8DE9E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t95D192504CE070F92C621E6D7F7CF6B8F3A8DE9E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t99258040B667AD054EDE09515EFC6475271347D4, ___values_8)); }
	inline ValueCollection_t0CA0E0CBF565698EFAC83E4437DE7BD748259DB6 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0CA0E0CBF565698EFAC83E4437DE7BD748259DB6 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0CA0E0CBF565698EFAC83E4437DE7BD748259DB6 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t99258040B667AD054EDE09515EFC6475271347D4, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer
struct BaseRayStabilizer_tFC7BFA95792DF321D647D60B39131F943CF657D9  : public RuntimeObject
{
public:

public:
};


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A  : public RuntimeObject
{
public:
	// System.Exception Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::exception
	Exception_t * ___exception_0;
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::continuation
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_exception_0() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A, ___exception_0)); }
	inline Exception_t * get_exception_0() const { return ___exception_0; }
	inline Exception_t ** get_address_of_exception_0() { return &___exception_0; }
	inline void set_exception_0(Exception_t * value)
	{
		___exception_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exception_0), (void*)value);
	}

	inline static int32_t get_offset_of_continuation_1() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A, ___continuation_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_continuation_1() const { return ___continuation_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_continuation_1() { return &___continuation_1; }
	inline void set_continuation_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___continuation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsCompletedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A, ___U3CIsCompletedU3Ek__BackingField_2)); }
	inline bool get_U3CIsCompletedU3Ek__BackingField_2() const { return ___U3CIsCompletedU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsCompletedU3Ek__BackingField_2() { return &___U3CIsCompletedU3Ek__BackingField_2; }
	inline void set_U3CIsCompletedU3Ek__BackingField_2(bool value)
	{
		___U3CIsCompletedU3Ek__BackingField_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c
struct U3CU3Ec_t0F6AC43D4D871BC09215158A773B76836B7F3026  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t0F6AC43D4D871BC09215158A773B76836B7F3026_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::<>9
	U3CU3Ec_t0F6AC43D4D871BC09215158A773B76836B7F3026 * ___U3CU3E9_0;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::<>9__4_0
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___U3CU3E9__4_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0F6AC43D4D871BC09215158A773B76836B7F3026_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t0F6AC43D4D871BC09215158A773B76836B7F3026 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t0F6AC43D4D871BC09215158A773B76836B7F3026 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t0F6AC43D4D871BC09215158A773B76836B7F3026 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0F6AC43D4D871BC09215158A773B76836B7F3026_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c
struct U3CU3Ec_t8751182FFB7410C8B81BCA7DE7E0706E992AABFE  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t8751182FFB7410C8B81BCA7DE7E0706E992AABFE_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::<>9
	U3CU3Ec_t8751182FFB7410C8B81BCA7DE7E0706E992AABFE * ___U3CU3E9_0;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::<>9__4_0
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___U3CU3E9__4_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8751182FFB7410C8B81BCA7DE7E0706E992AABFE_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t8751182FFB7410C8B81BCA7DE7E0706E992AABFE * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t8751182FFB7410C8B81BCA7DE7E0706E992AABFE ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t8751182FFB7410C8B81BCA7DE7E0706E992AABFE * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8751182FFB7410C8B81BCA7DE7E0706E992AABFE_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c
struct U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<>9
	U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c
struct U3CU3Ec_t4D8185309F9B1907934895922AA541E0E2B66979  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t4D8185309F9B1907934895922AA541E0E2B66979_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::<>9
	U3CU3Ec_t4D8185309F9B1907934895922AA541E0E2B66979 * ___U3CU3E9_0;
	// System.Func`3<System.String,UnityEngine.Transform,System.String> Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::<>9__25_0
	Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD * ___U3CU3E9__25_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4D8185309F9B1907934895922AA541E0E2B66979_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t4D8185309F9B1907934895922AA541E0E2B66979 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t4D8185309F9B1907934895922AA541E0E2B66979 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t4D8185309F9B1907934895922AA541E0E2B66979 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4D8185309F9B1907934895922AA541E0E2B66979_StaticFields, ___U3CU3E9__25_0_1)); }
	inline Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD * get_U3CU3E9__25_0_1() const { return ___U3CU3E9__25_0_1; }
	inline Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD ** get_address_of_U3CU3E9__25_0_1() { return &___U3CU3E9__25_0_1; }
	inline void set_U3CU3E9__25_0_1(Func_3_t25039A52ED82957816F93C2D9CF335791DA6FCFD * value)
	{
		___U3CU3E9__25_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_0_1), (void*)value);
	}
};


// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState> UnityEngine.EventSystems.PointerInputModule/MouseState::m_TrackedButtons
	List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * ___m_TrackedButtons_0;

public:
	inline static int32_t get_offset_of_m_TrackedButtons_0() { return static_cast<int32_t>(offsetof(MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1, ___m_TrackedButtons_0)); }
	inline List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * get_m_TrackedButtons_0() const { return ___m_TrackedButtons_0; }
	inline List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E ** get_address_of_m_TrackedButtons_0() { return &___m_TrackedButtons_0; }
	inline void set_m_TrackedButtons_0(List_1_t75FFBEBE24171F12D0459DE4BA90E0FD3E22A60E * value)
	{
		___m_TrackedButtons_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedButtons_0), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct KeyValuePair_2_t2E7D57D6DE02C3C4616E9788456652661A076A00 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	PointerData_tFFB8BD6689DF7417692F19AD49E7AAF716C1F95E * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2E7D57D6DE02C3C4616E9788456652661A076A00, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2E7D57D6DE02C3C4616E9788456652661A076A00, ___value_1)); }
	inline PointerData_tFFB8BD6689DF7417692F19AD49E7AAF716C1F95E * get_value_1() const { return ___value_1; }
	inline PointerData_tFFB8BD6689DF7417692F19AD49E7AAF716C1F95E ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(PointerData_tFFB8BD6689DF7417692F19AD49E7AAF716C1F95E * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};

// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21, ___m_Predicate_0)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Predicate_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_task_2)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___dictionary_0)); }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___current_3)); }
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t99258040B667AD054EDE09515EFC6475271347D4 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2E7D57D6DE02C3C4616E9788456652661A076A00  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9, ___dictionary_0)); }
	inline Dictionary_2_t99258040B667AD054EDE09515EFC6475271347D4 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t99258040B667AD054EDE09515EFC6475271347D4 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t99258040B667AD054EDE09515EFC6475271347D4 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9, ___current_3)); }
	inline KeyValuePair_2_t2E7D57D6DE02C3C4616E9788456652661A076A00  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2E7D57D6DE02C3C4616E9788456652661A076A00 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2E7D57D6DE02C3C4616E9788456652661A076A00  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 
{
public:
	// T System.Nullable`1::value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___value_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_value_0() const { return ___value_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};

// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct AxisType_t36802435A1F99C9E306AA56A04A1C3E1BCAD7C37 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_t36802435A1F99C9E306AA56A04A1C3E1BCAD7C37, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Microsoft.MixedReality.Toolkit.Input.FocusEventData
struct FocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.FocusEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusEventData::<OldFocusedObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3COldFocusedObjectU3Ek__BackingField_3;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusEventData::<NewFocusedObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CNewFocusedObjectU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F, ___U3CPointerU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_2() const { return ___U3CPointerU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_2() { return &___U3CPointerU3Ek__BackingField_2; }
	inline void set_U3CPointerU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3COldFocusedObjectU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F, ___U3COldFocusedObjectU3Ek__BackingField_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3COldFocusedObjectU3Ek__BackingField_3() const { return ___U3COldFocusedObjectU3Ek__BackingField_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3COldFocusedObjectU3Ek__BackingField_3() { return &___U3COldFocusedObjectU3Ek__BackingField_3; }
	inline void set_U3COldFocusedObjectU3Ek__BackingField_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3COldFocusedObjectU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COldFocusedObjectU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNewFocusedObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F, ___U3CNewFocusedObjectU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CNewFocusedObjectU3Ek__BackingField_4() const { return ___U3CNewFocusedObjectU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CNewFocusedObjectU3Ek__BackingField_4() { return &___U3CNewFocusedObjectU3Ek__BackingField_4; }
	inline void set_U3CNewFocusedObjectU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CNewFocusedObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNewFocusedObjectU3Ek__BackingField_4), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct Handedness_t0ECB62FD234176C49A60FCECA0D4657F0E304698 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t0ECB62FD234176C49A60FCECA0D4657F0E304698, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSourceType
struct InputSourceType_t0C0578569185231091572E3FC18271614FB46B25 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSourceType_t0C0578569185231091572E3FC18271614FB46B25, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.LowLevel.MarkerFlags
struct MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8 
{
public:
	// System.UInt16 Unity.Profiling.LowLevel.MarkerFlags::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B, ___rotation_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::barycentricCoordinate
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___barycentricCoordinate_2;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::distance
	float ___distance_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::triangleIndex
	int32_t ___triangleIndex_4;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::textureCoord
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord_5;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::textureCoord2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord2_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_7;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::lightmapCoord
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lightmapCoord_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::raycastValid
	bool ___raycastValid_9;
	// UnityEngine.Collider Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collider_10;

public:
	inline static int32_t get_offset_of_point_0() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4, ___point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_point_0() const { return ___point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_point_0() { return &___point_0; }
	inline void set_point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___point_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4, ___normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_normal_1() const { return ___normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_barycentricCoordinate_2() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4, ___barycentricCoordinate_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_barycentricCoordinate_2() const { return ___barycentricCoordinate_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_barycentricCoordinate_2() { return &___barycentricCoordinate_2; }
	inline void set_barycentricCoordinate_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___barycentricCoordinate_2 = value;
	}

	inline static int32_t get_offset_of_distance_3() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4, ___distance_3)); }
	inline float get_distance_3() const { return ___distance_3; }
	inline float* get_address_of_distance_3() { return &___distance_3; }
	inline void set_distance_3(float value)
	{
		___distance_3 = value;
	}

	inline static int32_t get_offset_of_triangleIndex_4() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4, ___triangleIndex_4)); }
	inline int32_t get_triangleIndex_4() const { return ___triangleIndex_4; }
	inline int32_t* get_address_of_triangleIndex_4() { return &___triangleIndex_4; }
	inline void set_triangleIndex_4(int32_t value)
	{
		___triangleIndex_4 = value;
	}

	inline static int32_t get_offset_of_textureCoord_5() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4, ___textureCoord_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_textureCoord_5() const { return ___textureCoord_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_textureCoord_5() { return &___textureCoord_5; }
	inline void set_textureCoord_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___textureCoord_5 = value;
	}

	inline static int32_t get_offset_of_textureCoord2_6() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4, ___textureCoord2_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_textureCoord2_6() const { return ___textureCoord2_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_textureCoord2_6() { return &___textureCoord2_6; }
	inline void set_textureCoord2_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___textureCoord2_6 = value;
	}

	inline static int32_t get_offset_of_transform_7() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4, ___transform_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_transform_7() const { return ___transform_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_transform_7() { return &___transform_7; }
	inline void set_transform_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___transform_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transform_7), (void*)value);
	}

	inline static int32_t get_offset_of_lightmapCoord_8() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4, ___lightmapCoord_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_lightmapCoord_8() const { return ___lightmapCoord_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_lightmapCoord_8() { return &___lightmapCoord_8; }
	inline void set_lightmapCoord_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___lightmapCoord_8 = value;
	}

	inline static int32_t get_offset_of_raycastValid_9() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4, ___raycastValid_9)); }
	inline bool get_raycastValid_9() const { return ___raycastValid_9; }
	inline bool* get_address_of_raycastValid_9() { return &___raycastValid_9; }
	inline void set_raycastValid_9(bool value)
	{
		___raycastValid_9 = value;
	}

	inline static int32_t get_offset_of_collider_10() { return static_cast<int32_t>(offsetof(MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4, ___collider_10)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_collider_10() const { return ___collider_10; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_collider_10() { return &___collider_10; }
	inline void set_collider_10(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___collider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collider_10), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___barycentricCoordinate_2;
	float ___distance_3;
	int32_t ___triangleIndex_4;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord_5;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord2_6;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_7;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lightmapCoord_8;
	int32_t ___raycastValid_9;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collider_10;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___barycentricCoordinate_2;
	float ___distance_3;
	int32_t ___triangleIndex_4;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord_5;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureCoord2_6;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_7;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lightmapCoord_8;
	int32_t ___raycastValid_9;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collider_10;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Microsoft.MixedReality.Toolkit.Input.PointerBehavior
struct PointerBehavior_t85BD6BA0BD6F6DECDE9F5CEEB6986573D5D9DAE2 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.PointerBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PointerBehavior_t85BD6BA0BD6F6DECDE9F5CEEB6986573D5D9DAE2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Physics.RayStep
struct RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Origin>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3COriginU3Ek__BackingField_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Terminus>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CTerminusU3Ek__BackingField_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Direction>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CDirectionU3Ek__BackingField_5;
	// System.Single Microsoft.MixedReality.Toolkit.Physics.RayStep::<Length>k__BackingField
	float ___U3CLengthU3Ek__BackingField_6;
	// System.Single Microsoft.MixedReality.Toolkit.Physics.RayStep::epsilon
	float ___epsilon_7;

public:
	inline static int32_t get_offset_of_U3COriginU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C, ___U3COriginU3Ek__BackingField_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3COriginU3Ek__BackingField_3() const { return ___U3COriginU3Ek__BackingField_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3COriginU3Ek__BackingField_3() { return &___U3COriginU3Ek__BackingField_3; }
	inline void set_U3COriginU3Ek__BackingField_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3COriginU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTerminusU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C, ___U3CTerminusU3Ek__BackingField_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CTerminusU3Ek__BackingField_4() const { return ___U3CTerminusU3Ek__BackingField_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CTerminusU3Ek__BackingField_4() { return &___U3CTerminusU3Ek__BackingField_4; }
	inline void set_U3CTerminusU3Ek__BackingField_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CTerminusU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CDirectionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C, ___U3CDirectionU3Ek__BackingField_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CDirectionU3Ek__BackingField_5() const { return ___U3CDirectionU3Ek__BackingField_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CDirectionU3Ek__BackingField_5() { return &___U3CDirectionU3Ek__BackingField_5; }
	inline void set_U3CDirectionU3Ek__BackingField_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CDirectionU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C, ___U3CLengthU3Ek__BackingField_6)); }
	inline float get_U3CLengthU3Ek__BackingField_6() const { return ___U3CLengthU3Ek__BackingField_6; }
	inline float* get_address_of_U3CLengthU3Ek__BackingField_6() { return &___U3CLengthU3Ek__BackingField_6; }
	inline void set_U3CLengthU3Ek__BackingField_6(float value)
	{
		___U3CLengthU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_epsilon_7() { return static_cast<int32_t>(offsetof(RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C, ___epsilon_7)); }
	inline float get_epsilon_7() const { return ___epsilon_7; }
	inline float* get_address_of_epsilon_7() { return &___epsilon_7; }
	inline void set_epsilon_7(float value)
	{
		___epsilon_7 = value;
	}
};

struct RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C_StaticFields
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::dist
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dist_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::dir
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dir_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::pos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos_2;

public:
	inline static int32_t get_offset_of_dist_0() { return static_cast<int32_t>(offsetof(RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C_StaticFields, ___dist_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_dist_0() const { return ___dist_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_dist_0() { return &___dist_0; }
	inline void set_dist_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___dist_0 = value;
	}

	inline static int32_t get_offset_of_dir_1() { return static_cast<int32_t>(offsetof(RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C_StaticFields, ___dir_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_dir_1() const { return ___dir_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_dir_1() { return &___dir_1; }
	inline void set_dir_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___dir_1 = value;
	}

	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C_StaticFields, ___pos_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_pos_2() const { return ___pos_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___pos_2 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel
struct RecognitionConfidenceLevel_t3BAAD42DF3975ECF47295CC02D8DCEDA4E9C3B2C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RecognitionConfidenceLevel_t3BAAD42DF3975ECF47295CC02D8DCEDA4E9C3B2C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType
struct SceneQueryType_t39F84A08B44835750CA676DCAAC388FE7190069D 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Physics.SceneQueryType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneQueryType_t39F84A08B44835750CA676DCAAC388FE7190069D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// Microsoft.MixedReality.Toolkit.TrackingState
struct TrackingState_t46E14B9AC3907F6FD3C933D4962D05B47BE9CCF6 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_t46E14B9AC3907F6FD3C933D4962D05B47BE9CCF6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.GazePointerVisibilityStateMachine/GazePointerState
struct GazePointerState_tEEC718BAD16BAF9E7DAFC32CA4157D49D92A3535 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.GazePointerVisibilityStateMachine/GazePointerState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GazePointerState_tEEC718BAD16BAF9E7DAFC32CA4157D49D92A3535, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/FramePressState
struct FramePressState_t4BB461B7704D7F72519B36A0C8B3370AB302E7A7 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/FramePressState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FramePressState_t4BB461B7704D7F72519B36A0C8B3370AB302E7A7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_com
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};

// Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource
struct BaseGenericInputSource_t983CE64ED607AD7D615AE906B29D78B89BC4B6F9  : public RuntimeObject
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource::<Pointers>k__BackingField
	IMixedRealityPointerU5BU5D_tD0842E695B3632D45419367277A08EEA1B2E22F3* ___U3CPointersU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource::<SourceType>k__BackingField
	int32_t ___U3CSourceTypeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseGenericInputSource_t983CE64ED607AD7D615AE906B29D78B89BC4B6F9, ___U3CSourceIdU3Ek__BackingField_0)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_0() const { return ___U3CSourceIdU3Ek__BackingField_0; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_0() { return &___U3CSourceIdU3Ek__BackingField_0; }
	inline void set_U3CSourceIdU3Ek__BackingField_0(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseGenericInputSource_t983CE64ED607AD7D615AE906B29D78B89BC4B6F9, ___U3CSourceNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_1() const { return ___U3CSourceNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_1() { return &___U3CSourceNameU3Ek__BackingField_1; }
	inline void set_U3CSourceNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPointersU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseGenericInputSource_t983CE64ED607AD7D615AE906B29D78B89BC4B6F9, ___U3CPointersU3Ek__BackingField_2)); }
	inline IMixedRealityPointerU5BU5D_tD0842E695B3632D45419367277A08EEA1B2E22F3* get_U3CPointersU3Ek__BackingField_2() const { return ___U3CPointersU3Ek__BackingField_2; }
	inline IMixedRealityPointerU5BU5D_tD0842E695B3632D45419367277A08EEA1B2E22F3** get_address_of_U3CPointersU3Ek__BackingField_2() { return &___U3CPointersU3Ek__BackingField_2; }
	inline void set_U3CPointersU3Ek__BackingField_2(IMixedRealityPointerU5BU5D_tD0842E695B3632D45419367277A08EEA1B2E22F3* value)
	{
		___U3CPointersU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointersU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseGenericInputSource_t983CE64ED607AD7D615AE906B29D78B89BC4B6F9, ___U3CSourceTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CSourceTypeU3Ek__BackingField_3() const { return ___U3CSourceTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CSourceTypeU3Ek__BackingField_3() { return &___U3CSourceTypeU3Ek__BackingField_3; }
	inline void set_U3CSourceTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CSourceTypeU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F 
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<RayDistance>k__BackingField
	float ___U3CRayDistanceU3Ek__BackingField_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Point>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointU3Ek__BackingField_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Normal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalU3Ek__BackingField_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Object>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CObjectU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<LastRaycastHit>k__BackingField
	MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4  ___U3CLastRaycastHitU3Ek__BackingField_4;
	// UnityEngine.EventSystems.RaycastResult Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<LastGraphicsRaycastResult>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<PointLocalSpace>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointLocalSpaceU3Ek__BackingField_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<NormalLocalSpace>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalLocalSpaceU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CRayDistanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F, ___U3CRayDistanceU3Ek__BackingField_0)); }
	inline float get_U3CRayDistanceU3Ek__BackingField_0() const { return ___U3CRayDistanceU3Ek__BackingField_0; }
	inline float* get_address_of_U3CRayDistanceU3Ek__BackingField_0() { return &___U3CRayDistanceU3Ek__BackingField_0; }
	inline void set_U3CRayDistanceU3Ek__BackingField_0(float value)
	{
		___U3CRayDistanceU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CPointU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F, ___U3CPointU3Ek__BackingField_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CPointU3Ek__BackingField_1() const { return ___U3CPointU3Ek__BackingField_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CPointU3Ek__BackingField_1() { return &___U3CPointU3Ek__BackingField_1; }
	inline void set_U3CPointU3Ek__BackingField_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CPointU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CNormalU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F, ___U3CNormalU3Ek__BackingField_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CNormalU3Ek__BackingField_2() const { return ___U3CNormalU3Ek__BackingField_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CNormalU3Ek__BackingField_2() { return &___U3CNormalU3Ek__BackingField_2; }
	inline void set_U3CNormalU3Ek__BackingField_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CNormalU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CObjectU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F, ___U3CObjectU3Ek__BackingField_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CObjectU3Ek__BackingField_3() const { return ___U3CObjectU3Ek__BackingField_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CObjectU3Ek__BackingField_3() { return &___U3CObjectU3Ek__BackingField_3; }
	inline void set_U3CObjectU3Ek__BackingField_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CObjectU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CObjectU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLastRaycastHitU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F, ___U3CLastRaycastHitU3Ek__BackingField_4)); }
	inline MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4  get_U3CLastRaycastHitU3Ek__BackingField_4() const { return ___U3CLastRaycastHitU3Ek__BackingField_4; }
	inline MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4 * get_address_of_U3CLastRaycastHitU3Ek__BackingField_4() { return &___U3CLastRaycastHitU3Ek__BackingField_4; }
	inline void set_U3CLastRaycastHitU3Ek__BackingField_4(MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4  value)
	{
		___U3CLastRaycastHitU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CLastRaycastHitU3Ek__BackingField_4))->___transform_7), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CLastRaycastHitU3Ek__BackingField_4))->___collider_10), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CLastGraphicsRaycastResultU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F, ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CLastGraphicsRaycastResultU3Ek__BackingField_5() const { return ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CLastGraphicsRaycastResultU3Ek__BackingField_5() { return &___U3CLastGraphicsRaycastResultU3Ek__BackingField_5; }
	inline void set_U3CLastGraphicsRaycastResultU3Ek__BackingField_5(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CLastGraphicsRaycastResultU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CLastGraphicsRaycastResultU3Ek__BackingField_5))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CLastGraphicsRaycastResultU3Ek__BackingField_5))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CPointLocalSpaceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F, ___U3CPointLocalSpaceU3Ek__BackingField_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CPointLocalSpaceU3Ek__BackingField_6() const { return ___U3CPointLocalSpaceU3Ek__BackingField_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CPointLocalSpaceU3Ek__BackingField_6() { return &___U3CPointLocalSpaceU3Ek__BackingField_6; }
	inline void set_U3CPointLocalSpaceU3Ek__BackingField_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CPointLocalSpaceU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CNormalLocalSpaceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F, ___U3CNormalLocalSpaceU3Ek__BackingField_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CNormalLocalSpaceU3Ek__BackingField_7() const { return ___U3CNormalLocalSpaceU3Ek__BackingField_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CNormalLocalSpaceU3Ek__BackingField_7() { return &___U3CNormalLocalSpaceU3Ek__BackingField_7; }
	inline void set_U3CNormalLocalSpaceU3Ek__BackingField_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CNormalLocalSpaceU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F_marshaled_pinvoke
{
	float ___U3CRayDistanceU3Ek__BackingField_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointU3Ek__BackingField_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalU3Ek__BackingField_2;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CObjectU3Ek__BackingField_3;
	MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4_marshaled_pinvoke ___U3CLastRaycastHitU3Ek__BackingField_4;
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointLocalSpaceU3Ek__BackingField_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalLocalSpaceU3Ek__BackingField_7;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F_marshaled_com
{
	float ___U3CRayDistanceU3Ek__BackingField_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointU3Ek__BackingField_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalU3Ek__BackingField_2;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CObjectU3Ek__BackingField_3;
	MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4_marshaled_com ___U3CLastRaycastHitU3Ek__BackingField_4;
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CPointLocalSpaceU3Ek__BackingField_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalLocalSpaceU3Ek__BackingField_7;
};

// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.GenericPointer
struct GenericPointer_tFF914BF1E1E3CF91EBEFBC364A586C28DACBBCE7  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.GenericPointer::controller
	RuntimeObject* ___controller_0;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.GenericPointer::<PointerId>k__BackingField
	uint32_t ___U3CPointerIdU3Ek__BackingField_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.GenericPointer::<PointerName>k__BackingField
	String_t* ___U3CPointerNameU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.GenericPointer::inputSourceParent
	RuntimeObject* ___inputSourceParent_3;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor Microsoft.MixedReality.Toolkit.Input.GenericPointer::<BaseCursor>k__BackingField
	RuntimeObject* ___U3CBaseCursorU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Input.ICursorModifier Microsoft.MixedReality.Toolkit.Input.GenericPointer::<CursorModifier>k__BackingField
	RuntimeObject* ___U3CCursorModifierU3Ek__BackingField_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GenericPointer::isInteractionEnabled
	bool ___isInteractionEnabled_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GenericPointer::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GenericPointer::<IsFocusLocked>k__BackingField
	bool ___U3CIsFocusLockedU3Ek__BackingField_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GenericPointer::<IsTargetPositionLockedOnFocusLock>k__BackingField
	bool ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GenericPointer::<PointerExtent>k__BackingField
	float ___U3CPointerExtentU3Ek__BackingField_10;
	// Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.GenericPointer::<Rays>k__BackingField
	RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA* ___U3CRaysU3Ek__BackingField_11;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Input.GenericPointer::<PrioritizedLayerMasksOverride>k__BackingField
	LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler Microsoft.MixedReality.Toolkit.Input.GenericPointer::<FocusTarget>k__BackingField
	RuntimeObject* ___U3CFocusTargetU3Ek__BackingField_13;
	// Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.GenericPointer::<Result>k__BackingField
	RuntimeObject* ___U3CResultU3Ek__BackingField_14;
	// Microsoft.MixedReality.Toolkit.Physics.IBaseRayStabilizer Microsoft.MixedReality.Toolkit.Input.GenericPointer::<RayStabilizer>k__BackingField
	RuntimeObject* ___U3CRayStabilizerU3Ek__BackingField_15;
	// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Input.GenericPointer::<SceneQueryType>k__BackingField
	int32_t ___U3CSceneQueryTypeU3Ek__BackingField_16;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GenericPointer::<SphereCastRadius>k__BackingField
	float ___U3CSphereCastRadiusU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_controller_0() { return static_cast<int32_t>(offsetof(GenericPointer_tFF914BF1E1E3CF91EBEFBC364A586C28DACBBCE7, ___controller_0)); }
	inline RuntimeObject* get_controller_0() const { return ___controller_0; }
	inline RuntimeObject** get_address_of_controller_0() { return &___controller_0; }
	inline void set_controller_0(RuntimeObject* value)
	{
		___controller_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPointerIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GenericPointer_tFF914BF1E1E3CF91EBEFBC364A586C28DACBBCE7, ___U3CPointerIdU3Ek__BackingField_1)); }
	inline uint32_t get_U3CPointerIdU3Ek__BackingField_1() const { return ___U3CPointerIdU3Ek__BackingField_1; }
	inline uint32_t* get_address_of_U3CPointerIdU3Ek__BackingField_1() { return &___U3CPointerIdU3Ek__BackingField_1; }
	inline void set_U3CPointerIdU3Ek__BackingField_1(uint32_t value)
	{
		___U3CPointerIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPointerNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GenericPointer_tFF914BF1E1E3CF91EBEFBC364A586C28DACBBCE7, ___U3CPointerNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CPointerNameU3Ek__BackingField_2() const { return ___U3CPointerNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CPointerNameU3Ek__BackingField_2() { return &___U3CPointerNameU3Ek__BackingField_2; }
	inline void set_U3CPointerNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CPointerNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerNameU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_inputSourceParent_3() { return static_cast<int32_t>(offsetof(GenericPointer_tFF914BF1E1E3CF91EBEFBC364A586C28DACBBCE7, ___inputSourceParent_3)); }
	inline RuntimeObject* get_inputSourceParent_3() const { return ___inputSourceParent_3; }
	inline RuntimeObject** get_address_of_inputSourceParent_3() { return &___inputSourceParent_3; }
	inline void set_inputSourceParent_3(RuntimeObject* value)
	{
		___inputSourceParent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSourceParent_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBaseCursorU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GenericPointer_tFF914BF1E1E3CF91EBEFBC364A586C28DACBBCE7, ___U3CBaseCursorU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CBaseCursorU3Ek__BackingField_4() const { return ___U3CBaseCursorU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CBaseCursorU3Ek__BackingField_4() { return &___U3CBaseCursorU3Ek__BackingField_4; }
	inline void set_U3CBaseCursorU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CBaseCursorU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBaseCursorU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCursorModifierU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GenericPointer_tFF914BF1E1E3CF91EBEFBC364A586C28DACBBCE7, ___U3CCursorModifierU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CCursorModifierU3Ek__BackingField_5() const { return ___U3CCursorModifierU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CCursorModifierU3Ek__BackingField_5() { return &___U3CCursorModifierU3Ek__BackingField_5; }
	inline void set_U3CCursorModifierU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CCursorModifierU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCursorModifierU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_isInteractionEnabled_6() { return static_cast<int32_t>(offsetof(GenericPointer_tFF914BF1E1E3CF91EBEFBC364A586C28DACBBCE7, ___isInteractionEnabled_6)); }
	inline bool get_isInteractionEnabled_6() const { return ___isInteractionEnabled_6; }
	inline bool* get_address_of_isInteractionEnabled_6() { return &___isInteractionEnabled_6; }
	inline void set_isInteractionEnabled_6(bool value)
	{
		___isInteractionEnabled_6 = value;
	}

	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(GenericPointer_tFF914BF1E1E3CF91EBEFBC364A586C28DACBBCE7, ___U3CIsActiveU3Ek__BackingField_7)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_7() const { return ___U3CIsActiveU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_7() { return &___U3CIsActiveU3Ek__BackingField_7; }
	inline void set_U3CIsActiveU3Ek__BackingField_7(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsFocusLockedU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(GenericPointer_tFF914BF1E1E3CF91EBEFBC364A586C28DACBBCE7, ___U3CIsFocusLockedU3Ek__BackingField_8)); }
	inline bool get_U3CIsFocusLockedU3Ek__BackingField_8() const { return ___U3CIsFocusLockedU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsFocusLockedU3Ek__BackingField_8() { return &___U3CIsFocusLockedU3Ek__BackingField_8; }
	inline void set_U3CIsFocusLockedU3Ek__BackingField_8(bool value)
	{
		___U3CIsFocusLockedU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GenericPointer_tFF914BF1E1E3CF91EBEFBC364A586C28DACBBCE7, ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9)); }
	inline bool get_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9() const { return ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9() { return &___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9; }
	inline void set_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9(bool value)
	{
		___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CPointerExtentU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(GenericPointer_tFF914BF1E1E3CF91EBEFBC364A586C28DACBBCE7, ___U3CPointerExtentU3Ek__BackingField_10)); }
	inline float get_U3CPointerExtentU3Ek__BackingField_10() const { return ___U3CPointerExtentU3Ek__BackingField_10; }
	inline float* get_address_of_U3CPointerExtentU3Ek__BackingField_10() { return &___U3CPointerExtentU3Ek__BackingField_10; }
	inline void set_U3CPointerExtentU3Ek__BackingField_10(float value)
	{
		___U3CPointerExtentU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CRaysU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(GenericPointer_tFF914BF1E1E3CF91EBEFBC364A586C28DACBBCE7, ___U3CRaysU3Ek__BackingField_11)); }
	inline RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA* get_U3CRaysU3Ek__BackingField_11() const { return ___U3CRaysU3Ek__BackingField_11; }
	inline RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA** get_address_of_U3CRaysU3Ek__BackingField_11() { return &___U3CRaysU3Ek__BackingField_11; }
	inline void set_U3CRaysU3Ek__BackingField_11(RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA* value)
	{
		___U3CRaysU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRaysU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(GenericPointer_tFF914BF1E1E3CF91EBEFBC364A586C28DACBBCE7, ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12)); }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* get_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12() const { return ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12; }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F** get_address_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12() { return &___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12; }
	inline void set_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12(LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* value)
	{
		___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFocusTargetU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(GenericPointer_tFF914BF1E1E3CF91EBEFBC364A586C28DACBBCE7, ___U3CFocusTargetU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CFocusTargetU3Ek__BackingField_13() const { return ___U3CFocusTargetU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CFocusTargetU3Ek__BackingField_13() { return &___U3CFocusTargetU3Ek__BackingField_13; }
	inline void set_U3CFocusTargetU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CFocusTargetU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFocusTargetU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(GenericPointer_tFF914BF1E1E3CF91EBEFBC364A586C28DACBBCE7, ___U3CResultU3Ek__BackingField_14)); }
	inline RuntimeObject* get_U3CResultU3Ek__BackingField_14() const { return ___U3CResultU3Ek__BackingField_14; }
	inline RuntimeObject** get_address_of_U3CResultU3Ek__BackingField_14() { return &___U3CResultU3Ek__BackingField_14; }
	inline void set_U3CResultU3Ek__BackingField_14(RuntimeObject* value)
	{
		___U3CResultU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRayStabilizerU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(GenericPointer_tFF914BF1E1E3CF91EBEFBC364A586C28DACBBCE7, ___U3CRayStabilizerU3Ek__BackingField_15)); }
	inline RuntimeObject* get_U3CRayStabilizerU3Ek__BackingField_15() const { return ___U3CRayStabilizerU3Ek__BackingField_15; }
	inline RuntimeObject** get_address_of_U3CRayStabilizerU3Ek__BackingField_15() { return &___U3CRayStabilizerU3Ek__BackingField_15; }
	inline void set_U3CRayStabilizerU3Ek__BackingField_15(RuntimeObject* value)
	{
		___U3CRayStabilizerU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRayStabilizerU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSceneQueryTypeU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(GenericPointer_tFF914BF1E1E3CF91EBEFBC364A586C28DACBBCE7, ___U3CSceneQueryTypeU3Ek__BackingField_16)); }
	inline int32_t get_U3CSceneQueryTypeU3Ek__BackingField_16() const { return ___U3CSceneQueryTypeU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CSceneQueryTypeU3Ek__BackingField_16() { return &___U3CSceneQueryTypeU3Ek__BackingField_16; }
	inline void set_U3CSceneQueryTypeU3Ek__BackingField_16(int32_t value)
	{
		___U3CSceneQueryTypeU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CSphereCastRadiusU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(GenericPointer_tFF914BF1E1E3CF91EBEFBC364A586C28DACBBCE7, ___U3CSphereCastRadiusU3Ek__BackingField_17)); }
	inline float get_U3CSphereCastRadiusU3Ek__BackingField_17() const { return ___U3CSphereCastRadiusU3Ek__BackingField_17; }
	inline float* get_address_of_U3CSphereCastRadiusU3Ek__BackingField_17() { return &___U3CSphereCastRadiusU3Ek__BackingField_17; }
	inline void set_U3CSphereCastRadiusU3Ek__BackingField_17(float value)
	{
		___U3CSphereCastRadiusU3Ek__BackingField_17 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult
struct PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::raycastHit
	MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4  ___raycastHit_0;
	// UnityEngine.EventSystems.RaycastResult Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::graphicsRaycastResult
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___graphicsRaycastResult_1;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::hitObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hitObject_2;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::hitPointOnObject
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitPointOnObject_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::hitNormalOnObject
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitNormalOnObject_4;
	// Microsoft.MixedReality.Toolkit.Physics.RayStep Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::ray
	RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C  ___ray_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::rayStepIndex
	int32_t ___rayStepIndex_6;
	// System.Single Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::rayDistance
	float ___rayDistance_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::isSet
	bool ___isSet_8;

public:
	inline static int32_t get_offset_of_raycastHit_0() { return static_cast<int32_t>(offsetof(PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD, ___raycastHit_0)); }
	inline MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4  get_raycastHit_0() const { return ___raycastHit_0; }
	inline MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4 * get_address_of_raycastHit_0() { return &___raycastHit_0; }
	inline void set_raycastHit_0(MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4  value)
	{
		___raycastHit_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___raycastHit_0))->___transform_7), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___raycastHit_0))->___collider_10), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_graphicsRaycastResult_1() { return static_cast<int32_t>(offsetof(PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD, ___graphicsRaycastResult_1)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_graphicsRaycastResult_1() const { return ___graphicsRaycastResult_1; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_graphicsRaycastResult_1() { return &___graphicsRaycastResult_1; }
	inline void set_graphicsRaycastResult_1(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___graphicsRaycastResult_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___graphicsRaycastResult_1))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___graphicsRaycastResult_1))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hitObject_2() { return static_cast<int32_t>(offsetof(PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD, ___hitObject_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hitObject_2() const { return ___hitObject_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hitObject_2() { return &___hitObject_2; }
	inline void set_hitObject_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hitObject_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitObject_2), (void*)value);
	}

	inline static int32_t get_offset_of_hitPointOnObject_3() { return static_cast<int32_t>(offsetof(PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD, ___hitPointOnObject_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_hitPointOnObject_3() const { return ___hitPointOnObject_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_hitPointOnObject_3() { return &___hitPointOnObject_3; }
	inline void set_hitPointOnObject_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___hitPointOnObject_3 = value;
	}

	inline static int32_t get_offset_of_hitNormalOnObject_4() { return static_cast<int32_t>(offsetof(PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD, ___hitNormalOnObject_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_hitNormalOnObject_4() const { return ___hitNormalOnObject_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_hitNormalOnObject_4() { return &___hitNormalOnObject_4; }
	inline void set_hitNormalOnObject_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___hitNormalOnObject_4 = value;
	}

	inline static int32_t get_offset_of_ray_5() { return static_cast<int32_t>(offsetof(PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD, ___ray_5)); }
	inline RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C  get_ray_5() const { return ___ray_5; }
	inline RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C * get_address_of_ray_5() { return &___ray_5; }
	inline void set_ray_5(RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C  value)
	{
		___ray_5 = value;
	}

	inline static int32_t get_offset_of_rayStepIndex_6() { return static_cast<int32_t>(offsetof(PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD, ___rayStepIndex_6)); }
	inline int32_t get_rayStepIndex_6() const { return ___rayStepIndex_6; }
	inline int32_t* get_address_of_rayStepIndex_6() { return &___rayStepIndex_6; }
	inline void set_rayStepIndex_6(int32_t value)
	{
		___rayStepIndex_6 = value;
	}

	inline static int32_t get_offset_of_rayDistance_7() { return static_cast<int32_t>(offsetof(PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD, ___rayDistance_7)); }
	inline float get_rayDistance_7() const { return ___rayDistance_7; }
	inline float* get_address_of_rayDistance_7() { return &___rayDistance_7; }
	inline void set_rayDistance_7(float value)
	{
		___rayDistance_7 = value;
	}

	inline static int32_t get_offset_of_isSet_8() { return static_cast<int32_t>(offsetof(PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD, ___isSet_8)); }
	inline bool get_isSet_8() const { return ___isSet_8; }
	inline bool* get_address_of_isSet_8() { return &___isSet_8; }
	inline void set_isSet_8(bool value)
	{
		___isSet_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences
struct PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::<InputSourceType>k__BackingField
	int32_t ___U3CInputSourceTypeU3Ek__BackingField_0;
	// System.Type Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::<PointerType>k__BackingField
	Type_t * ___U3CPointerTypeU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.Input.PointerBehavior Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::<Left>k__BackingField
	int32_t ___U3CLeftU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.PointerBehavior Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::<Right>k__BackingField
	int32_t ___U3CRightU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.PointerBehavior Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::<Other>k__BackingField
	int32_t ___U3COtherU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInputSourceTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF, ___U3CInputSourceTypeU3Ek__BackingField_0)); }
	inline int32_t get_U3CInputSourceTypeU3Ek__BackingField_0() const { return ___U3CInputSourceTypeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CInputSourceTypeU3Ek__BackingField_0() { return &___U3CInputSourceTypeU3Ek__BackingField_0; }
	inline void set_U3CInputSourceTypeU3Ek__BackingField_0(int32_t value)
	{
		___U3CInputSourceTypeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CPointerTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF, ___U3CPointerTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CPointerTypeU3Ek__BackingField_1() const { return ___U3CPointerTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CPointerTypeU3Ek__BackingField_1() { return &___U3CPointerTypeU3Ek__BackingField_1; }
	inline void set_U3CPointerTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CPointerTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLeftU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF, ___U3CLeftU3Ek__BackingField_2)); }
	inline int32_t get_U3CLeftU3Ek__BackingField_2() const { return ___U3CLeftU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CLeftU3Ek__BackingField_2() { return &___U3CLeftU3Ek__BackingField_2; }
	inline void set_U3CLeftU3Ek__BackingField_2(int32_t value)
	{
		___U3CLeftU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CRightU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF, ___U3CRightU3Ek__BackingField_3)); }
	inline int32_t get_U3CRightU3Ek__BackingField_3() const { return ___U3CRightU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CRightU3Ek__BackingField_3() { return &___U3CRightU3Ek__BackingField_3; }
	inline void set_U3CRightU3Ek__BackingField_3(int32_t value)
	{
		___U3CRightU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3COtherU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF, ___U3COtherU3Ek__BackingField_4)); }
	inline int32_t get_U3COtherU3Ek__BackingField_4() const { return ___U3COtherU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3COtherU3Ek__BackingField_4() { return &___U3COtherU3Ek__BackingField_4; }
	inline void set_U3COtherU3Ek__BackingField_4(int32_t value)
	{
		___U3COtherU3Ek__BackingField_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__83
struct U3CRaiseSourceDetectedU3Ed__83_t3AB1C3A53168AD67F2F99E828066D344D79C7B5B 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__83::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__83::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Input.GazeProvider Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__83::<>4__this
	GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * ___U3CU3E4__this_2;
	// Unity.Profiling.ProfilerMarker/AutoScope Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__83::<>7__wrap1
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ___U3CU3E7__wrap1_3;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__83::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRaiseSourceDetectedU3Ed__83_t3AB1C3A53168AD67F2F99E828066D344D79C7B5B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CRaiseSourceDetectedU3Ed__83_t3AB1C3A53168AD67F2F99E828066D344D79C7B5B, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRaiseSourceDetectedU3Ed__83_t3AB1C3A53168AD67F2F99E828066D344D79C7B5B, ___U3CU3E4__this_2)); }
	inline GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CRaiseSourceDetectedU3Ed__83_t3AB1C3A53168AD67F2F99E828066D344D79C7B5B, ___U3CU3E7__wrap1_3)); }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  value)
	{
		___U3CU3E7__wrap1_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CRaiseSourceDetectedU3Ed__83_t3AB1C3A53168AD67F2F99E828066D344D79C7B5B, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__69
struct U3CStartU3Ed__69_t2C38FD5FEB6E8495C49026132CE012E15CE70F35 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__69::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__69::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Input.GazeProvider Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__69::<>4__this
	GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__69::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__69_t2C38FD5FEB6E8495C49026132CE012E15CE70F35, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__69_t2C38FD5FEB6E8495C49026132CE012E15CE70F35, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__69_t2C38FD5FEB6E8495C49026132CE012E15CE70F35, ___U3CU3E4__this_2)); }
	inline GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__69_t2C38FD5FEB6E8495C49026132CE012E15CE70F35, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2
struct U3CStartU3Ed__2_t87FC0C2ED9C76D28865B69B198B310238401E375 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::<>4__this
	InputSystemGlobalHandlerListener_t6D199696B69A68F0DB57E685C5A0D3656F417833 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t87FC0C2ED9C76D28865B69B198B310238401E375, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t87FC0C2ED9C76D28865B69B198B310238401E375, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t87FC0C2ED9C76D28865B69B198B310238401E375, ___U3CU3E4__this_2)); }
	inline InputSystemGlobalHandlerListener_t6D199696B69A68F0DB57E685C5A0D3656F417833 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline InputSystemGlobalHandlerListener_t6D199696B69A68F0DB57E685C5A0D3656F417833 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(InputSystemGlobalHandlerListener_t6D199696B69A68F0DB57E685C5A0D3656F417833 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t87FC0C2ED9C76D28865B69B198B310238401E375, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2
struct U3CStartU3Ed__2_t035FE53428BD664E75786F7B5DA5A565D39C3744 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::<>4__this
	InputSystemGlobalListener_t35C2E6176D79EADF5B304B877FE7559F42B70EF9 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t035FE53428BD664E75786F7B5DA5A565D39C3744, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t035FE53428BD664E75786F7B5DA5A565D39C3744, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t035FE53428BD664E75786F7B5DA5A565D39C3744, ___U3CU3E4__this_2)); }
	inline InputSystemGlobalListener_t35C2E6176D79EADF5B304B877FE7559F42B70EF9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline InputSystemGlobalListener_t35C2E6176D79EADF5B304B877FE7559F42B70EF9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(InputSystemGlobalListener_t35C2E6176D79EADF5B304B877FE7559F42B70EF9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t035FE53428BD664E75786F7B5DA5A565D39C3744, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16
struct U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>4__this
	MixedRealityInputModule_t76F66FFFC2F805CEB169ABB00F69053EA20B6E99 * ___U3CU3E4__this_3;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>7__wrap1
	Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9  ___U3CU3E7__wrap1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A, ___U3CU3E2__current_1)); }
	inline RuntimeObject* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A, ___U3CU3E4__this_3)); }
	inline MixedRealityInputModule_t76F66FFFC2F805CEB169ABB00F69053EA20B6E99 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline MixedRealityInputModule_t76F66FFFC2F805CEB169ABB00F69053EA20B6E99 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(MixedRealityInputModule_t76F66FFFC2F805CEB169ABB00F69053EA20B6E99 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A, ___U3CU3E7__wrap1_4)); }
	inline Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9 * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9  value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_4))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData
struct PointerData_tFFB8BD6689DF7417692F19AD49E7AAF716C1F95E  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::pointer
	RuntimeObject* ___pointer_0;
	// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::lastMousePoint3d
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___lastMousePoint3d_1;
	// UnityEngine.EventSystems.PointerEventData/FramePressState Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::nextPressState
	int32_t ___nextPressState_2;
	// UnityEngine.EventSystems.PointerInputModule/MouseState Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::mouseState
	MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * ___mouseState_3;
	// UnityEngine.EventSystems.PointerEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::eventDataLeft
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventDataLeft_4;
	// UnityEngine.EventSystems.PointerEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::eventDataMiddle
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventDataMiddle_5;
	// UnityEngine.EventSystems.PointerEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::eventDataRight
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventDataRight_6;

public:
	inline static int32_t get_offset_of_pointer_0() { return static_cast<int32_t>(offsetof(PointerData_tFFB8BD6689DF7417692F19AD49E7AAF716C1F95E, ___pointer_0)); }
	inline RuntimeObject* get_pointer_0() const { return ___pointer_0; }
	inline RuntimeObject** get_address_of_pointer_0() { return &___pointer_0; }
	inline void set_pointer_0(RuntimeObject* value)
	{
		___pointer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointer_0), (void*)value);
	}

	inline static int32_t get_offset_of_lastMousePoint3d_1() { return static_cast<int32_t>(offsetof(PointerData_tFFB8BD6689DF7417692F19AD49E7AAF716C1F95E, ___lastMousePoint3d_1)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_lastMousePoint3d_1() const { return ___lastMousePoint3d_1; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_lastMousePoint3d_1() { return &___lastMousePoint3d_1; }
	inline void set_lastMousePoint3d_1(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___lastMousePoint3d_1 = value;
	}

	inline static int32_t get_offset_of_nextPressState_2() { return static_cast<int32_t>(offsetof(PointerData_tFFB8BD6689DF7417692F19AD49E7AAF716C1F95E, ___nextPressState_2)); }
	inline int32_t get_nextPressState_2() const { return ___nextPressState_2; }
	inline int32_t* get_address_of_nextPressState_2() { return &___nextPressState_2; }
	inline void set_nextPressState_2(int32_t value)
	{
		___nextPressState_2 = value;
	}

	inline static int32_t get_offset_of_mouseState_3() { return static_cast<int32_t>(offsetof(PointerData_tFFB8BD6689DF7417692F19AD49E7AAF716C1F95E, ___mouseState_3)); }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * get_mouseState_3() const { return ___mouseState_3; }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 ** get_address_of_mouseState_3() { return &___mouseState_3; }
	inline void set_mouseState_3(MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * value)
	{
		___mouseState_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouseState_3), (void*)value);
	}

	inline static int32_t get_offset_of_eventDataLeft_4() { return static_cast<int32_t>(offsetof(PointerData_tFFB8BD6689DF7417692F19AD49E7AAF716C1F95E, ___eventDataLeft_4)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventDataLeft_4() const { return ___eventDataLeft_4; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventDataLeft_4() { return &___eventDataLeft_4; }
	inline void set_eventDataLeft_4(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventDataLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventDataLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_eventDataMiddle_5() { return static_cast<int32_t>(offsetof(PointerData_tFFB8BD6689DF7417692F19AD49E7AAF716C1F95E, ___eventDataMiddle_5)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventDataMiddle_5() const { return ___eventDataMiddle_5; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventDataMiddle_5() { return &___eventDataMiddle_5; }
	inline void set_eventDataMiddle_5(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventDataMiddle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventDataMiddle_5), (void*)value);
	}

	inline static int32_t get_offset_of_eventDataRight_6() { return static_cast<int32_t>(offsetof(PointerData_tFFB8BD6689DF7417692F19AD49E7AAF716C1F95E, ___eventDataRight_6)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventDataRight_6() const { return ___eventDataRight_6; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventDataRight_6() { return &___eventDataRight_6; }
	inline void set_eventDataRight_6(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventDataRight_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventDataRight_6), (void*)value);
	}
};


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData
struct BaseInputEventData_t8CABFB1FC933DDC0AA250178D3D0D5CB0ED5C3AF  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<EventTime>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CEventTimeU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<MixedRealityInputAction>k__BackingField
	MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  ___U3CMixedRealityInputActionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseInputEventData_t8CABFB1FC933DDC0AA250178D3D0D5CB0ED5C3AF, ___U3CEventTimeU3Ek__BackingField_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CEventTimeU3Ek__BackingField_2() const { return ___U3CEventTimeU3Ek__BackingField_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CEventTimeU3Ek__BackingField_2() { return &___U3CEventTimeU3Ek__BackingField_2; }
	inline void set_U3CEventTimeU3Ek__BackingField_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CEventTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseInputEventData_t8CABFB1FC933DDC0AA250178D3D0D5CB0ED5C3AF, ___U3CInputSourceU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_3() const { return ___U3CInputSourceU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_3() { return &___U3CInputSourceU3Ek__BackingField_3; }
	inline void set_U3CInputSourceU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseInputEventData_t8CABFB1FC933DDC0AA250178D3D0D5CB0ED5C3AF, ___U3CMixedRealityInputActionU3Ek__BackingField_4)); }
	inline MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  get_U3CMixedRealityInputActionU3Ek__BackingField_4() const { return ___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC * get_address_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return &___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline void set_U3CMixedRealityInputActionU3Ek__BackingField_4(MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  value)
	{
		___U3CMixedRealityInputActionU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CMixedRealityInputActionU3Ek__BackingField_4))->___description_2), (void*)NULL);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_t6759FDF9C449C09996B73FE46FBB308795450C25 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizationKey
	String_t* ___localizationKey_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizedKeyword
	String_t* ___localizedKeyword_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyword
	String_t* ___keyword_2;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyCode
	int32_t ___keyCode_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SpeechCommands::action
	MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  ___action_4;

public:
	inline static int32_t get_offset_of_localizationKey_0() { return static_cast<int32_t>(offsetof(SpeechCommands_t6759FDF9C449C09996B73FE46FBB308795450C25, ___localizationKey_0)); }
	inline String_t* get_localizationKey_0() const { return ___localizationKey_0; }
	inline String_t** get_address_of_localizationKey_0() { return &___localizationKey_0; }
	inline void set_localizationKey_0(String_t* value)
	{
		___localizationKey_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizationKey_0), (void*)value);
	}

	inline static int32_t get_offset_of_localizedKeyword_1() { return static_cast<int32_t>(offsetof(SpeechCommands_t6759FDF9C449C09996B73FE46FBB308795450C25, ___localizedKeyword_1)); }
	inline String_t* get_localizedKeyword_1() const { return ___localizedKeyword_1; }
	inline String_t** get_address_of_localizedKeyword_1() { return &___localizedKeyword_1; }
	inline void set_localizedKeyword_1(String_t* value)
	{
		___localizedKeyword_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizedKeyword_1), (void*)value);
	}

	inline static int32_t get_offset_of_keyword_2() { return static_cast<int32_t>(offsetof(SpeechCommands_t6759FDF9C449C09996B73FE46FBB308795450C25, ___keyword_2)); }
	inline String_t* get_keyword_2() const { return ___keyword_2; }
	inline String_t** get_address_of_keyword_2() { return &___keyword_2; }
	inline void set_keyword_2(String_t* value)
	{
		___keyword_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyword_2), (void*)value);
	}

	inline static int32_t get_offset_of_keyCode_3() { return static_cast<int32_t>(offsetof(SpeechCommands_t6759FDF9C449C09996B73FE46FBB308795450C25, ___keyCode_3)); }
	inline int32_t get_keyCode_3() const { return ___keyCode_3; }
	inline int32_t* get_address_of_keyCode_3() { return &___keyCode_3; }
	inline void set_keyCode_3(int32_t value)
	{
		___keyCode_3 = value;
	}

	inline static int32_t get_offset_of_action_4() { return static_cast<int32_t>(offsetof(SpeechCommands_t6759FDF9C449C09996B73FE46FBB308795450C25, ___action_4)); }
	inline MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  get_action_4() const { return ___action_4; }
	inline MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC * get_address_of_action_4() { return &___action_4; }
	inline void set_action_4(MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  value)
	{
		___action_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___action_4))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_t6759FDF9C449C09996B73FE46FBB308795450C25_marshaled_pinvoke
{
	char* ___localizationKey_0;
	char* ___localizedKeyword_1;
	char* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC_marshaled_pinvoke ___action_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_t6759FDF9C449C09996B73FE46FBB308795450C25_marshaled_com
{
	Il2CppChar* ___localizationKey_0;
	Il2CppChar* ___localizedKeyword_1;
	Il2CppChar* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC_marshaled_com ___action_4;
};

// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData
struct PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::Pointer
	RuntimeObject* ___Pointer_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::<StartPoint>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CStartPointU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.Physics.FocusDetails Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::focusDetails
	FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F  ___focusDetails_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::<PreviousPointerTarget>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CPreviousPointerTargetU3Ek__BackingField_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::<RayStepIndex>k__BackingField
	int32_t ___U3CRayStepIndexU3Ek__BackingField_4;
	// UnityEngine.EventSystems.PointerEventData Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::graphicData
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___graphicData_5;

public:
	inline static int32_t get_offset_of_Pointer_0() { return static_cast<int32_t>(offsetof(PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0, ___Pointer_0)); }
	inline RuntimeObject* get_Pointer_0() const { return ___Pointer_0; }
	inline RuntimeObject** get_address_of_Pointer_0() { return &___Pointer_0; }
	inline void set_Pointer_0(RuntimeObject* value)
	{
		___Pointer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Pointer_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStartPointU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0, ___U3CStartPointU3Ek__BackingField_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CStartPointU3Ek__BackingField_1() const { return ___U3CStartPointU3Ek__BackingField_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CStartPointU3Ek__BackingField_1() { return &___U3CStartPointU3Ek__BackingField_1; }
	inline void set_U3CStartPointU3Ek__BackingField_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CStartPointU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_focusDetails_2() { return static_cast<int32_t>(offsetof(PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0, ___focusDetails_2)); }
	inline FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F  get_focusDetails_2() const { return ___focusDetails_2; }
	inline FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * get_address_of_focusDetails_2() { return &___focusDetails_2; }
	inline void set_focusDetails_2(FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F  value)
	{
		___focusDetails_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___focusDetails_2))->___U3CObjectU3Ek__BackingField_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___focusDetails_2))->___U3CLastRaycastHitU3Ek__BackingField_4))->___transform_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___focusDetails_2))->___U3CLastRaycastHitU3Ek__BackingField_4))->___collider_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___focusDetails_2))->___U3CLastGraphicsRaycastResultU3Ek__BackingField_5))->___m_GameObject_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___focusDetails_2))->___U3CLastGraphicsRaycastResultU3Ek__BackingField_5))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CPreviousPointerTargetU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0, ___U3CPreviousPointerTargetU3Ek__BackingField_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CPreviousPointerTargetU3Ek__BackingField_3() const { return ___U3CPreviousPointerTargetU3Ek__BackingField_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CPreviousPointerTargetU3Ek__BackingField_3() { return &___U3CPreviousPointerTargetU3Ek__BackingField_3; }
	inline void set_U3CPreviousPointerTargetU3Ek__BackingField_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CPreviousPointerTargetU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPreviousPointerTargetU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRayStepIndexU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0, ___U3CRayStepIndexU3Ek__BackingField_4)); }
	inline int32_t get_U3CRayStepIndexU3Ek__BackingField_4() const { return ___U3CRayStepIndexU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CRayStepIndexU3Ek__BackingField_4() { return &___U3CRayStepIndexU3Ek__BackingField_4; }
	inline void set_U3CRayStepIndexU3Ek__BackingField_4(int32_t value)
	{
		___U3CRayStepIndexU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_graphicData_5() { return static_cast<int32_t>(offsetof(PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0, ___graphicData_5)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_graphicData_5() const { return ___graphicData_5; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_graphicData_5() { return &___graphicData_5; }
	inline void set_graphicData_5(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___graphicData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphicData_5), (void*)value);
	}
};

struct PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::UpdateHitPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateHitPerfMarker_6;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::UpdateFocusLockedHitPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateFocusLockedHitPerfMarker_7;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::ResetFocusedObjectPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ResetFocusedObjectPerfMarker_8;

public:
	inline static int32_t get_offset_of_UpdateHitPerfMarker_6() { return static_cast<int32_t>(offsetof(PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0_StaticFields, ___UpdateHitPerfMarker_6)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateHitPerfMarker_6() const { return ___UpdateHitPerfMarker_6; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateHitPerfMarker_6() { return &___UpdateHitPerfMarker_6; }
	inline void set_UpdateHitPerfMarker_6(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateHitPerfMarker_6 = value;
	}

	inline static int32_t get_offset_of_UpdateFocusLockedHitPerfMarker_7() { return static_cast<int32_t>(offsetof(PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0_StaticFields, ___UpdateFocusLockedHitPerfMarker_7)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateFocusLockedHitPerfMarker_7() const { return ___UpdateFocusLockedHitPerfMarker_7; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateFocusLockedHitPerfMarker_7() { return &___UpdateFocusLockedHitPerfMarker_7; }
	inline void set_UpdateFocusLockedHitPerfMarker_7(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateFocusLockedHitPerfMarker_7 = value;
	}

	inline static int32_t get_offset_of_ResetFocusedObjectPerfMarker_8() { return static_cast<int32_t>(offsetof(PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0_StaticFields, ___ResetFocusedObjectPerfMarker_8)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ResetFocusedObjectPerfMarker_8() const { return ___ResetFocusedObjectPerfMarker_8; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ResetFocusedObjectPerfMarker_8() { return &___ResetFocusedObjectPerfMarker_8; }
	inline void set_ResetFocusedObjectPerfMarker_8(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ResetFocusedObjectPerfMarker_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer
struct InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46  : public GenericPointer_tFF914BF1E1E3CF91EBEFBC364A586C28DACBBCE7
{
public:
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::gazeTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___gazeTransform_18;
	// Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::stabilizer
	BaseRayStabilizer_tFC7BFA95792DF321D647D60B39131F943CF657D9 * ___stabilizer_19;
	// Microsoft.MixedReality.Toolkit.Input.GazeProvider Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::gazeProvider
	GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * ___gazeProvider_20;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::<Controller>k__BackingField
	RuntimeObject* ___U3CControllerU3Ek__BackingField_21;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::<InputSourceParent>k__BackingField
	RuntimeObject* ___U3CInputSourceParentU3Ek__BackingField_22;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::pointerExtent
	float ___pointerExtent_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::isDown
	bool ___isDown_24;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::currentInputSource
	RuntimeObject* ___currentInputSource_25;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::currentHandedness
	uint8_t ___currentHandedness_26;

public:
	inline static int32_t get_offset_of_gazeTransform_18() { return static_cast<int32_t>(offsetof(InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46, ___gazeTransform_18)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_gazeTransform_18() const { return ___gazeTransform_18; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_gazeTransform_18() { return &___gazeTransform_18; }
	inline void set_gazeTransform_18(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___gazeTransform_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeTransform_18), (void*)value);
	}

	inline static int32_t get_offset_of_stabilizer_19() { return static_cast<int32_t>(offsetof(InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46, ___stabilizer_19)); }
	inline BaseRayStabilizer_tFC7BFA95792DF321D647D60B39131F943CF657D9 * get_stabilizer_19() const { return ___stabilizer_19; }
	inline BaseRayStabilizer_tFC7BFA95792DF321D647D60B39131F943CF657D9 ** get_address_of_stabilizer_19() { return &___stabilizer_19; }
	inline void set_stabilizer_19(BaseRayStabilizer_tFC7BFA95792DF321D647D60B39131F943CF657D9 * value)
	{
		___stabilizer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stabilizer_19), (void*)value);
	}

	inline static int32_t get_offset_of_gazeProvider_20() { return static_cast<int32_t>(offsetof(InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46, ___gazeProvider_20)); }
	inline GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * get_gazeProvider_20() const { return ___gazeProvider_20; }
	inline GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 ** get_address_of_gazeProvider_20() { return &___gazeProvider_20; }
	inline void set_gazeProvider_20(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * value)
	{
		___gazeProvider_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeProvider_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46, ___U3CControllerU3Ek__BackingField_21)); }
	inline RuntimeObject* get_U3CControllerU3Ek__BackingField_21() const { return ___U3CControllerU3Ek__BackingField_21; }
	inline RuntimeObject** get_address_of_U3CControllerU3Ek__BackingField_21() { return &___U3CControllerU3Ek__BackingField_21; }
	inline void set_U3CControllerU3Ek__BackingField_21(RuntimeObject* value)
	{
		___U3CControllerU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControllerU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInputSourceParentU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46, ___U3CInputSourceParentU3Ek__BackingField_22)); }
	inline RuntimeObject* get_U3CInputSourceParentU3Ek__BackingField_22() const { return ___U3CInputSourceParentU3Ek__BackingField_22; }
	inline RuntimeObject** get_address_of_U3CInputSourceParentU3Ek__BackingField_22() { return &___U3CInputSourceParentU3Ek__BackingField_22; }
	inline void set_U3CInputSourceParentU3Ek__BackingField_22(RuntimeObject* value)
	{
		___U3CInputSourceParentU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceParentU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_pointerExtent_23() { return static_cast<int32_t>(offsetof(InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46, ___pointerExtent_23)); }
	inline float get_pointerExtent_23() const { return ___pointerExtent_23; }
	inline float* get_address_of_pointerExtent_23() { return &___pointerExtent_23; }
	inline void set_pointerExtent_23(float value)
	{
		___pointerExtent_23 = value;
	}

	inline static int32_t get_offset_of_isDown_24() { return static_cast<int32_t>(offsetof(InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46, ___isDown_24)); }
	inline bool get_isDown_24() const { return ___isDown_24; }
	inline bool* get_address_of_isDown_24() { return &___isDown_24; }
	inline void set_isDown_24(bool value)
	{
		___isDown_24 = value;
	}

	inline static int32_t get_offset_of_currentInputSource_25() { return static_cast<int32_t>(offsetof(InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46, ___currentInputSource_25)); }
	inline RuntimeObject* get_currentInputSource_25() const { return ___currentInputSource_25; }
	inline RuntimeObject** get_address_of_currentInputSource_25() { return &___currentInputSource_25; }
	inline void set_currentInputSource_25(RuntimeObject* value)
	{
		___currentInputSource_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentInputSource_25), (void*)value);
	}

	inline static int32_t get_offset_of_currentHandedness_26() { return static_cast<int32_t>(offsetof(InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46, ___currentHandedness_26)); }
	inline uint8_t get_currentHandedness_26() const { return ___currentHandedness_26; }
	inline uint8_t* get_address_of_currentHandedness_26() { return &___currentHandedness_26; }
	inline void set_currentHandedness_26(uint8_t value)
	{
		___currentHandedness_26 = value;
	}
};

struct InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::OnPreSceneQueryPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnPreSceneQueryPerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::OnPostSceneQueryPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnPostSceneQueryPerfMarker_28;

public:
	inline static int32_t get_offset_of_OnPreSceneQueryPerfMarker_27() { return static_cast<int32_t>(offsetof(InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46_StaticFields, ___OnPreSceneQueryPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnPreSceneQueryPerfMarker_27() const { return ___OnPreSceneQueryPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnPreSceneQueryPerfMarker_27() { return &___OnPreSceneQueryPerfMarker_27; }
	inline void set_OnPreSceneQueryPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnPreSceneQueryPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_OnPostSceneQueryPerfMarker_28() { return static_cast<int32_t>(offsetof(InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46_StaticFields, ___OnPostSceneQueryPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnPostSceneQueryPerfMarker_28() const { return ___OnPostSceneQueryPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnPostSceneQueryPerfMarker_28() { return &___OnPostSceneQueryPerfMarker_28; }
	inline void set_OnPostSceneQueryPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnPostSceneQueryPerfMarker_28 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4
struct U3CEnsureInputSystemValidU3Ed__4_t424E31491A983DD9C3C7D47CE1F8AB8D229284CC 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.Object Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::<>u__1
	RuntimeObject * ___U3CU3Eu__1_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_t424E31491A983DD9C3C7D47CE1F8AB8D229284CC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_t424E31491A983DD9C3C7D47CE1F8AB8D229284CC, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_2() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_t424E31491A983DD9C3C7D47CE1F8AB8D229284CC, ___U3CU3Eu__1_2)); }
	inline RuntimeObject * get_U3CU3Eu__1_2() const { return ___U3CU3Eu__1_2; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_2() { return &___U3CU3Eu__1_2; }
	inline void set_U3CU3Eu__1_2(RuntimeObject * value)
	{
		___U3CU3Eu__1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4
struct U3CEnsureInputSystemValidU3Ed__4_tCF34C36AA551AD9C2FEB35D21B884AC4356CD8CE 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.Object Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::<>u__1
	RuntimeObject * ___U3CU3Eu__1_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_tCF34C36AA551AD9C2FEB35D21B884AC4356CD8CE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_tCF34C36AA551AD9C2FEB35D21B884AC4356CD8CE, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_2() { return static_cast<int32_t>(offsetof(U3CEnsureInputSystemValidU3Ed__4_tCF34C36AA551AD9C2FEB35D21B884AC4356CD8CE, ___U3CU3Eu__1_2)); }
	inline RuntimeObject * get_U3CU3Eu__1_2() const { return ___U3CU3Eu__1_2; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_2() { return &___U3CU3Eu__1_2; }
	inline void set_U3CU3Eu__1_2(RuntimeObject * value)
	{
		___U3CU3Eu__1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.DictationEventData
struct DictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111  : public BaseInputEventData_t8CABFB1FC933DDC0AA250178D3D0D5CB0ED5C3AF
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.DictationEventData::<DictationResult>k__BackingField
	String_t* ___U3CDictationResultU3Ek__BackingField_5;
	// UnityEngine.AudioClip Microsoft.MixedReality.Toolkit.Input.DictationEventData::<DictationAudioClip>k__BackingField
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___U3CDictationAudioClipU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CDictationResultU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111, ___U3CDictationResultU3Ek__BackingField_5)); }
	inline String_t* get_U3CDictationResultU3Ek__BackingField_5() const { return ___U3CDictationResultU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CDictationResultU3Ek__BackingField_5() { return &___U3CDictationResultU3Ek__BackingField_5; }
	inline void set_U3CDictationResultU3Ek__BackingField_5(String_t* value)
	{
		___U3CDictationResultU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDictationResultU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDictationAudioClipU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111, ___U3CDictationAudioClipU3Ek__BackingField_6)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_U3CDictationAudioClipU3Ek__BackingField_6() const { return ___U3CDictationAudioClipU3Ek__BackingField_6; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_U3CDictationAudioClipU3Ek__BackingField_6() { return &___U3CDictationAudioClipU3Ek__BackingField_6; }
	inline void set_U3CDictationAudioClipU3Ek__BackingField_6(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___U3CDictationAudioClipU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDictationAudioClipU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9  : public BaseInputEventData_t8CABFB1FC933DDC0AA250178D3D0D5CB0ED5C3AF
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.InputEventData::<Handedness>k__BackingField
	uint8_t ___U3CHandednessU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CHandednessU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9, ___U3CHandednessU3Ek__BackingField_5)); }
	inline uint8_t get_U3CHandednessU3Ek__BackingField_5() const { return ___U3CHandednessU3Ek__BackingField_5; }
	inline uint8_t* get_address_of_U3CHandednessU3Ek__BackingField_5() { return &___U3CHandednessU3Ek__BackingField_5; }
	inline void set_U3CHandednessU3Ek__BackingField_5(uint8_t value)
	{
		___U3CHandednessU3Ek__BackingField_5 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData
struct SourceStateEventData_tF68358C62720A3DE79F698D981E3F0C7E6023F2F  : public BaseInputEventData_t8CABFB1FC933DDC0AA250178D3D0D5CB0ED5C3AF
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.SourceStateEventData::<Controller>k__BackingField
	RuntimeObject* ___U3CControllerU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SourceStateEventData_tF68358C62720A3DE79F698D981E3F0C7E6023F2F, ___U3CControllerU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CControllerU3Ek__BackingField_5() const { return ___U3CControllerU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CControllerU3Ek__BackingField_5() { return &___U3CControllerU3Ek__BackingField_5; }
	inline void set_U3CControllerU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CControllerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControllerU3Ek__BackingField_5), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct SpeechEventData_t5107F68604DE41246F6BCAAA3E0A436668499454  : public BaseInputEventData_t8CABFB1FC933DDC0AA250178D3D0D5CB0ED5C3AF
{
public:
	// System.TimeSpan Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<PhraseDuration>k__BackingField
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___U3CPhraseDurationU3Ek__BackingField_5;
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<PhraseStartTime>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CPhraseStartTimeU3Ek__BackingField_6;
	// Microsoft.MixedReality.Toolkit.Input.SpeechCommands Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<Command>k__BackingField
	SpeechCommands_t6759FDF9C449C09996B73FE46FBB308795450C25  ___U3CCommandU3Ek__BackingField_7;
	// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<Confidence>k__BackingField
	int32_t ___U3CConfidenceU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CPhraseDurationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SpeechEventData_t5107F68604DE41246F6BCAAA3E0A436668499454, ___U3CPhraseDurationU3Ek__BackingField_5)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_U3CPhraseDurationU3Ek__BackingField_5() const { return ___U3CPhraseDurationU3Ek__BackingField_5; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_U3CPhraseDurationU3Ek__BackingField_5() { return &___U3CPhraseDurationU3Ek__BackingField_5; }
	inline void set_U3CPhraseDurationU3Ek__BackingField_5(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___U3CPhraseDurationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CPhraseStartTimeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SpeechEventData_t5107F68604DE41246F6BCAAA3E0A436668499454, ___U3CPhraseStartTimeU3Ek__BackingField_6)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CPhraseStartTimeU3Ek__BackingField_6() const { return ___U3CPhraseStartTimeU3Ek__BackingField_6; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CPhraseStartTimeU3Ek__BackingField_6() { return &___U3CPhraseStartTimeU3Ek__BackingField_6; }
	inline void set_U3CPhraseStartTimeU3Ek__BackingField_6(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CPhraseStartTimeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CCommandU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SpeechEventData_t5107F68604DE41246F6BCAAA3E0A436668499454, ___U3CCommandU3Ek__BackingField_7)); }
	inline SpeechCommands_t6759FDF9C449C09996B73FE46FBB308795450C25  get_U3CCommandU3Ek__BackingField_7() const { return ___U3CCommandU3Ek__BackingField_7; }
	inline SpeechCommands_t6759FDF9C449C09996B73FE46FBB308795450C25 * get_address_of_U3CCommandU3Ek__BackingField_7() { return &___U3CCommandU3Ek__BackingField_7; }
	inline void set_U3CCommandU3Ek__BackingField_7(SpeechCommands_t6759FDF9C449C09996B73FE46FBB308795450C25  value)
	{
		___U3CCommandU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCommandU3Ek__BackingField_7))->___localizationKey_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCommandU3Ek__BackingField_7))->___localizedKeyword_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCommandU3Ek__BackingField_7))->___keyword_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCommandU3Ek__BackingField_7))->___action_4))->___description_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CConfidenceU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SpeechEventData_t5107F68604DE41246F6BCAAA3E0A436668499454, ___U3CConfidenceU3Ek__BackingField_8)); }
	inline int32_t get_U3CConfidenceU3Ek__BackingField_8() const { return ___U3CConfidenceU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CConfidenceU3Ek__BackingField_8() { return &___U3CConfidenceU3Ek__BackingField_8; }
	inline void set_U3CConfidenceU3Ek__BackingField_8(int32_t value)
	{
		___U3CConfidenceU3Ek__BackingField_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct InputEventData_1_t9912FB5BCD3E745BE7F975C9F3E0EA1DCAC114DA  : public InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	RuntimeObject* ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_t9912FB5BCD3E745BE7F975C9F3E0EA1DCAC114DA, ___U3CInputDataU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputDataU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>
struct InputEventData_1_t4EF18F529455F87A02DD28A49212B7B093A97CF1  : public InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	HandMeshInfo_tD99A773B6804BA0497422760646D27DF9A5EB636 * ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_t4EF18F529455F87A02DD28A49212B7B093A97CF1, ___U3CInputDataU3Ek__BackingField_6)); }
	inline HandMeshInfo_tD99A773B6804BA0497422760646D27DF9A5EB636 * get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline HandMeshInfo_tD99A773B6804BA0497422760646D27DF9A5EB636 ** get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(HandMeshInfo_tD99A773B6804BA0497422760646D27DF9A5EB636 * value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputDataU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct InputEventData_1_t8BA709B500978D2FF6CBE02840D448EC4F1B96FF  : public InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_t8BA709B500978D2FF6CBE02840D448EC4F1B96FF, ___U3CInputDataU3Ek__BackingField_6)); }
	inline MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B * get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion>
struct InputEventData_1_tF68721C6A55FBBB8C3B93B2EB342522FAD3F7716  : public InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_tF68721C6A55FBBB8C3B93B2EB342522FAD3F7716, ___U3CInputDataU3Ek__BackingField_6)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single>
struct InputEventData_1_tA8DA12BEACD164A612EE93A1868A0EF98A7193CA  : public InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	float ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_tA8DA12BEACD164A612EE93A1868A0EF98A7193CA, ___U3CInputDataU3Ek__BackingField_6)); }
	inline float get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline float* get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(float value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2>
struct InputEventData_1_tA191CDE875C3A37876AF9EBEC1082E9A97791713  : public InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_tA191CDE875C3A37876AF9EBEC1082E9A97791713, ___U3CInputDataU3Ek__BackingField_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>
struct InputEventData_1_t72EB43FD8BF708F94C8860821D368A0E9B230155  : public InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CInputDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInputDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputEventData_1_t72EB43FD8BF708F94C8860821D368A0E9B230155, ___U3CInputDataU3Ek__BackingField_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CInputDataU3Ek__BackingField_6() const { return ___U3CInputDataU3Ek__BackingField_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CInputDataU3Ek__BackingField_6() { return &___U3CInputDataU3Ek__BackingField_6; }
	inline void set_U3CInputDataU3Ek__BackingField_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CInputDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct SourcePoseEventData_1_tFE8555246DDB23EE10ACB4694CD556E6CB2EA1EA  : public SourceStateEventData_tF68358C62720A3DE79F698D981E3F0C7E6023F2F
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  ___U3CSourceDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_tFE8555246DDB23EE10ACB4694CD556E6CB2EA1EA, ___U3CSourceDataU3Ek__BackingField_6)); }
	inline MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  get_U3CSourceDataU3Ek__BackingField_6() const { return ___U3CSourceDataU3Ek__BackingField_6; }
	inline MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B * get_address_of_U3CSourceDataU3Ek__BackingField_6() { return &___U3CSourceDataU3Ek__BackingField_6; }
	inline void set_U3CSourceDataU3Ek__BackingField_6(MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  value)
	{
		___U3CSourceDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>
struct SourcePoseEventData_1_t0C3E52D1B6B037B26D3125432D5FC5A1632236D5  : public SourceStateEventData_tF68358C62720A3DE79F698D981E3F0C7E6023F2F
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CSourceDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_t0C3E52D1B6B037B26D3125432D5FC5A1632236D5, ___U3CSourceDataU3Ek__BackingField_6)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CSourceDataU3Ek__BackingField_6() const { return ___U3CSourceDataU3Ek__BackingField_6; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CSourceDataU3Ek__BackingField_6() { return &___U3CSourceDataU3Ek__BackingField_6; }
	inline void set_U3CSourceDataU3Ek__BackingField_6(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CSourceDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>
struct SourcePoseEventData_1_tACD69D8464067CAB384CC33C478335A93920D0C2  : public SourceStateEventData_tF68358C62720A3DE79F698D981E3F0C7E6023F2F
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	int32_t ___U3CSourceDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_tACD69D8464067CAB384CC33C478335A93920D0C2, ___U3CSourceDataU3Ek__BackingField_6)); }
	inline int32_t get_U3CSourceDataU3Ek__BackingField_6() const { return ___U3CSourceDataU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CSourceDataU3Ek__BackingField_6() { return &___U3CSourceDataU3Ek__BackingField_6; }
	inline void set_U3CSourceDataU3Ek__BackingField_6(int32_t value)
	{
		___U3CSourceDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>
struct SourcePoseEventData_1_t424CC2521693730C3C44C26B3EB1E7CA4F3529EA  : public SourceStateEventData_tF68358C62720A3DE79F698D981E3F0C7E6023F2F
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CSourceDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_t424CC2521693730C3C44C26B3EB1E7CA4F3529EA, ___U3CSourceDataU3Ek__BackingField_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CSourceDataU3Ek__BackingField_6() const { return ___U3CSourceDataU3Ek__BackingField_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CSourceDataU3Ek__BackingField_6() { return &___U3CSourceDataU3Ek__BackingField_6; }
	inline void set_U3CSourceDataU3Ek__BackingField_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CSourceDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>
struct SourcePoseEventData_1_tEEC6D7835C6D2171E6766178D4C5272FAE422494  : public SourceStateEventData_tF68358C62720A3DE79F698D981E3F0C7E6023F2F
{
public:
	// T Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1::<SourceData>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CSourceDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSourceDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourcePoseEventData_1_tEEC6D7835C6D2171E6766178D4C5272FAE422494, ___U3CSourceDataU3Ek__BackingField_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CSourceDataU3Ek__BackingField_6() const { return ___U3CSourceDataU3Ek__BackingField_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CSourceDataU3Ek__BackingField_6() { return &___U3CSourceDataU3Ek__BackingField_6; }
	inline void set_U3CSourceDataU3Ek__BackingField_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CSourceDataU3Ek__BackingField_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener
struct InputSystemGlobalHandlerListener_t6D199696B69A68F0DB57E685C5A0D3656F417833  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::lateInitialize
	bool ___lateInitialize_4;

public:
	inline static int32_t get_offset_of_lateInitialize_4() { return static_cast<int32_t>(offsetof(InputSystemGlobalHandlerListener_t6D199696B69A68F0DB57E685C5A0D3656F417833, ___lateInitialize_4)); }
	inline bool get_lateInitialize_4() const { return ___lateInitialize_4; }
	inline bool* get_address_of_lateInitialize_4() { return &___lateInitialize_4; }
	inline void set_lateInitialize_4(bool value)
	{
		___lateInitialize_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener
struct InputSystemGlobalListener_t35C2E6176D79EADF5B304B877FE7559F42B70EF9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener::lateInitialize
	bool ___lateInitialize_4;

public:
	inline static int32_t get_offset_of_lateInitialize_4() { return static_cast<int32_t>(offsetof(InputSystemGlobalListener_t35C2E6176D79EADF5B304B877FE7559F42B70EF9, ___lateInitialize_4)); }
	inline bool get_lateInitialize_4() const { return ___lateInitialize_4; }
	inline bool* get_address_of_lateInitialize_4() { return &___lateInitialize_4; }
	inline void set_lateInitialize_4(bool value)
	{
		___lateInitialize_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B  : public InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B, ___U3CPointerU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_6() const { return ___U3CPointerU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_6() { return &___U3CPointerU3Ek__BackingField_6; }
	inline void set_U3CPointerU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B, ___U3CCountU3Ek__BackingField_7)); }
	inline int32_t get_U3CCountU3Ek__BackingField_7() const { return ___U3CCountU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_7() { return &___U3CCountU3Ek__BackingField_7; }
	inline void set_U3CCountU3Ek__BackingField_7(int32_t value)
	{
		___U3CCountU3Ek__BackingField_7 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * ___m_RaycastResultCache_4;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * ___m_AxisEventData_5;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_6;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_BaseEventData_7;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * ___m_InputOverride_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * ___m_DefaultInput_9;

public:
	inline static int32_t get_offset_of_m_RaycastResultCache_4() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_RaycastResultCache_4)); }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * get_m_RaycastResultCache_4() const { return ___m_RaycastResultCache_4; }
	inline List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 ** get_address_of_m_RaycastResultCache_4() { return &___m_RaycastResultCache_4; }
	inline void set_m_RaycastResultCache_4(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * value)
	{
		___m_RaycastResultCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastResultCache_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_AxisEventData_5() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_AxisEventData_5)); }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * get_m_AxisEventData_5() const { return ___m_AxisEventData_5; }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E ** get_address_of_m_AxisEventData_5() { return &___m_AxisEventData_5; }
	inline void set_m_AxisEventData_5(AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * value)
	{
		___m_AxisEventData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AxisEventData_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventSystem_6() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_EventSystem_6)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_6() const { return ___m_EventSystem_6; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_6() { return &___m_EventSystem_6; }
	inline void set_m_EventSystem_6(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BaseEventData_7() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_BaseEventData_7)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_BaseEventData_7() const { return ___m_BaseEventData_7; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_BaseEventData_7() { return &___m_BaseEventData_7; }
	inline void set_m_BaseEventData_7(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_BaseEventData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BaseEventData_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputOverride_8() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_InputOverride_8)); }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * get_m_InputOverride_8() const { return ___m_InputOverride_8; }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D ** get_address_of_m_InputOverride_8() { return &___m_InputOverride_8; }
	inline void set_m_InputOverride_8(BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * value)
	{
		___m_InputOverride_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputOverride_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultInput_9() { return static_cast<int32_t>(offsetof(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924, ___m_DefaultInput_9)); }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * get_m_DefaultInput_9() const { return ___m_DefaultInput_9; }
	inline BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D ** get_address_of_m_DefaultInput_9() { return &___m_DefaultInput_9; }
	inline void set_m_DefaultInput_9(BaseInput_tEF29D9AD913DF0552A9C51AF200B4FEB08AF737D * value)
	{
		___m_DefaultInput_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultInput_9), (void*)value);
	}
};


// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SystemInputModules_4)); }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_FirstSelected_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentSelected_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DummyData_13)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.GazeProvider
struct GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764  : public InputSystemGlobalHandlerListener_t6D199696B69A68F0DB57E685C5A0D3656F417833
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::lockCursorWhenFocusLocked
	bool ___lockCursorWhenFocusLocked_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::setCursorInvisibleWhenFocusLocked
	bool ___setCursorInvisibleWhenFocusLocked_8;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider::maxGazeCollisionDistance
	float ___maxGazeCollisionDistance_9;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Input.GazeProvider::raycastLayerMasks
	LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___raycastLayerMasks_10;
	// Microsoft.MixedReality.Toolkit.Physics.GazeStabilizer Microsoft.MixedReality.Toolkit.Input.GazeProvider::stabilizer
	GazeStabilizer_tBFF05492B799C4F0241BD35049B35A5C1B587D10 * ___stabilizer_11;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.GazeProvider::gazeTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___gazeTransform_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider::minHeadVelocityThreshold
	float ___minHeadVelocityThreshold_13;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider::maxHeadVelocityThreshold
	float ___maxHeadVelocityThreshold_14;
	// Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource Microsoft.MixedReality.Toolkit.Input.GazeProvider::gazeInputSource
	BaseGenericInputSource_t983CE64ED607AD7D615AE906B29D78B89BC4B6F9 * ___gazeInputSource_15;
	// Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer Microsoft.MixedReality.Toolkit.Input.GazeProvider::gazePointer
	InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46 * ___gazePointer_16;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.GazeProvider::<GazeCursorPrefab>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CGazeCursorPrefabU3Ek__BackingField_17;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.GazeProvider::<GazeTarget>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CGazeTargetU3Ek__BackingField_18;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit Microsoft.MixedReality.Toolkit.Input.GazeProvider::<HitInfo>k__BackingField
	MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4  ___U3CHitInfoU3Ek__BackingField_19;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider::<HitPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CHitPositionU3Ek__BackingField_20;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider::<HitNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CHitNormalU3Ek__BackingField_21;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider::<HeadVelocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CHeadVelocityU3Ek__BackingField_22;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider::<HeadMovementDirection>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CHeadMovementDirectionU3Ek__BackingField_23;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider::lastHitDistance
	float ___lastHitDistance_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::delayInitialization
	bool ___delayInitialization_25;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider::lastHeadPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lastHeadPosition_26;
	// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.GazeProvider::<overrideHeadPosition>k__BackingField
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___U3CoverrideHeadPositionU3Ek__BackingField_27;
	// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.GazeProvider::<overrideHeadForward>k__BackingField
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___U3CoverrideHeadForwardU3Ek__BackingField_28;
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.GazeProvider::latestEyeTrackingUpdate
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___latestEyeTrackingUpdate_33;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.Input.GazeProvider::<IsEyeCalibrationValid>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CIsEyeCalibrationValidU3Ek__BackingField_35;
	// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.GazeProvider::<LatestEyeGaze>k__BackingField
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___U3CLatestEyeGazeU3Ek__BackingField_36;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::<IsEyeTrackingEnabled>k__BackingField
	bool ___U3CIsEyeTrackingEnabledU3Ek__BackingField_37;
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.GazeProvider::<Timestamp>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CTimestampU3Ek__BackingField_38;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::<UseHeadGazeOverride>k__BackingField
	bool ___U3CUseHeadGazeOverrideU3Ek__BackingField_39;

public:
	inline static int32_t get_offset_of_lockCursorWhenFocusLocked_7() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764, ___lockCursorWhenFocusLocked_7)); }
	inline bool get_lockCursorWhenFocusLocked_7() const { return ___lockCursorWhenFocusLocked_7; }
	inline bool* get_address_of_lockCursorWhenFocusLocked_7() { return &___lockCursorWhenFocusLocked_7; }
	inline void set_lockCursorWhenFocusLocked_7(bool value)
	{
		___lockCursorWhenFocusLocked_7 = value;
	}

	inline static int32_t get_offset_of_setCursorInvisibleWhenFocusLocked_8() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764, ___setCursorInvisibleWhenFocusLocked_8)); }
	inline bool get_setCursorInvisibleWhenFocusLocked_8() const { return ___setCursorInvisibleWhenFocusLocked_8; }
	inline bool* get_address_of_setCursorInvisibleWhenFocusLocked_8() { return &___setCursorInvisibleWhenFocusLocked_8; }
	inline void set_setCursorInvisibleWhenFocusLocked_8(bool value)
	{
		___setCursorInvisibleWhenFocusLocked_8 = value;
	}

	inline static int32_t get_offset_of_maxGazeCollisionDistance_9() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764, ___maxGazeCollisionDistance_9)); }
	inline float get_maxGazeCollisionDistance_9() const { return ___maxGazeCollisionDistance_9; }
	inline float* get_address_of_maxGazeCollisionDistance_9() { return &___maxGazeCollisionDistance_9; }
	inline void set_maxGazeCollisionDistance_9(float value)
	{
		___maxGazeCollisionDistance_9 = value;
	}

	inline static int32_t get_offset_of_raycastLayerMasks_10() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764, ___raycastLayerMasks_10)); }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* get_raycastLayerMasks_10() const { return ___raycastLayerMasks_10; }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F** get_address_of_raycastLayerMasks_10() { return &___raycastLayerMasks_10; }
	inline void set_raycastLayerMasks_10(LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* value)
	{
		___raycastLayerMasks_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastLayerMasks_10), (void*)value);
	}

	inline static int32_t get_offset_of_stabilizer_11() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764, ___stabilizer_11)); }
	inline GazeStabilizer_tBFF05492B799C4F0241BD35049B35A5C1B587D10 * get_stabilizer_11() const { return ___stabilizer_11; }
	inline GazeStabilizer_tBFF05492B799C4F0241BD35049B35A5C1B587D10 ** get_address_of_stabilizer_11() { return &___stabilizer_11; }
	inline void set_stabilizer_11(GazeStabilizer_tBFF05492B799C4F0241BD35049B35A5C1B587D10 * value)
	{
		___stabilizer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stabilizer_11), (void*)value);
	}

	inline static int32_t get_offset_of_gazeTransform_12() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764, ___gazeTransform_12)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_gazeTransform_12() const { return ___gazeTransform_12; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_gazeTransform_12() { return &___gazeTransform_12; }
	inline void set_gazeTransform_12(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___gazeTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_minHeadVelocityThreshold_13() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764, ___minHeadVelocityThreshold_13)); }
	inline float get_minHeadVelocityThreshold_13() const { return ___minHeadVelocityThreshold_13; }
	inline float* get_address_of_minHeadVelocityThreshold_13() { return &___minHeadVelocityThreshold_13; }
	inline void set_minHeadVelocityThreshold_13(float value)
	{
		___minHeadVelocityThreshold_13 = value;
	}

	inline static int32_t get_offset_of_maxHeadVelocityThreshold_14() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764, ___maxHeadVelocityThreshold_14)); }
	inline float get_maxHeadVelocityThreshold_14() const { return ___maxHeadVelocityThreshold_14; }
	inline float* get_address_of_maxHeadVelocityThreshold_14() { return &___maxHeadVelocityThreshold_14; }
	inline void set_maxHeadVelocityThreshold_14(float value)
	{
		___maxHeadVelocityThreshold_14 = value;
	}

	inline static int32_t get_offset_of_gazeInputSource_15() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764, ___gazeInputSource_15)); }
	inline BaseGenericInputSource_t983CE64ED607AD7D615AE906B29D78B89BC4B6F9 * get_gazeInputSource_15() const { return ___gazeInputSource_15; }
	inline BaseGenericInputSource_t983CE64ED607AD7D615AE906B29D78B89BC4B6F9 ** get_address_of_gazeInputSource_15() { return &___gazeInputSource_15; }
	inline void set_gazeInputSource_15(BaseGenericInputSource_t983CE64ED607AD7D615AE906B29D78B89BC4B6F9 * value)
	{
		___gazeInputSource_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeInputSource_15), (void*)value);
	}

	inline static int32_t get_offset_of_gazePointer_16() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764, ___gazePointer_16)); }
	inline InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46 * get_gazePointer_16() const { return ___gazePointer_16; }
	inline InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46 ** get_address_of_gazePointer_16() { return &___gazePointer_16; }
	inline void set_gazePointer_16(InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46 * value)
	{
		___gazePointer_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazePointer_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGazeCursorPrefabU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764, ___U3CGazeCursorPrefabU3Ek__BackingField_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CGazeCursorPrefabU3Ek__BackingField_17() const { return ___U3CGazeCursorPrefabU3Ek__BackingField_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CGazeCursorPrefabU3Ek__BackingField_17() { return &___U3CGazeCursorPrefabU3Ek__BackingField_17; }
	inline void set_U3CGazeCursorPrefabU3Ek__BackingField_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CGazeCursorPrefabU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGazeCursorPrefabU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGazeTargetU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764, ___U3CGazeTargetU3Ek__BackingField_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CGazeTargetU3Ek__BackingField_18() const { return ___U3CGazeTargetU3Ek__BackingField_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CGazeTargetU3Ek__BackingField_18() { return &___U3CGazeTargetU3Ek__BackingField_18; }
	inline void set_U3CGazeTargetU3Ek__BackingField_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CGazeTargetU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGazeTargetU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHitInfoU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764, ___U3CHitInfoU3Ek__BackingField_19)); }
	inline MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4  get_U3CHitInfoU3Ek__BackingField_19() const { return ___U3CHitInfoU3Ek__BackingField_19; }
	inline MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4 * get_address_of_U3CHitInfoU3Ek__BackingField_19() { return &___U3CHitInfoU3Ek__BackingField_19; }
	inline void set_U3CHitInfoU3Ek__BackingField_19(MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4  value)
	{
		___U3CHitInfoU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CHitInfoU3Ek__BackingField_19))->___transform_7), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CHitInfoU3Ek__BackingField_19))->___collider_10), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CHitPositionU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764, ___U3CHitPositionU3Ek__BackingField_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CHitPositionU3Ek__BackingField_20() const { return ___U3CHitPositionU3Ek__BackingField_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CHitPositionU3Ek__BackingField_20() { return &___U3CHitPositionU3Ek__BackingField_20; }
	inline void set_U3CHitPositionU3Ek__BackingField_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CHitPositionU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CHitNormalU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764, ___U3CHitNormalU3Ek__BackingField_21)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CHitNormalU3Ek__BackingField_21() const { return ___U3CHitNormalU3Ek__BackingField_21; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CHitNormalU3Ek__BackingField_21() { return &___U3CHitNormalU3Ek__BackingField_21; }
	inline void set_U3CHitNormalU3Ek__BackingField_21(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CHitNormalU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CHeadVelocityU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764, ___U3CHeadVelocityU3Ek__BackingField_22)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CHeadVelocityU3Ek__BackingField_22() const { return ___U3CHeadVelocityU3Ek__BackingField_22; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CHeadVelocityU3Ek__BackingField_22() { return &___U3CHeadVelocityU3Ek__BackingField_22; }
	inline void set_U3CHeadVelocityU3Ek__BackingField_22(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CHeadVelocityU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CHeadMovementDirectionU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764, ___U3CHeadMovementDirectionU3Ek__BackingField_23)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CHeadMovementDirectionU3Ek__BackingField_23() const { return ___U3CHeadMovementDirectionU3Ek__BackingField_23; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CHeadMovementDirectionU3Ek__BackingField_23() { return &___U3CHeadMovementDirectionU3Ek__BackingField_23; }
	inline void set_U3CHeadMovementDirectionU3Ek__BackingField_23(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CHeadMovementDirectionU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_lastHitDistance_24() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764, ___lastHitDistance_24)); }
	inline float get_lastHitDistance_24() const { return ___lastHitDistance_24; }
	inline float* get_address_of_lastHitDistance_24() { return &___lastHitDistance_24; }
	inline void set_lastHitDistance_24(float value)
	{
		___lastHitDistance_24 = value;
	}

	inline static int32_t get_offset_of_delayInitialization_25() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764, ___delayInitialization_25)); }
	inline bool get_delayInitialization_25() const { return ___delayInitialization_25; }
	inline bool* get_address_of_delayInitialization_25() { return &___delayInitialization_25; }
	inline void set_delayInitialization_25(bool value)
	{
		___delayInitialization_25 = value;
	}

	inline static int32_t get_offset_of_lastHeadPosition_26() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764, ___lastHeadPosition_26)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_lastHeadPosition_26() const { return ___lastHeadPosition_26; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_lastHeadPosition_26() { return &___lastHeadPosition_26; }
	inline void set_lastHeadPosition_26(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___lastHeadPosition_26 = value;
	}

	inline static int32_t get_offset_of_U3CoverrideHeadPositionU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764, ___U3CoverrideHeadPositionU3Ek__BackingField_27)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_U3CoverrideHeadPositionU3Ek__BackingField_27() const { return ___U3CoverrideHeadPositionU3Ek__BackingField_27; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_U3CoverrideHeadPositionU3Ek__BackingField_27() { return &___U3CoverrideHeadPositionU3Ek__BackingField_27; }
	inline void set_U3CoverrideHeadPositionU3Ek__BackingField_27(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___U3CoverrideHeadPositionU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CoverrideHeadForwardU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764, ___U3CoverrideHeadForwardU3Ek__BackingField_28)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_U3CoverrideHeadForwardU3Ek__BackingField_28() const { return ___U3CoverrideHeadForwardU3Ek__BackingField_28; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_U3CoverrideHeadForwardU3Ek__BackingField_28() { return &___U3CoverrideHeadForwardU3Ek__BackingField_28; }
	inline void set_U3CoverrideHeadForwardU3Ek__BackingField_28(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___U3CoverrideHeadForwardU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_latestEyeTrackingUpdate_33() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764, ___latestEyeTrackingUpdate_33)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_latestEyeTrackingUpdate_33() const { return ___latestEyeTrackingUpdate_33; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_latestEyeTrackingUpdate_33() { return &___latestEyeTrackingUpdate_33; }
	inline void set_latestEyeTrackingUpdate_33(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___latestEyeTrackingUpdate_33 = value;
	}

	inline static int32_t get_offset_of_U3CIsEyeCalibrationValidU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764, ___U3CIsEyeCalibrationValidU3Ek__BackingField_35)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CIsEyeCalibrationValidU3Ek__BackingField_35() const { return ___U3CIsEyeCalibrationValidU3Ek__BackingField_35; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CIsEyeCalibrationValidU3Ek__BackingField_35() { return &___U3CIsEyeCalibrationValidU3Ek__BackingField_35; }
	inline void set_U3CIsEyeCalibrationValidU3Ek__BackingField_35(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CIsEyeCalibrationValidU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CLatestEyeGazeU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764, ___U3CLatestEyeGazeU3Ek__BackingField_36)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get_U3CLatestEyeGazeU3Ek__BackingField_36() const { return ___U3CLatestEyeGazeU3Ek__BackingField_36; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of_U3CLatestEyeGazeU3Ek__BackingField_36() { return &___U3CLatestEyeGazeU3Ek__BackingField_36; }
	inline void set_U3CLatestEyeGazeU3Ek__BackingField_36(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		___U3CLatestEyeGazeU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CIsEyeTrackingEnabledU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764, ___U3CIsEyeTrackingEnabledU3Ek__BackingField_37)); }
	inline bool get_U3CIsEyeTrackingEnabledU3Ek__BackingField_37() const { return ___U3CIsEyeTrackingEnabledU3Ek__BackingField_37; }
	inline bool* get_address_of_U3CIsEyeTrackingEnabledU3Ek__BackingField_37() { return &___U3CIsEyeTrackingEnabledU3Ek__BackingField_37; }
	inline void set_U3CIsEyeTrackingEnabledU3Ek__BackingField_37(bool value)
	{
		___U3CIsEyeTrackingEnabledU3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_U3CTimestampU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764, ___U3CTimestampU3Ek__BackingField_38)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CTimestampU3Ek__BackingField_38() const { return ___U3CTimestampU3Ek__BackingField_38; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CTimestampU3Ek__BackingField_38() { return &___U3CTimestampU3Ek__BackingField_38; }
	inline void set_U3CTimestampU3Ek__BackingField_38(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CTimestampU3Ek__BackingField_38 = value;
	}

	inline static int32_t get_offset_of_U3CUseHeadGazeOverrideU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764, ___U3CUseHeadGazeOverrideU3Ek__BackingField_39)); }
	inline bool get_U3CUseHeadGazeOverrideU3Ek__BackingField_39() const { return ___U3CUseHeadGazeOverrideU3Ek__BackingField_39; }
	inline bool* get_address_of_U3CUseHeadGazeOverrideU3Ek__BackingField_39() { return &___U3CUseHeadGazeOverrideU3Ek__BackingField_39; }
	inline void set_U3CUseHeadGazeOverrideU3Ek__BackingField_39(bool value)
	{
		___U3CUseHeadGazeOverrideU3Ek__BackingField_39 = value;
	}
};

struct GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_29;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider::LateUpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LateUpdatePerfMarker_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider::InitializeGazePointerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___InitializeGazePointerPerfMarker_31;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GazeProvider::RaiseSourceDetectedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceDetectedPerfMarker_32;
	// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider::maxEyeTrackingTimeoutInSeconds
	float ___maxEyeTrackingTimeoutInSeconds_34;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_29() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764_StaticFields, ___UpdatePerfMarker_29)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_29() const { return ___UpdatePerfMarker_29; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_29() { return &___UpdatePerfMarker_29; }
	inline void set_UpdatePerfMarker_29(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_29 = value;
	}

	inline static int32_t get_offset_of_LateUpdatePerfMarker_30() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764_StaticFields, ___LateUpdatePerfMarker_30)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LateUpdatePerfMarker_30() const { return ___LateUpdatePerfMarker_30; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LateUpdatePerfMarker_30() { return &___LateUpdatePerfMarker_30; }
	inline void set_LateUpdatePerfMarker_30(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LateUpdatePerfMarker_30 = value;
	}

	inline static int32_t get_offset_of_InitializeGazePointerPerfMarker_31() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764_StaticFields, ___InitializeGazePointerPerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_InitializeGazePointerPerfMarker_31() const { return ___InitializeGazePointerPerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_InitializeGazePointerPerfMarker_31() { return &___InitializeGazePointerPerfMarker_31; }
	inline void set_InitializeGazePointerPerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___InitializeGazePointerPerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_RaiseSourceDetectedPerfMarker_32() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764_StaticFields, ___RaiseSourceDetectedPerfMarker_32)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceDetectedPerfMarker_32() const { return ___RaiseSourceDetectedPerfMarker_32; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceDetectedPerfMarker_32() { return &___RaiseSourceDetectedPerfMarker_32; }
	inline void set_RaiseSourceDetectedPerfMarker_32(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceDetectedPerfMarker_32 = value;
	}

	inline static int32_t get_offset_of_maxEyeTrackingTimeoutInSeconds_34() { return static_cast<int32_t>(offsetof(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764_StaticFields, ___maxEyeTrackingTimeoutInSeconds_34)); }
	inline float get_maxEyeTrackingTimeoutInSeconds_34() const { return ___maxEyeTrackingTimeoutInSeconds_34; }
	inline float* get_address_of_maxEyeTrackingTimeoutInSeconds_34() { return &___maxEyeTrackingTimeoutInSeconds_34; }
	inline void set_maxEyeTrackingTimeoutInSeconds_34(float value)
	{
		___maxEyeTrackingTimeoutInSeconds_34 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData
struct HandTrackingInputEventData_t4D2EA53F7605800166D3AA5A8A34EFF4C6CCB139  : public InputEventData_1_t72EB43FD8BF708F94C8860821D368A0E9B230155
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData::<Controller>k__BackingField
	RuntimeObject* ___U3CControllerU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(HandTrackingInputEventData_t4D2EA53F7605800166D3AA5A8A34EFF4C6CCB139, ___U3CControllerU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CControllerU3Ek__BackingField_7() const { return ___U3CControllerU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CControllerU3Ek__BackingField_7() { return &___U3CControllerU3Ek__BackingField_7; }
	inline void set_U3CControllerU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CControllerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControllerU3Ek__BackingField_7), (void*)value);
	}
};


// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421  : public BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * ___m_PointerData_14;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * ___m_MouseState_15;

public:
	inline static int32_t get_offset_of_m_PointerData_14() { return static_cast<int32_t>(offsetof(PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421, ___m_PointerData_14)); }
	inline Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * get_m_PointerData_14() const { return ___m_PointerData_14; }
	inline Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 ** get_address_of_m_PointerData_14() { return &___m_PointerData_14; }
	inline void set_m_PointerData_14(Dictionary_2_t52ECB6047A9EDAD198D0CC53F331CDEAAA83BED8 * value)
	{
		___m_PointerData_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerData_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_MouseState_15() { return static_cast<int32_t>(offsetof(PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421, ___m_MouseState_15)); }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * get_m_MouseState_15() const { return ___m_MouseState_15; }
	inline MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 ** get_address_of_m_MouseState_15() { return &___m_MouseState_15; }
	inline void set_m_MouseState_15(MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * value)
	{
		___m_MouseState_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MouseState_15), (void*)value);
	}
};


// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD  : public PointerInputModule_tD7460503C6A4E1060914FFD213535AEF6AE2F421
{
public:
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_PrevActionTime
	float ___m_PrevActionTime_16;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMoveVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_LastMoveVector_17;
	// System.Int32 UnityEngine.EventSystems.StandaloneInputModule::m_ConsecutiveMoveCount
	int32_t ___m_ConsecutiveMoveCount_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMousePosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_LastMousePosition_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_MousePosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_MousePosition_20;
	// UnityEngine.GameObject UnityEngine.EventSystems.StandaloneInputModule::m_CurrentFocusedGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentFocusedGameObject_21;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.StandaloneInputModule::m_InputPointerEvent
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___m_InputPointerEvent_22;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_23;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_24;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_25;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton_26;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_27;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_RepeatDelay
	float ___m_RepeatDelay_28;
	// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::m_ForceModuleActive
	bool ___m_ForceModuleActive_29;

public:
	inline static int32_t get_offset_of_m_PrevActionTime_16() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_PrevActionTime_16)); }
	inline float get_m_PrevActionTime_16() const { return ___m_PrevActionTime_16; }
	inline float* get_address_of_m_PrevActionTime_16() { return &___m_PrevActionTime_16; }
	inline void set_m_PrevActionTime_16(float value)
	{
		___m_PrevActionTime_16 = value;
	}

	inline static int32_t get_offset_of_m_LastMoveVector_17() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_LastMoveVector_17)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_LastMoveVector_17() const { return ___m_LastMoveVector_17; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_LastMoveVector_17() { return &___m_LastMoveVector_17; }
	inline void set_m_LastMoveVector_17(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_LastMoveVector_17 = value;
	}

	inline static int32_t get_offset_of_m_ConsecutiveMoveCount_18() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_ConsecutiveMoveCount_18)); }
	inline int32_t get_m_ConsecutiveMoveCount_18() const { return ___m_ConsecutiveMoveCount_18; }
	inline int32_t* get_address_of_m_ConsecutiveMoveCount_18() { return &___m_ConsecutiveMoveCount_18; }
	inline void set_m_ConsecutiveMoveCount_18(int32_t value)
	{
		___m_ConsecutiveMoveCount_18 = value;
	}

	inline static int32_t get_offset_of_m_LastMousePosition_19() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_LastMousePosition_19)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_LastMousePosition_19() const { return ___m_LastMousePosition_19; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_LastMousePosition_19() { return &___m_LastMousePosition_19; }
	inline void set_m_LastMousePosition_19(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_LastMousePosition_19 = value;
	}

	inline static int32_t get_offset_of_m_MousePosition_20() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_MousePosition_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_MousePosition_20() const { return ___m_MousePosition_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_MousePosition_20() { return &___m_MousePosition_20; }
	inline void set_m_MousePosition_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_MousePosition_20 = value;
	}

	inline static int32_t get_offset_of_m_CurrentFocusedGameObject_21() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_CurrentFocusedGameObject_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentFocusedGameObject_21() const { return ___m_CurrentFocusedGameObject_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentFocusedGameObject_21() { return &___m_CurrentFocusedGameObject_21; }
	inline void set_m_CurrentFocusedGameObject_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentFocusedGameObject_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentFocusedGameObject_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputPointerEvent_22() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_InputPointerEvent_22)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_m_InputPointerEvent_22() const { return ___m_InputPointerEvent_22; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_m_InputPointerEvent_22() { return &___m_InputPointerEvent_22; }
	inline void set_m_InputPointerEvent_22(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___m_InputPointerEvent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputPointerEvent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_HorizontalAxis_23() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_HorizontalAxis_23)); }
	inline String_t* get_m_HorizontalAxis_23() const { return ___m_HorizontalAxis_23; }
	inline String_t** get_address_of_m_HorizontalAxis_23() { return &___m_HorizontalAxis_23; }
	inline void set_m_HorizontalAxis_23(String_t* value)
	{
		___m_HorizontalAxis_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HorizontalAxis_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalAxis_24() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_VerticalAxis_24)); }
	inline String_t* get_m_VerticalAxis_24() const { return ___m_VerticalAxis_24; }
	inline String_t** get_address_of_m_VerticalAxis_24() { return &___m_VerticalAxis_24; }
	inline void set_m_VerticalAxis_24(String_t* value)
	{
		___m_VerticalAxis_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalAxis_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_SubmitButton_25() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_SubmitButton_25)); }
	inline String_t* get_m_SubmitButton_25() const { return ___m_SubmitButton_25; }
	inline String_t** get_address_of_m_SubmitButton_25() { return &___m_SubmitButton_25; }
	inline void set_m_SubmitButton_25(String_t* value)
	{
		___m_SubmitButton_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubmitButton_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_CancelButton_26() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_CancelButton_26)); }
	inline String_t* get_m_CancelButton_26() const { return ___m_CancelButton_26; }
	inline String_t** get_address_of_m_CancelButton_26() { return &___m_CancelButton_26; }
	inline void set_m_CancelButton_26(String_t* value)
	{
		___m_CancelButton_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CancelButton_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputActionsPerSecond_27() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_InputActionsPerSecond_27)); }
	inline float get_m_InputActionsPerSecond_27() const { return ___m_InputActionsPerSecond_27; }
	inline float* get_address_of_m_InputActionsPerSecond_27() { return &___m_InputActionsPerSecond_27; }
	inline void set_m_InputActionsPerSecond_27(float value)
	{
		___m_InputActionsPerSecond_27 = value;
	}

	inline static int32_t get_offset_of_m_RepeatDelay_28() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_RepeatDelay_28)); }
	inline float get_m_RepeatDelay_28() const { return ___m_RepeatDelay_28; }
	inline float* get_address_of_m_RepeatDelay_28() { return &___m_RepeatDelay_28; }
	inline void set_m_RepeatDelay_28(float value)
	{
		___m_RepeatDelay_28 = value;
	}

	inline static int32_t get_offset_of_m_ForceModuleActive_29() { return static_cast<int32_t>(offsetof(StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD, ___m_ForceModuleActive_29)); }
	inline bool get_m_ForceModuleActive_29() const { return ___m_ForceModuleActive_29; }
	inline bool* get_address_of_m_ForceModuleActive_29() { return &___m_ForceModuleActive_29; }
	inline void set_m_ForceModuleActive_29(bool value)
	{
		___m_ForceModuleActive_29 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule
struct MixedRealityInputModule_t76F66FFFC2F805CEB169ABB00F69053EA20B6E99  : public StandaloneInputModule_tA1F0F27C9314CBB9B5E3E583D455DD97355E8BAD
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::pointerDataToUpdate
	Dictionary_2_t99258040B667AD054EDE09515EFC6475271347D4 * ___pointerDataToUpdate_30;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::pointerDataToRemove
	List_1_t0BF018D6B425B2A6B6E26EF2C14844DEFEF35A8C * ___pointerDataToRemove_31;
	// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::<RaycastCamera>k__BackingField
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___U3CRaycastCameraU3Ek__BackingField_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::<ManualInitializationRequired>k__BackingField
	bool ___U3CManualInitializationRequiredU3Ek__BackingField_33;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::<ProcessPaused>k__BackingField
	bool ___U3CProcessPausedU3Ek__BackingField_34;

public:
	inline static int32_t get_offset_of_pointerDataToUpdate_30() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t76F66FFFC2F805CEB169ABB00F69053EA20B6E99, ___pointerDataToUpdate_30)); }
	inline Dictionary_2_t99258040B667AD054EDE09515EFC6475271347D4 * get_pointerDataToUpdate_30() const { return ___pointerDataToUpdate_30; }
	inline Dictionary_2_t99258040B667AD054EDE09515EFC6475271347D4 ** get_address_of_pointerDataToUpdate_30() { return &___pointerDataToUpdate_30; }
	inline void set_pointerDataToUpdate_30(Dictionary_2_t99258040B667AD054EDE09515EFC6475271347D4 * value)
	{
		___pointerDataToUpdate_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerDataToUpdate_30), (void*)value);
	}

	inline static int32_t get_offset_of_pointerDataToRemove_31() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t76F66FFFC2F805CEB169ABB00F69053EA20B6E99, ___pointerDataToRemove_31)); }
	inline List_1_t0BF018D6B425B2A6B6E26EF2C14844DEFEF35A8C * get_pointerDataToRemove_31() const { return ___pointerDataToRemove_31; }
	inline List_1_t0BF018D6B425B2A6B6E26EF2C14844DEFEF35A8C ** get_address_of_pointerDataToRemove_31() { return &___pointerDataToRemove_31; }
	inline void set_pointerDataToRemove_31(List_1_t0BF018D6B425B2A6B6E26EF2C14844DEFEF35A8C * value)
	{
		___pointerDataToRemove_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerDataToRemove_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRaycastCameraU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t76F66FFFC2F805CEB169ABB00F69053EA20B6E99, ___U3CRaycastCameraU3Ek__BackingField_32)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_U3CRaycastCameraU3Ek__BackingField_32() const { return ___U3CRaycastCameraU3Ek__BackingField_32; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_U3CRaycastCameraU3Ek__BackingField_32() { return &___U3CRaycastCameraU3Ek__BackingField_32; }
	inline void set_U3CRaycastCameraU3Ek__BackingField_32(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___U3CRaycastCameraU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRaycastCameraU3Ek__BackingField_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3CManualInitializationRequiredU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t76F66FFFC2F805CEB169ABB00F69053EA20B6E99, ___U3CManualInitializationRequiredU3Ek__BackingField_33)); }
	inline bool get_U3CManualInitializationRequiredU3Ek__BackingField_33() const { return ___U3CManualInitializationRequiredU3Ek__BackingField_33; }
	inline bool* get_address_of_U3CManualInitializationRequiredU3Ek__BackingField_33() { return &___U3CManualInitializationRequiredU3Ek__BackingField_33; }
	inline void set_U3CManualInitializationRequiredU3Ek__BackingField_33(bool value)
	{
		___U3CManualInitializationRequiredU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CProcessPausedU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t76F66FFFC2F805CEB169ABB00F69053EA20B6E99, ___U3CProcessPausedU3Ek__BackingField_34)); }
	inline bool get_U3CProcessPausedU3Ek__BackingField_34() const { return ___U3CProcessPausedU3Ek__BackingField_34; }
	inline bool* get_address_of_U3CProcessPausedU3Ek__BackingField_34() { return &___U3CProcessPausedU3Ek__BackingField_34; }
	inline void set_U3CProcessPausedU3Ek__BackingField_34(bool value)
	{
		___U3CProcessPausedU3Ek__BackingField_34 = value;
	}
};

struct MixedRealityInputModule_t76F66FFFC2F805CEB169ABB00F69053EA20B6E99_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::ProcessPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ProcessPerfMarker_35;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::ProcessMrtkPointerLostPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ProcessMrtkPointerLostPerfMarker_36;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::GetMousePointerEventDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetMousePointerEventDataPerfMarker_37;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::UpdateMousePointerEventDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateMousePointerEventDataPerfMarker_38;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::ResetMousePointerEventDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ResetMousePointerEventDataPerfMarker_39;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::OnSourceDetectedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnSourceDetectedPerfMarker_40;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule::OnSourceLostPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnSourceLostPerfMarker_41;

public:
	inline static int32_t get_offset_of_ProcessPerfMarker_35() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t76F66FFFC2F805CEB169ABB00F69053EA20B6E99_StaticFields, ___ProcessPerfMarker_35)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ProcessPerfMarker_35() const { return ___ProcessPerfMarker_35; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ProcessPerfMarker_35() { return &___ProcessPerfMarker_35; }
	inline void set_ProcessPerfMarker_35(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ProcessPerfMarker_35 = value;
	}

	inline static int32_t get_offset_of_ProcessMrtkPointerLostPerfMarker_36() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t76F66FFFC2F805CEB169ABB00F69053EA20B6E99_StaticFields, ___ProcessMrtkPointerLostPerfMarker_36)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ProcessMrtkPointerLostPerfMarker_36() const { return ___ProcessMrtkPointerLostPerfMarker_36; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ProcessMrtkPointerLostPerfMarker_36() { return &___ProcessMrtkPointerLostPerfMarker_36; }
	inline void set_ProcessMrtkPointerLostPerfMarker_36(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ProcessMrtkPointerLostPerfMarker_36 = value;
	}

	inline static int32_t get_offset_of_GetMousePointerEventDataPerfMarker_37() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t76F66FFFC2F805CEB169ABB00F69053EA20B6E99_StaticFields, ___GetMousePointerEventDataPerfMarker_37)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetMousePointerEventDataPerfMarker_37() const { return ___GetMousePointerEventDataPerfMarker_37; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetMousePointerEventDataPerfMarker_37() { return &___GetMousePointerEventDataPerfMarker_37; }
	inline void set_GetMousePointerEventDataPerfMarker_37(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetMousePointerEventDataPerfMarker_37 = value;
	}

	inline static int32_t get_offset_of_UpdateMousePointerEventDataPerfMarker_38() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t76F66FFFC2F805CEB169ABB00F69053EA20B6E99_StaticFields, ___UpdateMousePointerEventDataPerfMarker_38)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateMousePointerEventDataPerfMarker_38() const { return ___UpdateMousePointerEventDataPerfMarker_38; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateMousePointerEventDataPerfMarker_38() { return &___UpdateMousePointerEventDataPerfMarker_38; }
	inline void set_UpdateMousePointerEventDataPerfMarker_38(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateMousePointerEventDataPerfMarker_38 = value;
	}

	inline static int32_t get_offset_of_ResetMousePointerEventDataPerfMarker_39() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t76F66FFFC2F805CEB169ABB00F69053EA20B6E99_StaticFields, ___ResetMousePointerEventDataPerfMarker_39)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ResetMousePointerEventDataPerfMarker_39() const { return ___ResetMousePointerEventDataPerfMarker_39; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ResetMousePointerEventDataPerfMarker_39() { return &___ResetMousePointerEventDataPerfMarker_39; }
	inline void set_ResetMousePointerEventDataPerfMarker_39(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ResetMousePointerEventDataPerfMarker_39 = value;
	}

	inline static int32_t get_offset_of_OnSourceDetectedPerfMarker_40() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t76F66FFFC2F805CEB169ABB00F69053EA20B6E99_StaticFields, ___OnSourceDetectedPerfMarker_40)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnSourceDetectedPerfMarker_40() const { return ___OnSourceDetectedPerfMarker_40; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnSourceDetectedPerfMarker_40() { return &___OnSourceDetectedPerfMarker_40; }
	inline void set_OnSourceDetectedPerfMarker_40(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnSourceDetectedPerfMarker_40 = value;
	}

	inline static int32_t get_offset_of_OnSourceLostPerfMarker_41() { return static_cast<int32_t>(offsetof(MixedRealityInputModule_t76F66FFFC2F805CEB169ABB00F69053EA20B6E99_StaticFields, ___OnSourceLostPerfMarker_41)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnSourceLostPerfMarker_41() const { return ___OnSourceLostPerfMarker_41; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnSourceLostPerfMarker_41() { return &___OnSourceLostPerfMarker_41; }
	inline void set_OnSourceLostPerfMarker_41(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnSourceLostPerfMarker_41 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Physics.RayStep[]
struct RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C  m_Items[1];

public:
	inline RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  m_Items[1];

public:
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__83>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CRaiseSourceDetectedU3Ed__83_t3AB1C3A53168AD67F2F99E828066D344D79C7B5B_m389F0C6F9457148D28A1898D299BABD985AEF2AC_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CRaiseSourceDetectedU3Ed__83_t3AB1C3A53168AD67F2F99E828066D344D79C7B5B * ___stateMachine1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityObjectExtensions_IsNull_TisRuntimeObject_mAB9CF24417EAC34F7ECC26A161158490BE15A463_gshared (RuntimeObject * ___interface0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__69>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__69_t2C38FD5FEB6E8495C49026132CE012E15CE70F35_mDB365E64058510072F725FB50DECCC912C309807_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartU3Ed__69_t2C38FD5FEB6E8495C49026132CE012E15CE70F35 * ___stateMachine1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_gshared_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Vector3>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_gshared (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnsureInputSystemValidU3Ed__4_t424E31491A983DD9C3C7D47CE1F8AB8D229284CC_m4871D54A5E1455939B9660DBABDA19462CFDDAAC_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject ** ___awaiter0, U3CEnsureInputSystemValidU3Ed__4_t424E31491A983DD9C3C7D47CE1F8AB8D229284CC * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t87FC0C2ED9C76D28865B69B198B310238401E375_mA1493D95FE0134CDF8A431D667B48B57738A036C_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartU3Ed__2_t87FC0C2ED9C76D28865B69B198B310238401E375 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnsureInputSystemValidU3Ed__4_tCF34C36AA551AD9C2FEB35D21B884AC4356CD8CE_m78B52DF7B6979908CB8D7CF32718AE0CCD5A966F_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject ** ___awaiter0, U3CEnsureInputSystemValidU3Ed__4_tCF34C36AA551AD9C2FEB35D21B884AC4356CD8CE * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t035FE53428BD664E75786F7B5DA5A565D39C3744_mBA89AFBE17E9186D1D1076D81D1B4F8CB300F6C9_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartU3Ed__2_t035FE53428BD664E75786F7B5DA5A565D39C3744 * ___stateMachine1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C  Dictionary_2_GetEnumerator_m17437D82A5AF502166F10DD12B5C5830DDB95444_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mEEAA9A380252BB2F9B2403853F4C00F2F643ADC4_gshared (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m7567E65C01E35A09AD2AD4814D708A8E76469D31_gshared (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<System.Object>(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method);

// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Physics.FocusDetails::get_Object()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * FocusDetails_get_Object_m68F83AC2327FBE5DE0E5F80E9BBDCA58CA73C6FB_inline (FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * __this, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * EventSystem_get_current_m6DCD04BC8A3C673A2961DB3BC373EDC0BEAD8251 (const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2 (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___eventSystem0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::get_CurrentPointerTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PointerData_get_CurrentPointerTarget_m4CEF49DAB0DA389D95359244737E2211CEDDA158 (PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::set_PreviousPointerTarget(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerData_set_PreviousPointerTarget_mDD38F5FCA7E23E611FEEB7D072B916EDF85322D3_inline (PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.FocusDetails::set_Object(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_Object_m30FB9974ED765EFDE6DC1F1ED409A8C773D637C9_inline (FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.FocusDetails::set_LastRaycastHit(Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_LastRaycastHit_mF8FE6AB2514195D327CDCE7BC94297CFF4B772DD_inline (FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * __this, MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.FocusDetails::set_LastGraphicsRaycastResult(UnityEngine.EventSystems.RaycastResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_LastGraphicsRaycastResult_m6ADB872A1EF9D96084392A07F778F20FB93A7405_inline (FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * __this, RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::set_RayStepIndex(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerData_set_RayStepIndex_m8C8B202BC436CE5801573D35206B155D89ED2997_inline (PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Origin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Origin_m034712DDFB7E01FDA9C9617CB28639D9DE01C9E3_inline (RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::set_StartPoint(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerData_set_StartPoint_mDAAF1D0D69FD9C8993AACA4EE1D32734D01B6DC5_inline (PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.FocusDetails::set_RayDistance(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_RayDistance_mB1948795164CD3E1DBE6E7903EFE56F026966859_inline (FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * __this, float ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.FocusDetails::set_Point(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_Point_m0A2843EE0D472F64345CE08080C202954ACA5413_inline (FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.FocusDetails::set_Normal(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_Normal_mE8874E62D300C5C10734F3A696AC203DA33BF92A_inline (FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RayStep_get_Length_mEAEDEEAE913CDCAE89B2C3E212E0645382FF8078_inline (RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Terminus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Terminus_m0A2DA663A388B9203959E103297FA6567F47DAC5_inline (RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Direction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Direction_m4C8978B9C17A38E7AC7F5673F9C0C37BFBAAD2AF_inline (RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m56EB454031EABB53BA35FECF3F61A7E2332A2521_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::get_Point()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_Point_mB1F377C7630DB8D010A0AD61AA19A7B993DB2FDF_inline (FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.FocusDetails::set_PointLocalSpace(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_PointLocalSpace_m0E12BB09FFE85A2A2CFE0BEF2DC717B24195C70B_inline (FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::get_Normal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_Normal_m3E037695B4FD888DC3024DB32103980EF37A0209_inline (FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_InverseTransformDirection_m9EB6F7A2598FD8D6B52F0A6EBA96A3BAAF68D696 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.FocusDetails::set_NormalLocalSpace(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_NormalLocalSpace_m5FD188667AAF3119C658AC53665E50A92E48277C_inline (FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6 (const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::get_PointLocalSpace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_PointLocalSpace_mBBEFEC7DBC6CE910E4DC1C34B1F2396E7AC3493C_inline (FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::get_NormalLocalSpace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_NormalLocalSpace_m7804F189BFC2124E647B403AABB2134FD1529B93_inline (FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Physics.RayStep::Contains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RayStep_Contains_mABA366ECA13C4D0EEDCC4B9421C9B2CCAA3ADEE0 (RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Physics.FocusDetails Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::get_Details()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F  PointerData_get_Details_mA5B7DE41F6CBAE64AA7294580ACCBC4AF35F6AA4_inline (PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m519B1E8F2F1E2101ADF863401FCAE38210395368 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::Equals(Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerData_Equals_mC85BA1D52B4168F295DC28528173F63644727055 (PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * __this, PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * ___other0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector4_op_Implicit_mFAF4066991B0091223DB22E35C4290C43E5913AB (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___v0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::get_gameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF_inline (RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::get_InputSourceType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerPreferences_get_InputSourceType_mFAB759E26839A0C456EC36B3E4A8791BE715F7ED_inline (PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF * __this, const RuntimeMethod* method);
// System.Type Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::get_PointerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * PointerPreferences_get_PointerType_m5CD585090BF185ED2DEED086C9F00FA2E54A2BF9_inline (PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.PointerBehavior Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::get_Right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerPreferences_get_Right_m22149512F225377402748969D54D340E23BEF8E8_inline (PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.PointerBehavior Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::get_Left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerPreferences_get_Left_m6915D84CCB5D7E90283A3FD0B86EEFC977E5ACE2_inline (PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.PointerBehavior Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::get_Other()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerPreferences_get_Other_mEA42BB6CBCFECF8F3D3A9023714080D0A9E53BBB_inline (PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::set_Right(Microsoft.MixedReality.Toolkit.Input.PointerBehavior)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerPreferences_set_Right_m42298AACBAF58BC8BD0EC2151E18F4CA3312A7B7_inline (PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::set_Left(Microsoft.MixedReality.Toolkit.Input.PointerBehavior)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerPreferences_set_Left_m7EF3D089339381494C3C0814C96953A9A245B646_inline (PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::set_Other(Microsoft.MixedReality.Toolkit.Input.PointerBehavior)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerPreferences_set_Other_m880B35DD6BBBC81B83CD65B5F52BD870A261CC8B_inline (PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::EnsureInputSystemValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * InputSystemGlobalHandlerListener_EnsureInputSystemValid_mE8C22AA252C0250AB4494635137A0ACCC6C66DD3 (InputSystemGlobalHandlerListener_t6D199696B69A68F0DB57E685C5A0D3656F417833 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__83>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CRaiseSourceDetectedU3Ed__83_t3AB1C3A53168AD67F2F99E828066D344D79C7B5B_m389F0C6F9457148D28A1898D299BABD985AEF2AC (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CRaiseSourceDetectedU3Ed__83_t3AB1C3A53168AD67F2F99E828066D344D79C7B5B * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CRaiseSourceDetectedU3Ed__83_t3AB1C3A53168AD67F2F99E828066D344D79C7B5B *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CRaiseSourceDetectedU3Ed__83_t3AB1C3A53168AD67F2F99E828066D344D79C7B5B_m389F0C6F9457148D28A1898D299BABD985AEF2AC_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<Microsoft.MixedReality.Toolkit.Input.GazeProvider>(!!0)
inline bool UnityObjectExtensions_IsNull_TisGazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764_mDB9EC825667B69C463D0AE6B1F4F7253381856BE (GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * ___interface0, const RuntimeMethod* method)
{
	return ((  bool (*) (GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 *, const RuntimeMethod*))UnityObjectExtensions_IsNull_TisRuntimeObject_mAB9CF24417EAC34F7ECC26A161158490BE15A463_gshared)(___interface0, method);
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m95E1676849A6E08FEFBE84E7545BCED6CA18A81A (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__83::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRaiseSourceDetectedU3Ed__83_MoveNext_mF839D354AC2FE38E5C40076AE122F1837E27AAED (U3CRaiseSourceDetectedU3Ed__83_t3AB1C3A53168AD67F2F99E828066D344D79C7B5B * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__83::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRaiseSourceDetectedU3Ed__83_SetStateMachine_mE96AC442B16FCEF308A70992996C0E803CE2FE2C (U3CRaiseSourceDetectedU3Ed__83_t3AB1C3A53168AD67F2F99E828066D344D79C7B5B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider::<>n__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeProvider_U3CU3En__0_m72EAA8B63CE6DAC2839779EE80CA72138D08EDAC (GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__69>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__69_t2C38FD5FEB6E8495C49026132CE012E15CE70F35_mDB365E64058510072F725FB50DECCC912C309807 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartU3Ed__69_t2C38FD5FEB6E8495C49026132CE012E15CE70F35 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CStartU3Ed__69_t2C38FD5FEB6E8495C49026132CE012E15CE70F35 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__69_t2C38FD5FEB6E8495C49026132CE012E15CE70F35_mDB365E64058510072F725FB50DECCC912C309807_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider::RaiseSourceDetected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeProvider_RaiseSourceDetected_m73B7B7FF6B67CA9972DAB561D0FAD8781890A27A (GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__69::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__69_MoveNext_mAD47C6E5B99887CA1AA661E3F823BD78C1FD8D8D (U3CStartU3Ed__69_t2C38FD5FEB6E8495C49026132CE012E15CE70F35 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__69::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__69_SetStateMachine_m3BCD04F08437E5E4206FA77CA1F8F90F88279C84 (U3CStartU3Ed__69_t2C38FD5FEB6E8495C49026132CE012E15CE70F35 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.GenericPointer::.ctor(System.String,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericPointer__ctor_mE5C24E5D3099B40529939351D826603CE519D1E7 (GenericPointer_tFF914BF1E1E3CF91EBEFBC364A586C28DACBBCE7 * __this, String_t* ___pointerName0, RuntimeObject* ___inputSourceParent1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.GenericPointer::set_PrioritizedLayerMasksOverride(UnityEngine.LayerMask[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GenericPointer_set_PrioritizedLayerMasksOverride_m1ED948EDB348C3DCE672766D76E8F0F56FDFD29B_inline (GenericPointer_tFF914BF1E1E3CF91EBEFBC364A586C28DACBBCE7 * __this, LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.GenericPointer::set_IsInteractionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericPointer_set_IsInteractionEnabled_m9AC3F99DAF7BFE02AB1E0ADBD33338548EE2F96C (GenericPointer_tFF914BF1E1E3CF91EBEFBC364A586C28DACBBCE7 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::get_IsEyeTrackingEnabledAndValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GazeProvider_get_IsEyeTrackingEnabledAndValid_m773EC674F457F4E306A1DD1C9115A22E92BF02FD (GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseGenericInputSource::set_SourceType(Microsoft.MixedReality.Toolkit.Input.InputSourceType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseGenericInputSource_set_SourceType_mD85593BF235644DBB2ABD35C22C37A97D3CAD7F0_inline (BaseGenericInputSource_t983CE64ED607AD7D615AE906B29D78B89BC4B6F9 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.GazeProvider::get_LatestEyeGaze()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  GazeProvider_get_LatestEyeGaze_mC1C30DFCFE1751CE87AACD55C93F03E8E9AA6688_inline (GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.GazeProvider::get_UseHeadGazeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GazeProvider_get_UseHeadGazeOverride_m2117F17C99003FA8F0C1AC81D054467700C19210_inline (GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * __this, const RuntimeMethod* method);
// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.GazeProvider::get_overrideHeadPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  GazeProvider_get_overrideHeadPosition_mEF87618EDA3357AE28540B716597F1D6352828CD_inline (GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *, const RuntimeMethod*))Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_gshared_inline)(__this, method);
}
// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.GazeProvider::get_overrideHeadForward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  GazeProvider_get_overrideHeadForward_m01B3D6B554D9C1EDB7FE737D53117352902B0EB6_inline (GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Vector3>::get_Value()
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *, const RuntimeMethod*))Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider::set_overrideHeadPosition(System.Nullable`1<UnityEngine.Vector3>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GazeProvider_set_overrideHeadPosition_mA15E9676073BF3BBB484CC80124AD4EB341E27DD_inline (GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * __this, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider::set_overrideHeadForward(System.Nullable`1<UnityEngine.Vector3>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GazeProvider_set_overrideHeadForward_m7DC6A8A6B55EB67AB13ABC2D5869F79DC021BC59_inline (GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * __this, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_InverseTransformPoint_m9B44BC9E3C6C9029E8FD10A89643FE3B41F36754 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_InverseTransformDirection_m92B2D28AD4D601192CD9BA141B93C0E066EF7A8A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldDirection0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_TransformPoint_m8EFBEFDC9C39D4949CF8D19075DB3CAD06986502 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_TransformDirection_mE50A51C16706799311978145289B6FAA13D1F55A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localDirection0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.GenericPointer::get_Rays()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA* GenericPointer_get_Rays_mDBD09782CD382FBC419BC1F71FE583375E8E290F_inline (GenericPointer_tFF914BF1E1E3CF91EBEFBC364A586C28DACBBCE7 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.RayStep::UpdateRayStep(UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayStep_UpdateRayStep_mC786494602DEBF26F813494D2927707E3B31EE22 (RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___terminus1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::get_None()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  MixedRealityInputAction_get_None_m6F2B10042303E1F456F501B9E6BB804C1EEC4CA2_inline (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE5A5890EF869A4A63D48CAE07D89F63DA8D79785 (U3CU3Ec_t0F6AC43D4D871BC09215158A773B76836B7F3026 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___predicate0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions::GetAwaiter(UnityEngine.WaitUntil)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * AwaiterExtensions_GetAwaiter_mF20B1EFB67A119217295313D9515381D5D058E37 (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___instruction0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_m384C7BCE6258DE0C6D6CC3E0E16058A989033A03_inline (SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CEnsureInputSystemValidU3Ed__4_t424E31491A983DD9C3C7D47CE1F8AB8D229284CC_m49B82F3673C9EC419C693780276113BF027A606F (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A ** ___awaiter0, U3CEnsureInputSystemValidU3Ed__4_t424E31491A983DD9C3C7D47CE1F8AB8D229284CC * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A **, U3CEnsureInputSystemValidU3Ed__4_t424E31491A983DD9C3C7D47CE1F8AB8D229284CC *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnsureInputSystemValidU3Ed__4_t424E31491A983DD9C3C7D47CE1F8AB8D229284CC_m4871D54A5E1455939B9660DBABDA19462CFDDAAC_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_GetResult_m26F1D8A16049FE28DBD3F8984CC206197FC92429 (SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_MoveNext_m054EF9A51253DC3DA162A7630EEBA29AC27B4530 (U3CEnsureInputSystemValidU3Ed__4_t424E31491A983DD9C3C7D47CE1F8AB8D229284CC * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_m19C77F43EF8A8C7FDBADBFE65F0E1986C7567861 (U3CEnsureInputSystemValidU3Ed__4_t424E31491A983DD9C3C7D47CE1F8AB8D229284CC * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t87FC0C2ED9C76D28865B69B198B310238401E375_mA1493D95FE0134CDF8A431D667B48B57738A036C (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartU3Ed__2_t87FC0C2ED9C76D28865B69B198B310238401E375 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CStartU3Ed__2_t87FC0C2ED9C76D28865B69B198B310238401E375 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t87FC0C2ED9C76D28865B69B198B310238401E375_mA1493D95FE0134CDF8A431D667B48B57738A036C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_MoveNext_mC76C76E6ED689D38CDDA88D877E382FA7EFA2F06 (U3CStartU3Ed__2_t87FC0C2ED9C76D28865B69B198B310238401E375 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_SetStateMachine_m2F5DBB982766D5E1E77C261E329FDAD7BB6679FD (U3CStartU3Ed__2_t87FC0C2ED9C76D28865B69B198B310238401E375 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0818EAAEEA7A1F956D4486864F13F0B0DB3DC142 (U3CU3Ec_t8751182FFB7410C8B81BCA7DE7E0706E992AABFE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CEnsureInputSystemValidU3Ed__4_tCF34C36AA551AD9C2FEB35D21B884AC4356CD8CE_m0E9AD5E6BDD5E16BF62BA9E9AFBCE6F48C449C84 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A ** ___awaiter0, U3CEnsureInputSystemValidU3Ed__4_tCF34C36AA551AD9C2FEB35D21B884AC4356CD8CE * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A **, U3CEnsureInputSystemValidU3Ed__4_tCF34C36AA551AD9C2FEB35D21B884AC4356CD8CE *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnsureInputSystemValidU3Ed__4_tCF34C36AA551AD9C2FEB35D21B884AC4356CD8CE_m78B52DF7B6979908CB8D7CF32718AE0CCD5A966F_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_MoveNext_m9080772C2A22ABC0F4175CCFC37E8139EAA111AE (U3CEnsureInputSystemValidU3Ed__4_tCF34C36AA551AD9C2FEB35D21B884AC4356CD8CE * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_mD5AEDD28CE3602678D891EF3EB9299D1A125D1F1 (U3CEnsureInputSystemValidU3Ed__4_tCF34C36AA551AD9C2FEB35D21B884AC4356CD8CE * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener::EnsureInputSystemValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * InputSystemGlobalListener_EnsureInputSystemValid_m92EF9655943E7B556FF0B1BD961C1A48682A1F45 (InputSystemGlobalListener_t35C2E6176D79EADF5B304B877FE7559F42B70EF9 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t035FE53428BD664E75786F7B5DA5A565D39C3744_mBA89AFBE17E9186D1D1076D81D1B4F8CB300F6C9 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartU3Ed__2_t035FE53428BD664E75786F7B5DA5A565D39C3744 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CStartU3Ed__2_t035FE53428BD664E75786F7B5DA5A565D39C3744 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t035FE53428BD664E75786F7B5DA5A565D39C3744_mBA89AFBE17E9186D1D1076D81D1B4F8CB300F6C9_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_MoveNext_m596CBB5CC7B52141A30082389534710D94E9C1D3 (U3CStartU3Ed__2_t035FE53428BD664E75786F7B5DA5A565D39C3744 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_SetStateMachine_m7975814C93B06FD756629C74D4D889F336DF8552 (U3CStartU3Ed__2_t035FE53428BD664E75786F7B5DA5A565D39C3744 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m3972B2C66691EA6DF91A19CEF3521B7C2679D7A1 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16_U3CU3Em__Finally1_mBED9E87AD6E003AD009A770C9F1621775C025378 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>::GetEnumerator()
inline Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9  Dictionary_2_GetEnumerator_m272B0D799E55D4AFEF7503463F62F0A6181E1B23 (Dictionary_2_t99258040B667AD054EDE09515EFC6475271347D4 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9  (*) (Dictionary_2_t99258040B667AD054EDE09515EFC6475271347D4 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m17437D82A5AF502166F10DD12B5C5830DDB95444_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>::get_Current()
inline KeyValuePair_2_t2E7D57D6DE02C3C4616E9788456652661A076A00  Enumerator_get_Current_m1A1FFE750FA22BC282BB1627120FACD66DC06688_inline (Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t2E7D57D6DE02C3C4616E9788456652661A076A00  (*) (Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9 *, const RuntimeMethod*))Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>::get_Value()
inline PointerData_tFFB8BD6689DF7417692F19AD49E7AAF716C1F95E * KeyValuePair_2_get_Value_mC46BD470B0652003AFBFB8B04AEF73D7C6DB159A_inline (KeyValuePair_2_t2E7D57D6DE02C3C4616E9788456652661A076A00 * __this, const RuntimeMethod* method)
{
	return ((  PointerData_tFFB8BD6689DF7417692F19AD49E7AAF716C1F95E * (*) (KeyValuePair_2_t2E7D57D6DE02C3C4616E9788456652661A076A00 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>::MoveNext()
inline bool Enumerator_MoveNext_m740A93CA40F5086CBE6AAD1953511F29C0C79677 (Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9 *, const RuntimeMethod*))Enumerator_MoveNext_mEEAA9A380252BB2F9B2403853F4C00F2F643ADC4_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16_System_IDisposable_Dispose_mB74E74E1600632EE0B64E39B2F7CDC666D7FEFC2 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>::Dispose()
inline void Enumerator_Dispose_m4C03F360649AEC870F575452D949D5AA7F5E524E (Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9 *, const RuntimeMethod*))Enumerator_Dispose_m7567E65C01E35A09AD2AD4814D708A8E76469D31_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16__ctor_m10BC195E4E2DF8D1DFF6FB8A9F62437A2D0D1A98 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.Generic.IEnumerable<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_Generic_IEnumerableU3CMicrosoft_MixedReality_Toolkit_Input_IMixedRealityPointerU3E_GetEnumerator_m7C15E1FA4CDC13AD38F984B03681EFF53A6F418F (U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerInputModule/MouseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseState__ctor_m16EF8D45AF8A178368547BD1CE4FBF9DBC563605 (MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAC66AA18C6C2B913FA7AF73E9F54B97E495B3883 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourceStateEventData>(UnityEngine.EventSystems.BaseEventData)
inline SourceStateEventData_tF68358C62720A3DE79F698D981E3F0C7E6023F2F * ExecuteEvents_ValidateEventData_TisSourceStateEventData_tF68358C62720A3DE79F698D981E3F0C7E6023F2F_m05F9622A822012A8FC1E8B14ACDD13CF099183B4 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourceStateEventData_tF68358C62720A3DE79F698D981E3F0C7E6023F2F * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_tACD69D8464067CAB384CC33C478335A93920D0C2 * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tACD69D8464067CAB384CC33C478335A93920D0C2_mD4D3917CBBC369EA129D9A0BD13AFB95D19B6D51 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_tACD69D8464067CAB384CC33C478335A93920D0C2 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_t424CC2521693730C3C44C26B3EB1E7CA4F3529EA * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t424CC2521693730C3C44C26B3EB1E7CA4F3529EA_m62CD04716E20AF90C6519E22C41D7068039C0135 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_t424CC2521693730C3C44C26B3EB1E7CA4F3529EA * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_tEEC6D7835C6D2171E6766178D4C5272FAE422494 * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tEEC6D7835C6D2171E6766178D4C5272FAE422494_mC92DDC0CD1DE7EBC7BE983B200F12104F8AF5963 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_tEEC6D7835C6D2171E6766178D4C5272FAE422494 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_t0C3E52D1B6B037B26D3125432D5FC5A1632236D5 * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t0C3E52D1B6B037B26D3125432D5FC5A1632236D5_mEB5A92597134F8DE06AD8AE44FE17AC57793ECE9 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_t0C3E52D1B6B037B26D3125432D5FC5A1632236D5 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>(UnityEngine.EventSystems.BaseEventData)
inline SourcePoseEventData_1_tFE8555246DDB23EE10ACB4694CD556E6CB2EA1EA * ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tFE8555246DDB23EE10ACB4694CD556E6CB2EA1EA_m794B7BC2DE09AE0B32C41FD3CBBF54DE7269BDAB (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SourcePoseEventData_1_tFE8555246DDB23EE10ACB4694CD556E6CB2EA1EA * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.FocusEventData>(UnityEngine.EventSystems.BaseEventData)
inline FocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F * ExecuteEvents_ValidateEventData_TisFocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F_mA0CEDB25413DA6F1F22CBCE7562C74043E88256B (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  FocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData>(UnityEngine.EventSystems.BaseEventData)
inline MixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B * ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B_mB609AEAF0D60B613C32BB4235A06C54B19F67889 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  MixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler>(!!0)
inline bool UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_t473158012DB9CEDED34D3E67CDF460FEC832B9C6_m510EE68187412AC23FD57F109B90D5FAA40469C8 (RuntimeObject* ___interface0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))UnityObjectExtensions_IsNull_TisRuntimeObject_mAB9CF24417EAC34F7ECC26A161158490BE15A463_gshared)(___interface0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler>(!!0)
inline bool UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_mDECD9C5C329204B6BDD8823D339F9C9D9A0C1C23 (RuntimeObject* ___interface0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))UnityObjectExtensions_IsNull_TisRuntimeObject_mAB9CF24417EAC34F7ECC26A161158490BE15A463_gshared)(___interface0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_tA8DA12BEACD164A612EE93A1868A0EF98A7193CA * ExecuteEvents_ValidateEventData_TisInputEventData_1_tA8DA12BEACD164A612EE93A1868A0EF98A7193CA_m4BA25FFBEC9B7D5746EED774755CCC86853AF21A (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_tA8DA12BEACD164A612EE93A1868A0EF98A7193CA * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_tA191CDE875C3A37876AF9EBEC1082E9A97791713 * ExecuteEvents_ValidateEventData_TisInputEventData_1_tA191CDE875C3A37876AF9EBEC1082E9A97791713_m3BD6F5316F05BE269929A602E4D601BB4D9730A5 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_tA191CDE875C3A37876AF9EBEC1082E9A97791713 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_t72EB43FD8BF708F94C8860821D368A0E9B230155 * ExecuteEvents_ValidateEventData_TisInputEventData_1_t72EB43FD8BF708F94C8860821D368A0E9B230155_m62A87FAEC646F374D4141B957C987FBBF26E24C6 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_t72EB43FD8BF708F94C8860821D368A0E9B230155 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_tF68721C6A55FBBB8C3B93B2EB342522FAD3F7716 * ExecuteEvents_ValidateEventData_TisInputEventData_1_tF68721C6A55FBBB8C3B93B2EB342522FAD3F7716_m58A38EED48A64E53564CE960FC7E587AA59EDB44 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_tF68721C6A55FBBB8C3B93B2EB342522FAD3F7716 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_t8BA709B500978D2FF6CBE02840D448EC4F1B96FF * ExecuteEvents_ValidateEventData_TisInputEventData_1_t8BA709B500978D2FF6CBE02840D448EC4F1B96FF_m1E3E202BC14BE1ECF1091269C877D5BD62C32234 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_t8BA709B500978D2FF6CBE02840D448EC4F1B96FF * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler>(!!0)
inline bool UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t7B31870B1D549DCB19CAC6B518B0AB3A454180FB_m434186312034A181EFF425A69B16C31411FE20A4 (RuntimeObject* ___interface0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))UnityObjectExtensions_IsNull_TisRuntimeObject_mAB9CF24417EAC34F7ECC26A161158490BE15A463_gshared)(___interface0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.SpeechEventData>(UnityEngine.EventSystems.BaseEventData)
inline SpeechEventData_t5107F68604DE41246F6BCAAA3E0A436668499454 * ExecuteEvents_ValidateEventData_TisSpeechEventData_t5107F68604DE41246F6BCAAA3E0A436668499454_mA03D959893C9A5100B4FD4AC8765DA8D3E2A26C9 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  SpeechEventData_t5107F68604DE41246F6BCAAA3E0A436668499454 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler>(!!0)
inline bool UnityObjectExtensions_IsNull_TisIMixedRealitySpeechHandler_t4BE1C6AE73FCF96206DDC65F62AF13709A32565F_m2E617E072A7F7715BD1A1FF12DB6330839EB8072 (RuntimeObject* ___interface0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))UnityObjectExtensions_IsNull_TisRuntimeObject_mAB9CF24417EAC34F7ECC26A161158490BE15A463_gshared)(___interface0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.DictationEventData>(UnityEngine.EventSystems.BaseEventData)
inline DictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111 * ExecuteEvents_ValidateEventData_TisDictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111_m5A19C57392C80A20F40581BFC976CD55F8B7C884 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  DictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_t9912FB5BCD3E745BE7F975C9F3E0EA1DCAC114DA * ExecuteEvents_ValidateEventData_TisInputEventData_1_t9912FB5BCD3E745BE7F975C9F3E0EA1DCAC114DA_m84A289B8354064BDFE63E5D7F8ACCD1A3FBA9F7F (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_t9912FB5BCD3E745BE7F975C9F3E0EA1DCAC114DA * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>>(UnityEngine.EventSystems.BaseEventData)
inline InputEventData_1_t4EF18F529455F87A02DD28A49212B7B093A97CF1 * ExecuteEvents_ValidateEventData_TisInputEventData_1_t4EF18F529455F87A02DD28A49212B7B093A97CF1_mED1B4FBB47980E0B4B3D956EB44B334BE918E575 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  InputEventData_1_t4EF18F529455F87A02DD28A49212B7B093A97CF1 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData>(UnityEngine.EventSystems.BaseEventData)
inline HandTrackingInputEventData_t4D2EA53F7605800166D3AA5A8A34EFF4C6CCB139 * ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t4D2EA53F7605800166D3AA5A8A34EFF4C6CCB139_mFC9ADF3708EAAC27E6DFB51FC5B78B86B31CC9F1 (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___data0, const RuntimeMethod* method)
{
	return ((  HandTrackingInputEventData_t4D2EA53F7605800166D3AA5A8A34EFF4C6CCB139 * (*) (BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_mB10C34F36FE6FC2ADBDD7B7CF3DEA6862BE066BA_gshared)(___data0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7C851694F9012647C858877FCAD78420F598F1C2 (U3CU3Ec_t4D8185309F9B1907934895922AA541E0E2B66979 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_m2A9C5852FDDF2F191716E29F8BD5E5478E1EEA87 (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_mC2227A5AAC0C2D1C5F2C97BB3A5937B8CE368ACA (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_mDA03BFD5DF47FFF880309A31A2DC8454EDFAB08B (intptr_t ___markerPtr0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::get_StartPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PointerData_get_StartPoint_mBA0BA7EC963FD417A7836D10A96C98BC4F21F20A (PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 StartPoint { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CStartPointU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::set_StartPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData_set_StartPoint_mDAAF1D0D69FD9C8993AACA4EE1D32734D01B6DC5 (PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 StartPoint { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CStartPointU3Ek__BackingField_1(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Physics.FocusDetails Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::get_Details()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F  PointerData_get_Details_mA5B7DE41F6CBAE64AA7294580ACCBC4AF35F6AA4 (PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * __this, const RuntimeMethod* method)
{
	{
		// get => focusDetails;
		FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F  L_0 = __this->get_focusDetails_2();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::set_Details(Microsoft.MixedReality.Toolkit.Physics.FocusDetails)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData_set_Details_m8417BDAD792900493865DAE9CB586B1446BBADB6 (PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * __this, FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F  ___value0, const RuntimeMethod* method)
{
	{
		// set => focusDetails = value;
		FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F  L_0 = ___value0;
		__this->set_focusDetails_2(L_0);
		return;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::get_CurrentPointerTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PointerData_get_CurrentPointerTarget_m4CEF49DAB0DA389D95359244737E2211CEDDA158 (PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject CurrentPointerTarget => focusDetails.Object;
		FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_0 = __this->get_address_of_focusDetails_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = FocusDetails_get_Object_m68F83AC2327FBE5DE0E5F80E9BBDCA58CA73C6FB_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::get_PreviousPointerTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * PointerData_get_PreviousPointerTarget_m54D61BB38E03B68885C6C4893703E74ED8453B61 (PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject PreviousPointerTarget { get; private set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CPreviousPointerTargetU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::set_PreviousPointerTarget(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData_set_PreviousPointerTarget_mDD38F5FCA7E23E611FEEB7D072B916EDF85322D3 (PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject PreviousPointerTarget { get; private set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_U3CPreviousPointerTargetU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::get_RayStepIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerData_get_RayStepIndex_m0A7B3EA189EF8D8ACCEB480FBC8270CB55CD9EC5 (PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * __this, const RuntimeMethod* method)
{
	{
		// public int RayStepIndex { get; private set; }
		int32_t L_0 = __this->get_U3CRayStepIndexU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::set_RayStepIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData_set_RayStepIndex_m8C8B202BC436CE5801573D35206B155D89ED2997 (PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int RayStepIndex { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CRayStepIndexU3Ek__BackingField_4(L_0);
		return;
	}
}
// UnityEngine.EventSystems.PointerEventData Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::get_GraphicEventData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * PointerData_get_GraphicEventData_mC230E23D7091A7654B08FD7426DED88A74B52521 (PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (graphicData == null)
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_0 = __this->get_graphicData_5();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		// graphicData = new PointerEventData(EventSystem.current);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_1;
		L_1 = EventSystem_get_current_m6DCD04BC8A3C673A2961DB3BC373EDC0BEAD8251(/*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_2 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)il2cpp_codegen_object_new(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2(L_2, L_1, /*hidden argument*/NULL);
		__this->set_graphicData_5(L_2);
	}

IL_0018:
	{
		// return graphicData;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_3 = __this->get_graphicData_5();
		return L_3;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::get_IsCurrentPointerTargetInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerData_get_IsCurrentPointerTargetInvalid_m15370BC45469AD5AE816FAF65A0F01A447809521 (PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsCurrentPointerTargetInvalid => ((CurrentPointerTarget != null && !CurrentPointerTarget.activeInHierarchy)) ||
		//     (CurrentPointerTarget == null && !ReferenceEquals(CurrentPointerTarget, null));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = PointerData_get_CurrentPointerTarget_m4CEF49DAB0DA389D95359244737E2211CEDDA158(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = PointerData_get_CurrentPointerTarget_m4CEF49DAB0DA389D95359244737E2211CEDDA158(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}

IL_001b:
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = PointerData_get_CurrentPointerTarget_m4CEF49DAB0DA389D95359244737E2211CEDDA158(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = PointerData_get_CurrentPointerTarget_m4CEF49DAB0DA389D95359244737E2211CEDDA158(__this, /*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}

IL_0033:
	{
		return (bool)0;
	}

IL_0035:
	{
		return (bool)1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData__ctor_mDA0D1BB7640121A3BB3C6BDB9B2B70FDE0B89D3B (PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * __this, RuntimeObject* ___pointer0, const RuntimeMethod* method)
{
	{
		// public PointerData(IMixedRealityPointer pointer)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Pointer = pointer;
		RuntimeObject* L_0 = ___pointer0;
		__this->set_Pointer_0(L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::UpdateHit(Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData_UpdateHit_m35255587DB40EEFFCB421CCD5FA143B2C65E2DD6 (PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * __this, PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * ___hitResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_tC8C6CA2DB07D67431BAAB603F549294D0C3E2616_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// using (UpdateHitPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0_StaticFields*)il2cpp_codegen_static_fields_for(PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0_il2cpp_TypeInfo_var))->get_UpdateHitPerfMarker_6();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (hitResult.hitObject != CurrentPointerTarget)
			PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * L_2 = ___hitResult0;
			NullCheck(L_2);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = L_2->get_hitObject_2();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
			L_4 = PointerData_get_CurrentPointerTarget_m4CEF49DAB0DA389D95359244737E2211CEDDA158(__this, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_5;
			L_5 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_3, L_4, /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_002c;
			}
		}

IL_0021:
		{
			// Pointer.OnPreCurrentPointerTargetChange();
			RuntimeObject* L_6 = __this->get_Pointer_0();
			NullCheck(L_6);
			InterfaceActionInvoker0::Invoke(32 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::OnPreCurrentPointerTargetChange() */, IMixedRealityPointer_tC8C6CA2DB07D67431BAAB603F549294D0C3E2616_il2cpp_TypeInfo_var, L_6);
		}

IL_002c:
		{
			// PreviousPointerTarget = CurrentPointerTarget;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
			L_7 = PointerData_get_CurrentPointerTarget_m4CEF49DAB0DA389D95359244737E2211CEDDA158(__this, /*hidden argument*/NULL);
			PointerData_set_PreviousPointerTarget_mDD38F5FCA7E23E611FEEB7D072B916EDF85322D3_inline(__this, L_7, /*hidden argument*/NULL);
			// focusDetails.Object = hitResult.hitObject;
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_8 = __this->get_address_of_focusDetails_2();
			PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * L_9 = ___hitResult0;
			NullCheck(L_9);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = L_9->get_hitObject_2();
			FocusDetails_set_Object_m30FB9974ED765EFDE6DC1F1ED409A8C773D637C9_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_8, L_10, /*hidden argument*/NULL);
			// focusDetails.LastRaycastHit = hitResult.raycastHit;
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_11 = __this->get_address_of_focusDetails_2();
			PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * L_12 = ___hitResult0;
			NullCheck(L_12);
			MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4  L_13 = L_12->get_raycastHit_0();
			FocusDetails_set_LastRaycastHit_mF8FE6AB2514195D327CDCE7BC94297CFF4B772DD_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_11, L_13, /*hidden argument*/NULL);
			// focusDetails.LastGraphicsRaycastResult = hitResult.graphicsRaycastResult;
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_14 = __this->get_address_of_focusDetails_2();
			PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * L_15 = ___hitResult0;
			NullCheck(L_15);
			RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  L_16 = L_15->get_graphicsRaycastResult_1();
			FocusDetails_set_LastGraphicsRaycastResult_m6ADB872A1EF9D96084392A07F778F20FB93A7405_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_14, L_16, /*hidden argument*/NULL);
			// if (hitResult.rayStepIndex >= 0)
			PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * L_17 = ___hitResult0;
			NullCheck(L_17);
			int32_t L_18 = L_17->get_rayStepIndex_6();
			if ((((int32_t)L_18) < ((int32_t)0)))
			{
				goto IL_00c9;
			}
		}

IL_0074:
		{
			// RayStepIndex = hitResult.rayStepIndex;
			PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * L_19 = ___hitResult0;
			NullCheck(L_19);
			int32_t L_20 = L_19->get_rayStepIndex_6();
			PointerData_set_RayStepIndex_m8C8B202BC436CE5801573D35206B155D89ED2997_inline(__this, L_20, /*hidden argument*/NULL);
			// StartPoint = hitResult.ray.Origin;
			PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * L_21 = ___hitResult0;
			NullCheck(L_21);
			RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C * L_22 = L_21->get_address_of_ray_5();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
			L_23 = RayStep_get_Origin_m034712DDFB7E01FDA9C9617CB28639D9DE01C9E3_inline((RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C *)L_22, /*hidden argument*/NULL);
			PointerData_set_StartPoint_mDAAF1D0D69FD9C8993AACA4EE1D32734D01B6DC5_inline(__this, L_23, /*hidden argument*/NULL);
			// focusDetails.RayDistance = hitResult.rayDistance;
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_24 = __this->get_address_of_focusDetails_2();
			PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * L_25 = ___hitResult0;
			NullCheck(L_25);
			float L_26 = L_25->get_rayDistance_7();
			FocusDetails_set_RayDistance_mB1948795164CD3E1DBE6E7903EFE56F026966859_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_24, L_26, /*hidden argument*/NULL);
			// focusDetails.Point = hitResult.hitPointOnObject;
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_27 = __this->get_address_of_focusDetails_2();
			PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * L_28 = ___hitResult0;
			NullCheck(L_28);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = L_28->get_hitPointOnObject_3();
			FocusDetails_set_Point_m0A2843EE0D472F64345CE08080C202954ACA5413_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_27, L_29, /*hidden argument*/NULL);
			// focusDetails.Normal = hitResult.hitNormalOnObject;
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_30 = __this->get_address_of_focusDetails_2();
			PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * L_31 = ___hitResult0;
			NullCheck(L_31);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = L_31->get_hitNormalOnObject_4();
			FocusDetails_set_Normal_mE8874E62D300C5C10734F3A696AC203DA33BF92A_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_30, L_32, /*hidden argument*/NULL);
			// }
			goto IL_0184;
		}

IL_00c9:
		{
			// RayStep firstStep = Pointer.Rays[0];
			RuntimeObject* L_33 = __this->get_Pointer_0();
			NullCheck(L_33);
			RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA* L_34;
			L_34 = InterfaceFuncInvoker0< RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Rays() */, IMixedRealityPointer_tC8C6CA2DB07D67431BAAB603F549294D0C3E2616_il2cpp_TypeInfo_var, L_33);
			NullCheck(L_34);
			int32_t L_35 = 0;
			RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C  L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
			V_2 = L_36;
			// RayStep finalStep = Pointer.Rays[Pointer.Rays.Length - 1];
			RuntimeObject* L_37 = __this->get_Pointer_0();
			NullCheck(L_37);
			RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA* L_38;
			L_38 = InterfaceFuncInvoker0< RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Rays() */, IMixedRealityPointer_tC8C6CA2DB07D67431BAAB603F549294D0C3E2616_il2cpp_TypeInfo_var, L_37);
			RuntimeObject* L_39 = __this->get_Pointer_0();
			NullCheck(L_39);
			RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA* L_40;
			L_40 = InterfaceFuncInvoker0< RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Rays() */, IMixedRealityPointer_tC8C6CA2DB07D67431BAAB603F549294D0C3E2616_il2cpp_TypeInfo_var, L_39);
			NullCheck(L_40);
			NullCheck(L_38);
			int32_t L_41 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))), (int32_t)1));
			RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C  L_42 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
			V_3 = L_42;
			// RayStepIndex = 0;
			PointerData_set_RayStepIndex_m8C8B202BC436CE5801573D35206B155D89ED2997_inline(__this, 0, /*hidden argument*/NULL);
			// StartPoint = firstStep.Origin;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
			L_43 = RayStep_get_Origin_m034712DDFB7E01FDA9C9617CB28639D9DE01C9E3_inline((RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C *)(&V_2), /*hidden argument*/NULL);
			PointerData_set_StartPoint_mDAAF1D0D69FD9C8993AACA4EE1D32734D01B6DC5_inline(__this, L_43, /*hidden argument*/NULL);
			// float rayDist = 0.0f;
			V_4 = (0.0f);
			// for (int i = 0; i < Pointer.Rays.Length; i++)
			V_5 = 0;
			goto IL_013d;
		}

IL_011b:
		{
			// rayDist += Pointer.Rays[i].Length;
			float L_44 = V_4;
			RuntimeObject* L_45 = __this->get_Pointer_0();
			NullCheck(L_45);
			RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA* L_46;
			L_46 = InterfaceFuncInvoker0< RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Rays() */, IMixedRealityPointer_tC8C6CA2DB07D67431BAAB603F549294D0C3E2616_il2cpp_TypeInfo_var, L_45);
			int32_t L_47 = V_5;
			NullCheck(L_46);
			float L_48;
			L_48 = RayStep_get_Length_mEAEDEEAE913CDCAE89B2C3E212E0645382FF8078_inline((RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C *)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47))), /*hidden argument*/NULL);
			V_4 = ((float)il2cpp_codegen_add((float)L_44, (float)L_48));
			// for (int i = 0; i < Pointer.Rays.Length; i++)
			int32_t L_49 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
		}

IL_013d:
		{
			// for (int i = 0; i < Pointer.Rays.Length; i++)
			int32_t L_50 = V_5;
			RuntimeObject* L_51 = __this->get_Pointer_0();
			NullCheck(L_51);
			RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA* L_52;
			L_52 = InterfaceFuncInvoker0< RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Rays() */, IMixedRealityPointer_tC8C6CA2DB07D67431BAAB603F549294D0C3E2616_il2cpp_TypeInfo_var, L_51);
			NullCheck(L_52);
			if ((((int32_t)L_50) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length))))))
			{
				goto IL_011b;
			}
		}

IL_014e:
		{
			// focusDetails.RayDistance = rayDist;
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_53 = __this->get_address_of_focusDetails_2();
			float L_54 = V_4;
			FocusDetails_set_RayDistance_mB1948795164CD3E1DBE6E7903EFE56F026966859_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_53, L_54, /*hidden argument*/NULL);
			// focusDetails.Point = finalStep.Terminus;
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_55 = __this->get_address_of_focusDetails_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56;
			L_56 = RayStep_get_Terminus_m0A2DA663A388B9203959E103297FA6567F47DAC5_inline((RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C *)(&V_3), /*hidden argument*/NULL);
			FocusDetails_set_Point_m0A2843EE0D472F64345CE08080C202954ACA5413_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_55, L_56, /*hidden argument*/NULL);
			// focusDetails.Normal = -finalStep.Direction;
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_57 = __this->get_address_of_focusDetails_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
			L_58 = RayStep_get_Direction_m4C8978B9C17A38E7AC7F5673F9C0C37BFBAAD2AF_inline((RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C *)(&V_3), /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
			L_59 = Vector3_op_UnaryNegation_m56EB454031EABB53BA35FECF3F61A7E2332A2521_inline(L_58, /*hidden argument*/NULL);
			FocusDetails_set_Normal_mE8874E62D300C5C10734F3A696AC203DA33BF92A_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_57, L_59, /*hidden argument*/NULL);
		}

IL_0184:
		{
			// if (hitResult.hitObject != null)
			PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * L_60 = ___hitResult0;
			NullCheck(L_60);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_61 = L_60->get_hitObject_2();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_62;
			L_62 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_61, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_62)
			{
				goto IL_01e0;
			}
		}

IL_0192:
		{
			// focusDetails.PointLocalSpace = hitResult.hitObject.transform.InverseTransformPoint(focusDetails.Point);
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_63 = __this->get_address_of_focusDetails_2();
			PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * L_64 = ___hitResult0;
			NullCheck(L_64);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_65 = L_64->get_hitObject_2();
			NullCheck(L_65);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_66;
			L_66 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_65, /*hidden argument*/NULL);
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_67 = __this->get_address_of_focusDetails_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68;
			L_68 = FocusDetails_get_Point_mB1F377C7630DB8D010A0AD61AA19A7B993DB2FDF_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_67, /*hidden argument*/NULL);
			NullCheck(L_66);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69;
			L_69 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_66, L_68, /*hidden argument*/NULL);
			FocusDetails_set_PointLocalSpace_m0E12BB09FFE85A2A2CFE0BEF2DC717B24195C70B_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_63, L_69, /*hidden argument*/NULL);
			// focusDetails.NormalLocalSpace = hitResult.hitObject.transform.InverseTransformDirection(focusDetails.Normal);
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_70 = __this->get_address_of_focusDetails_2();
			PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * L_71 = ___hitResult0;
			NullCheck(L_71);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_72 = L_71->get_hitObject_2();
			NullCheck(L_72);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_73;
			L_73 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_72, /*hidden argument*/NULL);
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_74 = __this->get_address_of_focusDetails_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75;
			L_75 = FocusDetails_get_Normal_m3E037695B4FD888DC3024DB32103980EF37A0209_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_74, /*hidden argument*/NULL);
			NullCheck(L_73);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76;
			L_76 = Transform_InverseTransformDirection_m9EB6F7A2598FD8D6B52F0A6EBA96A3BAAF68D696(L_73, L_75, /*hidden argument*/NULL);
			FocusDetails_set_NormalLocalSpace_m5FD188667AAF3119C658AC53665E50A92E48277C_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_70, L_76, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x210, FINALLY_0202);
		}

IL_01e0:
		{
			// focusDetails.PointLocalSpace = Vector3.zero;
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_77 = __this->get_address_of_focusDetails_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78;
			L_78 = Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6(/*hidden argument*/NULL);
			FocusDetails_set_PointLocalSpace_m0E12BB09FFE85A2A2CFE0BEF2DC717B24195C70B_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_77, L_78, /*hidden argument*/NULL);
			// focusDetails.NormalLocalSpace = Vector3.zero;
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_79 = __this->get_address_of_focusDetails_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80;
			L_80 = Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6(/*hidden argument*/NULL);
			FocusDetails_set_NormalLocalSpace_m5FD188667AAF3119C658AC53665E50A92E48277C_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_79, L_80, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x210, FINALLY_0202);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0202;
	}

FINALLY_0202:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(514)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(514)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x210, IL_0210)
	}

IL_0210:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::UpdateFocusLockedHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData_UpdateFocusLockedHit_mA96A920E756C8A6A469675A07331FAB2E4CA3F43 (PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_tC8C6CA2DB07D67431BAAB603F549294D0C3E2616_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// using (UpdateFocusLockedHitPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0_StaticFields*)il2cpp_codegen_static_fields_for(PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0_il2cpp_TypeInfo_var))->get_UpdateFocusLockedHitPerfMarker_7();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// PreviousPointerTarget = focusDetails.Object;
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_2 = __this->get_address_of_focusDetails_2();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
			L_3 = FocusDetails_get_Object_m68F83AC2327FBE5DE0E5F80E9BBDCA58CA73C6FB_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_2, /*hidden argument*/NULL);
			PointerData_set_PreviousPointerTarget_mDD38F5FCA7E23E611FEEB7D072B916EDF85322D3_inline(__this, L_3, /*hidden argument*/NULL);
			// if (focusDetails.Object != null && focusDetails.Object.transform != null)
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_4 = __this->get_address_of_focusDetails_2();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
			L_5 = FocusDetails_get_Object_m68F83AC2327FBE5DE0E5F80E9BBDCA58CA73C6FB_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_4, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_6;
			L_6 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_00fc;
			}
		}

IL_0035:
		{
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_7 = __this->get_address_of_focusDetails_2();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
			L_8 = FocusDetails_get_Object_m68F83AC2327FBE5DE0E5F80E9BBDCA58CA73C6FB_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_7, /*hidden argument*/NULL);
			NullCheck(L_8);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
			L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_10;
			L_10 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_00fc;
			}
		}

IL_0050:
		{
			// focusDetails.Point = focusDetails.Object.transform.TransformPoint(focusDetails.PointLocalSpace);
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_11 = __this->get_address_of_focusDetails_2();
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_12 = __this->get_address_of_focusDetails_2();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
			L_13 = FocusDetails_get_Object_m68F83AC2327FBE5DE0E5F80E9BBDCA58CA73C6FB_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_12, /*hidden argument*/NULL);
			NullCheck(L_13);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
			L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_15 = __this->get_address_of_focusDetails_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
			L_16 = FocusDetails_get_PointLocalSpace_mBBEFEC7DBC6CE910E4DC1C34B1F2396E7AC3493C_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_15, /*hidden argument*/NULL);
			NullCheck(L_14);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
			L_17 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_14, L_16, /*hidden argument*/NULL);
			FocusDetails_set_Point_m0A2843EE0D472F64345CE08080C202954ACA5413_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_11, L_17, /*hidden argument*/NULL);
			// focusDetails.Normal = focusDetails.Object.transform.TransformDirection(focusDetails.NormalLocalSpace);
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_18 = __this->get_address_of_focusDetails_2();
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_19 = __this->get_address_of_focusDetails_2();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
			L_20 = FocusDetails_get_Object_m68F83AC2327FBE5DE0E5F80E9BBDCA58CA73C6FB_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_19, /*hidden argument*/NULL);
			NullCheck(L_20);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
			L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_22 = __this->get_address_of_focusDetails_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
			L_23 = FocusDetails_get_NormalLocalSpace_m7804F189BFC2124E647B403AABB2134FD1529B93_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_22, /*hidden argument*/NULL);
			NullCheck(L_21);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
			L_24 = Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91(L_21, L_23, /*hidden argument*/NULL);
			FocusDetails_set_Normal_mE8874E62D300C5C10734F3A696AC203DA33BF92A_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_18, L_24, /*hidden argument*/NULL);
			// focusDetails.PointLocalSpace = focusDetails.Object.transform.InverseTransformPoint(focusDetails.Point);
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_25 = __this->get_address_of_focusDetails_2();
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_26 = __this->get_address_of_focusDetails_2();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
			L_27 = FocusDetails_get_Object_m68F83AC2327FBE5DE0E5F80E9BBDCA58CA73C6FB_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_26, /*hidden argument*/NULL);
			NullCheck(L_27);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
			L_28 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_27, /*hidden argument*/NULL);
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_29 = __this->get_address_of_focusDetails_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
			L_30 = FocusDetails_get_Point_mB1F377C7630DB8D010A0AD61AA19A7B993DB2FDF_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_29, /*hidden argument*/NULL);
			NullCheck(L_28);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
			L_31 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_28, L_30, /*hidden argument*/NULL);
			FocusDetails_set_PointLocalSpace_m0E12BB09FFE85A2A2CFE0BEF2DC717B24195C70B_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_25, L_31, /*hidden argument*/NULL);
			// focusDetails.NormalLocalSpace = focusDetails.Object.transform.InverseTransformDirection(focusDetails.Normal);
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_32 = __this->get_address_of_focusDetails_2();
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_33 = __this->get_address_of_focusDetails_2();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34;
			L_34 = FocusDetails_get_Object_m68F83AC2327FBE5DE0E5F80E9BBDCA58CA73C6FB_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_33, /*hidden argument*/NULL);
			NullCheck(L_34);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
			L_35 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_34, /*hidden argument*/NULL);
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_36 = __this->get_address_of_focusDetails_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
			L_37 = FocusDetails_get_Normal_m3E037695B4FD888DC3024DB32103980EF37A0209_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_36, /*hidden argument*/NULL);
			NullCheck(L_35);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
			L_38 = Transform_InverseTransformDirection_m9EB6F7A2598FD8D6B52F0A6EBA96A3BAAF68D696(L_35, L_37, /*hidden argument*/NULL);
			FocusDetails_set_NormalLocalSpace_m5FD188667AAF3119C658AC53665E50A92E48277C_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_32, L_38, /*hidden argument*/NULL);
		}

IL_00fc:
		{
			// StartPoint = Pointer.Rays[0].Origin;
			RuntimeObject* L_39 = __this->get_Pointer_0();
			NullCheck(L_39);
			RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA* L_40;
			L_40 = InterfaceFuncInvoker0< RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Rays() */, IMixedRealityPointer_tC8C6CA2DB07D67431BAAB603F549294D0C3E2616_il2cpp_TypeInfo_var, L_39);
			NullCheck(L_40);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
			L_41 = RayStep_get_Origin_m034712DDFB7E01FDA9C9617CB28639D9DE01C9E3_inline((RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C *)((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
			PointerData_set_StartPoint_mDAAF1D0D69FD9C8993AACA4EE1D32734D01B6DC5_inline(__this, L_41, /*hidden argument*/NULL);
			// for (int i = 0; i < Pointer.Rays.Length; i++)
			V_2 = 0;
			goto IL_014c;
		}

IL_011c:
		{
			// if (Pointer.Rays[i].Contains(focusDetails.Point))
			RuntimeObject* L_42 = __this->get_Pointer_0();
			NullCheck(L_42);
			RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA* L_43;
			L_43 = InterfaceFuncInvoker0< RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Rays() */, IMixedRealityPointer_tC8C6CA2DB07D67431BAAB603F549294D0C3E2616_il2cpp_TypeInfo_var, L_42);
			int32_t L_44 = V_2;
			NullCheck(L_43);
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_45 = __this->get_address_of_focusDetails_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
			L_46 = FocusDetails_get_Point_mB1F377C7630DB8D010A0AD61AA19A7B993DB2FDF_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_45, /*hidden argument*/NULL);
			bool L_47;
			L_47 = RayStep_Contains_mABA366ECA13C4D0EEDCC4B9421C9B2CCAA3ADEE0((RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C *)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44))), L_46, /*hidden argument*/NULL);
			if (!L_47)
			{
				goto IL_0148;
			}
		}

IL_013f:
		{
			// RayStepIndex = i;
			int32_t L_48 = V_2;
			PointerData_set_RayStepIndex_m8C8B202BC436CE5801573D35206B155D89ED2997_inline(__this, L_48, /*hidden argument*/NULL);
			// break;
			IL2CPP_LEAVE(0x16C, FINALLY_015e);
		}

IL_0148:
		{
			// for (int i = 0; i < Pointer.Rays.Length; i++)
			int32_t L_49 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
		}

IL_014c:
		{
			// for (int i = 0; i < Pointer.Rays.Length; i++)
			int32_t L_50 = V_2;
			RuntimeObject* L_51 = __this->get_Pointer_0();
			NullCheck(L_51);
			RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA* L_52;
			L_52 = InterfaceFuncInvoker0< RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA* >::Invoke(17 /* Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Rays() */, IMixedRealityPointer_tC8C6CA2DB07D67431BAAB603F549294D0C3E2616_il2cpp_TypeInfo_var, L_51);
			NullCheck(L_52);
			if ((((int32_t)L_50) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length))))))
			{
				goto IL_011c;
			}
		}

IL_015c:
		{
			// }
			IL2CPP_LEAVE(0x16C, FINALLY_015e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_015e;
	}

FINALLY_015e:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(350)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(350)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16C, IL_016c)
	}

IL_016c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::ResetFocusedObjects(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData_ResetFocusedObjects_m18C34AAAC1EBD469EFBCB37FEE7827BFF4F6DB5F (PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * __this, bool ___clearPreviousObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_tC8C6CA2DB07D67431BAAB603F549294D0C3E2616_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * G_B5_0 = NULL;
	PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * G_B4_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B6_0 = NULL;
	PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * G_B6_1 = NULL;
	{
		// using (ResetFocusedObjectPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0_StaticFields*)il2cpp_codegen_static_fields_for(PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0_il2cpp_TypeInfo_var))->get_ResetFocusedObjectPerfMarker_8();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (CurrentPointerTarget != null)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
			L_2 = PointerData_get_CurrentPointerTarget_m4CEF49DAB0DA389D95359244737E2211CEDDA158(__this, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_3;
			L_3 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_0027;
			}
		}

IL_001c:
		{
			// Pointer.OnPreCurrentPointerTargetChange();
			RuntimeObject* L_4 = __this->get_Pointer_0();
			NullCheck(L_4);
			InterfaceActionInvoker0::Invoke(32 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::OnPreCurrentPointerTargetChange() */, IMixedRealityPointer_tC8C6CA2DB07D67431BAAB603F549294D0C3E2616_il2cpp_TypeInfo_var, L_4);
		}

IL_0027:
		{
			// PreviousPointerTarget = clearPreviousObject ? null : CurrentPointerTarget;
			bool L_5 = ___clearPreviousObject0;
			G_B4_0 = __this;
			if (L_5)
			{
				G_B5_0 = __this;
				goto IL_0033;
			}
		}

IL_002b:
		{
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
			L_6 = PointerData_get_CurrentPointerTarget_m4CEF49DAB0DA389D95359244737E2211CEDDA158(__this, /*hidden argument*/NULL);
			G_B6_0 = L_6;
			G_B6_1 = G_B4_0;
			goto IL_0034;
		}

IL_0033:
		{
			G_B6_0 = ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)(NULL));
			G_B6_1 = G_B5_0;
		}

IL_0034:
		{
			NullCheck(G_B6_1);
			PointerData_set_PreviousPointerTarget_mDD38F5FCA7E23E611FEEB7D072B916EDF85322D3_inline(G_B6_1, G_B6_0, /*hidden argument*/NULL);
			// focusDetails.Point = Details.Point;
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_7 = __this->get_address_of_focusDetails_2();
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F  L_8;
			L_8 = PointerData_get_Details_mA5B7DE41F6CBAE64AA7294580ACCBC4AF35F6AA4_inline(__this, /*hidden argument*/NULL);
			V_2 = L_8;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
			L_9 = FocusDetails_get_Point_mB1F377C7630DB8D010A0AD61AA19A7B993DB2FDF_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)(&V_2), /*hidden argument*/NULL);
			FocusDetails_set_Point_m0A2843EE0D472F64345CE08080C202954ACA5413_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_7, L_9, /*hidden argument*/NULL);
			// focusDetails.Normal = Details.Normal;
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_10 = __this->get_address_of_focusDetails_2();
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F  L_11;
			L_11 = PointerData_get_Details_mA5B7DE41F6CBAE64AA7294580ACCBC4AF35F6AA4_inline(__this, /*hidden argument*/NULL);
			V_2 = L_11;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
			L_12 = FocusDetails_get_Normal_m3E037695B4FD888DC3024DB32103980EF37A0209_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)(&V_2), /*hidden argument*/NULL);
			FocusDetails_set_Normal_mE8874E62D300C5C10734F3A696AC203DA33BF92A_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_10, L_12, /*hidden argument*/NULL);
			// focusDetails.NormalLocalSpace = Details.NormalLocalSpace;
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_13 = __this->get_address_of_focusDetails_2();
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F  L_14;
			L_14 = PointerData_get_Details_mA5B7DE41F6CBAE64AA7294580ACCBC4AF35F6AA4_inline(__this, /*hidden argument*/NULL);
			V_2 = L_14;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
			L_15 = FocusDetails_get_NormalLocalSpace_m7804F189BFC2124E647B403AABB2134FD1529B93_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)(&V_2), /*hidden argument*/NULL);
			FocusDetails_set_NormalLocalSpace_m5FD188667AAF3119C658AC53665E50A92E48277C_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_13, L_15, /*hidden argument*/NULL);
			// focusDetails.PointLocalSpace = Details.PointLocalSpace;
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_16 = __this->get_address_of_focusDetails_2();
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F  L_17;
			L_17 = PointerData_get_Details_mA5B7DE41F6CBAE64AA7294580ACCBC4AF35F6AA4_inline(__this, /*hidden argument*/NULL);
			V_2 = L_17;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
			L_18 = FocusDetails_get_PointLocalSpace_mBBEFEC7DBC6CE910E4DC1C34B1F2396E7AC3493C_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)(&V_2), /*hidden argument*/NULL);
			FocusDetails_set_PointLocalSpace_m0E12BB09FFE85A2A2CFE0BEF2DC717B24195C70B_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_16, L_18, /*hidden argument*/NULL);
			// focusDetails.Object = null;
			FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * L_19 = __this->get_address_of_focusDetails_2();
			FocusDetails_set_Object_m30FB9974ED765EFDE6DC1F1ED409A8C773D637C9_inline((FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F *)L_19, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0xB9, FINALLY_00ab);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ab;
	}

FINALLY_00ab:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(171)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(171)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB9, IL_00b9)
	}

IL_00b9:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::Equals(Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerData_Equals_mC85BA1D52B4168F295DC28528173F63644727055 (PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * __this, PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_tC8C6CA2DB07D67431BAAB603F549294D0C3E2616_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, other))
		PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, other))
		PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * L_1 = ___other0;
		if ((!(((RuntimeObject*)(PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 *)__this) == ((RuntimeObject*)(PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// return Pointer.PointerId == other.Pointer.PointerId;
		RuntimeObject* L_2 = __this->get_Pointer_0();
		NullCheck(L_2);
		uint32_t L_3;
		L_3 = InterfaceFuncInvoker0< uint32_t >::Invoke(2 /* System.UInt32 Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_PointerId() */, IMixedRealityPointer_tC8C6CA2DB07D67431BAAB603F549294D0C3E2616_il2cpp_TypeInfo_var, L_2);
		PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * L_4 = ___other0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->get_Pointer_0();
		NullCheck(L_5);
		uint32_t L_6;
		L_6 = InterfaceFuncInvoker0< uint32_t >::Invoke(2 /* System.UInt32 Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_PointerId() */, IMixedRealityPointer_tC8C6CA2DB07D67431BAAB603F549294D0C3E2616_il2cpp_TypeInfo_var, L_5);
		return (bool)((((int32_t)L_3) == ((int32_t)L_6))? 1 : 0);
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerData_Equals_m3987142AEA7FD5B180B45319E6846D62DB6D3B78 (PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj))
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, obj))
		RuntimeObject * L_1 = ___obj0;
		if ((!(((RuntimeObject*)(PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 *)__this) == ((RuntimeObject*)(RuntimeObject *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (obj.GetType() != GetType())
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_2, /*hidden argument*/NULL);
		Type_t * L_4;
		L_4 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Inequality_m519B1E8F2F1E2101ADF863401FCAE38210395368(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0020:
	{
		// return Equals((PointerData)obj);
		RuntimeObject * L_6 = ___obj0;
		bool L_7;
		L_7 = PointerData_Equals_mC85BA1D52B4168F295DC28528173F63644727055(__this, ((PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 *)CastclassClass((RuntimeObject*)L_6, PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerData_GetHashCode_mB72152BC46EE67A2139EA16F22FF8017A26C915C (PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * __this, const RuntimeMethod* method)
{
	{
		// return Pointer != null ? Pointer.GetHashCode() : 0;
		RuntimeObject* L_0 = __this->get_Pointer_0();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->get_Pointer_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData__cctor_m508EA79E803515F9EC55A1C62ACE9E53F45A196B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F670F51C586102E4AD2E77FED417809FF46F3D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A4B7834144C35546E7F3AA5FB0F9239B88B8B6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CFDCFFDD9F8EAA25BCF8F12B4E2CF9CE83B9B29);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdateHitPerfMarker = new ProfilerMarker("[MRTK] PointerData.UpdateHit");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral3F670F51C586102E4AD2E77FED417809FF46F3D8, /*hidden argument*/NULL);
		((PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0_StaticFields*)il2cpp_codegen_static_fields_for(PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0_il2cpp_TypeInfo_var))->set_UpdateHitPerfMarker_6(L_0);
		// private static readonly ProfilerMarker UpdateFocusLockedHitPerfMarker = new ProfilerMarker("[MRTK] PointerData.UpdateFocusLockedHit");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteral9CFDCFFDD9F8EAA25BCF8F12B4E2CF9CE83B9B29, /*hidden argument*/NULL);
		((PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0_StaticFields*)il2cpp_codegen_static_fields_for(PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0_il2cpp_TypeInfo_var))->set_UpdateFocusLockedHitPerfMarker_7(L_1);
		// private static readonly ProfilerMarker ResetFocusedObjectPerfMarker = new ProfilerMarker("[MRTK] PointerData.ResetFocusedObject");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_2), _stringLiteral8A4B7834144C35546E7F3AA5FB0F9239B88B8B6A, /*hidden argument*/NULL);
		((PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0_StaticFields*)il2cpp_codegen_static_fields_for(PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0_il2cpp_TypeInfo_var))->set_ResetFocusedObjectPerfMarker_8(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerHitResult_Clear_m0C404B5136CA1B28109EB2450866D990538DB3DA (PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * __this, const RuntimeMethod* method)
{
	{
		// raycastHit = default(MixedRealityRaycastHit);
		MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4 * L_0 = __this->get_address_of_raycastHit_0();
		il2cpp_codegen_initobj(L_0, sizeof(MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4 ));
		// graphicsRaycastResult = default(RaycastResult);
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * L_1 = __this->get_address_of_graphicsRaycastResult_1();
		il2cpp_codegen_initobj(L_1, sizeof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE ));
		// hitObject = null;
		__this->set_hitObject_2((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// hitPointOnObject = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6(/*hidden argument*/NULL);
		__this->set_hitPointOnObject_3(L_2);
		// hitNormalOnObject = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6(/*hidden argument*/NULL);
		__this->set_hitNormalOnObject_4(L_3);
		// ray = default(RayStep);
		RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C * L_4 = __this->get_address_of_ray_5();
		il2cpp_codegen_initobj(L_4, sizeof(RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C ));
		// rayStepIndex = -1;
		__this->set_rayStepIndex_6((-1));
		// rayDistance = 0.0f;
		__this->set_rayDistance_7((0.0f));
		// isSet = false;
		__this->set_isSet_8((bool)0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::Set(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Vector4,Microsoft.MixedReality.Toolkit.Physics.RayStep,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerHitResult_Set_m85F690086D4FB86E6D4E0AACF6B3B7BC17FFCB90 (PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hitObject0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitPointOnObject1, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___hitNormalOnObject2, RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C  ___ray3, int32_t ___rayStepIndex4, float ___rayDistance5, const RuntimeMethod* method)
{
	{
		// raycastHit = default(MixedRealityRaycastHit);
		MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4 * L_0 = __this->get_address_of_raycastHit_0();
		il2cpp_codegen_initobj(L_0, sizeof(MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4 ));
		// graphicsRaycastResult = default(RaycastResult);
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * L_1 = __this->get_address_of_graphicsRaycastResult_1();
		il2cpp_codegen_initobj(L_1, sizeof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE ));
		// this.hitObject = hitObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ___hitObject0;
		__this->set_hitObject_2(L_2);
		// this.hitPointOnObject = hitPointOnObject;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___hitPointOnObject1;
		__this->set_hitPointOnObject_3(L_3);
		// this.hitNormalOnObject = hitNormalOnObject;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4 = ___hitNormalOnObject2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector4_op_Implicit_mFAF4066991B0091223DB22E35C4290C43E5913AB(L_4, /*hidden argument*/NULL);
		__this->set_hitNormalOnObject_4(L_5);
		// this.ray = ray;
		RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C  L_6 = ___ray3;
		__this->set_ray_5(L_6);
		// this.rayStepIndex = rayStepIndex;
		int32_t L_7 = ___rayStepIndex4;
		__this->set_rayStepIndex_6(L_7);
		// this.rayDistance = rayDistance;
		float L_8 = ___rayDistance5;
		__this->set_rayDistance_7(L_8);
		// isSet = true;
		__this->set_isSet_8((bool)1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::Set(Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit,Microsoft.MixedReality.Toolkit.Physics.RayStep,System.Int32,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerHitResult_Set_mC3FFE73925A9C5B83CCB5EF92137F2BE50C1BEF4 (PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * __this, MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4  ___hit0, RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C  ___ray1, int32_t ___rayStepIndex2, float ___rayDistance3, bool ___focusIndividualCompoundCollider4, const RuntimeMethod* method)
{
	PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * G_B2_0 = NULL;
	PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * G_B1_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B3_0 = NULL;
	PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * G_B3_1 = NULL;
	{
		// raycastHit = hit;
		MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4  L_0 = ___hit0;
		__this->set_raycastHit_0(L_0);
		// graphicsRaycastResult = default(RaycastResult);
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * L_1 = __this->get_address_of_graphicsRaycastResult_1();
		il2cpp_codegen_initobj(L_1, sizeof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE ));
		// hitObject = focusIndividualCompoundCollider ? hit.collider.gameObject : hit.transform.gameObject;
		bool L_2 = ___focusIndividualCompoundCollider4;
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_0025;
		}
	}
	{
		MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4  L_3 = ___hit0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = L_3.get_transform_7();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0030;
	}

IL_0025:
	{
		MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4  L_6 = ___hit0;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_7 = L_6.get_collider_10();
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
	}

IL_0030:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_hitObject_2(G_B3_0);
		// hitPointOnObject = hit.point;
		MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4  L_9 = ___hit0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = L_9.get_point_0();
		__this->set_hitPointOnObject_3(L_10);
		// hitNormalOnObject = hit.normal;
		MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4  L_11 = ___hit0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = L_11.get_normal_1();
		__this->set_hitNormalOnObject_4(L_12);
		// this.ray = ray;
		RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C  L_13 = ___ray1;
		__this->set_ray_5(L_13);
		// this.rayStepIndex = rayStepIndex;
		int32_t L_14 = ___rayStepIndex2;
		__this->set_rayStepIndex_6(L_14);
		// this.rayDistance = rayDistance;
		float L_15 = ___rayDistance3;
		__this->set_rayDistance_7(L_15);
		// isSet = true;
		__this->set_isSet_8((bool)1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::Set(UnityEngine.EventSystems.RaycastResult,UnityEngine.Vector3,UnityEngine.Vector4,Microsoft.MixedReality.Toolkit.Physics.RayStep,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerHitResult_Set_m72AFE5BEAEDA7F37075335400DDA5B523A3CB634 (PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * __this, RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___result0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitPointOnObject1, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___hitNormalOnObject2, RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C  ___ray3, int32_t ___rayStepIndex4, float ___rayDistance5, const RuntimeMethod* method)
{
	{
		// raycastHit = default(MixedRealityRaycastHit);
		MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4 * L_0 = __this->get_address_of_raycastHit_0();
		il2cpp_codegen_initobj(L_0, sizeof(MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4 ));
		// raycastHit.point = hitPointOnObject;
		MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4 * L_1 = __this->get_address_of_raycastHit_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___hitPointOnObject1;
		L_1->set_point_0(L_2);
		// raycastHit.normal = hitNormalOnObject;
		MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4 * L_3 = __this->get_address_of_raycastHit_0();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4 = ___hitNormalOnObject2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector4_op_Implicit_mFAF4066991B0091223DB22E35C4290C43E5913AB(L_4, /*hidden argument*/NULL);
		L_3->set_normal_1(L_5);
		// raycastHit.distance = rayDistance;
		MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4 * L_6 = __this->get_address_of_raycastHit_0();
		float L_7 = ___rayDistance5;
		L_6->set_distance_3(L_7);
		// raycastHit.transform = result.gameObject.transform;
		MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4 * L_8 = __this->get_address_of_raycastHit_0();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF_inline((RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE *)(&___result0), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		L_8->set_transform_7(L_10);
		// raycastHit.raycastValid = true;
		MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4 * L_11 = __this->get_address_of_raycastHit_0();
		L_11->set_raycastValid_9((bool)1);
		// graphicsRaycastResult = result;
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  L_12 = ___result0;
		__this->set_graphicsRaycastResult_1(L_12);
		// this.hitObject = result.gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF_inline((RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE *)(&___result0), /*hidden argument*/NULL);
		__this->set_hitObject_2(L_13);
		// this.hitPointOnObject = hitPointOnObject;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = ___hitPointOnObject1;
		__this->set_hitPointOnObject_3(L_14);
		// this.hitNormalOnObject = hitNormalOnObject;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_15 = ___hitNormalOnObject2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector4_op_Implicit_mFAF4066991B0091223DB22E35C4290C43E5913AB(L_15, /*hidden argument*/NULL);
		__this->set_hitNormalOnObject_4(L_16);
		// this.ray = ray;
		RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C  L_17 = ___ray3;
		__this->set_ray_5(L_17);
		// this.rayStepIndex = rayStepIndex;
		int32_t L_18 = ___rayStepIndex4;
		__this->set_rayStepIndex_6(L_18);
		// this.rayDistance = rayDistance;
		float L_19 = ___rayDistance5;
		__this->set_rayDistance_7(L_19);
		// isSet = true;
		__this->set_isSet_8((bool)1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::CopyFrom(Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerHitResult_CopyFrom_m2FC8F9A1D36B849174FEA3246D288ACDEED5546A (PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * __this, PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * ___other0, const RuntimeMethod* method)
{
	{
		// raycastHit = other.raycastHit;
		PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * L_0 = ___other0;
		NullCheck(L_0);
		MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4  L_1 = L_0->get_raycastHit_0();
		__this->set_raycastHit_0(L_1);
		// graphicsRaycastResult = other.graphicsRaycastResult;
		PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * L_2 = ___other0;
		NullCheck(L_2);
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  L_3 = L_2->get_graphicsRaycastResult_1();
		__this->set_graphicsRaycastResult_1(L_3);
		// hitObject = other.hitObject;
		PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * L_4 = ___other0;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_hitObject_2();
		__this->set_hitObject_2(L_5);
		// hitPointOnObject = other.hitPointOnObject;
		PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * L_6 = ___other0;
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = L_6->get_hitPointOnObject_3();
		__this->set_hitPointOnObject_3(L_7);
		// hitNormalOnObject = other.hitNormalOnObject;
		PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * L_8 = ___other0;
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = L_8->get_hitNormalOnObject_4();
		__this->set_hitNormalOnObject_4(L_9);
		// ray = other.ray;
		PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * L_10 = ___other0;
		NullCheck(L_10);
		RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C  L_11 = L_10->get_ray_5();
		__this->set_ray_5(L_11);
		// rayStepIndex = other.rayStepIndex;
		PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * L_12 = ___other0;
		NullCheck(L_12);
		int32_t L_13 = L_12->get_rayStepIndex_6();
		__this->set_rayStepIndex_6(L_13);
		// rayDistance = other.rayDistance;
		PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * L_14 = ___other0;
		NullCheck(L_14);
		float L_15 = L_14->get_rayDistance_7();
		__this->set_rayDistance_7(L_15);
		// isSet = other.isSet;
		PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * L_16 = ___other0;
		NullCheck(L_16);
		bool L_17 = L_16->get_isSet_8();
		__this->set_isSet_8(L_17);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerHitResult__ctor_m6557E8D76AAB2CABDA87F24B7D8493CF9E1933FF (PointerHitResult_t18F2E4F1D53468AA6384BCB290496AF41C0DDCAD * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 hitPointOnObject = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6(/*hidden argument*/NULL);
		__this->set_hitPointOnObject_3(L_0);
		// public Vector3 hitNormalOnObject = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6(/*hidden argument*/NULL);
		__this->set_hitNormalOnObject_4(L_1);
		// public int rayStepIndex = -1;
		__this->set_rayStepIndex_6((-1));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::get_InputSourceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerPreferences_get_InputSourceType_mFAB759E26839A0C456EC36B3E4A8791BE715F7ED (PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF * __this, const RuntimeMethod* method)
{
	{
		// public InputSourceType InputSourceType { get; }
		int32_t L_0 = __this->get_U3CInputSourceTypeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::get_PointerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * PointerPreferences_get_PointerType_m5CD585090BF185ED2DEED086C9F00FA2E54A2BF9 (PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF * __this, const RuntimeMethod* method)
{
	{
		// public Type PointerType { get; }
		Type_t * L_0 = __this->get_U3CPointerTypeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::Matches(System.Type,Microsoft.MixedReality.Toolkit.Input.InputSourceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerPreferences_Matches_m279738562399332BF82F809B0599746873BB3E2B (PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF * __this, Type_t * ___queryType0, int32_t ___queryInputType1, const RuntimeMethod* method)
{
	{
		// return queryInputType == InputSourceType && queryType.IsAssignableFrom(PointerType);
		int32_t L_0 = ___queryInputType1;
		int32_t L_1;
		L_1 = PointerPreferences_get_InputSourceType_mFAB759E26839A0C456EC36B3E4A8791BE715F7ED_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0016;
		}
	}
	{
		Type_t * L_2 = ___queryType0;
		Type_t * L_3;
		L_3 = PointerPreferences_get_PointerType_m5CD585090BF185ED2DEED086C9F00FA2E54A2BF9_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_4;
		L_4 = VirtFuncInvoker1< bool, Type_t * >::Invoke(116 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_2, L_3);
		return L_4;
	}

IL_0016:
	{
		return (bool)0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.PointerBehavior Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::get_Left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerPreferences_get_Left_m6915D84CCB5D7E90283A3FD0B86EEFC977E5ACE2 (PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF * __this, const RuntimeMethod* method)
{
	{
		// public PointerBehavior Left { get; private set; }
		int32_t L_0 = __this->get_U3CLeftU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::set_Left(Microsoft.MixedReality.Toolkit.Input.PointerBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerPreferences_set_Left_m7EF3D089339381494C3C0814C96953A9A245B646 (PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public PointerBehavior Left { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CLeftU3Ek__BackingField_2(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.PointerBehavior Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::get_Right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerPreferences_get_Right_m22149512F225377402748969D54D340E23BEF8E8 (PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF * __this, const RuntimeMethod* method)
{
	{
		// public PointerBehavior Right { get; private set; }
		int32_t L_0 = __this->get_U3CRightU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::set_Right(Microsoft.MixedReality.Toolkit.Input.PointerBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerPreferences_set_Right_m42298AACBAF58BC8BD0EC2151E18F4CA3312A7B7 (PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public PointerBehavior Right { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CRightU3Ek__BackingField_3(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.PointerBehavior Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::get_Other()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerPreferences_get_Other_mEA42BB6CBCFECF8F3D3A9023714080D0A9E53BBB (PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF * __this, const RuntimeMethod* method)
{
	{
		// public PointerBehavior Other { get; private set; }
		int32_t L_0 = __this->get_U3COtherU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::set_Other(Microsoft.MixedReality.Toolkit.Input.PointerBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerPreferences_set_Other_m880B35DD6BBBC81B83CD65B5F52BD870A261CC8B (PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public PointerBehavior Other { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3COtherU3Ek__BackingField_4(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.PointerBehavior Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::GetBehaviorForHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerPreferences_GetBehaviorForHandedness_m1A2F9B8D23D4AF45E52809373B670FD5D47C9431 (PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF * __this, uint8_t ___h0, const RuntimeMethod* method)
{
	{
		// if ((h & Handedness.Right) != 0)
		uint8_t L_0 = ___h0;
		if (!((int32_t)((int32_t)L_0&(int32_t)2)))
		{
			goto IL_000c;
		}
	}
	{
		// return Right;
		int32_t L_1;
		L_1 = PointerPreferences_get_Right_m22149512F225377402748969D54D340E23BEF8E8_inline(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_000c:
	{
		// if ((h & Handedness.Left) != 0)
		uint8_t L_2 = ___h0;
		if (!((int32_t)((int32_t)L_2&(int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		// return Left;
		int32_t L_3;
		L_3 = PointerPreferences_get_Left_m6915D84CCB5D7E90283A3FD0B86EEFC977E5ACE2_inline(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_0018:
	{
		// if ((h & Handedness.Other) != 0)
		uint8_t L_4 = ___h0;
		if (!((int32_t)((int32_t)L_4&(int32_t)4)))
		{
			goto IL_0024;
		}
	}
	{
		// return Other;
		int32_t L_5;
		L_5 = PointerPreferences_get_Other_mEA42BB6CBCFECF8F3D3A9023714080D0A9E53BBB_inline(__this, /*hidden argument*/NULL);
		return L_5;
	}

IL_0024:
	{
		// return PointerBehavior.Default;
		return (int32_t)(0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::SetBehaviorForHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.PointerBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerPreferences_SetBehaviorForHandedness_m77ECF1AB49D034077DB21F72E260F053A6428078 (PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF * __this, uint8_t ___h0, int32_t ___b1, const RuntimeMethod* method)
{
	{
		// if ((h & Handedness.Right) != 0)
		uint8_t L_0 = ___h0;
		if (!((int32_t)((int32_t)L_0&(int32_t)2)))
		{
			goto IL_000c;
		}
	}
	{
		// Right = b;
		int32_t L_1 = ___b1;
		PointerPreferences_set_Right_m42298AACBAF58BC8BD0EC2151E18F4CA3312A7B7_inline(__this, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	{
		// if ((h & Handedness.Left) != 0)
		uint8_t L_2 = ___h0;
		if (!((int32_t)((int32_t)L_2&(int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		// Left = b;
		int32_t L_3 = ___b1;
		PointerPreferences_set_Left_m7EF3D089339381494C3C0814C96953A9A245B646_inline(__this, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// if ((h & Handedness.Other) != 0)
		uint8_t L_4 = ___h0;
		if (!((int32_t)((int32_t)L_4&(int32_t)4)))
		{
			goto IL_0024;
		}
	}
	{
		// Other = b;
		int32_t L_5 = ___b1;
		PointerPreferences_set_Other_m880B35DD6BBBC81B83CD65B5F52BD870A261CC8B_inline(__this, L_5, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences::.ctor(System.Type,Microsoft.MixedReality.Toolkit.Input.InputSourceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerPreferences__ctor_mC60F4C72D16D0DF91EC6250452F4DBED8A2C526C (PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF * __this, Type_t * ___pointerType0, int32_t ___inputType1, const RuntimeMethod* method)
{
	{
		// public PointerPreferences(Type pointerType, InputSourceType inputType)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Left = PointerBehavior.Default;
		PointerPreferences_set_Left_m7EF3D089339381494C3C0814C96953A9A245B646_inline(__this, 0, /*hidden argument*/NULL);
		// Right = PointerBehavior.Default;
		PointerPreferences_set_Right_m42298AACBAF58BC8BD0EC2151E18F4CA3312A7B7_inline(__this, 0, /*hidden argument*/NULL);
		// Other = PointerBehavior.Default;
		PointerPreferences_set_Other_m880B35DD6BBBC81B83CD65B5F52BD870A261CC8B_inline(__this, 0, /*hidden argument*/NULL);
		// InputSourceType = inputType;
		int32_t L_0 = ___inputType1;
		__this->set_U3CInputSourceTypeU3Ek__BackingField_0(L_0);
		// PointerType = pointerType;
		Type_t * L_1 = ___pointerType0;
		__this->set_U3CPointerTypeU3Ek__BackingField_1(L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__83::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRaiseSourceDetectedU3Ed__83_MoveNext_mF839D354AC2FE38E5C40076AE122F1837E27AAED (U3CRaiseSourceDetectedU3Ed__83_t3AB1C3A53168AD67F2F99E828066D344D79C7B5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CRaiseSourceDetectedU3Ed__83_t3AB1C3A53168AD67F2F99E828066D344D79C7B5B_m389F0C6F9457148D28A1898D299BABD985AEF2AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityCursor_t91C9BF2FDFDF7DE443B045E25B3C1110BD56AF43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_tC8C6CA2DB07D67431BAAB603F549294D0C3E2616_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisGazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764_mDB9EC825667B69C463D0AE6B1F4F7253381856BE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * V_1 = NULL;
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B15_0 = NULL;
	RuntimeObject* G_B14_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0024;
			}
		}

IL_0011:
		{
			// using (RaiseSourceDetectedPerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764_il2cpp_TypeInfo_var);
			ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3 = ((GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764_StaticFields*)il2cpp_codegen_static_fields_for(GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764_il2cpp_TypeInfo_var))->get_RaiseSourceDetectedPerfMarker_32();
			V_2 = L_3;
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_4;
			L_4 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_2), /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_3(L_4);
		}

IL_0024:
		{
		}

IL_0025:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_5 = V_0;
				if (!L_5)
				{
					goto IL_0060;
				}
			}

IL_0028:
			{
				// await EnsureInputSystemValid();
				GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * L_6 = V_1;
				NullCheck(L_6);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7;
				L_7 = InputSystemGlobalHandlerListener_EnsureInputSystemValid_mE8C22AA252C0250AB4494635137A0ACCC6C66DD3(L_6, /*hidden argument*/NULL);
				NullCheck(L_7);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_8;
				L_8 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_7, /*hidden argument*/NULL);
				V_3 = L_8;
				bool L_9;
				L_9 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
				if (L_9)
				{
					goto IL_007c;
				}
			}

IL_003d:
			{
				int32_t L_10 = 0;
				V_0 = L_10;
				__this->set_U3CU3E1__state_0(L_10);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_11 = V_3;
				__this->set_U3CU3Eu__1_4(L_11);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_12 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CRaiseSourceDetectedU3Ed__83_t3AB1C3A53168AD67F2F99E828066D344D79C7B5B_m389F0C6F9457148D28A1898D299BABD985AEF2AC((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_12, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), (U3CRaiseSourceDetectedU3Ed__83_t3AB1C3A53168AD67F2F99E828066D344D79C7B5B *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CRaiseSourceDetectedU3Ed__83_t3AB1C3A53168AD67F2F99E828066D344D79C7B5B_m389F0C6F9457148D28A1898D299BABD985AEF2AC_RuntimeMethod_var);
				IL2CPP_LEAVE(0x10D, FINALLY_00bd);
			}

IL_0060:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_13 = __this->get_U3CU3Eu__1_4();
				V_3 = L_13;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_14 = __this->get_address_of_U3CU3Eu__1_4();
				il2cpp_codegen_initobj(L_14, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_15 = (-1);
				V_0 = L_15;
				__this->set_U3CU3E1__state_0(L_15);
			}

IL_007c:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
				// if (this.IsNull())
				GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * L_16 = V_1;
				bool L_17;
				L_17 = UnityObjectExtensions_IsNull_TisGazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764_mDB9EC825667B69C463D0AE6B1F4F7253381856BE(L_16, /*hidden argument*/UnityObjectExtensions_IsNull_TisGazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764_mDB9EC825667B69C463D0AE6B1F4F7253381856BE_RuntimeMethod_var);
				if (!L_17)
				{
					goto IL_008d;
				}
			}

IL_008b:
			{
				// return;
				IL2CPP_LEAVE(0xFA, FINALLY_00bd);
			}

IL_008d:
			{
				// CoreServices.InputSystem?.RaiseSourceDetected(GazeInputSource);
				IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
				RuntimeObject* L_18;
				L_18 = CoreServices_get_InputSystem_m95E1676849A6E08FEFBE84E7545BCED6CA18A81A(/*hidden argument*/NULL);
				RuntimeObject* L_19 = L_18;
				G_B11_0 = L_19;
				if (L_19)
				{
					G_B12_0 = L_19;
					goto IL_0098;
				}
			}

IL_0095:
			{
				goto IL_00a4;
			}

IL_0098:
			{
				GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * L_20 = V_1;
				NullCheck(L_20);
				RuntimeObject* L_21;
				L_21 = VirtFuncInvoker0< RuntimeObject* >::Invoke(39 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.GazeProvider::get_GazeInputSource() */, L_20);
				NullCheck(G_B12_0);
				InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(24 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourceDetected(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03_il2cpp_TypeInfo_var, G_B12_0, L_21, (RuntimeObject*)NULL);
			}

IL_00a4:
			{
				// GazePointer.BaseCursor?.SetVisibility(true);
				GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * L_22 = V_1;
				NullCheck(L_22);
				RuntimeObject* L_23;
				L_23 = VirtFuncInvoker0< RuntimeObject* >::Invoke(40 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.GazeProvider::get_GazePointer() */, L_22);
				NullCheck(L_23);
				RuntimeObject* L_24;
				L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_BaseCursor() */, IMixedRealityPointer_tC8C6CA2DB07D67431BAAB603F549294D0C3E2616_il2cpp_TypeInfo_var, L_23);
				RuntimeObject* L_25 = L_24;
				G_B14_0 = L_25;
				if (L_25)
				{
					G_B15_0 = L_25;
					goto IL_00b5;
				}
			}

IL_00b2:
			{
				goto IL_00bb;
			}

IL_00b5:
			{
				NullCheck(G_B15_0);
				InterfaceActionInvoker1< bool >::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor::SetVisibility(System.Boolean) */, IMixedRealityCursor_t91C9BF2FDFDF7DE443B045E25B3C1110BD56AF43_il2cpp_TypeInfo_var, G_B15_0, (bool)1);
			}

IL_00bb:
			{
				// }
				IL2CPP_LEAVE(0xD3, FINALLY_00bd);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00bd;
		}

FINALLY_00bd:
		{ // begin finally (depth: 2)
			{
				int32_t L_26 = V_0;
				if ((((int32_t)L_26) >= ((int32_t)0)))
				{
					goto IL_00d2;
				}
			}

IL_00c1:
			{
				AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_27 = __this->get_address_of_U3CU3E7__wrap1_3();
				AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)L_27, /*hidden argument*/NULL);
			}

IL_00d2:
			{
				IL2CPP_END_FINALLY(189)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(189)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x10D, IL_010d)
			IL2CPP_JUMP_TBL(0xFA, IL_00fa)
			IL2CPP_JUMP_TBL(0xD3, IL_00d3)
		}

IL_00d3:
		{
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_28 = __this->get_address_of_U3CU3E7__wrap1_3();
			il2cpp_codegen_initobj(L_28, sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D ));
			goto IL_00fa;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e1;
		}
		throw e;
	}

CATCH_00e1:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_29 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_30 = V_4;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_29, L_30, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_010d;
	} // end catch (depth: 1)

IL_00fa:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_31 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_31, /*hidden argument*/NULL);
	}

IL_010d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRaiseSourceDetectedU3Ed__83_MoveNext_mF839D354AC2FE38E5C40076AE122F1837E27AAED_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CRaiseSourceDetectedU3Ed__83_t3AB1C3A53168AD67F2F99E828066D344D79C7B5B * _thisAdjusted = reinterpret_cast<U3CRaiseSourceDetectedU3Ed__83_t3AB1C3A53168AD67F2F99E828066D344D79C7B5B *>(__this + _offset);
	U3CRaiseSourceDetectedU3Ed__83_MoveNext_mF839D354AC2FE38E5C40076AE122F1837E27AAED(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/<RaiseSourceDetected>d__83::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRaiseSourceDetectedU3Ed__83_SetStateMachine_mE96AC442B16FCEF308A70992996C0E803CE2FE2C (U3CRaiseSourceDetectedU3Ed__83_t3AB1C3A53168AD67F2F99E828066D344D79C7B5B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRaiseSourceDetectedU3Ed__83_SetStateMachine_mE96AC442B16FCEF308A70992996C0E803CE2FE2C_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CRaiseSourceDetectedU3Ed__83_t3AB1C3A53168AD67F2F99E828066D344D79C7B5B * _thisAdjusted = reinterpret_cast<U3CRaiseSourceDetectedU3Ed__83_t3AB1C3A53168AD67F2F99E828066D344D79C7B5B *>(__this + _offset);
	U3CRaiseSourceDetectedU3Ed__83_SetStateMachine_mE96AC442B16FCEF308A70992996C0E803CE2FE2C(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__69::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__69_MoveNext_mAD47C6E5B99887CA1AA661E3F823BD78C1FD8D8D (U3CStartU3Ed__69_t2C38FD5FEB6E8495C49026132CE012E15CE70F35 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__69_t2C38FD5FEB6E8495C49026132CE012E15CE70F35_mDB365E64058510072F725FB50DECCC912C309807_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityCursor_t91C9BF2FDFDF7DE443B045E25B3C1110BD56AF43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_tC8C6CA2DB07D67431BAAB603F549294D0C3E2616_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisGazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764_mDB9EC825667B69C463D0AE6B1F4F7253381856BE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004f;
			}
		}

IL_0011:
		{
			// base.Start();
			GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * L_3 = V_1;
			NullCheck(L_3);
			GazeProvider_U3CU3En__0_m72EAA8B63CE6DAC2839779EE80CA72138D08EDAC(L_3, /*hidden argument*/NULL);
			// await EnsureInputSystemValid();
			GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * L_4 = V_1;
			NullCheck(L_4);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
			L_5 = InputSystemGlobalHandlerListener_EnsureInputSystemValid_mE8C22AA252C0250AB4494635137A0ACCC6C66DD3(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_6;
			L_6 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_5, /*hidden argument*/NULL);
			V_2 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_006b;
			}
		}

IL_002c:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_9 = V_2;
			__this->set_U3CU3Eu__1_3(L_9);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__69_t2C38FD5FEB6E8495C49026132CE012E15CE70F35_mDB365E64058510072F725FB50DECCC912C309807((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_10, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CStartU3Ed__69_t2C38FD5FEB6E8495C49026132CE012E15CE70F35 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__69_t2C38FD5FEB6E8495C49026132CE012E15CE70F35_mDB365E64058510072F725FB50DECCC912C309807_RuntimeMethod_var);
			goto IL_00d4;
		}

IL_004f:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_11 = __this->get_U3CU3Eu__1_3();
			V_2 = L_11;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_12 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_006b:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			// if (this.IsNull())
			GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * L_14 = V_1;
			bool L_15;
			L_15 = UnityObjectExtensions_IsNull_TisGazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764_mDB9EC825667B69C463D0AE6B1F4F7253381856BE(L_14, /*hidden argument*/UnityObjectExtensions_IsNull_TisGazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764_mDB9EC825667B69C463D0AE6B1F4F7253381856BE_RuntimeMethod_var);
			if (!L_15)
			{
				goto IL_007c;
			}
		}

IL_007a:
		{
			// return;
			goto IL_00c1;
		}

IL_007c:
		{
			// GazePointer.BaseCursor?.SetVisibility(true);
			GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * L_16 = V_1;
			NullCheck(L_16);
			RuntimeObject* L_17;
			L_17 = VirtFuncInvoker0< RuntimeObject* >::Invoke(40 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.GazeProvider::get_GazePointer() */, L_16);
			NullCheck(L_17);
			RuntimeObject* L_18;
			L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_BaseCursor() */, IMixedRealityPointer_tC8C6CA2DB07D67431BAAB603F549294D0C3E2616_il2cpp_TypeInfo_var, L_17);
			RuntimeObject* L_19 = L_18;
			G_B8_0 = L_19;
			if (L_19)
			{
				G_B9_0 = L_19;
				goto IL_008d;
			}
		}

IL_008a:
		{
			goto IL_0093;
		}

IL_008d:
		{
			NullCheck(G_B9_0);
			InterfaceActionInvoker1< bool >::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor::SetVisibility(System.Boolean) */, IMixedRealityCursor_t91C9BF2FDFDF7DE443B045E25B3C1110BD56AF43_il2cpp_TypeInfo_var, G_B9_0, (bool)1);
		}

IL_0093:
		{
			// if (delayInitialization)
			GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * L_20 = V_1;
			NullCheck(L_20);
			bool L_21 = L_20->get_delayInitialization_25();
			if (!L_21)
			{
				goto IL_00a8;
			}
		}

IL_009b:
		{
			// delayInitialization = false;
			GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * L_22 = V_1;
			NullCheck(L_22);
			L_22->set_delayInitialization_25((bool)0);
			// RaiseSourceDetected();
			GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * L_23 = V_1;
			NullCheck(L_23);
			GazeProvider_RaiseSourceDetected_m73B7B7FF6B67CA9972DAB561D0FAD8781890A27A(L_23, /*hidden argument*/NULL);
		}

IL_00a8:
		{
			goto IL_00c1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00aa;
		}
		throw e;
	}

CATCH_00aa:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_24 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_25 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_24, L_25, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d4;
	} // end catch (depth: 1)

IL_00c1:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_26 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_26, /*hidden argument*/NULL);
	}

IL_00d4:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__69_MoveNext_mAD47C6E5B99887CA1AA661E3F823BD78C1FD8D8D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__69_t2C38FD5FEB6E8495C49026132CE012E15CE70F35 * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__69_t2C38FD5FEB6E8495C49026132CE012E15CE70F35 *>(__this + _offset);
	U3CStartU3Ed__69_MoveNext_mAD47C6E5B99887CA1AA661E3F823BD78C1FD8D8D(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/<Start>d__69::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__69_SetStateMachine_m3BCD04F08437E5E4206FA77CA1F8F90F88279C84 (U3CStartU3Ed__69_t2C38FD5FEB6E8495C49026132CE012E15CE70F35 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__69_SetStateMachine_m3BCD04F08437E5E4206FA77CA1F8F90F88279C84_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__69_t2C38FD5FEB6E8495C49026132CE012E15CE70F35 * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__69_t2C38FD5FEB6E8495C49026132CE012E15CE70F35 *>(__this + _offset);
	U3CStartU3Ed__69_SetStateMachine_m3BCD04F08437E5E4206FA77CA1F8F90F88279C84(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::.ctor(Microsoft.MixedReality.Toolkit.Input.GazeProvider,System.String,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,UnityEngine.LayerMask[],System.Single,UnityEngine.Transform,Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer__ctor_m56278E171EDEAC8F367BAA5175E51B4A3EEB6C05 (InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46 * __this, GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * ___gazeProvider0, String_t* ___pointerName1, RuntimeObject* ___inputSourceParent2, LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___raycastLayerMasks3, float ___pointerExtent4, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___gazeTransform5, BaseRayStabilizer_tFC7BFA95792DF321D647D60B39131F943CF657D9 * ___stabilizer6, const RuntimeMethod* method)
{
	{
		// : base(pointerName, inputSourceParent)
		String_t* L_0 = ___pointerName1;
		RuntimeObject* L_1 = ___inputSourceParent2;
		GenericPointer__ctor_mE5C24E5D3099B40529939351D826603CE519D1E7(__this, L_0, L_1, /*hidden argument*/NULL);
		// this.gazeProvider = gazeProvider;
		GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * L_2 = ___gazeProvider0;
		__this->set_gazeProvider_20(L_2);
		// PrioritizedLayerMasksOverride = raycastLayerMasks;
		LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* L_3 = ___raycastLayerMasks3;
		GenericPointer_set_PrioritizedLayerMasksOverride_m1ED948EDB348C3DCE672766D76E8F0F56FDFD29B_inline(__this, L_3, /*hidden argument*/NULL);
		// this.pointerExtent = pointerExtent;
		float L_4 = ___pointerExtent4;
		__this->set_pointerExtent_23(L_4);
		// this.gazeTransform = gazeTransform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = ___gazeTransform5;
		__this->set_gazeTransform_18(L_5);
		// this.stabilizer = stabilizer;
		BaseRayStabilizer_tFC7BFA95792DF321D647D60B39131F943CF657D9 * L_6 = ___stabilizer6;
		__this->set_stabilizer_19(L_6);
		// IsInteractionEnabled = true;
		GenericPointer_set_IsInteractionEnabled_m9AC3F99DAF7BFE02AB1E0ADBD33338548EE2F96C(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::get_Controller()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternalGazePointer_get_Controller_mFB6C3B3AC9A3329215FB78EC58FADDB63F18D4C6 (InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46 * __this, const RuntimeMethod* method)
{
	{
		// public override IMixedRealityController Controller { get; set; }
		RuntimeObject* L_0 = __this->get_U3CControllerU3Ek__BackingField_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::set_Controller(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_set_Controller_m94A53EA408CCE7AC7E6B09C1547A30C0366E5722 (InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public override IMixedRealityController Controller { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CControllerU3Ek__BackingField_21(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::get_InputSourceParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternalGazePointer_get_InputSourceParent_mC7078808CB3CAD8990379BAD781773DE7085481A (InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46 * __this, const RuntimeMethod* method)
{
	{
		// public override IMixedRealityInputSource InputSourceParent { get; protected set; }
		RuntimeObject* L_0 = __this->get_U3CInputSourceParentU3Ek__BackingField_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::set_InputSourceParent(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_set_InputSourceParent_m347BCBE5BB9BA2C48060BA310C4EA040913CAE1F (InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public override IMixedRealityInputSource InputSourceParent { get; protected set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CInputSourceParentU3Ek__BackingField_22(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::get_PointerExtent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InternalGazePointer_get_PointerExtent_mE15973119F3FA972C7E75E4005645CD63F95E08E (InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46 * __this, const RuntimeMethod* method)
{
	{
		// get => pointerExtent;
		float L_0 = __this->get_pointerExtent_23();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::set_PointerExtent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_set_PointerExtent_mC09782ECAF054F28A8F1AFD60424DCB3D1847C21 (InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => pointerExtent = value;
		float L_0 = ___value0;
		__this->set_pointerExtent_23(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::SetGazeInputSourceParent(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_SetGazeInputSourceParent_mE3AC1756DCCBE1B1D23B3DC8E0FD03084E40899F (InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46 * __this, RuntimeObject* ___gazeInputSource0, const RuntimeMethod* method)
{
	{
		// InputSourceParent = gazeInputSource;
		RuntimeObject* L_0 = ___gazeInputSource0;
		VirtActionInvoker1< RuntimeObject* >::Invoke(43 /* System.Void Microsoft.MixedReality.Toolkit.Input.GenericPointer::set_InputSourceParent(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, __this, L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::OnPreSceneQuery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_OnPreSceneQuery_m11E5A12ACBD6D24E18D869A48961BA43D169D21E (InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPlayspace_t0E796648590ACE4F99DF53EE3B84DC78E0BC90AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (OnPreSceneQueryPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46_StaticFields*)il2cpp_codegen_static_fields_for(InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46_il2cpp_TypeInfo_var))->get_OnPreSceneQueryPerfMarker_27();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (gazeProvider.IsEyeTrackingEnabledAndValid)
			GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * L_2 = __this->get_gazeProvider_20();
			NullCheck(L_2);
			bool L_3;
			L_3 = GazeProvider_get_IsEyeTrackingEnabledAndValid_m773EC674F457F4E306A1DD1C9115A22E92BF02FD(L_2, /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_005b;
			}
		}

IL_001b:
		{
			// gazeProvider.gazeInputSource.SourceType = InputSourceType.Eyes;
			GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * L_4 = __this->get_gazeProvider_20();
			NullCheck(L_4);
			BaseGenericInputSource_t983CE64ED607AD7D615AE906B29D78B89BC4B6F9 * L_5 = L_4->get_gazeInputSource_15();
			NullCheck(L_5);
			BaseGenericInputSource_set_SourceType_mD85593BF235644DBB2ABD35C22C37A97D3CAD7F0_inline(L_5, 5, /*hidden argument*/NULL);
			// newGazeOrigin = gazeProvider.LatestEyeGaze.origin;
			GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * L_6 = __this->get_gazeProvider_20();
			NullCheck(L_6);
			Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_7;
			L_7 = GazeProvider_get_LatestEyeGaze_mC1C30DFCFE1751CE87AACD55C93F03E8E9AA6688_inline(L_6, /*hidden argument*/NULL);
			V_5 = L_7;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
			L_8 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_5), /*hidden argument*/NULL);
			V_2 = L_8;
			// newGazeNormal = gazeProvider.LatestEyeGaze.direction;
			GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * L_9 = __this->get_gazeProvider_20();
			NullCheck(L_9);
			Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_10;
			L_10 = GazeProvider_get_LatestEyeGaze_mC1C30DFCFE1751CE87AACD55C93F03E8E9AA6688_inline(L_9, /*hidden argument*/NULL);
			V_5 = L_10;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
			L_11 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_5), /*hidden argument*/NULL);
			V_3 = L_11;
			// }
			goto IL_0160;
		}

IL_005b:
		{
			// gazeProvider.gazeInputSource.SourceType = InputSourceType.Head;
			GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * L_12 = __this->get_gazeProvider_20();
			NullCheck(L_12);
			BaseGenericInputSource_t983CE64ED607AD7D615AE906B29D78B89BC4B6F9 * L_13 = L_12->get_gazeInputSource_15();
			NullCheck(L_13);
			BaseGenericInputSource_set_SourceType_mD85593BF235644DBB2ABD35C22C37A97D3CAD7F0_inline(L_13, 4, /*hidden argument*/NULL);
			// if (gazeProvider.UseHeadGazeOverride && gazeProvider.overrideHeadPosition.HasValue && gazeProvider.overrideHeadForward.HasValue)
			GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * L_14 = __this->get_gazeProvider_20();
			NullCheck(L_14);
			bool L_15;
			L_15 = GazeProvider_get_UseHeadGazeOverride_m2117F17C99003FA8F0C1AC81D054467700C19210_inline(L_14, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_00fe;
			}
		}

IL_007c:
		{
			GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * L_16 = __this->get_gazeProvider_20();
			NullCheck(L_16);
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_17;
			L_17 = GazeProvider_get_overrideHeadPosition_mEF87618EDA3357AE28540B716597F1D6352828CD_inline(L_16, /*hidden argument*/NULL);
			V_6 = L_17;
			bool L_18;
			L_18 = Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_inline((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)(&V_6), /*hidden argument*/Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
			if (!L_18)
			{
				goto IL_00fe;
			}
		}

IL_0092:
		{
			GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * L_19 = __this->get_gazeProvider_20();
			NullCheck(L_19);
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_20;
			L_20 = GazeProvider_get_overrideHeadForward_m01B3D6B554D9C1EDB7FE737D53117352902B0EB6_inline(L_19, /*hidden argument*/NULL);
			V_6 = L_20;
			bool L_21;
			L_21 = Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_inline((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)(&V_6), /*hidden argument*/Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
			if (!L_21)
			{
				goto IL_00fe;
			}
		}

IL_00a8:
		{
			// newGazeOrigin = gazeProvider.overrideHeadPosition.Value;
			GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * L_22 = __this->get_gazeProvider_20();
			NullCheck(L_22);
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_23;
			L_23 = GazeProvider_get_overrideHeadPosition_mEF87618EDA3357AE28540B716597F1D6352828CD_inline(L_22, /*hidden argument*/NULL);
			V_6 = L_23;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
			L_24 = Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)(&V_6), /*hidden argument*/Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var);
			V_2 = L_24;
			// newGazeNormal = gazeProvider.overrideHeadForward.Value;
			GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * L_25 = __this->get_gazeProvider_20();
			NullCheck(L_25);
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_26;
			L_26 = GazeProvider_get_overrideHeadForward_m01B3D6B554D9C1EDB7FE737D53117352902B0EB6_inline(L_25, /*hidden argument*/NULL);
			V_6 = L_26;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
			L_27 = Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)(&V_6), /*hidden argument*/Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var);
			V_3 = L_27;
			// gazeProvider.overrideHeadPosition = null;
			GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * L_28 = __this->get_gazeProvider_20();
			il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_29 = V_6;
			NullCheck(L_28);
			GazeProvider_set_overrideHeadPosition_mA15E9676073BF3BBB484CC80124AD4EB341E27DD_inline(L_28, L_29, /*hidden argument*/NULL);
			// gazeProvider.overrideHeadForward = null;
			GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * L_30 = __this->get_gazeProvider_20();
			il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 ));
			Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_31 = V_6;
			NullCheck(L_30);
			GazeProvider_set_overrideHeadForward_m7DC6A8A6B55EB67AB13ABC2D5869F79DC021BC59_inline(L_30, L_31, /*hidden argument*/NULL);
			// }
			goto IL_0116;
		}

IL_00fe:
		{
			// newGazeOrigin = gazeTransform.position;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32 = __this->get_gazeTransform_18();
			NullCheck(L_32);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
			L_33 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_32, /*hidden argument*/NULL);
			V_2 = L_33;
			// newGazeNormal = gazeTransform.forward;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34 = __this->get_gazeTransform_18();
			NullCheck(L_34);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
			L_35 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_34, /*hidden argument*/NULL);
			V_3 = L_35;
		}

IL_0116:
		{
			// if (stabilizer != null)
			BaseRayStabilizer_tFC7BFA95792DF321D647D60B39131F943CF657D9 * L_36 = __this->get_stabilizer_19();
			if (!L_36)
			{
				goto IL_0160;
			}
		}

IL_011e:
		{
			// stabilizer.UpdateStability(MixedRealityPlayspace.InverseTransformPoint(newGazeOrigin), MixedRealityPlayspace.InverseTransformDirection(newGazeNormal));
			BaseRayStabilizer_tFC7BFA95792DF321D647D60B39131F943CF657D9 * L_37 = __this->get_stabilizer_19();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_t0E796648590ACE4F99DF53EE3B84DC78E0BC90AD_il2cpp_TypeInfo_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
			L_39 = MixedRealityPlayspace_InverseTransformPoint_m9B44BC9E3C6C9029E8FD10A89643FE3B41F36754(L_38, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = V_3;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
			L_41 = MixedRealityPlayspace_InverseTransformDirection_m92B2D28AD4D601192CD9BA141B93C0E066EF7A8A(L_40, /*hidden argument*/NULL);
			NullCheck(L_37);
			VirtActionInvoker2< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(13 /* System.Void Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer::UpdateStability(UnityEngine.Vector3,UnityEngine.Vector3) */, L_37, L_39, L_41);
			// newGazeOrigin = MixedRealityPlayspace.TransformPoint(stabilizer.StablePosition);
			BaseRayStabilizer_tFC7BFA95792DF321D647D60B39131F943CF657D9 * L_42 = __this->get_stabilizer_19();
			NullCheck(L_42);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
			L_43 = VirtFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(9 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer::get_StablePosition() */, L_42);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
			L_44 = MixedRealityPlayspace_TransformPoint_m8EFBEFDC9C39D4949CF8D19075DB3CAD06986502(L_43, /*hidden argument*/NULL);
			V_2 = L_44;
			// newGazeNormal = MixedRealityPlayspace.TransformDirection(stabilizer.StableRay.direction);
			BaseRayStabilizer_tFC7BFA95792DF321D647D60B39131F943CF657D9 * L_45 = __this->get_stabilizer_19();
			NullCheck(L_45);
			Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_46;
			L_46 = VirtFuncInvoker0< Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(11 /* UnityEngine.Ray Microsoft.MixedReality.Toolkit.Physics.BaseRayStabilizer::get_StableRay() */, L_45);
			V_5 = L_46;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
			L_47 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)(&V_5), /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
			L_48 = MixedRealityPlayspace_TransformDirection_mE50A51C16706799311978145289B6FAA13D1F55A(L_47, /*hidden argument*/NULL);
			V_3 = L_48;
		}

IL_0160:
		{
			// Vector3 endPoint = newGazeOrigin + (newGazeNormal * pointerExtent);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49 = V_2;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = V_3;
			float L_51 = __this->get_pointerExtent_23();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
			L_52 = Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline(L_50, L_51, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
			L_53 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_49, L_52, /*hidden argument*/NULL);
			V_4 = L_53;
			// Rays[0].UpdateRayStep(ref newGazeOrigin, ref endPoint);
			RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA* L_54;
			L_54 = GenericPointer_get_Rays_mDBD09782CD382FBC419BC1F71FE583375E8E290F_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_54);
			RayStep_UpdateRayStep_mC786494602DEBF26F813494D2927707E3B31EE22((RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C *)((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x199, FINALLY_018b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_018b;
	}

FINALLY_018b:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(395)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(395)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x199, IL_0199)
	}

IL_0199:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::OnPostSceneQuery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_OnPostSceneQuery_m57219A56D7BAF9FF8DB89EE2FAE14D56A44BC720 (InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (OnPostSceneQueryPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46_StaticFields*)il2cpp_codegen_static_fields_for(InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46_il2cpp_TypeInfo_var))->get_OnPostSceneQueryPerfMarker_28();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (isDown)
			bool L_2 = __this->get_isDown_24();
			if (!L_2)
			{
				goto IL_0032;
			}
		}

IL_0016:
		{
			// CoreServices.InputSystem.RaisePointerDragged(this, MixedRealityInputAction.None, currentHandedness, currentInputSource);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
			RuntimeObject* L_3;
			L_3 = CoreServices_get_InputSystem_m95E1676849A6E08FEFBE84E7545BCED6CA18A81A(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC_il2cpp_TypeInfo_var);
			MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  L_4;
			L_4 = MixedRealityInputAction_get_None_m6F2B10042303E1F456F501B9E6BB804C1EEC4CA2_inline(/*hidden argument*/NULL);
			uint8_t L_5 = __this->get_currentHandedness_26();
			RuntimeObject* L_6 = __this->get_currentInputSource_25();
			NullCheck(L_3);
			InterfaceActionInvoker4< RuntimeObject*, MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC , uint8_t, RuntimeObject* >::Invoke(36 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePointerDragged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03_il2cpp_TypeInfo_var, L_3, __this, L_4, L_5, L_6);
		}

IL_0032:
		{
			// }
			IL2CPP_LEAVE(0x42, FINALLY_0034);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(52)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::OnPreCurrentPointerTargetChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_OnPreCurrentPointerTargetChange_mD608A9068C38E2B5B4C18741F1D21815D1F49AEE (InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46 * __this, const RuntimeMethod* method)
{
	{
		// public override void OnPreCurrentPointerTargetChange() { }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  InternalGazePointer_get_Position_m177D811F07ACD3F335787005A13AA4988BC7807E (InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46 * __this, const RuntimeMethod* method)
{
	{
		// public override Vector3 Position => gazeTransform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_gazeTransform_18();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  InternalGazePointer_get_Rotation_m181D1ED598C16A0CD70CE3392E54FF69CFBB01C0 (InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46 * __this, const RuntimeMethod* method)
{
	{
		// public override Quaternion Rotation => gazeTransform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_gazeTransform_18();
		NullCheck(L_0);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_Reset_mAB9F93DF29D1D0B22075376542784B8B4EEF2EBB (InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46 * __this, const RuntimeMethod* method)
{
	{
		// Controller = null;
		VirtActionInvoker1< RuntimeObject* >::Invoke(41 /* System.Void Microsoft.MixedReality.Toolkit.Input.GenericPointer::set_Controller(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, __this, (RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::RaisePointerDown(Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_RaisePointerDown_m8B913BD23C1EFB2A6E1801BAD789CD3A2A2C8445 (InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46 * __this, MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  ___mixedRealityInputAction0, uint8_t ___handedness1, RuntimeObject* ___inputSource2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// isDown = true;
		__this->set_isDown_24((bool)1);
		// currentHandedness = handedness;
		uint8_t L_0 = ___handedness1;
		__this->set_currentHandedness_26(L_0);
		// currentInputSource = inputSource;
		RuntimeObject* L_1 = ___inputSource2;
		__this->set_currentInputSource_25(L_1);
		// CoreServices.InputSystem?.RaisePointerDown(this, mixedRealityInputAction, handedness, inputSource);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = CoreServices_get_InputSystem_m95E1676849A6E08FEFBE84E7545BCED6CA18A81A(/*hidden argument*/NULL);
		RuntimeObject* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  L_4 = ___mixedRealityInputAction0;
		uint8_t L_5 = ___handedness1;
		RuntimeObject* L_6 = ___inputSource2;
		NullCheck(G_B2_0);
		InterfaceActionInvoker4< RuntimeObject*, MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC , uint8_t, RuntimeObject* >::Invoke(35 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePointerDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03_il2cpp_TypeInfo_var, G_B2_0, __this, L_4, L_5, L_6);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::RaisePointerUp(Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer_RaisePointerUp_m967632CAFD6FAD9E870AE02A89D145147294F55F (InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46 * __this, MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  ___mixedRealityInputAction0, uint8_t ___handedness1, RuntimeObject* ___inputSource2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		// isDown = false;
		__this->set_isDown_24((bool)0);
		// currentHandedness = Handedness.None;
		__this->set_currentHandedness_26(0);
		// currentInputSource = null;
		__this->set_currentInputSource_25((RuntimeObject*)NULL);
		// CoreServices.InputSystem?.RaisePointerClicked(this, mixedRealityInputAction, 0, handedness, inputSource);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_m95E1676849A6E08FEFBE84E7545BCED6CA18A81A(/*hidden argument*/NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0020;
		}
	}
	{
		goto IL_002a;
	}

IL_0020:
	{
		MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  L_2 = ___mixedRealityInputAction0;
		uint8_t L_3 = ___handedness1;
		RuntimeObject* L_4 = ___inputSource2;
		NullCheck(G_B2_0);
		InterfaceActionInvoker5< RuntimeObject*, MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC , int32_t, uint8_t, RuntimeObject* >::Invoke(37 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePointerClicked(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,System.Int32,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03_il2cpp_TypeInfo_var, G_B2_0, __this, L_2, 0, L_3, L_4);
	}

IL_002a:
	{
		// CoreServices.InputSystem?.RaisePointerUp(this, mixedRealityInputAction, handedness, inputSource);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
		RuntimeObject* L_5;
		L_5 = CoreServices_get_InputSystem_m95E1676849A6E08FEFBE84E7545BCED6CA18A81A(/*hidden argument*/NULL);
		RuntimeObject* L_6 = L_5;
		G_B4_0 = L_6;
		if (L_6)
		{
			G_B5_0 = L_6;
			goto IL_0034;
		}
	}
	{
		return;
	}

IL_0034:
	{
		MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  L_7 = ___mixedRealityInputAction0;
		uint8_t L_8 = ___handedness1;
		RuntimeObject* L_9 = ___inputSource2;
		NullCheck(G_B5_0);
		InterfaceActionInvoker4< RuntimeObject*, MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC , uint8_t, RuntimeObject* >::Invoke(38 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePointerUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03_il2cpp_TypeInfo_var, G_B5_0, __this, L_7, L_8, L_9);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.GazeProvider/InternalGazePointer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalGazePointer__cctor_m892185096CD3BA7B0F57BBD2CE461720D439DACE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral033695E8FCCB2AD8ED3D6CA47B0D7673411B3701);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8646EE7CB5D6509C0ECF1B9EA3BEB8B77A6CB742);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker OnPreSceneQueryPerfMarker = new ProfilerMarker("[MRTK] InternalGazePointer.OnPreSceneQuery");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral033695E8FCCB2AD8ED3D6CA47B0D7673411B3701, /*hidden argument*/NULL);
		((InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46_StaticFields*)il2cpp_codegen_static_fields_for(InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46_il2cpp_TypeInfo_var))->set_OnPreSceneQueryPerfMarker_27(L_0);
		// private static readonly ProfilerMarker OnPostSceneQueryPerfMarker = new ProfilerMarker("[MRTK] InternalGazePointer.OnPostSceneQuery");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteral8646EE7CB5D6509C0ECF1B9EA3BEB8B77A6CB742, /*hidden argument*/NULL);
		((InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46_StaticFields*)il2cpp_codegen_static_fields_for(InternalGazePointer_t76D0909CB27B2FCFB986AD89B093945FBD274F46_il2cpp_TypeInfo_var))->set_OnPostSceneQueryPerfMarker_28(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m15E502A9A597D596FCC80B9EAEAC6752A0EF7C27 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0F6AC43D4D871BC09215158A773B76836B7F3026_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0F6AC43D4D871BC09215158A773B76836B7F3026 * L_0 = (U3CU3Ec_t0F6AC43D4D871BC09215158A773B76836B7F3026 *)il2cpp_codegen_object_new(U3CU3Ec_t0F6AC43D4D871BC09215158A773B76836B7F3026_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE5A5890EF869A4A63D48CAE07D89F63DA8D79785(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t0F6AC43D4D871BC09215158A773B76836B7F3026_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F6AC43D4D871BC09215158A773B76836B7F3026_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE5A5890EF869A4A63D48CAE07D89F63DA8D79785 (U3CU3Ec_t0F6AC43D4D871BC09215158A773B76836B7F3026 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<>c::<EnsureInputSystemValid>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_mF8D942B3C732E0B13F3DFF28BAD89A267A87F443 (U3CU3Ec_t0F6AC43D4D871BC09215158A773B76836B7F3026 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// await new WaitUntil(() => CoreServices.InputSystem != null);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_m95E1676849A6E08FEFBE84E7545BCED6CA18A81A(/*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_MoveNext_m054EF9A51253DC3DA162A7630EEBA29AC27B4530 (U3CEnsureInputSystemValidU3Ed__4_t424E31491A983DD9C3C7D47CE1F8AB8D229284CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CEnsureInputSystemValidU3Ed__4_t424E31491A983DD9C3C7D47CE1F8AB8D229284CC_m49B82F3673C9EC419C693780276113BF027A606F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_mF8D942B3C732E0B13F3DFF28BAD89A267A87F443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0F6AC43D4D871BC09215158A773B76836B7F3026_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * V_1 = NULL;
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B5_0 = NULL;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B4_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0063;
			}
		}

IL_000a:
		{
			// if (CoreServices.InputSystem == null)
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
			RuntimeObject* L_2;
			L_2 = CoreServices_get_InputSystem_m95E1676849A6E08FEFBE84E7545BCED6CA18A81A(/*hidden argument*/NULL);
			if (L_2)
			{
				goto IL_0085;
			}
		}

IL_0011:
		{
			// await new WaitUntil(() => CoreServices.InputSystem != null);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t0F6AC43D4D871BC09215158A773B76836B7F3026_il2cpp_TypeInfo_var);
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_3 = ((U3CU3Ec_t0F6AC43D4D871BC09215158A773B76836B7F3026_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F6AC43D4D871BC09215158A773B76836B7F3026_il2cpp_TypeInfo_var))->get_U3CU3E9__4_0_1();
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_4 = L_3;
			G_B4_0 = L_4;
			if (L_4)
			{
				G_B5_0 = L_4;
				goto IL_0030;
			}
		}

IL_0019:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t0F6AC43D4D871BC09215158A773B76836B7F3026_il2cpp_TypeInfo_var);
			U3CU3Ec_t0F6AC43D4D871BC09215158A773B76836B7F3026 * L_5 = ((U3CU3Ec_t0F6AC43D4D871BC09215158A773B76836B7F3026_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F6AC43D4D871BC09215158A773B76836B7F3026_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_6 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
			Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_mF8D942B3C732E0B13F3DFF28BAD89A267A87F443_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_7 = L_6;
			((U3CU3Ec_t0F6AC43D4D871BC09215158A773B76836B7F3026_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0F6AC43D4D871BC09215158A773B76836B7F3026_il2cpp_TypeInfo_var))->set_U3CU3E9__4_0_1(L_7);
			G_B5_0 = L_7;
		}

IL_0030:
		{
			WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_8 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
			WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_8, G_B5_0, /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * L_9;
			L_9 = AwaiterExtensions_GetAwaiter_mF20B1EFB67A119217295313D9515381D5D058E37(L_8, /*hidden argument*/NULL);
			V_1 = L_9;
			SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * L_10 = V_1;
			NullCheck(L_10);
			bool L_11;
			L_11 = SimpleCoroutineAwaiter_get_IsCompleted_m384C7BCE6258DE0C6D6CC3E0E16058A989033A03_inline(L_10, /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_007f;
			}
		}

IL_0043:
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
			SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * L_13 = V_1;
			__this->set_U3CU3Eu__1_2(L_13);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_14 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CEnsureInputSystemValidU3Ed__4_t424E31491A983DD9C3C7D47CE1F8AB8D229284CC_m49B82F3673C9EC419C693780276113BF027A606F((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_14, (SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A **)(&V_1), (U3CEnsureInputSystemValidU3Ed__4_t424E31491A983DD9C3C7D47CE1F8AB8D229284CC *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CEnsureInputSystemValidU3Ed__4_t424E31491A983DD9C3C7D47CE1F8AB8D229284CC_m49B82F3673C9EC419C693780276113BF027A606F_RuntimeMethod_var);
			goto IL_00b1;
		}

IL_0063:
		{
			RuntimeObject * L_15 = __this->get_U3CU3Eu__1_2();
			V_1 = ((SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A *)CastclassClass((RuntimeObject*)L_15, SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_2(NULL);
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
		}

IL_007f:
		{
			SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * L_17 = V_1;
			NullCheck(L_17);
			SimpleCoroutineAwaiter_GetResult_m26F1D8A16049FE28DBD3F8984CC206197FC92429(L_17, /*hidden argument*/NULL);
		}

IL_0085:
		{
			goto IL_009e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0087;
		}
		throw e;
	}

CATCH_0087:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_19 = V_2;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_18, L_19, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b1;
	} // end catch (depth: 1)

IL_009e:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_20, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnsureInputSystemValidU3Ed__4_MoveNext_m054EF9A51253DC3DA162A7630EEBA29AC27B4530_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnsureInputSystemValidU3Ed__4_t424E31491A983DD9C3C7D47CE1F8AB8D229284CC * _thisAdjusted = reinterpret_cast<U3CEnsureInputSystemValidU3Ed__4_t424E31491A983DD9C3C7D47CE1F8AB8D229284CC *>(__this + _offset);
	U3CEnsureInputSystemValidU3Ed__4_MoveNext_m054EF9A51253DC3DA162A7630EEBA29AC27B4530(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<EnsureInputSystemValid>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_m19C77F43EF8A8C7FDBADBFE65F0E1986C7567861 (U3CEnsureInputSystemValidU3Ed__4_t424E31491A983DD9C3C7D47CE1F8AB8D229284CC * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_m19C77F43EF8A8C7FDBADBFE65F0E1986C7567861_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnsureInputSystemValidU3Ed__4_t424E31491A983DD9C3C7D47CE1F8AB8D229284CC * _thisAdjusted = reinterpret_cast<U3CEnsureInputSystemValidU3Ed__4_t424E31491A983DD9C3C7D47CE1F8AB8D229284CC *>(__this + _offset);
	U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_m19C77F43EF8A8C7FDBADBFE65F0E1986C7567861(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_MoveNext_mC76C76E6ED689D38CDDA88D877E382FA7EFA2F06 (U3CStartU3Ed__2_t87FC0C2ED9C76D28865B69B198B310238401E375 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t87FC0C2ED9C76D28865B69B198B310238401E375_mA1493D95FE0134CDF8A431D667B48B57738A036C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InputSystemGlobalHandlerListener_t6D199696B69A68F0DB57E685C5A0D3656F417833 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		InputSystemGlobalHandlerListener_t6D199696B69A68F0DB57E685C5A0D3656F417833 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004e;
			}
		}

IL_0011:
		{
			// if (lateInitialize)
			InputSystemGlobalHandlerListener_t6D199696B69A68F0DB57E685C5A0D3656F417833 * L_3 = V_1;
			NullCheck(L_3);
			bool L_4 = L_3->get_lateInitialize_4();
			if (!L_4)
			{
				goto IL_0089;
			}
		}

IL_0019:
		{
			// await EnsureInputSystemValid();
			InputSystemGlobalHandlerListener_t6D199696B69A68F0DB57E685C5A0D3656F417833 * L_5 = V_1;
			NullCheck(L_5);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
			L_6 = InputSystemGlobalHandlerListener_EnsureInputSystemValid_mE8C22AA252C0250AB4494635137A0ACCC6C66DD3(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_7;
			L_7 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			bool L_8;
			L_8 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_006a;
			}
		}

IL_002e:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_10 = V_2;
			__this->set_U3CU3Eu__1_3(L_10);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t87FC0C2ED9C76D28865B69B198B310238401E375_mA1493D95FE0134CDF8A431D667B48B57738A036C((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_11, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CStartU3Ed__2_t87FC0C2ED9C76D28865B69B198B310238401E375 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t87FC0C2ED9C76D28865B69B198B310238401E375_mA1493D95FE0134CDF8A431D667B48B57738A036C_RuntimeMethod_var);
			goto IL_00b5;
		}

IL_004e:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_12 = __this->get_U3CU3Eu__1_3();
			V_2 = L_12;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_13 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
		}

IL_006a:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			// if (this == null)
			InputSystemGlobalHandlerListener_t6D199696B69A68F0DB57E685C5A0D3656F417833 * L_15 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_16;
			L_16 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_007c;
			}
		}

IL_007a:
		{
			// return;
			goto IL_00a2;
		}

IL_007c:
		{
			// lateInitialize = false;
			InputSystemGlobalHandlerListener_t6D199696B69A68F0DB57E685C5A0D3656F417833 * L_17 = V_1;
			NullCheck(L_17);
			L_17->set_lateInitialize_4((bool)0);
			// RegisterHandlers();
			InputSystemGlobalHandlerListener_t6D199696B69A68F0DB57E685C5A0D3656F417833 * L_18 = V_1;
			NullCheck(L_18);
			VirtActionInvoker0::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::RegisterHandlers() */, L_18);
		}

IL_0089:
		{
			goto IL_00a2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008b;
		}
		throw e;
	}

CATCH_008b:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_20 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_19, L_20, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b5;
	} // end catch (depth: 1)

IL_00a2:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_21, /*hidden argument*/NULL);
	}

IL_00b5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__2_MoveNext_mC76C76E6ED689D38CDDA88D877E382FA7EFA2F06_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__2_t87FC0C2ED9C76D28865B69B198B310238401E375 * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__2_t87FC0C2ED9C76D28865B69B198B310238401E375 *>(__this + _offset);
	U3CStartU3Ed__2_MoveNext_mC76C76E6ED689D38CDDA88D877E382FA7EFA2F06(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener/<Start>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_SetStateMachine_m2F5DBB982766D5E1E77C261E329FDAD7BB6679FD (U3CStartU3Ed__2_t87FC0C2ED9C76D28865B69B198B310238401E375 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__2_SetStateMachine_m2F5DBB982766D5E1E77C261E329FDAD7BB6679FD_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__2_t87FC0C2ED9C76D28865B69B198B310238401E375 * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__2_t87FC0C2ED9C76D28865B69B198B310238401E375 *>(__this + _offset);
	U3CStartU3Ed__2_SetStateMachine_m2F5DBB982766D5E1E77C261E329FDAD7BB6679FD(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE6AB82DD58D229DEFFD08376E51ABFA201647463 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8751182FFB7410C8B81BCA7DE7E0706E992AABFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8751182FFB7410C8B81BCA7DE7E0706E992AABFE * L_0 = (U3CU3Ec_t8751182FFB7410C8B81BCA7DE7E0706E992AABFE *)il2cpp_codegen_object_new(U3CU3Ec_t8751182FFB7410C8B81BCA7DE7E0706E992AABFE_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m0818EAAEEA7A1F956D4486864F13F0B0DB3DC142(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t8751182FFB7410C8B81BCA7DE7E0706E992AABFE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8751182FFB7410C8B81BCA7DE7E0706E992AABFE_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0818EAAEEA7A1F956D4486864F13F0B0DB3DC142 (U3CU3Ec_t8751182FFB7410C8B81BCA7DE7E0706E992AABFE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<>c::<EnsureInputSystemValid>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_mF53019A241FF3BABC04CBCA26C0E9CCF4C9D794B (U3CU3Ec_t8751182FFB7410C8B81BCA7DE7E0706E992AABFE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// await new WaitUntil(() => CoreServices.InputSystem != null);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_m95E1676849A6E08FEFBE84E7545BCED6CA18A81A(/*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_MoveNext_m9080772C2A22ABC0F4175CCFC37E8139EAA111AE (U3CEnsureInputSystemValidU3Ed__4_tCF34C36AA551AD9C2FEB35D21B884AC4356CD8CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CEnsureInputSystemValidU3Ed__4_tCF34C36AA551AD9C2FEB35D21B884AC4356CD8CE_m0E9AD5E6BDD5E16BF62BA9E9AFBCE6F48C449C84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_mF53019A241FF3BABC04CBCA26C0E9CCF4C9D794B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8751182FFB7410C8B81BCA7DE7E0706E992AABFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * V_1 = NULL;
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B5_0 = NULL;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B4_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0063;
			}
		}

IL_000a:
		{
			// if (CoreServices.InputSystem == null)
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
			RuntimeObject* L_2;
			L_2 = CoreServices_get_InputSystem_m95E1676849A6E08FEFBE84E7545BCED6CA18A81A(/*hidden argument*/NULL);
			if (L_2)
			{
				goto IL_0085;
			}
		}

IL_0011:
		{
			// await new WaitUntil(() => CoreServices.InputSystem != null);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t8751182FFB7410C8B81BCA7DE7E0706E992AABFE_il2cpp_TypeInfo_var);
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_3 = ((U3CU3Ec_t8751182FFB7410C8B81BCA7DE7E0706E992AABFE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8751182FFB7410C8B81BCA7DE7E0706E992AABFE_il2cpp_TypeInfo_var))->get_U3CU3E9__4_0_1();
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_4 = L_3;
			G_B4_0 = L_4;
			if (L_4)
			{
				G_B5_0 = L_4;
				goto IL_0030;
			}
		}

IL_0019:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t8751182FFB7410C8B81BCA7DE7E0706E992AABFE_il2cpp_TypeInfo_var);
			U3CU3Ec_t8751182FFB7410C8B81BCA7DE7E0706E992AABFE * L_5 = ((U3CU3Ec_t8751182FFB7410C8B81BCA7DE7E0706E992AABFE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8751182FFB7410C8B81BCA7DE7E0706E992AABFE_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_6 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
			Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3CEnsureInputSystemValidU3Eb__4_0_mF53019A241FF3BABC04CBCA26C0E9CCF4C9D794B_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_7 = L_6;
			((U3CU3Ec_t8751182FFB7410C8B81BCA7DE7E0706E992AABFE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8751182FFB7410C8B81BCA7DE7E0706E992AABFE_il2cpp_TypeInfo_var))->set_U3CU3E9__4_0_1(L_7);
			G_B5_0 = L_7;
		}

IL_0030:
		{
			WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_8 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
			WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_8, G_B5_0, /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * L_9;
			L_9 = AwaiterExtensions_GetAwaiter_mF20B1EFB67A119217295313D9515381D5D058E37(L_8, /*hidden argument*/NULL);
			V_1 = L_9;
			SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * L_10 = V_1;
			NullCheck(L_10);
			bool L_11;
			L_11 = SimpleCoroutineAwaiter_get_IsCompleted_m384C7BCE6258DE0C6D6CC3E0E16058A989033A03_inline(L_10, /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_007f;
			}
		}

IL_0043:
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
			SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * L_13 = V_1;
			__this->set_U3CU3Eu__1_2(L_13);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_14 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CEnsureInputSystemValidU3Ed__4_tCF34C36AA551AD9C2FEB35D21B884AC4356CD8CE_m0E9AD5E6BDD5E16BF62BA9E9AFBCE6F48C449C84((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_14, (SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A **)(&V_1), (U3CEnsureInputSystemValidU3Ed__4_tCF34C36AA551AD9C2FEB35D21B884AC4356CD8CE *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CEnsureInputSystemValidU3Ed__4_tCF34C36AA551AD9C2FEB35D21B884AC4356CD8CE_m0E9AD5E6BDD5E16BF62BA9E9AFBCE6F48C449C84_RuntimeMethod_var);
			goto IL_00b1;
		}

IL_0063:
		{
			RuntimeObject * L_15 = __this->get_U3CU3Eu__1_2();
			V_1 = ((SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A *)CastclassClass((RuntimeObject*)L_15, SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_2(NULL);
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
		}

IL_007f:
		{
			SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * L_17 = V_1;
			NullCheck(L_17);
			SimpleCoroutineAwaiter_GetResult_m26F1D8A16049FE28DBD3F8984CC206197FC92429(L_17, /*hidden argument*/NULL);
		}

IL_0085:
		{
			goto IL_009e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0087;
		}
		throw e;
	}

CATCH_0087:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_19 = V_2;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_18, L_19, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b1;
	} // end catch (depth: 1)

IL_009e:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_20, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnsureInputSystemValidU3Ed__4_MoveNext_m9080772C2A22ABC0F4175CCFC37E8139EAA111AE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnsureInputSystemValidU3Ed__4_tCF34C36AA551AD9C2FEB35D21B884AC4356CD8CE * _thisAdjusted = reinterpret_cast<U3CEnsureInputSystemValidU3Ed__4_tCF34C36AA551AD9C2FEB35D21B884AC4356CD8CE *>(__this + _offset);
	U3CEnsureInputSystemValidU3Ed__4_MoveNext_m9080772C2A22ABC0F4175CCFC37E8139EAA111AE(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<EnsureInputSystemValid>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_mD5AEDD28CE3602678D891EF3EB9299D1A125D1F1 (U3CEnsureInputSystemValidU3Ed__4_tCF34C36AA551AD9C2FEB35D21B884AC4356CD8CE * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_mD5AEDD28CE3602678D891EF3EB9299D1A125D1F1_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnsureInputSystemValidU3Ed__4_tCF34C36AA551AD9C2FEB35D21B884AC4356CD8CE * _thisAdjusted = reinterpret_cast<U3CEnsureInputSystemValidU3Ed__4_tCF34C36AA551AD9C2FEB35D21B884AC4356CD8CE *>(__this + _offset);
	U3CEnsureInputSystemValidU3Ed__4_SetStateMachine_mD5AEDD28CE3602678D891EF3EB9299D1A125D1F1(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_MoveNext_m596CBB5CC7B52141A30082389534710D94E9C1D3 (U3CStartU3Ed__2_t035FE53428BD664E75786F7B5DA5A565D39C3744 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t035FE53428BD664E75786F7B5DA5A565D39C3744_mBA89AFBE17E9186D1D1076D81D1B4F8CB300F6C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_t53E462EB5EACBDD1B155445FB7557C04D14E8CC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InputSystemGlobalListener_t35C2E6176D79EADF5B304B877FE7559F42B70EF9 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		InputSystemGlobalListener_t35C2E6176D79EADF5B304B877FE7559F42B70EF9 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004e;
			}
		}

IL_0011:
		{
			// if (lateInitialize)
			InputSystemGlobalListener_t35C2E6176D79EADF5B304B877FE7559F42B70EF9 * L_3 = V_1;
			NullCheck(L_3);
			bool L_4 = L_3->get_lateInitialize_4();
			if (!L_4)
			{
				goto IL_0093;
			}
		}

IL_0019:
		{
			// await EnsureInputSystemValid();
			InputSystemGlobalListener_t35C2E6176D79EADF5B304B877FE7559F42B70EF9 * L_5 = V_1;
			NullCheck(L_5);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
			L_6 = InputSystemGlobalListener_EnsureInputSystemValid_m92EF9655943E7B556FF0B1BD961C1A48682A1F45(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_7;
			L_7 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			bool L_8;
			L_8 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_006a;
			}
		}

IL_002e:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_10 = V_2;
			__this->set_U3CU3Eu__1_3(L_10);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t035FE53428BD664E75786F7B5DA5A565D39C3744_mBA89AFBE17E9186D1D1076D81D1B4F8CB300F6C9((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_11, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CStartU3Ed__2_t035FE53428BD664E75786F7B5DA5A565D39C3744 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartU3Ed__2_t035FE53428BD664E75786F7B5DA5A565D39C3744_mBA89AFBE17E9186D1D1076D81D1B4F8CB300F6C9_RuntimeMethod_var);
			goto IL_00bf;
		}

IL_004e:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_12 = __this->get_U3CU3Eu__1_3();
			V_2 = L_12;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_13 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
		}

IL_006a:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			// if (this == null)
			InputSystemGlobalListener_t35C2E6176D79EADF5B304B877FE7559F42B70EF9 * L_15 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_16;
			L_16 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_007c;
			}
		}

IL_007a:
		{
			// return;
			goto IL_00ac;
		}

IL_007c:
		{
			// lateInitialize = false;
			InputSystemGlobalListener_t35C2E6176D79EADF5B304B877FE7559F42B70EF9 * L_17 = V_1;
			NullCheck(L_17);
			L_17->set_lateInitialize_4((bool)0);
			// CoreServices.InputSystem.Register(gameObject);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
			RuntimeObject* L_18;
			L_18 = CoreServices_get_InputSystem_m95E1676849A6E08FEFBE84E7545BCED6CA18A81A(/*hidden argument*/NULL);
			InputSystemGlobalListener_t35C2E6176D79EADF5B304B877FE7559F42B70EF9 * L_19 = V_1;
			NullCheck(L_19);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
			L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_19, /*hidden argument*/NULL);
			NullCheck(L_18);
			InterfaceActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.IMixedRealityEventSystem::Register(UnityEngine.GameObject) */, IMixedRealityEventSystem_t53E462EB5EACBDD1B155445FB7557C04D14E8CC1_il2cpp_TypeInfo_var, L_18, L_20);
		}

IL_0093:
		{
			goto IL_00ac;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0095;
		}
		throw e;
	}

CATCH_0095:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_22 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_21, L_22, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00bf;
	} // end catch (depth: 1)

IL_00ac:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_23 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_23, /*hidden argument*/NULL);
	}

IL_00bf:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__2_MoveNext_m596CBB5CC7B52141A30082389534710D94E9C1D3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__2_t035FE53428BD664E75786F7B5DA5A565D39C3744 * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__2_t035FE53428BD664E75786F7B5DA5A565D39C3744 *>(__this + _offset);
	U3CStartU3Ed__2_MoveNext_m596CBB5CC7B52141A30082389534710D94E9C1D3(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalListener/<Start>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_SetStateMachine_m7975814C93B06FD756629C74D4D889F336DF8552 (U3CStartU3Ed__2_t035FE53428BD664E75786F7B5DA5A565D39C3744 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__2_SetStateMachine_m7975814C93B06FD756629C74D4D889F336DF8552_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__2_t035FE53428BD664E75786F7B5DA5A565D39C3744 * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__2_t035FE53428BD664E75786F7B5DA5A565D39C3744 *>(__this + _offset);
	U3CStartU3Ed__2_SetStateMachine_m7975814C93B06FD756629C74D4D889F336DF8552(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16__ctor_m10BC195E4E2DF8D1DFF6FB8A9F62437A2D0D1A98 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m3972B2C66691EA6DF91A19CEF3521B7C2679D7A1(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16_System_IDisposable_Dispose_mB74E74E1600632EE0B64E39B2F7CDC666D7FEFC2 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3Cget_ActiveMixedRealityPointersU3Ed__16_U3CU3Em__Finally1_mBED9E87AD6E003AD009A770C9F1621775C025378(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_ActiveMixedRealityPointersU3Ed__16_MoveNext_m52C701F9C9868575A15B2377C2EC37FC91AD1A10 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m272B0D799E55D4AFEF7503463F62F0A6181E1B23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m740A93CA40F5086CBE6AAD1953511F29C0C79677_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1A1FFE750FA22BC282BB1627120FACD66DC06688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mC46BD470B0652003AFBFB8B04AEF73D7C6DB159A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	MixedRealityInputModule_t76F66FFFC2F805CEB169ABB00F69053EA20B6E99 * V_2 = NULL;
	KeyValuePair_2_t2E7D57D6DE02C3C4616E9788456652661A076A00  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			MixedRealityInputModule_t76F66FFFC2F805CEB169ABB00F69053EA20B6E99 * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0064;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_0096;
		}

IL_0019:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (var pointerDataEntry in pointerDataToUpdate)
			MixedRealityInputModule_t76F66FFFC2F805CEB169ABB00F69053EA20B6E99 * L_4 = V_2;
			NullCheck(L_4);
			Dictionary_2_t99258040B667AD054EDE09515EFC6475271347D4 * L_5 = L_4->get_pointerDataToUpdate_30();
			NullCheck(L_5);
			Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9  L_6;
			L_6 = Dictionary_2_GetEnumerator_m272B0D799E55D4AFEF7503463F62F0A6181E1B23(L_5, /*hidden argument*/Dictionary_2_GetEnumerator_m272B0D799E55D4AFEF7503463F62F0A6181E1B23_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_4(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_006c;
		}

IL_003b:
		{
			// foreach (var pointerDataEntry in pointerDataToUpdate)
			Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9 * L_7 = __this->get_address_of_U3CU3E7__wrap1_4();
			KeyValuePair_2_t2E7D57D6DE02C3C4616E9788456652661A076A00  L_8;
			L_8 = Enumerator_get_Current_m1A1FFE750FA22BC282BB1627120FACD66DC06688_inline((Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9 *)L_7, /*hidden argument*/Enumerator_get_Current_m1A1FFE750FA22BC282BB1627120FACD66DC06688_RuntimeMethod_var);
			V_3 = L_8;
			// yield return pointerDataEntry.Value.pointer;
			PointerData_tFFB8BD6689DF7417692F19AD49E7AAF716C1F95E * L_9;
			L_9 = KeyValuePair_2_get_Value_mC46BD470B0652003AFBFB8B04AEF73D7C6DB159A_inline((KeyValuePair_2_t2E7D57D6DE02C3C4616E9788456652661A076A00 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_mC46BD470B0652003AFBFB8B04AEF73D7C6DB159A_RuntimeMethod_var);
			NullCheck(L_9);
			RuntimeObject* L_10 = L_9->get_pointer_0();
			__this->set_U3CU3E2__current_1(L_10);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0096;
		}

IL_0064:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_006c:
		{
			// foreach (var pointerDataEntry in pointerDataToUpdate)
			Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9 * L_11 = __this->get_address_of_U3CU3E7__wrap1_4();
			bool L_12;
			L_12 = Enumerator_MoveNext_m740A93CA40F5086CBE6AAD1953511F29C0C79677((Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9 *)L_11, /*hidden argument*/Enumerator_MoveNext_m740A93CA40F5086CBE6AAD1953511F29C0C79677_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_003b;
			}
		}

IL_0079:
		{
			U3Cget_ActiveMixedRealityPointersU3Ed__16_U3CU3Em__Finally1_mBED9E87AD6E003AD009A770C9F1621775C025378(__this, /*hidden argument*/NULL);
			Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9 * L_13 = __this->get_address_of_U3CU3E7__wrap1_4();
			il2cpp_codegen_initobj(L_13, sizeof(Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9 ));
			// }
			V_0 = (bool)0;
			goto IL_0096;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_008f;
	}

FAULT_008f:
	{ // begin fault (depth: 1)
		U3Cget_ActiveMixedRealityPointersU3Ed__16_System_IDisposable_Dispose_mB74E74E1600632EE0B64E39B2F7CDC666D7FEFC2(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(143)
	} // end fault
	IL2CPP_CLEANUP(143)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0096:
	{
		bool L_14 = V_0;
		return L_14;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16_U3CU3Em__Finally1_mBED9E87AD6E003AD009A770C9F1621775C025378 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4C03F360649AEC870F575452D949D5AA7F5E524E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9 * L_0 = __this->get_address_of_U3CU3E7__wrap1_4();
		Enumerator_Dispose_m4C03F360649AEC870F575452D949D5AA7F5E524E((Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9 *)L_0, /*hidden argument*/Enumerator_Dispose_m4C03F360649AEC870F575452D949D5AA7F5E524E_RuntimeMethod_var);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.Generic.IEnumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_Generic_IEnumeratorU3CMicrosoft_MixedReality_Toolkit_Input_IMixedRealityPointerU3E_get_Current_m4A98B88C25D99D5B2F7A7F391F8A479F7707B7AF (U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_IEnumerator_Reset_m6BC88D00366EC84F37A0C5735AABF2AB64D07AEE (U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_IEnumerator_Reset_m6BC88D00366EC84F37A0C5735AABF2AB64D07AEE_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_IEnumerator_get_Current_m9CEE4229F698B3FA7F25AF96F4FC554A5DE21F60 (U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.Generic.IEnumerable<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_Generic_IEnumerableU3CMicrosoft_MixedReality_Toolkit_Input_IMixedRealityPointerU3E_GetEnumerator_m7C15E1FA4CDC13AD38F984B03681EFF53A6F418F (U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m3972B2C66691EA6DF91A19CEF3521B7C2679D7A1(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A * L_3 = (U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A *)il2cpp_codegen_object_new(U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A_il2cpp_TypeInfo_var);
		U3Cget_ActiveMixedRealityPointersU3Ed__16__ctor_m10BC195E4E2DF8D1DFF6FB8A9F62437A2D0D1A98(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A * L_4 = V_0;
		MixedRealityInputModule_t76F66FFFC2F805CEB169ABB00F69053EA20B6E99 * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_IEnumerable_GetEnumerator_m5AA7A980B39EB3DCBCFF5E746C3A8D416F2E61CC (U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_ActiveMixedRealityPointersU3Ed__16_System_Collections_Generic_IEnumerableU3CMicrosoft_MixedReality_Toolkit_Input_IMixedRealityPointerU3E_GetEnumerator_m7C15E1FA4CDC13AD38F984B03681EFF53A6F418F(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerData__ctor_m3746382C1455688B6DAC140AD2D4D383FCD3B782 (PointerData_tFFB8BD6689DF7417692F19AD49E7AAF716C1F95E * __this, RuntimeObject* ___pointer0, EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___eventSystem1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PointerEventData.FramePressState nextPressState = PointerEventData.FramePressState.NotChanged;
		__this->set_nextPressState_2(3);
		// public MouseState mouseState = new MouseState();
		MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 * L_0 = (MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1 *)il2cpp_codegen_object_new(MouseState_tD62A64A795CF964D179003BB566EF667DB7DACC1_il2cpp_TypeInfo_var);
		MouseState__ctor_m16EF8D45AF8A178368547BD1CE4FBF9DBC563605(L_0, /*hidden argument*/NULL);
		__this->set_mouseState_3(L_0);
		// public PointerData(IMixedRealityPointer pointer, EventSystem eventSystem)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.pointer = pointer;
		RuntimeObject* L_1 = ___pointer0;
		__this->set_pointer_0(L_1);
		// eventDataLeft = new PointerEventData(eventSystem);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_2 = ___eventSystem1;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_3 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)il2cpp_codegen_object_new(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2(L_3, L_2, /*hidden argument*/NULL);
		__this->set_eventDataLeft_4(L_3);
		// eventDataMiddle = new PointerEventData(eventSystem);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_4 = ___eventSystem1;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_5 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)il2cpp_codegen_object_new(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2(L_5, L_4, /*hidden argument*/NULL);
		__this->set_eventDataMiddle_5(L_5);
		// eventDataRight = new PointerEventData(eventSystem);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_6 = ___eventSystem1;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_7 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)il2cpp_codegen_object_new(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2(L_7, L_6, /*hidden argument*/NULL);
		__this->set_eventDataRight_6(L_7);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m58A5315F1FC629C1369F32A049FC41148A34E08D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * L_0 = (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 *)il2cpp_codegen_object_new(U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mAC66AA18C6C2B913FA7AF73E9F54B97E495B3883(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAC66AA18C6C2B913FA7AF73E9F54B97E495B3883 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_0(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_0_mDD146F63651E71EB794CEADDCD168E53B163E0A5 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourceStateEventData_tF68358C62720A3DE79F698D981E3F0C7E6023F2F_m05F9622A822012A8FC1E8B14ACDD13CF099183B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourceStateHandler_t851C38B2BC0C1AF0BDBD3B985D15026F0C6FDB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourceStateEventData_tF68358C62720A3DE79F698D981E3F0C7E6023F2F * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourceStateEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourceStateEventData_tF68358C62720A3DE79F698D981E3F0C7E6023F2F * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourceStateEventData_tF68358C62720A3DE79F698D981E3F0C7E6023F2F_m05F9622A822012A8FC1E8B14ACDD13CF099183B4(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourceStateEventData_tF68358C62720A3DE79F698D981E3F0C7E6023F2F_m05F9622A822012A8FC1E8B14ACDD13CF099183B4_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourceDetected(casted);
		RuntimeObject* L_2 = ___handler0;
		SourceStateEventData_tF68358C62720A3DE79F698D981E3F0C7E6023F2F * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourceStateEventData_tF68358C62720A3DE79F698D981E3F0C7E6023F2F * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler::OnSourceDetected(Microsoft.MixedReality.Toolkit.Input.SourceStateEventData) */, IMixedRealitySourceStateHandler_t851C38B2BC0C1AF0BDBD3B985D15026F0C6FDB67_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_1(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_1_m2C8D5BD65D13B04EDD38B9DCF48B98585C1817E4 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourceStateEventData_tF68358C62720A3DE79F698D981E3F0C7E6023F2F_m05F9622A822012A8FC1E8B14ACDD13CF099183B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourceStateHandler_t851C38B2BC0C1AF0BDBD3B985D15026F0C6FDB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourceStateEventData_tF68358C62720A3DE79F698D981E3F0C7E6023F2F * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourceStateEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourceStateEventData_tF68358C62720A3DE79F698D981E3F0C7E6023F2F * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourceStateEventData_tF68358C62720A3DE79F698D981E3F0C7E6023F2F_m05F9622A822012A8FC1E8B14ACDD13CF099183B4(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourceStateEventData_tF68358C62720A3DE79F698D981E3F0C7E6023F2F_m05F9622A822012A8FC1E8B14ACDD13CF099183B4_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourceLost(casted);
		RuntimeObject* L_2 = ___handler0;
		SourceStateEventData_tF68358C62720A3DE79F698D981E3F0C7E6023F2F * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourceStateEventData_tF68358C62720A3DE79F698D981E3F0C7E6023F2F * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler::OnSourceLost(Microsoft.MixedReality.Toolkit.Input.SourceStateEventData) */, IMixedRealitySourceStateHandler_t851C38B2BC0C1AF0BDBD3B985D15026F0C6FDB67_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_2(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_2_mDB001C996F3F800696794A79AE9CE8FC90B947A5 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tACD69D8464067CAB384CC33C478335A93920D0C2_mD4D3917CBBC369EA129D9A0BD13AFB95D19B6D51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourcePoseHandler_tADF1DF2DE94864C6FA9E43F55A01DE42BE023C9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_tACD69D8464067CAB384CC33C478335A93920D0C2 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<TrackingState>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_tACD69D8464067CAB384CC33C478335A93920D0C2 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tACD69D8464067CAB384CC33C478335A93920D0C2_mD4D3917CBBC369EA129D9A0BD13AFB95D19B6D51(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tACD69D8464067CAB384CC33C478335A93920D0C2_mD4D3917CBBC369EA129D9A0BD13AFB95D19B6D51_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_tACD69D8464067CAB384CC33C478335A93920D0C2 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_tACD69D8464067CAB384CC33C478335A93920D0C2 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>) */, IMixedRealitySourcePoseHandler_tADF1DF2DE94864C6FA9E43F55A01DE42BE023C9B_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_3(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_3_m1576F8FC08A70C75448569B74F2565B06489E124 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t424CC2521693730C3C44C26B3EB1E7CA4F3529EA_m62CD04716E20AF90C6519E22C41D7068039C0135_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourcePoseHandler_tADF1DF2DE94864C6FA9E43F55A01DE42BE023C9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_t424CC2521693730C3C44C26B3EB1E7CA4F3529EA * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<Vector2>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_t424CC2521693730C3C44C26B3EB1E7CA4F3529EA * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t424CC2521693730C3C44C26B3EB1E7CA4F3529EA_m62CD04716E20AF90C6519E22C41D7068039C0135(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t424CC2521693730C3C44C26B3EB1E7CA4F3529EA_m62CD04716E20AF90C6519E22C41D7068039C0135_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_t424CC2521693730C3C44C26B3EB1E7CA4F3529EA * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_t424CC2521693730C3C44C26B3EB1E7CA4F3529EA * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>) */, IMixedRealitySourcePoseHandler_tADF1DF2DE94864C6FA9E43F55A01DE42BE023C9B_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_4(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_4_mACB185C0ECC578BA9B2CF5F62074A48BB56100C1 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tEEC6D7835C6D2171E6766178D4C5272FAE422494_mC92DDC0CD1DE7EBC7BE983B200F12104F8AF5963_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourcePoseHandler_tADF1DF2DE94864C6FA9E43F55A01DE42BE023C9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_tEEC6D7835C6D2171E6766178D4C5272FAE422494 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<Vector3>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_tEEC6D7835C6D2171E6766178D4C5272FAE422494 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tEEC6D7835C6D2171E6766178D4C5272FAE422494_mC92DDC0CD1DE7EBC7BE983B200F12104F8AF5963(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tEEC6D7835C6D2171E6766178D4C5272FAE422494_mC92DDC0CD1DE7EBC7BE983B200F12104F8AF5963_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_tEEC6D7835C6D2171E6766178D4C5272FAE422494 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_tEEC6D7835C6D2171E6766178D4C5272FAE422494 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>) */, IMixedRealitySourcePoseHandler_tADF1DF2DE94864C6FA9E43F55A01DE42BE023C9B_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_5(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_5_m689F0DB52356B9DAECAD3E237CAB94605EF140B6 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t0C3E52D1B6B037B26D3125432D5FC5A1632236D5_mEB5A92597134F8DE06AD8AE44FE17AC57793ECE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourcePoseHandler_tADF1DF2DE94864C6FA9E43F55A01DE42BE023C9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_t0C3E52D1B6B037B26D3125432D5FC5A1632236D5 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<Quaternion>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_t0C3E52D1B6B037B26D3125432D5FC5A1632236D5 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t0C3E52D1B6B037B26D3125432D5FC5A1632236D5_mEB5A92597134F8DE06AD8AE44FE17AC57793ECE9(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_t0C3E52D1B6B037B26D3125432D5FC5A1632236D5_mEB5A92597134F8DE06AD8AE44FE17AC57793ECE9_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_t0C3E52D1B6B037B26D3125432D5FC5A1632236D5 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_t0C3E52D1B6B037B26D3125432D5FC5A1632236D5 * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>) */, IMixedRealitySourcePoseHandler_tADF1DF2DE94864C6FA9E43F55A01DE42BE023C9B_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_6(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_6_mAE072FDEA32076E89A1420A16564CCE06CDEDC5D (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tFE8555246DDB23EE10ACB4694CD556E6CB2EA1EA_m794B7BC2DE09AE0B32C41FD3CBBF54DE7269BDAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySourcePoseHandler_tADF1DF2DE94864C6FA9E43F55A01DE42BE023C9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SourcePoseEventData_1_tFE8555246DDB23EE10ACB4694CD556E6CB2EA1EA * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SourcePoseEventData<MixedRealityPose>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SourcePoseEventData_1_tFE8555246DDB23EE10ACB4694CD556E6CB2EA1EA * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tFE8555246DDB23EE10ACB4694CD556E6CB2EA1EA_m794B7BC2DE09AE0B32C41FD3CBBF54DE7269BDAB(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSourcePoseEventData_1_tFE8555246DDB23EE10ACB4694CD556E6CB2EA1EA_m794B7BC2DE09AE0B32C41FD3CBBF54DE7269BDAB_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSourcePoseChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		SourcePoseEventData_1_tFE8555246DDB23EE10ACB4694CD556E6CB2EA1EA * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SourcePoseEventData_1_tFE8555246DDB23EE10ACB4694CD556E6CB2EA1EA * >::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler::OnSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>) */, IMixedRealitySourcePoseHandler_tADF1DF2DE94864C6FA9E43F55A01DE42BE023C9B_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_7(Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_7_m278BC577F17E8550F5720280B4A2B295D4016817 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisFocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F_mA0CEDB25413DA6F1F22CBCE7562C74043E88256B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityFocusChangedHandler_t72FE5A113A51A35C36DA67789766F9CD4F7A69C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<FocusEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		FocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisFocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F_mA0CEDB25413DA6F1F22CBCE7562C74043E88256B(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisFocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F_mA0CEDB25413DA6F1F22CBCE7562C74043E88256B_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnBeforeFocusChange(casted);
		RuntimeObject* L_2 = ___handler0;
		FocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< FocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler::OnBeforeFocusChange(Microsoft.MixedReality.Toolkit.Input.FocusEventData) */, IMixedRealityFocusChangedHandler_t72FE5A113A51A35C36DA67789766F9CD4F7A69C5_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_8(Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_8_mA06084922D6B094F11EF651E89C078947ADE9F4F (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisFocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F_mA0CEDB25413DA6F1F22CBCE7562C74043E88256B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityFocusChangedHandler_t72FE5A113A51A35C36DA67789766F9CD4F7A69C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<FocusEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		FocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisFocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F_mA0CEDB25413DA6F1F22CBCE7562C74043E88256B(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisFocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F_mA0CEDB25413DA6F1F22CBCE7562C74043E88256B_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnFocusChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		FocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< FocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler::OnFocusChanged(Microsoft.MixedReality.Toolkit.Input.FocusEventData) */, IMixedRealityFocusChangedHandler_t72FE5A113A51A35C36DA67789766F9CD4F7A69C5_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_9(Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_9_m1372CC32A0FD3719E75D1606AD76DDC0B190FC86 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisFocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F_mA0CEDB25413DA6F1F22CBCE7562C74043E88256B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityFocusHandler_tD0C2AA219563F8BD3CE819D0510553BF041A90D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<FocusEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		FocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisFocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F_mA0CEDB25413DA6F1F22CBCE7562C74043E88256B(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisFocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F_mA0CEDB25413DA6F1F22CBCE7562C74043E88256B_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnFocusEnter(casted);
		RuntimeObject* L_2 = ___handler0;
		FocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< FocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler::OnFocusEnter(Microsoft.MixedReality.Toolkit.Input.FocusEventData) */, IMixedRealityFocusHandler_tD0C2AA219563F8BD3CE819D0510553BF041A90D8_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_10(Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_10_m823D3D45DDD06875B92163AB8F6FA6A6A2867BBB (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisFocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F_mA0CEDB25413DA6F1F22CBCE7562C74043E88256B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityFocusHandler_tD0C2AA219563F8BD3CE819D0510553BF041A90D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<FocusEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		FocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisFocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F_mA0CEDB25413DA6F1F22CBCE7562C74043E88256B(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisFocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F_mA0CEDB25413DA6F1F22CBCE7562C74043E88256B_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnFocusExit(casted);
		RuntimeObject* L_2 = ___handler0;
		FocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< FocusEventData_t28A60846BC6C047F455BE80E469566340D03CB1F * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler::OnFocusExit(Microsoft.MixedReality.Toolkit.Input.FocusEventData) */, IMixedRealityFocusHandler_tD0C2AA219563F8BD3CE819D0510553BF041A90D8_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_11(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_11_m97FD31C945EEF9DEE76A0EE5FFBDEAA5E3FD42DA (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B_mB609AEAF0D60B613C32BB4235A06C54B19F67889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointerHandler_t72C39FEFB7745C2DDB4CFC4F2D241DEFE575C0D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<MixedRealityPointerEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		MixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B_mB609AEAF0D60B613C32BB4235A06C54B19F67889(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B_mB609AEAF0D60B613C32BB4235A06C54B19F67889_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnPointerDown(casted);
		RuntimeObject* L_2 = ___handler0;
		MixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler::OnPointerDown(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData) */, IMixedRealityPointerHandler_t72C39FEFB7745C2DDB4CFC4F2D241DEFE575C0D1_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_12(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_12_mD3DAE27764C759B1340FBAE71EDFFBE7E7842A1E (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B_mB609AEAF0D60B613C32BB4235A06C54B19F67889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointerHandler_t72C39FEFB7745C2DDB4CFC4F2D241DEFE575C0D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<MixedRealityPointerEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		MixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B_mB609AEAF0D60B613C32BB4235A06C54B19F67889(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B_mB609AEAF0D60B613C32BB4235A06C54B19F67889_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnPointerDragged(casted);
		RuntimeObject* L_2 = ___handler0;
		MixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler::OnPointerDragged(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData) */, IMixedRealityPointerHandler_t72C39FEFB7745C2DDB4CFC4F2D241DEFE575C0D1_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_13(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_13_m5985A28D6EAC0146EFDB7C512BD45B6EB31910C1 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B_mB609AEAF0D60B613C32BB4235A06C54B19F67889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointerHandler_t72C39FEFB7745C2DDB4CFC4F2D241DEFE575C0D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<MixedRealityPointerEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		MixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B_mB609AEAF0D60B613C32BB4235A06C54B19F67889(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B_mB609AEAF0D60B613C32BB4235A06C54B19F67889_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnPointerClicked(casted);
		RuntimeObject* L_2 = ___handler0;
		MixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler::OnPointerClicked(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData) */, IMixedRealityPointerHandler_t72C39FEFB7745C2DDB4CFC4F2D241DEFE575C0D1_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_14(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_14_m359EDBEB1E6785C45F5E29122F6E812F4D66F930 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B_mB609AEAF0D60B613C32BB4235A06C54B19F67889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointerHandler_t72C39FEFB7745C2DDB4CFC4F2D241DEFE575C0D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<MixedRealityPointerEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		MixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B_mB609AEAF0D60B613C32BB4235A06C54B19F67889(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisMixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B_mB609AEAF0D60B613C32BB4235A06C54B19F67889_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnPointerUp(casted);
		RuntimeObject* L_2 = ___handler0;
		MixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< MixedRealityPointerEventData_tDCABDEE26168E67EC52B8636720923999E93F45B * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler::OnPointerUp(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData) */, IMixedRealityPointerHandler_t72C39FEFB7745C2DDB4CFC4F2D241DEFE575C0D1_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_15(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_15_mB9B0822AB5DF5620D1423C234AC0154A6EFD9708 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_t473158012DB9CEDED34D3E67CDF460FEC832B9C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputDown(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler::OnInputDown(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityInputHandler_t473158012DB9CEDED34D3E67CDF460FEC832B9C6_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_16(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_16_m339EAB9A2F9E576420D44F6FC1DC426B4CE99DAD (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_t473158012DB9CEDED34D3E67CDF460FEC832B9C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_mDECD9C5C329204B6BDD8823D339F9C9D9A0C1C23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_t473158012DB9CEDED34D3E67CDF460FEC832B9C6_m510EE68187412AC23FD57F109B90D5FAA40469C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var inputData = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05_RuntimeMethod_var);
		V_0 = L_1;
		// if (handler is IMixedRealityInputHandler inputHandler && !inputHandler.IsNull())
		RuntimeObject* L_2 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealityInputHandler_t473158012DB9CEDED34D3E67CDF460FEC832B9C6_il2cpp_TypeInfo_var));
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = V_1;
		bool L_5;
		L_5 = UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_t473158012DB9CEDED34D3E67CDF460FEC832B9C6_m510EE68187412AC23FD57F109B90D5FAA40469C8(L_4, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_t473158012DB9CEDED34D3E67CDF460FEC832B9C6_m510EE68187412AC23FD57F109B90D5FAA40469C8_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// inputHandler.OnInputDown(inputData);
		RuntimeObject* L_6 = V_1;
		InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * L_7 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker1< InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler::OnInputDown(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityInputHandler_t473158012DB9CEDED34D3E67CDF460FEC832B9C6_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_0020:
	{
		// if (handler is IMixedRealityInputActionHandler actionHandler && !actionHandler.IsNull())
		RuntimeObject* L_8 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_il2cpp_TypeInfo_var));
		RuntimeObject* L_9 = V_2;
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_10 = V_2;
		bool L_11;
		L_11 = UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_mDECD9C5C329204B6BDD8823D339F9C9D9A0C1C23(L_10, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_mDECD9C5C329204B6BDD8823D339F9C9D9A0C1C23_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0039;
		}
	}
	{
		// actionHandler.OnActionStarted(inputData);
		RuntimeObject* L_12 = V_2;
		InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * L_13 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker1< BaseInputEventData_t8CABFB1FC933DDC0AA250178D3D0D5CB0ED5C3AF * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionStarted(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_il2cpp_TypeInfo_var, L_12, L_13);
	}

IL_0039:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_17(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_17_m15AC22BAD752CA2F2128CB7FFD057B57A2CAD4A0 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_t473158012DB9CEDED34D3E67CDF460FEC832B9C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputUp(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler::OnInputUp(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityInputHandler_t473158012DB9CEDED34D3E67CDF460FEC832B9C6_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_18(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_18_mCC3748893756CA20A3915F2321E684754B22114F (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_t473158012DB9CEDED34D3E67CDF460FEC832B9C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_mDECD9C5C329204B6BDD8823D339F9C9D9A0C1C23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_t473158012DB9CEDED34D3E67CDF460FEC832B9C6_m510EE68187412AC23FD57F109B90D5FAA40469C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var inputData = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05_RuntimeMethod_var);
		V_0 = L_1;
		// if (handler is IMixedRealityInputHandler inputHandler && !inputHandler.IsNull())
		RuntimeObject* L_2 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealityInputHandler_t473158012DB9CEDED34D3E67CDF460FEC832B9C6_il2cpp_TypeInfo_var));
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = V_1;
		bool L_5;
		L_5 = UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_t473158012DB9CEDED34D3E67CDF460FEC832B9C6_m510EE68187412AC23FD57F109B90D5FAA40469C8(L_4, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputHandler_t473158012DB9CEDED34D3E67CDF460FEC832B9C6_m510EE68187412AC23FD57F109B90D5FAA40469C8_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// inputHandler.OnInputUp(inputData);
		RuntimeObject* L_6 = V_1;
		InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * L_7 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker1< InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler::OnInputUp(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityInputHandler_t473158012DB9CEDED34D3E67CDF460FEC832B9C6_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_0020:
	{
		// if (handler is IMixedRealityInputActionHandler actionHandler && !actionHandler.IsNull())
		RuntimeObject* L_8 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_il2cpp_TypeInfo_var));
		RuntimeObject* L_9 = V_2;
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_10 = V_2;
		bool L_11;
		L_11 = UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_mDECD9C5C329204B6BDD8823D339F9C9D9A0C1C23(L_10, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_mDECD9C5C329204B6BDD8823D339F9C9D9A0C1C23_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0039;
		}
	}
	{
		// actionHandler.OnActionEnded(inputData);
		RuntimeObject* L_12 = V_2;
		InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * L_13 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker1< BaseInputEventData_t8CABFB1FC933DDC0AA250178D3D0D5CB0ED5C3AF * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionEnded(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_il2cpp_TypeInfo_var, L_12, L_13);
	}

IL_0039:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_19(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_19_m7062646B8440FFE47182F55F9C394DC1900A9A66 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tA8DA12BEACD164A612EE93A1868A0EF98A7193CA_m4BA25FFBEC9B7D5746EED774755CCC86853AF21A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_1_t14E75FB263DF33F3C857F51522F83F4E4F6638DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tA8DA12BEACD164A612EE93A1868A0EF98A7193CA * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<float>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tA8DA12BEACD164A612EE93A1868A0EF98A7193CA * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tA8DA12BEACD164A612EE93A1868A0EF98A7193CA_m4BA25FFBEC9B7D5746EED774755CCC86853AF21A(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tA8DA12BEACD164A612EE93A1868A0EF98A7193CA_m4BA25FFBEC9B7D5746EED774755CCC86853AF21A_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tA8DA12BEACD164A612EE93A1868A0EF98A7193CA * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tA8DA12BEACD164A612EE93A1868A0EF98A7193CA * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_t14E75FB263DF33F3C857F51522F83F4E4F6638DA_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_20(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_20_m3281B6C1014EC8DA72226CBDDAC3542DFCA3E740 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tA191CDE875C3A37876AF9EBEC1082E9A97791713_m3BD6F5316F05BE269929A602E4D601BB4D9730A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_1_tBDCA226328D966CBB4DB59D7769FA55EFE647367_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tA191CDE875C3A37876AF9EBEC1082E9A97791713 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector2>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tA191CDE875C3A37876AF9EBEC1082E9A97791713 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tA191CDE875C3A37876AF9EBEC1082E9A97791713_m3BD6F5316F05BE269929A602E4D601BB4D9730A5(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tA191CDE875C3A37876AF9EBEC1082E9A97791713_m3BD6F5316F05BE269929A602E4D601BB4D9730A5_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tA191CDE875C3A37876AF9EBEC1082E9A97791713 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tA191CDE875C3A37876AF9EBEC1082E9A97791713 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_tBDCA226328D966CBB4DB59D7769FA55EFE647367_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_21(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_21_mAC352AA5CD2F9D8D079CF82A7FFC21AA47E13D82 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t72EB43FD8BF708F94C8860821D368A0E9B230155_m62A87FAEC646F374D4141B957C987FBBF26E24C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_1_tB2D657CE869C8683B11A9FA077E51609A1D6A95B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t72EB43FD8BF708F94C8860821D368A0E9B230155 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector3>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t72EB43FD8BF708F94C8860821D368A0E9B230155 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t72EB43FD8BF708F94C8860821D368A0E9B230155_m62A87FAEC646F374D4141B957C987FBBF26E24C6(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t72EB43FD8BF708F94C8860821D368A0E9B230155_m62A87FAEC646F374D4141B957C987FBBF26E24C6_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t72EB43FD8BF708F94C8860821D368A0E9B230155 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t72EB43FD8BF708F94C8860821D368A0E9B230155 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_tB2D657CE869C8683B11A9FA077E51609A1D6A95B_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_22(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_22_m8C2DF9E2BAE6DCB3E601568C11255CCED5135E5B (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tF68721C6A55FBBB8C3B93B2EB342522FAD3F7716_m58A38EED48A64E53564CE960FC7E587AA59EDB44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_1_tF04C7976A0DDAFAB436AB651A91AC34AC0B0BF88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tF68721C6A55FBBB8C3B93B2EB342522FAD3F7716 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Quaternion>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tF68721C6A55FBBB8C3B93B2EB342522FAD3F7716 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tF68721C6A55FBBB8C3B93B2EB342522FAD3F7716_m58A38EED48A64E53564CE960FC7E587AA59EDB44(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tF68721C6A55FBBB8C3B93B2EB342522FAD3F7716_m58A38EED48A64E53564CE960FC7E587AA59EDB44_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tF68721C6A55FBBB8C3B93B2EB342522FAD3F7716 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tF68721C6A55FBBB8C3B93B2EB342522FAD3F7716 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_tF04C7976A0DDAFAB436AB651A91AC34AC0B0BF88_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_23(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_23_m7614F6E8EBBBEE6ADF8E5A9CF817D882AD6727BE (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t8BA709B500978D2FF6CBE02840D448EC4F1B96FF_m1E3E202BC14BE1ECF1091269C877D5BD62C32234_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputHandler_1_tB96C9EB26311047478692CD4EA158B1862C1A45C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t8BA709B500978D2FF6CBE02840D448EC4F1B96FF * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<MixedRealityPose>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t8BA709B500978D2FF6CBE02840D448EC4F1B96FF * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t8BA709B500978D2FF6CBE02840D448EC4F1B96FF_m1E3E202BC14BE1ECF1091269C877D5BD62C32234(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t8BA709B500978D2FF6CBE02840D448EC4F1B96FF_m1E3E202BC14BE1ECF1091269C877D5BD62C32234_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnInputChanged(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t8BA709B500978D2FF6CBE02840D448EC4F1B96FF * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t8BA709B500978D2FF6CBE02840D448EC4F1B96FF * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::OnInputChanged(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityInputHandler_1_tB96C9EB26311047478692CD4EA158B1862C1A45C_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_24(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_24_m4F72C1D58651387485C473BE8877BDF2EF1513AB (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t7B31870B1D549DCB19CAC6B518B0AB3A454180FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureStarted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureStarted(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t7B31870B1D549DCB19CAC6B518B0AB3A454180FB_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_25(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_25_m28939D4795A22284DFD8D371391851C48DACDAE7 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t7B31870B1D549DCB19CAC6B518B0AB3A454180FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t7B31870B1D549DCB19CAC6B518B0AB3A454180FB_m434186312034A181EFF425A69B16C31411FE20A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_mDECD9C5C329204B6BDD8823D339F9C9D9A0C1C23_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var inputData = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05_RuntimeMethod_var);
		V_0 = L_1;
		// if (handler is IMixedRealityGestureHandler gestureHandler && !gestureHandler.IsNull())
		RuntimeObject* L_2 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealityGestureHandler_t7B31870B1D549DCB19CAC6B518B0AB3A454180FB_il2cpp_TypeInfo_var));
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = V_1;
		bool L_5;
		L_5 = UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t7B31870B1D549DCB19CAC6B518B0AB3A454180FB_m434186312034A181EFF425A69B16C31411FE20A4(L_4, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t7B31870B1D549DCB19CAC6B518B0AB3A454180FB_m434186312034A181EFF425A69B16C31411FE20A4_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// gestureHandler.OnGestureStarted(inputData);
		RuntimeObject* L_6 = V_1;
		InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * L_7 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker1< InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureStarted(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t7B31870B1D549DCB19CAC6B518B0AB3A454180FB_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_0020:
	{
		// if (handler is IMixedRealityInputActionHandler actionHandler && !actionHandler.IsNull())
		RuntimeObject* L_8 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_il2cpp_TypeInfo_var));
		RuntimeObject* L_9 = V_2;
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_10 = V_2;
		bool L_11;
		L_11 = UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_mDECD9C5C329204B6BDD8823D339F9C9D9A0C1C23(L_10, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_mDECD9C5C329204B6BDD8823D339F9C9D9A0C1C23_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0039;
		}
	}
	{
		// actionHandler.OnActionStarted(inputData);
		RuntimeObject* L_12 = V_2;
		InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * L_13 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker1< BaseInputEventData_t8CABFB1FC933DDC0AA250178D3D0D5CB0ED5C3AF * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionStarted(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_il2cpp_TypeInfo_var, L_12, L_13);
	}

IL_0039:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_26(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_26_m143C0D09A5CE4A8253A8C66694A3C554EFB2EBF6 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t7B31870B1D549DCB19CAC6B518B0AB3A454180FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t7B31870B1D549DCB19CAC6B518B0AB3A454180FB_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_27(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_27_m4AAA5593275E4119B5E87012E88A511982764307 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tA191CDE875C3A37876AF9EBEC1082E9A97791713_m3BD6F5316F05BE269929A602E4D601BB4D9730A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_t0A6A8EE9622546FFF67B365C595883EF2858496D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tA191CDE875C3A37876AF9EBEC1082E9A97791713 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector2>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tA191CDE875C3A37876AF9EBEC1082E9A97791713 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tA191CDE875C3A37876AF9EBEC1082E9A97791713_m3BD6F5316F05BE269929A602E4D601BB4D9730A5(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tA191CDE875C3A37876AF9EBEC1082E9A97791713_m3BD6F5316F05BE269929A602E4D601BB4D9730A5_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tA191CDE875C3A37876AF9EBEC1082E9A97791713 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tA191CDE875C3A37876AF9EBEC1082E9A97791713 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t0A6A8EE9622546FFF67B365C595883EF2858496D_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_28(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_28_m67242EA093417E5B30B62F479CB3956FB117C6B7 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t72EB43FD8BF708F94C8860821D368A0E9B230155_m62A87FAEC646F374D4141B957C987FBBF26E24C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_t4ACD9C07E55327963BB0C857421B51704EA7CA85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t72EB43FD8BF708F94C8860821D368A0E9B230155 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector3>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t72EB43FD8BF708F94C8860821D368A0E9B230155 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t72EB43FD8BF708F94C8860821D368A0E9B230155_m62A87FAEC646F374D4141B957C987FBBF26E24C6(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t72EB43FD8BF708F94C8860821D368A0E9B230155_m62A87FAEC646F374D4141B957C987FBBF26E24C6_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t72EB43FD8BF708F94C8860821D368A0E9B230155 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t72EB43FD8BF708F94C8860821D368A0E9B230155 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t4ACD9C07E55327963BB0C857421B51704EA7CA85_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_29(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_29_m39E24422563E51301456E5F4B3C77C86E5D0F163 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tF68721C6A55FBBB8C3B93B2EB342522FAD3F7716_m58A38EED48A64E53564CE960FC7E587AA59EDB44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_t089B860A1441B2916090DC4791D82D024B0C038E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tF68721C6A55FBBB8C3B93B2EB342522FAD3F7716 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Quaternion>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tF68721C6A55FBBB8C3B93B2EB342522FAD3F7716 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tF68721C6A55FBBB8C3B93B2EB342522FAD3F7716_m58A38EED48A64E53564CE960FC7E587AA59EDB44(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tF68721C6A55FBBB8C3B93B2EB342522FAD3F7716_m58A38EED48A64E53564CE960FC7E587AA59EDB44_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tF68721C6A55FBBB8C3B93B2EB342522FAD3F7716 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tF68721C6A55FBBB8C3B93B2EB342522FAD3F7716 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t089B860A1441B2916090DC4791D82D024B0C038E_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_30(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_30_mC7E5F58390E73B08C35320074F91C49B0693833F (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t8BA709B500978D2FF6CBE02840D448EC4F1B96FF_m1E3E202BC14BE1ECF1091269C877D5BD62C32234_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_tDD630CA456B9637F03AAA163B2B2940B7776C69F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t8BA709B500978D2FF6CBE02840D448EC4F1B96FF * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<MixedRealityPose>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t8BA709B500978D2FF6CBE02840D448EC4F1B96FF * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t8BA709B500978D2FF6CBE02840D448EC4F1B96FF_m1E3E202BC14BE1ECF1091269C877D5BD62C32234(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t8BA709B500978D2FF6CBE02840D448EC4F1B96FF_m1E3E202BC14BE1ECF1091269C877D5BD62C32234_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t8BA709B500978D2FF6CBE02840D448EC4F1B96FF * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t8BA709B500978D2FF6CBE02840D448EC4F1B96FF * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::OnGestureUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_tDD630CA456B9637F03AAA163B2B2940B7776C69F_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_31(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_31_mEF65C789A1A85592902CAE16E1340D4B916B1D86 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t7B31870B1D549DCB19CAC6B518B0AB3A454180FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t7B31870B1D549DCB19CAC6B518B0AB3A454180FB_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_32(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_32_mB71E41868DB6E63E39CC175DCC91F276D15B5FCC (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t7B31870B1D549DCB19CAC6B518B0AB3A454180FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t7B31870B1D549DCB19CAC6B518B0AB3A454180FB_m434186312034A181EFF425A69B16C31411FE20A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_mDECD9C5C329204B6BDD8823D339F9C9D9A0C1C23_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var inputData = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05_RuntimeMethod_var);
		V_0 = L_1;
		// if (handler is IMixedRealityGestureHandler gestureHandler && !gestureHandler.IsNull())
		RuntimeObject* L_2 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealityGestureHandler_t7B31870B1D549DCB19CAC6B518B0AB3A454180FB_il2cpp_TypeInfo_var));
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = V_1;
		bool L_5;
		L_5 = UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t7B31870B1D549DCB19CAC6B518B0AB3A454180FB_m434186312034A181EFF425A69B16C31411FE20A4(L_4, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityGestureHandler_t7B31870B1D549DCB19CAC6B518B0AB3A454180FB_m434186312034A181EFF425A69B16C31411FE20A4_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// gestureHandler.OnGestureCompleted(inputData);
		RuntimeObject* L_6 = V_1;
		InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * L_7 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker1< InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t7B31870B1D549DCB19CAC6B518B0AB3A454180FB_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_0020:
	{
		// if (handler is IMixedRealityInputActionHandler actionHandler && !actionHandler.IsNull())
		RuntimeObject* L_8 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_il2cpp_TypeInfo_var));
		RuntimeObject* L_9 = V_2;
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_10 = V_2;
		bool L_11;
		L_11 = UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_mDECD9C5C329204B6BDD8823D339F9C9D9A0C1C23(L_10, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_mDECD9C5C329204B6BDD8823D339F9C9D9A0C1C23_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0039;
		}
	}
	{
		// actionHandler.OnActionEnded(inputData);
		RuntimeObject* L_12 = V_2;
		InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * L_13 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker1< BaseInputEventData_t8CABFB1FC933DDC0AA250178D3D0D5CB0ED5C3AF * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionEnded(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_il2cpp_TypeInfo_var, L_12, L_13);
	}

IL_0039:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_33(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_33_m1963689305A90BB43E9319DE56ED5501C515F7A7 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tA191CDE875C3A37876AF9EBEC1082E9A97791713_m3BD6F5316F05BE269929A602E4D601BB4D9730A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_t0A6A8EE9622546FFF67B365C595883EF2858496D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tA191CDE875C3A37876AF9EBEC1082E9A97791713 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector2>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tA191CDE875C3A37876AF9EBEC1082E9A97791713 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tA191CDE875C3A37876AF9EBEC1082E9A97791713_m3BD6F5316F05BE269929A602E4D601BB4D9730A5(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tA191CDE875C3A37876AF9EBEC1082E9A97791713_m3BD6F5316F05BE269929A602E4D601BB4D9730A5_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tA191CDE875C3A37876AF9EBEC1082E9A97791713 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tA191CDE875C3A37876AF9EBEC1082E9A97791713 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t0A6A8EE9622546FFF67B365C595883EF2858496D_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_34(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_34_mDABE708C36AF1CCBC22EAB1D56C125C7A5B21CFF (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t72EB43FD8BF708F94C8860821D368A0E9B230155_m62A87FAEC646F374D4141B957C987FBBF26E24C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_t4ACD9C07E55327963BB0C857421B51704EA7CA85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t72EB43FD8BF708F94C8860821D368A0E9B230155 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Vector3>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t72EB43FD8BF708F94C8860821D368A0E9B230155 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t72EB43FD8BF708F94C8860821D368A0E9B230155_m62A87FAEC646F374D4141B957C987FBBF26E24C6(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t72EB43FD8BF708F94C8860821D368A0E9B230155_m62A87FAEC646F374D4141B957C987FBBF26E24C6_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t72EB43FD8BF708F94C8860821D368A0E9B230155 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t72EB43FD8BF708F94C8860821D368A0E9B230155 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t4ACD9C07E55327963BB0C857421B51704EA7CA85_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_35(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_35_mD758EBACF5577DD5689500623E38B3D2B16B18E5 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_tF68721C6A55FBBB8C3B93B2EB342522FAD3F7716_m58A38EED48A64E53564CE960FC7E587AA59EDB44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_t089B860A1441B2916090DC4791D82D024B0C038E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_tF68721C6A55FBBB8C3B93B2EB342522FAD3F7716 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<Quaternion>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_tF68721C6A55FBBB8C3B93B2EB342522FAD3F7716 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_tF68721C6A55FBBB8C3B93B2EB342522FAD3F7716_m58A38EED48A64E53564CE960FC7E587AA59EDB44(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_tF68721C6A55FBBB8C3B93B2EB342522FAD3F7716_m58A38EED48A64E53564CE960FC7E587AA59EDB44_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_tF68721C6A55FBBB8C3B93B2EB342522FAD3F7716 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_tF68721C6A55FBBB8C3B93B2EB342522FAD3F7716 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_t089B860A1441B2916090DC4791D82D024B0C038E_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_36(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_36_mBF08C83C2285D48324AC3029C7540A595AADDF8F (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t8BA709B500978D2FF6CBE02840D448EC4F1B96FF_m1E3E202BC14BE1ECF1091269C877D5BD62C32234_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_1_tDD630CA456B9637F03AAA163B2B2940B7776C69F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t8BA709B500978D2FF6CBE02840D448EC4F1B96FF * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<MixedRealityPose>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t8BA709B500978D2FF6CBE02840D448EC4F1B96FF * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t8BA709B500978D2FF6CBE02840D448EC4F1B96FF_m1E3E202BC14BE1ECF1091269C877D5BD62C32234(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t8BA709B500978D2FF6CBE02840D448EC4F1B96FF_m1E3E202BC14BE1ECF1091269C877D5BD62C32234_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t8BA709B500978D2FF6CBE02840D448EC4F1B96FF * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t8BA709B500978D2FF6CBE02840D448EC4F1B96FF * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::OnGestureCompleted(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<!0>) */, IMixedRealityGestureHandler_1_tDD630CA456B9637F03AAA163B2B2940B7776C69F_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_37(Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_37_m0F8EF2D99B36556ACA20DEFB41DE93C006775A57 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGestureHandler_t7B31870B1D549DCB19CAC6B518B0AB3A454180FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9_mC1EF8625FFB8498BA13607A34BF5D398D0BBCC05_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnGestureCanceled(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_t39E9A1283388988B6A16814E0BD62F1BC71105C9 * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler::OnGestureCanceled(Microsoft.MixedReality.Toolkit.Input.InputEventData) */, IMixedRealityGestureHandler_t7B31870B1D549DCB19CAC6B518B0AB3A454180FB_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_38(Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_38_m7CD7A16A2A3DCF6BAB2732D46C5C4F90A98FA3E9 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSpeechEventData_t5107F68604DE41246F6BCAAA3E0A436668499454_mA03D959893C9A5100B4FD4AC8765DA8D3E2A26C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySpeechHandler_t4BE1C6AE73FCF96206DDC65F62AF13709A32565F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechEventData_t5107F68604DE41246F6BCAAA3E0A436668499454 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<SpeechEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SpeechEventData_t5107F68604DE41246F6BCAAA3E0A436668499454 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSpeechEventData_t5107F68604DE41246F6BCAAA3E0A436668499454_mA03D959893C9A5100B4FD4AC8765DA8D3E2A26C9(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSpeechEventData_t5107F68604DE41246F6BCAAA3E0A436668499454_mA03D959893C9A5100B4FD4AC8765DA8D3E2A26C9_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnSpeechKeywordRecognized(casted);
		RuntimeObject* L_2 = ___handler0;
		SpeechEventData_t5107F68604DE41246F6BCAAA3E0A436668499454 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< SpeechEventData_t5107F68604DE41246F6BCAAA3E0A436668499454 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler::OnSpeechKeywordRecognized(Microsoft.MixedReality.Toolkit.Input.SpeechEventData) */, IMixedRealitySpeechHandler_t4BE1C6AE73FCF96206DDC65F62AF13709A32565F_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_39(Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_39_m343811D33D2D97704810FE05CB567B620C4D2F69 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisSpeechEventData_t5107F68604DE41246F6BCAAA3E0A436668499454_mA03D959893C9A5100B4FD4AC8765DA8D3E2A26C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySpeechHandler_t4BE1C6AE73FCF96206DDC65F62AF13709A32565F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_mDECD9C5C329204B6BDD8823D339F9C9D9A0C1C23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisIMixedRealitySpeechHandler_t4BE1C6AE73FCF96206DDC65F62AF13709A32565F_m2E617E072A7F7715BD1A1FF12DB6330839EB8072_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechEventData_t5107F68604DE41246F6BCAAA3E0A436668499454 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// var speechData = ExecuteEvents.ValidateEventData<SpeechEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		SpeechEventData_t5107F68604DE41246F6BCAAA3E0A436668499454 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisSpeechEventData_t5107F68604DE41246F6BCAAA3E0A436668499454_mA03D959893C9A5100B4FD4AC8765DA8D3E2A26C9(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisSpeechEventData_t5107F68604DE41246F6BCAAA3E0A436668499454_mA03D959893C9A5100B4FD4AC8765DA8D3E2A26C9_RuntimeMethod_var);
		V_0 = L_1;
		// if (handler is IMixedRealitySpeechHandler speechHandler && !speechHandler.IsNull())
		RuntimeObject* L_2 = ___handler0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealitySpeechHandler_t4BE1C6AE73FCF96206DDC65F62AF13709A32565F_il2cpp_TypeInfo_var));
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = V_1;
		bool L_5;
		L_5 = UnityObjectExtensions_IsNull_TisIMixedRealitySpeechHandler_t4BE1C6AE73FCF96206DDC65F62AF13709A32565F_m2E617E072A7F7715BD1A1FF12DB6330839EB8072(L_4, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealitySpeechHandler_t4BE1C6AE73FCF96206DDC65F62AF13709A32565F_m2E617E072A7F7715BD1A1FF12DB6330839EB8072_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// speechHandler.OnSpeechKeywordRecognized(speechData);
		RuntimeObject* L_6 = V_1;
		SpeechEventData_t5107F68604DE41246F6BCAAA3E0A436668499454 * L_7 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker1< SpeechEventData_t5107F68604DE41246F6BCAAA3E0A436668499454 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler::OnSpeechKeywordRecognized(Microsoft.MixedReality.Toolkit.Input.SpeechEventData) */, IMixedRealitySpeechHandler_t4BE1C6AE73FCF96206DDC65F62AF13709A32565F_il2cpp_TypeInfo_var, L_6, L_7);
	}

IL_0020:
	{
		// if (handler is IMixedRealityInputActionHandler actionHandler && !actionHandler.IsNull())
		RuntimeObject* L_8 = ___handler0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_il2cpp_TypeInfo_var));
		RuntimeObject* L_9 = V_2;
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_10 = V_2;
		bool L_11;
		L_11 = UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_mDECD9C5C329204B6BDD8823D339F9C9D9A0C1C23(L_10, /*hidden argument*/UnityObjectExtensions_IsNull_TisIMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_mDECD9C5C329204B6BDD8823D339F9C9D9A0C1C23_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0040;
		}
	}
	{
		// actionHandler.OnActionStarted(speechData);
		RuntimeObject* L_12 = V_2;
		SpeechEventData_t5107F68604DE41246F6BCAAA3E0A436668499454 * L_13 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker1< BaseInputEventData_t8CABFB1FC933DDC0AA250178D3D0D5CB0ED5C3AF * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionStarted(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_il2cpp_TypeInfo_var, L_12, L_13);
		// actionHandler.OnActionEnded(speechData);
		RuntimeObject* L_14 = V_2;
		SpeechEventData_t5107F68604DE41246F6BCAAA3E0A436668499454 * L_15 = V_0;
		NullCheck(L_14);
		InterfaceActionInvoker1< BaseInputEventData_t8CABFB1FC933DDC0AA250178D3D0D5CB0ED5C3AF * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputActionHandler::OnActionEnded(Microsoft.MixedReality.Toolkit.Input.BaseInputEventData) */, IMixedRealityInputActionHandler_t2D8B7E193CB8B356B11201C4C9E077822BCCBB4F_il2cpp_TypeInfo_var, L_14, L_15);
	}

IL_0040:
	{
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_40(Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_40_m470BCA5C1FE0DCDCE863C8C6F9EFABFD9F871C93 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisDictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111_m5A19C57392C80A20F40581BFC976CD55F8B7C884_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDictationHandler_t11FEE47AFE526B4D2F8E91C0CFC430E47B76C03A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<DictationEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		DictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisDictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111_m5A19C57392C80A20F40581BFC976CD55F8B7C884(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisDictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111_m5A19C57392C80A20F40581BFC976CD55F8B7C884_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnDictationHypothesis(casted);
		RuntimeObject* L_2 = ___handler0;
		DictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler::OnDictationHypothesis(Microsoft.MixedReality.Toolkit.Input.DictationEventData) */, IMixedRealityDictationHandler_t11FEE47AFE526B4D2F8E91C0CFC430E47B76C03A_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_41(Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_41_m4CB2DB8EEDCB8715D71EEE89F10DB6A0CFAA3C2B (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisDictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111_m5A19C57392C80A20F40581BFC976CD55F8B7C884_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDictationHandler_t11FEE47AFE526B4D2F8E91C0CFC430E47B76C03A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<DictationEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		DictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisDictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111_m5A19C57392C80A20F40581BFC976CD55F8B7C884(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisDictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111_m5A19C57392C80A20F40581BFC976CD55F8B7C884_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnDictationResult(casted);
		RuntimeObject* L_2 = ___handler0;
		DictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler::OnDictationResult(Microsoft.MixedReality.Toolkit.Input.DictationEventData) */, IMixedRealityDictationHandler_t11FEE47AFE526B4D2F8E91C0CFC430E47B76C03A_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_42(Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_42_m2632C092F745BF9BEDDCCA775558468D6608B1C4 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisDictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111_m5A19C57392C80A20F40581BFC976CD55F8B7C884_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDictationHandler_t11FEE47AFE526B4D2F8E91C0CFC430E47B76C03A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<DictationEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		DictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisDictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111_m5A19C57392C80A20F40581BFC976CD55F8B7C884(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisDictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111_m5A19C57392C80A20F40581BFC976CD55F8B7C884_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnDictationComplete(casted);
		RuntimeObject* L_2 = ___handler0;
		DictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler::OnDictationComplete(Microsoft.MixedReality.Toolkit.Input.DictationEventData) */, IMixedRealityDictationHandler_t11FEE47AFE526B4D2F8E91C0CFC430E47B76C03A_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_43(Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_43_m2185E1C176FAC298F2FB4E712E7F6A9CCAFF22DB (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisDictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111_m5A19C57392C80A20F40581BFC976CD55F8B7C884_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDictationHandler_t11FEE47AFE526B4D2F8E91C0CFC430E47B76C03A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<DictationEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		DictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisDictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111_m5A19C57392C80A20F40581BFC976CD55F8B7C884(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisDictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111_m5A19C57392C80A20F40581BFC976CD55F8B7C884_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnDictationError(casted);
		RuntimeObject* L_2 = ___handler0;
		DictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DictationEventData_t23B57070217D8E326FCA86C9591E9BE8DBAA5111 * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler::OnDictationError(Microsoft.MixedReality.Toolkit.Input.DictationEventData) */, IMixedRealityDictationHandler_t11FEE47AFE526B4D2F8E91C0CFC430E47B76C03A_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_44(Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_44_mF20BF22037FAAA494DDEA26A10B899D8135F0DC3 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t9912FB5BCD3E745BE7F975C9F3E0EA1DCAC114DA_m84A289B8354064BDFE63E5D7F8ACCD1A3FBA9F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityHandJointHandler_t3B3D9548A79A9E2599D70D5B3DEC37A56DCACD82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t9912FB5BCD3E745BE7F975C9F3E0EA1DCAC114DA * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<IDictionary<TrackedHandJoint, MixedRealityPose>>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t9912FB5BCD3E745BE7F975C9F3E0EA1DCAC114DA * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t9912FB5BCD3E745BE7F975C9F3E0EA1DCAC114DA_m84A289B8354064BDFE63E5D7F8ACCD1A3FBA9F7F(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t9912FB5BCD3E745BE7F975C9F3E0EA1DCAC114DA_m84A289B8354064BDFE63E5D7F8ACCD1A3FBA9F7F_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnHandJointsUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t9912FB5BCD3E745BE7F975C9F3E0EA1DCAC114DA * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t9912FB5BCD3E745BE7F975C9F3E0EA1DCAC114DA * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler::OnHandJointsUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>) */, IMixedRealityHandJointHandler_t3B3D9548A79A9E2599D70D5B3DEC37A56DCACD82_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_45(Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_45_mE7687BDCB0E43FAF268CE170EFFB88FE4B2B32A5 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisInputEventData_1_t4EF18F529455F87A02DD28A49212B7B093A97CF1_mED1B4FBB47980E0B4B3D956EB44B334BE918E575_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityHandMeshHandler_t96F62F66F2A78C9A0CF1439C6717E8007F81FAB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventData_1_t4EF18F529455F87A02DD28A49212B7B093A97CF1 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<InputEventData<HandMeshInfo>>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		InputEventData_1_t4EF18F529455F87A02DD28A49212B7B093A97CF1 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisInputEventData_1_t4EF18F529455F87A02DD28A49212B7B093A97CF1_mED1B4FBB47980E0B4B3D956EB44B334BE918E575(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisInputEventData_1_t4EF18F529455F87A02DD28A49212B7B093A97CF1_mED1B4FBB47980E0B4B3D956EB44B334BE918E575_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnHandMeshUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		InputEventData_1_t4EF18F529455F87A02DD28A49212B7B093A97CF1 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< InputEventData_1_t4EF18F529455F87A02DD28A49212B7B093A97CF1 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler::OnHandMeshUpdated(Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>) */, IMixedRealityHandMeshHandler_t96F62F66F2A78C9A0CF1439C6717E8007F81FAB8_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_46(Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_46_mF31EF831F60FC5A2290F8D40FD84B7D029C06710 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t4D2EA53F7605800166D3AA5A8A34EFF4C6CCB139_mFC9ADF3708EAAC27E6DFB51FC5B78B86B31CC9F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityTouchHandler_tE5FCC5A0B711B1356C8D026DD2EF62EFAFBCE844_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandTrackingInputEventData_t4D2EA53F7605800166D3AA5A8A34EFF4C6CCB139 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<HandTrackingInputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		HandTrackingInputEventData_t4D2EA53F7605800166D3AA5A8A34EFF4C6CCB139 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t4D2EA53F7605800166D3AA5A8A34EFF4C6CCB139_mFC9ADF3708EAAC27E6DFB51FC5B78B86B31CC9F1(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t4D2EA53F7605800166D3AA5A8A34EFF4C6CCB139_mFC9ADF3708EAAC27E6DFB51FC5B78B86B31CC9F1_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTouchStarted(casted);
		RuntimeObject* L_2 = ___handler0;
		HandTrackingInputEventData_t4D2EA53F7605800166D3AA5A8A34EFF4C6CCB139 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< HandTrackingInputEventData_t4D2EA53F7605800166D3AA5A8A34EFF4C6CCB139 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler::OnTouchStarted(Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData) */, IMixedRealityTouchHandler_tE5FCC5A0B711B1356C8D026DD2EF62EFAFBCE844_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_47(Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_47_mB3EA95CAD9C3799BC4CBF01AE5888B1BF919FD68 (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t4D2EA53F7605800166D3AA5A8A34EFF4C6CCB139_mFC9ADF3708EAAC27E6DFB51FC5B78B86B31CC9F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityTouchHandler_tE5FCC5A0B711B1356C8D026DD2EF62EFAFBCE844_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandTrackingInputEventData_t4D2EA53F7605800166D3AA5A8A34EFF4C6CCB139 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<HandTrackingInputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		HandTrackingInputEventData_t4D2EA53F7605800166D3AA5A8A34EFF4C6CCB139 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t4D2EA53F7605800166D3AA5A8A34EFF4C6CCB139_mFC9ADF3708EAAC27E6DFB51FC5B78B86B31CC9F1(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t4D2EA53F7605800166D3AA5A8A34EFF4C6CCB139_mFC9ADF3708EAAC27E6DFB51FC5B78B86B31CC9F1_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTouchCompleted(casted);
		RuntimeObject* L_2 = ___handler0;
		HandTrackingInputEventData_t4D2EA53F7605800166D3AA5A8A34EFF4C6CCB139 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< HandTrackingInputEventData_t4D2EA53F7605800166D3AA5A8A34EFF4C6CCB139 * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler::OnTouchCompleted(Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData) */, IMixedRealityTouchHandler_tE5FCC5A0B711B1356C8D026DD2EF62EFAFBCE844_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem/<>c::<.cctor>b__246_48(Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__246_48_m927686296AC266B721B84C1221A54F07B787791C (U3CU3Ec_tE481AF09CD417B5B0309F560E9B5A99B33E2A771 * __this, RuntimeObject* ___handler0, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t4D2EA53F7605800166D3AA5A8A34EFF4C6CCB139_mFC9ADF3708EAAC27E6DFB51FC5B78B86B31CC9F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityTouchHandler_tE5FCC5A0B711B1356C8D026DD2EF62EFAFBCE844_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandTrackingInputEventData_t4D2EA53F7605800166D3AA5A8A34EFF4C6CCB139 * V_0 = NULL;
	{
		// var casted = ExecuteEvents.ValidateEventData<HandTrackingInputEventData>(eventData);
		BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_tEA324150A01AFB802974FA8B7DB1C19F83FECA68_il2cpp_TypeInfo_var);
		HandTrackingInputEventData_t4D2EA53F7605800166D3AA5A8A34EFF4C6CCB139 * L_1;
		L_1 = ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t4D2EA53F7605800166D3AA5A8A34EFF4C6CCB139_mFC9ADF3708EAAC27E6DFB51FC5B78B86B31CC9F1(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisHandTrackingInputEventData_t4D2EA53F7605800166D3AA5A8A34EFF4C6CCB139_mFC9ADF3708EAAC27E6DFB51FC5B78B86B31CC9F1_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnTouchUpdated(casted);
		RuntimeObject* L_2 = ___handler0;
		HandTrackingInputEventData_t4D2EA53F7605800166D3AA5A8A34EFF4C6CCB139 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< HandTrackingInputEventData_t4D2EA53F7605800166D3AA5A8A34EFF4C6CCB139 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler::OnTouchUpdated(Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData) */, IMixedRealityTouchHandler_tE5FCC5A0B711B1356C8D026DD2EF62EFAFBCE844_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m16E74843D5829DA4DC0E2792712200C493FFB151 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4D8185309F9B1907934895922AA541E0E2B66979_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4D8185309F9B1907934895922AA541E0E2B66979 * L_0 = (U3CU3Ec_t4D8185309F9B1907934895922AA541E0E2B66979 *)il2cpp_codegen_object_new(U3CU3Ec_t4D8185309F9B1907934895922AA541E0E2B66979_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m7C851694F9012647C858877FCAD78420F598F1C2(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t4D8185309F9B1907934895922AA541E0E2B66979_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4D8185309F9B1907934895922AA541E0E2B66979_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7C851694F9012647C858877FCAD78420F598F1C2 (U3CU3Ec_t4D8185309F9B1907934895922AA541E0E2B66979 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable/<>c::<OnValidate>b__25_0(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3COnValidateU3Eb__25_0_m0268652525B26975000F3F6FAC1952D5C37483A6 (U3CU3Ec_t4D8185309F9B1907934895922AA541E0E2B66979 * __this, String_t* ___result0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___next1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral193EAB9F1EC19468783C52A94D9B84DF6D5BEE4F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string hierarchy = gameObject.transform.EnumerateAncestors(true).Aggregate("", (result, next) => next.gameObject.name + "=>" + result);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___next1;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___result0;
		String_t* L_4;
		L_4 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(L_2, _stringLiteral193EAB9F1EC19468783C52A94D9B84DF6D5BEE4F, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * FocusDetails_get_Object_m68F83AC2327FBE5DE0E5F80E9BBDCA58CA73C6FB_inline (FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * __this, const RuntimeMethod* method)
{
	{
		// public GameObject Object { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CObjectU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method)
{
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerData_set_PreviousPointerTarget_mDD38F5FCA7E23E611FEEB7D072B916EDF85322D3_inline (PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject PreviousPointerTarget { get; private set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_U3CPreviousPointerTargetU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_Object_m30FB9974ED765EFDE6DC1F1ED409A8C773D637C9_inline (FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject Object { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_U3CObjectU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_LastRaycastHit_mF8FE6AB2514195D327CDCE7BC94297CFF4B772DD_inline (FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * __this, MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4  ___value0, const RuntimeMethod* method)
{
	{
		// public MixedRealityRaycastHit LastRaycastHit { get; set; }
		MixedRealityRaycastHit_t408CAD9A1A8FD82401111713CA8E75982C085AC4  L_0 = ___value0;
		__this->set_U3CLastRaycastHitU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_LastGraphicsRaycastResult_m6ADB872A1EF9D96084392A07F778F20FB93A7405_inline (FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * __this, RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___value0, const RuntimeMethod* method)
{
	{
		// public RaycastResult LastGraphicsRaycastResult { get; set; }
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  L_0 = ___value0;
		__this->set_U3CLastGraphicsRaycastResultU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerData_set_RayStepIndex_m8C8B202BC436CE5801573D35206B155D89ED2997_inline (PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int RayStepIndex { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CRayStepIndexU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Origin_m034712DDFB7E01FDA9C9617CB28639D9DE01C9E3_inline (RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Origin { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3COriginU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerData_set_StartPoint_mDAAF1D0D69FD9C8993AACA4EE1D32734D01B6DC5_inline (PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 StartPoint { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CStartPointU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_RayDistance_mB1948795164CD3E1DBE6E7903EFE56F026966859_inline (FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float RayDistance { get; set; }
		float L_0 = ___value0;
		__this->set_U3CRayDistanceU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_Point_m0A2843EE0D472F64345CE08080C202954ACA5413_inline (FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Point { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CPointU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_Normal_mE8874E62D300C5C10734F3A696AC203DA33BF92A_inline (FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Normal { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CNormalU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float RayStep_get_Length_mEAEDEEAE913CDCAE89B2C3E212E0645382FF8078_inline (RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C * __this, const RuntimeMethod* method)
{
	{
		// public float Length { get; private set; }
		float L_0 = __this->get_U3CLengthU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Terminus_m0A2DA663A388B9203959E103297FA6567F47DAC5_inline (RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Terminus { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CTerminusU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Direction_m4C8978B9C17A38E7AC7F5673F9C0C37BFBAAD2AF_inline (RayStep_t0FF83CB66635A92CF8ADC8FE9CD9FF4011F48C3C * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Direction { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CDirectionU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m56EB454031EABB53BA35FECF3F61A7E2332A2521_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_Point_mB1F377C7630DB8D010A0AD61AA19A7B993DB2FDF_inline (FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Point { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CPointU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_PointLocalSpace_m0E12BB09FFE85A2A2CFE0BEF2DC717B24195C70B_inline (FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 PointLocalSpace { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CPointLocalSpaceU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_Normal_m3E037695B4FD888DC3024DB32103980EF37A0209_inline (FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Normal { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CNormalU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FocusDetails_set_NormalLocalSpace_m5FD188667AAF3119C658AC53665E50A92E48277C_inline (FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 NormalLocalSpace { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CNormalLocalSpaceU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerUnsafeUtility_EndSample_m2A9C5852FDDF2F191716E29F8BD5E5478E1EEA87((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_PointLocalSpace_mBBEFEC7DBC6CE910E4DC1C34B1F2396E7AC3493C_inline (FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 PointLocalSpace { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CPointLocalSpaceU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FocusDetails_get_NormalLocalSpace_m7804F189BFC2124E647B403AABB2134FD1529B93_inline (FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 NormalLocalSpace { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CNormalLocalSpaceU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F  PointerData_get_Details_mA5B7DE41F6CBAE64AA7294580ACCBC4AF35F6AA4_inline (PointerData_t76209F4B6C7289E958E46423D386EB7BFBA20EF0 * __this, const RuntimeMethod* method)
{
	{
		// get => focusDetails;
		FocusDetails_tD589A10421A0915F9BBEA8575392B541A5CB5F6F  L_0 = __this->get_focusDetails_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_mC2227A5AAC0C2D1C5F2C97BB3A5937B8CE368ACA(L_0, (uint16_t)1, 0, 0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF_inline (RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * __this, const RuntimeMethod* method)
{
	{
		// get { return m_GameObject; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_GameObject_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerPreferences_get_InputSourceType_mFAB759E26839A0C456EC36B3E4A8791BE715F7ED_inline (PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF * __this, const RuntimeMethod* method)
{
	{
		// public InputSourceType InputSourceType { get; }
		int32_t L_0 = __this->get_U3CInputSourceTypeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * PointerPreferences_get_PointerType_m5CD585090BF185ED2DEED086C9F00FA2E54A2BF9_inline (PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF * __this, const RuntimeMethod* method)
{
	{
		// public Type PointerType { get; }
		Type_t * L_0 = __this->get_U3CPointerTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerPreferences_get_Right_m22149512F225377402748969D54D340E23BEF8E8_inline (PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF * __this, const RuntimeMethod* method)
{
	{
		// public PointerBehavior Right { get; private set; }
		int32_t L_0 = __this->get_U3CRightU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerPreferences_get_Left_m6915D84CCB5D7E90283A3FD0B86EEFC977E5ACE2_inline (PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF * __this, const RuntimeMethod* method)
{
	{
		// public PointerBehavior Left { get; private set; }
		int32_t L_0 = __this->get_U3CLeftU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerPreferences_get_Other_mEA42BB6CBCFECF8F3D3A9023714080D0A9E53BBB_inline (PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF * __this, const RuntimeMethod* method)
{
	{
		// public PointerBehavior Other { get; private set; }
		int32_t L_0 = __this->get_U3COtherU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerPreferences_set_Right_m42298AACBAF58BC8BD0EC2151E18F4CA3312A7B7_inline (PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public PointerBehavior Right { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CRightU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerPreferences_set_Left_m7EF3D089339381494C3C0814C96953A9A245B646_inline (PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public PointerBehavior Left { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CLeftU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerPreferences_set_Other_m880B35DD6BBBC81B83CD65B5F52BD870A261CC8B_inline (PointerPreferences_tAD1EC7548F03B0AA025F336AF9732433ACED3CCF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public PointerBehavior Other { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3COtherU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GenericPointer_set_PrioritizedLayerMasksOverride_m1ED948EDB348C3DCE672766D76E8F0F56FDFD29B_inline (GenericPointer_tFF914BF1E1E3CF91EBEFBC364A586C28DACBBCE7 * __this, LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___value0, const RuntimeMethod* method)
{
	{
		// public LayerMask[] PrioritizedLayerMasksOverride { get; set; } = null;
		LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* L_0 = ___value0;
		__this->set_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseGenericInputSource_set_SourceType_mD85593BF235644DBB2ABD35C22C37A97D3CAD7F0_inline (BaseGenericInputSource_t983CE64ED607AD7D615AE906B29D78B89BC4B6F9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public InputSourceType SourceType { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CSourceTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  GazeProvider_get_LatestEyeGaze_mC1C30DFCFE1751CE87AACD55C93F03E8E9AA6688_inline (GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * __this, const RuntimeMethod* method)
{
	{
		// public Ray LatestEyeGaze { get; private set; } = default(Ray);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_0 = __this->get_U3CLatestEyeGazeU3Ek__BackingField_36();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GazeProvider_get_UseHeadGazeOverride_m2117F17C99003FA8F0C1AC81D054467700C19210_inline (GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * __this, const RuntimeMethod* method)
{
	{
		// public bool UseHeadGazeOverride { get; set; }
		bool L_0 = __this->get_U3CUseHeadGazeOverrideU3Ek__BackingField_39();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  GazeProvider_get_overrideHeadPosition_mEF87618EDA3357AE28540B716597F1D6352828CD_inline (GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3? overrideHeadPosition { get; private set; }
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_0 = __this->get_U3CoverrideHeadPositionU3Ek__BackingField_27();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  GazeProvider_get_overrideHeadForward_m01B3D6B554D9C1EDB7FE737D53117352902B0EB6_inline (GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3? overrideHeadForward { get; private set; }
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_0 = __this->get_U3CoverrideHeadForwardU3Ek__BackingField_28();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GazeProvider_set_overrideHeadPosition_mA15E9676073BF3BBB484CC80124AD4EB341E27DD_inline (GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * __this, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3? overrideHeadPosition { get; private set; }
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_0 = ___value0;
		__this->set_U3CoverrideHeadPositionU3Ek__BackingField_27(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GazeProvider_set_overrideHeadForward_m7DC6A8A6B55EB67AB13ABC2D5869F79DC021BC59_inline (GazeProvider_t710F9FDD252C08C7FBD5A30D9A70B33AFDDD5764 * __this, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3? overrideHeadForward { get; private set; }
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_0 = ___value0;
		__this->set_U3CoverrideHeadForwardU3Ek__BackingField_28(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA* GenericPointer_get_Rays_mDBD09782CD382FBC419BC1F71FE583375E8E290F_inline (GenericPointer_tFF914BF1E1E3CF91EBEFBC364A586C28DACBBCE7 * __this, const RuntimeMethod* method)
{
	{
		// public RayStep[] Rays { get; protected set; } = { new RayStep(Vector3.zero, Vector3.forward) };
		RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA* L_0 = __this->get_U3CRaysU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  MixedRealityInputAction_get_None_m6F2B10042303E1F456F501B9E6BB804C1EEC4CA2_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityInputAction None { get; } = new MixedRealityInputAction(0, "None");
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC_il2cpp_TypeInfo_var);
		MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  L_0 = ((MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC_il2cpp_TypeInfo_var))->get_U3CNoneU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_m384C7BCE6258DE0C6D6CC3E0E16058A989033A03_inline (SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * __this, const RuntimeMethod* method)
{
	{
		// public bool IsCompleted { get; private set; }
		bool L_0 = __this->get_U3CIsCompletedU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_gshared_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  L_0 = (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 )__this->get_current_3();
		return (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = ___markerPtr0;
		ProfilerUnsafeUtility_BeginSample_mDA03BFD5DF47FFF880309A31A2DC8454EDFAB08B((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
