#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_prototype_Rect
#include <com/haxepunk/graphics/prototype/Rect.h>
#endif
#ifndef INCLUDED_entities_PhysicalEntity
#include <entities/PhysicalEntity.h>
#endif
#ifndef INCLUDED_entities_Wall
#include <entities/Wall.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeList
#include <nape/callbacks/CbTypeList.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyType
#include <nape/phys/BodyType.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_Polygon
#include <nape/shape/Polygon.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_CbTypeList
#include <zpp_nape/util/ZPP_CbTypeList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace entities{

Void Wall_obj::__construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_color)
{
HX_STACK_FRAME("Wall","new","Wall.new","entities/Wall.hx",8)

HX_STACK_ARG(__o_width,"width")

HX_STACK_ARG(__o_height,"height")

HX_STACK_ARG(__o_color,"color")
int width = __o_width.Default(15);
int height = __o_height.Default(15);
int color = __o_color.Default(-1);
{
	struct _Function_1_1{
		inline static ::nape::phys::BodyType Block( ){
			HX_STACK_FRAME("*","closure","*.closure","entities/Wall.hx",9)
			{
				HX_STACK_LINE(9)
				if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
					HX_STACK_LINE(9)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(9)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
					HX_STACK_LINE(9)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(9)
				return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
			}
			return null();
		}
	};
	HX_STACK_LINE(9)
	super::__construct(_Function_1_1::Block());
	HX_STACK_LINE(10)
	this->set_graphic(::com::haxepunk::graphics::prototype::Rect_obj::__new(width,height,color));
	HX_STACK_LINE(11)
	{
		HX_STACK_LINE(11)
		::nape::shape::ShapeList _this = this->body->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(11)
		::nape::shape::Shape obj = ::nape::shape::Polygon_obj::__new(::nape::shape::Polygon_obj::rect((int)0,(int)0,width,height,null()),null(),null());		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(11)
		if ((_this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(11)
			_this->push(obj);
		}
		else{
			HX_STACK_LINE(11)
			_this->unshift(obj);
		}
	}
	HX_STACK_LINE(12)
	{
		HX_STACK_LINE(12)
		::nape::callbacks::CbTypeList _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(12)
		{
			HX_STACK_LINE(12)
			::nape::phys::Body _this1 = this->body;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(12)
			if (((_this1->zpp_inner_i->wrap_cbTypes == null()))){
				HX_STACK_LINE(12)
				_this1->zpp_inner_i->setupcbTypes();
			}
			HX_STACK_LINE(12)
			_this = _this1->zpp_inner_i->wrap_cbTypes;
		}
		HX_STACK_LINE(12)
		::nape::callbacks::CbType obj = ::entities::Wall_obj::collisionType;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(12)
		if ((_this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(12)
			_this->push(obj);
		}
		else{
			HX_STACK_LINE(12)
			_this->unshift(obj);
		}
	}
	HX_STACK_LINE(13)
	this->width = width;
	HX_STACK_LINE(14)
	this->height = height;
}
;
	return null();
}

Wall_obj::~Wall_obj() { }

Dynamic Wall_obj::__CreateEmpty() { return  new Wall_obj; }
hx::ObjectPtr< Wall_obj > Wall_obj::__new(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_color)
{  hx::ObjectPtr< Wall_obj > result = new Wall_obj();
	result->__construct(__o_width,__o_height,__o_color);
	return result;}

Dynamic Wall_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Wall_obj > result = new Wall_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::nape::callbacks::CbType Wall_obj::collisionType;


Wall_obj::Wall_obj()
{
}

void Wall_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Wall);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Wall_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Wall_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"collisionType") ) { return collisionType; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Wall_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"collisionType") ) { collisionType=inValue.Cast< ::nape::callbacks::CbType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Wall_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("collisionType"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Wall_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Wall_obj::collisionType,"collisionType");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Wall_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Wall_obj::collisionType,"collisionType");
};

#endif

Class Wall_obj::__mClass;

void Wall_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("entities.Wall"), hx::TCanCast< Wall_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void Wall_obj::__boot()
{
	collisionType= ::nape::callbacks::CbType_obj::__new();
}

} // end namespace entities
