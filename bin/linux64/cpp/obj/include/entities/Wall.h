#ifndef INCLUDED_entities_Wall
#define INCLUDED_entities_Wall

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <entities/PhysicalEntity.h>
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS1(entities,PhysicalEntity)
HX_DECLARE_CLASS1(entities,Wall)
HX_DECLARE_CLASS2(nape,callbacks,CbType)
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  Wall_obj : public ::entities::PhysicalEntity_obj{
	public:
		typedef ::entities::PhysicalEntity_obj super;
		typedef Wall_obj OBJ_;
		Wall_obj();
		Void __construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_color);

	public:
		static hx::ObjectPtr< Wall_obj > __new(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_color);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Wall_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Wall"); }

		static ::nape::callbacks::CbType collisionType;
};

} // end namespace entities

#endif /* INCLUDED_entities_Wall */ 
