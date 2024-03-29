#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Listener
#include <zpp_nape/util/ZNPNode_ZPP_Listener.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPNode_ZPP_Listener_obj::__construct()
{
HX_STACK_FRAME("ZNPNode_ZPP_Listener","new","ZNPNode_ZPP_Listener.new","zpp_nape/util/Lists.hx",16061)
{
	HX_STACK_LINE(16095)
	this->elt = null();
	HX_STACK_LINE(16086)
	this->next = null();
}
;
	return null();
}

ZNPNode_ZPP_Listener_obj::~ZNPNode_ZPP_Listener_obj() { }

Dynamic ZNPNode_ZPP_Listener_obj::__CreateEmpty() { return  new ZNPNode_ZPP_Listener_obj; }
hx::ObjectPtr< ZNPNode_ZPP_Listener_obj > ZNPNode_ZPP_Listener_obj::__new()
{  hx::ObjectPtr< ZNPNode_ZPP_Listener_obj > result = new ZNPNode_ZPP_Listener_obj();
	result->__construct();
	return result;}

Dynamic ZNPNode_ZPP_Listener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPNode_ZPP_Listener_obj > result = new ZNPNode_ZPP_Listener_obj();
	result->__construct();
	return result;}

::zpp_nape::callbacks::ZPP_Listener ZNPNode_ZPP_Listener_obj::elem( ){
	HX_STACK_FRAME("ZNPNode_ZPP_Listener","elem","ZNPNode_ZPP_Listener.elem","zpp_nape/util/Lists.hx",16100)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16100)
	return this->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_Listener_obj,elem,return )

Void ZNPNode_ZPP_Listener_obj::free( ){
{
		HX_STACK_FRAME("ZNPNode_ZPP_Listener","free","ZNPNode_ZPP_Listener.free","zpp_nape/util/Lists.hx",16093)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16093)
		this->elt = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_Listener_obj,free,(void))

Void ZNPNode_ZPP_Listener_obj::alloc( ){
{
		HX_STACK_FRAME("ZNPNode_ZPP_Listener","alloc","ZNPNode_ZPP_Listener.alloc","zpp_nape/util/Lists.hx",16089)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPNode_ZPP_Listener_obj,alloc,(void))

::zpp_nape::util::ZNPNode_ZPP_Listener ZNPNode_ZPP_Listener_obj::zpp_pool;


ZNPNode_ZPP_Listener_obj::ZNPNode_ZPP_Listener_obj()
{
}

void ZNPNode_ZPP_Listener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPNode_ZPP_Listener);
	HX_MARK_MEMBER_NAME(elt,"elt");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void ZNPNode_ZPP_Listener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(elt,"elt");
	HX_VISIT_MEMBER_NAME(next,"next");
}

Dynamic ZNPNode_ZPP_Listener_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { return elt; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"elem") ) { return elem_dyn(); }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZNPNode_ZPP_Listener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { elt=inValue.Cast< ::zpp_nape::callbacks::ZPP_Listener >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Listener >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Listener >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZNPNode_ZPP_Listener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("elt"));
	outFields->push(HX_CSTRING("next"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("elem"),
	HX_CSTRING("elt"),
	HX_CSTRING("free"),
	HX_CSTRING("alloc"),
	HX_CSTRING("next"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_Listener_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZNPNode_ZPP_Listener_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_Listener_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZNPNode_ZPP_Listener_obj::zpp_pool,"zpp_pool");
};

#endif

Class ZNPNode_ZPP_Listener_obj::__mClass;

void ZNPNode_ZPP_Listener_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPNode_ZPP_Listener"), hx::TCanCast< ZNPNode_ZPP_Listener_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void ZNPNode_ZPP_Listener_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
