#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Circle
#include <com/haxepunk/masks/Circle.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Grid
#include <com/haxepunk/masks/Grid.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Masklist
#include <com/haxepunk/masks/Masklist.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Polygon
#include <com/haxepunk/masks/Polygon.h>
#endif
#ifndef INCLUDED_com_haxepunk_math_Projection
#include <com/haxepunk/math/Projection.h>
#endif
#ifndef INCLUDED_com_haxepunk_math_Vector
#include <com/haxepunk/math/Vector.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace haxepunk{
namespace masks{

Void Polygon_obj::__construct(Array< ::Dynamic > points,::flash::geom::Point origin)
{
HX_STACK_FRAME("Polygon","new","Polygon.new","com/haxepunk/masks/Polygon.hx",23)

HX_STACK_ARG(points,"points")

HX_STACK_ARG(origin,"origin")
{
	HX_STACK_LINE(24)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(25)
	this->_points = points;
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Hitbox >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(27)
		this->_check->set(key,this->collideHitbox_dyn());
	}
	HX_STACK_LINE(28)
	{
		HX_STACK_LINE(28)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Circle >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(28)
		this->_check->set(key,this->collideCircle_dyn());
	}
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Polygon >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(29)
		this->_check->set(key,this->collidePolygon_dyn());
	}
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Grid >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(30)
		this->_check->set(key,this->collideGrid_dyn());
	}
	HX_STACK_LINE(32)
	if (((origin != null()))){
		HX_STACK_LINE(32)
		this->origin = origin;
	}
	else{
		HX_STACK_LINE(32)
		this->origin = ::flash::geom::Point_obj::__new(null(),null());
	}
	HX_STACK_LINE(33)
	this->_angle = (int)0;
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			this->_axes = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(35)
			Float store;		HX_STACK_VAR(store,"store");
			HX_STACK_LINE(35)
			int numberOfPoints = (this->_points->length - (int)1);		HX_STACK_VAR(numberOfPoints,"numberOfPoints");
			HX_STACK_LINE(35)
			{
				HX_STACK_LINE(35)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(35)
				while(((_g < numberOfPoints))){
					HX_STACK_LINE(35)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(35)
					::com::haxepunk::math::Vector edge = ::com::haxepunk::math::Vector_obj::__new(null(),null());		HX_STACK_VAR(edge,"edge");
					HX_STACK_LINE(35)
					edge->x = (this->_points->__get(i).StaticCast< ::flash::geom::Point >()->x - this->_points->__get((i + (int)1)).StaticCast< ::flash::geom::Point >()->x);
					HX_STACK_LINE(35)
					edge->y = (this->_points->__get(i).StaticCast< ::flash::geom::Point >()->y - this->_points->__get((i + (int)1)).StaticCast< ::flash::geom::Point >()->y);
					HX_STACK_LINE(35)
					store = edge->y;
					HX_STACK_LINE(35)
					edge->y = -(edge->x);
					HX_STACK_LINE(35)
					edge->x = store;
					HX_STACK_LINE(35)
					edge->normalize((int)1);
					HX_STACK_LINE(35)
					this->_axes->push(edge);
				}
			}
			HX_STACK_LINE(35)
			::com::haxepunk::math::Vector edge = ::com::haxepunk::math::Vector_obj::__new(null(),null());		HX_STACK_VAR(edge,"edge");
			HX_STACK_LINE(35)
			edge->x = (this->_points->__get(numberOfPoints).StaticCast< ::flash::geom::Point >()->x - this->_points->__get((int)0).StaticCast< ::flash::geom::Point >()->x);
			HX_STACK_LINE(35)
			edge->y = (this->_points->__get(numberOfPoints).StaticCast< ::flash::geom::Point >()->y - this->_points->__get((int)0).StaticCast< ::flash::geom::Point >()->y);
			HX_STACK_LINE(35)
			store = edge->y;
			HX_STACK_LINE(35)
			edge->y = -(edge->x);
			HX_STACK_LINE(35)
			edge->x = store;
			HX_STACK_LINE(35)
			edge->normalize((int)1);
			HX_STACK_LINE(35)
			this->_axes->push(edge);
		}
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(35)
			int _g = this->_axes->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(35)
			while(((_g1 < _g))){
				HX_STACK_LINE(35)
				int ii = (_g1)++;		HX_STACK_VAR(ii,"ii");
				HX_STACK_LINE(35)
				{
					HX_STACK_LINE(35)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(35)
					int _g2 = this->_axes->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(35)
					while(((_g3 < _g2))){
						HX_STACK_LINE(35)
						int jj = (_g3)++;		HX_STACK_VAR(jj,"jj");
						HX_STACK_LINE(35)
						if (((bool((ii == jj)) || bool((::Math_obj::max(ii,jj) >= this->_axes->length))))){
							HX_STACK_LINE(35)
							continue;
						}
						HX_STACK_LINE(35)
						if (((bool((bool((this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->x == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->x)) && bool((this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->y == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->y)))) || bool((bool((-(this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->x) == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->x)) && bool((-(this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->y) == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->y))))))){
							HX_STACK_LINE(35)
							this->_axes->splice(jj,(int)1);
						}
					}
				}
			}
		}
		HX_STACK_LINE(35)
		this->update();
	}
}
;
	return null();
}

Polygon_obj::~Polygon_obj() { }

Dynamic Polygon_obj::__CreateEmpty() { return  new Polygon_obj; }
hx::ObjectPtr< Polygon_obj > Polygon_obj::__new(Array< ::Dynamic > points,::flash::geom::Point origin)
{  hx::ObjectPtr< Polygon_obj > result = new Polygon_obj();
	result->__construct(points,origin);
	return result;}

