#include <hxcpp.h>

#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
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
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_ui_Multitouch
#include <flash/ui/Multitouch.h>
#endif
#ifndef INCLUDED_flash_ui_MultitouchInputMode
#include <flash/ui/MultitouchInputMode.h>
#endif
namespace flash{
namespace ui{

Void Multitouch_obj::__construct()
{
	return null();
}

Multitouch_obj::~Multitouch_obj() { }

Dynamic Multitouch_obj::__CreateEmpty() { return  new Multitouch_obj; }
hx::ObjectPtr< Multitouch_obj > Multitouch_obj::__new()
{  hx::ObjectPtr< Multitouch_obj > result = new Multitouch_obj();
	result->__construct();
	return result;}

Dynamic Multitouch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Multitouch_obj > result = new Multitouch_obj();
	result->__construct();
	return result;}

void Multitouch_obj::__init__() {
HX_STACK_FRAME("Multitouch","__init__","Multitouch.__init__","flash/ui/Multitouch.hx",18)
{
	HX_STACK_LINE(20)
	::flash::ui::Multitouch_obj::maxTouchPoints = (int)2;
	HX_STACK_LINE(21)
	::flash::ui::Multitouch_obj::supportedGestures = Array_obj< ::String >::__new();
	HX_STACK_LINE(22)
	::flash::ui::Multitouch_obj::supportsGestureEvents = false;
}
}

int Multitouch_obj::maxTouchPoints;

Array< ::String > Multitouch_obj::supportedGestures;

bool Multitouch_obj::supportsGestureEvents;

bool Multitouch_obj::supportsTouchEvents;

::flash::ui::MultitouchInputMode Multitouch_obj::get_inputMode( ){
	HX_STACK_FRAME("Multitouch","get_inputMode","Multitouch.get_inputMode","flash/ui/Multitouch.hx",36)
	HX_STACK_LINE(36)
	if ((::flash::ui::Multitouch_obj::nme_stage_get_multitouch_active(::flash::Lib_obj::get_current()->get_stage()->__handle))){
		HX_STACK_LINE(38)
		return ::flash::ui::MultitouchInputMode_obj::TOUCH_POINT;
	}
	else{
		HX_STACK_LINE(42)
		return ::flash::ui::MultitouchInputMode_obj::NONE;
	}
	HX_STACK_LINE(36)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Multitouch_obj,get_inputMode,return )

::flash::ui::MultitouchInputMode Multitouch_obj::set_inputMode( ::flash::ui::MultitouchInputMode value){
	HX_STACK_FRAME("Multitouch","set_inputMode","Multitouch.set_inputMode","flash/ui/Multitouch.hx",49)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(51)
	if (((value == ::flash::ui::MultitouchInputMode_obj::GESTURE))){
		HX_STACK_LINE(53)
		return ::flash::ui::Multitouch_obj::get_inputMode();
	}
	HX_STACK_LINE(57)
	::flash::ui::Multitouch_obj::nme_stage_set_multitouch_active(::flash::Lib_obj::get_current()->get_stage()->__handle,(value == ::flash::ui::MultitouchInputMode_obj::TOUCH_POINT));
	HX_STACK_LINE(58)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Multitouch_obj,set_inputMode,return )

bool Multitouch_obj::get_supportsTouchEvents( ){
	HX_STACK_FRAME("Multitouch","get_supportsTouchEvents","Multitouch.get_supportsTouchEvents","flash/ui/Multitouch.hx",63)
	HX_STACK_LINE(63)
	return ::flash::ui::Multitouch_obj::nme_stage_get_multitouch_supported(::flash::Lib_obj::get_current()->get_stage()->__handle);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Multitouch_obj,get_supportsTouchEvents,return )

Dynamic Multitouch_obj::nme_stage_get_multitouch_supported;

Dynamic Multitouch_obj::nme_stage_get_multitouch_active;

Dynamic Multitouch_obj::nme_stage_set_multitouch_active;


Multitouch_obj::Multitouch_obj()
{
}

void Multitouch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Multitouch);
	HX_MARK_END_CLASS();
}

