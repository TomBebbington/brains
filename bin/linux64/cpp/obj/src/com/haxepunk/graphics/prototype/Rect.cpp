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
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_prototype_Rect
#include <com/haxepunk/graphics/prototype/Rect.h>
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
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
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
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{
namespace prototype{

Void Rect_obj::__construct(int width,int height,hx::Null< int >  __o_color)
{
HX_STACK_FRAME("Rect","new","Rect.new","com/haxepunk/graphics/prototype/Rect.hx",9)

HX_STACK_ARG(width,"width")

HX_STACK_ARG(height,"height")

HX_STACK_ARG(__o_color,"color")
int color = __o_color.Default(16777215);
{
	HX_STACK_LINE(14)
	this->height = (int)0;
	HX_STACK_LINE(13)
	this->width = (int)0;
	HX_STACK_LINE(12)
	this->color = (int)0;
	HX_STACK_LINE(18)
	super::__construct();
	HX_STACK_LINE(20)
	this->set_color(color);
	HX_STACK_LINE(21)
	this->set_width(width);
	HX_STACK_LINE(22)
	this->set_height(height);
}
;
	return null();
}

Rect_obj::~Rect_obj() { }

Dynamic Rect_obj::__CreateEmpty() { return  new Rect_obj; }
hx::ObjectPtr< Rect_obj > Rect_obj::__new(int width,int height,hx::Null< int >  __o_color)
{  hx::ObjectPtr< Rect_obj > result = new Rect_obj();
	result->__construct(width,height,__o_color);
	return result;}

Dynamic Rect_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Rect_obj > result = new Rect_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

int Rect_obj::set_color( int value){
	HX_STACK_FRAME("Rect","set_color","Rect.set_color","com/haxepunk/graphics/prototype/Rect.hx",70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(71)
	if (((this->color == value))){
		HX_STACK_LINE(71)
		return value;
	}
	HX_STACK_LINE(72)
	this->color = value;
	HX_STACK_LINE(73)
	this->createImage();
	HX_STACK_LINE(74)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Rect_obj,set_color,return )

int Rect_obj::set_width( int value){
	HX_STACK_FRAME("Rect","set_width","Rect.set_width","com/haxepunk/graphics/prototype/Rect.hx",62)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(63)
	if (((this->width == value))){
		HX_STACK_LINE(63)
		return value;
	}
	HX_STACK_LINE(64)
	this->width = value;
	HX_STACK_LINE(65)
	this->createImage();
	HX_STACK_LINE(66)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Rect_obj,set_width,return )

int Rect_obj::set_height( int value){
	HX_STACK_FRAME("Rect","set_height","Rect.set_height","com/haxepunk/graphics/prototype/Rect.hx",54)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(55)
	if (((this->height == value))){
		HX_STACK_LINE(55)
		return value;
	}
	HX_STACK_LINE(56)
	this->height = value;
	HX_STACK_LINE(57)
	this->createImage();
	HX_STACK_LINE(58)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Rect_obj,set_height,return )

Void Rect_obj::createImage( ){
{
		HX_STACK_FRAME("Rect","createImage","Rect.createImage","com/haxepunk/graphics/prototype/Rect.hx",46)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		if (((bool((bool((((int(::com::haxepunk::HXP_obj::renderMode) & int((int((int)1) << int(::com::haxepunk::RenderMode_obj::BUFFER->__Index()))))) != (int)0)) && bool((this->width > (int)0)))) && bool((this->height > (int)0))))){
			HX_STACK_LINE(48)
			::flash::display::BitmapData source = ::com::haxepunk::HXP_obj::createBitmap(this->width,this->height,true,(int((int)-16777216) | int(this->color)));		HX_STACK_VAR(source,"source");
			HX_STACK_LINE(49)
			this->image = ::com::haxepunk::graphics::Image_obj::__new(source,null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Rect_obj,createImage,(void))

Void Rect_obj::render( ::flash::display::BitmapData target,::flash::geom::Point point,::flash::geom::Point camera){
{
		HX_STACK_FRAME("Rect","render","Rect.render","com/haxepunk/graphics/prototype/Rect.hx",27)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(27)
		if (((((int(::com::haxepunk::HXP_obj::renderMode) & int((int((int)1) << int(::com::haxepunk::RenderMode_obj::BUFFER->__Index()))))) != (int)0))){
			HX_STACK_LINE(29)
			this->_point->x = (point->x + this->x);
			HX_STACK_LINE(30)
			this->_point->y = (point->y + this->y);
			HX_STACK_LINE(31)
			this->image->render(target,this->_point,camera);
		}
		else{
			HX_STACK_LINE(33)
			if (((bool((this->_entity != null())) && bool((this->_entity->_scene != null()))))){
				HX_STACK_LINE(35)
				this->_point->x = ((point->x + this->x) - (camera->x * this->scrollX));
				HX_STACK_LINE(36)
				this->_point->y = ((point->y + this->y) - (camera->y * this->scrollY));
				HX_STACK_LINE(38)
				::flash::display::Graphics gfx = this->_entity->_scene->getSpriteByLayer(this->layer)->get_graphics();		HX_STACK_VAR(gfx,"gfx");
				HX_STACK_LINE(39)
				gfx->beginFill(this->color,null());
				HX_STACK_LINE(40)
				gfx->drawRect(this->_point->x,this->_point->y,this->width,this->height);
			}
		}
	}
return null();
}



Rect_obj::Rect_obj()
{
}

void Rect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Rect);
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(color,"color");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Rect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(color,"color");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Rect_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createImage") ) { return createImage_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Rect_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::com::haxepunk::graphics::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp) return set_width(inValue);width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp) return set_color(inValue);color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp) return set_height(inValue);height=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Rect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("image"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("color"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("image"),
	HX_CSTRING("set_color"),
	HX_CSTRING("set_width"),
	HX_CSTRING("set_height"),
	HX_CSTRING("createImage"),
	HX_CSTRING("render"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("color"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rect_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rect_obj::__mClass,"__mClass");
};

#endif

Class Rect_obj::__mClass;

void Rect_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.prototype.Rect"), hx::TCanCast< Rect_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void Rect_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
} // end namespace prototype