Dynamic Polygon_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Polygon_obj > result = new Polygon_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Polygon_obj::updateAxes( ){
{
		HX_STACK_FRAME("Polygon","updateAxes","Polygon.updateAxes","com/haxepunk/masks/Polygon.hx",457)
		HX_STACK_THIS(this)
		HX_STACK_LINE(458)
		{
			HX_STACK_LINE(458)
			this->_axes = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(458)
			Float store;		HX_STACK_VAR(store,"store");
			HX_STACK_LINE(458)
			int numberOfPoints = (this->_points->length - (int)1);		HX_STACK_VAR(numberOfPoints,"numberOfPoints");
			HX_STACK_LINE(458)
			{
				HX_STACK_LINE(458)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(458)
				while(((_g < numberOfPoints))){
					HX_STACK_LINE(458)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(458)
					::com::haxepunk::math::Vector edge = ::com::haxepunk::math::Vector_obj::__new(null(),null());		HX_STACK_VAR(edge,"edge");
					HX_STACK_LINE(458)
					edge->x = (this->_points->__get(i).StaticCast< ::flash::geom::Point >()->x - this->_points->__get((i + (int)1)).StaticCast< ::flash::geom::Point >()->x);
					HX_STACK_LINE(458)
					edge->y = (this->_points->__get(i).StaticCast< ::flash::geom::Point >()->y - this->_points->__get((i + (int)1)).StaticCast< ::flash::geom::Point >()->y);
					HX_STACK_LINE(458)
					store = edge->y;
					HX_STACK_LINE(458)
					edge->y = -(edge->x);
					HX_STACK_LINE(458)
					edge->x = store;
					HX_STACK_LINE(458)
					edge->normalize((int)1);
					HX_STACK_LINE(458)
					this->_axes->push(edge);
				}
			}
			HX_STACK_LINE(458)
			::com::haxepunk::math::Vector edge = ::com::haxepunk::math::Vector_obj::__new(null(),null());		HX_STACK_VAR(edge,"edge");
			HX_STACK_LINE(458)
			edge->x = (this->_points->__get(numberOfPoints).StaticCast< ::flash::geom::Point >()->x - this->_points->__get((int)0).StaticCast< ::flash::geom::Point >()->x);
			HX_STACK_LINE(458)
			edge->y = (this->_points->__get(numberOfPoints).StaticCast< ::flash::geom::Point >()->y - this->_points->__get((int)0).StaticCast< ::flash::geom::Point >()->y);
			HX_STACK_LINE(458)
			store = edge->y;
			HX_STACK_LINE(458)
			edge->y = -(edge->x);
			HX_STACK_LINE(458)
			edge->x = store;
			HX_STACK_LINE(458)
			edge->normalize((int)1);
			HX_STACK_LINE(458)
			this->_axes->push(edge);
		}
		HX_STACK_LINE(459)
		{
			HX_STACK_LINE(459)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(459)
			int _g = this->_axes->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(459)
			while(((_g1 < _g))){
				HX_STACK_LINE(459)
				int ii = (_g1)++;		HX_STACK_VAR(ii,"ii");
				HX_STACK_LINE(459)
				{
					HX_STACK_LINE(459)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(459)
					int _g2 = this->_axes->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(459)
					while(((_g3 < _g2))){
						HX_STACK_LINE(459)
						int jj = (_g3)++;		HX_STACK_VAR(jj,"jj");
						HX_STACK_LINE(459)
						if (((bool((ii == jj)) || bool((::Math_obj::max(ii,jj) >= this->_axes->length))))){
							HX_STACK_LINE(459)
							continue;
						}
						HX_STACK_LINE(459)
						if (((bool((bool((this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->x == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->x)) && bool((this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->y == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->y)))) || bool((bool((-(this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->x) == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->x)) && bool((-(this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->y) == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->y))))))){
							HX_STACK_LINE(459)
							this->_axes->splice(jj,(int)1);
						}
					}
				}
			}
		}
		HX_STACK_LINE(460)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,updateAxes,(void))

Void Polygon_obj::update( ){
{
		HX_STACK_FRAME("Polygon","update","Polygon.update","com/haxepunk/masks/Polygon.hx",433)
		HX_STACK_THIS(this)
		HX_STACK_LINE(434)
		this->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::firstProj);
		HX_STACK_LINE(435)
		this->_x = ::Math_obj::ceil(::com::haxepunk::masks::Polygon_obj::firstProj->min);
		HX_STACK_LINE(436)
		this->_width = ::Math_obj::ceil((::com::haxepunk::masks::Polygon_obj::firstProj->max - ::com::haxepunk::masks::Polygon_obj::firstProj->min));
		HX_STACK_LINE(437)
		this->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::secondProj);
		HX_STACK_LINE(438)
		this->_y = ::Math_obj::ceil(::com::haxepunk::masks::Polygon_obj::secondProj->min);
		HX_STACK_LINE(439)
		this->_height = ::Math_obj::ceil((::com::haxepunk::masks::Polygon_obj::secondProj->max - ::com::haxepunk::masks::Polygon_obj::secondProj->min));
		HX_STACK_LINE(441)
		if (((this->parent != null()))){
			HX_STACK_LINE(444)
			this->parent->width = this->_width;
			HX_STACK_LINE(445)
			this->parent->height = this->_height;
			HX_STACK_LINE(448)
			this->parent->originX = ::Std_obj::_int((Float((((this->_width - ::com::haxepunk::masks::Polygon_obj::firstProj->max) - ::com::haxepunk::masks::Polygon_obj::firstProj->min))) / Float((int)2)));
			HX_STACK_LINE(449)
			this->parent->originY = ::Std_obj::_int((Float((((this->_height - ::com::haxepunk::masks::Polygon_obj::secondProj->max) - ::com::haxepunk::masks::Polygon_obj::secondProj->min))) / Float((int)2)));
		}
		HX_STACK_LINE(453)
		if (((this->list != null()))){
			HX_STACK_LINE(453)
			this->list->update();
		}
	}
return null();
}