void Multitouch_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Multitouch_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"inputMode") ) { return get_inputMode(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_inputMode") ) { return get_inputMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_inputMode") ) { return set_inputMode_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maxTouchPoints") ) { return maxTouchPoints; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"supportedGestures") ) { return supportedGestures; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"supportsTouchEvents") ) { return inCallProp ? get_supportsTouchEvents() : supportsTouchEvents; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"supportsGestureEvents") ) { return supportsGestureEvents; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_supportsTouchEvents") ) { return get_supportsTouchEvents_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_stage_get_multitouch_active") ) { return nme_stage_get_multitouch_active; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_multitouch_active") ) { return nme_stage_set_multitouch_active; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"nme_stage_get_multitouch_supported") ) { return nme_stage_get_multitouch_supported; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Multitouch_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"inputMode") ) { return set_inputMode(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maxTouchPoints") ) { maxTouchPoints=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"supportedGestures") ) { supportedGestures=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"supportsTouchEvents") ) { supportsTouchEvents=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"supportsGestureEvents") ) { supportsGestureEvents=inValue.Cast< bool >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_stage_get_multitouch_active") ) { nme_stage_get_multitouch_active=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_multitouch_active") ) { nme_stage_set_multitouch_active=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"nme_stage_get_multitouch_supported") ) { nme_stage_get_multitouch_supported=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Multitouch_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("maxTouchPoints"),
	HX_CSTRING("supportedGestures"),
	HX_CSTRING("supportsGestureEvents"),
	HX_CSTRING("supportsTouchEvents"),
	HX_CSTRING("get_inputMode"),
	HX_CSTRING("set_inputMode"),
	HX_CSTRING("get_supportsTouchEvents"),
	HX_CSTRING("nme_stage_get_multitouch_supported"),
	HX_CSTRING("nme_stage_get_multitouch_active"),
	HX_CSTRING("nme_stage_set_multitouch_active"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Multitouch_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Multitouch_obj::maxTouchPoints,"maxTouchPoints");
	HX_MARK_MEMBER_NAME(Multitouch_obj::supportedGestures,"supportedGestures");
	HX_MARK_MEMBER_NAME(Multitouch_obj::supportsGestureEvents,"supportsGestureEvents");
	HX_MARK_MEMBER_NAME(Multitouch_obj::supportsTouchEvents,"supportsTouchEvents");
	HX_MARK_MEMBER_NAME(Multitouch_obj::nme_stage_get_multitouch_supported,"nme_stage_get_multitouch_supported");
	HX_MARK_MEMBER_NAME(Multitouch_obj::nme_stage_get_multitouch_active,"nme_stage_get_multitouch_active");
	HX_MARK_MEMBER_NAME(Multitouch_obj::nme_stage_set_multitouch_active,"nme_stage_set_multitouch_active");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Multitouch_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Multitouch_obj::maxTouchPoints,"maxTouchPoints");
	HX_VISIT_MEMBER_NAME(Multitouch_obj::supportedGestures,"supportedGestures");
	HX_VISIT_MEMBER_NAME(Multitouch_obj::supportsGestureEvents,"supportsGestureEvents");
	HX_VISIT_MEMBER_NAME(Multitouch_obj::supportsTouchEvents,"supportsTouchEvents");
	HX_VISIT_MEMBER_NAME(Multitouch_obj::nme_stage_get_multitouch_supported,"nme_stage_get_multitouch_supported");
	HX_VISIT_MEMBER_NAME(Multitouch_obj::nme_stage_get_multitouch_active,"nme_stage_get_multitouch_active");
	HX_VISIT_MEMBER_NAME(Multitouch_obj::nme_stage_set_multitouch_active,"nme_stage_set_multitouch_active");
};

#endif

Class Multitouch_obj::__mClass;

void Multitouch_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.ui.Multitouch"), hx::TCanCast< Multitouch_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void Multitouch_obj::__boot()
{
	nme_stage_get_multitouch_supported= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_stage_get_multitouch_supported"),(int)1);
	nme_stage_get_multitouch_active= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_stage_get_multitouch_active"),(int)1);
	nme_stage_set_multitouch_active= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_stage_set_multitouch_active"),(int)2);
}

} // end namespace flash
} // end namespace ui
