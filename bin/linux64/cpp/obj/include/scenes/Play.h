#ifndef INCLUDED_scenes_Play
#define INCLUDED_scenes_Play

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Scene.h>
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Scene)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS1(entities,Person)
HX_DECLARE_CLASS1(entities,PhysicalEntity)
HX_DECLARE_CLASS1(entities,Player)
HX_DECLARE_CLASS1(entities,Wall)
HX_DECLARE_CLASS1(entities,Zombie)
HX_DECLARE_CLASS2(nape,space,Space)
HX_DECLARE_CLASS1(scenes,Play)
namespace scenes{


class HXCPP_CLASS_ATTRIBUTES  Play_obj : public ::com::haxepunk::Scene_obj{
	public:
		typedef ::com::haxepunk::Scene_obj super;
		typedef Play_obj OBJ_;
		Play_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Play_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Play_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Play"); }

		virtual Void update( );

		virtual ::entities::PhysicalEntity addPhysical( ::entities::PhysicalEntity p);
		Dynamic addPhysical_dyn();

		virtual Void begin( );

		Array< ::Dynamic > walls;
		::entities::Wall floor;
		Array< ::Dynamic > zombies;
		Array< ::Dynamic > players;
		::nape::space::Space space;
		static ::scenes::Play current;
};

} // end namespace scenes

#endif /* INCLUDED_scenes_Play */ 