Array< ::Dynamic > Polygon_obj::set_points( Array< ::Dynamic > value){
	HX_STACK_FRAME("Polygon","set_points","Polygon.set_points","com/haxepunk/masks/Polygon.hx",423)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(424)
	if (((this->_points == value))){
		HX_STACK_LINE(424)
		return value;
	}
	HX_STACK_LINE(425)
	this->_points = value;
	HX_STACK_LINE(427)
	if (((bool((this->list != null())) || bool((this->parent != null()))))){
		HX_STACK_LINE(427)
		{
			HX_STACK_LINE(427)
			this->_axes = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(427)
			Float store;		HX_STACK_VAR(store,"store");
			HX_STACK_LINE(427)
			int numberOfPoints = (this->_points->length - (int)1);		HX_STACK_VAR(numberOfPoints,"numberOfPoints");
			HX_STACK_LINE(427)
			{
				HX_STACK_LINE(427)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(427)
				while(((_g < numberOfPoints))){
					HX_STACK_LINE(427)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(427)
					::com::haxepunk::math::Vector edge = ::com::haxepunk::math::Vector_obj::__new(null(),null());		HX_STACK_VAR(edge,"edge");
					HX_STACK_LINE(427)
					edge->x = (this->_points->__get(i).StaticCast< ::flash::geom::Point >()->x - this->_points->__get((i + (int)1)).StaticCast< ::flash::geom::Point >()->x);
					HX_STACK_LINE(427)
					edge->y = (this->_points->__get(i).StaticCast< ::flash::geom::Point >()->y - this->_points->__get((i + (int)1)).StaticCast< ::flash::geom::Point >()->y);
					HX_STACK_LINE(427)
					store = edge->y;
					HX_STACK_LINE(427)
					edge->y = -(edge->x);
					HX_STACK_LINE(427)
					edge->x = store;
					HX_STACK_LINE(427)
					edge->normalize((int)1);
					HX_STACK_LINE(427)
					this->_axes->push(edge);
				}
			}
			HX_STACK_LINE(427)
			::com::haxepunk::math::Vector edge = ::com::haxepunk::math::Vector_obj::__new(null(),null());		HX_STACK_VAR(edge,"edge");
			HX_STACK_LINE(427)
			edge->x = (this->_points->__get(numberOfPoints).StaticCast< ::flash::geom::Point >()->x - this->_points->__get((int)0).StaticCast< ::flash::geom::Point >()->x);
			HX_STACK_LINE(427)
			edge->y = (this->_points->__get(numberOfPoints).StaticCast< ::flash::geom::Point >()->y - this->_points->__get((int)0).StaticCast< ::flash::geom::Point >()->y);
			HX_STACK_LINE(427)
			store = edge->y;
			HX_STACK_LINE(427)
			edge->y = -(edge->x);
			HX_STACK_LINE(427)
			edge->x = store;
			HX_STACK_LINE(427)
			edge->normalize((int)1);
			HX_STACK_LINE(427)
			this->_axes->push(edge);
		}
		HX_STACK_LINE(427)
		{
			HX_STACK_LINE(427)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(427)
			int _g = this->_axes->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(427)
			while(((_g1 < _g))){
				HX_STACK_LINE(427)
				int ii = (_g1)++;		HX_STACK_VAR(ii,"ii");
				HX_STACK_LINE(427)
				{
					HX_STACK_LINE(427)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(427)
					int _g2 = this->_axes->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(427)
					while(((_g3 < _g2))){
						HX_STACK_LINE(427)
						int jj = (_g3)++;		HX_STACK_VAR(jj,"jj");
						HX_STACK_LINE(427)
						if (((bool((ii == jj)) || bool((::Math_obj::max(ii,jj) >= this->_axes->length))))){
							HX_STACK_LINE(427)
							continue;
						}
						HX_STACK_LINE(427)
						if (((bool((bool((this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->x == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->x)) && bool((this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->y == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->y)))) || bool((bool((-(this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->x) == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->x)) && bool((-(this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->y) == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->y))))))){
							HX_STACK_LINE(427)
							this->_axes->splice(jj,(int)1);
						}
					}
				}
			}
		}
		HX_STACK_LINE(427)
		this->update();
	}
	HX_STACK_LINE(428)
	return this->_points;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,set_points,return )

Array< ::Dynamic > Polygon_obj::get_points( ){
	HX_STACK_FRAME("Polygon","get_points","Polygon.get_points","com/haxepunk/masks/Polygon.hx",421)
	HX_STACK_THIS(this)
	HX_STACK_LINE(421)
	return this->_points;
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,get_points,return )

Float Polygon_obj::set_angle( Float value){
	HX_STACK_FRAME("Polygon","set_angle","Polygon.set_angle","com/haxepunk/masks/Polygon.hx",409)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(410)
	if (((value == this->_angle))){
		HX_STACK_LINE(410)
		return value;
	}
	HX_STACK_LINE(411)
	this->rotate((this->_angle - value));
	HX_STACK_LINE(412)
	if (((bool((this->list != null())) || bool((this->parent != null()))))){
		HX_STACK_LINE(412)
		this->update();
	}
	HX_STACK_LINE(413)
	return this->_angle = value;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,set_angle,return )

Float Polygon_obj::get_angle( ){
	HX_STACK_FRAME("Polygon","get_angle","Polygon.get_angle","com/haxepunk/masks/Polygon.hx",407)
	HX_STACK_THIS(this)
	HX_STACK_LINE(407)
	return this->_angle;
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,get_angle,return )

Void Polygon_obj::debugDraw( ::flash::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_FRAME("Polygon","debugDraw","Polygon.debugDraw","com/haxepunk/masks/Polygon.hx",389)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(scaleX,"scaleX")
		HX_STACK_ARG(scaleY,"scaleY")
		HX_STACK_LINE(389)
		if (((this->parent != null()))){
			HX_STACK_LINE(391)
			Float offsetX = (this->parent->x - ::com::haxepunk::HXP_obj::camera->x);		HX_STACK_VAR(offsetX,"offsetX");
			HX_STACK_LINE(392)
			Float offsetY = (this->parent->y - ::com::haxepunk::HXP_obj::camera->y);		HX_STACK_VAR(offsetY,"offsetY");
			HX_STACK_LINE(394)
			graphics->moveTo((((this->_points->__get((this->_points->length - (int)1)).StaticCast< ::flash::geom::Point >()->x + offsetX)) * scaleX),(((this->_points->__get((this->_points->length - (int)1)).StaticCast< ::flash::geom::Point >()->y + offsetY)) * scaleY));
			HX_STACK_LINE(395)
			{
				HX_STACK_LINE(395)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(395)
				int _g = this->_points->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(395)
				while(((_g1 < _g))){
					HX_STACK_LINE(395)
					int ii = (_g1)++;		HX_STACK_VAR(ii,"ii");
					HX_STACK_LINE(397)
					graphics->lineTo((((this->_points->__get(ii).StaticCast< ::flash::geom::Point >()->x + offsetX)) * scaleX),(((this->_points->__get(ii).StaticCast< ::flash::geom::Point >()->y + offsetY)) * scaleY));
				}
			}
		}
	}
return null();
}


