#ifndef INCLUDED_entities_Player
#define INCLUDED_entities_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <entities/Person.h>
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS1(entities,Bullet)
HX_DECLARE_CLASS1(entities,Person)
HX_DECLARE_CLASS1(entities,PhysicalEntity)
HX_DECLARE_CLASS1(entities,Player)
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  Player_obj : public ::entities::Person_obj{
	public:
		typedef ::entities::Person_obj super;
		typedef Player_obj OBJ_;
		Player_obj();
		Void __construct(::String __o_prefix);

	public:
		static hx::ObjectPtr< Player_obj > __new(::String __o_prefix);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Player_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Player"); }

		virtual ::entities::Bullet shoot( );
		Dynamic shoot_dyn();

		virtual Void update( );

		::String prefix;
		int dir;
		Float bulletTimeout;
};

} // end namespace entities

#endif /* INCLUDED_entities_Player */ 
