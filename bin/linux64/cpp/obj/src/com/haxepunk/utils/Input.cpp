#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Input
#include <com/haxepunk/utils/Input.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_JoyButtonState
#include <com/haxepunk/utils/JoyButtonState.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Joystick
#include <com/haxepunk/utils/Joystick.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Touch
#include <com/haxepunk/utils/Touch.h>
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
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_KeyboardEvent
#include <flash/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_events_TouchEvent
#include <flash/events/TouchEvent.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_ui_Multitouch
#include <flash/ui/Multitouch.h>
#endif
#ifndef INCLUDED_flash_ui_MultitouchInputMode
#include <flash/ui/MultitouchInputMode.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_events_JoystickEvent
#include <openfl/events/JoystickEvent.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void Input_obj::__construct()
{
	return null();
}

Input_obj::~Input_obj() { }

Dynamic Input_obj::__CreateEmpty() { return  new Input_obj; }
hx::ObjectPtr< Input_obj > Input_obj::__new()
{  hx::ObjectPtr< Input_obj > result = new Input_obj();
	result->__construct();
	return result;}

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Input_obj > result = new Input_obj();
	result->__construct();
	return result;}

::String Input_obj::keyString;

int Input_obj::lastKey;

bool Input_obj::mouseDown;

bool Input_obj::mouseUp;

bool Input_obj::mousePressed;

bool Input_obj::mouseReleased;

bool Input_obj::mouseWheel;

bool Input_obj::multiTouchSupported;

int Input_obj::get_mouseWheelDelta( ){
	HX_STACK_FRAME("Input","get_mouseWheelDelta","Input.get_mouseWheelDelta","com/haxepunk/utils/Input.hx",63)
	HX_STACK_LINE(64)
	if ((::com::haxepunk::utils::Input_obj::mouseWheel)){
		HX_STACK_LINE(66)
		::com::haxepunk::utils::Input_obj::mouseWheel = false;
		HX_STACK_LINE(67)
		return ::com::haxepunk::utils::Input_obj::_mouseWheelDelta;
	}
	HX_STACK_LINE(69)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_mouseWheelDelta,return )

int Input_obj::get_mouseX( ){
	HX_STACK_FRAME("Input","get_mouseX","Input.get_mouseX","com/haxepunk/utils/Input.hx",78)
	HX_STACK_LINE(78)
	return ::com::haxepunk::HXP_obj::screen->get_mouseX();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_mouseX,return )

int Input_obj::get_mouseY( ){
	HX_STACK_FRAME("Input","get_mouseY","Input.get_mouseY","com/haxepunk/utils/Input.hx",87)
	HX_STACK_LINE(87)
	return ::com::haxepunk::HXP_obj::screen->get_mouseY();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_mouseY,return )

int Input_obj::get_mouseFlashX( ){
	HX_STACK_FRAME("Input","get_mouseFlashX","Input.get_mouseFlashX","com/haxepunk/utils/Input.hx",96)
	HX_STACK_LINE(96)
	return ::Std_obj::_int(::com::haxepunk::HXP_obj::stage->get_mouseX());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_mouseFlashX,return )

int Input_obj::get_mouseFlashY( ){
	HX_STACK_FRAME("Input","get_mouseFlashY","Input.get_mouseFlashY","com/haxepunk/utils/Input.hx",105)
	HX_STACK_LINE(105)
	return ::Std_obj::_int(::com::haxepunk::HXP_obj::stage->get_mouseY());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_mouseFlashY,return )

Void Input_obj::define( ::String name,Array< int > keys){
{
		HX_STACK_FRAME("Input","define","Input.define","com/haxepunk/utils/Input.hx",115)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(keys,"keys")
		HX_STACK_LINE(115)
		::com::haxepunk::utils::Input_obj::_control->set(name,keys);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Input_obj,define,(void))

bool Input_obj::check( Dynamic input){
	HX_STACK_FRAME("Input","check","Input.check","com/haxepunk/utils/Input.hx",124)
	HX_STACK_ARG(input,"input")
	HX_STACK_LINE(125)
	if ((::Std_obj::is(input,hx::ClassOf< ::String >()))){
		struct _Function_2_1{
			inline static bool Block( Dynamic &input){
				HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/utils/Input.hx",128)
				{
					HX_STACK_LINE(128)
					::String key = input;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(128)
					return ::com::haxepunk::utils::Input_obj::_control->exists(key);
				}
				return null();
			}
		};
		HX_STACK_LINE(128)
		if ((!(_Function_2_1::Block(input)))){
			HX_STACK_LINE(130)
			::com::haxepunk::HXP_obj::log(((HX_CSTRING("Input '") + ::Std_obj::string(input)) + HX_CSTRING("' not defined")));
			HX_STACK_LINE(131)
			return false;
		}
		HX_STACK_LINE(134)
		Array< int > v;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			::String key = input;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(134)
			v = ::com::haxepunk::utils::Input_obj::_control->get(key);
		}
		HX_STACK_LINE(135)
		int i = v->length;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(136)
		while((((i)-- > (int)0))){
			HX_STACK_LINE(138)
			if (((v->__get(i) < (int)0))){
				HX_STACK_LINE(140)
				if (((::com::haxepunk::utils::Input_obj::_keyNum > (int)0))){
					HX_STACK_LINE(140)
					return true;
				}
				HX_STACK_LINE(141)
				continue;
			}
			HX_STACK_LINE(143)
			if (((::com::haxepunk::utils::Input_obj::_key->__get(v->__get(i)) == true))){
				HX_STACK_LINE(143)
				return true;
			}
		}
		HX_STACK_LINE(145)
		return false;
	}
	HX_STACK_LINE(147)
	if (((input < (int)0))){
		HX_STACK_LINE(147)
		return (::com::haxepunk::utils::Input_obj::_keyNum > (int)0);
	}
	else{
		HX_STACK_LINE(147)
		return ::com::haxepunk::utils::Input_obj::_key->__get(input);
	}
	HX_STACK_LINE(147)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,check,return )

