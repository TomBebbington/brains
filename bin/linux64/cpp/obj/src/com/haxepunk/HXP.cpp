#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_Engine
#include <com/haxepunk/Engine.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tween
#include <com/haxepunk/Tween.h>
#endif
#ifndef INCLUDED_com_haxepunk_TweenType
#include <com/haxepunk/TweenType.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_Console
#include <com/haxepunk/debug/Console.h>
#endif
#ifndef INCLUDED_com_haxepunk_tweens_misc_Alarm
#include <com/haxepunk/tweens/misc/Alarm.h>
#endif
#ifndef INCLUDED_com_haxepunk_tweens_misc_MultiVarTween
#include <com/haxepunk/tweens/misc/MultiVarTween.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_display_StageDisplayState
#include <flash/display/StageDisplayState.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_media_SoundTransform
#include <flash/media/SoundTransform.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace com{
namespace haxepunk{

Void HXP_obj::__construct()
{
	return null();
}

HXP_obj::~HXP_obj() { }

Dynamic HXP_obj::__CreateEmpty() { return  new HXP_obj; }
hx::ObjectPtr< HXP_obj > HXP_obj::__new()
{  hx::ObjectPtr< HXP_obj > result = new HXP_obj();
	result->__construct();
	return result;}

Dynamic HXP_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HXP_obj > result = new HXP_obj();
	result->__construct();
	return result;}

Float HXP_obj::get_NUMBER_MAX_VALUE( ){
	HX_STACK_FRAME("HXP","get_NUMBER_MAX_VALUE","HXP.get_NUMBER_MAX_VALUE","com/haxepunk/HXP.hx",58)
	HX_STACK_LINE(58)
	return ((int)179 * ::Math_obj::pow((int)10,(int)306));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_NUMBER_MAX_VALUE,return )

int HXP_obj::width;

int HXP_obj::height;

int HXP_obj::windowWidth;

int HXP_obj::windowHeight;

bool HXP_obj::fixed;

Float HXP_obj::frameRate;

Float HXP_obj::assignedFrameRate;

Float HXP_obj::elapsed;

Float HXP_obj::rate;

::com::haxepunk::Screen HXP_obj::screen;

::flash::display::BitmapData HXP_obj::buffer;

::flash::geom::Rectangle HXP_obj::bounds;

::String HXP_obj::defaultFont;

::flash::geom::Point HXP_obj::camera;

::com::haxepunk::Tweener HXP_obj::tweener;

bool HXP_obj::focused;

Float HXP_obj::halfWidth;

Float HXP_obj::halfHeight;

int HXP_obj::renderMode;

Array< int > HXP_obj::orientations;

::com::haxepunk::Scene HXP_obj::get_world( ){
	HX_STACK_FRAME("HXP","get_world","HXP.get_world","com/haxepunk/HXP.hx",188)
	HX_STACK_LINE(189)
	::com::haxepunk::HXP_obj::log(HX_CSTRING("HXP.world is deprecated, please use HXP.scene instead"));
	HX_STACK_LINE(190)
	return ::com::haxepunk::HXP_obj::_scene;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_world,return )

::com::haxepunk::Scene HXP_obj::set_world( ::com::haxepunk::Scene value){
	HX_STACK_FRAME("HXP","set_world","HXP.set_world","com/haxepunk/HXP.hx",193)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(194)
	::com::haxepunk::HXP_obj::log(HX_CSTRING("HXP.world is deprecated, please use HXP.scene instead"));
	HX_STACK_LINE(195)
	return ::com::haxepunk::HXP_obj::set_scene(value);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_world,return )

::com::haxepunk::Scene HXP_obj::get_scene( ){
	HX_STACK_FRAME("HXP","get_scene","HXP.get_scene","com/haxepunk/HXP.hx",203)
	HX_STACK_LINE(203)
	return ::com::haxepunk::HXP_obj::_scene;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_scene,return )

::com::haxepunk::Scene HXP_obj::set_scene( ::com::haxepunk::Scene value){
	HX_STACK_FRAME("HXP","set_scene","HXP.set_scene","com/haxepunk/HXP.hx",205)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(206)
	if (((::com::haxepunk::HXP_obj::_scene == value))){
		HX_STACK_LINE(206)
		return value;
	}
	HX_STACK_LINE(207)
	::com::haxepunk::HXP_obj::_goto = value;
	HX_STACK_LINE(208)
	return ::com::haxepunk::HXP_obj::_scene;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_scene,return )

