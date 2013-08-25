#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_Atlas
#include <com/haxepunk/graphics/atlas/Atlas.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasData
#include <com/haxepunk/graphics/atlas/AtlasData.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasRegion
#include <com/haxepunk/graphics/atlas/AtlasRegion.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_Layer
#include <com/haxepunk/graphics/atlas/Layer.h>
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
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{
namespace atlas{

Void AtlasRegion_obj::__construct(::com::haxepunk::graphics::atlas::AtlasData parent,int tileIndex,::flash::geom::Rectangle rect)
{
HX_STACK_FRAME("AtlasRegion","new","AtlasRegion.new","com/haxepunk/graphics/atlas/AtlasRegion.hx",34)

HX_STACK_ARG(parent,"parent")

HX_STACK_ARG(tileIndex,"tileIndex")

HX_STACK_ARG(rect,"rect")
{
	HX_STACK_LINE(35)
	this->parent = parent;
	HX_STACK_LINE(36)
	this->tileIndex = tileIndex;
	HX_STACK_LINE(37)
	this->rect = rect->clone();
	HX_STACK_LINE(38)
	this->rotated = false;
}
;
	return null();
}

AtlasRegion_obj::~AtlasRegion_obj() { }

Dynamic AtlasRegion_obj::__CreateEmpty() { return  new AtlasRegion_obj; }
hx::ObjectPtr< AtlasRegion_obj > AtlasRegion_obj::__new(::com::haxepunk::graphics::atlas::AtlasData parent,int tileIndex,::flash::geom::Rectangle rect)
{  hx::ObjectPtr< AtlasRegion_obj > result = new AtlasRegion_obj();
	result->__construct(parent,tileIndex,rect);
	return result;}

Dynamic AtlasRegion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AtlasRegion_obj > result = new AtlasRegion_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Float AtlasRegion_obj::get_height( ){
	HX_STACK_FRAME("AtlasRegion","get_height","AtlasRegion.get_height","com/haxepunk/graphics/atlas/AtlasRegion.hx",125)
	HX_STACK_THIS(this)
	HX_STACK_LINE(125)
	return this->rect->height;
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasRegion_obj,get_height,return )

Float AtlasRegion_obj::get_width( ){
	HX_STACK_FRAME("AtlasRegion","get_width","AtlasRegion.get_width","com/haxepunk/graphics/atlas/AtlasRegion.hx",124)
	HX_STACK_THIS(this)
	HX_STACK_LINE(124)
	return this->rect->width;
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasRegion_obj,get_width,return )

::String AtlasRegion_obj::toString( ){
	HX_STACK_FRAME("AtlasRegion","toString","AtlasRegion.toString","com/haxepunk/graphics/atlas/AtlasRegion.hx",121)
	HX_STACK_THIS(this)
	HX_STACK_LINE(121)
	return ((((((HX_CSTRING("[AtlasRegion ") + this->rect->width) + HX_CSTRING(", ")) + this->rect->height) + HX_CSTRING(" ")) + this->tileIndex) + HX_CSTRING("]"));
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasRegion_obj,toString,return )

Void AtlasRegion_obj::drawMatrix( Float tx,Float ty,Float a,Float b,Float c,Float d,int layer,hx::Null< Float >  __o_red,hx::Null< Float >  __o_green,hx::Null< Float >  __o_blue,hx::Null< Float >  __o_alpha){
Float red = __o_red.Default(1);
Float green = __o_green.Default(1);
Float blue = __o_blue.Default(1);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("AtlasRegion","drawMatrix","AtlasRegion.drawMatrix","com/haxepunk/graphics/atlas/AtlasRegion.hx",102)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tx,"tx")
	HX_STACK_ARG(ty,"ty")
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(layer,"layer")
	HX_STACK_ARG(red,"red")
	HX_STACK_ARG(green,"green")
	HX_STACK_ARG(blue,"blue")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(102)
		if ((this->rotated)){
			HX_STACK_LINE(104)
			::flash::geom::Matrix matrix = ::flash::geom::Matrix_obj::__new(a,b,c,d,tx,ty);		HX_STACK_VAR(matrix,"matrix");
			HX_STACK_LINE(105)
			matrix->rotate(((int)90 * ((Float(::Math_obj::PI) / Float((int)-180)))));
			HX_STACK_LINE(106)
			{
				HX_STACK_LINE(106)
				::com::haxepunk::graphics::atlas::AtlasData _this = this->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(106)
				if (((_this->_layerIndex != layer))){
					HX_STACK_LINE(106)
					if ((_this->_layers->exists(layer))){
						HX_STACK_LINE(106)
						_this->_layer = _this->_layers->get(layer);
					}
					else{
						HX_STACK_LINE(106)
						_this->_layer = ::com::haxepunk::graphics::atlas::Layer_obj::__new();
						HX_STACK_LINE(106)
						_this->_layers->set(layer,_this->_layer);
					}
					HX_STACK_LINE(106)
					_this->_layerIndex = layer;
				}
				HX_STACK_LINE(106)
				Array< Float > data = _this->_layer->data;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(106)
				_this->_layer->dirty = true;
				HX_STACK_LINE(106)
				data[(_this->_layer->index)++] = matrix->tx;
				HX_STACK_LINE(106)
				data[(_this->_layer->index)++] = matrix->ty;
				HX_STACK_LINE(106)
				data[(_this->_layer->index)++] = this->tileIndex;
				HX_STACK_LINE(106)
				data[(_this->_layer->index)++] = matrix->a;
				HX_STACK_LINE(106)
				data[(_this->_layer->index)++] = matrix->b;
				HX_STACK_LINE(106)
				data[(_this->_layer->index)++] = matrix->c;
				HX_STACK_LINE(106)
				data[(_this->_layer->index)++] = matrix->d;
				HX_STACK_LINE(106)
				data[(_this->_layer->index)++] = red;
				HX_STACK_LINE(106)
				data[(_this->_layer->index)++] = green;
				HX_STACK_LINE(106)
				data[(_this->_layer->index)++] = blue;
				HX_STACK_LINE(106)
				data[(_this->_layer->index)++] = alpha;
				HX_STACK_LINE(106)
				if (((_this->_layer->index > ::com::haxepunk::graphics::atlas::Atlas_obj::drawCallThreshold))){
					HX_STACK_LINE(106)
					::com::haxepunk::graphics::atlas::Layer layer1 = _this->_layer;		HX_STACK_VAR(layer1,"layer1");
					HX_STACK_LINE(106)
					{
						HX_STACK_LINE(106)
						if (((layer1->index < layer1->data->length))){
							HX_STACK_LINE(106)
							layer1->data->splice(layer1->index,(layer1->data->length - layer1->index));
						}
						HX_STACK_LINE(106)
						layer1->index = (int)0;
						HX_STACK_LINE(106)
						layer1->dirty = false;
					}
					HX_STACK_LINE(106)
					_this->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->getSpriteByLayer(layer)->get_graphics(),layer1->data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,_this->_renderFlags);
				}
			}
		}
		else{
			HX_STACK_LINE(112)
			::com::haxepunk::graphics::atlas::AtlasData _this = this->parent;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(112)
			if (((_this->_layerIndex != layer))){
				HX_STACK_LINE(112)
				if ((_this->_layers->exists(layer))){
					HX_STACK_LINE(112)
					_this->_layer = _this->_layers->get(layer);
				}
				else{
					HX_STACK_LINE(112)
					_this->_layer = ::com::haxepunk::graphics::atlas::Layer_obj::__new();
					HX_STACK_LINE(112)
					_this->_layers->set(layer,_this->_layer);
				}
				HX_STACK_LINE(112)
				_this->_layerIndex = layer;
			}
			HX_STACK_LINE(112)
			Array< Float > data = _this->_layer->data;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(112)
			_this->_layer->dirty = true;
			HX_STACK_LINE(112)
			data[(_this->_layer->index)++] = tx;
			HX_STACK_LINE(112)
			data[(_this->_layer->index)++] = ty;
			HX_STACK_LINE(112)
			data[(_this->_layer->index)++] = this->tileIndex;
			HX_STACK_LINE(112)
			data[(_this->_layer->index)++] = a;
			HX_STACK_LINE(112)
			data[(_this->_layer->index)++] = b;
			HX_STACK_LINE(112)
			data[(_this->_layer->index)++] = c;
			HX_STACK_LINE(112)
			data[(_this->_layer->index)++] = d;
			HX_STACK_LINE(112)
			data[(_this->_layer->index)++] = red;
			HX_STACK_LINE(112)
			data[(_this->_layer->index)++] = green;
			HX_STACK_LINE(112)
			data[(_this->_layer->index)++] = blue;
			HX_STACK_LINE(112)
			data[(_this->_layer->index)++] = alpha;
			HX_STACK_LINE(112)
			if (((_this->_layer->index > ::com::haxepunk::graphics::atlas::Atlas_obj::drawCallThreshold))){
				HX_STACK_LINE(112)
				::com::haxepunk::graphics::atlas::Layer layer1 = _this->_layer;		HX_STACK_VAR(layer1,"layer1");
				HX_STACK_LINE(112)
				{
					HX_STACK_LINE(112)
					if (((layer1->index < layer1->data->length))){
						HX_STACK_LINE(112)
						layer1->data->splice(layer1->index,(layer1->data->length - layer1->index));
					}
					HX_STACK_LINE(112)
					layer1->index = (int)0;
					HX_STACK_LINE(112)
					layer1->dirty = false;
				}
				HX_STACK_LINE(112)
				_this->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->getSpriteByLayer(layer)->get_graphics(),layer1->data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,_this->_renderFlags);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC11(AtlasRegion_obj,drawMatrix,(void))

Void AtlasRegion_obj::draw( Float x,Float y,int layer,hx::Null< Float >  __o_scaleX,hx::Null< Float >  __o_scaleY,hx::Null< Float >  __o_angle,hx::Null< Float >  __o_red,hx::Null< Float >  __o_green,hx::Null< Float >  __o_blue,hx::Null< Float >  __o_alpha){
Float scaleX = __o_scaleX.Default(1);
Float scaleY = __o_scaleY.Default(1);
Float angle = __o_angle.Default(0);
Float red = __o_red.Default(1);
Float green = __o_green.Default(1);
Float blue = __o_blue.Default(1);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("AtlasRegion","draw","AtlasRegion.draw","com/haxepunk/graphics/atlas/AtlasRegion.hx",80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(layer,"layer")
	HX_STACK_ARG(scaleX,"scaleX")
	HX_STACK_ARG(scaleY,"scaleY")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(red,"red")
	HX_STACK_ARG(green,"green")
	HX_STACK_ARG(blue,"blue")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(81)
		if ((this->rotated)){
			HX_STACK_LINE(81)
			angle = (angle + (int)90);
		}
		HX_STACK_LINE(82)
		{
			HX_STACK_LINE(82)
			::com::haxepunk::graphics::atlas::AtlasData _this = this->parent;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(82)
			if (((_this->_layerIndex != layer))){
				HX_STACK_LINE(82)
				if ((_this->_layers->exists(layer))){
					HX_STACK_LINE(82)
					_this->_layer = _this->_layers->get(layer);
				}
				else{
					HX_STACK_LINE(82)
					_this->_layer = ::com::haxepunk::graphics::atlas::Layer_obj::__new();
					HX_STACK_LINE(82)
					_this->_layers->set(layer,_this->_layer);
				}
				HX_STACK_LINE(82)
				_this->_layerIndex = layer;
			}
			HX_STACK_LINE(82)
			Array< Float > d = _this->_layer->data;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(82)
			_this->_layer->dirty = true;
			HX_STACK_LINE(82)
			d[(_this->_layer->index)++] = x;
			HX_STACK_LINE(82)
			d[(_this->_layer->index)++] = y;
			HX_STACK_LINE(82)
			d[(_this->_layer->index)++] = this->tileIndex;
			HX_STACK_LINE(82)
			if (((angle == (int)0))){
				HX_STACK_LINE(82)
				d[(_this->_layer->index)++] = scaleX;
				HX_STACK_LINE(82)
				d[(_this->_layer->index)++] = (int)0;
				HX_STACK_LINE(82)
				d[(_this->_layer->index)++] = (int)0;
				HX_STACK_LINE(82)
				d[(_this->_layer->index)++] = scaleY;
			}
			else{
				HX_STACK_LINE(82)
				Float cos = ::Math_obj::cos((-(angle) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(cos,"cos");
				HX_STACK_LINE(82)
				Float sin = ::Math_obj::sin((-(angle) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(sin,"sin");
				HX_STACK_LINE(82)
				d[(_this->_layer->index)++] = (cos * scaleX);
				HX_STACK_LINE(82)
				d[(_this->_layer->index)++] = (-(sin) * scaleY);
				HX_STACK_LINE(82)
				d[(_this->_layer->index)++] = (sin * scaleX);
				HX_STACK_LINE(82)
				d[(_this->_layer->index)++] = (cos * scaleY);
			}
			HX_STACK_LINE(82)
			d[(_this->_layer->index)++] = red;
			HX_STACK_LINE(82)
			d[(_this->_layer->index)++] = green;
			HX_STACK_LINE(82)
			d[(_this->_layer->index)++] = blue;
			HX_STACK_LINE(82)
			d[(_this->_layer->index)++] = alpha;
			HX_STACK_LINE(82)
			if (((_this->_layer->index > ::com::haxepunk::graphics::atlas::Atlas_obj::drawCallThreshold))){
				HX_STACK_LINE(82)
				::com::haxepunk::graphics::atlas::Layer layer1 = _this->_layer;		HX_STACK_VAR(layer1,"layer1");
				HX_STACK_LINE(82)
				{
					HX_STACK_LINE(82)
					if (((layer1->index < layer1->data->length))){
						HX_STACK_LINE(82)
						layer1->data->splice(layer1->index,(layer1->data->length - layer1->index));
					}
					HX_STACK_LINE(82)
					layer1->index = (int)0;
					HX_STACK_LINE(82)
					layer1->dirty = false;
				}
				HX_STACK_LINE(82)
				_this->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->getSpriteByLayer(layer)->get_graphics(),layer1->data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,_this->_renderFlags);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC10(AtlasRegion_obj,draw,(void))

::com::haxepunk::graphics::atlas::AtlasRegion AtlasRegion_obj::clip( ::flash::geom::Rectangle clipRect,::flash::geom::Point center){
	HX_STACK_FRAME("AtlasRegion","clip","AtlasRegion.clip","com/haxepunk/graphics/atlas/AtlasRegion.hx",48)
	HX_STACK_THIS(this)
	HX_STACK_ARG(clipRect,"clipRect")
	HX_STACK_ARG(center,"center")
	HX_STACK_LINE(50)
	if ((((clipRect->x + clipRect->width) > this->rect->width))){
		HX_STACK_LINE(51)
		clipRect->width = (this->rect->width - clipRect->x);
	}
	HX_STACK_LINE(52)
	if ((((clipRect->y + clipRect->height) > this->rect->height))){
		HX_STACK_LINE(53)
		clipRect->height = (this->rect->height - clipRect->y);
	}
	HX_STACK_LINE(56)
	if (((clipRect->width < (int)0))){
		HX_STACK_LINE(56)
		clipRect->width = (int)0;
	}
	HX_STACK_LINE(57)
	if (((clipRect->height < (int)0))){
		HX_STACK_LINE(57)
		clipRect->height = (int)0;
	}
	HX_STACK_LINE(60)
	hx::AddEq(clipRect->x,this->rect->x);
	HX_STACK_LINE(61)
	hx::AddEq(clipRect->y,this->rect->y);
	HX_STACK_LINE(62)
	::com::haxepunk::graphics::atlas::AtlasData _this = this->parent;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(62)
	_this->_tilesheet->addTileRect(clipRect,center);
	HX_STACK_LINE(62)
	::com::haxepunk::graphics::atlas::AtlasRegion region = ::com::haxepunk::graphics::atlas::AtlasRegion_obj::__new(_this,_this->_tileIndex,clipRect);		HX_STACK_VAR(region,"region");
	HX_STACK_LINE(62)
	hx::AddEq(_this->_tileIndex,(int)1);
	HX_STACK_LINE(62)
	return region;
}


HX_DEFINE_DYNAMIC_FUNC2(AtlasRegion_obj,clip,return )


AtlasRegion_obj::AtlasRegion_obj()
{
}

void AtlasRegion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AtlasRegion);
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(center,"center");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(tileIndex,"tileIndex");
	HX_MARK_MEMBER_NAME(rotated,"rotated");
	HX_MARK_END_CLASS();
}

void AtlasRegion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(center,"center");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(tileIndex,"tileIndex");
	HX_VISIT_MEMBER_NAME(rotated,"rotated");
}

Dynamic AtlasRegion_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"clip") ) { return clip_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return get_width(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"center") ) { return center; }
		if (HX_FIELD_EQ(inName,"height") ) { return get_height(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rotated") ) { return rotated; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"tileIndex") ) { return tileIndex; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"drawMatrix") ) { return drawMatrix_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AtlasRegion_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::com::haxepunk::graphics::atlas::AtlasData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"center") ) { center=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rotated") ) { rotated=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileIndex") ) { tileIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AtlasRegion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("center"));
	outFields->push(HX_CSTRING("rect"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("tileIndex"));
	outFields->push(HX_CSTRING("rotated"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("parent"),
	HX_CSTRING("center"),
	HX_CSTRING("rect"),
	HX_CSTRING("get_height"),
	HX_CSTRING("get_width"),
	HX_CSTRING("toString"),
	HX_CSTRING("drawMatrix"),
	HX_CSTRING("draw"),
	HX_CSTRING("clip"),
	HX_CSTRING("tileIndex"),
	HX_CSTRING("rotated"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AtlasRegion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AtlasRegion_obj::__mClass,"__mClass");
};

#endif

Class AtlasRegion_obj::__mClass;

void AtlasRegion_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.atlas.AtlasRegion"), hx::TCanCast< AtlasRegion_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void AtlasRegion_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
} // end namespace atlas
