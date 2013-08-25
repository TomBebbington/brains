#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_prototype_Rect
#include <com/haxepunk/graphics/prototype/Rect.h>
#endif
#ifndef INCLUDED_entities_Bullet
#include <entities/Bullet.h>
#endif
#ifndef INCLUDED_entities_PhysicalEntity
#include <entities/PhysicalEntity.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
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
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace entities{

Void Bullet_obj::__construct(int dir)
{
HX_STACK_FRAME("Bullet","new","Bullet.new","entities/Bullet.hx",11)

HX_STACK_ARG(dir,"dir")
{
	struct _Function_1_1{
		inline static ::nape::phys::BodyType Block( ){
			HX_STACK_FRAME("*","closure","*.closure","entities/Bullet.hx",12)
			{
				HX_STACK_LINE(12)
				if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
					HX_STACK_LINE(12)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(12)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
					HX_STACK_LINE(12)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(12)
				return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
			}
			return null();
		}
	};
	HX_STACK_LINE(12)
	super::__construct(_Function_1_1::Block());
	HX_STACK_LINE(13)
	this->dir = dir;
	HX_STACK_LINE(14)
	this->set_graphic(::com::haxepunk::graphics::prototype::Rect_obj::__new((int)10,(int)3,(int)-16777216));
	HX_STACK_LINE(15)
	{
		HX_STACK_LINE(15)
		::nape::shape::ShapeList _this = this->body->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(15)
		::nape::shape::Shape obj = ::nape::shape::Polygon_obj::__new(::nape::shape::Polygon_obj::rect((int)0,(int)0,(int)10,(int)3,null()),null(),null());		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(15)
		if ((_this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(15)
			_this->push(obj);
		}
		else{
			HX_STACK_LINE(15)
			_this->unshift(obj);
		}
	}
	HX_STACK_LINE(16)
	{
		HX_STACK_LINE(16)
		::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(16)
		_this->zpp_inner->bulletEnabled = true;
		HX_STACK_LINE(16)
		_this->zpp_inner->bulletEnabled;
	}
	HX_STACK_LINE(17)
	{
		HX_STACK_LINE(17)
		::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(17)
		{
			HX_STACK_LINE(17)
			::nape::phys::Body _this1 = this->body;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(17)
			if (((_this1->zpp_inner->wrap_vel == null()))){
				HX_STACK_LINE(17)
				_this1->zpp_inner->setupVelocity();
			}
			HX_STACK_LINE(17)
			_this = _this1->zpp_inner->wrap_vel;
		}
		HX_STACK_LINE(17)
		Float x = (dir * 2000.0);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(17)
		{
			HX_STACK_LINE(17)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(17)
				HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(17)
			{
				HX_STACK_LINE(17)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(17)
				if ((_this1->_immutable)){
					HX_STACK_LINE(17)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(17)
				if (((_this1->_isimmutable != null()))){
					HX_STACK_LINE(17)
					_this1->_isimmutable();
				}
			}
			struct _Function_3_1{
				inline static Float Block( ::nape::geom::Vec2 _this){
					HX_STACK_FRAME("*","closure","*.closure","entities/Bullet.hx",17)
					{
						HX_STACK_LINE(17)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(17)
							HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(17)
						{
							HX_STACK_LINE(17)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(17)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(17)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(17)
						return _this->zpp_inner->x;
					}
					return null();
				}
			};
			HX_STACK_LINE(17)
			if (((_Function_3_1::Block(_this) != x))){
				HX_STACK_LINE(17)
				if (((x != x))){
					HX_STACK_LINE(17)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: Vec2::") + HX_CSTRING("x")) + HX_CSTRING(" cannot be NaN")));
				}
				HX_STACK_LINE(17)
				_this->zpp_inner->x = x;
				HX_STACK_LINE(17)
				{
					HX_STACK_LINE(17)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(17)
					if (((_this1->_invalidate != null()))){
						HX_STACK_LINE(17)
						_this1->_invalidate(_this1);
					}
				}
			}
		}
		HX_STACK_LINE(17)
		{
			HX_STACK_LINE(17)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(17)
				HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(17)
			{
				HX_STACK_LINE(17)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(17)
				if (((_this1->_validate != null()))){
					HX_STACK_LINE(17)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(17)
			_this->zpp_inner->x;
		}
	}
}
;
	return null();
}

Bullet_obj::~Bullet_obj() { }

Dynamic Bullet_obj::__CreateEmpty() { return  new Bullet_obj; }
hx::ObjectPtr< Bullet_obj > Bullet_obj::__new(int dir)
{  hx::ObjectPtr< Bullet_obj > result = new Bullet_obj();
	result->__construct(dir);
	return result;}

Dynamic Bullet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bullet_obj > result = new Bullet_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Bullet_obj::update( ){
{
		HX_STACK_FRAME("Bullet","update","Bullet.update","entities/Bullet.hx",19)
		HX_STACK_THIS(this)
		HX_STACK_LINE(20)
		this->super::update();
		HX_STACK_LINE(21)
		if (((bool((((this->x - this->originX) + this->width) < (::com::haxepunk::HXP_obj::camera->x - (::com::haxepunk::HXP_obj::width * 0.5)))) || bool(((this->x - this->originX) > (::com::haxepunk::HXP_obj::camera->x + (::com::haxepunk::HXP_obj::width * 1.5))))))){
			HX_STACK_LINE(22)
			this->destroy();
		}
	}
return null();
}



Bullet_obj::Bullet_obj()
{
}

void Bullet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bullet);
	HX_MARK_MEMBER_NAME(dir,"dir");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bullet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dir,"dir");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Bullet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dir") ) { return dir; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bullet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dir") ) { dir=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bullet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("dir"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("dir"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bullet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bullet_obj::__mClass,"__mClass");
};

#endif

Class Bullet_obj::__mClass;

void Bullet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("entities.Bullet"), hx::TCanCast< Bullet_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void Bullet_obj::__boot()
{
}

} // end namespace entities
