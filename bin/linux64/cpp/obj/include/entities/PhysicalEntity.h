#ifndef INCLUDED_entities_PhysicalEntity
#define INCLUDED_entities_PhysicalEntity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Entity.h>
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS1(entities,PhysicalEntity)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,BodyType)
HX_DECLARE_CLASS2(nape,phys,Interactor)
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  PhysicalEntity_obj : public ::com::haxepunk::Entity_obj{
	public:
		typedef ::com::haxepunk::Entity_obj super;
		typedef PhysicalEntity_obj OBJ_;
		PhysicalEntity_obj();
		Void __construct(::nape::phys::BodyType b);

	public:
		static hx::ObjectPtr< PhysicalEntity_obj > __new(::nape::phys::BodyType b);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PhysicalEntity_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PhysicalEntity"); }

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void move( Float x,Float y);
		Dynamic move_dyn();

		virtual Void update( );

		::nape::phys::Body body;
};

} // end namespace entities

#endif /* INCLUDED_entities_PhysicalEntity */ 