Void Polygon_obj::rotate( Float angle){
{
		HX_STACK_FRAME("Polygon","rotate","Polygon.rotate","com/haxepunk/masks/Polygon.hx",361)
		HX_STACK_THIS(this)
		HX_STACK_ARG(angle,"angle")
		HX_STACK_LINE(362)
		hx::MultEq(angle,(Float(::Math_obj::PI) / Float((int)-180)));
		HX_STACK_LINE(364)
		{
			HX_STACK_LINE(364)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(364)
			Array< ::Dynamic > _g1 = this->_points;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(364)
			while(((_g < _g1->length))){
				HX_STACK_LINE(364)
				::flash::geom::Point p = _g1->__get(_g).StaticCast< ::flash::geom::Point >();		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(364)
				++(_g);
				HX_STACK_LINE(366)
				Float dx = (p->x - this->origin->x);		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(367)
				Float dy = (p->y - this->origin->y);		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(369)
				Float pointAngle = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(pointAngle,"pointAngle");
				HX_STACK_LINE(370)
				Float length = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(372)
				p->x = ((::Math_obj::cos((pointAngle + angle)) * length) + this->origin->x);
				HX_STACK_LINE(373)
				p->y = ((::Math_obj::sin((pointAngle + angle)) * length) + this->origin->y);
			}
		}
		HX_STACK_LINE(375)
		{
			HX_STACK_LINE(375)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(375)
			Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(375)
			while(((_g < _g1->length))){
				HX_STACK_LINE(375)
				::com::haxepunk::math::Vector ax = _g1->__get(_g).StaticCast< ::com::haxepunk::math::Vector >();		HX_STACK_VAR(ax,"ax");
				HX_STACK_LINE(375)
				++(_g);
				HX_STACK_LINE(378)
				Float axisAngle = ::Math_obj::atan2(ax->y,ax->x);		HX_STACK_VAR(axisAngle,"axisAngle");
				HX_STACK_LINE(380)
				ax->x = ::Math_obj::cos((axisAngle + angle));
				HX_STACK_LINE(381)
				ax->y = ::Math_obj::sin((axisAngle + angle));
			}
		}
		HX_STACK_LINE(383)
		hx::AddEq(this->_angle,angle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,rotate,(void))

Void Polygon_obj::project( ::com::haxepunk::math::Vector axis,::com::haxepunk::math::Projection projection){
{
		HX_STACK_FRAME("Polygon","project","Polygon.project","com/haxepunk/masks/Polygon.hx",339)
		HX_STACK_THIS(this)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(projection,"projection")
		HX_STACK_LINE(340)
		Float min;		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(340)
		{
			HX_STACK_LINE(340)
			::flash::geom::Point p = this->_points->__get((int)0).StaticCast< ::flash::geom::Point >();		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(340)
			min = ((axis->x * p->x) + (axis->y * p->y));
		}
		HX_STACK_LINE(341)
		Float max = min;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(343)
		{
			HX_STACK_LINE(343)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(343)
			int _g = this->_points->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(343)
			while(((_g1 < _g))){
				HX_STACK_LINE(343)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(345)
				Float cur;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(345)
				{
					HX_STACK_LINE(345)
					::flash::geom::Point p = this->_points->__get(i).StaticCast< ::flash::geom::Point >();		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(345)
					cur = ((axis->x * p->x) + (axis->y * p->y));
				}
				HX_STACK_LINE(347)
				if (((cur < min))){
					HX_STACK_LINE(349)
					min = cur;
				}
				else{
					HX_STACK_LINE(351)
					if (((cur > max))){
						HX_STACK_LINE(353)
						max = cur;
					}
				}
			}
		}
		HX_STACK_LINE(356)
		projection->min = min;
		HX_STACK_LINE(357)
		projection->max = max;
	}
return null();
}


bool Polygon_obj::collidePolygon( ::com::haxepunk::masks::Polygon other){
	HX_STACK_FRAME("Polygon","collidePolygon","Polygon.collidePolygon","com/haxepunk/masks/Polygon.hx",300)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(301)
	Float offsetX = (this->parent->x - other->parent->x);		HX_STACK_VAR(offsetX,"offsetX");
	HX_STACK_LINE(302)
	Float offsetY = (this->parent->y - other->parent->y);		HX_STACK_VAR(offsetY,"offsetY");
	HX_STACK_LINE(304)
	{
		HX_STACK_LINE(304)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(304)
		Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(304)
		while(((_g < _g1->length))){
			HX_STACK_LINE(304)
			::com::haxepunk::math::Vector a = _g1->__get(_g).StaticCast< ::com::haxepunk::math::Vector >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(304)
			++(_g);
			HX_STACK_LINE(306)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(307)
			other->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(310)
			Float offset = ((offsetX * a->x) + (offsetY * a->y));		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(311)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
			HX_STACK_LINE(312)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/masks/Polygon.hx",314)
					{
						HX_STACK_LINE(314)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(314)
						::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
						HX_STACK_LINE(314)
						return (bool((_this->min > other1->max)) || bool((_this->max < other1->min)));
					}
					return null();
				}
			};
			HX_STACK_LINE(314)
			if ((_Function_3_1::Block())){
				HX_STACK_LINE(316)
				return false;
			}
		}
	}
	HX_STACK_LINE(320)
	{
		HX_STACK_LINE(320)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(320)
		Array< ::Dynamic > _g1 = other->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(320)
		while(((_g < _g1->length))){
			HX_STACK_LINE(320)
			::com::haxepunk::math::Vector a = _g1->__get(_g).StaticCast< ::com::haxepunk::math::Vector >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(320)
			++(_g);
			HX_STACK_LINE(322)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(323)
			other->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(326)
			Float offset = ((offsetX * a->x) + (offsetY * a->y));		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(327)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
			HX_STACK_LINE(328)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/masks/Polygon.hx",330)
					{
						HX_STACK_LINE(330)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(330)
						::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
						HX_STACK_LINE(330)
						return (bool((_this->min > other1->max)) || bool((_this->max < other1->min)));
					}
					return null();
				}
			};
			HX_STACK_LINE(330)
			if ((_Function_3_1::Block())){
				HX_STACK_LINE(332)
				return false;
			}
		}
	}
	HX_STACK_LINE(335)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,collidePolygon,return )

