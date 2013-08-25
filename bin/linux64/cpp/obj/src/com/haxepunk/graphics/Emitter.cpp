#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_com_haxepunk_graphics_Emitter
#include <com/haxepunk/graphics/Emitter.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Particle
#include <com/haxepunk/graphics/Particle.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_ParticleType
#include <com/haxepunk/graphics/ParticleType.h>
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
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
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

Void Emitter_obj::__construct(Dynamic source,hx::Null< int >  __o_frameWidth,hx::Null< int >  __o_frameHeight)
{
HX_STACK_FRAME("Emitter","new","Emitter.new","com/haxepunk/graphics/Emitter.hx",30)

HX_STACK_ARG(source,"source")

HX_STACK_ARG(__o_frameWidth,"frameWidth")

HX_STACK_ARG(__o_frameHeight,"frameHeight")
int frameWidth = __o_frameWidth.Default(0);
int frameHeight = __o_frameHeight.Default(0);
{
	HX_STACK_LINE(31)
	super::__construct();
	HX_STACK_LINE(32)
	this->_p = ::flash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(33)
	this->_tint = ::flash::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(35)
	this->_types = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(40)
	this->setSource(source,frameWidth,frameHeight);
	HX_STACK_LINE(41)
	this->active = true;
	HX_STACK_LINE(42)
	this->particleCount = (int)0;
}
;
	return null();
}

Emitter_obj::~Emitter_obj() { }

Dynamic Emitter_obj::__CreateEmpty() { return  new Emitter_obj; }
hx::ObjectPtr< Emitter_obj > Emitter_obj::__new(Dynamic source,hx::Null< int >  __o_frameWidth,hx::Null< int >  __o_frameHeight)
{  hx::ObjectPtr< Emitter_obj > result = new Emitter_obj();
	result->__construct(source,__o_frameWidth,__o_frameHeight);
	return result;}

Dynamic Emitter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Emitter_obj > result = new Emitter_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::com::haxepunk::graphics::Particle Emitter_obj::emitInRectangle( ::String name,Float x,Float y,Float width,Float height){
	HX_STACK_FRAME("Emitter","emitInRectangle","Emitter.emitInRectangle","com/haxepunk/graphics/Emitter.hx",367)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	struct _Function_1_1{
		inline static Float Block( ){
			HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/graphics/Emitter.hx",367)
			{
				HX_STACK_LINE(367)
				::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),(int)2147483646));
				HX_STACK_LINE(367)
				return (Float(::com::haxepunk::HXP_obj::_seed) / Float((int)2147483646));
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ){
			HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/graphics/Emitter.hx",367)
			{
				HX_STACK_LINE(367)
				::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),(int)2147483646));
				HX_STACK_LINE(367)
				return (Float(::com::haxepunk::HXP_obj::_seed) / Float((int)2147483646));
			}
			return null();
		}
	};
	HX_STACK_LINE(367)
	return this->emit(name,(x + (_Function_1_1::Block() * width)),(y + (_Function_1_2::Block() * height)));
}


HX_DEFINE_DYNAMIC_FUNC5(Emitter_obj,emitInRectangle,return )

::com::haxepunk::graphics::Particle Emitter_obj::emitInCircle( ::String name,Float x,Float y,Float radius){
	HX_STACK_FRAME("Emitter","emitInCircle","Emitter.emitInCircle","com/haxepunk/graphics/Emitter.hx",351)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(radius,"radius")
	HX_STACK_LINE(352)
	Float angle = ((::Math_obj::random() * ::Math_obj::PI) * (int)2);		HX_STACK_VAR(angle,"angle");
	HX_STACK_LINE(353)
	hx::MultEq(radius,::Math_obj::random());
	HX_STACK_LINE(354)
	return this->emit(name,(x + (::Math_obj::cos(angle) * radius)),(y + (::Math_obj::sin(angle) * radius)));
}


HX_DEFINE_DYNAMIC_FUNC4(Emitter_obj,emitInCircle,return )

