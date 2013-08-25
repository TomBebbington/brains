#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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

Void AtlasData_obj::__construct(::flash::display::BitmapData bd)
{
HX_STACK_FRAME("AtlasData","new","AtlasData.new","com/haxepunk/graphics/atlas/AtlasData.hx",78)

HX_STACK_ARG(bd,"bd")
{
	HX_STACK_LINE(80)
	this->_layers = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(85)
	this->_tilesheet = ::openfl::display::Tilesheet_obj::__new(bd);
	HX_STACK_LINE(86)
	this->_renderFlags = (int)28;
	HX_STACK_LINE(88)
	this->width = bd->get_width();
	HX_STACK_LINE(89)
	this->height = bd->get_height();
	HX_STACK_LINE(91)
	this->_tileIndex = (int)0;
	HX_STACK_LINE(92)
	this->_refCount = (int)1;
	HX_STACK_LINE(93)
	this->_layerIndex = (int)-1;
	HX_STACK_LINE(94)
	::com::haxepunk::graphics::atlas::AtlasData_obj::_atlases->push(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

AtlasData_obj::~AtlasData_obj() { }

Dynamic AtlasData_obj::__CreateEmpty() { return  new AtlasData_obj; }
hx::ObjectPtr< AtlasData_obj > AtlasData_obj::__new(::flash::display::BitmapData bd)
{  hx::ObjectPtr< AtlasData_obj > result = new AtlasData_obj();
	result->__construct(bd);
	return result;}

Dynamic AtlasData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AtlasData_obj > result = new AtlasData_obj();
	result->__construct(inArgs[0]);
	return result;}

Void AtlasData_obj::prepareTile( int tile,Float x,Float y,int layer,Float scaleX,Float scaleY,Float angle,Float red,Float green,Float blue,Float alpha){
{
		HX_STACK_FRAME("AtlasData","prepareTile","AtlasData.prepareTile","com/haxepunk/graphics/atlas/AtlasData.hx",258)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tile,"tile")
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
		HX_STACK_LINE(259)
		if (((this->_layerIndex != layer))){
			HX_STACK_LINE(259)
			if ((this->_layers->exists(layer))){
				HX_STACK_LINE(259)
				this->_layer = this->_layers->get(layer);
			}
			else{
				HX_STACK_LINE(259)
				this->_layer = ::com::haxepunk::graphics::atlas::Layer_obj::__new();
				HX_STACK_LINE(259)
				this->_layers->set(layer,this->_layer);
			}
			HX_STACK_LINE(259)
			this->_layerIndex = layer;
		}
		HX_STACK_LINE(260)
		Array< Float > d = this->_layer->data;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(261)
		this->_layer->dirty = true;
		HX_STACK_LINE(263)
		d[(this->_layer->index)++] = x;
		HX_STACK_LINE(264)
		d[(this->_layer->index)++] = y;
		HX_STACK_LINE(265)
		d[(this->_layer->index)++] = tile;
		HX_STACK_LINE(268)
		if (((angle == (int)0))){
			HX_STACK_LINE(271)
			d[(this->_layer->index)++] = scaleX;
			HX_STACK_LINE(272)
			d[(this->_layer->index)++] = (int)0;
			HX_STACK_LINE(273)
			d[(this->_layer->index)++] = (int)0;
			HX_STACK_LINE(274)
			d[(this->_layer->index)++] = scaleY;
		}
		else{
			HX_STACK_LINE(278)
			Float cos = ::Math_obj::cos((-(angle) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(279)
			Float sin = ::Math_obj::sin((-(angle) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(280)
			d[(this->_layer->index)++] = (cos * scaleX);
			HX_STACK_LINE(281)
			d[(this->_layer->index)++] = (-(sin) * scaleY);
			HX_STACK_LINE(282)
			d[(this->_layer->index)++] = (sin * scaleX);
			HX_STACK_LINE(283)
			d[(this->_layer->index)++] = (cos * scaleY);
		}
		HX_STACK_LINE(286)
		d[(this->_layer->index)++] = red;
		HX_STACK_LINE(287)
		d[(this->_layer->index)++] = green;
		HX_STACK_LINE(288)
		d[(this->_layer->index)++] = blue;
		HX_STACK_LINE(289)
		d[(this->_layer->index)++] = alpha;
		HX_STACK_LINE(291)
		if (((this->_layer->index > ::com::haxepunk::graphics::atlas::Atlas_obj::drawCallThreshold))){
			HX_STACK_LINE(293)
			::com::haxepunk::graphics::atlas::Layer layer1 = this->_layer;		HX_STACK_VAR(layer1,"layer1");
			HX_STACK_LINE(293)
			{
				HX_STACK_LINE(293)
				if (((layer1->index < layer1->data->length))){
					HX_STACK_LINE(293)
					layer1->data->splice(layer1->index,(layer1->data->length - layer1->index));
				}
				HX_STACK_LINE(293)
				layer1->index = (int)0;
				HX_STACK_LINE(293)
				layer1->dirty = false;
			}
			HX_STACK_LINE(293)
			this->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->getSpriteByLayer(layer)->get_graphics(),layer1->data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,this->_renderFlags);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC11(AtlasData_obj,prepareTile,(void))

Void AtlasData_obj::prepareTileMatrix( int tile,int layer,Float tx,Float ty,Float a,Float b,Float c,Float d,Float red,Float green,Float blue,Float alpha){
{
		HX_STACK_FRAME("AtlasData","prepareTileMatrix","AtlasData.prepareTileMatrix","com/haxepunk/graphics/atlas/AtlasData.hx",215)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tile,"tile")
		HX_STACK_ARG(layer,"layer")
		HX_STACK_ARG(tx,"tx")
		HX_STACK_ARG(ty,"ty")
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(d,"d")
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(216)
		if (((this->_layerIndex != layer))){
			HX_STACK_LINE(216)
			if ((this->_layers->exists(layer))){
				HX_STACK_LINE(216)
				this->_layer = this->_layers->get(layer);
			}
			else{
				HX_STACK_LINE(216)
				this->_layer = ::com::haxepunk::graphics::atlas::Layer_obj::__new();
				HX_STACK_LINE(216)
				this->_layers->set(layer,this->_layer);
			}
			HX_STACK_LINE(216)
			this->_layerIndex = layer;
		}
		HX_STACK_LINE(217)
		Array< Float > data = this->_layer->data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(218)
		this->_layer->dirty = true;
		HX_STACK_LINE(220)
		data[(this->_layer->index)++] = tx;
		HX_STACK_LINE(221)
		data[(this->_layer->index)++] = ty;
		HX_STACK_LINE(222)
		data[(this->_layer->index)++] = tile;
		HX_STACK_LINE(225)
		data[(this->_layer->index)++] = a;
		HX_STACK_LINE(226)
		data[(this->_layer->index)++] = b;
		HX_STACK_LINE(227)
		data[(this->_layer->index)++] = c;
		HX_STACK_LINE(228)
		data[(this->_layer->index)++] = d;
		HX_STACK_LINE(230)
		data[(this->_layer->index)++] = red;
		HX_STACK_LINE(231)
		data[(this->_layer->index)++] = green;
		HX_STACK_LINE(232)
		data[(this->_layer->index)++] = blue;
		HX_STACK_LINE(233)
		data[(this->_layer->index)++] = alpha;
		HX_STACK_LINE(235)
		if (((this->_layer->index > ::com::haxepunk::graphics::atlas::Atlas_obj::drawCallThreshold))){
			HX_STACK_LINE(237)
			::com::haxepunk::graphics::atlas::Layer layer1 = this->_layer;		HX_STACK_VAR(layer1,"layer1");
			HX_STACK_LINE(237)
			{
				HX_STACK_LINE(237)
				if (((layer1->index < layer1->data->length))){
					HX_STACK_LINE(237)
					layer1->data->splice(layer1->index,(layer1->data->length - layer1->index));
				}
				HX_STACK_LINE(237)
				layer1->index = (int)0;
				HX_STACK_LINE(237)
				layer1->dirty = false;
			}
			HX_STACK_LINE(237)
			this->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->getSpriteByLayer(layer)->get_graphics(),layer1->data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,this->_renderFlags);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC12(AtlasData_obj,prepareTileMatrix,(void))

Void AtlasData_obj::setLayer( int layer){
{
		HX_STACK_FRAME("AtlasData","setLayer","AtlasData.setLayer","com/haxepunk/graphics/atlas/AtlasData.hx",184)
		HX_STACK_THIS(this)
		HX_STACK_ARG(layer,"layer")
		HX_STACK_LINE(185)
		if ((this->_layers->exists(layer))){
			HX_STACK_LINE(187)
			this->_layer = this->_layers->get(layer);
		}
		else{
			HX_STACK_LINE(191)
			this->_layer = ::com::haxepunk::graphics::atlas::Layer_obj::__new();
			HX_STACK_LINE(192)
			this->_layers->set(layer,this->_layer);
		}
		HX_STACK_LINE(194)
		this->_layerIndex = layer;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AtlasData_obj,setLayer,(void))

Void AtlasData_obj::renderLayer( ::com::haxepunk::graphics::atlas::Layer layer,int layerIndex){
{
		HX_STACK_FRAME("AtlasData","renderLayer","AtlasData.renderLayer","com/haxepunk/graphics/atlas/AtlasData.hx",178)
		HX_STACK_THIS(this)
		HX_STACK_ARG(layer,"layer")
		HX_STACK_ARG(layerIndex,"layerIndex")
		HX_STACK_LINE(179)
		{
			HX_STACK_LINE(179)
			if (((layer->index < layer->data->length))){
				HX_STACK_LINE(179)
				layer->data->splice(layer->index,(layer->data->length - layer->index));
			}
			HX_STACK_LINE(179)
			layer->index = (int)0;
			HX_STACK_LINE(179)
			layer->dirty = false;
		}
		HX_STACK_LINE(180)
		this->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->getSpriteByLayer(layerIndex)->get_graphics(),layer->data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,this->_renderFlags);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AtlasData_obj,renderLayer,(void))

::com::haxepunk::graphics::atlas::AtlasRegion AtlasData_obj::createRegion( ::flash::geom::Rectangle rect,::flash::geom::Point center){
	HX_STACK_FRAME("AtlasData","createRegion","AtlasData.createRegion","com/haxepunk/graphics/atlas/AtlasData.hx",170)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(center,"center")
	HX_STACK_LINE(171)
	this->_tilesheet->addTileRect(rect,center);
	HX_STACK_LINE(172)
	::com::haxepunk::graphics::atlas::AtlasRegion region = ::com::haxepunk::graphics::atlas::AtlasRegion_obj::__new(hx::ObjectPtr<OBJ_>(this),this->_tileIndex,rect);		HX_STACK_VAR(region,"region");
	HX_STACK_LINE(173)
	hx::AddEq(this->_tileIndex,(int)1);
	HX_STACK_LINE(174)
	return region;
}


HX_DEFINE_DYNAMIC_FUNC2(AtlasData_obj,createRegion,return )

Void AtlasData_obj::destroy( ){
{
		HX_STACK_FRAME("AtlasData","destroy","AtlasData.destroy","com/haxepunk/graphics/atlas/AtlasData.hx",144)
		HX_STACK_THIS(this)
		HX_STACK_LINE(145)
		hx::SubEq(this->_refCount,(int)1);
		HX_STACK_LINE(146)
		if (((this->_refCount < (int)0))){
			HX_STACK_LINE(148)
			::com::haxepunk::graphics::atlas::AtlasData_obj::_atlases->remove(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,destroy,(void))

Void AtlasData_obj::renderData( ){
{
		HX_STACK_FRAME("AtlasData","renderData","AtlasData.renderData","com/haxepunk/graphics/atlas/AtlasData.hx",126)
		HX_STACK_THIS(this)
		HX_STACK_LINE(127)
		::com::haxepunk::graphics::atlas::Layer l;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(129)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->_layers->keys());  __it->hasNext(); ){
			int layer = __it->next();
			{
				HX_STACK_LINE(131)
				l = this->_layers->get(layer);
				HX_STACK_LINE(133)
				if ((l->dirty)){
					HX_STACK_LINE(135)
					{
						HX_STACK_LINE(135)
						if (((l->index < l->data->length))){
							HX_STACK_LINE(135)
							l->data->splice(l->index,(l->data->length - l->index));
						}
						HX_STACK_LINE(135)
						l->index = (int)0;
						HX_STACK_LINE(135)
						l->dirty = false;
					}
					HX_STACK_LINE(135)
					this->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->getSpriteByLayer(layer)->get_graphics(),l->data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,this->_renderFlags);
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,renderData,(void))

::com::haxepunk::graphics::atlas::AtlasData AtlasData_obj::create( Dynamic source){
	HX_STACK_FRAME("AtlasData","create","AtlasData.create","com/haxepunk/graphics/atlas/AtlasData.hx",51)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(52)
	::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(53)
	if ((::Std_obj::is(source,hx::ClassOf< ::flash::display::BitmapData >()))){
		HX_STACK_LINE(56)
		::com::haxepunk::HXP_obj::log(HX_CSTRING("Atlases using BitmapData will not be managed."));
		HX_STACK_LINE(58)
		data = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(source);
	}
	else{
		struct _Function_2_1{
			inline static bool Block( Dynamic &source){
				HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/graphics/atlas/AtlasData.hx",62)
				{
					HX_STACK_LINE(62)
					::String key = source;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(62)
					return ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(key);
				}
				return null();
			}
		};
		HX_STACK_LINE(62)
		if ((_Function_2_1::Block(source))){
			HX_STACK_LINE(64)
			{
				HX_STACK_LINE(64)
				::String key = source;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(64)
				data = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(key);
			}
			HX_STACK_LINE(65)
			hx::AddEq(data->_refCount,(int)1);
		}
		else{
			HX_STACK_LINE(69)
			data = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(::com::haxepunk::HXP_obj::getBitmap(source));
			HX_STACK_LINE(70)
			data->_name = source;
			HX_STACK_LINE(71)
			{
				HX_STACK_LINE(71)
				::String key = source;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(71)
				::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->set(key,data);
			}
		}
	}
	HX_STACK_LINE(74)
	return data;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AtlasData_obj,create,return )

Void AtlasData_obj::setScene( ::com::haxepunk::Scene scene){
{
		HX_STACK_FRAME("AtlasData","setScene","AtlasData.setScene","com/haxepunk/graphics/atlas/AtlasData.hx",103)
		HX_STACK_ARG(scene,"scene")
		HX_STACK_LINE(103)
		::com::haxepunk::graphics::atlas::AtlasData_obj::_scene = scene;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AtlasData_obj,setScene,(void))

Void AtlasData_obj::render( ){
{
		HX_STACK_FRAME("AtlasData","render","AtlasData.render","com/haxepunk/graphics/atlas/AtlasData.hx",111)
		HX_STACK_LINE(111)
		if (((::com::haxepunk::graphics::atlas::AtlasData_obj::_atlases->length > (int)0))){
			HX_STACK_LINE(113)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(113)
			Array< ::Dynamic > _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_atlases;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(113)
			while(((_g < _g1->length))){
				HX_STACK_LINE(113)
				::com::haxepunk::graphics::atlas::AtlasData atlas = _g1->__get(_g).StaticCast< ::com::haxepunk::graphics::atlas::AtlasData >();		HX_STACK_VAR(atlas,"atlas");
				HX_STACK_LINE(113)
				++(_g);
				HX_STACK_LINE(115)
				{
					HX_STACK_LINE(115)
					::com::haxepunk::graphics::atlas::Layer l;		HX_STACK_VAR(l,"l");
					HX_STACK_LINE(115)
					for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(atlas->_layers->keys());  __it->hasNext(); ){
						int layer = __it->next();
						{
							HX_STACK_LINE(115)
							l = atlas->_layers->get(layer);
							HX_STACK_LINE(115)
							if ((l->dirty)){
								HX_STACK_LINE(115)
								{
									HX_STACK_LINE(115)
									if (((l->index < l->data->length))){
										HX_STACK_LINE(115)
										l->data->splice(l->index,(l->data->length - l->index));
									}
									HX_STACK_LINE(115)
									l->index = (int)0;
									HX_STACK_LINE(115)
									l->dirty = false;
								}
								HX_STACK_LINE(115)
								atlas->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->getSpriteByLayer(layer)->get_graphics(),l->data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,atlas->_renderFlags);
							}
						}
;
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,render,(void))

Void AtlasData_obj::destroyAll( ){
{
		HX_STACK_FRAME("AtlasData","destroyAll","AtlasData.destroyAll","com/haxepunk/graphics/atlas/AtlasData.hx",157)
		HX_STACK_LINE(157)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(157)
		Array< ::Dynamic > _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_atlases;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(157)
		while(((_g < _g1->length))){
			HX_STACK_LINE(157)
			::com::haxepunk::graphics::atlas::AtlasData atlas = _g1->__get(_g).StaticCast< ::com::haxepunk::graphics::atlas::AtlasData >();		HX_STACK_VAR(atlas,"atlas");
			HX_STACK_LINE(157)
			++(_g);
			HX_STACK_LINE(159)
			atlas->destroy();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,destroyAll,(void))

::com::haxepunk::Scene AtlasData_obj::_scene;

::haxe::ds::StringMap AtlasData_obj::_dataPool;

Array< ::Dynamic > AtlasData_obj::_atlases;


AtlasData_obj::AtlasData_obj()
{
}

void AtlasData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AtlasData);
	HX_MARK_MEMBER_NAME(_layers,"_layers");
	HX_MARK_MEMBER_NAME(_tilesheet,"_tilesheet");
	HX_MARK_MEMBER_NAME(_tileIndex,"_tileIndex");
	HX_MARK_MEMBER_NAME(_renderFlags,"_renderFlags");
	HX_MARK_MEMBER_NAME(_layer,"_layer");
	HX_MARK_MEMBER_NAME(_layerIndex,"_layerIndex");
	HX_MARK_MEMBER_NAME(_refCount,"_refCount");
	HX_MARK_MEMBER_NAME(_name,"_name");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_END_CLASS();
}

void AtlasData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_layers,"_layers");
	HX_VISIT_MEMBER_NAME(_tilesheet,"_tilesheet");
	HX_VISIT_MEMBER_NAME(_tileIndex,"_tileIndex");
	HX_VISIT_MEMBER_NAME(_renderFlags,"_renderFlags");
	HX_VISIT_MEMBER_NAME(_layer,"_layer");
	HX_VISIT_MEMBER_NAME(_layerIndex,"_layerIndex");
	HX_VISIT_MEMBER_NAME(_refCount,"_refCount");
	HX_VISIT_MEMBER_NAME(_name,"_name");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
}

Dynamic AtlasData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_name") ) { return _name; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"_scene") ) { return _scene; }
		if (HX_FIELD_EQ(inName,"_layer") ) { return _layer; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_layers") ) { return _layers; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setScene") ) { return setScene_dyn(); }
		if (HX_FIELD_EQ(inName,"_atlases") ) { return _atlases; }
		if (HX_FIELD_EQ(inName,"setLayer") ) { return setLayer_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dataPool") ) { return _dataPool; }
		if (HX_FIELD_EQ(inName,"_refCount") ) { return _refCount; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"destroyAll") ) { return destroyAll_dyn(); }
		if (HX_FIELD_EQ(inName,"_tilesheet") ) { return _tilesheet; }
		if (HX_FIELD_EQ(inName,"_tileIndex") ) { return _tileIndex; }
		if (HX_FIELD_EQ(inName,"renderData") ) { return renderData_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_layerIndex") ) { return _layerIndex; }
		if (HX_FIELD_EQ(inName,"prepareTile") ) { return prepareTile_dyn(); }
		if (HX_FIELD_EQ(inName,"renderLayer") ) { return renderLayer_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_renderFlags") ) { return _renderFlags; }
		if (HX_FIELD_EQ(inName,"createRegion") ) { return createRegion_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"prepareTileMatrix") ) { return prepareTileMatrix_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AtlasData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_name") ) { _name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=inValue.Cast< ::com::haxepunk::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layer") ) { _layer=inValue.Cast< ::com::haxepunk::graphics::atlas::Layer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_layers") ) { _layers=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_atlases") ) { _atlases=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dataPool") ) { _dataPool=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_refCount") ) { _refCount=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tilesheet") ) { _tilesheet=inValue.Cast< ::openfl::display::Tilesheet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileIndex") ) { _tileIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_layerIndex") ) { _layerIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_renderFlags") ) { _renderFlags=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AtlasData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_layers"));
	outFields->push(HX_CSTRING("_tilesheet"));
	outFields->push(HX_CSTRING("_tileIndex"));
	outFields->push(HX_CSTRING("_renderFlags"));
	outFields->push(HX_CSTRING("_layer"));
	outFields->push(HX_CSTRING("_layerIndex"));
	outFields->push(HX_CSTRING("_refCount"));
	outFields->push(HX_CSTRING("_name"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("setScene"),
	HX_CSTRING("render"),
	HX_CSTRING("destroyAll"),
	HX_CSTRING("_scene"),
	HX_CSTRING("_dataPool"),
	HX_CSTRING("_atlases"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_layers"),
	HX_CSTRING("_tilesheet"),
	HX_CSTRING("_tileIndex"),
	HX_CSTRING("_renderFlags"),
	HX_CSTRING("_layer"),
	HX_CSTRING("_layerIndex"),
	HX_CSTRING("_refCount"),
	HX_CSTRING("_name"),
	HX_CSTRING("prepareTile"),
	HX_CSTRING("prepareTileMatrix"),
	HX_CSTRING("setLayer"),
	HX_CSTRING("renderLayer"),
	HX_CSTRING("createRegion"),
	HX_CSTRING("destroy"),
	HX_CSTRING("renderData"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AtlasData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AtlasData_obj::_scene,"_scene");
	HX_MARK_MEMBER_NAME(AtlasData_obj::_dataPool,"_dataPool");
	HX_MARK_MEMBER_NAME(AtlasData_obj::_atlases,"_atlases");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AtlasData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::_scene,"_scene");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::_dataPool,"_dataPool");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::_atlases,"_atlases");
};

#endif

Class AtlasData_obj::__mClass;

void AtlasData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.atlas.AtlasData"), hx::TCanCast< AtlasData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void AtlasData_obj::__boot()
{
	_dataPool= ::haxe::ds::StringMap_obj::__new();
	_atlases= Array_obj< ::Dynamic >::__new();
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
} // end namespace atlas
