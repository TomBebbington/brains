#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_space_ZPP_AABBNode
#include <zpp_nape/space/ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_AABBNode
#include <zpp_nape/util/ZNPList_ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_AABBNode
#include <zpp_nape/util/ZNPNode_ZPP_AABBNode.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_AABBNode_obj::__construct()
{
HX_STACK_FRAME("ZNPList_ZPP_AABBNode","new","ZNPList_ZPP_AABBNode.new","zpp_nape/util/Lists.hx",10600)
{
	HX_STACK_LINE(10610)
	this->length = (int)0;
	HX_STACK_LINE(10609)
	this->pushmod = false;
	HX_STACK_LINE(10608)
	this->modified = false;
	HX_STACK_LINE(10601)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_AABBNode_obj::~ZNPList_ZPP_AABBNode_obj() { }

Dynamic ZNPList_ZPP_AABBNode_obj::__CreateEmpty() { return  new ZNPList_ZPP_AABBNode_obj; }
hx::ObjectPtr< ZNPList_ZPP_AABBNode_obj > ZNPList_ZPP_AABBNode_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_AABBNode_obj > result = new ZNPList_ZPP_AABBNode_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_AABBNode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_AABBNode_obj > result = new ZNPList_ZPP_AABBNode_obj();
	result->__construct();
	return result;}

::zpp_nape::space::ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::at( int ind){
	HX_STACK_FRAME("ZNPList_ZPP_AABBNode","at","ZNPList_ZPP_AABBNode.at","zpp_nape/util/Lists.hx",11003)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(11012)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(11013)
	if (((it != null()))){
		HX_STACK_LINE(11013)
		return it->elt;
	}
	else{
		HX_STACK_LINE(11013)
		return null();
	}
	HX_STACK_LINE(11013)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::iterator_at( int ind){
	HX_STACK_FRAME("ZNPList_ZPP_AABBNode","iterator_at","ZNPList_ZPP_AABBNode.iterator_at","zpp_nape/util/Lists.hx",10990)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(10999)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11000)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(11000)
		ret = ret->next;
	}
	HX_STACK_LINE(11001)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,iterator_at,return )

::zpp_nape::space::ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::back( ){
	HX_STACK_FRAME("ZNPList_ZPP_AABBNode","back","ZNPList_ZPP_AABBNode.back","zpp_nape/util/Lists.hx",10981)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10982)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10983)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(10984)
	while(((cur != null()))){
		HX_STACK_LINE(10985)
		ret = cur;
		HX_STACK_LINE(10986)
		cur = cur->next;
	}
	HX_STACK_LINE(10988)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,back,return )

::zpp_nape::space::ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::front( ){
	HX_STACK_FRAME("ZNPList_ZPP_AABBNode","front","ZNPList_ZPP_AABBNode.front","zpp_nape/util/Lists.hx",10979)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10979)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,front,return )

