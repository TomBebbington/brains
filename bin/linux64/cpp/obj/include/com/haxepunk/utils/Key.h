#ifndef INCLUDED_com_haxepunk_utils_Key
#define INCLUDED_com_haxepunk_utils_Key

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,utils,Key)
namespace com{
namespace haxepunk{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  Key_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Key_obj OBJ_;
		Key_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Key_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Key_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Key"); }

		static ::String nameOfKey( int _char);
		static Dynamic nameOfKey_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace utils

#endif /* INCLUDED_com_haxepunk_utils_Key */ 
