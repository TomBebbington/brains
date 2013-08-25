#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_entities_PhysicalEntity
#include <entities/PhysicalEntity.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_BodyType
#include <nape/phys/BodyType.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
namespace entities{

Void PhysicalEntity_obj::__construct(::nape::phys::BodyType b)
{
HX_STACK_FRAME("PhysicalEntity","new","PhysicalEntity.new","entities/PhysicalEntity.hx",8)

HX_STACK_ARG(b,"b")
{
	HX_STACK_LINE(9)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(10)
	this->body = ::nape::phys::Body_obj::__new(b,::nape::geom::Vec2_obj::__new(this->x,this->y));
	HX_STACK_LINE(11)
	{
		HX_STACK_LINE(11)
		::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(11)
		{
			HX_STACK_LINE(11)
			_this->zpp_inner->immutable_midstep((HX_CSTRING("Body::") + HX_CSTRING("false")));
			HX_STACK_LINE(11)
			if (((!(_this->zpp_inner->norotate) != false))){
				HX_STACK_LINE(11)
				_this->zpp_inner->norotate = true;
				HX_STACK_LINE(11)
				_this->zpp_inner->invalidate_inertia();
			}
		}
		HX_STACK_LINE(11)
		!(_this->zpp_inner->norotate);
	}
}
;
	return null();
}

PhysicalEntity_obj::~PhysicalEntity_obj() { }

Dynamic PhysicalEntity_obj::__CreateEmpty() { return  new PhysicalEntity_obj; }
hx::ObjectPtr< PhysicalEntity_obj > PhysicalEntity_obj::__new(::nape::phys::BodyType b)
{  hx::ObjectPtr< PhysicalEntity_obj > result = new PhysicalEntity_obj();
	result->__construct(b);
	return result;}

Dynamic PhysicalEntity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PhysicalEntity_obj > result = new PhysicalEntity_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PhysicalEntity_obj::destroy( ){
{
		HX_STACK_FRAME("PhysicalEntity","destroy","PhysicalEntity.destroy","entities/PhysicalEntity.hx",20)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static ::nape::space::Space Block( ::entities::PhysicalEntity_obj *__this){
				HX_STACK_FRAME("*","closure","*.closure","entities/PhysicalEntity.hx",21)
				{
					HX_STACK_LINE(21)
					::nape::phys::Body _this = __this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(21)
					return (  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) );
				}
				return null();
			}
		};
		HX_STACK_LINE(21)
		if (((_Function_1_1::Block(this) != null()))){
			HX_STACK_LINE(22)
			::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(22)
			{
				HX_STACK_LINE(22)
				if (((_this->zpp_inner->compound != null()))){
					HX_STACK_LINE(22)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set"));
				}
				HX_STACK_LINE(22)
				_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
				HX_STACK_LINE(22)
				if ((_this->zpp_inner->world)){
					HX_STACK_LINE(22)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Space::world is immutable"));
				}
				HX_STACK_LINE(22)
				if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
					HX_STACK_LINE(22)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(22)
						_this->zpp_inner->component->woken = false;
					}
					HX_STACK_LINE(22)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(22)
						((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(_this);
					}
					HX_STACK_LINE(22)
					{
					}
				}
			}
			HX_STACK_LINE(22)
			if (((_this->zpp_inner->space == null()))){
				HX_STACK_LINE(22)
				Dynamic();
			}
			else{
				HX_STACK_LINE(22)
				_this->zpp_inner->space->outer;
			}
		}
		HX_STACK_LINE(23)
		this->_scene->remove(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PhysicalEntity_obj,destroy,(void))

