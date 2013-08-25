#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_Engine
#include <com/haxepunk/Engine.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_filters_BitmapFilter
#include <flash/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_geom_Transform
#include <flash/geom/Transform.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace haxepunk{

Void Screen_obj::__construct()
{
HX_STACK_FRAME("Screen","new","Screen.new","com/haxepunk/Screen.hx",15)
{
	HX_STACK_LINE(248)
	this->needsResize = false;
	HX_STACK_LINE(243)
	this->fullScaleY = (int)1;
	HX_STACK_LINE(238)
	this->fullScaleX = (int)1;
	HX_STACK_LINE(223)
	this->scale = (int)1;
	HX_STACK_LINE(208)
	this->scaleY = (int)1;
	HX_STACK_LINE(194)
	this->scaleX = (int)1;
	HX_STACK_LINE(22)
	this->init();
	HX_STACK_LINE(25)
	if (((((int(::com::haxepunk::HXP_obj::renderMode) & int((int((int)1) << int(::com::haxepunk::RenderMode_obj::BUFFER->__Index()))))) != (int)0))){
		HX_STACK_LINE(27)
		::com::haxepunk::HXP_obj::engine->addChild(this->_sprite);
	}
}
;
	return null();
}

Screen_obj::~Screen_obj() { }

Dynamic Screen_obj::__CreateEmpty() { return  new Screen_obj; }
hx::ObjectPtr< Screen_obj > Screen_obj::__new()
{  hx::ObjectPtr< Screen_obj > result = new Screen_obj();
	result->__construct();
	return result;}

Dynamic Screen_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Screen_obj > result = new Screen_obj();
	result->__construct();
	return result;}

