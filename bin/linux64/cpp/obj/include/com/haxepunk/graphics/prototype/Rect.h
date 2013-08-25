#ifndef INCLUDED_com_haxepunk_graphics_prototype_Rect
#define INCLUDED_com_haxepunk_graphics_prototype_Rect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Graphic.h>
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)
HX_DECLARE_CLASS4(com,haxepunk,graphics,prototype,Rect)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,geom,Point)
namespace com{
namespace haxepunk{
namespace graphics{
namespace prototype{


class HXCPP_CLASS_ATTRIBUTES  Rect_obj : public ::com::haxepunk::Graphic_obj{
	public:
		typedef ::com::haxepunk::Graphic_obj super;
		typedef Rect_obj OBJ_;
		Rect_obj();
		Void __construct(int width,int height,hx::Null< int >  __o_color);

	public:
		static hx::ObjectPtr< Rect_obj > __new(int width,int height,hx::Null< int >  __o_color);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Rect_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Rect"); }

		::com::haxepunk::graphics::Image image;
		virtual int set_color( int value);
		Dynamic set_color_dyn();

		virtual int set_width( int value);
		Dynamic set_width_dyn();

		virtual int set_height( int value);
		Dynamic set_height_dyn();

		virtual Void createImage( );
		Dynamic createImage_dyn();

		virtual Void render( ::flash::display::BitmapData target,::flash::geom::Point point,::flash::geom::Point camera);

		int height;
		int width;
		int color;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
} // end namespace prototype

#endif /* INCLUDED_com_haxepunk_graphics_prototype_Rect */ 
