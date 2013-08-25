#ifndef INCLUDED_entities_Person
#define INCLUDED_entities_Person

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <entities/PhysicalEntity.h>
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS1(entities,Person)
HX_DECLARE_CLASS1(entities,PhysicalEntity)
HX_DECLARE_CLASS2(nape,callbacks,Callback)
HX_DECLARE_CLASS2(nape,callbacks,CbType)
HX_DECLARE_CLASS2(nape,callbacks,InteractionCallback)
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  Person_obj : public ::entities::PhysicalEntity_obj{
	public:
		typedef ::entities::PhysicalEntity_obj super;
		typedef Person_obj OBJ_;
		Person_obj();
		Void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y);

	public:
		static hx::ObjectPtr< Person_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Person_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Person"); }

		virtual Void jump( );
		Dynamic jump_dyn();

		virtual Void die( );
		Dynamic die_dyn();

		virtual Void update( );

		virtual Void collideWall( ::nape::callbacks::InteractionCallback c);
		Dynamic collideWall_dyn();

		virtual Void added( );

		bool canJump;
		Float health;
		static ::nape::callbacks::CbType collisionType;
};

} // end namespace entities

#endif /* INCLUDED_entities_Person */ 
