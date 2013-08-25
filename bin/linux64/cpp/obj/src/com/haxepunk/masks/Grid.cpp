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
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Grid
#include <com/haxepunk/masks/Grid.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Pixelmask
#include <com/haxepunk/masks/Pixelmask.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace com{
namespace haxepunk{
namespace masks{

Void Grid_obj::__construct(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{
HX_STACK_FRAME("Grid","new","Grid.new","com/haxepunk/masks/Grid.hx",33)

HX_STACK_ARG(width,"width")

HX_STACK_ARG(height,"height")

HX_STACK_ARG(tileWidth,"tileWidth")

HX_STACK_ARG(tileHeight,"tileHeight")

HX_STACK_ARG(__o_x,"x")

HX_STACK_ARG(__o_y,"y")
int x = __o_x.Default(0);
int y = __o_y.Default(0);
{
	HX_STACK_LINE(34)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(37)
	if (((bool((bool((bool((width == (int)0)) || bool((height == (int)0)))) || bool((tileWidth == (int)0)))) || bool((tileHeight == (int)0))))){
		HX_STACK_LINE(39)
		HX_STACK_DO_THROW(HX_CSTRING("Illegal Grid, sizes cannot be 0."));
	}
	HX_STACK_LINE(42)
	this->_rect = ::com::haxepunk::HXP_obj::rect;
	HX_STACK_LINE(43)
	this->_point = ::com::haxepunk::HXP_obj::point;
	HX_STACK_LINE(44)
	this->_point2 = ::com::haxepunk::HXP_obj::point2;
	HX_STACK_LINE(47)
	this->columns = ::Std_obj::_int((Float(width) / Float(tileWidth)));
	HX_STACK_LINE(48)
	this->rows = ::Std_obj::_int((Float(height) / Float(tileHeight)));
	HX_STACK_LINE(50)
	this->_tile = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,tileWidth,tileHeight);
	HX_STACK_LINE(51)
	this->_x = x;
	HX_STACK_LINE(52)
	this->_y = y;
	HX_STACK_LINE(53)
	this->_width = width;
	HX_STACK_LINE(54)
	this->_height = height;
	HX_STACK_LINE(55)
	this->usePositions = false;
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::Mask >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(58)
		this->_check->set(key,this->collideMask_dyn());
	}
	HX_STACK_LINE(59)
	{
		HX_STACK_LINE(59)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Hitbox >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(59)
		this->_check->set(key,this->collideHitbox_dyn());
	}
	HX_STACK_LINE(60)
	{
		HX_STACK_LINE(60)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Pixelmask >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(60)
		this->_check->set(key,this->collidePixelmask_dyn());
	}
	HX_STACK_LINE(62)
	this->data = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(63)
		int _g = this->rows;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(63)
		while(((_g1 < _g))){
			HX_STACK_LINE(63)
			int x1 = (_g1)++;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(65)
			this->data->push(Array_obj< bool >::__new());
		}
	}
}
;
	return null();
}

Grid_obj::~Grid_obj() { }