bool Polygon_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_FRAME("Polygon","collideMask","Polygon.collideMask","com/haxepunk/masks/Polygon.hx",255)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(256)
	Float offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(257)
	Float offsetX = (this->parent->x - other->parent->x);		HX_STACK_VAR(offsetX,"offsetX");
	HX_STACK_LINE(258)
	Float offsetY = (this->parent->y - other->parent->y);		HX_STACK_VAR(offsetY,"offsetY");
	HX_STACK_LINE(260)
	this->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(261)
	other->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(263)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offsetX);
	HX_STACK_LINE(264)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offsetY);
	struct _Function_1_1{
		inline static bool Block( ){
			HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/masks/Polygon.hx",266)
			{
				HX_STACK_LINE(266)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(266)
				::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
				HX_STACK_LINE(266)
				return (bool((_this->min > other1->max)) || bool((_this->max < other1->min)));
			}
			return null();
		}
	};
	HX_STACK_LINE(266)
	if ((_Function_1_1::Block())){
		HX_STACK_LINE(268)
		return false;
	}
	HX_STACK_LINE(271)
	this->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(272)
	other->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(274)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offsetX);
	HX_STACK_LINE(275)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offsetX);
	struct _Function_1_2{
		inline static bool Block( ){
			HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/masks/Polygon.hx",277)
			{
				HX_STACK_LINE(277)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(277)
				::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
				HX_STACK_LINE(277)
				return (bool((_this->min > other1->max)) || bool((_this->max < other1->min)));
			}
			return null();
		}
	};
	HX_STACK_LINE(277)
	if ((_Function_1_2::Block())){
		HX_STACK_LINE(279)
		return false;
	}
	HX_STACK_LINE(282)
	{
		HX_STACK_LINE(282)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(282)
		Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(282)
		while(((_g < _g1->length))){
			HX_STACK_LINE(282)
			::com::haxepunk::math::Vector a = _g1->__get(_g).StaticCast< ::com::haxepunk::math::Vector >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(282)
			++(_g);
			HX_STACK_LINE(284)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(285)
			other->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(287)
			Float offset1 = ((offsetX * a->x) + (offsetY * a->y));		HX_STACK_VAR(offset1,"offset1");
			HX_STACK_LINE(288)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset1);
			HX_STACK_LINE(289)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset1);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/masks/Polygon.hx",291)
					{
						HX_STACK_LINE(291)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(291)
						::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
						HX_STACK_LINE(291)
						return (bool((_this->min > other1->max)) || bool((_this->max < other1->min)));
					}
					return null();
				}
			};
			HX_STACK_LINE(291)
			if ((_Function_3_1::Block())){
				HX_STACK_LINE(293)
				return false;
			}
		}
	}
	HX_STACK_LINE(296)
	return true;
}


bool Polygon_obj::collideHitbox( ::com::haxepunk::masks::Hitbox hitbox){
	HX_STACK_FRAME("Polygon","collideHitbox","Polygon.collideHitbox","com/haxepunk/masks/Polygon.hx",210)
	HX_STACK_THIS(this)
	HX_STACK_ARG(hitbox,"hitbox")
	HX_STACK_LINE(211)
	Float offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(212)
	Float offsetX = (this->parent->x - hitbox->parent->x);		HX_STACK_VAR(offsetX,"offsetX");
	HX_STACK_LINE(213)
	Float offsetY = (this->parent->y - hitbox->parent->y);		HX_STACK_VAR(offsetY,"offsetY");
	HX_STACK_LINE(215)
	this->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(216)
	hitbox->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(218)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offsetY);
	HX_STACK_LINE(219)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offsetY);
	struct _Function_1_1{
		inline static bool Block( ){
			HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/masks/Polygon.hx",221)
			{
				HX_STACK_LINE(221)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(221)
				::com::haxepunk::math::Projection other = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(221)
				return (bool((_this->min > other->max)) || bool((_this->max < other->min)));
			}
			return null();
		}
	};
	HX_STACK_LINE(221)
	if ((_Function_1_1::Block())){
		HX_STACK_LINE(223)
		return false;
	}
	HX_STACK_LINE(226)
	this->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(227)
	hitbox->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(229)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offsetX);
	HX_STACK_LINE(230)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offsetX);
	struct _Function_1_2{
		inline static bool Block( ){
			HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/masks/Polygon.hx",232)
			{
				HX_STACK_LINE(232)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(232)
				::com::haxepunk::math::Projection other = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(232)
				return (bool((_this->min > other->max)) || bool((_this->max < other->min)));
			}
			return null();
		}
	};
	HX_STACK_LINE(232)
	if ((_Function_1_2::Block())){
		HX_STACK_LINE(234)
		return false;
	}
	HX_STACK_LINE(237)
	{
		HX_STACK_LINE(237)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(237)
		Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(237)
		while(((_g < _g1->length))){
			HX_STACK_LINE(237)
			::com::haxepunk::math::Vector a = _g1->__get(_g).StaticCast< ::com::haxepunk::math::Vector >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(237)
			++(_g);
			HX_STACK_LINE(239)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(240)
			hitbox->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(242)
			offset = ((offsetX * a->x) + (offsetY * a->y));
			HX_STACK_LINE(243)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
			HX_STACK_LINE(244)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/masks/Polygon.hx",246)
					{
						HX_STACK_LINE(246)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(246)
						::com::haxepunk::math::Projection other = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(246)
						return (bool((_this->min > other->max)) || bool((_this->max < other->min)));
					}
					return null();
				}
			};
			HX_STACK_LINE(246)
			if ((_Function_3_1::Block())){
				HX_STACK_LINE(248)
				return false;
			}
		}
	}
	HX_STACK_LINE(251)
	return true;
}