Void PhysicalEntity_obj::move( Float x,Float y){
{
		HX_STACK_FRAME("PhysicalEntity","move","PhysicalEntity.move","entities/PhysicalEntity.hx",18)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(18)
		::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(18)
		{
			HX_STACK_LINE(18)
			::nape::phys::Body _this1 = this->body;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(18)
			if (((_this1->zpp_inner->wrap_pos == null()))){
				HX_STACK_LINE(18)
				_this1->zpp_inner->setupPosition();
			}
			HX_STACK_LINE(18)
			_this = _this1->zpp_inner->wrap_pos;
		}
		HX_STACK_LINE(18)
		Float x1 = this->x = x;		HX_STACK_VAR(x1,"x1");
		HX_STACK_LINE(18)
		Float y1 = this->y = y;		HX_STACK_VAR(y1,"y1");
		HX_STACK_LINE(18)
		if (((bool((_this != null())) && bool(_this->zpp_disp)))){
			HX_STACK_LINE(18)
			HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(18)
		{
			HX_STACK_LINE(18)
			::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(18)
			if ((_this1->_immutable)){
				HX_STACK_LINE(18)
				HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
			}
			HX_STACK_LINE(18)
			if (((_this1->_isimmutable != null()))){
				HX_STACK_LINE(18)
				_this1->_isimmutable();
			}
		}
		HX_STACK_LINE(18)
		if (((bool((x1 != x1)) || bool((y1 != y1))))){
			HX_STACK_LINE(18)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
		}
		struct _Function_1_1{
			inline static Float Block( ::nape::geom::Vec2 _this){
				HX_STACK_FRAME("*","closure","*.closure","entities/PhysicalEntity.hx",18)
				{
					HX_STACK_LINE(18)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(18)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(18)
					{
						HX_STACK_LINE(18)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(18)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(18)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(18)
					return _this->zpp_inner->x;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static Float Block( ::nape::geom::Vec2 _this){
				HX_STACK_FRAME("*","closure","*.closure","entities/PhysicalEntity.hx",18)
				{
					HX_STACK_LINE(18)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(18)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(18)
					{
						HX_STACK_LINE(18)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(18)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(18)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(18)
					return _this->zpp_inner->y;
				}
				return null();
			}
		};
		HX_STACK_LINE(18)
		if ((!(((bool((_Function_1_1::Block(_this) == x1)) && bool((_Function_1_2::Block(_this) == y1))))))){
			HX_STACK_LINE(18)
			{
				HX_STACK_LINE(18)
				_this->zpp_inner->x = x1;
				HX_STACK_LINE(18)
				_this->zpp_inner->y = y1;
				HX_STACK_LINE(18)
				{
				}
			}
			HX_STACK_LINE(18)
			{
				HX_STACK_LINE(18)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(18)
				if (((_this1->_invalidate != null()))){
					HX_STACK_LINE(18)
					_this1->_invalidate(_this1);
				}
			}
		}
		HX_STACK_LINE(18)
		_this;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PhysicalEntity_obj,move,(void))

Void PhysicalEntity_obj::update( ){
{
		HX_STACK_FRAME("PhysicalEntity","update","PhysicalEntity.update","entities/PhysicalEntity.hx",13)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14)
		this->super::update();
		HX_STACK_LINE(15)
		{
			HX_STACK_LINE(15)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(15)
			{
				HX_STACK_LINE(15)
				::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(15)
				{
					HX_STACK_LINE(15)
					::nape::phys::Body _this1 = this->body;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(15)
					if (((_this1->zpp_inner->wrap_pos == null()))){
						HX_STACK_LINE(15)
						_this1->zpp_inner->setupPosition();
					}
					HX_STACK_LINE(15)
					_this = _this1->zpp_inner->wrap_pos;
				}
				HX_STACK_LINE(15)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(15)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(15)
				{
					HX_STACK_LINE(15)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(15)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(15)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(15)
				x = _this->zpp_inner->x;
			}
			HX_STACK_LINE(15)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(15)
			{
				HX_STACK_LINE(15)
				::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(15)
				{
					HX_STACK_LINE(15)
					::nape::phys::Body _this1 = this->body;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(15)
					if (((_this1->zpp_inner->wrap_pos == null()))){
						HX_STACK_LINE(15)
						_this1->zpp_inner->setupPosition();
					}
					HX_STACK_LINE(15)
					_this = _this1->zpp_inner->wrap_pos;
				}
				HX_STACK_LINE(15)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(15)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(15)
				{
					HX_STACK_LINE(15)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(15)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(15)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(15)
				y = _this->zpp_inner->y;
			}
			HX_STACK_LINE(15)
			bool sweep = false;		HX_STACK_VAR(sweep,"sweep");
			HX_STACK_LINE(15)
			this->moveBy((x - this->x),(y - this->y),null(),sweep);
		}
	}
return null();
}



PhysicalEntity_obj::PhysicalEntity_obj()
{
}

void PhysicalEntity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PhysicalEntity);
	HX_MARK_MEMBER_NAME(body,"body");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PhysicalEntity_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(body,"body");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic PhysicalEntity_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		if (HX_FIELD_EQ(inName,"body") ) { return body; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PhysicalEntity_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< ::nape::phys::Body >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PhysicalEntity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("body"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("destroy"),
	HX_CSTRING("move"),
	HX_CSTRING("update"),
	HX_CSTRING("body"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicalEntity_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicalEntity_obj::__mClass,"__mClass");
};

#endif

Class PhysicalEntity_obj::__mClass;

void PhysicalEntity_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("entities.PhysicalEntity"), hx::TCanCast< PhysicalEntity_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void PhysicalEntity_obj::__boot()
{
}

} // end namespace entities
