#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_entities_Person
#include <entities/Person.h>
#endif
#ifndef INCLUDED_entities_PhysicalEntity
#include <entities/PhysicalEntity.h>
#endif
#ifndef INCLUDED_entities_Wall
#include <entities/Wall.h>
#endif
#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbEvent
#include <nape/callbacks/CbEvent.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeList
#include <nape/callbacks/CbTypeList.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionCallback
#include <nape/callbacks/InteractionCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionListener
#include <nape/callbacks/InteractionListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionType
#include <nape/callbacks/InteractionType.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerList
#include <nape/callbacks/ListenerList.h>
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
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_scenes_Play
#include <scenes/Play.h>
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
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_CbTypeList
#include <zpp_nape/util/ZPP_CbTypeList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ListenerList
#include <zpp_nape/util/ZPP_ListenerList.h>
#endif
namespace entities{

Void Person_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y)
{
HX_STACK_FRAME("Person","new","Person.new","entities/Person.hx",9)

HX_STACK_ARG(__o_x,"x")

HX_STACK_ARG(__o_y,"y")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
{
	HX_STACK_LINE(12)
	this->canJump = false;
	HX_STACK_LINE(14)
	this->health = (int)1;
	struct _Function_1_1{
		inline static ::nape::phys::BodyType Block( ){
			HX_STACK_FRAME("*","closure","*.closure","entities/Person.hx",15)
			{
				HX_STACK_LINE(15)
				if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
					HX_STACK_LINE(15)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(15)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
					HX_STACK_LINE(15)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(15)
				return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
			}
			return null();
		}
	};
	HX_STACK_LINE(15)
	super::__construct(_Function_1_1::Block());
	HX_STACK_LINE(16)
	{
		HX_STACK_LINE(16)
		::nape::callbacks::CbTypeList _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(16)
		{
			HX_STACK_LINE(16)
			::nape::phys::Body _this1 = this->body;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(16)
			if (((_this1->zpp_inner_i->wrap_cbTypes == null()))){
				HX_STACK_LINE(16)
				_this1->zpp_inner_i->setupcbTypes();
			}
			HX_STACK_LINE(16)
			_this = _this1->zpp_inner_i->wrap_cbTypes;
		}
		HX_STACK_LINE(16)
		::nape::callbacks::CbType obj = ::entities::Person_obj::collisionType;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(16)
		if ((_this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(16)
			_this->push(obj);
		}
		else{
			HX_STACK_LINE(16)
			_this->unshift(obj);
		}
	}
}
;
	return null();
}

Person_obj::~Person_obj() { }

Dynamic Person_obj::__CreateEmpty() { return  new Person_obj; }
hx::ObjectPtr< Person_obj > Person_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y)
{  hx::ObjectPtr< Person_obj > result = new Person_obj();
	result->__construct(__o_x,__o_y);
	return result;}

