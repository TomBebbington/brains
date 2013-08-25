#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_SensorArbiter
#include <zpp_nape/dynamics/ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_SensorArbiter
#include <zpp_nape/util/ZNPList_ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SensorArbiter
#include <zpp_nape/util/ZNPNode_ZPP_SensorArbiter.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_SensorArbiter_obj::__construct()
{
HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","new","ZNPList_ZPP_SensorArbiter.new","zpp_nape/util/Lists.hx",11851)
{
	HX_STACK_LINE(11861)
	this->length = (int)0;
	HX_STACK_LINE(11860)
	this->pushmod = false;
	HX_STACK_LINE(11859)
	this->modified = false;
	HX_STACK_LINE(11852)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_SensorArbiter_obj::~ZNPList_ZPP_SensorArbiter_obj() { }

Dynamic ZNPList_ZPP_SensorArbiter_obj::__CreateEmpty() { return  new ZNPList_ZPP_SensorArbiter_obj; }
hx::ObjectPtr< ZNPList_ZPP_SensorArbiter_obj > ZNPList_ZPP_SensorArbiter_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_SensorArbiter_obj > result = new ZNPList_ZPP_SensorArbiter_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_SensorArbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_SensorArbiter_obj > result = new ZNPList_ZPP_SensorArbiter_obj();
	result->__construct();
	return result;}

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::at( int ind){
	HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","at","ZNPList_ZPP_SensorArbiter.at","zpp_nape/util/Lists.hx",12254)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(12263)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(12264)
	if (((it != null()))){
		HX_STACK_LINE(12264)
		return it->elt;
	}
	else{
		HX_STACK_LINE(12264)
		return null();
	}
	HX_STACK_LINE(12264)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::iterator_at( int ind){
	HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","iterator_at","ZNPList_ZPP_SensorArbiter.iterator_at","zpp_nape/util/Lists.hx",12241)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(12250)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12251)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(12251)
		ret = ret->next;
	}
	HX_STACK_LINE(12252)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,iterator_at,return )

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::back( ){
	HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","back","ZNPList_ZPP_SensorArbiter.back","zpp_nape/util/Lists.hx",12232)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12233)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12234)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(12235)
	while(((cur != null()))){
		HX_STACK_LINE(12236)
		ret = cur;
		HX_STACK_LINE(12237)
		cur = cur->next;
	}
	HX_STACK_LINE(12239)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,back,return )

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::front( ){
	HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","front","ZNPList_ZPP_SensorArbiter.front","zpp_nape/util/Lists.hx",12230)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12230)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,front,return )

bool ZNPList_ZPP_SensorArbiter_obj::inlined_has( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
	HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","inlined_has","ZNPList_ZPP_SensorArbiter.inlined_has","zpp_nape/util/Lists.hx",12199)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(12208)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12209)
	{
		HX_STACK_LINE(12210)
		ret = false;
		HX_STACK_LINE(12211)
		{
			HX_STACK_LINE(12212)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(12213)
			while(((cx_ite != null()))){
				HX_STACK_LINE(12214)
				::zpp_nape::dynamics::ZPP_SensorArbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(12216)
				if (((npite == obj))){
					HX_STACK_LINE(12217)
					ret = true;
					HX_STACK_LINE(12218)
					break;
				}
				HX_STACK_LINE(12221)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(12225)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,inlined_has,return )

bool ZNPList_ZPP_SensorArbiter_obj::has( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
	HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","has","ZNPList_ZPP_SensorArbiter.has","zpp_nape/util/Lists.hx",12195)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(12195)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12195)
	{
		HX_STACK_LINE(12195)
		ret = false;
		HX_STACK_LINE(12195)
		{
			HX_STACK_LINE(12195)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(12195)
			while(((cx_ite != null()))){
				HX_STACK_LINE(12195)
				::zpp_nape::dynamics::ZPP_SensorArbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(12195)
				if (((npite == obj))){
					HX_STACK_LINE(12195)
					ret = true;
					HX_STACK_LINE(12195)
					break;
				}
				HX_STACK_LINE(12195)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(12195)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,has,return )

int ZNPList_ZPP_SensorArbiter_obj::size( ){
	HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","size","ZNPList_ZPP_SensorArbiter.size","zpp_nape/util/Lists.hx",12192)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12192)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,size,return )

bool ZNPList_ZPP_SensorArbiter_obj::empty( ){
	HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","empty","ZNPList_ZPP_SensorArbiter.empty","zpp_nape/util/Lists.hx",12187)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12187)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,empty,return )

Void ZNPList_ZPP_SensorArbiter_obj::reverse( ){
{
		HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","reverse","ZNPList_ZPP_SensorArbiter.reverse","zpp_nape/util/Lists.hx",12171)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12172)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(12173)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(12174)
		while(((cur != null()))){
			HX_STACK_LINE(12175)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(12176)
			cur->next = pre;
			HX_STACK_LINE(12177)
			this->head = cur;
			HX_STACK_LINE(12178)
			pre = cur;
			HX_STACK_LINE(12179)
			cur = nx;
		}
		HX_STACK_LINE(12181)
		this->modified = true;
		HX_STACK_LINE(12182)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,reverse,(void))

Void ZNPList_ZPP_SensorArbiter_obj::inlined_clear( ){
{
		HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","inlined_clear","ZNPList_ZPP_SensorArbiter.inlined_clear","zpp_nape/util/Lists.hx",12166)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12167)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(12167)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(12167)
			this->head = ret->next;
			HX_STACK_LINE(12167)
			{
				HX_STACK_LINE(12167)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(12167)
				o->elt = null();
				HX_STACK_LINE(12167)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
				HX_STACK_LINE(12167)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
			}
			HX_STACK_LINE(12167)
			if (((this->head == null()))){
				HX_STACK_LINE(12167)
				this->pushmod = true;
			}
			HX_STACK_LINE(12167)
			this->modified = true;
			HX_STACK_LINE(12167)
			(this->length)--;
		}
		HX_STACK_LINE(12168)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,inlined_clear,(void))

Void ZNPList_ZPP_SensorArbiter_obj::clear( ){
{
		HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","clear","ZNPList_ZPP_SensorArbiter.clear","zpp_nape/util/Lists.hx",12161)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12161)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(12161)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(12161)
			this->head = ret->next;
			HX_STACK_LINE(12161)
			{
				HX_STACK_LINE(12161)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(12161)
				o->elt = null();
				HX_STACK_LINE(12161)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
				HX_STACK_LINE(12161)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
			}
			HX_STACK_LINE(12161)
			if (((this->head == null()))){
				HX_STACK_LINE(12161)
				this->pushmod = true;
			}
			HX_STACK_LINE(12161)
			this->modified = true;
			HX_STACK_LINE(12161)
			(this->length)--;
		}
		HX_STACK_LINE(12161)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre,int n){
	HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","splice","ZNPList_ZPP_SensorArbiter.splice","zpp_nape/util/Lists.hx",12156)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(12157)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(12157)
		this->erase(pre);
	}
	HX_STACK_LINE(12158)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SensorArbiter_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre){
	HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","inlined_erase","ZNPList_ZPP_SensorArbiter.inlined_erase","zpp_nape/util/Lists.hx",12110)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(12119)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(12120)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12121)
	if (((pre == null()))){
		HX_STACK_LINE(12122)
		old = this->head;
		HX_STACK_LINE(12123)
		ret = old->next;
		HX_STACK_LINE(12124)
		this->head = ret;
		HX_STACK_LINE(12125)
		if (((this->head == null()))){
			HX_STACK_LINE(12125)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(12128)
		old = pre->next;
		HX_STACK_LINE(12129)
		ret = old->next;
		HX_STACK_LINE(12130)
		pre->next = ret;
		HX_STACK_LINE(12131)
		if (((ret == null()))){
			HX_STACK_LINE(12131)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(12134)
	{
		HX_STACK_LINE(12135)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(12144)
		o->elt = null();
		HX_STACK_LINE(12145)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
		HX_STACK_LINE(12146)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
	}
	HX_STACK_LINE(12151)
	this->modified = true;
	HX_STACK_LINE(12152)
	(this->length)--;
	HX_STACK_LINE(12153)
	this->pushmod = true;
	HX_STACK_LINE(12154)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre){
	HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","erase","ZNPList_ZPP_SensorArbiter.erase","zpp_nape/util/Lists.hx",12106)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(12106)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(12106)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12106)
	if (((pre == null()))){
		HX_STACK_LINE(12106)
		old = this->head;
		HX_STACK_LINE(12106)
		ret = old->next;
		HX_STACK_LINE(12106)
		this->head = ret;
		HX_STACK_LINE(12106)
		if (((this->head == null()))){
			HX_STACK_LINE(12106)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(12106)
		old = pre->next;
		HX_STACK_LINE(12106)
		ret = old->next;
		HX_STACK_LINE(12106)
		pre->next = ret;
		HX_STACK_LINE(12106)
		if (((ret == null()))){
			HX_STACK_LINE(12106)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(12106)
	{
		HX_STACK_LINE(12106)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(12106)
		o->elt = null();
		HX_STACK_LINE(12106)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
		HX_STACK_LINE(12106)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
	}
	HX_STACK_LINE(12106)
	this->modified = true;
	HX_STACK_LINE(12106)
	(this->length)--;
	HX_STACK_LINE(12106)
	this->pushmod = true;
	HX_STACK_LINE(12106)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,erase,return )

bool ZNPList_ZPP_SensorArbiter_obj::inlined_try_remove( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
	HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","inlined_try_remove","ZNPList_ZPP_SensorArbiter.inlined_try_remove","zpp_nape/util/Lists.hx",12082)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(12091)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(12092)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(12093)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12094)
	while(((cur != null()))){
		HX_STACK_LINE(12095)
		if (((cur->elt == obj))){
			HX_STACK_LINE(12096)
			{
				HX_STACK_LINE(12096)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(12096)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(12096)
				if (((pre == null()))){
					HX_STACK_LINE(12096)
					old = this->head;
					HX_STACK_LINE(12096)
					ret1 = old->next;
					HX_STACK_LINE(12096)
					this->head = ret1;
					HX_STACK_LINE(12096)
					if (((this->head == null()))){
						HX_STACK_LINE(12096)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(12096)
					old = pre->next;
					HX_STACK_LINE(12096)
					ret1 = old->next;
					HX_STACK_LINE(12096)
					pre->next = ret1;
					HX_STACK_LINE(12096)
					if (((ret1 == null()))){
						HX_STACK_LINE(12096)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(12096)
				{
					HX_STACK_LINE(12096)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(12096)
					o->elt = null();
					HX_STACK_LINE(12096)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
					HX_STACK_LINE(12096)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
				}
				HX_STACK_LINE(12096)
				this->modified = true;
				HX_STACK_LINE(12096)
				(this->length)--;
				HX_STACK_LINE(12096)
				this->pushmod = true;
				HX_STACK_LINE(12096)
				ret1;
			}
			HX_STACK_LINE(12097)
			ret = true;
			HX_STACK_LINE(12098)
			break;
		}
		HX_STACK_LINE(12100)
		pre = cur;
		HX_STACK_LINE(12101)
		cur = cur->next;
	}
	HX_STACK_LINE(12103)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,inlined_try_remove,return )

Void ZNPList_ZPP_SensorArbiter_obj::inlined_remove( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
{
		HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","inlined_remove","ZNPList_ZPP_SensorArbiter.inlined_remove","zpp_nape/util/Lists.hx",12078)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(12078)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(12078)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(12078)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12078)
		while(((cur != null()))){
			HX_STACK_LINE(12078)
			if (((cur->elt == obj))){
				HX_STACK_LINE(12078)
				{
					HX_STACK_LINE(12078)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(12078)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(12078)
					if (((pre == null()))){
						HX_STACK_LINE(12078)
						old = this->head;
						HX_STACK_LINE(12078)
						ret1 = old->next;
						HX_STACK_LINE(12078)
						this->head = ret1;
						HX_STACK_LINE(12078)
						if (((this->head == null()))){
							HX_STACK_LINE(12078)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(12078)
						old = pre->next;
						HX_STACK_LINE(12078)
						ret1 = old->next;
						HX_STACK_LINE(12078)
						pre->next = ret1;
						HX_STACK_LINE(12078)
						if (((ret1 == null()))){
							HX_STACK_LINE(12078)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(12078)
					{
						HX_STACK_LINE(12078)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(12078)
						o->elt = null();
						HX_STACK_LINE(12078)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
						HX_STACK_LINE(12078)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
					}
					HX_STACK_LINE(12078)
					this->modified = true;
					HX_STACK_LINE(12078)
					(this->length)--;
					HX_STACK_LINE(12078)
					this->pushmod = true;
					HX_STACK_LINE(12078)
					ret1;
				}
				HX_STACK_LINE(12078)
				ret = true;
				HX_STACK_LINE(12078)
				break;
			}
			HX_STACK_LINE(12078)
			pre = cur;
			HX_STACK_LINE(12078)
			cur = cur->next;
		}
		HX_STACK_LINE(12078)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,inlined_remove,(void))

bool ZNPList_ZPP_SensorArbiter_obj::try_remove( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
	HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","try_remove","ZNPList_ZPP_SensorArbiter.try_remove","zpp_nape/util/Lists.hx",12044)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(12053)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(12054)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(12055)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12056)
	while(((cur != null()))){
		HX_STACK_LINE(12057)
		if (((cur->elt == obj))){
			HX_STACK_LINE(12058)
			this->erase(pre);
			HX_STACK_LINE(12059)
			ret = true;
			HX_STACK_LINE(12060)
			break;
		}
		HX_STACK_LINE(12062)
		pre = cur;
		HX_STACK_LINE(12063)
		cur = cur->next;
	}
	HX_STACK_LINE(12065)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,try_remove,return )

Void ZNPList_ZPP_SensorArbiter_obj::remove( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
{
		HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","remove","ZNPList_ZPP_SensorArbiter.remove","zpp_nape/util/Lists.hx",12042)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(12042)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(12042)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(12042)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12042)
		while(((cur != null()))){
			HX_STACK_LINE(12042)
			if (((cur->elt == obj))){
				HX_STACK_LINE(12042)
				{
					HX_STACK_LINE(12042)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(12042)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(12042)
					if (((pre == null()))){
						HX_STACK_LINE(12042)
						old = this->head;
						HX_STACK_LINE(12042)
						ret1 = old->next;
						HX_STACK_LINE(12042)
						this->head = ret1;
						HX_STACK_LINE(12042)
						if (((this->head == null()))){
							HX_STACK_LINE(12042)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(12042)
						old = pre->next;
						HX_STACK_LINE(12042)
						ret1 = old->next;
						HX_STACK_LINE(12042)
						pre->next = ret1;
						HX_STACK_LINE(12042)
						if (((ret1 == null()))){
							HX_STACK_LINE(12042)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(12042)
					{
						HX_STACK_LINE(12042)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(12042)
						o->elt = null();
						HX_STACK_LINE(12042)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
						HX_STACK_LINE(12042)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
					}
					HX_STACK_LINE(12042)
					this->modified = true;
					HX_STACK_LINE(12042)
					(this->length)--;
					HX_STACK_LINE(12042)
					this->pushmod = true;
					HX_STACK_LINE(12042)
					ret1;
				}
				HX_STACK_LINE(12042)
				ret = true;
				HX_STACK_LINE(12042)
				break;
			}
			HX_STACK_LINE(12042)
			pre = cur;
			HX_STACK_LINE(12042)
			cur = cur->next;
		}
		HX_STACK_LINE(12042)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,remove,(void))

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","inlined_pop_unsafe","ZNPList_ZPP_SensorArbiter.inlined_pop_unsafe","zpp_nape/util/Lists.hx",12020)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12029)
	::zpp_nape::dynamics::ZPP_SensorArbiter ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12030)
	this->pop();
	HX_STACK_LINE(12031)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,inlined_pop_unsafe,return )

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::pop_unsafe( ){
	HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","pop_unsafe","ZNPList_ZPP_SensorArbiter.pop_unsafe","zpp_nape/util/Lists.hx",12016)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12016)
	::zpp_nape::dynamics::ZPP_SensorArbiter ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12016)
	this->pop();
	HX_STACK_LINE(12016)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,pop_unsafe,return )

Void ZNPList_ZPP_SensorArbiter_obj::inlined_pop( ){
{
		HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","inlined_pop","ZNPList_ZPP_SensorArbiter.inlined_pop","zpp_nape/util/Lists.hx",11982)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11991)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11992)
		this->head = ret->next;
		HX_STACK_LINE(11994)
		{
			HX_STACK_LINE(11995)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(12004)
			o->elt = null();
			HX_STACK_LINE(12005)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
			HX_STACK_LINE(12006)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(12011)
		if (((this->head == null()))){
			HX_STACK_LINE(12011)
			this->pushmod = true;
		}
		HX_STACK_LINE(12012)
		this->modified = true;
		HX_STACK_LINE(12013)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,inlined_pop,(void))

Void ZNPList_ZPP_SensorArbiter_obj::pop( ){
{
		HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","pop","ZNPList_ZPP_SensorArbiter.pop","zpp_nape/util/Lists.hx",11978)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11978)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11978)
		this->head = ret->next;
		HX_STACK_LINE(11978)
		{
			HX_STACK_LINE(11978)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(11978)
			o->elt = null();
			HX_STACK_LINE(11978)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
			HX_STACK_LINE(11978)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(11978)
		if (((this->head == null()))){
			HX_STACK_LINE(11978)
			this->pushmod = true;
		}
		HX_STACK_LINE(11978)
		this->modified = true;
		HX_STACK_LINE(11978)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur,::zpp_nape::dynamics::ZPP_SensorArbiter o){
	HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","inlined_insert","ZNPList_ZPP_SensorArbiter.inlined_insert","zpp_nape/util/Lists.hx",11934)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(11943)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(11943)
	{
		HX_STACK_LINE(11944)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11945)
		{
			HX_STACK_LINE(11946)
			if (((::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool == null()))){
				HX_STACK_LINE(11947)
				ret = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::__new();
			}
			else{
				HX_STACK_LINE(11953)
				ret = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
				HX_STACK_LINE(11954)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = ret->next;
				HX_STACK_LINE(11955)
				ret->next = null();
			}
			HX_STACK_LINE(11960)
			Dynamic();
		}
		HX_STACK_LINE(11962)
		ret->elt = o;
		HX_STACK_LINE(11963)
		temp = ret;
	}
	HX_STACK_LINE(11965)
	if (((cur == null()))){
		HX_STACK_LINE(11966)
		temp->next = this->head;
		HX_STACK_LINE(11967)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(11970)
		temp->next = cur->next;
		HX_STACK_LINE(11971)
		cur->next = temp;
	}
	HX_STACK_LINE(11973)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(11974)
	(this->length)++;
	HX_STACK_LINE(11975)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SensorArbiter_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur,::zpp_nape::dynamics::ZPP_SensorArbiter o){
	HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","insert","ZNPList_ZPP_SensorArbiter.insert","zpp_nape/util/Lists.hx",11930)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(11930)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(11930)
	{
		HX_STACK_LINE(11930)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11930)
		{
			HX_STACK_LINE(11930)
			if (((::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool == null()))){
				HX_STACK_LINE(11930)
				ret = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::__new();
			}
			else{
				HX_STACK_LINE(11930)
				ret = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
				HX_STACK_LINE(11930)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = ret->next;
				HX_STACK_LINE(11930)
				ret->next = null();
			}
			HX_STACK_LINE(11930)
			Dynamic();
		}
		HX_STACK_LINE(11930)
		ret->elt = o;
		HX_STACK_LINE(11930)
		temp = ret;
	}
	HX_STACK_LINE(11930)
	if (((cur == null()))){
		HX_STACK_LINE(11930)
		temp->next = this->head;
		HX_STACK_LINE(11930)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(11930)
		temp->next = cur->next;
		HX_STACK_LINE(11930)
		cur->next = temp;
	}
	HX_STACK_LINE(11930)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(11930)
	(this->length)++;
	HX_STACK_LINE(11930)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SensorArbiter_obj,insert,return )

Void ZNPList_ZPP_SensorArbiter_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_SensorArbiter x){
{
		HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","addAll","ZNPList_ZPP_SensorArbiter.addAll","zpp_nape/util/Lists.hx",11920)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(11921)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(11922)
		while(((cx_ite != null()))){
			HX_STACK_LINE(11923)
			::zpp_nape::dynamics::ZPP_SensorArbiter i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(11924)
			this->add(i);
			HX_STACK_LINE(11925)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,addAll,(void))

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::inlined_add( ::zpp_nape::dynamics::ZPP_SensorArbiter o){
	HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","inlined_add","ZNPList_ZPP_SensorArbiter.inlined_add","zpp_nape/util/Lists.hx",11874)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(11883)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(11883)
	{
		HX_STACK_LINE(11884)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11885)
		{
			HX_STACK_LINE(11886)
			if (((::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool == null()))){
				HX_STACK_LINE(11887)
				ret = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::__new();
			}
			else{
				HX_STACK_LINE(11893)
				ret = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
				HX_STACK_LINE(11894)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = ret->next;
				HX_STACK_LINE(11895)
				ret->next = null();
			}
			HX_STACK_LINE(11900)
			Dynamic();
		}
		HX_STACK_LINE(11902)
		ret->elt = o;
		HX_STACK_LINE(11903)
		temp = ret;
	}
	HX_STACK_LINE(11905)
	temp->next = this->head;
	HX_STACK_LINE(11906)
	this->head = temp;
	HX_STACK_LINE(11907)
	this->modified = true;
	HX_STACK_LINE(11908)
	(this->length)++;
	HX_STACK_LINE(11909)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,inlined_add,return )

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::add( ::zpp_nape::dynamics::ZPP_SensorArbiter o){
	HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","add","ZNPList_ZPP_SensorArbiter.add","zpp_nape/util/Lists.hx",11870)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(11870)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(11870)
	{
		HX_STACK_LINE(11870)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11870)
		{
			HX_STACK_LINE(11870)
			if (((::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool == null()))){
				HX_STACK_LINE(11870)
				ret = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::__new();
			}
			else{
				HX_STACK_LINE(11870)
				ret = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
				HX_STACK_LINE(11870)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = ret->next;
				HX_STACK_LINE(11870)
				ret->next = null();
			}
			HX_STACK_LINE(11870)
			Dynamic();
		}
		HX_STACK_LINE(11870)
		ret->elt = o;
		HX_STACK_LINE(11870)
		temp = ret;
	}
	HX_STACK_LINE(11870)
	temp->next = this->head;
	HX_STACK_LINE(11870)
	this->head = temp;
	HX_STACK_LINE(11870)
	this->modified = true;
	HX_STACK_LINE(11870)
	(this->length)++;
	HX_STACK_LINE(11870)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,add,return )

Void ZNPList_ZPP_SensorArbiter_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter i){
{
		HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","setbegin","ZNPList_ZPP_SensorArbiter.setbegin","zpp_nape/util/Lists.hx",11864)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(11865)
		this->head = i;
		HX_STACK_LINE(11866)
		this->modified = true;
		HX_STACK_LINE(11867)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::begin( ){
	HX_STACK_FRAME("ZNPList_ZPP_SensorArbiter","begin","ZNPList_ZPP_SensorArbiter.begin","zpp_nape/util/Lists.hx",11857)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11857)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,begin,return )


ZNPList_ZPP_SensorArbiter_obj::ZNPList_ZPP_SensorArbiter_obj()
{
}

void ZNPList_ZPP_SensorArbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_SensorArbiter);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_SensorArbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_SensorArbiter_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_SensorArbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter >(); return inValue; }
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

void ZNPList_ZPP_SensorArbiter_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_SensorArbiter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_SensorArbiter_obj::__mClass,"__mClass");
};

#endif

Class ZNPList_ZPP_SensorArbiter_obj::__mClass;

void ZNPList_ZPP_SensorArbiter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_SensorArbiter"), hx::TCanCast< ZNPList_ZPP_SensorArbiter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void ZNPList_ZPP_SensorArbiter_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
