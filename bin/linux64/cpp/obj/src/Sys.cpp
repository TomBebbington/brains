#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif

Void Sys_obj::__construct()
{
	return null();
}

Sys_obj::~Sys_obj() { }

Dynamic Sys_obj::__CreateEmpty() { return  new Sys_obj; }
hx::ObjectPtr< Sys_obj > Sys_obj::__new()
{  hx::ObjectPtr< Sys_obj > result = new Sys_obj();
	result->__construct();
	return result;}

Dynamic Sys_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sys_obj > result = new Sys_obj();
	result->__construct();
	return result;}

Void Sys_obj::print( Dynamic v){
{
		HX_STACK_FRAME("Sys","print","Sys.print","Sys.hx",25)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(25)
		::__hxcpp_print(v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,print,(void))

Void Sys_obj::println( Dynamic v){
{
		HX_STACK_FRAME("Sys","println","Sys.println","Sys.hx",28)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(29)
		::Sys_obj::print(v);
		HX_STACK_LINE(30)
		::Sys_obj::print(HX_CSTRING("\n"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,println,(void))

Void Sys_obj::setCwd( ::String s){
{
		HX_STACK_FRAME("Sys","setCwd","Sys.setCwd","Sys.hx",77)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(77)
		::Sys_obj::set_cwd(s);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,setCwd,(void))

::String Sys_obj::executablePath( ){
	HX_STACK_FRAME("Sys","executablePath","Sys.executablePath","Sys.hx",120)
	HX_STACK_LINE(120)
	return ::String(::Sys_obj::sys_exe_path());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,executablePath,return )

Dynamic Sys_obj::set_cwd;

Dynamic Sys_obj::sys_exe_path;


Sys_obj::Sys_obj()
{
}

void Sys_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sys);
	HX_MARK_END_CLASS();
}

void Sys_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Sys_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { return print_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"setCwd") ) { return setCwd_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"println") ) { return println_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cwd") ) { return set_cwd; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sys_exe_path") ) { return sys_exe_path; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"executablePath") ) { return executablePath_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sys_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"set_cwd") ) { set_cwd=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sys_exe_path") ) { sys_exe_path=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sys_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("print"),
	HX_CSTRING("println"),
	HX_CSTRING("setCwd"),
	HX_CSTRING("executablePath"),
	HX_CSTRING("set_cwd"),
	HX_CSTRING("sys_exe_path"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sys_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Sys_obj::set_cwd,"set_cwd");
	HX_MARK_MEMBER_NAME(Sys_obj::sys_exe_path,"sys_exe_path");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sys_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Sys_obj::set_cwd,"set_cwd");
	HX_VISIT_MEMBER_NAME(Sys_obj::sys_exe_path,"sys_exe_path");
};

#endif

Class Sys_obj::__mClass;

void Sys_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Sys"), hx::TCanCast< Sys_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void Sys_obj::__boot()
{
	set_cwd= ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("set_cwd"),(int)1);
	sys_exe_path= ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("sys_exe_path"),(int)0);
}

