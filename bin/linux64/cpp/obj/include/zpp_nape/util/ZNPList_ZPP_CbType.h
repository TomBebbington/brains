#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#define INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_CbType)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_CbType)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ZPP_CbType)
namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  ZNPList_ZPP_CbType_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZNPList_ZPP_CbType_obj OBJ_;
		ZNPList_ZPP_CbType_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZNPList_ZPP_CbType_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZNPList_ZPP_CbType_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZNPList_ZPP_CbType"); }

		virtual ::zpp_nape::callbacks::ZPP_CbType at( int ind);
		Dynamic at_dyn();

		virtual ::zpp_nape::util::ZNPNode_ZPP_CbType iterator_at( int ind);
		Dynamic iterator_at_dyn();

		virtual ::zpp_nape::callbacks::ZPP_CbType back( );
		Dynamic back_dyn();

		virtual ::zpp_nape::callbacks::ZPP_CbType front( );
		Dynamic front_dyn();

		virtual bool inlined_has( ::zpp_nape::callbacks::ZPP_CbType obj);
		Dynamic inlined_has_dyn();

		virtual bool has( ::zpp_nape::callbacks::ZPP_CbType obj);
		Dynamic has_dyn();

		virtual int size( );
		Dynamic size_dyn();

		virtual bool empty( );
		Dynamic empty_dyn();

		virtual Void reverse( );
		Dynamic reverse_dyn();

		virtual Void inlined_clear( );
		Dynamic inlined_clear_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual ::zpp_nape::util::ZNPNode_ZPP_CbType splice( ::zpp_nape::util::ZNPNode_ZPP_CbType pre,int n);
		Dynamic splice_dyn();

		virtual ::zpp_nape::util::ZNPNode_ZPP_CbType inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_CbType pre);
		Dynamic inlined_erase_dyn();

		virtual ::zpp_nape::util::ZNPNode_ZPP_CbType erase( ::zpp_nape::util::ZNPNode_ZPP_CbType pre);
		Dynamic erase_dyn();

		virtual bool inlined_try_remove( ::zpp_nape::callbacks::ZPP_CbType obj);
		Dynamic inlined_try_remove_dyn();

		virtual Void inlined_remove( ::zpp_nape::callbacks::ZPP_CbType obj);
		Dynamic inlined_remove_dyn();

		virtual bool try_remove( ::zpp_nape::callbacks::ZPP_CbType obj);
		Dynamic try_remove_dyn();

		virtual Void remove( ::zpp_nape::callbacks::ZPP_CbType obj);
		Dynamic remove_dyn();

		virtual ::zpp_nape::callbacks::ZPP_CbType inlined_pop_unsafe( );
		Dynamic inlined_pop_unsafe_dyn();

		virtual ::zpp_nape::callbacks::ZPP_CbType pop_unsafe( );
		Dynamic pop_unsafe_dyn();

		virtual Void inlined_pop( );
		Dynamic inlined_pop_dyn();

		virtual Void pop( );
		Dynamic pop_dyn();

		virtual ::zpp_nape::util::ZNPNode_ZPP_CbType inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_CbType cur,::zpp_nape::callbacks::ZPP_CbType o);
		Dynamic inlined_insert_dyn();

		virtual ::zpp_nape::util::ZNPNode_ZPP_CbType insert( ::zpp_nape::util::ZNPNode_ZPP_CbType cur,::zpp_nape::callbacks::ZPP_CbType o);
		Dynamic insert_dyn();

		virtual Void addAll( ::zpp_nape::util::ZNPList_ZPP_CbType x);
		Dynamic addAll_dyn();

		virtual ::zpp_nape::callbacks::ZPP_CbType inlined_add( ::zpp_nape::callbacks::ZPP_CbType o);
		Dynamic inlined_add_dyn();

		virtual ::zpp_nape::callbacks::ZPP_CbType add( ::zpp_nape::callbacks::ZPP_CbType o);
		Dynamic add_dyn();

		virtual Void setbegin( ::zpp_nape::util::ZNPNode_ZPP_CbType i);
		Dynamic setbegin_dyn();

		int length;
		bool pushmod;
		bool modified;
		virtual ::zpp_nape::util::ZNPNode_ZPP_CbType begin( );
		Dynamic begin_dyn();

		::zpp_nape::util::ZNPNode_ZPP_CbType head;
};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType */ 
