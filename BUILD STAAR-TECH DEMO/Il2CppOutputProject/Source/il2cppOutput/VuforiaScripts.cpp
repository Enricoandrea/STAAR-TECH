﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackable_2_t107972B6EEF36EFAECBEE6700C766F5C41F2658C;
// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRAnchor,System.Object>
struct ARTrackable_2_t4D63EF8A1807656AA0F8C461700E5E7FCC02AB5A;
// System.Action`1<UnityEngine.Camera[]>
struct Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806;
// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs>
struct Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C;
// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68;
// System.Action`1<Vuforia.ARFoundation.ARFoundationImage>
struct Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823;
// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct Action_1_t5DF84322FFE12A24465E48164961CD724D109521;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t46163F69D18A4B5D9D9C98AE7CB0AE73A82DCF10;
// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<UnityEngine.Camera>
struct Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B;
// System.Action`1<UnityEngine.Font>
struct Action_1_tC07E78969BFFC97261F80F4C08915A046DFDD9C7;
// System.Action`1<System.Int32Enum>
struct Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<Vuforia.ObserverBehaviour>
struct Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775;
// System.Action`1<Vuforia.VuforiaInitError>
struct Action_1_tAA1D1EEFC680CD9A5C6DDD77BD612C0BBD43C306;
// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1;
// System.Action`2<System.Collections.Generic.List`1<System.Tuple`2<System.String,UnityEngine.Transform>>,System.Collections.Generic.List`1<System.Tuple`2<System.String,UnityEngine.Transform>>>
struct Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D;
// System.Action`2<System.Object,System.Int64>
struct Action_2_tF2E4E5A9734EA571C61DC7DE4225669282B47B68;
// System.Action`2<System.Object,System.Object>
struct Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D;
// System.Action`2<System.Object,Vuforia.TargetStatus>
struct Action_2_tEC03432E1591AF6C19EAE8E64F8502FBEEAAB87C;
// System.Action`2<Vuforia.ObserverBehaviour,Vuforia.TargetStatus>
struct Action_2_tBEC7B0597650F8D41DD8126DFAC07D2EA63976A4;
// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]>
struct Action_2_t254D87D7CB5E1987005531FFF30ED1CA3AEDECCE;
// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>
struct Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA;
// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,System.Object>
struct Action_2_tD344092D96CD0E43070CBCDAFD460F86AC996BCC;
// System.Action`2<System.Single,System.Single>
struct Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2;
// System.Action`2<UnityEngine.Transform,System.Int64>
struct Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Converter`2<UnityEngine.XR.ARFoundation.ARRaycastHit,UnityEngine.Pose>
struct Converter_2_tC64B44F1A0EAFD8273C87D483DA826F259BA6D53;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARFoundation.ARAnchor>
struct Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARAnchor>
struct Dictionary_2_t31868ABD2D8EA88442789687465039D339583446;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C;
// System.Func`2<UnityEngine.XR.ARSubsystems.XRCameraConfiguration,System.Boolean>
struct Func_2_t7E05C7C6DEC66BBE1049328BA77DC6F0E4D34737;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t0D7774CBEE7827744440205CF327276346298BD3;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6;
// System.Collections.Generic.IEnumerable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct IEnumerable_1_tB6D989F94BEBC4CEA1F1932B9F420679C687E0AB;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Int32,System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>>
struct KeyCollection_tD1814F79DC3A616149709528C85A07251108B72E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.XR.ARFoundation.ARAnchor>
struct KeyCollection_t5D44DEF62466B169E2E8CED13AEB8135AB375B7C;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469;
// System.Collections.Generic.List`1<System.Tuple`2<System.String,UnityEngine.Transform>>
struct List_1_t0DB172BEA8D0009792F34EE515F413302C73E421;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycast>
struct List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo>
struct List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<Vuforia.DriverCameraMode>
struct List_1_tC88E8D307029C3E0623CA706C3221D1D905D71DD;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Pose>
struct List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct List_1_tFFEC9D401CE39D3C812C896B17B35D57DDF6E440;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct List_1_tDED98C236097B36F9015B396398179A6F8A62E50;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystem>
struct List_1_t69444E6E06FA6776283024710ADC0302F2700BFD;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>
struct List_1_t5ACA7E75885D8B9D7B85548B84BF43976A5038DC;
// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>
struct List_1_t56455D217921470E52E7D33A1794256E31084DD8;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_t6331523A19E51FB87CA899920C03B10A48A562B0;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_tAE84735071B78277703DB9996DE2E5C4456317C5;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673;
// System.Collections.Generic.SortedDictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>>
struct SortedDictionary_2_tF9C4707959CBD1F373B52730EFAB7444F569E8B3;
// System.Collections.Generic.SortedDictionary`2<System.Int32,System.Object>
struct SortedDictionary_2_t92AAE0684C5DB745C349DA7F33FC9053C5224388;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>
struct SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemLifecycleManager_3_tA7DFD00C75E7891CE13E16A789857D4DA563A9A3;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C;
// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>>>
struct TreeSet_1_t6B0F761DF80BDD5135EC5092F0036C6E7480D01A;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1;
// System.Tuple`2<System.String,UnityEngine.Transform>
struct Tuple_2_t1726DB61838E1060A5A9C6C15D9DE70653283CDE;
// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>>
struct ValueCollection_t332CAE87E58DEEA2A5FC10A12BC3AE52AF3BA3C5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.XR.ARFoundation.ARAnchor>
struct ValueCollection_t51D61F9A30D2689AADDCA333557C3FC43C245CF3;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.XR.ARFoundation.ARAnchor>[]
struct EntryU5BU5D_t02EFC2EECAF24885A506C917FE43341EF5738B40;
// System.Tuple`2<System.String,UnityEngine.Transform>[]
struct Tuple_2U5BU5D_t79227F0A83B1C1656696F5B46123E8179795F773;
// UnityEngine.XR.ARFoundation.ARAnchor[]
struct ARAnchorU5BU5D_t1AB3C84B9D1ACE01B9E6DF1BB4DD660AE7A55A24;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// UnityEngine.Camera[]
struct CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001;
// UnityEngine.Canvas[]
struct CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Vuforia.DriverCameraMode[]
struct DriverCameraModeU5BU5D_t2C8AF207CF9352D5E64CF34A380AC395613DF06C;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Pose[]
struct PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A;
// UnityEngine.Renderer[]
struct RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Vuforia.VuforiaAugmentationRenderer[]
struct VuforiaAugmentationRendererU5BU5D_tEECC38D68E1CEA50FE982965BC188F2B8EE31178;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor[]
struct XRAnchorSubsystemDescriptorU5BU5D_t318CF69C63F1EB8AFFF7C60918EE1024E2B0521E;
// UnityEngine.XR.ARSubsystems.XRCameraConfiguration[]
struct XRCameraConfigurationU5BU5D_t0D4965EF24D111D65C8DDBB45B23D0D4B61CC99B;
// UnityEngine.XR.XRDisplaySubsystem[]
struct XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344;
// UnityEngine.XR.ARFoundation.ARAnchor
struct ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C;
// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F;
// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F;
// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// BoundingBoxRenderer
struct BoundingBoxRenderer_t9F5EF3591717DA29C2131700748FA5E660CF0702;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// Vuforia.CameraDevice
struct CameraDevice_t5A659FEC1FF047A9D0BE5A49CE224EECCF96697F;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// DefaultAreaTargetEventHandler
struct DefaultAreaTargetEventHandler_t8240588E2859986CC6CC2F6AFCF5A3867C525BFE;
// DefaultInitializationErrorHandler
struct DefaultInitializationErrorHandler_tFBA569E354DBCE9B7B7F4A60B3554F7FC7B33D16;
// DefaultObserverEventHandler
struct DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Vuforia.DevicePoseBehaviour
struct DevicePoseBehaviour_t228722CAB359AE9B3CB16CCE4DFA70DB951C35E1;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// UnityEngine.Font
struct Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Vuforia.ARFoundation.IARFoundationFacade
struct IARFoundationFacade_t678BD2DCDF84995956B5E2162B2BB1D02FB39691;
// Vuforia.IAnchorProvider
struct IAnchorProvider_t97906B4678886377164CCFA34B11067E1DB2C61D;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Vuforia.Internal.Core.IEngine
struct IEngine_t708DCFFA8A0A96615D4AC23FF9621DA3A280AC3E;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Vuforia.IHitTestProvider
struct IHitTestProvider_t93273A02347994E9F489CD9C477666093FF3F367;
// Vuforia.Internal.Observers.IObserver
struct IObserver_tDE0C8AF5F4AAABB85ACC09BC42BE7ABD6FCC961F;
// Vuforia.IObserverRegistry
struct IObserverRegistry_t87FE1BAE02D5523E9DF8B8C6B3E8A40556C01D4A;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14;
// Vuforia.UnityRuntimeCompiled.IUnityRenderPipeline
struct IUnityRenderPipeline_tCE104EBAAF9792B3DE3C429FDD7FE903F2E4F47C;
// Vuforia.UnityRuntimeCompiled.IUnityRuntimeCompiledFacade
struct IUnityRuntimeCompiledFacade_tAF460DAE406A18AD8C40B775381A67ADC3886606;
// Vuforia.UnityRuntimeCompiled.IUnityXRBridge
struct IUnityXRBridge_t9EE0ABE31696D77339C42807068C5D17D03B24E0;
// Vuforia.IlluminationData
struct IlluminationData_t1F6C795EC347653F99C731A1D44F01A719B3E21F;
// Vuforia.Internal.Observers.IlluminationObserver
struct IlluminationObserver_t256682ED64D1C083F61A2A4CDCC6609C9DA44082;
// Vuforia.Image
struct Image_tEA90BDBB0131379427A1282935D21313F94DFDB1;
// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Vuforia.ObserverBehaviour
struct ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274;
// Vuforia.ObserverFactory
struct ObserverFactory_t8F8A436F3E3074002EAC9BC33F75BB80335496F5;
// Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade
struct OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer
struct RuntimeOpenSourceInitializer_t8984C6170A7116F3B00737EC07AFE988AE40B76B;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// Vuforia.VideoBackground
struct VideoBackground_tABAA05A8DC2011C5B98D09B8DF0C36853D585713;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Vuforia.VuMarkBehaviour
struct VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2;
// Vuforia.VuMarkInstanceId
struct VuMarkInstanceId_t5C200552393A64E29B6A074B462E7E5B71EE5DF5;
// Vuforia.VuMarkInstancesManager
struct VuMarkInstancesManager_t901C2384A8FD62E9C62E6D18B8ED116FB9EFBC1F;
// Vuforia.Internal.Observers.VuMarkObserver
struct VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479;
// Vuforia.VuMarkPreview
struct VuMarkPreview_t7745561F9348795064F637DD5D2E14D07F40E8E2;
// Vuforia.VuforiaApplication
struct VuforiaApplication_tDC756FC5605334FDF0FF6F95CC0FEE4E134D64F1;
// Vuforia.VuforiaAugmentationRenderer
struct VuforiaAugmentationRenderer_tC6BFEB2AAD6037D587F8A520CCF2C12618BD1886;
// Vuforia.VuforiaBehaviour
struct VuforiaBehaviour_t6114F20D1970225E083A4FBAFB269FA524FEF407;
// Vuforia.VuforiaConfiguration
struct VuforiaConfiguration_tD9B249335070DBFF290D1B3ED05D245874C2A4B4;
// Vuforia.VuforiaMonoBehaviour
struct VuforiaMonoBehaviour_t172ED03DD8996A3B90FCEDB8A62EB98DBDCB0932;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// Vuforia.World
struct World_tD34189E7DB459CEB10A1D3C0D7C94B25197AD14F;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor
struct XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor
struct XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5;
// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042;
// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// DefaultObserverEventHandler/PoseLerp
struct PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328;
// DefaultObserverEventHandler/PoseSmoother
struct PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_tBF11A511EBD8D237A1C5885D460B42A45DDBB2DB;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D;
// Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<>c
struct U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7;
// Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<>c__DisplayClass26_0
struct U3CU3Ec__DisplayClass26_0_t315C6B6CB80468086F2427B2F2518AFDEED9AF8C;
// Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<CheckAvailability>d__19
struct U3CCheckAvailabilityU3Ed__19_tB688CDF56303EDC427E5E356E3A9150AA2E58155;
// Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<WaitForCameraReady>d__22
struct U3CWaitForCameraReadyU3Ed__22_tA4BE56875445D83B986D8AB04FBC0C0608175827;
// Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/OpenSourceUnityRuntimeCompiledFacade
struct OpenSourceUnityRuntimeCompiledFacade_tE074BC03139BA8588825A6DE47CB2C59AFFFC38F;
// Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/UnityRenderPipeline
struct UnityRenderPipeline_tD91000EBC3823B7CC5DC4CB6715BE0D4385A9D92;
// Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/UnityXRBridge
struct UnityXRBridge_tA49745BF2B04A3DA05BC13E762241A6D60E502B3;
// Vuforia.VuforiaConfiguration/DatabaseConfiguration
struct DatabaseConfiguration_tAA9EE01F50216360C4257CC06AD4BD24D6F2E59D;
// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration
struct DeviceTrackerConfiguration_tB1C0524D487A0B42FF77F652FD8841B8C3E546F6;
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B;
// Vuforia.VuforiaConfiguration/PackageInfo
struct PackageInfo_t7951B39E18BE00346CFB0EEC1550688B5DF3342F;
// Vuforia.VuforiaConfiguration/PlayModeConfiguration
struct PlayModeConfiguration_tE8DA42126B58D2C3350D11ACFA8E4BD48F5D42FF;
// Vuforia.VuforiaConfiguration/RequiredShaders
struct RequiredShaders_t2CB3B1F273320A0E3F0A3D1E8BB9891BA60A6DEE;
// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration
struct VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345;
// Vuforia.VuforiaConfiguration/WebCamConfiguration
struct WebCamConfiguration_t825C06D4C049135F922FA8695E74F9DB5B5E0986;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider
struct Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider
struct Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1;
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api
struct Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E;
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate
struct OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD;

IL2CPP_EXTERN_C RuntimeClass* ARFoundationFacade_t25F6D0A60217FDB54EB918477BE3D742A0EC874F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARFoundationInitializer_t80FC905E3A3828C1BDC49D7DC5D3AB6163007CB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tAA1D1EEFC680CD9A5C6DDD77BD612C0BBD43C306_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t254D87D7CB5E1987005531FFF30ED1CA3AEDECCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tBEC7B0597650F8D41DD8126DFAC07D2EA63976A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Converter_2_tC64B44F1A0EAFD8273C87D483DA826F259BA6D53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7E05C7C6DEC66BBE1049328BA77DC6F0E4D34737_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0DB172BEA8D0009792F34EE515F413302C73E421_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t56455D217921470E52E7D33A1794256E31084DD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC88E8D307029C3E0623CA706C3221D1D905D71DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDED98C236097B36F9015B396398179A6F8A62E50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpenSourceUnityRuntimeCompiledFacade_tE074BC03139BA8588825A6DE47CB2C59AFFFC38F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderPipelineManager_t891744C0325329F7FA7C64614C0E3DFF13284AF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeOpenSourceInitializer_t8984C6170A7116F3B00737EC07AFE988AE40B76B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortedDictionary_2_tF9C4707959CBD1F373B52730EFAB7444F569E8B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StatusInfo_t2D3913E705BD464CB7101343C8E44C3140AAEBFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Status_t507773DC9329777DFF23BBE12880E1A5331F8826_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCheckAvailabilityU3Ed__19_tB688CDF56303EDC427E5E356E3A9150AA2E58155_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass26_0_t315C6B6CB80468086F2427B2F2518AFDEED9AF8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitForCameraReadyU3Ed__22_tA4BE56875445D83B986D8AB04FBC0C0608175827_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityRenderPipeline_tD91000EBC3823B7CC5DC4CB6715BE0D4385A9D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityRuntimeCompiledFacade_t9141C0D0C0C28E2F8DFB31E1EB39CC2C71A5732E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityXRBridge_tA49745BF2B04A3DA05BC13E762241A6D60E502B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VuforiaInitError_t8EDBA61A511F9B1518C1EA806C4769BA8E788774_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07640EBEA29A7F9158308AB63A8F6FFA18B48619;
IL2CPP_EXTERN_C String_t* _stringLiteral1BD661E1F238A44C35B029FD1E97F79C25A6809E;
IL2CPP_EXTERN_C String_t* _stringLiteral1C4303CE90A80E03466A934F3A49CF1FBA75C709;
IL2CPP_EXTERN_C String_t* _stringLiteral2005EA02AF99AFD38B775312CF9E5C2EFC3A4413;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral357A715307A57766715F43C999C7811C93171CA2;
IL2CPP_EXTERN_C String_t* _stringLiteral39590AB05537D2F84E8625BF232343DBD5B2DF1E;
IL2CPP_EXTERN_C String_t* _stringLiteral4C25795CBE20352B03A629EEA3EA4EC884ED60D8;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral69C1BE505858A5E3C56A2CCC6B047D509E55ABBD;
IL2CPP_EXTERN_C String_t* _stringLiteral6B9146F8599FB723DBBC0171737941A09EB2AD3A;
IL2CPP_EXTERN_C String_t* _stringLiteral6CE02DBF10772951A436ED08602B6C21AF7A06F2;
IL2CPP_EXTERN_C String_t* _stringLiteral713AED1B26134722240360086068181819E0FC37;
IL2CPP_EXTERN_C String_t* _stringLiteral72036C1C3D8C7E9E0FC0722934C76B58172781BD;
IL2CPP_EXTERN_C String_t* _stringLiteral7607DB878D95B52658729D4CD10E90FB9C8AEEB2;
IL2CPP_EXTERN_C String_t* _stringLiteral7958D8718851B62A555321504A274F41897CBF6C;
IL2CPP_EXTERN_C String_t* _stringLiteral8ACAA4E0B28437F5FD1A41CE6591A16813F05377;
IL2CPP_EXTERN_C String_t* _stringLiteral8F9C258ECC4E968FE0E96DA784BBFC2C47147148;
IL2CPP_EXTERN_C String_t* _stringLiteral90B844AA74E6088FB06AD91BC441309F260A0EB3;
IL2CPP_EXTERN_C String_t* _stringLiteral9809D7E81947620DDFD1D4664D7842A2E6B5D49D;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253;
IL2CPP_EXTERN_C String_t* _stringLiteralC5949C9287C8E8A0ADD8A3292BDDD75493E64EF6;
IL2CPP_EXTERN_C String_t* _stringLiteralC6661EE242F59FA9526DCF22B0A990EA9B3E1208;
IL2CPP_EXTERN_C String_t* _stringLiteralC6D4061F9A1EBD498E94D8893AB796AA4F186A0A;
IL2CPP_EXTERN_C String_t* _stringLiteralC7BD90A00FD7EF63369F2DFB52EFB7ECBE84CAB5;
IL2CPP_EXTERN_C String_t* _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2;
IL2CPP_EXTERN_C String_t* _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDBBFC61EBB58F47B7F8865F316E208301D580612;
IL2CPP_EXTERN_C String_t* _stringLiteralF804A77403F7CCB264325B71FEABF32B77A70A66;
IL2CPP_EXTERN_C String_t* _stringLiteralFDAA7FA719DD479A4D7E225B60B5966B96641F8F;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackable_2_get_trackableId_m5B246724B1B0C9D5128E1359559AA8F6A3ECAB55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m8FF727B865C8424147FD6AAB428AA28B82EC9C93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mD46448B64FD6241AEBDC58583AABC7AB91A9B136_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mFB24D520F13D2DF268DBB1349007BA6377CC4696_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m07256E4CBF2A3BE17ACA6171025AA2780396C303_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m442691FA3EA8C84ADA0081254C58A2FFAE8C7932_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m5D27168A59CFFABB7C27EBE02757F21047177A3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m705060AE3718C585E53BCFEE31DF0B4FFF3DA3E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mFDAFDD7480C974BAAB7915B1566987E6FF2863FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m05C604538242169E704EA16B607E2345326CD5F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m82727378824B9B4A0180DE63F07C255198D71D6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m43782689D579BE44352DC83043E4D7ED69EEFEE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m6702F5465C5156B1FB05A678988FF9A80D94AE06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m6F6D5728CA998380E3EE5E8158E4A6DA971151BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mA5801EA0E9A1E4EF759E5AEC43B276881C698385_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mEF529AE864C800525173EADF5CE7772B9BEDBBA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F_m9B2DAFBA4C933C9B828C8BE816CA1C594584E2CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD63281542675697ADC038B664E30F73F6BC1F1D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274_m2BF53E726DEB22E09654453E75F5ECF4F293E6C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisVuforiaAugmentationRenderer_tC6BFEB2AAD6037D587F8A520CCF2C12618BD1886_m458D839DD96788B7214C401DF761109DE0DDA86C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD5E5663A016CDAD3F6409404EE12FD8BFAAC79FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m3B2271E32876821DA2A4626F1841EE1F38944EB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m1A95B452BAE19475E5A65028964BF91500D30E24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisVuforiaAugmentationRenderer_tC6BFEB2AAD6037D587F8A520CCF2C12618BD1886_m3E6B199729B5920EC9846D9D0451574E086A0A94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Converter_2__ctor_m2A6F2071D4F717FDD19FF41DEF0D50DFB8511AD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultInitializationErrorHandler_DrawWindowContent_mE0C82868D3C4B088EA3F256A8D979F8FB9DA2BB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultInitializationErrorHandler_OnVuforiaInitializationError_mA54F372DEFB25794738316CB8C2BBCBEF58AFE45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultObserverEventHandler_OnObserverDestroyed_m1CB3F37FA62FD6C48DF24D4337153AEED55C30C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultObserverEventHandler_OnObserverStatusChanged_m030A3CC1650F60A62A00D9E4E55AA88DDC6DEF7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultObserverEventHandler_OnStateUpdated_m625595CBA850F0F783F9557388A7AFC08DFAC0CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m2F3AFF5DDB98208186E9B951A5D04EC43A092370_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mE2897AD7FBFB1621899052D558884189FA7E7F1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m17871C0A6709936FC836E221F03C61610925A66E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m30CF35E271B7DD35A08B94CA8D4DBE6F70F3D4C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m00BF2CC86865111F0ACD02544F9E7972598D6E41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mA50067F43600232C2DB1DFD14930BA24778682A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m2AC3645AA0AB6DAE38B4C3C192865A69069FA6C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m1A338096F660EF3B4824D26E9E61DD38CE98E901_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3184BCF3BD31DDC25872BF499DE67CE1FA608F53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m5B8D5FD3B57E4B59209E86FB3CFCE4D2A320AE80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m897BB839284E62A9547F181CA8A704E9AC0D490E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF98E94CA63C7309AE46544DA6B2804EFE518C8A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1C9A34744E8345930B58C209939C81E42F4B72C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m4244B9178131B00687921873F8FFBADB5EADC39C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m539E879120F5D0D47C05EB9F39D4D44D9C1983E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m68045EEFE01DB4EE0075EAE7A66750275D4C6DE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m10E36893D34D73C78917FD5CF87BB1415D504E64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5D13ACE4E06CD6F3FB4E705A9A91423B6EBCD551_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC38B2E8BDB12165764511F5A37034EF508285C44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCE1EB51F59866B742F01AF4A4AF6AE22CEFD0A29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m5078D981AF46B4D52AF0FFF91A7D34899E115513_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F_m69F9BCEA3450A9169900704B4AE6906AE4E19EA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m33B64E5E020F40670C0B5D0812F30E70BBAC891D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6060E14B0C14D050D42FB325D6D9D10947E24130_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBD8F0C645C2270EC9AC1D6BBEB9F2CC42377C88F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mDADE08660CDAEF1A9D57DF4AD815150524657CE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ConvertAll_TisPose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_mA74800C458088266E02F3C5CABC35604E9B6E0B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB1C8C1C02F0AE282A7FE5944B393195661E48D1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB90C00C1868C41062CEA5C9DF34ACB3872BE2BBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m128157547D09AFE9970E788136E8D26A9C8F8F57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m12D8028E9E6B054A2CB7C933C33FF0C6DE60FB06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC64A79DDC43BF71FC8C0B5F4BA20F1C6A16B3580_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD6C183C6DD1054B1C06CBB9E96AFC778A0A5CBF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF373740DD26536668F201DDCB222C1A8C7AC91D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC864128E4993D3F8431EA563A3346A250FD39B83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mC554164DB459D59B2467A614F681C87FD00ACC11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_GetEnumerator_m5BA172840229277B6088558B57827D9E79314688_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m263D100CDC58D42ECBC9CF6E884C3AD506FE4CF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_mAABAFD79174F11BFA437674F61634721D84D9C31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mE1F110F3C76C59DF1376A23841ADA9E9970B97D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mC8B2FF6D15E5BD1BF52356C2621F2BE4AD504054_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mD8E0C85C96E8F68E55600773D64912BF77F68545_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_mBD742602F73DAB84C8C5D145A1AB4F789119147B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_m1E2B3B4339AA236F036237F8567404C07A412BD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1_mF212B3EE0FB0DB020FD9872AD998D47FAC45C2C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m02CC4A1C778D32BBEBFD5363556C9538A378F77A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenSourceARFoundationFacade_OnAnchorsChanged_mA942FEE9C7E7931A65619A668E29D665EA89898F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenSourceARFoundationFacade_UpdateStateFromARFoundationFrame_m02D2E5F9B9FAC39BA3AF14644E9D426CAAFC6E9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_GetBuiltinResource_TisFont_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9_mC31B9BA9D7584A0432008C387569793EAFAEA818_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_Add_mA1FC348CFCB4266BFC55D7B48210E42508F8EC71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_ContainsKey_mFF776ED41F275AEDA1810A4A123CF6BFF69E863C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2__ctor_mCBFD51A13B37B3DB7DADE4671A7B0799DA72DA58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_get_Item_m7D45638BB73E05A8CB4D592D19B08DD2C7D59FE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_3_get_subsystem_m27E319E50A5192129309A3CF6FF3A06E00643BA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_3_get_subsystem_mECDDE4A838FA3AE336F989C2DBC2C0ED374B2FF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetInstances_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7815329E7014FDE1DE442AF3F320E30E685A3880_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetSubsystemDescriptors_TisXRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B_m3109B986F235F2910E6FA0B1014C9A336EBBAE06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_Create_TisString_t_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m019D79DEEAF1E856DBBDDA4A00BAC1AAC6BC96FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckAvailabilityU3Ed__19_System_Collections_IEnumerator_Reset_m89C9EB2C8B8ECD9E2D285CBEEAEB5EB5090FAB92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CHitTestU3Eb__32_0_m27477CFFF7D5E6B74FC8A4F96A4CA3CD357B803F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__33_0_mEEFC9ECADE7073544708232F38321954A3D981ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__33_1_m070A3D472459299EC3059C80E8D8721280AA4EC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__33_2_m8412C267B7D4A6B716A708E98DF93AF68443F229_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass26_0_U3CSelectProfileU3Eb__0_mC4A646AEDD5A4A927D34E31DED9B490DA8889C85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForCameraReadyU3Ed__22_System_Collections_IEnumerator_Reset_m5E339562DB73EB8ED334558B0CDEF0EAD21D9784_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityRenderPipeline_OnBeginCameraRendering_m6A127602BAB148B6C5F87A5800ADE1C6651A2E46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityRenderPipeline_OnBeginFrameRendering_mF99D5993E32563ADDDE346C0A70AE2A637211507_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityXRBridge_TrackingOriginUpdated_mDF16C4694398CDA23873856F43C22128173AB6D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader_GetLoadedSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_mC98D5F7030C574A69D86EA429F90CF769106A5EB_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001;
struct CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF;
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct VuforiaAugmentationRendererU5BU5D_tEECC38D68E1CEA50FE982965BC188F2B8EE31178;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t87531978E4F1EA0E9270E6C8AE67C3882A5BCBBD 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARFoundation.ARAnchor>
struct Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t02EFC2EECAF24885A506C917FE43341EF5738B40* ___entries_1;
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
	KeyCollection_t5D44DEF62466B169E2E8CED13AEB8135AB375B7C * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t51D61F9A30D2689AADDCA333557C3FC43C245CF3 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743, ___entries_1)); }
	inline EntryU5BU5D_t02EFC2EECAF24885A506C917FE43341EF5738B40* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t02EFC2EECAF24885A506C917FE43341EF5738B40** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t02EFC2EECAF24885A506C917FE43341EF5738B40* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743, ___keys_7)); }
	inline KeyCollection_t5D44DEF62466B169E2E8CED13AEB8135AB375B7C * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t5D44DEF62466B169E2E8CED13AEB8135AB375B7C ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t5D44DEF62466B169E2E8CED13AEB8135AB375B7C * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743, ___values_8)); }
	inline ValueCollection_t51D61F9A30D2689AADDCA333557C3FC43C245CF3 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t51D61F9A30D2689AADDCA333557C3FC43C245CF3 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t51D61F9A30D2689AADDCA333557C3FC43C245CF3 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Tuple`2<System.String,UnityEngine.Transform>>
struct List_1_t0DB172BEA8D0009792F34EE515F413302C73E421  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Tuple_2U5BU5D_t79227F0A83B1C1656696F5B46123E8179795F773* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0DB172BEA8D0009792F34EE515F413302C73E421, ____items_1)); }
	inline Tuple_2U5BU5D_t79227F0A83B1C1656696F5B46123E8179795F773* get__items_1() const { return ____items_1; }
	inline Tuple_2U5BU5D_t79227F0A83B1C1656696F5B46123E8179795F773** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Tuple_2U5BU5D_t79227F0A83B1C1656696F5B46123E8179795F773* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0DB172BEA8D0009792F34EE515F413302C73E421, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0DB172BEA8D0009792F34EE515F413302C73E421, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0DB172BEA8D0009792F34EE515F413302C73E421, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0DB172BEA8D0009792F34EE515F413302C73E421_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Tuple_2U5BU5D_t79227F0A83B1C1656696F5B46123E8179795F773* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0DB172BEA8D0009792F34EE515F413302C73E421_StaticFields, ____emptyArray_5)); }
	inline Tuple_2U5BU5D_t79227F0A83B1C1656696F5B46123E8179795F773* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Tuple_2U5BU5D_t79227F0A83B1C1656696F5B46123E8179795F773** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Tuple_2U5BU5D_t79227F0A83B1C1656696F5B46123E8179795F773* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ARAnchorU5BU5D_t1AB3C84B9D1ACE01B9E6DF1BB4DD660AE7A55A24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9, ____items_1)); }
	inline ARAnchorU5BU5D_t1AB3C84B9D1ACE01B9E6DF1BB4DD660AE7A55A24* get__items_1() const { return ____items_1; }
	inline ARAnchorU5BU5D_t1AB3C84B9D1ACE01B9E6DF1BB4DD660AE7A55A24** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ARAnchorU5BU5D_t1AB3C84B9D1ACE01B9E6DF1BB4DD660AE7A55A24* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ARAnchorU5BU5D_t1AB3C84B9D1ACE01B9E6DF1BB4DD660AE7A55A24* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9_StaticFields, ____emptyArray_5)); }
	inline ARAnchorU5BU5D_t1AB3C84B9D1ACE01B9E6DF1BB4DD660AE7A55A24* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ARAnchorU5BU5D_t1AB3C84B9D1ACE01B9E6DF1BB4DD660AE7A55A24** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ARAnchorU5BU5D_t1AB3C84B9D1ACE01B9E6DF1BB4DD660AE7A55A24* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D, ____items_1)); }
	inline ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* get__items_1() const { return ____items_1; }
	inline ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_StaticFields, ____emptyArray_5)); }
	inline ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Vuforia.DriverCameraMode>
struct List_1_tC88E8D307029C3E0623CA706C3221D1D905D71DD  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DriverCameraModeU5BU5D_t2C8AF207CF9352D5E64CF34A380AC395613DF06C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC88E8D307029C3E0623CA706C3221D1D905D71DD, ____items_1)); }
	inline DriverCameraModeU5BU5D_t2C8AF207CF9352D5E64CF34A380AC395613DF06C* get__items_1() const { return ____items_1; }
	inline DriverCameraModeU5BU5D_t2C8AF207CF9352D5E64CF34A380AC395613DF06C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DriverCameraModeU5BU5D_t2C8AF207CF9352D5E64CF34A380AC395613DF06C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC88E8D307029C3E0623CA706C3221D1D905D71DD, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC88E8D307029C3E0623CA706C3221D1D905D71DD, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC88E8D307029C3E0623CA706C3221D1D905D71DD, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC88E8D307029C3E0623CA706C3221D1D905D71DD_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DriverCameraModeU5BU5D_t2C8AF207CF9352D5E64CF34A380AC395613DF06C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC88E8D307029C3E0623CA706C3221D1D905D71DD_StaticFields, ____emptyArray_5)); }
	inline DriverCameraModeU5BU5D_t2C8AF207CF9352D5E64CF34A380AC395613DF06C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DriverCameraModeU5BU5D_t2C8AF207CF9352D5E64CF34A380AC395613DF06C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DriverCameraModeU5BU5D_t2C8AF207CF9352D5E64CF34A380AC395613DF06C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Pose>
struct List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C, ____items_1)); }
	inline PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* get__items_1() const { return ____items_1; }
	inline PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C_StaticFields, ____emptyArray_5)); }
	inline PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PoseU5BU5D_t45D2BAE8FDADEBC22E30236BB871C3E59C3A455A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct List_1_tDED98C236097B36F9015B396398179A6F8A62E50  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRAnchorSubsystemDescriptorU5BU5D_t318CF69C63F1EB8AFFF7C60918EE1024E2B0521E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDED98C236097B36F9015B396398179A6F8A62E50, ____items_1)); }
	inline XRAnchorSubsystemDescriptorU5BU5D_t318CF69C63F1EB8AFFF7C60918EE1024E2B0521E* get__items_1() const { return ____items_1; }
	inline XRAnchorSubsystemDescriptorU5BU5D_t318CF69C63F1EB8AFFF7C60918EE1024E2B0521E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRAnchorSubsystemDescriptorU5BU5D_t318CF69C63F1EB8AFFF7C60918EE1024E2B0521E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDED98C236097B36F9015B396398179A6F8A62E50, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDED98C236097B36F9015B396398179A6F8A62E50, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDED98C236097B36F9015B396398179A6F8A62E50, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDED98C236097B36F9015B396398179A6F8A62E50_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRAnchorSubsystemDescriptorU5BU5D_t318CF69C63F1EB8AFFF7C60918EE1024E2B0521E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDED98C236097B36F9015B396398179A6F8A62E50_StaticFields, ____emptyArray_5)); }
	inline XRAnchorSubsystemDescriptorU5BU5D_t318CF69C63F1EB8AFFF7C60918EE1024E2B0521E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRAnchorSubsystemDescriptorU5BU5D_t318CF69C63F1EB8AFFF7C60918EE1024E2B0521E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRAnchorSubsystemDescriptorU5BU5D_t318CF69C63F1EB8AFFF7C60918EE1024E2B0521E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRCameraConfigurationU5BU5D_t0D4965EF24D111D65C8DDBB45B23D0D4B61CC99B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A, ____items_1)); }
	inline XRCameraConfigurationU5BU5D_t0D4965EF24D111D65C8DDBB45B23D0D4B61CC99B* get__items_1() const { return ____items_1; }
	inline XRCameraConfigurationU5BU5D_t0D4965EF24D111D65C8DDBB45B23D0D4B61CC99B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRCameraConfigurationU5BU5D_t0D4965EF24D111D65C8DDBB45B23D0D4B61CC99B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRCameraConfigurationU5BU5D_t0D4965EF24D111D65C8DDBB45B23D0D4B61CC99B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A_StaticFields, ____emptyArray_5)); }
	inline XRCameraConfigurationU5BU5D_t0D4965EF24D111D65C8DDBB45B23D0D4B61CC99B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRCameraConfigurationU5BU5D_t0D4965EF24D111D65C8DDBB45B23D0D4B61CC99B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRCameraConfigurationU5BU5D_t0D4965EF24D111D65C8DDBB45B23D0D4B61CC99B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>
struct List_1_t56455D217921470E52E7D33A1794256E31084DD8  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t56455D217921470E52E7D33A1794256E31084DD8, ____items_1)); }
	inline XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* get__items_1() const { return ____items_1; }
	inline XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t56455D217921470E52E7D33A1794256E31084DD8, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t56455D217921470E52E7D33A1794256E31084DD8, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t56455D217921470E52E7D33A1794256E31084DD8, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t56455D217921470E52E7D33A1794256E31084DD8_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t56455D217921470E52E7D33A1794256E31084DD8_StaticFields, ____emptyArray_5)); }
	inline XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.SortedDictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>>
struct SortedDictionary_2_tF9C4707959CBD1F373B52730EFAB7444F569E8B3  : public RuntimeObject
{
public:
	// System.Collections.Generic.SortedDictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_keys
	KeyCollection_tD1814F79DC3A616149709528C85A07251108B72E * ____keys_0;
	// System.Collections.Generic.SortedDictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_values
	ValueCollection_t332CAE87E58DEEA2A5FC10A12BC3AE52AF3BA3C5 * ____values_1;
	// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2::_set
	TreeSet_1_t6B0F761DF80BDD5135EC5092F0036C6E7480D01A * ____set_2;

public:
	inline static int32_t get_offset_of__keys_0() { return static_cast<int32_t>(offsetof(SortedDictionary_2_tF9C4707959CBD1F373B52730EFAB7444F569E8B3, ____keys_0)); }
	inline KeyCollection_tD1814F79DC3A616149709528C85A07251108B72E * get__keys_0() const { return ____keys_0; }
	inline KeyCollection_tD1814F79DC3A616149709528C85A07251108B72E ** get_address_of__keys_0() { return &____keys_0; }
	inline void set__keys_0(KeyCollection_tD1814F79DC3A616149709528C85A07251108B72E * value)
	{
		____keys_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keys_0), (void*)value);
	}

	inline static int32_t get_offset_of__values_1() { return static_cast<int32_t>(offsetof(SortedDictionary_2_tF9C4707959CBD1F373B52730EFAB7444F569E8B3, ____values_1)); }
	inline ValueCollection_t332CAE87E58DEEA2A5FC10A12BC3AE52AF3BA3C5 * get__values_1() const { return ____values_1; }
	inline ValueCollection_t332CAE87E58DEEA2A5FC10A12BC3AE52AF3BA3C5 ** get_address_of__values_1() { return &____values_1; }
	inline void set__values_1(ValueCollection_t332CAE87E58DEEA2A5FC10A12BC3AE52AF3BA3C5 * value)
	{
		____values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____values_1), (void*)value);
	}

	inline static int32_t get_offset_of__set_2() { return static_cast<int32_t>(offsetof(SortedDictionary_2_tF9C4707959CBD1F373B52730EFAB7444F569E8B3, ____set_2)); }
	inline TreeSet_1_t6B0F761DF80BDD5135EC5092F0036C6E7480D01A * get__set_2() const { return ____set_2; }
	inline TreeSet_1_t6B0F761DF80BDD5135EC5092F0036C6E7480D01A ** get_address_of__set_2() { return &____set_2; }
	inline void set__set_2(TreeSet_1_t6B0F761DF80BDD5135EC5092F0036C6E7480D01A * value)
	{
		____set_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_2), (void*)value);
	}
};


// System.Tuple`2<System.String,UnityEngine.Transform>
struct Tuple_2_t1726DB61838E1060A5A9C6C15D9DE70653283CDE  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	String_t* ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t1726DB61838E1060A5A9C6C15D9DE70653283CDE, ___m_Item1_0)); }
	inline String_t* get_m_Item1_0() const { return ___m_Item1_0; }
	inline String_t** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(String_t* value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t1726DB61838E1060A5A9C6C15D9DE70653283CDE, ___m_Item2_1)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_Item2_1() const { return ___m_Item2_1; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}
};


// Vuforia.ARFoundation.ARFoundationFacade
struct ARFoundationFacade_t25F6D0A60217FDB54EB918477BE3D742A0EC874F  : public RuntimeObject
{
public:

public:
};

struct ARFoundationFacade_t25F6D0A60217FDB54EB918477BE3D742A0EC874F_StaticFields
{
public:
	// Vuforia.ARFoundation.IARFoundationFacade Vuforia.ARFoundation.ARFoundationFacade::sInstance
	RuntimeObject* ___sInstance_0;
	// System.Object Vuforia.ARFoundation.ARFoundationFacade::sPadlock
	RuntimeObject * ___sPadlock_1;

public:
	inline static int32_t get_offset_of_sInstance_0() { return static_cast<int32_t>(offsetof(ARFoundationFacade_t25F6D0A60217FDB54EB918477BE3D742A0EC874F_StaticFields, ___sInstance_0)); }
	inline RuntimeObject* get_sInstance_0() const { return ___sInstance_0; }
	inline RuntimeObject** get_address_of_sInstance_0() { return &___sInstance_0; }
	inline void set_sInstance_0(RuntimeObject* value)
	{
		___sInstance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sInstance_0), (void*)value);
	}

	inline static int32_t get_offset_of_sPadlock_1() { return static_cast<int32_t>(offsetof(ARFoundationFacade_t25F6D0A60217FDB54EB918477BE3D742A0EC874F_StaticFields, ___sPadlock_1)); }
	inline RuntimeObject * get_sPadlock_1() const { return ___sPadlock_1; }
	inline RuntimeObject ** get_address_of_sPadlock_1() { return &___sPadlock_1; }
	inline void set_sPadlock_1(RuntimeObject * value)
	{
		___sPadlock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sPadlock_1), (void*)value);
	}
};


// Vuforia.UnityRuntimeCompiled.ARFoundationInitializer
struct ARFoundationInitializer_t80FC905E3A3828C1BDC49D7DC5D3AB6163007CB3  : public RuntimeObject
{
public:

public:
};

struct ARFoundationInitializer_t80FC905E3A3828C1BDC49D7DC5D3AB6163007CB3_StaticFields
{
public:
	// Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade Vuforia.UnityRuntimeCompiled.ARFoundationInitializer::sFacade
	OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * ___sFacade_0;

public:
	inline static int32_t get_offset_of_sFacade_0() { return static_cast<int32_t>(offsetof(ARFoundationInitializer_t80FC905E3A3828C1BDC49D7DC5D3AB6163007CB3_StaticFields, ___sFacade_0)); }
	inline OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * get_sFacade_0() const { return ___sFacade_0; }
	inline OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 ** get_address_of_sFacade_0() { return &___sFacade_0; }
	inline void set_sFacade_0(OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * value)
	{
		___sFacade_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sFacade_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade
struct OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::mIsAnchorSupported
	bool ___mIsAnchorSupported_0;
	// UnityEngine.XR.ARFoundation.ARCameraManager Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::mCameraManager
	ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * ___mCameraManager_1;
	// UnityEngine.XR.ARFoundation.ARAnchorManager Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::mAnchorManager
	ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * ___mAnchorManager_2;
	// UnityEngine.XR.ARFoundation.ARSession Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::mSession
	ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * ___mSession_3;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::mSessionOrigin
	ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * ___mSessionOrigin_4;
	// UnityEngine.XR.ARFoundation.ARRaycastManager Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::mRaycastManager
	ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * ___mRaycastManager_5;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARFoundation.ARAnchor> Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::mAnchors
	Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 * ___mAnchors_6;
	// System.Action`1<Vuforia.ARFoundation.ARFoundationImage> Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::ARFoundationImageEvent
	Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * ___ARFoundationImageEvent_7;
	// System.Action`2<UnityEngine.Transform,System.Int64> Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::ARFoundationPoseEvent
	Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * ___ARFoundationPoseEvent_8;
	// System.Action`2<System.Collections.Generic.List`1<System.Tuple`2<System.String,UnityEngine.Transform>>,System.Collections.Generic.List`1<System.Tuple`2<System.String,UnityEngine.Transform>>> Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::AnchorsChangedEvent
	Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * ___AnchorsChangedEvent_9;

public:
	inline static int32_t get_offset_of_mIsAnchorSupported_0() { return static_cast<int32_t>(offsetof(OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0, ___mIsAnchorSupported_0)); }
	inline bool get_mIsAnchorSupported_0() const { return ___mIsAnchorSupported_0; }
	inline bool* get_address_of_mIsAnchorSupported_0() { return &___mIsAnchorSupported_0; }
	inline void set_mIsAnchorSupported_0(bool value)
	{
		___mIsAnchorSupported_0 = value;
	}

	inline static int32_t get_offset_of_mCameraManager_1() { return static_cast<int32_t>(offsetof(OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0, ___mCameraManager_1)); }
	inline ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * get_mCameraManager_1() const { return ___mCameraManager_1; }
	inline ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 ** get_address_of_mCameraManager_1() { return &___mCameraManager_1; }
	inline void set_mCameraManager_1(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * value)
	{
		___mCameraManager_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCameraManager_1), (void*)value);
	}

	inline static int32_t get_offset_of_mAnchorManager_2() { return static_cast<int32_t>(offsetof(OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0, ___mAnchorManager_2)); }
	inline ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * get_mAnchorManager_2() const { return ___mAnchorManager_2; }
	inline ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F ** get_address_of_mAnchorManager_2() { return &___mAnchorManager_2; }
	inline void set_mAnchorManager_2(ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * value)
	{
		___mAnchorManager_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAnchorManager_2), (void*)value);
	}

	inline static int32_t get_offset_of_mSession_3() { return static_cast<int32_t>(offsetof(OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0, ___mSession_3)); }
	inline ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * get_mSession_3() const { return ___mSession_3; }
	inline ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B ** get_address_of_mSession_3() { return &___mSession_3; }
	inline void set_mSession_3(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * value)
	{
		___mSession_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mSession_3), (void*)value);
	}

	inline static int32_t get_offset_of_mSessionOrigin_4() { return static_cast<int32_t>(offsetof(OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0, ___mSessionOrigin_4)); }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * get_mSessionOrigin_4() const { return ___mSessionOrigin_4; }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 ** get_address_of_mSessionOrigin_4() { return &___mSessionOrigin_4; }
	inline void set_mSessionOrigin_4(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * value)
	{
		___mSessionOrigin_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mSessionOrigin_4), (void*)value);
	}

	inline static int32_t get_offset_of_mRaycastManager_5() { return static_cast<int32_t>(offsetof(OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0, ___mRaycastManager_5)); }
	inline ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * get_mRaycastManager_5() const { return ___mRaycastManager_5; }
	inline ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F ** get_address_of_mRaycastManager_5() { return &___mRaycastManager_5; }
	inline void set_mRaycastManager_5(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * value)
	{
		___mRaycastManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRaycastManager_5), (void*)value);
	}

	inline static int32_t get_offset_of_mAnchors_6() { return static_cast<int32_t>(offsetof(OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0, ___mAnchors_6)); }
	inline Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 * get_mAnchors_6() const { return ___mAnchors_6; }
	inline Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 ** get_address_of_mAnchors_6() { return &___mAnchors_6; }
	inline void set_mAnchors_6(Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 * value)
	{
		___mAnchors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAnchors_6), (void*)value);
	}

	inline static int32_t get_offset_of_ARFoundationImageEvent_7() { return static_cast<int32_t>(offsetof(OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0, ___ARFoundationImageEvent_7)); }
	inline Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * get_ARFoundationImageEvent_7() const { return ___ARFoundationImageEvent_7; }
	inline Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 ** get_address_of_ARFoundationImageEvent_7() { return &___ARFoundationImageEvent_7; }
	inline void set_ARFoundationImageEvent_7(Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * value)
	{
		___ARFoundationImageEvent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARFoundationImageEvent_7), (void*)value);
	}

	inline static int32_t get_offset_of_ARFoundationPoseEvent_8() { return static_cast<int32_t>(offsetof(OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0, ___ARFoundationPoseEvent_8)); }
	inline Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * get_ARFoundationPoseEvent_8() const { return ___ARFoundationPoseEvent_8; }
	inline Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 ** get_address_of_ARFoundationPoseEvent_8() { return &___ARFoundationPoseEvent_8; }
	inline void set_ARFoundationPoseEvent_8(Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * value)
	{
		___ARFoundationPoseEvent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARFoundationPoseEvent_8), (void*)value);
	}

	inline static int32_t get_offset_of_AnchorsChangedEvent_9() { return static_cast<int32_t>(offsetof(OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0, ___AnchorsChangedEvent_9)); }
	inline Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * get_AnchorsChangedEvent_9() const { return ___AnchorsChangedEvent_9; }
	inline Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D ** get_address_of_AnchorsChangedEvent_9() { return &___AnchorsChangedEvent_9; }
	inline void set_AnchorsChangedEvent_9(Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * value)
	{
		___AnchorsChangedEvent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AnchorsChangedEvent_9), (void*)value);
	}
};


// Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer
struct RuntimeOpenSourceInitializer_t8984C6170A7116F3B00737EC07AFE988AE40B76B  : public RuntimeObject
{
public:

public:
};

struct RuntimeOpenSourceInitializer_t8984C6170A7116F3B00737EC07AFE988AE40B76B_StaticFields
{
public:
	// Vuforia.UnityRuntimeCompiled.IUnityRuntimeCompiledFacade Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer::sFacade
	RuntimeObject* ___sFacade_0;

public:
	inline static int32_t get_offset_of_sFacade_0() { return static_cast<int32_t>(offsetof(RuntimeOpenSourceInitializer_t8984C6170A7116F3B00737EC07AFE988AE40B76B_StaticFields, ___sFacade_0)); }
	inline RuntimeObject* get_sFacade_0() const { return ___sFacade_0; }
	inline RuntimeObject** get_address_of_sFacade_0() { return &___sFacade_0; }
	inline void set_sFacade_0(RuntimeObject* value)
	{
		___sFacade_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sFacade_0), (void*)value);
	}
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


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * ___U3CproviderBaseU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CrunningU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CrunningU3Ek__BackingField_0)); }
	inline bool get_U3CrunningU3Ek__BackingField_0() const { return ___U3CrunningU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CrunningU3Ek__BackingField_0() { return &___U3CrunningU3Ek__BackingField_0; }
	inline void set_U3CrunningU3Ek__BackingField_0(bool value)
	{
		___U3CrunningU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CproviderBaseU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CproviderBaseU3Ek__BackingField_1)); }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * get_U3CproviderBaseU3Ek__BackingField_1() const { return ___U3CproviderBaseU3Ek__BackingField_1; }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 ** get_address_of_U3CproviderBaseU3Ek__BackingField_1() { return &___U3CproviderBaseU3Ek__BackingField_1; }
	inline void set_U3CproviderBaseU3Ek__BackingField_1(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * value)
	{
		___U3CproviderBaseU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderBaseU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// Vuforia.UnityRuntimeCompiled.UnityRuntimeCompiledFacade
struct UnityRuntimeCompiledFacade_t9141C0D0C0C28E2F8DFB31E1EB39CC2C71A5732E  : public RuntimeObject
{
public:

public:
};

struct UnityRuntimeCompiledFacade_t9141C0D0C0C28E2F8DFB31E1EB39CC2C71A5732E_StaticFields
{
public:
	// Vuforia.UnityRuntimeCompiled.IUnityRuntimeCompiledFacade Vuforia.UnityRuntimeCompiled.UnityRuntimeCompiledFacade::sInstance
	RuntimeObject* ___sInstance_0;

public:
	inline static int32_t get_offset_of_sInstance_0() { return static_cast<int32_t>(offsetof(UnityRuntimeCompiledFacade_t9141C0D0C0C28E2F8DFB31E1EB39CC2C71A5732E_StaticFields, ___sInstance_0)); }
	inline RuntimeObject* get_sInstance_0() const { return ___sInstance_0; }
	inline RuntimeObject** get_address_of_sInstance_0() { return &___sInstance_0; }
	inline void set_sInstance_0(RuntimeObject* value)
	{
		___sInstance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sInstance_0), (void*)value);
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

// Vuforia.World
struct World_tD34189E7DB459CEB10A1D3C0D7C94B25197AD14F  : public RuntimeObject
{
public:
	// Vuforia.Internal.Core.IEngine Vuforia.World::mEngine
	RuntimeObject* ___mEngine_0;
	// Vuforia.IObserverRegistry Vuforia.World::mObserverRegistry
	RuntimeObject* ___mObserverRegistry_1;
	// Vuforia.Internal.Observers.IlluminationObserver Vuforia.World::mIlluminationObserver
	IlluminationObserver_t256682ED64D1C083F61A2A4CDCC6609C9DA44082 * ___mIlluminationObserver_2;
	// Vuforia.IAnchorProvider Vuforia.World::<AnchorProvider>k__BackingField
	RuntimeObject* ___U3CAnchorProviderU3Ek__BackingField_3;
	// Vuforia.IHitTestProvider Vuforia.World::<HitTestProvider>k__BackingField
	RuntimeObject* ___U3CHitTestProviderU3Ek__BackingField_4;
	// System.Action Vuforia.World::OnStateUpdated
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnStateUpdated_5;
	// System.Action`1<Vuforia.ObserverBehaviour> Vuforia.World::OnObserverCreated
	Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775 * ___OnObserverCreated_6;
	// System.Action`1<Vuforia.ObserverBehaviour> Vuforia.World::OnObserverDestroyed
	Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775 * ___OnObserverDestroyed_7;
	// Vuforia.IlluminationData Vuforia.World::<IlluminationData>k__BackingField
	IlluminationData_t1F6C795EC347653F99C731A1D44F01A719B3E21F * ___U3CIlluminationDataU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_mEngine_0() { return static_cast<int32_t>(offsetof(World_tD34189E7DB459CEB10A1D3C0D7C94B25197AD14F, ___mEngine_0)); }
	inline RuntimeObject* get_mEngine_0() const { return ___mEngine_0; }
	inline RuntimeObject** get_address_of_mEngine_0() { return &___mEngine_0; }
	inline void set_mEngine_0(RuntimeObject* value)
	{
		___mEngine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mEngine_0), (void*)value);
	}

	inline static int32_t get_offset_of_mObserverRegistry_1() { return static_cast<int32_t>(offsetof(World_tD34189E7DB459CEB10A1D3C0D7C94B25197AD14F, ___mObserverRegistry_1)); }
	inline RuntimeObject* get_mObserverRegistry_1() const { return ___mObserverRegistry_1; }
	inline RuntimeObject** get_address_of_mObserverRegistry_1() { return &___mObserverRegistry_1; }
	inline void set_mObserverRegistry_1(RuntimeObject* value)
	{
		___mObserverRegistry_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mObserverRegistry_1), (void*)value);
	}

	inline static int32_t get_offset_of_mIlluminationObserver_2() { return static_cast<int32_t>(offsetof(World_tD34189E7DB459CEB10A1D3C0D7C94B25197AD14F, ___mIlluminationObserver_2)); }
	inline IlluminationObserver_t256682ED64D1C083F61A2A4CDCC6609C9DA44082 * get_mIlluminationObserver_2() const { return ___mIlluminationObserver_2; }
	inline IlluminationObserver_t256682ED64D1C083F61A2A4CDCC6609C9DA44082 ** get_address_of_mIlluminationObserver_2() { return &___mIlluminationObserver_2; }
	inline void set_mIlluminationObserver_2(IlluminationObserver_t256682ED64D1C083F61A2A4CDCC6609C9DA44082 * value)
	{
		___mIlluminationObserver_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mIlluminationObserver_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAnchorProviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(World_tD34189E7DB459CEB10A1D3C0D7C94B25197AD14F, ___U3CAnchorProviderU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CAnchorProviderU3Ek__BackingField_3() const { return ___U3CAnchorProviderU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CAnchorProviderU3Ek__BackingField_3() { return &___U3CAnchorProviderU3Ek__BackingField_3; }
	inline void set_U3CAnchorProviderU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CAnchorProviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAnchorProviderU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHitTestProviderU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(World_tD34189E7DB459CEB10A1D3C0D7C94B25197AD14F, ___U3CHitTestProviderU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CHitTestProviderU3Ek__BackingField_4() const { return ___U3CHitTestProviderU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CHitTestProviderU3Ek__BackingField_4() { return &___U3CHitTestProviderU3Ek__BackingField_4; }
	inline void set_U3CHitTestProviderU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CHitTestProviderU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHitTestProviderU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnStateUpdated_5() { return static_cast<int32_t>(offsetof(World_tD34189E7DB459CEB10A1D3C0D7C94B25197AD14F, ___OnStateUpdated_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnStateUpdated_5() const { return ___OnStateUpdated_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnStateUpdated_5() { return &___OnStateUpdated_5; }
	inline void set_OnStateUpdated_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnStateUpdated_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStateUpdated_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnObserverCreated_6() { return static_cast<int32_t>(offsetof(World_tD34189E7DB459CEB10A1D3C0D7C94B25197AD14F, ___OnObserverCreated_6)); }
	inline Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775 * get_OnObserverCreated_6() const { return ___OnObserverCreated_6; }
	inline Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775 ** get_address_of_OnObserverCreated_6() { return &___OnObserverCreated_6; }
	inline void set_OnObserverCreated_6(Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775 * value)
	{
		___OnObserverCreated_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnObserverCreated_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnObserverDestroyed_7() { return static_cast<int32_t>(offsetof(World_tD34189E7DB459CEB10A1D3C0D7C94B25197AD14F, ___OnObserverDestroyed_7)); }
	inline Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775 * get_OnObserverDestroyed_7() const { return ___OnObserverDestroyed_7; }
	inline Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775 ** get_address_of_OnObserverDestroyed_7() { return &___OnObserverDestroyed_7; }
	inline void set_OnObserverDestroyed_7(Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775 * value)
	{
		___OnObserverDestroyed_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnObserverDestroyed_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIlluminationDataU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(World_tD34189E7DB459CEB10A1D3C0D7C94B25197AD14F, ___U3CIlluminationDataU3Ek__BackingField_8)); }
	inline IlluminationData_t1F6C795EC347653F99C731A1D44F01A719B3E21F * get_U3CIlluminationDataU3Ek__BackingField_8() const { return ___U3CIlluminationDataU3Ek__BackingField_8; }
	inline IlluminationData_t1F6C795EC347653F99C731A1D44F01A719B3E21F ** get_address_of_U3CIlluminationDataU3Ek__BackingField_8() { return &___U3CIlluminationDataU3Ek__BackingField_8; }
	inline void set_U3CIlluminationDataU3Ek__BackingField_8(IlluminationData_t1F6C795EC347653F99C731A1D44F01A719B3E21F * value)
	{
		___U3CIlluminationDataU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIlluminationDataU3Ek__BackingField_8), (void*)value);
	}
};


// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<>c
struct U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_StaticFields
{
public:
	// Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<>c Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<>c::<>9
	U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7 * ___U3CU3E9_0;
	// System.Converter`2<UnityEngine.XR.ARFoundation.ARRaycastHit,UnityEngine.Pose> Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<>c::<>9__32_0
	Converter_2_tC64B44F1A0EAFD8273C87D483DA826F259BA6D53 * ___U3CU3E9__32_0_1;
	// System.Action`1<Vuforia.ARFoundation.ARFoundationImage> Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<>c::<>9__33_0
	Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * ___U3CU3E9__33_0_2;
	// System.Action`2<UnityEngine.Transform,System.Int64> Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<>c::<>9__33_1
	Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * ___U3CU3E9__33_1_3;
	// System.Action`2<System.Collections.Generic.List`1<System.Tuple`2<System.String,UnityEngine.Transform>>,System.Collections.Generic.List`1<System.Tuple`2<System.String,UnityEngine.Transform>>> Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<>c::<>9__33_2
	Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * ___U3CU3E9__33_2_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__32_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_StaticFields, ___U3CU3E9__32_0_1)); }
	inline Converter_2_tC64B44F1A0EAFD8273C87D483DA826F259BA6D53 * get_U3CU3E9__32_0_1() const { return ___U3CU3E9__32_0_1; }
	inline Converter_2_tC64B44F1A0EAFD8273C87D483DA826F259BA6D53 ** get_address_of_U3CU3E9__32_0_1() { return &___U3CU3E9__32_0_1; }
	inline void set_U3CU3E9__32_0_1(Converter_2_tC64B44F1A0EAFD8273C87D483DA826F259BA6D53 * value)
	{
		___U3CU3E9__32_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__32_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__33_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_StaticFields, ___U3CU3E9__33_0_2)); }
	inline Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * get_U3CU3E9__33_0_2() const { return ___U3CU3E9__33_0_2; }
	inline Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 ** get_address_of_U3CU3E9__33_0_2() { return &___U3CU3E9__33_0_2; }
	inline void set_U3CU3E9__33_0_2(Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * value)
	{
		___U3CU3E9__33_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__33_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__33_1_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_StaticFields, ___U3CU3E9__33_1_3)); }
	inline Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * get_U3CU3E9__33_1_3() const { return ___U3CU3E9__33_1_3; }
	inline Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 ** get_address_of_U3CU3E9__33_1_3() { return &___U3CU3E9__33_1_3; }
	inline void set_U3CU3E9__33_1_3(Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * value)
	{
		___U3CU3E9__33_1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__33_1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__33_2_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_StaticFields, ___U3CU3E9__33_2_4)); }
	inline Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * get_U3CU3E9__33_2_4() const { return ___U3CU3E9__33_2_4; }
	inline Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D ** get_address_of_U3CU3E9__33_2_4() { return &___U3CU3E9__33_2_4; }
	inline void set_U3CU3E9__33_2_4(Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * value)
	{
		___U3CU3E9__33_2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__33_2_4), (void*)value);
	}
};


// Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<CheckAvailability>d__19
struct U3CCheckAvailabilityU3Ed__19_tB688CDF56303EDC427E5E356E3A9150AA2E58155  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<CheckAvailability>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<CheckAvailability>d__19::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<CheckAvailability>d__19::<>4__this
	OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCheckAvailabilityU3Ed__19_tB688CDF56303EDC427E5E356E3A9150AA2E58155, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCheckAvailabilityU3Ed__19_tB688CDF56303EDC427E5E356E3A9150AA2E58155, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCheckAvailabilityU3Ed__19_tB688CDF56303EDC427E5E356E3A9150AA2E58155, ___U3CU3E4__this_2)); }
	inline OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<WaitForCameraReady>d__22
struct U3CWaitForCameraReadyU3Ed__22_tA4BE56875445D83B986D8AB04FBC0C0608175827  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<WaitForCameraReady>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<WaitForCameraReady>d__22::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<WaitForCameraReady>d__22::<>4__this
	OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * ___U3CU3E4__this_2;
	// UnityEngine.WaitForEndOfFrame Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<WaitForCameraReady>d__22::<waitForEndOfFrame>5__2
	WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * ___U3CwaitForEndOfFrameU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitForCameraReadyU3Ed__22_tA4BE56875445D83B986D8AB04FBC0C0608175827, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitForCameraReadyU3Ed__22_tA4BE56875445D83B986D8AB04FBC0C0608175827, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitForCameraReadyU3Ed__22_tA4BE56875445D83B986D8AB04FBC0C0608175827, ___U3CU3E4__this_2)); }
	inline OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwaitForEndOfFrameU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CWaitForCameraReadyU3Ed__22_tA4BE56875445D83B986D8AB04FBC0C0608175827, ___U3CwaitForEndOfFrameU3E5__2_3)); }
	inline WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * get_U3CwaitForEndOfFrameU3E5__2_3() const { return ___U3CwaitForEndOfFrameU3E5__2_3; }
	inline WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 ** get_address_of_U3CwaitForEndOfFrameU3E5__2_3() { return &___U3CwaitForEndOfFrameU3E5__2_3; }
	inline void set_U3CwaitForEndOfFrameU3E5__2_3(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * value)
	{
		___U3CwaitForEndOfFrameU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwaitForEndOfFrameU3E5__2_3), (void*)value);
	}
};


// Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/OpenSourceUnityRuntimeCompiledFacade
struct OpenSourceUnityRuntimeCompiledFacade_tE074BC03139BA8588825A6DE47CB2C59AFFFC38F  : public RuntimeObject
{
public:
	// Vuforia.UnityRuntimeCompiled.IUnityRenderPipeline Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/OpenSourceUnityRuntimeCompiledFacade::mUnityRenderPipeline
	RuntimeObject* ___mUnityRenderPipeline_0;
	// Vuforia.UnityRuntimeCompiled.IUnityXRBridge Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/OpenSourceUnityRuntimeCompiledFacade::mUnityXRBridge
	RuntimeObject* ___mUnityXRBridge_1;

public:
	inline static int32_t get_offset_of_mUnityRenderPipeline_0() { return static_cast<int32_t>(offsetof(OpenSourceUnityRuntimeCompiledFacade_tE074BC03139BA8588825A6DE47CB2C59AFFFC38F, ___mUnityRenderPipeline_0)); }
	inline RuntimeObject* get_mUnityRenderPipeline_0() const { return ___mUnityRenderPipeline_0; }
	inline RuntimeObject** get_address_of_mUnityRenderPipeline_0() { return &___mUnityRenderPipeline_0; }
	inline void set_mUnityRenderPipeline_0(RuntimeObject* value)
	{
		___mUnityRenderPipeline_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mUnityRenderPipeline_0), (void*)value);
	}

	inline static int32_t get_offset_of_mUnityXRBridge_1() { return static_cast<int32_t>(offsetof(OpenSourceUnityRuntimeCompiledFacade_tE074BC03139BA8588825A6DE47CB2C59AFFFC38F, ___mUnityXRBridge_1)); }
	inline RuntimeObject* get_mUnityXRBridge_1() const { return ___mUnityXRBridge_1; }
	inline RuntimeObject** get_address_of_mUnityXRBridge_1() { return &___mUnityXRBridge_1; }
	inline void set_mUnityXRBridge_1(RuntimeObject* value)
	{
		___mUnityXRBridge_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mUnityXRBridge_1), (void*)value);
	}
};


// Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/UnityRenderPipeline
struct UnityRenderPipeline_tD91000EBC3823B7CC5DC4CB6715BE0D4385A9D92  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.Camera[]> Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/UnityRenderPipeline::BeginFrameRendering
	Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * ___BeginFrameRendering_0;
	// System.Action`1<UnityEngine.Camera> Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/UnityRenderPipeline::BeginCameraRendering
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * ___BeginCameraRendering_1;

public:
	inline static int32_t get_offset_of_BeginFrameRendering_0() { return static_cast<int32_t>(offsetof(UnityRenderPipeline_tD91000EBC3823B7CC5DC4CB6715BE0D4385A9D92, ___BeginFrameRendering_0)); }
	inline Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * get_BeginFrameRendering_0() const { return ___BeginFrameRendering_0; }
	inline Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 ** get_address_of_BeginFrameRendering_0() { return &___BeginFrameRendering_0; }
	inline void set_BeginFrameRendering_0(Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * value)
	{
		___BeginFrameRendering_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginFrameRendering_0), (void*)value);
	}

	inline static int32_t get_offset_of_BeginCameraRendering_1() { return static_cast<int32_t>(offsetof(UnityRenderPipeline_tD91000EBC3823B7CC5DC4CB6715BE0D4385A9D92, ___BeginCameraRendering_1)); }
	inline Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * get_BeginCameraRendering_1() const { return ___BeginCameraRendering_1; }
	inline Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B ** get_address_of_BeginCameraRendering_1() { return &___BeginCameraRendering_1; }
	inline void set_BeginCameraRendering_1(Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * value)
	{
		___BeginCameraRendering_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginCameraRendering_1), (void*)value);
	}
};


// Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/UnityXRBridge
struct UnityXRBridge_tA49745BF2B04A3DA05BC13E762241A6D60E502B3  : public RuntimeObject
{
public:
	// System.Action Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/UnityXRBridge::OnTrackingOriginUpdated
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnTrackingOriginUpdated_0;

public:
	inline static int32_t get_offset_of_OnTrackingOriginUpdated_0() { return static_cast<int32_t>(offsetof(UnityXRBridge_tA49745BF2B04A3DA05BC13E762241A6D60E502B3, ___OnTrackingOriginUpdated_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnTrackingOriginUpdated_0() const { return ___OnTrackingOriginUpdated_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnTrackingOriginUpdated_0() { return &___OnTrackingOriginUpdated_0; }
	inline void set_OnTrackingOriginUpdated_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnTrackingOriginUpdated_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTrackingOriginUpdated_0), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>
struct Enumerator_t8CF1E0D2E6FF0DFC6B411C11EF4D001E8A74111A 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t8CF1E0D2E6FF0DFC6B411C11EF4D001E8A74111A, ___list_0)); }
	inline List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * get_list_0() const { return ___list_0; }
	inline List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t8CF1E0D2E6FF0DFC6B411C11EF4D001E8A74111A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t8CF1E0D2E6FF0DFC6B411C11EF4D001E8A74111A, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t8CF1E0D2E6FF0DFC6B411C11EF4D001E8A74111A, ___current_3)); }
	inline ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * get_current_3() const { return ___current_3; }
	inline ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>
struct Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t56455D217921470E52E7D33A1794256E31084DD8 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828, ___list_0)); }
	inline List_1_t56455D217921470E52E7D33A1794256E31084DD8 * get_list_0() const { return ___list_0; }
	inline List_1_t56455D217921470E52E7D33A1794256E31084DD8 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t56455D217921470E52E7D33A1794256E31084DD8 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828, ___current_3)); }
	inline XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * get_current_3() const { return ___current_3; }
	inline XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.XR.ARFoundation.ARAnchor>
struct KeyValuePair_2_t67ABA7BE4B27A94A2F1BB58A9315A42F6898EC72 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t67ABA7BE4B27A94A2F1BB58A9315A42F6898EC72, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t67ABA7BE4B27A94A2F1BB58A9315A42F6898EC72, ___value_1)); }
	inline ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * get_value_1() const { return ___value_1; }
	inline ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemWithProvider_3_tD91EB2F57F19DA2CDB9A5E0011978CA1EA351BA2  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_tD91EB2F57F19DA2CDB9A5E0011978CA1EA351BA2, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_tD91EB2F57F19DA2CDB9A5E0011978CA1EA351BA2, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct SubsystemWithProvider_3_tA938665692EBC0CA746A276F8413E462E8930FD4  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_tA938665692EBC0CA746A276F8413E462E8930FD4, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRCameraSubsystemDescriptor_t1F8A45C69031E2981B1863518C43793D26E2C5E5 * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_tA938665692EBC0CA746A276F8413E462E8930FD4, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t55916B0D2766C320DCA36A0C870BA2FD80F8B6D1 * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs
struct ARAnchorsChangedEventArgs_tD1D6CD5187F2B16BADA979200B333341991FAAC6 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor> UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs::<added>k__BackingField
	List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * ___U3CaddedU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor> UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs::<updated>k__BackingField
	List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * ___U3CupdatedU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor> UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs::<removed>k__BackingField
	List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * ___U3CremovedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CaddedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARAnchorsChangedEventArgs_tD1D6CD5187F2B16BADA979200B333341991FAAC6, ___U3CaddedU3Ek__BackingField_0)); }
	inline List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * get_U3CaddedU3Ek__BackingField_0() const { return ___U3CaddedU3Ek__BackingField_0; }
	inline List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 ** get_address_of_U3CaddedU3Ek__BackingField_0() { return &___U3CaddedU3Ek__BackingField_0; }
	inline void set_U3CaddedU3Ek__BackingField_0(List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * value)
	{
		___U3CaddedU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaddedU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CupdatedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ARAnchorsChangedEventArgs_tD1D6CD5187F2B16BADA979200B333341991FAAC6, ___U3CupdatedU3Ek__BackingField_1)); }
	inline List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * get_U3CupdatedU3Ek__BackingField_1() const { return ___U3CupdatedU3Ek__BackingField_1; }
	inline List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 ** get_address_of_U3CupdatedU3Ek__BackingField_1() { return &___U3CupdatedU3Ek__BackingField_1; }
	inline void set_U3CupdatedU3Ek__BackingField_1(List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * value)
	{
		___U3CupdatedU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CupdatedU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CremovedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ARAnchorsChangedEventArgs_tD1D6CD5187F2B16BADA979200B333341991FAAC6, ___U3CremovedU3Ek__BackingField_2)); }
	inline List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * get_U3CremovedU3Ek__BackingField_2() const { return ___U3CremovedU3Ek__BackingField_2; }
	inline List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 ** get_address_of_U3CremovedU3Ek__BackingField_2() { return &___U3CremovedU3Ek__BackingField_2; }
	inline void set_U3CremovedU3Ek__BackingField_2(List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * value)
	{
		___U3CremovedU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CremovedU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs
struct ARAnchorsChangedEventArgs_tD1D6CD5187F2B16BADA979200B333341991FAAC6_marshaled_pinvoke
{
	List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * ___U3CaddedU3Ek__BackingField_0;
	List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * ___U3CupdatedU3Ek__BackingField_1;
	List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * ___U3CremovedU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs
struct ARAnchorsChangedEventArgs_tD1D6CD5187F2B16BADA979200B333341991FAAC6_marshaled_com
{
	List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * ___U3CaddedU3Ek__BackingField_0;
	List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * ___U3CupdatedU3Ek__BackingField_1;
	List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * ___U3CremovedU3Ek__BackingField_2;
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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

// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// UnityEngine.Keyframe
struct Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
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


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.Rendering.ShaderTagId
struct ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 
{
public:
	// System.Int32 UnityEngine.Rendering.ShaderTagId::m_Id
	int32_t ___m_Id_1;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795, ___m_Id_1)); }
	inline int32_t get_m_Id_1() const { return ___m_Id_1; }
	inline int32_t* get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(int32_t value)
	{
		___m_Id_1 = value;
	}
};

struct ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795_StaticFields
{
public:
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.ShaderTagId::none
	ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  ___none_0;

public:
	inline static int32_t get_offset_of_none_0() { return static_cast<int32_t>(offsetof(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795_StaticFields, ___none_0)); }
	inline ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  get_none_0() const { return ___none_0; }
	inline ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 * get_address_of_none_0() { return &___none_0; }
	inline void set_none_0(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  value)
	{
		___none_0 = value;
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


// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;

public:
	inline static int32_t get_offset_of_m_SubId1_2() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId1_2)); }
	inline uint64_t get_m_SubId1_2() const { return ___m_SubId1_2; }
	inline uint64_t* get_address_of_m_SubId1_2() { return &___m_SubId1_2; }
	inline void set_m_SubId1_2(uint64_t value)
	{
		___m_SubId1_2 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_3() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId2_3)); }
	inline uint64_t get_m_SubId2_3() const { return ___m_SubId2_3; }
	inline uint64_t* get_address_of_m_SubId2_3() { return &___m_SubId2_3; }
	inline void set_m_SubId2_3(uint64_t value)
	{
		___m_SubId2_3 = value;
	}
};

struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___s_InvalidId_1;

public:
	inline static int32_t get_offset_of_s_TrackableIdRegex_0() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_TrackableIdRegex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_s_TrackableIdRegex_0() const { return ___s_TrackableIdRegex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_s_TrackableIdRegex_0() { return &___s_TrackableIdRegex_0; }
	inline void set_s_TrackableIdRegex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___s_TrackableIdRegex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackableIdRegex_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_InvalidId_1() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_InvalidId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_s_InvalidId_1() const { return ___s_InvalidId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_s_InvalidId_1() { return &___s_InvalidId_1; }
	inline void set_s_InvalidId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___s_InvalidId_1 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
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


// UnityEngine.Vector2Int
struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
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


// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.XR.ARFoundation.ARAnchor>
struct Enumerator_t485D25BDD649E78063270BA71089882606CDCC80 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t67ABA7BE4B27A94A2F1BB58A9315A42F6898EC72  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t485D25BDD649E78063270BA71089882606CDCC80, ___dictionary_0)); }
	inline Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t485D25BDD649E78063270BA71089882606CDCC80, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t485D25BDD649E78063270BA71089882606CDCC80, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t485D25BDD649E78063270BA71089882606CDCC80, ___current_3)); }
	inline KeyValuePair_2_t67ABA7BE4B27A94A2F1BB58A9315A42F6898EC72  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t67ABA7BE4B27A94A2F1BB58A9315A42F6898EC72 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t67ABA7BE4B27A94A2F1BB58A9315A42F6898EC72  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t485D25BDD649E78063270BA71089882606CDCC80, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct TrackingSubsystem_4_t5C7E2B8B7A9943DF8B9FF5B46FB5AFA71E9826F1  : public SubsystemWithProvider_3_tD91EB2F57F19DA2CDB9A5E0011978CA1EA351BA2
{
public:

public:
};


// UnityEngine.XR.ARFoundation.ARSessionState
struct ARSessionState_tC5054273C7CB11C5C40D36745DDD2AF056ED1F25 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.ARSessionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARSessionState_tC5054273C7CB11C5C40D36745DDD2AF056ED1F25, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.XR.ARFoundation.CameraFacingDirection
struct CameraFacingDirection_tBD399103FCCBB7D35472AF597BA12FC26CB9F0A5 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.CameraFacingDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraFacingDirection_tBD399103FCCBB7D35472AF597BA12FC26CB9F0A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.CameraFocusMode
struct CameraFocusMode_t573CBB96E832D97A59EE6B5EBF79568A5C83042A 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.CameraFocusMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraFocusMode_t573CBB96E832D97A59EE6B5EBF79568A5C83042A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.CameraMode
struct CameraMode_tF9E4AC1F6D05A67F31EBDBC565595F21E0C39CFA 
{
public:
	// System.Int32 Vuforia.CameraMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraMode_tF9E4AC1F6D05A67F31EBDBC565595F21E0C39CFA, ___value___2)); }
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

// Vuforia.DriverPixelFormat
struct DriverPixelFormat_t1AACE90C17DA9DF6AC17F74710C676B257C28FE4 
{
public:
	// System.Int32 Vuforia.DriverPixelFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DriverPixelFormat_t1AACE90C17DA9DF6AC17F74710C676B257C28FE4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// Vuforia.FocusMode
struct FocusMode_t6FFECC3CC1B559C77ED7E58E5D8E4A860FD410C6 
{
public:
	// System.Int32 Vuforia.FocusMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FocusMode_t6FFECC3CC1B559C77ED7E58E5D8E4A860FD410C6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9, ___m_SourceStyle_1)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com* ___m_SourceStyle_1;
};

// Vuforia.InstanceIdType
struct InstanceIdType_t06C7820219EB8F3B808C53E7E2D5314CFA391038 
{
public:
	// System.Int32 Vuforia.InstanceIdType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InstanceIdType_t06C7820219EB8F3B808C53E7E2D5314CFA391038, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SubsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_SubsystemDescriptor_1)); }
	inline RuntimeObject* get_m_SubsystemDescriptor_1() const { return ___m_SubsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_SubsystemDescriptor_1() { return &___m_SubsystemDescriptor_1; }
	inline void set_m_SubsystemDescriptor_1(RuntimeObject* value)
	{
		___m_SubsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};

// UnityEngine.XR.ARFoundation.LightEstimation
struct LightEstimation_tD66BC916A1BD1A48133EAA6F2DFD3F2F45909B93 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.LightEstimation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightEstimation_tD66BC916A1BD1A48133EAA6F2DFD3F2F45909B93, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.LightEstimationMode
struct LightEstimationMode_tE07D0ADA96C21197E44E8E906DF0FCECB7DAEC56 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.LightEstimationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightEstimationMode_tE07D0ADA96C21197E44E8E906DF0FCECB7DAEC56, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.Internal.Utility.LogLevel
struct LogLevel_t0153A852474B733A97D327623F111A5C2916BEB1 
{
public:
	// System.Int32 Vuforia.Internal.Utility.LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogLevel_t0153A852474B733A97D327623F111A5C2916BEB1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.NotTrackingReason
struct NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.NotTrackingReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.PrimitiveType
struct PrimitiveType_t0E20B7B2F4ABBD14BAE02F0444EE003C6479E93E 
{
public:
	// System.Int32 UnityEngine.PrimitiveType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrimitiveType_t0E20B7B2F4ABBD14BAE02F0444EE003C6479E93E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// UnityEngine.Rendering.ScriptableRenderContext
struct ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D 
{
public:
	// System.IntPtr UnityEngine.Rendering.ScriptableRenderContext::m_Ptr
	intptr_t ___m_Ptr_1;

public:
	inline static int32_t get_offset_of_m_Ptr_1() { return static_cast<int32_t>(offsetof(ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D, ___m_Ptr_1)); }
	inline intptr_t get_m_Ptr_1() const { return ___m_Ptr_1; }
	inline intptr_t* get_address_of_m_Ptr_1() { return &___m_Ptr_1; }
	inline void set_m_Ptr_1(intptr_t value)
	{
		___m_Ptr_1 = value;
	}
};

struct ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D_StaticFields
{
public:
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.ScriptableRenderContext::kRenderTypeTag
	ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  ___kRenderTypeTag_0;

public:
	inline static int32_t get_offset_of_kRenderTypeTag_0() { return static_cast<int32_t>(offsetof(ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D_StaticFields, ___kRenderTypeTag_0)); }
	inline ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  get_kRenderTypeTag_0() const { return ___kRenderTypeTag_0; }
	inline ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 * get_address_of_kRenderTypeTag_0() { return &___kRenderTypeTag_0; }
	inline void set_kRenderTypeTag_0(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  value)
	{
		___kRenderTypeTag_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.SessionAvailability
struct SessionAvailability_tF5E98733E00C91772417EDEF3B3A6FA1DF653FCD 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionAvailability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionAvailability_tF5E98733E00C91772417EDEF3B3A6FA1DF653FCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.Status
struct Status_t507773DC9329777DFF23BBE12880E1A5331F8826 
{
public:
	// System.Int32 Vuforia.Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_t507773DC9329777DFF23BBE12880E1A5331F8826, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.StatusInfo
struct StatusInfo_t2D3913E705BD464CB7101343C8E44C3140AAEBFD 
{
public:
	// System.Int32 Vuforia.StatusInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StatusInfo_t2D3913E705BD464CB7101343C8E44C3140AAEBFD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextAnchor
struct TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.TextureDimension
struct TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC 
{
public:
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableType
struct TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackableType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARFoundation.TrackingMode
struct TrackingMode_t494215013DD008CD55735FEBB426C0F188B72646 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.TrackingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingMode_t494215013DD008CD55735FEBB426C0F188B72646, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuforiaInitError
struct VuforiaInitError_t8EDBA61A511F9B1518C1EA806C4769BA8E788774 
{
public:
	// System.Int32 Vuforia.VuforiaInitError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VuforiaInitError_t8EDBA61A511F9B1518C1EA806C4769BA8E788774, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.WorldCenterMode
struct WorldCenterMode_t849D0D9F3EBCAE808E7E9757919CE34031A15587 
{
public:
	// System.Int32 Vuforia.WorldCenterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WorldCenterMode_t849D0D9F3EBCAE808E7E9757919CE34031A15587, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraConfiguration
struct XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A 
{
public:
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Resolution
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___m_Resolution_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Framerate
	int32_t ___m_Framerate_1;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_NativeConfigurationHandle
	intptr_t ___m_NativeConfigurationHandle_2;

public:
	inline static int32_t get_offset_of_m_Resolution_0() { return static_cast<int32_t>(offsetof(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A, ___m_Resolution_0)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_m_Resolution_0() const { return ___m_Resolution_0; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_m_Resolution_0() { return &___m_Resolution_0; }
	inline void set_m_Resolution_0(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___m_Resolution_0 = value;
	}

	inline static int32_t get_offset_of_m_Framerate_1() { return static_cast<int32_t>(offsetof(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A, ___m_Framerate_1)); }
	inline int32_t get_m_Framerate_1() const { return ___m_Framerate_1; }
	inline int32_t* get_address_of_m_Framerate_1() { return &___m_Framerate_1; }
	inline void set_m_Framerate_1(int32_t value)
	{
		___m_Framerate_1 = value;
	}

	inline static int32_t get_offset_of_m_NativeConfigurationHandle_2() { return static_cast<int32_t>(offsetof(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A, ___m_NativeConfigurationHandle_2)); }
	inline intptr_t get_m_NativeConfigurationHandle_2() const { return ___m_NativeConfigurationHandle_2; }
	inline intptr_t* get_address_of_m_NativeConfigurationHandle_2() { return &___m_NativeConfigurationHandle_2; }
	inline void set_m_NativeConfigurationHandle_2(intptr_t value)
	{
		___m_NativeConfigurationHandle_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraIntrinsics
struct XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD 
{
public:
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRCameraIntrinsics::m_FocalLength
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_FocalLength_0;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRCameraIntrinsics::m_PrincipalPoint
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PrincipalPoint_1;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCameraIntrinsics::m_Resolution
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___m_Resolution_2;

public:
	inline static int32_t get_offset_of_m_FocalLength_0() { return static_cast<int32_t>(offsetof(XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD, ___m_FocalLength_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_FocalLength_0() const { return ___m_FocalLength_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_FocalLength_0() { return &___m_FocalLength_0; }
	inline void set_m_FocalLength_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_FocalLength_0 = value;
	}

	inline static int32_t get_offset_of_m_PrincipalPoint_1() { return static_cast<int32_t>(offsetof(XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD, ___m_PrincipalPoint_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PrincipalPoint_1() const { return ___m_PrincipalPoint_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PrincipalPoint_1() { return &___m_PrincipalPoint_1; }
	inline void set_m_PrincipalPoint_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PrincipalPoint_1 = value;
	}

	inline static int32_t get_offset_of_m_Resolution_2() { return static_cast<int32_t>(offsetof(XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD, ___m_Resolution_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_m_Resolution_2() const { return ___m_Resolution_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_m_Resolution_2() { return &___m_Resolution_2; }
	inline void set_m_Resolution_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___m_Resolution_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9  : public SubsystemWithProvider_3_tA938665692EBC0CA746A276F8413E462E8930FD4
{
public:

public:
};


// Vuforia.DataSetTrackableBehaviour/TargetMotionHint
struct TargetMotionHint_t29982A087ED2A6ADAD5F8243A2AC3D7821B3905B 
{
public:
	// System.Int32 Vuforia.DataSetTrackableBehaviour/TargetMotionHint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TargetMotionHint_t29982A087ED2A6ADAD5F8243A2AC3D7821B3905B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DefaultObserverEventHandler/TrackingStatusFilter
struct TrackingStatusFilter_t69CE9B9DB5718245DA15E7180660784375EC02B2 
{
public:
	// System.Int32 DefaultObserverEventHandler/TrackingStatusFilter::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingStatusFilter_t69CE9B9DB5718245DA15E7180660784375EC02B2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCpuImage/Format
struct Format_tC8D4CDE6941B0CAE3E1C07EC826E7E253846168A 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Format::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Format_tC8D4CDE6941B0CAE3E1C07EC826E7E253846168A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct IntegratedSubsystem_1_tD5C4AF38726B9433CFC3CA0F889D8C8C2535AEFE  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C 
{
public:
	// T System.Nullable`1::value
	XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C, ___value_0)); }
	inline XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  get_value_0() const { return ___value_0; }
	inline XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Vuforia.DriverCameraMode
#pragma pack(push, tp, 1)
struct DriverCameraMode_tFE34FC60BECEF81615274E556D3678EB2E1220DF 
{
public:
	// System.Int32 Vuforia.DriverCameraMode::Width
	int32_t ___Width_0;
	// System.Int32 Vuforia.DriverCameraMode::Height
	int32_t ___Height_1;
	// System.Int32 Vuforia.DriverCameraMode::Fps
	int32_t ___Fps_2;
	// Vuforia.DriverPixelFormat Vuforia.DriverCameraMode::Format
	int32_t ___Format_3;

public:
	inline static int32_t get_offset_of_Width_0() { return static_cast<int32_t>(offsetof(DriverCameraMode_tFE34FC60BECEF81615274E556D3678EB2E1220DF, ___Width_0)); }
	inline int32_t get_Width_0() const { return ___Width_0; }
	inline int32_t* get_address_of_Width_0() { return &___Width_0; }
	inline void set_Width_0(int32_t value)
	{
		___Width_0 = value;
	}

	inline static int32_t get_offset_of_Height_1() { return static_cast<int32_t>(offsetof(DriverCameraMode_tFE34FC60BECEF81615274E556D3678EB2E1220DF, ___Height_1)); }
	inline int32_t get_Height_1() const { return ___Height_1; }
	inline int32_t* get_address_of_Height_1() { return &___Height_1; }
	inline void set_Height_1(int32_t value)
	{
		___Height_1 = value;
	}

	inline static int32_t get_offset_of_Fps_2() { return static_cast<int32_t>(offsetof(DriverCameraMode_tFE34FC60BECEF81615274E556D3678EB2E1220DF, ___Fps_2)); }
	inline int32_t get_Fps_2() const { return ___Fps_2; }
	inline int32_t* get_address_of_Fps_2() { return &___Fps_2; }
	inline void set_Fps_2(int32_t value)
	{
		___Fps_2 = value;
	}

	inline static int32_t get_offset_of_Format_3() { return static_cast<int32_t>(offsetof(DriverCameraMode_tFE34FC60BECEF81615274E556D3678EB2E1220DF, ___Format_3)); }
	inline int32_t get_Format_3() const { return ___Format_3; }
	inline int32_t* get_address_of_Format_3() { return &___Format_3; }
	inline void set_Format_3(int32_t value)
	{
		___Format_3 = value;
	}
};
#pragma pack(pop, tp)


// UnityEngine.Font
struct Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_tBF11A511EBD8D237A1C5885D460B42A45DDBB2DB * ___m_FontTextureRebuildCallback_5;

public:
	inline static int32_t get_offset_of_m_FontTextureRebuildCallback_5() { return static_cast<int32_t>(offsetof(Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9, ___m_FontTextureRebuildCallback_5)); }
	inline FontTextureRebuildCallback_tBF11A511EBD8D237A1C5885D460B42A45DDBB2DB * get_m_FontTextureRebuildCallback_5() const { return ___m_FontTextureRebuildCallback_5; }
	inline FontTextureRebuildCallback_tBF11A511EBD8D237A1C5885D460B42A45DDBB2DB ** get_address_of_m_FontTextureRebuildCallback_5() { return &___m_FontTextureRebuildCallback_5; }
	inline void set_m_FontTextureRebuildCallback_5(FontTextureRebuildCallback_tBF11A511EBD8D237A1C5885D460B42A45DDBB2DB * value)
	{
		___m_FontTextureRebuildCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontTextureRebuildCallback_5), (void*)value);
	}
};

struct Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9_StaticFields
{
public:
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_tC07E78969BFFC97261F80F4C08915A046DFDD9C7 * ___textureRebuilt_4;

public:
	inline static int32_t get_offset_of_textureRebuilt_4() { return static_cast<int32_t>(offsetof(Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9_StaticFields, ___textureRebuilt_4)); }
	inline Action_1_tC07E78969BFFC97261F80F4C08915A046DFDD9C7 * get_textureRebuilt_4() const { return ___textureRebuilt_4; }
	inline Action_1_tC07E78969BFFC97261F80F4C08915A046DFDD9C7 ** get_address_of_textureRebuilt_4() { return &___textureRebuilt_4; }
	inline void set_textureRebuilt_4(Action_1_tC07E78969BFFC97261F80F4C08915A046DFDD9C7 * value)
	{
		___textureRebuilt_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textureRebuilt_4), (void*)value);
	}
};


// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Normal_1)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normal_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Hover_2)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hover_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Active_3)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Active_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Focused_4)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Focused_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnNormal_5)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnNormal_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnHover_6)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHover_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnActive_7)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnActive_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnFocused_8)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFocused_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Border_9)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Border_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Padding_10)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Margin_11)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Margin_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Overflow_12)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Overflow_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Name_13() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Name_13)); }
	inline String_t* get_m_Name_13() const { return ___m_Name_13; }
	inline String_t** get_address_of_m_Name_13() { return &___m_Name_13; }
	inline void set_m_Name_13(String_t* value)
	{
		___m_Name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_13), (void*)value);
	}
};

struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___s_None_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_None_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Vuforia.TargetStatus
struct TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1 
{
public:
	// Vuforia.Status Vuforia.TargetStatus::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_0;
	// Vuforia.StatusInfo Vuforia.TargetStatus::<StatusInfo>k__BackingField
	int32_t ___U3CStatusInfoU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CStatusU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1, ___U3CStatusU3Ek__BackingField_0)); }
	inline int32_t get_U3CStatusU3Ek__BackingField_0() const { return ___U3CStatusU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CStatusU3Ek__BackingField_0() { return &___U3CStatusU3Ek__BackingField_0; }
	inline void set_U3CStatusU3Ek__BackingField_0(int32_t value)
	{
		___U3CStatusU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CStatusInfoU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1, ___U3CStatusInfoU3Ek__BackingField_1)); }
	inline int32_t get_U3CStatusInfoU3Ek__BackingField_1() const { return ___U3CStatusInfoU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CStatusInfoU3Ek__BackingField_1() { return &___U3CStatusInfoU3Ek__BackingField_1; }
	inline void set_U3CStatusInfoU3Ek__BackingField_1(int32_t value)
	{
		___U3CStatusInfoU3Ek__BackingField_1 = value;
	}
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// Vuforia.VuforiaApplication
struct VuforiaApplication_tDC756FC5605334FDF0FF6F95CC0FEE4E134D64F1  : public RuntimeObject
{
public:
	// System.Action Vuforia.VuforiaApplication::mOnBeforeVuforiaInitialized
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___mOnBeforeVuforiaInitialized_0;
	// System.Action`1<Vuforia.VuforiaInitError> Vuforia.VuforiaApplication::mOnVuforiaInitialized
	Action_1_tAA1D1EEFC680CD9A5C6DDD77BD612C0BBD43C306 * ___mOnVuforiaInitialized_1;
	// System.Action Vuforia.VuforiaApplication::mOnVuforiaStarted
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___mOnVuforiaStarted_2;
	// Vuforia.VuforiaInitError Vuforia.VuforiaApplication::mInitError
	int32_t ___mInitError_3;
	// System.Action`1<System.Boolean> Vuforia.VuforiaApplication::OnVuforiaPaused
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___OnVuforiaPaused_5;
	// System.Action Vuforia.VuforiaApplication::OnVuforiaStopped
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnVuforiaStopped_6;
	// System.Action Vuforia.VuforiaApplication::OnVuforiaDeinitialized
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnVuforiaDeinitialized_7;

public:
	inline static int32_t get_offset_of_mOnBeforeVuforiaInitialized_0() { return static_cast<int32_t>(offsetof(VuforiaApplication_tDC756FC5605334FDF0FF6F95CC0FEE4E134D64F1, ___mOnBeforeVuforiaInitialized_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_mOnBeforeVuforiaInitialized_0() const { return ___mOnBeforeVuforiaInitialized_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_mOnBeforeVuforiaInitialized_0() { return &___mOnBeforeVuforiaInitialized_0; }
	inline void set_mOnBeforeVuforiaInitialized_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___mOnBeforeVuforiaInitialized_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOnBeforeVuforiaInitialized_0), (void*)value);
	}

	inline static int32_t get_offset_of_mOnVuforiaInitialized_1() { return static_cast<int32_t>(offsetof(VuforiaApplication_tDC756FC5605334FDF0FF6F95CC0FEE4E134D64F1, ___mOnVuforiaInitialized_1)); }
	inline Action_1_tAA1D1EEFC680CD9A5C6DDD77BD612C0BBD43C306 * get_mOnVuforiaInitialized_1() const { return ___mOnVuforiaInitialized_1; }
	inline Action_1_tAA1D1EEFC680CD9A5C6DDD77BD612C0BBD43C306 ** get_address_of_mOnVuforiaInitialized_1() { return &___mOnVuforiaInitialized_1; }
	inline void set_mOnVuforiaInitialized_1(Action_1_tAA1D1EEFC680CD9A5C6DDD77BD612C0BBD43C306 * value)
	{
		___mOnVuforiaInitialized_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOnVuforiaInitialized_1), (void*)value);
	}

	inline static int32_t get_offset_of_mOnVuforiaStarted_2() { return static_cast<int32_t>(offsetof(VuforiaApplication_tDC756FC5605334FDF0FF6F95CC0FEE4E134D64F1, ___mOnVuforiaStarted_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_mOnVuforiaStarted_2() const { return ___mOnVuforiaStarted_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_mOnVuforiaStarted_2() { return &___mOnVuforiaStarted_2; }
	inline void set_mOnVuforiaStarted_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___mOnVuforiaStarted_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOnVuforiaStarted_2), (void*)value);
	}

	inline static int32_t get_offset_of_mInitError_3() { return static_cast<int32_t>(offsetof(VuforiaApplication_tDC756FC5605334FDF0FF6F95CC0FEE4E134D64F1, ___mInitError_3)); }
	inline int32_t get_mInitError_3() const { return ___mInitError_3; }
	inline int32_t* get_address_of_mInitError_3() { return &___mInitError_3; }
	inline void set_mInitError_3(int32_t value)
	{
		___mInitError_3 = value;
	}

	inline static int32_t get_offset_of_OnVuforiaPaused_5() { return static_cast<int32_t>(offsetof(VuforiaApplication_tDC756FC5605334FDF0FF6F95CC0FEE4E134D64F1, ___OnVuforiaPaused_5)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_OnVuforiaPaused_5() const { return ___OnVuforiaPaused_5; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_OnVuforiaPaused_5() { return &___OnVuforiaPaused_5; }
	inline void set_OnVuforiaPaused_5(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___OnVuforiaPaused_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVuforiaPaused_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnVuforiaStopped_6() { return static_cast<int32_t>(offsetof(VuforiaApplication_tDC756FC5605334FDF0FF6F95CC0FEE4E134D64F1, ___OnVuforiaStopped_6)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnVuforiaStopped_6() const { return ___OnVuforiaStopped_6; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnVuforiaStopped_6() { return &___OnVuforiaStopped_6; }
	inline void set_OnVuforiaStopped_6(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnVuforiaStopped_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVuforiaStopped_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnVuforiaDeinitialized_7() { return static_cast<int32_t>(offsetof(VuforiaApplication_tDC756FC5605334FDF0FF6F95CC0FEE4E134D64F1, ___OnVuforiaDeinitialized_7)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnVuforiaDeinitialized_7() const { return ___OnVuforiaDeinitialized_7; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnVuforiaDeinitialized_7() { return &___OnVuforiaDeinitialized_7; }
	inline void set_OnVuforiaDeinitialized_7(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnVuforiaDeinitialized_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVuforiaDeinitialized_7), (void*)value);
	}
};

struct VuforiaApplication_tDC756FC5605334FDF0FF6F95CC0FEE4E134D64F1_StaticFields
{
public:
	// Vuforia.VuforiaApplication Vuforia.VuforiaApplication::sInstance
	VuforiaApplication_tDC756FC5605334FDF0FF6F95CC0FEE4E134D64F1 * ___sInstance_4;

public:
	inline static int32_t get_offset_of_sInstance_4() { return static_cast<int32_t>(offsetof(VuforiaApplication_tDC756FC5605334FDF0FF6F95CC0FEE4E134D64F1_StaticFields, ___sInstance_4)); }
	inline VuforiaApplication_tDC756FC5605334FDF0FF6F95CC0FEE4E134D64F1 * get_sInstance_4() const { return ___sInstance_4; }
	inline VuforiaApplication_tDC756FC5605334FDF0FF6F95CC0FEE4E134D64F1 ** get_address_of_sInstance_4() { return &___sInstance_4; }
	inline void set_sInstance_4(VuforiaApplication_tDC756FC5605334FDF0FF6F95CC0FEE4E134D64F1 * value)
	{
		___sInstance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sInstance_4), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRAnchor
struct XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::m_Id
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::m_SessionId
	Guid_t  ___m_SessionId_5;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_Id_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_5() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_SessionId_5)); }
	inline Guid_t  get_m_SessionId_5() const { return ___m_SessionId_5; }
	inline Guid_t * get_address_of_m_SessionId_5() { return &___m_SessionId_5; }
	inline void set_m_SessionId_5(Guid_t  value)
	{
		___m_SessionId_5 = value;
	}
};

struct XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::s_Default
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_StaticFields, ___s_Default_0)); }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  get_s_Default_0() const { return ___s_Default_0; }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7  : public TrackingSubsystem_4_t5C7E2B8B7A9943DF8B9FF5B46FB5AFA71E9826F1
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::m_NativeHandle
	int32_t ___m_NativeHandle_0;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Api UnityEngine.XR.ARSubsystems.XRCpuImage::m_Api
	Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * ___m_Api_1;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage::<dimensions>k__BackingField
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___U3CdimensionsU3Ek__BackingField_3;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage::<planeCount>k__BackingField
	int32_t ___U3CplaneCountU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Format UnityEngine.XR.ARSubsystems.XRCpuImage::<format>k__BackingField
	int32_t ___U3CformatU3Ek__BackingField_5;
	// System.Double UnityEngine.XR.ARSubsystems.XRCpuImage::<timestamp>k__BackingField
	double ___U3CtimestampU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_NativeHandle_0() { return static_cast<int32_t>(offsetof(XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE, ___m_NativeHandle_0)); }
	inline int32_t get_m_NativeHandle_0() const { return ___m_NativeHandle_0; }
	inline int32_t* get_address_of_m_NativeHandle_0() { return &___m_NativeHandle_0; }
	inline void set_m_NativeHandle_0(int32_t value)
	{
		___m_NativeHandle_0 = value;
	}

	inline static int32_t get_offset_of_m_Api_1() { return static_cast<int32_t>(offsetof(XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE, ___m_Api_1)); }
	inline Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * get_m_Api_1() const { return ___m_Api_1; }
	inline Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E ** get_address_of_m_Api_1() { return &___m_Api_1; }
	inline void set_m_Api_1(Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * value)
	{
		___m_Api_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Api_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdimensionsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE, ___U3CdimensionsU3Ek__BackingField_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_U3CdimensionsU3Ek__BackingField_3() const { return ___U3CdimensionsU3Ek__BackingField_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_U3CdimensionsU3Ek__BackingField_3() { return &___U3CdimensionsU3Ek__BackingField_3; }
	inline void set_U3CdimensionsU3Ek__BackingField_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___U3CdimensionsU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CplaneCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE, ___U3CplaneCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CplaneCountU3Ek__BackingField_4() const { return ___U3CplaneCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CplaneCountU3Ek__BackingField_4() { return &___U3CplaneCountU3Ek__BackingField_4; }
	inline void set_U3CplaneCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CplaneCountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CformatU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE, ___U3CformatU3Ek__BackingField_5)); }
	inline int32_t get_U3CformatU3Ek__BackingField_5() const { return ___U3CformatU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CformatU3Ek__BackingField_5() { return &___U3CformatU3Ek__BackingField_5; }
	inline void set_U3CformatU3Ek__BackingField_5(int32_t value)
	{
		___U3CformatU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CtimestampU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE, ___U3CtimestampU3Ek__BackingField_6)); }
	inline double get_U3CtimestampU3Ek__BackingField_6() const { return ___U3CtimestampU3Ek__BackingField_6; }
	inline double* get_address_of_U3CtimestampU3Ek__BackingField_6() { return &___U3CtimestampU3Ek__BackingField_6; }
	inline void set_U3CtimestampU3Ek__BackingField_6(double value)
	{
		___U3CtimestampU3Ek__BackingField_6 = value;
	}
};

struct XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate UnityEngine.XR.ARSubsystems.XRCpuImage::s_OnAsyncConversionCompleteDelegate
	OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD * ___s_OnAsyncConversionCompleteDelegate_2;

public:
	inline static int32_t get_offset_of_s_OnAsyncConversionCompleteDelegate_2() { return static_cast<int32_t>(offsetof(XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE_StaticFields, ___s_OnAsyncConversionCompleteDelegate_2)); }
	inline OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD * get_s_OnAsyncConversionCompleteDelegate_2() const { return ___s_OnAsyncConversionCompleteDelegate_2; }
	inline OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD ** get_address_of_s_OnAsyncConversionCompleteDelegate_2() { return &___s_OnAsyncConversionCompleteDelegate_2; }
	inline void set_s_OnAsyncConversionCompleteDelegate_2(OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD * value)
	{
		___s_OnAsyncConversionCompleteDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_OnAsyncConversionCompleteDelegate_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE_marshaled_pinvoke
{
	int32_t ___m_NativeHandle_0;
	Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * ___m_Api_1;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___U3CdimensionsU3Ek__BackingField_3;
	int32_t ___U3CplaneCountU3Ek__BackingField_4;
	int32_t ___U3CformatU3Ek__BackingField_5;
	double ___U3CtimestampU3Ek__BackingField_6;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage
struct XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE_marshaled_com
{
	int32_t ___m_NativeHandle_0;
	Api_t7C92F00C6416A2C636A44AAC833C3773C567DC3E * ___m_Api_1;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___U3CdimensionsU3Ek__BackingField_3;
	int32_t ___U3CplaneCountU3Ek__BackingField_4;
	int32_t ___U3CformatU3Ek__BackingField_5;
	double ___U3CtimestampU3Ek__BackingField_6;
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_HitType_4() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_HitType_4)); }
	inline int32_t get_m_HitType_4() const { return ___m_HitType_4; }
	inline int32_t* get_address_of_m_HitType_4() { return &___m_HitType_4; }
	inline void set_m_HitType_4(int32_t value)
	{
		___m_HitType_4 = value;
	}
};

struct XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_StaticFields, ___s_Default_0)); }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  get_s_Default_0() const { return ___s_Default_0; }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Depth
	int32_t ___m_Depth_6;
	// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Dimension
	int32_t ___m_Dimension_7;

public:
	inline static int32_t get_offset_of_m_NativeTexture_0() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_NativeTexture_0)); }
	inline intptr_t get_m_NativeTexture_0() const { return ___m_NativeTexture_0; }
	inline intptr_t* get_address_of_m_NativeTexture_0() { return &___m_NativeTexture_0; }
	inline void set_m_NativeTexture_0(intptr_t value)
	{
		___m_NativeTexture_0 = value;
	}

	inline static int32_t get_offset_of_m_Width_1() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Width_1)); }
	inline int32_t get_m_Width_1() const { return ___m_Width_1; }
	inline int32_t* get_address_of_m_Width_1() { return &___m_Width_1; }
	inline void set_m_Width_1(int32_t value)
	{
		___m_Width_1 = value;
	}

	inline static int32_t get_offset_of_m_Height_2() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Height_2)); }
	inline int32_t get_m_Height_2() const { return ___m_Height_2; }
	inline int32_t* get_address_of_m_Height_2() { return &___m_Height_2; }
	inline void set_m_Height_2(int32_t value)
	{
		___m_Height_2 = value;
	}

	inline static int32_t get_offset_of_m_MipmapCount_3() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_MipmapCount_3)); }
	inline int32_t get_m_MipmapCount_3() const { return ___m_MipmapCount_3; }
	inline int32_t* get_address_of_m_MipmapCount_3() { return &___m_MipmapCount_3; }
	inline void set_m_MipmapCount_3(int32_t value)
	{
		___m_MipmapCount_3 = value;
	}

	inline static int32_t get_offset_of_m_Format_4() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Format_4)); }
	inline int32_t get_m_Format_4() const { return ___m_Format_4; }
	inline int32_t* get_address_of_m_Format_4() { return &___m_Format_4; }
	inline void set_m_Format_4(int32_t value)
	{
		___m_Format_4 = value;
	}

	inline static int32_t get_offset_of_m_PropertyNameId_5() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_PropertyNameId_5)); }
	inline int32_t get_m_PropertyNameId_5() const { return ___m_PropertyNameId_5; }
	inline int32_t* get_address_of_m_PropertyNameId_5() { return &___m_PropertyNameId_5; }
	inline void set_m_PropertyNameId_5(int32_t value)
	{
		___m_PropertyNameId_5 = value;
	}

	inline static int32_t get_offset_of_m_Depth_6() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Depth_6)); }
	inline int32_t get_m_Depth_6() const { return ___m_Depth_6; }
	inline int32_t* get_address_of_m_Depth_6() { return &___m_Depth_6; }
	inline void set_m_Depth_6(int32_t value)
	{
		___m_Depth_6 = value;
	}

	inline static int32_t get_offset_of_m_Dimension_7() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Dimension_7)); }
	inline int32_t get_m_Dimension_7() const { return ___m_Dimension_7; }
	inline int32_t* get_address_of_m_Dimension_7() { return &___m_Dimension_7; }
	inline void set_m_Dimension_7(int32_t value)
	{
		___m_Dimension_7 = value;
	}
};


// DefaultObserverEventHandler/PoseLerp
struct PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328  : public RuntimeObject
{
public:
	// UnityEngine.AnimationCurve DefaultObserverEventHandler/PoseLerp::mCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___mCurve_0;
	// UnityEngine.Pose DefaultObserverEventHandler/PoseLerp::mStartPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___mStartPose_1;
	// UnityEngine.Pose DefaultObserverEventHandler/PoseLerp::mEndPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___mEndPose_2;
	// System.Single DefaultObserverEventHandler/PoseLerp::mEndTime
	float ___mEndTime_3;
	// System.Single DefaultObserverEventHandler/PoseLerp::mElapsedTime
	float ___mElapsedTime_4;
	// System.Boolean DefaultObserverEventHandler/PoseLerp::<Complete>k__BackingField
	bool ___U3CCompleteU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_mCurve_0() { return static_cast<int32_t>(offsetof(PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328, ___mCurve_0)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_mCurve_0() const { return ___mCurve_0; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_mCurve_0() { return &___mCurve_0; }
	inline void set_mCurve_0(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___mCurve_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCurve_0), (void*)value);
	}

	inline static int32_t get_offset_of_mStartPose_1() { return static_cast<int32_t>(offsetof(PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328, ___mStartPose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_mStartPose_1() const { return ___mStartPose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_mStartPose_1() { return &___mStartPose_1; }
	inline void set_mStartPose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___mStartPose_1 = value;
	}

	inline static int32_t get_offset_of_mEndPose_2() { return static_cast<int32_t>(offsetof(PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328, ___mEndPose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_mEndPose_2() const { return ___mEndPose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_mEndPose_2() { return &___mEndPose_2; }
	inline void set_mEndPose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___mEndPose_2 = value;
	}

	inline static int32_t get_offset_of_mEndTime_3() { return static_cast<int32_t>(offsetof(PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328, ___mEndTime_3)); }
	inline float get_mEndTime_3() const { return ___mEndTime_3; }
	inline float* get_address_of_mEndTime_3() { return &___mEndTime_3; }
	inline void set_mEndTime_3(float value)
	{
		___mEndTime_3 = value;
	}

	inline static int32_t get_offset_of_mElapsedTime_4() { return static_cast<int32_t>(offsetof(PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328, ___mElapsedTime_4)); }
	inline float get_mElapsedTime_4() const { return ___mElapsedTime_4; }
	inline float* get_address_of_mElapsedTime_4() { return &___mElapsedTime_4; }
	inline void set_mElapsedTime_4(float value)
	{
		___mElapsedTime_4 = value;
	}

	inline static int32_t get_offset_of_U3CCompleteU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328, ___U3CCompleteU3Ek__BackingField_5)); }
	inline bool get_U3CCompleteU3Ek__BackingField_5() const { return ___U3CCompleteU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CCompleteU3Ek__BackingField_5() { return &___U3CCompleteU3Ek__BackingField_5; }
	inline void set_U3CCompleteU3Ek__BackingField_5(bool value)
	{
		___U3CCompleteU3Ek__BackingField_5 = value;
	}
};


// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B  : public RuntimeObject
{
public:
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::vuforiaLicenseKey
	String_t* ___vuforiaLicenseKey_3;
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::ufoLicenseKey
	String_t* ___ufoLicenseKey_4;
	// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::delayedInitialization
	bool ___delayedInitialization_5;
	// Vuforia.FocusMode Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::cameraFocusModeSetting
	int32_t ___cameraFocusModeSetting_6;
	// Vuforia.CameraMode Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::cameraDeviceModeSetting
	int32_t ___cameraDeviceModeSetting_7;
	// System.Int32 Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::maxSimultaneousImageTargets
	int32_t ___maxSimultaneousImageTargets_8;
	// System.Single Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::previousVirtualSceneScaleFactor
	float ___previousVirtualSceneScaleFactor_9;
	// System.Single Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::virtualSceneScaleFactor
	float ___virtualSceneScaleFactor_10;
	// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::modelTargetRecoWhileExtendedTracked
	bool ___modelTargetRecoWhileExtendedTracked_11;
	// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::shareRecordingsInITunes
	bool ___shareRecordingsInITunes_12;
	// Vuforia.Internal.Utility.LogLevel Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::logLevel
	int32_t ___logLevel_13;
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::version
	String_t* ___version_14;
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::eulaAcceptedVersions
	String_t* ___eulaAcceptedVersions_15;

public:
	inline static int32_t get_offset_of_vuforiaLicenseKey_3() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___vuforiaLicenseKey_3)); }
	inline String_t* get_vuforiaLicenseKey_3() const { return ___vuforiaLicenseKey_3; }
	inline String_t** get_address_of_vuforiaLicenseKey_3() { return &___vuforiaLicenseKey_3; }
	inline void set_vuforiaLicenseKey_3(String_t* value)
	{
		___vuforiaLicenseKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vuforiaLicenseKey_3), (void*)value);
	}

	inline static int32_t get_offset_of_ufoLicenseKey_4() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___ufoLicenseKey_4)); }
	inline String_t* get_ufoLicenseKey_4() const { return ___ufoLicenseKey_4; }
	inline String_t** get_address_of_ufoLicenseKey_4() { return &___ufoLicenseKey_4; }
	inline void set_ufoLicenseKey_4(String_t* value)
	{
		___ufoLicenseKey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ufoLicenseKey_4), (void*)value);
	}

	inline static int32_t get_offset_of_delayedInitialization_5() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___delayedInitialization_5)); }
	inline bool get_delayedInitialization_5() const { return ___delayedInitialization_5; }
	inline bool* get_address_of_delayedInitialization_5() { return &___delayedInitialization_5; }
	inline void set_delayedInitialization_5(bool value)
	{
		___delayedInitialization_5 = value;
	}

	inline static int32_t get_offset_of_cameraFocusModeSetting_6() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___cameraFocusModeSetting_6)); }
	inline int32_t get_cameraFocusModeSetting_6() const { return ___cameraFocusModeSetting_6; }
	inline int32_t* get_address_of_cameraFocusModeSetting_6() { return &___cameraFocusModeSetting_6; }
	inline void set_cameraFocusModeSetting_6(int32_t value)
	{
		___cameraFocusModeSetting_6 = value;
	}

	inline static int32_t get_offset_of_cameraDeviceModeSetting_7() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___cameraDeviceModeSetting_7)); }
	inline int32_t get_cameraDeviceModeSetting_7() const { return ___cameraDeviceModeSetting_7; }
	inline int32_t* get_address_of_cameraDeviceModeSetting_7() { return &___cameraDeviceModeSetting_7; }
	inline void set_cameraDeviceModeSetting_7(int32_t value)
	{
		___cameraDeviceModeSetting_7 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousImageTargets_8() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___maxSimultaneousImageTargets_8)); }
	inline int32_t get_maxSimultaneousImageTargets_8() const { return ___maxSimultaneousImageTargets_8; }
	inline int32_t* get_address_of_maxSimultaneousImageTargets_8() { return &___maxSimultaneousImageTargets_8; }
	inline void set_maxSimultaneousImageTargets_8(int32_t value)
	{
		___maxSimultaneousImageTargets_8 = value;
	}

	inline static int32_t get_offset_of_previousVirtualSceneScaleFactor_9() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___previousVirtualSceneScaleFactor_9)); }
	inline float get_previousVirtualSceneScaleFactor_9() const { return ___previousVirtualSceneScaleFactor_9; }
	inline float* get_address_of_previousVirtualSceneScaleFactor_9() { return &___previousVirtualSceneScaleFactor_9; }
	inline void set_previousVirtualSceneScaleFactor_9(float value)
	{
		___previousVirtualSceneScaleFactor_9 = value;
	}

	inline static int32_t get_offset_of_virtualSceneScaleFactor_10() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___virtualSceneScaleFactor_10)); }
	inline float get_virtualSceneScaleFactor_10() const { return ___virtualSceneScaleFactor_10; }
	inline float* get_address_of_virtualSceneScaleFactor_10() { return &___virtualSceneScaleFactor_10; }
	inline void set_virtualSceneScaleFactor_10(float value)
	{
		___virtualSceneScaleFactor_10 = value;
	}

	inline static int32_t get_offset_of_modelTargetRecoWhileExtendedTracked_11() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___modelTargetRecoWhileExtendedTracked_11)); }
	inline bool get_modelTargetRecoWhileExtendedTracked_11() const { return ___modelTargetRecoWhileExtendedTracked_11; }
	inline bool* get_address_of_modelTargetRecoWhileExtendedTracked_11() { return &___modelTargetRecoWhileExtendedTracked_11; }
	inline void set_modelTargetRecoWhileExtendedTracked_11(bool value)
	{
		___modelTargetRecoWhileExtendedTracked_11 = value;
	}

	inline static int32_t get_offset_of_shareRecordingsInITunes_12() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___shareRecordingsInITunes_12)); }
	inline bool get_shareRecordingsInITunes_12() const { return ___shareRecordingsInITunes_12; }
	inline bool* get_address_of_shareRecordingsInITunes_12() { return &___shareRecordingsInITunes_12; }
	inline void set_shareRecordingsInITunes_12(bool value)
	{
		___shareRecordingsInITunes_12 = value;
	}

	inline static int32_t get_offset_of_logLevel_13() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___logLevel_13)); }
	inline int32_t get_logLevel_13() const { return ___logLevel_13; }
	inline int32_t* get_address_of_logLevel_13() { return &___logLevel_13; }
	inline void set_logLevel_13(int32_t value)
	{
		___logLevel_13 = value;
	}

	inline static int32_t get_offset_of_version_14() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___version_14)); }
	inline String_t* get_version_14() const { return ___version_14; }
	inline String_t** get_address_of_version_14() { return &___version_14; }
	inline void set_version_14(String_t* value)
	{
		___version_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_14), (void*)value);
	}

	inline static int32_t get_offset_of_eulaAcceptedVersions_15() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___eulaAcceptedVersions_15)); }
	inline String_t* get_eulaAcceptedVersions_15() const { return ___eulaAcceptedVersions_15; }
	inline String_t** get_address_of_eulaAcceptedVersions_15() { return &___eulaAcceptedVersions_15; }
	inline void set_eulaAcceptedVersions_15(String_t* value)
	{
		___eulaAcceptedVersions_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eulaAcceptedVersions_15), (void*)value);
	}
};

struct GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_StaticFields
{
public:
	// System.Action`2<System.Single,System.Single> Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::VirtualSceneScaleFactorUpdated
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * ___VirtualSceneScaleFactorUpdated_2;

public:
	inline static int32_t get_offset_of_VirtualSceneScaleFactorUpdated_2() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_StaticFields, ___VirtualSceneScaleFactorUpdated_2)); }
	inline Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * get_VirtualSceneScaleFactorUpdated_2() const { return ___VirtualSceneScaleFactorUpdated_2; }
	inline Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 ** get_address_of_VirtualSceneScaleFactorUpdated_2() { return &___VirtualSceneScaleFactorUpdated_2; }
	inline void set_VirtualSceneScaleFactorUpdated_2(Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * value)
	{
		___VirtualSceneScaleFactorUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VirtualSceneScaleFactorUpdated_2), (void*)value);
	}
};


// System.Action`1<UnityEngine.Camera[]>
struct Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs>
struct Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.Camera>
struct Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<Vuforia.ObserverBehaviour>
struct Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<Vuforia.VuforiaInitError>
struct Action_1_tAA1D1EEFC680CD9A5C6DDD77BD612C0BBD43C306  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Collections.Generic.List`1<System.Tuple`2<System.String,UnityEngine.Transform>>,System.Collections.Generic.List`1<System.Tuple`2<System.String,UnityEngine.Transform>>>
struct Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Vuforia.ObserverBehaviour,Vuforia.TargetStatus>
struct Action_2_tBEC7B0597650F8D41DD8126DFAC07D2EA63976A4  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]>
struct Action_2_t254D87D7CB5E1987005531FFF30ED1CA3AEDECCE  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>
struct Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<UnityEngine.Transform,System.Int64>
struct Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct Enumerator_tD873E6DED9BBA65F7D6231064F2E61F525F46F3F 
{
public:
	// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeArray`1/Enumerator::m_Array
	NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545  ___m_Array_0;
	// System.Int32 Unity.Collections.NativeArray`1/Enumerator::m_Index
	int32_t ___m_Index_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_tD873E6DED9BBA65F7D6231064F2E61F525F46F3F, ___m_Array_0)); }
	inline NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545  get_m_Array_0() const { return ___m_Array_0; }
	inline NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 * get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545  value)
	{
		___m_Array_0 = value;
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Enumerator_tD873E6DED9BBA65F7D6231064F2E61F525F46F3F, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}
};


// System.Func`2<UnityEngine.XR.ARSubsystems.XRCameraConfiguration,System.Boolean>
struct Func_2_t7E05C7C6DEC66BBE1049328BA77DC6F0E4D34737  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.ARFoundation.ARFoundationImage
struct ARFoundationImage_t52F1BCE1FC354D7635660A1B2C33CB5319F0B16B 
{
public:
	// UnityEngine.Vector2Int Vuforia.ARFoundation.ARFoundationImage::Dimensions
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___Dimensions_0;
	// Unity.Collections.NativeArray`1<System.Byte> Vuforia.ARFoundation.ARFoundationImage::YBuffer
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___YBuffer_1;
	// Unity.Collections.NativeArray`1<System.Byte> Vuforia.ARFoundation.ARFoundationImage::UBuffer
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___UBuffer_2;
	// Unity.Collections.NativeArray`1<System.Byte> Vuforia.ARFoundation.ARFoundationImage::VBuffer
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___VBuffer_3;
	// System.Int32 Vuforia.ARFoundation.ARFoundationImage::YRowStride
	int32_t ___YRowStride_4;
	// System.Int32 Vuforia.ARFoundation.ARFoundationImage::UVRowStride
	int32_t ___UVRowStride_5;
	// System.Int32 Vuforia.ARFoundation.ARFoundationImage::UVPixelStride
	int32_t ___UVPixelStride_6;
	// System.Int64 Vuforia.ARFoundation.ARFoundationImage::Timestamp
	int64_t ___Timestamp_7;
	// UnityEngine.Vector2 Vuforia.ARFoundation.ARFoundationImage::PrincipalPoint
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___PrincipalPoint_8;
	// UnityEngine.Vector2 Vuforia.ARFoundation.ARFoundationImage::FocalLength
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___FocalLength_9;

public:
	inline static int32_t get_offset_of_Dimensions_0() { return static_cast<int32_t>(offsetof(ARFoundationImage_t52F1BCE1FC354D7635660A1B2C33CB5319F0B16B, ___Dimensions_0)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_Dimensions_0() const { return ___Dimensions_0; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_Dimensions_0() { return &___Dimensions_0; }
	inline void set_Dimensions_0(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___Dimensions_0 = value;
	}

	inline static int32_t get_offset_of_YBuffer_1() { return static_cast<int32_t>(offsetof(ARFoundationImage_t52F1BCE1FC354D7635660A1B2C33CB5319F0B16B, ___YBuffer_1)); }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  get_YBuffer_1() const { return ___YBuffer_1; }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 * get_address_of_YBuffer_1() { return &___YBuffer_1; }
	inline void set_YBuffer_1(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  value)
	{
		___YBuffer_1 = value;
	}

	inline static int32_t get_offset_of_UBuffer_2() { return static_cast<int32_t>(offsetof(ARFoundationImage_t52F1BCE1FC354D7635660A1B2C33CB5319F0B16B, ___UBuffer_2)); }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  get_UBuffer_2() const { return ___UBuffer_2; }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 * get_address_of_UBuffer_2() { return &___UBuffer_2; }
	inline void set_UBuffer_2(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  value)
	{
		___UBuffer_2 = value;
	}

	inline static int32_t get_offset_of_VBuffer_3() { return static_cast<int32_t>(offsetof(ARFoundationImage_t52F1BCE1FC354D7635660A1B2C33CB5319F0B16B, ___VBuffer_3)); }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  get_VBuffer_3() const { return ___VBuffer_3; }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 * get_address_of_VBuffer_3() { return &___VBuffer_3; }
	inline void set_VBuffer_3(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  value)
	{
		___VBuffer_3 = value;
	}

	inline static int32_t get_offset_of_YRowStride_4() { return static_cast<int32_t>(offsetof(ARFoundationImage_t52F1BCE1FC354D7635660A1B2C33CB5319F0B16B, ___YRowStride_4)); }
	inline int32_t get_YRowStride_4() const { return ___YRowStride_4; }
	inline int32_t* get_address_of_YRowStride_4() { return &___YRowStride_4; }
	inline void set_YRowStride_4(int32_t value)
	{
		___YRowStride_4 = value;
	}

	inline static int32_t get_offset_of_UVRowStride_5() { return static_cast<int32_t>(offsetof(ARFoundationImage_t52F1BCE1FC354D7635660A1B2C33CB5319F0B16B, ___UVRowStride_5)); }
	inline int32_t get_UVRowStride_5() const { return ___UVRowStride_5; }
	inline int32_t* get_address_of_UVRowStride_5() { return &___UVRowStride_5; }
	inline void set_UVRowStride_5(int32_t value)
	{
		___UVRowStride_5 = value;
	}

	inline static int32_t get_offset_of_UVPixelStride_6() { return static_cast<int32_t>(offsetof(ARFoundationImage_t52F1BCE1FC354D7635660A1B2C33CB5319F0B16B, ___UVPixelStride_6)); }
	inline int32_t get_UVPixelStride_6() const { return ___UVPixelStride_6; }
	inline int32_t* get_address_of_UVPixelStride_6() { return &___UVPixelStride_6; }
	inline void set_UVPixelStride_6(int32_t value)
	{
		___UVPixelStride_6 = value;
	}

	inline static int32_t get_offset_of_Timestamp_7() { return static_cast<int32_t>(offsetof(ARFoundationImage_t52F1BCE1FC354D7635660A1B2C33CB5319F0B16B, ___Timestamp_7)); }
	inline int64_t get_Timestamp_7() const { return ___Timestamp_7; }
	inline int64_t* get_address_of_Timestamp_7() { return &___Timestamp_7; }
	inline void set_Timestamp_7(int64_t value)
	{
		___Timestamp_7 = value;
	}

	inline static int32_t get_offset_of_PrincipalPoint_8() { return static_cast<int32_t>(offsetof(ARFoundationImage_t52F1BCE1FC354D7635660A1B2C33CB5319F0B16B, ___PrincipalPoint_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_PrincipalPoint_8() const { return ___PrincipalPoint_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_PrincipalPoint_8() { return &___PrincipalPoint_8; }
	inline void set_PrincipalPoint_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___PrincipalPoint_8 = value;
	}

	inline static int32_t get_offset_of_FocalLength_9() { return static_cast<int32_t>(offsetof(ARFoundationImage_t52F1BCE1FC354D7635660A1B2C33CB5319F0B16B, ___FocalLength_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_FocalLength_9() const { return ___FocalLength_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_FocalLength_9() { return &___FocalLength_9; }
	inline void set_FocalLength_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___FocalLength_9 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E 
{
public:
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Transform_3;

public:
	inline static int32_t get_offset_of_U3CdistanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___U3CdistanceU3Ek__BackingField_0)); }
	inline float get_U3CdistanceU3Ek__BackingField_0() const { return ___U3CdistanceU3Ek__BackingField_0; }
	inline float* get_address_of_U3CdistanceU3Ek__BackingField_0() { return &___U3CdistanceU3Ek__BackingField_0; }
	inline void set_U3CdistanceU3Ek__BackingField_0(float value)
	{
		___U3CdistanceU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CtrackableU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___U3CtrackableU3Ek__BackingField_1)); }
	inline ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * get_U3CtrackableU3Ek__BackingField_1() const { return ___U3CtrackableU3Ek__BackingField_1; }
	inline ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 ** get_address_of_U3CtrackableU3Ek__BackingField_1() { return &___U3CtrackableU3Ek__BackingField_1; }
	inline void set_U3CtrackableU3Ek__BackingField_1(ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * value)
	{
		___U3CtrackableU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackableU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hit_2() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___m_Hit_2)); }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  get_m_Hit_2() const { return ___m_Hit_2; }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * get_address_of_m_Hit_2() { return &___m_Hit_2; }
	inline void set_m_Hit_2(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  value)
	{
		___m_Hit_2 = value;
	}

	inline static int32_t get_offset_of_m_Transform_3() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___m_Transform_3)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_Transform_3() const { return ___m_Transform_3; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_Transform_3() { return &___m_Transform_3; }
	inline void set_m_Transform_3(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_Transform_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Transform_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___m_Hit_2;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___m_Hit_2;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Transform_3;
};

// UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355 
{
public:
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARFoundation.ARTextureInfo::m_Descriptor
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_Descriptor_1;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARTextureInfo::m_Texture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_2;

public:
	inline static int32_t get_offset_of_m_Descriptor_1() { return static_cast<int32_t>(offsetof(ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355, ___m_Descriptor_1)); }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  get_m_Descriptor_1() const { return ___m_Descriptor_1; }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * get_address_of_m_Descriptor_1() { return &___m_Descriptor_1; }
	inline void set_m_Descriptor_1(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  value)
	{
		___m_Descriptor_1 = value;
	}

	inline static int32_t get_offset_of_m_Texture_2() { return static_cast<int32_t>(offsetof(ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355, ___m_Texture_2)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_Texture_2() const { return ___m_Texture_2; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_Texture_2() { return &___m_Texture_2; }
	inline void set_m_Texture_2(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_Texture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355_marshaled_pinvoke
{
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_Descriptor_1;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355_marshaled_com
{
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_Descriptor_1;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_2;
};

// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
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


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.VuforiaConfiguration
struct VuforiaConfiguration_tD9B249335070DBFF290D1B3ED05D245874C2A4B4  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration Vuforia.VuforiaConfiguration::vuforia
	GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * ___vuforia_5;
	// Vuforia.VuforiaConfiguration/DatabaseConfiguration Vuforia.VuforiaConfiguration::database
	DatabaseConfiguration_tAA9EE01F50216360C4257CC06AD4BD24D6F2E59D * ___database_6;
	// Vuforia.VuforiaConfiguration/RequiredShaders Vuforia.VuforiaConfiguration::shaders
	RequiredShaders_t2CB3B1F273320A0E3F0A3D1E8BB9891BA60A6DEE * ___shaders_7;
	// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration Vuforia.VuforiaConfiguration::videoBackground
	VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345 * ___videoBackground_8;
	// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration Vuforia.VuforiaConfiguration::deviceTracker
	DeviceTrackerConfiguration_tB1C0524D487A0B42FF77F652FD8841B8C3E546F6 * ___deviceTracker_9;
	// Vuforia.VuforiaConfiguration/PlayModeConfiguration Vuforia.VuforiaConfiguration::playmode
	PlayModeConfiguration_tE8DA42126B58D2C3350D11ACFA8E4BD48F5D42FF * ___playmode_10;
	// Vuforia.VuforiaConfiguration/WebCamConfiguration Vuforia.VuforiaConfiguration::webcam
	WebCamConfiguration_t825C06D4C049135F922FA8695E74F9DB5B5E0986 * ___webcam_11;
	// Vuforia.VuforiaConfiguration/PackageInfo Vuforia.VuforiaConfiguration::packageInformation
	PackageInfo_t7951B39E18BE00346CFB0EEC1550688B5DF3342F * ___packageInformation_12;

public:
	inline static int32_t get_offset_of_vuforia_5() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_tD9B249335070DBFF290D1B3ED05D245874C2A4B4, ___vuforia_5)); }
	inline GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * get_vuforia_5() const { return ___vuforia_5; }
	inline GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B ** get_address_of_vuforia_5() { return &___vuforia_5; }
	inline void set_vuforia_5(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * value)
	{
		___vuforia_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vuforia_5), (void*)value);
	}

	inline static int32_t get_offset_of_database_6() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_tD9B249335070DBFF290D1B3ED05D245874C2A4B4, ___database_6)); }
	inline DatabaseConfiguration_tAA9EE01F50216360C4257CC06AD4BD24D6F2E59D * get_database_6() const { return ___database_6; }
	inline DatabaseConfiguration_tAA9EE01F50216360C4257CC06AD4BD24D6F2E59D ** get_address_of_database_6() { return &___database_6; }
	inline void set_database_6(DatabaseConfiguration_tAA9EE01F50216360C4257CC06AD4BD24D6F2E59D * value)
	{
		___database_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___database_6), (void*)value);
	}

	inline static int32_t get_offset_of_shaders_7() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_tD9B249335070DBFF290D1B3ED05D245874C2A4B4, ___shaders_7)); }
	inline RequiredShaders_t2CB3B1F273320A0E3F0A3D1E8BB9891BA60A6DEE * get_shaders_7() const { return ___shaders_7; }
	inline RequiredShaders_t2CB3B1F273320A0E3F0A3D1E8BB9891BA60A6DEE ** get_address_of_shaders_7() { return &___shaders_7; }
	inline void set_shaders_7(RequiredShaders_t2CB3B1F273320A0E3F0A3D1E8BB9891BA60A6DEE * value)
	{
		___shaders_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shaders_7), (void*)value);
	}

	inline static int32_t get_offset_of_videoBackground_8() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_tD9B249335070DBFF290D1B3ED05D245874C2A4B4, ___videoBackground_8)); }
	inline VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345 * get_videoBackground_8() const { return ___videoBackground_8; }
	inline VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345 ** get_address_of_videoBackground_8() { return &___videoBackground_8; }
	inline void set_videoBackground_8(VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345 * value)
	{
		___videoBackground_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___videoBackground_8), (void*)value);
	}

	inline static int32_t get_offset_of_deviceTracker_9() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_tD9B249335070DBFF290D1B3ED05D245874C2A4B4, ___deviceTracker_9)); }
	inline DeviceTrackerConfiguration_tB1C0524D487A0B42FF77F652FD8841B8C3E546F6 * get_deviceTracker_9() const { return ___deviceTracker_9; }
	inline DeviceTrackerConfiguration_tB1C0524D487A0B42FF77F652FD8841B8C3E546F6 ** get_address_of_deviceTracker_9() { return &___deviceTracker_9; }
	inline void set_deviceTracker_9(DeviceTrackerConfiguration_tB1C0524D487A0B42FF77F652FD8841B8C3E546F6 * value)
	{
		___deviceTracker_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deviceTracker_9), (void*)value);
	}

	inline static int32_t get_offset_of_playmode_10() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_tD9B249335070DBFF290D1B3ED05D245874C2A4B4, ___playmode_10)); }
	inline PlayModeConfiguration_tE8DA42126B58D2C3350D11ACFA8E4BD48F5D42FF * get_playmode_10() const { return ___playmode_10; }
	inline PlayModeConfiguration_tE8DA42126B58D2C3350D11ACFA8E4BD48F5D42FF ** get_address_of_playmode_10() { return &___playmode_10; }
	inline void set_playmode_10(PlayModeConfiguration_tE8DA42126B58D2C3350D11ACFA8E4BD48F5D42FF * value)
	{
		___playmode_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playmode_10), (void*)value);
	}

	inline static int32_t get_offset_of_webcam_11() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_tD9B249335070DBFF290D1B3ED05D245874C2A4B4, ___webcam_11)); }
	inline WebCamConfiguration_t825C06D4C049135F922FA8695E74F9DB5B5E0986 * get_webcam_11() const { return ___webcam_11; }
	inline WebCamConfiguration_t825C06D4C049135F922FA8695E74F9DB5B5E0986 ** get_address_of_webcam_11() { return &___webcam_11; }
	inline void set_webcam_11(WebCamConfiguration_t825C06D4C049135F922FA8695E74F9DB5B5E0986 * value)
	{
		___webcam_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webcam_11), (void*)value);
	}

	inline static int32_t get_offset_of_packageInformation_12() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_tD9B249335070DBFF290D1B3ED05D245874C2A4B4, ___packageInformation_12)); }
	inline PackageInfo_t7951B39E18BE00346CFB0EEC1550688B5DF3342F * get_packageInformation_12() const { return ___packageInformation_12; }
	inline PackageInfo_t7951B39E18BE00346CFB0EEC1550688B5DF3342F ** get_address_of_packageInformation_12() { return &___packageInformation_12; }
	inline void set_packageInformation_12(PackageInfo_t7951B39E18BE00346CFB0EEC1550688B5DF3342F * value)
	{
		___packageInformation_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___packageInformation_12), (void*)value);
	}
};

struct VuforiaConfiguration_tD9B249335070DBFF290D1B3ED05D245874C2A4B4_StaticFields
{
public:
	// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::sInstance
	VuforiaConfiguration_tD9B249335070DBFF290D1B3ED05D245874C2A4B4 * ___sInstance_4;

public:
	inline static int32_t get_offset_of_sInstance_4() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_tD9B249335070DBFF290D1B3ED05D245874C2A4B4_StaticFields, ___sInstance_4)); }
	inline VuforiaConfiguration_tD9B249335070DBFF290D1B3ED05D245874C2A4B4 * get_sInstance_4() const { return ___sInstance_4; }
	inline VuforiaConfiguration_tD9B249335070DBFF290D1B3ED05D245874C2A4B4 ** get_address_of_sInstance_4() { return &___sInstance_4; }
	inline void set_sInstance_4(VuforiaConfiguration_tD9B249335070DBFF290D1B3ED05D245874C2A4B4 * value)
	{
		___sInstance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sInstance_4), (void*)value);
	}
};


// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93  : public IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4
{
public:
	// System.Action`1<System.Boolean> UnityEngine.XR.XRDisplaySubsystem::displayFocusChanged
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___displayFocusChanged_2;

public:
	inline static int32_t get_offset_of_displayFocusChanged_2() { return static_cast<int32_t>(offsetof(XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93, ___displayFocusChanged_2)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_displayFocusChanged_2() const { return ___displayFocusChanged_2; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_displayFocusChanged_2() { return &___displayFocusChanged_2; }
	inline void set_displayFocusChanged_2(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___displayFocusChanged_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayFocusChanged_2), (void*)value);
	}
};


// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;

public:
	inline static int32_t get_offset_of_m_LoaderManagerInstance_6() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_LoaderManagerInstance_6)); }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * get_m_LoaderManagerInstance_6() const { return ___m_LoaderManagerInstance_6; }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F ** get_address_of_m_LoaderManagerInstance_6() { return &___m_LoaderManagerInstance_6; }
	inline void set_m_LoaderManagerInstance_6(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * value)
	{
		___m_LoaderManagerInstance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LoaderManagerInstance_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_InitManagerOnStart_7() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_InitManagerOnStart_7)); }
	inline bool get_m_InitManagerOnStart_7() const { return ___m_InitManagerOnStart_7; }
	inline bool* get_address_of_m_InitManagerOnStart_7() { return &___m_InitManagerOnStart_7; }
	inline void set_m_InitManagerOnStart_7(bool value)
	{
		___m_InitManagerOnStart_7 = value;
	}

	inline static int32_t get_offset_of_m_XRManager_8() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_XRManager_8)); }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * get_m_XRManager_8() const { return ___m_XRManager_8; }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F ** get_address_of_m_XRManager_8() { return &___m_XRManager_8; }
	inline void set_m_XRManager_8(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * value)
	{
		___m_XRManager_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_XRManager_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_ProviderIntialized_9() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_ProviderIntialized_9)); }
	inline bool get_m_ProviderIntialized_9() const { return ___m_ProviderIntialized_9; }
	inline bool* get_address_of_m_ProviderIntialized_9() { return &___m_ProviderIntialized_9; }
	inline void set_m_ProviderIntialized_9(bool value)
	{
		___m_ProviderIntialized_9 = value;
	}

	inline static int32_t get_offset_of_m_ProviderStarted_10() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042, ___m_ProviderStarted_10)); }
	inline bool get_m_ProviderStarted_10() const { return ___m_ProviderStarted_10; }
	inline bool* get_address_of_m_ProviderStarted_10() { return &___m_ProviderStarted_10; }
	inline void set_m_ProviderStarted_10(bool value)
	{
		___m_ProviderStarted_10 = value;
	}
};

struct XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields
{
public:
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * ___s_RuntimeSettingsInstance_5;

public:
	inline static int32_t get_offset_of_k_SettingsKey_4() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields, ___k_SettingsKey_4)); }
	inline String_t* get_k_SettingsKey_4() const { return ___k_SettingsKey_4; }
	inline String_t** get_address_of_k_SettingsKey_4() { return &___k_SettingsKey_4; }
	inline void set_k_SettingsKey_4(String_t* value)
	{
		___k_SettingsKey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_SettingsKey_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_RuntimeSettingsInstance_5() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields, ___s_RuntimeSettingsInstance_5)); }
	inline XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * get_s_RuntimeSettingsInstance_5() const { return ___s_RuntimeSettingsInstance_5; }
	inline XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 ** get_address_of_s_RuntimeSettingsInstance_5() { return &___s_RuntimeSettingsInstance_5; }
	inline void set_s_RuntimeSettingsInstance_5(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * value)
	{
		___s_RuntimeSettingsInstance_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RuntimeSettingsInstance_5), (void*)value);
	}
};


// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09  : public IntegratedSubsystem_1_tD5C4AF38726B9433CFC3CA0F889D8C8C2535AEFE
{
public:
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::trackingOriginUpdated
	Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___trackingOriginUpdated_2;
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::boundaryChanged
	Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___boundaryChanged_3;
	// System.Collections.Generic.List`1<System.UInt64> UnityEngine.XR.XRInputSubsystem::m_DeviceIdsCache
	List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * ___m_DeviceIdsCache_4;

public:
	inline static int32_t get_offset_of_trackingOriginUpdated_2() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___trackingOriginUpdated_2)); }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * get_trackingOriginUpdated_2() const { return ___trackingOriginUpdated_2; }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 ** get_address_of_trackingOriginUpdated_2() { return &___trackingOriginUpdated_2; }
	inline void set_trackingOriginUpdated_2(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * value)
	{
		___trackingOriginUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingOriginUpdated_2), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryChanged_3() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___boundaryChanged_3)); }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * get_boundaryChanged_3() const { return ___boundaryChanged_3; }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 ** get_address_of_boundaryChanged_3() { return &___boundaryChanged_3; }
	inline void set_boundaryChanged_3(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * value)
	{
		___boundaryChanged_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryChanged_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceIdsCache_4() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___m_DeviceIdsCache_4)); }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * get_m_DeviceIdsCache_4() const { return ___m_DeviceIdsCache_4; }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B ** get_address_of_m_DeviceIdsCache_4() { return &___m_DeviceIdsCache_4; }
	inline void set_m_DeviceIdsCache_4(List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * value)
	{
		___m_DeviceIdsCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceIdsCache_4), (void*)value);
	}
};


// UnityEngine.XR.Management.XRLoader
struct XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * ___U3CactiveLoaderU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_m_InitializationComplete_4() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_InitializationComplete_4)); }
	inline bool get_m_InitializationComplete_4() const { return ___m_InitializationComplete_4; }
	inline bool* get_address_of_m_InitializationComplete_4() { return &___m_InitializationComplete_4; }
	inline void set_m_InitializationComplete_4(bool value)
	{
		___m_InitializationComplete_4 = value;
	}

	inline static int32_t get_offset_of_m_RequiresSettingsUpdate_5() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_RequiresSettingsUpdate_5)); }
	inline bool get_m_RequiresSettingsUpdate_5() const { return ___m_RequiresSettingsUpdate_5; }
	inline bool* get_address_of_m_RequiresSettingsUpdate_5() { return &___m_RequiresSettingsUpdate_5; }
	inline void set_m_RequiresSettingsUpdate_5(bool value)
	{
		___m_RequiresSettingsUpdate_5 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticLoading_6() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_AutomaticLoading_6)); }
	inline bool get_m_AutomaticLoading_6() const { return ___m_AutomaticLoading_6; }
	inline bool* get_address_of_m_AutomaticLoading_6() { return &___m_AutomaticLoading_6; }
	inline void set_m_AutomaticLoading_6(bool value)
	{
		___m_AutomaticLoading_6 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticRunning_7() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_AutomaticRunning_7)); }
	inline bool get_m_AutomaticRunning_7() const { return ___m_AutomaticRunning_7; }
	inline bool* get_address_of_m_AutomaticRunning_7() { return &___m_AutomaticRunning_7; }
	inline void set_m_AutomaticRunning_7(bool value)
	{
		___m_AutomaticRunning_7 = value;
	}

	inline static int32_t get_offset_of_m_Loaders_8() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_Loaders_8)); }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * get_m_Loaders_8() const { return ___m_Loaders_8; }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 ** get_address_of_m_Loaders_8() { return &___m_Loaders_8; }
	inline void set_m_Loaders_8(List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * value)
	{
		___m_Loaders_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Loaders_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_RegisteredLoaders_9() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_RegisteredLoaders_9)); }
	inline HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * get_m_RegisteredLoaders_9() const { return ___m_RegisteredLoaders_9; }
	inline HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 ** get_address_of_m_RegisteredLoaders_9() { return &___m_RegisteredLoaders_9; }
	inline void set_m_RegisteredLoaders_9(HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * value)
	{
		___m_RegisteredLoaders_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RegisteredLoaders_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CactiveLoaderU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___U3CactiveLoaderU3Ek__BackingField_10)); }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * get_U3CactiveLoaderU3Ek__BackingField_10() const { return ___U3CactiveLoaderU3Ek__BackingField_10; }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B ** get_address_of_U3CactiveLoaderU3Ek__BackingField_10() { return &___U3CactiveLoaderU3Ek__BackingField_10; }
	inline void set_U3CactiveLoaderU3Ek__BackingField_10(XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * value)
	{
		___U3CactiveLoaderU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CactiveLoaderU3Ek__BackingField_10), (void*)value);
	}
};


// DefaultObserverEventHandler/PoseSmoother
struct PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB  : public RuntimeObject
{
public:
	// DefaultObserverEventHandler/PoseLerp DefaultObserverEventHandler/PoseSmoother::mActivePoseLerp
	PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328 * ___mActivePoseLerp_2;
	// UnityEngine.Pose DefaultObserverEventHandler/PoseSmoother::mPreviousPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___mPreviousPose_3;
	// Vuforia.ObserverBehaviour DefaultObserverEventHandler/PoseSmoother::mTarget
	ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * ___mTarget_4;
	// UnityEngine.AnimationCurve DefaultObserverEventHandler/PoseSmoother::mAnimationCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___mAnimationCurve_5;
	// Vuforia.TargetStatus DefaultObserverEventHandler/PoseSmoother::mPreviousStatus
	TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  ___mPreviousStatus_6;

public:
	inline static int32_t get_offset_of_mActivePoseLerp_2() { return static_cast<int32_t>(offsetof(PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB, ___mActivePoseLerp_2)); }
	inline PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328 * get_mActivePoseLerp_2() const { return ___mActivePoseLerp_2; }
	inline PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328 ** get_address_of_mActivePoseLerp_2() { return &___mActivePoseLerp_2; }
	inline void set_mActivePoseLerp_2(PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328 * value)
	{
		___mActivePoseLerp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActivePoseLerp_2), (void*)value);
	}

	inline static int32_t get_offset_of_mPreviousPose_3() { return static_cast<int32_t>(offsetof(PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB, ___mPreviousPose_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_mPreviousPose_3() const { return ___mPreviousPose_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_mPreviousPose_3() { return &___mPreviousPose_3; }
	inline void set_mPreviousPose_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___mPreviousPose_3 = value;
	}

	inline static int32_t get_offset_of_mTarget_4() { return static_cast<int32_t>(offsetof(PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB, ___mTarget_4)); }
	inline ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * get_mTarget_4() const { return ___mTarget_4; }
	inline ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 ** get_address_of_mTarget_4() { return &___mTarget_4; }
	inline void set_mTarget_4(ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * value)
	{
		___mTarget_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTarget_4), (void*)value);
	}

	inline static int32_t get_offset_of_mAnimationCurve_5() { return static_cast<int32_t>(offsetof(PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB, ___mAnimationCurve_5)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_mAnimationCurve_5() const { return ___mAnimationCurve_5; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_mAnimationCurve_5() { return &___mAnimationCurve_5; }
	inline void set_mAnimationCurve_5(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___mAnimationCurve_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAnimationCurve_5), (void*)value);
	}

	inline static int32_t get_offset_of_mPreviousStatus_6() { return static_cast<int32_t>(offsetof(PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB, ___mPreviousStatus_6)); }
	inline TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  get_mPreviousStatus_6() const { return ___mPreviousStatus_6; }
	inline TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1 * get_address_of_mPreviousStatus_6() { return &___mPreviousStatus_6; }
	inline void set_mPreviousStatus_6(TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  value)
	{
		___mPreviousStatus_6 = value;
	}
};


// UnityEngine.GUI/WindowFunction
struct WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<>c__DisplayClass26_0
struct U3CU3Ec__DisplayClass26_0_t315C6B6CB80468086F2427B2F2518AFDEED9AF8C  : public RuntimeObject
{
public:
	// Vuforia.DriverCameraMode Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<>c__DisplayClass26_0::profile
	DriverCameraMode_tFE34FC60BECEF81615274E556D3678EB2E1220DF  ___profile_0;

public:
	inline static int32_t get_offset_of_profile_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass26_0_t315C6B6CB80468086F2427B2F2518AFDEED9AF8C, ___profile_0)); }
	inline DriverCameraMode_tFE34FC60BECEF81615274E556D3678EB2E1220DF  get_profile_0() const { return ___profile_0; }
	inline DriverCameraMode_tFE34FC60BECEF81615274E556D3678EB2E1220DF * get_address_of_profile_0() { return &___profile_0; }
	inline void set_profile_0(DriverCameraMode_tFE34FC60BECEF81615274E556D3678EB2E1220DF  value)
	{
		___profile_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCpuImage/Plane
struct Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::<rowStride>k__BackingField
	int32_t ___U3CrowStrideU3Ek__BackingField_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::<pixelStride>k__BackingField
	int32_t ___U3CpixelStrideU3Ek__BackingField_1;
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::<data>k__BackingField
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___U3CdataU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CrowStrideU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D, ___U3CrowStrideU3Ek__BackingField_0)); }
	inline int32_t get_U3CrowStrideU3Ek__BackingField_0() const { return ___U3CrowStrideU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CrowStrideU3Ek__BackingField_0() { return &___U3CrowStrideU3Ek__BackingField_0; }
	inline void set_U3CrowStrideU3Ek__BackingField_0(int32_t value)
	{
		___U3CrowStrideU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CpixelStrideU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D, ___U3CpixelStrideU3Ek__BackingField_1)); }
	inline int32_t get_U3CpixelStrideU3Ek__BackingField_1() const { return ___U3CpixelStrideU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CpixelStrideU3Ek__BackingField_1() { return &___U3CpixelStrideU3Ek__BackingField_1; }
	inline void set_U3CpixelStrideU3Ek__BackingField_1(int32_t value)
	{
		___U3CpixelStrideU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CdataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D, ___U3CdataU3Ek__BackingField_2)); }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  get_U3CdataU3Ek__BackingField_2() const { return ___U3CdataU3Ek__BackingField_2; }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 * get_address_of_U3CdataU3Ek__BackingField_2() { return &___U3CdataU3Ek__BackingField_2; }
	inline void set_U3CdataU3Ek__BackingField_2(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  value)
	{
		___U3CdataU3Ek__BackingField_2 = value;
	}
};


// System.Action`1<Vuforia.ARFoundation.ARFoundationImage>
struct Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823  : public MulticastDelegate_t
{
public:

public:
};


// System.Converter`2<UnityEngine.XR.ARFoundation.ARRaycastHit,UnityEngine.Pose>
struct Converter_2_tC64B44F1A0EAFD8273C87D483DA826F259BA6D53  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___willRenderCanvases_5;

public:
	inline static int32_t get_offset_of_preWillRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___preWillRenderCanvases_4)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_preWillRenderCanvases_4() const { return ___preWillRenderCanvases_4; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_preWillRenderCanvases_4() { return &___preWillRenderCanvases_4; }
	inline void set_preWillRenderCanvases_4(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___preWillRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preWillRenderCanvases_4), (void*)value);
	}

	inline static int32_t get_offset_of_willRenderCanvases_5() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___willRenderCanvases_5)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_willRenderCanvases_5() const { return ___willRenderCanvases_5; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_willRenderCanvases_5() { return &___willRenderCanvases_5; }
	inline void set_willRenderCanvases_5(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___willRenderCanvases_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_5), (void*)value);
	}
};


// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>
struct SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	RuntimeObject * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline RuntimeObject * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline RuntimeObject ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(RuntimeObject * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemLifecycleManager_3_tA7DFD00C75E7891CE13E16A789857D4DA563A9A3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tA7DFD00C75E7891CE13E16A789857D4DA563A9A3, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_tA7DFD00C75E7891CE13E16A789857D4DA563A9A3_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tDED98C236097B36F9015B396398179A6F8A62E50 * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tFFEC9D401CE39D3C812C896B17B35D57DDF6E440 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tA7DFD00C75E7891CE13E16A789857D4DA563A9A3_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_tDED98C236097B36F9015B396398179A6F8A62E50 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_tDED98C236097B36F9015B396398179A6F8A62E50 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_tDED98C236097B36F9015B396398179A6F8A62E50 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tA7DFD00C75E7891CE13E16A789857D4DA563A9A3_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_tFFEC9D401CE39D3C812C896B17B35D57DDF6E440 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_tFFEC9D401CE39D3C812C896B17B35D57DDF6E440 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_tFFEC9D401CE39D3C812C896B17B35D57DDF6E440 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t5ACA7E75885D8B9D7B85548B84BF43976A5038DC * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t69444E6E06FA6776283024710ADC0302F2700BFD * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_t5ACA7E75885D8B9D7B85548B84BF43976A5038DC * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_t5ACA7E75885D8B9D7B85548B84BF43976A5038DC ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_t5ACA7E75885D8B9D7B85548B84BF43976A5038DC * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_t69444E6E06FA6776283024710ADC0302F2700BFD * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_t69444E6E06FA6776283024710ADC0302F2700BFD ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_t69444E6E06FA6776283024710ADC0302F2700BFD * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tAE84735071B78277703DB9996DE2E5C4456317C5 * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_tAE84735071B78277703DB9996DE2E5C4456317C5 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_tAE84735071B78277703DB9996DE2E5C4456317C5 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_tAE84735071B78277703DB9996DE2E5C4456317C5 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::m_Camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_Camera_4;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::<trackablesParent>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CtrackablesParentU3Ek__BackingField_5;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs> UnityEngine.XR.ARFoundation.ARSessionOrigin::trackablesParentTransformChanged
	Action_1_t46163F69D18A4B5D9D9C98AE7CB0AE73A82DCF10 * ___trackablesParentTransformChanged_6;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARSessionOrigin::m_ContentOffsetGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_ContentOffsetGameObject_7;

public:
	inline static int32_t get_offset_of_m_Camera_4() { return static_cast<int32_t>(offsetof(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1, ___m_Camera_4)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_Camera_4() const { return ___m_Camera_4; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_Camera_4() { return &___m_Camera_4; }
	inline void set_m_Camera_4(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_Camera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtrackablesParentU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1, ___U3CtrackablesParentU3Ek__BackingField_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CtrackablesParentU3Ek__BackingField_5() const { return ___U3CtrackablesParentU3Ek__BackingField_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CtrackablesParentU3Ek__BackingField_5() { return &___U3CtrackablesParentU3Ek__BackingField_5; }
	inline void set_U3CtrackablesParentU3Ek__BackingField_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CtrackablesParentU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackablesParentU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_trackablesParentTransformChanged_6() { return static_cast<int32_t>(offsetof(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1, ___trackablesParentTransformChanged_6)); }
	inline Action_1_t46163F69D18A4B5D9D9C98AE7CB0AE73A82DCF10 * get_trackablesParentTransformChanged_6() const { return ___trackablesParentTransformChanged_6; }
	inline Action_1_t46163F69D18A4B5D9D9C98AE7CB0AE73A82DCF10 ** get_address_of_trackablesParentTransformChanged_6() { return &___trackablesParentTransformChanged_6; }
	inline void set_trackablesParentTransformChanged_6(Action_1_t46163F69D18A4B5D9D9C98AE7CB0AE73A82DCF10 * value)
	{
		___trackablesParentTransformChanged_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackablesParentTransformChanged_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentOffsetGameObject_7() { return static_cast<int32_t>(offsetof(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1, ___m_ContentOffsetGameObject_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_ContentOffsetGameObject_7() const { return ___m_ContentOffsetGameObject_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_ContentOffsetGameObject_7() { return &___m_ContentOffsetGameObject_7; }
	inline void set_m_ContentOffsetGameObject_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_ContentOffsetGameObject_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ContentOffsetGameObject_7), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// BoundingBoxRenderer
struct BoundingBoxRenderer_t9F5EF3591717DA29C2131700748FA5E660CF0702  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material BoundingBoxRenderer::mLineMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___mLineMaterial_4;

public:
	inline static int32_t get_offset_of_mLineMaterial_4() { return static_cast<int32_t>(offsetof(BoundingBoxRenderer_t9F5EF3591717DA29C2131700748FA5E660CF0702, ___mLineMaterial_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_mLineMaterial_4() const { return ___mLineMaterial_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_mLineMaterial_4() { return &___mLineMaterial_4; }
	inline void set_mLineMaterial_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___mLineMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mLineMaterial_4), (void*)value);
	}
};


// DefaultObserverEventHandler
struct DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// DefaultObserverEventHandler/TrackingStatusFilter DefaultObserverEventHandler::StatusFilter
	int32_t ___StatusFilter_4;
	// System.Boolean DefaultObserverEventHandler::UsePoseSmoothing
	bool ___UsePoseSmoothing_5;
	// UnityEngine.AnimationCurve DefaultObserverEventHandler::AnimationCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___AnimationCurve_6;
	// UnityEngine.Events.UnityEvent DefaultObserverEventHandler::OnTargetFound
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnTargetFound_7;
	// UnityEngine.Events.UnityEvent DefaultObserverEventHandler::OnTargetLost
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnTargetLost_8;
	// Vuforia.ObserverBehaviour DefaultObserverEventHandler::mObserverBehaviour
	ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * ___mObserverBehaviour_9;
	// Vuforia.TargetStatus DefaultObserverEventHandler::mPreviousTargetStatus
	TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  ___mPreviousTargetStatus_10;
	// System.Boolean DefaultObserverEventHandler::mCallbackReceivedOnce
	bool ___mCallbackReceivedOnce_11;
	// DefaultObserverEventHandler/PoseSmoother DefaultObserverEventHandler::mPoseSmoother
	PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB * ___mPoseSmoother_13;

public:
	inline static int32_t get_offset_of_StatusFilter_4() { return static_cast<int32_t>(offsetof(DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B, ___StatusFilter_4)); }
	inline int32_t get_StatusFilter_4() const { return ___StatusFilter_4; }
	inline int32_t* get_address_of_StatusFilter_4() { return &___StatusFilter_4; }
	inline void set_StatusFilter_4(int32_t value)
	{
		___StatusFilter_4 = value;
	}

	inline static int32_t get_offset_of_UsePoseSmoothing_5() { return static_cast<int32_t>(offsetof(DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B, ___UsePoseSmoothing_5)); }
	inline bool get_UsePoseSmoothing_5() const { return ___UsePoseSmoothing_5; }
	inline bool* get_address_of_UsePoseSmoothing_5() { return &___UsePoseSmoothing_5; }
	inline void set_UsePoseSmoothing_5(bool value)
	{
		___UsePoseSmoothing_5 = value;
	}

	inline static int32_t get_offset_of_AnimationCurve_6() { return static_cast<int32_t>(offsetof(DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B, ___AnimationCurve_6)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_AnimationCurve_6() const { return ___AnimationCurve_6; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_AnimationCurve_6() { return &___AnimationCurve_6; }
	inline void set_AnimationCurve_6(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___AnimationCurve_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AnimationCurve_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnTargetFound_7() { return static_cast<int32_t>(offsetof(DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B, ___OnTargetFound_7)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnTargetFound_7() const { return ___OnTargetFound_7; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnTargetFound_7() { return &___OnTargetFound_7; }
	inline void set_OnTargetFound_7(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnTargetFound_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTargetFound_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnTargetLost_8() { return static_cast<int32_t>(offsetof(DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B, ___OnTargetLost_8)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnTargetLost_8() const { return ___OnTargetLost_8; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnTargetLost_8() { return &___OnTargetLost_8; }
	inline void set_OnTargetLost_8(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnTargetLost_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTargetLost_8), (void*)value);
	}

	inline static int32_t get_offset_of_mObserverBehaviour_9() { return static_cast<int32_t>(offsetof(DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B, ___mObserverBehaviour_9)); }
	inline ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * get_mObserverBehaviour_9() const { return ___mObserverBehaviour_9; }
	inline ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 ** get_address_of_mObserverBehaviour_9() { return &___mObserverBehaviour_9; }
	inline void set_mObserverBehaviour_9(ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * value)
	{
		___mObserverBehaviour_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mObserverBehaviour_9), (void*)value);
	}

	inline static int32_t get_offset_of_mPreviousTargetStatus_10() { return static_cast<int32_t>(offsetof(DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B, ___mPreviousTargetStatus_10)); }
	inline TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  get_mPreviousTargetStatus_10() const { return ___mPreviousTargetStatus_10; }
	inline TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1 * get_address_of_mPreviousTargetStatus_10() { return &___mPreviousTargetStatus_10; }
	inline void set_mPreviousTargetStatus_10(TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  value)
	{
		___mPreviousTargetStatus_10 = value;
	}

	inline static int32_t get_offset_of_mCallbackReceivedOnce_11() { return static_cast<int32_t>(offsetof(DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B, ___mCallbackReceivedOnce_11)); }
	inline bool get_mCallbackReceivedOnce_11() const { return ___mCallbackReceivedOnce_11; }
	inline bool* get_address_of_mCallbackReceivedOnce_11() { return &___mCallbackReceivedOnce_11; }
	inline void set_mCallbackReceivedOnce_11(bool value)
	{
		___mCallbackReceivedOnce_11 = value;
	}

	inline static int32_t get_offset_of_mPoseSmoother_13() { return static_cast<int32_t>(offsetof(DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B, ___mPoseSmoother_13)); }
	inline PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB * get_mPoseSmoother_13() const { return ___mPoseSmoother_13; }
	inline PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB ** get_address_of_mPoseSmoother_13() { return &___mPoseSmoother_13; }
	inline void set_mPoseSmoother_13(PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB * value)
	{
		___mPoseSmoother_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPoseSmoother_13), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Vuforia.VuforiaMonoBehaviour
struct VuforiaMonoBehaviour_t172ED03DD8996A3B90FCEDB8A62EB98DBDCB0932  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C  : public SubsystemLifecycleManager_3_tA7DFD00C75E7891CE13E16A789857D4DA563A9A3
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t31868ABD2D8EA88442789687465039D339583446 * ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t31868ABD2D8EA88442789687465039D339583446 * ___m_PendingAdds_10;

public:
	inline static int32_t get_offset_of_U3CsessionOriginU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C, ___U3CsessionOriginU3Ek__BackingField_8)); }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * get_U3CsessionOriginU3Ek__BackingField_8() const { return ___U3CsessionOriginU3Ek__BackingField_8; }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 ** get_address_of_U3CsessionOriginU3Ek__BackingField_8() { return &___U3CsessionOriginU3Ek__BackingField_8; }
	inline void set_U3CsessionOriginU3Ek__BackingField_8(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * value)
	{
		___U3CsessionOriginU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionOriginU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Trackables_9() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C, ___m_Trackables_9)); }
	inline Dictionary_2_t31868ABD2D8EA88442789687465039D339583446 * get_m_Trackables_9() const { return ___m_Trackables_9; }
	inline Dictionary_2_t31868ABD2D8EA88442789687465039D339583446 ** get_address_of_m_Trackables_9() { return &___m_Trackables_9; }
	inline void set_m_Trackables_9(Dictionary_2_t31868ABD2D8EA88442789687465039D339583446 * value)
	{
		___m_Trackables_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_PendingAdds_10() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C, ___m_PendingAdds_10)); }
	inline Dictionary_2_t31868ABD2D8EA88442789687465039D339583446 * get_m_PendingAdds_10() const { return ___m_PendingAdds_10; }
	inline Dictionary_2_t31868ABD2D8EA88442789687465039D339583446 ** get_address_of_m_PendingAdds_10() { return &___m_PendingAdds_10; }
	inline void set_m_PendingAdds_10(Dictionary_2_t31868ABD2D8EA88442789687465039D339583446 * value)
	{
		___m_PendingAdds_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingAdds_10), (void*)value);
	}
};

struct ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C_StaticFields
{
public:
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C * ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * ___s_Removed_13;

public:
	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C_StaticFields, ___U3CinstanceU3Ek__BackingField_7)); }
	inline ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C * get_U3CinstanceU3Ek__BackingField_7() const { return ___U3CinstanceU3Ek__BackingField_7; }
	inline ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C ** get_address_of_U3CinstanceU3Ek__BackingField_7() { return &___U3CinstanceU3Ek__BackingField_7; }
	inline void set_U3CinstanceU3Ek__BackingField_7(ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C * value)
	{
		___U3CinstanceU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinstanceU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_Added_11() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C_StaticFields, ___s_Added_11)); }
	inline List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * get_s_Added_11() const { return ___s_Added_11; }
	inline List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 ** get_address_of_s_Added_11() { return &___s_Added_11; }
	inline void set_s_Added_11(List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * value)
	{
		___s_Added_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Added_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_Updated_12() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C_StaticFields, ___s_Updated_12)); }
	inline List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * get_s_Updated_12() const { return ___s_Updated_12; }
	inline List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 ** get_address_of_s_Updated_12() { return &___s_Updated_12; }
	inline void set_s_Updated_12(List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * value)
	{
		___s_Updated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Updated_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_Removed_13() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C_StaticFields, ___s_Removed_13)); }
	inline List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * get_s_Removed_13() const { return ___s_Removed_13; }
	inline List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 ** get_address_of_s_Removed_13() { return &___s_Removed_13; }
	inline void set_s_Removed_13(List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * value)
	{
		___s_Removed_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Removed_13), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045  : public SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * ___m_PendingAdds_10;

public:
	inline static int32_t get_offset_of_U3CsessionOriginU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045, ___U3CsessionOriginU3Ek__BackingField_8)); }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * get_U3CsessionOriginU3Ek__BackingField_8() const { return ___U3CsessionOriginU3Ek__BackingField_8; }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 ** get_address_of_U3CsessionOriginU3Ek__BackingField_8() { return &___U3CsessionOriginU3Ek__BackingField_8; }
	inline void set_U3CsessionOriginU3Ek__BackingField_8(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * value)
	{
		___U3CsessionOriginU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionOriginU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Trackables_9() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045, ___m_Trackables_9)); }
	inline Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * get_m_Trackables_9() const { return ___m_Trackables_9; }
	inline Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C ** get_address_of_m_Trackables_9() { return &___m_Trackables_9; }
	inline void set_m_Trackables_9(Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * value)
	{
		___m_Trackables_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_PendingAdds_10() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045, ___m_PendingAdds_10)); }
	inline Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * get_m_PendingAdds_10() const { return ___m_PendingAdds_10; }
	inline Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C ** get_address_of_m_PendingAdds_10() { return &___m_PendingAdds_10; }
	inline void set_m_PendingAdds_10(Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * value)
	{
		___m_PendingAdds_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingAdds_10), (void*)value);
	}
};

struct ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields
{
public:
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045 * ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * ___s_Removed_13;

public:
	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields, ___U3CinstanceU3Ek__BackingField_7)); }
	inline ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045 * get_U3CinstanceU3Ek__BackingField_7() const { return ___U3CinstanceU3Ek__BackingField_7; }
	inline ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045 ** get_address_of_U3CinstanceU3Ek__BackingField_7() { return &___U3CinstanceU3Ek__BackingField_7; }
	inline void set_U3CinstanceU3Ek__BackingField_7(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045 * value)
	{
		___U3CinstanceU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinstanceU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_Added_11() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields, ___s_Added_11)); }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * get_s_Added_11() const { return ___s_Added_11; }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 ** get_address_of_s_Added_11() { return &___s_Added_11; }
	inline void set_s_Added_11(List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * value)
	{
		___s_Added_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Added_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_Updated_12() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields, ___s_Updated_12)); }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * get_s_Updated_12() const { return ___s_Updated_12; }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 ** get_address_of_s_Updated_12() { return &___s_Updated_12; }
	inline void set_s_Updated_12(List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * value)
	{
		___s_Updated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Updated_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_Removed_13() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields, ___s_Removed_13)); }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * get_s_Removed_13() const { return ___s_Removed_13; }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 ** get_address_of_s_Removed_13() { return &___s_Removed_13; }
	inline void set_s_Removed_13(List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * value)
	{
		___s_Removed_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Removed_13), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackable_2_t107972B6EEF36EFAECBEE6700C766F5C41F2658C  : public ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___U3CsessionRelativeDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_t107972B6EEF36EFAECBEE6700C766F5C41F2658C, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CpendingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_t107972B6EEF36EFAECBEE6700C766F5C41F2658C, ___U3CpendingU3Ek__BackingField_5)); }
	inline bool get_U3CpendingU3Ek__BackingField_5() const { return ___U3CpendingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CpendingU3Ek__BackingField_5() { return &___U3CpendingU3Ek__BackingField_5; }
	inline void set_U3CpendingU3Ek__BackingField_5(bool value)
	{
		___U3CpendingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackable_2_t107972B6EEF36EFAECBEE6700C766F5C41F2658C, ___U3CsessionRelativeDataU3Ek__BackingField_6)); }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  get_U3CsessionRelativeDataU3Ek__BackingField_6() const { return ___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return &___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_6(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874  : public SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C
{
public:
	// UnityEngine.XR.ARSubsystems.CameraFocusMode UnityEngine.XR.ARFoundation.ARCameraManager::m_FocusMode
	int32_t ___m_FocusMode_7;
	// UnityEngine.XR.ARSubsystems.LightEstimationMode UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimationMode
	int32_t ___m_LightEstimationMode_8;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_AutoFocus
	bool ___m_AutoFocus_9;
	// UnityEngine.XR.ARFoundation.LightEstimation UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimation
	int32_t ___m_LightEstimation_10;
	// UnityEngine.XR.ARFoundation.CameraFacingDirection UnityEngine.XR.ARFoundation.ARCameraManager::m_FacingDirection
	int32_t ___m_FacingDirection_11;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs> UnityEngine.XR.ARFoundation.ARCameraManager::frameReceived
	Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * ___frameReceived_12;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo> UnityEngine.XR.ARFoundation.ARCameraManager::m_TextureInfos
	List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A * ___m_TextureInfos_15;
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARCameraManager::m_Camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_Camera_16;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_PreRenderInvertCullingValue
	bool ___m_PreRenderInvertCullingValue_17;
	// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.ARCameraManager::m_CameraGrainInfo
	ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  ___m_CameraGrainInfo_18;

public:
	inline static int32_t get_offset_of_m_FocusMode_7() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_FocusMode_7)); }
	inline int32_t get_m_FocusMode_7() const { return ___m_FocusMode_7; }
	inline int32_t* get_address_of_m_FocusMode_7() { return &___m_FocusMode_7; }
	inline void set_m_FocusMode_7(int32_t value)
	{
		___m_FocusMode_7 = value;
	}

	inline static int32_t get_offset_of_m_LightEstimationMode_8() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_LightEstimationMode_8)); }
	inline int32_t get_m_LightEstimationMode_8() const { return ___m_LightEstimationMode_8; }
	inline int32_t* get_address_of_m_LightEstimationMode_8() { return &___m_LightEstimationMode_8; }
	inline void set_m_LightEstimationMode_8(int32_t value)
	{
		___m_LightEstimationMode_8 = value;
	}

	inline static int32_t get_offset_of_m_AutoFocus_9() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_AutoFocus_9)); }
	inline bool get_m_AutoFocus_9() const { return ___m_AutoFocus_9; }
	inline bool* get_address_of_m_AutoFocus_9() { return &___m_AutoFocus_9; }
	inline void set_m_AutoFocus_9(bool value)
	{
		___m_AutoFocus_9 = value;
	}

	inline static int32_t get_offset_of_m_LightEstimation_10() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_LightEstimation_10)); }
	inline int32_t get_m_LightEstimation_10() const { return ___m_LightEstimation_10; }
	inline int32_t* get_address_of_m_LightEstimation_10() { return &___m_LightEstimation_10; }
	inline void set_m_LightEstimation_10(int32_t value)
	{
		___m_LightEstimation_10 = value;
	}

	inline static int32_t get_offset_of_m_FacingDirection_11() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_FacingDirection_11)); }
	inline int32_t get_m_FacingDirection_11() const { return ___m_FacingDirection_11; }
	inline int32_t* get_address_of_m_FacingDirection_11() { return &___m_FacingDirection_11; }
	inline void set_m_FacingDirection_11(int32_t value)
	{
		___m_FacingDirection_11 = value;
	}

	inline static int32_t get_offset_of_frameReceived_12() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___frameReceived_12)); }
	inline Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * get_frameReceived_12() const { return ___frameReceived_12; }
	inline Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 ** get_address_of_frameReceived_12() { return &___frameReceived_12; }
	inline void set_frameReceived_12(Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * value)
	{
		___frameReceived_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameReceived_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextureInfos_15() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_TextureInfos_15)); }
	inline List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A * get_m_TextureInfos_15() const { return ___m_TextureInfos_15; }
	inline List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A ** get_address_of_m_TextureInfos_15() { return &___m_TextureInfos_15; }
	inline void set_m_TextureInfos_15(List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A * value)
	{
		___m_TextureInfos_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextureInfos_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_Camera_16() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_Camera_16)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_Camera_16() const { return ___m_Camera_16; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_Camera_16() { return &___m_Camera_16; }
	inline void set_m_Camera_16(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_Camera_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreRenderInvertCullingValue_17() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_PreRenderInvertCullingValue_17)); }
	inline bool get_m_PreRenderInvertCullingValue_17() const { return ___m_PreRenderInvertCullingValue_17; }
	inline bool* get_address_of_m_PreRenderInvertCullingValue_17() { return &___m_PreRenderInvertCullingValue_17; }
	inline void set_m_PreRenderInvertCullingValue_17(bool value)
	{
		___m_PreRenderInvertCullingValue_17 = value;
	}

	inline static int32_t get_offset_of_m_CameraGrainInfo_18() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_CameraGrainInfo_18)); }
	inline ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  get_m_CameraGrainInfo_18() const { return ___m_CameraGrainInfo_18; }
	inline ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355 * get_address_of_m_CameraGrainInfo_18() { return &___m_CameraGrainInfo_18; }
	inline void set_m_CameraGrainInfo_18(ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  value)
	{
		___m_CameraGrainInfo_18 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CameraGrainInfo_18))->___m_Texture_2), (void*)NULL);
	}
};

struct ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraManager::s_Textures
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___s_Textures_13;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraManager::s_PropertyIds
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___s_PropertyIds_14;

public:
	inline static int32_t get_offset_of_s_Textures_13() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_StaticFields, ___s_Textures_13)); }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * get_s_Textures_13() const { return ___s_Textures_13; }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 ** get_address_of_s_Textures_13() { return &___s_Textures_13; }
	inline void set_s_Textures_13(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * value)
	{
		___s_Textures_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Textures_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_PropertyIds_14() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_StaticFields, ___s_PropertyIds_14)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_s_PropertyIds_14() const { return ___s_PropertyIds_14; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_s_PropertyIds_14() { return &___s_PropertyIds_14; }
	inline void set_s_PropertyIds_14(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___s_PropertyIds_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PropertyIds_14), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B  : public SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_AttemptUpdate
	bool ___m_AttemptUpdate_7;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_MatchFrameRate
	bool ___m_MatchFrameRate_8;
	// UnityEngine.XR.ARFoundation.TrackingMode UnityEngine.XR.ARFoundation.ARSession::m_TrackingMode
	int32_t ___m_TrackingMode_9;

public:
	inline static int32_t get_offset_of_m_AttemptUpdate_7() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_AttemptUpdate_7)); }
	inline bool get_m_AttemptUpdate_7() const { return ___m_AttemptUpdate_7; }
	inline bool* get_address_of_m_AttemptUpdate_7() { return &___m_AttemptUpdate_7; }
	inline void set_m_AttemptUpdate_7(bool value)
	{
		___m_AttemptUpdate_7 = value;
	}

	inline static int32_t get_offset_of_m_MatchFrameRate_8() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_MatchFrameRate_8)); }
	inline bool get_m_MatchFrameRate_8() const { return ___m_MatchFrameRate_8; }
	inline bool* get_address_of_m_MatchFrameRate_8() { return &___m_MatchFrameRate_8; }
	inline void set_m_MatchFrameRate_8(bool value)
	{
		___m_MatchFrameRate_8 = value;
	}

	inline static int32_t get_offset_of_m_TrackingMode_9() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_TrackingMode_9)); }
	inline int32_t get_m_TrackingMode_9() const { return ___m_TrackingMode_9; }
	inline int32_t* get_address_of_m_TrackingMode_9() { return &___m_TrackingMode_9; }
	inline void set_m_TrackingMode_9(int32_t value)
	{
		___m_TrackingMode_9 = value;
	}
};

struct ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields
{
public:
	// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs> UnityEngine.XR.ARFoundation.ARSession::stateChanged
	Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * ___stateChanged_10;
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::s_State
	int32_t ___s_State_11;
	// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARFoundation.ARSession::s_NotTrackingReason
	int32_t ___s_NotTrackingReason_12;
	// UnityEngine.XR.ARSubsystems.SessionAvailability UnityEngine.XR.ARFoundation.ARSession::s_Availability
	int32_t ___s_Availability_13;

public:
	inline static int32_t get_offset_of_stateChanged_10() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___stateChanged_10)); }
	inline Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * get_stateChanged_10() const { return ___stateChanged_10; }
	inline Action_1_t5DF84322FFE12A24465E48164961CD724D109521 ** get_address_of_stateChanged_10() { return &___stateChanged_10; }
	inline void set_stateChanged_10(Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * value)
	{
		___stateChanged_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateChanged_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_State_11() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___s_State_11)); }
	inline int32_t get_s_State_11() const { return ___s_State_11; }
	inline int32_t* get_address_of_s_State_11() { return &___s_State_11; }
	inline void set_s_State_11(int32_t value)
	{
		___s_State_11 = value;
	}

	inline static int32_t get_offset_of_s_NotTrackingReason_12() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___s_NotTrackingReason_12)); }
	inline int32_t get_s_NotTrackingReason_12() const { return ___s_NotTrackingReason_12; }
	inline int32_t* get_address_of_s_NotTrackingReason_12() { return &___s_NotTrackingReason_12; }
	inline void set_s_NotTrackingReason_12(int32_t value)
	{
		___s_NotTrackingReason_12 = value;
	}

	inline static int32_t get_offset_of_s_Availability_13() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___s_Availability_13)); }
	inline int32_t get_s_Availability_13() const { return ___s_Availability_13; }
	inline int32_t* get_address_of_s_Availability_13() { return &___s_Availability_13; }
	inline void set_s_Availability_13(int32_t value)
	{
		___s_Availability_13 = value;
	}
};


// DefaultAreaTargetEventHandler
struct DefaultAreaTargetEventHandler_t8240588E2859986CC6CC2F6AFCF5A3867C525BFE  : public DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B
{
public:

public:
};


// DefaultInitializationErrorHandler
struct DefaultInitializationErrorHandler_tFBA569E354DBCE9B7B7F4A60B3554F7FC7B33D16  : public VuforiaMonoBehaviour_t172ED03DD8996A3B90FCEDB8A62EB98DBDCB0932
{
public:
	// System.String DefaultInitializationErrorHandler::mErrorText
	String_t* ___mErrorText_4;
	// System.Boolean DefaultInitializationErrorHandler::mErrorOccurred
	bool ___mErrorOccurred_5;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::bodyStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___bodyStyle_7;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::headerStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___headerStyle_8;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::footerStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___footerStyle_9;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::bodyTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___bodyTexture_10;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::headerTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___headerTexture_11;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::footerTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___footerTexture_12;

public:
	inline static int32_t get_offset_of_mErrorText_4() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_tFBA569E354DBCE9B7B7F4A60B3554F7FC7B33D16, ___mErrorText_4)); }
	inline String_t* get_mErrorText_4() const { return ___mErrorText_4; }
	inline String_t** get_address_of_mErrorText_4() { return &___mErrorText_4; }
	inline void set_mErrorText_4(String_t* value)
	{
		___mErrorText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mErrorText_4), (void*)value);
	}

	inline static int32_t get_offset_of_mErrorOccurred_5() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_tFBA569E354DBCE9B7B7F4A60B3554F7FC7B33D16, ___mErrorOccurred_5)); }
	inline bool get_mErrorOccurred_5() const { return ___mErrorOccurred_5; }
	inline bool* get_address_of_mErrorOccurred_5() { return &___mErrorOccurred_5; }
	inline void set_mErrorOccurred_5(bool value)
	{
		___mErrorOccurred_5 = value;
	}

	inline static int32_t get_offset_of_bodyStyle_7() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_tFBA569E354DBCE9B7B7F4A60B3554F7FC7B33D16, ___bodyStyle_7)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_bodyStyle_7() const { return ___bodyStyle_7; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_bodyStyle_7() { return &___bodyStyle_7; }
	inline void set_bodyStyle_7(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___bodyStyle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bodyStyle_7), (void*)value);
	}

	inline static int32_t get_offset_of_headerStyle_8() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_tFBA569E354DBCE9B7B7F4A60B3554F7FC7B33D16, ___headerStyle_8)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_headerStyle_8() const { return ___headerStyle_8; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_headerStyle_8() { return &___headerStyle_8; }
	inline void set_headerStyle_8(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___headerStyle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headerStyle_8), (void*)value);
	}

	inline static int32_t get_offset_of_footerStyle_9() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_tFBA569E354DBCE9B7B7F4A60B3554F7FC7B33D16, ___footerStyle_9)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_footerStyle_9() const { return ___footerStyle_9; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_footerStyle_9() { return &___footerStyle_9; }
	inline void set_footerStyle_9(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___footerStyle_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___footerStyle_9), (void*)value);
	}

	inline static int32_t get_offset_of_bodyTexture_10() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_tFBA569E354DBCE9B7B7F4A60B3554F7FC7B33D16, ___bodyTexture_10)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_bodyTexture_10() const { return ___bodyTexture_10; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_bodyTexture_10() { return &___bodyTexture_10; }
	inline void set_bodyTexture_10(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___bodyTexture_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bodyTexture_10), (void*)value);
	}

	inline static int32_t get_offset_of_headerTexture_11() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_tFBA569E354DBCE9B7B7F4A60B3554F7FC7B33D16, ___headerTexture_11)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_headerTexture_11() const { return ___headerTexture_11; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_headerTexture_11() { return &___headerTexture_11; }
	inline void set_headerTexture_11(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___headerTexture_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headerTexture_11), (void*)value);
	}

	inline static int32_t get_offset_of_footerTexture_12() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_tFBA569E354DBCE9B7B7F4A60B3554F7FC7B33D16, ___footerTexture_12)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_footerTexture_12() const { return ___footerTexture_12; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_footerTexture_12() { return &___footerTexture_12; }
	inline void set_footerTexture_12(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___footerTexture_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___footerTexture_12), (void*)value);
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


// Vuforia.ObserverBehaviour
struct ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274  : public VuforiaMonoBehaviour_t172ED03DD8996A3B90FCEDB8A62EB98DBDCB0932
{
public:
	// System.Boolean Vuforia.ObserverBehaviour::PreviewVisible
	bool ___PreviewVisible_4;
	// System.Boolean Vuforia.ObserverBehaviour::RuntimeOcclusion
	bool ___RuntimeOcclusion_5;
	// System.String Vuforia.ObserverBehaviour::mTrackableName
	String_t* ___mTrackableName_6;
	// System.Boolean Vuforia.ObserverBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_7;
	// System.Action`2<Vuforia.ObserverBehaviour,Vuforia.TargetStatus> Vuforia.ObserverBehaviour::OnTargetStatusChanged
	Action_2_tBEC7B0597650F8D41DD8126DFAC07D2EA63976A4 * ___OnTargetStatusChanged_8;
	// System.Action`1<Vuforia.ObserverBehaviour> Vuforia.ObserverBehaviour::OnBehaviourDestroyed
	Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775 * ___OnBehaviourDestroyed_9;
	// Vuforia.Internal.Observers.IObserver Vuforia.ObserverBehaviour::mObserver
	RuntimeObject* ___mObserver_10;
	// Vuforia.TargetStatus Vuforia.ObserverBehaviour::<TargetStatus>k__BackingField
	TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  ___U3CTargetStatusU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_PreviewVisible_4() { return static_cast<int32_t>(offsetof(ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274, ___PreviewVisible_4)); }
	inline bool get_PreviewVisible_4() const { return ___PreviewVisible_4; }
	inline bool* get_address_of_PreviewVisible_4() { return &___PreviewVisible_4; }
	inline void set_PreviewVisible_4(bool value)
	{
		___PreviewVisible_4 = value;
	}

	inline static int32_t get_offset_of_RuntimeOcclusion_5() { return static_cast<int32_t>(offsetof(ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274, ___RuntimeOcclusion_5)); }
	inline bool get_RuntimeOcclusion_5() const { return ___RuntimeOcclusion_5; }
	inline bool* get_address_of_RuntimeOcclusion_5() { return &___RuntimeOcclusion_5; }
	inline void set_RuntimeOcclusion_5(bool value)
	{
		___RuntimeOcclusion_5 = value;
	}

	inline static int32_t get_offset_of_mTrackableName_6() { return static_cast<int32_t>(offsetof(ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274, ___mTrackableName_6)); }
	inline String_t* get_mTrackableName_6() const { return ___mTrackableName_6; }
	inline String_t** get_address_of_mTrackableName_6() { return &___mTrackableName_6; }
	inline void set_mTrackableName_6(String_t* value)
	{
		___mTrackableName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTrackableName_6), (void*)value);
	}

	inline static int32_t get_offset_of_mInitializedInEditor_7() { return static_cast<int32_t>(offsetof(ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274, ___mInitializedInEditor_7)); }
	inline bool get_mInitializedInEditor_7() const { return ___mInitializedInEditor_7; }
	inline bool* get_address_of_mInitializedInEditor_7() { return &___mInitializedInEditor_7; }
	inline void set_mInitializedInEditor_7(bool value)
	{
		___mInitializedInEditor_7 = value;
	}

	inline static int32_t get_offset_of_OnTargetStatusChanged_8() { return static_cast<int32_t>(offsetof(ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274, ___OnTargetStatusChanged_8)); }
	inline Action_2_tBEC7B0597650F8D41DD8126DFAC07D2EA63976A4 * get_OnTargetStatusChanged_8() const { return ___OnTargetStatusChanged_8; }
	inline Action_2_tBEC7B0597650F8D41DD8126DFAC07D2EA63976A4 ** get_address_of_OnTargetStatusChanged_8() { return &___OnTargetStatusChanged_8; }
	inline void set_OnTargetStatusChanged_8(Action_2_tBEC7B0597650F8D41DD8126DFAC07D2EA63976A4 * value)
	{
		___OnTargetStatusChanged_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTargetStatusChanged_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnBehaviourDestroyed_9() { return static_cast<int32_t>(offsetof(ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274, ___OnBehaviourDestroyed_9)); }
	inline Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775 * get_OnBehaviourDestroyed_9() const { return ___OnBehaviourDestroyed_9; }
	inline Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775 ** get_address_of_OnBehaviourDestroyed_9() { return &___OnBehaviourDestroyed_9; }
	inline void set_OnBehaviourDestroyed_9(Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775 * value)
	{
		___OnBehaviourDestroyed_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnBehaviourDestroyed_9), (void*)value);
	}

	inline static int32_t get_offset_of_mObserver_10() { return static_cast<int32_t>(offsetof(ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274, ___mObserver_10)); }
	inline RuntimeObject* get_mObserver_10() const { return ___mObserver_10; }
	inline RuntimeObject** get_address_of_mObserver_10() { return &___mObserver_10; }
	inline void set_mObserver_10(RuntimeObject* value)
	{
		___mObserver_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mObserver_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTargetStatusU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274, ___U3CTargetStatusU3Ek__BackingField_11)); }
	inline TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  get_U3CTargetStatusU3Ek__BackingField_11() const { return ___U3CTargetStatusU3Ek__BackingField_11; }
	inline TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1 * get_address_of_U3CTargetStatusU3Ek__BackingField_11() { return &___U3CTargetStatusU3Ek__BackingField_11; }
	inline void set_U3CTargetStatusU3Ek__BackingField_11(TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  value)
	{
		___U3CTargetStatusU3Ek__BackingField_11 = value;
	}
};


// Vuforia.VuforiaAugmentationRenderer
struct VuforiaAugmentationRenderer_tC6BFEB2AAD6037D587F8A520CCF2C12618BD1886  : public VuforiaMonoBehaviour_t172ED03DD8996A3B90FCEDB8A62EB98DBDCB0932
{
public:

public:
};


// Vuforia.VuforiaBehaviour
struct VuforiaBehaviour_t6114F20D1970225E083A4FBAFB269FA524FEF407  : public VuforiaMonoBehaviour_t172ED03DD8996A3B90FCEDB8A62EB98DBDCB0932
{
public:
	// Vuforia.Internal.Core.IEngine Vuforia.VuforiaBehaviour::mEngine
	RuntimeObject* ___mEngine_5;
	// Vuforia.IObserverRegistry Vuforia.VuforiaBehaviour::mObserversRegistry
	RuntimeObject* ___mObserversRegistry_6;
	// Vuforia.WorldCenterMode Vuforia.VuforiaBehaviour::mWorldCenterMode
	int32_t ___mWorldCenterMode_7;
	// Vuforia.ObserverBehaviour Vuforia.VuforiaBehaviour::mWorldCenter
	ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * ___mWorldCenter_8;
	// Vuforia.CameraDevice Vuforia.VuforiaBehaviour::<CameraDevice>k__BackingField
	CameraDevice_t5A659FEC1FF047A9D0BE5A49CE224EECCF96697F * ___U3CCameraDeviceU3Ek__BackingField_9;
	// Vuforia.ObserverFactory Vuforia.VuforiaBehaviour::<ObserverFactory>k__BackingField
	ObserverFactory_t8F8A436F3E3074002EAC9BC33F75BB80335496F5 * ___U3CObserverFactoryU3Ek__BackingField_10;
	// Vuforia.DevicePoseBehaviour Vuforia.VuforiaBehaviour::<DevicePoseBehaviour>k__BackingField
	DevicePoseBehaviour_t228722CAB359AE9B3CB16CCE4DFA70DB951C35E1 * ___U3CDevicePoseBehaviourU3Ek__BackingField_11;
	// Vuforia.VideoBackground Vuforia.VuforiaBehaviour::<VideoBackground>k__BackingField
	VideoBackground_tABAA05A8DC2011C5B98D09B8DF0C36853D585713 * ___U3CVideoBackgroundU3Ek__BackingField_12;
	// Vuforia.World Vuforia.VuforiaBehaviour::<World>k__BackingField
	World_tD34189E7DB459CEB10A1D3C0D7C94B25197AD14F * ___U3CWorldU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_mEngine_5() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t6114F20D1970225E083A4FBAFB269FA524FEF407, ___mEngine_5)); }
	inline RuntimeObject* get_mEngine_5() const { return ___mEngine_5; }
	inline RuntimeObject** get_address_of_mEngine_5() { return &___mEngine_5; }
	inline void set_mEngine_5(RuntimeObject* value)
	{
		___mEngine_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mEngine_5), (void*)value);
	}

	inline static int32_t get_offset_of_mObserversRegistry_6() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t6114F20D1970225E083A4FBAFB269FA524FEF407, ___mObserversRegistry_6)); }
	inline RuntimeObject* get_mObserversRegistry_6() const { return ___mObserversRegistry_6; }
	inline RuntimeObject** get_address_of_mObserversRegistry_6() { return &___mObserversRegistry_6; }
	inline void set_mObserversRegistry_6(RuntimeObject* value)
	{
		___mObserversRegistry_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mObserversRegistry_6), (void*)value);
	}

	inline static int32_t get_offset_of_mWorldCenterMode_7() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t6114F20D1970225E083A4FBAFB269FA524FEF407, ___mWorldCenterMode_7)); }
	inline int32_t get_mWorldCenterMode_7() const { return ___mWorldCenterMode_7; }
	inline int32_t* get_address_of_mWorldCenterMode_7() { return &___mWorldCenterMode_7; }
	inline void set_mWorldCenterMode_7(int32_t value)
	{
		___mWorldCenterMode_7 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_8() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t6114F20D1970225E083A4FBAFB269FA524FEF407, ___mWorldCenter_8)); }
	inline ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * get_mWorldCenter_8() const { return ___mWorldCenter_8; }
	inline ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 ** get_address_of_mWorldCenter_8() { return &___mWorldCenter_8; }
	inline void set_mWorldCenter_8(ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * value)
	{
		___mWorldCenter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mWorldCenter_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCameraDeviceU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t6114F20D1970225E083A4FBAFB269FA524FEF407, ___U3CCameraDeviceU3Ek__BackingField_9)); }
	inline CameraDevice_t5A659FEC1FF047A9D0BE5A49CE224EECCF96697F * get_U3CCameraDeviceU3Ek__BackingField_9() const { return ___U3CCameraDeviceU3Ek__BackingField_9; }
	inline CameraDevice_t5A659FEC1FF047A9D0BE5A49CE224EECCF96697F ** get_address_of_U3CCameraDeviceU3Ek__BackingField_9() { return &___U3CCameraDeviceU3Ek__BackingField_9; }
	inline void set_U3CCameraDeviceU3Ek__BackingField_9(CameraDevice_t5A659FEC1FF047A9D0BE5A49CE224EECCF96697F * value)
	{
		___U3CCameraDeviceU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCameraDeviceU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CObserverFactoryU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t6114F20D1970225E083A4FBAFB269FA524FEF407, ___U3CObserverFactoryU3Ek__BackingField_10)); }
	inline ObserverFactory_t8F8A436F3E3074002EAC9BC33F75BB80335496F5 * get_U3CObserverFactoryU3Ek__BackingField_10() const { return ___U3CObserverFactoryU3Ek__BackingField_10; }
	inline ObserverFactory_t8F8A436F3E3074002EAC9BC33F75BB80335496F5 ** get_address_of_U3CObserverFactoryU3Ek__BackingField_10() { return &___U3CObserverFactoryU3Ek__BackingField_10; }
	inline void set_U3CObserverFactoryU3Ek__BackingField_10(ObserverFactory_t8F8A436F3E3074002EAC9BC33F75BB80335496F5 * value)
	{
		___U3CObserverFactoryU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CObserverFactoryU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDevicePoseBehaviourU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t6114F20D1970225E083A4FBAFB269FA524FEF407, ___U3CDevicePoseBehaviourU3Ek__BackingField_11)); }
	inline DevicePoseBehaviour_t228722CAB359AE9B3CB16CCE4DFA70DB951C35E1 * get_U3CDevicePoseBehaviourU3Ek__BackingField_11() const { return ___U3CDevicePoseBehaviourU3Ek__BackingField_11; }
	inline DevicePoseBehaviour_t228722CAB359AE9B3CB16CCE4DFA70DB951C35E1 ** get_address_of_U3CDevicePoseBehaviourU3Ek__BackingField_11() { return &___U3CDevicePoseBehaviourU3Ek__BackingField_11; }
	inline void set_U3CDevicePoseBehaviourU3Ek__BackingField_11(DevicePoseBehaviour_t228722CAB359AE9B3CB16CCE4DFA70DB951C35E1 * value)
	{
		___U3CDevicePoseBehaviourU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDevicePoseBehaviourU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVideoBackgroundU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t6114F20D1970225E083A4FBAFB269FA524FEF407, ___U3CVideoBackgroundU3Ek__BackingField_12)); }
	inline VideoBackground_tABAA05A8DC2011C5B98D09B8DF0C36853D585713 * get_U3CVideoBackgroundU3Ek__BackingField_12() const { return ___U3CVideoBackgroundU3Ek__BackingField_12; }
	inline VideoBackground_tABAA05A8DC2011C5B98D09B8DF0C36853D585713 ** get_address_of_U3CVideoBackgroundU3Ek__BackingField_12() { return &___U3CVideoBackgroundU3Ek__BackingField_12; }
	inline void set_U3CVideoBackgroundU3Ek__BackingField_12(VideoBackground_tABAA05A8DC2011C5B98D09B8DF0C36853D585713 * value)
	{
		___U3CVideoBackgroundU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVideoBackgroundU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CWorldU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t6114F20D1970225E083A4FBAFB269FA524FEF407, ___U3CWorldU3Ek__BackingField_13)); }
	inline World_tD34189E7DB459CEB10A1D3C0D7C94B25197AD14F * get_U3CWorldU3Ek__BackingField_13() const { return ___U3CWorldU3Ek__BackingField_13; }
	inline World_tD34189E7DB459CEB10A1D3C0D7C94B25197AD14F ** get_address_of_U3CWorldU3Ek__BackingField_13() { return &___U3CWorldU3Ek__BackingField_13; }
	inline void set_U3CWorldU3Ek__BackingField_13(World_tD34189E7DB459CEB10A1D3C0D7C94B25197AD14F * value)
	{
		___U3CWorldU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CWorldU3Ek__BackingField_13), (void*)value);
	}
};

struct VuforiaBehaviour_t6114F20D1970225E083A4FBAFB269FA524FEF407_StaticFields
{
public:
	// Vuforia.VuforiaBehaviour Vuforia.VuforiaBehaviour::sInstance
	VuforiaBehaviour_t6114F20D1970225E083A4FBAFB269FA524FEF407 * ___sInstance_4;

public:
	inline static int32_t get_offset_of_sInstance_4() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t6114F20D1970225E083A4FBAFB269FA524FEF407_StaticFields, ___sInstance_4)); }
	inline VuforiaBehaviour_t6114F20D1970225E083A4FBAFB269FA524FEF407 * get_sInstance_4() const { return ___sInstance_4; }
	inline VuforiaBehaviour_t6114F20D1970225E083A4FBAFB269FA524FEF407 ** get_address_of_sInstance_4() { return &___sInstance_4; }
	inline void set_sInstance_4(VuforiaBehaviour_t6114F20D1970225E083A4FBAFB269FA524FEF407 * value)
	{
		___sInstance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sInstance_4), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARAnchor
struct ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C  : public ARTrackable_2_t107972B6EEF36EFAECBEE6700C766F5C41F2658C
{
public:

public:
};


// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F  : public ARTrackableManager_5_tF58ECFC7F6A90AF84C72F45AEED8FF0190D59C1C
{
public:
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARAnchorManager::m_AnchorPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_AnchorPrefab_14;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs> UnityEngine.XR.ARFoundation.ARAnchorManager::anchorsChanged
	Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C * ___anchorsChanged_15;

public:
	inline static int32_t get_offset_of_m_AnchorPrefab_14() { return static_cast<int32_t>(offsetof(ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F, ___m_AnchorPrefab_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_AnchorPrefab_14() const { return ___m_AnchorPrefab_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_AnchorPrefab_14() { return &___m_AnchorPrefab_14; }
	inline void set_m_AnchorPrefab_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_AnchorPrefab_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnchorPrefab_14), (void*)value);
	}

	inline static int32_t get_offset_of_anchorsChanged_15() { return static_cast<int32_t>(offsetof(ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F, ___anchorsChanged_15)); }
	inline Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C * get_anchorsChanged_15() const { return ___anchorsChanged_15; }
	inline Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C ** get_address_of_anchorsChanged_15() { return &___anchorsChanged_15; }
	inline void set_anchorsChanged_15(Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C * value)
	{
		___anchorsChanged_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anchorsChanged_15), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F  : public ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045
{
public:
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_RaycastPrefab_14;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t0D7774CBEE7827744440205CF327276346298BD3 * ___m_RaycastViewportDelegate_17;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197 * ___m_RaycastRayDelegate_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27 * ___m_Raycasters_19;

public:
	inline static int32_t get_offset_of_m_RaycastPrefab_14() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F, ___m_RaycastPrefab_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_RaycastPrefab_14() const { return ___m_RaycastPrefab_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_RaycastPrefab_14() { return &___m_RaycastPrefab_14; }
	inline void set_m_RaycastPrefab_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_RaycastPrefab_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastPrefab_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_RaycastViewportDelegate_17() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F, ___m_RaycastViewportDelegate_17)); }
	inline Func_4_t0D7774CBEE7827744440205CF327276346298BD3 * get_m_RaycastViewportDelegate_17() const { return ___m_RaycastViewportDelegate_17; }
	inline Func_4_t0D7774CBEE7827744440205CF327276346298BD3 ** get_address_of_m_RaycastViewportDelegate_17() { return &___m_RaycastViewportDelegate_17; }
	inline void set_m_RaycastViewportDelegate_17(Func_4_t0D7774CBEE7827744440205CF327276346298BD3 * value)
	{
		___m_RaycastViewportDelegate_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastViewportDelegate_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_RaycastRayDelegate_18() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F, ___m_RaycastRayDelegate_18)); }
	inline Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197 * get_m_RaycastRayDelegate_18() const { return ___m_RaycastRayDelegate_18; }
	inline Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197 ** get_address_of_m_RaycastRayDelegate_18() { return &___m_RaycastRayDelegate_18; }
	inline void set_m_RaycastRayDelegate_18(Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197 * value)
	{
		___m_RaycastRayDelegate_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastRayDelegate_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_Raycasters_19() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F, ___m_Raycasters_19)); }
	inline List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27 * get_m_Raycasters_19() const { return ___m_Raycasters_19; }
	inline List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27 ** get_address_of_m_Raycasters_19() { return &___m_Raycasters_19; }
	inline void set_m_Raycasters_19(List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27 * value)
	{
		___m_Raycasters_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Raycasters_19), (void*)value);
	}
};

struct ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_StaticFields
{
public:
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE * ___s_RaycastHitComparer_15;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469 * ___s_NativeRaycastHits_16;

public:
	inline static int32_t get_offset_of_s_RaycastHitComparer_15() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_StaticFields, ___s_RaycastHitComparer_15)); }
	inline Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE * get_s_RaycastHitComparer_15() const { return ___s_RaycastHitComparer_15; }
	inline Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE ** get_address_of_s_RaycastHitComparer_15() { return &___s_RaycastHitComparer_15; }
	inline void set_s_RaycastHitComparer_15(Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE * value)
	{
		___s_RaycastHitComparer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastHitComparer_15), (void*)value);
	}

	inline static int32_t get_offset_of_s_NativeRaycastHits_16() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_StaticFields, ___s_NativeRaycastHits_16)); }
	inline List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469 * get_s_NativeRaycastHits_16() const { return ___s_NativeRaycastHits_16; }
	inline List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469 ** get_address_of_s_NativeRaycastHits_16() { return &___s_NativeRaycastHits_16; }
	inline void set_s_NativeRaycastHits_16(List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469 * value)
	{
		___s_NativeRaycastHits_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NativeRaycastHits_16), (void*)value);
	}
};


// Vuforia.DataSetTrackableBehaviour
struct DataSetTrackableBehaviour_tDACD5B676DD2E9EE2943323AC60A131390E676BA  : public ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274
{
public:
	// System.String Vuforia.DataSetTrackableBehaviour::mDataSetPath
	String_t* ___mDataSetPath_13;

public:
	inline static int32_t get_offset_of_mDataSetPath_13() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_tDACD5B676DD2E9EE2943323AC60A131390E676BA, ___mDataSetPath_13)); }
	inline String_t* get_mDataSetPath_13() const { return ___mDataSetPath_13; }
	inline String_t** get_address_of_mDataSetPath_13() { return &___mDataSetPath_13; }
	inline void set_mDataSetPath_13(String_t* value)
	{
		___mDataSetPath_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDataSetPath_13), (void*)value);
	}
};

struct DataSetTrackableBehaviour_tDACD5B676DD2E9EE2943323AC60A131390E676BA_StaticFields
{
public:
	// System.Single Vuforia.DataSetTrackableBehaviour::VirtualSceneScaleFactor
	float ___VirtualSceneScaleFactor_12;

public:
	inline static int32_t get_offset_of_VirtualSceneScaleFactor_12() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_tDACD5B676DD2E9EE2943323AC60A131390E676BA_StaticFields, ___VirtualSceneScaleFactor_12)); }
	inline float get_VirtualSceneScaleFactor_12() const { return ___VirtualSceneScaleFactor_12; }
	inline float* get_address_of_VirtualSceneScaleFactor_12() { return &___VirtualSceneScaleFactor_12; }
	inline void set_VirtualSceneScaleFactor_12(float value)
	{
		___VirtualSceneScaleFactor_12 = value;
	}
};


// Vuforia.ScalableDataSetTrackableBehaviour
struct ScalableDataSetTrackableBehaviour_t4703A60B9EF85DCBEDB83ED8EE286EB319831E64  : public DataSetTrackableBehaviour_tDACD5B676DD2E9EE2943323AC60A131390E676BA
{
public:

public:
};


// Vuforia.VuMarkBehaviour
struct VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2  : public ScalableDataSetTrackableBehaviour_t4703A60B9EF85DCBEDB83ED8EE286EB319831E64
{
public:
	// Vuforia.DataSetTrackableBehaviour/TargetMotionHint Vuforia.VuMarkBehaviour::mMotionHint
	int32_t ___mMotionHint_14;
	// Vuforia.VuMarkInstanceId Vuforia.VuMarkBehaviour::<InstanceId>k__BackingField
	RuntimeObject* ___U3CInstanceIdU3Ek__BackingField_15;
	// Vuforia.Image Vuforia.VuMarkBehaviour::<InstanceImage>k__BackingField
	Image_tEA90BDBB0131379427A1282935D21313F94DFDB1 * ___U3CInstanceImageU3Ek__BackingField_16;
	// System.String Vuforia.VuMarkBehaviour::<VuMarkUserData>k__BackingField
	String_t* ___U3CVuMarkUserDataU3Ek__BackingField_17;
	// System.Single Vuforia.VuMarkBehaviour::mAspectRatio
	float ___mAspectRatio_18;
	// System.Single Vuforia.VuMarkBehaviour::mWidth
	float ___mWidth_19;
	// System.Single Vuforia.VuMarkBehaviour::mHeight
	float ___mHeight_20;
	// System.String Vuforia.VuMarkBehaviour::mPreviewImage
	String_t* ___mPreviewImage_21;
	// Vuforia.InstanceIdType Vuforia.VuMarkBehaviour::mIdType
	int32_t ___mIdType_22;
	// System.Int32 Vuforia.VuMarkBehaviour::mIdLength
	int32_t ___mIdLength_23;
	// UnityEngine.Vector2 Vuforia.VuMarkBehaviour::mOrigin
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___mOrigin_24;
	// UnityEngine.Rect Vuforia.VuMarkBehaviour::mBoundingBox
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___mBoundingBox_25;
	// System.Boolean Vuforia.VuMarkBehaviour::mTrackingFromRuntimeAppearance
	bool ___mTrackingFromRuntimeAppearance_26;
	// System.Nullable`1<System.Int32> Vuforia.VuMarkBehaviour::<RuntimeId>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CRuntimeIdU3Ek__BackingField_27;
	// Vuforia.VuMarkInstancesManager Vuforia.VuMarkBehaviour::mInstancesManager
	VuMarkInstancesManager_t901C2384A8FD62E9C62E6D18B8ED116FB9EFBC1F * ___mInstancesManager_28;
	// Vuforia.VuMarkPreview Vuforia.VuMarkBehaviour::mPreview
	VuMarkPreview_t7745561F9348795064F637DD5D2E14D07F40E8E2 * ___mPreview_29;
	// Vuforia.Internal.Observers.VuMarkObserver Vuforia.VuMarkBehaviour::mVuMarkObserver
	VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 * ___mVuMarkObserver_30;
	// UnityEngine.Vector2 Vuforia.VuMarkBehaviour::mLastSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___mLastSize_31;

public:
	inline static int32_t get_offset_of_mMotionHint_14() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___mMotionHint_14)); }
	inline int32_t get_mMotionHint_14() const { return ___mMotionHint_14; }
	inline int32_t* get_address_of_mMotionHint_14() { return &___mMotionHint_14; }
	inline void set_mMotionHint_14(int32_t value)
	{
		___mMotionHint_14 = value;
	}

	inline static int32_t get_offset_of_U3CInstanceIdU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___U3CInstanceIdU3Ek__BackingField_15)); }
	inline RuntimeObject* get_U3CInstanceIdU3Ek__BackingField_15() const { return ___U3CInstanceIdU3Ek__BackingField_15; }
	inline RuntimeObject** get_address_of_U3CInstanceIdU3Ek__BackingField_15() { return &___U3CInstanceIdU3Ek__BackingField_15; }
	inline void set_U3CInstanceIdU3Ek__BackingField_15(RuntimeObject* value)
	{
		___U3CInstanceIdU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceIdU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInstanceImageU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___U3CInstanceImageU3Ek__BackingField_16)); }
	inline Image_tEA90BDBB0131379427A1282935D21313F94DFDB1 * get_U3CInstanceImageU3Ek__BackingField_16() const { return ___U3CInstanceImageU3Ek__BackingField_16; }
	inline Image_tEA90BDBB0131379427A1282935D21313F94DFDB1 ** get_address_of_U3CInstanceImageU3Ek__BackingField_16() { return &___U3CInstanceImageU3Ek__BackingField_16; }
	inline void set_U3CInstanceImageU3Ek__BackingField_16(Image_tEA90BDBB0131379427A1282935D21313F94DFDB1 * value)
	{
		___U3CInstanceImageU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceImageU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVuMarkUserDataU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___U3CVuMarkUserDataU3Ek__BackingField_17)); }
	inline String_t* get_U3CVuMarkUserDataU3Ek__BackingField_17() const { return ___U3CVuMarkUserDataU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CVuMarkUserDataU3Ek__BackingField_17() { return &___U3CVuMarkUserDataU3Ek__BackingField_17; }
	inline void set_U3CVuMarkUserDataU3Ek__BackingField_17(String_t* value)
	{
		___U3CVuMarkUserDataU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVuMarkUserDataU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_mAspectRatio_18() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___mAspectRatio_18)); }
	inline float get_mAspectRatio_18() const { return ___mAspectRatio_18; }
	inline float* get_address_of_mAspectRatio_18() { return &___mAspectRatio_18; }
	inline void set_mAspectRatio_18(float value)
	{
		___mAspectRatio_18 = value;
	}

	inline static int32_t get_offset_of_mWidth_19() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___mWidth_19)); }
	inline float get_mWidth_19() const { return ___mWidth_19; }
	inline float* get_address_of_mWidth_19() { return &___mWidth_19; }
	inline void set_mWidth_19(float value)
	{
		___mWidth_19 = value;
	}

	inline static int32_t get_offset_of_mHeight_20() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___mHeight_20)); }
	inline float get_mHeight_20() const { return ___mHeight_20; }
	inline float* get_address_of_mHeight_20() { return &___mHeight_20; }
	inline void set_mHeight_20(float value)
	{
		___mHeight_20 = value;
	}

	inline static int32_t get_offset_of_mPreviewImage_21() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___mPreviewImage_21)); }
	inline String_t* get_mPreviewImage_21() const { return ___mPreviewImage_21; }
	inline String_t** get_address_of_mPreviewImage_21() { return &___mPreviewImage_21; }
	inline void set_mPreviewImage_21(String_t* value)
	{
		___mPreviewImage_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPreviewImage_21), (void*)value);
	}

	inline static int32_t get_offset_of_mIdType_22() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___mIdType_22)); }
	inline int32_t get_mIdType_22() const { return ___mIdType_22; }
	inline int32_t* get_address_of_mIdType_22() { return &___mIdType_22; }
	inline void set_mIdType_22(int32_t value)
	{
		___mIdType_22 = value;
	}

	inline static int32_t get_offset_of_mIdLength_23() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___mIdLength_23)); }
	inline int32_t get_mIdLength_23() const { return ___mIdLength_23; }
	inline int32_t* get_address_of_mIdLength_23() { return &___mIdLength_23; }
	inline void set_mIdLength_23(int32_t value)
	{
		___mIdLength_23 = value;
	}

	inline static int32_t get_offset_of_mOrigin_24() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___mOrigin_24)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_mOrigin_24() const { return ___mOrigin_24; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_mOrigin_24() { return &___mOrigin_24; }
	inline void set_mOrigin_24(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___mOrigin_24 = value;
	}

	inline static int32_t get_offset_of_mBoundingBox_25() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___mBoundingBox_25)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_mBoundingBox_25() const { return ___mBoundingBox_25; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_mBoundingBox_25() { return &___mBoundingBox_25; }
	inline void set_mBoundingBox_25(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___mBoundingBox_25 = value;
	}

	inline static int32_t get_offset_of_mTrackingFromRuntimeAppearance_26() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___mTrackingFromRuntimeAppearance_26)); }
	inline bool get_mTrackingFromRuntimeAppearance_26() const { return ___mTrackingFromRuntimeAppearance_26; }
	inline bool* get_address_of_mTrackingFromRuntimeAppearance_26() { return &___mTrackingFromRuntimeAppearance_26; }
	inline void set_mTrackingFromRuntimeAppearance_26(bool value)
	{
		___mTrackingFromRuntimeAppearance_26 = value;
	}

	inline static int32_t get_offset_of_U3CRuntimeIdU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___U3CRuntimeIdU3Ek__BackingField_27)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3CRuntimeIdU3Ek__BackingField_27() const { return ___U3CRuntimeIdU3Ek__BackingField_27; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3CRuntimeIdU3Ek__BackingField_27() { return &___U3CRuntimeIdU3Ek__BackingField_27; }
	inline void set_U3CRuntimeIdU3Ek__BackingField_27(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3CRuntimeIdU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_mInstancesManager_28() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___mInstancesManager_28)); }
	inline VuMarkInstancesManager_t901C2384A8FD62E9C62E6D18B8ED116FB9EFBC1F * get_mInstancesManager_28() const { return ___mInstancesManager_28; }
	inline VuMarkInstancesManager_t901C2384A8FD62E9C62E6D18B8ED116FB9EFBC1F ** get_address_of_mInstancesManager_28() { return &___mInstancesManager_28; }
	inline void set_mInstancesManager_28(VuMarkInstancesManager_t901C2384A8FD62E9C62E6D18B8ED116FB9EFBC1F * value)
	{
		___mInstancesManager_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mInstancesManager_28), (void*)value);
	}

	inline static int32_t get_offset_of_mPreview_29() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___mPreview_29)); }
	inline VuMarkPreview_t7745561F9348795064F637DD5D2E14D07F40E8E2 * get_mPreview_29() const { return ___mPreview_29; }
	inline VuMarkPreview_t7745561F9348795064F637DD5D2E14D07F40E8E2 ** get_address_of_mPreview_29() { return &___mPreview_29; }
	inline void set_mPreview_29(VuMarkPreview_t7745561F9348795064F637DD5D2E14D07F40E8E2 * value)
	{
		___mPreview_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPreview_29), (void*)value);
	}

	inline static int32_t get_offset_of_mVuMarkObserver_30() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___mVuMarkObserver_30)); }
	inline VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 * get_mVuMarkObserver_30() const { return ___mVuMarkObserver_30; }
	inline VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 ** get_address_of_mVuMarkObserver_30() { return &___mVuMarkObserver_30; }
	inline void set_mVuMarkObserver_30(VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 * value)
	{
		___mVuMarkObserver_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVuMarkObserver_30), (void*)value);
	}

	inline static int32_t get_offset_of_mLastSize_31() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___mLastSize_31)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_mLastSize_31() const { return ___mLastSize_31; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_mLastSize_31() { return &___mLastSize_31; }
	inline void set_mLastSize_31(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___mLastSize_31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Vuforia.VuforiaAugmentationRenderer[]
struct VuforiaAugmentationRendererU5BU5D_tEECC38D68E1CEA50FE982965BC188F2B8EE31178  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) VuforiaAugmentationRenderer_tC6BFEB2AAD6037D587F8A520CCF2C12618BD1886 * m_Items[1];

public:
	inline VuforiaAugmentationRenderer_tC6BFEB2AAD6037D587F8A520CCF2C12618BD1886 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VuforiaAugmentationRenderer_tC6BFEB2AAD6037D587F8A520CCF2C12618BD1886 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VuforiaAugmentationRenderer_tC6BFEB2AAD6037D587F8A520CCF2C12618BD1886 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline VuforiaAugmentationRenderer_tC6BFEB2AAD6037D587F8A520CCF2C12618BD1886 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VuforiaAugmentationRenderer_tC6BFEB2AAD6037D587F8A520CCF2C12618BD1886 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VuforiaAugmentationRenderer_tC6BFEB2AAD6037D587F8A520CCF2C12618BD1886 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * m_Items[1];

public:
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Canvas[]
struct CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * m_Items[1];

public:
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * m_Items[1];

public:
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  m_Items[1];

public:
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Camera[]
struct CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * m_Items[1];

public:
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, bool ___includeInactive0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m5A0949EFB73F1BDBEBE3CB814917A79FBF9B3DEA_gshared (Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::GetBuiltinResource<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_GetBuiltinResource_TisRuntimeObject_m85FFA735284D2F100379DF680CD253B4A5F99B85_gshared (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Vuforia.TargetStatus>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m524A56D70AB0876D7D763AAF48D8A7D051AB0635_gshared (Action_2_tEC03432E1591AF6C19EAE8E64F8502FBEEAAB87C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m7137356547ADC5089A381F0EC5E9280576983E2E_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m442691FA3EA8C84ADA0081254C58A2FFAE8C7932_gshared (Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Vuforia.DriverCameraMode>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC64A79DDC43BF71FC8C0B5F4BA20F1C6A16B3580_gshared (List_1_tC88E8D307029C3E0623CA706C3221D1D905D71DD * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mAABAFD79174F11BFA437674F61634721D84D9C31_gshared (NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD873E6DED9BBA65F7D6231064F2E61F525F46F3F  NativeArray_1_GetEnumerator_m5BA172840229277B6088558B57827D9E79314688_gshared (NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 * __this, const RuntimeMethod* method);
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  Enumerator_get_Current_m10E36893D34D73C78917FD5CF87BB1415D504E64_gshared (Enumerator_tD873E6DED9BBA65F7D6231064F2E61F525F46F3F * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Vuforia.DriverCameraMode>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mBD8F0C645C2270EC9AC1D6BBEB9F2CC42377C88F_gshared (List_1_tC88E8D307029C3E0623CA706C3221D1D905D71DD * __this, DriverCameraMode_tFE34FC60BECEF81615274E556D3678EB2E1220DF  ___item0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m68045EEFE01DB4EE0075EAE7A66750275D4C6DE0_gshared (Enumerator_tD873E6DED9BBA65F7D6231064F2E61F525F46F3F * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3184BCF3BD31DDC25872BF499DE67CE1FA608F53_gshared (Enumerator_tD873E6DED9BBA65F7D6231064F2E61F525F46F3F * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mC554164DB459D59B2467A614F681C87FD00ACC11_gshared (NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.SortedDictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2__ctor_m102BD7C1FAE0172B425351956583745310AD32EE_gshared (SortedDictionary_2_t92AAE0684C5DB745C349DA7F33FC9053C5224388 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Int32,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedDictionary_2_ContainsKey_m1C6AE7D0D3F6E43CCE0C33B7506059899E100131_gshared (SortedDictionary_2_t92AAE0684C5DB745C349DA7F33FC9053C5224388 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m128157547D09AFE9970E788136E8D26A9C8F8F57_gshared (List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.SortedDictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2_Add_m3700938D2D854BBEEFECE019AF2FA9F1ADE27CD7_gshared (SortedDictionary_2_t92AAE0684C5DB745C349DA7F33FC9053C5224388 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.SortedDictionary`2<System.Int32,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SortedDictionary_2_get_Item_m683E6775AD41D6CEAB46D6AEAE9F82DAC859AB87_gshared (SortedDictionary_2_t92AAE0684C5DB745C349DA7F33FC9053C5224388 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6060E14B0C14D050D42FB325D6D9D10947E24130_gshared (List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A * __this, XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___item0, const RuntimeMethod* method);
// System.Void System.Func`2<UnityEngine.XR.ARSubsystems.XRCameraConfiguration,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m5078D981AF46B4D52AF0FFF91A7D34899E115513_gshared (Func_2_t7E05C7C6DEC66BBE1049328BA77DC6F0E4D34737 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::First<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  Enumerable_First_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m1A338096F660EF3B4824D26E9E61DD38CE98E901_gshared (RuntimeObject* ___source0, Func_2_t7E05C7C6DEC66BBE1049328BA77DC6F0E4D34737 * ___predicate1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD8E0C85C96E8F68E55600773D64912BF77F68545_gshared_inline (Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  Nullable_1_GetValueOrDefault_mE1F110F3C76C59DF1376A23841ADA9E9970B97D8_gshared_inline (Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mC8B2FF6D15E5BD1BF52356C2621F2BE4AD504054_gshared (Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C * __this, XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___value0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Int64>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m52E8A4C73D8357C219884A4AF7CFECD2A825F447_gshared (Action_2_tF2E4E5A9734EA571C61DC7DE4225669282B47B68 * __this, RuntimeObject * ___arg10, int64_t ___arg21, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.Byte>::.ctor(!0[],Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m263D100CDC58D42ECBC9CF6E884C3AD506FE4CF1_gshared (NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___allocator1, const RuntimeMethod* method);
// System.Void System.Action`1<Vuforia.ARFoundation.ARFoundationImage>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m8FF727B865C8424147FD6AAB428AA28B82EC9C93_gshared (Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * __this, ARFoundationImage_t52F1BCE1FC354D7635660A1B2C33CB5319F0B16B  ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRAnchor,System.Object>::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ARTrackable_2_get_trackableId_mDF0899C7B97D5A8B4C3D6D778B7258035086550A_gshared (ARTrackable_2_t4D63EF8A1807656AA0F8C461700E5E7FCC02AB5A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Tuple`2<!!0,!!1> System.Tuple::Create<System.Object,System.Object>(!!0,!!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * Tuple_Create_TisRuntimeObject_TisRuntimeObject_m8C528936C6BBCDBD98BD32BECA098C18DDF823BA_gshared (RuntimeObject * ___item10, RuntimeObject * ___item21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382_gshared (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !0 UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>::get_subsystem()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_3_get_subsystem_m50CDB488C754452B0104C6EC4DAC7D0A85A43F61_gshared_inline (SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_gshared (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, const RuntimeMethod* method);
// System.Void System.Converter`2<UnityEngine.XR.ARFoundation.ARRaycastHit,UnityEngine.Pose>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Converter_2__ctor_m2A6F2071D4F717FDD19FF41DEF0D50DFB8511AD9_gshared (Converter_2_tC64B44F1A0EAFD8273C87D483DA826F259BA6D53 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::ConvertAll<UnityEngine.Pose>(System.Converter`2<!0,!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C * List_1_ConvertAll_TisPose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_mA74800C458088266E02F3C5CABC35604E9B6E0B0_gshared (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, Converter_2_tC64B44F1A0EAFD8273C87D483DA826F259BA6D53 * ___converter0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Action`1<Vuforia.ARFoundation.ARFoundationImage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m5D27168A59CFFABB7C27EBE02757F21047177A3B_gshared (Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Int64>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m078694AB3D6969E4873495BB4E25982FC9416562_gshared (Action_2_tF2E4E5A9734EA571C61DC7DE4225669282B47B68 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_gshared (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<System.Object>(System.Collections.Generic.List`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_m03F5680ED2CCAB3F6C5556F973FE6E3CF704AED2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___descriptors0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m503CFC42924101FFC7AAB45FD1EE567AECFB2DDB_gshared (Action_2_tD344092D96CD0E43070CBCDAFD460F86AC996BCC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemManager::GetInstances<System.Object>(System.Collections.Generic.List`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetInstances_TisRuntimeObject_mF37532CC93E9088116D7150AA6A94582E7B7D3F4_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___subsystems0, const RuntimeMethod* method);

// System.Void Vuforia.UnityRuntimeCompiled.ARFoundationInitializer::InitializeFacade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFoundationInitializer_InitializeFacade_m482BCAE1955E3CDE00DF9ACFF8A39C851EA69E53 (const RuntimeMethod* method);
// System.Void Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSourceARFoundationFacade__ctor_mC9A0CF19CF002218E1FB23D43AA2CBE6472C8588 (OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * __this, const RuntimeMethod* method);
// System.Void Vuforia.ARFoundation.ARFoundationFacade::set_Instance(Vuforia.ARFoundation.IARFoundationFacade)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARFoundationFacade_set_Instance_mC94EDA640C3D11D269067A94381F4DCCEB67C2C7_inline (RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::PushMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PushMatrix_mF13C635BFA475627C347FAD0EE427B3136870C5E (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GL::MultMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_MultMatrix_mA86724868A2E74F650EDE65D638130286EFE7F88 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_CreatePrimitive_m3F797A3D7CBF364F6581F6C800AB9F9BAF5000C6 (int32_t ___type0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD0C3D9CFAFE0FB858D864092467387D7FA178245 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___source0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_m2F4F3E4DD95471924015E9CB5AF20E59C650EE37 (const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_SetPass_mC888245491A21488CFF2FD64CA45E8404CB9FF9C (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___pass0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::Begin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Begin_m78BA7DD04145D5704C1578361986CC4AF36270EE (int32_t ___mode0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Vertex3_mA3BF0159F797C20BC8D69A85422DE82030A28345 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.GL::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_End_m2AB599EE687D1FA391FDA08D420B1877F53176EF (const RuntimeMethod* method);
// System.Void UnityEngine.GL::PopMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PopMatrix_m7EA6B7B55FAFB9C1B96969D4898B887CFD6B2AF2 (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void DefaultAreaTargetEventHandler::SetAugmentationRendering(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultAreaTargetEventHandler_SetAugmentationRendering_mB4B9001E1A51E75DB34742E59D85151543C66EEC (DefaultAreaTargetEventHandler_t8240588E2859986CC6CC2F6AFCF5A3867C525BFE * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void DefaultAreaTargetEventHandler::SetEnabledOnChildComponents(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultAreaTargetEventHandler_SetEnabledOnChildComponents_m3CEEC99A1D77AEA75967A0C486077DA74D13C133 (DefaultAreaTargetEventHandler_t8240588E2859986CC6CC2F6AFCF5A3867C525BFE * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___augmentationTransform0, bool ___value1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void DefaultAreaTargetEventHandler::SetVuforiaRenderingComponents(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultAreaTargetEventHandler_SetVuforiaRenderingComponents_m9774139833F9E305162F06ED6C8B769014B159C1 (DefaultAreaTargetEventHandler_t8240588E2859986CC6CC2F6AFCF5A3867C525BFE * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Vuforia.VuforiaAugmentationRenderer>()
inline VuforiaAugmentationRenderer_tC6BFEB2AAD6037D587F8A520CCF2C12618BD1886 * Component_GetComponent_TisVuforiaAugmentationRenderer_tC6BFEB2AAD6037D587F8A520CCF2C12618BD1886_m458D839DD96788B7214C401DF761109DE0DDA86C (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  VuforiaAugmentationRenderer_tC6BFEB2AAD6037D587F8A520CCF2C12618BD1886 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Canvas>()
inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * Component_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD63281542675697ADC038B664E30F73F6BC1F1D1 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1 (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, bool ___value0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<Vuforia.VuforiaAugmentationRenderer>(System.Boolean)
inline VuforiaAugmentationRendererU5BU5D_tEECC38D68E1CEA50FE982965BC188F2B8EE31178* Component_GetComponentsInChildren_TisVuforiaAugmentationRenderer_tC6BFEB2AAD6037D587F8A520CCF2C12618BD1886_m3E6B199729B5920EC9846D9D0451574E086A0A94 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  VuforiaAugmentationRendererU5BU5D_tEECC38D68E1CEA50FE982965BC188F2B8EE31178* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared)(__this, ___includeInactive0, method);
}
// System.Void DefaultObserverEventHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultObserverEventHandler__ctor_mB7B7FF78886F7B3161AFFC36878E1B4D5C759DFB (DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B * __this, const RuntimeMethod* method);
// System.Void DefaultInitializationErrorHandler::SetErrorCode(Vuforia.VuforiaInitError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetErrorCode_mFB9D86324595BF329F0B248C72549DD4C61EE163 (DefaultInitializationErrorHandler_tFBA569E354DBCE9B7B7F4A60B3554F7FC7B33D16 * __this, int32_t ___initError0, const RuntimeMethod* method);
// System.Void DefaultInitializationErrorHandler::SetErrorOccurred(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetErrorOccurred_m13800AE31C02CD82EE11E13D39D1F93ED9F81ADA_inline (DefaultInitializationErrorHandler_tFBA569E354DBCE9B7B7F4A60B3554F7FC7B33D16 * __this, bool ___errorOccurred0, const RuntimeMethod* method);
// Vuforia.VuforiaApplication Vuforia.VuforiaApplication::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuforiaApplication_tDC756FC5605334FDF0FF6F95CC0FEE4E134D64F1 * VuforiaApplication_get_Instance_mAE3192D808C9F2B8F7EACDC490DD5F2E72DF8A75 (const RuntimeMethod* method);
// System.Void System.Action`1<Vuforia.VuforiaInitError>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m07256E4CBF2A3BE17ACA6171025AA2780396C303 (Action_1_tAA1D1EEFC680CD9A5C6DDD77BD612C0BBD43C306 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAA1D1EEFC680CD9A5C6DDD77BD612C0BBD43C306 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m5A0949EFB73F1BDBEBE3CB814917A79FBF9B3DEA_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Vuforia.VuforiaApplication::add_OnVuforiaInitialized(System.Action`1<Vuforia.VuforiaInitError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuforiaApplication_add_OnVuforiaInitialized_m82008FC56E10E431B54233DA208CDE36EB86EAF6 (VuforiaApplication_tDC756FC5605334FDF0FF6F95CC0FEE4E134D64F1 * __this, Action_1_tAA1D1EEFC680CD9A5C6DDD77BD612C0BBD43C306 * ___value0, const RuntimeMethod* method);
// System.Void DefaultInitializationErrorHandler::SetupGUIStyles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetupGUIStyles_m7D00483BC5B0BBACDE444AA750DAEB470A831AAB (DefaultInitializationErrorHandler_tFBA569E354DBCE9B7B7F4A60B3554F7FC7B33D16 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m44AD823DE1C2962E3B9CE69F680C6602034DC778 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m71F7E12C4F33639042D80425D3169E288368C67A (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowFunction__ctor_mCC6005520B912B8BFFAECE3612EB3334FF681238 (WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  GUI_Window_m5EF22ADD201ED6C150BFEF1979267A5C61D52C89 (int32_t ___id0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___clientRect1, WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * ___func2, String_t* ___text3, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaApplication::remove_OnVuforiaInitialized(System.Action`1<Vuforia.VuforiaInitError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuforiaApplication_remove_OnVuforiaInitialized_m80CA2C38CE224B4D05876B7C98B2250AD25F9467 (VuforiaApplication_tDC756FC5605334FDF0FF6F95CC0FEE4E134D64F1 * __this, Action_1_tAA1D1EEFC680CD9A5C6DDD77BD612C0BBD43C306 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_mDCF44EA10FC251164175E50000F63BC951D4CC8B (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style2, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m0A13253823318D62AEF06BA846375693480F8F75 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style2, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m10E44C187C0E5807F9C955A176885FAA95829267 (const RuntimeMethod* method);
// System.String DefaultInitializationErrorHandler::getKeyInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefaultInitializationErrorHandler_getKeyInfo_m05400C559216B3EDAF7951515B3E15CDE577F0C6 (DefaultInitializationErrorHandler_tFBA569E354DBCE9B7B7F4A60B3554F7FC7B33D16 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_productName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_productName_mE8E298D58DDF815355494B776956B037693481C4 (const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m5D784E6CEEBE99ED8749AA4B9491D926273FD749 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1 (RuntimeObject * ___message0, const RuntimeMethod* method);
// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuforiaConfiguration_tD9B249335070DBFF290D1B3ED05D245874C2A4B4 * VuforiaConfiguration_get_Instance_mCC7299F32C3DB1A842F0CC90AF2DFD611B1C3F88 (const RuntimeMethod* method);
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration Vuforia.VuforiaConfiguration::get_Vuforia()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * VuforiaConfiguration_get_Vuforia_m25E6CB6560AD0F1B74BA9572D9020C6889E983DD_inline (VuforiaConfiguration_tD9B249335070DBFF290D1B3ED05D245874C2A4B4 * __this, const RuntimeMethod* method);
// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_LicenseKey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GenericVuforiaConfiguration_get_LicenseKey_m8AA6D2ECB5A580D638BD35D85C6D493E1733FA32_inline (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Single UnityEngine.Screen::get_dpi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Screen_get_dpi_m85EE75E8213E87F9A12DCC43342CFCE122097D71 (const RuntimeMethod* method);
// UnityEngine.Texture2D DefaultInitializationErrorHandler::CreateSinglePixelTexture(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * DefaultInitializationErrorHandler_CreateSinglePixelTexture_m55A1103D76BEF27C969C54F8071F9E0F8C6192FD (DefaultInitializationErrorHandler_tFBA569E354DBCE9B7B7F4A60B3554F7FC7B33D16 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_InverseLerp_m1A0AE609371BB464712207341F5AA46C756BA7C2 (float ___a0, float ___b1, float ___value2, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_background(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_background_mA80B6ED2555C6551933E2D0ECA5081FC254B6A21 (GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::GetBuiltinResource<UnityEngine.Font>(System.String)
inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * Resources_GetBuiltinResource_TisFont_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9_mC31B9BA9D7584A0432008C387569793EAFAEA818 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * (*) (String_t*, const RuntimeMethod*))Resources_GetBuiltinResource_TisRuntimeObject_m85FFA735284D2F100379DF680CD253B4A5F99B85_gshared)(___path0, method);
}
// System.Void UnityEngine.GUIStyle::set_font(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_font_mC9394F6F07C952232F0E82FBF11F47FE472EFDB4 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_mD8CAAC9E4B8C5C92A21D176E4AB2C521CFA0EF7F (const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A (GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_wordWrap_mB6D788509ADD7BBDEFFB4409E5719FF14DC9A684 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_alignment_mCF8FDA9DA149F528DCDC19680AEED46F25161D89 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RectOffset::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectOffset__ctor_m428BA3F4AE287FA7D5F4CED6394225951E5E507B (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * __this, int32_t ___left0, int32_t ___right1, int32_t ___top2, int32_t ___bottom3, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_padding(UnityEngine.RectOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_padding_mD697AB7636560BDEE22A3DBB513F37236DFE9A00 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mF096C292507D1BE25B6C458FB771CFC4509CE95B (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m78878905E58C5DE9BCFED8D9262D025789E22F92 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___x0, int32_t ___y1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaMonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuforiaMonoBehaviour__ctor_mD21E7C30B7685653D979F399BF3E6528DC120A70 (VuforiaMonoBehaviour_t172ED03DD8996A3B90FCEDB8A62EB98DBDCB0932 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Vuforia.ObserverBehaviour>()
inline ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * Component_GetComponent_TisObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274_m2BF53E726DEB22E09654453E75F5ECF4F293E6C0 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void System.Action`2<Vuforia.ObserverBehaviour,Vuforia.TargetStatus>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m6702F5465C5156B1FB05A678988FF9A80D94AE06 (Action_2_tBEC7B0597650F8D41DD8126DFAC07D2EA63976A4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tBEC7B0597650F8D41DD8126DFAC07D2EA63976A4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m524A56D70AB0876D7D763AAF48D8A7D051AB0635_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Vuforia.ObserverBehaviour::add_OnTargetStatusChanged(System.Action`2<Vuforia.ObserverBehaviour,Vuforia.TargetStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObserverBehaviour_add_OnTargetStatusChanged_m35984866CE532D434875F398D32362E05D90197F (ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * __this, Action_2_tBEC7B0597650F8D41DD8126DFAC07D2EA63976A4 * ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<Vuforia.ObserverBehaviour>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mFDAFDD7480C974BAAB7915B1566987E6FF2863FC (Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Vuforia.ObserverBehaviour::add_OnBehaviourDestroyed(System.Action`1<Vuforia.ObserverBehaviour>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObserverBehaviour_add_OnBehaviourDestroyed_m0194A9DC1CB5B11FE2F24E3A1D406D925D31FA48 (ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * __this, Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775 * ___value0, const RuntimeMethod* method);
// Vuforia.TargetStatus Vuforia.ObserverBehaviour::get_TargetStatus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  ObserverBehaviour_get_TargetStatus_m9F21B240F06DA71ED4613EB3A99ADA6E1942A499_inline (ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * __this, const RuntimeMethod* method);
// System.Void DefaultObserverEventHandler::OnObserverStatusChanged(Vuforia.ObserverBehaviour,Vuforia.TargetStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultObserverEventHandler_OnObserverStatusChanged_m030A3CC1650F60A62A00D9E4E55AA88DDC6DEF7D (DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B * __this, ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * ___behaviour0, TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  ___targetStatus1, const RuntimeMethod* method);
// System.Void DefaultObserverEventHandler::SetupPoseSmoothing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultObserverEventHandler_SetupPoseSmoothing_mB61EA45A21B82D38E6F0B8EB117F95D27CAC6041 (DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B * __this, const RuntimeMethod* method);
// Vuforia.VuforiaBehaviour Vuforia.VuforiaBehaviour::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuforiaBehaviour_t6114F20D1970225E083A4FBAFB269FA524FEF407 * VuforiaBehaviour_get_Instance_mF563DFB36205C62EAEC611673162CF5016DA5A03 (const RuntimeMethod* method);
// Vuforia.World Vuforia.VuforiaBehaviour::get_World()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR World_tD34189E7DB459CEB10A1D3C0D7C94B25197AD14F * VuforiaBehaviour_get_World_mC71DDE046F81C181091466CDF791EE76EB0582A1_inline (VuforiaBehaviour_t6114F20D1970225E083A4FBAFB269FA524FEF407 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Vuforia.World::remove_OnStateUpdated(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_remove_OnStateUpdated_m3B37D9C4EAD22763956ADC3BB008C1106F2AA786 (World_tD34189E7DB459CEB10A1D3C0D7C94B25197AD14F * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Void DefaultObserverEventHandler::OnObserverDestroyed(Vuforia.ObserverBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultObserverEventHandler_OnObserverDestroyed_m1CB3F37FA62FD6C48DF24D4337153AEED55C30C7 (DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B * __this, ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * ___observer0, const RuntimeMethod* method);
// System.Void DefaultObserverEventHandler/PoseSmoother::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseSmoother_Dispose_m72E5515BFBBDD98CC5F7E3D5B0124B02BD0E0B2B (PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB * __this, const RuntimeMethod* method);
// System.Void Vuforia.ObserverBehaviour::remove_OnTargetStatusChanged(System.Action`2<Vuforia.ObserverBehaviour,Vuforia.TargetStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObserverBehaviour_remove_OnTargetStatusChanged_m0D9E06F1D07D727D888A974EFCF948AAC02F5BCC (ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * __this, Action_2_tBEC7B0597650F8D41DD8126DFAC07D2EA63976A4 * ___value0, const RuntimeMethod* method);
// System.Void Vuforia.ObserverBehaviour::remove_OnBehaviourDestroyed(System.Action`1<Vuforia.ObserverBehaviour>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObserverBehaviour_remove_OnBehaviourDestroyed_m8F2C49A65AD8BA4135842F32F7BE59990003D87F (ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * __this, Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775 * ___value0, const RuntimeMethod* method);
// System.String Vuforia.ObserverBehaviour::get_TargetName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ObserverBehaviour_get_TargetName_m66DAA89D2597636EED4EDD92F1C05167CDB688AD_inline (ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * __this, const RuntimeMethod* method);
// Vuforia.VuMarkInstanceId Vuforia.VuMarkBehaviour::get_InstanceId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VuMarkBehaviour_get_InstanceId_m73EF1F9F535AFC24A86D86EEDB775D5E81BD132D_inline (VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2 * __this, const RuntimeMethod* method);
// Vuforia.Status Vuforia.TargetStatus::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TargetStatus_get_Status_mD745DEB3CFE4D18A1E973178AA8CA9BB73178D5E_inline (TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1 * __this, const RuntimeMethod* method);
// Vuforia.StatusInfo Vuforia.TargetStatus::get_StatusInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TargetStatus_get_StatusInfo_m45D7AFC8563C8FCEA15B0E2983F59E8C88A37B9D_inline (TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mD0D523A440845BA7F58E68187E029DC9AB821CED (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean DefaultObserverEventHandler::ShouldBeRendered(Vuforia.Status)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultObserverEventHandler_ShouldBeRendered_mFBFA09B26DF5E3B25DE98CB8BD3D9FB007876D6F (DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B * __this, int32_t ___status0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_m92BE92B1C1EDD4B66E5D3CF9ED6480D7D3FFA0E9 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>(System.Boolean)
inline RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* Component_GetComponentsInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m1A95B452BAE19475E5A65028964BF91500D30E24 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared)(__this, ___includeInactive0, method);
}
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Collider>(System.Boolean)
inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* Component_GetComponentsInChildren_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m3B2271E32876821DA2A4626F1841EE1F38944EB2 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared)(__this, ___includeInactive0, method);
}
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Canvas>(System.Boolean)
inline CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* Component_GetComponentsInChildren_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD5E5663A016CDAD3F6409404EE12FD8BFAAC79FF (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared)(__this, ___includeInactive0, method);
}
// Vuforia.WorldCenterMode Vuforia.VuforiaBehaviour::get_WorldCenterMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VuforiaBehaviour_get_WorldCenterMode_mE0CB269C2A317EBEF02FE53240A456D609CFF35C_inline (VuforiaBehaviour_t6114F20D1970225E083A4FBAFB269FA524FEF407 * __this, const RuntimeMethod* method);
// System.Void DefaultObserverEventHandler/PoseSmoother::.ctor(Vuforia.ObserverBehaviour,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseSmoother__ctor_mFBFE84CAB2D8C6329EF21B8112E81575D020EB64 (PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB * __this, ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * ___target0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___animationCurve1, const RuntimeMethod* method);
// System.Void Vuforia.World::add_OnStateUpdated(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World_add_OnStateUpdated_m4BA04D2093A27CC0BAEE90E2100537AFD5362F43 (World_tD34189E7DB459CEB10A1D3C0D7C94B25197AD14F * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Void DefaultObserverEventHandler/PoseSmoother::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseSmoother_Update_m3A8D6EDB3153B4136B48AC8491A41A41CC662F38 (PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB * __this, const RuntimeMethod* method);
// UnityEngine.AnimationCurve UnityEngine.AnimationCurve::Linear(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * AnimationCurve_Linear_m16BC66B778E72884D1E105EC7A15E8CF8ADDBF04 (float ___timeStart0, float ___valueStart1, float ___timeEnd2, float ___valueEnd3, const RuntimeMethod* method);
// Vuforia.TargetStatus Vuforia.TargetStatus::get_NotObserved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  TargetStatus_get_NotObserved_mB76C66781AFB21647114F43B899E57422A61EE90 (const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.XR.ARFoundation.ARSession>()
inline ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * Object_FindObjectOfType_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m02CC4A1C778D32BBEBFD5363556C9538A378F77A (const RuntimeMethod* method)
{
	return ((  ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m7137356547ADC5089A381F0EC5E9280576983E2E_gshared)(method);
}
// System.Void Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<CheckAvailability>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckAvailabilityU3Ed__19__ctor_m02ADF7AFDDA63B842228C65BC26698C4A4746235 (U3CCheckAvailabilityU3Ed__19_tB688CDF56303EDC427E5E356E3A9150AA2E58155 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.XR.ARFoundation.ARCameraManager>()
inline ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * Object_FindObjectOfType_TisARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_mBD742602F73DAB84C8C5D145A1AB4F789119147B (const RuntimeMethod* method)
{
	return ((  ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m7137356547ADC5089A381F0EC5E9280576983E2E_gshared)(method);
}
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.XR.ARFoundation.ARSessionOrigin>()
inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * Object_FindObjectOfType_TisARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1_mF212B3EE0FB0DB020FD9872AD998D47FAC45C2C3 (const RuntimeMethod* method)
{
	return ((  ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m7137356547ADC5089A381F0EC5E9280576983E2E_gshared)(method);
}
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.XR.ARFoundation.ARRaycastManager>()
inline ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * Object_FindObjectOfType_TisARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_m1E2B3B4339AA236F036237F8567404C07A412BD5 (const RuntimeMethod* method)
{
	return ((  ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m7137356547ADC5089A381F0EC5E9280576983E2E_gshared)(method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARAnchorManager>()
inline ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * Component_GetComponent_TisARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F_m9B2DAFBA4C933C9B828C8BE816CA1C594584E2CB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.XR.ARFoundation.ARAnchorManager>()
inline ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * GameObject_AddComponent_TisARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F_m69F9BCEA3450A9169900704B4AE6906AE4E19EA0 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m442691FA3EA8C84ADA0081254C58A2FFAE8C7932 (Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m442691FA3EA8C84ADA0081254C58A2FFAE8C7932_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARAnchorManager::add_anchorsChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARAnchorManager_add_anchorsChanged_m32E33C78B20F072111FEBBDB2AFEF1F8B25EA367 (ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * __this, Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Application::add_onBeforeRender(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_onBeforeRender_m1324FCAC06439BC14CFCE062C6BEFB76C7501228 (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARSession::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSession_Reset_m3C78CB4465887888EE1A5EEBCCD47E8D462A1116 (ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARAnchorManager::remove_anchorsChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARAnchorManager_remove_anchorsChanged_m36F2B944753B78D564BDFD3D7118934AD836AB6B (ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * __this, Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::remove_onBeforeRender(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_onBeforeRender_mD2FFDA214D242F524EFF15932A7334F1F0D526D0 (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___value0, const RuntimeMethod* method);
// System.Void Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<WaitForCameraReady>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForCameraReadyU3Ed__22__ctor_m5D11875E779D5953FD1529E1B1DF9354A5A090B5 (U3CWaitForCameraReadyU3Ed__22_tA4BE56875445D83B986D8AB04FBC0C0608175827 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::get_state()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_state_mD422F6EFE9346D0D7056D6A11F17F70D09ED3FD9_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Vuforia.DriverCameraMode>::.ctor()
inline void List_1__ctor_mC64A79DDC43BF71FC8C0B5F4BA20F1C6A16B3580 (List_1_tC88E8D307029C3E0623CA706C3221D1D905D71DD * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC88E8D307029C3E0623CA706C3221D1D905D71DD *, const RuntimeMethod*))List_1__ctor_mC64A79DDC43BF71FC8C0B5F4BA20F1C6A16B3580_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration> UnityEngine.XR.ARFoundation.ARCameraManager::GetConfigurations(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545  ARCameraManager_GetConfigurations_mEEFC0B584A219FAC0E7726499C1A2C6F1A364DD2 (ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * __this, int32_t ___allocator0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_mAABAFD79174F11BFA437674F61634721D84D9C31 (NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 *, const RuntimeMethod*))NativeArray_1_get_IsCreated_mAABAFD79174F11BFA437674F61634721D84D9C31_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::GetEnumerator()
inline Enumerator_tD873E6DED9BBA65F7D6231064F2E61F525F46F3F  NativeArray_1_GetEnumerator_m5BA172840229277B6088558B57827D9E79314688 (NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD873E6DED9BBA65F7D6231064F2E61F525F46F3F  (*) (NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 *, const RuntimeMethod*))NativeArray_1_GetEnumerator_m5BA172840229277B6088558B57827D9E79314688_gshared)(__this, method);
}
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::get_Current()
inline XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  Enumerator_get_Current_m10E36893D34D73C78917FD5CF87BB1415D504E64 (Enumerator_tD873E6DED9BBA65F7D6231064F2E61F525F46F3F * __this, const RuntimeMethod* method)
{
	return ((  XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  (*) (Enumerator_tD873E6DED9BBA65F7D6231064F2E61F525F46F3F *, const RuntimeMethod*))Enumerator_get_Current_m10E36893D34D73C78917FD5CF87BB1415D504E64_gshared)(__this, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraConfiguration::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCameraConfiguration_get_width_m019869C624524B8C4EA0021D9331F2AD856A25C3 (XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraConfiguration::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRCameraConfiguration_get_height_mAAC1B9AE539EF89D59585A6BFC8F925F94AA14D3 (XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> UnityEngine.XR.ARSubsystems.XRCameraConfiguration::get_framerate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  XRCameraConfiguration_get_framerate_m3DCC7B7F2FEAFDFB5ED0A580153FBAAA22B60B96 (XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline)(__this, method);
}
// System.Void Vuforia.DriverCameraMode::.ctor(System.Int32,System.Int32,System.Int32,Vuforia.DriverPixelFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DriverCameraMode__ctor_m0FB39D564A41A2B9FFA932D86974028B5CB41159 (DriverCameraMode_tFE34FC60BECEF81615274E556D3678EB2E1220DF * __this, int32_t ___width0, int32_t ___height1, int32_t ___fps2, int32_t ___format3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Vuforia.DriverCameraMode>::Add(!0)
inline void List_1_Add_mBD8F0C645C2270EC9AC1D6BBEB9F2CC42377C88F (List_1_tC88E8D307029C3E0623CA706C3221D1D905D71DD * __this, DriverCameraMode_tFE34FC60BECEF81615274E556D3678EB2E1220DF  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC88E8D307029C3E0623CA706C3221D1D905D71DD *, DriverCameraMode_tFE34FC60BECEF81615274E556D3678EB2E1220DF , const RuntimeMethod*))List_1_Add_mBD8F0C645C2270EC9AC1D6BBEB9F2CC42377C88F_gshared)(__this, ___item0, method);
}
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::MoveNext()
inline bool Enumerator_MoveNext_m68045EEFE01DB4EE0075EAE7A66750275D4C6DE0 (Enumerator_tD873E6DED9BBA65F7D6231064F2E61F525F46F3F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD873E6DED9BBA65F7D6231064F2E61F525F46F3F *, const RuntimeMethod*))Enumerator_MoveNext_m68045EEFE01DB4EE0075EAE7A66750275D4C6DE0_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::Dispose()
inline void Enumerator_Dispose_m3184BCF3BD31DDC25872BF499DE67CE1FA608F53 (Enumerator_tD873E6DED9BBA65F7D6231064F2E61F525F46F3F * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD873E6DED9BBA65F7D6231064F2E61F525F46F3F *, const RuntimeMethod*))Enumerator_Dispose_m3184BCF3BD31DDC25872BF499DE67CE1FA608F53_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::Dispose()
inline void NativeArray_1_Dispose_mC554164DB459D59B2467A614F681C87FD00ACC11 (NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 *, const RuntimeMethod*))NativeArray_1_Dispose_mC554164DB459D59B2467A614F681C87FD00ACC11_gshared)(__this, method);
}
// System.Void Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<>c__DisplayClass26_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0__ctor_mE7C8CF9C5257530C6611AE8CCC1366241BAEEC2F (U3CU3Ec__DisplayClass26_0_t315C6B6CB80468086F2427B2F2518AFDEED9AF8C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.SortedDictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>>::.ctor()
inline void SortedDictionary_2__ctor_mCBFD51A13B37B3DB7DADE4671A7B0799DA72DA58 (SortedDictionary_2_tF9C4707959CBD1F373B52730EFAB7444F569E8B3 * __this, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_tF9C4707959CBD1F373B52730EFAB7444F569E8B3 *, const RuntimeMethod*))SortedDictionary_2__ctor_m102BD7C1FAE0172B425351956583745310AD32EE_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>>::ContainsKey(!0)
inline bool SortedDictionary_2_ContainsKey_mFF776ED41F275AEDA1810A4A123CF6BFF69E863C (SortedDictionary_2_tF9C4707959CBD1F373B52730EFAB7444F569E8B3 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedDictionary_2_tF9C4707959CBD1F373B52730EFAB7444F569E8B3 *, int32_t, const RuntimeMethod*))SortedDictionary_2_ContainsKey_m1C6AE7D0D3F6E43CCE0C33B7506059899E100131_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::.ctor()
inline void List_1__ctor_m128157547D09AFE9970E788136E8D26A9C8F8F57 (List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A *, const RuntimeMethod*))List_1__ctor_m128157547D09AFE9970E788136E8D26A9C8F8F57_gshared)(__this, method);
}
// System.Void System.Collections.Generic.SortedDictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>>::Add(!0,!1)
inline void SortedDictionary_2_Add_mA1FC348CFCB4266BFC55D7B48210E42508F8EC71 (SortedDictionary_2_tF9C4707959CBD1F373B52730EFAB7444F569E8B3 * __this, int32_t ___key0, List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A * ___value1, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_tF9C4707959CBD1F373B52730EFAB7444F569E8B3 *, int32_t, List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A *, const RuntimeMethod*))SortedDictionary_2_Add_m3700938D2D854BBEEFECE019AF2FA9F1ADE27CD7_gshared)(__this, ___key0, ___value1, method);
}
// !1 System.Collections.Generic.SortedDictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>>::get_Item(!0)
inline List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A * SortedDictionary_2_get_Item_m7D45638BB73E05A8CB4D592D19B08DD2C7D59FE6 (SortedDictionary_2_tF9C4707959CBD1F373B52730EFAB7444F569E8B3 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A * (*) (SortedDictionary_2_tF9C4707959CBD1F373B52730EFAB7444F569E8B3 *, int32_t, const RuntimeMethod*))SortedDictionary_2_get_Item_m683E6775AD41D6CEAB46D6AEAE9F82DAC859AB87_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::Add(!0)
inline void List_1_Add_m6060E14B0C14D050D42FB325D6D9D10947E24130 (List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A * __this, XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A *, XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A , const RuntimeMethod*))List_1_Add_m6060E14B0C14D050D42FB325D6D9D10947E24130_gshared)(__this, ___item0, method);
}
// System.Void System.Func`2<UnityEngine.XR.ARSubsystems.XRCameraConfiguration,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m5078D981AF46B4D52AF0FFF91A7D34899E115513 (Func_2_t7E05C7C6DEC66BBE1049328BA77DC6F0E4D34737 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7E05C7C6DEC66BBE1049328BA77DC6F0E4D34737 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m5078D981AF46B4D52AF0FFF91A7D34899E115513_gshared)(__this, ___object0, ___method1, method);
}
// !!0 System.Linq.Enumerable::First<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  Enumerable_First_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m1A338096F660EF3B4824D26E9E61DD38CE98E901 (RuntimeObject* ___source0, Func_2_t7E05C7C6DEC66BBE1049328BA77DC6F0E4D34737 * ___predicate1, const RuntimeMethod* method)
{
	return ((  XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  (*) (RuntimeObject*, Func_2_t7E05C7C6DEC66BBE1049328BA77DC6F0E4D34737 *, const RuntimeMethod*))Enumerable_First_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m1A338096F660EF3B4824D26E9E61DD38CE98E901_gshared)(___source0, ___predicate1, method);
}
// System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration> UnityEngine.XR.ARFoundation.ARCameraManager::get_currentConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C  ARCameraManager_get_currentConfiguration_mF0BCE9EA9476CAC016A7FDDCB29C33485CB06889 (ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::get_HasValue()
inline bool Nullable_1_get_HasValue_mD8E0C85C96E8F68E55600773D64912BF77F68545_inline (Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C *, const RuntimeMethod*))Nullable_1_get_HasValue_mD8E0C85C96E8F68E55600773D64912BF77F68545_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::GetValueOrDefault()
inline XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  Nullable_1_GetValueOrDefault_mE1F110F3C76C59DF1376A23841ADA9E9970B97D8_inline (Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C * __this, const RuntimeMethod* method)
{
	return ((  XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  (*) (Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mE1F110F3C76C59DF1376A23841ADA9E9970B97D8_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraConfiguration::op_Inequality(UnityEngine.XR.ARSubsystems.XRCameraConfiguration,UnityEngine.XR.ARSubsystems.XRCameraConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraConfiguration_op_Inequality_m39FA53E5F97CF68C4A9F8BB9A4FB24A22055411C (XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___lhs0, XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___rhs1, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::.ctor(!0)
inline void Nullable_1__ctor_mC8B2FF6D15E5BD1BF52356C2621F2BE4AD504054 (Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C * __this, XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C *, XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A , const RuntimeMethod*))Nullable_1__ctor_mC8B2FF6D15E5BD1BF52356C2621F2BE4AD504054_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARCameraManager::set_currentConfiguration(System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCameraManager_set_currentConfiguration_m2919DB990909C5F7CD5B40125531901AABB016D1 (ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * __this, Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::TryGetIntrinsics(UnityEngine.XR.ARSubsystems.XRCameraIntrinsics&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARCameraManager_TryGetIntrinsics_m1C2933CB7165F8EC8761111BCC9F3AB51F217135 (ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * __this, XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD * ___cameraIntrinsics0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::TryAcquireLatestCpuImage(UnityEngine.XR.ARSubsystems.XRCpuImage&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARCameraManager_TryAcquireLatestCpuImage_m5B417D0AEC0B39ADD968073C280FD6BF1A2C65E2 (ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * __this, XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE * ___cpuImage0, const RuntimeMethod* method);
// System.Double UnityEngine.XR.ARSubsystems.XRCpuImage::get_timestamp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double XRCpuImage_get_timestamp_m34F30EFB534A322FA98B397C590665FF561F91C4_inline (XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE * __this, const RuntimeMethod* method);
// System.Void System.Action`2<UnityEngine.Transform,System.Int64>::Invoke(!0,!1)
inline void Action_2_Invoke_m82727378824B9B4A0180DE63F07C255198D71D6B (Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___arg10, int64_t ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, int64_t, const RuntimeMethod*))Action_2_Invoke_m52E8A4C73D8357C219884A4AF7CFECD2A825F447_gshared)(__this, ___arg10, ___arg21, method);
}
// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage::get_dimensions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  XRCpuImage_get_dimensions_m1A176BDB3319F09F3AF628AB17C126B62929A2A5_inline (XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.XRCpuImage/Plane UnityEngine.XR.ARSubsystems.XRCpuImage::GetPlane(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D  XRCpuImage_GetPlane_m51B283F05CE388A96607CD1F74772F0B09EB152A (XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE * __this, int32_t ___planeIndex0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::get_data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  Plane_get_data_mBA1EB2437E816B19D7A68440AE188F4E8543E108_inline (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.Byte>::.ctor(!0[],Unity.Collections.Allocator)
inline void NativeArray_1__ctor_m263D100CDC58D42ECBC9CF6E884C3AD506FE4CF1 (NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m263D100CDC58D42ECBC9CF6E884C3AD506FE4CF1_gshared)(__this, ___array0, ___allocator1, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::get_rowStride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Plane_get_rowStride_mE6385B9F7D9D040FC613D16D859435F492CB213A_inline (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane::get_pixelStride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Plane_get_pixelStride_m33EEE46027B124683ABAF3BC627812F963F29665_inline (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRCameraIntrinsics::get_principalPoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  XRCameraIntrinsics_get_principalPoint_mFDE68368CC682F57C69EF8EC7BE93E6F678313C5_inline (XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRCameraIntrinsics::get_focalLength()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  XRCameraIntrinsics_get_focalLength_mBFAD4537EDDFB29C2BBC75FA4E501CB96201BB67_inline (XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD * __this, const RuntimeMethod* method);
// System.Void Vuforia.ARFoundation.ARFoundationImage::.ctor(UnityEngine.Vector2Int,Unity.Collections.NativeArray`1<System.Byte>,Unity.Collections.NativeArray`1<System.Byte>,Unity.Collections.NativeArray`1<System.Byte>,System.Int32,System.Int32,System.Int32,System.Int64,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFoundationImage__ctor_mC634B0E913A765BB37F4C4DE252AFF8ABCEBDC88 (ARFoundationImage_t52F1BCE1FC354D7635660A1B2C33CB5319F0B16B * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___dimensions0, NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___yBuffer1, NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___uBuffer2, NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___vBuffer3, int32_t ___yRowStride4, int32_t ___uvRowStride5, int32_t ___uvPixelStride6, int64_t ___timestamp7, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___principalPoint8, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___focalLength9, const RuntimeMethod* method);
// System.Void System.Action`1<Vuforia.ARFoundation.ARFoundationImage>::Invoke(!0)
inline void Action_1_Invoke_m8FF727B865C8424147FD6AAB428AA28B82EC9C93 (Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * __this, ARFoundationImage_t52F1BCE1FC354D7635660A1B2C33CB5319F0B16B  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 *, ARFoundationImage_t52F1BCE1FC354D7635660A1B2C33CB5319F0B16B , const RuntimeMethod*))Action_1_Invoke_m8FF727B865C8424147FD6AAB428AA28B82EC9C93_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCpuImage_Dispose_m462B3360E99D206E1151C7B8ED30420BF4A91B7A (XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.String,UnityEngine.Transform>>::.ctor()
inline void List_1__ctor_m12D8028E9E6B054A2CB7C933C33FF0C6DE60FB06 (List_1_t0DB172BEA8D0009792F34EE515F413302C73E421 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0DB172BEA8D0009792F34EE515F413302C73E421 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor> UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs::get_removed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * ARAnchorsChangedEventArgs_get_removed_m3DA7093629E8D772C2732299D5F612B1357F6D08_inline (ARAnchorsChangedEventArgs_tD1D6CD5187F2B16BADA979200B333341991FAAC6 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>::GetEnumerator()
inline Enumerator_t8CF1E0D2E6FF0DFC6B411C11EF4D001E8A74111A  List_1_GetEnumerator_mB90C00C1868C41062CEA5C9DF34ACB3872BE2BBE (List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8CF1E0D2E6FF0DFC6B411C11EF4D001E8A74111A  (*) (List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>::get_Current()
inline ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * Enumerator_get_Current_m5D13ACE4E06CD6F3FB4E705A9A91423B6EBCD551_inline (Enumerator_t8CF1E0D2E6FF0DFC6B411C11EF4D001E8A74111A * __this, const RuntimeMethod* method)
{
	return ((  ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * (*) (Enumerator_t8CF1E0D2E6FF0DFC6B411C11EF4D001E8A74111A *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>::get_trackableId()
inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ARTrackable_2_get_trackableId_m5B246724B1B0C9D5128E1359559AA8F6A3ECAB55 (ARTrackable_2_t107972B6EEF36EFAECBEE6700C766F5C41F2658C * __this, const RuntimeMethod* method)
{
	return ((  TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  (*) (ARTrackable_2_t107972B6EEF36EFAECBEE6700C766F5C41F2658C *, const RuntimeMethod*))ARTrackable_2_get_trackableId_mDF0899C7B97D5A8B4C3D6D778B7258035086550A_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.TrackableId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrackableId_ToString_mCD45FD4FF5DF6DE30A38AD05D02CFA7B2B696BB1 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARFoundation.ARAnchor>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mE2897AD7FBFB1621899052D558884189FA7E7F1C (Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Tuple`2<!!0,!!1> System.Tuple::Create<System.String,UnityEngine.Transform>(!!0,!!1)
inline Tuple_2_t1726DB61838E1060A5A9C6C15D9DE70653283CDE * Tuple_Create_TisString_t_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m019D79DEEAF1E856DBBDDA4A00BAC1AAC6BC96FE (String_t* ___item10, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___item21, const RuntimeMethod* method)
{
	return ((  Tuple_2_t1726DB61838E1060A5A9C6C15D9DE70653283CDE * (*) (String_t*, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Tuple_Create_TisRuntimeObject_TisRuntimeObject_m8C528936C6BBCDBD98BD32BECA098C18DDF823BA_gshared)(___item10, ___item21, method);
}
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.String,UnityEngine.Transform>>::Add(!0)
inline void List_1_Add_mDADE08660CDAEF1A9D57DF4AD815150524657CE9 (List_1_t0DB172BEA8D0009792F34EE515F413302C73E421 * __this, Tuple_2_t1726DB61838E1060A5A9C6C15D9DE70653283CDE * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0DB172BEA8D0009792F34EE515F413302C73E421 *, Tuple_2_t1726DB61838E1060A5A9C6C15D9DE70653283CDE *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARFoundation.ARAnchor>::Remove(!0)
inline bool Dictionary_2_Remove_m30CF35E271B7DD35A08B94CA8D4DBE6F70F3D4C5 (Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>::MoveNext()
inline bool Enumerator_MoveNext_m539E879120F5D0D47C05EB9F39D4D44D9C1983E0 (Enumerator_t8CF1E0D2E6FF0DFC6B411C11EF4D001E8A74111A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8CF1E0D2E6FF0DFC6B411C11EF4D001E8A74111A *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARAnchor>::Dispose()
inline void Enumerator_Dispose_m5B8D5FD3B57E4B59209E86FB3CFCE4D2A320AE80 (Enumerator_t8CF1E0D2E6FF0DFC6B411C11EF4D001E8A74111A * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8CF1E0D2E6FF0DFC6B411C11EF4D001E8A74111A *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor> UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * ARAnchorsChangedEventArgs_get_updated_m87B120B079D1B9FF8C9F1E305672BD6F741AC7DF_inline (ARAnchorsChangedEventArgs_tD1D6CD5187F2B16BADA979200B333341991FAAC6 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Collections.Generic.List`1<System.Tuple`2<System.String,UnityEngine.Transform>>,System.Collections.Generic.List`1<System.Tuple`2<System.String,UnityEngine.Transform>>>::Invoke(!0,!1)
inline void Action_2_Invoke_m05C604538242169E704EA16B607E2345326CD5F9 (Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * __this, List_1_t0DB172BEA8D0009792F34EE515F413302C73E421 * ___arg10, List_1_t0DB172BEA8D0009792F34EE515F413302C73E421 * ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D *, List_1_t0DB172BEA8D0009792F34EE515F413302C73E421 *, List_1_t0DB172BEA8D0009792F34EE515F413302C73E421 *, const RuntimeMethod*))Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382_gshared)(__this, ___arg10, ___arg21, method);
}
// UnityEngine.XR.ARFoundation.ARAnchor UnityEngine.XR.ARFoundation.ARAnchorManager::AddAnchor(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * ARAnchorManager_AddAnchor_mBE78F22E6E4BE754EF0210E24E63E17EBEC5A3DC (ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARFoundation.ARAnchor>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m2AC3645AA0AB6DAE38B4C3C192865A69069FA6C2 (Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 * __this, String_t* ___key0, ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 *, String_t*, ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARFoundation.ARAnchor>::get_Item(!0)
inline ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * Dictionary_2_get_Item_mA50067F43600232C2DB1DFD14930BA24778682A6 (Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * (*) (Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// !0 UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>::get_subsystem()
inline XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 * SubsystemLifecycleManager_3_get_subsystem_m27E319E50A5192129309A3CF6FF3A06E00643BA9_inline (SubsystemLifecycleManager_3_tA7DFD00C75E7891CE13E16A789857D4DA563A9A3 * __this, const RuntimeMethod* method)
{
	return ((  XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 * (*) (SubsystemLifecycleManager_3_tA7DFD00C75E7891CE13E16A789857D4DA563A9A3 *, const RuntimeMethod*))SubsystemLifecycleManager_3_get_subsystem_m50CDB488C754452B0104C6EC4DAC7D0A85A43F61_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::get_running()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SubsystemWithProvider_get_running_m42399652EC4AB466AFBAC9035FA77C1BD6C72406_inline (SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARFoundation.ARAnchorManager::RemoveAnchor(UnityEngine.XR.ARFoundation.ARAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARAnchorManager_RemoveAnchor_m1D2D061879D97BCCCFF3267A44A7D7E43F8799A0 (ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * __this, ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * ___anchor0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARFoundation.ARAnchor>::GetEnumerator()
inline Enumerator_t485D25BDD649E78063270BA71089882606CDCC80  Dictionary_2_GetEnumerator_m17871C0A6709936FC836E221F03C61610925A66E (Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t485D25BDD649E78063270BA71089882606CDCC80  (*) (Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.XR.ARFoundation.ARAnchor>::get_Current()
inline KeyValuePair_2_t67ABA7BE4B27A94A2F1BB58A9315A42F6898EC72  Enumerator_get_Current_mC38B2E8BDB12165764511F5A37034EF508285C44_inline (Enumerator_t485D25BDD649E78063270BA71089882606CDCC80 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t67ABA7BE4B27A94A2F1BB58A9315A42F6898EC72  (*) (Enumerator_t485D25BDD649E78063270BA71089882606CDCC80 *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.XR.ARFoundation.ARAnchor>::get_Value()
inline ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * KeyValuePair_2_get_Value_m33B64E5E020F40670C0B5D0812F30E70BBAC891D_inline (KeyValuePair_2_t67ABA7BE4B27A94A2F1BB58A9315A42F6898EC72 * __this, const RuntimeMethod* method)
{
	return ((  ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * (*) (KeyValuePair_2_t67ABA7BE4B27A94A2F1BB58A9315A42F6898EC72 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.XR.ARFoundation.ARAnchor>::MoveNext()
inline bool Enumerator_MoveNext_m1C9A34744E8345930B58C209939C81E42F4B72C9 (Enumerator_t485D25BDD649E78063270BA71089882606CDCC80 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t485D25BDD649E78063270BA71089882606CDCC80 *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.XR.ARFoundation.ARAnchor>::Dispose()
inline void Enumerator_Dispose_m897BB839284E62A9547F181CA8A704E9AC0D490E (Enumerator_t485D25BDD649E78063270BA71089882606CDCC80 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t485D25BDD649E78063270BA71089882606CDCC80 *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARFoundation.ARAnchor>::Clear()
inline void Dictionary_2_Clear_m2F3AFF5DDB98208186E9B951A5D04EC43A092370 (Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 *, const RuntimeMethod*))Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201 (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D *, const RuntimeMethod*))List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mCC2851DAC2542C59528FCE21242231DFAF024650 (ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPoint0, List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * ___hitResults1, int32_t ___trackableTypes2, const RuntimeMethod* method);
// System.Void System.Converter`2<UnityEngine.XR.ARFoundation.ARRaycastHit,UnityEngine.Pose>::.ctor(System.Object,System.IntPtr)
inline void Converter_2__ctor_m2A6F2071D4F717FDD19FF41DEF0D50DFB8511AD9 (Converter_2_tC64B44F1A0EAFD8273C87D483DA826F259BA6D53 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Converter_2_tC64B44F1A0EAFD8273C87D483DA826F259BA6D53 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Converter_2__ctor_m2A6F2071D4F717FDD19FF41DEF0D50DFB8511AD9_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.List`1<!!0> System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::ConvertAll<UnityEngine.Pose>(System.Converter`2<!0,!!0>)
inline List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C * List_1_ConvertAll_TisPose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_mA74800C458088266E02F3C5CABC35604E9B6E0B0 (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, Converter_2_tC64B44F1A0EAFD8273C87D483DA826F259BA6D53 * ___converter0, const RuntimeMethod* method)
{
	return ((  List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C * (*) (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D *, Converter_2_tC64B44F1A0EAFD8273C87D483DA826F259BA6D53 *, const RuntimeMethod*))List_1_ConvertAll_TisPose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_mA74800C458088266E02F3C5CABC35604E9B6E0B0_gshared)(__this, ___converter0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARFoundation.ARAnchor>::.ctor()
inline void Dictionary_2__ctor_m00BF2CC86865111F0ACD02544F9E7972598D6E41 (Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Action`1<Vuforia.ARFoundation.ARFoundationImage>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m5D27168A59CFFABB7C27EBE02757F21047177A3B (Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m5D27168A59CFFABB7C27EBE02757F21047177A3B_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<UnityEngine.Transform,System.Int64>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mA5801EA0E9A1E4EF759E5AEC43B276881C698385 (Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m078694AB3D6969E4873495BB4E25982FC9416562_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<System.Collections.Generic.List`1<System.Tuple`2<System.String,UnityEngine.Transform>>,System.Collections.Generic.List`1<System.Tuple`2<System.String,UnityEngine.Transform>>>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m43782689D579BE44352DC83043E4D7ED69EEFEE8 (Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer::InitializeFacade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeOpenSourceInitializer_InitializeFacade_mE34A8CC87CC9866D791197E86FF71D46EE24BEDF (const RuntimeMethod* method);
// System.Void Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/OpenSourceUnityRuntimeCompiledFacade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSourceUnityRuntimeCompiledFacade__ctor_m91F556BC59D8ED10086A231A9820907EDB1E17EE (OpenSourceUnityRuntimeCompiledFacade_tE074BC03139BA8588825A6DE47CB2C59AFFFC38F * __this, const RuntimeMethod* method);
// System.Void Vuforia.UnityRuntimeCompiled.UnityRuntimeCompiledFacade::set_Instance(Vuforia.UnityRuntimeCompiled.IUnityRuntimeCompiledFacade)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityRuntimeCompiledFacade_set_Instance_m4ACF102049531812B19C5784EF11DBF0B5638F1A_inline (RuntimeObject* ___value0, const RuntimeMethod* method);
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimationCurve::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Keyframe::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_time_m75EBFDECA329315F6D41A60C0B1291F5BA4039E8 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, const RuntimeMethod* method);
// System.Void DefaultObserverEventHandler/PoseLerp::set_Complete(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PoseLerp_set_Complete_m1119BBFED40660F71426E549B171C22EA530A50C_inline (PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328 * __this, bool ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m5E223DB365EAC8F6625C169E927527FFB8CC88DB_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Slerp_m248F79C5788A4A059F1394DEC120F23B67EFE541 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m57138889AE9BF5AFB50D31A007F6EE062991E8C9 (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void DefaultObserverEventHandler/PoseSmoother::UpdatePoseSmoothing(UnityEngine.Pose,Vuforia.TargetStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseSmoother_UpdatePoseSmoothing_m7C09D411C57C50440B15775DAA16DB6A24D47F6B (PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___currentPose0, TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  ___currentTargetStatus1, const RuntimeMethod* method);
// System.Boolean DefaultObserverEventHandler/PoseSmoother::ShouldSmooth(UnityEngine.Pose,Vuforia.TargetStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoseSmoother_ShouldSmooth_m8EF0D6450E4FFF6E1F562273B6B84DB862AC2AF9 (PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___currentPose0, TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  ___currentTargetStatus1, const RuntimeMethod* method);
// System.Void DefaultObserverEventHandler/PoseLerp::.ctor(UnityEngine.Pose,UnityEngine.Pose,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseLerp__ctor_m69C8C61ACF19E79A3A0F4530118406636E1E1CC4 (PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___startPose0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___endPose1, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve2, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1 (const RuntimeMethod* method);
// UnityEngine.Pose DefaultObserverEventHandler/PoseLerp::GetSmoothedPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  PoseLerp_GetSmoothedPosition_m792B4FCB30595F526BE5575612283AB0A6A8A850 (PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328 * __this, float ___deltaTime0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m33418A6BDFB6395B98D0B5733F5E522B7EEDDCDE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// System.Boolean DefaultObserverEventHandler/PoseLerp::get_Complete()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PoseLerp_get_Complete_m0E197959F102F20548B6874AEA365012BEB2DC95_inline (PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_mF24598FCCA1D06E65CA6DAFF4F0F6E1667336722_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_mFB9023288188C7A19F1CE3F621E2B56848352523_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_mEA1C953F5FD3D678F6B85781BD14D4C67F66CE0B_inline (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, const RuntimeMethod* method);
// System.Void Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m94E2B4DEDF0A4C2C850E2438A796AEC942011924 (U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7 * __this, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ARRaycastHit_get_pose_mB4D8BC45F23D9F2C2C8DCAFA88DB1221D76EF02B (ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>::.ctor()
inline void List_1__ctor_mF373740DD26536668F201DDCB222C1A8C7AC91D1 (List_1_tDED98C236097B36F9015B396398179A6F8A62E50 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDED98C236097B36F9015B396398179A6F8A62E50 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>(System.Collections.Generic.List`1<!!0>)
inline void SubsystemManager_GetSubsystemDescriptors_TisXRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B_m3109B986F235F2910E6FA0B1014C9A336EBBAE06 (List_1_tDED98C236097B36F9015B396398179A6F8A62E50 * ___descriptors0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDED98C236097B36F9015B396398179A6F8A62E50 *, const RuntimeMethod*))SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_m03F5680ED2CCAB3F6C5556F973FE6E3CF704AED2_gshared)(___descriptors0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>::get_Count()
inline int32_t List_1_get_Count_mC864128E4993D3F8431EA563A3346A250FD39B83_inline (List_1_tDED98C236097B36F9015B396398179A6F8A62E50 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDED98C236097B36F9015B396398179A6F8A62E50 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Collections.IEnumerator UnityEngine.XR.ARFoundation.ARSession::CheckAvailability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARSession_CheckAvailability_m641D1208F35E8286126BAA4D899E64671A66CB75 (const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// !0 UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>::get_subsystem()
inline XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 * SubsystemLifecycleManager_3_get_subsystem_mECDDE4A838FA3AE336F989C2DBC2C0ED374B2FF5_inline (SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C * __this, const RuntimeMethod* method)
{
	return ((  XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 * (*) (SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C *, const RuntimeMethod*))SubsystemLifecycleManager_3_get_subsystem_m50CDB488C754452B0104C6EC4DAC7D0A85A43F61_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::get_permissionGranted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARCameraManager_get_permissionGranted_m41AC7EC81D67E0C8FCBA8ED9781A65BE48183B6A (ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * __this, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * EventSystem_get_current_m6DCD04BC8A3C673A2961DB3BC373EDC0BEAD8251 (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, const RuntimeMethod* method);
// System.Void Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/UnityRenderPipeline::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRenderPipeline__ctor_m684A26D3F42152FCFE9DF4CB658F74E31B3FCB28 (UnityRenderPipeline_tD91000EBC3823B7CC5DC4CB6715BE0D4385A9D92 * __this, const RuntimeMethod* method);
// System.Void Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/UnityXRBridge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityXRBridge__ctor_mA879EF94911A6F4562D450FB4BE23A7533527E70 (UnityXRBridge_tA49745BF2B04A3DA05BC13E762241A6D60E502B3 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m6F6D5728CA998380E3EE5E8158E4A6DA971151BD (Action_2_t254D87D7CB5E1987005531FFF30ED1CA3AEDECCE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t254D87D7CB5E1987005531FFF30ED1CA3AEDECCE *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m503CFC42924101FFC7AAB45FD1EE567AECFB2DDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::add_beginFrameRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_add_beginFrameRendering_m849D38DE4272F52FD44B5C3CCCBB89D035317BA2 (Action_2_t254D87D7CB5E1987005531FFF30ED1CA3AEDECCE * ___value0, const RuntimeMethod* method);
// System.Void System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mEF529AE864C800525173EADF5CE7772B9BEDBBA9 (Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m503CFC42924101FFC7AAB45FD1EE567AECFB2DDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::add_beginCameraRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_add_beginCameraRendering_m24BC94B109B70AEC0F71183217EF4BCF35DE6126 (Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Camera>::Invoke(!0)
inline void Action_1_Invoke_mD46448B64FD6241AEBDC58583AABC7AB91A9B136 (Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`1<UnityEngine.Camera[]>::Invoke(!0)
inline void Action_1_Invoke_mFB24D520F13D2DF268DBB1349007BA6377CC4696 (Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * __this, CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 *, CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/UnityXRBridge::RegisterCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityXRBridge_RegisterCallbacks_m79C353A9698876C9CB3C083CE2DC1A86B511F024 (UnityXRBridge_tA49745BF2B04A3DA05BC13E762241A6D60E502B3 * __this, const RuntimeMethod* method);
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * XRGeneralSettings_get_Instance_mC714587778971DCD3EBECF8FC23741ED9A7A23BE_inline (const RuntimeMethod* method);
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, const RuntimeMethod* method);
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.XRInputSubsystem>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m705060AE3718C585E53BCFEE31DF0B4FFF3DA3E9 (Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.XRInputSubsystem::add_trackingOriginUpdated(System.Action`1<UnityEngine.XR.XRInputSubsystem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputSubsystem_add_trackingOriginUpdated_m8CD3F07F66759D7752621C40ED304E6782482392 (XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * __this, Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___value0, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  Pose_get_identity_m48C568C5B6D5507D8D7B6E7C8EE7345A16E3F300 (const RuntimeMethod* method);
// System.Object Microsoft.MixedReality.OpenXR.PerceptionInterop::GetSceneCoordinateSystem(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PerceptionInterop_GetSceneCoordinateSystem_m7EFA2071F938B105562E7B8C93BB8985A287DBB1 (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___poseInScene0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>::.ctor()
inline void List_1__ctor_mD6C183C6DD1054B1C06CBB9E96AFC778A0A5CBF4 (List_1_t56455D217921470E52E7D33A1794256E31084DD8 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t56455D217921470E52E7D33A1794256E31084DD8 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetInstances<UnityEngine.XR.XRDisplaySubsystem>(System.Collections.Generic.List`1<!!0>)
inline void SubsystemManager_GetInstances_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7815329E7014FDE1DE442AF3F320E30E685A3880 (List_1_t56455D217921470E52E7D33A1794256E31084DD8 * ___subsystems0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t56455D217921470E52E7D33A1794256E31084DD8 *, const RuntimeMethod*))SubsystemManager_GetInstances_TisRuntimeObject_mF37532CC93E9088116D7150AA6A94582E7B7D3F4_gshared)(___subsystems0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>::GetEnumerator()
inline Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828  List_1_GetEnumerator_mB1C8C1C02F0AE282A7FE5944B393195661E48D1D (List_1_t56455D217921470E52E7D33A1794256E31084DD8 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828  (*) (List_1_t56455D217921470E52E7D33A1794256E31084DD8 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>::get_Current()
inline XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * Enumerator_get_Current_mCE1EB51F59866B742F01AF4A4AF6AE22CEFD0A29_inline (Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 * __this, const RuntimeMethod* method)
{
	return ((  XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * (*) (Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.IntegratedSubsystem::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntegratedSubsystem_get_running_m3C6870588AA0F9816A3947F045BCB8F5662A9EC2 (IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::get_displayOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_get_displayOpaque_m2EC8ECB705E0F250C8D27E06BF4C57D5F77FC02F (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>::MoveNext()
inline bool Enumerator_MoveNext_m4244B9178131B00687921873F8FFBADB5EADC39C (Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>::Dispose()
inline void Enumerator_Dispose_mF98E94CA63C7309AE46544DA6B2804EFE518C8A5 (Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.XRDisplaySubsystem::SetFocusPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDisplaySubsystem_SetFocusPlane_m7ACEC78049F199ED2A3CB0ED1A82962A7A319157 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity2, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m831CBA1D198C3CDE660E8172A67A4E41BD0D0171 (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quaternion_Dot_mEF84D4F1A9E683C80B53E4EB1859EF95E63FBACC (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m526621897D9ACC31E7B8747D942A59925E3A9AFC (float ___dot0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_m2685AF38FD5B92F51F6A07F4B770DF34F4A53FE6 (float ___a0, float ___b1, const RuntimeMethod* method);
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
// System.Void Vuforia.UnityRuntimeCompiled.ARFoundationInitializer::OnAfterAssembliesLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFoundationInitializer_OnAfterAssembliesLoaded_m3AF8C2852F24DE881E11115B3D5D71AC5E842370 (const RuntimeMethod* method)
{
	{
		// InitializeFacade();
		ARFoundationInitializer_InitializeFacade_m482BCAE1955E3CDE00DF9ACFF8A39C851EA69E53(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.ARFoundationInitializer::InitializeFacade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFoundationInitializer_InitializeFacade_m482BCAE1955E3CDE00DF9ACFF8A39C851EA69E53 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFoundationFacade_t25F6D0A60217FDB54EB918477BE3D742A0EC874F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFoundationInitializer_t80FC905E3A3828C1BDC49D7DC5D3AB6163007CB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (sFacade != null) return;
		OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * L_0 = ((ARFoundationInitializer_t80FC905E3A3828C1BDC49D7DC5D3AB6163007CB3_StaticFields*)il2cpp_codegen_static_fields_for(ARFoundationInitializer_t80FC905E3A3828C1BDC49D7DC5D3AB6163007CB3_il2cpp_TypeInfo_var))->get_sFacade_0();
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (sFacade != null) return;
		return;
	}

IL_0008:
	{
		// sFacade = new OpenSourceARFoundationFacade();
		OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * L_1 = (OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 *)il2cpp_codegen_object_new(OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0_il2cpp_TypeInfo_var);
		OpenSourceARFoundationFacade__ctor_mC9A0CF19CF002218E1FB23D43AA2CBE6472C8588(L_1, /*hidden argument*/NULL);
		((ARFoundationInitializer_t80FC905E3A3828C1BDC49D7DC5D3AB6163007CB3_StaticFields*)il2cpp_codegen_static_fields_for(ARFoundationInitializer_t80FC905E3A3828C1BDC49D7DC5D3AB6163007CB3_il2cpp_TypeInfo_var))->set_sFacade_0(L_1);
		// ARFoundationFacade.Instance = sFacade;
		OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * L_2 = ((ARFoundationInitializer_t80FC905E3A3828C1BDC49D7DC5D3AB6163007CB3_StaticFields*)il2cpp_codegen_static_fields_for(ARFoundationInitializer_t80FC905E3A3828C1BDC49D7DC5D3AB6163007CB3_il2cpp_TypeInfo_var))->get_sFacade_0();
		IL2CPP_RUNTIME_CLASS_INIT(ARFoundationFacade_t25F6D0A60217FDB54EB918477BE3D742A0EC874F_il2cpp_TypeInfo_var);
		ARFoundationFacade_set_Instance_mC94EDA640C3D11D269067A94381F4DCCEB67C2C7_inline(L_2, /*hidden argument*/NULL);
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
// System.Void BoundingBoxRenderer::OnRenderObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBoxRenderer_OnRenderObject_mC51D715BE0C085F976AC2B6C47AF34A739EDD3DD (BoundingBoxRenderer_t9F5EF3591717DA29C2131700748FA5E660CF0702 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * V_0 = NULL;
	{
		// GL.PushMatrix();
		GL_PushMatrix_mF13C635BFA475627C347FAD0EE427B3136870C5E(/*hidden argument*/NULL);
		// GL.MultMatrix(transform.localToWorldMatrix);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_1;
		L_1 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC(L_0, /*hidden argument*/NULL);
		GL_MultMatrix_mA86724868A2E74F650EDE65D638130286EFE7F88(L_1, /*hidden argument*/NULL);
		// if (mLineMaterial == null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_mLineMaterial_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0056;
		}
	}
	{
		// var tempObj = GameObject.CreatePrimitive(PrimitiveType.Cube);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_CreatePrimitive_m3F797A3D7CBF364F6581F6C800AB9F9BAF5000C6(3, /*hidden argument*/NULL);
		// var cubeRenderer = tempObj.GetComponent<MeshRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4;
		NullCheck(L_5);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_6;
		L_6 = GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B(L_5, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		V_0 = L_6;
		// mLineMaterial = new Material(cubeRenderer.material);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_7 = V_0;
		NullCheck(L_7);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8;
		L_8 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_7, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD0C3D9CFAFE0FB858D864092467387D7FA178245(L_9, L_8, /*hidden argument*/NULL);
		__this->set_mLineMaterial_4(L_9);
		// mLineMaterial.color = Color.white;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = __this->get_mLineMaterial_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		L_11 = Color_get_white_m2F4F3E4DD95471924015E9CB5AF20E59C650EE37(/*hidden argument*/NULL);
		NullCheck(L_10);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_10, L_11, /*hidden argument*/NULL);
		// Destroy(tempObj);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_5, /*hidden argument*/NULL);
	}

IL_0056:
	{
		// mLineMaterial.SetPass(0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = __this->get_mLineMaterial_4();
		NullCheck(L_12);
		bool L_13;
		L_13 = Material_SetPass_mC888245491A21488CFF2FD64CA45E8404CB9FF9C(L_12, 0, /*hidden argument*/NULL);
		// mLineMaterial.color = Color.white;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = __this->get_mLineMaterial_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15;
		L_15 = Color_get_white_m2F4F3E4DD95471924015E9CB5AF20E59C650EE37(/*hidden argument*/NULL);
		NullCheck(L_14);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_14, L_15, /*hidden argument*/NULL);
		// GL.Begin(GL.LINES);
		GL_Begin_m78BA7DD04145D5704C1578361986CC4AF36270EE(1, /*hidden argument*/NULL);
		// GL.Vertex3(-0.5f, -0.5f, -0.5f);
		GL_Vertex3_mA3BF0159F797C20BC8D69A85422DE82030A28345((-0.5f), (-0.5f), (-0.5f), /*hidden argument*/NULL);
		// GL.Vertex3( 0.5f, -0.5f, -0.5f);
		GL_Vertex3_mA3BF0159F797C20BC8D69A85422DE82030A28345((0.5f), (-0.5f), (-0.5f), /*hidden argument*/NULL);
		// GL.Vertex3(0.5f, -0.5f, -0.5f);
		GL_Vertex3_mA3BF0159F797C20BC8D69A85422DE82030A28345((0.5f), (-0.5f), (-0.5f), /*hidden argument*/NULL);
		// GL.Vertex3(0.5f, -0.5f,  0.5f);
		GL_Vertex3_mA3BF0159F797C20BC8D69A85422DE82030A28345((0.5f), (-0.5f), (0.5f), /*hidden argument*/NULL);
		// GL.Vertex3( 0.5f, -0.5f, 0.5f);
		GL_Vertex3_mA3BF0159F797C20BC8D69A85422DE82030A28345((0.5f), (-0.5f), (0.5f), /*hidden argument*/NULL);
		// GL.Vertex3(-0.5f, -0.5f, 0.5f);
		GL_Vertex3_mA3BF0159F797C20BC8D69A85422DE82030A28345((-0.5f), (-0.5f), (0.5f), /*hidden argument*/NULL);
		// GL.Vertex3(-0.5f, -0.5f, 0.5f);
		GL_Vertex3_mA3BF0159F797C20BC8D69A85422DE82030A28345((-0.5f), (-0.5f), (0.5f), /*hidden argument*/NULL);
		// GL.Vertex3(-0.5f, -0.5f, -0.5f);
		GL_Vertex3_mA3BF0159F797C20BC8D69A85422DE82030A28345((-0.5f), (-0.5f), (-0.5f), /*hidden argument*/NULL);
		// GL.Vertex3(-0.5f, 0.5f, -0.5f);
		GL_Vertex3_mA3BF0159F797C20BC8D69A85422DE82030A28345((-0.5f), (0.5f), (-0.5f), /*hidden argument*/NULL);
		// GL.Vertex3(0.5f,  0.5f, -0.5f);
		GL_Vertex3_mA3BF0159F797C20BC8D69A85422DE82030A28345((0.5f), (0.5f), (-0.5f), /*hidden argument*/NULL);
		// GL.Vertex3(0.5f,  0.5f, -0.5f);
		GL_Vertex3_mA3BF0159F797C20BC8D69A85422DE82030A28345((0.5f), (0.5f), (-0.5f), /*hidden argument*/NULL);
		// GL.Vertex3(0.5f,  0.5f, 0.5f);
		GL_Vertex3_mA3BF0159F797C20BC8D69A85422DE82030A28345((0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		// GL.Vertex3(0.5f,  0.5f, 0.5f);
		GL_Vertex3_mA3BF0159F797C20BC8D69A85422DE82030A28345((0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		// GL.Vertex3(-0.5f, 0.5f, 0.5f);
		GL_Vertex3_mA3BF0159F797C20BC8D69A85422DE82030A28345((-0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		// GL.Vertex3(-0.5f, 0.5f, 0.5f);
		GL_Vertex3_mA3BF0159F797C20BC8D69A85422DE82030A28345((-0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		// GL.Vertex3(-0.5f, 0.5f, -0.5f);
		GL_Vertex3_mA3BF0159F797C20BC8D69A85422DE82030A28345((-0.5f), (0.5f), (-0.5f), /*hidden argument*/NULL);
		// GL.Vertex3(-0.5f, -0.5f, -0.5f);
		GL_Vertex3_mA3BF0159F797C20BC8D69A85422DE82030A28345((-0.5f), (-0.5f), (-0.5f), /*hidden argument*/NULL);
		// GL.Vertex3(-0.5f,  0.5f, -0.5f);
		GL_Vertex3_mA3BF0159F797C20BC8D69A85422DE82030A28345((-0.5f), (0.5f), (-0.5f), /*hidden argument*/NULL);
		// GL.Vertex3(0.5f, -0.5f, -0.5f);
		GL_Vertex3_mA3BF0159F797C20BC8D69A85422DE82030A28345((0.5f), (-0.5f), (-0.5f), /*hidden argument*/NULL);
		// GL.Vertex3(0.5f,  0.5f, -0.5f);
		GL_Vertex3_mA3BF0159F797C20BC8D69A85422DE82030A28345((0.5f), (0.5f), (-0.5f), /*hidden argument*/NULL);
		// GL.Vertex3(0.5f, -0.5f, 0.5f);
		GL_Vertex3_mA3BF0159F797C20BC8D69A85422DE82030A28345((0.5f), (-0.5f), (0.5f), /*hidden argument*/NULL);
		// GL.Vertex3(0.5f,  0.5f, 0.5f);
		GL_Vertex3_mA3BF0159F797C20BC8D69A85422DE82030A28345((0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		// GL.Vertex3(-0.5f, -0.5f, 0.5f);
		GL_Vertex3_mA3BF0159F797C20BC8D69A85422DE82030A28345((-0.5f), (-0.5f), (0.5f), /*hidden argument*/NULL);
		// GL.Vertex3(-0.5f,  0.5f, 0.5f);
		GL_Vertex3_mA3BF0159F797C20BC8D69A85422DE82030A28345((-0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		// GL.End();
		GL_End_m2AB599EE687D1FA391FDA08D420B1877F53176EF(/*hidden argument*/NULL);
		// GL.PopMatrix();
		GL_PopMatrix_m7EA6B7B55FAFB9C1B96969D4898B887CFD6B2AF2(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BoundingBoxRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBoxRenderer__ctor_m6AE0E71B3C8C36DFD7E5C0447065BE86832AE048 (BoundingBoxRenderer_t9F5EF3591717DA29C2131700748FA5E660CF0702 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DefaultAreaTargetEventHandler::OnTrackingFound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultAreaTargetEventHandler_OnTrackingFound_mD93FD47327F86AA095AE6001B27A3A1E25E5932A (DefaultAreaTargetEventHandler_t8240588E2859986CC6CC2F6AFCF5A3867C525BFE * __this, const RuntimeMethod* method)
{
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B2_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B1_0 = NULL;
	{
		// SetAugmentationRendering(true);
		DefaultAreaTargetEventHandler_SetAugmentationRendering_mB4B9001E1A51E75DB34742E59D85151543C66EEC(__this, (bool)1, /*hidden argument*/NULL);
		// OnTargetFound?.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = ((DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B *)__this)->get_OnTargetFound_7();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DefaultAreaTargetEventHandler::OnTrackingLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultAreaTargetEventHandler_OnTrackingLost_mA160B6EF684BB7FA08EC67EE1858F17DF22B6A4D (DefaultAreaTargetEventHandler_t8240588E2859986CC6CC2F6AFCF5A3867C525BFE * __this, const RuntimeMethod* method)
{
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B2_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B1_0 = NULL;
	{
		// SetAugmentationRendering(false);
		DefaultAreaTargetEventHandler_SetAugmentationRendering_mB4B9001E1A51E75DB34742E59D85151543C66EEC(__this, (bool)0, /*hidden argument*/NULL);
		// OnTargetLost?.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = ((DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B *)__this)->get_OnTargetLost_8();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DefaultAreaTargetEventHandler::SetAugmentationRendering(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultAreaTargetEventHandler_SetAugmentationRendering_mB4B9001E1A51E75DB34742E59D85151543C66EEC (DefaultAreaTargetEventHandler_t8240588E2859986CC6CC2F6AFCF5A3867C525BFE * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (var i = 0; i < transform.childCount; i++)
		V_0 = 0;
		goto IL_001b;
	}

IL_0004:
	{
		// SetEnabledOnChildComponents(transform.GetChild(i), value);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_0, L_1, /*hidden argument*/NULL);
		bool L_3 = ___value0;
		DefaultAreaTargetEventHandler_SetEnabledOnChildComponents_m3CEEC99A1D77AEA75967A0C486077DA74D13C133(__this, L_2, L_3, /*hidden argument*/NULL);
		// for (var i = 0; i < transform.childCount; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_001b:
	{
		// for (var i = 0; i < transform.childCount; i++)
		int32_t L_5 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		// SetVuforiaRenderingComponents(value);
		bool L_8 = ___value0;
		DefaultAreaTargetEventHandler_SetVuforiaRenderingComponents_m9774139833F9E305162F06ED6C8B769014B159C1(__this, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DefaultAreaTargetEventHandler::SetEnabledOnChildComponents(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultAreaTargetEventHandler_SetEnabledOnChildComponents_m3CEEC99A1D77AEA75967A0C486077DA74D13C133 (DefaultAreaTargetEventHandler_t8240588E2859986CC6CC2F6AFCF5A3867C525BFE * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___augmentationTransform0, bool ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD63281542675697ADC038B664E30F73F6BC1F1D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisVuforiaAugmentationRenderer_tC6BFEB2AAD6037D587F8A520CCF2C12618BD1886_m458D839DD96788B7214C401DF761109DE0DDA86C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VuforiaAugmentationRenderer_tC6BFEB2AAD6037D587F8A520CCF2C12618BD1886 * V_0 = NULL;
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * V_1 = NULL;
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * V_2 = NULL;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * V_3 = NULL;
	int32_t V_4 = 0;
	{
		// var augmentationRenderer = augmentationTransform.GetComponent<VuforiaAugmentationRenderer>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___augmentationTransform0;
		NullCheck(L_0);
		VuforiaAugmentationRenderer_tC6BFEB2AAD6037D587F8A520CCF2C12618BD1886 * L_1;
		L_1 = Component_GetComponent_TisVuforiaAugmentationRenderer_tC6BFEB2AAD6037D587F8A520CCF2C12618BD1886_m458D839DD96788B7214C401DF761109DE0DDA86C(L_0, /*hidden argument*/Component_GetComponent_TisVuforiaAugmentationRenderer_tC6BFEB2AAD6037D587F8A520CCF2C12618BD1886_m458D839DD96788B7214C401DF761109DE0DDA86C_RuntimeMethod_var);
		V_0 = L_1;
		// if (augmentationRenderer != null)
		VuforiaAugmentationRenderer_tC6BFEB2AAD6037D587F8A520CCF2C12618BD1886 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// augmentationRenderer.SetActive(value);
		VuforiaAugmentationRenderer_tC6BFEB2AAD6037D587F8A520CCF2C12618BD1886 * L_4 = V_0;
		bool L_5 = ___value1;
		NullCheck(L_4);
		VirtActionInvoker1< bool >::Invoke(4 /* System.Void Vuforia.VuforiaAugmentationRenderer::SetActive(System.Boolean) */, L_4, L_5);
		// return;
		return;
	}

IL_0018:
	{
		// if (mObserverBehaviour)
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_6 = ((DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B *)__this)->get_mObserverBehaviour_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		// var rendererComponent = augmentationTransform.GetComponent<Renderer>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = ___augmentationTransform0;
		NullCheck(L_8);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_9;
		L_9 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(L_8, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		V_1 = L_9;
		// if (rendererComponent != null)
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_003c;
		}
	}
	{
		// rendererComponent.enabled = value;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_12 = V_1;
		bool L_13 = ___value1;
		NullCheck(L_12);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_12, L_13, /*hidden argument*/NULL);
	}

IL_003c:
	{
		// var canvasComponent = augmentationTransform.GetComponent<Canvas>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = ___augmentationTransform0;
		NullCheck(L_14);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_15;
		L_15 = Component_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD63281542675697ADC038B664E30F73F6BC1F1D1(L_14, /*hidden argument*/Component_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD63281542675697ADC038B664E30F73F6BC1F1D1_RuntimeMethod_var);
		V_2 = L_15;
		// if (canvasComponent != null)
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_16 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_16, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0053;
		}
	}
	{
		// canvasComponent.enabled = value;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_18 = V_2;
		bool L_19 = ___value1;
		NullCheck(L_18);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_18, L_19, /*hidden argument*/NULL);
	}

IL_0053:
	{
		// var colliderComponent = augmentationTransform.GetComponent<Collider>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = ___augmentationTransform0;
		NullCheck(L_20);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_21;
		L_21 = Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60(L_20, /*hidden argument*/Component_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_mCE49E8783A1794715E6D539C8BB8C78CC589AB60_RuntimeMethod_var);
		V_3 = L_21;
		// if (colliderComponent != null)
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_22 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_006a;
		}
	}
	{
		// colliderComponent.enabled = value;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_24 = V_3;
		bool L_25 = ___value1;
		NullCheck(L_24);
		Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_24, L_25, /*hidden argument*/NULL);
	}

IL_006a:
	{
		// for (var i = 0; i < augmentationTransform.childCount; i++)
		V_4 = 0;
		goto IL_0084;
	}

IL_006f:
	{
		// SetEnabledOnChildComponents(augmentationTransform.GetChild(i), value);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26 = ___augmentationTransform0;
		int32_t L_27 = V_4;
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_26, L_27, /*hidden argument*/NULL);
		bool L_29 = ___value1;
		DefaultAreaTargetEventHandler_SetEnabledOnChildComponents_m3CEEC99A1D77AEA75967A0C486077DA74D13C133(__this, L_28, L_29, /*hidden argument*/NULL);
		// for (var i = 0; i < augmentationTransform.childCount; i++)
		int32_t L_30 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_0084:
	{
		// for (var i = 0; i < augmentationTransform.childCount; i++)
		int32_t L_31 = V_4;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32 = ___augmentationTransform0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_32, /*hidden argument*/NULL);
		if ((((int32_t)L_31) < ((int32_t)L_33)))
		{
			goto IL_006f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DefaultAreaTargetEventHandler::SetVuforiaRenderingComponents(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultAreaTargetEventHandler_SetVuforiaRenderingComponents_m9774139833F9E305162F06ED6C8B769014B159C1 (DefaultAreaTargetEventHandler_t8240588E2859986CC6CC2F6AFCF5A3867C525BFE * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisVuforiaAugmentationRenderer_tC6BFEB2AAD6037D587F8A520CCF2C12618BD1886_m3E6B199729B5920EC9846D9D0451574E086A0A94_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	VuforiaAugmentationRendererU5BU5D_tEECC38D68E1CEA50FE982965BC188F2B8EE31178* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var augmentationRendererComponents = mObserverBehaviour.GetComponentsInChildren<VuforiaAugmentationRenderer>(false);
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_0 = ((DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B *)__this)->get_mObserverBehaviour_9();
		NullCheck(L_0);
		VuforiaAugmentationRendererU5BU5D_tEECC38D68E1CEA50FE982965BC188F2B8EE31178* L_1;
		L_1 = Component_GetComponentsInChildren_TisVuforiaAugmentationRenderer_tC6BFEB2AAD6037D587F8A520CCF2C12618BD1886_m3E6B199729B5920EC9846D9D0451574E086A0A94(L_0, (bool)0, /*hidden argument*/Component_GetComponentsInChildren_TisVuforiaAugmentationRenderer_tC6BFEB2AAD6037D587F8A520CCF2C12618BD1886_m3E6B199729B5920EC9846D9D0451574E086A0A94_RuntimeMethod_var);
		// foreach (var component in augmentationRendererComponents)
		V_0 = L_1;
		V_1 = 0;
		goto IL_001e;
	}

IL_0011:
	{
		// foreach (var component in augmentationRendererComponents)
		VuforiaAugmentationRendererU5BU5D_tEECC38D68E1CEA50FE982965BC188F2B8EE31178* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		VuforiaAugmentationRenderer_tC6BFEB2AAD6037D587F8A520CCF2C12618BD1886 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// component.SetActive(value);
		bool L_6 = ___value0;
		NullCheck(L_5);
		VirtActionInvoker1< bool >::Invoke(4 /* System.Void Vuforia.VuforiaAugmentationRenderer::SetActive(System.Boolean) */, L_5, L_6);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_001e:
	{
		// foreach (var component in augmentationRendererComponents)
		int32_t L_8 = V_1;
		VuforiaAugmentationRendererU5BU5D_tEECC38D68E1CEA50FE982965BC188F2B8EE31178* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DefaultAreaTargetEventHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultAreaTargetEventHandler__ctor_m6066CC8D0D051EA397F0AD203FD6980E1228A49A (DefaultAreaTargetEventHandler_t8240588E2859986CC6CC2F6AFCF5A3867C525BFE * __this, const RuntimeMethod* method)
{
	{
		DefaultObserverEventHandler__ctor_mB7B7FF78886F7B3161AFFC36878E1B4D5C759DFB(__this, /*hidden argument*/NULL);
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
// System.Void DefaultInitializationErrorHandler::OnVuforiaInitializationError(Vuforia.VuforiaInitError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_OnVuforiaInitializationError_mA54F372DEFB25794738316CB8C2BBCBEF58AFE45 (DefaultInitializationErrorHandler_tFBA569E354DBCE9B7B7F4A60B3554F7FC7B33D16 * __this, int32_t ___vuforiaInitError0, const RuntimeMethod* method)
{
	{
		// if (vuforiaInitError != VuforiaInitError.NONE)
		int32_t L_0 = ___vuforiaInitError0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// SetErrorCode(vuforiaInitError);
		int32_t L_1 = ___vuforiaInitError0;
		DefaultInitializationErrorHandler_SetErrorCode_mFB9D86324595BF329F0B248C72549DD4C61EE163(__this, L_1, /*hidden argument*/NULL);
		// SetErrorOccurred(true);
		DefaultInitializationErrorHandler_SetErrorOccurred_m13800AE31C02CD82EE11E13D39D1F93ED9F81ADA_inline(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_Awake_m35DBF401DC6AB384571B82050D04BA62F0125170 (DefaultInitializationErrorHandler_tFBA569E354DBCE9B7B7F4A60B3554F7FC7B33D16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m07256E4CBF2A3BE17ACA6171025AA2780396C303_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tAA1D1EEFC680CD9A5C6DDD77BD612C0BBD43C306_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultInitializationErrorHandler_OnVuforiaInitializationError_mA54F372DEFB25794738316CB8C2BBCBEF58AFE45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VuforiaApplication.Instance.OnVuforiaInitialized += OnVuforiaInitializationError;
		VuforiaApplication_tDC756FC5605334FDF0FF6F95CC0FEE4E134D64F1 * L_0;
		L_0 = VuforiaApplication_get_Instance_mAE3192D808C9F2B8F7EACDC490DD5F2E72DF8A75(/*hidden argument*/NULL);
		Action_1_tAA1D1EEFC680CD9A5C6DDD77BD612C0BBD43C306 * L_1 = (Action_1_tAA1D1EEFC680CD9A5C6DDD77BD612C0BBD43C306 *)il2cpp_codegen_object_new(Action_1_tAA1D1EEFC680CD9A5C6DDD77BD612C0BBD43C306_il2cpp_TypeInfo_var);
		Action_1__ctor_m07256E4CBF2A3BE17ACA6171025AA2780396C303(L_1, __this, (intptr_t)((intptr_t)DefaultInitializationErrorHandler_OnVuforiaInitializationError_mA54F372DEFB25794738316CB8C2BBCBEF58AFE45_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m07256E4CBF2A3BE17ACA6171025AA2780396C303_RuntimeMethod_var);
		NullCheck(L_0);
		VuforiaApplication_add_OnVuforiaInitialized_m82008FC56E10E431B54233DA208CDE36EB86EAF6(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_Start_m8685E20EC061AB002EEA370E91B5B439F0E47BA1 (DefaultInitializationErrorHandler_tFBA569E354DBCE9B7B7F4A60B3554F7FC7B33D16 * __this, const RuntimeMethod* method)
{
	{
		// SetupGUIStyles();
		DefaultInitializationErrorHandler_SetupGUIStyles_m7D00483BC5B0BBACDE444AA750DAEB470A831AAB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_OnGUI_m0C60CC4E41DF5022336DE61D589B9200C6DF95A2 (DefaultInitializationErrorHandler_tFBA569E354DBCE9B7B7F4A60B3554F7FC7B33D16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultInitializationErrorHandler_DrawWindowContent_mE0C82868D3C4B088EA3F256A8D979F8FB9DA2BB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mErrorOccurred)
		bool L_0 = __this->get_mErrorOccurred_5();
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		// GUI.Window(0, new Rect(0, 0, Screen.width, Screen.height), DrawWindowContent, "");
		int32_t L_1;
		L_1 = Screen_get_width_m44AD823DE1C2962E3B9CE69F680C6602034DC778(/*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Screen_get_height_m71F7E12C4F33639042D80425D3169E288368C67A(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_3), (0.0f), (0.0f), ((float)((float)L_1)), ((float)((float)L_2)), /*hidden argument*/NULL);
		WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * L_4 = (WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D *)il2cpp_codegen_object_new(WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D_il2cpp_TypeInfo_var);
		WindowFunction__ctor_mCC6005520B912B8BFFAECE3612EB3334FF681238(L_4, __this, (intptr_t)((intptr_t)DefaultInitializationErrorHandler_DrawWindowContent_mE0C82868D3C4B088EA3F256A8D979F8FB9DA2BB0_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_5;
		L_5 = GUI_Window_m5EF22ADD201ED6C150BFEF1979267A5C61D52C89(0, L_3, L_4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_OnDestroy_mA5E495006F8F77111A54122DBE810006154ED3DD (DefaultInitializationErrorHandler_tFBA569E354DBCE9B7B7F4A60B3554F7FC7B33D16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m07256E4CBF2A3BE17ACA6171025AA2780396C303_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tAA1D1EEFC680CD9A5C6DDD77BD612C0BBD43C306_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultInitializationErrorHandler_OnVuforiaInitializationError_mA54F372DEFB25794738316CB8C2BBCBEF58AFE45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VuforiaApplication.Instance.OnVuforiaInitialized -= OnVuforiaInitializationError;
		VuforiaApplication_tDC756FC5605334FDF0FF6F95CC0FEE4E134D64F1 * L_0;
		L_0 = VuforiaApplication_get_Instance_mAE3192D808C9F2B8F7EACDC490DD5F2E72DF8A75(/*hidden argument*/NULL);
		Action_1_tAA1D1EEFC680CD9A5C6DDD77BD612C0BBD43C306 * L_1 = (Action_1_tAA1D1EEFC680CD9A5C6DDD77BD612C0BBD43C306 *)il2cpp_codegen_object_new(Action_1_tAA1D1EEFC680CD9A5C6DDD77BD612C0BBD43C306_il2cpp_TypeInfo_var);
		Action_1__ctor_m07256E4CBF2A3BE17ACA6171025AA2780396C303(L_1, __this, (intptr_t)((intptr_t)DefaultInitializationErrorHandler_OnVuforiaInitializationError_mA54F372DEFB25794738316CB8C2BBCBEF58AFE45_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m07256E4CBF2A3BE17ACA6171025AA2780396C303_RuntimeMethod_var);
		NullCheck(L_0);
		VuforiaApplication_remove_OnVuforiaInitialized_m80CA2C38CE224B4D05876B7C98B2250AD25F9467(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::DrawWindowContent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_DrawWindowContent_mE0C82868D3C4B088EA3F256A8D979F8FB9DA2BB0 (DefaultInitializationErrorHandler_tFBA569E354DBCE9B7B7F4A60B3554F7FC7B33D16 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CE02DBF10772951A436ED08602B6C21AF7A06F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7BD90A00FD7EF63369F2DFB52EFB7ECBE84CAB5);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var headerRect = new Rect(0, 0, Screen.width, Screen.height / 8);
		int32_t L_0;
		L_0 = Screen_get_width_m44AD823DE1C2962E3B9CE69F680C6602034DC778(/*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Screen_get_height_m71F7E12C4F33639042D80425D3169E288368C67A(/*hidden argument*/NULL);
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), (0.0f), (0.0f), ((float)((float)L_0)), ((float)((float)((int32_t)((int32_t)L_1/(int32_t)8)))), /*hidden argument*/NULL);
		// var bodyRect = new Rect(0, Screen.height / 8, Screen.width, Screen.height / 8 * 6);
		int32_t L_2;
		L_2 = Screen_get_height_m71F7E12C4F33639042D80425D3169E288368C67A(/*hidden argument*/NULL);
		int32_t L_3;
		L_3 = Screen_get_width_m44AD823DE1C2962E3B9CE69F680C6602034DC778(/*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Screen_get_height_m71F7E12C4F33639042D80425D3169E288368C67A(/*hidden argument*/NULL);
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), (0.0f), ((float)((float)((int32_t)((int32_t)L_2/(int32_t)8)))), ((float)((float)L_3)), ((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_4/(int32_t)8)), (int32_t)6)))), /*hidden argument*/NULL);
		// var footerRect = new Rect(0, Screen.height - Screen.height / 8, Screen.width, Screen.height / 8);
		int32_t L_5;
		L_5 = Screen_get_height_m71F7E12C4F33639042D80425D3169E288368C67A(/*hidden argument*/NULL);
		int32_t L_6;
		L_6 = Screen_get_height_m71F7E12C4F33639042D80425D3169E288368C67A(/*hidden argument*/NULL);
		int32_t L_7;
		L_7 = Screen_get_width_m44AD823DE1C2962E3B9CE69F680C6602034DC778(/*hidden argument*/NULL);
		int32_t L_8;
		L_8 = Screen_get_height_m71F7E12C4F33639042D80425D3169E288368C67A(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_9), (0.0f), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)((int32_t)L_6/(int32_t)8)))))), ((float)((float)L_7)), ((float)((float)((int32_t)((int32_t)L_8/(int32_t)8)))), /*hidden argument*/NULL);
		// GUI.Label(headerRect, headerLabel, headerStyle);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_10 = V_0;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_11 = __this->get_headerStyle_8();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_Label_mDCF44EA10FC251164175E50000F63BC951D4CC8B(L_10, _stringLiteralC7BD90A00FD7EF63369F2DFB52EFB7ECBE84CAB5, L_11, /*hidden argument*/NULL);
		// GUI.Label(bodyRect, mErrorText, bodyStyle);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_12 = V_1;
		String_t* L_13 = __this->get_mErrorText_4();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_14 = __this->get_bodyStyle_7();
		GUI_Label_mDCF44EA10FC251164175E50000F63BC951D4CC8B(L_12, L_13, L_14, /*hidden argument*/NULL);
		// if (GUI.Button(footerRect, "Close", footerStyle))
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_15 = __this->get_footerStyle_9();
		bool L_16;
		L_16 = GUI_Button_m0A13253823318D62AEF06BA846375693480F8F75(L_9, _stringLiteral6CE02DBF10772951A436ED08602B6C21AF7A06F2, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00a3;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m10E44C187C0E5807F9C955A176885FAA95829267(/*hidden argument*/NULL);
	}

IL_00a3:
	{
		// }
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::SetErrorCode(Vuforia.VuforiaInitError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetErrorCode_mFB9D86324595BF329F0B248C72549DD4C61EE163 (DefaultInitializationErrorHandler_tFBA569E354DBCE9B7B7F4A60B3554F7FC7B33D16 * __this, int32_t ___initError0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VuforiaInitError_t8EDBA61A511F9B1518C1EA806C4769BA8E788774_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07640EBEA29A7F9158308AB63A8F6FFA18B48619);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2005EA02AF99AFD38B775312CF9E5C2EFC3A4413);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral357A715307A57766715F43C999C7811C93171CA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39590AB05537D2F84E8625BF232343DBD5B2DF1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C25795CBE20352B03A629EEA3EA4EC884ED60D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69C1BE505858A5E3C56A2CCC6B047D509E55ABBD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72036C1C3D8C7E9E0FC0722934C76B58172781BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8ACAA4E0B28437F5FD1A41CE6591A16813F05377);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F9C258ECC4E968FE0E96DA784BBFC2C47147148);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9809D7E81947620DDFD1D4664D7842A2E6B5D49D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5949C9287C8E8A0ADD8A3292BDDD75493E64EF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6661EE242F59FA9526DCF22B0A990EA9B3E1208);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6D4061F9A1EBD498E94D8893AB796AA4F186A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF804A77403F7CCB264325B71FEABF32B77A70A66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDAA7FA719DD479A4D7E225B60B5966B96641F8F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = ___initError0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_00c2;
			}
			case 1:
			{
				goto IL_00cf;
			}
			case 2:
			{
				goto IL_00eb;
			}
			case 3:
			{
				goto IL_00f8;
			}
		}
	}
	{
		int32_t L_1 = ___initError0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)512))))
		{
			case 0:
			{
				goto IL_0045;
			}
			case 1:
			{
				goto IL_0055;
			}
			case 2:
			{
				goto IL_0080;
			}
			case 3:
			{
				goto IL_0070;
			}
			case 4:
			{
				goto IL_00f8;
			}
			case 5:
			{
				goto IL_008d;
			}
			case 6:
			{
				goto IL_00a5;
			}
		}
	}
	{
		goto IL_00f8;
	}

IL_0045:
	{
		// mErrorText =
		//     "Vuforia Engine App key is missing. Please get a valid key " +
		//     "by logging into your account at developer.vuforia.com " +
		//     "and creating a new project.";
		__this->set_mErrorText_4(_stringLiteral8F9C258ECC4E968FE0E96DA784BBFC2C47147148);
		// break;
		goto IL_0103;
	}

IL_0055:
	{
		// mErrorText =
		//     "Vuforia Engine App key is invalid. " +
		//     "Please get a valid key by logging into your account at " +
		//     "developer.vuforia.com and creating a new project. \n\n" +
		//     getKeyInfo();
		String_t* L_2;
		L_2 = DefaultInitializationErrorHandler_getKeyInfo_m05400C559216B3EDAF7951515B3E15CDE577F0C6(__this, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral39590AB05537D2F84E8625BF232343DBD5B2DF1E, L_2, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_3);
		// break;
		goto IL_0103;
	}

IL_0070:
	{
		// mErrorText = "Unable to contact server. Please try again later.";
		__this->set_mErrorText_4(_stringLiteralFDAA7FA719DD479A4D7E225B60B5966B96641F8F);
		// break;
		goto IL_0103;
	}

IL_0080:
	{
		// mErrorText = "No network available. Please make sure you are connected to the Internet.";
		__this->set_mErrorText_4(_stringLiteral9809D7E81947620DDFD1D4664D7842A2E6B5D49D);
		// break;
		goto IL_0103;
	}

IL_008d:
	{
		// mErrorText =
		//     "This App license key has been cancelled and may no longer be used. " +
		//     "Please get a new license key. \n\n" +
		//     getKeyInfo();
		String_t* L_4;
		L_4 = DefaultInitializationErrorHandler_getKeyInfo_m05400C559216B3EDAF7951515B3E15CDE577F0C6(__this, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralC5949C9287C8E8A0ADD8A3292BDDD75493E64EF6, L_4, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_5);
		// break;
		goto IL_0103;
	}

IL_00a5:
	{
		// mErrorText =
		//     "Vuforia Engine App key is not valid for this product. Please get a valid key " +
		//     "by logging into your account at developer.vuforia.com and choosing the " +
		//     "right product type during project creation. \n\n" +
		//     getKeyInfo() + " \n\n" +
		//     "Note that Universal Windows Platform (UWP) apps require " +
		//     "a license key created on or after August 9th, 2016.";
		String_t* L_6;
		L_6 = DefaultInitializationErrorHandler_getKeyInfo_m05400C559216B3EDAF7951515B3E15CDE577F0C6(__this, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(_stringLiteral357A715307A57766715F43C999C7811C93171CA2, L_6, _stringLiteralC6D4061F9A1EBD498E94D8893AB796AA4F186A0A, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_7);
		// break;
		goto IL_0103;
	}

IL_00c2:
	{
		// mErrorText = "Failed to initialize Vuforia Engine because this device is not supported.";
		__this->set_mErrorText_4(_stringLiteral07640EBEA29A7F9158308AB63A8F6FFA18B48619);
		// break;
		goto IL_0103;
	}

IL_00cf:
	{
		// mErrorText =
		//     "One or more permissions required by Vuforia Engine are missing or not granted by user.\n" +
		//     "For example, the user may have denied camera access to this app.\n" +
		//     "In this case, you can enable camera access in Settings:\n" +
		//     "Settings > Privacy > Camera > " + Application.productName + "\n" +
		//     "Also verify that the camera is enabled in:\n" +
		//     "Settings > General > Restrictions.";
		String_t* L_8;
		L_8 = Application_get_productName_mE8E298D58DDF815355494B776956B037693481C4(/*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(_stringLiteralC6661EE242F59FA9526DCF22B0A990EA9B3E1208, L_8, _stringLiteral72036C1C3D8C7E9E0FC0722934C76B58172781BD, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_9);
		// break;
		goto IL_0103;
	}

IL_00eb:
	{
		// mErrorText = "A valid license configuration is required.\n";
		__this->set_mErrorText_4(_stringLiteralF804A77403F7CCB264325B71FEABF32B77A70A66);
		// break;
		goto IL_0103;
	}

IL_00f8:
	{
		// mErrorText = "Failed to initialize Vuforia Engine.";
		__this->set_mErrorText_4(_stringLiteral69C1BE505858A5E3C56A2CCC6B047D509E55ABBD);
	}

IL_0103:
	{
		// mErrorText = "<color=red>" + initError.ToString().Replace("_", " ") + "</color>\n\n" + mErrorText;
		RuntimeObject * L_10 = Box(VuforiaInitError_t8EDBA61A511F9B1518C1EA806C4769BA8E788774_il2cpp_TypeInfo_var, (&___initError0));
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		___initError0 = *(int32_t*)UnBox(L_10);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_11, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		String_t* L_13 = __this->get_mErrorText_4();
		String_t* L_14;
		L_14 = String_Concat_m5D784E6CEEBE99ED8749AA4B9491D926273FD749(_stringLiteral8ACAA4E0B28437F5FD1A41CE6591A16813F05377, L_12, _stringLiteral4C25795CBE20352B03A629EEA3EA4EC884ED60D8, L_13, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_14);
		// var errorTextConsole = mErrorText.Replace("<color=red>", "").Replace("</color>", "");
		String_t* L_15 = __this->get_mErrorText_4();
		NullCheck(L_15);
		String_t* L_16;
		L_16 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_15, _stringLiteral8ACAA4E0B28437F5FD1A41CE6591A16813F05377, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_16, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_0 = L_17;
		// Debug.LogError("Vuforia Engine initialization failed: " + initError + "\n\n" + errorTextConsole);
		RuntimeObject * L_18 = Box(VuforiaInitError_t8EDBA61A511F9B1518C1EA806C4769BA8E788774_il2cpp_TypeInfo_var, (&___initError0));
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		___initError0 = *(int32_t*)UnBox(L_18);
		String_t* L_20 = V_0;
		String_t* L_21;
		L_21 = String_Concat_m5D784E6CEEBE99ED8749AA4B9491D926273FD749(_stringLiteral2005EA02AF99AFD38B775312CF9E5C2EFC3A4413, L_19, _stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253, L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_21, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::SetErrorOccurred(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetErrorOccurred_m13800AE31C02CD82EE11E13D39D1F93ED9F81ADA (DefaultInitializationErrorHandler_tFBA569E354DBCE9B7B7F4A60B3554F7FC7B33D16 * __this, bool ___errorOccurred0, const RuntimeMethod* method)
{
	{
		// mErrorOccurred = errorOccurred;
		bool L_0 = ___errorOccurred0;
		__this->set_mErrorOccurred_5(L_0);
		// }
		return;
	}
}
// System.String DefaultInitializationErrorHandler::getKeyInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefaultInitializationErrorHandler_getKeyInfo_m05400C559216B3EDAF7951515B3E15CDE577F0C6 (DefaultInitializationErrorHandler_tFBA569E354DBCE9B7B7F4A60B3554F7FC7B33D16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BD661E1F238A44C35B029FD1E97F79C25A6809E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B9146F8599FB723DBBC0171737941A09EB2AD3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral713AED1B26134722240360086068181819E0FC37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90B844AA74E6088FB06AD91BC441309F260A0EB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBBFC61EBB58F47B7F8865F316E208301D580612);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// string key = VuforiaConfiguration.Instance.Vuforia.LicenseKey;
		VuforiaConfiguration_tD9B249335070DBFF290D1B3ED05D245874C2A4B4 * L_0;
		L_0 = VuforiaConfiguration_get_Instance_mCC7299F32C3DB1A842F0CC90AF2DFD611B1C3F88(/*hidden argument*/NULL);
		NullCheck(L_0);
		GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * L_1;
		L_1 = VuforiaConfiguration_get_Vuforia_m25E6CB6560AD0F1B74BA9572D9020C6889E983DD_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GenericVuforiaConfiguration_get_LicenseKey_m8AA6D2ECB5A580D638BD35D85C6D493E1733FA32_inline(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (key.Length > 10)
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0076;
		}
	}
	{
		// keyInfo =
		//     "Your current key is <color=red>" + key.Length + "</color> characters in length. " +
		//     "It begins with <color=red>" + key.Substring(0, 5) + "</color> " +
		//     "and ends with <color=red>" + key.Substring(key.Length - 5, 5) + "</color>.";
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1BD661E1F238A44C35B029FD1E97F79C25A6809E);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1BD661E1F238A44C35B029FD1E97F79C25A6809E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		String_t* L_10;
		L_10 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_10);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_7;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralDBBFC61EBB58F47B7F8865F316E208301D580612);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDBBFC61EBB58F47B7F8865F316E208301D580612);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		String_t* L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_13, 0, 5, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_14);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_12;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral90B844AA74E6088FB06AD91BC441309F260A0EB3);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral90B844AA74E6088FB06AD91BC441309F260A0EB3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_15;
		String_t* L_17 = V_0;
		String_t* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_20;
		L_20 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_17, ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)5)), 5, /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_20);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_20);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_16;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral6B9146F8599FB723DBBC0171737941A09EB2AD3A);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral6B9146F8599FB723DBBC0171737941A09EB2AD3A);
		String_t* L_22;
		L_22 = String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417(L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		goto IL_00af;
	}

IL_0076:
	{
		// keyInfo =
		//     "Your current key is <color=red>" + key.Length + "</color> characters in length. \n" +
		//     "The key is: <color=red>" + key + "</color>.";
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = L_23;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral1BD661E1F238A44C35B029FD1E97F79C25A6809E);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1BD661E1F238A44C35B029FD1E97F79C25A6809E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = L_24;
		String_t* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_26, /*hidden argument*/NULL);
		V_2 = L_27;
		String_t* L_28;
		L_28 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_28);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = L_25;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral713AED1B26134722240360086068181819E0FC37);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral713AED1B26134722240360086068181819E0FC37);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = L_29;
		String_t* L_31 = V_0;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_31);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = L_30;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteral6B9146F8599FB723DBBC0171737941A09EB2AD3A);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral6B9146F8599FB723DBBC0171737941A09EB2AD3A);
		String_t* L_33;
		L_33 = String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417(L_32, /*hidden argument*/NULL);
		V_1 = L_33;
	}

IL_00af:
	{
		// return keyInfo;
		String_t* L_34 = V_1;
		return L_34;
	}
}
// System.Void DefaultInitializationErrorHandler::SetupGUIStyles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetupGUIStyles_m7D00483BC5B0BBACDE444AA750DAEB470A831AAB (DefaultInitializationErrorHandler_tFBA569E354DBCE9B7B7F4A60B3554F7FC7B33D16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_GetBuiltinResource_TisFont_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9_mC31B9BA9D7584A0432008C387569793EAFAEA818_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C4303CE90A80E03466A934F3A49CF1FBA75C709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		// var shortSidePixels = Screen.width < Screen.height ? Screen.width : Screen.height;
		int32_t L_0;
		L_0 = Screen_get_width_m44AD823DE1C2962E3B9CE69F680C6602034DC778(/*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Screen_get_height_m71F7E12C4F33639042D80425D3169E288368C67A(/*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2;
		L_2 = Screen_get_height_m71F7E12C4F33639042D80425D3169E288368C67A(/*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0018;
	}

IL_0013:
	{
		int32_t L_3;
		L_3 = Screen_get_width_m44AD823DE1C2962E3B9CE69F680C6602034DC778(/*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0018:
	{
		// var shortSideInches = shortSidePixels / Screen.dpi;
		float L_4;
		L_4 = Screen_get_dpi_m85EE75E8213E87F9A12DCC43342CFCE122097D71(/*hidden argument*/NULL);
		// var physicalSizeMultiplier = shortSideInches > 4.0f ? 2 : 1;
		if ((((float)((float)((float)((float)((float)G_B3_0))/(float)L_4))) > ((float)(4.0f))))
		{
			goto IL_0029;
		}
	}
	{
		G_B6_0 = 1;
		goto IL_002a;
	}

IL_0029:
	{
		G_B6_0 = 2;
	}

IL_002a:
	{
		V_0 = G_B6_0;
		// bodyTexture = CreateSinglePixelTexture(Color.white);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = Color_get_white_m2F4F3E4DD95471924015E9CB5AF20E59C650EE37(/*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6;
		L_6 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m55A1103D76BEF27C969C54F8071F9E0F8C6192FD(__this, L_5, /*hidden argument*/NULL);
		__this->set_bodyTexture_10(L_6);
		// headerTexture = CreateSinglePixelTexture(new Color(
		//     Mathf.InverseLerp(0, 255, 220),
		//     Mathf.InverseLerp(0, 255, 220),
		//     Mathf.InverseLerp(0, 255, 220))); // RGB(220)
		float L_7;
		L_7 = Mathf_InverseLerp_m1A0AE609371BB464712207341F5AA46C756BA7C2((0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		float L_8;
		L_8 = Mathf_InverseLerp_m1A0AE609371BB464712207341F5AA46C756BA7C2((0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		float L_9;
		L_9 = Mathf_InverseLerp_m1A0AE609371BB464712207341F5AA46C756BA7C2((0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_10), L_7, L_8, L_9, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_11;
		L_11 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m55A1103D76BEF27C969C54F8071F9E0F8C6192FD(__this, L_10, /*hidden argument*/NULL);
		__this->set_headerTexture_11(L_11);
		// footerTexture = CreateSinglePixelTexture(new Color(
		//     Mathf.InverseLerp(0, 255, 35),
		//     Mathf.InverseLerp(0, 255, 178),
		//     Mathf.InverseLerp(0, 255, 0))); // RGB(35,178,0)
		float L_12;
		L_12 = Mathf_InverseLerp_m1A0AE609371BB464712207341F5AA46C756BA7C2((0.0f), (255.0f), (35.0f), /*hidden argument*/NULL);
		float L_13;
		L_13 = Mathf_InverseLerp_m1A0AE609371BB464712207341F5AA46C756BA7C2((0.0f), (255.0f), (178.0f), /*hidden argument*/NULL);
		float L_14;
		L_14 = Mathf_InverseLerp_m1A0AE609371BB464712207341F5AA46C756BA7C2((0.0f), (255.0f), (0.0f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_15), L_12, L_13, L_14, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_16;
		L_16 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m55A1103D76BEF27C969C54F8071F9E0F8C6192FD(__this, L_15, /*hidden argument*/NULL);
		__this->set_footerTexture_12(L_16);
		// bodyStyle = new GUIStyle();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_17 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_17, /*hidden argument*/NULL);
		__this->set_bodyStyle_7(L_17);
		// bodyStyle.normal.background = bodyTexture;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_18 = __this->get_bodyStyle_7();
		NullCheck(L_18);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_19;
		L_19 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_18, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_20 = __this->get_bodyTexture_10();
		NullCheck(L_19);
		GUIStyleState_set_background_mA80B6ED2555C6551933E2D0ECA5081FC254B6A21(L_19, L_20, /*hidden argument*/NULL);
		// bodyStyle.font = Resources.GetBuiltinResource<Font>("Arial.ttf");
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_21 = __this->get_bodyStyle_7();
		Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * L_22;
		L_22 = Resources_GetBuiltinResource_TisFont_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9_mC31B9BA9D7584A0432008C387569793EAFAEA818(_stringLiteral1C4303CE90A80E03466A934F3A49CF1FBA75C709, /*hidden argument*/Resources_GetBuiltinResource_TisFont_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9_mC31B9BA9D7584A0432008C387569793EAFAEA818_RuntimeMethod_var);
		NullCheck(L_21);
		GUIStyle_set_font_mC9394F6F07C952232F0E82FBF11F47FE472EFDB4(L_21, L_22, /*hidden argument*/NULL);
		// bodyStyle.fontSize = (int) (18 * physicalSizeMultiplier * Screen.dpi / 160);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_23 = __this->get_bodyStyle_7();
		int32_t L_24 = V_0;
		float L_25;
		L_25 = Screen_get_dpi_m85EE75E8213E87F9A12DCC43342CFCE122097D71(/*hidden argument*/NULL);
		NullCheck(L_23);
		GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6(L_23, il2cpp_codegen_cast_double_to_int<int32_t>(((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)18), (int32_t)L_24)))), (float)L_25))/(float)(160.0f)))), /*hidden argument*/NULL);
		// bodyStyle.normal.textColor = Color.black;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_26 = __this->get_bodyStyle_7();
		NullCheck(L_26);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_27;
		L_27 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_26, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_28;
		L_28 = Color_get_black_mD8CAAC9E4B8C5C92A21D176E4AB2C521CFA0EF7F(/*hidden argument*/NULL);
		NullCheck(L_27);
		GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A(L_27, L_28, /*hidden argument*/NULL);
		// bodyStyle.wordWrap = true;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_29 = __this->get_bodyStyle_7();
		NullCheck(L_29);
		GUIStyle_set_wordWrap_mB6D788509ADD7BBDEFFB4409E5719FF14DC9A684(L_29, (bool)1, /*hidden argument*/NULL);
		// bodyStyle.alignment = TextAnchor.MiddleCenter;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_30 = __this->get_bodyStyle_7();
		NullCheck(L_30);
		GUIStyle_set_alignment_mCF8FDA9DA149F528DCDC19680AEED46F25161D89(L_30, 4, /*hidden argument*/NULL);
		// bodyStyle.padding = new RectOffset(40, 40, 0, 0);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_31 = __this->get_bodyStyle_7();
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_32 = (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 *)il2cpp_codegen_object_new(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_il2cpp_TypeInfo_var);
		RectOffset__ctor_m428BA3F4AE287FA7D5F4CED6394225951E5E507B(L_32, ((int32_t)40), ((int32_t)40), 0, 0, /*hidden argument*/NULL);
		NullCheck(L_31);
		GUIStyle_set_padding_mD697AB7636560BDEE22A3DBB513F37236DFE9A00(L_31, L_32, /*hidden argument*/NULL);
		// headerStyle = new GUIStyle(bodyStyle);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_33 = __this->get_bodyStyle_7();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_34 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mF096C292507D1BE25B6C458FB771CFC4509CE95B(L_34, L_33, /*hidden argument*/NULL);
		__this->set_headerStyle_8(L_34);
		// headerStyle.normal.background = headerTexture;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_35 = __this->get_headerStyle_8();
		NullCheck(L_35);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_36;
		L_36 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_35, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_37 = __this->get_headerTexture_11();
		NullCheck(L_36);
		GUIStyleState_set_background_mA80B6ED2555C6551933E2D0ECA5081FC254B6A21(L_36, L_37, /*hidden argument*/NULL);
		// headerStyle.fontSize = (int) (24 * physicalSizeMultiplier * Screen.dpi / 160);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_38 = __this->get_headerStyle_8();
		int32_t L_39 = V_0;
		float L_40;
		L_40 = Screen_get_dpi_m85EE75E8213E87F9A12DCC43342CFCE122097D71(/*hidden argument*/NULL);
		NullCheck(L_38);
		GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6(L_38, il2cpp_codegen_cast_double_to_int<int32_t>(((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)24), (int32_t)L_39)))), (float)L_40))/(float)(160.0f)))), /*hidden argument*/NULL);
		// footerStyle = new GUIStyle(bodyStyle);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_41 = __this->get_bodyStyle_7();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_42 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mF096C292507D1BE25B6C458FB771CFC4509CE95B(L_42, L_41, /*hidden argument*/NULL);
		__this->set_footerStyle_9(L_42);
		// footerStyle.normal.background = footerTexture;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_43 = __this->get_footerStyle_9();
		NullCheck(L_43);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_44;
		L_44 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_43, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_45 = __this->get_footerTexture_12();
		NullCheck(L_44);
		GUIStyleState_set_background_mA80B6ED2555C6551933E2D0ECA5081FC254B6A21(L_44, L_45, /*hidden argument*/NULL);
		// footerStyle.normal.textColor = Color.white;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_46 = __this->get_footerStyle_9();
		NullCheck(L_46);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_47;
		L_47 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_46, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_48;
		L_48 = Color_get_white_m2F4F3E4DD95471924015E9CB5AF20E59C650EE37(/*hidden argument*/NULL);
		NullCheck(L_47);
		GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A(L_47, L_48, /*hidden argument*/NULL);
		// footerStyle.fontSize = (int) (28 * physicalSizeMultiplier * Screen.dpi / 160);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_49 = __this->get_footerStyle_9();
		int32_t L_50 = V_0;
		float L_51;
		L_51 = Screen_get_dpi_m85EE75E8213E87F9A12DCC43342CFCE122097D71(/*hidden argument*/NULL);
		NullCheck(L_49);
		GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6(L_49, il2cpp_codegen_cast_double_to_int<int32_t>(((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)28), (int32_t)L_50)))), (float)L_51))/(float)(160.0f)))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Texture2D DefaultInitializationErrorHandler::CreateSinglePixelTexture(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * DefaultInitializationErrorHandler_CreateSinglePixelTexture_m55A1103D76BEF27C969C54F8071F9E0F8C6192FD (DefaultInitializationErrorHandler_tFBA569E354DBCE9B7B7F4A60B3554F7FC7B33D16 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var texture = new Texture2D(1, 1, TextureFormat.ARGB32, false);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092(L_0, 1, 1, 5, (bool)0, /*hidden argument*/NULL);
		// texture.SetPixel(0, 0, color);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_1 = L_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___color0;
		NullCheck(L_1);
		Texture2D_SetPixel_m78878905E58C5DE9BCFED8D9262D025789E22F92(L_1, 0, 0, L_2, /*hidden argument*/NULL);
		// texture.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3 = L_1;
		NullCheck(L_3);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_3, /*hidden argument*/NULL);
		// return texture;
		return L_3;
	}
}
// System.Void DefaultInitializationErrorHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler__ctor_mB1FC85BDC99DBFE128DE317F1779C885DFF00F62 (DefaultInitializationErrorHandler_tFBA569E354DBCE9B7B7F4A60B3554F7FC7B33D16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string mErrorText = "";
		__this->set_mErrorText_4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		VuforiaMonoBehaviour__ctor_mD21E7C30B7685653D979F399BF3E6528DC120A70(__this, /*hidden argument*/NULL);
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
// System.Void DefaultObserverEventHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultObserverEventHandler_Start_m6F8C8D5271A2D27D7F8C8BA56744EA98F12759B8 (DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mFDAFDD7480C974BAAB7915B1566987E6FF2863FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_m6702F5465C5156B1FB05A678988FF9A80D94AE06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tBEC7B0597650F8D41DD8126DFAC07D2EA63976A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274_m2BF53E726DEB22E09654453E75F5ECF4F293E6C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultObserverEventHandler_OnObserverDestroyed_m1CB3F37FA62FD6C48DF24D4337153AEED55C30C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultObserverEventHandler_OnObserverStatusChanged_m030A3CC1650F60A62A00D9E4E55AA88DDC6DEF7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mObserverBehaviour = GetComponent<ObserverBehaviour>();
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_0;
		L_0 = Component_GetComponent_TisObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274_m2BF53E726DEB22E09654453E75F5ECF4F293E6C0(__this, /*hidden argument*/Component_GetComponent_TisObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274_m2BF53E726DEB22E09654453E75F5ECF4F293E6C0_RuntimeMethod_var);
		__this->set_mObserverBehaviour_9(L_0);
		// if (mObserverBehaviour)
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_1 = __this->get_mObserverBehaviour_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0064;
		}
	}
	{
		// mObserverBehaviour.OnTargetStatusChanged += OnObserverStatusChanged;
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_3 = __this->get_mObserverBehaviour_9();
		Action_2_tBEC7B0597650F8D41DD8126DFAC07D2EA63976A4 * L_4 = (Action_2_tBEC7B0597650F8D41DD8126DFAC07D2EA63976A4 *)il2cpp_codegen_object_new(Action_2_tBEC7B0597650F8D41DD8126DFAC07D2EA63976A4_il2cpp_TypeInfo_var);
		Action_2__ctor_m6702F5465C5156B1FB05A678988FF9A80D94AE06(L_4, __this, (intptr_t)((intptr_t)DefaultObserverEventHandler_OnObserverStatusChanged_m030A3CC1650F60A62A00D9E4E55AA88DDC6DEF7D_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m6702F5465C5156B1FB05A678988FF9A80D94AE06_RuntimeMethod_var);
		NullCheck(L_3);
		ObserverBehaviour_add_OnTargetStatusChanged_m35984866CE532D434875F398D32362E05D90197F(L_3, L_4, /*hidden argument*/NULL);
		// mObserverBehaviour.OnBehaviourDestroyed += OnObserverDestroyed;
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_5 = __this->get_mObserverBehaviour_9();
		Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775 * L_6 = (Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775 *)il2cpp_codegen_object_new(Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775_il2cpp_TypeInfo_var);
		Action_1__ctor_mFDAFDD7480C974BAAB7915B1566987E6FF2863FC(L_6, __this, (intptr_t)((intptr_t)DefaultObserverEventHandler_OnObserverDestroyed_m1CB3F37FA62FD6C48DF24D4337153AEED55C30C7_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mFDAFDD7480C974BAAB7915B1566987E6FF2863FC_RuntimeMethod_var);
		NullCheck(L_5);
		ObserverBehaviour_add_OnBehaviourDestroyed_m0194A9DC1CB5B11FE2F24E3A1D406D925D31FA48(L_5, L_6, /*hidden argument*/NULL);
		// OnObserverStatusChanged(mObserverBehaviour, mObserverBehaviour.TargetStatus);
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_7 = __this->get_mObserverBehaviour_9();
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_8 = __this->get_mObserverBehaviour_9();
		NullCheck(L_8);
		TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  L_9;
		L_9 = ObserverBehaviour_get_TargetStatus_m9F21B240F06DA71ED4613EB3A99ADA6E1942A499_inline(L_8, /*hidden argument*/NULL);
		DefaultObserverEventHandler_OnObserverStatusChanged_m030A3CC1650F60A62A00D9E4E55AA88DDC6DEF7D(__this, L_7, L_9, /*hidden argument*/NULL);
		// SetupPoseSmoothing();
		DefaultObserverEventHandler_SetupPoseSmoothing_mB61EA45A21B82D38E6F0B8EB117F95D27CAC6041(__this, /*hidden argument*/NULL);
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void DefaultObserverEventHandler::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultObserverEventHandler_OnDestroy_m1A6F1B655C8806C82C305EF5A98F82CC47433FEB (DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultObserverEventHandler_OnStateUpdated_m625595CBA850F0F783F9557388A7AFC08DFAC0CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB * G_B6_0 = NULL;
	PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB * G_B5_0 = NULL;
	{
		// if(VuforiaBehaviour.Instance != null)
		VuforiaBehaviour_t6114F20D1970225E083A4FBAFB269FA524FEF407 * L_0;
		L_0 = VuforiaBehaviour_get_Instance_mF563DFB36205C62EAEC611673162CF5016DA5A03(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// VuforiaBehaviour.Instance.World.OnStateUpdated -= OnStateUpdated;
		VuforiaBehaviour_t6114F20D1970225E083A4FBAFB269FA524FEF407 * L_2;
		L_2 = VuforiaBehaviour_get_Instance_mF563DFB36205C62EAEC611673162CF5016DA5A03(/*hidden argument*/NULL);
		NullCheck(L_2);
		World_tD34189E7DB459CEB10A1D3C0D7C94B25197AD14F * L_3;
		L_3 = VuforiaBehaviour_get_World_mC71DDE046F81C181091466CDF791EE76EB0582A1_inline(L_2, /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_4, __this, (intptr_t)((intptr_t)DefaultObserverEventHandler_OnStateUpdated_m625595CBA850F0F783F9557388A7AFC08DFAC0CF_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		World_remove_OnStateUpdated_m3B37D9C4EAD22763956ADC3BB008C1106F2AA786(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// if (mObserverBehaviour)
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_5 = __this->get_mObserverBehaviour_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		// OnObserverDestroyed(mObserverBehaviour);
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_7 = __this->get_mObserverBehaviour_9();
		DefaultObserverEventHandler_OnObserverDestroyed_m1CB3F37FA62FD6C48DF24D4337153AEED55C30C7(__this, L_7, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// mPoseSmoother?.Dispose();
		PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB * L_8 = __this->get_mPoseSmoother_13();
		PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB * L_9 = L_8;
		G_B5_0 = L_9;
		if (L_9)
		{
			G_B6_0 = L_9;
			goto IL_004c;
		}
	}
	{
		return;
	}

IL_004c:
	{
		NullCheck(G_B6_0);
		PoseSmoother_Dispose_m72E5515BFBBDD98CC5F7E3D5B0124B02BD0E0B2B(G_B6_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DefaultObserverEventHandler::OnObserverDestroyed(Vuforia.ObserverBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultObserverEventHandler_OnObserverDestroyed_m1CB3F37FA62FD6C48DF24D4337153AEED55C30C7 (DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B * __this, ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * ___observer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mFDAFDD7480C974BAAB7915B1566987E6FF2863FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_m6702F5465C5156B1FB05A678988FF9A80D94AE06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tBEC7B0597650F8D41DD8126DFAC07D2EA63976A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultObserverEventHandler_OnObserverDestroyed_m1CB3F37FA62FD6C48DF24D4337153AEED55C30C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultObserverEventHandler_OnObserverStatusChanged_m030A3CC1650F60A62A00D9E4E55AA88DDC6DEF7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mObserverBehaviour.OnTargetStatusChanged -= OnObserverStatusChanged;
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_0 = __this->get_mObserverBehaviour_9();
		Action_2_tBEC7B0597650F8D41DD8126DFAC07D2EA63976A4 * L_1 = (Action_2_tBEC7B0597650F8D41DD8126DFAC07D2EA63976A4 *)il2cpp_codegen_object_new(Action_2_tBEC7B0597650F8D41DD8126DFAC07D2EA63976A4_il2cpp_TypeInfo_var);
		Action_2__ctor_m6702F5465C5156B1FB05A678988FF9A80D94AE06(L_1, __this, (intptr_t)((intptr_t)DefaultObserverEventHandler_OnObserverStatusChanged_m030A3CC1650F60A62A00D9E4E55AA88DDC6DEF7D_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m6702F5465C5156B1FB05A678988FF9A80D94AE06_RuntimeMethod_var);
		NullCheck(L_0);
		ObserverBehaviour_remove_OnTargetStatusChanged_m0D9E06F1D07D727D888A974EFCF948AAC02F5BCC(L_0, L_1, /*hidden argument*/NULL);
		// mObserverBehaviour.OnBehaviourDestroyed -= OnObserverDestroyed;
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_2 = __this->get_mObserverBehaviour_9();
		Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775 * L_3 = (Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775 *)il2cpp_codegen_object_new(Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775_il2cpp_TypeInfo_var);
		Action_1__ctor_mFDAFDD7480C974BAAB7915B1566987E6FF2863FC(L_3, __this, (intptr_t)((intptr_t)DefaultObserverEventHandler_OnObserverDestroyed_m1CB3F37FA62FD6C48DF24D4337153AEED55C30C7_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mFDAFDD7480C974BAAB7915B1566987E6FF2863FC_RuntimeMethod_var);
		NullCheck(L_2);
		ObserverBehaviour_remove_OnBehaviourDestroyed_m8F2C49A65AD8BA4135842F32F7BE59990003D87F(L_2, L_3, /*hidden argument*/NULL);
		// mObserverBehaviour = null;
		__this->set_mObserverBehaviour_9((ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 *)NULL);
		// }
		return;
	}
}
// System.Void DefaultObserverEventHandler::OnObserverStatusChanged(Vuforia.ObserverBehaviour,Vuforia.TargetStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultObserverEventHandler_OnObserverStatusChanged_m030A3CC1650F60A62A00D9E4E55AA88DDC6DEF7D (DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B * __this, ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * ___behaviour0, TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  ___targetStatus1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StatusInfo_t2D3913E705BD464CB7101343C8E44C3140AAEBFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Status_t507773DC9329777DFF23BBE12880E1A5331F8826_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7607DB878D95B52658729D4CD10E90FB9C8AEEB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2 * V_1 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B5_2 = NULL;
	{
		// var name = mObserverBehaviour.TargetName;
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_0 = __this->get_mObserverBehaviour_9();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ObserverBehaviour_get_TargetName_m66DAA89D2597636EED4EDD92F1C05167CDB688AD_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (mObserverBehaviour is VuMarkBehaviour vuMarkBehaviour && vuMarkBehaviour.InstanceId != null)
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_2 = __this->get_mObserverBehaviour_9();
		V_1 = ((VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2 *)IsInstClass((RuntimeObject*)L_2, VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2_il2cpp_TypeInfo_var));
		VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2 * L_3 = V_1;
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2 * L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = VuMarkBehaviour_get_InstanceId_m73EF1F9F535AFC24A86D86EEDB775D5E81BD132D_inline(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		// name += " (" + vuMarkBehaviour.InstanceId + ")";
		String_t* L_6 = V_0;
		VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2 * L_7 = V_1;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = VuMarkBehaviour_get_InstanceId_m73EF1F9F535AFC24A86D86EEDB775D5E81BD132D_inline(L_7, /*hidden argument*/NULL);
		RuntimeObject* L_9 = L_8;
		G_B3_0 = L_9;
		G_B3_1 = _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
		G_B3_2 = L_6;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
			G_B4_2 = L_6;
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		G_B5_2 = G_B3_2;
		goto IL_003b;
	}

IL_0036:
	{
		NullCheck(G_B4_0);
		String_t* L_10;
		L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B4_0);
		G_B5_0 = L_10;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
	}

IL_003b:
	{
		String_t* L_11;
		L_11 = String_Concat_m5D784E6CEEBE99ED8749AA4B9491D926273FD749(G_B5_2, G_B5_1, G_B5_0, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_0046:
	{
		// Debug.Log($"Target status: {name} {targetStatus.Status} -- {targetStatus.StatusInfo}");
		String_t* L_12 = V_0;
		int32_t L_13;
		L_13 = TargetStatus_get_Status_mD745DEB3CFE4D18A1E973178AA8CA9BB73178D5E_inline((TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1 *)(&___targetStatus1), /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Status_t507773DC9329777DFF23BBE12880E1A5331F8826_il2cpp_TypeInfo_var, &L_14);
		int32_t L_16;
		L_16 = TargetStatus_get_StatusInfo_m45D7AFC8563C8FCEA15B0E2983F59E8C88A37B9D_inline((TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1 *)(&___targetStatus1), /*hidden argument*/NULL);
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(StatusInfo_t2D3913E705BD464CB7101343C8E44C3140AAEBFD_il2cpp_TypeInfo_var, &L_17);
		String_t* L_19;
		L_19 = String_Format_mD0D523A440845BA7F58E68187E029DC9AB821CED(_stringLiteral7607DB878D95B52658729D4CD10E90FB9C8AEEB2, L_12, L_15, L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_19, /*hidden argument*/NULL);
		// HandleTargetStatusChanged(mPreviousTargetStatus.Status, targetStatus.Status);
		TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1 * L_20 = __this->get_address_of_mPreviousTargetStatus_10();
		int32_t L_21;
		L_21 = TargetStatus_get_Status_mD745DEB3CFE4D18A1E973178AA8CA9BB73178D5E_inline((TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1 *)L_20, /*hidden argument*/NULL);
		int32_t L_22;
		L_22 = TargetStatus_get_Status_mD745DEB3CFE4D18A1E973178AA8CA9BB73178D5E_inline((TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1 *)(&___targetStatus1), /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(6 /* System.Void DefaultObserverEventHandler::HandleTargetStatusChanged(Vuforia.Status,Vuforia.Status) */, __this, L_21, L_22);
		// HandleTargetStatusInfoChanged(targetStatus.StatusInfo);
		int32_t L_23;
		L_23 = TargetStatus_get_StatusInfo_m45D7AFC8563C8FCEA15B0E2983F59E8C88A37B9D_inline((TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1 *)(&___targetStatus1), /*hidden argument*/NULL);
		VirtActionInvoker1< int32_t >::Invoke(7 /* System.Void DefaultObserverEventHandler::HandleTargetStatusInfoChanged(Vuforia.StatusInfo) */, __this, L_23);
		// mPreviousTargetStatus = targetStatus;
		TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  L_24 = ___targetStatus1;
		__this->set_mPreviousTargetStatus_10(L_24);
		// }
		return;
	}
}
// System.Void DefaultObserverEventHandler::HandleTargetStatusChanged(Vuforia.Status,Vuforia.Status)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultObserverEventHandler_HandleTargetStatusChanged_m51CF4D0669B4D321628AB3793C3827D11690C113 (DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B * __this, int32_t ___previousStatus0, int32_t ___newStatus1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// var shouldBeRendererBefore = ShouldBeRendered(previousStatus);
		int32_t L_0 = ___previousStatus0;
		bool L_1;
		L_1 = DefaultObserverEventHandler_ShouldBeRendered_mFBFA09B26DF5E3B25DE98CB8BD3D9FB007876D6F(__this, L_0, /*hidden argument*/NULL);
		// var shouldBeRendererNow = ShouldBeRendered(newStatus);
		int32_t L_2 = ___newStatus1;
		bool L_3;
		L_3 = DefaultObserverEventHandler_ShouldBeRendered_mFBFA09B26DF5E3B25DE98CB8BD3D9FB007876D6F(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (shouldBeRendererBefore != shouldBeRendererNow)
		bool L_4 = V_0;
		if ((((int32_t)L_1) == ((int32_t)L_4)))
		{
			goto IL_0025;
		}
	}
	{
		// if (shouldBeRendererNow)
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		// OnTrackingFound();
		VirtActionInvoker0::Invoke(8 /* System.Void DefaultObserverEventHandler::OnTrackingFound() */, __this);
		// }
		goto IL_0036;
	}

IL_001d:
	{
		// OnTrackingLost();
		VirtActionInvoker0::Invoke(9 /* System.Void DefaultObserverEventHandler::OnTrackingLost() */, __this);
		// }
		goto IL_0036;
	}

IL_0025:
	{
		// if (!mCallbackReceivedOnce && !shouldBeRendererNow)
		bool L_6 = __this->get_mCallbackReceivedOnce_11();
		if (L_6)
		{
			goto IL_0036;
		}
	}
	{
		bool L_7 = V_0;
		if (L_7)
		{
			goto IL_0036;
		}
	}
	{
		// OnTrackingLost();
		VirtActionInvoker0::Invoke(9 /* System.Void DefaultObserverEventHandler::OnTrackingLost() */, __this);
	}

IL_0036:
	{
		// mCallbackReceivedOnce = true;
		__this->set_mCallbackReceivedOnce_11((bool)1);
		// }
		return;
	}
}
// System.Void DefaultObserverEventHandler::HandleTargetStatusInfoChanged(Vuforia.StatusInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultObserverEventHandler_HandleTargetStatusInfoChanged_m489CA69B525FB686EE98DE6434922A6744B8D284 (DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B * __this, int32_t ___newStatusInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7958D8718851B62A555321504A274F41897CBF6C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (newStatusInfo == StatusInfo.WRONG_SCALE)
		int32_t L_0 = ___newStatusInfo0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0023;
		}
	}
	{
		// Debug.LogErrorFormat("The target {0} appears to be scaled incorrectly. " +
		//                      "This might result in tracking issues. " +
		//                      "Please make sure that the target size corresponds to the size of the " +
		//                      "physical object in meters and regenerate the target or set the correct " +
		//                      "size in the target's inspector.", mObserverBehaviour.TargetName);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_3 = __this->get_mObserverBehaviour_9();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = ObserverBehaviour_get_TargetName_m66DAA89D2597636EED4EDD92F1C05167CDB688AD_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m92BE92B1C1EDD4B66E5D3CF9ED6480D7D3FFA0E9(_stringLiteral7958D8718851B62A555321504A274F41897CBF6C, L_2, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Boolean DefaultObserverEventHandler::ShouldBeRendered(Vuforia.Status)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultObserverEventHandler_ShouldBeRendered_mFBFA09B26DF5E3B25DE98CB8BD3D9FB007876D6F (DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B * __this, int32_t ___status0, const RuntimeMethod* method)
{
	{
		// if (status == Status.TRACKED)
		int32_t L_0 = ___status0;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0006;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0006:
	{
		// if (StatusFilter == TrackingStatusFilter.Tracked_ExtendedTracked && status == Status.EXTENDED_TRACKED)
		int32_t L_1 = __this->get_StatusFilter_4();
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = ___status0;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_0015;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0015:
	{
		// if (StatusFilter == TrackingStatusFilter.Tracked_ExtendedTracked_Limited &&
		//     (status == Status.EXTENDED_TRACKED || status == Status.LIMITED))
		int32_t L_3 = __this->get_StatusFilter_4();
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_4 = ___status0;
		if ((((int32_t)L_4) == ((int32_t)4)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = ___status0;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0028;
		}
	}

IL_0026:
	{
		// return true;
		return (bool)1;
	}

IL_0028:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void DefaultObserverEventHandler::OnTrackingFound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultObserverEventHandler_OnTrackingFound_m8DA7EF44FB1AD27576BD45106D7A31F985702F10 (DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD5E5663A016CDAD3F6409404EE12FD8BFAAC79FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m3B2271E32876821DA2A4626F1841EE1F38944EB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m1A95B452BAE19475E5A65028964BF91500D30E24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* V_0 = NULL;
	CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* V_1 = NULL;
	RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* V_2 = NULL;
	int32_t V_3 = 0;
	ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* V_4 = NULL;
	CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* V_5 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B12_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B11_0 = NULL;
	{
		// if (mObserverBehaviour)
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_0 = __this->get_mObserverBehaviour_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0083;
		}
	}
	{
		// var rendererComponents = mObserverBehaviour.GetComponentsInChildren<Renderer>(true);
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_2 = __this->get_mObserverBehaviour_9();
		NullCheck(L_2);
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_3;
		L_3 = Component_GetComponentsInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m1A95B452BAE19475E5A65028964BF91500D30E24(L_2, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m1A95B452BAE19475E5A65028964BF91500D30E24_RuntimeMethod_var);
		// var colliderComponents = mObserverBehaviour.GetComponentsInChildren<Collider>(true);
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_4 = __this->get_mObserverBehaviour_9();
		NullCheck(L_4);
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_5;
		L_5 = Component_GetComponentsInChildren_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m3B2271E32876821DA2A4626F1841EE1F38944EB2(L_4, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m3B2271E32876821DA2A4626F1841EE1F38944EB2_RuntimeMethod_var);
		V_0 = L_5;
		// var canvasComponents = mObserverBehaviour.GetComponentsInChildren<Canvas>(true);
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_6 = __this->get_mObserverBehaviour_9();
		NullCheck(L_6);
		CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* L_7;
		L_7 = Component_GetComponentsInChildren_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD5E5663A016CDAD3F6409404EE12FD8BFAAC79FF(L_6, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD5E5663A016CDAD3F6409404EE12FD8BFAAC79FF_RuntimeMethod_var);
		V_1 = L_7;
		// foreach (var component in rendererComponents)
		V_2 = L_3;
		V_3 = 0;
		goto IL_0045;
	}

IL_0038:
	{
		// foreach (var component in rendererComponents)
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		// component.enabled = true;
		NullCheck(L_11);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_11, (bool)1, /*hidden argument*/NULL);
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0045:
	{
		// foreach (var component in rendererComponents)
		int32_t L_13 = V_3;
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_14 = V_2;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		// foreach (var component in colliderComponents)
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_15 = V_0;
		V_4 = L_15;
		V_3 = 0;
		goto IL_0060;
	}

IL_0052:
	{
		// foreach (var component in colliderComponents)
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_16 = V_4;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		// component.enabled = true;
		NullCheck(L_19);
		Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_19, (bool)1, /*hidden argument*/NULL);
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0060:
	{
		// foreach (var component in colliderComponents)
		int32_t L_21 = V_3;
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_22 = V_4;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))))
		{
			goto IL_0052;
		}
	}
	{
		// foreach (var component in canvasComponents)
		CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* L_23 = V_1;
		V_5 = L_23;
		V_3 = 0;
		goto IL_007c;
	}

IL_006e:
	{
		// foreach (var component in canvasComponents)
		CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* L_24 = V_5;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		// component.enabled = true;
		NullCheck(L_27);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_27, (bool)1, /*hidden argument*/NULL);
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_007c:
	{
		// foreach (var component in canvasComponents)
		int32_t L_29 = V_3;
		CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* L_30 = V_5;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))))))
		{
			goto IL_006e;
		}
	}

IL_0083:
	{
		// OnTargetFound?.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_31 = __this->get_OnTargetFound_7();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_32 = L_31;
		G_B11_0 = L_32;
		if (L_32)
		{
			G_B12_0 = L_32;
			goto IL_008e;
		}
	}
	{
		return;
	}

IL_008e:
	{
		NullCheck(G_B12_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B12_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DefaultObserverEventHandler::OnTrackingLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultObserverEventHandler_OnTrackingLost_mD0EDFFB4900337B2BEDA49A85E4FCC47BDCC6B50 (DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD5E5663A016CDAD3F6409404EE12FD8BFAAC79FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m3B2271E32876821DA2A4626F1841EE1F38944EB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m1A95B452BAE19475E5A65028964BF91500D30E24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* V_0 = NULL;
	CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* V_1 = NULL;
	RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* V_2 = NULL;
	int32_t V_3 = 0;
	ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* V_4 = NULL;
	CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* V_5 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B12_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B11_0 = NULL;
	{
		// if (mObserverBehaviour)
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_0 = __this->get_mObserverBehaviour_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0083;
		}
	}
	{
		// var rendererComponents = mObserverBehaviour.GetComponentsInChildren<Renderer>(true);
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_2 = __this->get_mObserverBehaviour_9();
		NullCheck(L_2);
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_3;
		L_3 = Component_GetComponentsInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m1A95B452BAE19475E5A65028964BF91500D30E24(L_2, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m1A95B452BAE19475E5A65028964BF91500D30E24_RuntimeMethod_var);
		// var colliderComponents = mObserverBehaviour.GetComponentsInChildren<Collider>(true);
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_4 = __this->get_mObserverBehaviour_9();
		NullCheck(L_4);
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_5;
		L_5 = Component_GetComponentsInChildren_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m3B2271E32876821DA2A4626F1841EE1F38944EB2(L_4, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m3B2271E32876821DA2A4626F1841EE1F38944EB2_RuntimeMethod_var);
		V_0 = L_5;
		// var canvasComponents = mObserverBehaviour.GetComponentsInChildren<Canvas>(true);
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_6 = __this->get_mObserverBehaviour_9();
		NullCheck(L_6);
		CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* L_7;
		L_7 = Component_GetComponentsInChildren_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD5E5663A016CDAD3F6409404EE12FD8BFAAC79FF(L_6, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD5E5663A016CDAD3F6409404EE12FD8BFAAC79FF_RuntimeMethod_var);
		V_1 = L_7;
		// foreach (var component in rendererComponents)
		V_2 = L_3;
		V_3 = 0;
		goto IL_0045;
	}

IL_0038:
	{
		// foreach (var component in rendererComponents)
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		// component.enabled = false;
		NullCheck(L_11);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_11, (bool)0, /*hidden argument*/NULL);
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0045:
	{
		// foreach (var component in rendererComponents)
		int32_t L_13 = V_3;
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_14 = V_2;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		// foreach (var component in colliderComponents)
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_15 = V_0;
		V_4 = L_15;
		V_3 = 0;
		goto IL_0060;
	}

IL_0052:
	{
		// foreach (var component in colliderComponents)
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_16 = V_4;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		// component.enabled = false;
		NullCheck(L_19);
		Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_19, (bool)0, /*hidden argument*/NULL);
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0060:
	{
		// foreach (var component in colliderComponents)
		int32_t L_21 = V_3;
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_22 = V_4;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))))
		{
			goto IL_0052;
		}
	}
	{
		// foreach (var component in canvasComponents)
		CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* L_23 = V_1;
		V_5 = L_23;
		V_3 = 0;
		goto IL_007c;
	}

IL_006e:
	{
		// foreach (var component in canvasComponents)
		CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* L_24 = V_5;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		// component.enabled = false;
		NullCheck(L_27);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_27, (bool)0, /*hidden argument*/NULL);
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_007c:
	{
		// foreach (var component in canvasComponents)
		int32_t L_29 = V_3;
		CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* L_30 = V_5;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))))))
		{
			goto IL_006e;
		}
	}

IL_0083:
	{
		// OnTargetLost?.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_31 = __this->get_OnTargetLost_8();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_32 = L_31;
		G_B11_0 = L_32;
		if (L_32)
		{
			G_B12_0 = L_32;
			goto IL_008e;
		}
	}
	{
		return;
	}

IL_008e:
	{
		NullCheck(G_B12_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B12_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DefaultObserverEventHandler::SetupPoseSmoothing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultObserverEventHandler_SetupPoseSmoothing_mB61EA45A21B82D38E6F0B8EB117F95D27CAC6041 (DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultObserverEventHandler_OnStateUpdated_m625595CBA850F0F783F9557388A7AFC08DFAC0CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UsePoseSmoothing &= VuforiaBehaviour.Instance.WorldCenterMode == WorldCenterMode.DEVICE; // pose smoothing only works with the DEVICE world center mode
		bool L_0 = __this->get_UsePoseSmoothing_5();
		VuforiaBehaviour_t6114F20D1970225E083A4FBAFB269FA524FEF407 * L_1;
		L_1 = VuforiaBehaviour_get_Instance_mF563DFB36205C62EAEC611673162CF5016DA5A03(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VuforiaBehaviour_get_WorldCenterMode_mE0CB269C2A317EBEF02FE53240A456D609CFF35C_inline(L_1, /*hidden argument*/NULL);
		__this->set_UsePoseSmoothing_5((bool)((int32_t)((int32_t)L_0&(int32_t)((((int32_t)L_2) == ((int32_t)2))? 1 : 0))));
		// mPoseSmoother = new PoseSmoother(mObserverBehaviour, AnimationCurve);
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_3 = __this->get_mObserverBehaviour_9();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = __this->get_AnimationCurve_6();
		PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB * L_5 = (PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB *)il2cpp_codegen_object_new(PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB_il2cpp_TypeInfo_var);
		PoseSmoother__ctor_mFBFE84CAB2D8C6329EF21B8112E81575D020EB64(L_5, L_3, L_4, /*hidden argument*/NULL);
		__this->set_mPoseSmoother_13(L_5);
		// VuforiaBehaviour.Instance.World.OnStateUpdated += OnStateUpdated;
		VuforiaBehaviour_t6114F20D1970225E083A4FBAFB269FA524FEF407 * L_6;
		L_6 = VuforiaBehaviour_get_Instance_mF563DFB36205C62EAEC611673162CF5016DA5A03(/*hidden argument*/NULL);
		NullCheck(L_6);
		World_tD34189E7DB459CEB10A1D3C0D7C94B25197AD14F * L_7;
		L_7 = VuforiaBehaviour_get_World_mC71DDE046F81C181091466CDF791EE76EB0582A1_inline(L_6, /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_8, __this, (intptr_t)((intptr_t)DefaultObserverEventHandler_OnStateUpdated_m625595CBA850F0F783F9557388A7AFC08DFAC0CF_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		World_add_OnStateUpdated_m4BA04D2093A27CC0BAEE90E2100537AFD5362F43(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DefaultObserverEventHandler::OnStateUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultObserverEventHandler_OnStateUpdated_m625595CBA850F0F783F9557388A7AFC08DFAC0CF (DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B * __this, const RuntimeMethod* method)
{
	{
		// if (enabled && UsePoseSmoothing)
		bool L_0;
		L_0 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		bool L_1 = __this->get_UsePoseSmoothing_5();
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// mPoseSmoother.Update();
		PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB * L_2 = __this->get_mPoseSmoother_13();
		NullCheck(L_2);
		PoseSmoother_Update_m3A8D6EDB3153B4136B48AC8491A41A41CC662F38(L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void DefaultObserverEventHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultObserverEventHandler__ctor_mB7B7FF78886F7B3161AFFC36878E1B4D5C759DFB (DefaultObserverEventHandler_t25FF9CE0FF0ED822CE21D6AE20C6A6E77105C02B * __this, const RuntimeMethod* method)
{
	{
		// public TrackingStatusFilter StatusFilter = TrackingStatusFilter.Tracked_ExtendedTracked_Limited;
		__this->set_StatusFilter_4(2);
		// public AnimationCurve AnimationCurve = AnimationCurve.Linear(0, 0, LERP_DURATION, 1);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0;
		L_0 = AnimationCurve_Linear_m16BC66B778E72884D1E105EC7A15E8CF8ADDBF04((0.0f), (0.0f), (0.300000012f), (1.0f), /*hidden argument*/NULL);
		__this->set_AnimationCurve_6(L_0);
		// protected TargetStatus mPreviousTargetStatus = TargetStatus.NotObserved;
		TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  L_1;
		L_1 = TargetStatus_get_NotObserved_mB76C66781AFB21647114F43B899E57422A61EE90(/*hidden argument*/NULL);
		__this->set_mPreviousTargetStatus_10(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::add_ARFoundationImageEvent(System.Action`1<Vuforia.ARFoundation.ARFoundationImage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSourceARFoundationFacade_add_ARFoundationImageEvent_m82FAB89832F63B7443CB60BAD47035D1766F8EAE (OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * __this, Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * V_0 = NULL;
	Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * V_1 = NULL;
	Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * V_2 = NULL;
	{
		Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * L_0 = __this->get_ARFoundationImageEvent_7();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * L_2 = V_1;
		Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823_il2cpp_TypeInfo_var));
		Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 ** L_5 = __this->get_address_of_ARFoundationImageEvent_7();
		Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * L_6 = V_2;
		Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * L_7 = V_1;
		Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 *>((Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * L_9 = V_0;
		Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 *)L_9) == ((RuntimeObject*)(Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::remove_ARFoundationImageEvent(System.Action`1<Vuforia.ARFoundation.ARFoundationImage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSourceARFoundationFacade_remove_ARFoundationImageEvent_m9B85B80EB0CD4D82C3BE5E5E98895828DED87217 (OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * __this, Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * V_0 = NULL;
	Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * V_1 = NULL;
	Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * V_2 = NULL;
	{
		Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * L_0 = __this->get_ARFoundationImageEvent_7();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * L_2 = V_1;
		Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823_il2cpp_TypeInfo_var));
		Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 ** L_5 = __this->get_address_of_ARFoundationImageEvent_7();
		Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * L_6 = V_2;
		Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * L_7 = V_1;
		Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 *>((Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * L_9 = V_0;
		Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 *)L_9) == ((RuntimeObject*)(Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::add_ARFoundationPoseEvent(System.Action`2<UnityEngine.Transform,System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSourceARFoundationFacade_add_ARFoundationPoseEvent_mBED2F28BD9C420174D94EF324A721B27D219A2FD (OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * __this, Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * V_0 = NULL;
	Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * V_1 = NULL;
	Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * V_2 = NULL;
	{
		Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * L_0 = __this->get_ARFoundationPoseEvent_8();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * L_1 = V_0;
		V_1 = L_1;
		Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * L_2 = V_1;
		Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 *)CastclassSealed((RuntimeObject*)L_4, Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7_il2cpp_TypeInfo_var));
		Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 ** L_5 = __this->get_address_of_ARFoundationPoseEvent_8();
		Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * L_6 = V_2;
		Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * L_7 = V_1;
		Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 *>((Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * L_9 = V_0;
		Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 *)L_9) == ((RuntimeObject*)(Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::remove_ARFoundationPoseEvent(System.Action`2<UnityEngine.Transform,System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSourceARFoundationFacade_remove_ARFoundationPoseEvent_mE5B1654BD15FAA4E8B4DE7DDBA380E94D6222088 (OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * __this, Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * V_0 = NULL;
	Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * V_1 = NULL;
	Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * V_2 = NULL;
	{
		Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * L_0 = __this->get_ARFoundationPoseEvent_8();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * L_1 = V_0;
		V_1 = L_1;
		Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * L_2 = V_1;
		Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 *)CastclassSealed((RuntimeObject*)L_4, Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7_il2cpp_TypeInfo_var));
		Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 ** L_5 = __this->get_address_of_ARFoundationPoseEvent_8();
		Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * L_6 = V_2;
		Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * L_7 = V_1;
		Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 *>((Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * L_9 = V_0;
		Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 *)L_9) == ((RuntimeObject*)(Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::add_AnchorsChangedEvent(System.Action`2<System.Collections.Generic.List`1<System.Tuple`2<System.String,UnityEngine.Transform>>,System.Collections.Generic.List`1<System.Tuple`2<System.String,UnityEngine.Transform>>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSourceARFoundationFacade_add_AnchorsChangedEvent_m4C2E66E1C236F898D0B67530E595B645333A9F3A (OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * __this, Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * V_0 = NULL;
	Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * V_1 = NULL;
	Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * V_2 = NULL;
	{
		Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * L_0 = __this->get_AnchorsChangedEvent_9();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * L_1 = V_0;
		V_1 = L_1;
		Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * L_2 = V_1;
		Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D *)CastclassSealed((RuntimeObject*)L_4, Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D_il2cpp_TypeInfo_var));
		Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D ** L_5 = __this->get_address_of_AnchorsChangedEvent_9();
		Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * L_6 = V_2;
		Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * L_7 = V_1;
		Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D *>((Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * L_9 = V_0;
		Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D *)L_9) == ((RuntimeObject*)(Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::remove_AnchorsChangedEvent(System.Action`2<System.Collections.Generic.List`1<System.Tuple`2<System.String,UnityEngine.Transform>>,System.Collections.Generic.List`1<System.Tuple`2<System.String,UnityEngine.Transform>>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSourceARFoundationFacade_remove_AnchorsChangedEvent_m8C8237E7F3CA9CB56900411573187B006FBBFE91 (OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * __this, Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * V_0 = NULL;
	Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * V_1 = NULL;
	Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * V_2 = NULL;
	{
		Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * L_0 = __this->get_AnchorsChangedEvent_9();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * L_1 = V_0;
		V_1 = L_1;
		Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * L_2 = V_1;
		Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D *)CastclassSealed((RuntimeObject*)L_4, Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D_il2cpp_TypeInfo_var));
		Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D ** L_5 = __this->get_address_of_AnchorsChangedEvent_9();
		Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * L_6 = V_2;
		Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * L_7 = V_1;
		Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D *>((Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * L_9 = V_0;
		Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D *)L_9) == ((RuntimeObject*)(Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::get_IsAnchorSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenSourceARFoundationFacade_get_IsAnchorSupported_mD90B7F312A4DA470806BE84C7C7060AFF29EE8AC (OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsAnchorSupported => mIsAnchorSupported;
		bool L_0 = __this->get_mIsAnchorSupported_0();
		return L_0;
	}
}
// System.Boolean Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::IsARFoundationScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenSourceARFoundationFacade_IsARFoundationScene_m33650BFF8A109A5E46D7032208F239B1C3AA539A (OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m02CC4A1C778D32BBEBFD5363556C9538A378F77A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var arSession = GameObject.FindObjectOfType<ARSession>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_0;
		L_0 = Object_FindObjectOfType_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m02CC4A1C778D32BBEBFD5363556C9538A378F77A(/*hidden argument*/Object_FindObjectOfType_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m02CC4A1C778D32BBEBFD5363556C9538A378F77A_RuntimeMethod_var);
		// return arSession != null;
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Collections.IEnumerator Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::CheckAvailability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OpenSourceARFoundationFacade_CheckAvailability_mB759F75096F314346799EC10E85DCC5E217715B4 (OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckAvailabilityU3Ed__19_tB688CDF56303EDC427E5E356E3A9150AA2E58155_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCheckAvailabilityU3Ed__19_tB688CDF56303EDC427E5E356E3A9150AA2E58155 * L_0 = (U3CCheckAvailabilityU3Ed__19_tB688CDF56303EDC427E5E356E3A9150AA2E58155 *)il2cpp_codegen_object_new(U3CCheckAvailabilityU3Ed__19_tB688CDF56303EDC427E5E356E3A9150AA2E58155_il2cpp_TypeInfo_var);
		U3CCheckAvailabilityU3Ed__19__ctor_m02ADF7AFDDA63B842228C65BC26698C4A4746235(L_0, 0, /*hidden argument*/NULL);
		U3CCheckAvailabilityU3Ed__19_tB688CDF56303EDC427E5E356E3A9150AA2E58155 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSourceARFoundationFacade_Init_m1C7D3A07B4BB5008B59DBAD6EE1AB03B219DE9D0 (OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m442691FA3EA8C84ADA0081254C58A2FFAE8C7932_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F_m9B2DAFBA4C933C9B828C8BE816CA1C594584E2CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F_m69F9BCEA3450A9169900704B4AE6906AE4E19EA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_mBD742602F73DAB84C8C5D145A1AB4F789119147B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_m1E2B3B4339AA236F036237F8567404C07A412BD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1_mF212B3EE0FB0DB020FD9872AD998D47FAC45C2C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m02CC4A1C778D32BBEBFD5363556C9538A378F77A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenSourceARFoundationFacade_OnAnchorsChanged_mA942FEE9C7E7931A65619A668E29D665EA89898F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenSourceARFoundationFacade_UpdateStateFromARFoundationFrame_m02D2E5F9B9FAC39BA3AF14644E9D426CAAFC6E9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mCameraManager = GameObject.FindObjectOfType<ARCameraManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_0;
		L_0 = Object_FindObjectOfType_TisARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_mBD742602F73DAB84C8C5D145A1AB4F789119147B(/*hidden argument*/Object_FindObjectOfType_TisARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_mBD742602F73DAB84C8C5D145A1AB4F789119147B_RuntimeMethod_var);
		__this->set_mCameraManager_1(L_0);
		// mSession = GameObject.FindObjectOfType<ARSession>();
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_1;
		L_1 = Object_FindObjectOfType_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m02CC4A1C778D32BBEBFD5363556C9538A378F77A(/*hidden argument*/Object_FindObjectOfType_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m02CC4A1C778D32BBEBFD5363556C9538A378F77A_RuntimeMethod_var);
		__this->set_mSession_3(L_1);
		// mSessionOrigin = GameObject.FindObjectOfType<ARSessionOrigin>();
		ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * L_2;
		L_2 = Object_FindObjectOfType_TisARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1_mF212B3EE0FB0DB020FD9872AD998D47FAC45C2C3(/*hidden argument*/Object_FindObjectOfType_TisARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1_mF212B3EE0FB0DB020FD9872AD998D47FAC45C2C3_RuntimeMethod_var);
		__this->set_mSessionOrigin_4(L_2);
		// mRaycastManager = GameObject.FindObjectOfType<ARRaycastManager>();
		ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * L_3;
		L_3 = Object_FindObjectOfType_TisARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_m1E2B3B4339AA236F036237F8567404C07A412BD5(/*hidden argument*/Object_FindObjectOfType_TisARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_m1E2B3B4339AA236F036237F8567404C07A412BD5_RuntimeMethod_var);
		__this->set_mRaycastManager_5(L_3);
		// if (mIsAnchorSupported)
		bool L_4 = __this->get_mIsAnchorSupported_0();
		if (!L_4)
		{
			goto IL_0080;
		}
	}
	{
		// mAnchorManager = mSessionOrigin.GetComponent<ARAnchorManager>();
		ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * L_5 = __this->get_mSessionOrigin_4();
		NullCheck(L_5);
		ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * L_6;
		L_6 = Component_GetComponent_TisARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F_m9B2DAFBA4C933C9B828C8BE816CA1C594584E2CB(L_5, /*hidden argument*/Component_GetComponent_TisARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F_m9B2DAFBA4C933C9B828C8BE816CA1C594584E2CB_RuntimeMethod_var);
		__this->set_mAnchorManager_2(L_6);
		// if (mAnchorManager == null)
		ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * L_7 = __this->get_mAnchorManager_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		// mAnchorManager = mSessionOrigin.gameObject.AddComponent<ARAnchorManager>();
		ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * L_9 = __this->get_mSessionOrigin_4();
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * L_11;
		L_11 = GameObject_AddComponent_TisARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F_m69F9BCEA3450A9169900704B4AE6906AE4E19EA0(L_10, /*hidden argument*/GameObject_AddComponent_TisARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F_m69F9BCEA3450A9169900704B4AE6906AE4E19EA0_RuntimeMethod_var);
		__this->set_mAnchorManager_2(L_11);
	}

IL_0069:
	{
		// mAnchorManager.anchorsChanged += OnAnchorsChanged;
		ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * L_12 = __this->get_mAnchorManager_2();
		Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C * L_13 = (Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C *)il2cpp_codegen_object_new(Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C_il2cpp_TypeInfo_var);
		Action_1__ctor_m442691FA3EA8C84ADA0081254C58A2FFAE8C7932(L_13, __this, (intptr_t)((intptr_t)OpenSourceARFoundationFacade_OnAnchorsChanged_mA942FEE9C7E7931A65619A668E29D665EA89898F_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m442691FA3EA8C84ADA0081254C58A2FFAE8C7932_RuntimeMethod_var);
		NullCheck(L_12);
		ARAnchorManager_add_anchorsChanged_m32E33C78B20F072111FEBBDB2AFEF1F8B25EA367(L_12, L_13, /*hidden argument*/NULL);
	}

IL_0080:
	{
		// UnityEngine.Application.onBeforeRender += UpdateStateFromARFoundationFrame;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_14 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_14, __this, (intptr_t)((intptr_t)OpenSourceARFoundationFacade_UpdateStateFromARFoundationFrame_m02D2E5F9B9FAC39BA3AF14644E9D426CAAFC6E9E_RuntimeMethod_var), /*hidden argument*/NULL);
		Application_add_onBeforeRender_m1324FCAC06439BC14CFCE062C6BEFB76C7501228(L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::Deinit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSourceARFoundationFacade_Deinit_m3BEAE4E65D6C44CD3FDF6056F641851CBCAE8371 (OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m442691FA3EA8C84ADA0081254C58A2FFAE8C7932_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenSourceARFoundationFacade_OnAnchorsChanged_mA942FEE9C7E7931A65619A668E29D665EA89898F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenSourceARFoundationFacade_UpdateStateFromARFoundationFrame_m02D2E5F9B9FAC39BA3AF14644E9D426CAAFC6E9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mSession.Reset();
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_0 = __this->get_mSession_3();
		NullCheck(L_0);
		ARSession_Reset_m3C78CB4465887888EE1A5EEBCCD47E8D462A1116(L_0, /*hidden argument*/NULL);
		// if (mIsAnchorSupported)
		bool L_1 = __this->get_mIsAnchorSupported_0();
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// mAnchorManager.anchorsChanged -= OnAnchorsChanged;
		ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * L_2 = __this->get_mAnchorManager_2();
		Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C * L_3 = (Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C *)il2cpp_codegen_object_new(Action_1_t2010A517B3537EF3B4D41177377C7645A9C4439C_il2cpp_TypeInfo_var);
		Action_1__ctor_m442691FA3EA8C84ADA0081254C58A2FFAE8C7932(L_3, __this, (intptr_t)((intptr_t)OpenSourceARFoundationFacade_OnAnchorsChanged_mA942FEE9C7E7931A65619A668E29D665EA89898F_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m442691FA3EA8C84ADA0081254C58A2FFAE8C7932_RuntimeMethod_var);
		NullCheck(L_2);
		ARAnchorManager_remove_anchorsChanged_m36F2B944753B78D564BDFD3D7118934AD836AB6B(L_2, L_3, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// UnityEngine.Application.onBeforeRender -= UpdateStateFromARFoundationFrame;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_4 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_4, __this, (intptr_t)((intptr_t)OpenSourceARFoundationFacade_UpdateStateFromARFoundationFrame_m02D2E5F9B9FAC39BA3AF14644E9D426CAAFC6E9E_RuntimeMethod_var), /*hidden argument*/NULL);
		Application_remove_onBeforeRender_mD2FFDA214D242F524EFF15932A7334F1F0D526D0(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::WaitForCameraReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OpenSourceARFoundationFacade_WaitForCameraReady_m701100C3238E73DC97237BDC9DA1ED2A818EAFC3 (OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitForCameraReadyU3Ed__22_tA4BE56875445D83B986D8AB04FBC0C0608175827_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitForCameraReadyU3Ed__22_tA4BE56875445D83B986D8AB04FBC0C0608175827 * L_0 = (U3CWaitForCameraReadyU3Ed__22_tA4BE56875445D83B986D8AB04FBC0C0608175827 *)il2cpp_codegen_object_new(U3CWaitForCameraReadyU3Ed__22_tA4BE56875445D83B986D8AB04FBC0C0608175827_il2cpp_TypeInfo_var);
		U3CWaitForCameraReadyU3Ed__22__ctor_m5D11875E779D5953FD1529E1B1DF9354A5A090B5(L_0, 0, /*hidden argument*/NULL);
		U3CWaitForCameraReadyU3Ed__22_tA4BE56875445D83B986D8AB04FBC0C0608175827 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Boolean Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::IsARFoundationReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenSourceARFoundationFacade_IsARFoundationReady_m0AA53ED2B55CDEE6BAE8703D114DAE2984A757ED (OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * __this, const RuntimeMethod* method)
{
	{
		// return ARSession.state >= ARSessionState.Ready;
		int32_t L_0;
		L_0 = ARSession_get_state_mD422F6EFE9346D0D7056D6A11F17F70D09ED3FD9_inline(/*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.Transform Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::GetCameraTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * OpenSourceARFoundationFacade_GetCameraTransform_m1E412CC9ED1940278C22662E509E10BF32FF8780 (OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_mBD742602F73DAB84C8C5D145A1AB4F789119147B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!mCameraManager)
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_0 = __this->get_mCameraManager_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// mCameraManager = GameObject.FindObjectOfType<ARCameraManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_2;
		L_2 = Object_FindObjectOfType_TisARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_mBD742602F73DAB84C8C5D145A1AB4F789119147B(/*hidden argument*/Object_FindObjectOfType_TisARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_mBD742602F73DAB84C8C5D145A1AB4F789119147B_RuntimeMethod_var);
		__this->set_mCameraManager_1(L_2);
	}

IL_0018:
	{
		// return mCameraManager.transform;
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_3 = __this->get_mCameraManager_1();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Collections.Generic.List`1<Vuforia.DriverCameraMode> Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::GetProfiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC88E8D307029C3E0623CA706C3221D1D905D71DD * OpenSourceARFoundationFacade_GetProfiles_m8BFF92D35696CE10FF4C4DDFD8B93AB3ED15BBA6 (OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3184BCF3BD31DDC25872BF499DE67CE1FA608F53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m68045EEFE01DB4EE0075EAE7A66750275D4C6DE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m10E36893D34D73C78917FD5CF87BB1415D504E64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBD8F0C645C2270EC9AC1D6BBEB9F2CC42377C88F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC64A79DDC43BF71FC8C0B5F4BA20F1C6A16B3580_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC88E8D307029C3E0623CA706C3221D1D905D71DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mC554164DB459D59B2467A614F681C87FD00ACC11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_GetEnumerator_m5BA172840229277B6088558B57827D9E79314688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mAABAFD79174F11BFA437674F61634721D84D9C31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tC88E8D307029C3E0623CA706C3221D1D905D71DD * V_0 = NULL;
	NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545  V_1;
	memset((&V_1), 0, sizeof(V_1));
	List_1_tC88E8D307029C3E0623CA706C3221D1D905D71DD * V_2 = NULL;
	Enumerator_tD873E6DED9BBA65F7D6231064F2E61F525F46F3F  V_3;
	memset((&V_3), 0, sizeof(V_3));
	XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	List_1_tC88E8D307029C3E0623CA706C3221D1D905D71DD * G_B8_2 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	List_1_tC88E8D307029C3E0623CA706C3221D1D905D71DD * G_B7_2 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	List_1_tC88E8D307029C3E0623CA706C3221D1D905D71DD * G_B9_3 = NULL;
	{
		// var profiles = new List<DriverCameraMode>();
		List_1_tC88E8D307029C3E0623CA706C3221D1D905D71DD * L_0 = (List_1_tC88E8D307029C3E0623CA706C3221D1D905D71DD *)il2cpp_codegen_object_new(List_1_tC88E8D307029C3E0623CA706C3221D1D905D71DD_il2cpp_TypeInfo_var);
		List_1__ctor_mC64A79DDC43BF71FC8C0B5F4BA20F1C6A16B3580(L_0, /*hidden argument*/List_1__ctor_mC64A79DDC43BF71FC8C0B5F4BA20F1C6A16B3580_RuntimeMethod_var);
		V_0 = L_0;
		// using (var configurations = mCameraManager.GetConfigurations(Allocator.Temp))
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_1 = __this->get_mCameraManager_1();
		NullCheck(L_1);
		NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545  L_2;
		L_2 = ARCameraManager_GetConfigurations_mEEFC0B584A219FAC0E7726499C1A2C6F1A364DD2(L_1, 2, /*hidden argument*/NULL);
		V_1 = L_2;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			// if (!configurations.IsCreated || configurations.Length <= 0)
			bool L_3;
			L_3 = NativeArray_1_get_IsCreated_mAABAFD79174F11BFA437674F61634721D84D9C31((NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 *)(&V_1), /*hidden argument*/NativeArray_1_get_IsCreated_mAABAFD79174F11BFA437674F61634721D84D9C31_RuntimeMethod_var);
			if (!L_3)
			{
				goto IL_0026;
			}
		}

IL_001c:
		{
			int32_t L_4;
			L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 *)(&V_1))->___m_Length_1);
			if ((((int32_t)L_4) > ((int32_t)0)))
			{
				goto IL_002a;
			}
		}

IL_0026:
		{
			// return profiles;
			List_1_tC88E8D307029C3E0623CA706C3221D1D905D71DD * L_5 = V_0;
			V_2 = L_5;
			IL2CPP_LEAVE(0x9D, FINALLY_008d);
		}

IL_002a:
		{
			// foreach (var configuration in configurations)
			Enumerator_tD873E6DED9BBA65F7D6231064F2E61F525F46F3F  L_6;
			L_6 = NativeArray_1_GetEnumerator_m5BA172840229277B6088558B57827D9E79314688((NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 *)(&V_1), /*hidden argument*/NativeArray_1_GetEnumerator_m5BA172840229277B6088558B57827D9E79314688_RuntimeMethod_var);
			V_3 = L_6;
		}

IL_0032:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0074;
			}

IL_0034:
			{
				// foreach (var configuration in configurations)
				XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  L_7;
				L_7 = Enumerator_get_Current_m10E36893D34D73C78917FD5CF87BB1415D504E64((Enumerator_tD873E6DED9BBA65F7D6231064F2E61F525F46F3F *)(&V_3), /*hidden argument*/Enumerator_get_Current_m10E36893D34D73C78917FD5CF87BB1415D504E64_RuntimeMethod_var);
				V_4 = L_7;
				//                     profiles.Add(new DriverCameraMode
				//                     (
				//                         configuration.width,
				//                         configuration.height,
				//                         configuration.framerate ?? 30,
				// #if UNITY_IOS
				//                         DriverPixelFormat.NV12
				// #elif UNITY_ANDROID
				//                         DriverPixelFormat.NV21
				// #else
				//                         DriverPixelFormat.UNKNOWN
				// #endif
				//                     ));
				List_1_tC88E8D307029C3E0623CA706C3221D1D905D71DD * L_8 = V_0;
				int32_t L_9;
				L_9 = XRCameraConfiguration_get_width_m019869C624524B8C4EA0021D9331F2AD856A25C3((XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A *)(&V_4), /*hidden argument*/NULL);
				int32_t L_10;
				L_10 = XRCameraConfiguration_get_height_mAAC1B9AE539EF89D59585A6BFC8F925F94AA14D3((XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A *)(&V_4), /*hidden argument*/NULL);
				Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_11;
				L_11 = XRCameraConfiguration_get_framerate_m3DCC7B7F2FEAFDFB5ED0A580153FBAAA22B60B96((XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A *)(&V_4), /*hidden argument*/NULL);
				V_5 = L_11;
				bool L_12;
				L_12 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_5), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
				G_B7_0 = L_10;
				G_B7_1 = L_9;
				G_B7_2 = L_8;
				if (L_12)
				{
					G_B8_0 = L_10;
					G_B8_1 = L_9;
					G_B8_2 = L_8;
					goto IL_0062;
				}
			}

IL_005e:
			{
				G_B9_0 = ((int32_t)30);
				G_B9_1 = G_B7_0;
				G_B9_2 = G_B7_1;
				G_B9_3 = G_B7_2;
				goto IL_0069;
			}

IL_0062:
			{
				int32_t L_13;
				L_13 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_5), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
				G_B9_0 = L_13;
				G_B9_1 = G_B8_0;
				G_B9_2 = G_B8_1;
				G_B9_3 = G_B8_2;
			}

IL_0069:
			{
				DriverCameraMode_tFE34FC60BECEF81615274E556D3678EB2E1220DF  L_14;
				memset((&L_14), 0, sizeof(L_14));
				DriverCameraMode__ctor_m0FB39D564A41A2B9FFA932D86974028B5CB41159((&L_14), G_B9_2, G_B9_1, G_B9_0, 0, /*hidden argument*/NULL);
				NullCheck(G_B9_3);
				List_1_Add_mBD8F0C645C2270EC9AC1D6BBEB9F2CC42377C88F(G_B9_3, L_14, /*hidden argument*/List_1_Add_mBD8F0C645C2270EC9AC1D6BBEB9F2CC42377C88F_RuntimeMethod_var);
			}

IL_0074:
			{
				// foreach (var configuration in configurations)
				bool L_15;
				L_15 = Enumerator_MoveNext_m68045EEFE01DB4EE0075EAE7A66750275D4C6DE0((Enumerator_tD873E6DED9BBA65F7D6231064F2E61F525F46F3F *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m68045EEFE01DB4EE0075EAE7A66750275D4C6DE0_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_0034;
				}
			}

IL_007d:
			{
				IL2CPP_LEAVE(0x9B, FINALLY_007f);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_007f;
		}

FINALLY_007f:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m3184BCF3BD31DDC25872BF499DE67CE1FA608F53((Enumerator_tD873E6DED9BBA65F7D6231064F2E61F525F46F3F *)(&V_3), /*hidden argument*/Enumerator_Dispose_m3184BCF3BD31DDC25872BF499DE67CE1FA608F53_RuntimeMethod_var);
			IL2CPP_END_FINALLY(127)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(127)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x9B, FINALLY_008d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008d;
	}

FINALLY_008d:
	{ // begin finally (depth: 1)
		NativeArray_1_Dispose_mC554164DB459D59B2467A614F681C87FD00ACC11((NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 *)(&V_1), /*hidden argument*/NativeArray_1_Dispose_mC554164DB459D59B2467A614F681C87FD00ACC11_RuntimeMethod_var);
		IL2CPP_END_FINALLY(141)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(141)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x9D, IL_009d)
		IL2CPP_JUMP_TBL(0x9B, IL_009b)
	}

IL_009b:
	{
		// return profiles;
		List_1_tC88E8D307029C3E0623CA706C3221D1D905D71DD * L_16 = V_0;
		return L_16;
	}

IL_009d:
	{
		// }
		List_1_tC88E8D307029C3E0623CA706C3221D1D905D71DD * L_17 = V_2;
		return L_17;
	}
}
// System.Boolean Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::SelectProfile(Vuforia.DriverCameraMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenSourceARFoundationFacade_SelectProfile_m7C9D93133E51B6CAB8D2B9D6C87A98D28868ADBD (OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * __this, DriverCameraMode_tFE34FC60BECEF81615274E556D3678EB2E1220DF  ___profile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m1A338096F660EF3B4824D26E9E61DD38CE98E901_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3184BCF3BD31DDC25872BF499DE67CE1FA608F53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m68045EEFE01DB4EE0075EAE7A66750275D4C6DE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m10E36893D34D73C78917FD5CF87BB1415D504E64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m5078D981AF46B4D52AF0FFF91A7D34899E115513_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7E05C7C6DEC66BBE1049328BA77DC6F0E4D34737_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6060E14B0C14D050D42FB325D6D9D10947E24130_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m128157547D09AFE9970E788136E8D26A9C8F8F57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mC554164DB459D59B2467A614F681C87FD00ACC11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_GetEnumerator_m5BA172840229277B6088558B57827D9E79314688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mAABAFD79174F11BFA437674F61634721D84D9C31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mE1F110F3C76C59DF1376A23841ADA9E9970B97D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mC8B2FF6D15E5BD1BF52356C2621F2BE4AD504054_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mD8E0C85C96E8F68E55600773D64912BF77F68545_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_Add_mA1FC348CFCB4266BFC55D7B48210E42508F8EC71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_ContainsKey_mFF776ED41F275AEDA1810A4A123CF6BFF69E863C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2__ctor_mCBFD51A13B37B3DB7DADE4671A7B0799DA72DA58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Item_m7D45638BB73E05A8CB4D592D19B08DD2C7D59FE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_tF9C4707959CBD1F373B52730EFAB7444F569E8B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass26_0_U3CSelectProfileU3Eb__0_mC4A646AEDD5A4A927D34E31DED9B490DA8889C85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass26_0_t315C6B6CB80468086F2427B2F2518AFDEED9AF8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass26_0_t315C6B6CB80468086F2427B2F2518AFDEED9AF8C * V_0 = NULL;
	NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545  V_1;
	memset((&V_1), 0, sizeof(V_1));
	SortedDictionary_2_tF9C4707959CBD1F373B52730EFAB7444F569E8B3 * V_2 = NULL;
	XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	Enumerator_tD873E6DED9BBA65F7D6231064F2E61F525F46F3F  V_5;
	memset((&V_5), 0, sizeof(V_5));
	XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C  V_9;
	memset((&V_9), 0, sizeof(V_9));
	XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B9_0 = 0;
	int32_t G_B20_0 = 0;
	{
		U3CU3Ec__DisplayClass26_0_t315C6B6CB80468086F2427B2F2518AFDEED9AF8C * L_0 = (U3CU3Ec__DisplayClass26_0_t315C6B6CB80468086F2427B2F2518AFDEED9AF8C *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass26_0_t315C6B6CB80468086F2427B2F2518AFDEED9AF8C_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass26_0__ctor_mE7C8CF9C5257530C6611AE8CCC1366241BAEEC2F(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass26_0_t315C6B6CB80468086F2427B2F2518AFDEED9AF8C * L_1 = V_0;
		DriverCameraMode_tFE34FC60BECEF81615274E556D3678EB2E1220DF  L_2 = ___profile0;
		NullCheck(L_1);
		L_1->set_profile_0(L_2);
		// using (var configurations = mCameraManager.GetConfigurations(Allocator.Temp))
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_3 = __this->get_mCameraManager_1();
		NullCheck(L_3);
		NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545  L_4;
		L_4 = ARCameraManager_GetConfigurations_mEEFC0B584A219FAC0E7726499C1A2C6F1A364DD2(L_3, 2, /*hidden argument*/NULL);
		V_1 = L_4;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			// if (!configurations.IsCreated || configurations.Length <= 0)
			bool L_5;
			L_5 = NativeArray_1_get_IsCreated_mAABAFD79174F11BFA437674F61634721D84D9C31((NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 *)(&V_1), /*hidden argument*/NativeArray_1_get_IsCreated_mAABAFD79174F11BFA437674F61634721D84D9C31_RuntimeMethod_var);
			if (!L_5)
			{
				goto IL_002d;
			}
		}

IL_0023:
		{
			int32_t L_6;
			L_6 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 *)(&V_1))->___m_Length_1);
			if ((((int32_t)L_6) > ((int32_t)0)))
			{
				goto IL_0035;
			}
		}

IL_002d:
		{
			// return false;
			V_4 = (bool)0;
			IL2CPP_LEAVE(0x12B, FINALLY_011b);
		}

IL_0035:
		{
			// var configs = new SortedDictionary<int, List<XRCameraConfiguration>>();
			SortedDictionary_2_tF9C4707959CBD1F373B52730EFAB7444F569E8B3 * L_7 = (SortedDictionary_2_tF9C4707959CBD1F373B52730EFAB7444F569E8B3 *)il2cpp_codegen_object_new(SortedDictionary_2_tF9C4707959CBD1F373B52730EFAB7444F569E8B3_il2cpp_TypeInfo_var);
			SortedDictionary_2__ctor_mCBFD51A13B37B3DB7DADE4671A7B0799DA72DA58(L_7, /*hidden argument*/SortedDictionary_2__ctor_mCBFD51A13B37B3DB7DADE4671A7B0799DA72DA58_RuntimeMethod_var);
			V_2 = L_7;
			// foreach (var configuration in configurations)
			Enumerator_tD873E6DED9BBA65F7D6231064F2E61F525F46F3F  L_8;
			L_8 = NativeArray_1_GetEnumerator_m5BA172840229277B6088558B57827D9E79314688((NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 *)(&V_1), /*hidden argument*/NativeArray_1_GetEnumerator_m5BA172840229277B6088558B57827D9E79314688_RuntimeMethod_var);
			V_5 = L_8;
		}

IL_0044:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0094;
			}

IL_0046:
			{
				// foreach (var configuration in configurations)
				XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  L_9;
				L_9 = Enumerator_get_Current_m10E36893D34D73C78917FD5CF87BB1415D504E64((Enumerator_tD873E6DED9BBA65F7D6231064F2E61F525F46F3F *)(&V_5), /*hidden argument*/Enumerator_get_Current_m10E36893D34D73C78917FD5CF87BB1415D504E64_RuntimeMethod_var);
				V_6 = L_9;
				// var framerate = configuration.framerate ?? 30;
				Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_10;
				L_10 = XRCameraConfiguration_get_framerate_m3DCC7B7F2FEAFDFB5ED0A580153FBAAA22B60B96((XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A *)(&V_6), /*hidden argument*/NULL);
				V_8 = L_10;
				bool L_11;
				L_11 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_8), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0065;
				}
			}

IL_0061:
			{
				G_B9_0 = ((int32_t)30);
				goto IL_006c;
			}

IL_0065:
			{
				int32_t L_12;
				L_12 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_8), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
				G_B9_0 = L_12;
			}

IL_006c:
			{
				V_7 = G_B9_0;
				// if (!configs.ContainsKey(framerate))
				SortedDictionary_2_tF9C4707959CBD1F373B52730EFAB7444F569E8B3 * L_13 = V_2;
				int32_t L_14 = V_7;
				NullCheck(L_13);
				bool L_15;
				L_15 = SortedDictionary_2_ContainsKey_mFF776ED41F275AEDA1810A4A123CF6BFF69E863C(L_13, L_14, /*hidden argument*/SortedDictionary_2_ContainsKey_mFF776ED41F275AEDA1810A4A123CF6BFF69E863C_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_0085;
				}
			}

IL_0078:
			{
				// configs.Add(framerate, new List<XRCameraConfiguration>());
				SortedDictionary_2_tF9C4707959CBD1F373B52730EFAB7444F569E8B3 * L_16 = V_2;
				int32_t L_17 = V_7;
				List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A * L_18 = (List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A *)il2cpp_codegen_object_new(List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A_il2cpp_TypeInfo_var);
				List_1__ctor_m128157547D09AFE9970E788136E8D26A9C8F8F57(L_18, /*hidden argument*/List_1__ctor_m128157547D09AFE9970E788136E8D26A9C8F8F57_RuntimeMethod_var);
				NullCheck(L_16);
				SortedDictionary_2_Add_mA1FC348CFCB4266BFC55D7B48210E42508F8EC71(L_16, L_17, L_18, /*hidden argument*/SortedDictionary_2_Add_mA1FC348CFCB4266BFC55D7B48210E42508F8EC71_RuntimeMethod_var);
			}

IL_0085:
			{
				// configs[framerate].Add(configuration);
				SortedDictionary_2_tF9C4707959CBD1F373B52730EFAB7444F569E8B3 * L_19 = V_2;
				int32_t L_20 = V_7;
				NullCheck(L_19);
				List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A * L_21;
				L_21 = SortedDictionary_2_get_Item_m7D45638BB73E05A8CB4D592D19B08DD2C7D59FE6(L_19, L_20, /*hidden argument*/SortedDictionary_2_get_Item_m7D45638BB73E05A8CB4D592D19B08DD2C7D59FE6_RuntimeMethod_var);
				XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  L_22 = V_6;
				NullCheck(L_21);
				List_1_Add_m6060E14B0C14D050D42FB325D6D9D10947E24130(L_21, L_22, /*hidden argument*/List_1_Add_m6060E14B0C14D050D42FB325D6D9D10947E24130_RuntimeMethod_var);
			}

IL_0094:
			{
				// foreach (var configuration in configurations)
				bool L_23;
				L_23 = Enumerator_MoveNext_m68045EEFE01DB4EE0075EAE7A66750275D4C6DE0((Enumerator_tD873E6DED9BBA65F7D6231064F2E61F525F46F3F *)(&V_5), /*hidden argument*/Enumerator_MoveNext_m68045EEFE01DB4EE0075EAE7A66750275D4C6DE0_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_0046;
				}
			}

IL_009d:
			{
				IL2CPP_LEAVE(0xAD, FINALLY_009f);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_009f;
		}

FINALLY_009f:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m3184BCF3BD31DDC25872BF499DE67CE1FA608F53((Enumerator_tD873E6DED9BBA65F7D6231064F2E61F525F46F3F *)(&V_5), /*hidden argument*/Enumerator_Dispose_m3184BCF3BD31DDC25872BF499DE67CE1FA608F53_RuntimeMethod_var);
			IL2CPP_END_FINALLY(159)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(159)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xAD, IL_00ad)
		}

IL_00ad:
		{
			// var selectedConfiguration = configs[profile.Fps]
			//     .First(x => x.width == profile.Width && x.height == profile.Height);
			SortedDictionary_2_tF9C4707959CBD1F373B52730EFAB7444F569E8B3 * L_24 = V_2;
			U3CU3Ec__DisplayClass26_0_t315C6B6CB80468086F2427B2F2518AFDEED9AF8C * L_25 = V_0;
			NullCheck(L_25);
			DriverCameraMode_tFE34FC60BECEF81615274E556D3678EB2E1220DF * L_26 = L_25->get_address_of_profile_0();
			int32_t L_27 = L_26->get_Fps_2();
			NullCheck(L_24);
			List_1_tDC96D454C827DA6AA6F4E821EFAABDC03FCFF99A * L_28;
			L_28 = SortedDictionary_2_get_Item_m7D45638BB73E05A8CB4D592D19B08DD2C7D59FE6(L_24, L_27, /*hidden argument*/SortedDictionary_2_get_Item_m7D45638BB73E05A8CB4D592D19B08DD2C7D59FE6_RuntimeMethod_var);
			U3CU3Ec__DisplayClass26_0_t315C6B6CB80468086F2427B2F2518AFDEED9AF8C * L_29 = V_0;
			Func_2_t7E05C7C6DEC66BBE1049328BA77DC6F0E4D34737 * L_30 = (Func_2_t7E05C7C6DEC66BBE1049328BA77DC6F0E4D34737 *)il2cpp_codegen_object_new(Func_2_t7E05C7C6DEC66BBE1049328BA77DC6F0E4D34737_il2cpp_TypeInfo_var);
			Func_2__ctor_m5078D981AF46B4D52AF0FFF91A7D34899E115513(L_30, L_29, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass26_0_U3CSelectProfileU3Eb__0_mC4A646AEDD5A4A927D34E31DED9B490DA8889C85_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m5078D981AF46B4D52AF0FFF91A7D34899E115513_RuntimeMethod_var);
			XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  L_31;
			L_31 = Enumerable_First_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m1A338096F660EF3B4824D26E9E61DD38CE98E901(L_28, L_30, /*hidden argument*/Enumerable_First_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m1A338096F660EF3B4824D26E9E61DD38CE98E901_RuntimeMethod_var);
			V_3 = L_31;
			// if (mCameraManager.currentConfiguration != selectedConfiguration)
			ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_32 = __this->get_mCameraManager_1();
			NullCheck(L_32);
			Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C  L_33;
			L_33 = ARCameraManager_get_currentConfiguration_mF0BCE9EA9476CAC016A7FDDCB29C33485CB06889(L_32, /*hidden argument*/NULL);
			V_9 = L_33;
			XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  L_34 = V_3;
			V_10 = L_34;
			bool L_35;
			L_35 = Nullable_1_get_HasValue_mD8E0C85C96E8F68E55600773D64912BF77F68545_inline((Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C *)(&V_9), /*hidden argument*/Nullable_1_get_HasValue_mD8E0C85C96E8F68E55600773D64912BF77F68545_RuntimeMethod_var);
			if (L_35)
			{
				goto IL_00ec;
			}
		}

IL_00e9:
		{
			G_B20_0 = 1;
			goto IL_0106;
		}

IL_00ec:
		{
			bool L_36;
			L_36 = Nullable_1_get_HasValue_mD8E0C85C96E8F68E55600773D64912BF77F68545_inline((Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C *)(&V_9), /*hidden argument*/Nullable_1_get_HasValue_mD8E0C85C96E8F68E55600773D64912BF77F68545_RuntimeMethod_var);
			if (L_36)
			{
				goto IL_00f8;
			}
		}

IL_00f5:
		{
			G_B20_0 = 0;
			goto IL_0106;
		}

IL_00f8:
		{
			XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  L_37;
			L_37 = Nullable_1_GetValueOrDefault_mE1F110F3C76C59DF1376A23841ADA9E9970B97D8_inline((Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C *)(&V_9), /*hidden argument*/Nullable_1_GetValueOrDefault_mE1F110F3C76C59DF1376A23841ADA9E9970B97D8_RuntimeMethod_var);
			XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  L_38 = V_10;
			bool L_39;
			L_39 = XRCameraConfiguration_op_Inequality_m39FA53E5F97CF68C4A9F8BB9A4FB24A22055411C(L_37, L_38, /*hidden argument*/NULL);
			G_B20_0 = ((int32_t)(L_39));
		}

IL_0106:
		{
			if (!G_B20_0)
			{
				goto IL_0119;
			}
		}

IL_0108:
		{
			// mCameraManager.currentConfiguration = selectedConfiguration;
			ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_40 = __this->get_mCameraManager_1();
			XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  L_41 = V_3;
			Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C  L_42;
			memset((&L_42), 0, sizeof(L_42));
			Nullable_1__ctor_mC8B2FF6D15E5BD1BF52356C2621F2BE4AD504054((&L_42), L_41, /*hidden argument*/Nullable_1__ctor_mC8B2FF6D15E5BD1BF52356C2621F2BE4AD504054_RuntimeMethod_var);
			NullCheck(L_40);
			ARCameraManager_set_currentConfiguration_m2919DB990909C5F7CD5B40125531901AABB016D1(L_40, L_42, /*hidden argument*/NULL);
		}

IL_0119:
		{
			// }
			IL2CPP_LEAVE(0x129, FINALLY_011b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_011b;
	}

FINALLY_011b:
	{ // begin finally (depth: 1)
		NativeArray_1_Dispose_mC554164DB459D59B2467A614F681C87FD00ACC11((NativeArray_1_t80D42D57D2D76B05EFDA2CF74AE660AB5FDD9545 *)(&V_1), /*hidden argument*/NativeArray_1_Dispose_mC554164DB459D59B2467A614F681C87FD00ACC11_RuntimeMethod_var);
		IL2CPP_END_FINALLY(283)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(283)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x12B, IL_012b)
		IL2CPP_JUMP_TBL(0x129, IL_0129)
	}

IL_0129:
	{
		// return true;
		return (bool)1;
	}

IL_012b:
	{
		// }
		bool L_43 = V_4;
		return L_43;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::UpdateStateFromARFoundationFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSourceARFoundationFacade_UpdateStateFromARFoundationFrame_m02D2E5F9B9FAC39BA3AF14644E9D426CAAFC6E9E (OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m8FF727B865C8424147FD6AAB428AA28B82EC9C93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m82727378824B9B4A0180DE63F07C255198D71D6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m263D100CDC58D42ECBC9CF6E884C3AD506FE4CF1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int64_t V_2 = 0;
	ARFoundationImage_t52F1BCE1FC354D7635660A1B2C33CB5319F0B16B  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (!mCameraManager.TryGetIntrinsics(out var cameraIntrinsics))
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_0 = __this->get_mCameraManager_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = ARCameraManager_TryGetIntrinsics_m1C2933CB7165F8EC8761111BCC9F3AB51F217135(L_0, (XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD *)(&V_0), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
		// if (!mCameraManager.TryAcquireLatestCpuImage(out var cameraImage))
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_2 = __this->get_mCameraManager_1();
		NullCheck(L_2);
		bool L_3;
		L_3 = ARCameraManager_TryAcquireLatestCpuImage_m5B417D0AEC0B39ADD968073C280FD6BF1A2C65E2(L_2, (XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE *)(&V_1), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		// return;
		return;
	}

IL_0020:
	{
		// var timestamp = (long)(cameraImage.timestamp * 1000000000);
		double L_4;
		L_4 = XRCpuImage_get_timestamp_m34F30EFB534A322FA98B397C590665FF561F91C4_inline((XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE *)(&V_1), /*hidden argument*/NULL);
		V_2 = il2cpp_codegen_cast_double_to_int<int64_t>(((double)il2cpp_codegen_multiply((double)L_4, (double)(1000000000.0))));
		// ARFoundationPoseEvent(mCameraManager.transform, timestamp);
		Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * L_5 = __this->get_ARFoundationPoseEvent_8();
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_6 = __this->get_mCameraManager_1();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		int64_t L_8 = V_2;
		NullCheck(L_5);
		Action_2_Invoke_m82727378824B9B4A0180DE63F07C255198D71D6B(L_5, L_7, L_8, /*hidden argument*/Action_2_Invoke_m82727378824B9B4A0180DE63F07C255198D71D6B_RuntimeMethod_var);
		//             var image = new ARFoundationImage(
		//                 cameraImage.dimensions,
		//                 cameraImage.GetPlane(0).data,
		//                 cameraImage.GetPlane(1).data,
		// #if UNITY_ANDROID
		//                 cameraImage.GetPlane(2).data,
		// #else
		//                 new NativeArray<byte>(new byte[0], Allocator.None),
		// #endif
		//                 cameraImage.GetPlane(0).rowStride,
		//                 cameraImage.GetPlane(1).rowStride,
		//                 cameraImage.GetPlane(1).pixelStride,
		//                 timestamp,
		//                 cameraIntrinsics.principalPoint,
		//                 cameraIntrinsics.focalLength
		//             );
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_9;
		L_9 = XRCpuImage_get_dimensions_m1A176BDB3319F09F3AF628AB17C126B62929A2A5_inline((XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE *)(&V_1), /*hidden argument*/NULL);
		Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D  L_10;
		L_10 = XRCpuImage_GetPlane_m51B283F05CE388A96607CD1F74772F0B09EB152A((XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE *)(&V_1), 0, /*hidden argument*/NULL);
		V_4 = L_10;
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_11;
		L_11 = Plane_get_data_mBA1EB2437E816B19D7A68440AE188F4E8543E108_inline((Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *)(&V_4), /*hidden argument*/NULL);
		Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D  L_12;
		L_12 = XRCpuImage_GetPlane_m51B283F05CE388A96607CD1F74772F0B09EB152A((XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE *)(&V_1), 1, /*hidden argument*/NULL);
		V_4 = L_12;
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_13;
		L_13 = Plane_get_data_mBA1EB2437E816B19D7A68440AE188F4E8543E108_inline((Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *)(&V_4), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)0);
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_15;
		memset((&L_15), 0, sizeof(L_15));
		NativeArray_1__ctor_m263D100CDC58D42ECBC9CF6E884C3AD506FE4CF1((&L_15), L_14, 1, /*hidden argument*/NativeArray_1__ctor_m263D100CDC58D42ECBC9CF6E884C3AD506FE4CF1_RuntimeMethod_var);
		Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D  L_16;
		L_16 = XRCpuImage_GetPlane_m51B283F05CE388A96607CD1F74772F0B09EB152A((XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE *)(&V_1), 0, /*hidden argument*/NULL);
		V_4 = L_16;
		int32_t L_17;
		L_17 = Plane_get_rowStride_mE6385B9F7D9D040FC613D16D859435F492CB213A_inline((Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *)(&V_4), /*hidden argument*/NULL);
		Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D  L_18;
		L_18 = XRCpuImage_GetPlane_m51B283F05CE388A96607CD1F74772F0B09EB152A((XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE *)(&V_1), 1, /*hidden argument*/NULL);
		V_4 = L_18;
		int32_t L_19;
		L_19 = Plane_get_rowStride_mE6385B9F7D9D040FC613D16D859435F492CB213A_inline((Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *)(&V_4), /*hidden argument*/NULL);
		Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D  L_20;
		L_20 = XRCpuImage_GetPlane_m51B283F05CE388A96607CD1F74772F0B09EB152A((XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE *)(&V_1), 1, /*hidden argument*/NULL);
		V_4 = L_20;
		int32_t L_21;
		L_21 = Plane_get_pixelStride_m33EEE46027B124683ABAF3BC627812F963F29665_inline((Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D *)(&V_4), /*hidden argument*/NULL);
		int64_t L_22 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		L_23 = XRCameraIntrinsics_get_principalPoint_mFDE68368CC682F57C69EF8EC7BE93E6F678313C5_inline((XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD *)(&V_0), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
		L_24 = XRCameraIntrinsics_get_focalLength_mBFAD4537EDDFB29C2BBC75FA4E501CB96201BB67_inline((XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD *)(&V_0), /*hidden argument*/NULL);
		ARFoundationImage__ctor_mC634B0E913A765BB37F4C4DE252AFF8ABCEBDC88((ARFoundationImage_t52F1BCE1FC354D7635660A1B2C33CB5319F0B16B *)(&V_3), L_9, L_11, L_13, L_15, L_17, L_19, L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
		// ARFoundationImageEvent.Invoke(image);
		Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * L_25 = __this->get_ARFoundationImageEvent_7();
		ARFoundationImage_t52F1BCE1FC354D7635660A1B2C33CB5319F0B16B  L_26 = V_3;
		NullCheck(L_25);
		Action_1_Invoke_m8FF727B865C8424147FD6AAB428AA28B82EC9C93(L_25, L_26, /*hidden argument*/Action_1_Invoke_m8FF727B865C8424147FD6AAB428AA28B82EC9C93_RuntimeMethod_var);
		// cameraImage.Dispose();
		XRCpuImage_Dispose_m462B3360E99D206E1151C7B8ED30420BF4A91B7A((XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE *)(&V_1), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::OnAnchorsChanged(UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSourceARFoundationFacade_OnAnchorsChanged_mA942FEE9C7E7931A65619A668E29D665EA89898F (OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * __this, ARAnchorsChangedEventArgs_tD1D6CD5187F2B16BADA979200B333341991FAAC6  ___eventArgs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackable_2_get_trackableId_m5B246724B1B0C9D5128E1359559AA8F6A3ECAB55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m05C604538242169E704EA16B607E2345326CD5F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mE2897AD7FBFB1621899052D558884189FA7E7F1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m30CF35E271B7DD35A08B94CA8D4DBE6F70F3D4C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5B8D5FD3B57E4B59209E86FB3CFCE4D2A320AE80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m539E879120F5D0D47C05EB9F39D4D44D9C1983E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5D13ACE4E06CD6F3FB4E705A9A91423B6EBCD551_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDADE08660CDAEF1A9D57DF4AD815150524657CE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB90C00C1868C41062CEA5C9DF34ACB3872BE2BBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m12D8028E9E6B054A2CB7C933C33FF0C6DE60FB06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0DB172BEA8D0009792F34EE515F413302C73E421_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisString_t_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m019D79DEEAF1E856DBBDDA4A00BAC1AAC6BC96FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t0DB172BEA8D0009792F34EE515F413302C73E421 * V_0 = NULL;
	List_1_t0DB172BEA8D0009792F34EE515F413302C73E421 * V_1 = NULL;
	Enumerator_t8CF1E0D2E6FF0DFC6B411C11EF4D001E8A74111A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * V_3 = NULL;
	String_t* V_4 = NULL;
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  V_5;
	memset((&V_5), 0, sizeof(V_5));
	ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * V_6 = NULL;
	String_t* V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// var removed = new List<Tuple<string, Transform>>();
		List_1_t0DB172BEA8D0009792F34EE515F413302C73E421 * L_0 = (List_1_t0DB172BEA8D0009792F34EE515F413302C73E421 *)il2cpp_codegen_object_new(List_1_t0DB172BEA8D0009792F34EE515F413302C73E421_il2cpp_TypeInfo_var);
		List_1__ctor_m12D8028E9E6B054A2CB7C933C33FF0C6DE60FB06(L_0, /*hidden argument*/List_1__ctor_m12D8028E9E6B054A2CB7C933C33FF0C6DE60FB06_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (var anchor in eventArgs.removed)
		List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * L_1;
		L_1 = ARAnchorsChangedEventArgs_get_removed_m3DA7093629E8D772C2732299D5F612B1357F6D08_inline((ARAnchorsChangedEventArgs_tD1D6CD5187F2B16BADA979200B333341991FAAC6 *)(&___eventArgs0), /*hidden argument*/NULL);
		NullCheck(L_1);
		Enumerator_t8CF1E0D2E6FF0DFC6B411C11EF4D001E8A74111A  L_2;
		L_2 = List_1_GetEnumerator_mB90C00C1868C41062CEA5C9DF34ACB3872BE2BBE(L_1, /*hidden argument*/List_1_GetEnumerator_mB90C00C1868C41062CEA5C9DF34ACB3872BE2BBE_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0064;
		}

IL_0015:
		{
			// foreach (var anchor in eventArgs.removed)
			ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * L_3;
			L_3 = Enumerator_get_Current_m5D13ACE4E06CD6F3FB4E705A9A91423B6EBCD551_inline((Enumerator_t8CF1E0D2E6FF0DFC6B411C11EF4D001E8A74111A *)(&V_2), /*hidden argument*/Enumerator_get_Current_m5D13ACE4E06CD6F3FB4E705A9A91423B6EBCD551_RuntimeMethod_var);
			V_3 = L_3;
			// var uuid = anchor.trackableId.ToString();
			ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * L_4 = V_3;
			NullCheck(L_4);
			TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_5;
			L_5 = ARTrackable_2_get_trackableId_m5B246724B1B0C9D5128E1359559AA8F6A3ECAB55(L_4, /*hidden argument*/ARTrackable_2_get_trackableId_m5B246724B1B0C9D5128E1359559AA8F6A3ECAB55_RuntimeMethod_var);
			V_5 = L_5;
			String_t* L_6;
			L_6 = TrackableId_ToString_mCD45FD4FF5DF6DE30A38AD05D02CFA7B2B696BB1((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)(&V_5), /*hidden argument*/NULL);
			V_4 = L_6;
			// if (mAnchors.ContainsKey(uuid))
			Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 * L_7 = __this->get_mAnchors_6();
			String_t* L_8 = V_4;
			NullCheck(L_7);
			bool L_9;
			L_9 = Dictionary_2_ContainsKey_mE2897AD7FBFB1621899052D558884189FA7E7F1C(L_7, L_8, /*hidden argument*/Dictionary_2_ContainsKey_mE2897AD7FBFB1621899052D558884189FA7E7F1C_RuntimeMethod_var);
			if (!L_9)
			{
				goto IL_0064;
			}
		}

IL_0043:
		{
			// removed.Add(Tuple.Create(uuid,anchor.transform));
			List_1_t0DB172BEA8D0009792F34EE515F413302C73E421 * L_10 = V_0;
			String_t* L_11 = V_4;
			ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * L_12 = V_3;
			NullCheck(L_12);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
			L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
			Tuple_2_t1726DB61838E1060A5A9C6C15D9DE70653283CDE * L_14;
			L_14 = Tuple_Create_TisString_t_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m019D79DEEAF1E856DBBDDA4A00BAC1AAC6BC96FE(L_11, L_13, /*hidden argument*/Tuple_Create_TisString_t_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m019D79DEEAF1E856DBBDDA4A00BAC1AAC6BC96FE_RuntimeMethod_var);
			NullCheck(L_10);
			List_1_Add_mDADE08660CDAEF1A9D57DF4AD815150524657CE9(L_10, L_14, /*hidden argument*/List_1_Add_mDADE08660CDAEF1A9D57DF4AD815150524657CE9_RuntimeMethod_var);
			// mAnchors.Remove(uuid);
			Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 * L_15 = __this->get_mAnchors_6();
			String_t* L_16 = V_4;
			NullCheck(L_15);
			bool L_17;
			L_17 = Dictionary_2_Remove_m30CF35E271B7DD35A08B94CA8D4DBE6F70F3D4C5(L_15, L_16, /*hidden argument*/Dictionary_2_Remove_m30CF35E271B7DD35A08B94CA8D4DBE6F70F3D4C5_RuntimeMethod_var);
		}

IL_0064:
		{
			// foreach (var anchor in eventArgs.removed)
			bool L_18;
			L_18 = Enumerator_MoveNext_m539E879120F5D0D47C05EB9F39D4D44D9C1983E0((Enumerator_t8CF1E0D2E6FF0DFC6B411C11EF4D001E8A74111A *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m539E879120F5D0D47C05EB9F39D4D44D9C1983E0_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_0015;
			}
		}

IL_006d:
		{
			IL2CPP_LEAVE(0x7D, FINALLY_006f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006f;
	}

FINALLY_006f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m5B8D5FD3B57E4B59209E86FB3CFCE4D2A320AE80((Enumerator_t8CF1E0D2E6FF0DFC6B411C11EF4D001E8A74111A *)(&V_2), /*hidden argument*/Enumerator_Dispose_m5B8D5FD3B57E4B59209E86FB3CFCE4D2A320AE80_RuntimeMethod_var);
		IL2CPP_END_FINALLY(111)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(111)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7D, IL_007d)
	}

IL_007d:
	{
		// var updated = new List<Tuple<string, Transform>>();
		List_1_t0DB172BEA8D0009792F34EE515F413302C73E421 * L_19 = (List_1_t0DB172BEA8D0009792F34EE515F413302C73E421 *)il2cpp_codegen_object_new(List_1_t0DB172BEA8D0009792F34EE515F413302C73E421_il2cpp_TypeInfo_var);
		List_1__ctor_m12D8028E9E6B054A2CB7C933C33FF0C6DE60FB06(L_19, /*hidden argument*/List_1__ctor_m12D8028E9E6B054A2CB7C933C33FF0C6DE60FB06_RuntimeMethod_var);
		V_1 = L_19;
		// foreach (var anchor in eventArgs.updated)
		List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * L_20;
		L_20 = ARAnchorsChangedEventArgs_get_updated_m87B120B079D1B9FF8C9F1E305672BD6F741AC7DF_inline((ARAnchorsChangedEventArgs_tD1D6CD5187F2B16BADA979200B333341991FAAC6 *)(&___eventArgs0), /*hidden argument*/NULL);
		NullCheck(L_20);
		Enumerator_t8CF1E0D2E6FF0DFC6B411C11EF4D001E8A74111A  L_21;
		L_21 = List_1_GetEnumerator_mB90C00C1868C41062CEA5C9DF34ACB3872BE2BBE(L_20, /*hidden argument*/List_1_GetEnumerator_mB90C00C1868C41062CEA5C9DF34ACB3872BE2BBE_RuntimeMethod_var);
		V_2 = L_21;
	}

IL_0090:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d6;
		}

IL_0092:
		{
			// foreach (var anchor in eventArgs.updated)
			ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * L_22;
			L_22 = Enumerator_get_Current_m5D13ACE4E06CD6F3FB4E705A9A91423B6EBCD551_inline((Enumerator_t8CF1E0D2E6FF0DFC6B411C11EF4D001E8A74111A *)(&V_2), /*hidden argument*/Enumerator_get_Current_m5D13ACE4E06CD6F3FB4E705A9A91423B6EBCD551_RuntimeMethod_var);
			V_6 = L_22;
			// var uuid = anchor.trackableId.ToString();
			ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * L_23 = V_6;
			NullCheck(L_23);
			TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_24;
			L_24 = ARTrackable_2_get_trackableId_m5B246724B1B0C9D5128E1359559AA8F6A3ECAB55(L_23, /*hidden argument*/ARTrackable_2_get_trackableId_m5B246724B1B0C9D5128E1359559AA8F6A3ECAB55_RuntimeMethod_var);
			V_5 = L_24;
			String_t* L_25;
			L_25 = TrackableId_ToString_mCD45FD4FF5DF6DE30A38AD05D02CFA7B2B696BB1((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)(&V_5), /*hidden argument*/NULL);
			V_7 = L_25;
			// if (mAnchors.ContainsKey(uuid))
			Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 * L_26 = __this->get_mAnchors_6();
			String_t* L_27 = V_7;
			NullCheck(L_26);
			bool L_28;
			L_28 = Dictionary_2_ContainsKey_mE2897AD7FBFB1621899052D558884189FA7E7F1C(L_26, L_27, /*hidden argument*/Dictionary_2_ContainsKey_mE2897AD7FBFB1621899052D558884189FA7E7F1C_RuntimeMethod_var);
			if (!L_28)
			{
				goto IL_00d6;
			}
		}

IL_00c2:
		{
			// updated.Add(Tuple.Create(uuid,anchor.transform));
			List_1_t0DB172BEA8D0009792F34EE515F413302C73E421 * L_29 = V_1;
			String_t* L_30 = V_7;
			ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * L_31 = V_6;
			NullCheck(L_31);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
			L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_31, /*hidden argument*/NULL);
			Tuple_2_t1726DB61838E1060A5A9C6C15D9DE70653283CDE * L_33;
			L_33 = Tuple_Create_TisString_t_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m019D79DEEAF1E856DBBDDA4A00BAC1AAC6BC96FE(L_30, L_32, /*hidden argument*/Tuple_Create_TisString_t_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m019D79DEEAF1E856DBBDDA4A00BAC1AAC6BC96FE_RuntimeMethod_var);
			NullCheck(L_29);
			List_1_Add_mDADE08660CDAEF1A9D57DF4AD815150524657CE9(L_29, L_33, /*hidden argument*/List_1_Add_mDADE08660CDAEF1A9D57DF4AD815150524657CE9_RuntimeMethod_var);
		}

IL_00d6:
		{
			// foreach (var anchor in eventArgs.updated)
			bool L_34;
			L_34 = Enumerator_MoveNext_m539E879120F5D0D47C05EB9F39D4D44D9C1983E0((Enumerator_t8CF1E0D2E6FF0DFC6B411C11EF4D001E8A74111A *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m539E879120F5D0D47C05EB9F39D4D44D9C1983E0_RuntimeMethod_var);
			if (L_34)
			{
				goto IL_0092;
			}
		}

IL_00df:
		{
			IL2CPP_LEAVE(0xEF, FINALLY_00e1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e1;
	}

FINALLY_00e1:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m5B8D5FD3B57E4B59209E86FB3CFCE4D2A320AE80((Enumerator_t8CF1E0D2E6FF0DFC6B411C11EF4D001E8A74111A *)(&V_2), /*hidden argument*/Enumerator_Dispose_m5B8D5FD3B57E4B59209E86FB3CFCE4D2A320AE80_RuntimeMethod_var);
		IL2CPP_END_FINALLY(225)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(225)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xEF, IL_00ef)
	}

IL_00ef:
	{
		// AnchorsChangedEvent.Invoke(removed, updated);
		Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * L_35 = __this->get_AnchorsChangedEvent_9();
		List_1_t0DB172BEA8D0009792F34EE515F413302C73E421 * L_36 = V_0;
		List_1_t0DB172BEA8D0009792F34EE515F413302C73E421 * L_37 = V_1;
		NullCheck(L_35);
		Action_2_Invoke_m05C604538242169E704EA16B607E2345326CD5F9(L_35, L_36, L_37, /*hidden argument*/Action_2_Invoke_m05C604538242169E704EA16B607E2345326CD5F9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.String Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::AddAnchor(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OpenSourceARFoundationFacade_AddAnchor_m13A30BAEC0A0AF8B98F0261FEB9544A9CBBBF28B (OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackable_2_get_trackableId_m5B246724B1B0C9D5128E1359559AA8F6A3ECAB55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m2AC3645AA0AB6DAE38B4C3C192865A69069FA6C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * V_0 = NULL;
	String_t* V_1 = NULL;
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var anchor = mAnchorManager.AddAnchor(pose);
		ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * L_0 = __this->get_mAnchorManager_2();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_1 = ___pose0;
		NullCheck(L_0);
		ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * L_2;
		L_2 = ARAnchorManager_AddAnchor_mBE78F22E6E4BE754EF0210E24E63E17EBEC5A3DC(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (anchor == null) return null;
		ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0018;
		}
	}
	{
		// if (anchor == null) return null;
		return (String_t*)NULL;
	}

IL_0018:
	{
		// var id = anchor.trackableId.ToString();
		ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * L_5 = V_0;
		NullCheck(L_5);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_6;
		L_6 = ARTrackable_2_get_trackableId_m5B246724B1B0C9D5128E1359559AA8F6A3ECAB55(L_5, /*hidden argument*/ARTrackable_2_get_trackableId_m5B246724B1B0C9D5128E1359559AA8F6A3ECAB55_RuntimeMethod_var);
		V_2 = L_6;
		String_t* L_7;
		L_7 = TrackableId_ToString_mCD45FD4FF5DF6DE30A38AD05D02CFA7B2B696BB1((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)(&V_2), /*hidden argument*/NULL);
		V_1 = L_7;
		// mAnchors[id] = anchor;
		Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 * L_8 = __this->get_mAnchors_6();
		String_t* L_9 = V_1;
		ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * L_10 = V_0;
		NullCheck(L_8);
		Dictionary_2_set_Item_m2AC3645AA0AB6DAE38B4C3C192865A69069FA6C2(L_8, L_9, L_10, /*hidden argument*/Dictionary_2_set_Item_m2AC3645AA0AB6DAE38B4C3C192865A69069FA6C2_RuntimeMethod_var);
		// return id;
		String_t* L_11 = V_1;
		return L_11;
	}
}
// System.Boolean Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::RemoveAnchor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenSourceARFoundationFacade_RemoveAnchor_m4A0D017758520B30F62CE02C28C4DC1985A430C6 (OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * __this, String_t* ___uuid0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mE2897AD7FBFB1621899052D558884189FA7E7F1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m30CF35E271B7DD35A08B94CA8D4DBE6F70F3D4C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mA50067F43600232C2DB1DFD14930BA24778682A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m27E319E50A5192129309A3CF6FF3A06E00643BA9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mAnchors.ContainsKey(uuid))
		Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 * L_0 = __this->get_mAnchors_6();
		String_t* L_1 = ___uuid0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mE2897AD7FBFB1621899052D558884189FA7E7F1C(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mE2897AD7FBFB1621899052D558884189FA7E7F1C_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		// if (mAnchors[uuid] && mAnchorManager.subsystem != null && mAnchorManager.subsystem.running)
		Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 * L_3 = __this->get_mAnchors_6();
		String_t* L_4 = ___uuid0;
		NullCheck(L_3);
		ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * L_5;
		L_5 = Dictionary_2_get_Item_mA50067F43600232C2DB1DFD14930BA24778682A6(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_mA50067F43600232C2DB1DFD14930BA24778682A6_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m3B780F50367611CB9A34F3BF2032585E05DA1BFD(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * L_7 = __this->get_mAnchorManager_2();
		NullCheck(L_7);
		XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 * L_8;
		L_8 = SubsystemLifecycleManager_3_get_subsystem_m27E319E50A5192129309A3CF6FF3A06E00643BA9_inline(L_7, /*hidden argument*/SubsystemLifecycleManager_3_get_subsystem_m27E319E50A5192129309A3CF6FF3A06E00643BA9_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_0058;
		}
	}
	{
		ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * L_9 = __this->get_mAnchorManager_2();
		NullCheck(L_9);
		XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 * L_10;
		L_10 = SubsystemLifecycleManager_3_get_subsystem_m27E319E50A5192129309A3CF6FF3A06E00643BA9_inline(L_9, /*hidden argument*/SubsystemLifecycleManager_3_get_subsystem_m27E319E50A5192129309A3CF6FF3A06E00643BA9_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11;
		L_11 = SubsystemWithProvider_get_running_m42399652EC4AB466AFBAC9035FA77C1BD6C72406_inline(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		// mAnchorManager.RemoveAnchor(mAnchors[uuid]);
		ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * L_12 = __this->get_mAnchorManager_2();
		Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 * L_13 = __this->get_mAnchors_6();
		String_t* L_14 = ___uuid0;
		NullCheck(L_13);
		ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * L_15;
		L_15 = Dictionary_2_get_Item_mA50067F43600232C2DB1DFD14930BA24778682A6(L_13, L_14, /*hidden argument*/Dictionary_2_get_Item_mA50067F43600232C2DB1DFD14930BA24778682A6_RuntimeMethod_var);
		NullCheck(L_12);
		bool L_16;
		L_16 = ARAnchorManager_RemoveAnchor_m1D2D061879D97BCCCFF3267A44A7D7E43F8799A0(L_12, L_15, /*hidden argument*/NULL);
	}

IL_0058:
	{
		// mAnchors.Remove(uuid);
		Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 * L_17 = __this->get_mAnchors_6();
		String_t* L_18 = ___uuid0;
		NullCheck(L_17);
		bool L_19;
		L_19 = Dictionary_2_Remove_m30CF35E271B7DD35A08B94CA8D4DBE6F70F3D4C5(L_17, L_18, /*hidden argument*/Dictionary_2_Remove_m30CF35E271B7DD35A08B94CA8D4DBE6F70F3D4C5_RuntimeMethod_var);
	}

IL_0065:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::ClearAnchors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSourceARFoundationFacade_ClearAnchors_m465FC130E2326FC30CDFC1D1E6140AD2098E436D (OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m2F3AFF5DDB98208186E9B951A5D04EC43A092370_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m17871C0A6709936FC836E221F03C61610925A66E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m897BB839284E62A9547F181CA8A704E9AC0D490E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1C9A34744E8345930B58C209939C81E42F4B72C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC38B2E8BDB12165764511F5A37034EF508285C44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m33B64E5E020F40670C0B5D0812F30E70BBAC891D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t485D25BDD649E78063270BA71089882606CDCC80  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t67ABA7BE4B27A94A2F1BB58A9315A42F6898EC72  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (var anchor in mAnchors)
		Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 * L_0 = __this->get_mAnchors_6();
		NullCheck(L_0);
		Enumerator_t485D25BDD649E78063270BA71089882606CDCC80  L_1;
		L_1 = Dictionary_2_GetEnumerator_m17871C0A6709936FC836E221F03C61610925A66E(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m17871C0A6709936FC836E221F03C61610925A66E_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0029;
		}

IL_000e:
		{
			// foreach (var anchor in mAnchors)
			KeyValuePair_2_t67ABA7BE4B27A94A2F1BB58A9315A42F6898EC72  L_2;
			L_2 = Enumerator_get_Current_mC38B2E8BDB12165764511F5A37034EF508285C44_inline((Enumerator_t485D25BDD649E78063270BA71089882606CDCC80 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mC38B2E8BDB12165764511F5A37034EF508285C44_RuntimeMethod_var);
			V_1 = L_2;
			// mAnchorManager.RemoveAnchor(anchor.Value);
			ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * L_3 = __this->get_mAnchorManager_2();
			ARAnchor_t356CA280DDF676713C46531E89D5CAE4AEA0F80C * L_4;
			L_4 = KeyValuePair_2_get_Value_m33B64E5E020F40670C0B5D0812F30E70BBAC891D_inline((KeyValuePair_2_t67ABA7BE4B27A94A2F1BB58A9315A42F6898EC72 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m33B64E5E020F40670C0B5D0812F30E70BBAC891D_RuntimeMethod_var);
			NullCheck(L_3);
			bool L_5;
			L_5 = ARAnchorManager_RemoveAnchor_m1D2D061879D97BCCCFF3267A44A7D7E43F8799A0(L_3, L_4, /*hidden argument*/NULL);
		}

IL_0029:
		{
			// foreach (var anchor in mAnchors)
			bool L_6;
			L_6 = Enumerator_MoveNext_m1C9A34744E8345930B58C209939C81E42F4B72C9((Enumerator_t485D25BDD649E78063270BA71089882606CDCC80 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m1C9A34744E8345930B58C209939C81E42F4B72C9_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_000e;
			}
		}

IL_0032:
		{
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
		Enumerator_Dispose_m897BB839284E62A9547F181CA8A704E9AC0D490E((Enumerator_t485D25BDD649E78063270BA71089882606CDCC80 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m897BB839284E62A9547F181CA8A704E9AC0D490E_RuntimeMethod_var);
		IL2CPP_END_FINALLY(52)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
	}

IL_0042:
	{
		// mAnchors.Clear();
		Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 * L_7 = __this->get_mAnchors_6();
		NullCheck(L_7);
		Dictionary_2_Clear_m2F3AFF5DDB98208186E9B951A5D04EC43A092370(L_7, /*hidden argument*/Dictionary_2_Clear_m2F3AFF5DDB98208186E9B951A5D04EC43A092370_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::HitTest(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.Pose>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenSourceARFoundationFacade_HitTest_m0C7973837F252A459D3A836626EE05E97A563E5F (OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPoint0, List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C ** ___hitPoses1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converter_2__ctor_m2A6F2071D4F717FDD19FF41DEF0D50DFB8511AD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converter_2_tC64B44F1A0EAFD8273C87D483DA826F259BA6D53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ConvertAll_TisPose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_mA74800C458088266E02F3C5CABC35604E9B6E0B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CHitTestU3Eb__32_0_m27477CFFF7D5E6B74FC8A4F96A4CA3CD357B803F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * V_0 = NULL;
	Converter_2_tC64B44F1A0EAFD8273C87D483DA826F259BA6D53 * G_B2_0 = NULL;
	List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * G_B2_1 = NULL;
	List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C ** G_B2_2 = NULL;
	bool G_B2_3 = false;
	Converter_2_tC64B44F1A0EAFD8273C87D483DA826F259BA6D53 * G_B1_0 = NULL;
	List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * G_B1_1 = NULL;
	List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C ** G_B1_2 = NULL;
	bool G_B1_3 = false;
	{
		// var hits = new List<ARRaycastHit>();
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_0 = (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D *)il2cpp_codegen_object_new(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_il2cpp_TypeInfo_var);
		List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201(L_0, /*hidden argument*/List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_RuntimeMethod_var);
		V_0 = L_0;
		// var hitSuccess = mRaycastManager.Raycast(screenPoint, hits, TrackableType.PlaneWithinPolygon);
		ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * L_1 = __this->get_mRaycastManager_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___screenPoint0;
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_3 = V_0;
		NullCheck(L_1);
		bool L_4;
		L_4 = ARRaycastManager_Raycast_mCC2851DAC2542C59528FCE21242231DFAF024650(L_1, L_2, L_3, 1, /*hidden argument*/NULL);
		// hitPoses = hits.ConvertAll(hit => hit.pose);
		List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C ** L_5 = ___hitPoses1;
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_il2cpp_TypeInfo_var);
		Converter_2_tC64B44F1A0EAFD8273C87D483DA826F259BA6D53 * L_7 = ((U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_il2cpp_TypeInfo_var))->get_U3CU3E9__32_0_1();
		Converter_2_tC64B44F1A0EAFD8273C87D483DA826F259BA6D53 * L_8 = L_7;
		G_B1_0 = L_8;
		G_B1_1 = L_6;
		G_B1_2 = L_5;
		G_B1_3 = L_4;
		if (L_8)
		{
			G_B2_0 = L_8;
			G_B2_1 = L_6;
			G_B2_2 = L_5;
			G_B2_3 = L_4;
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_il2cpp_TypeInfo_var);
		U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7 * L_9 = ((U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Converter_2_tC64B44F1A0EAFD8273C87D483DA826F259BA6D53 * L_10 = (Converter_2_tC64B44F1A0EAFD8273C87D483DA826F259BA6D53 *)il2cpp_codegen_object_new(Converter_2_tC64B44F1A0EAFD8273C87D483DA826F259BA6D53_il2cpp_TypeInfo_var);
		Converter_2__ctor_m2A6F2071D4F717FDD19FF41DEF0D50DFB8511AD9(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec_U3CHitTestU3Eb__32_0_m27477CFFF7D5E6B74FC8A4F96A4CA3CD357B803F_RuntimeMethod_var), /*hidden argument*/Converter_2__ctor_m2A6F2071D4F717FDD19FF41DEF0D50DFB8511AD9_RuntimeMethod_var);
		Converter_2_tC64B44F1A0EAFD8273C87D483DA826F259BA6D53 * L_11 = L_10;
		((U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_il2cpp_TypeInfo_var))->set_U3CU3E9__32_0_1(L_11);
		G_B2_0 = L_11;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}

IL_0035:
	{
		NullCheck(G_B2_1);
		List_1_tDB586987B7A2D2B13A903004C86E3C3FBD061C1C * L_12;
		L_12 = List_1_ConvertAll_TisPose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_mA74800C458088266E02F3C5CABC35604E9B6E0B0(G_B2_1, G_B2_0, /*hidden argument*/List_1_ConvertAll_TisPose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_mA74800C458088266E02F3C5CABC35604E9B6E0B0_RuntimeMethod_var);
		*((RuntimeObject **)G_B2_2) = (RuntimeObject *)L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)G_B2_2, (void*)(RuntimeObject *)L_12);
		// return hitSuccess;
		return G_B2_3;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSourceARFoundationFacade__ctor_mC9A0CF19CF002218E1FB23D43AA2CBE6472C8588 (OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m5D27168A59CFFABB7C27EBE02757F21047177A3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_m43782689D579BE44352DC83043E4D7ED69EEFEE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_mA5801EA0E9A1E4EF759E5AEC43B276881C698385_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m00BF2CC86865111F0ACD02544F9E7972598D6E41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__33_0_mEEFC9ECADE7073544708232F38321954A3D981ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__33_1_m070A3D472459299EC3059C80E8D8721280AA4EC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__33_2_m8412C267B7D4A6B716A708E98DF93AF68443F229_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * G_B2_0 = NULL;
	OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * G_B2_1 = NULL;
	Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * G_B1_0 = NULL;
	OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * G_B1_1 = NULL;
	Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * G_B4_0 = NULL;
	OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * G_B4_1 = NULL;
	Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * G_B3_0 = NULL;
	OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * G_B3_1 = NULL;
	Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * G_B6_0 = NULL;
	OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * G_B6_1 = NULL;
	Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * G_B5_0 = NULL;
	OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * G_B5_1 = NULL;
	{
		// Dictionary<string, ARAnchor> mAnchors = new Dictionary<string, ARAnchor>();
		Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 * L_0 = (Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 *)il2cpp_codegen_object_new(Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m00BF2CC86865111F0ACD02544F9E7972598D6E41(L_0, /*hidden argument*/Dictionary_2__ctor_m00BF2CC86865111F0ACD02544F9E7972598D6E41_RuntimeMethod_var);
		__this->set_mAnchors_6(L_0);
		// public event Action<ARFoundationImage> ARFoundationImageEvent = image => { };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_il2cpp_TypeInfo_var);
		Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * L_1 = ((U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_il2cpp_TypeInfo_var))->get_U3CU3E9__33_0_2();
		Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = __this;
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_il2cpp_TypeInfo_var);
		U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7 * L_3 = ((U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * L_4 = (Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 *)il2cpp_codegen_object_new(Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823_il2cpp_TypeInfo_var);
		Action_1__ctor_m5D27168A59CFFABB7C27EBE02757F21047177A3B(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__33_0_mEEFC9ECADE7073544708232F38321954A3D981ED_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m5D27168A59CFFABB7C27EBE02757F21047177A3B_RuntimeMethod_var);
		Action_1_t0337E1F51EA6E13638CDD450CFD2ECD9E97D9823 * L_5 = L_4;
		((U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_il2cpp_TypeInfo_var))->set_U3CU3E9__33_0_2(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_002b:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_ARFoundationImageEvent_7(G_B2_0);
		// public event Action<Transform, long> ARFoundationPoseEvent = (pose, timestamp) => { };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_il2cpp_TypeInfo_var);
		Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * L_6 = ((U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_il2cpp_TypeInfo_var))->get_U3CU3E9__33_1_3();
		Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * L_7 = L_6;
		G_B3_0 = L_7;
		G_B3_1 = __this;
		if (L_7)
		{
			G_B4_0 = L_7;
			G_B4_1 = __this;
			goto IL_0050;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_il2cpp_TypeInfo_var);
		U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7 * L_8 = ((U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * L_9 = (Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 *)il2cpp_codegen_object_new(Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7_il2cpp_TypeInfo_var);
		Action_2__ctor_mA5801EA0E9A1E4EF759E5AEC43B276881C698385(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__33_1_m070A3D472459299EC3059C80E8D8721280AA4EC6_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mA5801EA0E9A1E4EF759E5AEC43B276881C698385_RuntimeMethod_var);
		Action_2_tC6A83DFF30EE06184C3C1B915056A240607ABDC7 * L_10 = L_9;
		((U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_il2cpp_TypeInfo_var))->set_U3CU3E9__33_1_3(L_10);
		G_B4_0 = L_10;
		G_B4_1 = G_B3_1;
	}

IL_0050:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_ARFoundationPoseEvent_8(G_B4_0);
		// public event Action<List<Tuple<string, Transform>>, List<Tuple<string, Transform>>> AnchorsChangedEvent = (removed, updated) => {};
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_il2cpp_TypeInfo_var);
		Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * L_11 = ((U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_il2cpp_TypeInfo_var))->get_U3CU3E9__33_2_4();
		Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * L_12 = L_11;
		G_B5_0 = L_12;
		G_B5_1 = __this;
		if (L_12)
		{
			G_B6_0 = L_12;
			G_B6_1 = __this;
			goto IL_0075;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_il2cpp_TypeInfo_var);
		U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7 * L_13 = ((U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * L_14 = (Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D *)il2cpp_codegen_object_new(Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D_il2cpp_TypeInfo_var);
		Action_2__ctor_m43782689D579BE44352DC83043E4D7ED69EEFEE8(L_14, L_13, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__33_2_m8412C267B7D4A6B716A708E98DF93AF68443F229_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m43782689D579BE44352DC83043E4D7ED69EEFEE8_RuntimeMethod_var);
		Action_2_tAF2D774495ADB2369C35C306EE644CAEDDBA469D * L_15 = L_14;
		((U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_il2cpp_TypeInfo_var))->set_U3CU3E9__33_2_4(L_15);
		G_B6_0 = L_15;
		G_B6_1 = G_B5_1;
	}

IL_0075:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_AnchorsChangedEvent_9(G_B6_0);
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
// System.Void Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer::OnRuntimeMethodLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeOpenSourceInitializer_OnRuntimeMethodLoad_mD1694E0695C31E3B2116B5ABF5203D799A5149CE (const RuntimeMethod* method)
{
	{
		// InitializeFacade();
		RuntimeOpenSourceInitializer_InitializeFacade_mE34A8CC87CC9866D791197E86FF71D46EE24BEDF(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer::InitializeFacade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeOpenSourceInitializer_InitializeFacade_mE34A8CC87CC9866D791197E86FF71D46EE24BEDF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenSourceUnityRuntimeCompiledFacade_tE074BC03139BA8588825A6DE47CB2C59AFFFC38F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeOpenSourceInitializer_t8984C6170A7116F3B00737EC07AFE988AE40B76B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (sFacade != null) return;
		RuntimeObject* L_0 = ((RuntimeOpenSourceInitializer_t8984C6170A7116F3B00737EC07AFE988AE40B76B_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeOpenSourceInitializer_t8984C6170A7116F3B00737EC07AFE988AE40B76B_il2cpp_TypeInfo_var))->get_sFacade_0();
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (sFacade != null) return;
		return;
	}

IL_0008:
	{
		// sFacade = new OpenSourceUnityRuntimeCompiledFacade();
		OpenSourceUnityRuntimeCompiledFacade_tE074BC03139BA8588825A6DE47CB2C59AFFFC38F * L_1 = (OpenSourceUnityRuntimeCompiledFacade_tE074BC03139BA8588825A6DE47CB2C59AFFFC38F *)il2cpp_codegen_object_new(OpenSourceUnityRuntimeCompiledFacade_tE074BC03139BA8588825A6DE47CB2C59AFFFC38F_il2cpp_TypeInfo_var);
		OpenSourceUnityRuntimeCompiledFacade__ctor_m91F556BC59D8ED10086A231A9820907EDB1E17EE(L_1, /*hidden argument*/NULL);
		((RuntimeOpenSourceInitializer_t8984C6170A7116F3B00737EC07AFE988AE40B76B_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeOpenSourceInitializer_t8984C6170A7116F3B00737EC07AFE988AE40B76B_il2cpp_TypeInfo_var))->set_sFacade_0(L_1);
		// UnityRuntimeCompiledFacade.Instance = sFacade;
		RuntimeObject* L_2 = ((RuntimeOpenSourceInitializer_t8984C6170A7116F3B00737EC07AFE988AE40B76B_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeOpenSourceInitializer_t8984C6170A7116F3B00737EC07AFE988AE40B76B_il2cpp_TypeInfo_var))->get_sFacade_0();
		UnityRuntimeCompiledFacade_set_Instance_m4ACF102049531812B19C5784EF11DBF0B5638F1A_inline(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeOpenSourceInitializer__ctor_m13DF88A4995AC6688638268EA2B0513AD5B62CB1 (RuntimeOpenSourceInitializer_t8984C6170A7116F3B00737EC07AFE988AE40B76B * __this, const RuntimeMethod* method)
{
	{
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
// System.Boolean DefaultObserverEventHandler/PoseLerp::get_Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoseLerp_get_Complete_m0E197959F102F20548B6874AEA365012BEB2DC95 (PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328 * __this, const RuntimeMethod* method)
{
	{
		// public bool Complete { get; private set; }
		bool L_0 = __this->get_U3CCompleteU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void DefaultObserverEventHandler/PoseLerp::set_Complete(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseLerp_set_Complete_m1119BBFED40660F71426E549B171C22EA530A50C (PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Complete { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CCompleteU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void DefaultObserverEventHandler/PoseLerp::.ctor(UnityEngine.Pose,UnityEngine.Pose,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseLerp__ctor_m69C8C61ACF19E79A3A0F4530118406636E1E1CC4 (PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___startPose0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___endPose1, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve2, const RuntimeMethod* method)
{
	{
		// public PoseLerp(Pose startPose, Pose endPose, AnimationCurve curve)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// mStartPose = startPose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = ___startPose0;
		__this->set_mStartPose_1(L_0);
		// mEndPose = endPose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_1 = ___endPose1;
		__this->set_mEndPose_2(L_1);
		// mCurve = curve;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_2 = ___curve2;
		__this->set_mCurve_0(L_2);
		// mEndTime = mCurve.keys[mCurve.length - 1].time;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3 = __this->get_mCurve_0();
		NullCheck(L_3);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_4;
		L_4 = AnimationCurve_get_keys_m64FA75C0B1F7BCDE123EFB903962B2BD9DD5F321(L_3, /*hidden argument*/NULL);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = __this->get_mCurve_0();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = AnimationCurve_get_length_mB3D0734222EE55DB1389BCB98CCB1324AF8AA4E0(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		float L_7;
		L_7 = Keyframe_get_time_m75EBFDECA329315F6D41A60C0B1291F5BA4039E8((Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1))))), /*hidden argument*/NULL);
		__this->set_mEndTime_3(L_7);
		// }
		return;
	}
}
// UnityEngine.Pose DefaultObserverEventHandler/PoseLerp::GetSmoothedPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  PoseLerp_GetSmoothedPosition_m792B4FCB30595F526BE5575612283AB0A6A8A850 (PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328 * __this, float ___deltaTime0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// mElapsedTime += deltaTime;
		float L_0 = __this->get_mElapsedTime_4();
		float L_1 = ___deltaTime0;
		__this->set_mElapsedTime_4(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if (mElapsedTime >= mEndTime)
		float L_2 = __this->get_mElapsedTime_4();
		float L_3 = __this->get_mEndTime_3();
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_0035;
		}
	}
	{
		// mElapsedTime = 0;
		__this->set_mElapsedTime_4((0.0f));
		// Complete = true;
		PoseLerp_set_Complete_m1119BBFED40660F71426E549B171C22EA530A50C_inline(__this, (bool)1, /*hidden argument*/NULL);
		// return mEndPose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_4 = __this->get_mEndPose_2();
		return L_4;
	}

IL_0035:
	{
		// var ratio = mCurve.Evaluate(mElapsedTime);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = __this->get_mCurve_0();
		float L_6 = __this->get_mElapsedTime_4();
		NullCheck(L_5);
		float L_7;
		L_7 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// var smoothPosition = Vector3.Lerp(mStartPose.position, mEndPose.position, ratio);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_8 = __this->get_address_of_mStartPose_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = L_8->get_position_0();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_10 = __this->get_address_of_mEndPose_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = L_10->get_position_0();
		float L_12 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_Lerp_m5E223DB365EAC8F6625C169E927527FFB8CC88DB_inline(L_9, L_11, L_12, /*hidden argument*/NULL);
		// var smoothRotation = Quaternion.Slerp(mStartPose.rotation, mEndPose.rotation, ratio);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_14 = __this->get_address_of_mStartPose_1();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15 = L_14->get_rotation_1();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_16 = __this->get_address_of_mEndPose_2();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17 = L_16->get_rotation_1();
		float L_18 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19;
		L_19 = Quaternion_Slerp_m248F79C5788A4A059F1394DEC120F23B67EFE541(L_15, L_17, L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		// return new Pose(smoothPosition, smoothRotation);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20 = V_1;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Pose__ctor_m57138889AE9BF5AFB50D31A007F6EE062991E8C9((&L_21), L_13, L_20, /*hidden argument*/NULL);
		return L_21;
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
// System.Void DefaultObserverEventHandler/PoseSmoother::.ctor(Vuforia.ObserverBehaviour,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseSmoother__ctor_mFBFE84CAB2D8C6329EF21B8112E81575D020EB64 (PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB * __this, ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * ___target0, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___animationCurve1, const RuntimeMethod* method)
{
	{
		// public PoseSmoother(ObserverBehaviour target, AnimationCurve animationCurve)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// mTarget = target;
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_0 = ___target0;
		__this->set_mTarget_4(L_0);
		// mAnimationCurve = animationCurve;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1 = ___animationCurve1;
		__this->set_mAnimationCurve_5(L_1);
		// }
		return;
	}
}
// System.Void DefaultObserverEventHandler/PoseSmoother::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseSmoother_Update_m3A8D6EDB3153B4136B48AC8491A41A41CC662F38 (PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB * __this, const RuntimeMethod* method)
{
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var currentPose = new Pose(mTarget.transform.position, mTarget.transform.rotation);
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_0 = __this->get_mTarget_4();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_3 = __this->get_mTarget_4();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_4, /*hidden argument*/NULL);
		Pose__ctor_m57138889AE9BF5AFB50D31A007F6EE062991E8C9((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)(&V_0), L_2, L_5, /*hidden argument*/NULL);
		// var currentStatus = mTarget.TargetStatus;
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_6 = __this->get_mTarget_4();
		NullCheck(L_6);
		TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  L_7;
		L_7 = ObserverBehaviour_get_TargetStatus_m9F21B240F06DA71ED4613EB3A99ADA6E1942A499_inline(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// UpdatePoseSmoothing(currentPose, currentStatus);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_8 = V_0;
		TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  L_9 = V_1;
		PoseSmoother_UpdatePoseSmoothing_m7C09D411C57C50440B15775DAA16DB6A24D47F6B(__this, L_8, L_9, /*hidden argument*/NULL);
		// mPreviousPose = currentPose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_10 = V_0;
		__this->set_mPreviousPose_3(L_10);
		// mPreviousStatus = currentStatus;
		TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  L_11 = V_1;
		__this->set_mPreviousStatus_6(L_11);
		// }
		return;
	}
}
// System.Void DefaultObserverEventHandler/PoseSmoother::UpdatePoseSmoothing(UnityEngine.Pose,Vuforia.TargetStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseSmoother_UpdatePoseSmoothing_m7C09D411C57C50440B15775DAA16DB6A24D47F6B (PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___currentPose0, TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  ___currentTargetStatus1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (mActivePoseLerp == null && ShouldSmooth(currentPose, currentTargetStatus))
		PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328 * L_0 = __this->get_mActivePoseLerp_2();
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_1 = ___currentPose0;
		TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  L_2 = ___currentTargetStatus1;
		bool L_3;
		L_3 = PoseSmoother_ShouldSmooth_m8EF0D6450E4FFF6E1F562273B6B84DB862AC2AF9(__this, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// mActivePoseLerp = new PoseLerp(mPreviousPose, currentPose, mAnimationCurve);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_4 = __this->get_mPreviousPose_3();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_5 = ___currentPose0;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_6 = __this->get_mAnimationCurve_5();
		PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328 * L_7 = (PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328 *)il2cpp_codegen_object_new(PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328_il2cpp_TypeInfo_var);
		PoseLerp__ctor_m69C8C61ACF19E79A3A0F4530118406636E1E1CC4(L_7, L_4, L_5, L_6, /*hidden argument*/NULL);
		__this->set_mActivePoseLerp_2(L_7);
	}

IL_002a:
	{
		// if (mActivePoseLerp != null)
		PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328 * L_8 = __this->get_mActivePoseLerp_2();
		if (!L_8)
		{
			goto IL_0073;
		}
	}
	{
		// var pose = mActivePoseLerp.GetSmoothedPosition(Time.deltaTime);
		PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328 * L_9 = __this->get_mActivePoseLerp_2();
		float L_10;
		L_10 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		NullCheck(L_9);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_11;
		L_11 = PoseLerp_GetSmoothedPosition_m792B4FCB30595F526BE5575612283AB0A6A8A850(L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// mTarget.transform.SetPositionAndRotation(pose.position, pose.rotation);
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_12 = __this->get_mTarget_4();
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_14 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = L_14.get_position_0();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_16 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17 = L_16.get_rotation_1();
		NullCheck(L_13);
		Transform_SetPositionAndRotation_m33418A6BDFB6395B98D0B5733F5E522B7EEDDCDE(L_13, L_15, L_17, /*hidden argument*/NULL);
		// if (mActivePoseLerp.Complete)
		PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328 * L_18 = __this->get_mActivePoseLerp_2();
		NullCheck(L_18);
		bool L_19;
		L_19 = PoseLerp_get_Complete_m0E197959F102F20548B6874AEA365012BEB2DC95_inline(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0073;
		}
	}
	{
		// mActivePoseLerp = null;
		__this->set_mActivePoseLerp_2((PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328 *)NULL);
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Boolean DefaultObserverEventHandler/PoseSmoother::ShouldSmooth(UnityEngine.Pose,Vuforia.TargetStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoseSmoother_ShouldSmooth_m8EF0D6450E4FFF6E1F562273B6B84DB862AC2AF9 (PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___currentPose0, TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  ___currentTargetStatus1, const RuntimeMethod* method)
{
	{
		// return (currentTargetStatus.Status == Status.EXTENDED_TRACKED || (currentTargetStatus.Status == Status.TRACKED && mPreviousStatus.Status == Status.EXTENDED_TRACKED)) &&
		//        (Vector3.SqrMagnitude(currentPose.position - mPreviousPose.position) > e || Quaternion.Angle(currentPose.rotation, mPreviousPose.rotation) > MIN_ANGLE);
		int32_t L_0;
		L_0 = TargetStatus_get_Status_mD745DEB3CFE4D18A1E973178AA8CA9BB73178D5E_inline((TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1 *)(&___currentTargetStatus1), /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1;
		L_1 = TargetStatus_get_Status_mD745DEB3CFE4D18A1E973178AA8CA9BB73178D5E_inline((TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1 *)(&___currentTargetStatus1), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_0064;
		}
	}
	{
		TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1 * L_2 = __this->get_address_of_mPreviousStatus_6();
		int32_t L_3;
		L_3 = TargetStatus_get_Status_mD745DEB3CFE4D18A1E973178AA8CA9BB73178D5E_inline((TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1 *)L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)4))))
		{
			goto IL_0064;
		}
	}

IL_0022:
	{
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_4 = ___currentPose0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = L_4.get_position_0();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_6 = __this->get_address_of_mPreviousPose_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = L_6->get_position_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Subtraction_mF24598FCCA1D06E65CA6DAFF4F0F6E1667336722_inline(L_5, L_7, /*hidden argument*/NULL);
		float L_9;
		L_9 = Vector3_SqrMagnitude_mFB9023288188C7A19F1CE3F621E2B56848352523_inline(L_8, /*hidden argument*/NULL);
		if ((((float)L_9) > ((float)(0.00100000005f))))
		{
			goto IL_0062;
		}
	}
	{
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_10 = ___currentPose0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11 = L_10.get_rotation_1();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_12 = __this->get_address_of_mPreviousPose_3();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13 = L_12->get_rotation_1();
		float L_14;
		L_14 = Quaternion_Angle_mEA1C953F5FD3D678F6B85781BD14D4C67F66CE0B_inline(L_11, L_13, /*hidden argument*/NULL);
		return (bool)((((float)L_14) > ((float)(2.0f)))? 1 : 0);
	}

IL_0062:
	{
		return (bool)1;
	}

IL_0064:
	{
		return (bool)0;
	}
}
// System.Void DefaultObserverEventHandler/PoseSmoother::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseSmoother_Dispose_m72E5515BFBBDD98CC5F7E3D5B0124B02BD0E0B2B (PoseSmoother_t594E9D54E7404C6238594A6999C6F9D5AC72FECB * __this, const RuntimeMethod* method)
{
	{
		// mActivePoseLerp = null;
		__this->set_mActivePoseLerp_2((PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328 *)NULL);
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
// System.Void Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB7EE98B2B466F84FF9072537C01348C4B92FFA7D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7 * L_0 = (U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7 *)il2cpp_codegen_object_new(U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m94E2B4DEDF0A4C2C850E2438A796AEC942011924(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m94E2B4DEDF0A4C2C850E2438A796AEC942011924 (U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Pose Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<>c::<HitTest>b__32_0(UnityEngine.XR.ARFoundation.ARRaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  U3CU3Ec_U3CHitTestU3Eb__32_0_m27477CFFF7D5E6B74FC8A4F96A4CA3CD357B803F (U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7 * __this, ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  ___hit0, const RuntimeMethod* method)
{
	{
		// hitPoses = hits.ConvertAll(hit => hit.pose);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0;
		L_0 = ARRaycastHit_get_pose_mB4D8BC45F23D9F2C2C8DCAFA88DB1221D76EF02B((ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E *)(&___hit0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<>c::<.ctor>b__33_0(Vuforia.ARFoundation.ARFoundationImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__33_0_mEEFC9ECADE7073544708232F38321954A3D981ED (U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7 * __this, ARFoundationImage_t52F1BCE1FC354D7635660A1B2C33CB5319F0B16B  ___image0, const RuntimeMethod* method)
{
	{
		// public event Action<ARFoundationImage> ARFoundationImageEvent = image => { };
		return;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<>c::<.ctor>b__33_1(UnityEngine.Transform,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__33_1_m070A3D472459299EC3059C80E8D8721280AA4EC6 (U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___pose0, int64_t ___timestamp1, const RuntimeMethod* method)
{
	{
		// public event Action<Transform, long> ARFoundationPoseEvent = (pose, timestamp) => { };
		return;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<>c::<.ctor>b__33_2(System.Collections.Generic.List`1<System.Tuple`2<System.String,UnityEngine.Transform>>,System.Collections.Generic.List`1<System.Tuple`2<System.String,UnityEngine.Transform>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__33_2_m8412C267B7D4A6B716A708E98DF93AF68443F229 (U3CU3Ec_tD598A4A9B77393DB30EBC214242B51BCF43B3CD7 * __this, List_1_t0DB172BEA8D0009792F34EE515F413302C73E421 * ___removed0, List_1_t0DB172BEA8D0009792F34EE515F413302C73E421 * ___updated1, const RuntimeMethod* method)
{
	{
		// public event Action<List<Tuple<string, Transform>>, List<Tuple<string, Transform>>> AnchorsChangedEvent = (removed, updated) => {};
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
// System.Void Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<>c__DisplayClass26_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0__ctor_mE7C8CF9C5257530C6611AE8CCC1366241BAEEC2F (U3CU3Ec__DisplayClass26_0_t315C6B6CB80468086F2427B2F2518AFDEED9AF8C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<>c__DisplayClass26_0::<SelectProfile>b__0(UnityEngine.XR.ARSubsystems.XRCameraConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass26_0_U3CSelectProfileU3Eb__0_mC4A646AEDD5A4A927D34E31DED9B490DA8889C85 (U3CU3Ec__DisplayClass26_0_t315C6B6CB80468086F2427B2F2518AFDEED9AF8C * __this, XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___x0, const RuntimeMethod* method)
{
	{
		// .First(x => x.width == profile.Width && x.height == profile.Height);
		int32_t L_0;
		L_0 = XRCameraConfiguration_get_width_m019869C624524B8C4EA0021D9331F2AD856A25C3((XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A *)(&___x0), /*hidden argument*/NULL);
		DriverCameraMode_tFE34FC60BECEF81615274E556D3678EB2E1220DF * L_1 = __this->get_address_of_profile_0();
		int32_t L_2 = L_1->get_Width_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_3;
		L_3 = XRCameraConfiguration_get_height_mAAC1B9AE539EF89D59585A6BFC8F925F94AA14D3((XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A *)(&___x0), /*hidden argument*/NULL);
		DriverCameraMode_tFE34FC60BECEF81615274E556D3678EB2E1220DF * L_4 = __this->get_address_of_profile_0();
		int32_t L_5 = L_4->get_Height_1();
		return (bool)((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
	}

IL_0029:
	{
		return (bool)0;
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
// System.Void Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<CheckAvailability>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckAvailabilityU3Ed__19__ctor_m02ADF7AFDDA63B842228C65BC26698C4A4746235 (U3CCheckAvailabilityU3Ed__19_tB688CDF56303EDC427E5E356E3A9150AA2E58155 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<CheckAvailability>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckAvailabilityU3Ed__19_System_IDisposable_Dispose_m509FEBBD31E65D5E829F13DED2C76318C3FF99A5 (U3CCheckAvailabilityU3Ed__19_tB688CDF56303EDC427E5E356E3A9150AA2E58155 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<CheckAvailability>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCheckAvailabilityU3Ed__19_MoveNext_mB7697A3B555C4F7848FFFDC29164BBACB0B92092 (U3CCheckAvailabilityU3Ed__19_tB688CDF56303EDC427E5E356E3A9150AA2E58155 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF373740DD26536668F201DDCB222C1A8C7AC91D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC864128E4993D3F8431EA563A3346A250FD39B83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDED98C236097B36F9015B396398179A6F8A62E50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetSubsystemDescriptors_TisXRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B_m3109B986F235F2910E6FA0B1014C9A336EBBAE06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * V_1 = NULL;
	List_1_tDED98C236097B36F9015B396398179A6F8A62E50 * V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_004d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var anchorDescriptors = new List<XRAnchorSubsystemDescriptor>();
		List_1_tDED98C236097B36F9015B396398179A6F8A62E50 * L_4 = (List_1_tDED98C236097B36F9015B396398179A6F8A62E50 *)il2cpp_codegen_object_new(List_1_tDED98C236097B36F9015B396398179A6F8A62E50_il2cpp_TypeInfo_var);
		List_1__ctor_mF373740DD26536668F201DDCB222C1A8C7AC91D1(L_4, /*hidden argument*/List_1__ctor_mF373740DD26536668F201DDCB222C1A8C7AC91D1_RuntimeMethod_var);
		V_2 = L_4;
		// SubsystemManager.GetSubsystemDescriptors(anchorDescriptors);
		List_1_tDED98C236097B36F9015B396398179A6F8A62E50 * L_5 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		SubsystemManager_GetSubsystemDescriptors_TisXRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B_m3109B986F235F2910E6FA0B1014C9A336EBBAE06(L_5, /*hidden argument*/SubsystemManager_GetSubsystemDescriptors_TisXRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B_m3109B986F235F2910E6FA0B1014C9A336EBBAE06_RuntimeMethod_var);
		// mIsAnchorSupported = anchorDescriptors.Count > 0;
		OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * L_6 = V_1;
		List_1_tDED98C236097B36F9015B396398179A6F8A62E50 * L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_mC864128E4993D3F8431EA563A3346A250FD39B83_inline(L_7, /*hidden argument*/List_1_get_Count_mC864128E4993D3F8431EA563A3346A250FD39B83_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->set_mIsAnchorSupported_0((bool)((((int32_t)L_8) > ((int32_t)0))? 1 : 0));
		// yield return ARSession.CheckAvailability();
		RuntimeObject* L_9;
		L_9 = ARSession_CheckAvailability_m641D1208F35E8286126BAA4D899E64671A66CB75(/*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<CheckAvailability>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCheckAvailabilityU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4E1BE2FF04467D73C11380BCFD61A0A1FF5B096A (U3CCheckAvailabilityU3Ed__19_tB688CDF56303EDC427E5E356E3A9150AA2E58155 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<CheckAvailability>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckAvailabilityU3Ed__19_System_Collections_IEnumerator_Reset_m89C9EB2C8B8ECD9E2D285CBEEAEB5EB5090FAB92 (U3CCheckAvailabilityU3Ed__19_tB688CDF56303EDC427E5E356E3A9150AA2E58155 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCheckAvailabilityU3Ed__19_System_Collections_IEnumerator_Reset_m89C9EB2C8B8ECD9E2D285CBEEAEB5EB5090FAB92_RuntimeMethod_var)));
	}
}
// System.Object Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<CheckAvailability>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCheckAvailabilityU3Ed__19_System_Collections_IEnumerator_get_Current_mBB7D42901FAC887954DF952B6203142A610D75D5 (U3CCheckAvailabilityU3Ed__19_tB688CDF56303EDC427E5E356E3A9150AA2E58155 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<WaitForCameraReady>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForCameraReadyU3Ed__22__ctor_m5D11875E779D5953FD1529E1B1DF9354A5A090B5 (U3CWaitForCameraReadyU3Ed__22_tA4BE56875445D83B986D8AB04FBC0C0608175827 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<WaitForCameraReady>d__22::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForCameraReadyU3Ed__22_System_IDisposable_Dispose_m36ECAD9211BE8D9FBA45797019C76CECC9001F14 (U3CWaitForCameraReadyU3Ed__22_tA4BE56875445D83B986D8AB04FBC0C0608175827 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<WaitForCameraReady>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForCameraReadyU3Ed__22_MoveNext_mB24E2274C1B7A5710275D1EF8C9FA3792D1FEDBE (U3CWaitForCameraReadyU3Ed__22_tA4BE56875445D83B986D8AB04FBC0C0608175827 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_mECDDE4A838FA3AE336F989C2DBC2C0ED374B2FF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0040;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var waitForEndOfFrame = new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_4 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_4, /*hidden argument*/NULL);
		__this->set_U3CwaitForEndOfFrameU3E5__2_3(L_4);
		goto IL_0047;
	}

IL_002b:
	{
		// yield return waitForEndOfFrame;
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_5 = __this->get_U3CwaitForEndOfFrameU3E5__2_3();
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0040:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0047:
	{
		// while (mCameraManager == null || mCameraManager.subsystem == null || !mCameraManager.subsystem.running ||
		//     !mCameraManager.permissionGranted)
		OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * L_6 = V_1;
		NullCheck(L_6);
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_7 = L_6->get_mCameraManager_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_002b;
		}
	}
	{
		OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * L_9 = V_1;
		NullCheck(L_9);
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_10 = L_9->get_mCameraManager_1();
		NullCheck(L_10);
		XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 * L_11;
		L_11 = SubsystemLifecycleManager_3_get_subsystem_mECDDE4A838FA3AE336F989C2DBC2C0ED374B2FF5_inline(L_10, /*hidden argument*/SubsystemLifecycleManager_3_get_subsystem_mECDDE4A838FA3AE336F989C2DBC2C0ED374B2FF5_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_002b;
		}
	}
	{
		OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * L_12 = V_1;
		NullCheck(L_12);
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_13 = L_12->get_mCameraManager_1();
		NullCheck(L_13);
		XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 * L_14;
		L_14 = SubsystemLifecycleManager_3_get_subsystem_mECDDE4A838FA3AE336F989C2DBC2C0ED374B2FF5_inline(L_13, /*hidden argument*/SubsystemLifecycleManager_3_get_subsystem_mECDDE4A838FA3AE336F989C2DBC2C0ED374B2FF5_RuntimeMethod_var);
		NullCheck(L_14);
		bool L_15;
		L_15 = SubsystemWithProvider_get_running_m42399652EC4AB466AFBAC9035FA77C1BD6C72406_inline(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_002b;
		}
	}
	{
		OpenSourceARFoundationFacade_tFC4F857A09103031C20F8C3C9A0A0FB661D713F0 * L_16 = V_1;
		NullCheck(L_16);
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_17 = L_16->get_mCameraManager_1();
		NullCheck(L_17);
		bool L_18;
		L_18 = ARCameraManager_get_permissionGranted_m41AC7EC81D67E0C8FCBA8ED9781A65BE48183B6A(L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_002b;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<WaitForCameraReady>d__22::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForCameraReadyU3Ed__22_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6346C6F85CE5EE736D37FB8EEACCB7EAAAB323C1 (U3CWaitForCameraReadyU3Ed__22_tA4BE56875445D83B986D8AB04FBC0C0608175827 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<WaitForCameraReady>d__22::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForCameraReadyU3Ed__22_System_Collections_IEnumerator_Reset_m5E339562DB73EB8ED334558B0CDEF0EAD21D9784 (U3CWaitForCameraReadyU3Ed__22_tA4BE56875445D83B986D8AB04FBC0C0608175827 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForCameraReadyU3Ed__22_System_Collections_IEnumerator_Reset_m5E339562DB73EB8ED334558B0CDEF0EAD21D9784_RuntimeMethod_var)));
	}
}
// System.Object Vuforia.UnityRuntimeCompiled.OpenSourceARFoundationFacade/<WaitForCameraReady>d__22::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForCameraReadyU3Ed__22_System_Collections_IEnumerator_get_Current_m1C341146D2C1E6923EECEDF71FEB02F69AFD37F4 (U3CWaitForCameraReadyU3Ed__22_tA4BE56875445D83B986D8AB04FBC0C0608175827 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// Vuforia.UnityRuntimeCompiled.IUnityRenderPipeline Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/OpenSourceUnityRuntimeCompiledFacade::get_UnityRenderPipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OpenSourceUnityRuntimeCompiledFacade_get_UnityRenderPipeline_m4BD1D71663E3B6736146604C5D7A89614B939A07 (OpenSourceUnityRuntimeCompiledFacade_tE074BC03139BA8588825A6DE47CB2C59AFFFC38F * __this, const RuntimeMethod* method)
{
	{
		// get { return mUnityRenderPipeline; }
		RuntimeObject* L_0 = __this->get_mUnityRenderPipeline_0();
		return L_0;
	}
}
// Vuforia.UnityRuntimeCompiled.IUnityXRBridge Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/OpenSourceUnityRuntimeCompiledFacade::get_UnityXRBridge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OpenSourceUnityRuntimeCompiledFacade_get_UnityXRBridge_mF07E783EC354622AC79D120B666F7FFD3C978632 (OpenSourceUnityRuntimeCompiledFacade_tE074BC03139BA8588825A6DE47CB2C59AFFFC38F * __this, const RuntimeMethod* method)
{
	{
		// get { return mUnityXRBridge; }
		RuntimeObject* L_0 = __this->get_mUnityXRBridge_1();
		return L_0;
	}
}
// System.Boolean Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/OpenSourceUnityRuntimeCompiledFacade::IsUnityUICurrentlySelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenSourceUnityRuntimeCompiledFacade_IsUnityUICurrentlySelected_m73A966EADFFD986F1D11E0B2528214D1C23A9226 (OpenSourceUnityRuntimeCompiledFacade_tE074BC03139BA8588825A6DE47CB2C59AFFFC38F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return !(EventSystem.current == null || EventSystem.current.currentSelectedGameObject == null);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_0;
		L_0 = EventSystem_get_current_m6DCD04BC8A3C673A2961DB3BC373EDC0BEAD8251(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_2;
		L_2 = EventSystem_get_current_m6DCD04BC8A3C673A2961DB3BC373EDC0BEAD8251(/*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}

IL_0021:
	{
		return (bool)0;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/OpenSourceUnityRuntimeCompiledFacade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenSourceUnityRuntimeCompiledFacade__ctor_m91F556BC59D8ED10086A231A9820907EDB1E17EE (OpenSourceUnityRuntimeCompiledFacade_tE074BC03139BA8588825A6DE47CB2C59AFFFC38F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityRenderPipeline_tD91000EBC3823B7CC5DC4CB6715BE0D4385A9D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityXRBridge_tA49745BF2B04A3DA05BC13E762241A6D60E502B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly IUnityRenderPipeline mUnityRenderPipeline = new UnityRenderPipeline();
		UnityRenderPipeline_tD91000EBC3823B7CC5DC4CB6715BE0D4385A9D92 * L_0 = (UnityRenderPipeline_tD91000EBC3823B7CC5DC4CB6715BE0D4385A9D92 *)il2cpp_codegen_object_new(UnityRenderPipeline_tD91000EBC3823B7CC5DC4CB6715BE0D4385A9D92_il2cpp_TypeInfo_var);
		UnityRenderPipeline__ctor_m684A26D3F42152FCFE9DF4CB658F74E31B3FCB28(L_0, /*hidden argument*/NULL);
		__this->set_mUnityRenderPipeline_0(L_0);
		// readonly IUnityXRBridge mUnityXRBridge = new UnityXRBridge();
		UnityXRBridge_tA49745BF2B04A3DA05BC13E762241A6D60E502B3 * L_1 = (UnityXRBridge_tA49745BF2B04A3DA05BC13E762241A6D60E502B3 *)il2cpp_codegen_object_new(UnityXRBridge_tA49745BF2B04A3DA05BC13E762241A6D60E502B3_il2cpp_TypeInfo_var);
		UnityXRBridge__ctor_mA879EF94911A6F4562D450FB4BE23A7533527E70(L_1, /*hidden argument*/NULL);
		__this->set_mUnityXRBridge_1(L_1);
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
// System.Void Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/UnityRenderPipeline::add_BeginFrameRendering(System.Action`1<UnityEngine.Camera[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRenderPipeline_add_BeginFrameRendering_m4F0721ADD9A3DF683A3B7ABBC52ABD8CED9762B8 (UnityRenderPipeline_tD91000EBC3823B7CC5DC4CB6715BE0D4385A9D92 * __this, Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * V_0 = NULL;
	Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * V_1 = NULL;
	Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * V_2 = NULL;
	{
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_0 = __this->get_BeginFrameRendering_0();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_2 = V_1;
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806_il2cpp_TypeInfo_var));
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 ** L_5 = __this->get_address_of_BeginFrameRendering_0();
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_6 = V_2;
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_7 = V_1;
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 *>((Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_9 = V_0;
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 *)L_9) == ((RuntimeObject*)(Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/UnityRenderPipeline::remove_BeginFrameRendering(System.Action`1<UnityEngine.Camera[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRenderPipeline_remove_BeginFrameRendering_m8F2C5AA82CB02BE7F0E099859671C5D12CA2733F (UnityRenderPipeline_tD91000EBC3823B7CC5DC4CB6715BE0D4385A9D92 * __this, Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * V_0 = NULL;
	Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * V_1 = NULL;
	Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * V_2 = NULL;
	{
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_0 = __this->get_BeginFrameRendering_0();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_2 = V_1;
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806_il2cpp_TypeInfo_var));
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 ** L_5 = __this->get_address_of_BeginFrameRendering_0();
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_6 = V_2;
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_7 = V_1;
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 *>((Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_9 = V_0;
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 *)L_9) == ((RuntimeObject*)(Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/UnityRenderPipeline::add_BeginCameraRendering(System.Action`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRenderPipeline_add_BeginCameraRendering_m2570FF3D952EAAC2B43038414D63C2011767A08A (UnityRenderPipeline_tD91000EBC3823B7CC5DC4CB6715BE0D4385A9D92 * __this, Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_0 = NULL;
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_1 = NULL;
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_2 = NULL;
	{
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_0 = __this->get_BeginCameraRendering_1();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_1 = V_0;
		V_1 = L_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_2 = V_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)CastclassSealed((RuntimeObject*)L_4, Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B_il2cpp_TypeInfo_var));
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B ** L_5 = __this->get_address_of_BeginCameraRendering_1();
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_6 = V_2;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_7 = V_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *>((Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_9 = V_0;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)L_9) == ((RuntimeObject*)(Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/UnityRenderPipeline::remove_BeginCameraRendering(System.Action`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRenderPipeline_remove_BeginCameraRendering_m438DD3090C8A4E65423990D4B11B0FE2B165AF4E (UnityRenderPipeline_tD91000EBC3823B7CC5DC4CB6715BE0D4385A9D92 * __this, Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_0 = NULL;
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_1 = NULL;
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_2 = NULL;
	{
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_0 = __this->get_BeginCameraRendering_1();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_1 = V_0;
		V_1 = L_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_2 = V_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)CastclassSealed((RuntimeObject*)L_4, Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B_il2cpp_TypeInfo_var));
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B ** L_5 = __this->get_address_of_BeginCameraRendering_1();
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_6 = V_2;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_7 = V_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *>((Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_9 = V_0;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)L_9) == ((RuntimeObject*)(Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/UnityRenderPipeline::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRenderPipeline__ctor_m684A26D3F42152FCFE9DF4CB658F74E31B3FCB28 (UnityRenderPipeline_tD91000EBC3823B7CC5DC4CB6715BE0D4385A9D92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_m6F6D5728CA998380E3EE5E8158E4A6DA971151BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_mEF529AE864C800525173EADF5CE7772B9BEDBBA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t254D87D7CB5E1987005531FFF30ED1CA3AEDECCE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t891744C0325329F7FA7C64614C0E3DFF13284AF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityRenderPipeline_OnBeginCameraRendering_m6A127602BAB148B6C5F87A5800ADE1C6651A2E46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityRenderPipeline_OnBeginFrameRendering_mF99D5993E32563ADDDE346C0A70AE2A637211507_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnityRenderPipeline()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// UnityEngine.Rendering.RenderPipelineManager.beginFrameRendering += OnBeginFrameRendering;
		Action_2_t254D87D7CB5E1987005531FFF30ED1CA3AEDECCE * L_0 = (Action_2_t254D87D7CB5E1987005531FFF30ED1CA3AEDECCE *)il2cpp_codegen_object_new(Action_2_t254D87D7CB5E1987005531FFF30ED1CA3AEDECCE_il2cpp_TypeInfo_var);
		Action_2__ctor_m6F6D5728CA998380E3EE5E8158E4A6DA971151BD(L_0, __this, (intptr_t)((intptr_t)UnityRenderPipeline_OnBeginFrameRendering_mF99D5993E32563ADDDE346C0A70AE2A637211507_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m6F6D5728CA998380E3EE5E8158E4A6DA971151BD_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(RenderPipelineManager_t891744C0325329F7FA7C64614C0E3DFF13284AF1_il2cpp_TypeInfo_var);
		RenderPipelineManager_add_beginFrameRendering_m849D38DE4272F52FD44B5C3CCCBB89D035317BA2(L_0, /*hidden argument*/NULL);
		// UnityEngine.Rendering.RenderPipelineManager.beginCameraRendering += OnBeginCameraRendering;
		Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA * L_1 = (Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA *)il2cpp_codegen_object_new(Action_2_t9444326B9F179A6814807A6942C9A6086471ABDA_il2cpp_TypeInfo_var);
		Action_2__ctor_mEF529AE864C800525173EADF5CE7772B9BEDBBA9(L_1, __this, (intptr_t)((intptr_t)UnityRenderPipeline_OnBeginCameraRendering_m6A127602BAB148B6C5F87A5800ADE1C6651A2E46_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mEF529AE864C800525173EADF5CE7772B9BEDBBA9_RuntimeMethod_var);
		RenderPipelineManager_add_beginCameraRendering_m24BC94B109B70AEC0F71183217EF4BCF35DE6126(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/UnityRenderPipeline::OnBeginCameraRendering(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRenderPipeline_OnBeginCameraRendering_m6A127602BAB148B6C5F87A5800ADE1C6651A2E46 (UnityRenderPipeline_tD91000EBC3823B7CC5DC4CB6715BE0D4385A9D92 * __this, ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D  ___context0, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mD46448B64FD6241AEBDC58583AABC7AB91A9B136_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BeginCameraRendering != null)
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_0 = __this->get_BeginCameraRendering_1();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// BeginCameraRendering(camera);
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_1 = __this->get_BeginCameraRendering_1();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = ___camera1;
		NullCheck(L_1);
		Action_1_Invoke_mD46448B64FD6241AEBDC58583AABC7AB91A9B136(L_1, L_2, /*hidden argument*/Action_1_Invoke_mD46448B64FD6241AEBDC58583AABC7AB91A9B136_RuntimeMethod_var);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/UnityRenderPipeline::OnBeginFrameRendering(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRenderPipeline_OnBeginFrameRendering_mF99D5993E32563ADDDE346C0A70AE2A637211507 (UnityRenderPipeline_tD91000EBC3823B7CC5DC4CB6715BE0D4385A9D92 * __this, ScriptableRenderContext_tEDDDFFA7401E6860E1D82DFD779B7A101939F52D  ___context0, CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* ___cameras1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mFB24D520F13D2DF268DBB1349007BA6377CC4696_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BeginFrameRendering != null)
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_0 = __this->get_BeginFrameRendering_0();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// BeginFrameRendering(cameras);
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_1 = __this->get_BeginFrameRendering_0();
		CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* L_2 = ___cameras1;
		NullCheck(L_1);
		Action_1_Invoke_mFB24D520F13D2DF268DBB1349007BA6377CC4696(L_1, L_2, /*hidden argument*/Action_1_Invoke_mFB24D520F13D2DF268DBB1349007BA6377CC4696_RuntimeMethod_var);
	}

IL_0014:
	{
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
// System.Void Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/UnityXRBridge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityXRBridge__ctor_mA879EF94911A6F4562D450FB4BE23A7533527E70 (UnityXRBridge_tA49745BF2B04A3DA05BC13E762241A6D60E502B3 * __this, const RuntimeMethod* method)
{
	{
		// public UnityXRBridge()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// RegisterCallbacks();
		UnityXRBridge_RegisterCallbacks_m79C353A9698876C9CB3C083CE2DC1A86B511F024(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/UnityXRBridge::RegisterCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityXRBridge_RegisterCallbacks_m79C353A9698876C9CB3C083CE2DC1A86B511F024 (UnityXRBridge_tA49745BF2B04A3DA05BC13E762241A6D60E502B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m705060AE3718C585E53BCFEE31DF0B4FFF3DA3E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityXRBridge_TrackingOriginUpdated_mDF16C4694398CDA23873856F43C22128173AB6D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_GetLoadedSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_mC98D5F7030C574A69D86EA429F90CF769106A5EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var xrSettings = XRGeneralSettings.Instance;
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_0;
		L_0 = XRGeneralSettings_get_Instance_mC714587778971DCD3EBECF8FC23741ED9A7A23BE_inline(/*hidden argument*/NULL);
		// var xrManager = xrSettings.Manager;
		NullCheck(L_0);
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_1;
		L_1 = XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline(L_0, /*hidden argument*/NULL);
		// var xrLoader = xrManager.activeLoader;
		NullCheck(L_1);
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_2;
		L_2 = XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline(L_1, /*hidden argument*/NULL);
		// var xrInput = xrLoader.GetLoadedSubsystem<XRInputSubsystem>();
		NullCheck(L_2);
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_3;
		L_3 = GenericVirtFuncInvoker0< XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * >::Invoke(XRLoader_GetLoadedSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_mC98D5F7030C574A69D86EA429F90CF769106A5EB_RuntimeMethod_var, L_2);
		// xrInput.trackingOriginUpdated += TrackingOriginUpdated;
		Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * L_4 = (Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 *)il2cpp_codegen_object_new(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1_il2cpp_TypeInfo_var);
		Action_1__ctor_m705060AE3718C585E53BCFEE31DF0B4FFF3DA3E9(L_4, __this, (intptr_t)((intptr_t)UnityXRBridge_TrackingOriginUpdated_mDF16C4694398CDA23873856F43C22128173AB6D6_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m705060AE3718C585E53BCFEE31DF0B4FFF3DA3E9_RuntimeMethod_var);
		NullCheck(L_3);
		XRInputSubsystem_add_trackingOriginUpdated_m8CD3F07F66759D7752621C40ED304E6782482392(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/UnityXRBridge::add_OnTrackingOriginUpdated(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityXRBridge_add_OnTrackingOriginUpdated_mBD099494AC07E66611714D77F5832CC240B77F81 (UnityXRBridge_tA49745BF2B04A3DA05BC13E762241A6D60E502B3 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnTrackingOriginUpdated_0();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnTrackingOriginUpdated_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/UnityXRBridge::remove_OnTrackingOriginUpdated(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityXRBridge_remove_OnTrackingOriginUpdated_mD23D86E66FD4DBEE1C3691A914B144D47D6677D4 (UnityXRBridge_tA49745BF2B04A3DA05BC13E762241A6D60E502B3 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnTrackingOriginUpdated_0();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnTrackingOriginUpdated_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/UnityXRBridge::IsOpenXREnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityXRBridge_IsOpenXREnabled_m5802B6EB2CF97ED94CD5AAEB1D236DB084611326 (UnityXRBridge_tA49745BF2B04A3DA05BC13E762241A6D60E502B3 * __this, const RuntimeMethod* method)
{
	{
		// return true;
		return (bool)1;
	}
}
// System.IntPtr Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/UnityXRBridge::GetHoloLensSpatialCoordinateSystemPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnityXRBridge_GetHoloLensSpatialCoordinateSystemPtr_mE68123D7127DF860510DD9468200F40B84C59C1B (UnityXRBridge_tA49745BF2B04A3DA05BC13E762241A6D60E502B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		// var sceneCoordinateSystem = PerceptionInterop.GetSceneCoordinateSystem(Pose.identity);
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0;
		L_0 = Pose_get_identity_m48C568C5B6D5507D8D7B6E7C8EE7345A16E3F300(/*hidden argument*/NULL);
		RuntimeObject * L_1;
		L_1 = PerceptionInterop_GetSceneCoordinateSystem_m7EFA2071F938B105562E7B8C93BB8985A287DBB1(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (sceneCoordinateSystem == null)
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return IntPtr.Zero;
		return (intptr_t)(0);
	}

IL_0014:
	{
		// return Marshal.GetIUnknownForObject(sceneCoordinateSystem);
		RuntimeObject * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = il2cpp_codegen_com_get_iunknown_for_object(L_3);
		return (intptr_t)L_4;
	}
}
// System.Boolean Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/UnityXRBridge::IsHolographicDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityXRBridge_IsHolographicDevice_m93CE9AD42BB73C9D55C2411209BB85C53E98711B (UnityXRBridge_tA49745BF2B04A3DA05BC13E762241A6D60E502B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF98E94CA63C7309AE46544DA6B2804EFE518C8A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4244B9178131B00687921873F8FFBADB5EADC39C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCE1EB51F59866B742F01AF4A4AF6AE22CEFD0A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB1C8C1C02F0AE282A7FE5944B393195661E48D1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD6C183C6DD1054B1C06CBB9E96AFC778A0A5CBF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t56455D217921470E52E7D33A1794256E31084DD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetInstances_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7815329E7014FDE1DE442AF3F320E30E685A3880_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828  V_0;
	memset((&V_0), 0, sizeof(V_0));
	XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// var xrDisplaySubsystems = new List<XRDisplaySubsystem>();
		List_1_t56455D217921470E52E7D33A1794256E31084DD8 * L_0 = (List_1_t56455D217921470E52E7D33A1794256E31084DD8 *)il2cpp_codegen_object_new(List_1_t56455D217921470E52E7D33A1794256E31084DD8_il2cpp_TypeInfo_var);
		List_1__ctor_mD6C183C6DD1054B1C06CBB9E96AFC778A0A5CBF4(L_0, /*hidden argument*/List_1__ctor_mD6C183C6DD1054B1C06CBB9E96AFC778A0A5CBF4_RuntimeMethod_var);
		// SubsystemManager.GetInstances(xrDisplaySubsystems);
		List_1_t56455D217921470E52E7D33A1794256E31084DD8 * L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7815329E7014FDE1DE442AF3F320E30E685A3880(L_1, /*hidden argument*/SubsystemManager_GetInstances_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7815329E7014FDE1DE442AF3F320E30E685A3880_RuntimeMethod_var);
		// foreach (var xrDisplay in xrDisplaySubsystems)
		NullCheck(L_1);
		Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828  L_2;
		L_2 = List_1_GetEnumerator_mB1C8C1C02F0AE282A7FE5944B393195661E48D1D(L_1, /*hidden argument*/List_1_GetEnumerator_mB1C8C1C02F0AE282A7FE5944B393195661E48D1D_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002f;
		}

IL_0013:
		{
			// foreach (var xrDisplay in xrDisplaySubsystems)
			XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_3;
			L_3 = Enumerator_get_Current_mCE1EB51F59866B742F01AF4A4AF6AE22CEFD0A29_inline((Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mCE1EB51F59866B742F01AF4A4AF6AE22CEFD0A29_RuntimeMethod_var);
			V_1 = L_3;
			// if (xrDisplay.running && !xrDisplay.displayOpaque)
			XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_4 = V_1;
			NullCheck(L_4);
			bool L_5;
			L_5 = IntegratedSubsystem_get_running_m3C6870588AA0F9816A3947F045BCB8F5662A9EC2(L_4, /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_002f;
			}
		}

IL_0023:
		{
			XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_6 = V_1;
			NullCheck(L_6);
			bool L_7;
			L_7 = XRDisplaySubsystem_get_displayOpaque_m2EC8ECB705E0F250C8D27E06BF4C57D5F77FC02F(L_6, /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_002f;
			}
		}

IL_002b:
		{
			// return true;
			V_2 = (bool)1;
			IL2CPP_LEAVE(0x4A, FINALLY_003a);
		}

IL_002f:
		{
			// foreach (var xrDisplay in xrDisplaySubsystems)
			bool L_8;
			L_8 = Enumerator_MoveNext_m4244B9178131B00687921873F8FFBADB5EADC39C((Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m4244B9178131B00687921873F8FFBADB5EADC39C_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0013;
			}
		}

IL_0038:
		{
			IL2CPP_LEAVE(0x48, FINALLY_003a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mF98E94CA63C7309AE46544DA6B2804EFE518C8A5((Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mF98E94CA63C7309AE46544DA6B2804EFE518C8A5_RuntimeMethod_var);
		IL2CPP_END_FINALLY(58)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
		IL2CPP_JUMP_TBL(0x48, IL_0048)
	}

IL_0048:
	{
		// return false;
		return (bool)0;
	}

IL_004a:
	{
		// }
		bool L_9 = V_2;
		return L_9;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/UnityXRBridge::SetFocusPointForFrame(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityXRBridge_SetFocusPointForFrame_m1708866C77FFCC4FA00245FD8E96FF1B958195DE (UnityXRBridge_tA49745BF2B04A3DA05BC13E762241A6D60E502B3 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF98E94CA63C7309AE46544DA6B2804EFE518C8A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4244B9178131B00687921873F8FFBADB5EADC39C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCE1EB51F59866B742F01AF4A4AF6AE22CEFD0A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB1C8C1C02F0AE282A7FE5944B393195661E48D1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD6C183C6DD1054B1C06CBB9E96AFC778A0A5CBF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t56455D217921470E52E7D33A1794256E31084DD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetInstances_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7815329E7014FDE1DE442AF3F320E30E685A3880_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828  V_0;
	memset((&V_0), 0, sizeof(V_0));
	XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// var xrDisplaySubsystems = new List<XRDisplaySubsystem>();
		List_1_t56455D217921470E52E7D33A1794256E31084DD8 * L_0 = (List_1_t56455D217921470E52E7D33A1794256E31084DD8 *)il2cpp_codegen_object_new(List_1_t56455D217921470E52E7D33A1794256E31084DD8_il2cpp_TypeInfo_var);
		List_1__ctor_mD6C183C6DD1054B1C06CBB9E96AFC778A0A5CBF4(L_0, /*hidden argument*/List_1__ctor_mD6C183C6DD1054B1C06CBB9E96AFC778A0A5CBF4_RuntimeMethod_var);
		// SubsystemManager.GetInstances(xrDisplaySubsystems);
		List_1_t56455D217921470E52E7D33A1794256E31084DD8 * L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7815329E7014FDE1DE442AF3F320E30E685A3880(L_1, /*hidden argument*/SubsystemManager_GetInstances_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7815329E7014FDE1DE442AF3F320E30E685A3880_RuntimeMethod_var);
		// foreach (var xrDisplay in xrDisplaySubsystems)
		NullCheck(L_1);
		Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828  L_2;
		L_2 = List_1_GetEnumerator_mB1C8C1C02F0AE282A7FE5944B393195661E48D1D(L_1, /*hidden argument*/List_1_GetEnumerator_mB1C8C1C02F0AE282A7FE5944B393195661E48D1D_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003a;
		}

IL_0013:
		{
			// foreach (var xrDisplay in xrDisplaySubsystems)
			XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_3;
			L_3 = Enumerator_get_Current_mCE1EB51F59866B742F01AF4A4AF6AE22CEFD0A29_inline((Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mCE1EB51F59866B742F01AF4A4AF6AE22CEFD0A29_RuntimeMethod_var);
			V_1 = L_3;
			// if (xrDisplay.running && !xrDisplay.displayOpaque)
			XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_4 = V_1;
			NullCheck(L_4);
			bool L_5;
			L_5 = IntegratedSubsystem_get_running_m3C6870588AA0F9816A3947F045BCB8F5662A9EC2(L_4, /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_003a;
			}
		}

IL_0023:
		{
			XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_6 = V_1;
			NullCheck(L_6);
			bool L_7;
			L_7 = XRDisplaySubsystem_get_displayOpaque_m2EC8ECB705E0F250C8D27E06BF4C57D5F77FC02F(L_6, /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_003a;
			}
		}

IL_002b:
		{
			// xrDisplay.SetFocusPlane(position, normal, Vector3.zero);
			XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_8 = V_1;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___position0;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___normal1;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
			L_11 = Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6(/*hidden argument*/NULL);
			NullCheck(L_8);
			XRDisplaySubsystem_SetFocusPlane_m7ACEC78049F199ED2A3CB0ED1A82962A7A319157(L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
			// return;
			IL2CPP_LEAVE(0x53, FINALLY_0045);
		}

IL_003a:
		{
			// foreach (var xrDisplay in xrDisplaySubsystems)
			bool L_12;
			L_12 = Enumerator_MoveNext_m4244B9178131B00687921873F8FFBADB5EADC39C((Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m4244B9178131B00687921873F8FFBADB5EADC39C_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0013;
			}
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x53, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mF98E94CA63C7309AE46544DA6B2804EFE518C8A5((Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mF98E94CA63C7309AE46544DA6B2804EFE518C8A5_RuntimeMethod_var);
		IL2CPP_END_FINALLY(69)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x53, IL_0053)
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.RuntimeOpenSourceInitializer/UnityXRBridge::TrackingOriginUpdated(UnityEngine.XR.XRInputSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityXRBridge_TrackingOriginUpdated_mDF16C4694398CDA23873856F43C22128173AB6D6 (UnityXRBridge_tA49745BF2B04A3DA05BC13E762241A6D60E502B3 * __this, XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * ___inputSubsystem0, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// OnTrackingOriginUpdated?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnTrackingOriginUpdated_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARFoundationFacade_set_Instance_mC94EDA640C3D11D269067A94381F4DCCEB67C2C7_inline (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFoundationFacade_t25F6D0A60217FDB54EB918477BE3D742A0EC874F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(ARFoundationFacade_t25F6D0A60217FDB54EB918477BE3D742A0EC874F_il2cpp_TypeInfo_var);
		((ARFoundationFacade_t25F6D0A60217FDB54EB918477BE3D742A0EC874F_StaticFields*)il2cpp_codegen_static_fields_for(ARFoundationFacade_t25F6D0A60217FDB54EB918477BE3D742A0EC874F_il2cpp_TypeInfo_var))->set_sInstance_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetErrorOccurred_m13800AE31C02CD82EE11E13D39D1F93ED9F81ADA_inline (DefaultInitializationErrorHandler_tFBA569E354DBCE9B7B7F4A60B3554F7FC7B33D16 * __this, bool ___errorOccurred0, const RuntimeMethod* method)
{
	{
		// mErrorOccurred = errorOccurred;
		bool L_0 = ___errorOccurred0;
		__this->set_mErrorOccurred_5(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * VuforiaConfiguration_get_Vuforia_m25E6CB6560AD0F1B74BA9572D9020C6889E983DD_inline (VuforiaConfiguration_tD9B249335070DBFF290D1B3ED05D245874C2A4B4 * __this, const RuntimeMethod* method)
{
	{
		GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * L_0 = __this->get_vuforia_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GenericVuforiaConfiguration_get_LicenseKey_m8AA6D2ECB5A580D638BD35D85C6D493E1733FA32_inline (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_vuforiaLicenseKey_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  ObserverBehaviour_get_TargetStatus_m9F21B240F06DA71ED4613EB3A99ADA6E1942A499_inline (ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * __this, const RuntimeMethod* method)
{
	{
		TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  L_0 = __this->get_U3CTargetStatusU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR World_tD34189E7DB459CEB10A1D3C0D7C94B25197AD14F * VuforiaBehaviour_get_World_mC71DDE046F81C181091466CDF791EE76EB0582A1_inline (VuforiaBehaviour_t6114F20D1970225E083A4FBAFB269FA524FEF407 * __this, const RuntimeMethod* method)
{
	{
		World_tD34189E7DB459CEB10A1D3C0D7C94B25197AD14F * L_0 = __this->get_U3CWorldU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ObserverBehaviour_get_TargetName_m66DAA89D2597636EED4EDD92F1C05167CDB688AD_inline (ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mTrackableName_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VuMarkBehaviour_get_InstanceId_m73EF1F9F535AFC24A86D86EEDB775D5E81BD132D_inline (VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CInstanceIdU3Ek__BackingField_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TargetStatus_get_Status_mD745DEB3CFE4D18A1E973178AA8CA9BB73178D5E_inline (TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStatusU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TargetStatus_get_StatusInfo_m45D7AFC8563C8FCEA15B0E2983F59E8C88A37B9D_inline (TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStatusInfoU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VuforiaBehaviour_get_WorldCenterMode_mE0CB269C2A317EBEF02FE53240A456D609CFF35C_inline (VuforiaBehaviour_t6114F20D1970225E083A4FBAFB269FA524FEF407 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mWorldCenterMode_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_state_mD422F6EFE9346D0D7056D6A11F17F70D09ED3FD9_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => s_State;
		int32_t L_0 = ((ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_il2cpp_TypeInfo_var))->get_s_State_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double XRCpuImage_get_timestamp_m34F30EFB534A322FA98B397C590665FF561F91C4_inline (XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE * __this, const RuntimeMethod* method)
{
	{
		// public double timestamp { get; private set; }
		double L_0 = __this->get_U3CtimestampU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  XRCpuImage_get_dimensions_m1A176BDB3319F09F3AF628AB17C126B62929A2A5_inline (XRCpuImage_tA48C0687D95D3D63D1101E4E08EFCF0ABB2431CE * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Int dimensions { get; private set; }
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0 = __this->get_U3CdimensionsU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  Plane_get_data_mBA1EB2437E816B19D7A68440AE188F4E8543E108_inline (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<byte> data { get; internal set; }
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_0 = __this->get_U3CdataU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Plane_get_rowStride_mE6385B9F7D9D040FC613D16D859435F492CB213A_inline (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, const RuntimeMethod* method)
{
	{
		// public int rowStride { get; internal set; }
		int32_t L_0 = __this->get_U3CrowStrideU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Plane_get_pixelStride_m33EEE46027B124683ABAF3BC627812F963F29665_inline (Plane_tF421A9F250A5E61AFEE38069538AC8ECB9D3E22D * __this, const RuntimeMethod* method)
{
	{
		// public int pixelStride { get; internal set; }
		int32_t L_0 = __this->get_U3CpixelStrideU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  XRCameraIntrinsics_get_principalPoint_mFDE68368CC682F57C69EF8EC7BE93E6F678313C5_inline (XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 principalPoint => m_PrincipalPoint;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_m_PrincipalPoint_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  XRCameraIntrinsics_get_focalLength_mBFAD4537EDDFB29C2BBC75FA4E501CB96201BB67_inline (XRCameraIntrinsics_t85F1514E263A6C6DE96DBA5448B44F11F35395FD * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 focalLength => m_FocalLength;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_m_FocalLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * ARAnchorsChangedEventArgs_get_removed_m3DA7093629E8D772C2732299D5F612B1357F6D08_inline (ARAnchorsChangedEventArgs_tD1D6CD5187F2B16BADA979200B333341991FAAC6 * __this, const RuntimeMethod* method)
{
	{
		// public List<ARAnchor> removed { get; private set; }
		List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * L_0 = __this->get_U3CremovedU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * ARAnchorsChangedEventArgs_get_updated_m87B120B079D1B9FF8C9F1E305672BD6F741AC7DF_inline (ARAnchorsChangedEventArgs_tD1D6CD5187F2B16BADA979200B333341991FAAC6 * __this, const RuntimeMethod* method)
{
	{
		// public List<ARAnchor> updated { get; private set; }
		List_1_tCA9691E8D81D5FDD37C8E6462236E3D4ADB638B9 * L_0 = __this->get_U3CupdatedU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SubsystemWithProvider_get_running_m42399652EC4AB466AFBAC9035FA77C1BD6C72406_inline (SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CrunningU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityRuntimeCompiledFacade_set_Instance_m4ACF102049531812B19C5784EF11DBF0B5638F1A_inline (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityRuntimeCompiledFacade_t9141C0D0C0C28E2F8DFB31E1EB39CC2C71A5732E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		((UnityRuntimeCompiledFacade_t9141C0D0C0C28E2F8DFB31E1EB39CC2C71A5732E_StaticFields*)il2cpp_codegen_static_fields_for(UnityRuntimeCompiledFacade_t9141C0D0C0C28E2F8DFB31E1EB39CC2C71A5732E_il2cpp_TypeInfo_var))->set_sInstance_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PoseLerp_set_Complete_m1119BBFED40660F71426E549B171C22EA530A50C_inline (PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Complete { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CCompleteU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m5E223DB365EAC8F6625C169E927527FFB8CC88DB_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m831CBA1D198C3CDE660E8172A67A4E41BD0D0171(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PoseLerp_get_Complete_m0E197959F102F20548B6874AEA365012BEB2DC95_inline (PoseLerp_t157D8EFE681B92FC64AEB54B20ABACCF17E56328 * __this, const RuntimeMethod* method)
{
	{
		// public bool Complete { get; private set; }
		bool L_0 = __this->get_U3CCompleteU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_mF24598FCCA1D06E65CA6DAFF4F0F6E1667336722_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
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
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_mFB9023288188C7A19F1CE3F621E2B56848352523_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___vector0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___vector0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___vector0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___vector0;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___vector0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___vector0;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_mEA1C953F5FD3D678F6B85781BD14D4C67F66CE0B_inline (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = ___a0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = ___b1;
		float L_2;
		L_2 = Quaternion_Dot_mEF84D4F1A9E683C80B53E4EB1859EF95E63FBACC(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = V_0;
		bool L_4;
		L_4 = Quaternion_IsEqualUsingDot_m526621897D9ACC31E7B8747D942A59925E3A9AFC(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		float L_5 = V_0;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Min_m2685AF38FD5B92F51F6A07F4B770DF34F4A53FE6(L_6, (1.0f), /*hidden argument*/NULL);
		float L_8;
		L_8 = acosf(L_7);
		G_B3_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_8, (float)(2.0f))), (float)(57.2957802f)));
		goto IL_0039;
	}

IL_0034:
	{
		G_B3_0 = (0.0f);
	}

IL_0039:
	{
		V_1 = G_B3_0;
		goto IL_003c;
	}

IL_003c:
	{
		float L_9 = V_1;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, const RuntimeMethod* method)
{
	{
		// get { return m_CurrentSelected; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_CurrentSelected_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * XRGeneralSettings_get_Instance_mC714587778971DCD3EBECF8FC23741ED9A7A23BE_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_RuntimeSettingsInstance;
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var);
		XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * L_0 = ((XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042_il2cpp_TypeInfo_var))->get_s_RuntimeSettingsInstance_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * XRGeneralSettings_get_Manager_m5E4819323E32CA8E97058B8ED282558779099544_inline (XRGeneralSettings_t32A12852D8662239F55902E9FD6A299201C04042 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_LoaderManagerInstance; }
		XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * L_0 = __this->get_m_LoaderManagerInstance_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	{
		// public XRLoader activeLoader { get; private set; }
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_0 = __this->get_U3CactiveLoaderU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD8E0C85C96E8F68E55600773D64912BF77F68545_gshared_inline (Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  Nullable_1_GetValueOrDefault_mE1F110F3C76C59DF1376A23841ADA9E9970B97D8_gshared_inline (Nullable_1_t661141E668063C73311C9DF09B3AE945EA9A1D8C * __this, const RuntimeMethod* method)
{
	{
		XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  L_0 = (XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A )__this->get_value_0();
		return (XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_3_get_subsystem_m50CDB488C754452B0104C6EC4DAC7D0A85A43F61_gshared_inline (SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1 * __this, const RuntimeMethod* method)
{
	{
		// public TSubsystem subsystem { get; private set; }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CsubsystemU3Ek__BackingField_4();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
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