Dynamic Person_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Person_obj > result = new Person_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Person_obj::jump( ){
{
		HX_STACK_FRAME("Person","jump","Person.jump","entities/Person.hx",47)
		HX_STACK_THIS(this)
		HX_STACK_LINE(48)
		if ((!(this->canJump))){
			HX_STACK_LINE(49)
			return null();
		}
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(50)
			{
				HX_STACK_LINE(50)
				::nape::phys::Body _this1 = this->body;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(50)
				if (((_this1->zpp_inner->wrap_vel == null()))){
					HX_STACK_LINE(50)
					_this1->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(50)
				_this = _this1->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(50)
			Float y = (-(this->height) * (int)4);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(50)
			{
				HX_STACK_LINE(50)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(50)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(50)
				{
					HX_STACK_LINE(50)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(50)
					if ((_this1->_immutable)){
						HX_STACK_LINE(50)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(50)
					if (((_this1->_isimmutable != null()))){
						HX_STACK_LINE(50)
						_this1->_isimmutable();
					}
				}
				struct _Function_3_1{
					inline static Float Block( ::nape::geom::Vec2 _this){
						HX_STACK_FRAME("*","closure","*.closure","entities/Person.hx",50)
						{
							HX_STACK_LINE(50)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(50)
								HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(50)
							{
								HX_STACK_LINE(50)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(50)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(50)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(50)
							return _this->zpp_inner->y;
						}
						return null();
					}
				};
				HX_STACK_LINE(50)
				if (((_Function_3_1::Block(_this) != y))){
					HX_STACK_LINE(50)
					if (((y != y))){
						HX_STACK_LINE(50)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: Vec2::") + HX_CSTRING("y")) + HX_CSTRING(" cannot be NaN")));
					}
					HX_STACK_LINE(50)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(50)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(50)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(50)
							_this1->_invalidate(_this1);
						}
					}
				}
			}
			HX_STACK_LINE(50)
			{
				HX_STACK_LINE(50)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(50)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(50)
				{
					HX_STACK_LINE(50)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(50)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(50)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(50)
				_this->zpp_inner->y;
			}
		}
		HX_STACK_LINE(51)
		this->canJump = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Person_obj,jump,(void))

Void Person_obj::die( ){
{
		HX_STACK_FRAME("Person","die","Person.die","entities/Person.hx",45)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		this->active = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Person_obj,die,(void))

Void Person_obj::update( ){
{
		HX_STACK_FRAME("Person","update","Person.update","entities/Person.hx",26)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		if (((this->health <= (int)0))){
			HX_STACK_LINE(29)
			this->die();
			HX_STACK_LINE(30)
			this->super::update();
			HX_STACK_LINE(31)
			return null();
		}
		HX_STACK_LINE(42)
		this->super::update();
	}
return null();
}


Void Person_obj::collideWall( ::nape::callbacks::InteractionCallback c){
{
		HX_STACK_FRAME("Person","collideWall","Person.collideWall","entities/Person.hx",24)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(24)
		this->canJump = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Person_obj,collideWall,(void))

Void Person_obj::added( ){
{
		HX_STACK_FRAME("Person","added","Person.added","entities/Person.hx",18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(19)
		this->super::added();
		HX_STACK_LINE(20)
		::nape::space::Space s = ::scenes::Play_obj::current->space;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(21)
		{
			HX_STACK_LINE(21)
			::nape::callbacks::ListenerList _this = s->zpp_inner->wrap_listeners;		HX_STACK_VAR(_this,"_this");
			struct _Function_2_1{
				inline static ::nape::callbacks::CbEvent Block( ){
					HX_STACK_FRAME("*","closure","*.closure","entities/Person.hx",21)
					{
						HX_STACK_LINE(21)
						if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN == null()))){
							HX_STACK_LINE(21)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(21)
							::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN = ::nape::callbacks::CbEvent_obj::__new();
							HX_STACK_LINE(21)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(21)
						return ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static ::nape::callbacks::InteractionType Block( ){
					HX_STACK_FRAME("*","closure","*.closure","entities/Person.hx",21)
					{
						HX_STACK_LINE(21)
						if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
							HX_STACK_LINE(21)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(21)
							::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = ::nape::callbacks::InteractionType_obj::__new();
							HX_STACK_LINE(21)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(21)
						return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
					}
					return null();
				}
			};
			HX_STACK_LINE(21)
			::nape::callbacks::Listener obj = ::nape::callbacks::InteractionListener_obj::__new(_Function_2_1::Block(),_Function_2_2::Block(),::entities::Wall_obj::collisionType,::entities::Person_obj::collisionType,this->collideWall_dyn(),null());		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(21)
			if ((_this->zpp_inner->reverse_flag)){
				HX_STACK_LINE(21)
				_this->push(obj);
			}
			else{
				HX_STACK_LINE(21)
				_this->unshift(obj);
			}
		}
	}
return null();
}


::nape::callbacks::CbType Person_obj::collisionType;


Person_obj::Person_obj()
{
}

void Person_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Person);
	HX_MARK_MEMBER_NAME(canJump,"canJump");
	HX_MARK_MEMBER_NAME(health,"health");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Person_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(canJump,"canJump");
	HX_VISIT_MEMBER_NAME(health,"health");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Person_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"die") ) { return die_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"jump") ) { return jump_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"added") ) { return added_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"health") ) { return health; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"canJump") ) { return canJump; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideWall") ) { return collideWall_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisionType") ) { return collisionType; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Person_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"health") ) { health=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"canJump") ) { canJump=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisionType") ) { collisionType=inValue.Cast< ::nape::callbacks::CbType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Person_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("canJump"));
	outFields->push(HX_CSTRING("health"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("collisionType"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("jump"),
	HX_CSTRING("die"),
	HX_CSTRING("update"),
	HX_CSTRING("collideWall"),
	HX_CSTRING("added"),
	HX_CSTRING("canJump"),
	HX_CSTRING("health"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Person_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Person_obj::collisionType,"collisionType");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Person_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Person_obj::collisionType,"collisionType");
};

#endif

Class Person_obj::__mClass;

void Person_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("entities.Person"), hx::TCanCast< Person_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void Person_obj::__boot()
{
	collisionType= ::nape::callbacks::CbType_obj::__new();
}

} // end namespace entities
