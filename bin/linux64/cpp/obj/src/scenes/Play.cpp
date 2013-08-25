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
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Backdrop
#include <com/haxepunk/graphics/Backdrop.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Canvas
#include <com/haxepunk/graphics/Canvas.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Input
#include <com/haxepunk/utils/Input.h>
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
#ifndef INCLUDED_entities_Wall
#include <entities/Wall.h>
#endif
#ifndef INCLUDED_entities_Zombie
#include <entities/Zombie.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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
#ifndef INCLUDED_nape_space_Broadphase
#include <nape/space/Broadphase.h>
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
namespace scenes{

Void Play_obj::__construct()
{
HX_STACK_FRAME("Play","new","Play.new","scenes/Play.hx",10)
{
	HX_STACK_LINE(10)
	super::__construct();
}
;
	return null();
}

Play_obj::~Play_obj() { }

Dynamic Play_obj::__CreateEmpty() { return  new Play_obj; }
hx::ObjectPtr< Play_obj > Play_obj::__new()
{  hx::ObjectPtr< Play_obj > result = new Play_obj();
	result->__construct();
	return result;}

Dynamic Play_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Play_obj > result = new Play_obj();
	result->__construct();
	return result;}

Void Play_obj::update( ){
{
		HX_STACK_FRAME("Play","update","Play.update","scenes/Play.hx",49)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->super::update();
		HX_STACK_LINE(51)
		this->space->step(::com::haxepunk::HXP_obj::elapsed,null(),null());
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(52)
			Array< ::Dynamic > _g1 = this->zombies;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(52)
			while(((_g < _g1->length))){
				HX_STACK_LINE(52)
				::entities::Zombie z = _g1->__get(_g).StaticCast< ::entities::Zombie >();		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(52)
				++(_g);
				HX_STACK_LINE(53)
				if ((z->active)){
					HX_STACK_LINE(54)
					z->approach(this->players);
				}
				else{
					HX_STACK_LINE(56)
					this->remove(z);
					HX_STACK_LINE(57)
					this->zombies->remove(z);
				}
			}
		}
		HX_STACK_LINE(60)
		Float min = (int)0;		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(60)
		Float max = (int)0;		HX_STACK_VAR(max,"max");
		struct _Function_1_1{
			inline static Float Block( ::scenes::Play_obj *__this,Float &max,Float &min){
				HX_STACK_FRAME("*","closure","*.closure","scenes/Play.hx",61)
				{
					HX_STACK_LINE(62)
					Float total = (int)0;		HX_STACK_VAR(total,"total");
					HX_STACK_LINE(63)
					{
						HX_STACK_LINE(63)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(63)
						Array< ::Dynamic > _g1 = __this->players;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(63)
						while(((_g < _g1->length))){
							HX_STACK_LINE(63)
							::entities::Player p = _g1->__get(_g).StaticCast< ::entities::Player >();		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(63)
							++(_g);
							HX_STACK_LINE(64)
							min = ::Math_obj::min(min,p->x);
							HX_STACK_LINE(65)
							max = ::Math_obj::max(max,p->x);
							HX_STACK_LINE(66)
							hx::AddEq(total,p->x);
						}
					}
					HX_STACK_LINE(68)
					return (Float(total) / Float(__this->players->length));
				}
				return null();
			}
		};
		HX_STACK_LINE(61)
		::com::haxepunk::HXP_obj::camera->x = (((  (((this->players->length == (int)1))) ? Float(this->players->__get((int)0).StaticCast< ::entities::Player >()->x) : Float(_Function_1_1::Block(this,max,min)) )) - (::com::haxepunk::HXP_obj::width * 0.5));
		HX_STACK_LINE(70)
		if (((this->zombies->length < (int)6))){
			HX_STACK_LINE(71)
			::entities::Zombie z = ::entities::Zombie_obj::__new();		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(72)
			{
				HX_STACK_LINE(72)
				this->add(z);
				HX_STACK_LINE(72)
				{
					HX_STACK_LINE(72)
					::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(72)
					{
						HX_STACK_LINE(72)
						::nape::phys::Body _this1 = z->body;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(72)
						if (((_this1->zpp_inner->wrap_pos == null()))){
							HX_STACK_LINE(72)
							_this1->zpp_inner->setupPosition();
						}
						HX_STACK_LINE(72)
						_this = _this1->zpp_inner->wrap_pos;
					}
					HX_STACK_LINE(72)
					Float x = z->x = z->x;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(72)
					Float y = z->y = z->y;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(72)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(72)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(72)
					{
						HX_STACK_LINE(72)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(72)
						if ((_this1->_immutable)){
							HX_STACK_LINE(72)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(72)
						if (((_this1->_isimmutable != null()))){
							HX_STACK_LINE(72)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(72)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(72)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					struct _Function_4_1{
						inline static Float Block( ::nape::geom::Vec2 _this){
							HX_STACK_FRAME("*","closure","*.closure","scenes/Play.hx",72)
							{
								HX_STACK_LINE(72)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(72)
									HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(72)
								{
									HX_STACK_LINE(72)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(72)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(72)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(72)
								return _this->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static Float Block( ::nape::geom::Vec2 _this){
							HX_STACK_FRAME("*","closure","*.closure","scenes/Play.hx",72)
							{
								HX_STACK_LINE(72)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(72)
									HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(72)
								{
									HX_STACK_LINE(72)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(72)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(72)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(72)
								return _this->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(72)
					if ((!(((bool((_Function_4_1::Block(_this) == x)) && bool((_Function_4_2::Block(_this) == y))))))){
						HX_STACK_LINE(72)
						{
							HX_STACK_LINE(72)
							_this->zpp_inner->x = x;
							HX_STACK_LINE(72)
							_this->zpp_inner->y = y;
							HX_STACK_LINE(72)
							{
							}
						}
						HX_STACK_LINE(72)
						{
							HX_STACK_LINE(72)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(72)
							if (((_this1->_invalidate != null()))){
								HX_STACK_LINE(72)
								_this1->_invalidate(_this1);
							}
						}
					}
					HX_STACK_LINE(72)
					_this;
				}
				HX_STACK_LINE(72)
				{
					HX_STACK_LINE(72)
					::nape::phys::Body _this = z->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(72)
					::nape::space::Space space = this->space;		HX_STACK_VAR(space,"space");
					HX_STACK_LINE(72)
					{
						HX_STACK_LINE(72)
						if (((_this->zpp_inner->compound != null()))){
							HX_STACK_LINE(72)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set"));
						}
						HX_STACK_LINE(72)
						_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
						HX_STACK_LINE(72)
						if ((_this->zpp_inner->world)){
							HX_STACK_LINE(72)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Space::world is immutable"));
						}
						HX_STACK_LINE(72)
						if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != space))){
							HX_STACK_LINE(72)
							if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
								HX_STACK_LINE(72)
								_this->zpp_inner->component->woken = false;
							}
							HX_STACK_LINE(72)
							if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
								HX_STACK_LINE(72)
								((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(_this);
							}
							HX_STACK_LINE(72)
							if (((space != null()))){
								HX_STACK_LINE(72)
								::nape::phys::BodyList _this1 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(72)
								if ((_this1->zpp_inner->reverse_flag)){
									HX_STACK_LINE(72)
									_this1->push(_this);
								}
								else{
									HX_STACK_LINE(72)
									_this1->unshift(_this);
								}
							}
						}
					}
					HX_STACK_LINE(72)
					if (((_this->zpp_inner->space == null()))){
						HX_STACK_LINE(72)
						Dynamic();
					}
					else{
						HX_STACK_LINE(72)
						_this->zpp_inner->space->outer;
					}
				}
				HX_STACK_LINE(72)
				z;
			}
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(73)
				{
					HX_STACK_LINE(73)
					::nape::phys::Body _this1 = z->body;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(73)
					if (((_this1->zpp_inner->wrap_pos == null()))){
						HX_STACK_LINE(73)
						_this1->zpp_inner->setupPosition();
					}
					HX_STACK_LINE(73)
					_this = _this1->zpp_inner->wrap_pos;
				}
				HX_STACK_LINE(73)
				Float y = (::com::haxepunk::HXP_obj::height - this->floor->height);		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(73)
				{
					HX_STACK_LINE(73)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(73)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(73)
						if ((_this1->_immutable)){
							HX_STACK_LINE(73)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(73)
						if (((_this1->_isimmutable != null()))){
							HX_STACK_LINE(73)
							_this1->_isimmutable();
						}
					}
					struct _Function_4_1{
						inline static Float Block( ::nape::geom::Vec2 _this){
							HX_STACK_FRAME("*","closure","*.closure","scenes/Play.hx",73)
							{
								HX_STACK_LINE(73)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(73)
									HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(73)
								{
									HX_STACK_LINE(73)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(73)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(73)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(73)
								return _this->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(73)
					if (((_Function_4_1::Block(_this) != y))){
						HX_STACK_LINE(73)
						if (((y != y))){
							HX_STACK_LINE(73)
							HX_STACK_DO_THROW(((HX_CSTRING("Error: Vec2::") + HX_CSTRING("y")) + HX_CSTRING(" cannot be NaN")));
						}
						HX_STACK_LINE(73)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(73)
						{
							HX_STACK_LINE(73)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(73)
							if (((_this1->_invalidate != null()))){
								HX_STACK_LINE(73)
								_this1->_invalidate(_this1);
							}
						}
					}
				}
				HX_STACK_LINE(73)
				{
					HX_STACK_LINE(73)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(73)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(73)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(73)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(73)
					_this->zpp_inner->y;
				}
			}
			HX_STACK_LINE(74)
			{
				HX_STACK_LINE(74)
				::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(74)
				{
					HX_STACK_LINE(74)
					::nape::phys::Body _this1 = z->body;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(74)
					if (((_this1->zpp_inner->wrap_pos == null()))){
						HX_STACK_LINE(74)
						_this1->zpp_inner->setupPosition();
					}
					HX_STACK_LINE(74)
					_this = _this1->zpp_inner->wrap_pos;
				}
				HX_STACK_LINE(74)
				Float x = (::Math_obj::random() * (int)200);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(74)
				{
					HX_STACK_LINE(74)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(74)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(74)
					{
						HX_STACK_LINE(74)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(74)
						if ((_this1->_immutable)){
							HX_STACK_LINE(74)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(74)
						if (((_this1->_isimmutable != null()))){
							HX_STACK_LINE(74)
							_this1->_isimmutable();
						}
					}
					struct _Function_4_1{
						inline static Float Block( ::nape::geom::Vec2 _this){
							HX_STACK_FRAME("*","closure","*.closure","scenes/Play.hx",74)
							{
								HX_STACK_LINE(74)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(74)
									HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(74)
								{
									HX_STACK_LINE(74)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(74)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(74)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(74)
								return _this->zpp_inner->x;
							}
							return null();
						}
					};
					HX_STACK_LINE(74)
					if (((_Function_4_1::Block(_this) != x))){
						HX_STACK_LINE(74)
						if (((x != x))){
							HX_STACK_LINE(74)
							HX_STACK_DO_THROW(((HX_CSTRING("Error: Vec2::") + HX_CSTRING("x")) + HX_CSTRING(" cannot be NaN")));
						}
						HX_STACK_LINE(74)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(74)
						{
							HX_STACK_LINE(74)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(74)
							if (((_this1->_invalidate != null()))){
								HX_STACK_LINE(74)
								_this1->_invalidate(_this1);
							}
						}
					}
				}
				HX_STACK_LINE(74)
				{
					HX_STACK_LINE(74)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(74)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(74)
					{
						HX_STACK_LINE(74)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(74)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(74)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(74)
					_this->zpp_inner->x;
				}
			}
			HX_STACK_LINE(75)
			this->zombies->push(z);
		}
		HX_STACK_LINE(77)
		if ((((max - min) > ::com::haxepunk::HXP_obj::width))){
			HX_STACK_LINE(78)
			::com::haxepunk::HXP_obj::screen->set_scale((Float(::com::haxepunk::HXP_obj::width) / Float(((max - min)))));
		}
	}
return null();
}


::entities::PhysicalEntity Play_obj::addPhysical( ::entities::PhysicalEntity p){
	HX_STACK_FRAME("Play","addPhysical","Play.addPhysical","scenes/Play.hx",43)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(44)
	this->add(p);
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			::nape::phys::Body _this1 = p->body;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(45)
			if (((_this1->zpp_inner->wrap_pos == null()))){
				HX_STACK_LINE(45)
				_this1->zpp_inner->setupPosition();
			}
			HX_STACK_LINE(45)
			_this = _this1->zpp_inner->wrap_pos;
		}
		HX_STACK_LINE(45)
		Float x = p->x = p->x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(45)
		Float y = p->y = p->y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(45)
		if (((bool((_this != null())) && bool(_this->zpp_disp)))){
			HX_STACK_LINE(45)
			HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(45)
			if ((_this1->_immutable)){
				HX_STACK_LINE(45)
				HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
			}
			HX_STACK_LINE(45)
			if (((_this1->_isimmutable != null()))){
				HX_STACK_LINE(45)
				_this1->_isimmutable();
			}
		}
		HX_STACK_LINE(45)
		if (((bool((x != x)) || bool((y != y))))){
			HX_STACK_LINE(45)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
		}
		struct _Function_2_1{
			inline static Float Block( ::nape::geom::Vec2 _this){
				HX_STACK_FRAME("*","closure","*.closure","scenes/Play.hx",45)
				{
					HX_STACK_LINE(45)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(45)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(45)
					{
						HX_STACK_LINE(45)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(45)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(45)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(45)
					return _this->zpp_inner->x;
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static Float Block( ::nape::geom::Vec2 _this){
				HX_STACK_FRAME("*","closure","*.closure","scenes/Play.hx",45)
				{
					HX_STACK_LINE(45)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(45)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(45)
					{
						HX_STACK_LINE(45)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(45)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(45)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(45)
					return _this->zpp_inner->y;
				}
				return null();
			}
		};
		HX_STACK_LINE(45)
		if ((!(((bool((_Function_2_1::Block(_this) == x)) && bool((_Function_2_2::Block(_this) == y))))))){
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				_this->zpp_inner->x = x;
				HX_STACK_LINE(45)
				_this->zpp_inner->y = y;
				HX_STACK_LINE(45)
				{
				}
			}
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(45)
				if (((_this1->_invalidate != null()))){
					HX_STACK_LINE(45)
					_this1->_invalidate(_this1);
				}
			}
		}
		HX_STACK_LINE(45)
		_this;
	}
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		::nape::phys::Body _this = p->body;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(46)
		::nape::space::Space space = this->space;		HX_STACK_VAR(space,"space");
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			if (((_this->zpp_inner->compound != null()))){
				HX_STACK_LINE(46)
				HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set"));
			}
			HX_STACK_LINE(46)
			_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
			HX_STACK_LINE(46)
			if ((_this->zpp_inner->world)){
				HX_STACK_LINE(46)
				HX_STACK_DO_THROW(HX_CSTRING("Error: Space::world is immutable"));
			}
			HX_STACK_LINE(46)
			if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != space))){
				HX_STACK_LINE(46)
				if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
					HX_STACK_LINE(46)
					_this->zpp_inner->component->woken = false;
				}
				HX_STACK_LINE(46)
				if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
					HX_STACK_LINE(46)
					((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(_this);
				}
				HX_STACK_LINE(46)
				if (((space != null()))){
					HX_STACK_LINE(46)
					::nape::phys::BodyList _this1 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(46)
					if ((_this1->zpp_inner->reverse_flag)){
						HX_STACK_LINE(46)
						_this1->push(_this);
					}
					else{
						HX_STACK_LINE(46)
						_this1->unshift(_this);
					}
				}
			}
		}
		HX_STACK_LINE(46)
		if (((_this->zpp_inner->space == null()))){
			HX_STACK_LINE(46)
			Dynamic();
		}
		else{
			HX_STACK_LINE(46)
			_this->zpp_inner->space->outer;
		}
	}
	HX_STACK_LINE(47)
	return p;
}


HX_DEFINE_DYNAMIC_FUNC1(Play_obj,addPhysical,return )

Void Play_obj::begin( ){
{
		HX_STACK_FRAME("Play","begin","Play.begin","scenes/Play.hx",18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(19)
		::scenes::Play_obj::current = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(20)
		this->zombies = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(21)
		this->walls = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(22)
		this->space = ::nape::space::Space_obj::__new(::nape::geom::Vec2_obj::__new((int)0,(int)200),null());
		HX_STACK_LINE(23)
		this->addGraphic(::com::haxepunk::graphics::Backdrop_obj::__new(HX_CSTRING("assets/bg.png"),null(),null()),null(),null(),null());
		HX_STACK_LINE(24)
		::com::haxepunk::utils::Input_obj::define(HX_CSTRING("1-left"),Array_obj< int >::__new().Add((int)37).Add((int)65));
		HX_STACK_LINE(25)
		::com::haxepunk::utils::Input_obj::define(HX_CSTRING("1-right"),Array_obj< int >::__new().Add((int)39).Add((int)68));
		HX_STACK_LINE(26)
		::com::haxepunk::utils::Input_obj::define(HX_CSTRING("1-jump"),Array_obj< int >::__new().Add((int)38).Add((int)87).Add((int)32).Add((int)88).Add((int)90));
		HX_STACK_LINE(27)
		::com::haxepunk::utils::Input_obj::define(HX_CSTRING("1-shoot"),Array_obj< int >::__new().Add((int)16).Add((int)67));
		HX_STACK_LINE(28)
		::com::haxepunk::utils::Input_obj::define(HX_CSTRING("2-left"),Array_obj< int >::__new().Add((int)72));
		HX_STACK_LINE(29)
		::com::haxepunk::utils::Input_obj::define(HX_CSTRING("2-right"),Array_obj< int >::__new().Add((int)75));
		HX_STACK_LINE(30)
		::com::haxepunk::utils::Input_obj::define(HX_CSTRING("2-jump"),Array_obj< int >::__new().Add((int)85));
		HX_STACK_LINE(31)
		::com::haxepunk::utils::Input_obj::define(HX_CSTRING("2-shoot"),Array_obj< int >::__new().Add((int)74).Add((int)89).Add((int)73));
		HX_STACK_LINE(32)
		this->players = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(33)
		::entities::Player p = ::entities::Player_obj::__new(null());		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(34)
		{
			HX_STACK_LINE(34)
			this->add(p);
			HX_STACK_LINE(34)
			{
				HX_STACK_LINE(34)
				::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(34)
				{
					HX_STACK_LINE(34)
					::nape::phys::Body _this1 = p->body;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(34)
					if (((_this1->zpp_inner->wrap_pos == null()))){
						HX_STACK_LINE(34)
						_this1->zpp_inner->setupPosition();
					}
					HX_STACK_LINE(34)
					_this = _this1->zpp_inner->wrap_pos;
				}
				HX_STACK_LINE(34)
				Float x = p->x = p->x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(34)
				Float y = p->y = p->y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(34)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(34)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(34)
				{
					HX_STACK_LINE(34)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(34)
					if ((_this1->_immutable)){
						HX_STACK_LINE(34)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(34)
					if (((_this1->_isimmutable != null()))){
						HX_STACK_LINE(34)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(34)
				if (((bool((x != x)) || bool((y != y))))){
					HX_STACK_LINE(34)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
				}
				struct _Function_3_1{
					inline static Float Block( ::nape::geom::Vec2 _this){
						HX_STACK_FRAME("*","closure","*.closure","scenes/Play.hx",34)
						{
							HX_STACK_LINE(34)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(34)
								HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(34)
							{
								HX_STACK_LINE(34)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(34)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(34)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(34)
							return _this->zpp_inner->x;
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static Float Block( ::nape::geom::Vec2 _this){
						HX_STACK_FRAME("*","closure","*.closure","scenes/Play.hx",34)
						{
							HX_STACK_LINE(34)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(34)
								HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(34)
							{
								HX_STACK_LINE(34)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(34)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(34)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(34)
							return _this->zpp_inner->y;
						}
						return null();
					}
				};
				HX_STACK_LINE(34)
				if ((!(((bool((_Function_3_1::Block(_this) == x)) && bool((_Function_3_2::Block(_this) == y))))))){
					HX_STACK_LINE(34)
					{
						HX_STACK_LINE(34)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(34)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(34)
						{
						}
					}
					HX_STACK_LINE(34)
					{
						HX_STACK_LINE(34)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(34)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(34)
							_this1->_invalidate(_this1);
						}
					}
				}
				HX_STACK_LINE(34)
				_this;
			}
			HX_STACK_LINE(34)
			{
				HX_STACK_LINE(34)
				::nape::phys::Body _this = p->body;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(34)
				::nape::space::Space space = this->space;		HX_STACK_VAR(space,"space");
				HX_STACK_LINE(34)
				{
					HX_STACK_LINE(34)
					if (((_this->zpp_inner->compound != null()))){
						HX_STACK_LINE(34)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set"));
					}
					HX_STACK_LINE(34)
					_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
					HX_STACK_LINE(34)
					if ((_this->zpp_inner->world)){
						HX_STACK_LINE(34)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Space::world is immutable"));
					}
					HX_STACK_LINE(34)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != space))){
						HX_STACK_LINE(34)
						if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
							HX_STACK_LINE(34)
							_this->zpp_inner->component->woken = false;
						}
						HX_STACK_LINE(34)
						if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
							HX_STACK_LINE(34)
							((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(_this);
						}
						HX_STACK_LINE(34)
						if (((space != null()))){
							HX_STACK_LINE(34)
							::nape::phys::BodyList _this1 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(34)
							if ((_this1->zpp_inner->reverse_flag)){
								HX_STACK_LINE(34)
								_this1->push(_this);
							}
							else{
								HX_STACK_LINE(34)
								_this1->unshift(_this);
							}
						}
					}
				}
				HX_STACK_LINE(34)
				if (((_this->zpp_inner->space == null()))){
					HX_STACK_LINE(34)
					Dynamic();
				}
				else{
					HX_STACK_LINE(34)
					_this->zpp_inner->space->outer;
				}
			}
			HX_STACK_LINE(34)
			p;
		}
		HX_STACK_LINE(35)
		this->players->push(p);
		HX_STACK_LINE(36)
		this->floor = ::entities::Wall_obj::__new((int)10000,null(),null());
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			::entities::Wall _this = this->floor;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(37)
			{
				HX_STACK_LINE(37)
				::nape::geom::Vec2 _this1;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(37)
				{
					HX_STACK_LINE(37)
					::nape::phys::Body _this2 = _this->body;		HX_STACK_VAR(_this2,"_this2");
					HX_STACK_LINE(37)
					if (((_this2->zpp_inner->wrap_pos == null()))){
						HX_STACK_LINE(37)
						_this2->zpp_inner->setupPosition();
					}
					HX_STACK_LINE(37)
					_this1 = _this2->zpp_inner->wrap_pos;
				}
				HX_STACK_LINE(37)
				Float x = _this->x = (int)-5000;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(37)
				Float y = _this->y = (::com::haxepunk::HXP_obj::height - this->floor->height);		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(37)
				if (((bool((_this1 != null())) && bool(_this1->zpp_disp)))){
					HX_STACK_LINE(37)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(37)
				{
					HX_STACK_LINE(37)
					::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
					HX_STACK_LINE(37)
					if ((_this2->_immutable)){
						HX_STACK_LINE(37)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(37)
					if (((_this2->_isimmutable != null()))){
						HX_STACK_LINE(37)
						_this2->_isimmutable();
					}
				}
				HX_STACK_LINE(37)
				if (((bool((x != x)) || bool((y != y))))){
					HX_STACK_LINE(37)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
				}
				struct _Function_3_1{
					inline static Float Block( ::nape::geom::Vec2 &_this1){
						HX_STACK_FRAME("*","closure","*.closure","scenes/Play.hx",37)
						{
							HX_STACK_LINE(37)
							if (((bool((_this1 != null())) && bool(_this1->zpp_disp)))){
								HX_STACK_LINE(37)
								HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(37)
							{
								HX_STACK_LINE(37)
								::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(37)
								if (((_this2->_validate != null()))){
									HX_STACK_LINE(37)
									_this2->_validate();
								}
							}
							HX_STACK_LINE(37)
							return _this1->zpp_inner->x;
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static Float Block( ::nape::geom::Vec2 &_this1){
						HX_STACK_FRAME("*","closure","*.closure","scenes/Play.hx",37)
						{
							HX_STACK_LINE(37)
							if (((bool((_this1 != null())) && bool(_this1->zpp_disp)))){
								HX_STACK_LINE(37)
								HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(37)
							{
								HX_STACK_LINE(37)
								::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(37)
								if (((_this2->_validate != null()))){
									HX_STACK_LINE(37)
									_this2->_validate();
								}
							}
							HX_STACK_LINE(37)
							return _this1->zpp_inner->y;
						}
						return null();
					}
				};
				HX_STACK_LINE(37)
				if ((!(((bool((_Function_3_1::Block(_this1) == x)) && bool((_Function_3_2::Block(_this1) == y))))))){
					HX_STACK_LINE(37)
					{
						HX_STACK_LINE(37)
						_this1->zpp_inner->x = x;
						HX_STACK_LINE(37)
						_this1->zpp_inner->y = y;
						HX_STACK_LINE(37)
						{
						}
					}
					HX_STACK_LINE(37)
					{
						HX_STACK_LINE(37)
						::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
						HX_STACK_LINE(37)
						if (((_this2->_invalidate != null()))){
							HX_STACK_LINE(37)
							_this2->_invalidate(_this2);
						}
					}
				}
				HX_STACK_LINE(37)
				_this1;
			}
		}
		HX_STACK_LINE(38)
		{
			HX_STACK_LINE(38)
			::entities::PhysicalEntity p1 = this->floor;		HX_STACK_VAR(p1,"p1");
			HX_STACK_LINE(38)
			this->add(p1);
			HX_STACK_LINE(38)
			{
				HX_STACK_LINE(38)
				::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(38)
				{
					HX_STACK_LINE(38)
					::nape::phys::Body _this1 = p1->body;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(38)
					if (((_this1->zpp_inner->wrap_pos == null()))){
						HX_STACK_LINE(38)
						_this1->zpp_inner->setupPosition();
					}
					HX_STACK_LINE(38)
					_this = _this1->zpp_inner->wrap_pos;
				}
				HX_STACK_LINE(38)
				Float x = p1->x = p1->x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(38)
				Float y = p1->y = p1->y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(38)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(38)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(38)
				{
					HX_STACK_LINE(38)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(38)
					if ((_this1->_immutable)){
						HX_STACK_LINE(38)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(38)
					if (((_this1->_isimmutable != null()))){
						HX_STACK_LINE(38)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(38)
				if (((bool((x != x)) || bool((y != y))))){
					HX_STACK_LINE(38)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
				}
				struct _Function_3_1{
					inline static Float Block( ::nape::geom::Vec2 _this){
						HX_STACK_FRAME("*","closure","*.closure","scenes/Play.hx",38)
						{
							HX_STACK_LINE(38)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(38)
								HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(38)
							{
								HX_STACK_LINE(38)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(38)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(38)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(38)
							return _this->zpp_inner->x;
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static Float Block( ::nape::geom::Vec2 _this){
						HX_STACK_FRAME("*","closure","*.closure","scenes/Play.hx",38)
						{
							HX_STACK_LINE(38)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(38)
								HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(38)
							{
								HX_STACK_LINE(38)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(38)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(38)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(38)
							return _this->zpp_inner->y;
						}
						return null();
					}
				};
				HX_STACK_LINE(38)
				if ((!(((bool((_Function_3_1::Block(_this) == x)) && bool((_Function_3_2::Block(_this) == y))))))){
					HX_STACK_LINE(38)
					{
						HX_STACK_LINE(38)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(38)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(38)
						{
						}
					}
					HX_STACK_LINE(38)
					{
						HX_STACK_LINE(38)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(38)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(38)
							_this1->_invalidate(_this1);
						}
					}
				}
				HX_STACK_LINE(38)
				_this;
			}
			HX_STACK_LINE(38)
			{
				HX_STACK_LINE(38)
				::nape::phys::Body _this = p1->body;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(38)
				::nape::space::Space space = this->space;		HX_STACK_VAR(space,"space");
				HX_STACK_LINE(38)
				{
					HX_STACK_LINE(38)
					if (((_this->zpp_inner->compound != null()))){
						HX_STACK_LINE(38)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set"));
					}
					HX_STACK_LINE(38)
					_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
					HX_STACK_LINE(38)
					if ((_this->zpp_inner->world)){
						HX_STACK_LINE(38)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Space::world is immutable"));
					}
					HX_STACK_LINE(38)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != space))){
						HX_STACK_LINE(38)
						if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
							HX_STACK_LINE(38)
							_this->zpp_inner->component->woken = false;
						}
						HX_STACK_LINE(38)
						if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
							HX_STACK_LINE(38)
							((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(_this);
						}
						HX_STACK_LINE(38)
						if (((space != null()))){
							HX_STACK_LINE(38)
							::nape::phys::BodyList _this1 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(38)
							if ((_this1->zpp_inner->reverse_flag)){
								HX_STACK_LINE(38)
								_this1->push(_this);
							}
							else{
								HX_STACK_LINE(38)
								_this1->unshift(_this);
							}
						}
					}
				}
				HX_STACK_LINE(38)
				if (((_this->zpp_inner->space == null()))){
					HX_STACK_LINE(38)
					Dynamic();
				}
				else{
					HX_STACK_LINE(38)
					_this->zpp_inner->space->outer;
				}
			}
			HX_STACK_LINE(38)
			p1;
		}
		HX_STACK_LINE(39)
		::entities::Wall p1 = ::entities::Wall_obj::__new(::Std_obj::_int((::com::haxepunk::HXP_obj::width * 0.5)),null(),null());		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			bool sweep = false;		HX_STACK_VAR(sweep,"sweep");
			HX_STACK_LINE(40)
			p1->moveBy(((int)0 - p1->x),((::com::haxepunk::HXP_obj::height - (this->floor->height * (int)6)) - p1->y),null(),sweep);
		}
		HX_STACK_LINE(41)
		{
			HX_STACK_LINE(41)
			this->add(p1);
			HX_STACK_LINE(41)
			{
				HX_STACK_LINE(41)
				::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(41)
				{
					HX_STACK_LINE(41)
					::nape::phys::Body _this1 = p1->body;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(41)
					if (((_this1->zpp_inner->wrap_pos == null()))){
						HX_STACK_LINE(41)
						_this1->zpp_inner->setupPosition();
					}
					HX_STACK_LINE(41)
					_this = _this1->zpp_inner->wrap_pos;
				}
				HX_STACK_LINE(41)
				Float x = p1->x = p1->x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(41)
				Float y = p1->y = p1->y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(41)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(41)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(41)
				{
					HX_STACK_LINE(41)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(41)
					if ((_this1->_immutable)){
						HX_STACK_LINE(41)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(41)
					if (((_this1->_isimmutable != null()))){
						HX_STACK_LINE(41)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(41)
				if (((bool((x != x)) || bool((y != y))))){
					HX_STACK_LINE(41)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
				}
				struct _Function_3_1{
					inline static Float Block( ::nape::geom::Vec2 _this){
						HX_STACK_FRAME("*","closure","*.closure","scenes/Play.hx",41)
						{
							HX_STACK_LINE(41)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(41)
								HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(41)
							{
								HX_STACK_LINE(41)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(41)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(41)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(41)
							return _this->zpp_inner->x;
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static Float Block( ::nape::geom::Vec2 _this){
						HX_STACK_FRAME("*","closure","*.closure","scenes/Play.hx",41)
						{
							HX_STACK_LINE(41)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(41)
								HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(41)
							{
								HX_STACK_LINE(41)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(41)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(41)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(41)
							return _this->zpp_inner->y;
						}
						return null();
					}
				};
				HX_STACK_LINE(41)
				if ((!(((bool((_Function_3_1::Block(_this) == x)) && bool((_Function_3_2::Block(_this) == y))))))){
					HX_STACK_LINE(41)
					{
						HX_STACK_LINE(41)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(41)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(41)
						{
						}
					}
					HX_STACK_LINE(41)
					{
						HX_STACK_LINE(41)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(41)
						if (((_this1->_invalidate != null()))){
							HX_STACK_LINE(41)
							_this1->_invalidate(_this1);
						}
					}
				}
				HX_STACK_LINE(41)
				_this;
			}
			HX_STACK_LINE(41)
			{
				HX_STACK_LINE(41)
				::nape::phys::Body _this = p1->body;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(41)
				::nape::space::Space space = this->space;		HX_STACK_VAR(space,"space");
				HX_STACK_LINE(41)
				{
					HX_STACK_LINE(41)
					if (((_this->zpp_inner->compound != null()))){
						HX_STACK_LINE(41)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set"));
					}
					HX_STACK_LINE(41)
					_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
					HX_STACK_LINE(41)
					if ((_this->zpp_inner->world)){
						HX_STACK_LINE(41)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Space::world is immutable"));
					}
					HX_STACK_LINE(41)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != space))){
						HX_STACK_LINE(41)
						if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
							HX_STACK_LINE(41)
							_this->zpp_inner->component->woken = false;
						}
						HX_STACK_LINE(41)
						if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
							HX_STACK_LINE(41)
							((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(_this);
						}
						HX_STACK_LINE(41)
						if (((space != null()))){
							HX_STACK_LINE(41)
							::nape::phys::BodyList _this1 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(41)
							if ((_this1->zpp_inner->reverse_flag)){
								HX_STACK_LINE(41)
								_this1->push(_this);
							}
							else{
								HX_STACK_LINE(41)
								_this1->unshift(_this);
							}
						}
					}
				}
				HX_STACK_LINE(41)
				if (((_this->zpp_inner->space == null()))){
					HX_STACK_LINE(41)
					Dynamic();
				}
				else{
					HX_STACK_LINE(41)
					_this->zpp_inner->space->outer;
				}
			}
			HX_STACK_LINE(41)
			p1;
		}
	}
return null();
}


::scenes::Play Play_obj::current;


Play_obj::Play_obj()
{
}

void Play_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Play);
	HX_MARK_MEMBER_NAME(walls,"walls");
	HX_MARK_MEMBER_NAME(floor,"floor");
	HX_MARK_MEMBER_NAME(zombies,"zombies");
	HX_MARK_MEMBER_NAME(players,"players");
	HX_MARK_MEMBER_NAME(space,"space");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Play_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(walls,"walls");
	HX_VISIT_MEMBER_NAME(floor,"floor");
	HX_VISIT_MEMBER_NAME(zombies,"zombies");
	HX_VISIT_MEMBER_NAME(players,"players");
	HX_VISIT_MEMBER_NAME(space,"space");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Play_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"walls") ) { return walls; }
		if (HX_FIELD_EQ(inName,"floor") ) { return floor; }
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
		if (HX_FIELD_EQ(inName,"zombies") ) { return zombies; }
		if (HX_FIELD_EQ(inName,"players") ) { return players; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addPhysical") ) { return addPhysical_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Play_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"walls") ) { walls=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"floor") ) { floor=inValue.Cast< ::entities::Wall >(); return inValue; }
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::nape::space::Space >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< ::scenes::Play >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zombies") ) { zombies=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"players") ) { players=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Play_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("walls"));
	outFields->push(HX_CSTRING("floor"));
	outFields->push(HX_CSTRING("zombies"));
	outFields->push(HX_CSTRING("players"));
	outFields->push(HX_CSTRING("space"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("current"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("addPhysical"),
	HX_CSTRING("begin"),
	HX_CSTRING("walls"),
	HX_CSTRING("floor"),
	HX_CSTRING("zombies"),
	HX_CSTRING("players"),
	HX_CSTRING("space"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Play_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Play_obj::current,"current");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Play_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Play_obj::current,"current");
};

#endif

Class Play_obj::__mClass;

void Play_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scenes.Play"), hx::TCanCast< Play_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void Play_obj::__boot()
{
	current= null();
}

} // end namespace scenes