bool Polygon_obj::collideCircle( ::com::haxepunk::masks::Circle circle){
	HX_STACK_FRAME("Polygon","collideCircle","Polygon.collideCircle","com/haxepunk/masks/Polygon.hx",151)
	HX_STACK_THIS(this)
	HX_STACK_ARG(circle,"circle")
	HX_STACK_LINE(152)
	Float offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(155)
	Float distanceSquared = ((int)179 * ::Math_obj::pow((int)10,(int)306));		HX_STACK_VAR(distanceSquared,"distanceSquared");
	HX_STACK_LINE(156)
	::flash::geom::Point closestPoint = null();		HX_STACK_VAR(closestPoint,"closestPoint");
	HX_STACK_LINE(157)
	{
		HX_STACK_LINE(157)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(157)
		Array< ::Dynamic > _g1 = this->_points;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(157)
		while(((_g < _g1->length))){
			HX_STACK_LINE(157)
			::flash::geom::Point p = _g1->__get(_g).StaticCast< ::flash::geom::Point >();		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(157)
			++(_g);
			HX_STACK_LINE(159)
			Float dx = (((this->parent->x + p->x) - circle->parent->x) - circle->_radius);		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(160)
			Float dy = (((this->parent->y + p->y) - circle->parent->y) - circle->_radius);		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(161)
			Float tempDistance = ((dx * dx) + (dy * dy));		HX_STACK_VAR(tempDistance,"tempDistance");
			HX_STACK_LINE(163)
			if (((tempDistance < distanceSquared))){
				HX_STACK_LINE(165)
				distanceSquared = tempDistance;
				HX_STACK_LINE(166)
				closestPoint = p;
			}
		}
	}
	HX_STACK_LINE(170)
	Float offsetX = ((this->parent->x - circle->parent->x) - circle->_radius);		HX_STACK_VAR(offsetX,"offsetX");
	HX_STACK_LINE(171)
	Float offsetY = ((this->parent->y - circle->parent->y) - circle->_radius);		HX_STACK_VAR(offsetY,"offsetY");
	HX_STACK_LINE(175)
	::com::haxepunk::masks::Polygon_obj::_axis->x = ((circle->parent->y - this->parent->y) + closestPoint->y);
	HX_STACK_LINE(176)
	::com::haxepunk::masks::Polygon_obj::_axis->y = ((this->parent->x + closestPoint->x) - circle->parent->x);
	HX_STACK_LINE(177)
	::com::haxepunk::masks::Polygon_obj::_axis->normalize((int)1);
	HX_STACK_LINE(179)
	this->project(::com::haxepunk::masks::Polygon_obj::_axis,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(180)
	circle->project(::com::haxepunk::masks::Polygon_obj::_axis,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(182)
	offset = ((offsetX * ::com::haxepunk::masks::Polygon_obj::_axis->x) + (offsetY * ::com::haxepunk::masks::Polygon_obj::_axis->y));
	HX_STACK_LINE(183)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
	HX_STACK_LINE(184)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
	struct _Function_1_1{
		inline static bool Block( ){
			HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/masks/Polygon.hx",186)
			{
				HX_STACK_LINE(186)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(186)
				::com::haxepunk::math::Projection other = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(186)
				return (bool((_this->min > other->max)) || bool((_this->max < other->min)));
			}
			return null();
		}
	};
	HX_STACK_LINE(186)
	if ((_Function_1_1::Block())){
		HX_STACK_LINE(188)
		return false;
	}
	HX_STACK_LINE(191)
	{
		HX_STACK_LINE(191)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(191)
		Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(191)
		while(((_g < _g1->length))){
			HX_STACK_LINE(191)
			::com::haxepunk::math::Vector a = _g1->__get(_g).StaticCast< ::com::haxepunk::math::Vector >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(191)
			++(_g);
			HX_STACK_LINE(193)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(194)
			circle->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(196)
			offset = ((offsetX * a->x) + (offsetY * a->y));
			HX_STACK_LINE(197)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
			HX_STACK_LINE(198)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/masks/Polygon.hx",200)
					{
						HX_STACK_LINE(200)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(200)
						::com::haxepunk::math::Projection other = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(200)
						return (bool((_this->min > other->max)) || bool((_this->max < other->min)));
					}
					return null();
				}
			};
			HX_STACK_LINE(200)
			if ((_Function_3_1::Block())){
				HX_STACK_LINE(202)
				return false;
			}
		}
	}
	HX_STACK_LINE(206)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,collideCircle,return )