::com::haxepunk::graphics::Image Screen_obj::capture( ){
	HX_STACK_FRAME("Screen","capture","Screen.capture","com/haxepunk/Screen.hx",298)
	HX_STACK_THIS(this)
	HX_STACK_LINE(298)
	return ::com::haxepunk::graphics::Image_obj::__new(this->_bitmap->__get(this->_current).StaticCast< ::flash::display::Bitmap >()->bitmapData->clone(),null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,capture,return )

int Screen_obj::get_mouseY( ){
	HX_STACK_FRAME("Screen","get_mouseY","Screen.get_mouseY","com/haxepunk/Screen.hx",290)
	HX_STACK_THIS(this)
	HX_STACK_LINE(290)
	return ::Std_obj::_int(this->_sprite->get_mouseY());
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_mouseY,return )

int Screen_obj::get_mouseX( ){
	HX_STACK_FRAME("Screen","get_mouseX","Screen.get_mouseX","com/haxepunk/Screen.hx",284)
	HX_STACK_THIS(this)
	HX_STACK_LINE(284)
	return ::Std_obj::_int(this->_sprite->get_mouseX());
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_mouseX,return )

bool Screen_obj::set_smoothing( bool value){
	HX_STACK_FRAME("Screen","set_smoothing","Screen.set_smoothing","com/haxepunk/Screen.hx",268)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(268)
	this->_bitmap->__get((int)0).StaticCast< ::flash::display::Bitmap >()->set_smoothing(this->_bitmap->__get((int)1).StaticCast< ::flash::display::Bitmap >()->set_smoothing(value));
	HX_STACK_LINE(268)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_smoothing,return )

bool Screen_obj::get_smoothing( ){
	HX_STACK_FRAME("Screen","get_smoothing","Screen.get_smoothing","com/haxepunk/Screen.hx",267)
	HX_STACK_THIS(this)
	HX_STACK_LINE(267)
	return this->_bitmap->__get((int)0).StaticCast< ::flash::display::Bitmap >()->smoothing;
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_smoothing,return )

Float Screen_obj::set_angle( Float value){
	HX_STACK_FRAME("Screen","set_angle","Screen.set_angle","com/haxepunk/Screen.hx",256)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(257)
	if (((this->_angle == (value * ((Float(::Math_obj::PI) / Float((int)-180))))))){
		HX_STACK_LINE(257)
		return value;
	}
	HX_STACK_LINE(258)
	this->_angle = (value * ((Float(::Math_obj::PI) / Float((int)-180))));
	HX_STACK_LINE(259)
	this->update();
	HX_STACK_LINE(260)
	return this->_angle;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_angle,return )

Float Screen_obj::get_angle( ){
	HX_STACK_FRAME("Screen","get_angle","Screen.get_angle","com/haxepunk/Screen.hx",254)
	HX_STACK_THIS(this)
	HX_STACK_LINE(254)
	return (this->_angle * ((Float((int)-180) / Float(::Math_obj::PI))));
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_angle,return )

Float Screen_obj::set_scale( Float value){
	HX_STACK_FRAME("Screen","set_scale","Screen.set_scale","com/haxepunk/Screen.hx",225)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(226)
	if (((this->scale == value))){
		HX_STACK_LINE(226)
		return value;
	}
	HX_STACK_LINE(227)
	this->scale = value;
	HX_STACK_LINE(228)
	this->fullScaleX = (this->scaleX * this->scale);
	HX_STACK_LINE(229)
	this->fullScaleY = (this->scaleY * this->scale);
	HX_STACK_LINE(230)
	this->update();
	HX_STACK_LINE(231)
	this->needsResize = true;
	HX_STACK_LINE(232)
	return this->scale;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_scale,return )

Float Screen_obj::set_scaleY( Float value){
	HX_STACK_FRAME("Screen","set_scaleY","Screen.set_scaleY","com/haxepunk/Screen.hx",210)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(211)
	if (((this->scaleY == value))){
		HX_STACK_LINE(211)
		return value;
	}
	HX_STACK_LINE(212)
	this->scaleY = value;
	HX_STACK_LINE(213)
	this->fullScaleY = (this->scaleY * this->scale);
	HX_STACK_LINE(214)
	this->update();
	HX_STACK_LINE(215)
	this->needsResize = true;
	HX_STACK_LINE(216)
	return this->scaleY;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_scaleY,return )

Float Screen_obj::set_scaleX( Float value){
	HX_STACK_FRAME("Screen","set_scaleX","Screen.set_scaleX","com/haxepunk/Screen.hx",196)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(197)
	if (((this->scaleX == value))){
		HX_STACK_LINE(197)
		return value;
	}
	HX_STACK_LINE(198)
	this->scaleX = value;
	HX_STACK_LINE(199)
	this->fullScaleX = (this->scaleX * this->scale);
	HX_STACK_LINE(200)
	this->update();
	HX_STACK_LINE(201)
	this->needsResize = true;
	HX_STACK_LINE(202)
	return this->scaleX;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_scaleX,return )

int Screen_obj::set_originY( int value){
	HX_STACK_FRAME("Screen","set_originY","Screen.set_originY","com/haxepunk/Screen.hx",184)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(185)
	if (((this->originY == value))){
		HX_STACK_LINE(185)
		return value;
	}
	HX_STACK_LINE(186)
	this->originY = value;
	HX_STACK_LINE(187)
	this->update();
	HX_STACK_LINE(188)
	return this->originY;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_originY,return )

int Screen_obj::set_originX( int value){
	HX_STACK_FRAME("Screen","set_originX","Screen.set_originX","com/haxepunk/Screen.hx",172)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(173)
	if (((this->originX == value))){
		HX_STACK_LINE(173)
		return value;
	}
	HX_STACK_LINE(174)
	this->originX = value;
	HX_STACK_LINE(175)
	this->update();
	HX_STACK_LINE(176)
	return this->originX;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_originX,return )

int Screen_obj::set_y( int value){
	HX_STACK_FRAME("Screen","set_y","Screen.set_y","com/haxepunk/Screen.hx",160)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(161)
	if (((this->y == value))){
		HX_STACK_LINE(161)
		return value;
	}
	HX_STACK_LINE(162)
	this->y = value;
	HX_STACK_LINE(163)
	this->update();
	HX_STACK_LINE(164)
	return this->y;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_y,return )

int Screen_obj::set_x( int value){
	HX_STACK_FRAME("Screen","set_x","Screen.set_x","com/haxepunk/Screen.hx",148)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(149)
	if (((this->x == value))){
		HX_STACK_LINE(149)
		return value;
	}
	HX_STACK_LINE(150)
	this->x = value;
	HX_STACK_LINE(151)
	this->update();
	HX_STACK_LINE(152)
	return this->x;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_x,return )

int Screen_obj::set_color( int value){
	HX_STACK_FRAME("Screen","set_color","Screen.set_color","com/haxepunk/Screen.hx",134)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(138)
	::com::haxepunk::HXP_obj::log(HX_CSTRING("screen.color shouldn't be set other than in flash"));
	HX_STACK_LINE(140)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_color,return )

int Screen_obj::get_color( ){
	HX_STACK_FRAME("Screen","get_color","Screen.get_color","com/haxepunk/Screen.hx",132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(132)
	return this->_color;
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_color,return )

Void Screen_obj::update( ){
{
		HX_STACK_FRAME("Screen","update","Screen.update","com/haxepunk/Screen.hx",115)
		HX_STACK_THIS(this)
		HX_STACK_LINE(116)
		if (((this->_matrix == null()))){
			HX_STACK_LINE(116)
			return null();
		}
		HX_STACK_LINE(117)
		this->_matrix->b = this->_matrix->c = (int)0;
		HX_STACK_LINE(118)
		this->_matrix->a = this->fullScaleX;
		HX_STACK_LINE(119)
		this->_matrix->d = this->fullScaleY;
		HX_STACK_LINE(120)
		this->_matrix->tx = (-(this->originX) * this->_matrix->a);
		HX_STACK_LINE(121)
		this->_matrix->ty = (-(this->originY) * this->_matrix->d);
		HX_STACK_LINE(122)
		if (((this->_angle != (int)0))){
			HX_STACK_LINE(122)
			this->_matrix->rotate(this->_angle);
		}
		HX_STACK_LINE(123)
		hx::AddEq(this->_matrix->tx,((this->originX * this->fullScaleX) + this->x));
		HX_STACK_LINE(124)
		hx::AddEq(this->_matrix->ty,((this->originY * this->fullScaleY) + this->y));
		HX_STACK_LINE(125)
		this->_sprite->get_transform()->set_matrix(this->_matrix);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,update,(void))

Void Screen_obj::redraw( ){
{
		HX_STACK_FRAME("Screen","redraw","Screen.redraw","com/haxepunk/Screen.hx",107)
		HX_STACK_THIS(this)
		HX_STACK_LINE(109)
		this->_bitmap->__get(this->_current).StaticCast< ::flash::display::Bitmap >()->set_visible(true);
		HX_STACK_LINE(110)
		this->_bitmap->__get(((int)1 - this->_current)).StaticCast< ::flash::display::Bitmap >()->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,redraw,(void))

Void Screen_obj::refresh( ){
{
		HX_STACK_FRAME("Screen","refresh","Screen.refresh","com/haxepunk/Screen.hx",99)
		HX_STACK_THIS(this)
		HX_STACK_LINE(99)
		::com::haxepunk::HXP_obj::buffer->fillRect(::com::haxepunk::HXP_obj::bounds,this->_color);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,refresh,(void))

Void Screen_obj::addFilter( Array< ::Dynamic > filter){
{
		HX_STACK_FRAME("Screen","addFilter","Screen.addFilter","com/haxepunk/Screen.hx",87)
		HX_STACK_THIS(this)
		HX_STACK_ARG(filter,"filter")
		HX_STACK_LINE(87)
		this->_sprite->set_filters(filter);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,addFilter,(void))

Void Screen_obj::swap( ){
{
		HX_STACK_FRAME("Screen","swap","Screen.swap","com/haxepunk/Screen.hx",80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(81)
		this->_current = ((int)1 - this->_current);
		HX_STACK_LINE(82)
		::com::haxepunk::HXP_obj::buffer = this->_bitmap->__get(this->_current).StaticCast< ::flash::display::Bitmap >()->bitmapData;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,swap,(void))

Void Screen_obj::resize( ){
{
		HX_STACK_FRAME("Screen","resize","Screen.resize","com/haxepunk/Screen.hx",58)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		{
			HX_STACK_LINE(59)
			::flash::display::Bitmap bd = this->_bitmap->__get((int)0).StaticCast< ::flash::display::Bitmap >();		HX_STACK_VAR(bd,"bd");
			HX_STACK_LINE(59)
			if (((bd != null()))){
				HX_STACK_LINE(59)
				this->_sprite->removeChild(bd);
				HX_STACK_LINE(59)
				bd->bitmapData->dispose();
			}
		}
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			::flash::display::Bitmap bd = this->_bitmap->__get((int)1).StaticCast< ::flash::display::Bitmap >();		HX_STACK_VAR(bd,"bd");
			HX_STACK_LINE(60)
			if (((bd != null()))){
				HX_STACK_LINE(60)
				this->_sprite->removeChild(bd);
				HX_STACK_LINE(60)
				bd->bitmapData->dispose();
			}
		}
		HX_STACK_LINE(62)
		this->width = ::com::haxepunk::HXP_obj::width;
		HX_STACK_LINE(63)
		this->height = ::com::haxepunk::HXP_obj::height;
		HX_STACK_LINE(65)
		this->_bitmap[(int)0] = ::flash::display::Bitmap_obj::__new(::com::haxepunk::HXP_obj::createBitmap(this->width,this->height,true,null()),::flash::display::PixelSnapping_obj::NEVER,null());
		HX_STACK_LINE(66)
		this->_bitmap[(int)1] = ::flash::display::Bitmap_obj::__new(::com::haxepunk::HXP_obj::createBitmap(this->width,this->height,true,null()),::flash::display::PixelSnapping_obj::NEVER,null());
		HX_STACK_LINE(68)
		this->_sprite->addChild(this->_bitmap->__get((int)0).StaticCast< ::flash::display::Bitmap >())->set_visible(true);
		HX_STACK_LINE(69)
		this->_sprite->addChild(this->_bitmap->__get((int)1).StaticCast< ::flash::display::Bitmap >())->set_visible(false);
		HX_STACK_LINE(70)
		::com::haxepunk::HXP_obj::buffer = this->_bitmap->__get((int)0).StaticCast< ::flash::display::Bitmap >()->bitmapData;
		HX_STACK_LINE(72)
		this->_current = (int)0;
		HX_STACK_LINE(73)
		this->needsResize = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,resize,(void))

Void Screen_obj::disposeBitmap( ::flash::display::Bitmap bd){
{
		HX_STACK_FRAME("Screen","disposeBitmap","Screen.disposeBitmap","com/haxepunk/Screen.hx",45)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bd,"bd")
		HX_STACK_LINE(45)
		if (((bd != null()))){
			HX_STACK_LINE(47)
			this->_sprite->removeChild(bd);
			HX_STACK_LINE(48)
			bd->bitmapData->dispose();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,disposeBitmap,(void))

Void Screen_obj::init( ){
{
		HX_STACK_FRAME("Screen","init","Screen.init","com/haxepunk/Screen.hx",32)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		this->_sprite = ::flash::display::Sprite_obj::__new();
		HX_STACK_LINE(34)
		this->_bitmap = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(35)
		this->set_x(this->set_y(this->set_originX(this->set_originY((int)0))));
		HX_STACK_LINE(36)
		this->_angle = this->_current = (int)0;
		HX_STACK_LINE(37)
		this->set_scale(this->set_scaleX(this->set_scaleY((int)1)));
		HX_STACK_LINE(38)
		this->_color = (int)0;
		HX_STACK_LINE(39)
		this->_matrix = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(40)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,init,(void))


Screen_obj::Screen_obj()
{
}

void Screen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Screen);
	HX_MARK_MEMBER_NAME(_color,"_color");
	HX_MARK_MEMBER_NAME(_angle,"_angle");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_current,"_current");
	HX_MARK_MEMBER_NAME(_bitmap,"_bitmap");
	HX_MARK_MEMBER_NAME(_sprite,"_sprite");
	HX_MARK_MEMBER_NAME(mouseY,"mouseY");
	HX_MARK_MEMBER_NAME(mouseX,"mouseX");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(needsResize,"needsResize");
	HX_MARK_MEMBER_NAME(fullScaleY,"fullScaleY");
	HX_MARK_MEMBER_NAME(fullScaleX,"fullScaleX");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(originY,"originY");
	HX_MARK_MEMBER_NAME(originX,"originX");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_END_CLASS();
}

void Screen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_color,"_color");
	HX_VISIT_MEMBER_NAME(_angle,"_angle");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_current,"_current");
	HX_VISIT_MEMBER_NAME(_bitmap,"_bitmap");
	HX_VISIT_MEMBER_NAME(_sprite,"_sprite");
	HX_VISIT_MEMBER_NAME(mouseY,"mouseY");
	HX_VISIT_MEMBER_NAME(mouseX,"mouseX");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(needsResize,"needsResize");
	HX_VISIT_MEMBER_NAME(fullScaleY,"fullScaleY");
	HX_VISIT_MEMBER_NAME(fullScaleX,"fullScaleX");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(originY,"originY");
	HX_VISIT_MEMBER_NAME(originX,"originX");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
}

Dynamic Screen_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"swap") ) { return swap_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"angle") ) { return get_angle(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"color") ) { return get_color(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_color") ) { return _color; }
		if (HX_FIELD_EQ(inName,"_angle") ) { return _angle; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return inCallProp ? get_mouseY() : mouseY; }
		if (HX_FIELD_EQ(inName,"mouseX") ) { return inCallProp ? get_mouseX() : mouseX; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return scaleY; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return scaleX; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"redraw") ) { return redraw_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { return _bitmap; }
		if (HX_FIELD_EQ(inName,"_sprite") ) { return _sprite; }
		if (HX_FIELD_EQ(inName,"capture") ) { return capture_dyn(); }
		if (HX_FIELD_EQ(inName,"originY") ) { return originY; }
		if (HX_FIELD_EQ(inName,"originX") ) { return originX; }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_current") ) { return _current; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return get_smoothing(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_angle") ) { return get_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scale") ) { return set_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"addFilter") ) { return addFilter_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"fullScaleY") ) { return fullScaleY; }
		if (HX_FIELD_EQ(inName,"fullScaleX") ) { return fullScaleX; }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return set_scaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return set_scaleX_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"needsResize") ) { return needsResize; }
		if (HX_FIELD_EQ(inName,"set_originY") ) { return set_originY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_originX") ) { return set_originX_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_smoothing") ) { return set_smoothing_dyn(); }
		if (HX_FIELD_EQ(inName,"get_smoothing") ) { return get_smoothing_dyn(); }
		if (HX_FIELD_EQ(inName,"disposeBitmap") ) { return disposeBitmap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Screen_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp) return set_y(inValue);y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp) return set_x(inValue);x=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { return set_angle(inValue); }
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp) return set_scale(inValue);scale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { return set_color(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_color") ) { _color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_angle") ) { _angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { mouseY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseX") ) { mouseX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp) return set_scaleY(inValue);scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp) return set_scaleX(inValue);scaleX=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { _bitmap=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sprite") ) { _sprite=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originY") ) { if (inCallProp) return set_originY(inValue);originY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originX") ) { if (inCallProp) return set_originX(inValue);originX=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_current") ) { _current=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return set_smoothing(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fullScaleY") ) { fullScaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullScaleX") ) { fullScaleX=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"needsResize") ) { needsResize=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Screen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_color"));
	outFields->push(HX_CSTRING("_angle"));
	outFields->push(HX_CSTRING("_matrix"));
	outFields->push(HX_CSTRING("_current"));
	outFields->push(HX_CSTRING("_bitmap"));
	outFields->push(HX_CSTRING("_sprite"));
	outFields->push(HX_CSTRING("mouseY"));
	outFields->push(HX_CSTRING("mouseX"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("smoothing"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("needsResize"));
	outFields->push(HX_CSTRING("fullScaleY"));
	outFields->push(HX_CSTRING("fullScaleX"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("scaleY"));
	outFields->push(HX_CSTRING("scaleX"));
	outFields->push(HX_CSTRING("originY"));
	outFields->push(HX_CSTRING("originX"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("color"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_color"),
	HX_CSTRING("_angle"),
	HX_CSTRING("_matrix"),
	HX_CSTRING("_current"),
	HX_CSTRING("_bitmap"),
	HX_CSTRING("_sprite"),
	HX_CSTRING("capture"),
	HX_CSTRING("get_mouseY"),
	HX_CSTRING("mouseY"),
	HX_CSTRING("get_mouseX"),
	HX_CSTRING("mouseX"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("set_smoothing"),
	HX_CSTRING("get_smoothing"),
	HX_CSTRING("set_angle"),
	HX_CSTRING("get_angle"),
	HX_CSTRING("needsResize"),
	HX_CSTRING("fullScaleY"),
	HX_CSTRING("fullScaleX"),
	HX_CSTRING("set_scale"),
	HX_CSTRING("scale"),
	HX_CSTRING("set_scaleY"),
	HX_CSTRING("scaleY"),
	HX_CSTRING("set_scaleX"),
	HX_CSTRING("scaleX"),
	HX_CSTRING("set_originY"),
	HX_CSTRING("originY"),
	HX_CSTRING("set_originX"),
	HX_CSTRING("originX"),
	HX_CSTRING("set_y"),
	HX_CSTRING("y"),
	HX_CSTRING("set_x"),
	HX_CSTRING("x"),
	HX_CSTRING("set_color"),
	HX_CSTRING("get_color"),
	HX_CSTRING("update"),
	HX_CSTRING("redraw"),
	HX_CSTRING("refresh"),
	HX_CSTRING("addFilter"),
	HX_CSTRING("swap"),
	HX_CSTRING("resize"),
	HX_CSTRING("disposeBitmap"),
	HX_CSTRING("init"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Screen_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Screen_obj::__mClass,"__mClass");
};

#endif

Class Screen_obj::__mClass;

void Screen_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.Screen"), hx::TCanCast< Screen_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void Screen_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