::com::haxepunk::graphics::Particle Emitter_obj::emit( ::String name,Dynamic __o_x,Dynamic __o_y){
Dynamic x = __o_x.Default(0);
Dynamic y = __o_y.Default(0);
	HX_STACK_FRAME("Emitter","emit","Emitter.emit","com/haxepunk/graphics/Emitter.hx",312)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(313)
		::com::haxepunk::graphics::Particle p;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(313)
		::com::haxepunk::graphics::ParticleType type = this->_types->get(name);		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(314)
		if (((type == null()))){
			HX_STACK_LINE(314)
			HX_STACK_DO_THROW(((HX_CSTRING("Particle type \"") + name) + HX_CSTRING("\" does not exist.")));
		}
		HX_STACK_LINE(316)
		if (((this->_cache != null()))){
			HX_STACK_LINE(318)
			p = this->_cache;
			HX_STACK_LINE(319)
			this->_cache = p->_next;
		}
		else{
			HX_STACK_LINE(323)
			p = ::com::haxepunk::graphics::Particle_obj::__new();
		}
		HX_STACK_LINE(325)
		p->_next = this->_particle;
		HX_STACK_LINE(326)
		p->_prev = null();
		HX_STACK_LINE(327)
		if (((p->_next != null()))){
			HX_STACK_LINE(327)
			p->_next->_prev = p;
		}
		HX_STACK_LINE(329)
		p->_type = type;
		HX_STACK_LINE(330)
		p->_time = (int)0;
		struct _Function_1_1{
			inline static Float Block( ){
				HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/graphics/Emitter.hx",331)
				{
					HX_STACK_LINE(331)
					::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),(int)2147483646));
					HX_STACK_LINE(331)
					return (Float(::com::haxepunk::HXP_obj::_seed) / Float((int)2147483646));
				}
				return null();
			}
		};
		HX_STACK_LINE(331)
		p->_duration = (type->_duration + (type->_durationRange * _Function_1_1::Block()));
		HX_STACK_LINE(332)
		Float a;		HX_STACK_VAR(a,"a");
		struct _Function_1_2{
			inline static Float Block( ){
				HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/graphics/Emitter.hx",332)
				{
					HX_STACK_LINE(332)
					::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),(int)2147483646));
					HX_STACK_LINE(332)
					return (Float(::com::haxepunk::HXP_obj::_seed) / Float((int)2147483646));
				}
				return null();
			}
		};
		HX_STACK_LINE(332)
		a = (type->_angle + (type->_angleRange * _Function_1_2::Block()));
		HX_STACK_LINE(333)
		Float d;		HX_STACK_VAR(d,"d");
		struct _Function_1_3{
			inline static Float Block( ){
				HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/graphics/Emitter.hx",333)
				{
					HX_STACK_LINE(333)
					::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),(int)2147483646));
					HX_STACK_LINE(333)
					return (Float(::com::haxepunk::HXP_obj::_seed) / Float((int)2147483646));
				}
				return null();
			}
		};
		HX_STACK_LINE(333)
		d = (type->_distance + (type->_distanceRange * _Function_1_3::Block()));
		HX_STACK_LINE(334)
		p->_moveX = (::Math_obj::cos(a) * d);
		HX_STACK_LINE(335)
		p->_moveY = (::Math_obj::sin(a) * d);
		HX_STACK_LINE(336)
		p->_x = x;
		HX_STACK_LINE(337)
		p->_y = y;
		struct _Function_1_4{
			inline static Float Block( ){
				HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/graphics/Emitter.hx",338)
				{
					HX_STACK_LINE(338)
					::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),(int)2147483646));
					HX_STACK_LINE(338)
					return (Float(::com::haxepunk::HXP_obj::_seed) / Float((int)2147483646));
				}
				return null();
			}
		};
		HX_STACK_LINE(338)
		p->_gravity = (type->_gravity + (type->_gravityRange * _Function_1_4::Block()));
		HX_STACK_LINE(339)
		(this->particleCount)++;
		HX_STACK_LINE(340)
		return this->_particle = p;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Emitter_obj,emit,return )

