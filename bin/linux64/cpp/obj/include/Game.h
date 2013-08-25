#ifndef INCLUDED_Game
#define INCLUDED_Game

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Game)


class HXCPP_CLASS_ATTRIBUTES  Game_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Game_obj OBJ_;
		Game_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Game_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Game_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Game"); }

		static Void main( );
		static Dynamic main_dyn();

};


#endif /* INCLUDED_Game */ 
