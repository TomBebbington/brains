#ifndef INCLUDED_entities_Zombie
#define INCLUDED_entities_Zombie

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <entities/Person.h>
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS1(entities,Person)
HX_DECLARE_CLASS1(entities,PhysicalEntity)
HX_DECLARE_CLASS1(entities,Player)
HX_DECLARE_CLASS1(entities,Zombie)
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  Zombie_obj : public ::entities::Person_obj{
	public:
		typedef ::entities::Person_obj super;
		typedef Zombie_obj OBJ_;
		Zombie_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Zombie_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Zombie_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Zombie"); }

		virtual Void approach( Array< ::Dynamic > ps);
		Dynamic approach_dyn();

};

} // end namespace entities

#endif /* INCLUDED_entities_Zombie */ 
