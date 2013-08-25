#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Key
#include <com/haxepunk/utils/Key.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void Key_obj::__construct()
{
	return null();
}

Key_obj::~Key_obj() { }

Dynamic Key_obj::__CreateEmpty() { return  new Key_obj; }
hx::ObjectPtr< Key_obj > Key_obj::__new()
{  hx::ObjectPtr< Key_obj > result = new Key_obj();
	result->__construct();
	return result;}

Dynamic Key_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Key_obj > result = new Key_obj();
	result->__construct();
	return result;}

::String Key_obj::nameOfKey( int _char){
	HX_STACK_FRAME("Key","nameOfKey","Key.nameOfKey","com/haxepunk/utils/Key.hx",107)
	HX_STACK_ARG(_char,"char")
	HX_STACK_LINE(108)
	if (((bool((_char >= (int)65)) && bool((_char <= (int)90))))){
		HX_STACK_LINE(108)
		return ::String::fromCharCode(_char);
	}
	HX_STACK_LINE(109)
	if (((bool((_char >= (int)112)) && bool((_char <= (int)126))))){
		HX_STACK_LINE(109)
		return (HX_CSTRING("F") + ::Std_obj::string((_char - (int)111)));
	}
	HX_STACK_LINE(110)
	if (((bool((_char >= (int)96)) && bool((_char <= (int)105))))){
		HX_STACK_LINE(110)
		return (HX_CSTRING("NUMPAD ") + ::Std_obj::string((_char - (int)96)));
	}
	HX_STACK_LINE(111)
	switch( (int)(_char)){
		case (int)37: {
			HX_STACK_LINE(113)
			return HX_CSTRING("LEFT");
		}
		;break;
		case (int)38: {
			HX_STACK_LINE(114)
			return HX_CSTRING("UP");
		}
		;break;
		case (int)39: {
			HX_STACK_LINE(115)
			return HX_CSTRING("RIGHT");
		}
		;break;
		case (int)40: {
			HX_STACK_LINE(116)
			return HX_CSTRING("DOWN");
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(118)
			return HX_CSTRING("ENTER");
		}
		;break;
		case (int)17: {
			HX_STACK_LINE(119)
			return HX_CSTRING("CONTROL");
		}
		;break;
		case (int)32: {
			HX_STACK_LINE(120)
			return HX_CSTRING("SPACE");
		}
		;break;
		case (int)16: {
			HX_STACK_LINE(121)
			return HX_CSTRING("SHIFT");
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(122)
			return HX_CSTRING("BACKSPACE");
		}
		;break;
		case (int)20: {
			HX_STACK_LINE(123)
			return HX_CSTRING("CAPS LOCK");
		}
		;break;
		case (int)46: {
			HX_STACK_LINE(124)
			return HX_CSTRING("DELETE");
		}
		;break;
		case (int)35: {
			HX_STACK_LINE(125)
			return HX_CSTRING("END");
		}
		;break;
		case (int)27: {
			HX_STACK_LINE(126)
			return HX_CSTRING("ESCAPE");
		}
		;break;
		case (int)36: {
			HX_STACK_LINE(127)
			return HX_CSTRING("HOME");
		}
		;break;
		case (int)45: {
			HX_STACK_LINE(128)
			return HX_CSTRING("INSERT");
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(129)
			return HX_CSTRING("TAB");
		}
		;break;
		case (int)34: {
			HX_STACK_LINE(130)
			return HX_CSTRING("PAGE DOWN");
		}
		;break;
		case (int)33: {
			HX_STACK_LINE(131)
			return HX_CSTRING("PAGE UP");
		}
		;break;
		case (int)107: {
			HX_STACK_LINE(133)
			return HX_CSTRING("NUMPAD ADD");
		}
		;break;
		case (int)110: {
			HX_STACK_LINE(134)
			return HX_CSTRING("NUMPAD DECIMAL");
		}
		;break;
		case (int)111: {
			HX_STACK_LINE(135)
			return HX_CSTRING("NUMPAD DIVIDE");
		}
		;break;
		case (int)108: {
			HX_STACK_LINE(136)
			return HX_CSTRING("NUMPAD ENTER");
		}
		;break;
		case (int)106: {
			HX_STACK_LINE(137)
			return HX_CSTRING("NUMPAD MULTIPLY");
		}
		;break;
		case (int)109: {
			HX_STACK_LINE(138)
			return HX_CSTRING("NUMPAD SUBTRACT");
		}
		;break;
	}
	HX_STACK_LINE(140)
	return ::String::fromCharCode(_char);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Key_obj,nameOfKey,return )


Key_obj::Key_obj()
{
}

void Key_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Key);
	HX_MARK_END_CLASS();
}

void Key_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Key_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"nameOfKey") ) { return nameOfKey_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Key_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Key_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("nameOfKey"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Key_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Key_obj::__mClass,"__mClass");
};

#endif

Class Key_obj::__mClass;

void Key_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.utils.Key"), hx::TCanCast< Key_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void Key_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
