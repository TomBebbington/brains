#ifndef INCLUDED_entities_Bullet
#define INCLUDED_entities_Bullet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <entities/PhysicalEntity.h>
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS1(entities,Bullet)
HX_DECLARE_CLASS1(entities,PhysicalEntity)
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  Bullet_obj : public ::entities::PhysicalEntity_obj{
	public:
		typedef ::entities::PhysicalEntity_obj super;
		typedef Bullet_obj OBJ_;
		Bullet_obj();
		Void __construct(int dir);

	public:
		static hx::ObjectPtr< Bullet_obj > __new(int dir);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Bullet_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Bullet"); }

		virtual Void update( );

		int dir;
};

} // end namespace entities

#endif /* INCLUDED_entities_Bullet */ 