bool Input_obj::pressed( Dynamic input){
	HX_STACK_FRAME("Input","pressed","Input.pressed","com/haxepunk/utils/Input.hx",156)
	HX_STACK_ARG(input,"input")
	HX_STACK_LINE(157)
	if ((::Std_obj::is(input,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(159)
		Array< int > v;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(159)
		{
			HX_STACK_LINE(159)
			::String key = input;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(159)
			v = ::com::haxepunk::utils::Input_obj::_control->get(key);
		}
		HX_STACK_LINE(160)
		int i = v->length;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(161)
		while((((i)-- > (int)0))){
			HX_STACK_LINE(163)
			if (((  (((v->__get(i) < (int)0))) ? bool((::com::haxepunk::utils::Input_obj::_pressNum != (int)0)) : bool((::com::haxepunk::utils::Input_obj::indexOf(::com::haxepunk::utils::Input_obj::_press,v->__get(i)) >= (int)0)) ))){
				HX_STACK_LINE(163)
				return true;
			}
		}
		HX_STACK_LINE(165)
		return false;
	}
	HX_STACK_LINE(167)
	if (((input < (int)0))){
		HX_STACK_LINE(167)
		return (::com::haxepunk::utils::Input_obj::_pressNum != (int)0);
	}
	else{
		HX_STACK_LINE(167)
		return (::com::haxepunk::utils::Input_obj::indexOf(::com::haxepunk::utils::Input_obj::_press,input) >= (int)0);
	}
	HX_STACK_LINE(167)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,pressed,return )

bool Input_obj::released( Dynamic input){
	HX_STACK_FRAME("Input","released","Input.released","com/haxepunk/utils/Input.hx",176)
	HX_STACK_ARG(input,"input")
	HX_STACK_LINE(177)
	if ((::Std_obj::is(input,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(179)
		Array< int > v;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(179)
		{
			HX_STACK_LINE(179)
			::String key = input;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(179)
			v = ::com::haxepunk::utils::Input_obj::_control->get(key);
		}
		HX_STACK_LINE(180)
		int i = v->length;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(181)
		while((((i)-- > (int)0))){
			HX_STACK_LINE(183)
			if (((  (((v->__get(i) < (int)0))) ? bool((::com::haxepunk::utils::Input_obj::_releaseNum != (int)0)) : bool((::com::haxepunk::utils::Input_obj::indexOf(::com::haxepunk::utils::Input_obj::_release,v->__get(i)) >= (int)0)) ))){
				HX_STACK_LINE(183)
				return true;
			}
		}
		HX_STACK_LINE(185)
		return false;
	}
	HX_STACK_LINE(187)
	if (((input < (int)0))){
		HX_STACK_LINE(187)
		return (::com::haxepunk::utils::Input_obj::_releaseNum != (int)0);
	}
	else{
		HX_STACK_LINE(187)
		return (::com::haxepunk::utils::Input_obj::indexOf(::com::haxepunk::utils::Input_obj::_release,input) >= (int)0);
	}
	HX_STACK_LINE(187)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,released,return )

Void Input_obj::touchPoints( Dynamic touchCallback){
{
		HX_STACK_FRAME("Input","touchPoints","Input.touchPoints","com/haxepunk/utils/Input.hx",192)
		HX_STACK_ARG(touchCallback,"touchCallback")
		HX_STACK_LINE(192)
		for(::cpp::FastIterator_obj< ::com::haxepunk::utils::Touch > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::utils::Touch >(::com::haxepunk::utils::Input_obj::_touches->iterator());  __it->hasNext(); ){
			::com::haxepunk::utils::Touch touch = __it->next();
			touchCallback(touch).Cast< Void >();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,touchPoints,(void))

::haxe::ds::IntMap Input_obj::get_touches( ){
	HX_STACK_FRAME("Input","get_touches","Input.get_touches","com/haxepunk/utils/Input.hx",200)
	HX_STACK_LINE(200)
	return ::com::haxepunk::utils::Input_obj::_touches;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_touches,return )

int Input_obj::indexOf( Array< int > a,int v){
	HX_STACK_FRAME("Input","indexOf","Input.indexOf","com/haxepunk/utils/Input.hx",213)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(214)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(215)
	{
		HX_STACK_LINE(215)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(215)
		while(((_g < a->length))){
			HX_STACK_LINE(215)
			int v2 = a->__get(_g);		HX_STACK_VAR(v2,"v2");
			HX_STACK_LINE(215)
			++(_g);
			HX_STACK_LINE(216)
			if (((v == v2))){
				HX_STACK_LINE(217)
				return i;
			}
			HX_STACK_LINE(218)
			(i)++;
		}
	}
	HX_STACK_LINE(220)
	return (int)-1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Input_obj,indexOf,return )

::com::haxepunk::utils::Joystick Input_obj::joystick( int id){
	HX_STACK_FRAME("Input","joystick","Input.joystick","com/haxepunk/utils/Input.hx",229)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(230)
	::com::haxepunk::utils::Joystick joy = ::com::haxepunk::utils::Input_obj::_joysticks->get(id);		HX_STACK_VAR(joy,"joy");
	HX_STACK_LINE(231)
	if (((joy == null()))){
		HX_STACK_LINE(233)
		joy = ::com::haxepunk::utils::Joystick_obj::__new();
		HX_STACK_LINE(234)
		::com::haxepunk::utils::Input_obj::_joysticks->set(id,joy);
	}
	HX_STACK_LINE(236)
	return joy;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,joystick,return )

int Input_obj::get_joysticks( ){
	HX_STACK_FRAME("Input","get_joysticks","Input.get_joysticks","com/haxepunk/utils/Input.hx",244)
	HX_STACK_LINE(245)
	int count = (int)0;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(246)
	for(::cpp::FastIterator_obj< ::com::haxepunk::utils::Joystick > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::utils::Joystick >(::com::haxepunk::utils::Input_obj::_joysticks->iterator());  __it->hasNext(); ){
		::com::haxepunk::utils::Joystick joystick = __it->next();
		if ((joystick->get_connected())){
			HX_STACK_LINE(250)
			hx::AddEq(count,(int)1);
		}
;
	}
	HX_STACK_LINE(253)
	return count;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_joysticks,return )

Void Input_obj::enable( ){
{
		HX_STACK_FRAME("Input","enable","Input.enable","com/haxepunk/utils/Input.hx",261)
		HX_STACK_LINE(261)
		if (((bool(!(::com::haxepunk::utils::Input_obj::_enabled)) && bool((::com::haxepunk::HXP_obj::stage != null()))))){
			HX_STACK_LINE(263)
			::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::KeyboardEvent_obj::KEY_DOWN,::com::haxepunk::utils::Input_obj::onKeyDown_dyn(),false,(int)2,null());
			HX_STACK_LINE(264)
			::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::KeyboardEvent_obj::KEY_UP,::com::haxepunk::utils::Input_obj::onKeyUp_dyn(),false,(int)2,null());
			HX_STACK_LINE(265)
			::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,::com::haxepunk::utils::Input_obj::onMouseDown_dyn(),false,(int)2,null());
			HX_STACK_LINE(266)
			::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,::com::haxepunk::utils::Input_obj::onMouseUp_dyn(),false,(int)2,null());
			HX_STACK_LINE(267)
			::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::MouseEvent_obj::MOUSE_WHEEL,::com::haxepunk::utils::Input_obj::onMouseWheel_dyn(),false,(int)2,null());
			HX_STACK_LINE(269)
			::com::haxepunk::utils::Input_obj::multiTouchSupported = ::flash::ui::Multitouch_obj::get_supportsTouchEvents();
			HX_STACK_LINE(270)
			if ((::com::haxepunk::utils::Input_obj::multiTouchSupported)){
				HX_STACK_LINE(272)
				::flash::ui::Multitouch_obj::set_inputMode(::flash::ui::MultitouchInputMode_obj::TOUCH_POINT);
				HX_STACK_LINE(274)
				::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::TouchEvent_obj::TOUCH_BEGIN,::com::haxepunk::utils::Input_obj::onTouchBegin_dyn(),null(),null(),null());
				HX_STACK_LINE(275)
				::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::TouchEvent_obj::TOUCH_MOVE,::com::haxepunk::utils::Input_obj::onTouchMove_dyn(),null(),null(),null());
				HX_STACK_LINE(276)
				::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::TouchEvent_obj::TOUCH_END,::com::haxepunk::utils::Input_obj::onTouchEnd_dyn(),null(),null(),null());
			}
			HX_STACK_LINE(280)
			::com::haxepunk::HXP_obj::stage->addEventListener(HX_CSTRING("axisMove"),::com::haxepunk::utils::Input_obj::onJoyAxisMove_dyn(),null(),null(),null());
			HX_STACK_LINE(281)
			::com::haxepunk::HXP_obj::stage->addEventListener(HX_CSTRING("ballMove"),::com::haxepunk::utils::Input_obj::onJoyBallMove_dyn(),null(),null(),null());
			HX_STACK_LINE(282)
			::com::haxepunk::HXP_obj::stage->addEventListener(HX_CSTRING("buttonDown"),::com::haxepunk::utils::Input_obj::onJoyButtonDown_dyn(),null(),null(),null());
			HX_STACK_LINE(283)
			::com::haxepunk::HXP_obj::stage->addEventListener(HX_CSTRING("buttonUp"),::com::haxepunk::utils::Input_obj::onJoyButtonUp_dyn(),null(),null(),null());
			HX_STACK_LINE(284)
			::com::haxepunk::HXP_obj::stage->addEventListener(HX_CSTRING("hatMove"),::com::haxepunk::utils::Input_obj::onJoyHatMove_dyn(),null(),null(),null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,enable,(void))

Void Input_obj::update( ){
{
		HX_STACK_FRAME("Input","update","Input.update","com/haxepunk/utils/Input.hx",293)
		HX_STACK_LINE(294)
		while((((::com::haxepunk::utils::Input_obj::_pressNum)-- > (int)-1))){
			HX_STACK_LINE(294)
			::com::haxepunk::utils::Input_obj::_press[::com::haxepunk::utils::Input_obj::_pressNum] = (int)-1;
		}
		HX_STACK_LINE(295)
		::com::haxepunk::utils::Input_obj::_pressNum = (int)0;
		HX_STACK_LINE(296)
		while((((::com::haxepunk::utils::Input_obj::_releaseNum)-- > (int)-1))){
			HX_STACK_LINE(296)
			::com::haxepunk::utils::Input_obj::_release[::com::haxepunk::utils::Input_obj::_releaseNum] = (int)-1;
		}
		HX_STACK_LINE(297)
		::com::haxepunk::utils::Input_obj::_releaseNum = (int)0;
		HX_STACK_LINE(298)
		if ((::com::haxepunk::utils::Input_obj::mousePressed)){
			HX_STACK_LINE(298)
			::com::haxepunk::utils::Input_obj::mousePressed = false;
		}
		HX_STACK_LINE(299)
		if ((::com::haxepunk::utils::Input_obj::mouseReleased)){
			HX_STACK_LINE(299)
			::com::haxepunk::utils::Input_obj::mouseReleased = false;
		}
		HX_STACK_LINE(301)
		for(::cpp::FastIterator_obj< ::com::haxepunk::utils::Joystick > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::utils::Joystick >(::com::haxepunk::utils::Input_obj::_joysticks->iterator());  __it->hasNext(); ){
			::com::haxepunk::utils::Joystick joystick = __it->next();
			joystick->update();
		}
		HX_STACK_LINE(303)
		for(::cpp::FastIterator_obj< ::com::haxepunk::utils::Touch > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::utils::Touch >(::com::haxepunk::utils::Input_obj::_touches->iterator());  __it->hasNext(); ){
			::com::haxepunk::utils::Touch touch = __it->next();
			touch->update();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,update,(void))

Void Input_obj::onKeyDown( ::flash::events::KeyboardEvent e){
{
		HX_STACK_FRAME("Input","onKeyDown","Input.onKeyDown","com/haxepunk/utils/Input.hx",307)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(308)
		int code = ::com::haxepunk::utils::Input_obj::lastKey = e->keyCode;		HX_STACK_VAR(code,"code");
		HX_STACK_LINE(310)
		if (((code == (int)8))){
			HX_STACK_LINE(310)
			::com::haxepunk::utils::Input_obj::keyString = ::com::haxepunk::utils::Input_obj::keyString.substr((int)0,(::com::haxepunk::utils::Input_obj::keyString.length - (int)1));
		}
		else{
			HX_STACK_LINE(311)
			if (((bool((bool((bool((code > (int)47)) && bool((code < (int)58)))) || bool((bool((code > (int)64)) && bool((code < (int)91)))))) || bool((code == (int)32))))){
				HX_STACK_LINE(313)
				if (((::com::haxepunk::utils::Input_obj::keyString.length > (int)100))){
					HX_STACK_LINE(313)
					::com::haxepunk::utils::Input_obj::keyString = ::com::haxepunk::utils::Input_obj::keyString.substr((int)1,null());
				}
				HX_STACK_LINE(314)
				::String _char = ::String::fromCharCode(code);		HX_STACK_VAR(_char,"char");
				HX_STACK_LINE(316)
				if (((e->shiftKey != ::com::haxepunk::utils::Input_obj::check((int)20)))){
					HX_STACK_LINE(317)
					_char = _char.toUpperCase();
				}
				else{
					HX_STACK_LINE(318)
					_char = _char.toLowerCase();
				}
				HX_STACK_LINE(320)
				hx::AddEq(::com::haxepunk::utils::Input_obj::keyString,_char);
			}
		}
		HX_STACK_LINE(323)
		if ((!(::com::haxepunk::utils::Input_obj::_key->__get(code)))){
			HX_STACK_LINE(325)
			::com::haxepunk::utils::Input_obj::_key[code] = true;
			HX_STACK_LINE(326)
			(::com::haxepunk::utils::Input_obj::_keyNum)++;
			HX_STACK_LINE(327)
			::com::haxepunk::utils::Input_obj::_press[(::com::haxepunk::utils::Input_obj::_pressNum)++] = code;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onKeyDown,(void))

Void Input_obj::onKeyUp( ::flash::events::KeyboardEvent e){
{
		HX_STACK_FRAME("Input","onKeyUp","Input.onKeyUp","com/haxepunk/utils/Input.hx",332)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(333)
		int code = e->keyCode;		HX_STACK_VAR(code,"code");
		HX_STACK_LINE(334)
		if ((::com::haxepunk::utils::Input_obj::_key->__get(code))){
			HX_STACK_LINE(336)
			::com::haxepunk::utils::Input_obj::_key[code] = false;
			HX_STACK_LINE(337)
			(::com::haxepunk::utils::Input_obj::_keyNum)--;
			HX_STACK_LINE(338)
			::com::haxepunk::utils::Input_obj::_release[(::com::haxepunk::utils::Input_obj::_releaseNum)++] = code;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onKeyUp,(void))

Void Input_obj::onMouseDown( ::flash::events::MouseEvent e){
{
		HX_STACK_FRAME("Input","onMouseDown","Input.onMouseDown","com/haxepunk/utils/Input.hx",344)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(344)
		if ((!(::com::haxepunk::utils::Input_obj::mouseDown))){
			HX_STACK_LINE(346)
			::com::haxepunk::utils::Input_obj::mouseDown = true;
			HX_STACK_LINE(347)
			::com::haxepunk::utils::Input_obj::mouseUp = false;
			HX_STACK_LINE(348)
			::com::haxepunk::utils::Input_obj::mousePressed = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onMouseDown,(void))

Void Input_obj::onMouseUp( ::flash::events::MouseEvent e){
{
		HX_STACK_FRAME("Input","onMouseUp","Input.onMouseUp","com/haxepunk/utils/Input.hx",353)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(354)
		::com::haxepunk::utils::Input_obj::mouseDown = false;
		HX_STACK_LINE(355)
		::com::haxepunk::utils::Input_obj::mouseUp = true;
		HX_STACK_LINE(356)
		::com::haxepunk::utils::Input_obj::mouseReleased = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onMouseUp,(void))

Void Input_obj::onMouseWheel( ::flash::events::MouseEvent e){
{
		HX_STACK_FRAME("Input","onMouseWheel","Input.onMouseWheel","com/haxepunk/utils/Input.hx",360)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(361)
		::com::haxepunk::utils::Input_obj::mouseWheel = true;
		HX_STACK_LINE(362)
		::com::haxepunk::utils::Input_obj::_mouseWheelDelta = e->delta;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onMouseWheel,(void))

Void Input_obj::onTouchBegin( ::flash::events::TouchEvent e){
{
		HX_STACK_FRAME("Input","onTouchBegin","Input.onTouchBegin","com/haxepunk/utils/Input.hx",366)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(367)
		::com::haxepunk::utils::Touch touchPoint = ::com::haxepunk::utils::Touch_obj::__new((Float(e->stageX) / Float(::com::haxepunk::HXP_obj::screen->fullScaleX)),(Float(e->stageY) / Float(::com::haxepunk::HXP_obj::screen->fullScaleY)),e->touchPointID);		HX_STACK_VAR(touchPoint,"touchPoint");
		HX_STACK_LINE(368)
		::com::haxepunk::utils::Input_obj::_touches->set(e->touchPointID,touchPoint);
		HX_STACK_LINE(369)
		hx::AddEq(::com::haxepunk::utils::Input_obj::_touchNum,(int)1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onTouchBegin,(void))

Void Input_obj::onTouchMove( ::flash::events::TouchEvent e){
{
		HX_STACK_FRAME("Input","onTouchMove","Input.onTouchMove","com/haxepunk/utils/Input.hx",373)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(374)
		::com::haxepunk::utils::Touch point = ::com::haxepunk::utils::Input_obj::_touches->get(e->touchPointID);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(375)
		point->x = (Float(e->stageX) / Float(::com::haxepunk::HXP_obj::screen->fullScaleX));
		HX_STACK_LINE(376)
		point->y = (Float(e->stageY) / Float(::com::haxepunk::HXP_obj::screen->fullScaleY));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onTouchMove,(void))

Void Input_obj::onTouchEnd( ::flash::events::TouchEvent e){
{
		HX_STACK_FRAME("Input","onTouchEnd","Input.onTouchEnd","com/haxepunk/utils/Input.hx",380)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(381)
		::com::haxepunk::utils::Input_obj::_touches->remove(e->touchPointID);
		HX_STACK_LINE(382)
		hx::SubEq(::com::haxepunk::utils::Input_obj::_touchNum,(int)1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onTouchEnd,(void))

Void Input_obj::onJoyAxisMove( ::openfl::events::JoystickEvent e){
{
		HX_STACK_FRAME("Input","onJoyAxisMove","Input.onJoyAxisMove","com/haxepunk/utils/Input.hx",388)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(389)
		::com::haxepunk::utils::Joystick joy = ::com::haxepunk::utils::Input_obj::joystick(e->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(391)
		joy->set_connected(true);
		HX_STACK_LINE(392)
		joy->axis = e->axis;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onJoyAxisMove,(void))

Void Input_obj::onJoyBallMove( ::openfl::events::JoystickEvent e){
{
		HX_STACK_FRAME("Input","onJoyBallMove","Input.onJoyBallMove","com/haxepunk/utils/Input.hx",396)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(397)
		::com::haxepunk::utils::Joystick joy = ::com::haxepunk::utils::Input_obj::joystick(e->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(399)
		joy->set_connected(true);
		HX_STACK_LINE(400)
		if (((::Math_obj::abs(e->x) < 0.15))){
			HX_STACK_LINE(400)
			joy->ball->x = (int)0;
		}
		else{
			HX_STACK_LINE(400)
			joy->ball->x = e->x;
		}
		HX_STACK_LINE(401)
		if (((::Math_obj::abs(e->y) < 0.15))){
			HX_STACK_LINE(401)
			joy->ball->y = (int)0;
		}
		else{
			HX_STACK_LINE(401)
			joy->ball->y = e->y;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onJoyBallMove,(void))

Void Input_obj::onJoyButtonDown( ::openfl::events::JoystickEvent e){
{
		HX_STACK_FRAME("Input","onJoyButtonDown","Input.onJoyButtonDown","com/haxepunk/utils/Input.hx",405)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(406)
		::com::haxepunk::utils::Joystick joy = ::com::haxepunk::utils::Input_obj::joystick(e->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(408)
		joy->set_connected(true);
		HX_STACK_LINE(409)
		joy->buttons->set(e->id,::com::haxepunk::utils::JoyButtonState_obj::BUTTON_PRESSED);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onJoyButtonDown,(void))

Void Input_obj::onJoyButtonUp( ::openfl::events::JoystickEvent e){
{
		HX_STACK_FRAME("Input","onJoyButtonUp","Input.onJoyButtonUp","com/haxepunk/utils/Input.hx",413)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(414)
		::com::haxepunk::utils::Joystick joy = ::com::haxepunk::utils::Input_obj::joystick(e->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(416)
		joy->set_connected(true);
		HX_STACK_LINE(417)
		joy->buttons->set(e->id,::com::haxepunk::utils::JoyButtonState_obj::BUTTON_OFF);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onJoyButtonUp,(void))

Void Input_obj::onJoyHatMove( ::openfl::events::JoystickEvent e){
{
		HX_STACK_FRAME("Input","onJoyHatMove","Input.onJoyHatMove","com/haxepunk/utils/Input.hx",421)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(422)
		::com::haxepunk::utils::Joystick joy = ::com::haxepunk::utils::Input_obj::joystick(e->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(424)
		joy->set_connected(true);
		HX_STACK_LINE(425)
		if (((::Math_obj::abs(e->x) < 0.15))){
			HX_STACK_LINE(425)
			joy->hat->x = (int)0;
		}
		else{
			HX_STACK_LINE(425)
			joy->hat->x = e->x;
		}
		HX_STACK_LINE(426)
		if (((::Math_obj::abs(e->y) < 0.15))){
			HX_STACK_LINE(426)
			joy->hat->y = (int)0;
		}
		else{
			HX_STACK_LINE(426)
			joy->hat->y = e->y;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onJoyHatMove,(void))

bool Input_obj::_enabled;

int Input_obj::_touchNum;

Array< bool > Input_obj::_key;

int Input_obj::_keyNum;

Array< int > Input_obj::_press;

int Input_obj::_pressNum;

Array< int > Input_obj::_release;

int Input_obj::_releaseNum;

int Input_obj::_mouseWheelDelta;

::haxe::ds::IntMap Input_obj::_touches;

::haxe::ds::IntMap Input_obj::_joysticks;

::haxe::ds::StringMap Input_obj::_control;


Input_obj::Input_obj()
{
}

void Input_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Input);
	HX_MARK_END_CLASS();
}

void Input_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Input_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_key") ) { return _key; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { return check_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mouseX") ) { return get_mouseX(); }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return get_mouseY(); }
		if (HX_FIELD_EQ(inName,"define") ) { return define_dyn(); }
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_press") ) { return _press; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lastKey") ) { return lastKey; }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp; }
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"touches") ) { return get_touches(); }
		if (HX_FIELD_EQ(inName,"indexOf") ) { return indexOf_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		if (HX_FIELD_EQ(inName,"_keyNum") ) { return _keyNum; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"released") ) { return released_dyn(); }
		if (HX_FIELD_EQ(inName,"joystick") ) { return joystick_dyn(); }
		if (HX_FIELD_EQ(inName,"_enabled") ) { return _enabled; }
		if (HX_FIELD_EQ(inName,"_release") ) { return _release; }
		if (HX_FIELD_EQ(inName,"_touches") ) { return _touches; }
		if (HX_FIELD_EQ(inName,"_control") ) { return _control; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"keyString") ) { return keyString; }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown; }
		if (HX_FIELD_EQ(inName,"joysticks") ) { return get_joysticks(); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"_touchNum") ) { return _touchNum; }
		if (HX_FIELD_EQ(inName,"_pressNum") ) { return _pressNum; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mouseWheel") ) { return mouseWheel; }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return onTouchEnd_dyn(); }
		if (HX_FIELD_EQ(inName,"_joysticks") ) { return _joysticks; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mouseFlashX") ) { return get_mouseFlashX(); }
		if (HX_FIELD_EQ(inName,"mouseFlashY") ) { return get_mouseFlashY(); }
		if (HX_FIELD_EQ(inName,"touchPoints") ) { return touchPoints_dyn(); }
		if (HX_FIELD_EQ(inName,"get_touches") ) { return get_touches_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove_dyn(); }
		if (HX_FIELD_EQ(inName,"_releaseNum") ) { return _releaseNum; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mousePressed") ) { return mousePressed; }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchBegin") ) { return onTouchBegin_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoyHatMove") ) { return onJoyHatMove_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseReleased") ) { return mouseReleased; }
		if (HX_FIELD_EQ(inName,"get_joysticks") ) { return get_joysticks_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoyAxisMove") ) { return onJoyAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoyBallMove") ) { return onJoyBallMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoyButtonUp") ) { return onJoyButtonUp_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mouseWheelDelta") ) { return get_mouseWheelDelta(); }
		if (HX_FIELD_EQ(inName,"get_mouseFlashX") ) { return get_mouseFlashX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseFlashY") ) { return get_mouseFlashY_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoyButtonDown") ) { return onJoyButtonDown_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_mouseWheelDelta") ) { return _mouseWheelDelta; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"multiTouchSupported") ) { return multiTouchSupported; }
		if (HX_FIELD_EQ(inName,"get_mouseWheelDelta") ) { return get_mouseWheelDelta_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Input_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_key") ) { _key=inValue.Cast< Array< bool > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_press") ) { _press=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lastKey") ) { lastKey=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { mouseUp=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_keyNum") ) { _keyNum=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_enabled") ) { _enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_release") ) { _release=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_touches") ) { _touches=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_control") ) { _control=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"keyString") ) { keyString=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { mouseDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_touchNum") ) { _touchNum=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pressNum") ) { _pressNum=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mouseWheel") ) { mouseWheel=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_joysticks") ) { _joysticks=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_releaseNum") ) { _releaseNum=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mousePressed") ) { mousePressed=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseReleased") ) { mouseReleased=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_mouseWheelDelta") ) { _mouseWheelDelta=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"multiTouchSupported") ) { multiTouchSupported=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Input_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("keyString"),
	HX_CSTRING("lastKey"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("mouseUp"),
	HX_CSTRING("mousePressed"),
	HX_CSTRING("mouseReleased"),
	HX_CSTRING("mouseWheel"),
	HX_CSTRING("multiTouchSupported"),
	HX_CSTRING("get_mouseWheelDelta"),
	HX_CSTRING("get_mouseX"),
	HX_CSTRING("get_mouseY"),
	HX_CSTRING("get_mouseFlashX"),
	HX_CSTRING("get_mouseFlashY"),
	HX_CSTRING("define"),
	HX_CSTRING("check"),
	HX_CSTRING("pressed"),
	HX_CSTRING("released"),
	HX_CSTRING("touchPoints"),
	HX_CSTRING("get_touches"),
	HX_CSTRING("indexOf"),
	HX_CSTRING("joystick"),
	HX_CSTRING("get_joysticks"),
	HX_CSTRING("enable"),
	HX_CSTRING("update"),
	HX_CSTRING("onKeyDown"),
	HX_CSTRING("onKeyUp"),
	HX_CSTRING("onMouseDown"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("onMouseWheel"),
	HX_CSTRING("onTouchBegin"),
	HX_CSTRING("onTouchMove"),
	HX_CSTRING("onTouchEnd"),
	HX_CSTRING("onJoyAxisMove"),
	HX_CSTRING("onJoyBallMove"),
	HX_CSTRING("onJoyButtonDown"),
	HX_CSTRING("onJoyButtonUp"),
	HX_CSTRING("onJoyHatMove"),
	HX_CSTRING("_enabled"),
	HX_CSTRING("_touchNum"),
	HX_CSTRING("_key"),
	HX_CSTRING("_keyNum"),
	HX_CSTRING("_press"),
	HX_CSTRING("_pressNum"),
	HX_CSTRING("_release"),
	HX_CSTRING("_releaseNum"),
	HX_CSTRING("_mouseWheelDelta"),
	HX_CSTRING("_touches"),
	HX_CSTRING("_joysticks"),
	HX_CSTRING("_control"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Input_obj::keyString,"keyString");
	HX_MARK_MEMBER_NAME(Input_obj::lastKey,"lastKey");
	HX_MARK_MEMBER_NAME(Input_obj::mouseDown,"mouseDown");
	HX_MARK_MEMBER_NAME(Input_obj::mouseUp,"mouseUp");
	HX_MARK_MEMBER_NAME(Input_obj::mousePressed,"mousePressed");
	HX_MARK_MEMBER_NAME(Input_obj::mouseReleased,"mouseReleased");
	HX_MARK_MEMBER_NAME(Input_obj::mouseWheel,"mouseWheel");
	HX_MARK_MEMBER_NAME(Input_obj::multiTouchSupported,"multiTouchSupported");
	HX_MARK_MEMBER_NAME(Input_obj::_enabled,"_enabled");
	HX_MARK_MEMBER_NAME(Input_obj::_touchNum,"_touchNum");
	HX_MARK_MEMBER_NAME(Input_obj::_key,"_key");
	HX_MARK_MEMBER_NAME(Input_obj::_keyNum,"_keyNum");
	HX_MARK_MEMBER_NAME(Input_obj::_press,"_press");
	HX_MARK_MEMBER_NAME(Input_obj::_pressNum,"_pressNum");
	HX_MARK_MEMBER_NAME(Input_obj::_release,"_release");
	HX_MARK_MEMBER_NAME(Input_obj::_releaseNum,"_releaseNum");
	HX_MARK_MEMBER_NAME(Input_obj::_mouseWheelDelta,"_mouseWheelDelta");
	HX_MARK_MEMBER_NAME(Input_obj::_touches,"_touches");
	HX_MARK_MEMBER_NAME(Input_obj::_joysticks,"_joysticks");
	HX_MARK_MEMBER_NAME(Input_obj::_control,"_control");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Input_obj::keyString,"keyString");
	HX_VISIT_MEMBER_NAME(Input_obj::lastKey,"lastKey");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseDown,"mouseDown");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseUp,"mouseUp");
	HX_VISIT_MEMBER_NAME(Input_obj::mousePressed,"mousePressed");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseReleased,"mouseReleased");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseWheel,"mouseWheel");
	HX_VISIT_MEMBER_NAME(Input_obj::multiTouchSupported,"multiTouchSupported");
	HX_VISIT_MEMBER_NAME(Input_obj::_enabled,"_enabled");
	HX_VISIT_MEMBER_NAME(Input_obj::_touchNum,"_touchNum");
	HX_VISIT_MEMBER_NAME(Input_obj::_key,"_key");
	HX_VISIT_MEMBER_NAME(Input_obj::_keyNum,"_keyNum");
	HX_VISIT_MEMBER_NAME(Input_obj::_press,"_press");
	HX_VISIT_MEMBER_NAME(Input_obj::_pressNum,"_pressNum");
	HX_VISIT_MEMBER_NAME(Input_obj::_release,"_release");
	HX_VISIT_MEMBER_NAME(Input_obj::_releaseNum,"_releaseNum");
	HX_VISIT_MEMBER_NAME(Input_obj::_mouseWheelDelta,"_mouseWheelDelta");
	HX_VISIT_MEMBER_NAME(Input_obj::_touches,"_touches");
	HX_VISIT_MEMBER_NAME(Input_obj::_joysticks,"_joysticks");
	HX_VISIT_MEMBER_NAME(Input_obj::_control,"_control");
};

#endif

Class Input_obj::__mClass;

void Input_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.utils.Input"), hx::TCanCast< Input_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void Input_obj::__boot()
{
	keyString= HX_CSTRING("");
	multiTouchSupported= false;
	_enabled= false;
	_touchNum= (int)0;
	_key= Array_obj< bool >::__new();
	_keyNum= (int)0;
	_press= Array_obj< int >::__new();
	_pressNum= (int)0;
	_release= Array_obj< int >::__new();
	_releaseNum= (int)0;
	_mouseWheelDelta= (int)0;
	_touches= ::haxe::ds::IntMap_obj::__new();
	_joysticks= ::haxe::ds::IntMap_obj::__new();
	_control= ::haxe::ds::StringMap_obj::__new();
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