bool ZNPList_ZPP_AABBNode_obj::inlined_has( ::zpp_nape::space::ZPP_AABBNode obj){
	HX_STACK_FRAME("ZNPList_ZPP_AABBNode","inlined_has","ZNPList_ZPP_AABBNode.inlined_has","zpp_nape/util/Lists.hx",10948)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(10957)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10958)
	{
		HX_STACK_LINE(10959)
		ret = false;
		HX_STACK_LINE(10960)
		{
			HX_STACK_LINE(10961)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(10962)
			while(((cx_ite != null()))){
				HX_STACK_LINE(10963)
				::zpp_nape::space::ZPP_AABBNode npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(10965)
				if (((npite == obj))){
					HX_STACK_LINE(10966)
					ret = true;
					HX_STACK_LINE(10967)
					break;
				}
				HX_STACK_LINE(10970)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(10974)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,inlined_has,return )

bool ZNPList_ZPP_AABBNode_obj::has( ::zpp_nape::space::ZPP_AABBNode obj){
	HX_STACK_FRAME("ZNPList_ZPP_AABBNode","has","ZNPList_ZPP_AABBNode.has","zpp_nape/util/Lists.hx",10944)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(10944)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10944)
	{
		HX_STACK_LINE(10944)
		ret = false;
		HX_STACK_LINE(10944)
		{
			HX_STACK_LINE(10944)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(10944)
			while(((cx_ite != null()))){
				HX_STACK_LINE(10944)
				::zpp_nape::space::ZPP_AABBNode npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(10944)
				if (((npite == obj))){
					HX_STACK_LINE(10944)
					ret = true;
					HX_STACK_LINE(10944)
					break;
				}
				HX_STACK_LINE(10944)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(10944)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,has,return )

int ZNPList_ZPP_AABBNode_obj::size( ){
	HX_STACK_FRAME("ZNPList_ZPP_AABBNode","size","ZNPList_ZPP_AABBNode.size","zpp_nape/util/Lists.hx",10941)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10941)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,size,return )

bool ZNPList_ZPP_AABBNode_obj::empty( ){
	HX_STACK_FRAME("ZNPList_ZPP_AABBNode","empty","ZNPList_ZPP_AABBNode.empty","zpp_nape/util/Lists.hx",10936)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10936)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,empty,return )

Void ZNPList_ZPP_AABBNode_obj::reverse( ){
{
		HX_STACK_FRAME("ZNPList_ZPP_AABBNode","reverse","ZNPList_ZPP_AABBNode.reverse","zpp_nape/util/Lists.hx",10920)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10921)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(10922)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(10923)
		while(((cur != null()))){
			HX_STACK_LINE(10924)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(10925)
			cur->next = pre;
			HX_STACK_LINE(10926)
			this->head = cur;
			HX_STACK_LINE(10927)
			pre = cur;
			HX_STACK_LINE(10928)
			cur = nx;
		}
		HX_STACK_LINE(10930)
		this->modified = true;
		HX_STACK_LINE(10931)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,reverse,(void))

Void ZNPList_ZPP_AABBNode_obj::inlined_clear( ){
{
		HX_STACK_FRAME("ZNPList_ZPP_AABBNode","inlined_clear","ZNPList_ZPP_AABBNode.inlined_clear","zpp_nape/util/Lists.hx",10915)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10916)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(10916)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(10916)
			this->head = ret->next;
			HX_STACK_LINE(10916)
			{
				HX_STACK_LINE(10916)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(10916)
				o->elt = null();
				HX_STACK_LINE(10916)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
				HX_STACK_LINE(10916)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
			}
			HX_STACK_LINE(10916)
			if (((this->head == null()))){
				HX_STACK_LINE(10916)
				this->pushmod = true;
			}
			HX_STACK_LINE(10916)
			this->modified = true;
			HX_STACK_LINE(10916)
			(this->length)--;
		}
		HX_STACK_LINE(10917)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,inlined_clear,(void))

Void ZNPList_ZPP_AABBNode_obj::clear( ){
{
		HX_STACK_FRAME("ZNPList_ZPP_AABBNode","clear","ZNPList_ZPP_AABBNode.clear","zpp_nape/util/Lists.hx",10910)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10910)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(10910)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(10910)
			this->head = ret->next;
			HX_STACK_LINE(10910)
			{
				HX_STACK_LINE(10910)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(10910)
				o->elt = null();
				HX_STACK_LINE(10910)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
				HX_STACK_LINE(10910)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
			}
			HX_STACK_LINE(10910)
			if (((this->head == null()))){
				HX_STACK_LINE(10910)
				this->pushmod = true;
			}
			HX_STACK_LINE(10910)
			this->modified = true;
			HX_STACK_LINE(10910)
			(this->length)--;
		}
		HX_STACK_LINE(10910)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_AABBNode pre,int n){
	HX_STACK_FRAME("ZNPList_ZPP_AABBNode","splice","ZNPList_ZPP_AABBNode.splice","zpp_nape/util/Lists.hx",10905)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(10906)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(10906)
		this->erase(pre);
	}
	HX_STACK_LINE(10907)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_AABBNode_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_AABBNode pre){
	HX_STACK_FRAME("ZNPList_ZPP_AABBNode","inlined_erase","ZNPList_ZPP_AABBNode.inlined_erase","zpp_nape/util/Lists.hx",10859)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(10868)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(10869)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10870)
	if (((pre == null()))){
		HX_STACK_LINE(10871)
		old = this->head;
		HX_STACK_LINE(10872)
		ret = old->next;
		HX_STACK_LINE(10873)
		this->head = ret;
		HX_STACK_LINE(10874)
		if (((this->head == null()))){
			HX_STACK_LINE(10874)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(10877)
		old = pre->next;
		HX_STACK_LINE(10878)
		ret = old->next;
		HX_STACK_LINE(10879)
		pre->next = ret;
		HX_STACK_LINE(10880)
		if (((ret == null()))){
			HX_STACK_LINE(10880)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(10883)
	{
		HX_STACK_LINE(10884)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(10893)
		o->elt = null();
		HX_STACK_LINE(10894)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
		HX_STACK_LINE(10895)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
	}
	HX_STACK_LINE(10900)
	this->modified = true;
	HX_STACK_LINE(10901)
	(this->length)--;
	HX_STACK_LINE(10902)
	this->pushmod = true;
	HX_STACK_LINE(10903)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_AABBNode pre){
	HX_STACK_FRAME("ZNPList_ZPP_AABBNode","erase","ZNPList_ZPP_AABBNode.erase","zpp_nape/util/Lists.hx",10855)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(10855)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(10855)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10855)
	if (((pre == null()))){
		HX_STACK_LINE(10855)
		old = this->head;
		HX_STACK_LINE(10855)
		ret = old->next;
		HX_STACK_LINE(10855)
		this->head = ret;
		HX_STACK_LINE(10855)
		if (((this->head == null()))){
			HX_STACK_LINE(10855)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(10855)
		old = pre->next;
		HX_STACK_LINE(10855)
		ret = old->next;
		HX_STACK_LINE(10855)
		pre->next = ret;
		HX_STACK_LINE(10855)
		if (((ret == null()))){
			HX_STACK_LINE(10855)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(10855)
	{
		HX_STACK_LINE(10855)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(10855)
		o->elt = null();
		HX_STACK_LINE(10855)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
		HX_STACK_LINE(10855)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
	}
	HX_STACK_LINE(10855)
	this->modified = true;
	HX_STACK_LINE(10855)
	(this->length)--;
	HX_STACK_LINE(10855)
	this->pushmod = true;
	HX_STACK_LINE(10855)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,erase,return )

bool ZNPList_ZPP_AABBNode_obj::inlined_try_remove( ::zpp_nape::space::ZPP_AABBNode obj){
	HX_STACK_FRAME("ZNPList_ZPP_AABBNode","inlined_try_remove","ZNPList_ZPP_AABBNode.inlined_try_remove","zpp_nape/util/Lists.hx",10831)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(10840)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(10841)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(10842)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10843)
	while(((cur != null()))){
		HX_STACK_LINE(10844)
		if (((cur->elt == obj))){
			HX_STACK_LINE(10845)
			{
				HX_STACK_LINE(10845)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(10845)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(10845)
				if (((pre == null()))){
					HX_STACK_LINE(10845)
					old = this->head;
					HX_STACK_LINE(10845)
					ret1 = old->next;
					HX_STACK_LINE(10845)
					this->head = ret1;
					HX_STACK_LINE(10845)
					if (((this->head == null()))){
						HX_STACK_LINE(10845)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(10845)
					old = pre->next;
					HX_STACK_LINE(10845)
					ret1 = old->next;
					HX_STACK_LINE(10845)
					pre->next = ret1;
					HX_STACK_LINE(10845)
					if (((ret1 == null()))){
						HX_STACK_LINE(10845)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(10845)
				{
					HX_STACK_LINE(10845)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(10845)
					o->elt = null();
					HX_STACK_LINE(10845)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
					HX_STACK_LINE(10845)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
				}
				HX_STACK_LINE(10845)
				this->modified = true;
				HX_STACK_LINE(10845)
				(this->length)--;
				HX_STACK_LINE(10845)
				this->pushmod = true;
				HX_STACK_LINE(10845)
				ret1;
			}
			HX_STACK_LINE(10846)
			ret = true;
			HX_STACK_LINE(10847)
			break;
		}
		HX_STACK_LINE(10849)
		pre = cur;
		HX_STACK_LINE(10850)
		cur = cur->next;
	}
	HX_STACK_LINE(10852)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,inlined_try_remove,return )

Void ZNPList_ZPP_AABBNode_obj::inlined_remove( ::zpp_nape::space::ZPP_AABBNode obj){
{
		HX_STACK_FRAME("ZNPList_ZPP_AABBNode","inlined_remove","ZNPList_ZPP_AABBNode.inlined_remove","zpp_nape/util/Lists.hx",10827)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(10827)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(10827)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(10827)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10827)
		while(((cur != null()))){
			HX_STACK_LINE(10827)
			if (((cur->elt == obj))){
				HX_STACK_LINE(10827)
				{
					HX_STACK_LINE(10827)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(10827)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(10827)
					if (((pre == null()))){
						HX_STACK_LINE(10827)
						old = this->head;
						HX_STACK_LINE(10827)
						ret1 = old->next;
						HX_STACK_LINE(10827)
						this->head = ret1;
						HX_STACK_LINE(10827)
						if (((this->head == null()))){
							HX_STACK_LINE(10827)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(10827)
						old = pre->next;
						HX_STACK_LINE(10827)
						ret1 = old->next;
						HX_STACK_LINE(10827)
						pre->next = ret1;
						HX_STACK_LINE(10827)
						if (((ret1 == null()))){
							HX_STACK_LINE(10827)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(10827)
					{
						HX_STACK_LINE(10827)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(10827)
						o->elt = null();
						HX_STACK_LINE(10827)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
						HX_STACK_LINE(10827)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
					}
					HX_STACK_LINE(10827)
					this->modified = true;
					HX_STACK_LINE(10827)
					(this->length)--;
					HX_STACK_LINE(10827)
					this->pushmod = true;
					HX_STACK_LINE(10827)
					ret1;
				}
				HX_STACK_LINE(10827)
				ret = true;
				HX_STACK_LINE(10827)
				break;
			}
			HX_STACK_LINE(10827)
			pre = cur;
			HX_STACK_LINE(10827)
			cur = cur->next;
		}
		HX_STACK_LINE(10827)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,inlined_remove,(void))

bool ZNPList_ZPP_AABBNode_obj::try_remove( ::zpp_nape::space::ZPP_AABBNode obj){
	HX_STACK_FRAME("ZNPList_ZPP_AABBNode","try_remove","ZNPList_ZPP_AABBNode.try_remove","zpp_nape/util/Lists.hx",10793)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(10802)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(10803)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(10804)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10805)
	while(((cur != null()))){
		HX_STACK_LINE(10806)
		if (((cur->elt == obj))){
			HX_STACK_LINE(10807)
			this->erase(pre);
			HX_STACK_LINE(10808)
			ret = true;
			HX_STACK_LINE(10809)
			break;
		}
		HX_STACK_LINE(10811)
		pre = cur;
		HX_STACK_LINE(10812)
		cur = cur->next;
	}
	HX_STACK_LINE(10814)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,try_remove,return )

Void ZNPList_ZPP_AABBNode_obj::remove( ::zpp_nape::space::ZPP_AABBNode obj){
{
		HX_STACK_FRAME("ZNPList_ZPP_AABBNode","remove","ZNPList_ZPP_AABBNode.remove","zpp_nape/util/Lists.hx",10791)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(10791)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(10791)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(10791)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10791)
		while(((cur != null()))){
			HX_STACK_LINE(10791)
			if (((cur->elt == obj))){
				HX_STACK_LINE(10791)
				{
					HX_STACK_LINE(10791)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(10791)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(10791)
					if (((pre == null()))){
						HX_STACK_LINE(10791)
						old = this->head;
						HX_STACK_LINE(10791)
						ret1 = old->next;
						HX_STACK_LINE(10791)
						this->head = ret1;
						HX_STACK_LINE(10791)
						if (((this->head == null()))){
							HX_STACK_LINE(10791)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(10791)
						old = pre->next;
						HX_STACK_LINE(10791)
						ret1 = old->next;
						HX_STACK_LINE(10791)
						pre->next = ret1;
						HX_STACK_LINE(10791)
						if (((ret1 == null()))){
							HX_STACK_LINE(10791)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(10791)
					{
						HX_STACK_LINE(10791)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(10791)
						o->elt = null();
						HX_STACK_LINE(10791)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
						HX_STACK_LINE(10791)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
					}
					HX_STACK_LINE(10791)
					this->modified = true;
					HX_STACK_LINE(10791)
					(this->length)--;
					HX_STACK_LINE(10791)
					this->pushmod = true;
					HX_STACK_LINE(10791)
					ret1;
				}
				HX_STACK_LINE(10791)
				ret = true;
				HX_STACK_LINE(10791)
				break;
			}
			HX_STACK_LINE(10791)
			pre = cur;
			HX_STACK_LINE(10791)
			cur = cur->next;
		}
		HX_STACK_LINE(10791)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,remove,(void))

::zpp_nape::space::ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("ZNPList_ZPP_AABBNode","inlined_pop_unsafe","ZNPList_ZPP_AABBNode.inlined_pop_unsafe","zpp_nape/util/Lists.hx",10769)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10778)
	::zpp_nape::space::ZPP_AABBNode ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10779)
	this->pop();
	HX_STACK_LINE(10780)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,inlined_pop_unsafe,return )

::zpp_nape::space::ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::pop_unsafe( ){
	HX_STACK_FRAME("ZNPList_ZPP_AABBNode","pop_unsafe","ZNPList_ZPP_AABBNode.pop_unsafe","zpp_nape/util/Lists.hx",10765)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10765)
	::zpp_nape::space::ZPP_AABBNode ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10765)
	this->pop();
	HX_STACK_LINE(10765)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,pop_unsafe,return )

Void ZNPList_ZPP_AABBNode_obj::inlined_pop( ){
{
		HX_STACK_FRAME("ZNPList_ZPP_AABBNode","inlined_pop","ZNPList_ZPP_AABBNode.inlined_pop","zpp_nape/util/Lists.hx",10731)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10740)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10741)
		this->head = ret->next;
		HX_STACK_LINE(10743)
		{
			HX_STACK_LINE(10744)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(10753)
			o->elt = null();
			HX_STACK_LINE(10754)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
			HX_STACK_LINE(10755)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
		}
		HX_STACK_LINE(10760)
		if (((this->head == null()))){
			HX_STACK_LINE(10760)
			this->pushmod = true;
		}
		HX_STACK_LINE(10761)
		this->modified = true;
		HX_STACK_LINE(10762)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,inlined_pop,(void))

Void ZNPList_ZPP_AABBNode_obj::pop( ){
{
		HX_STACK_FRAME("ZNPList_ZPP_AABBNode","pop","ZNPList_ZPP_AABBNode.pop","zpp_nape/util/Lists.hx",10727)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10727)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10727)
		this->head = ret->next;
		HX_STACK_LINE(10727)
		{
			HX_STACK_LINE(10727)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(10727)
			o->elt = null();
			HX_STACK_LINE(10727)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
			HX_STACK_LINE(10727)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
		}
		HX_STACK_LINE(10727)
		if (((this->head == null()))){
			HX_STACK_LINE(10727)
			this->pushmod = true;
		}
		HX_STACK_LINE(10727)
		this->modified = true;
		HX_STACK_LINE(10727)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_AABBNode cur,::zpp_nape::space::ZPP_AABBNode o){
	HX_STACK_FRAME("ZNPList_ZPP_AABBNode","inlined_insert","ZNPList_ZPP_AABBNode.inlined_insert","zpp_nape/util/Lists.hx",10683)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(10692)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(10692)
	{
		HX_STACK_LINE(10693)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10694)
		{
			HX_STACK_LINE(10695)
			if (((::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool == null()))){
				HX_STACK_LINE(10696)
				ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__new();
			}
			else{
				HX_STACK_LINE(10702)
				ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
				HX_STACK_LINE(10703)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = ret->next;
				HX_STACK_LINE(10704)
				ret->next = null();
			}
			HX_STACK_LINE(10709)
			Dynamic();
		}
		HX_STACK_LINE(10711)
		ret->elt = o;
		HX_STACK_LINE(10712)
		temp = ret;
	}
	HX_STACK_LINE(10714)
	if (((cur == null()))){
		HX_STACK_LINE(10715)
		temp->next = this->head;
		HX_STACK_LINE(10716)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(10719)
		temp->next = cur->next;
		HX_STACK_LINE(10720)
		cur->next = temp;
	}
	HX_STACK_LINE(10722)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(10723)
	(this->length)++;
	HX_STACK_LINE(10724)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_AABBNode_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_AABBNode cur,::zpp_nape::space::ZPP_AABBNode o){
	HX_STACK_FRAME("ZNPList_ZPP_AABBNode","insert","ZNPList_ZPP_AABBNode.insert","zpp_nape/util/Lists.hx",10679)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(10679)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(10679)
	{
		HX_STACK_LINE(10679)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10679)
		{
			HX_STACK_LINE(10679)
			if (((::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool == null()))){
				HX_STACK_LINE(10679)
				ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__new();
			}
			else{
				HX_STACK_LINE(10679)
				ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
				HX_STACK_LINE(10679)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = ret->next;
				HX_STACK_LINE(10679)
				ret->next = null();
			}
			HX_STACK_LINE(10679)
			Dynamic();
		}
		HX_STACK_LINE(10679)
		ret->elt = o;
		HX_STACK_LINE(10679)
		temp = ret;
	}
	HX_STACK_LINE(10679)
	if (((cur == null()))){
		HX_STACK_LINE(10679)
		temp->next = this->head;
		HX_STACK_LINE(10679)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(10679)
		temp->next = cur->next;
		HX_STACK_LINE(10679)
		cur->next = temp;
	}
	HX_STACK_LINE(10679)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(10679)
	(this->length)++;
	HX_STACK_LINE(10679)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_AABBNode_obj,insert,return )

Void ZNPList_ZPP_AABBNode_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_AABBNode x){
{
		HX_STACK_FRAME("ZNPList_ZPP_AABBNode","addAll","ZNPList_ZPP_AABBNode.addAll","zpp_nape/util/Lists.hx",10669)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(10670)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(10671)
		while(((cx_ite != null()))){
			HX_STACK_LINE(10672)
			::zpp_nape::space::ZPP_AABBNode i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(10673)
			this->add(i);
			HX_STACK_LINE(10674)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,addAll,(void))

::zpp_nape::space::ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::inlined_add( ::zpp_nape::space::ZPP_AABBNode o){
	HX_STACK_FRAME("ZNPList_ZPP_AABBNode","inlined_add","ZNPList_ZPP_AABBNode.inlined_add","zpp_nape/util/Lists.hx",10623)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(10632)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(10632)
	{
		HX_STACK_LINE(10633)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10634)
		{
			HX_STACK_LINE(10635)
			if (((::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool == null()))){
				HX_STACK_LINE(10636)
				ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__new();
			}
			else{
				HX_STACK_LINE(10642)
				ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
				HX_STACK_LINE(10643)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = ret->next;
				HX_STACK_LINE(10644)
				ret->next = null();
			}
			HX_STACK_LINE(10649)
			Dynamic();
		}
		HX_STACK_LINE(10651)
		ret->elt = o;
		HX_STACK_LINE(10652)
		temp = ret;
	}
	HX_STACK_LINE(10654)
	temp->next = this->head;
	HX_STACK_LINE(10655)
	this->head = temp;
	HX_STACK_LINE(10656)
	this->modified = true;
	HX_STACK_LINE(10657)
	(this->length)++;
	HX_STACK_LINE(10658)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,inlined_add,return )

::zpp_nape::space::ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::add( ::zpp_nape::space::ZPP_AABBNode o){
	HX_STACK_FRAME("ZNPList_ZPP_AABBNode","add","ZNPList_ZPP_AABBNode.add","zpp_nape/util/Lists.hx",10619)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(10619)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(10619)
	{
		HX_STACK_LINE(10619)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10619)
		{
			HX_STACK_LINE(10619)
			if (((::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool == null()))){
				HX_STACK_LINE(10619)
				ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__new();
			}
			else{
				HX_STACK_LINE(10619)
				ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
				HX_STACK_LINE(10619)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = ret->next;
				HX_STACK_LINE(10619)
				ret->next = null();
			}
			HX_STACK_LINE(10619)
			Dynamic();
		}
		HX_STACK_LINE(10619)
		ret->elt = o;
		HX_STACK_LINE(10619)
		temp = ret;
	}
	HX_STACK_LINE(10619)
	temp->next = this->head;
	HX_STACK_LINE(10619)
	this->head = temp;
	HX_STACK_LINE(10619)
	this->modified = true;
	HX_STACK_LINE(10619)
	(this->length)++;
	HX_STACK_LINE(10619)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,add,return )

Void ZNPList_ZPP_AABBNode_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_AABBNode i){
{
		HX_STACK_FRAME("ZNPList_ZPP_AABBNode","setbegin","ZNPList_ZPP_AABBNode.setbegin","zpp_nape/util/Lists.hx",10613)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(10614)
		this->head = i;
		HX_STACK_LINE(10615)
		this->modified = true;
		HX_STACK_LINE(10616)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::begin( ){
	HX_STACK_FRAME("ZNPList_ZPP_AABBNode","begin","ZNPList_ZPP_AABBNode.begin","zpp_nape/util/Lists.hx",10606)
	HX_STACK_THIS(this)
	HX_STACK_LINE(10606)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,begin,return )


ZNPList_ZPP_AABBNode_obj::ZNPList_ZPP_AABBNode_obj()
{
}

void ZNPList_ZPP_AABBNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_AABBNode);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_AABBNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_AABBNode_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_AABBNode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_AABBNode >(); return inValue; }
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

void ZNPList_ZPP_AABBNode_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_AABBNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_AABBNode_obj::__mClass,"__mClass");
};

#endif

Class ZNPList_ZPP_AABBNode_obj::__mClass;

void ZNPList_ZPP_AABBNode_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_AABBNode"), hx::TCanCast< ZNPList_ZPP_AABBNode_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void ZNPList_ZPP_AABBNode_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
