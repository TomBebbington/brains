#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionGroup
#include <zpp_nape/dynamics/ZPP_InteractionGroup.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_InteractionGroup
#include <zpp_nape/util/ZNPList_ZPP_InteractionGroup.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_InteractionGroup
#include <zpp_nape/util/ZNPNode_ZPP_InteractionGroup.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_InteractionGroup_obj::__construct()
{
HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","new","ZNPList_ZPP_InteractionGroup.new","zpp_nape/util/Lists.hx",11017)
{
	HX_STACK_LINE(11027)
	this->length = (int)0;
	HX_STACK_LINE(11026)
	this->pushmod = false;
	HX_STACK_LINE(11025)
	this->modified = false;
	HX_STACK_LINE(11018)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_InteractionGroup_obj::~ZNPList_ZPP_InteractionGroup_obj() { }

Dynamic ZNPList_ZPP_InteractionGroup_obj::__CreateEmpty() { return  new ZNPList_ZPP_InteractionGroup_obj; }
hx::ObjectPtr< ZNPList_ZPP_InteractionGroup_obj > ZNPList_ZPP_InteractionGroup_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_InteractionGroup_obj > result = new ZNPList_ZPP_InteractionGroup_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_InteractionGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_InteractionGroup_obj > result = new ZNPList_ZPP_InteractionGroup_obj();
	result->__construct();
	return result;}

::zpp_nape::dynamics::ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::at( int ind){
	HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","at","ZNPList_ZPP_InteractionGroup.at","zpp_nape/util/Lists.hx",11420)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(11429)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(11430)
	if (((it != null()))){
		HX_STACK_LINE(11430)
		return it->elt;
	}
	else{
		HX_STACK_LINE(11430)
		return null();
	}
	HX_STACK_LINE(11430)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::iterator_at( int ind){
	HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","iterator_at","ZNPList_ZPP_InteractionGroup.iterator_at","zpp_nape/util/Lists.hx",11407)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(11416)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11417)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(11417)
		ret = ret->next;
	}
	HX_STACK_LINE(11418)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,iterator_at,return )

::zpp_nape::dynamics::ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::back( ){
	HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","back","ZNPList_ZPP_InteractionGroup.back","zpp_nape/util/Lists.hx",11398)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11399)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11400)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(11401)
	while(((cur != null()))){
		HX_STACK_LINE(11402)
		ret = cur;
		HX_STACK_LINE(11403)
		cur = cur->next;
	}
	HX_STACK_LINE(11405)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,back,return )

::zpp_nape::dynamics::ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::front( ){
	HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","front","ZNPList_ZPP_InteractionGroup.front","zpp_nape/util/Lists.hx",11396)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11396)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,front,return )

bool ZNPList_ZPP_InteractionGroup_obj::inlined_has( ::zpp_nape::dynamics::ZPP_InteractionGroup obj){
	HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","inlined_has","ZNPList_ZPP_InteractionGroup.inlined_has","zpp_nape/util/Lists.hx",11365)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(11374)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11375)
	{
		HX_STACK_LINE(11376)
		ret = false;
		HX_STACK_LINE(11377)
		{
			HX_STACK_LINE(11378)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(11379)
			while(((cx_ite != null()))){
				HX_STACK_LINE(11380)
				::zpp_nape::dynamics::ZPP_InteractionGroup npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(11382)
				if (((npite == obj))){
					HX_STACK_LINE(11383)
					ret = true;
					HX_STACK_LINE(11384)
					break;
				}
				HX_STACK_LINE(11387)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(11391)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,inlined_has,return )

bool ZNPList_ZPP_InteractionGroup_obj::has( ::zpp_nape::dynamics::ZPP_InteractionGroup obj){
	HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","has","ZNPList_ZPP_InteractionGroup.has","zpp_nape/util/Lists.hx",11361)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(11361)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11361)
	{
		HX_STACK_LINE(11361)
		ret = false;
		HX_STACK_LINE(11361)
		{
			HX_STACK_LINE(11361)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(11361)
			while(((cx_ite != null()))){
				HX_STACK_LINE(11361)
				::zpp_nape::dynamics::ZPP_InteractionGroup npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(11361)
				if (((npite == obj))){
					HX_STACK_LINE(11361)
					ret = true;
					HX_STACK_LINE(11361)
					break;
				}
				HX_STACK_LINE(11361)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(11361)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,has,return )

int ZNPList_ZPP_InteractionGroup_obj::size( ){
	HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","size","ZNPList_ZPP_InteractionGroup.size","zpp_nape/util/Lists.hx",11358)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11358)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,size,return )

bool ZNPList_ZPP_InteractionGroup_obj::empty( ){
	HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","empty","ZNPList_ZPP_InteractionGroup.empty","zpp_nape/util/Lists.hx",11353)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11353)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,empty,return )

Void ZNPList_ZPP_InteractionGroup_obj::reverse( ){
{
		HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","reverse","ZNPList_ZPP_InteractionGroup.reverse","zpp_nape/util/Lists.hx",11337)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11338)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(11339)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(11340)
		while(((cur != null()))){
			HX_STACK_LINE(11341)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(11342)
			cur->next = pre;
			HX_STACK_LINE(11343)
			this->head = cur;
			HX_STACK_LINE(11344)
			pre = cur;
			HX_STACK_LINE(11345)
			cur = nx;
		}
		HX_STACK_LINE(11347)
		this->modified = true;
		HX_STACK_LINE(11348)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,reverse,(void))

Void ZNPList_ZPP_InteractionGroup_obj::inlined_clear( ){
{
		HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","inlined_clear","ZNPList_ZPP_InteractionGroup.inlined_clear","zpp_nape/util/Lists.hx",11332)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11333)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(11333)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11333)
			this->head = ret->next;
			HX_STACK_LINE(11333)
			{
				HX_STACK_LINE(11333)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(11333)
				o->elt = null();
				HX_STACK_LINE(11333)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;
				HX_STACK_LINE(11333)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = o;
			}
			HX_STACK_LINE(11333)
			if (((this->head == null()))){
				HX_STACK_LINE(11333)
				this->pushmod = true;
			}
			HX_STACK_LINE(11333)
			this->modified = true;
			HX_STACK_LINE(11333)
			(this->length)--;
		}
		HX_STACK_LINE(11334)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,inlined_clear,(void))

Void ZNPList_ZPP_InteractionGroup_obj::clear( ){
{
		HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","clear","ZNPList_ZPP_InteractionGroup.clear","zpp_nape/util/Lists.hx",11327)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11327)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(11327)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11327)
			this->head = ret->next;
			HX_STACK_LINE(11327)
			{
				HX_STACK_LINE(11327)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(11327)
				o->elt = null();
				HX_STACK_LINE(11327)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;
				HX_STACK_LINE(11327)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = o;
			}
			HX_STACK_LINE(11327)
			if (((this->head == null()))){
				HX_STACK_LINE(11327)
				this->pushmod = true;
			}
			HX_STACK_LINE(11327)
			this->modified = true;
			HX_STACK_LINE(11327)
			(this->length)--;
		}
		HX_STACK_LINE(11327)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup pre,int n){
	HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","splice","ZNPList_ZPP_InteractionGroup.splice","zpp_nape/util/Lists.hx",11322)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(11323)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(11323)
		this->erase(pre);
	}
	HX_STACK_LINE(11324)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_InteractionGroup_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup pre){
	HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","inlined_erase","ZNPList_ZPP_InteractionGroup.inlined_erase","zpp_nape/util/Lists.hx",11276)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(11285)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(11286)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11287)
	if (((pre == null()))){
		HX_STACK_LINE(11288)
		old = this->head;
		HX_STACK_LINE(11289)
		ret = old->next;
		HX_STACK_LINE(11290)
		this->head = ret;
		HX_STACK_LINE(11291)
		if (((this->head == null()))){
			HX_STACK_LINE(11291)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(11294)
		old = pre->next;
		HX_STACK_LINE(11295)
		ret = old->next;
		HX_STACK_LINE(11296)
		pre->next = ret;
		HX_STACK_LINE(11297)
		if (((ret == null()))){
			HX_STACK_LINE(11297)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(11300)
	{
		HX_STACK_LINE(11301)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(11310)
		o->elt = null();
		HX_STACK_LINE(11311)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;
		HX_STACK_LINE(11312)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = o;
	}
	HX_STACK_LINE(11317)
	this->modified = true;
	HX_STACK_LINE(11318)
	(this->length)--;
	HX_STACK_LINE(11319)
	this->pushmod = true;
	HX_STACK_LINE(11320)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup pre){
	HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","erase","ZNPList_ZPP_InteractionGroup.erase","zpp_nape/util/Lists.hx",11272)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(11272)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(11272)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11272)
	if (((pre == null()))){
		HX_STACK_LINE(11272)
		old = this->head;
		HX_STACK_LINE(11272)
		ret = old->next;
		HX_STACK_LINE(11272)
		this->head = ret;
		HX_STACK_LINE(11272)
		if (((this->head == null()))){
			HX_STACK_LINE(11272)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(11272)
		old = pre->next;
		HX_STACK_LINE(11272)
		ret = old->next;
		HX_STACK_LINE(11272)
		pre->next = ret;
		HX_STACK_LINE(11272)
		if (((ret == null()))){
			HX_STACK_LINE(11272)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(11272)
	{
		HX_STACK_LINE(11272)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(11272)
		o->elt = null();
		HX_STACK_LINE(11272)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;
		HX_STACK_LINE(11272)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = o;
	}
	HX_STACK_LINE(11272)
	this->modified = true;
	HX_STACK_LINE(11272)
	(this->length)--;
	HX_STACK_LINE(11272)
	this->pushmod = true;
	HX_STACK_LINE(11272)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,erase,return )

bool ZNPList_ZPP_InteractionGroup_obj::inlined_try_remove( ::zpp_nape::dynamics::ZPP_InteractionGroup obj){
	HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","inlined_try_remove","ZNPList_ZPP_InteractionGroup.inlined_try_remove","zpp_nape/util/Lists.hx",11248)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(11257)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(11258)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(11259)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11260)
	while(((cur != null()))){
		HX_STACK_LINE(11261)
		if (((cur->elt == obj))){
			HX_STACK_LINE(11262)
			{
				HX_STACK_LINE(11262)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(11262)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(11262)
				if (((pre == null()))){
					HX_STACK_LINE(11262)
					old = this->head;
					HX_STACK_LINE(11262)
					ret1 = old->next;
					HX_STACK_LINE(11262)
					this->head = ret1;
					HX_STACK_LINE(11262)
					if (((this->head == null()))){
						HX_STACK_LINE(11262)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(11262)
					old = pre->next;
					HX_STACK_LINE(11262)
					ret1 = old->next;
					HX_STACK_LINE(11262)
					pre->next = ret1;
					HX_STACK_LINE(11262)
					if (((ret1 == null()))){
						HX_STACK_LINE(11262)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(11262)
				{
					HX_STACK_LINE(11262)
					::zpp_nape::util::ZNPNode_ZPP_InteractionGroup o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(11262)
					o->elt = null();
					HX_STACK_LINE(11262)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;
					HX_STACK_LINE(11262)
					::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = o;
				}
				HX_STACK_LINE(11262)
				this->modified = true;
				HX_STACK_LINE(11262)
				(this->length)--;
				HX_STACK_LINE(11262)
				this->pushmod = true;
				HX_STACK_LINE(11262)
				ret1;
			}
			HX_STACK_LINE(11263)
			ret = true;
			HX_STACK_LINE(11264)
			break;
		}
		HX_STACK_LINE(11266)
		pre = cur;
		HX_STACK_LINE(11267)
		cur = cur->next;
	}
	HX_STACK_LINE(11269)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,inlined_try_remove,return )

Void ZNPList_ZPP_InteractionGroup_obj::inlined_remove( ::zpp_nape::dynamics::ZPP_InteractionGroup obj){
{
		HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","inlined_remove","ZNPList_ZPP_InteractionGroup.inlined_remove","zpp_nape/util/Lists.hx",11244)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(11244)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(11244)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(11244)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11244)
		while(((cur != null()))){
			HX_STACK_LINE(11244)
			if (((cur->elt == obj))){
				HX_STACK_LINE(11244)
				{
					HX_STACK_LINE(11244)
					::zpp_nape::util::ZNPNode_ZPP_InteractionGroup old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(11244)
					::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(11244)
					if (((pre == null()))){
						HX_STACK_LINE(11244)
						old = this->head;
						HX_STACK_LINE(11244)
						ret1 = old->next;
						HX_STACK_LINE(11244)
						this->head = ret1;
						HX_STACK_LINE(11244)
						if (((this->head == null()))){
							HX_STACK_LINE(11244)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(11244)
						old = pre->next;
						HX_STACK_LINE(11244)
						ret1 = old->next;
						HX_STACK_LINE(11244)
						pre->next = ret1;
						HX_STACK_LINE(11244)
						if (((ret1 == null()))){
							HX_STACK_LINE(11244)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(11244)
					{
						HX_STACK_LINE(11244)
						::zpp_nape::util::ZNPNode_ZPP_InteractionGroup o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(11244)
						o->elt = null();
						HX_STACK_LINE(11244)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;
						HX_STACK_LINE(11244)
						::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = o;
					}
					HX_STACK_LINE(11244)
					this->modified = true;
					HX_STACK_LINE(11244)
					(this->length)--;
					HX_STACK_LINE(11244)
					this->pushmod = true;
					HX_STACK_LINE(11244)
					ret1;
				}
				HX_STACK_LINE(11244)
				ret = true;
				HX_STACK_LINE(11244)
				break;
			}
			HX_STACK_LINE(11244)
			pre = cur;
			HX_STACK_LINE(11244)
			cur = cur->next;
		}
		HX_STACK_LINE(11244)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,inlined_remove,(void))

bool ZNPList_ZPP_InteractionGroup_obj::try_remove( ::zpp_nape::dynamics::ZPP_InteractionGroup obj){
	HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","try_remove","ZNPList_ZPP_InteractionGroup.try_remove","zpp_nape/util/Lists.hx",11210)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(11219)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(11220)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(11221)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11222)
	while(((cur != null()))){
		HX_STACK_LINE(11223)
		if (((cur->elt == obj))){
			HX_STACK_LINE(11224)
			this->erase(pre);
			HX_STACK_LINE(11225)
			ret = true;
			HX_STACK_LINE(11226)
			break;
		}
		HX_STACK_LINE(11228)
		pre = cur;
		HX_STACK_LINE(11229)
		cur = cur->next;
	}
	HX_STACK_LINE(11231)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,try_remove,return )

Void ZNPList_ZPP_InteractionGroup_obj::remove( ::zpp_nape::dynamics::ZPP_InteractionGroup obj){
{
		HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","remove","ZNPList_ZPP_InteractionGroup.remove","zpp_nape/util/Lists.hx",11208)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(11208)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(11208)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(11208)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11208)
		while(((cur != null()))){
			HX_STACK_LINE(11208)
			if (((cur->elt == obj))){
				HX_STACK_LINE(11208)
				{
					HX_STACK_LINE(11208)
					::zpp_nape::util::ZNPNode_ZPP_InteractionGroup old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(11208)
					::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(11208)
					if (((pre == null()))){
						HX_STACK_LINE(11208)
						old = this->head;
						HX_STACK_LINE(11208)
						ret1 = old->next;
						HX_STACK_LINE(11208)
						this->head = ret1;
						HX_STACK_LINE(11208)
						if (((this->head == null()))){
							HX_STACK_LINE(11208)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(11208)
						old = pre->next;
						HX_STACK_LINE(11208)
						ret1 = old->next;
						HX_STACK_LINE(11208)
						pre->next = ret1;
						HX_STACK_LINE(11208)
						if (((ret1 == null()))){
							HX_STACK_LINE(11208)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(11208)
					{
						HX_STACK_LINE(11208)
						::zpp_nape::util::ZNPNode_ZPP_InteractionGroup o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(11208)
						o->elt = null();
						HX_STACK_LINE(11208)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;
						HX_STACK_LINE(11208)
						::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = o;
					}
					HX_STACK_LINE(11208)
					this->modified = true;
					HX_STACK_LINE(11208)
					(this->length)--;
					HX_STACK_LINE(11208)
					this->pushmod = true;
					HX_STACK_LINE(11208)
					ret1;
				}
				HX_STACK_LINE(11208)
				ret = true;
				HX_STACK_LINE(11208)
				break;
			}
			HX_STACK_LINE(11208)
			pre = cur;
			HX_STACK_LINE(11208)
			cur = cur->next;
		}
		HX_STACK_LINE(11208)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,remove,(void))

::zpp_nape::dynamics::ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","inlined_pop_unsafe","ZNPList_ZPP_InteractionGroup.inlined_pop_unsafe","zpp_nape/util/Lists.hx",11186)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11195)
	::zpp_nape::dynamics::ZPP_InteractionGroup ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11196)
	this->pop();
	HX_STACK_LINE(11197)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,inlined_pop_unsafe,return )

::zpp_nape::dynamics::ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::pop_unsafe( ){
	HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","pop_unsafe","ZNPList_ZPP_InteractionGroup.pop_unsafe","zpp_nape/util/Lists.hx",11182)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11182)
	::zpp_nape::dynamics::ZPP_InteractionGroup ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11182)
	this->pop();
	HX_STACK_LINE(11182)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,pop_unsafe,return )

Void ZNPList_ZPP_InteractionGroup_obj::inlined_pop( ){
{
		HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","inlined_pop","ZNPList_ZPP_InteractionGroup.inlined_pop","zpp_nape/util/Lists.hx",11148)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11157)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11158)
		this->head = ret->next;
		HX_STACK_LINE(11160)
		{
			HX_STACK_LINE(11161)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(11170)
			o->elt = null();
			HX_STACK_LINE(11171)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;
			HX_STACK_LINE(11172)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = o;
		}
		HX_STACK_LINE(11177)
		if (((this->head == null()))){
			HX_STACK_LINE(11177)
			this->pushmod = true;
		}
		HX_STACK_LINE(11178)
		this->modified = true;
		HX_STACK_LINE(11179)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,inlined_pop,(void))

Void ZNPList_ZPP_InteractionGroup_obj::pop( ){
{
		HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","pop","ZNPList_ZPP_InteractionGroup.pop","zpp_nape/util/Lists.hx",11144)
		HX_STACK_THIS(this)
		HX_STACK_LINE(11144)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11144)
		this->head = ret->next;
		HX_STACK_LINE(11144)
		{
			HX_STACK_LINE(11144)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(11144)
			o->elt = null();
			HX_STACK_LINE(11144)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;
			HX_STACK_LINE(11144)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = o;
		}
		HX_STACK_LINE(11144)
		if (((this->head == null()))){
			HX_STACK_LINE(11144)
			this->pushmod = true;
		}
		HX_STACK_LINE(11144)
		this->modified = true;
		HX_STACK_LINE(11144)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cur,::zpp_nape::dynamics::ZPP_InteractionGroup o){
	HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","inlined_insert","ZNPList_ZPP_InteractionGroup.inlined_insert","zpp_nape/util/Lists.hx",11100)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(11109)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(11109)
	{
		HX_STACK_LINE(11110)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11111)
		{
			HX_STACK_LINE(11112)
			if (((::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool == null()))){
				HX_STACK_LINE(11113)
				ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::__new();
			}
			else{
				HX_STACK_LINE(11119)
				ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;
				HX_STACK_LINE(11120)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = ret->next;
				HX_STACK_LINE(11121)
				ret->next = null();
			}
			HX_STACK_LINE(11126)
			Dynamic();
		}
		HX_STACK_LINE(11128)
		ret->elt = o;
		HX_STACK_LINE(11129)
		temp = ret;
	}
	HX_STACK_LINE(11131)
	if (((cur == null()))){
		HX_STACK_LINE(11132)
		temp->next = this->head;
		HX_STACK_LINE(11133)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(11136)
		temp->next = cur->next;
		HX_STACK_LINE(11137)
		cur->next = temp;
	}
	HX_STACK_LINE(11139)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(11140)
	(this->length)++;
	HX_STACK_LINE(11141)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_InteractionGroup_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cur,::zpp_nape::dynamics::ZPP_InteractionGroup o){
	HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","insert","ZNPList_ZPP_InteractionGroup.insert","zpp_nape/util/Lists.hx",11096)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(11096)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(11096)
	{
		HX_STACK_LINE(11096)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11096)
		{
			HX_STACK_LINE(11096)
			if (((::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool == null()))){
				HX_STACK_LINE(11096)
				ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::__new();
			}
			else{
				HX_STACK_LINE(11096)
				ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;
				HX_STACK_LINE(11096)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = ret->next;
				HX_STACK_LINE(11096)
				ret->next = null();
			}
			HX_STACK_LINE(11096)
			Dynamic();
		}
		HX_STACK_LINE(11096)
		ret->elt = o;
		HX_STACK_LINE(11096)
		temp = ret;
	}
	HX_STACK_LINE(11096)
	if (((cur == null()))){
		HX_STACK_LINE(11096)
		temp->next = this->head;
		HX_STACK_LINE(11096)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(11096)
		temp->next = cur->next;
		HX_STACK_LINE(11096)
		cur->next = temp;
	}
	HX_STACK_LINE(11096)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(11096)
	(this->length)++;
	HX_STACK_LINE(11096)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_InteractionGroup_obj,insert,return )

Void ZNPList_ZPP_InteractionGroup_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_InteractionGroup x){
{
		HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","addAll","ZNPList_ZPP_InteractionGroup.addAll","zpp_nape/util/Lists.hx",11086)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(11087)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(11088)
		while(((cx_ite != null()))){
			HX_STACK_LINE(11089)
			::zpp_nape::dynamics::ZPP_InteractionGroup i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(11090)
			this->add(i);
			HX_STACK_LINE(11091)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,addAll,(void))

::zpp_nape::dynamics::ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::inlined_add( ::zpp_nape::dynamics::ZPP_InteractionGroup o){
	HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","inlined_add","ZNPList_ZPP_InteractionGroup.inlined_add","zpp_nape/util/Lists.hx",11040)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(11049)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(11049)
	{
		HX_STACK_LINE(11050)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11051)
		{
			HX_STACK_LINE(11052)
			if (((::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool == null()))){
				HX_STACK_LINE(11053)
				ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::__new();
			}
			else{
				HX_STACK_LINE(11059)
				ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;
				HX_STACK_LINE(11060)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = ret->next;
				HX_STACK_LINE(11061)
				ret->next = null();
			}
			HX_STACK_LINE(11066)
			Dynamic();
		}
		HX_STACK_LINE(11068)
		ret->elt = o;
		HX_STACK_LINE(11069)
		temp = ret;
	}
	HX_STACK_LINE(11071)
	temp->next = this->head;
	HX_STACK_LINE(11072)
	this->head = temp;
	HX_STACK_LINE(11073)
	this->modified = true;
	HX_STACK_LINE(11074)
	(this->length)++;
	HX_STACK_LINE(11075)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,inlined_add,return )

::zpp_nape::dynamics::ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::add( ::zpp_nape::dynamics::ZPP_InteractionGroup o){
	HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","add","ZNPList_ZPP_InteractionGroup.add","zpp_nape/util/Lists.hx",11036)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(11036)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(11036)
	{
		HX_STACK_LINE(11036)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11036)
		{
			HX_STACK_LINE(11036)
			if (((::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool == null()))){
				HX_STACK_LINE(11036)
				ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::__new();
			}
			else{
				HX_STACK_LINE(11036)
				ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;
				HX_STACK_LINE(11036)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = ret->next;
				HX_STACK_LINE(11036)
				ret->next = null();
			}
			HX_STACK_LINE(11036)
			Dynamic();
		}
		HX_STACK_LINE(11036)
		ret->elt = o;
		HX_STACK_LINE(11036)
		temp = ret;
	}
	HX_STACK_LINE(11036)
	temp->next = this->head;
	HX_STACK_LINE(11036)
	this->head = temp;
	HX_STACK_LINE(11036)
	this->modified = true;
	HX_STACK_LINE(11036)
	(this->length)++;
	HX_STACK_LINE(11036)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,add,return )

Void ZNPList_ZPP_InteractionGroup_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup i){
{
		HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","setbegin","ZNPList_ZPP_InteractionGroup.setbegin","zpp_nape/util/Lists.hx",11030)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(11031)
		this->head = i;
		HX_STACK_LINE(11032)
		this->modified = true;
		HX_STACK_LINE(11033)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::begin( ){
	HX_STACK_FRAME("ZNPList_ZPP_InteractionGroup","begin","ZNPList_ZPP_InteractionGroup.begin","zpp_nape/util/Lists.hx",11023)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11023)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,begin,return )


ZNPList_ZPP_InteractionGroup_obj::ZNPList_ZPP_InteractionGroup_obj()
{
}

void ZNPList_ZPP_InteractionGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_InteractionGroup);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_InteractionGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_InteractionGroup_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_InteractionGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup >(); return inValue; }
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

void ZNPList_ZPP_InteractionGroup_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_InteractionGroup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_InteractionGroup_obj::__mClass,"__mClass");
};

#endif

Class ZNPList_ZPP_InteractionGroup_obj::__mClass;

void ZNPList_ZPP_InteractionGroup_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_InteractionGroup"), hx::TCanCast< ZNPList_ZPP_InteractionGroup_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void ZNPList_ZPP_InteractionGroup_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
