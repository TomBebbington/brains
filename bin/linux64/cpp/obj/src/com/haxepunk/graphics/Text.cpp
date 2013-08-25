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
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
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
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Text
#include <com/haxepunk/graphics/Text.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasData
#include <com/haxepunk/graphics/atlas/AtlasData.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasRegion
#include <com/haxepunk/graphics/atlas/AtlasRegion.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
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
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_flash_text_TextFormatAlign
#include <flash/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{

Void Text_obj::__construct(::String text,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic options)
{
HX_STACK_FRAME("Text","new","Text.new","com/haxepunk/graphics/Text.hx",55)

HX_STACK_ARG(text,"text")

HX_STACK_ARG(__o_x,"x")

HX_STACK_ARG(__o_y,"y")

HX_STACK_ARG(__o_width,"width")

HX_STACK_ARG(__o_height,"height")

HX_STACK_ARG(options,"options")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
int width = __o_width.Default(0);
int height = __o_height.Default(0);
{
	HX_STACK_LINE(56)
	if (((options == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/graphics/Text.hx",58)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(58)
		options = _Function_2_1::Block();
		HX_STACK_LINE(59)
		options->__FieldRef(HX_CSTRING("color")) = (int)16777215;
	}
	HX_STACK_LINE(62)
	if (((options->__Field(HX_CSTRING("font"),true) == null()))){
		HX_STACK_LINE(62)
		options->__FieldRef(HX_CSTRING("font")) = ::com::haxepunk::HXP_obj::defaultFont;
	}
	HX_STACK_LINE(63)
	if (((options->__Field(HX_CSTRING("size"),true) == (int)0))){
		HX_STACK_LINE(63)
		options->__FieldRef(HX_CSTRING("size")) = (int)16;
	}
	HX_STACK_LINE(64)
	if (((options->__Field(HX_CSTRING("align"),true) == null()))){
		HX_STACK_LINE(64)
		options->__FieldRef(HX_CSTRING("align")) = ::flash::text::TextFormatAlign_obj::LEFT;
	}
	HX_STACK_LINE(66)
	::flash::text::Font fontObj = ::openfl::Assets_obj::getFont(options->__Field(HX_CSTRING("font"),true));		HX_STACK_VAR(fontObj,"fontObj");
	HX_STACK_LINE(67)
	this->_format = ::flash::text::TextFormat_obj::__new(fontObj->fontName,options->__Field(HX_CSTRING("size"),true),options->__Field(HX_CSTRING("color"),true),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(68)
	this->_format->align = options->__Field(HX_CSTRING("align"),true);
	HX_STACK_LINE(69)
	this->_format->leading = options->__Field(HX_CSTRING("leading"),true);
	HX_STACK_LINE(71)
	this->_field = ::flash::text::TextField_obj::__new();
	HX_STACK_LINE(75)
	this->_field->set_wordWrap(options->__Field(HX_CSTRING("wordWrap"),true));
	HX_STACK_LINE(76)
	this->_field->set_defaultTextFormat(this->_format);
	HX_STACK_LINE(77)
	this->_field->set_text(text);
	HX_STACK_LINE(78)
	this->_field->set_selectable(false);
	HX_STACK_LINE(80)
	this->resizable = options->__Field(HX_CSTRING("resizable"),true);
	HX_STACK_LINE(82)
	if (((width == (int)0))){
		HX_STACK_LINE(82)
		width = ::Std_obj::_int((this->_field->get_textWidth() + (int)4));
	}
	HX_STACK_LINE(83)
	if (((height == (int)0))){
		HX_STACK_LINE(83)
		height = ::Std_obj::_int((this->_field->get_textHeight() + (int)4));
	}
	HX_STACK_LINE(85)
	Dynamic source;		HX_STACK_VAR(source,"source");
	HX_STACK_LINE(86)
	if (((((int(::com::haxepunk::HXP_obj::renderMode) & int((int((int)1) << int(::com::haxepunk::RenderMode_obj::HARDWARE->__Index()))))) != (int)0))){
		HX_STACK_LINE(88)
		::com::haxepunk::HXP_obj::rect->x = ::com::haxepunk::HXP_obj::rect->y = (int)0;
		HX_STACK_LINE(89)
		::com::haxepunk::HXP_obj::rect->width = this->_field->get_width();
		HX_STACK_LINE(90)
		::com::haxepunk::HXP_obj::rect->height = this->_field->get_height();
		HX_STACK_LINE(91)
		source = ::com::haxepunk::graphics::atlas::AtlasRegion_obj::__new(null(),(int)0,::com::haxepunk::HXP_obj::rect);
		HX_STACK_LINE(92)
		this->_blit = false;
	}
	else{
		HX_STACK_LINE(96)
		source = ::com::haxepunk::HXP_obj::createBitmap(width,height,true,null());
		HX_STACK_LINE(97)
		this->_blit = true;
	}
	HX_STACK_LINE(99)
	super::__construct(source,null(),null());
	HX_STACK_LINE(101)
	this->set_text(text);
	HX_STACK_LINE(102)
	this->x = x;
	HX_STACK_LINE(103)
	this->y = y;
}
;
	return null();
}

Text_obj::~Text_obj() { }

Dynamic Text_obj::__CreateEmpty() { return  new Text_obj; }
hx::ObjectPtr< Text_obj > Text_obj::__new(::String text,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic options)
{  hx::ObjectPtr< Text_obj > result = new Text_obj();
	result->__construct(text,__o_x,__o_y,__o_width,__o_height,options);
	return result;}

Dynamic Text_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Text_obj > result = new Text_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void Text_obj::findParentSprite( ){
{
		HX_STACK_FRAME("Text","findParentSprite","Text.findParentSprite","com/haxepunk/graphics/Text.hx",259)
		HX_STACK_THIS(this)
		HX_STACK_LINE(260)
		if (((bool((this->_entity == null())) || bool((this->_entity->_scene == null()))))){
			HX_STACK_LINE(260)
			return null();
		}
		HX_STACK_LINE(261)
		if (((this->_parent != null()))){
			HX_STACK_LINE(261)
			this->_parent->removeChild(this->_field);
		}
		HX_STACK_LINE(262)
		this->_parent = this->_entity->_scene->getSpriteByLayer(this->layer);
		HX_STACK_LINE(263)
		this->_parent->addChild(this->_field);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,findParentSprite,(void))

int Text_obj::set_size( int value){
	HX_STACK_FRAME("Text","set_size","Text.set_size","com/haxepunk/graphics/Text.hx",251)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(252)
	if (((this->size == value))){
		HX_STACK_LINE(252)
		return value;
	}
	HX_STACK_LINE(253)
	this->_format->size = this->size = value;
	HX_STACK_LINE(254)
	this->updateBuffer(null());
	HX_STACK_LINE(255)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_size,return )

int Text_obj::get_height( ){
	HX_STACK_FRAME("Text","get_height","Text.get_height","com/haxepunk/graphics/Text.hx",243)
	HX_STACK_THIS(this)
	HX_STACK_LINE(243)
	if ((this->_blit)){
		HX_STACK_LINE(243)
		return this->super::get_height();
	}
	else{
		HX_STACK_LINE(243)
		return ::Std_obj::_int((Float(this->_field->get_height()) / Float(::com::haxepunk::HXP_obj::screen->fullScaleY)));
	}
	HX_STACK_LINE(243)
	return (int)0;
}


int Text_obj::get_width( ){
	HX_STACK_FRAME("Text","get_width","Text.get_width","com/haxepunk/graphics/Text.hx",235)
	HX_STACK_THIS(this)
	HX_STACK_LINE(235)
	if ((this->_blit)){
		HX_STACK_LINE(235)
		return this->super::get_width();
	}
	else{
		HX_STACK_LINE(235)
		return ::Std_obj::_int((Float(this->_field->get_width()) / Float(::com::haxepunk::HXP_obj::screen->fullScaleX)));
	}
	HX_STACK_LINE(235)
	return (int)0;
}


int Text_obj::set_color( int value){
	HX_STACK_FRAME("Text","set_color","Text.set_color","com/haxepunk/graphics/Text.hx",218)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(218)
	if ((this->_blit)){
		HX_STACK_LINE(220)
		return this->super::set_color(value);
	}
	else{
		HX_STACK_LINE(224)
		this->_format->color = value;
		HX_STACK_LINE(225)
		this->updateBuffer(null());
		HX_STACK_LINE(226)
		return value;
	}
	HX_STACK_LINE(218)
	return (int)0;
}


::String Text_obj::set_font( ::String value){
	HX_STACK_FRAME("Text","set_font","Text.set_font","com/haxepunk/graphics/Text.hx",205)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(206)
	if (((this->font == value))){
		HX_STACK_LINE(206)
		return value;
	}
	HX_STACK_LINE(207)
	value = ::openfl::Assets_obj::getFont(value)->fontName;
	HX_STACK_LINE(208)
	this->_format->font = this->font = value;
	HX_STACK_LINE(209)
	this->updateBuffer(null());
	HX_STACK_LINE(210)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_font,return )

::String Text_obj::set_text( ::String value){
	HX_STACK_FRAME("Text","set_text","Text.set_text","com/haxepunk/graphics/Text.hx",193)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(194)
	if (((this->text == value))){
		HX_STACK_LINE(194)
		return value;
	}
	HX_STACK_LINE(195)
	this->_field->set_text(this->text = value);
	HX_STACK_LINE(196)
	this->updateBuffer(null());
	HX_STACK_LINE(197)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_text,return )

int Text_obj::set_layer( int value){
	HX_STACK_FRAME("Text","set_layer","Text.set_layer","com/haxepunk/graphics/Text.hx",176)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(180)
	if (((value == this->layer))){
		HX_STACK_LINE(180)
		return value;
	}
	HX_STACK_LINE(181)
	if (((this->_blit == false))){
		HX_STACK_LINE(183)
		this->findParentSprite();
	}
	HX_STACK_LINE(185)
	return this->super::set_layer(value);
}


Void Text_obj::destroy( ){
{
		HX_STACK_FRAME("Text","destroy","Text.destroy","com/haxepunk/graphics/Text.hx",165)
		HX_STACK_THIS(this)
		HX_STACK_LINE(165)
		if (((this->_parent != null()))){
			HX_STACK_LINE(167)
			this->_parent->removeChild(this->_field);
			HX_STACK_LINE(168)
			this->_parent = null();
		}
	}
return null();
}


Void Text_obj::render( ::flash::display::BitmapData target,::flash::geom::Point point,::flash::geom::Point camera){
{
		HX_STACK_FRAME("Text","render","Text.render","com/haxepunk/graphics/Text.hx",151)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(151)
		if ((this->_blit)){
			HX_STACK_LINE(153)
			this->super::render(target,point,camera);
		}
		else{
			HX_STACK_LINE(157)
			if (((this->_parent == null()))){
				HX_STACK_LINE(157)
				this->findParentSprite();
			}
			HX_STACK_LINE(158)
			this->_field->set_x((((((point->x + this->x) - this->originX) - (camera->x * this->scrollX))) * ::com::haxepunk::HXP_obj::screen->fullScaleX));
			HX_STACK_LINE(159)
			this->_field->set_y((((((point->y + this->y) - this->originY) - (camera->y * this->scrollY))) * ::com::haxepunk::HXP_obj::screen->fullScaleY));
		}
	}
return null();
}


Void Text_obj::updateBuffer( hx::Null< bool >  __o_clearBefore){
bool clearBefore = __o_clearBefore.Default(false);
	HX_STACK_FRAME("Text","updateBuffer","Text.updateBuffer","com/haxepunk/graphics/Text.hx",108)
	HX_STACK_THIS(this)
	HX_STACK_ARG(clearBefore,"clearBefore")
{
		HX_STACK_LINE(109)
		this->_field->setTextFormat(this->_format,null(),null());
		HX_STACK_LINE(111)
		if ((this->_blit)){
			HX_STACK_LINE(111)
			this->_field->set_width(this->_bufferRect->width);
		}
		HX_STACK_LINE(112)
		this->_field->set_width(this->textWidth = ::Math_obj::ceil((this->_field->get_textWidth() + (int)4)));
		HX_STACK_LINE(113)
		this->_field->set_height(this->textHeight = ::Math_obj::ceil((this->_field->get_textHeight() + (int)4)));
		HX_STACK_LINE(115)
		if ((this->_blit)){
			HX_STACK_LINE(117)
			if ((this->resizable)){
				HX_STACK_LINE(119)
				this->_bufferRect->width = this->textWidth;
				HX_STACK_LINE(120)
				this->_bufferRect->height = this->textHeight;
			}
			HX_STACK_LINE(123)
			if (((bool((this->textWidth > this->_source->get_width())) || bool((this->textHeight > this->_source->get_height()))))){
				HX_STACK_LINE(125)
				this->_source = ::com::haxepunk::HXP_obj::createBitmap(::Std_obj::_int(::Math_obj::max(this->textWidth,this->_source->get_width())),::Std_obj::_int(::Math_obj::max(this->textHeight,this->_source->get_height())),true,null());
				HX_STACK_LINE(130)
				this->_sourceRect = this->_source->get_rect();
				HX_STACK_LINE(131)
				this->createBuffer();
			}
			else{
				HX_STACK_LINE(135)
				this->_source->fillRect(this->_sourceRect,(int)0);
			}
			HX_STACK_LINE(138)
			if ((this->resizable)){
				HX_STACK_LINE(140)
				this->_field->set_width(this->textWidth);
				HX_STACK_LINE(141)
				this->_field->set_height(this->textHeight);
			}
			HX_STACK_LINE(144)
			this->_source->draw(this->_field,null(),null(),null(),null(),null());
			HX_STACK_LINE(145)
			this->super::updateBuffer(clearBefore);
		}
	}
return null();
}



Text_obj::Text_obj()
{
}

void Text_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Text);
	HX_MARK_MEMBER_NAME(_parent,"_parent");
	HX_MARK_MEMBER_NAME(_format,"_format");
	HX_MARK_MEMBER_NAME(_field,"_field");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	HX_MARK_MEMBER_NAME(resizable,"resizable");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Text_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_parent,"_parent");
	HX_VISIT_MEMBER_NAME(_format,"_format");
	HX_VISIT_MEMBER_NAME(_field,"_field");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	HX_VISIT_MEMBER_NAME(resizable,"resizable");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Text_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_field") ) { return _field; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { return _parent; }
		if (HX_FIELD_EQ(inName,"_format") ) { return _format; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_layer") ) { return set_layer_dyn(); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return textWidth; }
		if (HX_FIELD_EQ(inName,"resizable") ) { return resizable; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"textHeight") ) { return textHeight; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateBuffer") ) { return updateBuffer_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"findParentSprite") ) { return findParentSprite_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Text_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp) return set_size(inValue);size=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp) return set_font(inValue);font=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp) return set_text(inValue);text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_field") ) { _field=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { _parent=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_format") ) { _format=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resizable") ) { resizable=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Text_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_parent"));
	outFields->push(HX_CSTRING("_format"));
	outFields->push(HX_CSTRING("_field"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("font"));
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("textHeight"));
	outFields->push(HX_CSTRING("textWidth"));
	outFields->push(HX_CSTRING("resizable"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_parent"),
	HX_CSTRING("_format"),
	HX_CSTRING("_field"),
	HX_CSTRING("findParentSprite"),
	HX_CSTRING("set_size"),
	HX_CSTRING("size"),
	HX_CSTRING("get_height"),
	HX_CSTRING("get_width"),
	HX_CSTRING("set_color"),
	HX_CSTRING("set_font"),
	HX_CSTRING("font"),
	HX_CSTRING("set_text"),
	HX_CSTRING("text"),
	HX_CSTRING("set_layer"),
	HX_CSTRING("destroy"),
	HX_CSTRING("render"),
	HX_CSTRING("updateBuffer"),
	HX_CSTRING("textHeight"),
	HX_CSTRING("textWidth"),
	HX_CSTRING("resizable"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Text_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Text_obj::__mClass,"__mClass");
};

#endif

Class Text_obj::__mClass;

void Text_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.Text"), hx::TCanCast< Text_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void Text_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