::com::haxepunk::graphics::ParticleType Emitter_obj::setColor( ::String name,Dynamic __o_start,Dynamic __o_finish,Dynamic ease){
Dynamic start = __o_start.Default(16777215);
Dynamic finish = __o_finish.Default(0);
	HX_STACK_FRAME("Emitter","setColor","Emitter.setColor","com/haxepunk/graphics/Emitter.hx",298)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(finish,"finish")
	HX_STACK_ARG(ease,"ease")
{
		HX_STACK_LINE(299)
		::com::haxepunk::graphics::ParticleType pt = this->_types->get(name);		HX_STACK_VAR(pt,"pt");
		HX_STACK_LINE(300)
		if (((pt == null()))){
			HX_STACK_LINE(300)
			return null();
		}
		HX_STACK_LINE(301)
		return pt->setColor(start,finish,ease);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Emitter_obj,setColor,return )

::com::haxepunk::graphics::ParticleType Emitter_obj::setAlpha( ::String name,Dynamic __o_start,Dynamic __o_finish,Dynamic ease){
Dynamic start = __o_start.Default(1);
Dynamic finish = __o_finish.Default(0);
	HX_STACK_FRAME("Emitter","setAlpha","Emitter.setAlpha","com/haxepunk/graphics/Emitter.hx",283)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(finish,"finish")
	HX_STACK_ARG(ease,"ease")
{
		HX_STACK_LINE(284)
		::com::haxepunk::graphics::ParticleType pt = this->_types->get(name);		HX_STACK_VAR(pt,"pt");
		HX_STACK_LINE(285)
		if (((pt == null()))){
			HX_STACK_LINE(285)
			return null();
		}
		HX_STACK_LINE(286)
		return pt->setAlpha(start,finish,ease);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Emitter_obj,setAlpha,return )

::com::haxepunk::graphics::ParticleType Emitter_obj::setGravity( ::String name,Dynamic __o_gravity,Dynamic __o_gravityRange){
Dynamic gravity = __o_gravity.Default(0);
Dynamic gravityRange = __o_gravityRange.Default(0);
	HX_STACK_FRAME("Emitter","setGravity","Emitter.setGravity","com/haxepunk/graphics/Emitter.hx",271)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(gravity,"gravity")
	HX_STACK_ARG(gravityRange,"gravityRange")
{
		HX_STACK_LINE(271)
		return (hx::TCast< com::haxepunk::graphics::ParticleType >::cast(this->_types->get(name)))->setGravity(gravity,gravityRange);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Emitter_obj,setGravity,return )

::com::haxepunk::graphics::ParticleType Emitter_obj::setMotion( ::String name,Float angle,Float distance,Float duration,Dynamic __o_angleRange,Dynamic __o_distanceRange,Dynamic __o_durationRange,Dynamic ease){
Dynamic angleRange = __o_angleRange.Default(0);
Dynamic distanceRange = __o_distanceRange.Default(0);
Dynamic durationRange = __o_durationRange.Default(0);
	HX_STACK_FRAME("Emitter","setMotion","Emitter.setMotion","com/haxepunk/graphics/Emitter.hx",256)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(distance,"distance")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(angleRange,"angleRange")
	HX_STACK_ARG(distanceRange,"distanceRange")
	HX_STACK_ARG(durationRange,"durationRange")
	HX_STACK_ARG(ease,"ease")
{
		HX_STACK_LINE(257)
		::com::haxepunk::graphics::ParticleType pt = this->_types->get(name);		HX_STACK_VAR(pt,"pt");
		HX_STACK_LINE(258)
		if (((pt == null()))){
			HX_STACK_LINE(258)
			return null();
		}
		HX_STACK_LINE(259)
		return pt->setMotion(angle,distance,duration,angleRange,distanceRange,durationRange,ease);
	}
}


HX_DEFINE_DYNAMIC_FUNC8(Emitter_obj,setMotion,return )

::com::haxepunk::graphics::ParticleType Emitter_obj::newType( ::String name,Array< int > frames){
	HX_STACK_FRAME("Emitter","newType","Emitter.newType","com/haxepunk/graphics/Emitter.hx",235)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(frames,"frames")
	HX_STACK_LINE(236)
	::com::haxepunk::graphics::ParticleType pt = this->_types->get(name);		HX_STACK_VAR(pt,"pt");
	HX_STACK_LINE(237)
	if (((pt != null()))){
		HX_STACK_LINE(237)
		HX_STACK_DO_THROW(HX_CSTRING("Cannot add multiple particle types of the same name"));
	}
	HX_STACK_LINE(238)
	pt = ::com::haxepunk::graphics::ParticleType_obj::__new(name,frames,this->_width,this->_frameWidth,this->_frameHeight);
	HX_STACK_LINE(239)
	this->_types->set(name,pt);
	HX_STACK_LINE(240)
	return pt;
}


HX_DEFINE_DYNAMIC_FUNC2(Emitter_obj,newType,return )

Void Emitter_obj::render( ::flash::display::BitmapData target,::flash::geom::Point point,::flash::geom::Point camera){
{
		HX_STACK_FRAME("Emitter","render","Emitter.render","com/haxepunk/graphics/Emitter.hx",146)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(148)
		if (((this->_particle == null()))){
			HX_STACK_LINE(148)
			return null();
		}
		HX_STACK_LINE(151)
		this->_point->x = ((point->x + this->x) - (camera->x * this->scrollX));
		HX_STACK_LINE(152)
		this->_point->y = ((point->y + this->y) - (camera->y * this->scrollY));
		HX_STACK_LINE(155)
		Float t;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(155)
		Float td;		HX_STACK_VAR(td,"td");
		HX_STACK_LINE(156)
		::com::haxepunk::graphics::Particle p = this->_particle;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(157)
		Float scaleX = ::com::haxepunk::HXP_obj::screen->fullScaleX;		HX_STACK_VAR(scaleX,"scaleX");
		HX_STACK_LINE(158)
		Float scaleY = ::com::haxepunk::HXP_obj::screen->fullScaleY;		HX_STACK_VAR(scaleY,"scaleY");
		HX_STACK_LINE(155)
		::com::haxepunk::graphics::ParticleType type;		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(155)
		::flash::geom::Rectangle rect;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(163)
		while(((p != null()))){
			HX_STACK_LINE(166)
			t = (Float(p->_time) / Float(p->_duration));
			HX_STACK_LINE(169)
			type = p->_type;
			HX_STACK_LINE(172)
			if (((type->_ease == null()))){
				HX_STACK_LINE(172)
				td = t;
			}
			else{
				HX_STACK_LINE(172)
				td = type->_ease(t);
			}
			HX_STACK_LINE(173)
			this->_p->x = ((this->_point->x + p->_x) + (p->_moveX * td));
			HX_STACK_LINE(174)
			this->_p->y = ((this->_point->y + p->_y) + (p->_moveY * td));
			HX_STACK_LINE(175)
			hx::AddEq(p->_moveY,(p->_gravity * td));
			HX_STACK_LINE(177)
			if ((this->_blit)){
				HX_STACK_LINE(179)
				rect = type->_frame;
				HX_STACK_LINE(182)
				if (((type->_frames->length == (int)0))){
					HX_STACK_LINE(183)
					rect->x = (int)0;
				}
				else{
					HX_STACK_LINE(185)
					rect->x = (rect->width * type->_frames->__get(::Std_obj::_int((td * type->_frames->length))));
				}
				HX_STACK_LINE(186)
				rect->y = (::Std_obj::_int((Float(rect->x) / Float(this->_width))) * rect->height);
				HX_STACK_LINE(187)
				hx::ModEq(rect->x,this->_width);
				HX_STACK_LINE(190)
				if (((type->_buffer != null()))){
					HX_STACK_LINE(193)
					this->_tint->alphaMultiplier = (type->_alpha + (type->_alphaRange * ((  (((type->_alphaEase == null()))) ? Float(t) : Float(type->_alphaEase(t)) ))));
					HX_STACK_LINE(196)
					if (((type->_colorEase == null()))){
						HX_STACK_LINE(196)
						td = t;
					}
					else{
						HX_STACK_LINE(196)
						td = type->_colorEase(t);
					}
					HX_STACK_LINE(197)
					this->_tint->redMultiplier = (type->_red + (type->_redRange * td));
					HX_STACK_LINE(198)
					this->_tint->greenMultiplier = (type->_green + (type->_greenRange * td));
					HX_STACK_LINE(199)
					this->_tint->blueMultiplier = (type->_blue + (type->_blueRange * td));
					HX_STACK_LINE(200)
					type->_buffer->fillRect(type->_bufferRect,(int)0);
					HX_STACK_LINE(201)
					type->_buffer->copyPixels(this->_source,rect,::com::haxepunk::HXP_obj::zero,null(),null(),null());
					HX_STACK_LINE(202)
					type->_buffer->colorTransform(type->_bufferRect,this->_tint);
					HX_STACK_LINE(205)
					target->copyPixels(type->_buffer,type->_bufferRect,this->_p,null(),null(),true);
				}
				else{
					HX_STACK_LINE(209)
					target->copyPixels(this->_source,rect,this->_p,null(),null(),true);
				}
			}
			else{
				HX_STACK_LINE(214)
				int frameIndex = type->_frames->__get(::Std_obj::_int((td * type->_frames->length)));		HX_STACK_VAR(frameIndex,"frameIndex");
				HX_STACK_LINE(215)
				{
					HX_STACK_LINE(215)
					::com::haxepunk::graphics::atlas::AtlasRegion _this = this->_frames->__get(frameIndex).StaticCast< ::com::haxepunk::graphics::atlas::AtlasRegion >();		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(215)
					Float x = ::Math_obj::floor((this->_p->x * scaleX));		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(215)
					Float y = ::Math_obj::floor((this->_p->y * scaleY));		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(215)
					int layer = this->layer;		HX_STACK_VAR(layer,"layer");
					HX_STACK_LINE(216)
					Float angle = type->_angle;		HX_STACK_VAR(angle,"angle");
					HX_STACK_LINE(220)
					Float alpha;		HX_STACK_VAR(alpha,"alpha");
					HX_STACK_LINE(220)
					alpha = (type->_alpha + (type->_alphaRange * ((  (((type->_alphaEase == null()))) ? Float(t) : Float(type->_alphaEase(t)) ))));
					HX_STACK_LINE(215)
					if ((_this->rotated)){
						HX_STACK_LINE(215)
						angle = (angle + (int)90);
					}
					HX_STACK_LINE(215)
					{
						HX_STACK_LINE(215)
						::com::haxepunk::graphics::atlas::AtlasData _this1 = _this->parent;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(215)
						if (((_this1->_layerIndex != layer))){
							HX_STACK_LINE(215)
							if ((_this1->_layers->exists(layer))){
								HX_STACK_LINE(215)
								_this1->_layer = _this1->_layers->get(layer);
							}
							else{
								HX_STACK_LINE(215)
								_this1->_layer = ::com::haxepunk::graphics::atlas::Layer_obj::__new();
								HX_STACK_LINE(215)
								_this1->_layers->set(layer,_this1->_layer);
							}
							HX_STACK_LINE(215)
							_this1->_layerIndex = layer;
						}
						HX_STACK_LINE(215)
						Array< Float > d = _this1->_layer->data;		HX_STACK_VAR(d,"d");
						HX_STACK_LINE(215)
						_this1->_layer->dirty = true;
						HX_STACK_LINE(215)
						d[(_this1->_layer->index)++] = x;
						HX_STACK_LINE(215)
						d[(_this1->_layer->index)++] = y;
						HX_STACK_LINE(215)
						d[(_this1->_layer->index)++] = _this->tileIndex;
						HX_STACK_LINE(215)
						if (((angle == (int)0))){
							HX_STACK_LINE(215)
							d[(_this1->_layer->index)++] = scaleX;
							HX_STACK_LINE(215)
							d[(_this1->_layer->index)++] = (int)0;
							HX_STACK_LINE(215)
							d[(_this1->_layer->index)++] = (int)0;
							HX_STACK_LINE(215)
							d[(_this1->_layer->index)++] = scaleY;
						}
						else{
							HX_STACK_LINE(215)
							Float cos = ::Math_obj::cos((-(angle) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(cos,"cos");
							HX_STACK_LINE(215)
							Float sin = ::Math_obj::sin((-(angle) * ((Float(::Math_obj::PI) / Float((int)-180)))));		HX_STACK_VAR(sin,"sin");
							HX_STACK_LINE(215)
							d[(_this1->_layer->index)++] = (cos * scaleX);
							HX_STACK_LINE(215)
							d[(_this1->_layer->index)++] = (-(sin) * scaleY);
							HX_STACK_LINE(215)
							d[(_this1->_layer->index)++] = (sin * scaleX);
							HX_STACK_LINE(215)
							d[(_this1->_layer->index)++] = (cos * scaleY);
						}
						HX_STACK_LINE(215)
						d[(_this1->_layer->index)++] = (type->_red + (type->_redRange * td));
						HX_STACK_LINE(215)
						d[(_this1->_layer->index)++] = (type->_green + (type->_greenRange * td));
						HX_STACK_LINE(215)
						d[(_this1->_layer->index)++] = (type->_blue + (type->_blueRange * td));
						HX_STACK_LINE(215)
						d[(_this1->_layer->index)++] = alpha;
						HX_STACK_LINE(215)
						if (((_this1->_layer->index > ::com::haxepunk::graphics::atlas::Atlas_obj::drawCallThreshold))){
							HX_STACK_LINE(215)
							::com::haxepunk::graphics::atlas::Layer layer1 = _this1->_layer;		HX_STACK_VAR(layer1,"layer1");
							HX_STACK_LINE(215)
							{
								HX_STACK_LINE(215)
								if (((layer1->index < layer1->data->length))){
									HX_STACK_LINE(215)
									layer1->data->splice(layer1->index,(layer1->data->length - layer1->index));
								}
								HX_STACK_LINE(215)
								layer1->index = (int)0;
								HX_STACK_LINE(215)
								layer1->dirty = false;
							}
							HX_STACK_LINE(215)
							_this1->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->getSpriteByLayer(layer)->get_graphics(),layer1->data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,_this1->_renderFlags);
						}
					}
				}
			}
			HX_STACK_LINE(224)
			p = p->_next;
		}
	}
return null();
}


Void Emitter_obj::update( ){
{
		HX_STACK_FRAME("Emitter","update","Emitter.update","com/haxepunk/graphics/Emitter.hx",108)
		HX_STACK_THIS(this)
		HX_STACK_LINE(110)
		if (((this->_particle == null()))){
			HX_STACK_LINE(110)
			return null();
		}
		HX_STACK_LINE(113)
		Float e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(113)
		if ((::com::haxepunk::HXP_obj::fixed)){
			HX_STACK_LINE(113)
			e = (int)1;
		}
		else{
			HX_STACK_LINE(113)
			e = ::com::haxepunk::HXP_obj::elapsed;
		}
		HX_STACK_LINE(114)
		::com::haxepunk::graphics::Particle p = this->_particle;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(113)
		::com::haxepunk::graphics::Particle n;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(113)
		Float t;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(118)
		while(((p != null()))){
			HX_STACK_LINE(121)
			hx::AddEq(p->_time,e);
			HX_STACK_LINE(122)
			t = (Float(p->_time) / Float(p->_duration));
			HX_STACK_LINE(125)
			if (((p->_time >= p->_duration))){
				HX_STACK_LINE(127)
				if (((p->_next != null()))){
					HX_STACK_LINE(127)
					p->_next->_prev = p->_prev;
				}
				HX_STACK_LINE(128)
				if (((p->_prev != null()))){
					HX_STACK_LINE(128)
					p->_prev->_next = p->_next;
				}
				else{
					HX_STACK_LINE(129)
					this->_particle = p->_next;
				}
				HX_STACK_LINE(130)
				n = p->_next;
				HX_STACK_LINE(131)
				p->_next = this->_cache;
				HX_STACK_LINE(132)
				p->_prev = null();
				HX_STACK_LINE(133)
				this->_cache = p;
				HX_STACK_LINE(134)
				p = n;
				HX_STACK_LINE(135)
				(this->particleCount)--;
				HX_STACK_LINE(136)
				continue;
			}
			HX_STACK_LINE(140)
			p = p->_next;
		}
	}
return null();
}


::com::haxepunk::graphics::atlas::AtlasRegion Emitter_obj::setAtlasRegion( ::com::haxepunk::graphics::atlas::AtlasRegion region){
	HX_STACK_FRAME("Emitter","setAtlasRegion","Emitter.setAtlasRegion","com/haxepunk/graphics/Emitter.hx",100)
	HX_STACK_THIS(this)
	HX_STACK_ARG(region,"region")
	HX_STACK_LINE(101)
	this->_blit = false;
	HX_STACK_LINE(102)
	this->_width = ::Std_obj::_int(region->rect->width);
	HX_STACK_LINE(103)
	this->_height = ::Std_obj::_int(region->rect->height);
	HX_STACK_LINE(104)
	return region;
}


HX_DEFINE_DYNAMIC_FUNC1(Emitter_obj,setAtlasRegion,return )

Void Emitter_obj::setBitmapSource( ::flash::display::BitmapData bitmap){
{
		HX_STACK_FRAME("Emitter","setBitmapSource","Emitter.setBitmapSource","com/haxepunk/graphics/Emitter.hx",92)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_LINE(93)
		this->_blit = true;
		HX_STACK_LINE(94)
		this->_source = bitmap;
		HX_STACK_LINE(95)
		this->_width = ::Std_obj::_int(bitmap->get_width());
		HX_STACK_LINE(96)
		this->_height = ::Std_obj::_int(bitmap->get_height());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Emitter_obj,setBitmapSource,(void))

Void Emitter_obj::setSource( Dynamic source,hx::Null< int >  __o_frameWidth,hx::Null< int >  __o_frameHeight){
int frameWidth = __o_frameWidth.Default(0);
int frameHeight = __o_frameHeight.Default(0);
	HX_STACK_FRAME("Emitter","setSource","Emitter.setSource","com/haxepunk/graphics/Emitter.hx",52)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(frameWidth,"frameWidth")
	HX_STACK_ARG(frameHeight,"frameHeight")
{
		HX_STACK_LINE(53)
		::com::haxepunk::graphics::atlas::AtlasRegion region = null();		HX_STACK_VAR(region,"region");
		HX_STACK_LINE(54)
		if ((::Std_obj::is(source,hx::ClassOf< ::flash::display::BitmapData >()))){
			HX_STACK_LINE(54)
			::flash::display::BitmapData bitmap = source;		HX_STACK_VAR(bitmap,"bitmap");
			HX_STACK_LINE(54)
			this->_blit = true;
			HX_STACK_LINE(54)
			this->_source = bitmap;
			HX_STACK_LINE(54)
			this->_width = ::Std_obj::_int(bitmap->get_width());
			HX_STACK_LINE(54)
			this->_height = ::Std_obj::_int(bitmap->get_height());
		}
		else{
			HX_STACK_LINE(55)
			if ((::Std_obj::is(source,hx::ClassOf< ::com::haxepunk::graphics::atlas::AtlasRegion >()))){
				HX_STACK_LINE(55)
				::com::haxepunk::graphics::atlas::AtlasRegion region1 = source;		HX_STACK_VAR(region1,"region1");
				HX_STACK_LINE(55)
				this->_blit = false;
				HX_STACK_LINE(55)
				this->_width = ::Std_obj::_int(region1->rect->width);
				HX_STACK_LINE(55)
				this->_height = ::Std_obj::_int(region1->rect->height);
				HX_STACK_LINE(55)
				region = region1;
			}
			else{
				HX_STACK_LINE(58)
				if (((((int(::com::haxepunk::HXP_obj::renderMode) & int((int((int)1) << int(::com::haxepunk::RenderMode_obj::HARDWARE->__Index()))))) != (int)0))){
					HX_STACK_LINE(60)
					::com::haxepunk::graphics::atlas::AtlasRegion region1 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(source);		HX_STACK_VAR(region1,"region1");
					HX_STACK_LINE(60)
					this->_blit = false;
					HX_STACK_LINE(60)
					this->_width = ::Std_obj::_int(region1->rect->width);
					HX_STACK_LINE(60)
					this->_height = ::Std_obj::_int(region1->rect->height);
					HX_STACK_LINE(60)
					region = region1;
				}
				else{
					HX_STACK_LINE(64)
					::flash::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(source);		HX_STACK_VAR(bitmap,"bitmap");
					HX_STACK_LINE(64)
					this->_blit = true;
					HX_STACK_LINE(64)
					this->_source = bitmap;
					HX_STACK_LINE(64)
					this->_width = ::Std_obj::_int(bitmap->get_width());
					HX_STACK_LINE(64)
					this->_height = ::Std_obj::_int(bitmap->get_height());
				}
			}
		}
		HX_STACK_LINE(67)
		if (((bool((this->_source == null())) && bool((region == null()))))){
			HX_STACK_LINE(67)
			HX_STACK_DO_THROW(HX_CSTRING("Invalid source image."));
		}
		HX_STACK_LINE(69)
		if (((frameWidth != (int)0))){
			HX_STACK_LINE(69)
			this->_frameWidth = frameWidth;
		}
		else{
			HX_STACK_LINE(69)
			this->_frameWidth = this->_width;
		}
		HX_STACK_LINE(70)
		if (((frameHeight != (int)0))){
			HX_STACK_LINE(70)
			this->_frameHeight = frameHeight;
		}
		else{
			HX_STACK_LINE(70)
			this->_frameHeight = this->_height;
		}
		HX_STACK_LINE(71)
		this->_frameCount = (::Std_obj::_int((Float(this->_width) / Float(this->_frameWidth))) * ::Std_obj::_int((Float(this->_height) / Float(this->_frameHeight))));
		HX_STACK_LINE(73)
		if (((region != null()))){
			HX_STACK_LINE(75)
			::flash::geom::Rectangle rect = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,this->_frameWidth,this->_frameHeight);		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(76)
			::flash::geom::Point center = ::flash::geom::Point_obj::__new((Float(this->_frameWidth) / Float((int)2)),(Float(this->_frameHeight) / Float((int)2)));		HX_STACK_VAR(center,"center");
			HX_STACK_LINE(77)
			this->_frames = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(78)
			{
				HX_STACK_LINE(78)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(78)
				int _g = this->_frameCount;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(78)
				while(((_g1 < _g))){
					HX_STACK_LINE(78)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(80)
					this->_frames->push(region->clip(rect,center));
					HX_STACK_LINE(81)
					hx::AddEq(rect->x,this->_frameWidth);
					HX_STACK_LINE(82)
					if (((rect->x > this->_width))){
						HX_STACK_LINE(84)
						hx::AddEq(rect->y,this->_frameHeight);
						HX_STACK_LINE(85)
						rect->x = (int)0;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Emitter_obj,setSource,(void))

Float Emitter_obj::get_SIN( ){
	HX_STACK_FRAME("Emitter","get_SIN","Emitter.get_SIN","com/haxepunk/graphics/Emitter.hx",397)
	HX_STACK_LINE(397)
	return (Float(::Math_obj::PI) / Float((int)2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Emitter_obj,get_SIN,return )


Emitter_obj::Emitter_obj()
{
}

void Emitter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Emitter);
	HX_MARK_MEMBER_NAME(_tint,"_tint");
	HX_MARK_MEMBER_NAME(_p,"_p");
	HX_MARK_MEMBER_NAME(_frames,"_frames");
	HX_MARK_MEMBER_NAME(_frameCount,"_frameCount");
	HX_MARK_MEMBER_NAME(_frameHeight,"_frameHeight");
	HX_MARK_MEMBER_NAME(_frameWidth,"_frameWidth");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_source,"_source");
	HX_MARK_MEMBER_NAME(_cache,"_cache");
	HX_MARK_MEMBER_NAME(_particle,"_particle");
	HX_MARK_MEMBER_NAME(_types,"_types");
	HX_MARK_MEMBER_NAME(particleCount,"particleCount");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Emitter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tint,"_tint");
	HX_VISIT_MEMBER_NAME(_p,"_p");
	HX_VISIT_MEMBER_NAME(_frames,"_frames");
	HX_VISIT_MEMBER_NAME(_frameCount,"_frameCount");
	HX_VISIT_MEMBER_NAME(_frameHeight,"_frameHeight");
	HX_VISIT_MEMBER_NAME(_frameWidth,"_frameWidth");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_source,"_source");
	HX_VISIT_MEMBER_NAME(_cache,"_cache");
	HX_VISIT_MEMBER_NAME(_particle,"_particle");
	HX_VISIT_MEMBER_NAME(_types,"_types");
	HX_VISIT_MEMBER_NAME(particleCount,"particleCount");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Emitter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_p") ) { return _p; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"SIN") ) { return get_SIN(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"emit") ) { return emit_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_tint") ) { return _tint; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"_cache") ) { return _cache; }
		if (HX_FIELD_EQ(inName,"_types") ) { return _types; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_SIN") ) { return get_SIN_dyn(); }
		if (HX_FIELD_EQ(inName,"_frames") ) { return _frames; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"_source") ) { return _source; }
		if (HX_FIELD_EQ(inName,"newType") ) { return newType_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setColor") ) { return setColor_dyn(); }
		if (HX_FIELD_EQ(inName,"setAlpha") ) { return setAlpha_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_particle") ) { return _particle; }
		if (HX_FIELD_EQ(inName,"setMotion") ) { return setMotion_dyn(); }
		if (HX_FIELD_EQ(inName,"setSource") ) { return setSource_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setGravity") ) { return setGravity_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameCount") ) { return _frameCount; }
		if (HX_FIELD_EQ(inName,"_frameWidth") ) { return _frameWidth; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_frameHeight") ) { return _frameHeight; }
		if (HX_FIELD_EQ(inName,"emitInCircle") ) { return emitInCircle_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"particleCount") ) { return particleCount; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setAtlasRegion") ) { return setAtlasRegion_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"emitInRectangle") ) { return emitInRectangle_dyn(); }
		if (HX_FIELD_EQ(inName,"setBitmapSource") ) { return setBitmapSource_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Emitter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_p") ) { _p=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_tint") ) { _tint=inValue.Cast< ::flash::geom::ColorTransform >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cache") ) { _cache=inValue.Cast< ::com::haxepunk::graphics::Particle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_types") ) { _types=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_frames") ) { _frames=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_source") ) { _source=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_particle") ) { _particle=inValue.Cast< ::com::haxepunk::graphics::Particle >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameCount") ) { _frameCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_frameWidth") ) { _frameWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_frameHeight") ) { _frameHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"particleCount") ) { particleCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Emitter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_tint"));
	outFields->push(HX_CSTRING("_p"));
	outFields->push(HX_CSTRING("_frames"));
	outFields->push(HX_CSTRING("_frameCount"));
	outFields->push(HX_CSTRING("_frameHeight"));
	outFields->push(HX_CSTRING("_frameWidth"));
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_source"));
	outFields->push(HX_CSTRING("_cache"));
	outFields->push(HX_CSTRING("_particle"));
	outFields->push(HX_CSTRING("_types"));
	outFields->push(HX_CSTRING("particleCount"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get_SIN"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_tint"),
	HX_CSTRING("_p"),
	HX_CSTRING("_frames"),
	HX_CSTRING("_frameCount"),
	HX_CSTRING("_frameHeight"),
	HX_CSTRING("_frameWidth"),
	HX_CSTRING("_height"),
	HX_CSTRING("_width"),
	HX_CSTRING("_source"),
	HX_CSTRING("_cache"),
	HX_CSTRING("_particle"),
	HX_CSTRING("_types"),
	HX_CSTRING("particleCount"),
	HX_CSTRING("emitInRectangle"),
	HX_CSTRING("emitInCircle"),
	HX_CSTRING("emit"),
	HX_CSTRING("setColor"),
	HX_CSTRING("setAlpha"),
	HX_CSTRING("setGravity"),
	HX_CSTRING("setMotion"),
	HX_CSTRING("newType"),
	HX_CSTRING("render"),
	HX_CSTRING("update"),
	HX_CSTRING("setAtlasRegion"),
	HX_CSTRING("setBitmapSource"),
	HX_CSTRING("setSource"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Emitter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Emitter_obj::__mClass,"__mClass");
};

#endif

Class Emitter_obj::__mClass;

void Emitter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.Emitter"), hx::TCanCast< Emitter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void Emitter_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
