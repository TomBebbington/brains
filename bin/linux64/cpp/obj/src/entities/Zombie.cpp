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
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_prototype_Rect
#include <com/haxepunk/graphics/prototype/Rect.h>
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
#ifndef INCLUDED_entities_Zombie
#include <entities/Zombie.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace entities{

Void Zombie_obj::__construct()
{
HX_STACK_FRAME("Zombie","new","Zombie.new","entities/Zombie.hx",10)
{
	HX_STACK_LINE(11)
	super::__construct(null(),null());
	HX_STACK_LINE(12)
	{
		HX_STACK_LINE(12)
		::nape::shape::ShapeList _this = this->body->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(12)
		::nape::shape::Shape obj = ::nape::shape::Polygon_obj::__new(::nape::shape::Polygon_obj::rect((int)0,(int)0,(int)24,(int)48,null()),null(),null());		HX_STACK_VAR(obj,"obj");
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
	{
		HX_STACK_LINE(13)
		::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(13)
		{
			HX_STACK_LINE(13)
			::nape::phys::Body _this1 = this->body;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(13)
			if (((_this1->zpp_inner->wrap_pos == null()))){
				HX_STACK_LINE(13)
				_this1->zpp_inner->setupPosition();
			}
			HX_STACK_LINE(13)
			_this = _this1->zpp_inner->wrap_pos;
		}
		HX_STACK_LINE(13)
		Float x = this->x = (int)0;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(13)
		Float y = this->y = (int)0;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(13)
		if (((bool((_this != null())) && bool(_this->zpp_disp)))){
			HX_STACK_LINE(13)
			HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(13)
		{
			HX_STACK_LINE(13)
			::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(13)
			if ((_this1->_immutable)){
				HX_STACK_LINE(13)
				HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
			}
			HX_STACK_LINE(13)
			if (((_this1->_isimmutable != null()))){
				HX_STACK_LINE(13)
				_this1->_isimmutable();
			}
		}
		HX_STACK_LINE(13)
		if (((bool((x != x)) || bool((y != y))))){
			HX_STACK_LINE(13)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
		}
		struct _Function_2_1{
			inline static Float Block( ::nape::geom::Vec2 _this){
				HX_STACK_FRAME("*","closure","*.closure","entities/Zombie.hx",13)
				{
					HX_STACK_LINE(13)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(13)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(13)
					{
						HX_STACK_LINE(13)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(13)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(13)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(13)
					return _this->zpp_inner->x;
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static Float Block( ::nape::geom::Vec2 _this){
				HX_STACK_FRAME("*","closure","*.closure","entities/Zombie.hx",13)
				{
					HX_STACK_LINE(13)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(13)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(13)
					{
						HX_STACK_LINE(13)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(13)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(13)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(13)
					return _this->zpp_inner->y;
				}
				return null();
			}
		};
		HX_STACK_LINE(13)
		if ((!(((bool((_Function_2_1::Block(_this) == x)) && bool((_Function_2_2::Block(_this) == y))))))){
			HX_STACK_LINE(13)
			{
				HX_STACK_LINE(13)
				_this->zpp_inner->x = x;
				HX_STACK_LINE(13)
				_this->zpp_inner->y = y;
				HX_STACK_LINE(13)
				{
				}
			}
			HX_STACK_LINE(13)
			{
				HX_STACK_LINE(13)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(13)
				if (((_this1->_invalidate != null()))){
					HX_STACK_LINE(13)
					_this1->_invalidate(_this1);
				}
			}
		}
		HX_STACK_LINE(13)
		_this;
	}
	HX_STACK_LINE(14)
	Float scale = ((::Math_obj::random() * 0.3) + 0.85);		HX_STACK_VAR(scale,"scale");
	HX_STACK_LINE(15)
	this->width = ::Std_obj::_int(((int)24 * scale));
	HX_STACK_LINE(16)
	this->height = ::Std_obj::_int(((int)48 * scale));
	HX_STACK_LINE(17)
	this->set_graphic(::com::haxepunk::graphics::prototype::Rect_obj::__new(this->width,this->height,(int)-16711936));
}
;
	return null();
}

Zombie_obj::~Zombie_obj() { }

Dynamic Zombie_obj::__CreateEmpty() { return  new Zombie_obj; }
hx::ObjectPtr< Zombie_obj > Zombie_obj::__new()
{  hx::ObjectPtr< Zombie_obj > result = new Zombie_obj();
	result->__construct();
	return result;}

Dynamic Zombie_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Zombie_obj > result = new Zombie_obj();
	result->__construct();
	return result;}

Void Zombie_obj::approach( Array< ::Dynamic > ps){
{
		HX_STACK_FRAME("Zombie","approach","Zombie.approach","entities/Zombie.hx",19)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ps,"ps")
		HX_STACK_LINE(20)
		Float maxVal = 0.0;		HX_STACK_VAR(maxVal,"maxVal");
		HX_STACK_LINE(21)
		::entities::Player p = null();		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(22)
		{
			HX_STACK_LINE(22)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(22)
			while(((_g < ps->length))){
				HX_STACK_LINE(22)
				::entities::Player pl = ps->__get(_g).StaticCast< ::entities::Player >();		HX_STACK_VAR(pl,"pl");
				HX_STACK_LINE(22)
				++(_g);
				HX_STACK_LINE(23)
				Float v;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(23)
				{
					HX_STACK_LINE(23)
					Float x1 = ((this->x - this->originX) + (Float(this->width) / Float((int)2)));		HX_STACK_VAR(x1,"x1");
					HX_STACK_LINE(23)
					Float y1 = ((this->y - this->originY) + (Float(this->height) / Float((int)2)));		HX_STACK_VAR(y1,"y1");
					HX_STACK_LINE(23)
					Float x2 = ((pl->x - pl->originX) + (Float(pl->width) / Float((int)2)));		HX_STACK_VAR(x2,"x2");
					HX_STACK_LINE(23)
					Float y2 = ((pl->y - pl->originY) + (Float(pl->height) / Float((int)2)));		HX_STACK_VAR(y2,"y2");
					HX_STACK_LINE(23)
					v = ::Math_obj::sqrt(((((x2 - x1)) * ((x2 - x1))) + (((y2 - y1)) * ((y2 - y1)))));
				}
				HX_STACK_LINE(24)
				if (((bool((bool((p == null())) || bool((v > maxVal)))) || bool((((pl->y - pl->originY) + pl->height) < ((p->y - p->originY) + p->height)))))){
					HX_STACK_LINE(25)
					maxVal = v;
					HX_STACK_LINE(26)
					p = pl;
				}
			}
		}
		HX_STACK_LINE(29)
		if (((::Math_obj::abs((((p->x - p->originX) + (Float(p->width) / Float((int)2))) - (((this->x - this->originX) + (Float(this->width) / Float((int)2)))))) < (int)5))){
		}
		else{
			HX_STACK_LINE(30)
			if (((((p->x - p->originX) + (Float(p->width) / Float((int)2))) > ((this->x - this->originX) + (Float(this->width) / Float((int)2)))))){
				HX_STACK_LINE(31)
				::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(31)
				{
					HX_STACK_LINE(31)
					::nape::phys::Body _this1 = this->body;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(31)
					if (((_this1->zpp_inner->wrap_vel == null()))){
						HX_STACK_LINE(31)
						_this1->zpp_inner->setupVelocity();
					}
					HX_STACK_LINE(31)
					_this = _this1->zpp_inner->wrap_vel;
				}
				HX_STACK_LINE(31)
				Float x = (this->width * (int)3);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(31)
				{
					HX_STACK_LINE(31)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(31)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(31)
					{
						HX_STACK_LINE(31)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(31)
						if ((_this1->_immutable)){
							HX_STACK_LINE(31)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(31)
						if (((_this1->_isimmutable != null()))){
							HX_STACK_LINE(31)
							_this1->_isimmutable();
						}
					}
					struct _Function_4_1{
						inline static Float Block( ::nape::geom::Vec2 _this){
							HX_STACK_FRAME("*","closure","*.closure","entities/Zombie.hx",31)
							{
								HX_STACK_LINE(31)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(31)
									HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(31)
								{
									HX_STACK_LINE(31)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(31)
									if (((_this1->_validate != null()))){
										HX_STACK_LINE(31)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(31)
								return _this->zpp_inner->x;
							}
							return null();
						}
					};
					HX_STACK_LINE(31)
					if (((_Function_4_1::Block(_this) != x))){
						HX_STACK_LINE(31)
						if (((x != x))){
							HX_STACK_LINE(31)
							HX_STACK_DO_THROW(((HX_CSTRING("Error: Vec2::") + HX_CSTRING("x")) + HX_CSTRING(" cannot be NaN")));
						}
						HX_STACK_LINE(31)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(31)
						{
							HX_STACK_LINE(31)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(31)
							if (((_this1->_invalidate != null()))){
								HX_STACK_LINE(31)
								_this1->_invalidate(_this1);
							}
						}
					}
				}
				HX_STACK_LINE(31)
				{
					HX_STACK_LINE(31)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(31)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(31)
					{
						HX_STACK_LINE(31)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(31)
						if (((_this1->_validate != null()))){
							HX_STACK_LINE(31)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(31)
					_this->zpp_inner->x;
				}
			}
			else{
				HX_STACK_LINE(32)
				if (((((p->x - p->originX) + (Float(p->width) / Float((int)2))) < ((this->x - this->originX) + (Float(this->width) / Float((int)2)))))){
					HX_STACK_LINE(33)
					::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(33)
					{
						HX_STACK_LINE(33)
						::nape::phys::Body _this1 = this->body;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(33)
						if (((_this1->zpp_inner->wrap_vel == null()))){
							HX_STACK_LINE(33)
							_this1->zpp_inner->setupVelocity();
						}
						HX_STACK_LINE(33)
						_this = _this1->zpp_inner->wrap_vel;
					}
					HX_STACK_LINE(33)
					Float x = (-(this->width) * (int)3);		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(33)
					{
						HX_STACK_LINE(33)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(33)
							HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(33)
						{
							HX_STACK_LINE(33)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(33)
							if ((_this1->_immutable)){
								HX_STACK_LINE(33)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(33)
							if (((_this1->_isimmutable != null()))){
								HX_STACK_LINE(33)
								_this1->_isimmutable();
							}
						}
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 _this){
								HX_STACK_FRAME("*","closure","*.closure","entities/Zombie.hx",33)
								{
									HX_STACK_LINE(33)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(33)
										HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(33)
									{
										HX_STACK_LINE(33)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(33)
										if (((_this1->_validate != null()))){
											HX_STACK_LINE(33)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(33)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(33)
						if (((_Function_5_1::Block(_this) != x))){
							HX_STACK_LINE(33)
							if (((x != x))){
								HX_STACK_LINE(33)
								HX_STACK_DO_THROW(((HX_CSTRING("Error: Vec2::") + HX_CSTRING("x")) + HX_CSTRING(" cannot be NaN")));
							}
							HX_STACK_LINE(33)
							_this->zpp_inner->x = x;
							HX_STACK_LINE(33)
							{
								HX_STACK_LINE(33)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(33)
								if (((_this1->_invalidate != null()))){
									HX_STACK_LINE(33)
									_this1->_invalidate(_this1);
								}
							}
						}
					}
					HX_STACK_LINE(33)
					{
						HX_STACK_LINE(33)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(33)
							HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(33)
						{
							HX_STACK_LINE(33)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(33)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(33)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(33)
						_this->zpp_inner->x;
					}
				}
			}
		}
		HX_STACK_LINE(34)
		if (((((p->y - p->originY) + p->height) < ((this->y - this->originY) + this->height)))){
			HX_STACK_LINE(35)
			this->jump();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Zombie_obj,approach,(void))


Zombie_obj::Zombie_obj()
{
}

void Zombie_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Zombie);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Zombie_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Zombie_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"approach") ) { return approach_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Zombie_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Zombie_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("approach"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Zombie_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Zombie_obj::__mClass,"__mClass");
};

#endif

Class Zombie_obj::__mClass;

void Zombie_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("entities.Zombie"), hx::TCanCast< Zombie_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void Zombie_obj::__boot()
{
}

} // end namespace entities
