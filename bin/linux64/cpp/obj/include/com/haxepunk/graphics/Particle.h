#ifndef INCLUDED_com_haxepunk_graphics_Particle
#define INCLUDED_com_haxepunk_graphics_Particle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,graphics,Particle)
HX_DECLARE_CLASS3(com,haxepunk,graphics,ParticleType)
namespace com{
namespace haxepunk{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  Particle_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Particle_obj OBJ_;
		Particle_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Particle_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Particle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Particle"); }

		::com::haxepunk::graphics::Particle _next;
		::com::haxepunk::graphics::Particle _prev;
		Float _gravity;
		Float _moveY;
		Float _moveX;
		Float _y;
		Float _x;
		Float _duration;
		Float _time;
		::com::haxepunk::graphics::ParticleType _type;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics

#endif /* INCLUDED_com_haxepunk_graphics_Particle */ 