Void HXP_obj::swapScene( ){
{
		HX_STACK_FRAME("HXP","swapScene","HXP.swapScene","com/haxepunk/HXP.hx",212)
		HX_STACK_LINE(213)
		::com::haxepunk::HXP_obj::_scene = ::com::haxepunk::HXP_obj::_goto;
		HX_STACK_LINE(214)
		::com::haxepunk::HXP_obj::_goto = null();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,swapScene,(void))

Void HXP_obj::resize( int width,int height){
{
		HX_STACK_FRAME("HXP","resize","HXP.resize","com/haxepunk/HXP.hx",223)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(225)
		width = ::Std_obj::_int((Float(width) / Float(::com::haxepunk::HXP_obj::screen->fullScaleX)));
		HX_STACK_LINE(226)
		height = ::Std_obj::_int((Float(height) / Float(::com::haxepunk::HXP_obj::screen->fullScaleY)));
		HX_STACK_LINE(227)
		::com::haxepunk::HXP_obj::width = width;
		HX_STACK_LINE(228)
		::com::haxepunk::HXP_obj::height = height;
		HX_STACK_LINE(229)
		::com::haxepunk::HXP_obj::halfWidth = (Float(width) / Float((int)2));
		HX_STACK_LINE(230)
		::com::haxepunk::HXP_obj::halfHeight = (Float(height) / Float((int)2));
		HX_STACK_LINE(231)
		::com::haxepunk::HXP_obj::bounds->width = width;
		HX_STACK_LINE(232)
		::com::haxepunk::HXP_obj::bounds->height = height;
		HX_STACK_LINE(233)
		::com::haxepunk::HXP_obj::screen->resize();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HXP_obj,resize,(void))

Void HXP_obj::clear( Dynamic array){
{
		HX_STACK_FRAME("HXP","clear","HXP.clear","com/haxepunk/HXP.hx",243)
		HX_STACK_ARG(array,"array")
		HX_STACK_LINE(243)
		array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,clear,(void))

Void HXP_obj::setCamera( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_FRAME("HXP","setCamera","HXP.setCamera","com/haxepunk/HXP.hx",255)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(256)
		::com::haxepunk::HXP_obj::camera->x = x;
		HX_STACK_LINE(257)
		::com::haxepunk::HXP_obj::camera->y = y;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HXP_obj,setCamera,(void))

Void HXP_obj::resetCamera( ){
{
		HX_STACK_FRAME("HXP","resetCamera","HXP.resetCamera","com/haxepunk/HXP.hx",265)
		HX_STACK_LINE(265)
		::com::haxepunk::HXP_obj::camera->x = ::com::haxepunk::HXP_obj::camera->y = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,resetCamera,(void))

bool HXP_obj::get_fullscreen( ){
	HX_STACK_FRAME("HXP","get_fullscreen","HXP.get_fullscreen","com/haxepunk/HXP.hx",272)
	HX_STACK_LINE(272)
	return (::com::haxepunk::HXP_obj::stage->get_displayState() == ::flash::display::StageDisplayState_obj::FULL_SCREEN);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_fullscreen,return )

bool HXP_obj::set_fullscreen( bool value){
	HX_STACK_FRAME("HXP","set_fullscreen","HXP.set_fullscreen","com/haxepunk/HXP.hx",274)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(275)
	if ((value)){
		HX_STACK_LINE(275)
		::com::haxepunk::HXP_obj::stage->set_displayState(::flash::display::StageDisplayState_obj::FULL_SCREEN);
	}
	else{
		HX_STACK_LINE(276)
		::com::haxepunk::HXP_obj::stage->set_displayState(::flash::display::StageDisplayState_obj::NORMAL);
	}
	HX_STACK_LINE(277)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_fullscreen,return )

Float HXP_obj::get_volume( ){
	HX_STACK_FRAME("HXP","get_volume","HXP.get_volume","com/haxepunk/HXP.hx",284)
	HX_STACK_LINE(284)
	return ::com::haxepunk::HXP_obj::_volume;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_volume,return )

Float HXP_obj::set_volume( Float value){
	HX_STACK_FRAME("HXP","set_volume","HXP.set_volume","com/haxepunk/HXP.hx",286)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(287)
	if (((value < (int)0))){
		HX_STACK_LINE(287)
		value = (int)0;
	}
	HX_STACK_LINE(288)
	if (((::com::haxepunk::HXP_obj::_volume == value))){
		HX_STACK_LINE(288)
		return value;
	}
	HX_STACK_LINE(289)
	::com::haxepunk::HXP_obj::_soundTransform->volume = ::com::haxepunk::HXP_obj::_volume = value;
	HX_STACK_LINE(293)
	return ::com::haxepunk::HXP_obj::_volume;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_volume,return )

Float HXP_obj::get_pan( ){
	HX_STACK_FRAME("HXP","get_pan","HXP.get_pan","com/haxepunk/HXP.hx",300)
	HX_STACK_LINE(300)
	return ::com::haxepunk::HXP_obj::_pan;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_pan,return )

Float HXP_obj::set_pan( Float value){
	HX_STACK_FRAME("HXP","set_pan","HXP.set_pan","com/haxepunk/HXP.hx",302)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(303)
	if (((value < (int)-1))){
		HX_STACK_LINE(303)
		value = (int)-1;
	}
	HX_STACK_LINE(304)
	if (((value > (int)1))){
		HX_STACK_LINE(304)
		value = (int)1;
	}
	HX_STACK_LINE(305)
	if (((::com::haxepunk::HXP_obj::_pan == value))){
		HX_STACK_LINE(305)
		return value;
	}
	HX_STACK_LINE(306)
	::com::haxepunk::HXP_obj::_soundTransform->pan = ::com::haxepunk::HXP_obj::_pan = value;
	HX_STACK_LINE(310)
	return ::com::haxepunk::HXP_obj::_pan;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_pan,return )

Dynamic HXP_obj::choose( Dynamic objs){
	HX_STACK_FRAME("HXP","choose","HXP.choose","com/haxepunk/HXP.hx",320)
	HX_STACK_ARG(objs,"objs")
	struct _Function_1_1{
		inline static int Block( Dynamic &objs){
			HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/HXP.hx",320)
			{
				HX_STACK_LINE(320)
				::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),(int)2147483646));
				HX_STACK_LINE(320)
				return ::Std_obj::_int(((Float(::com::haxepunk::HXP_obj::_seed) / Float((int)2147483646)) * objs->__Field(HX_CSTRING("length"),true)));
			}
			return null();
		}
	};
	HX_STACK_LINE(320)
	return objs->__GetItem(_Function_1_1::Block(objs));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,choose,return )

int HXP_obj::sign( Float value){
	HX_STACK_FRAME("HXP","sign","HXP.sign","com/haxepunk/HXP.hx",330)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(330)
	if (((value < (int)0))){
		HX_STACK_LINE(330)
		return (int)-1;
	}
	else{
		HX_STACK_LINE(330)
		if (((value > (int)0))){
			HX_STACK_LINE(330)
			return (int)1;
		}
		else{
			HX_STACK_LINE(330)
			return (int)0;
		}
	}
	HX_STACK_LINE(330)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,sign,return )

Float HXP_obj::approach( Float value,Float target,Float amount){
	HX_STACK_FRAME("HXP","approach","HXP.approach","com/haxepunk/HXP.hx",342)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(amount,"amount")
	HX_STACK_LINE(342)
	if (((value < (target - amount)))){
		HX_STACK_LINE(343)
		return (value + amount);
	}
	else{
		HX_STACK_LINE(344)
		if (((value > (target + amount)))){
			HX_STACK_LINE(345)
			return (value - amount);
		}
		else{
			HX_STACK_LINE(347)
			return target;
		}
	}
	HX_STACK_LINE(342)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,approach,return )

Float HXP_obj::lerp( Float a,Float b,hx::Null< Float >  __o_t){
Float t = __o_t.Default(1);
	HX_STACK_FRAME("HXP","lerp","HXP.lerp","com/haxepunk/HXP.hx",360)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(t,"t")
{
		HX_STACK_LINE(360)
		return (a + (((b - a)) * t));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,lerp,return )

int HXP_obj::colorLerp( int fromColor,int toColor,hx::Null< Float >  __o_t){
Float t = __o_t.Default(1);
	HX_STACK_FRAME("HXP","colorLerp","HXP.colorLerp","com/haxepunk/HXP.hx",372)
	HX_STACK_ARG(fromColor,"fromColor")
	HX_STACK_ARG(toColor,"toColor")
	HX_STACK_ARG(t,"t")
{
		HX_STACK_LINE(372)
		if (((t <= (int)0))){
			HX_STACK_LINE(372)
			return fromColor;
		}
		else{
			HX_STACK_LINE(373)
			if (((t >= (int)1))){
				HX_STACK_LINE(373)
				return toColor;
			}
			else{
				HX_STACK_LINE(375)
				int a = (int((int(fromColor) >> int((int)24))) & int((int)255));		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(376)
				int r = (int((int(fromColor) >> int((int)16))) & int((int)255));		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(377)
				int g = (int((int(fromColor) >> int((int)8))) & int((int)255));		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(378)
				int b = (int(fromColor) & int((int)255));		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(379)
				int dA = (((int((int(toColor) >> int((int)24))) & int((int)255))) - a);		HX_STACK_VAR(dA,"dA");
				HX_STACK_LINE(380)
				int dR = (((int((int(toColor) >> int((int)16))) & int((int)255))) - r);		HX_STACK_VAR(dR,"dR");
				HX_STACK_LINE(381)
				int dG = (((int((int(toColor) >> int((int)8))) & int((int)255))) - g);		HX_STACK_VAR(dG,"dG");
				HX_STACK_LINE(382)
				int dB = (((int(toColor) & int((int)255))) - b);		HX_STACK_VAR(dB,"dB");
				HX_STACK_LINE(383)
				hx::AddEq(a,::Std_obj::_int((dA * t)));
				HX_STACK_LINE(384)
				hx::AddEq(r,::Std_obj::_int((dR * t)));
				HX_STACK_LINE(385)
				hx::AddEq(g,::Std_obj::_int((dG * t)));
				HX_STACK_LINE(386)
				hx::AddEq(b,::Std_obj::_int((dB * t)));
				HX_STACK_LINE(387)
				return (int((int((int((int(a) << int((int)24))) | int((int(r) << int((int)16))))) | int((int(g) << int((int)8))))) | int(b));
			}
		}
		HX_STACK_LINE(372)
		return (int)0;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,colorLerp,return )

Void HXP_obj::stepTowards( Dynamic object,Float x,Float y,hx::Null< Float >  __o_distance){
Float distance = __o_distance.Default(1);
	HX_STACK_FRAME("HXP","stepTowards","HXP.stepTowards","com/haxepunk/HXP.hx",399)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(distance,"distance")
{
		HX_STACK_LINE(400)
		::com::haxepunk::HXP_obj::point->x = (x - object->__Field(HX_CSTRING("x"),true));
		HX_STACK_LINE(401)
		::com::haxepunk::HXP_obj::point->y = (y - object->__Field(HX_CSTRING("y"),true));
		HX_STACK_LINE(402)
		if (((::com::haxepunk::HXP_obj::point->get_length() <= distance))){
			HX_STACK_LINE(404)
			object->__FieldRef(HX_CSTRING("x")) = x;
			HX_STACK_LINE(405)
			object->__FieldRef(HX_CSTRING("y")) = y;
			HX_STACK_LINE(406)
			return null();
		}
		HX_STACK_LINE(408)
		::com::haxepunk::HXP_obj::point->normalize(distance);
		HX_STACK_LINE(409)
		hx::AddEq(object->__FieldRef(HX_CSTRING("x")),::com::haxepunk::HXP_obj::point->x);
		HX_STACK_LINE(410)
		hx::AddEq(object->__FieldRef(HX_CSTRING("y")),::com::haxepunk::HXP_obj::point->y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,stepTowards,(void))

Void HXP_obj::anchorTo( Dynamic object,Dynamic anchor,hx::Null< Float >  __o_distance){
Float distance = __o_distance.Default(0);
	HX_STACK_FRAME("HXP","anchorTo","HXP.anchorTo","com/haxepunk/HXP.hx",420)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(anchor,"anchor")
	HX_STACK_ARG(distance,"distance")
{
		HX_STACK_LINE(421)
		::com::haxepunk::HXP_obj::point->x = (object->__Field(HX_CSTRING("x"),true) - anchor->__Field(HX_CSTRING("x"),true));
		HX_STACK_LINE(422)
		::com::haxepunk::HXP_obj::point->y = (object->__Field(HX_CSTRING("y"),true) - anchor->__Field(HX_CSTRING("y"),true));
		HX_STACK_LINE(423)
		if (((::com::haxepunk::HXP_obj::point->get_length() > distance))){
			HX_STACK_LINE(423)
			::com::haxepunk::HXP_obj::point->normalize(distance);
		}
		HX_STACK_LINE(424)
		object->__FieldRef(HX_CSTRING("x")) = (anchor->__Field(HX_CSTRING("x"),true) + ::com::haxepunk::HXP_obj::point->x);
		HX_STACK_LINE(425)
		object->__FieldRef(HX_CSTRING("y")) = (anchor->__Field(HX_CSTRING("y"),true) + ::com::haxepunk::HXP_obj::point->y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,anchorTo,(void))

Float HXP_obj::angle( Float x1,Float y1,Float x2,Float y2){
	HX_STACK_FRAME("HXP","angle","HXP.angle","com/haxepunk/HXP.hx",437)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_LINE(438)
	Float a = (::Math_obj::atan2((y2 - y1),(x2 - x1)) * ((Float((int)-180) / Float(::Math_obj::PI))));		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(439)
	if (((a < (int)0))){
		HX_STACK_LINE(439)
		return (a + (int)360);
	}
	else{
		HX_STACK_LINE(439)
		return a;
	}
	HX_STACK_LINE(439)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,angle,return )

Void HXP_obj::angleXY( Dynamic object,Float angle,hx::Null< Float >  __o_length,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float length = __o_length.Default(1);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_FRAME("HXP","angleXY","HXP.angleXY","com/haxepunk/HXP.hx",451)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(452)
		hx::MultEq(angle,(Float(::Math_obj::PI) / Float((int)-180)));
		HX_STACK_LINE(453)
		object->__FieldRef(HX_CSTRING("x")) = ((::Math_obj::cos(angle) * length) + x);
		HX_STACK_LINE(454)
		object->__FieldRef(HX_CSTRING("y")) = ((::Math_obj::sin(angle) * length) + y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(HXP_obj,angleXY,(void))

Float HXP_obj::angleDifference( Float angle1,Float angle2){
	HX_STACK_FRAME("HXP","angleDifference","HXP.angleDifference","com/haxepunk/HXP.hx",464)
	HX_STACK_ARG(angle1,"angle1")
	HX_STACK_ARG(angle2,"angle2")
	HX_STACK_LINE(465)
	Float diff = (angle2 - angle1);		HX_STACK_VAR(diff,"diff");
	HX_STACK_LINE(466)
	while(((diff < (int)-180))){
		HX_STACK_LINE(466)
		hx::AddEq(diff,(int)360);
	}
	HX_STACK_LINE(467)
	while(((diff > (int)180))){
		HX_STACK_LINE(467)
		hx::SubEq(diff,(int)360);
	}
	HX_STACK_LINE(468)
	return diff;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HXP_obj,angleDifference,return )

Void HXP_obj::rotateAround( Dynamic object,Dynamic anchor,hx::Null< Float >  __o_angle,hx::Null< bool >  __o_relative){
Float angle = __o_angle.Default(0);
bool relative = __o_relative.Default(true);
	HX_STACK_FRAME("HXP","rotateAround","HXP.rotateAround","com/haxepunk/HXP.hx",478)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(anchor,"anchor")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(relative,"relative")
{
		HX_STACK_LINE(479)
		if ((relative)){
			struct _Function_2_1{
				inline static Float Block( Dynamic &anchor,Dynamic &object){
					HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/HXP.hx",479)
					{
						HX_STACK_LINE(479)
						Float x1 = anchor->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(479)
						Float y1 = anchor->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(y1,"y1");
						HX_STACK_LINE(479)
						Float x2 = object->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(x2,"x2");
						HX_STACK_LINE(479)
						Float y2 = object->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(y2,"y2");
						HX_STACK_LINE(479)
						Float a = (::Math_obj::atan2((y2 - y1),(x2 - x1)) * ((Float((int)-180) / Float(::Math_obj::PI))));		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(479)
						return (  (((a < (int)0))) ? Float((a + (int)360)) : Float(a) );
					}
					return null();
				}
			};
			HX_STACK_LINE(479)
			hx::AddEq(angle,_Function_2_1::Block(anchor,object));
		}
		HX_STACK_LINE(480)
		{
			HX_STACK_LINE(480)
			Float angle1 = angle;		HX_STACK_VAR(angle1,"angle1");
			HX_STACK_LINE(480)
			Float length;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(480)
			{
				HX_STACK_LINE(480)
				Float x1 = anchor->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(480)
				Float y1 = anchor->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(480)
				Float x2 = object->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(x2,"x2");
				HX_STACK_LINE(480)
				Float y2 = object->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(y2,"y2");
				HX_STACK_LINE(480)
				length = ::Math_obj::sqrt(((((x2 - x1)) * ((x2 - x1))) + (((y2 - y1)) * ((y2 - y1)))));
			}
			HX_STACK_LINE(480)
			Float x = anchor->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(480)
			Float y = anchor->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(480)
			hx::MultEq(angle1,(Float(::Math_obj::PI) / Float((int)-180)));
			HX_STACK_LINE(480)
			object->__FieldRef(HX_CSTRING("x")) = ((::Math_obj::cos(angle1) * length) + x);
			HX_STACK_LINE(480)
			object->__FieldRef(HX_CSTRING("y")) = ((::Math_obj::sin(angle1) * length) + y);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,rotateAround,(void))

Float HXP_obj::round( Float num,int precision){
	HX_STACK_FRAME("HXP","round","HXP.round","com/haxepunk/HXP.hx",490)
	HX_STACK_ARG(num,"num")
	HX_STACK_ARG(precision,"precision")
	HX_STACK_LINE(491)
	Float exp = ::Math_obj::pow((int)10,precision);		HX_STACK_VAR(exp,"exp");
	HX_STACK_LINE(492)
	return (Float(::Math_obj::round((num * exp))) / Float(exp));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HXP_obj,round,return )

Float HXP_obj::distance( Float x1,Float y1,hx::Null< Float >  __o_x2,hx::Null< Float >  __o_y2){
Float x2 = __o_x2.Default(0);
Float y2 = __o_y2.Default(0);
	HX_STACK_FRAME("HXP","distance","HXP.distance","com/haxepunk/HXP.hx",505)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
{
		HX_STACK_LINE(505)
		return ::Math_obj::sqrt(((((x2 - x1)) * ((x2 - x1))) + (((y2 - y1)) * ((y2 - y1)))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,distance,return )

Float HXP_obj::distanceSquared( Float x1,Float y1,hx::Null< Float >  __o_x2,hx::Null< Float >  __o_y2){
Float x2 = __o_x2.Default(0);
Float y2 = __o_y2.Default(0);
	HX_STACK_FRAME("HXP","distanceSquared","HXP.distanceSquared","com/haxepunk/HXP.hx",510)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
{
		HX_STACK_LINE(510)
		return ((((x2 - x1)) * ((x2 - x1))) + (((y2 - y1)) * ((y2 - y1))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,distanceSquared,return )

Float HXP_obj::distanceRects( Float x1,Float y1,Float w1,Float h1,Float x2,Float y2,Float w2,Float h2){
	HX_STACK_FRAME("HXP","distanceRects","HXP.distanceRects","com/haxepunk/HXP.hx",526)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(w1,"w1")
	HX_STACK_ARG(h1,"h1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(w2,"w2")
	HX_STACK_ARG(h2,"h2")
	HX_STACK_LINE(527)
	if (((bool((x1 < (x2 + w2))) && bool((x2 < (x1 + w1)))))){
		HX_STACK_LINE(529)
		if (((bool((y1 < (y2 + h2))) && bool((y2 < (y1 + h1)))))){
			HX_STACK_LINE(529)
			return (int)0;
		}
		HX_STACK_LINE(530)
		if (((y1 > y2))){
			HX_STACK_LINE(530)
			return (y1 - ((y2 + h2)));
		}
		HX_STACK_LINE(531)
		return (y2 - ((y1 + h1)));
	}
	HX_STACK_LINE(533)
	if (((bool((y1 < (y2 + h2))) && bool((y2 < (y1 + h1)))))){
		HX_STACK_LINE(535)
		if (((x1 > x2))){
			HX_STACK_LINE(535)
			return (x1 - ((x2 + w2)));
		}
		HX_STACK_LINE(536)
		return (x2 - ((x1 + w1)));
	}
	HX_STACK_LINE(538)
	if (((x1 > x2))){
		HX_STACK_LINE(540)
		if (((y1 > y2))){
			HX_STACK_LINE(540)
			Float x21 = (x2 + w2);		HX_STACK_VAR(x21,"x21");
			HX_STACK_LINE(540)
			Float y21 = (y2 + h2);		HX_STACK_VAR(y21,"y21");
			HX_STACK_LINE(540)
			return ::Math_obj::sqrt(((((x21 - x1)) * ((x21 - x1))) + (((y21 - y1)) * ((y21 - y1)))));
		}
		HX_STACK_LINE(541)
		{
			HX_STACK_LINE(541)
			Float y11 = (y1 + h1);		HX_STACK_VAR(y11,"y11");
			HX_STACK_LINE(541)
			Float x21 = (x2 + w2);		HX_STACK_VAR(x21,"x21");
			HX_STACK_LINE(541)
			return ::Math_obj::sqrt(((((x21 - x1)) * ((x21 - x1))) + (((y2 - y11)) * ((y2 - y11)))));
		}
	}
	HX_STACK_LINE(543)
	if (((y1 > y2))){
		HX_STACK_LINE(543)
		Float x11 = (x1 + w1);		HX_STACK_VAR(x11,"x11");
		HX_STACK_LINE(543)
		Float y21 = (y2 + h2);		HX_STACK_VAR(y21,"y21");
		HX_STACK_LINE(543)
		return ::Math_obj::sqrt(((((x2 - x11)) * ((x2 - x11))) + (((y21 - y1)) * ((y21 - y1)))));
	}
	HX_STACK_LINE(544)
	Float x11 = (x1 + w1);		HX_STACK_VAR(x11,"x11");
	HX_STACK_LINE(544)
	Float y11 = (y1 + h1);		HX_STACK_VAR(y11,"y11");
	HX_STACK_LINE(544)
	return ::Math_obj::sqrt(((((x2 - x11)) * ((x2 - x11))) + (((y2 - y11)) * ((y2 - y11)))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(HXP_obj,distanceRects,return )

Float HXP_obj::distanceRectPoint( Float px,Float py,Float rx,Float ry,Float rw,Float rh){
	HX_STACK_FRAME("HXP","distanceRectPoint","HXP.distanceRectPoint","com/haxepunk/HXP.hx",558)
	HX_STACK_ARG(px,"px")
	HX_STACK_ARG(py,"py")
	HX_STACK_ARG(rx,"rx")
	HX_STACK_ARG(ry,"ry")
	HX_STACK_ARG(rw,"rw")
	HX_STACK_ARG(rh,"rh")
	HX_STACK_LINE(559)
	if (((bool((px >= rx)) && bool((px <= (rx + rw)))))){
		HX_STACK_LINE(561)
		if (((bool((py >= ry)) && bool((py <= (ry + rh)))))){
			HX_STACK_LINE(561)
			return (int)0;
		}
		HX_STACK_LINE(562)
		if (((py > ry))){
			HX_STACK_LINE(562)
			return (py - ((ry + rh)));
		}
		HX_STACK_LINE(563)
		return (ry - py);
	}
	HX_STACK_LINE(565)
	if (((bool((py >= ry)) && bool((py <= (ry + rh)))))){
		HX_STACK_LINE(567)
		if (((px > rx))){
			HX_STACK_LINE(567)
			return (px - ((rx + rw)));
		}
		HX_STACK_LINE(568)
		return (rx - px);
	}
	HX_STACK_LINE(570)
	if (((px > rx))){
		HX_STACK_LINE(572)
		if (((py > ry))){
			HX_STACK_LINE(572)
			Float x2 = (rx + rw);		HX_STACK_VAR(x2,"x2");
			HX_STACK_LINE(572)
			Float y2 = (ry + rh);		HX_STACK_VAR(y2,"y2");
			HX_STACK_LINE(572)
			return ::Math_obj::sqrt(((((x2 - px)) * ((x2 - px))) + (((y2 - py)) * ((y2 - py)))));
		}
		HX_STACK_LINE(573)
		{
			HX_STACK_LINE(573)
			Float x2 = (rx + rw);		HX_STACK_VAR(x2,"x2");
			HX_STACK_LINE(573)
			return ::Math_obj::sqrt(((((x2 - px)) * ((x2 - px))) + (((ry - py)) * ((ry - py)))));
		}
	}
	HX_STACK_LINE(575)
	if (((py > ry))){
		HX_STACK_LINE(575)
		Float y2 = (ry + rh);		HX_STACK_VAR(y2,"y2");
		HX_STACK_LINE(575)
		return ::Math_obj::sqrt(((((rx - px)) * ((rx - px))) + (((y2 - py)) * ((y2 - py)))));
	}
	HX_STACK_LINE(576)
	return ::Math_obj::sqrt(((((rx - px)) * ((rx - px))) + (((ry - py)) * ((ry - py)))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(HXP_obj,distanceRectPoint,return )

Float HXP_obj::clamp( Float value,Float min,Float max){
	HX_STACK_FRAME("HXP","clamp","HXP.clamp","com/haxepunk/HXP.hx",588)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(588)
	if (((max > min))){
		HX_STACK_LINE(590)
		if (((value < min))){
			HX_STACK_LINE(590)
			return min;
		}
		else{
			HX_STACK_LINE(591)
			if (((value > max))){
				HX_STACK_LINE(591)
				return max;
			}
			else{
				HX_STACK_LINE(592)
				return value;
			}
		}
	}
	else{
		HX_STACK_LINE(597)
		if (((value < max))){
			HX_STACK_LINE(597)
			return max;
		}
		else{
			HX_STACK_LINE(598)
			if (((value > min))){
				HX_STACK_LINE(598)
				return min;
			}
			else{
				HX_STACK_LINE(599)
				return value;
			}
		}
	}
	HX_STACK_LINE(588)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,clamp,return )

Void HXP_obj::clampInRect( Dynamic object,Float x,Float y,Float width,Float height,hx::Null< Float >  __o_padding){
Float padding = __o_padding.Default(0);
	HX_STACK_FRAME("HXP","clampInRect","HXP.clampInRect","com/haxepunk/HXP.hx",612)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(padding,"padding")
{
		HX_STACK_LINE(613)
		object->__FieldRef(HX_CSTRING("x")) = ::com::haxepunk::HXP_obj::clamp(object->__Field(HX_CSTRING("x"),true),(x + padding),((x + width) - padding));
		HX_STACK_LINE(614)
		object->__FieldRef(HX_CSTRING("y")) = ::com::haxepunk::HXP_obj::clamp(object->__Field(HX_CSTRING("y"),true),(y + padding),((y + height) - padding));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(HXP_obj,clampInRect,(void))

Float HXP_obj::scale( Float value,Float min,Float max,Float min2,Float max2){
	HX_STACK_FRAME("HXP","scale","HXP.scale","com/haxepunk/HXP.hx",628)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_ARG(min2,"min2")
	HX_STACK_ARG(max2,"max2")
	HX_STACK_LINE(628)
	return (min2 + ((Float(((value - min))) / Float(((max - min)))) * ((max2 - min2))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(HXP_obj,scale,return )

Float HXP_obj::scaleClamp( Float value,Float min,Float max,Float min2,Float max2){
	HX_STACK_FRAME("HXP","scaleClamp","HXP.scaleClamp","com/haxepunk/HXP.hx",641)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_ARG(min2,"min2")
	HX_STACK_ARG(max2,"max2")
	HX_STACK_LINE(642)
	value = (min2 + ((Float(((value - min))) / Float(((max - min)))) * ((max2 - min2))));
	HX_STACK_LINE(643)
	if (((max2 > min2))){
		HX_STACK_LINE(645)
		if (((value < max2))){
			HX_STACK_LINE(645)
			value = value;
		}
		else{
			HX_STACK_LINE(645)
			value = max2;
		}
		HX_STACK_LINE(646)
		if (((value > min2))){
			HX_STACK_LINE(646)
			return value;
		}
		else{
			HX_STACK_LINE(646)
			return min2;
		}
	}
	HX_STACK_LINE(648)
	if (((value < min2))){
		HX_STACK_LINE(648)
		value = value;
	}
	else{
		HX_STACK_LINE(648)
		value = min2;
	}
	HX_STACK_LINE(649)
	if (((value > max2))){
		HX_STACK_LINE(649)
		return value;
	}
	else{
		HX_STACK_LINE(649)
		return max2;
	}
	HX_STACK_LINE(649)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(HXP_obj,scaleClamp,return )

int HXP_obj::randomSeed;

int HXP_obj::set_randomSeed( int value){
	HX_STACK_FRAME("HXP","set_randomSeed","HXP.set_randomSeed","com/haxepunk/HXP.hx",657)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(658)
	::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(::com::haxepunk::HXP_obj::clamp(value,1.0,(int)2147483646));
	HX_STACK_LINE(659)
	::com::haxepunk::HXP_obj::randomSeed = ::com::haxepunk::HXP_obj::_seed;
	HX_STACK_LINE(660)
	return ::com::haxepunk::HXP_obj::_seed;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_randomSeed,return )

Void HXP_obj::randomizeSeed( ){
{
		HX_STACK_FRAME("HXP","randomizeSeed","HXP.randomizeSeed","com/haxepunk/HXP.hx",668)
		HX_STACK_LINE(668)
		int value = ::Std_obj::_int(((int)2147483646 * ::Math_obj::random()));		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(668)
		::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(::com::haxepunk::HXP_obj::clamp(value,1.0,(int)2147483646));
		HX_STACK_LINE(668)
		::com::haxepunk::HXP_obj::randomSeed = ::com::haxepunk::HXP_obj::_seed;
		HX_STACK_LINE(668)
		::com::haxepunk::HXP_obj::_seed;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,randomizeSeed,(void))

Float HXP_obj::random;

Float HXP_obj::get_random( ){
	HX_STACK_FRAME("HXP","get_random","HXP.get_random","com/haxepunk/HXP.hx",676)
	HX_STACK_LINE(677)
	::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),(int)2147483646));
	HX_STACK_LINE(678)
	return (Float(::com::haxepunk::HXP_obj::_seed) / Float((int)2147483646));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_random,return )

int HXP_obj::rand( int amount){
	HX_STACK_FRAME("HXP","rand","HXP.rand","com/haxepunk/HXP.hx",687)
	HX_STACK_ARG(amount,"amount")
	HX_STACK_LINE(688)
	::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),(int)2147483646));
	HX_STACK_LINE(689)
	return ::Std_obj::_int(((Float(::com::haxepunk::HXP_obj::_seed) / Float((int)2147483646)) * amount));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,rand,return )

int HXP_obj::indexOf( Dynamic a,Dynamic v){
	HX_STACK_FRAME("HXP","indexOf","HXP.indexOf","com/haxepunk/HXP.hx",693)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(694)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(695)
	{
		HX_STACK_LINE(695)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(695)
		while(((_g < a->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(695)
			Dynamic v2 = a->__GetItem(_g);		HX_STACK_VAR(v2,"v2");
			HX_STACK_LINE(695)
			++(_g);
			HX_STACK_LINE(696)
			if (((v == v2))){
				HX_STACK_LINE(697)
				return i;
			}
			HX_STACK_LINE(698)
			(i)++;
		}
	}
	HX_STACK_LINE(700)
	return (int)-1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HXP_obj,indexOf,return )

Dynamic HXP_obj::next( Dynamic current,Dynamic options,hx::Null< bool >  __o_loop){
bool loop = __o_loop.Default(true);
	HX_STACK_FRAME("HXP","next","HXP.next","com/haxepunk/HXP.hx",712)
	HX_STACK_ARG(current,"current")
	HX_STACK_ARG(options,"options")
	HX_STACK_ARG(loop,"loop")
{
		HX_STACK_LINE(712)
		if ((loop)){
			HX_STACK_LINE(713)
			return options->__GetItem(hx::Mod(((::com::haxepunk::HXP_obj::indexOf(options,current) + (int)1)),options->__Field(HX_CSTRING("length"),true)));
		}
		else{
			HX_STACK_LINE(715)
			return options->__GetItem(::Std_obj::_int(::Math_obj::max((::com::haxepunk::HXP_obj::indexOf(options,current) + (int)1),(options->__Field(HX_CSTRING("length"),true) - (int)1))));
		}
		HX_STACK_LINE(712)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,next,return )

Dynamic HXP_obj::prev( Dynamic current,Dynamic options,hx::Null< bool >  __o_loop){
bool loop = __o_loop.Default(true);
	HX_STACK_FRAME("HXP","prev","HXP.prev","com/haxepunk/HXP.hx",727)
	HX_STACK_ARG(current,"current")
	HX_STACK_ARG(options,"options")
	HX_STACK_ARG(loop,"loop")
{
		HX_STACK_LINE(727)
		if ((loop)){
			HX_STACK_LINE(728)
			return options->__GetItem(hx::Mod((((::com::haxepunk::HXP_obj::indexOf(options,current) - (int)1) + options->__Field(HX_CSTRING("length"),true))),options->__Field(HX_CSTRING("length"),true)));
		}
		else{
			HX_STACK_LINE(730)
			return options->__GetItem(::Std_obj::_int(::Math_obj::max((::com::haxepunk::HXP_obj::indexOf(options,current) - (int)1),(int)0)));
		}
		HX_STACK_LINE(727)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,prev,return )

Dynamic HXP_obj::swap( Dynamic current,Dynamic a,Dynamic b){
	HX_STACK_FRAME("HXP","swap","HXP.swap","com/haxepunk/HXP.hx",742)
	HX_STACK_ARG(current,"current")
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(742)
	if (((current == a))){
		HX_STACK_LINE(742)
		return b;
	}
	else{
		HX_STACK_LINE(742)
		return a;
	}
	HX_STACK_LINE(742)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,swap,return )

int HXP_obj::getColorRGB( hx::Null< int >  __o_R,hx::Null< int >  __o_G,hx::Null< int >  __o_B){
int R = __o_R.Default(0);
int G = __o_G.Default(0);
int B = __o_B.Default(0);
	HX_STACK_FRAME("HXP","getColorRGB","HXP.getColorRGB","com/haxepunk/HXP.hx",754)
	HX_STACK_ARG(R,"R")
	HX_STACK_ARG(G,"G")
	HX_STACK_ARG(B,"B")
{
		HX_STACK_LINE(754)
		return (int((int((int(R) << int((int)16))) | int((int(G) << int((int)8))))) | int(B));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,getColorRGB,return )

int HXP_obj::getColorHSV( Float h,Float s,Float v){
	HX_STACK_FRAME("HXP","getColorHSV","HXP.getColorHSV","com/haxepunk/HXP.hx",765)
	HX_STACK_ARG(h,"h")
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(766)
	h = ::Std_obj::_int((h * (int)360));
	HX_STACK_LINE(767)
	int hi = hx::Mod(::Math_obj::floor((Float(h) / Float((int)60))),(int)6);		HX_STACK_VAR(hi,"hi");
	HX_STACK_LINE(768)
	Float f = ((Float(h) / Float((int)60)) - ::Math_obj::floor((Float(h) / Float((int)60))));		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(769)
	Float p = (v * (((int)1 - s)));		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(770)
	Float q = (v * (((int)1 - (f * s))));		HX_STACK_VAR(q,"q");
	HX_STACK_LINE(771)
	Float t = (v * (((int)1 - ((((int)1 - f)) * s))));		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(772)
	switch( (int)(hi)){
		case (int)0: {
			HX_STACK_LINE(774)
			return (int((int((int(::Std_obj::_int((v * (int)255))) << int((int)16))) | int((int(::Std_obj::_int((t * (int)255))) << int((int)8))))) | int(::Std_obj::_int((p * (int)255))));
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(775)
			return (int((int((int(::Std_obj::_int((q * (int)255))) << int((int)16))) | int((int(::Std_obj::_int((v * (int)255))) << int((int)8))))) | int(::Std_obj::_int((p * (int)255))));
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(776)
			return (int((int((int(::Std_obj::_int((p * (int)255))) << int((int)16))) | int((int(::Std_obj::_int((v * (int)255))) << int((int)8))))) | int(::Std_obj::_int((t * (int)255))));
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(777)
			return (int((int((int(::Std_obj::_int((p * (int)255))) << int((int)16))) | int((int(::Std_obj::_int((q * (int)255))) << int((int)8))))) | int(::Std_obj::_int((v * (int)255))));
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(778)
			return (int((int((int(::Std_obj::_int((t * (int)255))) << int((int)16))) | int((int(::Std_obj::_int((p * (int)255))) << int((int)8))))) | int(::Std_obj::_int((v * (int)255))));
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(779)
			return (int((int((int(::Std_obj::_int((v * (int)255))) << int((int)16))) | int((int(::Std_obj::_int((p * (int)255))) << int((int)8))))) | int(::Std_obj::_int((q * (int)255))));
		}
		;break;
		default: {
			HX_STACK_LINE(780)
			return (int)0;
		}
	}
	HX_STACK_LINE(782)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,getColorHSV,return )

Float HXP_obj::getColorHue( int color){
	HX_STACK_FRAME("HXP","getColorHue","HXP.getColorHue","com/haxepunk/HXP.hx",791)
	HX_STACK_ARG(color,"color")
	HX_STACK_LINE(792)
	int h = (int((int(color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(793)
	int s = (int((int(color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(794)
	int v = (int(color) & int((int)255));		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(796)
	int max = ::Std_obj::_int(::Math_obj::max(h,::Math_obj::max(s,v)));		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(797)
	int min = ::Std_obj::_int(::Math_obj::min(h,::Math_obj::min(s,v)));		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(799)
	Float hue = (int)0;		HX_STACK_VAR(hue,"hue");
	HX_STACK_LINE(801)
	if (((max == min))){
		HX_STACK_LINE(802)
		hue = (int)0;
	}
	else{
		HX_STACK_LINE(803)
		if (((max == h))){
			HX_STACK_LINE(804)
			hue = hx::Mod((((Float(((int)60 * ((s - v)))) / Float(((max - min)))) + (int)360)),(int)360);
		}
		else{
			HX_STACK_LINE(805)
			if (((max == s))){
				HX_STACK_LINE(806)
				hue = ((Float(((int)60 * ((v - h)))) / Float(((max - min)))) + (int)120);
			}
			else{
				HX_STACK_LINE(807)
				if (((max == v))){
					HX_STACK_LINE(808)
					hue = ((Float(((int)60 * ((h - s)))) / Float(((max - min)))) + (int)240);
				}
			}
		}
	}
	HX_STACK_LINE(811)
	return (Float(hue) / Float((int)360));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getColorHue,return )

Float HXP_obj::getColorSaturation( int color){
	HX_STACK_FRAME("HXP","getColorSaturation","HXP.getColorSaturation","com/haxepunk/HXP.hx",820)
	HX_STACK_ARG(color,"color")
	HX_STACK_LINE(821)
	int h = (int((int(color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(822)
	int s = (int((int(color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(823)
	int v = (int(color) & int((int)255));		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(825)
	int max = ::Std_obj::_int(::Math_obj::max(h,::Math_obj::max(s,v)));		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(827)
	if (((max == (int)0))){
		HX_STACK_LINE(828)
		return (int)0;
	}
	else{
		HX_STACK_LINE(830)
		int min = ::Std_obj::_int(::Math_obj::min(h,::Math_obj::min(s,v)));		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(832)
		return (Float(((max - min))) / Float(max));
	}
	HX_STACK_LINE(827)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getColorSaturation,return )

Float HXP_obj::getColorValue( int color){
	HX_STACK_FRAME("HXP","getColorValue","HXP.getColorValue","com/haxepunk/HXP.hx",842)
	HX_STACK_ARG(color,"color")
	HX_STACK_LINE(843)
	int h = (int((int(color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(844)
	int s = (int((int(color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(845)
	int v = (int(color) & int((int)255));		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(847)
	return (Float(::Std_obj::_int(::Math_obj::max(h,::Math_obj::max(s,v)))) / Float((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getColorValue,return )

int HXP_obj::getRed( int color){
	HX_STACK_FRAME("HXP","getRed","HXP.getRed","com/haxepunk/HXP.hx",857)
	HX_STACK_ARG(color,"color")
	HX_STACK_LINE(857)
	return (int((int(color) >> int((int)16))) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getRed,return )

int HXP_obj::getGreen( int color){
	HX_STACK_FRAME("HXP","getGreen","HXP.getGreen","com/haxepunk/HXP.hx",867)
	HX_STACK_ARG(color,"color")
	HX_STACK_LINE(867)
	return (int((int(color) >> int((int)8))) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getGreen,return )

int HXP_obj::getBlue( int color){
	HX_STACK_FRAME("HXP","getBlue","HXP.getBlue","com/haxepunk/HXP.hx",877)
	HX_STACK_ARG(color,"color")
	HX_STACK_LINE(877)
	return (int(color) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getBlue,return )

::flash::display::BitmapData HXP_obj::getBitmap( Dynamic source){
	HX_STACK_FRAME("HXP","getBitmap","HXP.getBitmap","com/haxepunk/HXP.hx",886)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(887)
	::String name = ::Std_obj::string(source);		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(888)
	if ((::com::haxepunk::HXP_obj::_bitmap->exists(name))){
		HX_STACK_LINE(889)
		return ::com::haxepunk::HXP_obj::_bitmap->get(name);
	}
	HX_STACK_LINE(892)
	::flash::display::BitmapData data = ::openfl::Assets_obj::getBitmapData(source,null());		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(896)
	if (((data != null()))){
		HX_STACK_LINE(897)
		::com::haxepunk::HXP_obj::_bitmap->set(name,data);
	}
	HX_STACK_LINE(899)
	return data;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getBitmap,return )

::flash::display::BitmapData HXP_obj::createBitmap( int width,int height,Dynamic __o_transparent,Dynamic __o_color){
Dynamic transparent = __o_transparent.Default(false);
Dynamic color = __o_color.Default(0);
	HX_STACK_FRAME("HXP","createBitmap","HXP.createBitmap","com/haxepunk/HXP.hx",920)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(transparent,"transparent")
	HX_STACK_ARG(color,"color")
{
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &color){
				HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/HXP.hx",920)
				{
					HX_STACK_LINE(920)
					int color1 = color;		HX_STACK_VAR(color1,"color1");
					HX_STACK_LINE(920)
					return color1;
				}
				return null();
			}
		};
		HX_STACK_LINE(920)
		return ::flash::display::BitmapData_obj::__new(width,height,transparent,_Function_1_1::Block(color),null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,createBitmap,return )

Dynamic HXP_obj::convertColor( int color){
	HX_STACK_FRAME("HXP","convertColor","HXP.convertColor","com/haxepunk/HXP.hx",931)
	HX_STACK_ARG(color,"color")
	HX_STACK_LINE(931)
	return color;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,convertColor,return )

Float HXP_obj::timeFlag( ){
	HX_STACK_FRAME("HXP","timeFlag","HXP.timeFlag","com/haxepunk/HXP.hx",940)
	HX_STACK_LINE(941)
	Float t = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(942)
	Float e = (t - ::com::haxepunk::HXP_obj::_time);		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(943)
	::com::haxepunk::HXP_obj::_time = t;
	HX_STACK_LINE(944)
	return e;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,timeFlag,return )

::com::haxepunk::debug::Console HXP_obj::get_console( ){
	HX_STACK_FRAME("HXP","get_console","HXP.get_console","com/haxepunk/HXP.hx",952)
	HX_STACK_LINE(953)
	if (((::com::haxepunk::HXP_obj::_console == null()))){
		HX_STACK_LINE(953)
		::com::haxepunk::HXP_obj::_console = ::com::haxepunk::debug::Console_obj::__new();
	}
	HX_STACK_LINE(954)
	return ::com::haxepunk::HXP_obj::_console;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_console,return )

bool HXP_obj::consoleEnabled( ){
	HX_STACK_FRAME("HXP","consoleEnabled","HXP.consoleEnabled","com/haxepunk/HXP.hx",962)
	HX_STACK_LINE(962)
	return (::com::haxepunk::HXP_obj::_console != null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,consoleEnabled,return )

Dynamic HXP_obj::log;

Dynamic HXP_obj::watch;

::com::haxepunk::tweens::misc::MultiVarTween HXP_obj::tween( Dynamic object,Dynamic values,Float duration,Dynamic options){
	HX_STACK_FRAME("HXP","tween","HXP.tween","com/haxepunk/HXP.hx",1003)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(values,"values")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(1003)
	Dynamic options1 = Dynamic( Array_obj<Dynamic>::__new().Add(options));		HX_STACK_VAR(options1,"options1");
	HX_STACK_LINE(1003)
	Array< Float > duration1 = Array_obj< Float >::__new().Add(duration);		HX_STACK_VAR(duration1,"duration1");
	HX_STACK_LINE(1003)
	Dynamic values1 = Dynamic( Array_obj<Dynamic>::__new().Add(values));		HX_STACK_VAR(values1,"values1");
	HX_STACK_LINE(1003)
	Dynamic object1 = Dynamic( Array_obj<Dynamic>::__new().Add(object));		HX_STACK_VAR(object1,"object1");
	HX_STACK_LINE(1005)
	if (((bool((options1->__GetItem((int)0) != null())) && bool(::Reflect_obj::hasField(options1->__GetItem((int)0),HX_CSTRING("delay")))))){
		HX_STACK_LINE(1007)
		Float delay = options1->__GetItem((int)0)->__Field(HX_CSTRING("delay"),true);		HX_STACK_VAR(delay,"delay");
		HX_STACK_LINE(1008)
		::Reflect_obj::deleteField(options1->__GetItem((int)0),HX_CSTRING("delay"));

		HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_2_1,Dynamic,values1,Dynamic,object1,Array< Float >,duration1,Dynamic,options1)
		Void run(Dynamic o){
			HX_STACK_FRAME("*","_Function_2_1","*._Function_2_1","com/haxepunk/HXP.hx",1009)
			HX_STACK_ARG(o,"o")
			{
				HX_STACK_LINE(1009)
				::com::haxepunk::HXP_obj::tween(object1->__GetItem((int)0),values1->__GetItem((int)0),duration1->__get((int)0),options1->__GetItem((int)0));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1009)
		::com::haxepunk::HXP_obj::alarm(delay, Dynamic(new _Function_2_1(values1,object1,duration1,options1)),null(),null());
		HX_STACK_LINE(1010)
		return null();
	}
	HX_STACK_LINE(1013)
	::com::haxepunk::TweenType type = ::com::haxepunk::TweenType_obj::OneShot;		HX_STACK_VAR(type,"type");
	HX_STACK_LINE(1014)
	Dynamic complete = null();		HX_STACK_VAR(complete,"complete");
	HX_STACK_LINE(1015)
	Dynamic ease = null();		HX_STACK_VAR(ease,"ease");
	HX_STACK_LINE(1016)
	::com::haxepunk::Tweener tweener = ::com::haxepunk::HXP_obj::tweener;		HX_STACK_VAR(tweener,"tweener");
	HX_STACK_LINE(1017)
	if ((::Std_obj::is(object1->__GetItem((int)0),hx::ClassOf< ::com::haxepunk::Tweener >()))){
		HX_STACK_LINE(1017)
		tweener = hx::TCast< com::haxepunk::Tweener >::cast(object1->__GetItem((int)0));
	}
	HX_STACK_LINE(1018)
	if (((options1->__GetItem((int)0) != null()))){
		HX_STACK_LINE(1020)
		if ((::Reflect_obj::hasField(options1->__GetItem((int)0),HX_CSTRING("type")))){
			HX_STACK_LINE(1020)
			type = options1->__GetItem((int)0)->__Field(HX_CSTRING("type"),true);
		}
		HX_STACK_LINE(1021)
		if ((::Reflect_obj::hasField(options1->__GetItem((int)0),HX_CSTRING("complete")))){
			HX_STACK_LINE(1021)
			complete = options1->__GetItem((int)0)->__Field(HX_CSTRING("complete"),true);
		}
		HX_STACK_LINE(1022)
		if ((::Reflect_obj::hasField(options1->__GetItem((int)0),HX_CSTRING("ease")))){
			HX_STACK_LINE(1022)
			ease = options1->__GetItem((int)0)->__Field(HX_CSTRING("ease"),true);
		}
		HX_STACK_LINE(1023)
		if ((::Reflect_obj::hasField(options1->__GetItem((int)0),HX_CSTRING("tweener")))){
			HX_STACK_LINE(1023)
			tweener = options1->__GetItem((int)0)->__Field(HX_CSTRING("tweener"),true);
		}
	}
	HX_STACK_LINE(1025)
	::com::haxepunk::tweens::misc::MultiVarTween tween = ::com::haxepunk::tweens::misc::MultiVarTween_obj::__new(complete,type);		HX_STACK_VAR(tween,"tween");
	HX_STACK_LINE(1026)
	tween->tween(object1->__GetItem((int)0),values1->__GetItem((int)0),duration1->__get((int)0),ease);
	HX_STACK_LINE(1027)
	tweener->addTween(tween,null());
	HX_STACK_LINE(1028)
	return tween;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,tween,return )

::com::haxepunk::tweens::misc::Alarm HXP_obj::alarm( Float delay,Dynamic complete,::com::haxepunk::TweenType type,::com::haxepunk::Tweener tweener){
	HX_STACK_FRAME("HXP","alarm","HXP.alarm","com/haxepunk/HXP.hx",1042)
	HX_STACK_ARG(delay,"delay")
	HX_STACK_ARG(complete,"complete")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(tweener,"tweener")
	HX_STACK_LINE(1043)
	if (((type == null()))){
		HX_STACK_LINE(1043)
		type = ::com::haxepunk::TweenType_obj::OneShot;
	}
	HX_STACK_LINE(1044)
	if (((tweener == null()))){
		HX_STACK_LINE(1044)
		tweener = ::com::haxepunk::HXP_obj::tweener;
	}
	HX_STACK_LINE(1046)
	::com::haxepunk::tweens::misc::Alarm alarm = ::com::haxepunk::tweens::misc::Alarm_obj::__new(delay,complete,type);		HX_STACK_VAR(alarm,"alarm");
	HX_STACK_LINE(1047)
	tweener->addTween(alarm,true);
	HX_STACK_LINE(1048)
	return alarm;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,alarm,return )

Array< int > HXP_obj::frames( int from,int to,hx::Null< int >  __o_skip){
int skip = __o_skip.Default(0);
	HX_STACK_FRAME("HXP","frames","HXP.frames","com/haxepunk/HXP.hx",1058)
	HX_STACK_ARG(from,"from")
	HX_STACK_ARG(to,"to")
	HX_STACK_ARG(skip,"skip")
{
		HX_STACK_LINE(1059)
		Array< int > a = Array_obj< int >::__new();		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(1060)
		(skip)++;
		HX_STACK_LINE(1061)
		if (((from < to))){
			HX_STACK_LINE(1063)
			while(((from <= to))){
				HX_STACK_LINE(1065)
				a->push(from);
				HX_STACK_LINE(1066)
				hx::AddEq(from,skip);
			}
		}
		else{
			HX_STACK_LINE(1071)
			while(((from >= to))){
				HX_STACK_LINE(1073)
				a->push(from);
				HX_STACK_LINE(1074)
				hx::SubEq(from,skip);
			}
		}
		HX_STACK_LINE(1077)
		return a;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,frames,return )

Void HXP_obj::shuffle( Dynamic a){
{
		HX_STACK_FRAME("HXP","shuffle","HXP.shuffle","com/haxepunk/HXP.hx",1086)
		HX_STACK_ARG(a,"a")
		HX_STACK_LINE(1086)
		if ((::Std_obj::is(a,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(1088)
			int i = a->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1088)
			int j;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(1088)
			Dynamic t;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1089)
			while(((--(i) > (int)0))){
				HX_STACK_LINE(1091)
				t = a->__GetItem(i);
				struct _Function_3_1{
					inline static int Block( int &j,int &i){
						HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/HXP.hx",1092)
						{
							HX_STACK_LINE(1092)
							::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),(int)2147483646));
							HX_STACK_LINE(1092)
							return j = ::Std_obj::_int(((Float(::com::haxepunk::HXP_obj::_seed) / Float((int)2147483646)) * ((i + (int)1))));
						}
						return null();
					}
				};
				HX_STACK_LINE(1092)
				hx::IndexRef((a).mPtr,i) = a->__GetItem(_Function_3_1::Block(j,i));
				HX_STACK_LINE(1093)
				hx::IndexRef((a).mPtr,j) = t;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,shuffle,(void))

Float HXP_obj::time;

Float HXP_obj::set_time( Float value){
	HX_STACK_FRAME("HXP","set_time","HXP.set_time","com/haxepunk/HXP.hx",1099)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1100)
	::com::haxepunk::HXP_obj::_time = value;
	HX_STACK_LINE(1101)
	return ::com::haxepunk::HXP_obj::_time;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_time,return )

bool HXP_obj::gotoIsNull( ){
	HX_STACK_FRAME("HXP","gotoIsNull","HXP.gotoIsNull","com/haxepunk/HXP.hx",1104)
	HX_STACK_LINE(1104)
	return (::com::haxepunk::HXP_obj::_goto == null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,gotoIsNull,return )

::com::haxepunk::Scene HXP_obj::_scene;

::com::haxepunk::Scene HXP_obj::_goto;

::com::haxepunk::debug::Console HXP_obj::_console;

Float HXP_obj::_time;

Float HXP_obj::_updateTime;

Float HXP_obj::_renderTime;

Float HXP_obj::_gameTime;

Float HXP_obj::_systemTime;

::haxe::ds::StringMap HXP_obj::_bitmap;

int HXP_obj::_seed;

Float HXP_obj::_volume;

Float HXP_obj::_pan;

::flash::media::SoundTransform HXP_obj::_soundTransform;

Float HXP_obj::get_DEG( ){
	HX_STACK_FRAME("HXP","get_DEG","HXP.get_DEG","com/haxepunk/HXP.hx",1137)
	HX_STACK_LINE(1137)
	return (Float((int)-180) / Float(::Math_obj::PI));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_DEG,return )

Float HXP_obj::get_RAD( ){
	HX_STACK_FRAME("HXP","get_RAD","HXP.get_RAD","com/haxepunk/HXP.hx",1139)
	HX_STACK_LINE(1139)
	return (Float(::Math_obj::PI) / Float((int)-180));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_RAD,return )

::flash::display::Stage HXP_obj::stage;

::com::haxepunk::Engine HXP_obj::engine;

::flash::geom::Point HXP_obj::point;

::flash::geom::Point HXP_obj::point2;

::flash::geom::Point HXP_obj::zero;

::flash::geom::Rectangle HXP_obj::rect;

::flash::geom::Matrix HXP_obj::matrix;

::flash::display::Sprite HXP_obj::sprite;

::com::haxepunk::Entity HXP_obj::entity;


HXP_obj::HXP_obj()
{
}

void HXP_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HXP);
	HX_MARK_END_CLASS();
}

void HXP_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic HXP_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { return get_pan(); }
		if (HX_FIELD_EQ(inName,"log") ) { return log; }
		if (HX_FIELD_EQ(inName,"DEG") ) { return get_DEG(); }
		if (HX_FIELD_EQ(inName,"RAD") ) { return get_RAD(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { return rate; }
		if (HX_FIELD_EQ(inName,"sign") ) { return sign_dyn(); }
		if (HX_FIELD_EQ(inName,"lerp") ) { return lerp_dyn(); }
		if (HX_FIELD_EQ(inName,"rand") ) { return rand_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		if (HX_FIELD_EQ(inName,"prev") ) { return prev_dyn(); }
		if (HX_FIELD_EQ(inName,"swap") ) { return swap_dyn(); }
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		if (HX_FIELD_EQ(inName,"_pan") ) { return _pan; }
		if (HX_FIELD_EQ(inName,"zero") ) { return zero; }
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"fixed") ) { return fixed; }
		if (HX_FIELD_EQ(inName,"world") ) { return get_world(); }
		if (HX_FIELD_EQ(inName,"scene") ) { return get_scene(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle_dyn(); }
		if (HX_FIELD_EQ(inName,"round") ) { return round_dyn(); }
		if (HX_FIELD_EQ(inName,"clamp") ) { return clamp_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"watch") ) { return watch; }
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		if (HX_FIELD_EQ(inName,"alarm") ) { return alarm_dyn(); }
		if (HX_FIELD_EQ(inName,"_goto") ) { return _goto; }
		if (HX_FIELD_EQ(inName,"_time") ) { return _time; }
		if (HX_FIELD_EQ(inName,"_seed") ) { return _seed; }
		if (HX_FIELD_EQ(inName,"stage") ) { return stage; }
		if (HX_FIELD_EQ(inName,"point") ) { return point; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"screen") ) { return screen; }
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"camera") ) { return camera; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"volume") ) { return get_volume(); }
		if (HX_FIELD_EQ(inName,"choose") ) { return choose_dyn(); }
		if (HX_FIELD_EQ(inName,"random") ) { return inCallProp ? get_random() : random; }
		if (HX_FIELD_EQ(inName,"getRed") ) { return getRed_dyn(); }
		if (HX_FIELD_EQ(inName,"frames") ) { return frames_dyn(); }
		if (HX_FIELD_EQ(inName,"_scene") ) { return _scene; }
		if (HX_FIELD_EQ(inName,"engine") ) { return engine; }
		if (HX_FIELD_EQ(inName,"point2") ) { return point2; }
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		if (HX_FIELD_EQ(inName,"entity") ) { return entity; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"elapsed") ) { return elapsed; }
		if (HX_FIELD_EQ(inName,"tweener") ) { return tweener; }
		if (HX_FIELD_EQ(inName,"focused") ) { return focused; }
		if (HX_FIELD_EQ(inName,"get_pan") ) { return get_pan_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pan") ) { return set_pan_dyn(); }
		if (HX_FIELD_EQ(inName,"angleXY") ) { return angleXY_dyn(); }
		if (HX_FIELD_EQ(inName,"indexOf") ) { return indexOf_dyn(); }
		if (HX_FIELD_EQ(inName,"getBlue") ) { return getBlue_dyn(); }
		if (HX_FIELD_EQ(inName,"console") ) { return get_console(); }
		if (HX_FIELD_EQ(inName,"shuffle") ) { return shuffle_dyn(); }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { return _bitmap; }
		if (HX_FIELD_EQ(inName,"_volume") ) { return _volume; }
		if (HX_FIELD_EQ(inName,"get_DEG") ) { return get_DEG_dyn(); }
		if (HX_FIELD_EQ(inName,"get_RAD") ) { return get_RAD_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"approach") ) { return approach_dyn(); }
		if (HX_FIELD_EQ(inName,"anchorTo") ) { return anchorTo_dyn(); }
		if (HX_FIELD_EQ(inName,"distance") ) { return distance_dyn(); }
		if (HX_FIELD_EQ(inName,"getGreen") ) { return getGreen_dyn(); }
		if (HX_FIELD_EQ(inName,"timeFlag") ) { return timeFlag_dyn(); }
		if (HX_FIELD_EQ(inName,"set_time") ) { return set_time_dyn(); }
		if (HX_FIELD_EQ(inName,"_console") ) { return _console; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		if (HX_FIELD_EQ(inName,"halfWidth") ) { return halfWidth; }
		if (HX_FIELD_EQ(inName,"get_world") ) { return get_world_dyn(); }
		if (HX_FIELD_EQ(inName,"set_world") ) { return set_world_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scene") ) { return get_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scene") ) { return set_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"swapScene") ) { return swapScene_dyn(); }
		if (HX_FIELD_EQ(inName,"setCamera") ) { return setCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"colorLerp") ) { return colorLerp_dyn(); }
		if (HX_FIELD_EQ(inName,"getBitmap") ) { return getBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"_gameTime") ) { return _gameTime; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"halfHeight") ) { return halfHeight; }
		if (HX_FIELD_EQ(inName,"renderMode") ) { return renderMode; }
		if (HX_FIELD_EQ(inName,"fullscreen") ) { return get_fullscreen(); }
		if (HX_FIELD_EQ(inName,"get_volume") ) { return get_volume_dyn(); }
		if (HX_FIELD_EQ(inName,"set_volume") ) { return set_volume_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleClamp") ) { return scaleClamp_dyn(); }
		if (HX_FIELD_EQ(inName,"randomSeed") ) { return randomSeed; }
		if (HX_FIELD_EQ(inName,"get_random") ) { return get_random_dyn(); }
		if (HX_FIELD_EQ(inName,"gotoIsNull") ) { return gotoIsNull_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"windowWidth") ) { return windowWidth; }
		if (HX_FIELD_EQ(inName,"defaultFont") ) { return defaultFont; }
		if (HX_FIELD_EQ(inName,"resetCamera") ) { return resetCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"stepTowards") ) { return stepTowards_dyn(); }
		if (HX_FIELD_EQ(inName,"clampInRect") ) { return clampInRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorRGB") ) { return getColorRGB_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorHSV") ) { return getColorHSV_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorHue") ) { return getColorHue_dyn(); }
		if (HX_FIELD_EQ(inName,"get_console") ) { return get_console_dyn(); }
		if (HX_FIELD_EQ(inName,"_updateTime") ) { return _updateTime; }
		if (HX_FIELD_EQ(inName,"_renderTime") ) { return _renderTime; }
		if (HX_FIELD_EQ(inName,"_systemTime") ) { return _systemTime; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"windowHeight") ) { return windowHeight; }
		if (HX_FIELD_EQ(inName,"orientations") ) { return orientations; }
		if (HX_FIELD_EQ(inName,"rotateAround") ) { return rotateAround_dyn(); }
		if (HX_FIELD_EQ(inName,"createBitmap") ) { return createBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"convertColor") ) { return convertColor_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"distanceRects") ) { return distanceRects_dyn(); }
		if (HX_FIELD_EQ(inName,"randomizeSeed") ) { return randomizeSeed_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorValue") ) { return getColorValue_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_fullscreen") ) { return get_fullscreen_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fullscreen") ) { return set_fullscreen_dyn(); }
		if (HX_FIELD_EQ(inName,"set_randomSeed") ) { return set_randomSeed_dyn(); }
		if (HX_FIELD_EQ(inName,"consoleEnabled") ) { return consoleEnabled_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angleDifference") ) { return angleDifference_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceSquared") ) { return distanceSquared_dyn(); }
		if (HX_FIELD_EQ(inName,"_soundTransform") ) { return _soundTransform; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"NUMBER_MAX_VALUE") ) { return get_NUMBER_MAX_VALUE(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"assignedFrameRate") ) { return assignedFrameRate; }
		if (HX_FIELD_EQ(inName,"distanceRectPoint") ) { return distanceRectPoint_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getColorSaturation") ) { return getColorSaturation_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_NUMBER_MAX_VALUE") ) { return get_NUMBER_MAX_VALUE_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HXP_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { return set_pan(inValue); }
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { rate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"time") ) { if (inCallProp) return set_time(inValue);time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pan") ) { _pan=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zero") ) { zero=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fixed") ) { fixed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"world") ) { return set_world(inValue); }
		if (HX_FIELD_EQ(inName,"scene") ) { return set_scene(inValue); }
		if (HX_FIELD_EQ(inName,"watch") ) { watch=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_goto") ) { _goto=inValue.Cast< ::com::haxepunk::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_seed") ) { _seed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< ::flash::display::Stage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"point") ) { point=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screen") ) { screen=inValue.Cast< ::com::haxepunk::Screen >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camera") ) { camera=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volume") ) { return set_volume(inValue); }
		if (HX_FIELD_EQ(inName,"random") ) { random=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=inValue.Cast< ::com::haxepunk::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"engine") ) { engine=inValue.Cast< ::com::haxepunk::Engine >(); return inValue; }
		if (HX_FIELD_EQ(inName,"point2") ) { point2=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"entity") ) { entity=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"elapsed") ) { elapsed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tweener") ) { tweener=inValue.Cast< ::com::haxepunk::Tweener >(); return inValue; }
		if (HX_FIELD_EQ(inName,"focused") ) { focused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { _bitmap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_volume") ) { _volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_console") ) { _console=inValue.Cast< ::com::haxepunk::debug::Console >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"halfWidth") ) { halfWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_gameTime") ) { _gameTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"halfHeight") ) { halfHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderMode") ) { renderMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullscreen") ) { return set_fullscreen(inValue); }
		if (HX_FIELD_EQ(inName,"randomSeed") ) { if (inCallProp) return set_randomSeed(inValue);randomSeed=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"windowWidth") ) { windowWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultFont") ) { defaultFont=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updateTime") ) { _updateTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderTime") ) { _renderTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_systemTime") ) { _systemTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"windowHeight") ) { windowHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"orientations") ) { orientations=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_soundTransform") ) { _soundTransform=inValue.Cast< ::flash::media::SoundTransform >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"assignedFrameRate") ) { assignedFrameRate=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HXP_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get_NUMBER_MAX_VALUE"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("windowWidth"),
	HX_CSTRING("windowHeight"),
	HX_CSTRING("fixed"),
	HX_CSTRING("frameRate"),
	HX_CSTRING("assignedFrameRate"),
	HX_CSTRING("elapsed"),
	HX_CSTRING("rate"),
	HX_CSTRING("screen"),
	HX_CSTRING("buffer"),
	HX_CSTRING("bounds"),
	HX_CSTRING("defaultFont"),
	HX_CSTRING("camera"),
	HX_CSTRING("tweener"),
	HX_CSTRING("focused"),
	HX_CSTRING("halfWidth"),
	HX_CSTRING("halfHeight"),
	HX_CSTRING("renderMode"),
	HX_CSTRING("orientations"),
	HX_CSTRING("get_world"),
	HX_CSTRING("set_world"),
	HX_CSTRING("get_scene"),
	HX_CSTRING("set_scene"),
	HX_CSTRING("swapScene"),
	HX_CSTRING("resize"),
	HX_CSTRING("clear"),
	HX_CSTRING("setCamera"),
	HX_CSTRING("resetCamera"),
	HX_CSTRING("get_fullscreen"),
	HX_CSTRING("set_fullscreen"),
	HX_CSTRING("get_volume"),
	HX_CSTRING("set_volume"),
	HX_CSTRING("get_pan"),
	HX_CSTRING("set_pan"),
	HX_CSTRING("choose"),
	HX_CSTRING("sign"),
	HX_CSTRING("approach"),
	HX_CSTRING("lerp"),
	HX_CSTRING("colorLerp"),
	HX_CSTRING("stepTowards"),
	HX_CSTRING("anchorTo"),
	HX_CSTRING("angle"),
	HX_CSTRING("angleXY"),
	HX_CSTRING("angleDifference"),
	HX_CSTRING("rotateAround"),
	HX_CSTRING("round"),
	HX_CSTRING("distance"),
	HX_CSTRING("distanceSquared"),
	HX_CSTRING("distanceRects"),
	HX_CSTRING("distanceRectPoint"),
	HX_CSTRING("clamp"),
	HX_CSTRING("clampInRect"),
	HX_CSTRING("scale"),
	HX_CSTRING("scaleClamp"),
	HX_CSTRING("randomSeed"),
	HX_CSTRING("set_randomSeed"),
	HX_CSTRING("randomizeSeed"),
	HX_CSTRING("random"),
	HX_CSTRING("get_random"),
	HX_CSTRING("rand"),
	HX_CSTRING("indexOf"),
	HX_CSTRING("next"),
	HX_CSTRING("prev"),
	HX_CSTRING("swap"),
	HX_CSTRING("getColorRGB"),
	HX_CSTRING("getColorHSV"),
	HX_CSTRING("getColorHue"),
	HX_CSTRING("getColorSaturation"),
	HX_CSTRING("getColorValue"),
	HX_CSTRING("getRed"),
	HX_CSTRING("getGreen"),
	HX_CSTRING("getBlue"),
	HX_CSTRING("getBitmap"),
	HX_CSTRING("createBitmap"),
	HX_CSTRING("convertColor"),
	HX_CSTRING("timeFlag"),
	HX_CSTRING("get_console"),
	HX_CSTRING("consoleEnabled"),
	HX_CSTRING("log"),
	HX_CSTRING("watch"),
	HX_CSTRING("tween"),
	HX_CSTRING("alarm"),
	HX_CSTRING("frames"),
	HX_CSTRING("shuffle"),
	HX_CSTRING("time"),
	HX_CSTRING("set_time"),
	HX_CSTRING("gotoIsNull"),
	HX_CSTRING("_scene"),
	HX_CSTRING("_goto"),
	HX_CSTRING("_console"),
	HX_CSTRING("_time"),
	HX_CSTRING("_updateTime"),
	HX_CSTRING("_renderTime"),
	HX_CSTRING("_gameTime"),
	HX_CSTRING("_systemTime"),
	HX_CSTRING("_bitmap"),
	HX_CSTRING("_seed"),
	HX_CSTRING("_volume"),
	HX_CSTRING("_pan"),
	HX_CSTRING("_soundTransform"),
	HX_CSTRING("get_DEG"),
	HX_CSTRING("get_RAD"),
	HX_CSTRING("stage"),
	HX_CSTRING("engine"),
	HX_CSTRING("point"),
	HX_CSTRING("point2"),
	HX_CSTRING("zero"),
	HX_CSTRING("rect"),
	HX_CSTRING("matrix"),
	HX_CSTRING("sprite"),
	HX_CSTRING("entity"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HXP_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HXP_obj::width,"width");
	HX_MARK_MEMBER_NAME(HXP_obj::height,"height");
	HX_MARK_MEMBER_NAME(HXP_obj::windowWidth,"windowWidth");
	HX_MARK_MEMBER_NAME(HXP_obj::windowHeight,"windowHeight");
	HX_MARK_MEMBER_NAME(HXP_obj::fixed,"fixed");
	HX_MARK_MEMBER_NAME(HXP_obj::frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(HXP_obj::assignedFrameRate,"assignedFrameRate");
	HX_MARK_MEMBER_NAME(HXP_obj::elapsed,"elapsed");
	HX_MARK_MEMBER_NAME(HXP_obj::rate,"rate");
	HX_MARK_MEMBER_NAME(HXP_obj::screen,"screen");
	HX_MARK_MEMBER_NAME(HXP_obj::buffer,"buffer");
	HX_MARK_MEMBER_NAME(HXP_obj::bounds,"bounds");
	HX_MARK_MEMBER_NAME(HXP_obj::defaultFont,"defaultFont");
	HX_MARK_MEMBER_NAME(HXP_obj::camera,"camera");
	HX_MARK_MEMBER_NAME(HXP_obj::tweener,"tweener");
	HX_MARK_MEMBER_NAME(HXP_obj::focused,"focused");
	HX_MARK_MEMBER_NAME(HXP_obj::halfWidth,"halfWidth");
	HX_MARK_MEMBER_NAME(HXP_obj::halfHeight,"halfHeight");
	HX_MARK_MEMBER_NAME(HXP_obj::renderMode,"renderMode");
	HX_MARK_MEMBER_NAME(HXP_obj::orientations,"orientations");
	HX_MARK_MEMBER_NAME(HXP_obj::randomSeed,"randomSeed");
	HX_MARK_MEMBER_NAME(HXP_obj::random,"random");
	HX_MARK_MEMBER_NAME(HXP_obj::log,"log");
	HX_MARK_MEMBER_NAME(HXP_obj::watch,"watch");
	HX_MARK_MEMBER_NAME(HXP_obj::time,"time");
	HX_MARK_MEMBER_NAME(HXP_obj::_scene,"_scene");
	HX_MARK_MEMBER_NAME(HXP_obj::_goto,"_goto");
	HX_MARK_MEMBER_NAME(HXP_obj::_console,"_console");
	HX_MARK_MEMBER_NAME(HXP_obj::_time,"_time");
	HX_MARK_MEMBER_NAME(HXP_obj::_updateTime,"_updateTime");
	HX_MARK_MEMBER_NAME(HXP_obj::_renderTime,"_renderTime");
	HX_MARK_MEMBER_NAME(HXP_obj::_gameTime,"_gameTime");
	HX_MARK_MEMBER_NAME(HXP_obj::_systemTime,"_systemTime");
	HX_MARK_MEMBER_NAME(HXP_obj::_bitmap,"_bitmap");
	HX_MARK_MEMBER_NAME(HXP_obj::_seed,"_seed");
	HX_MARK_MEMBER_NAME(HXP_obj::_volume,"_volume");
	HX_MARK_MEMBER_NAME(HXP_obj::_pan,"_pan");
	HX_MARK_MEMBER_NAME(HXP_obj::_soundTransform,"_soundTransform");
	HX_MARK_MEMBER_NAME(HXP_obj::stage,"stage");
	HX_MARK_MEMBER_NAME(HXP_obj::engine,"engine");
	HX_MARK_MEMBER_NAME(HXP_obj::point,"point");
	HX_MARK_MEMBER_NAME(HXP_obj::point2,"point2");
	HX_MARK_MEMBER_NAME(HXP_obj::zero,"zero");
	HX_MARK_MEMBER_NAME(HXP_obj::rect,"rect");
	HX_MARK_MEMBER_NAME(HXP_obj::matrix,"matrix");
	HX_MARK_MEMBER_NAME(HXP_obj::sprite,"sprite");
	HX_MARK_MEMBER_NAME(HXP_obj::entity,"entity");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HXP_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HXP_obj::width,"width");
	HX_VISIT_MEMBER_NAME(HXP_obj::height,"height");
	HX_VISIT_MEMBER_NAME(HXP_obj::windowWidth,"windowWidth");
	HX_VISIT_MEMBER_NAME(HXP_obj::windowHeight,"windowHeight");
	HX_VISIT_MEMBER_NAME(HXP_obj::fixed,"fixed");
	HX_VISIT_MEMBER_NAME(HXP_obj::frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(HXP_obj::assignedFrameRate,"assignedFrameRate");
	HX_VISIT_MEMBER_NAME(HXP_obj::elapsed,"elapsed");
	HX_VISIT_MEMBER_NAME(HXP_obj::rate,"rate");
	HX_VISIT_MEMBER_NAME(HXP_obj::screen,"screen");
	HX_VISIT_MEMBER_NAME(HXP_obj::buffer,"buffer");
	HX_VISIT_MEMBER_NAME(HXP_obj::bounds,"bounds");
	HX_VISIT_MEMBER_NAME(HXP_obj::defaultFont,"defaultFont");
	HX_VISIT_MEMBER_NAME(HXP_obj::camera,"camera");
	HX_VISIT_MEMBER_NAME(HXP_obj::tweener,"tweener");
	HX_VISIT_MEMBER_NAME(HXP_obj::focused,"focused");
	HX_VISIT_MEMBER_NAME(HXP_obj::halfWidth,"halfWidth");
	HX_VISIT_MEMBER_NAME(HXP_obj::halfHeight,"halfHeight");
	HX_VISIT_MEMBER_NAME(HXP_obj::renderMode,"renderMode");
	HX_VISIT_MEMBER_NAME(HXP_obj::orientations,"orientations");
	HX_VISIT_MEMBER_NAME(HXP_obj::randomSeed,"randomSeed");
	HX_VISIT_MEMBER_NAME(HXP_obj::random,"random");
	HX_VISIT_MEMBER_NAME(HXP_obj::log,"log");
	HX_VISIT_MEMBER_NAME(HXP_obj::watch,"watch");
	HX_VISIT_MEMBER_NAME(HXP_obj::time,"time");
	HX_VISIT_MEMBER_NAME(HXP_obj::_scene,"_scene");
	HX_VISIT_MEMBER_NAME(HXP_obj::_goto,"_goto");
	HX_VISIT_MEMBER_NAME(HXP_obj::_console,"_console");
	HX_VISIT_MEMBER_NAME(HXP_obj::_time,"_time");
	HX_VISIT_MEMBER_NAME(HXP_obj::_updateTime,"_updateTime");
	HX_VISIT_MEMBER_NAME(HXP_obj::_renderTime,"_renderTime");
	HX_VISIT_MEMBER_NAME(HXP_obj::_gameTime,"_gameTime");
	HX_VISIT_MEMBER_NAME(HXP_obj::_systemTime,"_systemTime");
	HX_VISIT_MEMBER_NAME(HXP_obj::_bitmap,"_bitmap");
	HX_VISIT_MEMBER_NAME(HXP_obj::_seed,"_seed");
	HX_VISIT_MEMBER_NAME(HXP_obj::_volume,"_volume");
	HX_VISIT_MEMBER_NAME(HXP_obj::_pan,"_pan");
	HX_VISIT_MEMBER_NAME(HXP_obj::_soundTransform,"_soundTransform");
	HX_VISIT_MEMBER_NAME(HXP_obj::stage,"stage");
	HX_VISIT_MEMBER_NAME(HXP_obj::engine,"engine");
	HX_VISIT_MEMBER_NAME(HXP_obj::point,"point");
	HX_VISIT_MEMBER_NAME(HXP_obj::point2,"point2");
	HX_VISIT_MEMBER_NAME(HXP_obj::zero,"zero");
	HX_VISIT_MEMBER_NAME(HXP_obj::rect,"rect");
	HX_VISIT_MEMBER_NAME(HXP_obj::matrix,"matrix");
	HX_VISIT_MEMBER_NAME(HXP_obj::sprite,"sprite");
	HX_VISIT_MEMBER_NAME(HXP_obj::entity,"entity");
};

#endif

Class HXP_obj::__mClass;

void HXP_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.HXP"), hx::TCanCast< HXP_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void HXP_obj::__boot()
{
	frameRate= (int)0;
	rate= (int)1;
	defaultFont= HX_CSTRING("font/04B_03__.ttf");
	camera= ::flash::geom::Point_obj::__new(null(),null());
	tweener= ::com::haxepunk::Tweener_obj::__new();
	focused= false;
	orientations= Array_obj< int >::__new();

HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_0_1)
Void run(Dynamic data){
	HX_STACK_FRAME("*","_Function_0_1","*._Function_0_1","com/haxepunk/HXP.hx",971)
	HX_STACK_ARG(data,"data")
	{
		HX_STACK_LINE(971)
		if (((::com::haxepunk::HXP_obj::_console != null()))){
			HX_STACK_LINE(973)
			::com::haxepunk::HXP_obj::_console->log(data);
		}
	}
	return null();
}
HX_END_LOCAL_FUNC1((void))

	log= ::Reflect_obj::makeVarArgs( Dynamic(new _Function_0_1()));

HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_0_2)
Void run(Dynamic properties){
	HX_STACK_FRAME("*","_Function_0_2","*._Function_0_2","com/haxepunk/HXP.hx",983)
	HX_STACK_ARG(properties,"properties")
	{
		HX_STACK_LINE(983)
		if (((::com::haxepunk::HXP_obj::_console != null()))){
			HX_STACK_LINE(985)
			::com::haxepunk::HXP_obj::_console->watch(properties);
		}
	}
	return null();
}
HX_END_LOCAL_FUNC1((void))

	watch= ::Reflect_obj::makeVarArgs( Dynamic(new _Function_0_2()));
	_scene= ::com::haxepunk::Scene_obj::__new();
	_bitmap= ::haxe::ds::StringMap_obj::__new();
	_seed= (int)0;
	_volume= (int)1;
	_pan= (int)0;
	_soundTransform= ::flash::media::SoundTransform_obj::__new(null(),null());
	point= ::flash::geom::Point_obj::__new(null(),null());
	point2= ::flash::geom::Point_obj::__new(null(),null());
	zero= ::flash::geom::Point_obj::__new(null(),null());
	rect= ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
	matrix= ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	sprite= ::flash::display::Sprite_obj::__new();
}

} // end namespace com
} // end namespace haxepunk
