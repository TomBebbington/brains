#ifndef INCLUDED_com_haxepunk_graphics_Emitter
#define INCLUDED_com_haxepunk_graphics_Emitter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Graphic.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Emitter)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Particle)
HX_DECLARE_CLASS3(com,haxepunk,graphics,ParticleType)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,AtlasRegion)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,geom,ColorTransform)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace com{
namespace haxepunk{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  Emitter_obj : public ::com::haxepunk::Graphic_obj{
	public:
		typedef ::com::haxepunk::Graphic_obj super;
		typedef Emitter_obj OBJ_;
		Emitter_obj();
		Void __construct(Dynamic source,hx::Null< int >  __o_frameWidth,hx::Null< int >  __o_frameHeight);

	public:
		static hx::ObjectPtr< Emitter_obj > __new(Dynamic source,hx::Null< int >  __o_frameWidth,hx::Null< int >  __o_frameHeight);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Emitter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Emitter"); }

		::flash::geom::ColorTransform _tint;
		::flash::geom::Point _p;
		Array< ::Dynamic > _frames;
		int _frameCount;
		int _frameHeight;
		int _frameWidth;
		int _height;
		int _width;
		::flash::display::BitmapData _source;
		::com::haxepunk::graphics::Particle _cache;
		::com::haxepunk::graphics::Particle _particle;
		::haxe::ds::StringMap _types;
		int particleCount;
		virtual ::com::haxepunk::graphics::Particle emitInRectangle( ::String name,Float x,Float y,Float width,Float height);
		Dynamic emitInRectangle_dyn();

		virtual ::com::haxepunk::graphics::Particle emitInCircle( ::String name,Float x,Float y,Float radius);
		Dynamic emitInCircle_dyn();

		virtual ::com::haxepunk::graphics::Particle emit( ::String name,Dynamic x,Dynamic y);
		Dynamic emit_dyn();

		virtual ::com::haxepunk::graphics::ParticleType setColor( ::String name,Dynamic start,Dynamic finish,Dynamic ease);
		Dynamic setColor_dyn();

		virtual ::com::haxepunk::graphics::ParticleType setAlpha( ::String name,Dynamic start,Dynamic finish,Dynamic ease);
		Dynamic setAlpha_dyn();

		virtual ::com::haxepunk::graphics::ParticleType setGravity( ::String name,Dynamic gravity,Dynamic gravityRange);
		Dynamic setGravity_dyn();

		virtual ::com::haxepunk::graphics::ParticleType setMotion( ::String name,Float angle,Float distance,Float duration,Dynamic angleRange,Dynamic distanceRange,Dynamic durationRange,Dynamic ease);
		Dynamic setMotion_dyn();

		virtual ::com::haxepunk::graphics::ParticleType newType( ::String name,Array< int > frames);
		Dynamic newType_dyn();

		virtual Void render( ::flash::display::BitmapData target,::flash::geom::Point point,::flash::geom::Point camera);

		virtual Void update( );

		virtual ::com::haxepunk::graphics::atlas::AtlasRegion setAtlasRegion( ::com::haxepunk::graphics::atlas::AtlasRegion region);
		Dynamic setAtlasRegion_dyn();

		virtual Void setBitmapSource( ::flash::display::BitmapData bitmap);
		Dynamic setBitmapSource_dyn();

		virtual Void setSource( Dynamic source,hx::Null< int >  frameWidth,hx::Null< int >  frameHeight);
		Dynamic setSource_dyn();

		static Float get_SIN( );
		static Dynamic get_SIN_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics

#endif /* INCLUDED_com_haxepunk_graphics_Emitter */ 
