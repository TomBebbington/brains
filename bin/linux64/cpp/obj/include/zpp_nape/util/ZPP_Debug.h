#ifndef INCLUDED_zpp_nape_util_ZPP_Debug
#define INCLUDED_zpp_nape_util_ZPP_Debug

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,util,Debug)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_AABB)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_Mat23)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_Debug)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_ShapeDebug)
namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  ZPP_Debug_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_Debug_obj OBJ_;
		ZPP_Debug_obj();
		Void __construct(int width,int height);

	public:
		static hx::ObjectPtr< ZPP_Debug_obj > __new(int width,int height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_Debug_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_Debug"); }

		virtual Void sup_setbg( int bgcol);
		Dynamic sup_setbg_dyn();

		virtual bool cull( ::zpp_nape::geom::ZPP_AABB aabb);
		Dynamic cull_dyn();

		::zpp_nape::geom::ZPP_AABB tmpab;
		virtual Void setform( );
		Dynamic setform_dyn();

		virtual Void xform_invalidate( );
		Dynamic xform_invalidate_dyn();

		::zpp_nape::geom::ZPP_AABB iport;
		::zpp_nape::geom::ZPP_AABB viewport;
		int height;
		int width;
		Float xdet;
		bool xnull;
		::zpp_nape::geom::ZPP_Mat23 xform;
		int bg_col;
		Float bg_b;
		Float bg_g;
		Float bg_r;
		::zpp_nape::util::ZPP_ShapeDebug d_shape;
		bool isbmp;
		::nape::util::Debug outer;
		static bool internal;
};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZPP_Debug */ 
