#include <hxcpp.h>

#ifndef INCLUDED_nape_phys_BodyType
#include <nape/phys/BodyType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace phys{

Void BodyType_obj::__construct()
{
HX_STACK_FRAME("BodyType","new","BodyType.new","nape/phys/BodyType.hx",183)
{
	HX_STACK_LINE(183)
	if ((!(::zpp_nape::util::ZPP_Flags_obj::internal))){
		HX_STACK_LINE(183)
		HX_STACK_DO_THROW(((HX_CSTRING("Error: Cannot instantiate ") + HX_CSTRING("BodyType")) + HX_CSTRING(" derp!")));
	}
}
;
	return null();
}

BodyType_obj::~BodyType_obj() { }

Dynamic BodyType_obj::__CreateEmpty() { return  new BodyType_obj; }
hx::ObjectPtr< BodyType_obj > BodyType_obj::__new()
{  hx::ObjectPtr< BodyType_obj > result = new BodyType_obj();
	result->__construct();
	return result;}

Dynamic BodyType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BodyType_obj > result = new BodyType_obj();
	result->__construct();
	return result;}

::String BodyType_obj::toString( ){
	HX_STACK_FRAME("BodyType","toString","BodyType.toString","nape/phys/BodyType.hx",192)
	HX_STACK_THIS(this)
	struct _Function_1_1{
		inline static ::nape::phys::BodyType Block( ){
			HX_STACK_FRAME("*","closure","*.closure","nape/phys/BodyType.hx",192)
			{
				HX_STACK_LINE(192)
				if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
					HX_STACK_LINE(192)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(192)
				return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
			}
			return null();
		}
	};
	HX_STACK_LINE(192)
	if (((hx::ObjectPtr<OBJ_>(this) == _Function_1_1::Block()))){
		HX_STACK_LINE(192)
		return HX_CSTRING("STATIC");
	}
	else{
		struct _Function_2_1{
			inline static ::nape::phys::BodyType Block( ){
				HX_STACK_FRAME("*","closure","*.closure","nape/phys/BodyType.hx",193)
				{
					HX_STACK_LINE(193)
					if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
						HX_STACK_LINE(193)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(193)
					return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
				}
				return null();
			}
		};
		HX_STACK_LINE(193)
		if (((hx::ObjectPtr<OBJ_>(this) == _Function_2_1::Block()))){
			HX_STACK_LINE(193)
			return HX_CSTRING("DYNAMIC");
		}
		else{
			struct _Function_3_1{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_FRAME("*","closure","*.closure","nape/phys/BodyType.hx",194)
					{
						HX_STACK_LINE(194)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
							HX_STACK_LINE(194)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(194)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(194)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(194)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
					}
					return null();
				}
			};
			HX_STACK_LINE(194)
			if (((hx::ObjectPtr<OBJ_>(this) == _Function_3_1::Block()))){
				HX_STACK_LINE(194)
				return HX_CSTRING("KINEMATIC");
			}
			else{
				HX_STACK_LINE(195)
				return HX_CSTRING("");
			}
		}
	}
	HX_STACK_LINE(192)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BodyType_obj,toString,return )

::nape::phys::BodyType BodyType_obj::get_STATIC( ){
	HX_STACK_FRAME("BodyType","get_STATIC","BodyType.get_STATIC","nape/phys/BodyType.hx",203)
	HX_STACK_LINE(204)
	if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
		HX_STACK_LINE(205)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(206)
		::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
		HX_STACK_LINE(207)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(209)
	return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BodyType_obj,get_STATIC,return )

::nape::phys::BodyType BodyType_obj::get_DYNAMIC( ){
	HX_STACK_FRAME("BodyType","get_DYNAMIC","BodyType.get_DYNAMIC","nape/phys/BodyType.hx",217)
	HX_STACK_LINE(218)
	if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
		HX_STACK_LINE(219)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(220)
		::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
		HX_STACK_LINE(221)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(223)
	return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BodyType_obj,get_DYNAMIC,return )

::nape::phys::BodyType BodyType_obj::get_KINEMATIC( ){
	HX_STACK_FRAME("BodyType","get_KINEMATIC","BodyType.get_KINEMATIC","nape/phys/BodyType.hx",232)
	HX_STACK_LINE(233)
	if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
		HX_STACK_LINE(234)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(235)
		::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
		HX_STACK_LINE(236)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(238)
	return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BodyType_obj,get_KINEMATIC,return )


BodyType_obj::BodyType_obj()
{
}

void BodyType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BodyType);
	HX_MARK_END_CLASS();
}

void BodyType_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic BodyType_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"STATIC") ) { return get_STATIC(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"DYNAMIC") ) { return get_DYNAMIC(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"KINEMATIC") ) { return get_KINEMATIC(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_STATIC") ) { return get_STATIC_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_DYNAMIC") ) { return get_DYNAMIC_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_KINEMATIC") ) { return get_KINEMATIC_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BodyType_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BodyType_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get_STATIC"),
	HX_CSTRING("get_DYNAMIC"),
	HX_CSTRING("get_KINEMATIC"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BodyType_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BodyType_obj::__mClass,"__mClass");
};

#endif

Class BodyType_obj::__mClass;

void BodyType_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.phys.BodyType"), hx::TCanCast< BodyType_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void BodyType_obj::__boot()
{
}

} // end namespace nape
} // end namespace phys
