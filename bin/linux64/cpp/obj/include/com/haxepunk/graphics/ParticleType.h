#ifndef INCLUDED_com_haxepunk_graphics_ParticleType
#define INCLUDED_com_haxepunk_graphics_ParticleType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,graphics,ParticleType)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
namespace com{
namespace haxepunk{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  ParticleType_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ParticleType_obj OBJ_;
		ParticleType_obj();
		Void __construct(::String name,Array< int > frames,int width,int frameWidth,int frameHeight);

	public:
		static hx::ObjectPtr< ParticleType_obj > __new(::String name,Array< int > frames,int width,int frameWidth,int frameHeight);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ParticleType_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ParticleType"); }

		::flash::geom::Rectangle _bufferRect;
		::flash::display::BitmapData _buffer;
		Dynamic _colorEase;
		Dynamic &_colorEase_dyn() { return _colorEase;}
		Float _blueRange;
		Float _blue;
		Float _greenRange;
		Float _green;
		Float _redRange;
		Float _red;
		Dynamic _alphaEase;
		Dynamic &_alphaEase_dyn() { return _alphaEase;}
		Float _alphaRange;
		Float _alpha;
		Float _gravityRange;
		Float _gravity;
		Dynamic _ease;
		Dynamic &_ease_dyn() { return _ease;}
		Float _durationRange;
		Float _duration;
		Float _distanceRange;
		Float _distance;
		Float _angleRange;
		Float _angle;
		Array< int > _frames;
		::flash::geom::Rectangle _frame;
		::String _name;
		virtual Void createBuffer( );
		Dynamic createBuffer_dyn();

		virtual ::com::haxepunk::graphics::ParticleType setColor( hx::Null< int >  start,hx::Null< int >  finish,Dynamic ease);
		Dynamic setColor_dyn();

		virtual ::com::haxepunk::graphics::ParticleType setAlpha( hx::Null< Float >  start,hx::Null< Float >  finish,Dynamic ease);
		Dynamic setAlpha_dyn();

		virtual ::com::haxepunk::graphics::ParticleType setGravity( hx::Null< Float >  gravity,hx::Null< Float >  gravityRange);
		Dynamic setGravity_dyn();

		virtual ::com::haxepunk::graphics::ParticleType setMotionVector( Float x,Float y,Float duration,hx::Null< Float >  durationRange,Dynamic ease);
		Dynamic setMotionVector_dyn();

		virtual ::com::haxepunk::graphics::ParticleType setMotion( Float angle,Float distance,Float duration,hx::Null< Float >  angleRange,hx::Null< Float >  distanceRange,hx::Null< Float >  durationRange,Dynamic ease);
		Dynamic setMotion_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics

#endif /* INCLUDED_com_haxepunk_graphics_ParticleType */ 