Dynamic Grid_obj::__CreateEmpty() { return  new Grid_obj; }
hx::ObjectPtr< Grid_obj > Grid_obj::__new(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{  hx::ObjectPtr< Grid_obj > result = new Grid_obj();
	result->__construct(width,height,tileWidth,tileHeight,__o_x,__o_y);
	return result;}

Dynamic Grid_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Grid_obj > result = new Grid_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void Grid_obj::squareProjection( ::flash::geom::Point axis,::flash::geom::Point point){
{
		HX_STACK_FRAME("Grid","squareProjection","Grid.squareProjection","com/haxepunk/masks/Grid.hx",400)
		HX_STACK_THIS(this)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(point,"point")
		HX_STACK_LINE(400)
		if (((axis->x < axis->y))){
			HX_STACK_LINE(402)
			point->x = axis->x;
			HX_STACK_LINE(403)
			point->y = axis->y;
		}
		else{
			HX_STACK_LINE(407)
			point->y = axis->x;
			HX_STACK_LINE(408)
			point->x = axis->y;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,squareProjection,(void))

Void Grid_obj::debugDraw( ::flash::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_FRAME("Grid","debugDraw","Grid.debugDraw","com/haxepunk/masks/Grid.hx",359)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(scaleX,"scaleX")
		HX_STACK_ARG(scaleY,"scaleY")
		HX_STACK_LINE(360)
		::com::haxepunk::HXP_obj::point->x = ((((this->_x + this->parent->x) - ::com::haxepunk::HXP_obj::camera->x)) * ::com::haxepunk::HXP_obj::screen->fullScaleX);
		HX_STACK_LINE(361)
		::com::haxepunk::HXP_obj::point->y = ((((this->_y + this->parent->y) - ::com::haxepunk::HXP_obj::camera->y)) * ::com::haxepunk::HXP_obj::screen->fullScaleY);
		HX_STACK_LINE(363)
		graphics->beginFill((int)255,0.3);
		HX_STACK_LINE(364)
		Float stepX = (::Std_obj::_int(this->_tile->width) * ::com::haxepunk::HXP_obj::screen->fullScaleX);		HX_STACK_VAR(stepX,"stepX");
		HX_STACK_LINE(365)
		Float stepY = (::Std_obj::_int(this->_tile->height) * ::com::haxepunk::HXP_obj::screen->fullScaleY);		HX_STACK_VAR(stepY,"stepY");
		HX_STACK_LINE(366)
		Float pos = (::com::haxepunk::HXP_obj::point->x + stepX);		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(368)
		{
			HX_STACK_LINE(368)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(368)
			int _g = this->columns;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(368)
			while(((_g1 < _g))){
				HX_STACK_LINE(368)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(370)
				graphics->drawRect(pos,::com::haxepunk::HXP_obj::point->y,(int)1,(this->_height * ::com::haxepunk::HXP_obj::screen->fullScaleX));
				HX_STACK_LINE(371)
				hx::AddEq(pos,stepX);
			}
		}
		HX_STACK_LINE(374)
		pos = (::com::haxepunk::HXP_obj::point->y + stepY);
		HX_STACK_LINE(375)
		{
			HX_STACK_LINE(375)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(375)
			int _g = this->rows;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(375)
			while(((_g1 < _g))){
				HX_STACK_LINE(375)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(377)
				graphics->drawRect(::com::haxepunk::HXP_obj::point->x,pos,(this->_width * ::com::haxepunk::HXP_obj::screen->fullScaleY),(int)1);
				HX_STACK_LINE(378)
				hx::AddEq(pos,stepY);
			}
		}
		HX_STACK_LINE(381)
		::com::haxepunk::HXP_obj::rect->y = ::com::haxepunk::HXP_obj::point->y;
		HX_STACK_LINE(382)
		{
			HX_STACK_LINE(382)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(382)
			int _g = this->rows;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(382)
			while(((_g1 < _g))){
				HX_STACK_LINE(382)
				int y = (_g1)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(384)
				{
					HX_STACK_LINE(384)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(384)
					int _g2 = this->columns;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(384)
					while(((_g3 < _g2))){
						HX_STACK_LINE(384)
						int x = (_g3)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(386)
						if ((this->data->__get(y).StaticCast< Array< bool > >()->__get(x))){
							HX_STACK_LINE(388)
							graphics->drawRect(::com::haxepunk::HXP_obj::rect->x,::com::haxepunk::HXP_obj::rect->y,stepX,stepY);
						}
						HX_STACK_LINE(390)
						hx::AddEq(::com::haxepunk::HXP_obj::rect->x,stepX);
					}
				}
				HX_STACK_LINE(392)
				::com::haxepunk::HXP_obj::rect->x = ::com::haxepunk::HXP_obj::point->x;
				HX_STACK_LINE(393)
				hx::AddEq(::com::haxepunk::HXP_obj::rect->y,stepY);
			}
		}
		HX_STACK_LINE(395)
		graphics->endFill();
	}
return null();
}


bool Grid_obj::collidePixelmask( ::com::haxepunk::masks::Pixelmask other){
	HX_STACK_FRAME("Grid","collidePixelmask","Grid.collidePixelmask","com/haxepunk/masks/Grid.hx",311)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(353)
	::haxe::Log_obj::trace(HX_CSTRING("Pixelmasks will not work in targets other than flash due to hittest not being implemented in OpenFL."),hx::SourceInfo(HX_CSTRING("Grid.hx"),353,HX_CSTRING("com.haxepunk.masks.Grid"),HX_CSTRING("collidePixelmask")));
	HX_STACK_LINE(355)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,collidePixelmask,return )

bool Grid_obj::collideHitbox( ::com::haxepunk::masks::Hitbox other){
	HX_STACK_FRAME("Grid","collideHitbox","Grid.collideHitbox","com/haxepunk/masks/Grid.hx",287)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(288)
	int rectX;		HX_STACK_VAR(rectX,"rectX");
	HX_STACK_LINE(288)
	int rectY;		HX_STACK_VAR(rectY,"rectY");
	HX_STACK_LINE(288)
	int pointX;		HX_STACK_VAR(pointX,"pointX");
	HX_STACK_LINE(288)
	int pointY;		HX_STACK_VAR(pointY,"pointY");
	HX_STACK_LINE(289)
	this->_rect->x = (((other->parent->x - other->_x) - this->parent->x) + this->_x);
	HX_STACK_LINE(290)
	this->_rect->y = (((other->parent->y - other->_y) - this->parent->y) + this->_y);
	HX_STACK_LINE(291)
	pointX = (::Std_obj::_int((Float((((this->_rect->x + other->_width) - (int)1))) / Float(this->_tile->width))) + (int)1);
	HX_STACK_LINE(292)
	pointY = (::Std_obj::_int((Float((((this->_rect->y + other->_height) - (int)1))) / Float(this->_tile->height))) + (int)1);
	HX_STACK_LINE(293)
	rectX = ::Std_obj::_int((Float(this->_rect->x) / Float(this->_tile->width)));
	HX_STACK_LINE(294)
	rectY = ::Std_obj::_int((Float(this->_rect->y) / Float(this->_tile->height)));
	HX_STACK_LINE(296)
	{
		HX_STACK_LINE(296)
		int _g = rectY;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(296)
		while(((_g < pointY))){
			HX_STACK_LINE(296)
			int dy = (_g)++;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(298)
			{
				HX_STACK_LINE(298)
				int _g1 = rectX;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(298)
				while(((_g1 < pointX))){
					HX_STACK_LINE(298)
					int dx = (_g1)++;		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(300)
					if ((this->getTile(dx,dy))){
						HX_STACK_LINE(302)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(306)
	return false;
}


bool Grid_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_FRAME("Grid","collideMask","Grid.collideMask","com/haxepunk/masks/Grid.hx",263)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(264)
	int rectX;		HX_STACK_VAR(rectX,"rectX");
	HX_STACK_LINE(264)
	int rectY;		HX_STACK_VAR(rectY,"rectY");
	HX_STACK_LINE(264)
	int pointX;		HX_STACK_VAR(pointX,"pointX");
	HX_STACK_LINE(264)
	int pointY;		HX_STACK_VAR(pointY,"pointY");
	HX_STACK_LINE(265)
	this->_rect->x = (((other->parent->x - other->parent->originX) - this->parent->x) + this->parent->originX);
	HX_STACK_LINE(266)
	this->_rect->y = (((other->parent->y - other->parent->originY) - this->parent->y) + this->parent->originY);
	HX_STACK_LINE(267)
	pointX = (::Std_obj::_int((Float((((this->_rect->x + other->parent->width) - (int)1))) / Float(this->_tile->width))) + (int)1);
	HX_STACK_LINE(268)
	pointY = (::Std_obj::_int((Float((((this->_rect->y + other->parent->height) - (int)1))) / Float(this->_tile->height))) + (int)1);
	HX_STACK_LINE(269)
	rectX = ::Std_obj::_int((Float(this->_rect->x) / Float(this->_tile->width)));
	HX_STACK_LINE(270)
	rectY = ::Std_obj::_int((Float(this->_rect->y) / Float(this->_tile->height)));
	HX_STACK_LINE(272)
	{
		HX_STACK_LINE(272)
		int _g = rectY;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(272)
		while(((_g < pointY))){
			HX_STACK_LINE(272)
			int dy = (_g)++;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(274)
			{
				HX_STACK_LINE(274)
				int _g1 = rectX;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(274)
				while(((_g1 < pointX))){
					HX_STACK_LINE(274)
					int dx = (_g1)++;		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(276)
					if ((this->getTile(dx,dy))){
						HX_STACK_LINE(278)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(282)
	return false;
}


int Grid_obj::get_tileHeight( ){
	HX_STACK_FRAME("Grid","get_tileHeight","Grid.get_tileHeight","com/haxepunk/masks/Grid.hx",244)
	HX_STACK_THIS(this)
	HX_STACK_LINE(244)
	return ::Std_obj::_int(this->_tile->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,get_tileHeight,return )

int Grid_obj::get_tileWidth( ){
	HX_STACK_FRAME("Grid","get_tileWidth","Grid.get_tileWidth","com/haxepunk/masks/Grid.hx",238)
	HX_STACK_THIS(this)
	HX_STACK_LINE(238)
	return ::Std_obj::_int(this->_tile->width);
}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,get_tileWidth,return )

::String Grid_obj::saveToString( ::String __o_columnSep,::String __o_rowSep){
::String columnSep = __o_columnSep.Default(HX_CSTRING(","));
::String rowSep = __o_rowSep.Default(HX_CSTRING("\n"));
	HX_STACK_FRAME("Grid","saveToString","Grid.saveToString","com/haxepunk/masks/Grid.hx",219)
	HX_STACK_THIS(this)
	HX_STACK_ARG(columnSep,"columnSep")
	HX_STACK_ARG(rowSep,"rowSep")
{
		HX_STACK_LINE(220)
		::String s = HX_CSTRING("");		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(220)
		int x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(220)
		int y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(222)
		{
			HX_STACK_LINE(222)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(222)
			int _g = this->rows;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(222)
			while(((_g1 < _g))){
				HX_STACK_LINE(222)
				int y1 = (_g1)++;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(224)
				{
					HX_STACK_LINE(224)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(224)
					int _g2 = this->columns;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(224)
					while(((_g3 < _g2))){
						HX_STACK_LINE(224)
						int x1 = (_g3)++;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(226)
						hx::AddEq(s,::Std_obj::string(this->getTile(x1,y1)));
						HX_STACK_LINE(227)
						if (((x1 != (this->columns - (int)1)))){
							HX_STACK_LINE(227)
							hx::AddEq(s,columnSep);
						}
					}
				}
				HX_STACK_LINE(229)
				if (((y1 != (this->rows - (int)1)))){
					HX_STACK_LINE(229)
					hx::AddEq(s,rowSep);
				}
			}
		}
		HX_STACK_LINE(231)
		return s;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,saveToString,return )

Void Grid_obj::loadFrom2DArray( Array< ::Dynamic > array){
{
		HX_STACK_FRAME("Grid","loadFrom2DArray","Grid.loadFrom2DArray","com/haxepunk/masks/Grid.hx",204)
		HX_STACK_THIS(this)
		HX_STACK_ARG(array,"array")
		HX_STACK_LINE(204)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(204)
		int _g = array->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(204)
		while(((_g1 < _g))){
			HX_STACK_LINE(204)
			int y = (_g1)++;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(206)
			{
				HX_STACK_LINE(206)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(206)
				int _g2 = array->__get((int)0).StaticCast< Array< int > >()->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(206)
				while(((_g3 < _g2))){
					HX_STACK_LINE(206)
					int x = (_g3)++;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(208)
					this->setTile(x,y,(array->__get(y).StaticCast< Array< int > >()->__get(x) > (int)0));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,loadFrom2DArray,(void))

Void Grid_obj::loadFromString( ::String str,::String __o_columnSep,::String __o_rowSep){
::String columnSep = __o_columnSep.Default(HX_CSTRING(","));
::String rowSep = __o_rowSep.Default(HX_CSTRING("\n"));
	HX_STACK_FRAME("Grid","loadFromString","Grid.loadFromString","com/haxepunk/masks/Grid.hx",181)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(columnSep,"columnSep")
	HX_STACK_ARG(rowSep,"rowSep")
{
		HX_STACK_LINE(182)
		Array< ::String > row = str.split(rowSep);		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(183)
		int rows = row->length;		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(182)
		Array< ::String > col;		HX_STACK_VAR(col,"col");
		HX_STACK_LINE(182)
		int cols;		HX_STACK_VAR(cols,"cols");
		HX_STACK_LINE(182)
		int x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(182)
		int y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(185)
		{
			HX_STACK_LINE(185)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(185)
			while(((_g < rows))){
				HX_STACK_LINE(185)
				int y1 = (_g)++;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(187)
				if (((row->__get(y1) == HX_CSTRING("")))){
					HX_STACK_LINE(187)
					continue;
				}
				HX_STACK_LINE(188)
				col = row->__get(y1).split(columnSep);
				HX_STACK_LINE(189)
				cols = col->length;
				HX_STACK_LINE(190)
				{
					HX_STACK_LINE(190)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(190)
					while(((_g1 < cols))){
						HX_STACK_LINE(190)
						int x1 = (_g1)++;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(192)
						if (((col->__get(x1) == HX_CSTRING("")))){
							HX_STACK_LINE(192)
							continue;
						}
						HX_STACK_LINE(193)
						this->setTile(x1,y1,(::Std_obj::parseInt(col->__get(x1)) > (int)0));
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Grid_obj,loadFromString,(void))

Void Grid_obj::clearRect( hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< int >  __o_width,hx::Null< int >  __o_height){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
int width = __o_width.Default(1);
int height = __o_height.Default(1);
	HX_STACK_FRAME("Grid","clearRect","Grid.clearRect","com/haxepunk/masks/Grid.hx",171)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
{
		HX_STACK_LINE(171)
		this->setRect(column,row,width,height,false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Grid_obj,clearRect,(void))

Void Grid_obj::setRect( hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< bool >  __o_solid){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
int width = __o_width.Default(1);
int height = __o_height.Default(1);
bool solid = __o_solid.Default(true);
	HX_STACK_FRAME("Grid","setRect","Grid.setRect","com/haxepunk/masks/Grid.hx",144)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(solid,"solid")
{
		HX_STACK_LINE(145)
		if ((this->usePositions)){
			HX_STACK_LINE(147)
			column = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));
			HX_STACK_LINE(148)
			row = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));
			HX_STACK_LINE(149)
			width = ::Std_obj::_int((Float(width) / Float(this->_tile->width)));
			HX_STACK_LINE(150)
			height = ::Std_obj::_int((Float(height) / Float(this->_tile->height)));
		}
		HX_STACK_LINE(153)
		{
			HX_STACK_LINE(153)
			int _g1 = row;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(153)
			int _g = (row + height);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(153)
			while(((_g1 < _g))){
				HX_STACK_LINE(153)
				int yy = (_g1)++;		HX_STACK_VAR(yy,"yy");
				HX_STACK_LINE(155)
				{
					HX_STACK_LINE(155)
					int _g3 = column;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(155)
					int _g2 = (column + width);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(155)
					while(((_g3 < _g2))){
						HX_STACK_LINE(155)
						int xx = (_g3)++;		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(157)
						this->setTile(xx,yy,solid);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Grid_obj,setRect,(void))

bool Grid_obj::getTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
	HX_STACK_FRAME("Grid","getTile","Grid.getTile","com/haxepunk/masks/Grid.hx",124)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
{
		HX_STACK_LINE(125)
		if ((!(((  (((bool((bool((bool((column < (int)0)) || bool((column > (this->columns - (int)1))))) || bool((row < (int)0)))) || bool((row > (this->rows - (int)1)))))) ? bool(false) : bool(true) ))))){
			HX_STACK_LINE(125)
			return false;
		}
		HX_STACK_LINE(127)
		if ((this->usePositions)){
			HX_STACK_LINE(129)
			column = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));
			HX_STACK_LINE(130)
			row = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));
		}
		HX_STACK_LINE(132)
		return this->data->__get(row).StaticCast< Array< bool > >()->__get(column);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,getTile,return )

bool Grid_obj::checkTile( int column,int row){
	HX_STACK_FRAME("Grid","checkTile","Grid.checkTile","com/haxepunk/masks/Grid.hx",106)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_LINE(106)
	if (((bool((bool((bool((column < (int)0)) || bool((column > (this->columns - (int)1))))) || bool((row < (int)0)))) || bool((row > (this->rows - (int)1)))))){
		HX_STACK_LINE(109)
		return false;
	}
	else{
		HX_STACK_LINE(113)
		return true;
	}
	HX_STACK_LINE(106)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,checkTile,return )

Void Grid_obj::clearTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
	HX_STACK_FRAME("Grid","clearTile","Grid.clearTile","com/haxepunk/masks/Grid.hx",100)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
{
		HX_STACK_LINE(100)
		this->setTile(column,row,false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,clearTile,(void))

Void Grid_obj::setTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< bool >  __o_solid){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
bool solid = __o_solid.Default(true);
	HX_STACK_FRAME("Grid","setTile","Grid.setTile","com/haxepunk/masks/Grid.hx",82)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(solid,"solid")
{
		HX_STACK_LINE(83)
		if ((!(((  (((bool((bool((bool((column < (int)0)) || bool((column > (this->columns - (int)1))))) || bool((row < (int)0)))) || bool((row > (this->rows - (int)1)))))) ? bool(false) : bool(true) ))))){
			HX_STACK_LINE(83)
			return null();
		}
		HX_STACK_LINE(85)
		if ((this->usePositions)){
			HX_STACK_LINE(87)
			column = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));
			HX_STACK_LINE(88)
			row = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));
		}
		HX_STACK_LINE(90)
		this->data->__get(row).StaticCast< Array< bool > >()[column] = solid;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Grid_obj,setTile,(void))


Grid_obj::Grid_obj()
{
}

void Grid_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Grid);
	HX_MARK_MEMBER_NAME(_point2,"_point2");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	HX_MARK_MEMBER_NAME(_tile,"_tile");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(columns,"columns");
	HX_MARK_MEMBER_NAME(usePositions,"usePositions");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Grid_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_point2,"_point2");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	HX_VISIT_MEMBER_NAME(_tile,"_tile");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(columns,"columns");
	HX_VISIT_MEMBER_NAME(usePositions,"usePositions");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Grid_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"rows") ) { return rows; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		if (HX_FIELD_EQ(inName,"_tile") ) { return _tile; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_point2") ) { return _point2; }
		if (HX_FIELD_EQ(inName,"columns") ) { return columns; }
		if (HX_FIELD_EQ(inName,"setRect") ) { return setRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getTile") ) { return getTile_dyn(); }
		if (HX_FIELD_EQ(inName,"setTile") ) { return setTile_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw_dyn(); }
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return get_tileWidth(); }
		if (HX_FIELD_EQ(inName,"clearRect") ) { return clearRect_dyn(); }
		if (HX_FIELD_EQ(inName,"checkTile") ) { return checkTile_dyn(); }
		if (HX_FIELD_EQ(inName,"clearTile") ) { return clearTile_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return get_tileHeight(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"saveToString") ) { return saveToString_dyn(); }
		if (HX_FIELD_EQ(inName,"usePositions") ) { return usePositions; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tileWidth") ) { return get_tileWidth_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_tileHeight") ) { return get_tileHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"loadFromString") ) { return loadFromString_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadFrom2DArray") ) { return loadFrom2DArray_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"squareProjection") ) { return squareProjection_dyn(); }
		if (HX_FIELD_EQ(inName,"collidePixelmask") ) { return collidePixelmask_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Grid_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tile") ) { _tile=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_point2") ) { _point2=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"columns") ) { columns=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"usePositions") ) { usePositions=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Grid_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_point2"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_rect"));
	outFields->push(HX_CSTRING("_tile"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("rows"));
	outFields->push(HX_CSTRING("columns"));
	outFields->push(HX_CSTRING("tileHeight"));
	outFields->push(HX_CSTRING("tileWidth"));
	outFields->push(HX_CSTRING("usePositions"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_point2"),
	HX_CSTRING("_point"),
	HX_CSTRING("_rect"),
	HX_CSTRING("_tile"),
	HX_CSTRING("squareProjection"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("collidePixelmask"),
	HX_CSTRING("collideHitbox"),
	HX_CSTRING("collideMask"),
	HX_CSTRING("data"),
	HX_CSTRING("rows"),
	HX_CSTRING("columns"),
	HX_CSTRING("get_tileHeight"),
	HX_CSTRING("get_tileWidth"),
	HX_CSTRING("saveToString"),
	HX_CSTRING("loadFrom2DArray"),
	HX_CSTRING("loadFromString"),
	HX_CSTRING("clearRect"),
	HX_CSTRING("setRect"),
	HX_CSTRING("getTile"),
	HX_CSTRING("checkTile"),
	HX_CSTRING("clearTile"),
	HX_CSTRING("setTile"),
	HX_CSTRING("usePositions"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Grid_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Grid_obj::__mClass,"__mClass");
};

#endif

Class Grid_obj::__mClass;

void Grid_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.masks.Grid"), hx::TCanCast< Grid_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void Grid_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace masks
