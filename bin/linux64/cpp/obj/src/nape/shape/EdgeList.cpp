#include <hxcpp.h>

#ifndef INCLUDED_nape_shape_Edge
#include <nape/shape/Edge.h>
#endif
#ifndef INCLUDED_nape_shape_EdgeIterator
#include <nape/shape/EdgeIterator.h>
#endif
#ifndef INCLUDED_nape_shape_EdgeList
#include <nape/shape/EdgeList.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Edge
#include <zpp_nape/shape/ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Edge
#include <zpp_nape/util/ZNPList_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_EdgeList
#include <zpp_nape/util/ZPP_EdgeList.h>
#endif
namespace nape{
namespace shape{

Void EdgeList_obj::__construct()
{
HX_STACK_FRAME("EdgeList","new","EdgeList.new","nape/shape/EdgeList.hx",234)
{
	HX_STACK_LINE(238)
	this->zpp_inner = null();
	HX_STACK_LINE(696)
	this->zpp_inner = ::zpp_nape::util::ZPP_EdgeList_obj::__new();
	HX_STACK_LINE(697)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

EdgeList_obj::~EdgeList_obj() { }

Dynamic EdgeList_obj::__CreateEmpty() { return  new EdgeList_obj; }
hx::ObjectPtr< EdgeList_obj > EdgeList_obj::__new()
{  hx::ObjectPtr< EdgeList_obj > result = new EdgeList_obj();
	result->__construct();
	return result;}

Dynamic EdgeList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EdgeList_obj > result = new EdgeList_obj();
	result->__construct();
	return result;}

::nape::shape::EdgeList EdgeList_obj::filter( Dynamic lambda){
	HX_STACK_FRAME("EdgeList","filter","EdgeList.filter","nape/shape/EdgeList.hx",779)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lambda,"lambda")
	HX_STACK_LINE(781)
	if (((lambda == null()))){
		HX_STACK_LINE(781)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot select elements of list with null"));
	}
	HX_STACK_LINE(783)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	struct _Function_1_1{
		inline static int Block( ::nape::shape::EdgeList_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","nape/shape/EdgeList.hx",784)
			{
				HX_STACK_LINE(784)
				__this->zpp_inner->valmod();
				HX_STACK_LINE(784)
				if ((__this->zpp_inner->zip_length)){
					HX_STACK_LINE(784)
					__this->zpp_inner->zip_length = false;
					HX_STACK_LINE(784)
					__this->zpp_inner->user_length = __this->zpp_inner->inner->length;
				}
				HX_STACK_LINE(784)
				return __this->zpp_inner->user_length;
			}
			return null();
		}
	};
	HX_STACK_LINE(784)
	while(((i < _Function_1_1::Block(this)))){
		HX_STACK_LINE(785)
		::nape::shape::Edge x = this->at(i);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(786)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(787)
			if ((lambda(x).Cast< bool >())){
				HX_STACK_LINE(787)
				(i)++;
			}
			else{
				HX_STACK_LINE(788)
				this->remove(x);
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(791)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(794)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(EdgeList_obj,filter,return )

::nape::shape::EdgeList EdgeList_obj::foreach( Dynamic lambda){
	HX_STACK_FRAME("EdgeList","foreach","EdgeList.foreach","nape/shape/EdgeList.hx",732)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lambda,"lambda")
	HX_STACK_LINE(734)
	if (((lambda == null()))){
		HX_STACK_LINE(734)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot execute null on list elements"));
	}
	HX_STACK_LINE(736)
	::nape::shape::EdgeIterator it;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(736)
	{
		HX_STACK_LINE(736)
		this->zpp_inner->valmod();
		HX_STACK_LINE(736)
		it = ::nape::shape::EdgeIterator_obj::get(hx::ObjectPtr<OBJ_>(this));
	}
	struct _Function_1_1{
		inline static bool Block( ::nape::shape::EdgeIterator &it){
			HX_STACK_FRAME("*","closure","*.closure","nape/shape/EdgeList.hx",737)
			{
				HX_STACK_LINE(737)
				it->zpp_inner->zpp_inner->valmod();
				HX_STACK_LINE(737)
				int length;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(737)
				{
					HX_STACK_LINE(737)
					::nape::shape::EdgeList _this = it->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(737)
					_this->zpp_inner->valmod();
					HX_STACK_LINE(737)
					if ((_this->zpp_inner->zip_length)){
						HX_STACK_LINE(737)
						_this->zpp_inner->zip_length = false;
						HX_STACK_LINE(737)
						_this->zpp_inner->user_length = _this->zpp_inner->inner->length;
					}
					HX_STACK_LINE(737)
					length = _this->zpp_inner->user_length;
				}
				HX_STACK_LINE(737)
				it->zpp_critical = true;
				struct _Function_2_1{
					inline static bool Block( ::nape::shape::EdgeIterator &it){
						HX_STACK_FRAME("*","closure","*.closure","nape/shape/EdgeList.hx",737)
						{
							HX_STACK_LINE(737)
							{
								HX_STACK_LINE(737)
								it->zpp_next = ::nape::shape::EdgeIterator_obj::zpp_pool;
								HX_STACK_LINE(737)
								::nape::shape::EdgeIterator_obj::zpp_pool = it;
								HX_STACK_LINE(737)
								it->zpp_inner = null();
							}
							HX_STACK_LINE(737)
							return false;
						}
						return null();
					}
				};
				HX_STACK_LINE(737)
				return (  (((it->zpp_i < length))) ? bool(true) : bool(_Function_2_1::Block(it)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(737)
	while((_Function_1_1::Block(it))){
		HX_STACK_LINE(738)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			struct _Function_3_1{
				inline static ::nape::shape::Edge Block( ::nape::shape::EdgeIterator &it){
					HX_STACK_FRAME("*","closure","*.closure","nape/shape/EdgeList.hx",739)
					{
						HX_STACK_LINE(739)
						it->zpp_critical = false;
						HX_STACK_LINE(739)
						return it->zpp_inner->at((it->zpp_i)++);
					}
					return null();
				}
			};
			HX_STACK_LINE(739)
			lambda(_Function_3_1::Block(it)).Cast< Void >();
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(742)
					{
						HX_STACK_LINE(743)
						it->zpp_next = ::nape::shape::EdgeIterator_obj::zpp_pool;
						HX_STACK_LINE(744)
						::nape::shape::EdgeIterator_obj::zpp_pool = it;
						HX_STACK_LINE(745)
						it->zpp_inner = null();
					}
					HX_STACK_LINE(747)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(750)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(EdgeList_obj,foreach,return )

::String EdgeList_obj::toString( ){
	HX_STACK_FRAME("EdgeList","toString","EdgeList.toString","nape/shape/EdgeList.hx",702)
	HX_STACK_THIS(this)
	HX_STACK_LINE(703)
	::String ret = HX_CSTRING("[");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(704)
	bool fst = true;		HX_STACK_VAR(fst,"fst");
	struct _Function_1_1{
		inline static ::nape::shape::EdgeIterator Block( ::nape::shape::EdgeList_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","nape/shape/EdgeList.hx",705)
			{
				HX_STACK_LINE(705)
				__this->zpp_inner->valmod();
				HX_STACK_LINE(705)
				return ::nape::shape::EdgeIterator_obj::get(__this);
			}
			return null();
		}
	};
	HX_STACK_LINE(705)
	for(::cpp::FastIterator_obj< ::nape::shape::Edge > *__it = ::cpp::CreateFastIterator< ::nape::shape::Edge >(_Function_1_1::Block(this));  __it->hasNext(); ){
		::nape::shape::Edge i = __it->next();
		{
			HX_STACK_LINE(706)
			if ((!(fst))){
				HX_STACK_LINE(706)
				hx::AddEq(ret,HX_CSTRING(","));
			}
			HX_STACK_LINE(707)
			hx::AddEq(ret,(  (((i == null()))) ? ::String(HX_CSTRING("NULL")) : ::String(i->toString()) ));
			HX_STACK_LINE(708)
			fst = false;
		}
;
	}
	HX_STACK_LINE(710)
	return (ret + HX_CSTRING("]"));
}


HX_DEFINE_DYNAMIC_FUNC0(EdgeList_obj,toString,return )

Void EdgeList_obj::merge( ::nape::shape::EdgeList xs){
{
		HX_STACK_FRAME("EdgeList","merge","EdgeList.merge","nape/shape/EdgeList.hx",684)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xs,"xs")
		HX_STACK_LINE(686)
		if (((xs == null()))){
			HX_STACK_LINE(686)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot merge with null list"));
		}
		struct _Function_1_1{
			inline static ::nape::shape::EdgeIterator Block( ::nape::shape::EdgeList &xs){
				HX_STACK_FRAME("*","closure","*.closure","nape/shape/EdgeList.hx",688)
				{
					HX_STACK_LINE(688)
					xs->zpp_inner->valmod();
					HX_STACK_LINE(688)
					return ::nape::shape::EdgeIterator_obj::get(xs);
				}
				return null();
			}
		};
		HX_STACK_LINE(688)
		for(::cpp::FastIterator_obj< ::nape::shape::Edge > *__it = ::cpp::CreateFastIterator< ::nape::shape::Edge >(_Function_1_1::Block(xs));  __it->hasNext(); ){
			::nape::shape::Edge x = __it->next();
			if ((!(this->has(x)))){
				HX_STACK_LINE(689)
				if ((this->zpp_inner->reverse_flag)){
					HX_STACK_LINE(689)
					this->push(x);
				}
				else{
					HX_STACK_LINE(689)
					this->unshift(x);
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EdgeList_obj,merge,(void))

::nape::shape::EdgeList EdgeList_obj::copy( hx::Null< bool >  __o_deep){
bool deep = __o_deep.Default(false);
	HX_STACK_FRAME("EdgeList","copy","EdgeList.copy","nape/shape/EdgeList.hx",662)
	HX_STACK_THIS(this)
	HX_STACK_ARG(deep,"deep")
{
		HX_STACK_LINE(663)
		::nape::shape::EdgeList ret = ::nape::shape::EdgeList_obj::__new();		HX_STACK_VAR(ret,"ret");
		struct _Function_1_1{
			inline static ::nape::shape::EdgeIterator Block( ::nape::shape::EdgeList_obj *__this){
				HX_STACK_FRAME("*","closure","*.closure","nape/shape/EdgeList.hx",664)
				{
					HX_STACK_LINE(664)
					__this->zpp_inner->valmod();
					HX_STACK_LINE(664)
					return ::nape::shape::EdgeIterator_obj::get(__this);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::nape::shape::Edge Block( ){
				HX_STACK_FRAME("*","closure","*.closure","nape/shape/EdgeList.hx",664)
				{
					HX_STACK_LINE(666)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Edge")) + HX_CSTRING(" is not a copyable type")));
					HX_STACK_LINE(668)
					return null();
				}
				return null();
			}
		};
		HX_STACK_LINE(664)
		for(::cpp::FastIterator_obj< ::nape::shape::Edge > *__it = ::cpp::CreateFastIterator< ::nape::shape::Edge >(_Function_1_1::Block(this));  __it->hasNext(); ){
			::nape::shape::Edge i = __it->next();
			ret->push((  ((deep)) ? ::nape::shape::Edge(_Function_1_2::Block()) : ::nape::shape::Edge(i) ));
		}
		HX_STACK_LINE(671)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(EdgeList_obj,copy,return )

::nape::shape::EdgeIterator EdgeList_obj::iterator( ){
	HX_STACK_FRAME("EdgeList","iterator","EdgeList.iterator","nape/shape/EdgeList.hx",647)
	HX_STACK_THIS(this)
	HX_STACK_LINE(648)
	this->zpp_inner->valmod();
	HX_STACK_LINE(651)
	return ::nape::shape::EdgeIterator_obj::get(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC0(EdgeList_obj,iterator,return )

bool EdgeList_obj::empty( ){
	HX_STACK_FRAME("EdgeList","empty","EdgeList.empty","nape/shape/EdgeList.hx",633)
	HX_STACK_THIS(this)
	HX_STACK_LINE(633)
	return (this->zpp_inner->inner->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(EdgeList_obj,empty,return )

Void EdgeList_obj::clear( ){
{
		HX_STACK_FRAME("EdgeList","clear","EdgeList.clear","nape/shape/EdgeList.hx",614)
		HX_STACK_THIS(this)
		HX_STACK_LINE(616)
		if ((this->zpp_inner->immutable)){
			HX_STACK_LINE(616)
			HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Edge")) + HX_CSTRING("List is immutable")));
		}
		HX_STACK_LINE(618)
		if ((this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(619)
			while((!(((this->zpp_inner->inner->head == null()))))){
				HX_STACK_LINE(619)
				this->pop();
			}
		}
		else{
			HX_STACK_LINE(622)
			while((!(((this->zpp_inner->inner->head == null()))))){
				HX_STACK_LINE(622)
				this->shift();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EdgeList_obj,clear,(void))

bool EdgeList_obj::remove( ::nape::shape::Edge obj){
	HX_STACK_FRAME("EdgeList","remove","EdgeList.remove","nape/shape/EdgeList.hx",576)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(578)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(578)
		HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Edge")) + HX_CSTRING("List is immutable")));
	}
	HX_STACK_LINE(580)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(581)
	this->zpp_inner->valmod();
	HX_STACK_LINE(584)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(585)
	{
		HX_STACK_LINE(586)
		ret = false;
		HX_STACK_LINE(587)
		{
			HX_STACK_LINE(588)
			::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = this->zpp_inner->inner->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(589)
			while(((cx_ite != null()))){
				HX_STACK_LINE(590)
				::zpp_nape::shape::ZPP_Edge x = cx_ite->elt;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(592)
				if (((x == obj->zpp_inner))){
					HX_STACK_LINE(593)
					ret = true;
					HX_STACK_LINE(594)
					break;
				}
				HX_STACK_LINE(597)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(601)
	if ((ret)){
		HX_STACK_LINE(602)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(602)
			this->zpp_inner->subber(obj);
		}
		HX_STACK_LINE(603)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(603)
			this->zpp_inner->inner->remove(obj->zpp_inner);
		}
		HX_STACK_LINE(604)
		this->zpp_inner->invalidate();
	}
	HX_STACK_LINE(606)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(EdgeList_obj,remove,return )

bool EdgeList_obj::add( ::nape::shape::Edge obj){
	HX_STACK_FRAME("EdgeList","add","EdgeList.add","nape/shape/EdgeList.hx",564)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(564)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(564)
		return this->push(obj);
	}
	else{
		HX_STACK_LINE(564)
		return this->unshift(obj);
	}
	HX_STACK_LINE(564)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(EdgeList_obj,add,return )

::nape::shape::Edge EdgeList_obj::shift( ){
	HX_STACK_FRAME("EdgeList","shift","EdgeList.shift","nape/shape/EdgeList.hx",519)
	HX_STACK_THIS(this)
	HX_STACK_LINE(521)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(521)
		HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Edge")) + HX_CSTRING("List is immutable")));
	}
	HX_STACK_LINE(523)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(525)
	if (((this->zpp_inner->inner->head == null()))){
		HX_STACK_LINE(525)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot remove from empty list"));
	}
	HX_STACK_LINE(527)
	this->zpp_inner->valmod();
	HX_STACK_LINE(530)
	::zpp_nape::shape::ZPP_Edge ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(531)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(532)
		if (((bool((this->zpp_inner->at_ite != null())) && bool((this->zpp_inner->at_ite->next == null()))))){
			HX_STACK_LINE(532)
			this->zpp_inner->at_ite = null();
		}
		HX_STACK_LINE(533)
		::zpp_nape::util::ZNPNode_ZPP_Edge ite;		HX_STACK_VAR(ite,"ite");
		struct _Function_2_1{
			inline static int Block( ::nape::shape::EdgeList_obj *__this){
				HX_STACK_FRAME("*","closure","*.closure","nape/shape/EdgeList.hx",533)
				{
					HX_STACK_LINE(533)
					__this->zpp_inner->valmod();
					HX_STACK_LINE(533)
					if ((__this->zpp_inner->zip_length)){
						HX_STACK_LINE(533)
						__this->zpp_inner->zip_length = false;
						HX_STACK_LINE(533)
						__this->zpp_inner->user_length = __this->zpp_inner->inner->length;
					}
					HX_STACK_LINE(533)
					return __this->zpp_inner->user_length;
				}
				return null();
			}
		};
		HX_STACK_LINE(533)
		if (((_Function_2_1::Block(this) == (int)1))){
			HX_STACK_LINE(533)
			ite = null();
		}
		else{
			struct _Function_3_1{
				inline static int Block( ::nape::shape::EdgeList_obj *__this){
					HX_STACK_FRAME("*","closure","*.closure","nape/shape/EdgeList.hx",533)
					{
						HX_STACK_LINE(533)
						__this->zpp_inner->valmod();
						HX_STACK_LINE(533)
						if ((__this->zpp_inner->zip_length)){
							HX_STACK_LINE(533)
							__this->zpp_inner->zip_length = false;
							HX_STACK_LINE(533)
							__this->zpp_inner->user_length = __this->zpp_inner->inner->length;
						}
						HX_STACK_LINE(533)
						return __this->zpp_inner->user_length;
					}
					return null();
				}
			};
			HX_STACK_LINE(533)
			ite = this->zpp_inner->inner->iterator_at((_Function_3_1::Block(this) - (int)2));
		}
		HX_STACK_LINE(534)
		if (((ite == null()))){
			HX_STACK_LINE(534)
			ret = this->zpp_inner->inner->head->elt;
		}
		else{
			HX_STACK_LINE(534)
			ret = ite->next->elt;
		}
		HX_STACK_LINE(535)
		::nape::shape::Edge retx = ret->wrapper();		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(536)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(536)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(537)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(537)
			this->zpp_inner->inner->erase(ite);
		}
	}
	else{
		HX_STACK_LINE(540)
		ret = this->zpp_inner->inner->head->elt;
		HX_STACK_LINE(541)
		::nape::shape::Edge retx = ret->wrapper();		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(542)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(542)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(543)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(543)
			this->zpp_inner->inner->pop();
		}
	}
	HX_STACK_LINE(545)
	this->zpp_inner->invalidate();
	HX_STACK_LINE(546)
	::nape::shape::Edge retx = ret->wrapper();		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(547)
	return retx;
}


HX_DEFINE_DYNAMIC_FUNC0(EdgeList_obj,shift,return )

::nape::shape::Edge EdgeList_obj::pop( ){
	HX_STACK_FRAME("EdgeList","pop","EdgeList.pop","nape/shape/EdgeList.hx",478)
	HX_STACK_THIS(this)
	HX_STACK_LINE(480)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(480)
		HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Edge")) + HX_CSTRING("List is immutable")));
	}
	HX_STACK_LINE(482)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(484)
	if (((this->zpp_inner->inner->head == null()))){
		HX_STACK_LINE(484)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot remove from empty list"));
	}
	HX_STACK_LINE(486)
	this->zpp_inner->valmod();
	HX_STACK_LINE(489)
	::zpp_nape::shape::ZPP_Edge ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(490)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(491)
		ret = this->zpp_inner->inner->head->elt;
		HX_STACK_LINE(492)
		::nape::shape::Edge retx = ret->wrapper();		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(493)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(493)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(494)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(494)
			this->zpp_inner->inner->pop();
		}
	}
	else{
		HX_STACK_LINE(497)
		if (((bool((this->zpp_inner->at_ite != null())) && bool((this->zpp_inner->at_ite->next == null()))))){
			HX_STACK_LINE(497)
			this->zpp_inner->at_ite = null();
		}
		HX_STACK_LINE(498)
		::zpp_nape::util::ZNPNode_ZPP_Edge ite;		HX_STACK_VAR(ite,"ite");
		struct _Function_2_1{
			inline static int Block( ::nape::shape::EdgeList_obj *__this){
				HX_STACK_FRAME("*","closure","*.closure","nape/shape/EdgeList.hx",498)
				{
					HX_STACK_LINE(498)
					__this->zpp_inner->valmod();
					HX_STACK_LINE(498)
					if ((__this->zpp_inner->zip_length)){
						HX_STACK_LINE(498)
						__this->zpp_inner->zip_length = false;
						HX_STACK_LINE(498)
						__this->zpp_inner->user_length = __this->zpp_inner->inner->length;
					}
					HX_STACK_LINE(498)
					return __this->zpp_inner->user_length;
				}
				return null();
			}
		};
		HX_STACK_LINE(498)
		if (((_Function_2_1::Block(this) == (int)1))){
			HX_STACK_LINE(498)
			ite = null();
		}
		else{
			struct _Function_3_1{
				inline static int Block( ::nape::shape::EdgeList_obj *__this){
					HX_STACK_FRAME("*","closure","*.closure","nape/shape/EdgeList.hx",498)
					{
						HX_STACK_LINE(498)
						__this->zpp_inner->valmod();
						HX_STACK_LINE(498)
						if ((__this->zpp_inner->zip_length)){
							HX_STACK_LINE(498)
							__this->zpp_inner->zip_length = false;
							HX_STACK_LINE(498)
							__this->zpp_inner->user_length = __this->zpp_inner->inner->length;
						}
						HX_STACK_LINE(498)
						return __this->zpp_inner->user_length;
					}
					return null();
				}
			};
			HX_STACK_LINE(498)
			ite = this->zpp_inner->inner->iterator_at((_Function_3_1::Block(this) - (int)2));
		}
		HX_STACK_LINE(499)
		if (((ite == null()))){
			HX_STACK_LINE(499)
			ret = this->zpp_inner->inner->head->elt;
		}
		else{
			HX_STACK_LINE(499)
			ret = ite->next->elt;
		}
		HX_STACK_LINE(500)
		::nape::shape::Edge retx = ret->wrapper();		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(501)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(501)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(502)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(502)
			this->zpp_inner->inner->erase(ite);
		}
	}
	HX_STACK_LINE(504)
	this->zpp_inner->invalidate();
	HX_STACK_LINE(505)
	::nape::shape::Edge retx = ret->wrapper();		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(506)
	return retx;
}


HX_DEFINE_DYNAMIC_FUNC0(EdgeList_obj,pop,return )

bool EdgeList_obj::unshift( ::nape::shape::Edge obj){
	HX_STACK_FRAME("EdgeList","unshift","EdgeList.unshift","nape/shape/EdgeList.hx",447)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(449)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(449)
		HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Edge")) + HX_CSTRING("List is immutable")));
	}
	HX_STACK_LINE(451)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(452)
	this->zpp_inner->valmod();
	HX_STACK_LINE(455)
	bool cont;		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(455)
	if (((this->zpp_inner->adder != null()))){
		HX_STACK_LINE(455)
		cont = this->zpp_inner->adder(obj);
	}
	else{
		HX_STACK_LINE(455)
		cont = true;
	}
	HX_STACK_LINE(456)
	if ((cont)){
		HX_STACK_LINE(457)
		if ((this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(458)
			if (((this->zpp_inner->push_ite == null()))){
				HX_STACK_LINE(458)
				if (((this->zpp_inner->inner->head == null()))){
					HX_STACK_LINE(458)
					this->zpp_inner->push_ite = null();
				}
				else{
					struct _Function_5_1{
						inline static int Block( ::nape::shape::EdgeList_obj *__this){
							HX_STACK_FRAME("*","closure","*.closure","nape/shape/EdgeList.hx",458)
							{
								HX_STACK_LINE(458)
								__this->zpp_inner->valmod();
								HX_STACK_LINE(458)
								if ((__this->zpp_inner->zip_length)){
									HX_STACK_LINE(458)
									__this->zpp_inner->zip_length = false;
									HX_STACK_LINE(458)
									__this->zpp_inner->user_length = __this->zpp_inner->inner->length;
								}
								HX_STACK_LINE(458)
								return __this->zpp_inner->user_length;
							}
							return null();
						}
					};
					HX_STACK_LINE(458)
					this->zpp_inner->push_ite = this->zpp_inner->inner->iterator_at((_Function_5_1::Block(this) - (int)1));
				}
			}
			HX_STACK_LINE(459)
			this->zpp_inner->push_ite = this->zpp_inner->inner->insert(this->zpp_inner->push_ite,obj->zpp_inner);
		}
		else{
			HX_STACK_LINE(461)
			this->zpp_inner->inner->add(obj->zpp_inner);
		}
		HX_STACK_LINE(462)
		this->zpp_inner->invalidate();
		HX_STACK_LINE(463)
		if (((this->zpp_inner->post_adder != null()))){
			HX_STACK_LINE(463)
			this->zpp_inner->post_adder(obj);
		}
	}
	HX_STACK_LINE(465)
	return cont;
}


HX_DEFINE_DYNAMIC_FUNC1(EdgeList_obj,unshift,return )

bool EdgeList_obj::push( ::nape::shape::Edge obj){
	HX_STACK_FRAME("EdgeList","push","EdgeList.push","nape/shape/EdgeList.hx",416)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(418)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(418)
		HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Edge")) + HX_CSTRING("List is immutable")));
	}
	HX_STACK_LINE(420)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(421)
	this->zpp_inner->valmod();
	HX_STACK_LINE(424)
	bool cont;		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(424)
	if (((this->zpp_inner->adder != null()))){
		HX_STACK_LINE(424)
		cont = this->zpp_inner->adder(obj);
	}
	else{
		HX_STACK_LINE(424)
		cont = true;
	}
	HX_STACK_LINE(425)
	if ((cont)){
		HX_STACK_LINE(426)
		if ((this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(426)
			this->zpp_inner->inner->add(obj->zpp_inner);
		}
		else{
			HX_STACK_LINE(428)
			if (((this->zpp_inner->push_ite == null()))){
				HX_STACK_LINE(428)
				if (((this->zpp_inner->inner->head == null()))){
					HX_STACK_LINE(428)
					this->zpp_inner->push_ite = null();
				}
				else{
					struct _Function_5_1{
						inline static int Block( ::nape::shape::EdgeList_obj *__this){
							HX_STACK_FRAME("*","closure","*.closure","nape/shape/EdgeList.hx",428)
							{
								HX_STACK_LINE(428)
								__this->zpp_inner->valmod();
								HX_STACK_LINE(428)
								if ((__this->zpp_inner->zip_length)){
									HX_STACK_LINE(428)
									__this->zpp_inner->zip_length = false;
									HX_STACK_LINE(428)
									__this->zpp_inner->user_length = __this->zpp_inner->inner->length;
								}
								HX_STACK_LINE(428)
								return __this->zpp_inner->user_length;
							}
							return null();
						}
					};
					HX_STACK_LINE(428)
					this->zpp_inner->push_ite = this->zpp_inner->inner->iterator_at((_Function_5_1::Block(this) - (int)1));
				}
			}
			HX_STACK_LINE(429)
			this->zpp_inner->push_ite = this->zpp_inner->inner->insert(this->zpp_inner->push_ite,obj->zpp_inner);
		}
		HX_STACK_LINE(431)
		this->zpp_inner->invalidate();
		HX_STACK_LINE(432)
		if (((this->zpp_inner->post_adder != null()))){
			HX_STACK_LINE(432)
			this->zpp_inner->post_adder(obj);
		}
	}
	HX_STACK_LINE(434)
	return cont;
}


HX_DEFINE_DYNAMIC_FUNC1(EdgeList_obj,push,return )

::nape::shape::Edge EdgeList_obj::at( int index){
	HX_STACK_FRAME("EdgeList","at","EdgeList.at","nape/shape/EdgeList.hx",363)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(364)
	this->zpp_inner->valmod();
	struct _Function_1_1{
		inline static int Block( ::nape::shape::EdgeList_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","nape/shape/EdgeList.hx",368)
			{
				HX_STACK_LINE(368)
				__this->zpp_inner->valmod();
				HX_STACK_LINE(368)
				if ((__this->zpp_inner->zip_length)){
					HX_STACK_LINE(368)
					__this->zpp_inner->zip_length = false;
					HX_STACK_LINE(368)
					__this->zpp_inner->user_length = __this->zpp_inner->inner->length;
				}
				HX_STACK_LINE(368)
				return __this->zpp_inner->user_length;
			}
			return null();
		}
	};
	HX_STACK_LINE(368)
	if (((bool((index < (int)0)) || bool((index >= _Function_1_1::Block(this)))))){
		HX_STACK_LINE(368)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Index out of bounds"));
	}
	HX_STACK_LINE(370)
	if ((this->zpp_inner->reverse_flag)){
		struct _Function_2_1{
			inline static int Block( ::nape::shape::EdgeList_obj *__this){
				HX_STACK_FRAME("*","closure","*.closure","nape/shape/EdgeList.hx",370)
				{
					HX_STACK_LINE(370)
					__this->zpp_inner->valmod();
					HX_STACK_LINE(370)
					if ((__this->zpp_inner->zip_length)){
						HX_STACK_LINE(370)
						__this->zpp_inner->zip_length = false;
						HX_STACK_LINE(370)
						__this->zpp_inner->user_length = __this->zpp_inner->inner->length;
					}
					HX_STACK_LINE(370)
					return __this->zpp_inner->user_length;
				}
				return null();
			}
		};
		HX_STACK_LINE(370)
		if (((index == (_Function_2_1::Block(this) - (int)1)))){
			HX_STACK_LINE(370)
			index = index;
		}
		else{
			struct _Function_3_1{
				inline static int Block( ::nape::shape::EdgeList_obj *__this){
					HX_STACK_FRAME("*","closure","*.closure","nape/shape/EdgeList.hx",370)
					{
						HX_STACK_LINE(370)
						__this->zpp_inner->valmod();
						HX_STACK_LINE(370)
						if ((__this->zpp_inner->zip_length)){
							HX_STACK_LINE(370)
							__this->zpp_inner->zip_length = false;
							HX_STACK_LINE(370)
							__this->zpp_inner->user_length = __this->zpp_inner->inner->length;
						}
						HX_STACK_LINE(370)
						return __this->zpp_inner->user_length;
					}
					return null();
				}
			};
			HX_STACK_LINE(370)
			index = ((_Function_3_1::Block(this) - (int)2) - index);
		}
	}
	HX_STACK_LINE(372)
	if (((bool((index < this->zpp_inner->at_index)) || bool((this->zpp_inner->at_ite == null()))))){
		HX_STACK_LINE(373)
		this->zpp_inner->at_index = index;
		HX_STACK_LINE(374)
		this->zpp_inner->at_ite = this->zpp_inner->inner->iterator_at(index);
	}
	else{
		HX_STACK_LINE(377)
		while(((this->zpp_inner->at_index != index))){
			HX_STACK_LINE(378)
			(this->zpp_inner->at_index)++;
			HX_STACK_LINE(379)
			this->zpp_inner->at_ite = this->zpp_inner->at_ite->next;
		}
	}
	HX_STACK_LINE(403)
	return this->zpp_inner->at_ite->elt->wrapper();
}


HX_DEFINE_DYNAMIC_FUNC1(EdgeList_obj,at,return )

bool EdgeList_obj::has( ::nape::shape::Edge obj){
	HX_STACK_FRAME("EdgeList","has","EdgeList.has","nape/shape/EdgeList.hx",346)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(347)
	this->zpp_inner->valmod();
	HX_STACK_LINE(350)
	return this->zpp_inner->inner->has(obj->zpp_inner);
}


HX_DEFINE_DYNAMIC_FUNC1(EdgeList_obj,has,return )

int EdgeList_obj::get_length( ){
	HX_STACK_FRAME("EdgeList","get_length","EdgeList.get_length","nape/shape/EdgeList.hx",244)
	HX_STACK_THIS(this)
	HX_STACK_LINE(245)
	this->zpp_inner->valmod();
	HX_STACK_LINE(246)
	if ((this->zpp_inner->zip_length)){
		HX_STACK_LINE(247)
		this->zpp_inner->zip_length = false;
		HX_STACK_LINE(259)
		this->zpp_inner->user_length = this->zpp_inner->inner->length;
	}
	HX_STACK_LINE(261)
	return this->zpp_inner->user_length;
}


HX_DEFINE_DYNAMIC_FUNC0(EdgeList_obj,get_length,return )

::nape::shape::EdgeList EdgeList_obj::fromArray( Array< ::Dynamic > array){
	HX_STACK_FRAME("EdgeList","fromArray","EdgeList.fromArray","nape/shape/EdgeList.hx",304)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(306)
	if (((array == null()))){
		HX_STACK_LINE(307)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot convert null Array to Nape list"));
	}
	HX_STACK_LINE(310)
	::nape::shape::EdgeList ret = ::nape::shape::EdgeList_obj::__new();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(311)
	{
		HX_STACK_LINE(311)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(311)
		while(((_g < array->length))){
			HX_STACK_LINE(311)
			::nape::shape::Edge i = array->__get(_g).StaticCast< ::nape::shape::Edge >();		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(311)
			++(_g);
			HX_STACK_LINE(316)
			ret->push(i);
		}
	}
	HX_STACK_LINE(318)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EdgeList_obj,fromArray,return )


EdgeList_obj::EdgeList_obj()
{
}

void EdgeList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EdgeList);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void EdgeList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic EdgeList_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"shift") ) { return shift_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return filter_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return get_length(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"foreach") ) { return foreach_dyn(); }
		if (HX_FIELD_EQ(inName,"unshift") ) { return unshift_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromArray") ) { return fromArray_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EdgeList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::util::ZPP_EdgeList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EdgeList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("zpp_inner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromArray"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("filter"),
	HX_CSTRING("foreach"),
	HX_CSTRING("toString"),
	HX_CSTRING("merge"),
	HX_CSTRING("copy"),
	HX_CSTRING("iterator"),
	HX_CSTRING("empty"),
	HX_CSTRING("clear"),
	HX_CSTRING("remove"),
	HX_CSTRING("add"),
	HX_CSTRING("shift"),
	HX_CSTRING("pop"),
	HX_CSTRING("unshift"),
	HX_CSTRING("push"),
	HX_CSTRING("at"),
	HX_CSTRING("has"),
	HX_CSTRING("get_length"),
	HX_CSTRING("zpp_inner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EdgeList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EdgeList_obj::__mClass,"__mClass");
};

#endif

Class EdgeList_obj::__mClass;

void EdgeList_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.shape.EdgeList"), hx::TCanCast< EdgeList_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void EdgeList_obj::__boot()
{
}

} // end namespace nape
} // end namespace shape
