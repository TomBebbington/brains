#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_FluidArbiter
#include <zpp_nape/util/ZNPList_ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_FluidArbiter
#include <zpp_nape/util/ZNPNode_ZPP_FluidArbiter.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_FluidArbiter_obj::__construct()
{
HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","new","ZNPList_ZPP_FluidArbiter.new","zpp_nape/util/Lists.hx",11434)
{
	HX_STACK_LINE(11444)
	this->length = (int)0;
	HX_STACK_LINE(11443)
	this->pushmod = false;
	HX_STACK_LINE(11442)
	this->modified = false;
	HX_STACK_LINE(11435)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_FluidArbiter_obj::~ZNPList_ZPP_FluidArbiter_obj() { }

Dynamic ZNPList_ZPP_FluidArbiter_obj::__CreateEmpty() { return  new ZNPList_ZPP_FluidArbiter_obj; }
hx::ObjectPtr< ZNPList_ZPP_FluidArbiter_obj > ZNPList_ZPP_FluidArbiter_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_FluidArbiter_obj > result = new ZNPList_ZPP_FluidArbiter_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_FluidArbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_FluidArbiter_obj > result = new ZNPList_ZPP_FluidArbiter_obj();
	result->__construct();
	return result;}

::zpp_nape::dynamics::ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::at( int ind){
	HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","at","ZNPList_ZPP_FluidArbiter.at","zpp_nape/util/Lists.hx",11837)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(11846)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(11847)
	if (((it != null()))){
		HX_STACK_LINE(11847)
		return it->elt;
	}
	else{
		HX_STACK_LINE(11847)
		return null();
	}
	HX_STACK_LINE(11847)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::iterator_at( int ind){
	HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","iterator_at","ZNPList_ZPP_FluidArbiter.iterator_at","zpp_nape/util/Lists.hx",11824)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(11833)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11834)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(11834)
		ret = ret->next;
	}
	HX_STACK_LINE(11835)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,iterator_at,return )

::zpp_nape::dynamics::ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::back( ){
	HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","back","ZNPList_ZPP_FluidArbiter.back","zpp_nape/util/Lists.hx",11815)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11816)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11817)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(11818)
	while(((cur != null()))){
		HX_STACK_LINE(11819)
		ret = cur;
		HX_STACK_LINE(11820)
		cur = cur->next;
	}
	HX_STACK_LINE(11822)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,back,return )

::zpp_nape::dynamics::ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::front( ){
	HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","front","ZNPList_ZPP_FluidArbiter.front","zpp_nape/util/Lists.hx",11813)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11813)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,front,return )

bool ZNPList_ZPP_FluidArbiter_obj::inlined_has( ::zpp_nape::dynamics::ZPP_FluidArbiter obj){
	HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","inlined_has","ZNPList_ZPP_FluidArbiter.inlined_has","zpp_nape/util/Lists.hx",11782)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(11791)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11792)
	{
		HX_STACK_LINE(11793)
		ret = false;
		HX_STACK_LINE(11794)
		{
			HX_STACK_LINE(11795)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(11796)
			while(((cx_ite != null()))){
				HX_STACK_LINE(11797)
				::zpp_nape::dynamics::ZPP_FluidArbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(11799)
				if (((npite == obj))){
					HX_STACK_LINE(11800)
					ret = true;
					HX_STACK_LINE(11801)
					break;
				}
				HX_STACK_LINE(11804)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(11808)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,inlined_has,return )

bool ZNPList_ZPP_FluidArbiter_obj::has( ::zpp_nape::dynamics::ZPP_FluidArbiter obj){
	HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","has","ZNPList_ZPP_FluidArbiter.has","zpp_nape/util/Lists.hx",11778)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(11778)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11778)
	{
		HX_STACK_LINE(11778)
		ret = false;
		HX_STACK_LINE(11778)
		{
			HX_STACK_LINE(11778)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(11778)
			while(((cx_ite != null()))){
				HX_STACK_LINE(11778)
				::zpp_nape::dynamics::ZPP_FluidArbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(11778)
				if (((npite == obj))){
					HX_STACK_LINE(11778)
					ret = true;
					HX_STACK_LINE(11778)
					break;
				}
				HX_STACK_LINE(11778)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(11778)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,has,return )

int ZNPList_ZPP_FluidArbiter_obj::size( ){
	HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","size","ZNPList_ZPP_FluidArbiter.size","zpp_nape/util/Lists.hx",11775)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11775)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,size,return )

bool ZNPList_ZPP_FluidArbiter_obj::empty( ){
	HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","empty","ZNPList_ZPP_FluidArbiter.empty","zpp_nape/util/Lists.hx",11770)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11770)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,empty,return )

Void ZNPList_ZPP_FluidArbiter_obj::reverse( ){
{
		HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","reverse","ZNPList_ZPP_FluidArbiter.reverse","zpp_nape/util/Lists.hx",11754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11755)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(11756)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(11757)
		while(((cur != null()))){
			HX_STACK_LINE(11758)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(11759)
			cur->next = pre;
			HX_STACK_LINE(11760)
			this->head = cur;
			HX_STACK_LINE(11761)
			pre = cur;
			HX_STACK_LINE(11762)
			cur = nx;
		}
		HX_STACK_LINE(11764)
		this->modified = true;
		HX_STACK_LINE(11765)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,reverse,(void))

Void ZNPList_ZPP_FluidArbiter_obj::inlined_clear( ){
{
		HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","inlined_clear","ZNPList_ZPP_FluidArbiter.inlined_clear","zpp_nape/util/Lists.hx",11749)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11750)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(11750)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11750)
			this->head = ret->next;
			HX_STACK_LINE(11750)
			{
				HX_STACK_LINE(11750)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(11750)
				o->elt = null();
				HX_STACK_LINE(11750)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;
				HX_STACK_LINE(11750)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = o;
			}
			HX_STACK_LINE(11750)
			if (((this->head == null()))){
				HX_STACK_LINE(11750)
				this->pushmod = true;
			}
			HX_STACK_LINE(11750)
			this->modified = true;
			HX_STACK_LINE(11750)
			(this->length)--;
		}
		HX_STACK_LINE(11751)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,inlined_clear,(void))

Void ZNPList_ZPP_FluidArbiter_obj::clear( ){
{
		HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","clear","ZNPList_ZPP_FluidArbiter.clear","zpp_nape/util/Lists.hx",11744)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11744)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(11744)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11744)
			this->head = ret->next;
			HX_STACK_LINE(11744)
			{
				HX_STACK_LINE(11744)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(11744)
				o->elt = null();
				HX_STACK_LINE(11744)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;
				HX_STACK_LINE(11744)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = o;
			}
			HX_STACK_LINE(11744)
			if (((this->head == null()))){
				HX_STACK_LINE(11744)
				this->pushmod = true;
			}
			HX_STACK_LINE(11744)
			this->modified = true;
			HX_STACK_LINE(11744)
			(this->length)--;
		}
		HX_STACK_LINE(11744)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter pre,int n){
	HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","splice","ZNPList_ZPP_FluidArbiter.splice","zpp_nape/util/Lists.hx",11739)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(11740)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(11740)
		this->erase(pre);
	}
	HX_STACK_LINE(11741)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_FluidArbiter_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter pre){
	HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","inlined_erase","ZNPList_ZPP_FluidArbiter.inlined_erase","zpp_nape/util/Lists.hx",11693)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(11702)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(11703)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11704)
	if (((pre == null()))){
		HX_STACK_LINE(11705)
		old = this->head;
		HX_STACK_LINE(11706)
		ret = old->next;
		HX_STACK_LINE(11707)
		this->head = ret;
		HX_STACK_LINE(11708)
		if (((this->head == null()))){
			HX_STACK_LINE(11708)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(11711)
		old = pre->next;
		HX_STACK_LINE(11712)
		ret = old->next;
		HX_STACK_LINE(11713)
		pre->next = ret;
		HX_STACK_LINE(11714)
		if (((ret == null()))){
			HX_STACK_LINE(11714)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(11717)
	{
		HX_STACK_LINE(11718)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(11727)
		o->elt = null();
		HX_STACK_LINE(11728)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;
		HX_STACK_LINE(11729)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = o;
	}
	HX_STACK_LINE(11734)
	this->modified = true;
	HX_STACK_LINE(11735)
	(this->length)--;
	HX_STACK_LINE(11736)
	this->pushmod = true;
	HX_STACK_LINE(11737)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter pre){
	HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","erase","ZNPList_ZPP_FluidArbiter.erase","zpp_nape/util/Lists.hx",11689)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(11689)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(11689)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11689)
	if (((pre == null()))){
		HX_STACK_LINE(11689)
		old = this->head;
		HX_STACK_LINE(11689)
		ret = old->next;
		HX_STACK_LINE(11689)
		this->head = ret;
		HX_STACK_LINE(11689)
		if (((this->head == null()))){
			HX_STACK_LINE(11689)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(11689)
		old = pre->next;
		HX_STACK_LINE(11689)
		ret = old->next;
		HX_STACK_LINE(11689)
		pre->next = ret;
		HX_STACK_LINE(11689)
		if (((ret == null()))){
			HX_STACK_LINE(11689)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(11689)
	{
		HX_STACK_LINE(11689)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(11689)
		o->elt = null();
		HX_STACK_LINE(11689)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;
		HX_STACK_LINE(11689)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = o;
	}
	HX_STACK_LINE(11689)
	this->modified = true;
	HX_STACK_LINE(11689)
	(this->length)--;
	HX_STACK_LINE(11689)
	this->pushmod = true;
	HX_STACK_LINE(11689)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,erase,return )

bool ZNPList_ZPP_FluidArbiter_obj::inlined_try_remove( ::zpp_nape::dynamics::ZPP_FluidArbiter obj){
	HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","inlined_try_remove","ZNPList_ZPP_FluidArbiter.inlined_try_remove","zpp_nape/util/Lists.hx",11665)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(11674)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(11675)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(11676)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11677)
	while(((cur != null()))){
		HX_STACK_LINE(11678)
		if (((cur->elt == obj))){
			HX_STACK_LINE(11679)
			{
				HX_STACK_LINE(11679)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(11679)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(11679)
				if (((pre == null()))){
					HX_STACK_LINE(11679)
					old = this->head;
					HX_STACK_LINE(11679)
					ret1 = old->next;
					HX_STACK_LINE(11679)
					this->head = ret1;
					HX_STACK_LINE(11679)
					if (((this->head == null()))){
						HX_STACK_LINE(11679)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(11679)
					old = pre->next;
					HX_STACK_LINE(11679)
					ret1 = old->next;
					HX_STACK_LINE(11679)
					pre->next = ret1;
					HX_STACK_LINE(11679)
					if (((ret1 == null()))){
						HX_STACK_LINE(11679)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(11679)
				{
					HX_STACK_LINE(11679)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(11679)
					o->elt = null();
					HX_STACK_LINE(11679)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;
					HX_STACK_LINE(11679)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = o;
				}
				HX_STACK_LINE(11679)
				this->modified = true;
				HX_STACK_LINE(11679)
				(this->length)--;
				HX_STACK_LINE(11679)
				this->pushmod = true;
				HX_STACK_LINE(11679)
				ret1;
			}
			HX_STACK_LINE(11680)
			ret = true;
			HX_STACK_LINE(11681)
			break;
		}
		HX_STACK_LINE(11683)
		pre = cur;
		HX_STACK_LINE(11684)
		cur = cur->next;
	}
	HX_STACK_LINE(11686)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,inlined_try_remove,return )

Void ZNPList_ZPP_FluidArbiter_obj::inlined_remove( ::zpp_nape::dynamics::ZPP_FluidArbiter obj){
{
		HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","inlined_remove","ZNPList_ZPP_FluidArbiter.inlined_remove","zpp_nape/util/Lists.hx",11661)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(11661)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(11661)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(11661)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11661)
		while(((cur != null()))){
			HX_STACK_LINE(11661)
			if (((cur->elt == obj))){
				HX_STACK_LINE(11661)
				{
					HX_STACK_LINE(11661)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(11661)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(11661)
					if (((pre == null()))){
						HX_STACK_LINE(11661)
						old = this->head;
						HX_STACK_LINE(11661)
						ret1 = old->next;
						HX_STACK_LINE(11661)
						this->head = ret1;
						HX_STACK_LINE(11661)
						if (((this->head == null()))){
							HX_STACK_LINE(11661)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(11661)
						old = pre->next;
						HX_STACK_LINE(11661)
						ret1 = old->next;
						HX_STACK_LINE(11661)
						pre->next = ret1;
						HX_STACK_LINE(11661)
						if (((ret1 == null()))){
							HX_STACK_LINE(11661)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(11661)
					{
						HX_STACK_LINE(11661)
						::zpp_nape::util::ZNPNode_ZPP_FluidArbiter o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(11661)
						o->elt = null();
						HX_STACK_LINE(11661)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;
						HX_STACK_LINE(11661)
						::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = o;
					}
					HX_STACK_LINE(11661)
					this->modified = true;
					HX_STACK_LINE(11661)
					(this->length)--;
					HX_STACK_LINE(11661)
					this->pushmod = true;
					HX_STACK_LINE(11661)
					ret1;
				}
				HX_STACK_LINE(11661)
				ret = true;
				HX_STACK_LINE(11661)
				break;
			}
			HX_STACK_LINE(11661)
			pre = cur;
			HX_STACK_LINE(11661)
			cur = cur->next;
		}
		HX_STACK_LINE(11661)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,inlined_remove,(void))

bool ZNPList_ZPP_FluidArbiter_obj::try_remove( ::zpp_nape::dynamics::ZPP_FluidArbiter obj){
	HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","try_remove","ZNPList_ZPP_FluidArbiter.try_remove","zpp_nape/util/Lists.hx",11627)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(11636)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(11637)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(11638)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11639)
	while(((cur != null()))){
		HX_STACK_LINE(11640)
		if (((cur->elt == obj))){
			HX_STACK_LINE(11641)
			this->erase(pre);
			HX_STACK_LINE(11642)
			ret = true;
			HX_STACK_LINE(11643)
			break;
		}
		HX_STACK_LINE(11645)
		pre = cur;
		HX_STACK_LINE(11646)
		cur = cur->next;
	}
	HX_STACK_LINE(11648)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,try_remove,return )

Void ZNPList_ZPP_FluidArbiter_obj::remove( ::zpp_nape::dynamics::ZPP_FluidArbiter obj){
{
		HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","remove","ZNPList_ZPP_FluidArbiter.remove","zpp_nape/util/Lists.hx",11625)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(11625)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(11625)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(11625)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11625)
		while(((cur != null()))){
			HX_STACK_LINE(11625)
			if (((cur->elt == obj))){
				HX_STACK_LINE(11625)
				{
					HX_STACK_LINE(11625)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(11625)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(11625)
					if (((pre == null()))){
						HX_STACK_LINE(11625)
						old = this->head;
						HX_STACK_LINE(11625)
						ret1 = old->next;
						HX_STACK_LINE(11625)
						this->head = ret1;
						HX_STACK_LINE(11625)
						if (((this->head == null()))){
							HX_STACK_LINE(11625)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(11625)
						old = pre->next;
						HX_STACK_LINE(11625)
						ret1 = old->next;
						HX_STACK_LINE(11625)
						pre->next = ret1;
						HX_STACK_LINE(11625)
						if (((ret1 == null()))){
							HX_STACK_LINE(11625)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(11625)
					{
						HX_STACK_LINE(11625)
						::zpp_nape::util::ZNPNode_ZPP_FluidArbiter o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(11625)
						o->elt = null();
						HX_STACK_LINE(11625)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;
						HX_STACK_LINE(11625)
						::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = o;
					}
					HX_STACK_LINE(11625)
					this->modified = true;
					HX_STACK_LINE(11625)
					(this->length)--;
					HX_STACK_LINE(11625)
					this->pushmod = true;
					HX_STACK_LINE(11625)
					ret1;
				}
				HX_STACK_LINE(11625)
				ret = true;
				HX_STACK_LINE(11625)
				break;
			}
			HX_STACK_LINE(11625)
			pre = cur;
			HX_STACK_LINE(11625)
			cur = cur->next;
		}
		HX_STACK_LINE(11625)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,remove,(void))

::zpp_nape::dynamics::ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","inlined_pop_unsafe","ZNPList_ZPP_FluidArbiter.inlined_pop_unsafe","zpp_nape/util/Lists.hx",11603)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11612)
	::zpp_nape::dynamics::ZPP_FluidArbiter ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11613)
	this->pop();
	HX_STACK_LINE(11614)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,inlined_pop_unsafe,return )

::zpp_nape::dynamics::ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::pop_unsafe( ){
	HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","pop_unsafe","ZNPList_ZPP_FluidArbiter.pop_unsafe","zpp_nape/util/Lists.hx",11599)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11599)
	::zpp_nape::dynamics::ZPP_FluidArbiter ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11599)
	this->pop();
	HX_STACK_LINE(11599)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,pop_unsafe,return )

Void ZNPList_ZPP_FluidArbiter_obj::inlined_pop( ){
{
		HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","inlined_pop","ZNPList_ZPP_FluidArbiter.inlined_pop","zpp_nape/util/Lists.hx",11565)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11574)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11575)
		this->head = ret->next;
		HX_STACK_LINE(11577)
		{
			HX_STACK_LINE(11578)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(11587)
			o->elt = null();
			HX_STACK_LINE(11588)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;
			HX_STACK_LINE(11589)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(11594)
		if (((this->head == null()))){
			HX_STACK_LINE(11594)
			this->pushmod = true;
		}
		HX_STACK_LINE(11595)
		this->modified = true;
		HX_STACK_LINE(11596)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,inlined_pop,(void))

Void ZNPList_ZPP_FluidArbiter_obj::pop( ){
{
		HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","pop","ZNPList_ZPP_FluidArbiter.pop","zpp_nape/util/Lists.hx",11561)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11561)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11561)
		this->head = ret->next;
		HX_STACK_LINE(11561)
		{
			HX_STACK_LINE(11561)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(11561)
			o->elt = null();
			HX_STACK_LINE(11561)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;
			HX_STACK_LINE(11561)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(11561)
		if (((this->head == null()))){
			HX_STACK_LINE(11561)
			this->pushmod = true;
		}
		HX_STACK_LINE(11561)
		this->modified = true;
		HX_STACK_LINE(11561)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cur,::zpp_nape::dynamics::ZPP_FluidArbiter o){
	HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","inlined_insert","ZNPList_ZPP_FluidArbiter.inlined_insert","zpp_nape/util/Lists.hx",11517)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(11526)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(11526)
	{
		HX_STACK_LINE(11527)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11528)
		{
			HX_STACK_LINE(11529)
			if (((::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool == null()))){
				HX_STACK_LINE(11530)
				ret = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::__new();
			}
			else{
				HX_STACK_LINE(11536)
				ret = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;
				HX_STACK_LINE(11537)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = ret->next;
				HX_STACK_LINE(11538)
				ret->next = null();
			}
			HX_STACK_LINE(11543)
			Dynamic();
		}
		HX_STACK_LINE(11545)
		ret->elt = o;
		HX_STACK_LINE(11546)
		temp = ret;
	}
	HX_STACK_LINE(11548)
	if (((cur == null()))){
		HX_STACK_LINE(11549)
		temp->next = this->head;
		HX_STACK_LINE(11550)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(11553)
		temp->next = cur->next;
		HX_STACK_LINE(11554)
		cur->next = temp;
	}
	HX_STACK_LINE(11556)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(11557)
	(this->length)++;
	HX_STACK_LINE(11558)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_FluidArbiter_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cur,::zpp_nape::dynamics::ZPP_FluidArbiter o){
	HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","insert","ZNPList_ZPP_FluidArbiter.insert","zpp_nape/util/Lists.hx",11513)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(11513)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(11513)
	{
		HX_STACK_LINE(11513)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11513)
		{
			HX_STACK_LINE(11513)
			if (((::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool == null()))){
				HX_STACK_LINE(11513)
				ret = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::__new();
			}
			else{
				HX_STACK_LINE(11513)
				ret = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;
				HX_STACK_LINE(11513)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = ret->next;
				HX_STACK_LINE(11513)
				ret->next = null();
			}
			HX_STACK_LINE(11513)
			Dynamic();
		}
		HX_STACK_LINE(11513)
		ret->elt = o;
		HX_STACK_LINE(11513)
		temp = ret;
	}
	HX_STACK_LINE(11513)
	if (((cur == null()))){
		HX_STACK_LINE(11513)
		temp->next = this->head;
		HX_STACK_LINE(11513)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(11513)
		temp->next = cur->next;
		HX_STACK_LINE(11513)
		cur->next = temp;
	}
	HX_STACK_LINE(11513)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(11513)
	(this->length)++;
	HX_STACK_LINE(11513)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_FluidArbiter_obj,insert,return )

Void ZNPList_ZPP_FluidArbiter_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_FluidArbiter x){
{
		HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","addAll","ZNPList_ZPP_FluidArbiter.addAll","zpp_nape/util/Lists.hx",11503)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(11504)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(11505)
		while(((cx_ite != null()))){
			HX_STACK_LINE(11506)
			::zpp_nape::dynamics::ZPP_FluidArbiter i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(11507)
			this->add(i);
			HX_STACK_LINE(11508)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,addAll,(void))

::zpp_nape::dynamics::ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::inlined_add( ::zpp_nape::dynamics::ZPP_FluidArbiter o){
	HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","inlined_add","ZNPList_ZPP_FluidArbiter.inlined_add","zpp_nape/util/Lists.hx",11457)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(11466)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(11466)
	{
		HX_STACK_LINE(11467)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11468)
		{
			HX_STACK_LINE(11469)
			if (((::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool == null()))){
				HX_STACK_LINE(11470)
				ret = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::__new();
			}
			else{
				HX_STACK_LINE(11476)
				ret = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;
				HX_STACK_LINE(11477)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = ret->next;
				HX_STACK_LINE(11478)
				ret->next = null();
			}
			HX_STACK_LINE(11483)
			Dynamic();
		}
		HX_STACK_LINE(11485)
		ret->elt = o;
		HX_STACK_LINE(11486)
		temp = ret;
	}
	HX_STACK_LINE(11488)
	temp->next = this->head;
	HX_STACK_LINE(11489)
	this->head = temp;
	HX_STACK_LINE(11490)
	this->modified = true;
	HX_STACK_LINE(11491)
	(this->length)++;
	HX_STACK_LINE(11492)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,inlined_add,return )

::zpp_nape::dynamics::ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::add( ::zpp_nape::dynamics::ZPP_FluidArbiter o){
	HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","add","ZNPList_ZPP_FluidArbiter.add","zpp_nape/util/Lists.hx",11453)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(11453)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(11453)
	{
		HX_STACK_LINE(11453)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11453)
		{
			HX_STACK_LINE(11453)
			if (((::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool == null()))){
				HX_STACK_LINE(11453)
				ret = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::__new();
			}
			else{
				HX_STACK_LINE(11453)
				ret = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;
				HX_STACK_LINE(11453)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = ret->next;
				HX_STACK_LINE(11453)
				ret->next = null();
			}
			HX_STACK_LINE(11453)
			Dynamic();
		}
		HX_STACK_LINE(11453)
		ret->elt = o;
		HX_STACK_LINE(11453)
		temp = ret;
	}
	HX_STACK_LINE(11453)
	temp->next = this->head;
	HX_STACK_LINE(11453)
	this->head = temp;
	HX_STACK_LINE(11453)
	this->modified = true;
	HX_STACK_LINE(11453)
	(this->length)++;
	HX_STACK_LINE(11453)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,add,return )

Void ZNPList_ZPP_FluidArbiter_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter i){
{
		HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","setbegin","ZNPList_ZPP_FluidArbiter.setbegin","zpp_nape/util/Lists.hx",11447)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(11448)
		this->head = i;
		HX_STACK_LINE(11449)
		this->modified = true;
		HX_STACK_LINE(11450)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::begin( ){
	HX_STACK_FRAME("ZNPList_ZPP_FluidArbiter","begin","ZNPList_ZPP_FluidArbiter.begin","zpp_nape/util/Lists.hx",11440)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11440)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,begin,return )


ZNPList_ZPP_FluidArbiter_obj::ZNPList_ZPP_FluidArbiter_obj()
{
}

void ZNPList_ZPP_FluidArbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_FluidArbiter);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_FluidArbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_FluidArbiter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"head") ) { return head; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"front") ) { return front_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"splice") ) { return splice_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		if (HX_FIELD_EQ(inName,"addAll") ) { return addAll_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		if (HX_FIELD_EQ(inName,"pushmod") ) { return pushmod; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setbegin") ) { return setbegin_dyn(); }
		if (HX_FIELD_EQ(inName,"modified") ) { return modified; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"try_remove") ) { return try_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"pop_unsafe") ) { return pop_unsafe_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"iterator_at") ) { return iterator_at_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_has") ) { return inlined_has_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_pop") ) { return inlined_pop_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_add") ) { return inlined_add_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inlined_clear") ) { return inlined_clear_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_erase") ) { return inlined_erase_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inlined_remove") ) { return inlined_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_insert") ) { return inlined_insert_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"inlined_try_remove") ) { return inlined_try_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_pop_unsafe") ) { return inlined_pop_unsafe_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZNPList_ZPP_FluidArbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { pushmod=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modified") ) { modified=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZNPList_ZPP_FluidArbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("pushmod"));
	outFields->push(HX_CSTRING("modified"));
	outFields->push(HX_CSTRING("head"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("at"),
	HX_CSTRING("iterator_at"),
	HX_CSTRING("back"),
	HX_CSTRING("front"),
	HX_CSTRING("inlined_has"),
	HX_CSTRING("has"),
	HX_CSTRING("size"),
	HX_CSTRING("empty"),
	HX_CSTRING("reverse"),
	HX_CSTRING("inlined_clear"),
	HX_CSTRING("clear"),
	HX_CSTRING("splice"),
	HX_CSTRING("inlined_erase"),
	HX_CSTRING("erase"),
	HX_CSTRING("inlined_try_remove"),
	HX_CSTRING("inlined_remove"),
	HX_CSTRING("try_remove"),
	HX_CSTRING("remove"),
	HX_CSTRING("inlined_pop_unsafe"),
	HX_CSTRING("pop_unsafe"),
	HX_CSTRING("inlined_pop"),
	HX_CSTRING("pop"),
	HX_CSTRING("inlined_insert"),
	HX_CSTRING("insert"),
	HX_CSTRING("addAll"),
	HX_CSTRING("inlined_add"),
	HX_CSTRING("add"),
	HX_CSTRING("setbegin"),
	HX_CSTRING("length"),
	HX_CSTRING("pushmod"),
	HX_CSTRING("modified"),
	HX_CSTRING("begin"),
	HX_CSTRING("head"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_FluidArbiter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_FluidArbiter_obj::__mClass,"__mClass");
};

#endif

Class ZNPList_ZPP_FluidArbiter_obj::__mClass;

void ZNPList_ZPP_FluidArbiter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_FluidArbiter"), hx::TCanCast< ZNPList_ZPP_FluidArbiter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void ZNPList_ZPP_FluidArbiter_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
