#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_prototype_Rect
#include <com/haxepunk/graphics/prototype/Rect.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Input
#include <com/haxepunk/utils/Input.h>
#endif
#ifndef INCLUDED_entities_Bullet
#include <entities/Bullet.h>
#endif
#ifndef INCLUDED_entities_Person
#include <entities/Person.h>
#endif
#ifndef INCLUDED_entities_PhysicalEntity
#include <entities/PhysicalEntity.h>
#endif
#ifndef INCLUDED_entities_Player
#include <entities/Player.h>
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
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace entities{

Void Player_obj::__construct(::String __o_prefix)
{
HX_STACK_FRAME("Player","new","Player.new","entities/Player.hx",12)

HX_STACK_ARG(__o_prefix,"prefix")
::String prefix = __o_prefix.Default(HX_CSTRING("1"));
{
	HX_STACK_LINE(13)
	super::__construct(null(),null());
	HX_STACK_LINE(14)
	this->bulletTimeout = (int)0;
	HX_STACK_LINE(15)
	this->set_graphic(::com::haxepunk::graphics::prototype::Rect_obj::__new((int)24,(int)48,(int)-1));
	HX_STACK_LINE(16)
	{
		HX_STACK_LINE(16)
		::nape::shape::ShapeList _this = this->body->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(16)
		::nape::shape::Shape obj = ::nape::shape::Polygon_obj::__new(::nape::shape::Polygon_obj::rect((int)0,(int)0,(int)24,(int)48,null()),null(),null());		HX_STACK_VAR(obj,"obj");
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
	HX_STACK_LINE(17)
	this->prefix = prefix;
	HX_STACK_LINE(18)
	this->width = (int)24;
	HX_STACK_LINE(19)
	this->height = (int)48;
	HX_STACK_LINE(20)
	this->dir = (int)1;
	HX_STACK_LINE(21)
	{
		HX_STACK_LINE(21)
		Float y = ((::com::haxepunk::HXP_obj::height - (int)100) - ::Std_obj::random((int)200));		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(21)
		{
			HX_STACK_LINE(21)
			::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(21)
			{
				HX_STACK_LINE(21)
				::nape::phys::Body _this1 = this->body;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(21)
				if (((_this1->zpp_inner->wrap_pos == null()))){
					HX_STACK_LINE(21)
					_this1->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(21)
				_this = _this1->zpp_inner->wrap_pos;
			}
			HX_STACK_LINE(21)
			Float x = this->x = (((::com::haxepunk::HXP_obj::width - this->width)) * 0.5);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(21)
			Float y1 = this->y = y;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(21)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(21)
				HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(21)
			{
				HX_STACK_LINE(21)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(21)
				if ((_this1->_immutable)){
					HX_STACK_LINE(21)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(21)
				if (((_this1->_isimmutable != null()))){
					HX_STACK_LINE(21)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(21)
			if (((bool((x != x)) || bool((y1 != y1))))){
				HX_STACK_LINE(21)
				HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
			}
			struct _Function_3_1{
				inline static Float Block( ::nape::geom::Vec2 _this){
					HX_STACK_FRAME("*","closure","*.closure","entities/Player.hx",21)
					{
						HX_STACK_LINE(21)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(21)
							HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(21)
						{
							HX_STACK_LINE(21)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(21)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(21)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(21)
						return _this->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static Float Block( ::nape::geom::Vec2 _this){
					HX_STACK_FRAME("*","closure","*.closure","entities/Player.hx",21)
					{
						HX_STACK_LINE(21)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(21)
							HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(21)
						{
							HX_STACK_LINE(21)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(21)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(21)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(21)
						return _this->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(21)
			if ((!(((bool((_Function_3_1::Block(_this) == x)) && bool((_Function_3_2::Block(_this) == y1))))))){
				HX_STACK_LINE(21)
				{
					HX_STACK_LINE(21)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(21)
					_this->zpp_inner->y = y1;
					HX_STACK_LINE(21)
					{
					}
				}
				HX_STACK_LINE(21)
				{
					HX_STACK_LINE(21)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(21)
					if (((_this1->_invalidate != null()))){
						HX_STACK_LINE(21)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(21)
			_this;
		}
	}
}
;
	return null();
}

Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(::String __o_prefix)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(__o_prefix);
	return result;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(inArgs[0]);
	return result;}

::entities::Bullet Player_obj::shoot( ){
	HX_STACK_FRAME("Player","shoot","Player.shoot","entities/Player.hx",41)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	::entities::Bullet b = ::entities::Bullet_obj::__new(this->dir);		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			::nape::phys::Body _this1 = b->body;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(43)
			if (((_this1->zpp_inner->wrap_pos == null()))){
				HX_STACK_LINE(43)
				_this1->zpp_inner->setupPosition();
			}
			HX_STACK_LINE(43)
			_this = _this1->zpp_inner->wrap_pos;
		}
		HX_STACK_LINE(43)
		Float x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(43)
		x = (  (((this->dir > (int)0))) ? Float(b->x = ((this->x - this->originX) + this->width)) : Float(b->x = ((this->x - this->originX) - (int)10)) );
		HX_STACK_LINE(43)
		Float y = b->y = ((this->y - this->originY) + (Float(this->height) / Float((int)2)));		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(43)
		if (((bool((_this != null())) && bool(_this->zpp_disp)))){
			HX_STACK_LINE(43)
			HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(43)
			if ((_this1->_immutable)){
				HX_STACK_LINE(43)
				HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
			}
			HX_STACK_LINE(43)
			if (((_this1->_isimmutable != null()))){
				HX_STACK_LINE(43)
				_this1->_isimmutable();
			}
		}
		HX_STACK_LINE(43)
		if (((bool((x != x)) || bool((y != y))))){
			HX_STACK_LINE(43)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
		}
		struct _Function_2_1{
			inline static Float Block( ::nape::geom::Vec2 _this){
				HX_STACK_FRAME("*","closure","*.closure","entities/Player.hx",43)
				{
					HX_STACK_LINE(43)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(43)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(43)
					{
						HX_STACK_LINE(43)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(43)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(43)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(43)
					return _this->zpp_inner->x;
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static Float Block( ::nape::geom::Vec2 _this){
				HX_STACK_FRAME("*","closure","*.closure","entities/Player.hx",43)
				{
					HX_STACK_LINE(43)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(43)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(43)
					{
						HX_STACK_LINE(43)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(43)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(43)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(43)
					return _this->zpp_inner->y;
				}
				return null();
			}
		};
		HX_STACK_LINE(43)
		if ((!(((bool((_Function_2_1::Block(_this) == x)) && bool((_Function_2_2::Block(_this) == y))))))){
			HX_STACK_LINE(43)
			{
				HX_STACK_LINE(43)
				_this->zpp_inner->x = x;
				HX_STACK_LINE(43)
				_this->zpp_inner->y = y;
				HX_STACK_LINE(43)
				{
				}
			}
			HX_STACK_LINE(43)
			{
				HX_STACK_LINE(43)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(43)
				if (((_this1->_invalidate != null()))){
					HX_STACK_LINE(43)
					_this1->_invalidate(_this1);
				}
			}
		}
		HX_STACK_LINE(43)
		_this;
	}
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		::scenes::Play _this = ::scenes::Play_obj::current;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(44)
		_this->add(b);
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			::nape::geom::Vec2 _this1;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(44)
			{
				HX_STACK_LINE(44)
				::nape::phys::Body _this2 = b->body;		HX_STACK_VAR(_this2,"_this2");
				HX_STACK_LINE(44)
				if (((_this2->zpp_inner->wrap_pos == null()))){
					HX_STACK_LINE(44)
					_this2->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(44)
				_this1 = _this2->zpp_inner->wrap_pos;
			}
			HX_STACK_LINE(44)
			Float x = b->x = b->x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(44)
			Float y = b->y = b->y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(44)
			if (((bool((_this1 != null())) && bool(_this1->zpp_disp)))){
				HX_STACK_LINE(44)
				HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(44)
			{
				HX_STACK_LINE(44)
				::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
				HX_STACK_LINE(44)
				if ((_this2->_immutable)){
					HX_STACK_LINE(44)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(44)
				if (((_this2->_isimmutable != null()))){
					HX_STACK_LINE(44)
					_this2->_isimmutable();
				}
			}
			HX_STACK_LINE(44)
			if (((bool((x != x)) || bool((y != y))))){
				HX_STACK_LINE(44)
				HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
			}
			struct _Function_3_1{
				inline static Float Block( ::nape::geom::Vec2 &_this1){
					HX_STACK_FRAME("*","closure","*.closure","entities/Player.hx",44)
					{
						HX_STACK_LINE(44)
						if (((bool((_this1 != null())) && bool(_this1->zpp_disp)))){
							HX_STACK_LINE(44)
							HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(44)
						{
							HX_STACK_LINE(44)
							::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(44)
							if (((_this2->_validate != null()))){
								HX_STACK_LINE(44)
								_this2->_validate();
							}
						}
						HX_STACK_LINE(44)
						return _this1->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static Float Block( ::nape::geom::Vec2 &_this1){
					HX_STACK_FRAME("*","closure","*.closure","entities/Player.hx",44)
					{
						HX_STACK_LINE(44)
						if (((bool((_this1 != null())) && bool(_this1->zpp_disp)))){
							HX_STACK_LINE(44)
							HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(44)
						{
							HX_STACK_LINE(44)
							::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(44)
							if (((_this2->_validate != null()))){
								HX_STACK_LINE(44)
								_this2->_validate();
							}
						}
						HX_STACK_LINE(44)
						return _this1->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(44)
			if ((!(((bool((_Function_3_1::Block(_this1) == x)) && bool((_Function_3_2::Block(_this1) == y))))))){
				HX_STACK_LINE(44)
				{
					HX_STACK_LINE(44)
					_this1->zpp_inner->x = x;
					HX_STACK_LINE(44)
					_this1->zpp_inner->y = y;
					HX_STACK_LINE(44)
					{
					}
				}
				HX_STACK_LINE(44)
				{
					HX_STACK_LINE(44)
					::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
					HX_STACK_LINE(44)
					if (((_this2->_invalidate != null()))){
						HX_STACK_LINE(44)
						_this2->_invalidate(_this2);
					}
				}
			}
			HX_STACK_LINE(44)
			_this1;
		}
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			::nape::phys::Body _this1 = b->body;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(44)
			::nape::space::Space space = _this->space;		HX_STACK_VAR(space,"space");
			HX_STACK_LINE(44)
			{
				HX_STACK_LINE(44)
				if (((_this1->zpp_inner->compound != null()))){
					HX_STACK_LINE(44)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set"));
				}
				HX_STACK_LINE(44)
				_this1->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
				HX_STACK_LINE(44)
				if ((_this1->zpp_inner->world)){
					HX_STACK_LINE(44)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Space::world is immutable"));
				}
				HX_STACK_LINE(44)
				if (((((  (((_this1->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this1->zpp_inner->space->outer) )) != space))){
					HX_STACK_LINE(44)
					if (((((  (((_this1->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this1->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(44)
						_this1->zpp_inner->component->woken = false;
					}
					HX_STACK_LINE(44)
					if (((((  (((_this1->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this1->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(44)
						((  (((_this1->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this1->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(_this1);
					}
					HX_STACK_LINE(44)
					if (((space != null()))){
						HX_STACK_LINE(44)
						::nape::phys::BodyList _this2 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this2,"_this2");
						HX_STACK_LINE(44)
						if ((_this2->zpp_inner->reverse_flag)){
							HX_STACK_LINE(44)
							_this2->push(_this1);
						}
						else{
							HX_STACK_LINE(44)
							_this2->unshift(_this1);
						}
					}
				}
			}
			HX_STACK_LINE(44)
			if (((_this1->zpp_inner->space == null()))){
				HX_STACK_LINE(44)
				Dynamic();
			}
			else{
				HX_STACK_LINE(44)
				_this1->zpp_inner->space->outer;
			}
		}
		HX_STACK_LINE(44)
		b;
	}
	HX_STACK_LINE(45)
	return b;
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,shoot,return )

Void Player_obj::update( ){
{
		HX_STACK_FRAME("Player","update","Player.update","entities/Player.hx",23)
		HX_STACK_THIS(this)
		HX_STACK_LINE(24)
		if ((::com::haxepunk::utils::Input_obj::check(((HX_CSTRING("") + this->prefix) + HX_CSTRING("-left"))))){
			HX_STACK_LINE(25)
			this->dir = (int)-1;
			HX_STACK_LINE(26)
			{
				HX_STACK_LINE(26)
				::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(26)
				{
					HX_STACK_LINE(26)
					::nape::phys::Body _this1 = this->body;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(26)
					if (((_this1->zpp_inner->wrap_vel == null()))){
						HX_STACK_LINE(26)
						_this1->zpp_inner->setupVelocity();
					}
					HX_STACK_LINE(26)
					_this = _this1->zpp_inner->wrap_vel;
				}
				HX_STACK_LINE(26)
				Float x = (-(this->width) * (int)3);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(26)
				{
					HX_STACK_LINE(26)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(26)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(26)
					{
						HX_STACK_LINE(26)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(26)
						if ((_this1->_immutable)){
							HX_STACK_LINE(26)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(26)
						if (((_this1->_isimmutable != null()))){
							HX_STACK_LINE(26)
							_this1->_isimmutable();
						}
					}
					struct _Function_4_1{
						inline static Float Block( ::nape::geom::Vec2 _this){
							HX_STACK_FRAME("*","closure","*.closure","entities/Player.hx",26)
							{
								HX_STACK_LINE(26)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(26)
									HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(26)
								{
									HX_STACK_LINE(26)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(26)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(26)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(26)
								return _this->zpp_inner->x;
							}
							return null();
						}
					};
					HX_STACK_LINE(26)
					if (((_Function_4_1::Block(_this) != x))){
						HX_STACK_LINE(26)
						if (((x != x))){
							HX_STACK_LINE(26)
							HX_STACK_DO_THROW(((HX_CSTRING("Error: Vec2::") + HX_CSTRING("x")) + HX_CSTRING(" cannot be NaN")));
						}
						HX_STACK_LINE(26)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(26)
						{
							HX_STACK_LINE(26)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(26)
							if (((_this1->_invalidate != null()))){
								HX_STACK_LINE(26)
								_this1->_invalidate(_this1);
							}
						}
					}
				}
				HX_STACK_LINE(26)
				{
					HX_STACK_LINE(26)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(26)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(26)
					{
						HX_STACK_LINE(26)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(26)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(26)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(26)
					_this->zpp_inner->x;
				}
			}
		}
		else{
			HX_STACK_LINE(28)
			if ((::com::haxepunk::utils::Input_obj::check(((HX_CSTRING("") + this->prefix) + HX_CSTRING("-right"))))){
				HX_STACK_LINE(29)
				this->dir = (int)1;
				HX_STACK_LINE(30)
				{
					HX_STACK_LINE(30)
					::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(30)
					{
						HX_STACK_LINE(30)
						::nape::phys::Body _this1 = this->body;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(30)
						if (((_this1->zpp_inner->wrap_vel == null()))){
							HX_STACK_LINE(30)
							_this1->zpp_inner->setupVelocity();
						}
						HX_STACK_LINE(30)
						_this = _this1->zpp_inner->wrap_vel;
					}
					HX_STACK_LINE(30)
					Float x = (this->width * (int)3);		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(30)
					{
						HX_STACK_LINE(30)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(30)
							HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(30)
						{
							HX_STACK_LINE(30)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(30)
							if ((_this1->_immutable)){
								HX_STACK_LINE(30)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(30)
							if (((_this1->_isimmutable != null()))){
								HX_STACK_LINE(30)
								_this1->_isimmutable();
							}
						}
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 _this){
								HX_STACK_FRAME("*","closure","*.closure","entities/Player.hx",30)
								{
									HX_STACK_LINE(30)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(30)
										HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(30)
									{
										HX_STACK_LINE(30)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(30)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(30)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(30)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(30)
						if (((_Function_5_1::Block(_this) != x))){
							HX_STACK_LINE(30)
							if (((x != x))){
								HX_STACK_LINE(30)
								HX_STACK_DO_THROW(((HX_CSTRING("Error: Vec2::") + HX_CSTRING("x")) + HX_CSTRING(" cannot be NaN")));
							}
							HX_STACK_LINE(30)
							_this->zpp_inner->x = x;
							HX_STACK_LINE(30)
							{
								HX_STACK_LINE(30)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(30)
								if (((_this1->_invalidate != null()))){
									HX_STACK_LINE(30)
									_this1->_invalidate(_this1);
								}
							}
						}
					}
					HX_STACK_LINE(30)
					{
						HX_STACK_LINE(30)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(30)
							HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(30)
						{
							HX_STACK_LINE(30)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(30)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(30)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(30)
						_this->zpp_inner->x;
					}
				}
			}
		}
		HX_STACK_LINE(32)
		this->super::update();
		HX_STACK_LINE(33)
		if ((::com::haxepunk::utils::Input_obj::check(((HX_CSTRING("") + this->prefix) + HX_CSTRING("-jump"))))){
			HX_STACK_LINE(34)
			this->jump();
		}
		HX_STACK_LINE(35)
		if (((bool(::com::haxepunk::utils::Input_obj::check(((HX_CSTRING("") + this->prefix) + HX_CSTRING("-shoot")))) && bool((this->bulletTimeout <= (int)0))))){
			HX_STACK_LINE(36)
			this->shoot();
			HX_STACK_LINE(37)
			this->bulletTimeout = 0.2;
		}
		else{
			HX_STACK_LINE(38)
			if (((this->bulletTimeout > (int)0))){
				HX_STACK_LINE(39)
				hx::SubEq(this->bulletTimeout,::com::haxepunk::HXP_obj::elapsed);
			}
		}
	}
return null();
}



Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(prefix,"prefix");
	HX_MARK_MEMBER_NAME(dir,"dir");
	HX_MARK_MEMBER_NAME(bulletTimeout,"bulletTimeout");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(prefix,"prefix");
	HX_VISIT_MEMBER_NAME(dir,"dir");
	HX_VISIT_MEMBER_NAME(bulletTimeout,"bulletTimeout");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Player_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dir") ) { return dir; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shoot") ) { return shoot_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"prefix") ) { return prefix; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bulletTimeout") ) { return bulletTimeout; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dir") ) { dir=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"prefix") ) { prefix=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bulletTimeout") ) { bulletTimeout=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("prefix"));
	outFields->push(HX_CSTRING("dir"));
	outFields->push(HX_CSTRING("bulletTimeout"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("shoot"),
	HX_CSTRING("update"),
	HX_CSTRING("prefix"),
	HX_CSTRING("dir"),
	HX_CSTRING("bulletTimeout"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("entities.Player"), hx::TCanCast< Player_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void Player_obj::__boot()
{
}

} // end namespace entities