bool Polygon_obj::collideGrid( ::com::haxepunk::masks::Grid grid){
	HX_STACK_FRAME("Polygon","collideGrid","Polygon.collideGrid","com/haxepunk/masks/Polygon.hx",95)
	HX_STACK_THIS(this)
	HX_STACK_ARG(grid,"grid")
	HX_STACK_LINE(96)
	{
		HX_STACK_LINE(96)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(96)
		int _g = (this->_points->length - (int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(96)
		while(((_g1 < _g))){
			HX_STACK_LINE(96)
			int ii = (_g1)++;		HX_STACK_VAR(ii,"ii");
			HX_STACK_LINE(98)
			Float p1X = (Float(((this->parent->x + this->_points->__get(ii).StaticCast< ::flash::geom::Point >()->x))) / Float(::Std_obj::_int(grid->_tile->width)));		HX_STACK_VAR(p1X,"p1X");
			HX_STACK_LINE(99)
			Float p1Y = (Float(((this->parent->y + this->_points->__get(ii).StaticCast< ::flash::geom::Point >()->y))) / Float(::Std_obj::_int(grid->_tile->height)));		HX_STACK_VAR(p1Y,"p1Y");
			HX_STACK_LINE(100)
			Float p2X = (Float(((this->parent->x + this->_points->__get((ii + (int)1)).StaticCast< ::flash::geom::Point >()->x))) / Float(::Std_obj::_int(grid->_tile->width)));		HX_STACK_VAR(p2X,"p2X");
			HX_STACK_LINE(101)
			Float p2Y = (Float(((this->parent->y + this->_points->__get((ii + (int)1)).StaticCast< ::flash::geom::Point >()->y))) / Float(::Std_obj::_int(grid->_tile->height)));		HX_STACK_VAR(p2Y,"p2Y");
			HX_STACK_LINE(103)
			Float k = (Float(((p2Y - p1Y))) / Float(((p2X - p1X))));		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(104)
			Float m = (p1Y - (k * p1X));		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(106)
			Float min;		HX_STACK_VAR(min,"min");
			HX_STACK_LINE(107)
			Float max;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(109)
			if (((p2X > p1X))){
				HX_STACK_LINE(109)
				min = p1X;
				HX_STACK_LINE(109)
				max = p2X;
			}
			else{
				HX_STACK_LINE(110)
				max = p1X;
				HX_STACK_LINE(110)
				min = p2X;
			}
			HX_STACK_LINE(112)
			Float x = min;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(113)
			while(((x < max))){
				HX_STACK_LINE(115)
				int y = ::Std_obj::_int(((k * x) + m));		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(116)
				if ((grid->getTile(::Std_obj::_int(x),y))){
					HX_STACK_LINE(117)
					return true;
				}
				HX_STACK_LINE(119)
				(x)++;
			}
		}
	}
	HX_STACK_LINE(123)
	Float p1X = (Float(((this->parent->x + this->_points->__get((this->_points->length - (int)1)).StaticCast< ::flash::geom::Point >()->x))) / Float(::Std_obj::_int(grid->_tile->width)));		HX_STACK_VAR(p1X,"p1X");
	HX_STACK_LINE(124)
	Float p1Y = (Float(((this->parent->y + this->_points->__get((this->_points->length - (int)1)).StaticCast< ::flash::geom::Point >()->y))) / Float(::Std_obj::_int(grid->_tile->height)));		HX_STACK_VAR(p1Y,"p1Y");
	HX_STACK_LINE(125)
	Float p2X = (Float(((this->parent->x + this->_points->__get((int)0).StaticCast< ::flash::geom::Point >()->x))) / Float(::Std_obj::_int(grid->_tile->width)));		HX_STACK_VAR(p2X,"p2X");
	HX_STACK_LINE(126)
	Float p2Y = (Float(((this->parent->y + this->_points->__get((int)0).StaticCast< ::flash::geom::Point >()->y))) / Float(::Std_obj::_int(grid->_tile->height)));		HX_STACK_VAR(p2Y,"p2Y");
	HX_STACK_LINE(128)
	Float k = (Float(((p2Y - p1Y))) / Float(((p2X - p1X))));		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(129)
	Float m = (p1Y - (k * p1X));		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(131)
	Float min;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(132)
	Float max;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(134)
	if (((p2X > p1X))){
		HX_STACK_LINE(134)
		min = p1X;
		HX_STACK_LINE(134)
		max = p2X;
	}
	else{
		HX_STACK_LINE(135)
		max = p1X;
		HX_STACK_LINE(135)
		min = p2X;
	}
	HX_STACK_LINE(137)
	Float x = min;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(138)
	while(((x < max))){
		HX_STACK_LINE(140)
		int y = ::Std_obj::_int(((k * x) + m));		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(141)
		if ((grid->getTile(::Std_obj::_int(x),y))){
			HX_STACK_LINE(142)
			return true;
		}
		HX_STACK_LINE(144)
		(x)++;
	}
	HX_STACK_LINE(147)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,collideGrid,return )

Void Polygon_obj::removeDuplicateAxes( ){
{
		HX_STACK_FRAME("Polygon","removeDuplicateAxes","Polygon.removeDuplicateAxes","com/haxepunk/masks/Polygon.hx",71)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(71)
		int _g = this->_axes->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(71)
		while(((_g1 < _g))){
			HX_STACK_LINE(71)
			int ii = (_g1)++;		HX_STACK_VAR(ii,"ii");
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(73)
				int _g2 = this->_axes->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(73)
				while(((_g3 < _g2))){
					HX_STACK_LINE(73)
					int jj = (_g3)++;		HX_STACK_VAR(jj,"jj");
					HX_STACK_LINE(75)
					if (((bool((ii == jj)) || bool((::Math_obj::max(ii,jj) >= this->_axes->length))))){
						HX_STACK_LINE(75)
						continue;
					}
					HX_STACK_LINE(79)
					if (((bool((bool((this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->x == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->x)) && bool((this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->y == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->y)))) || bool((bool((-(this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->x) == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->x)) && bool((-(this->_axes->__get(ii).StaticCast< ::com::haxepunk::math::Vector >()->y) == this->_axes->__get(jj).StaticCast< ::com::haxepunk::math::Vector >()->y))))))){
						HX_STACK_LINE(82)
						this->_axes->splice(jj,(int)1);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,removeDuplicateAxes,(void))

Void Polygon_obj::generateAxes( ){
{
		HX_STACK_FRAME("Polygon","generateAxes","Polygon.generateAxes","com/haxepunk/masks/Polygon.hx",39)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		this->_axes = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(41)
		Float store;		HX_STACK_VAR(store,"store");
		HX_STACK_LINE(42)
		int numberOfPoints = (this->_points->length - (int)1);		HX_STACK_VAR(numberOfPoints,"numberOfPoints");
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(43)
			while(((_g < numberOfPoints))){
				HX_STACK_LINE(43)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(45)
				::com::haxepunk::math::Vector edge = ::com::haxepunk::math::Vector_obj::__new(null(),null());		HX_STACK_VAR(edge,"edge");
				HX_STACK_LINE(46)
				edge->x = (this->_points->__get(i).StaticCast< ::flash::geom::Point >()->x - this->_points->__get((i + (int)1)).StaticCast< ::flash::geom::Point >()->x);
				HX_STACK_LINE(47)
				edge->y = (this->_points->__get(i).StaticCast< ::flash::geom::Point >()->y - this->_points->__get((i + (int)1)).StaticCast< ::flash::geom::Point >()->y);
				HX_STACK_LINE(50)
				store = edge->y;
				HX_STACK_LINE(51)
				edge->y = -(edge->x);
				HX_STACK_LINE(52)
				edge->x = store;
				HX_STACK_LINE(53)
				edge->normalize((int)1);
				HX_STACK_LINE(55)
				this->_axes->push(edge);
			}
		}
		HX_STACK_LINE(57)
		::com::haxepunk::math::Vector edge = ::com::haxepunk::math::Vector_obj::__new(null(),null());		HX_STACK_VAR(edge,"edge");
		HX_STACK_LINE(59)
		edge->x = (this->_points->__get(numberOfPoints).StaticCast< ::flash::geom::Point >()->x - this->_points->__get((int)0).StaticCast< ::flash::geom::Point >()->x);
		HX_STACK_LINE(60)
		edge->y = (this->_points->__get(numberOfPoints).StaticCast< ::flash::geom::Point >()->y - this->_points->__get((int)0).StaticCast< ::flash::geom::Point >()->y);
		HX_STACK_LINE(61)
		store = edge->y;
		HX_STACK_LINE(62)
		edge->y = -(edge->x);
		HX_STACK_LINE(63)
		edge->x = store;
		HX_STACK_LINE(64)
		edge->normalize((int)1);
		HX_STACK_LINE(66)
		this->_axes->push(edge);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,generateAxes,(void))

::com::haxepunk::masks::Polygon Polygon_obj::createPolygon( hx::Null< int >  __o_sides,hx::Null< Float >  __o_radius,hx::Null< Float >  __o_angle){
int sides = __o_sides.Default(3);
Float radius = __o_radius.Default(100);
Float angle = __o_angle.Default(0);
	HX_STACK_FRAME("Polygon","createPolygon","Polygon.createPolygon","com/haxepunk/masks/Polygon.hx",471)
	HX_STACK_ARG(sides,"sides")
	HX_STACK_ARG(radius,"radius")
	HX_STACK_ARG(angle,"angle")
{
		HX_STACK_LINE(472)
		if (((sides < (int)3))){
			HX_STACK_LINE(472)
			HX_STACK_DO_THROW(HX_CSTRING("The polygon needs at least 3 sides"));
		}
		HX_STACK_LINE(475)
		Float rotationAngle = (Float((::Math_obj::PI * (int)2)) / Float(sides));		HX_STACK_VAR(rotationAngle,"rotationAngle");
		HX_STACK_LINE(478)
		Array< ::Dynamic > points = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(480)
		{
			HX_STACK_LINE(480)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(480)
			while(((_g < sides))){
				HX_STACK_LINE(480)
				int ii = (_g)++;		HX_STACK_VAR(ii,"ii");
				HX_STACK_LINE(482)
				Float tempAngle = (ii * rotationAngle);		HX_STACK_VAR(tempAngle,"tempAngle");
				HX_STACK_LINE(483)
				::flash::geom::Point p = ::flash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(484)
				p->x = (::Math_obj::cos(tempAngle) * radius);
				HX_STACK_LINE(485)
				p->y = (::Math_obj::sin(tempAngle) * radius);
				HX_STACK_LINE(486)
				points->push(p);
			}
		}
		HX_STACK_LINE(489)
		::com::haxepunk::masks::Polygon poly = ::com::haxepunk::masks::Polygon_obj::__new(points,null());		HX_STACK_VAR(poly,"poly");
		HX_STACK_LINE(490)
		poly->set_angle(angle);
		HX_STACK_LINE(491)
		return poly;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polygon_obj,createPolygon,return )

::com::haxepunk::masks::Polygon Polygon_obj::createFromArray( Array< Float > points){
	HX_STACK_FRAME("Polygon","createFromArray","Polygon.createFromArray","com/haxepunk/masks/Polygon.hx",499)
	HX_STACK_ARG(points,"points")
	HX_STACK_LINE(500)
	Array< ::Dynamic > p = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(502)
	int ii = (int)0;		HX_STACK_VAR(ii,"ii");
	HX_STACK_LINE(503)
	while(((ii < points->length))){
		HX_STACK_LINE(505)
		p->push(::flash::geom::Point_obj::__new(points->__get((ii)++),points->__get((ii)++)));
	}
	HX_STACK_LINE(507)
	return ::com::haxepunk::masks::Polygon_obj::__new(p,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,createFromArray,return )

::com::haxepunk::math::Vector Polygon_obj::_axis;

::com::haxepunk::math::Projection Polygon_obj::firstProj;

::com::haxepunk::math::Projection Polygon_obj::secondProj;

::com::haxepunk::math::Vector Polygon_obj::vertical;

::com::haxepunk::math::Vector Polygon_obj::horizontal;


Polygon_obj::Polygon_obj()
{
}

void Polygon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Polygon);
	HX_MARK_MEMBER_NAME(_axes,"_axes");
	HX_MARK_MEMBER_NAME(_points,"_points");
	HX_MARK_MEMBER_NAME(_angle,"_angle");
	HX_MARK_MEMBER_NAME(origin,"origin");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Polygon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_axes,"_axes");
	HX_VISIT_MEMBER_NAME(_points,"_points");
	HX_VISIT_MEMBER_NAME(_angle,"_angle");
	HX_VISIT_MEMBER_NAME(origin,"origin");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Polygon_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_axis") ) { return _axis; }
		if (HX_FIELD_EQ(inName,"_axes") ) { return _axes; }
		if (HX_FIELD_EQ(inName,"angle") ) { return get_angle(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_angle") ) { return _angle; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"points") ) { return get_points(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"origin") ) { return origin; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_points") ) { return _points; }
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertical") ) { return vertical; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"firstProj") ) { return firstProj; }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_angle") ) { return get_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"secondProj") ) { return secondProj; }
		if (HX_FIELD_EQ(inName,"horizontal") ) { return horizontal; }
		if (HX_FIELD_EQ(inName,"updateAxes") ) { return updateAxes_dyn(); }
		if (HX_FIELD_EQ(inName,"set_points") ) { return set_points_dyn(); }
		if (HX_FIELD_EQ(inName,"get_points") ) { return get_points_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		if (HX_FIELD_EQ(inName,"collideGrid") ) { return collideGrid_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"generateAxes") ) { return generateAxes_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createPolygon") ) { return createPolygon_dyn(); }
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"collideCircle") ) { return collideCircle_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collidePolygon") ) { return collidePolygon_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createFromArray") ) { return createFromArray_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeDuplicateAxes") ) { return removeDuplicateAxes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Polygon_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_axis") ) { _axis=inValue.Cast< ::com::haxepunk::math::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_axes") ) { _axes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { return set_angle(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_angle") ) { _angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"points") ) { return set_points(inValue); }
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_points") ) { _points=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertical") ) { vertical=inValue.Cast< ::com::haxepunk::math::Vector >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"firstProj") ) { firstProj=inValue.Cast< ::com::haxepunk::math::Projection >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"secondProj") ) { secondProj=inValue.Cast< ::com::haxepunk::math::Projection >(); return inValue; }
		if (HX_FIELD_EQ(inName,"horizontal") ) { horizontal=inValue.Cast< ::com::haxepunk::math::Vector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Polygon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_axes"));
	outFields->push(HX_CSTRING("_points"));
	outFields->push(HX_CSTRING("_angle"));
	outFields->push(HX_CSTRING("points"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("origin"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("createPolygon"),
	HX_CSTRING("createFromArray"),
	HX_CSTRING("_axis"),
	HX_CSTRING("firstProj"),
	HX_CSTRING("secondProj"),
	HX_CSTRING("vertical"),
	HX_CSTRING("horizontal"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_axes"),
	HX_CSTRING("_points"),
	HX_CSTRING("_angle"),
	HX_CSTRING("updateAxes"),
	HX_CSTRING("update"),
	HX_CSTRING("set_points"),
	HX_CSTRING("get_points"),
	HX_CSTRING("set_angle"),
	HX_CSTRING("get_angle"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("rotate"),
	HX_CSTRING("project"),
	HX_CSTRING("collidePolygon"),
	HX_CSTRING("collideMask"),
	HX_CSTRING("collideHitbox"),
	HX_CSTRING("collideCircle"),
	HX_CSTRING("collideGrid"),
	HX_CSTRING("removeDuplicateAxes"),
	HX_CSTRING("generateAxes"),
	HX_CSTRING("origin"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Polygon_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Polygon_obj::_axis,"_axis");
	HX_MARK_MEMBER_NAME(Polygon_obj::firstProj,"firstProj");
	HX_MARK_MEMBER_NAME(Polygon_obj::secondProj,"secondProj");
	HX_MARK_MEMBER_NAME(Polygon_obj::vertical,"vertical");
	HX_MARK_MEMBER_NAME(Polygon_obj::horizontal,"horizontal");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Polygon_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Polygon_obj::_axis,"_axis");
	HX_VISIT_MEMBER_NAME(Polygon_obj::firstProj,"firstProj");
	HX_VISIT_MEMBER_NAME(Polygon_obj::secondProj,"secondProj");
	HX_VISIT_MEMBER_NAME(Polygon_obj::vertical,"vertical");
	HX_VISIT_MEMBER_NAME(Polygon_obj::horizontal,"horizontal");
};

#endif

Class Polygon_obj::__mClass;

void Polygon_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.masks.Polygon"), hx::TCanCast< Polygon_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void Polygon_obj::__boot()
{
	_axis= ::com::haxepunk::math::Vector_obj::__new(null(),null());
	firstProj= ::com::haxepunk::math::Projection_obj::__new();
	secondProj= ::com::haxepunk::math::Projection_obj::__new();
	vertical= ::com::haxepunk::math::Vector_obj::__new((int)0,(int)1);
	horizontal= ::com::haxepunk::math::Vector_obj::__new((int)1,(int)0);
}

} // end namespace com
} // end namespace haxepunk
} // end namespace masks
