#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_LineJoint
#include <nape/constraint/LineJoint.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_CopyHelper
#include <zpp_nape/constraint/ZPP_CopyHelper.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_LineJoint
#include <zpp_nape/constraint/ZPP_LineJoint.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace constraint{

Void ZPP_LineJoint_obj::__construct()
{
HX_STACK_FRAME("ZPP_LineJoint","new","ZPP_LineJoint.new","zpp_nape/constraint/LineJoint.hx",174)
{
	HX_STACK_LINE(440)
	this->biasy = 0.0;
	HX_STACK_LINE(439)
	this->biasx = 0.0;
	HX_STACK_LINE(436)
	this->jAccy = 0.0;
	HX_STACK_LINE(435)
	this->jAccx = 0.0;
	HX_STACK_LINE(434)
	this->kMassc = 0.0;
	HX_STACK_LINE(433)
	this->kMassb = 0.0;
	HX_STACK_LINE(432)
	this->kMassa = 0.0;
	HX_STACK_LINE(401)
	this->wrap_n = null();
	HX_STACK_LINE(345)
	this->nrely = 0.0;
	HX_STACK_LINE(344)
	this->nrelx = 0.0;
	HX_STACK_LINE(343)
	this->nlocaly = 0.0;
	HX_STACK_LINE(342)
	this->nlocalx = 0.0;
	HX_STACK_LINE(340)
	this->wrap_a2 = null();
	HX_STACK_LINE(287)
	this->a2rely = 0.0;
	HX_STACK_LINE(286)
	this->a2relx = 0.0;
	HX_STACK_LINE(285)
	this->a2localy = 0.0;
	HX_STACK_LINE(284)
	this->a2localx = 0.0;
	HX_STACK_LINE(282)
	this->wrap_a1 = null();
	HX_STACK_LINE(229)
	this->a1rely = 0.0;
	HX_STACK_LINE(228)
	this->a1relx = 0.0;
	HX_STACK_LINE(227)
	this->a1localy = 0.0;
	HX_STACK_LINE(226)
	this->a1localx = 0.0;
	HX_STACK_LINE(183)
	this->cx2 = 0.0;
	HX_STACK_LINE(182)
	this->cx1 = 0.0;
	HX_STACK_LINE(181)
	this->dot2 = 0.0;
	HX_STACK_LINE(180)
	this->dot1 = 0.0;
	HX_STACK_LINE(179)
	this->equal = false;
	HX_STACK_LINE(178)
	this->jointMax = 0.0;
	HX_STACK_LINE(177)
	this->jointMin = 0.0;
	HX_STACK_LINE(176)
	this->scale = 0.0;
	HX_STACK_LINE(175)
	this->outer_zn = null();
	HX_STACK_LINE(490)
	super::__construct();
	HX_STACK_LINE(491)
	{
		HX_STACK_LINE(492)
		{
			HX_STACK_LINE(493)
			this->a1localx = (int)0;
			HX_STACK_LINE(494)
			this->a1localy = (int)0;
			HX_STACK_LINE(503)
			{
			}
		}
		HX_STACK_LINE(512)
		{
			HX_STACK_LINE(513)
			this->a1relx = (int)0;
			HX_STACK_LINE(514)
			this->a1rely = (int)0;
			HX_STACK_LINE(523)
			{
			}
		}
	}
	HX_STACK_LINE(533)
	{
		HX_STACK_LINE(534)
		{
			HX_STACK_LINE(535)
			this->a2localx = (int)0;
			HX_STACK_LINE(536)
			this->a2localy = (int)0;
			HX_STACK_LINE(545)
			{
			}
		}
		HX_STACK_LINE(554)
		{
			HX_STACK_LINE(555)
			this->a2relx = (int)0;
			HX_STACK_LINE(556)
			this->a2rely = (int)0;
			HX_STACK_LINE(565)
			{
			}
		}
	}
	HX_STACK_LINE(575)
	{
		HX_STACK_LINE(576)
		{
			HX_STACK_LINE(577)
			this->nlocalx = (int)0;
			HX_STACK_LINE(578)
			this->nlocaly = (int)0;
			HX_STACK_LINE(587)
			{
			}
		}
		HX_STACK_LINE(596)
		{
			HX_STACK_LINE(597)
			this->nrelx = (int)0;
			HX_STACK_LINE(598)
			this->nrely = (int)0;
			HX_STACK_LINE(607)
			{
			}
		}
	}
	HX_STACK_LINE(617)
	{
		HX_STACK_LINE(618)
		this->jAccx = (int)0;
		HX_STACK_LINE(619)
		this->jAccy = (int)0;
		HX_STACK_LINE(628)
		{
		}
	}
	HX_STACK_LINE(637)
	this->jMax = ::Math_obj::POSITIVE_INFINITY;
	HX_STACK_LINE(638)
	this->jointMin = ::Math_obj::NEGATIVE_INFINITY;
	HX_STACK_LINE(639)
	this->jointMax = ::Math_obj::POSITIVE_INFINITY;
	HX_STACK_LINE(640)
	this->stepped = false;
}
;
	return null();
}

ZPP_LineJoint_obj::~ZPP_LineJoint_obj() { }

Dynamic ZPP_LineJoint_obj::__CreateEmpty() { return  new ZPP_LineJoint_obj; }
hx::ObjectPtr< ZPP_LineJoint_obj > ZPP_LineJoint_obj::__new()
{  hx::ObjectPtr< ZPP_LineJoint_obj > result = new ZPP_LineJoint_obj();
	result->__construct();
	return result;}

Dynamic ZPP_LineJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_LineJoint_obj > result = new ZPP_LineJoint_obj();
	result->__construct();
	return result;}

Void ZPP_LineJoint_obj::draw( ::nape::util::Debug g){
{
		HX_STACK_FRAME("ZPP_LineJoint","draw","ZPP_LineJoint.draw","zpp_nape/constraint/LineJoint.hx",1571)
		HX_STACK_THIS(this)
		HX_STACK_ARG(g,"g")
		HX_STACK_LINE(1572)
		::nape::constraint::LineJoint me = this->outer_zn;		HX_STACK_VAR(me,"me");
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::nape::constraint::LineJoint &me){
				HX_STACK_FRAME("*","closure","*.closure","zpp_nape/constraint/LineJoint.hx",1573)
				{
					HX_STACK_LINE(1573)
					if (((me->zpp_inner_zn->wrap_a1 == null()))){
						HX_STACK_LINE(1573)
						me->zpp_inner_zn->setup_a1();
					}
					HX_STACK_LINE(1573)
					return me->zpp_inner_zn->wrap_a1;
				}
				return null();
			}
		};
		HX_STACK_LINE(1573)
		::nape::geom::Vec2 a1 = ((  (((me->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(me->zpp_inner_zn->b1->outer) ))->localPointToWorld(_Function_1_1::Block(me),null());		HX_STACK_VAR(a1,"a1");
		struct _Function_1_2{
			inline static ::nape::geom::Vec2 Block( ::nape::constraint::LineJoint &me){
				HX_STACK_FRAME("*","closure","*.closure","zpp_nape/constraint/LineJoint.hx",1574)
				{
					HX_STACK_LINE(1574)
					if (((me->zpp_inner_zn->wrap_a2 == null()))){
						HX_STACK_LINE(1574)
						me->zpp_inner_zn->setup_a2();
					}
					HX_STACK_LINE(1574)
					return me->zpp_inner_zn->wrap_a2;
				}
				return null();
			}
		};
		HX_STACK_LINE(1574)
		::nape::geom::Vec2 a2 = ((  (((me->zpp_inner_zn->b2 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(me->zpp_inner_zn->b2->outer) ))->localPointToWorld(_Function_1_2::Block(me),null());		HX_STACK_VAR(a2,"a2");
		struct _Function_1_3{
			inline static ::nape::geom::Vec2 Block( ::nape::constraint::LineJoint &me){
				HX_STACK_FRAME("*","closure","*.closure","zpp_nape/constraint/LineJoint.hx",1575)
				{
					HX_STACK_LINE(1575)
					if (((me->zpp_inner_zn->wrap_n == null()))){
						HX_STACK_LINE(1575)
						me->zpp_inner_zn->setup_n();
					}
					HX_STACK_LINE(1575)
					return me->zpp_inner_zn->wrap_n;
				}
				return null();
			}
		};
		HX_STACK_LINE(1575)
		::nape::geom::Vec2 dir = ((  (((me->zpp_inner_zn->b1 == null()))) ? ::nape::phys::Body(null()) : ::nape::phys::Body(me->zpp_inner_zn->b1->outer) ))->localVectorToWorld(_Function_1_3::Block(me),null());		HX_STACK_VAR(dir,"dir");
		struct _Function_1_4{
			inline static Float Block( ::nape::geom::Vec2 &dir){
				HX_STACK_FRAME("*","closure","*.closure","zpp_nape/constraint/LineJoint.hx",1576)
				{
					HX_STACK_LINE(1576)
					if (((bool((dir != null())) && bool(dir->zpp_disp)))){
						HX_STACK_LINE(1576)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					struct _Function_2_1{
						inline static Float Block( ::nape::geom::Vec2 &dir){
							HX_STACK_FRAME("*","closure","*.closure","zpp_nape/constraint/LineJoint.hx",1576)
							{
								HX_STACK_LINE(1576)
								if (((bool((dir != null())) && bool(dir->zpp_disp)))){
									HX_STACK_LINE(1576)
									HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1576)
								{
									HX_STACK_LINE(1576)
									::zpp_nape::geom::ZPP_Vec2 _this = dir->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1576)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1576)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1576)
								return dir->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static Float Block( ::nape::geom::Vec2 &dir){
							HX_STACK_FRAME("*","closure","*.closure","zpp_nape/constraint/LineJoint.hx",1576)
							{
								HX_STACK_LINE(1576)
								if (((bool((dir != null())) && bool(dir->zpp_disp)))){
									HX_STACK_LINE(1576)
									HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1576)
								{
									HX_STACK_LINE(1576)
									::zpp_nape::geom::ZPP_Vec2 _this = dir->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1576)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1576)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1576)
								return dir->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_2_3{
						inline static Float Block( ::nape::geom::Vec2 &dir){
							HX_STACK_FRAME("*","closure","*.closure","zpp_nape/constraint/LineJoint.hx",1576)
							{
								HX_STACK_LINE(1576)
								if (((bool((dir != null())) && bool(dir->zpp_disp)))){
									HX_STACK_LINE(1576)
									HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1576)
								{
									HX_STACK_LINE(1576)
									::zpp_nape::geom::ZPP_Vec2 _this = dir->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1576)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1576)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1576)
								return dir->zpp_inner->y;
							}
							return null();
						}
					};
					struct _Function_2_4{
						inline static Float Block( ::nape::geom::Vec2 &dir){
							HX_STACK_FRAME("*","closure","*.closure","zpp_nape/constraint/LineJoint.hx",1576)
							{
								HX_STACK_LINE(1576)
								if (((bool((dir != null())) && bool(dir->zpp_disp)))){
									HX_STACK_LINE(1576)
									HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1576)
								{
									HX_STACK_LINE(1576)
									::zpp_nape::geom::ZPP_Vec2 _this = dir->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1576)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(1576)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1576)
								return dir->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(1576)
					return ::Math_obj::sqrt(((_Function_2_1::Block(dir) * _Function_2_2::Block(dir)) + (_Function_2_3::Block(dir) * _Function_2_4::Block(dir))));
				}
				return null();
			}
		};
		HX_STACK_LINE(1576)
		dir->muleq((Float((int)1) / Float(_Function_1_4::Block(dir))));
		HX_STACK_LINE(1577)
		Float min = me->zpp_inner_zn->jointMin;		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(1578)
		Float max = me->zpp_inner_zn->jointMax;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(1579)
		if (((min <= ::Math_obj::NEGATIVE_INFINITY))){
			HX_STACK_LINE(1579)
			min = (int)-1000;
		}
		HX_STACK_LINE(1580)
		if (((max >= ::Math_obj::POSITIVE_INFINITY))){
			HX_STACK_LINE(1580)
			max = (int)1000;
		}
		HX_STACK_LINE(1581)
		::nape::geom::Vec2 del = a2->sub(a1,null());		HX_STACK_VAR(del,"del");
		HX_STACK_LINE(1582)
		Float pn = del->dot(dir);		HX_STACK_VAR(pn,"pn");
		HX_STACK_LINE(1583)
		{
			HX_STACK_LINE(1583)
			if (((bool((del != null())) && bool(del->zpp_disp)))){
				HX_STACK_LINE(1583)
				HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(1583)
			{
				HX_STACK_LINE(1583)
				::zpp_nape::geom::ZPP_Vec2 _this = del->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1583)
				if ((_this->_immutable)){
					HX_STACK_LINE(1583)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(1583)
				if (((_this->_isimmutable != null()))){
					HX_STACK_LINE(1583)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(1583)
			if ((del->zpp_inner->_inuse)){
				HX_STACK_LINE(1583)
				HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(1583)
			::zpp_nape::geom::ZPP_Vec2 inner = del->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(1583)
			del->zpp_inner->outer = null();
			HX_STACK_LINE(1583)
			del->zpp_inner = null();
			HX_STACK_LINE(1583)
			{
				HX_STACK_LINE(1583)
				::nape::geom::Vec2 o = del;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1583)
				o->zpp_pool = null();
				HX_STACK_LINE(1583)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(1583)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(1583)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1583)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(1583)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(1583)
			{
				HX_STACK_LINE(1583)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1583)
				{
					HX_STACK_LINE(1583)
					if (((o->outer != null()))){
						HX_STACK_LINE(1583)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(1583)
						o->outer = null();
					}
					HX_STACK_LINE(1583)
					o->_isimmutable = null();
					HX_STACK_LINE(1583)
					o->_validate = null();
					HX_STACK_LINE(1583)
					o->_invalidate = null();
				}
				HX_STACK_LINE(1583)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(1583)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(1584)
		::nape::geom::Vec2 e1 = a1->add(dir->mul(min,true),null());		HX_STACK_VAR(e1,"e1");
		HX_STACK_LINE(1585)
		::nape::geom::Vec2 e2 = a1->add(dir->mul(max,true),null());		HX_STACK_VAR(e2,"e2");
		HX_STACK_LINE(1586)
		if (((pn > min))){
			struct _Function_2_1{
				inline static Float Block( Float &pn,Float &max){
					HX_STACK_FRAME("*","closure","*.closure","zpp_nape/constraint/LineJoint.hx",1586)
					{
						HX_STACK_LINE(1587)
						Float x = pn;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1588)
						Float y = max;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(1589)
						return (  (((x < y))) ? Float(x) : Float(y) );
					}
					return null();
				}
			};
			HX_STACK_LINE(1586)
			g->drawLine(e1,a1->add(dir->mul(_Function_2_1::Block(pn,max),true),true),(int)16776960);
		}
		HX_STACK_LINE(1591)
		if (((pn < max))){
			struct _Function_2_1{
				inline static Float Block( Float &pn,Float &min){
					HX_STACK_FRAME("*","closure","*.closure","zpp_nape/constraint/LineJoint.hx",1591)
					{
						HX_STACK_LINE(1592)
						Float x = pn;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1593)
						Float y = min;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(1594)
						return (  (((x > y))) ? Float(x) : Float(y) );
					}
					return null();
				}
			};
			HX_STACK_LINE(1591)
			g->drawLine(a1->add(dir->mul(_Function_2_1::Block(pn,min),true),true),e2,(int)65535);
		}
		HX_STACK_LINE(1596)
		if ((!(this->stiff))){
			HX_STACK_LINE(1597)
			::nape::geom::Vec2 anch;		HX_STACK_VAR(anch,"anch");
			HX_STACK_LINE(1597)
			if (((pn < this->jointMin))){
				HX_STACK_LINE(1597)
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(1597)
				if (((bool((e1 != null())) && bool(e1->zpp_disp)))){
					HX_STACK_LINE(1597)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1597)
				{
					HX_STACK_LINE(1597)
					Float x;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(1597)
					{
						HX_STACK_LINE(1597)
						if ((e1->zpp_disp)){
							HX_STACK_LINE(1597)
							HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1597)
						{
							HX_STACK_LINE(1597)
							::zpp_nape::geom::ZPP_Vec2 _this = e1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1597)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1597)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1597)
						x = e1->zpp_inner->x;
					}
					HX_STACK_LINE(1597)
					Float y;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(1597)
					{
						HX_STACK_LINE(1597)
						if ((e1->zpp_disp)){
							HX_STACK_LINE(1597)
							HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1597)
						{
							HX_STACK_LINE(1597)
							::zpp_nape::geom::ZPP_Vec2 _this = e1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1597)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(1597)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1597)
						y = e1->zpp_inner->y;
					}
					HX_STACK_LINE(1597)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(1597)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(1597)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1597)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(1597)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(1597)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(1597)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(1597)
						ret->zpp_pool = null();
						HX_STACK_LINE(1597)
						ret->zpp_disp = false;
						HX_STACK_LINE(1597)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(1597)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(1597)
					if (((ret->zpp_inner == null()))){
						HX_STACK_LINE(1597)
						{
							HX_STACK_LINE(1597)
							bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
							HX_STACK_LINE(1597)
							::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(1597)
							{
								HX_STACK_LINE(1597)
								if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
									HX_STACK_LINE(1597)
									ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
								}
								else{
									HX_STACK_LINE(1597)
									ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(1597)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(1597)
									ret1->next = null();
								}
								HX_STACK_LINE(1597)
								ret1->weak = false;
							}
							HX_STACK_LINE(1597)
							ret1->_immutable = immutable;
							HX_STACK_LINE(1597)
							{
								HX_STACK_LINE(1597)
								ret1->x = x;
								HX_STACK_LINE(1597)
								ret1->y = y;
								HX_STACK_LINE(1597)
								{
								}
							}
							HX_STACK_LINE(1597)
							ret->zpp_inner = ret1;
						}
						HX_STACK_LINE(1597)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(1597)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(1597)
							HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1597)
						{
							HX_STACK_LINE(1597)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1597)
							if ((_this->_immutable)){
								HX_STACK_LINE(1597)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(1597)
							if (((_this->_isimmutable != null()))){
								HX_STACK_LINE(1597)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(1597)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(1597)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_FRAME("*","closure","*.closure","zpp_nape/constraint/LineJoint.hx",1597)
								{
									HX_STACK_LINE(1597)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1597)
										HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1597)
									{
										HX_STACK_LINE(1597)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1597)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1597)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1597)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_5_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_FRAME("*","closure","*.closure","zpp_nape/constraint/LineJoint.hx",1597)
								{
									HX_STACK_LINE(1597)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1597)
										HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1597)
									{
										HX_STACK_LINE(1597)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1597)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(1597)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1597)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1597)
						if ((!(((bool((_Function_5_1::Block(ret) == x)) && bool((_Function_5_2::Block(ret) == y))))))){
							HX_STACK_LINE(1597)
							{
								HX_STACK_LINE(1597)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(1597)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(1597)
								{
								}
							}
							HX_STACK_LINE(1597)
							{
								HX_STACK_LINE(1597)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1597)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(1597)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(1597)
						ret;
					}
					HX_STACK_LINE(1597)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(1597)
					anch = ret;
				}
			}
			else{
				HX_STACK_LINE(1598)
				if (((pn > this->jointMax))){
					HX_STACK_LINE(1598)
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(1598)
					if (((bool((e2 != null())) && bool(e2->zpp_disp)))){
						HX_STACK_LINE(1598)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(1598)
					{
						HX_STACK_LINE(1598)
						Float x;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1598)
						{
							HX_STACK_LINE(1598)
							if ((e2->zpp_disp)){
								HX_STACK_LINE(1598)
								HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1598)
							{
								HX_STACK_LINE(1598)
								::zpp_nape::geom::ZPP_Vec2 _this = e2->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1598)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1598)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1598)
							x = e2->zpp_inner->x;
						}
						HX_STACK_LINE(1598)
						Float y;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(1598)
						{
							HX_STACK_LINE(1598)
							if ((e2->zpp_disp)){
								HX_STACK_LINE(1598)
								HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1598)
							{
								HX_STACK_LINE(1598)
								::zpp_nape::geom::ZPP_Vec2 _this = e2->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1598)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(1598)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1598)
							y = e2->zpp_inner->y;
						}
						HX_STACK_LINE(1598)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(1598)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						HX_STACK_LINE(1598)
						::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1598)
						if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
							HX_STACK_LINE(1598)
							ret = ::nape::geom::Vec2_obj::__new(null(),null());
						}
						else{
							HX_STACK_LINE(1598)
							ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
							HX_STACK_LINE(1598)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
							HX_STACK_LINE(1598)
							ret->zpp_pool = null();
							HX_STACK_LINE(1598)
							ret->zpp_disp = false;
							HX_STACK_LINE(1598)
							if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
								HX_STACK_LINE(1598)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
							}
						}
						HX_STACK_LINE(1598)
						if (((ret->zpp_inner == null()))){
							HX_STACK_LINE(1598)
							{
								HX_STACK_LINE(1598)
								bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
								HX_STACK_LINE(1598)
								::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
								HX_STACK_LINE(1598)
								{
									HX_STACK_LINE(1598)
									if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
										HX_STACK_LINE(1598)
										ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
									}
									else{
										HX_STACK_LINE(1598)
										ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(1598)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
										HX_STACK_LINE(1598)
										ret1->next = null();
									}
									HX_STACK_LINE(1598)
									ret1->weak = false;
								}
								HX_STACK_LINE(1598)
								ret1->_immutable = immutable;
								HX_STACK_LINE(1598)
								{
									HX_STACK_LINE(1598)
									ret1->x = x;
									HX_STACK_LINE(1598)
									ret1->y = y;
									HX_STACK_LINE(1598)
									{
									}
								}
								HX_STACK_LINE(1598)
								ret->zpp_inner = ret1;
							}
							HX_STACK_LINE(1598)
							ret->zpp_inner->outer = ret;
						}
						else{
							HX_STACK_LINE(1598)
							if (((bool((ret != null())) && bool(ret->zpp_disp)))){
								HX_STACK_LINE(1598)
								HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1598)
							{
								HX_STACK_LINE(1598)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1598)
								if ((_this->_immutable)){
									HX_STACK_LINE(1598)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1598)
								if (((_this->_isimmutable != null()))){
									HX_STACK_LINE(1598)
									_this->_isimmutable();
								}
							}
							HX_STACK_LINE(1598)
							if (((bool((x != x)) || bool((y != y))))){
								HX_STACK_LINE(1598)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &ret){
									HX_STACK_FRAME("*","closure","*.closure","zpp_nape/constraint/LineJoint.hx",1598)
									{
										HX_STACK_LINE(1598)
										if (((bool((ret != null())) && bool(ret->zpp_disp)))){
											HX_STACK_LINE(1598)
											HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1598)
										{
											HX_STACK_LINE(1598)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1598)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(1598)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1598)
										return ret->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_6_2{
								inline static Float Block( ::nape::geom::Vec2 &ret){
									HX_STACK_FRAME("*","closure","*.closure","zpp_nape/constraint/LineJoint.hx",1598)
									{
										HX_STACK_LINE(1598)
										if (((bool((ret != null())) && bool(ret->zpp_disp)))){
											HX_STACK_LINE(1598)
											HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1598)
										{
											HX_STACK_LINE(1598)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1598)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(1598)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1598)
										return ret->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(1598)
							if ((!(((bool((_Function_6_1::Block(ret) == x)) && bool((_Function_6_2::Block(ret) == y))))))){
								HX_STACK_LINE(1598)
								{
									HX_STACK_LINE(1598)
									ret->zpp_inner->x = x;
									HX_STACK_LINE(1598)
									ret->zpp_inner->y = y;
									HX_STACK_LINE(1598)
									{
									}
								}
								HX_STACK_LINE(1598)
								{
									HX_STACK_LINE(1598)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1598)
									if (((_this->_invalidate != null()))){
										HX_STACK_LINE(1598)
										_this->_invalidate(_this);
									}
								}
							}
							HX_STACK_LINE(1598)
							ret;
						}
						HX_STACK_LINE(1598)
						ret->zpp_inner->weak = weak;
						HX_STACK_LINE(1598)
						anch = ret;
					}
				}
				else{
					HX_STACK_LINE(1599)
					anch = a1->add(dir->mul(pn,true),null());
				}
			}
			HX_STACK_LINE(1600)
			g->drawSpring(anch,a2,(int)16711935,null(),null());
			HX_STACK_LINE(1601)
			{
				HX_STACK_LINE(1601)
				if (((bool((anch != null())) && bool(anch->zpp_disp)))){
					HX_STACK_LINE(1601)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1601)
				{
					HX_STACK_LINE(1601)
					::zpp_nape::geom::ZPP_Vec2 _this = anch->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1601)
					if ((_this->_immutable)){
						HX_STACK_LINE(1601)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1601)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(1601)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1601)
				if ((anch->zpp_inner->_inuse)){
					HX_STACK_LINE(1601)
					HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1601)
				::zpp_nape::geom::ZPP_Vec2 inner = anch->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1601)
				anch->zpp_inner->outer = null();
				HX_STACK_LINE(1601)
				anch->zpp_inner = null();
				HX_STACK_LINE(1601)
				{
					HX_STACK_LINE(1601)
					::nape::geom::Vec2 o = anch;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1601)
					o->zpp_pool = null();
					HX_STACK_LINE(1601)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1601)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1601)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1601)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1601)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1601)
				{
					HX_STACK_LINE(1601)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1601)
					{
						HX_STACK_LINE(1601)
						if (((o->outer != null()))){
							HX_STACK_LINE(1601)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1601)
							o->outer = null();
						}
						HX_STACK_LINE(1601)
						o->_isimmutable = null();
						HX_STACK_LINE(1601)
						o->_validate = null();
						HX_STACK_LINE(1601)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1601)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1601)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(1603)
		g->drawFilledCircle(a1,(int)2,(int)255);
		HX_STACK_LINE(1604)
		g->drawFilledCircle(a2,(int)2,(int)16711680);
		HX_STACK_LINE(1605)
		{
			HX_STACK_LINE(1605)
			if (((bool((a1 != null())) && bool(a1->zpp_disp)))){
				HX_STACK_LINE(1605)
				HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(1605)
			{
				HX_STACK_LINE(1605)
				::zpp_nape::geom::ZPP_Vec2 _this = a1->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1605)
				if ((_this->_immutable)){
					HX_STACK_LINE(1605)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(1605)
				if (((_this->_isimmutable != null()))){
					HX_STACK_LINE(1605)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(1605)
			if ((a1->zpp_inner->_inuse)){
				HX_STACK_LINE(1605)
				HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(1605)
			::zpp_nape::geom::ZPP_Vec2 inner = a1->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(1605)
			a1->zpp_inner->outer = null();
			HX_STACK_LINE(1605)
			a1->zpp_inner = null();
			HX_STACK_LINE(1605)
			{
				HX_STACK_LINE(1605)
				::nape::geom::Vec2 o = a1;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1605)
				o->zpp_pool = null();
				HX_STACK_LINE(1605)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(1605)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(1605)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1605)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(1605)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(1605)
			{
				HX_STACK_LINE(1605)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1605)
				{
					HX_STACK_LINE(1605)
					if (((o->outer != null()))){
						HX_STACK_LINE(1605)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(1605)
						o->outer = null();
					}
					HX_STACK_LINE(1605)
					o->_isimmutable = null();
					HX_STACK_LINE(1605)
					o->_validate = null();
					HX_STACK_LINE(1605)
					o->_invalidate = null();
				}
				HX_STACK_LINE(1605)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(1605)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(1606)
		{
			HX_STACK_LINE(1606)
			if (((bool((a2 != null())) && bool(a2->zpp_disp)))){
				HX_STACK_LINE(1606)
				HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(1606)
			{
				HX_STACK_LINE(1606)
				::zpp_nape::geom::ZPP_Vec2 _this = a2->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1606)
				if ((_this->_immutable)){
					HX_STACK_LINE(1606)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(1606)
				if (((_this->_isimmutable != null()))){
					HX_STACK_LINE(1606)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(1606)
			if ((a2->zpp_inner->_inuse)){
				HX_STACK_LINE(1606)
				HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(1606)
			::zpp_nape::geom::ZPP_Vec2 inner = a2->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(1606)
			a2->zpp_inner->outer = null();
			HX_STACK_LINE(1606)
			a2->zpp_inner = null();
			HX_STACK_LINE(1606)
			{
				HX_STACK_LINE(1606)
				::nape::geom::Vec2 o = a2;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1606)
				o->zpp_pool = null();
				HX_STACK_LINE(1606)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(1606)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(1606)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1606)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(1606)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(1606)
			{
				HX_STACK_LINE(1606)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1606)
				{
					HX_STACK_LINE(1606)
					if (((o->outer != null()))){
						HX_STACK_LINE(1606)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(1606)
						o->outer = null();
					}
					HX_STACK_LINE(1606)
					o->_isimmutable = null();
					HX_STACK_LINE(1606)
					o->_validate = null();
					HX_STACK_LINE(1606)
					o->_invalidate = null();
				}
				HX_STACK_LINE(1606)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(1606)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(1607)
		{
			HX_STACK_LINE(1607)
			if (((bool((e1 != null())) && bool(e1->zpp_disp)))){
				HX_STACK_LINE(1607)
				HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(1607)
			{
				HX_STACK_LINE(1607)
				::zpp_nape::geom::ZPP_Vec2 _this = e1->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1607)
				if ((_this->_immutable)){
					HX_STACK_LINE(1607)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(1607)
				if (((_this->_isimmutable != null()))){
					HX_STACK_LINE(1607)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(1607)
			if ((e1->zpp_inner->_inuse)){
				HX_STACK_LINE(1607)
				HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(1607)
			::zpp_nape::geom::ZPP_Vec2 inner = e1->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(1607)
			e1->zpp_inner->outer = null();
			HX_STACK_LINE(1607)
			e1->zpp_inner = null();
			HX_STACK_LINE(1607)
			{
				HX_STACK_LINE(1607)
				::nape::geom::Vec2 o = e1;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1607)
				o->zpp_pool = null();
				HX_STACK_LINE(1607)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(1607)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(1607)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1607)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(1607)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(1607)
			{
				HX_STACK_LINE(1607)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1607)
				{
					HX_STACK_LINE(1607)
					if (((o->outer != null()))){
						HX_STACK_LINE(1607)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(1607)
						o->outer = null();
					}
					HX_STACK_LINE(1607)
					o->_isimmutable = null();
					HX_STACK_LINE(1607)
					o->_validate = null();
					HX_STACK_LINE(1607)
					o->_invalidate = null();
				}
				HX_STACK_LINE(1607)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(1607)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(1608)
		{
			HX_STACK_LINE(1608)
			if (((bool((e2 != null())) && bool(e2->zpp_disp)))){
				HX_STACK_LINE(1608)
				HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(1608)
			{
				HX_STACK_LINE(1608)
				::zpp_nape::geom::ZPP_Vec2 _this = e2->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1608)
				if ((_this->_immutable)){
					HX_STACK_LINE(1608)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(1608)
				if (((_this->_isimmutable != null()))){
					HX_STACK_LINE(1608)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(1608)
			if ((e2->zpp_inner->_inuse)){
				HX_STACK_LINE(1608)
				HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(1608)
			::zpp_nape::geom::ZPP_Vec2 inner = e2->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(1608)
			e2->zpp_inner->outer = null();
			HX_STACK_LINE(1608)
			e2->zpp_inner = null();
			HX_STACK_LINE(1608)
			{
				HX_STACK_LINE(1608)
				::nape::geom::Vec2 o = e2;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1608)
				o->zpp_pool = null();
				HX_STACK_LINE(1608)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(1608)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(1608)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1608)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(1608)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(1608)
			{
				HX_STACK_LINE(1608)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1608)
				{
					HX_STACK_LINE(1608)
					if (((o->outer != null()))){
						HX_STACK_LINE(1608)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(1608)
						o->outer = null();
					}
					HX_STACK_LINE(1608)
					o->_isimmutable = null();
					HX_STACK_LINE(1608)
					o->_validate = null();
					HX_STACK_LINE(1608)
					o->_invalidate = null();
				}
				HX_STACK_LINE(1608)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(1608)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
	}
return null();
}


bool ZPP_LineJoint_obj::applyImpulsePos( ){
	HX_STACK_FRAME("ZPP_LineJoint","applyImpulsePos","ZPP_LineJoint.applyImpulsePos","zpp_nape/constraint/LineJoint.hx",1279)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1280)
	Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
	HX_STACK_LINE(1281)
	Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
	HX_STACK_LINE(1283)
	{
		HX_STACK_LINE(1284)
		nx = ((this->b1->axisy * this->nlocalx) - (this->b1->axisx * this->nlocaly));
		HX_STACK_LINE(1285)
		ny = ((this->nlocalx * this->b1->axisx) + (this->nlocaly * this->b1->axisy));
	}
	HX_STACK_LINE(1288)
	Float r1x = 0.0;		HX_STACK_VAR(r1x,"r1x");
	HX_STACK_LINE(1289)
	Float r1y = 0.0;		HX_STACK_VAR(r1y,"r1y");
	HX_STACK_LINE(1291)
	{
		HX_STACK_LINE(1292)
		r1x = ((this->b1->axisy * this->a1localx) - (this->b1->axisx * this->a1localy));
		HX_STACK_LINE(1293)
		r1y = ((this->a1localx * this->b1->axisx) + (this->a1localy * this->b1->axisy));
	}
	HX_STACK_LINE(1296)
	Float r2x = 0.0;		HX_STACK_VAR(r2x,"r2x");
	HX_STACK_LINE(1297)
	Float r2y = 0.0;		HX_STACK_VAR(r2y,"r2y");
	HX_STACK_LINE(1299)
	{
		HX_STACK_LINE(1300)
		r2x = ((this->b2->axisy * this->a2localx) - (this->b2->axisx * this->a2localy));
		HX_STACK_LINE(1301)
		r2y = ((this->a2localx * this->b2->axisx) + (this->a2localy * this->b2->axisy));
	}
	HX_STACK_LINE(1304)
	Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(1305)
	Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(1306)
	Float scale;		HX_STACK_VAR(scale,"scale");
	HX_STACK_LINE(1307)
	Float Ex = 0.0;		HX_STACK_VAR(Ex,"Ex");
	HX_STACK_LINE(1308)
	Float Ey = 0.0;		HX_STACK_VAR(Ey,"Ey");
	HX_STACK_LINE(1309)
	{
		HX_STACK_LINE(1310)
		dx = (((this->b2->posx + r2x) - this->b1->posx) - r1x);
		HX_STACK_LINE(1311)
		dy = (((this->b2->posy + r2y) - this->b1->posy) - r1y);
		HX_STACK_LINE(1312)
		Ex = ((dy * nx) - (dx * ny));
		HX_STACK_LINE(1313)
		Ey = ((nx * dx) + (ny * dy));
		HX_STACK_LINE(1314)
		if ((this->equal)){
			HX_STACK_LINE(1315)
			hx::SubEq(Ey,this->jointMin);
			HX_STACK_LINE(1316)
			scale = 1.0;
		}
		else{
			HX_STACK_LINE(1318)
			if (((Ey > this->jointMax))){
				HX_STACK_LINE(1319)
				hx::SubEq(Ey,this->jointMax);
				HX_STACK_LINE(1320)
				scale = 1.0;
			}
			else{
				HX_STACK_LINE(1322)
				if (((Ey < this->jointMin))){
					HX_STACK_LINE(1323)
					Ey = (this->jointMin - Ey);
					HX_STACK_LINE(1324)
					scale = -1.0;
				}
				else{
					HX_STACK_LINE(1327)
					Ey = (int)0;
					HX_STACK_LINE(1328)
					scale = (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(1331)
	if (((bool(this->breakUnderError) && bool((((Ex * Ex) + (Ey * Ey)) > (this->maxError * this->maxError)))))){
		HX_STACK_LINE(1331)
		return true;
	}
	HX_STACK_LINE(1332)
	if (((((Ex * Ex) + (Ey * Ey)) < (::nape::Config_obj::constraintLinearSlop * ::nape::Config_obj::constraintLinearSlop)))){
		HX_STACK_LINE(1332)
		return false;
	}
	HX_STACK_LINE(1333)
	Float Jx = 0.0;		HX_STACK_VAR(Jx,"Jx");
	HX_STACK_LINE(1334)
	Float Jy = 0.0;		HX_STACK_VAR(Jy,"Jy");
	HX_STACK_LINE(1335)
	{
		HX_STACK_LINE(1336)
		Float t = 0.5;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(1345)
		hx::MultEq(Ex,t);
		HX_STACK_LINE(1346)
		hx::MultEq(Ey,t);
	}
	HX_STACK_LINE(1348)
	if (((((Ex * Ex) + (Ey * Ey)) > (int)6))){
		HX_STACK_LINE(1349)
		Float k = (this->b1->smass + this->b2->smass);		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(1350)
		if (((k > ::nape::Config_obj::epsilon))){
			HX_STACK_LINE(1351)
			k = (Float(0.8) / Float(k));
			HX_STACK_LINE(1352)
			Float Jx1 = (k * (((ny * Ex) - ((scale * nx) * Ey))));		HX_STACK_VAR(Jx1,"Jx1");
			HX_STACK_LINE(1353)
			Float Jy1 = (k * ((((nx * Ex) * scale) - (ny * Ex))));		HX_STACK_VAR(Jy1,"Jy1");
			HX_STACK_LINE(1370)
			{
				HX_STACK_LINE(1371)
				Float t = this->b1->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1380)
				hx::SubEq(this->b1->posx,(Jx1 * t));
				HX_STACK_LINE(1381)
				hx::SubEq(this->b1->posy,(Jy1 * t));
			}
			HX_STACK_LINE(1383)
			{
				HX_STACK_LINE(1384)
				Float t = this->b2->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1393)
				hx::AddEq(this->b2->posx,(Jx1 * t));
				HX_STACK_LINE(1394)
				hx::AddEq(this->b2->posy,(Jy1 * t));
			}
			HX_STACK_LINE(1396)
			{
				HX_STACK_LINE(1397)
				dx = (((this->b2->posx + r2x) - this->b1->posx) - r1x);
				HX_STACK_LINE(1398)
				dy = (((this->b2->posy + r2y) - this->b1->posy) - r1y);
				HX_STACK_LINE(1399)
				Ex = ((dy * nx) - (dx * ny));
				HX_STACK_LINE(1400)
				Ey = ((nx * dx) + (ny * dy));
				HX_STACK_LINE(1401)
				if ((this->equal)){
					HX_STACK_LINE(1402)
					hx::SubEq(Ey,this->jointMin);
					HX_STACK_LINE(1403)
					scale = 1.0;
				}
				else{
					HX_STACK_LINE(1405)
					if (((Ey > this->jointMax))){
						HX_STACK_LINE(1406)
						hx::SubEq(Ey,this->jointMax);
						HX_STACK_LINE(1407)
						scale = 1.0;
					}
					else{
						HX_STACK_LINE(1409)
						if (((Ey < this->jointMin))){
							HX_STACK_LINE(1410)
							Ey = (this->jointMin - Ey);
							HX_STACK_LINE(1411)
							scale = -1.0;
						}
						else{
							HX_STACK_LINE(1414)
							Ey = (int)0;
							HX_STACK_LINE(1415)
							scale = (int)0;
						}
					}
				}
			}
			HX_STACK_LINE(1418)
			{
				HX_STACK_LINE(1419)
				Float t = 0.5;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1428)
				hx::MultEq(Ex,t);
				HX_STACK_LINE(1429)
				hx::MultEq(Ey,t);
			}
		}
	}
	HX_STACK_LINE(1433)
	Float dot1;		HX_STACK_VAR(dot1,"dot1");
	HX_STACK_LINE(1433)
	Float dot2;		HX_STACK_VAR(dot2,"dot2");
	HX_STACK_LINE(1433)
	Float cx1;		HX_STACK_VAR(cx1,"cx1");
	HX_STACK_LINE(1433)
	Float cx2;		HX_STACK_VAR(cx2,"cx2");
	HX_STACK_LINE(1434)
	Float Ka = 0.0;		HX_STACK_VAR(Ka,"Ka");
	HX_STACK_LINE(1435)
	Float Kb = 0.0;		HX_STACK_VAR(Kb,"Kb");
	HX_STACK_LINE(1436)
	Float Kc = 0.0;		HX_STACK_VAR(Kc,"Kc");
	HX_STACK_LINE(1437)
	{
		HX_STACK_LINE(1438)
		Float drx = 0.0;		HX_STACK_VAR(drx,"drx");
		HX_STACK_LINE(1439)
		Float dry = 0.0;		HX_STACK_VAR(dry,"dry");
		HX_STACK_LINE(1440)
		{
			HX_STACK_LINE(1441)
			drx = (dx + r1x);
			HX_STACK_LINE(1442)
			dry = (dy + r1y);
		}
		HX_STACK_LINE(1444)
		dot1 = ((nx * drx) + (ny * dry));
		HX_STACK_LINE(1445)
		cx1 = ((dry * nx) - (drx * ny));
		HX_STACK_LINE(1446)
		dot2 = ((nx * r2x) + (ny * r2y));
		HX_STACK_LINE(1447)
		cx2 = ((r2y * nx) - (r2x * ny));
		HX_STACK_LINE(1448)
		Ka = (((this->b1->smass + this->b2->smass) + ((dot1 * dot1) * this->b1->sinertia)) + ((dot2 * dot2) * this->b2->sinertia));
		HX_STACK_LINE(1449)
		Kb = (-(scale) * ((((dot1 * cx1) * this->b1->sinertia) + ((dot2 * cx2) * this->b2->sinertia))));
		HX_STACK_LINE(1450)
		Kc = ((scale * scale) * ((((this->b1->smass + this->b2->smass) + ((cx1 * cx1) * this->b1->sinertia)) + ((cx2 * cx2) * this->b2->sinertia))));
	}
	HX_STACK_LINE(1452)
	{
		HX_STACK_LINE(1453)
		Jx = -(Ex);
		HX_STACK_LINE(1454)
		Jy = -(Ey);
		HX_STACK_LINE(1463)
		{
		}
	}
	HX_STACK_LINE(1472)
	{
		HX_STACK_LINE(1473)
		Float det = ((Ka * Kc) - (Kb * Kb));		HX_STACK_VAR(det,"det");
		HX_STACK_LINE(1474)
		if (((det != det))){
			HX_STACK_LINE(1474)
			Jx = Jy = (int)0;
		}
		else{
			HX_STACK_LINE(1475)
			if (((det == (int)0))){
				HX_STACK_LINE(1476)
				if (((Ka != (int)0))){
					HX_STACK_LINE(1476)
					hx::DivEq(Jx,Ka);
				}
				else{
					HX_STACK_LINE(1477)
					Jx = (int)0;
				}
				HX_STACK_LINE(1478)
				if (((Kc != (int)0))){
					HX_STACK_LINE(1478)
					hx::DivEq(Jy,Kc);
				}
				else{
					HX_STACK_LINE(1479)
					Jy = (int)0;
				}
			}
			else{
				HX_STACK_LINE(1482)
				det = (Float((int)1) / Float(det));
				HX_STACK_LINE(1483)
				Float t = (det * (((Kc * Jx) - (Kb * Jy))));		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1484)
				Jy = (det * (((Ka * Jy) - (Kb * Jx))));
				HX_STACK_LINE(1485)
				Jx = t;
			}
		}
	}
	HX_STACK_LINE(1488)
	if (((Jy > (int)0))){
		HX_STACK_LINE(1488)
		Jy = (int)0;
	}
	HX_STACK_LINE(1489)
	{
		HX_STACK_LINE(1490)
		Float J2x = (((scale * nx) * Jy) - (ny * Jx));		HX_STACK_VAR(J2x,"J2x");
		HX_STACK_LINE(1491)
		Float J2y = ((nx * Jx) + ((scale * ny) * Jy));		HX_STACK_VAR(J2y,"J2y");
		HX_STACK_LINE(1508)
		{
			HX_STACK_LINE(1509)
			{
				HX_STACK_LINE(1510)
				Float t = this->b1->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1519)
				hx::SubEq(this->b1->posx,(J2x * t));
				HX_STACK_LINE(1520)
				hx::SubEq(this->b1->posy,(J2y * t));
			}
			HX_STACK_LINE(1522)
			{
				HX_STACK_LINE(1523)
				Float t = this->b2->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1532)
				hx::AddEq(this->b2->posx,(J2x * t));
				HX_STACK_LINE(1533)
				hx::AddEq(this->b2->posy,(J2y * t));
			}
			HX_STACK_LINE(1535)
			{
				HX_STACK_LINE(1535)
				::zpp_nape::phys::ZPP_Body _this = this->b1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1535)
				Float dr = (((((scale * cx1) * Jy) - (dot1 * Jx))) * this->b1->iinertia);		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(1535)
				hx::AddEq(_this->rot,dr);
				HX_STACK_LINE(1535)
				if ((((dr * dr) > 0.0001))){
					HX_STACK_LINE(1535)
					_this->axisx = ::Math_obj::sin(_this->rot);
					HX_STACK_LINE(1535)
					_this->axisy = ::Math_obj::cos(_this->rot);
					HX_STACK_LINE(1535)
					Dynamic();
				}
				else{
					HX_STACK_LINE(1535)
					Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(1535)
					Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(1535)
					Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(1535)
					Float nx1 = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx1,"nx1");
					HX_STACK_LINE(1535)
					_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
					HX_STACK_LINE(1535)
					_this->axisx = nx1;
				}
			}
			HX_STACK_LINE(1536)
			{
				HX_STACK_LINE(1536)
				::zpp_nape::phys::ZPP_Body _this = this->b2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1536)
				Float dr = ((((dot2 * Jx) - ((scale * cx2) * Jy))) * this->b2->iinertia);		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(1536)
				hx::AddEq(_this->rot,dr);
				HX_STACK_LINE(1536)
				if ((((dr * dr) > 0.0001))){
					HX_STACK_LINE(1536)
					_this->axisx = ::Math_obj::sin(_this->rot);
					HX_STACK_LINE(1536)
					_this->axisy = ::Math_obj::cos(_this->rot);
					HX_STACK_LINE(1536)
					Dynamic();
				}
				else{
					HX_STACK_LINE(1536)
					Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(1536)
					Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(1536)
					Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(1536)
					Float nx1 = ((((p * _this->axisx) + (dr * _this->axisy))) * m);		HX_STACK_VAR(nx1,"nx1");
					HX_STACK_LINE(1536)
					_this->axisy = ((((p * _this->axisy) - (dr * _this->axisx))) * m);
					HX_STACK_LINE(1536)
					_this->axisx = nx1;
				}
			}
		}
	}
	HX_STACK_LINE(1569)
	return false;
}


bool ZPP_LineJoint_obj::applyImpulseVel( ){
	HX_STACK_FRAME("ZPP_LineJoint","applyImpulseVel","ZPP_LineJoint.applyImpulseVel","zpp_nape/constraint/LineJoint.hx",1076)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1077)
	Float Ex = 0.0;		HX_STACK_VAR(Ex,"Ex");
	HX_STACK_LINE(1078)
	Float Ey = 0.0;		HX_STACK_VAR(Ey,"Ey");
	HX_STACK_LINE(1079)
	{
		HX_STACK_LINE(1080)
		Float dvx = 0.0;		HX_STACK_VAR(dvx,"dvx");
		HX_STACK_LINE(1081)
		Float dvy = 0.0;		HX_STACK_VAR(dvy,"dvy");
		HX_STACK_LINE(1082)
		{
			HX_STACK_LINE(1083)
			dvx = (this->b2->velx - this->b1->velx);
			HX_STACK_LINE(1084)
			dvy = (this->b2->vely - this->b1->vely);
		}
		HX_STACK_LINE(1086)
		hx::AddEq(dvx,(this->b2->kinvelx - this->b1->kinvelx));
		HX_STACK_LINE(1087)
		hx::AddEq(dvy,(this->b2->kinvely - this->b1->kinvely));
		HX_STACK_LINE(1088)
		Ex = ((((dvy * this->nrelx) - (dvx * this->nrely)) + (((this->b2->angvel + this->b2->kinangvel)) * this->dot2)) - (((this->b1->angvel + this->b1->kinangvel)) * this->dot1));
		HX_STACK_LINE(1089)
		Ey = (this->scale * (((((this->nrelx * dvx) + (this->nrely * dvy)) - (((this->b2->angvel + this->b2->kinangvel)) * this->cx2)) + (((this->b1->angvel + this->b1->kinangvel)) * this->cx1))));
	}
	HX_STACK_LINE(1091)
	Float Jx = 0.0;		HX_STACK_VAR(Jx,"Jx");
	HX_STACK_LINE(1092)
	Float Jy = 0.0;		HX_STACK_VAR(Jy,"Jy");
	HX_STACK_LINE(1093)
	{
		HX_STACK_LINE(1094)
		Jx = (this->biasx - Ex);
		HX_STACK_LINE(1095)
		Jy = (this->biasy - Ey);
	}
	HX_STACK_LINE(1097)
	{
		HX_STACK_LINE(1098)
		Float t = ((this->kMassa * Jx) + (this->kMassb * Jy));		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(1099)
		Jy = ((this->kMassb * Jx) + (this->kMassc * Jy));
		HX_STACK_LINE(1100)
		Jx = t;
	}
	HX_STACK_LINE(1102)
	{
		HX_STACK_LINE(1103)
		Float t = this->gamma;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(1112)
		hx::SubEq(Jx,(this->jAccx * t));
		HX_STACK_LINE(1113)
		hx::SubEq(Jy,(this->jAccy * t));
	}
	HX_STACK_LINE(1115)
	{
		HX_STACK_LINE(1116)
		Float jOldx = 0.0;		HX_STACK_VAR(jOldx,"jOldx");
		HX_STACK_LINE(1117)
		Float jOldy = 0.0;		HX_STACK_VAR(jOldy,"jOldy");
		HX_STACK_LINE(1118)
		{
			HX_STACK_LINE(1119)
			jOldx = this->jAccx;
			HX_STACK_LINE(1120)
			jOldy = this->jAccy;
			HX_STACK_LINE(1129)
			{
			}
		}
		HX_STACK_LINE(1138)
		{
			HX_STACK_LINE(1139)
			Float t = 1.0;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1148)
			hx::AddEq(this->jAccx,(Jx * t));
			HX_STACK_LINE(1149)
			hx::AddEq(this->jAccy,(Jy * t));
		}
		HX_STACK_LINE(1151)
		{
			HX_STACK_LINE(1152)
			if (((this->jAccy > (int)0))){
				HX_STACK_LINE(1152)
				this->jAccy = (int)0;
			}
			HX_STACK_LINE(1153)
			if ((this->breakUnderForce)){
				HX_STACK_LINE(1154)
				if (((((this->jAccx * this->jAccx) + (this->jAccy * this->jAccy)) > (this->jMax * this->jMax)))){
					HX_STACK_LINE(1154)
					return true;
				}
			}
			else{
				HX_STACK_LINE(1156)
				if ((!(this->stiff))){
					HX_STACK_LINE(1157)
					Float t = this->jMax;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1166)
					Float ls = ((this->jAccx * this->jAccx) + (this->jAccy * this->jAccy));		HX_STACK_VAR(ls,"ls");
					HX_STACK_LINE(1167)
					if (((ls > (t * t)))){
						HX_STACK_LINE(1177)
						Float t1;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(1177)
						t1 = (t * ((Float(1.0) / Float(::Math_obj::sqrt(ls)))));
						HX_STACK_LINE(1186)
						hx::MultEq(this->jAccx,t1);
						HX_STACK_LINE(1187)
						hx::MultEq(this->jAccy,t1);
					}
				}
			}
		}
		HX_STACK_LINE(1192)
		{
			HX_STACK_LINE(1193)
			Jx = (this->jAccx - jOldx);
			HX_STACK_LINE(1194)
			Jy = (this->jAccy - jOldy);
		}
	}
	HX_STACK_LINE(1197)
	{
		HX_STACK_LINE(1198)
		Float J2x = (((this->scale * this->nrelx) * Jy) - (this->nrely * Jx));		HX_STACK_VAR(J2x,"J2x");
		HX_STACK_LINE(1199)
		Float J2y = ((this->nrelx * Jx) + ((this->scale * this->nrely) * Jy));		HX_STACK_VAR(J2y,"J2y");
		HX_STACK_LINE(1246)
		{
			HX_STACK_LINE(1247)
			{
				HX_STACK_LINE(1248)
				Float t = this->b1->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1257)
				hx::SubEq(this->b1->velx,(J2x * t));
				HX_STACK_LINE(1258)
				hx::SubEq(this->b1->vely,(J2y * t));
			}
			HX_STACK_LINE(1260)
			{
				HX_STACK_LINE(1261)
				Float t = this->b2->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1270)
				hx::AddEq(this->b2->velx,(J2x * t));
				HX_STACK_LINE(1271)
				hx::AddEq(this->b2->vely,(J2y * t));
			}
			HX_STACK_LINE(1273)
			hx::AddEq(this->b1->angvel,(((((this->scale * this->cx1) * Jy) - (this->dot1 * Jx))) * this->b1->iinertia));
			HX_STACK_LINE(1274)
			hx::AddEq(this->b2->angvel,((((this->dot2 * Jx) - ((this->scale * this->cx2) * Jy))) * this->b2->iinertia));
		}
	}
	HX_STACK_LINE(1277)
	return false;
}


Void ZPP_LineJoint_obj::warmStart( ){
{
		HX_STACK_FRAME("ZPP_LineJoint","warmStart","ZPP_LineJoint.warmStart","zpp_nape/constraint/LineJoint.hx",995)
		HX_STACK_THIS(this)
		HX_STACK_LINE(996)
		Float J2x = (((this->scale * this->nrelx) * this->jAccy) - (this->nrely * this->jAccx));		HX_STACK_VAR(J2x,"J2x");
		HX_STACK_LINE(997)
		Float J2y = ((this->nrelx * this->jAccx) + ((this->scale * this->nrely) * this->jAccy));		HX_STACK_VAR(J2y,"J2y");
		HX_STACK_LINE(1044)
		{
			HX_STACK_LINE(1045)
			{
				HX_STACK_LINE(1046)
				Float t = this->b1->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1055)
				hx::SubEq(this->b1->velx,(J2x * t));
				HX_STACK_LINE(1056)
				hx::SubEq(this->b1->vely,(J2y * t));
			}
			HX_STACK_LINE(1058)
			{
				HX_STACK_LINE(1059)
				Float t = this->b2->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1068)
				hx::AddEq(this->b2->velx,(J2x * t));
				HX_STACK_LINE(1069)
				hx::AddEq(this->b2->vely,(J2y * t));
			}
			HX_STACK_LINE(1071)
			hx::AddEq(this->b1->angvel,(((((this->scale * this->cx1) * this->jAccy) - (this->dot1 * this->jAccx))) * this->b1->iinertia));
			HX_STACK_LINE(1072)
			hx::AddEq(this->b2->angvel,((((this->dot2 * this->jAccx) - ((this->scale * this->cx2) * this->jAccy))) * this->b2->iinertia));
		}
	}
return null();
}


bool ZPP_LineJoint_obj::preStep( Float dt){
	HX_STACK_FRAME("ZPP_LineJoint","preStep","ZPP_LineJoint.preStep","zpp_nape/constraint/LineJoint.hx",778)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dt,"dt")
	HX_STACK_LINE(779)
	if (((this->pre_dt == -1.0))){
		HX_STACK_LINE(779)
		this->pre_dt = dt;
	}
	HX_STACK_LINE(780)
	Float dtratio = (Float(dt) / Float(this->pre_dt));		HX_STACK_VAR(dtratio,"dtratio");
	HX_STACK_LINE(781)
	this->pre_dt = dt;
	HX_STACK_LINE(782)
	this->equal = (this->jointMin == this->jointMax);
	HX_STACK_LINE(783)
	this->stepped = true;
	HX_STACK_LINE(784)
	this->validate_norm();
	HX_STACK_LINE(785)
	{
		HX_STACK_LINE(786)
		this->a1relx = ((this->b1->axisy * this->a1localx) - (this->b1->axisx * this->a1localy));
		HX_STACK_LINE(787)
		this->a1rely = ((this->a1localx * this->b1->axisx) + (this->a1localy * this->b1->axisy));
	}
	HX_STACK_LINE(789)
	{
		HX_STACK_LINE(790)
		this->nrelx = ((this->b1->axisy * this->nlocalx) - (this->b1->axisx * this->nlocaly));
		HX_STACK_LINE(791)
		this->nrely = ((this->nlocalx * this->b1->axisx) + (this->nlocaly * this->b1->axisy));
	}
	HX_STACK_LINE(793)
	{
		HX_STACK_LINE(794)
		this->a2relx = ((this->b2->axisy * this->a2localx) - (this->b2->axisx * this->a2localy));
		HX_STACK_LINE(795)
		this->a2rely = ((this->a2localx * this->b2->axisx) + (this->a2localy * this->b2->axisy));
	}
	HX_STACK_LINE(797)
	Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(798)
	Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(799)
	Float Cx = 0.0;		HX_STACK_VAR(Cx,"Cx");
	HX_STACK_LINE(800)
	Float Cy = 0.0;		HX_STACK_VAR(Cy,"Cy");
	HX_STACK_LINE(801)
	{
		HX_STACK_LINE(802)
		dx = (((this->b2->posx + this->a2relx) - this->b1->posx) - this->a1relx);
		HX_STACK_LINE(803)
		dy = (((this->b2->posy + this->a2rely) - this->b1->posy) - this->a1rely);
		HX_STACK_LINE(804)
		Cx = ((dy * this->nrelx) - (dx * this->nrely));
		HX_STACK_LINE(805)
		Cy = ((this->nrelx * dx) + (this->nrely * dy));
		HX_STACK_LINE(806)
		if ((this->equal)){
			HX_STACK_LINE(807)
			hx::SubEq(Cy,this->jointMin);
			HX_STACK_LINE(808)
			this->scale = 1.0;
		}
		else{
			HX_STACK_LINE(810)
			if (((Cy > this->jointMax))){
				HX_STACK_LINE(811)
				hx::SubEq(Cy,this->jointMax);
				HX_STACK_LINE(812)
				this->scale = 1.0;
			}
			else{
				HX_STACK_LINE(814)
				if (((Cy < this->jointMin))){
					HX_STACK_LINE(815)
					Cy = (this->jointMin - Cy);
					HX_STACK_LINE(816)
					this->scale = -1.0;
				}
				else{
					HX_STACK_LINE(819)
					Cy = (int)0;
					HX_STACK_LINE(820)
					this->scale = (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(823)
	{
		HX_STACK_LINE(824)
		Float drx = 0.0;		HX_STACK_VAR(drx,"drx");
		HX_STACK_LINE(825)
		Float dry = 0.0;		HX_STACK_VAR(dry,"dry");
		HX_STACK_LINE(826)
		{
			HX_STACK_LINE(827)
			drx = (dx + this->a1relx);
			HX_STACK_LINE(828)
			dry = (dy + this->a1rely);
		}
		HX_STACK_LINE(830)
		this->dot1 = ((this->nrelx * drx) + (this->nrely * dry));
		HX_STACK_LINE(831)
		this->cx1 = ((dry * this->nrelx) - (drx * this->nrely));
		HX_STACK_LINE(832)
		this->dot2 = ((this->nrelx * this->a2relx) + (this->nrely * this->a2rely));
		HX_STACK_LINE(833)
		this->cx2 = ((this->a2rely * this->nrelx) - (this->a2relx * this->nrely));
		HX_STACK_LINE(834)
		this->kMassa = (((this->b1->smass + this->b2->smass) + ((this->dot1 * this->dot1) * this->b1->sinertia)) + ((this->dot2 * this->dot2) * this->b2->sinertia));
		HX_STACK_LINE(835)
		this->kMassb = (-(this->scale) * ((((this->dot1 * this->cx1) * this->b1->sinertia) + ((this->dot2 * this->cx2) * this->b2->sinertia))));
		HX_STACK_LINE(836)
		this->kMassc = ((this->scale * this->scale) * ((((this->b1->smass + this->b2->smass) + ((this->cx1 * this->cx1) * this->b1->sinertia)) + ((this->cx2 * this->cx2) * this->b2->sinertia))));
	}
	HX_STACK_LINE(838)
	int flag;		HX_STACK_VAR(flag,"flag");
	HX_STACK_LINE(838)
	{
		HX_STACK_LINE(839)
		Float det = ((this->kMassa * this->kMassc) - (this->kMassb * this->kMassb));		HX_STACK_VAR(det,"det");
		HX_STACK_LINE(840)
		if (((det != det))){
			HX_STACK_LINE(841)
			this->kMassa = this->kMassb = this->kMassc = (int)0;
			HX_STACK_LINE(842)
			flag = (int)3;
		}
		else{
			HX_STACK_LINE(844)
			if (((det == (int)0))){
				HX_STACK_LINE(845)
				int flag1 = (int)0;		HX_STACK_VAR(flag1,"flag1");
				HX_STACK_LINE(846)
				if (((this->kMassa != (int)0))){
					HX_STACK_LINE(846)
					this->kMassa = (Float((int)1) / Float(this->kMassa));
				}
				else{
					HX_STACK_LINE(848)
					this->kMassa = (int)0;
					HX_STACK_LINE(849)
					hx::OrEq(flag1,(int)1);
				}
				HX_STACK_LINE(851)
				if (((this->kMassc != (int)0))){
					HX_STACK_LINE(851)
					this->kMassc = (Float((int)1) / Float(this->kMassc));
				}
				else{
					HX_STACK_LINE(853)
					this->kMassc = (int)0;
					HX_STACK_LINE(854)
					hx::OrEq(flag1,(int)2);
				}
				HX_STACK_LINE(856)
				this->kMassb = (int)0;
				HX_STACK_LINE(857)
				flag = flag1;
			}
			else{
				HX_STACK_LINE(860)
				det = (Float((int)1) / Float(det));
				HX_STACK_LINE(861)
				Float t = (this->kMassc * det);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(862)
				this->kMassc = (this->kMassa * det);
				HX_STACK_LINE(863)
				this->kMassa = t;
				HX_STACK_LINE(864)
				hx::MultEq(this->kMassb,-(det));
				HX_STACK_LINE(865)
				flag = (int)0;
			}
		}
	}
	HX_STACK_LINE(868)
	if (((((int(flag) & int((int)1))) != (int)0))){
		HX_STACK_LINE(868)
		this->jAccx = (int)0;
	}
	HX_STACK_LINE(869)
	if (((((int(flag) & int((int)2))) != (int)0))){
		HX_STACK_LINE(869)
		this->jAccy = (int)0;
	}
	HX_STACK_LINE(870)
	if ((!(this->stiff))){
		HX_STACK_LINE(871)
		if (((bool(this->breakUnderError) && bool((((Cx * Cx) + (Cy * Cy)) > (this->maxError * this->maxError)))))){
			HX_STACK_LINE(871)
			return true;
		}
		HX_STACK_LINE(872)
		Float biasCoef;		HX_STACK_VAR(biasCoef,"biasCoef");
		HX_STACK_LINE(873)
		{
			HX_STACK_LINE(874)
			Float X;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(874)
			{
				HX_STACK_LINE(875)
				Float omega = (((int)2 * ::Math_obj::PI) * this->frequency);		HX_STACK_VAR(omega,"omega");
				HX_STACK_LINE(876)
				this->gamma = (Float((int)1) / Float((((dt * omega) * ((((int)2 * this->damping) + (omega * dt)))))));
				HX_STACK_LINE(877)
				Float ig = (Float((int)1) / Float((((int)1 + this->gamma))));		HX_STACK_VAR(ig,"ig");
				HX_STACK_LINE(878)
				biasCoef = (((dt * omega) * omega) * this->gamma);
				HX_STACK_LINE(879)
				hx::MultEq(this->gamma,ig);
				HX_STACK_LINE(880)
				X = ig;
			}
			HX_STACK_LINE(882)
			hx::MultEq(this->kMassa,X);
			HX_STACK_LINE(883)
			hx::MultEq(this->kMassb,X);
			HX_STACK_LINE(884)
			hx::MultEq(this->kMassc,X);
		}
		HX_STACK_LINE(886)
		{
			HX_STACK_LINE(887)
			this->biasx = Cx;
			HX_STACK_LINE(888)
			this->biasy = Cy;
			HX_STACK_LINE(897)
			{
			}
		}
		HX_STACK_LINE(906)
		{
			HX_STACK_LINE(907)
			Float t = -(biasCoef);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(916)
			hx::MultEq(this->biasx,t);
			HX_STACK_LINE(917)
			hx::MultEq(this->biasy,t);
		}
		HX_STACK_LINE(919)
		{
			HX_STACK_LINE(920)
			Float t = this->maxError;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(929)
			Float ls = ((this->biasx * this->biasx) + (this->biasy * this->biasy));		HX_STACK_VAR(ls,"ls");
			HX_STACK_LINE(930)
			if (((ls > (t * t)))){
				HX_STACK_LINE(940)
				Float t1;		HX_STACK_VAR(t1,"t1");
				HX_STACK_LINE(940)
				t1 = (t * ((Float(1.0) / Float(::Math_obj::sqrt(ls)))));
				HX_STACK_LINE(949)
				hx::MultEq(this->biasx,t1);
				HX_STACK_LINE(950)
				hx::MultEq(this->biasy,t1);
			}
		}
	}
	else{
		HX_STACK_LINE(956)
		this->gamma = (int)0;
		HX_STACK_LINE(957)
		{
			HX_STACK_LINE(958)
			this->biasx = (int)0;
			HX_STACK_LINE(959)
			this->biasy = (int)0;
			HX_STACK_LINE(968)
			{
			}
		}
	}
	HX_STACK_LINE(978)
	{
		HX_STACK_LINE(979)
		Float t = dtratio;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(988)
		hx::MultEq(this->jAccx,t);
		HX_STACK_LINE(989)
		hx::MultEq(this->jAccy,t);
	}
	HX_STACK_LINE(991)
	this->jMax = (this->maxForce * dt);
	HX_STACK_LINE(992)
	return false;
}


Void ZPP_LineJoint_obj::clearcache( ){
{
		HX_STACK_FRAME("ZPP_LineJoint","clearcache","ZPP_LineJoint.clearcache","zpp_nape/constraint/LineJoint.hx",755)
		HX_STACK_THIS(this)
		HX_STACK_LINE(756)
		{
			HX_STACK_LINE(757)
			this->jAccx = (int)0;
			HX_STACK_LINE(758)
			this->jAccy = (int)0;
			HX_STACK_LINE(767)
			{
			}
		}
		HX_STACK_LINE(776)
		this->pre_dt = -1.0;
	}
return null();
}


bool ZPP_LineJoint_obj::pair_exists( int id,int di){
	HX_STACK_FRAME("ZPP_LineJoint","pair_exists","ZPP_LineJoint.pair_exists","zpp_nape/constraint/LineJoint.hx",753)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_LINE(753)
	return (bool((bool((this->b1->id == id)) && bool((this->b2->id == di)))) || bool((bool((this->b1->id == di)) && bool((this->b2->id == id)))));
}


Void ZPP_LineJoint_obj::forest( ){
{
		HX_STACK_FRAME("ZPP_LineJoint","forest","ZPP_LineJoint.forest","zpp_nape/constraint/LineJoint.hx",654)
		HX_STACK_THIS(this)
		HX_STACK_LINE(655)
		if (((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
			HX_STACK_LINE(656)
			::zpp_nape::space::ZPP_Component xr;		HX_STACK_VAR(xr,"xr");
			HX_STACK_LINE(656)
			if (((this->b1->component == this->b1->component->parent))){
				HX_STACK_LINE(657)
				xr = this->b1->component;
			}
			else{
				HX_STACK_LINE(659)
				::zpp_nape::space::ZPP_Component obj = this->b1->component;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(660)
				::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
				HX_STACK_LINE(661)
				while(((obj != obj->parent))){
					HX_STACK_LINE(662)
					::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(663)
					obj->parent = stack;
					HX_STACK_LINE(664)
					stack = obj;
					HX_STACK_LINE(665)
					obj = nxt;
				}
				HX_STACK_LINE(667)
				while(((stack != null()))){
					HX_STACK_LINE(668)
					::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(669)
					stack->parent = obj;
					HX_STACK_LINE(670)
					stack = nxt;
				}
				HX_STACK_LINE(672)
				xr = obj;
			}
			HX_STACK_LINE(675)
			::zpp_nape::space::ZPP_Component yr;		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(675)
			if (((this->component == this->component->parent))){
				HX_STACK_LINE(676)
				yr = this->component;
			}
			else{
				HX_STACK_LINE(678)
				::zpp_nape::space::ZPP_Component obj = this->component;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(679)
				::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
				HX_STACK_LINE(680)
				while(((obj != obj->parent))){
					HX_STACK_LINE(681)
					::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(682)
					obj->parent = stack;
					HX_STACK_LINE(683)
					stack = obj;
					HX_STACK_LINE(684)
					obj = nxt;
				}
				HX_STACK_LINE(686)
				while(((stack != null()))){
					HX_STACK_LINE(687)
					::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(688)
					stack->parent = obj;
					HX_STACK_LINE(689)
					stack = nxt;
				}
				HX_STACK_LINE(691)
				yr = obj;
			}
			HX_STACK_LINE(694)
			if (((xr != yr))){
				HX_STACK_LINE(695)
				if (((xr->rank < yr->rank))){
					HX_STACK_LINE(695)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(696)
					if (((xr->rank > yr->rank))){
						HX_STACK_LINE(696)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(698)
						yr->parent = xr;
						HX_STACK_LINE(699)
						(xr->rank)++;
					}
				}
			}
		}
		HX_STACK_LINE(703)
		if (((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
			HX_STACK_LINE(704)
			::zpp_nape::space::ZPP_Component xr;		HX_STACK_VAR(xr,"xr");
			HX_STACK_LINE(704)
			if (((this->b2->component == this->b2->component->parent))){
				HX_STACK_LINE(705)
				xr = this->b2->component;
			}
			else{
				HX_STACK_LINE(707)
				::zpp_nape::space::ZPP_Component obj = this->b2->component;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(708)
				::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
				HX_STACK_LINE(709)
				while(((obj != obj->parent))){
					HX_STACK_LINE(710)
					::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(711)
					obj->parent = stack;
					HX_STACK_LINE(712)
					stack = obj;
					HX_STACK_LINE(713)
					obj = nxt;
				}
				HX_STACK_LINE(715)
				while(((stack != null()))){
					HX_STACK_LINE(716)
					::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(717)
					stack->parent = obj;
					HX_STACK_LINE(718)
					stack = nxt;
				}
				HX_STACK_LINE(720)
				xr = obj;
			}
			HX_STACK_LINE(723)
			::zpp_nape::space::ZPP_Component yr;		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(723)
			if (((this->component == this->component->parent))){
				HX_STACK_LINE(724)
				yr = this->component;
			}
			else{
				HX_STACK_LINE(726)
				::zpp_nape::space::ZPP_Component obj = this->component;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(727)
				::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
				HX_STACK_LINE(728)
				while(((obj != obj->parent))){
					HX_STACK_LINE(729)
					::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(730)
					obj->parent = stack;
					HX_STACK_LINE(731)
					stack = obj;
					HX_STACK_LINE(732)
					obj = nxt;
				}
				HX_STACK_LINE(734)
				while(((stack != null()))){
					HX_STACK_LINE(735)
					::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(736)
					stack->parent = obj;
					HX_STACK_LINE(737)
					stack = nxt;
				}
				HX_STACK_LINE(739)
				yr = obj;
			}
			HX_STACK_LINE(742)
			if (((xr != yr))){
				HX_STACK_LINE(743)
				if (((xr->rank < yr->rank))){
					HX_STACK_LINE(743)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(744)
					if (((xr->rank > yr->rank))){
						HX_STACK_LINE(744)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(746)
						yr->parent = xr;
						HX_STACK_LINE(747)
						(xr->rank)++;
					}
				}
			}
		}
	}
return null();
}


Void ZPP_LineJoint_obj::wake_connected( ){
{
		HX_STACK_FRAME("ZPP_LineJoint","wake_connected","ZPP_LineJoint.wake_connected","zpp_nape/constraint/LineJoint.hx",650)
		HX_STACK_THIS(this)
		HX_STACK_LINE(651)
		if (((bool((this->b1 != null())) && bool((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))){
			HX_STACK_LINE(651)
			this->b1->wake();
		}
		HX_STACK_LINE(652)
		if (((bool((this->b2 != null())) && bool((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))){
			HX_STACK_LINE(652)
			this->b2->wake();
		}
	}
return null();
}


Void ZPP_LineJoint_obj::validate( ){
{
		HX_STACK_FRAME("ZPP_LineJoint","validate","ZPP_LineJoint.validate","zpp_nape/constraint/LineJoint.hx",642)
		HX_STACK_THIS(this)
		HX_STACK_LINE(643)
		if (((bool((this->b1 == null())) || bool((this->b2 == null()))))){
			HX_STACK_LINE(643)
			HX_STACK_DO_THROW(HX_CSTRING("Error: AngleJoint cannot be simulated null bodies"));
		}
		HX_STACK_LINE(644)
		if (((this->b1 == this->b2))){
			HX_STACK_LINE(644)
			HX_STACK_DO_THROW(HX_CSTRING("Error: DistanceJoint cannot be simulated with body1 == body2"));
		}
		HX_STACK_LINE(645)
		if (((bool((this->b1->space != this->space)) || bool((this->b2->space != this->space))))){
			HX_STACK_LINE(645)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Constraints must have each body within the same space to which the constraint has been assigned"));
		}
		HX_STACK_LINE(646)
		if (((this->jointMin > this->jointMax))){
			HX_STACK_LINE(646)
			HX_STACK_DO_THROW(HX_CSTRING("Error: DistanceJoint must have jointMin <= jointMax"));
		}
		HX_STACK_LINE(647)
		if (((((this->nlocalx * this->nlocalx) + (this->nlocaly * this->nlocaly)) < ::nape::Config_obj::epsilon))){
			HX_STACK_LINE(647)
			HX_STACK_DO_THROW(HX_CSTRING("Error: DistanceJoint direction must be non-degenerate"));
		}
		HX_STACK_LINE(648)
		if (((bool(!(((this->b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC)))) && bool(!(((this->b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))))){
			HX_STACK_LINE(648)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Constraints cannot have both bodies non-dynamic"));
		}
	}
return null();
}


::nape::constraint::Constraint ZPP_LineJoint_obj::copy( Array< ::Dynamic > dict,Array< ::Dynamic > todo){
	HX_STACK_FRAME("ZPP_LineJoint","copy","ZPP_LineJoint.copy","zpp_nape/constraint/LineJoint.hx",442)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dict,"dict")
	HX_STACK_ARG(todo,"todo")
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::zpp_nape::constraint::ZPP_LineJoint_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","zpp_nape/constraint/LineJoint.hx",443)
			{
				HX_STACK_LINE(443)
				::nape::constraint::LineJoint _this = __this->outer_zn;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(443)
				if (((_this->zpp_inner_zn->wrap_a1 == null()))){
					HX_STACK_LINE(443)
					_this->zpp_inner_zn->setup_a1();
				}
				HX_STACK_LINE(443)
				return _this->zpp_inner_zn->wrap_a1;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::geom::Vec2 Block( ::zpp_nape::constraint::ZPP_LineJoint_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","zpp_nape/constraint/LineJoint.hx",443)
			{
				HX_STACK_LINE(443)
				::nape::constraint::LineJoint _this = __this->outer_zn;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(443)
				if (((_this->zpp_inner_zn->wrap_a2 == null()))){
					HX_STACK_LINE(443)
					_this->zpp_inner_zn->setup_a2();
				}
				HX_STACK_LINE(443)
				return _this->zpp_inner_zn->wrap_a2;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static ::nape::geom::Vec2 Block( ::zpp_nape::constraint::ZPP_LineJoint_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","zpp_nape/constraint/LineJoint.hx",443)
			{
				HX_STACK_LINE(443)
				::nape::constraint::LineJoint _this = __this->outer_zn;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(443)
				if (((_this->zpp_inner_zn->wrap_n == null()))){
					HX_STACK_LINE(443)
					_this->zpp_inner_zn->setup_n();
				}
				HX_STACK_LINE(443)
				return _this->zpp_inner_zn->wrap_n;
			}
			return null();
		}
	};
	HX_STACK_LINE(443)
	Array< ::Dynamic > ret = Array_obj< ::Dynamic >::__new().Add(::nape::constraint::LineJoint_obj::__new(null(),null(),_Function_1_1::Block(this),_Function_1_2::Block(this),_Function_1_3::Block(this),this->jointMin,this->jointMax));		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(444)
	this->copyto(ret->__get((int)0).StaticCast< ::nape::constraint::LineJoint >());
	HX_STACK_LINE(446)
	if (((bool((dict != null())) && bool((this->b1 != null()))))){
		HX_STACK_LINE(455)
		::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(456)
		{
			HX_STACK_LINE(456)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(456)
			while(((_g < dict->length))){
				HX_STACK_LINE(456)
				::zpp_nape::constraint::ZPP_CopyHelper idc = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(idc,"idc");
				HX_STACK_LINE(456)
				++(_g);
				HX_STACK_LINE(457)
				if (((idc->id == this->b1->id))){
					HX_STACK_LINE(458)
					b = idc->bc;
					HX_STACK_LINE(459)
					break;
				}
			}
		}
		HX_STACK_LINE(462)
		if (((b != null()))){
			HX_STACK_LINE(462)
			ret->__get((int)0).StaticCast< ::nape::constraint::LineJoint >()->zpp_inner_zn->b1 = b->zpp_inner;
		}
		else{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,ret)
			Void run(::nape::phys::Body b1){
				HX_STACK_FRAME("*","_Function_3_1","*._Function_3_1","zpp_nape/constraint/LineJoint.hx",463)
				HX_STACK_ARG(b1,"b1")
				{
					HX_STACK_LINE(463)
					ret->__get((int)0).StaticCast< ::nape::constraint::LineJoint >()->zpp_inner_zn->b1 = b1->zpp_inner;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(463)
			todo->push(::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(this->b1->id, Dynamic(new _Function_3_1(ret))));
		}
	}
	HX_STACK_LINE(467)
	if (((bool((dict != null())) && bool((this->b2 != null()))))){
		HX_STACK_LINE(476)
		::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(477)
		{
			HX_STACK_LINE(477)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(477)
			while(((_g < dict->length))){
				HX_STACK_LINE(477)
				::zpp_nape::constraint::ZPP_CopyHelper idc = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(idc,"idc");
				HX_STACK_LINE(477)
				++(_g);
				HX_STACK_LINE(478)
				if (((idc->id == this->b2->id))){
					HX_STACK_LINE(479)
					b = idc->bc;
					HX_STACK_LINE(480)
					break;
				}
			}
		}
		HX_STACK_LINE(483)
		if (((b != null()))){
			HX_STACK_LINE(483)
			ret->__get((int)0).StaticCast< ::nape::constraint::LineJoint >()->zpp_inner_zn->b2 = b->zpp_inner;
		}
		else{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,ret)
			Void run(::nape::phys::Body b1){
				HX_STACK_FRAME("*","_Function_3_1","*._Function_3_1","zpp_nape/constraint/LineJoint.hx",484)
				HX_STACK_ARG(b1,"b1")
				{
					HX_STACK_LINE(484)
					ret->__get((int)0).StaticCast< ::nape::constraint::LineJoint >()->zpp_inner_zn->b2 = b1->zpp_inner;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(484)
			todo->push(::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(this->b2->id, Dynamic(new _Function_3_1(ret))));
		}
	}
	HX_STACK_LINE(487)
	return ret->__get((int)0).StaticCast< ::nape::constraint::LineJoint >();
}


Void ZPP_LineJoint_obj::validate_norm( ){
{
		HX_STACK_FRAME("ZPP_LineJoint","validate_norm","ZPP_LineJoint.validate_norm","zpp_nape/constraint/LineJoint.hx",403)
		HX_STACK_THIS(this)
		HX_STACK_LINE(403)
		if ((this->zip_n)){
			HX_STACK_LINE(404)
			this->zip_n = false;
			HX_STACK_LINE(405)
			{
				HX_STACK_LINE(406)
				Float d = ((this->nlocalx * this->nlocalx) + (this->nlocaly * this->nlocaly));		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(415)
				Float imag = (Float(1.0) / Float(::Math_obj::sqrt(d)));		HX_STACK_VAR(imag,"imag");
				HX_STACK_LINE(416)
				{
					HX_STACK_LINE(417)
					Float t = imag;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(426)
					hx::MultEq(this->nlocalx,t);
					HX_STACK_LINE(427)
					hx::MultEq(this->nlocaly,t);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_LineJoint_obj,validate_norm,(void))

Void ZPP_LineJoint_obj::setup_n( ){
{
		HX_STACK_FRAME("ZPP_LineJoint","setup_n","ZPP_LineJoint.setup_n","zpp_nape/constraint/LineJoint.hx",395)
		HX_STACK_THIS(this)
		HX_STACK_LINE(396)
		{
			HX_STACK_LINE(396)
			Float x = this->nlocalx;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(396)
			Float y = this->nlocaly;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(396)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(396)
			if (((bool((x != x)) || bool((y != y))))){
				HX_STACK_LINE(396)
				HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
			}
			HX_STACK_LINE(396)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(396)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(396)
				ret = ::nape::geom::Vec2_obj::__new(null(),null());
			}
			else{
				HX_STACK_LINE(396)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(396)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(396)
				ret->zpp_pool = null();
				HX_STACK_LINE(396)
				ret->zpp_disp = false;
				HX_STACK_LINE(396)
				if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
					HX_STACK_LINE(396)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
				}
			}
			HX_STACK_LINE(396)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(396)
				{
					HX_STACK_LINE(396)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(396)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(396)
					{
						HX_STACK_LINE(396)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(396)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
						}
						else{
							HX_STACK_LINE(396)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(396)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(396)
							ret1->next = null();
						}
						HX_STACK_LINE(396)
						ret1->weak = false;
					}
					HX_STACK_LINE(396)
					ret1->_immutable = immutable;
					HX_STACK_LINE(396)
					{
						HX_STACK_LINE(396)
						ret1->x = x;
						HX_STACK_LINE(396)
						ret1->y = y;
						HX_STACK_LINE(396)
						{
						}
					}
					HX_STACK_LINE(396)
					ret->zpp_inner = ret1;
				}
				HX_STACK_LINE(396)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(396)
				if (((bool((ret != null())) && bool(ret->zpp_disp)))){
					HX_STACK_LINE(396)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(396)
				{
					HX_STACK_LINE(396)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(396)
					if ((_this->_immutable)){
						HX_STACK_LINE(396)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(396)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(396)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(396)
				if (((bool((x != x)) || bool((y != y))))){
					HX_STACK_LINE(396)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
				}
				struct _Function_3_1{
					inline static Float Block( ::nape::geom::Vec2 &ret){
						HX_STACK_FRAME("*","closure","*.closure","zpp_nape/constraint/LineJoint.hx",396)
						{
							HX_STACK_LINE(396)
							if (((bool((ret != null())) && bool(ret->zpp_disp)))){
								HX_STACK_LINE(396)
								HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(396)
							{
								HX_STACK_LINE(396)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(396)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(396)
									_this->_validate();
								}
							}
							HX_STACK_LINE(396)
							return ret->zpp_inner->x;
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static Float Block( ::nape::geom::Vec2 &ret){
						HX_STACK_FRAME("*","closure","*.closure","zpp_nape/constraint/LineJoint.hx",396)
						{
							HX_STACK_LINE(396)
							if (((bool((ret != null())) && bool(ret->zpp_disp)))){
								HX_STACK_LINE(396)
								HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(396)
							{
								HX_STACK_LINE(396)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(396)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(396)
									_this->_validate();
								}
							}
							HX_STACK_LINE(396)
							return ret->zpp_inner->y;
						}
						return null();
					}
				};
				HX_STACK_LINE(396)
				if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
					HX_STACK_LINE(396)
					{
						HX_STACK_LINE(396)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(396)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(396)
						{
						}
					}
					HX_STACK_LINE(396)
					{
						HX_STACK_LINE(396)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(396)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(396)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(396)
				ret;
			}
			HX_STACK_LINE(396)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(396)
			this->wrap_n = ret;
		}
		HX_STACK_LINE(397)
		this->wrap_n->zpp_inner->_inuse = true;
		HX_STACK_LINE(398)
		this->wrap_n->zpp_inner->_validate = this->validate_n_dyn();
		HX_STACK_LINE(399)
		this->wrap_n->zpp_inner->_invalidate = this->invalidate_n_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_LineJoint_obj,setup_n,(void))

Void ZPP_LineJoint_obj::invalidate_n( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("ZPP_LineJoint","invalidate_n","ZPP_LineJoint.invalidate_n","zpp_nape/constraint/LineJoint.hx",368)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(369)
		this->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("n")));
		HX_STACK_LINE(370)
		{
			HX_STACK_LINE(371)
			this->nlocalx = x->x;
			HX_STACK_LINE(372)
			this->nlocaly = x->y;
			HX_STACK_LINE(381)
			{
			}
		}
		HX_STACK_LINE(391)
		this->zip_n = true;
		HX_STACK_LINE(393)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_LineJoint_obj,invalidate_n,(void))

Void ZPP_LineJoint_obj::validate_n( ){
{
		HX_STACK_FRAME("ZPP_LineJoint","validate_n","ZPP_LineJoint.validate_n","zpp_nape/constraint/LineJoint.hx",347)
		HX_STACK_THIS(this)
		HX_STACK_LINE(348)
		this->wrap_n->zpp_inner->x = this->nlocalx;
		HX_STACK_LINE(349)
		this->wrap_n->zpp_inner->y = this->nlocaly;
		HX_STACK_LINE(358)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_LineJoint_obj,validate_n,(void))

Void ZPP_LineJoint_obj::setup_a2( ){
{
		HX_STACK_FRAME("ZPP_LineJoint","setup_a2","ZPP_LineJoint.setup_a2","zpp_nape/constraint/LineJoint.hx",334)
		HX_STACK_THIS(this)
		HX_STACK_LINE(335)
		{
			HX_STACK_LINE(335)
			Float x = this->a2localx;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(335)
			Float y = this->a2localy;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(335)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(335)
			if (((bool((x != x)) || bool((y != y))))){
				HX_STACK_LINE(335)
				HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
			}
			HX_STACK_LINE(335)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(335)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(335)
				ret = ::nape::geom::Vec2_obj::__new(null(),null());
			}
			else{
				HX_STACK_LINE(335)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(335)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(335)
				ret->zpp_pool = null();
				HX_STACK_LINE(335)
				ret->zpp_disp = false;
				HX_STACK_LINE(335)
				if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
					HX_STACK_LINE(335)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
				}
			}
			HX_STACK_LINE(335)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(335)
				{
					HX_STACK_LINE(335)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(335)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(335)
					{
						HX_STACK_LINE(335)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(335)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
						}
						else{
							HX_STACK_LINE(335)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(335)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(335)
							ret1->next = null();
						}
						HX_STACK_LINE(335)
						ret1->weak = false;
					}
					HX_STACK_LINE(335)
					ret1->_immutable = immutable;
					HX_STACK_LINE(335)
					{
						HX_STACK_LINE(335)
						ret1->x = x;
						HX_STACK_LINE(335)
						ret1->y = y;
						HX_STACK_LINE(335)
						{
						}
					}
					HX_STACK_LINE(335)
					ret->zpp_inner = ret1;
				}
				HX_STACK_LINE(335)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(335)
				if (((bool((ret != null())) && bool(ret->zpp_disp)))){
					HX_STACK_LINE(335)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(335)
				{
					HX_STACK_LINE(335)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(335)
					if ((_this->_immutable)){
						HX_STACK_LINE(335)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(335)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(335)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(335)
				if (((bool((x != x)) || bool((y != y))))){
					HX_STACK_LINE(335)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
				}
				struct _Function_3_1{
					inline static Float Block( ::nape::geom::Vec2 &ret){
						HX_STACK_FRAME("*","closure","*.closure","zpp_nape/constraint/LineJoint.hx",335)
						{
							HX_STACK_LINE(335)
							if (((bool((ret != null())) && bool(ret->zpp_disp)))){
								HX_STACK_LINE(335)
								HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(335)
							{
								HX_STACK_LINE(335)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(335)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(335)
									_this->_validate();
								}
							}
							HX_STACK_LINE(335)
							return ret->zpp_inner->x;
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static Float Block( ::nape::geom::Vec2 &ret){
						HX_STACK_FRAME("*","closure","*.closure","zpp_nape/constraint/LineJoint.hx",335)
						{
							HX_STACK_LINE(335)
							if (((bool((ret != null())) && bool(ret->zpp_disp)))){
								HX_STACK_LINE(335)
								HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(335)
							{
								HX_STACK_LINE(335)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(335)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(335)
									_this->_validate();
								}
							}
							HX_STACK_LINE(335)
							return ret->zpp_inner->y;
						}
						return null();
					}
				};
				HX_STACK_LINE(335)
				if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
					HX_STACK_LINE(335)
					{
						HX_STACK_LINE(335)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(335)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(335)
						{
						}
					}
					HX_STACK_LINE(335)
					{
						HX_STACK_LINE(335)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(335)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(335)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(335)
				ret;
			}
			HX_STACK_LINE(335)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(335)
			this->wrap_a2 = ret;
		}
		HX_STACK_LINE(336)
		this->wrap_a2->zpp_inner->_inuse = true;
		HX_STACK_LINE(337)
		this->wrap_a2->zpp_inner->_validate = this->validate_a2_dyn();
		HX_STACK_LINE(338)
		this->wrap_a2->zpp_inner->_invalidate = this->invalidate_a2_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_LineJoint_obj,setup_a2,(void))

Void ZPP_LineJoint_obj::invalidate_a2( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("ZPP_LineJoint","invalidate_a2","ZPP_LineJoint.invalidate_a2","zpp_nape/constraint/LineJoint.hx",310)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(311)
		this->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("a2")));
		HX_STACK_LINE(312)
		{
			HX_STACK_LINE(313)
			this->a2localx = x->x;
			HX_STACK_LINE(314)
			this->a2localy = x->y;
			HX_STACK_LINE(323)
			{
			}
		}
		HX_STACK_LINE(332)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_LineJoint_obj,invalidate_a2,(void))

Void ZPP_LineJoint_obj::validate_a2( ){
{
		HX_STACK_FRAME("ZPP_LineJoint","validate_a2","ZPP_LineJoint.validate_a2","zpp_nape/constraint/LineJoint.hx",289)
		HX_STACK_THIS(this)
		HX_STACK_LINE(290)
		this->wrap_a2->zpp_inner->x = this->a2localx;
		HX_STACK_LINE(291)
		this->wrap_a2->zpp_inner->y = this->a2localy;
		HX_STACK_LINE(300)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_LineJoint_obj,validate_a2,(void))

Void ZPP_LineJoint_obj::setup_a1( ){
{
		HX_STACK_FRAME("ZPP_LineJoint","setup_a1","ZPP_LineJoint.setup_a1","zpp_nape/constraint/LineJoint.hx",276)
		HX_STACK_THIS(this)
		HX_STACK_LINE(277)
		{
			HX_STACK_LINE(277)
			Float x = this->a1localx;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(277)
			Float y = this->a1localy;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(277)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(277)
			if (((bool((x != x)) || bool((y != y))))){
				HX_STACK_LINE(277)
				HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
			}
			HX_STACK_LINE(277)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(277)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(277)
				ret = ::nape::geom::Vec2_obj::__new(null(),null());
			}
			else{
				HX_STACK_LINE(277)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(277)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(277)
				ret->zpp_pool = null();
				HX_STACK_LINE(277)
				ret->zpp_disp = false;
				HX_STACK_LINE(277)
				if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
					HX_STACK_LINE(277)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
				}
			}
			HX_STACK_LINE(277)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(277)
				{
					HX_STACK_LINE(277)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(277)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(277)
					{
						HX_STACK_LINE(277)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(277)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
						}
						else{
							HX_STACK_LINE(277)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(277)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(277)
							ret1->next = null();
						}
						HX_STACK_LINE(277)
						ret1->weak = false;
					}
					HX_STACK_LINE(277)
					ret1->_immutable = immutable;
					HX_STACK_LINE(277)
					{
						HX_STACK_LINE(277)
						ret1->x = x;
						HX_STACK_LINE(277)
						ret1->y = y;
						HX_STACK_LINE(277)
						{
						}
					}
					HX_STACK_LINE(277)
					ret->zpp_inner = ret1;
				}
				HX_STACK_LINE(277)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(277)
				if (((bool((ret != null())) && bool(ret->zpp_disp)))){
					HX_STACK_LINE(277)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(277)
				{
					HX_STACK_LINE(277)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(277)
					if ((_this->_immutable)){
						HX_STACK_LINE(277)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(277)
					if (((_this->_isimmutable != null()))){
						HX_STACK_LINE(277)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(277)
				if (((bool((x != x)) || bool((y != y))))){
					HX_STACK_LINE(277)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
				}
				struct _Function_3_1{
					inline static Float Block( ::nape::geom::Vec2 &ret){
						HX_STACK_FRAME("*","closure","*.closure","zpp_nape/constraint/LineJoint.hx",277)
						{
							HX_STACK_LINE(277)
							if (((bool((ret != null())) && bool(ret->zpp_disp)))){
								HX_STACK_LINE(277)
								HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(277)
							{
								HX_STACK_LINE(277)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(277)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(277)
									_this->_validate();
								}
							}
							HX_STACK_LINE(277)
							return ret->zpp_inner->x;
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static Float Block( ::nape::geom::Vec2 &ret){
						HX_STACK_FRAME("*","closure","*.closure","zpp_nape/constraint/LineJoint.hx",277)
						{
							HX_STACK_LINE(277)
							if (((bool((ret != null())) && bool(ret->zpp_disp)))){
								HX_STACK_LINE(277)
								HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(277)
							{
								HX_STACK_LINE(277)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(277)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(277)
									_this->_validate();
								}
							}
							HX_STACK_LINE(277)
							return ret->zpp_inner->y;
						}
						return null();
					}
				};
				HX_STACK_LINE(277)
				if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
					HX_STACK_LINE(277)
					{
						HX_STACK_LINE(277)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(277)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(277)
						{
						}
					}
					HX_STACK_LINE(277)
					{
						HX_STACK_LINE(277)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(277)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(277)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(277)
				ret;
			}
			HX_STACK_LINE(277)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(277)
			this->wrap_a1 = ret;
		}
		HX_STACK_LINE(278)
		this->wrap_a1->zpp_inner->_inuse = true;
		HX_STACK_LINE(279)
		this->wrap_a1->zpp_inner->_validate = this->validate_a1_dyn();
		HX_STACK_LINE(280)
		this->wrap_a1->zpp_inner->_invalidate = this->invalidate_a1_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_LineJoint_obj,setup_a1,(void))

Void ZPP_LineJoint_obj::invalidate_a1( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("ZPP_LineJoint","invalidate_a1","ZPP_LineJoint.invalidate_a1","zpp_nape/constraint/LineJoint.hx",252)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(253)
		this->immutable_midstep((HX_CSTRING("Constraint::") + HX_CSTRING("a1")));
		HX_STACK_LINE(254)
		{
			HX_STACK_LINE(255)
			this->a1localx = x->x;
			HX_STACK_LINE(256)
			this->a1localy = x->y;
			HX_STACK_LINE(265)
			{
			}
		}
		HX_STACK_LINE(274)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_LineJoint_obj,invalidate_a1,(void))

Void ZPP_LineJoint_obj::validate_a1( ){
{
		HX_STACK_FRAME("ZPP_LineJoint","validate_a1","ZPP_LineJoint.validate_a1","zpp_nape/constraint/LineJoint.hx",231)
		HX_STACK_THIS(this)
		HX_STACK_LINE(232)
		this->wrap_a1->zpp_inner->x = this->a1localx;
		HX_STACK_LINE(233)
		this->wrap_a1->zpp_inner->y = this->a1localy;
		HX_STACK_LINE(242)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_LineJoint_obj,validate_a1,(void))

Void ZPP_LineJoint_obj::inactiveBodies( ){
{
		HX_STACK_FRAME("ZPP_LineJoint","inactiveBodies","ZPP_LineJoint.inactiveBodies","zpp_nape/constraint/LineJoint.hx",217)
		HX_STACK_THIS(this)
		HX_STACK_LINE(219)
		if (((this->b1 != null()))){
			HX_STACK_LINE(219)
			this->b1->constraints->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(221)
		if (((this->b2 != this->b1))){
			HX_STACK_LINE(222)
			if (((this->b2 != null()))){
				HX_STACK_LINE(222)
				this->b2->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


Void ZPP_LineJoint_obj::activeBodies( ){
{
		HX_STACK_FRAME("ZPP_LineJoint","activeBodies","ZPP_LineJoint.activeBodies","zpp_nape/constraint/LineJoint.hx",209)
		HX_STACK_THIS(this)
		HX_STACK_LINE(211)
		if (((this->b1 != null()))){
			HX_STACK_LINE(211)
			this->b1->constraints->add(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(213)
		if (((this->b2 != this->b1))){
			HX_STACK_LINE(214)
			if (((this->b2 != null()))){
				HX_STACK_LINE(214)
				this->b2->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


::nape::geom::Vec3 ZPP_LineJoint_obj::bodyImpulse( ::zpp_nape::phys::ZPP_Body b){
	HX_STACK_FRAME("ZPP_LineJoint","bodyImpulse","ZPP_LineJoint.bodyImpulse","zpp_nape/constraint/LineJoint.hx",185)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(185)
	if ((this->stepped)){
		HX_STACK_LINE(186)
		Float jx = (((this->scale * this->nrelx) * this->jAccy) - (this->nrely * this->jAccx));		HX_STACK_VAR(jx,"jx");
		HX_STACK_LINE(187)
		Float jy = ((this->nrelx * this->jAccx) + ((this->scale * this->nrely) * this->jAccy));		HX_STACK_VAR(jy,"jy");
		HX_STACK_LINE(204)
		if (((b == this->b1))){
			HX_STACK_LINE(204)
			return ::nape::geom::Vec3_obj::get(-(jx),-(jy),(((this->scale * this->cx1) * jy) - (this->dot1 * jx)));
		}
		else{
			HX_STACK_LINE(205)
			return ::nape::geom::Vec3_obj::get(jx,jy,(((this->scale * this->cx1) * jy) - (this->dot1 * jx)));
		}
	}
	else{
		HX_STACK_LINE(207)
		return ::nape::geom::Vec3_obj::get((int)0,(int)0,(int)0);
	}
	HX_STACK_LINE(185)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_LineJoint_obj,bodyImpulse,return )


ZPP_LineJoint_obj::ZPP_LineJoint_obj()
{
}

void ZPP_LineJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_LineJoint);
	HX_MARK_MEMBER_NAME(stepped,"stepped");
	HX_MARK_MEMBER_NAME(biasy,"biasy");
	HX_MARK_MEMBER_NAME(biasx,"biasx");
	HX_MARK_MEMBER_NAME(gamma,"gamma");
	HX_MARK_MEMBER_NAME(jMax,"jMax");
	HX_MARK_MEMBER_NAME(jAccy,"jAccy");
	HX_MARK_MEMBER_NAME(jAccx,"jAccx");
	HX_MARK_MEMBER_NAME(kMassc,"kMassc");
	HX_MARK_MEMBER_NAME(kMassb,"kMassb");
	HX_MARK_MEMBER_NAME(kMassa,"kMassa");
	HX_MARK_MEMBER_NAME(wrap_n,"wrap_n");
	HX_MARK_MEMBER_NAME(nrely,"nrely");
	HX_MARK_MEMBER_NAME(nrelx,"nrelx");
	HX_MARK_MEMBER_NAME(nlocaly,"nlocaly");
	HX_MARK_MEMBER_NAME(nlocalx,"nlocalx");
	HX_MARK_MEMBER_NAME(zip_n,"zip_n");
	HX_MARK_MEMBER_NAME(wrap_a2,"wrap_a2");
	HX_MARK_MEMBER_NAME(a2rely,"a2rely");
	HX_MARK_MEMBER_NAME(a2relx,"a2relx");
	HX_MARK_MEMBER_NAME(a2localy,"a2localy");
	HX_MARK_MEMBER_NAME(a2localx,"a2localx");
	HX_MARK_MEMBER_NAME(b2,"b2");
	HX_MARK_MEMBER_NAME(wrap_a1,"wrap_a1");
	HX_MARK_MEMBER_NAME(a1rely,"a1rely");
	HX_MARK_MEMBER_NAME(a1relx,"a1relx");
	HX_MARK_MEMBER_NAME(a1localy,"a1localy");
	HX_MARK_MEMBER_NAME(a1localx,"a1localx");
	HX_MARK_MEMBER_NAME(b1,"b1");
	HX_MARK_MEMBER_NAME(cx2,"cx2");
	HX_MARK_MEMBER_NAME(cx1,"cx1");
	HX_MARK_MEMBER_NAME(dot2,"dot2");
	HX_MARK_MEMBER_NAME(dot1,"dot1");
	HX_MARK_MEMBER_NAME(equal,"equal");
	HX_MARK_MEMBER_NAME(jointMax,"jointMax");
	HX_MARK_MEMBER_NAME(jointMin,"jointMin");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_LineJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stepped,"stepped");
	HX_VISIT_MEMBER_NAME(biasy,"biasy");
	HX_VISIT_MEMBER_NAME(biasx,"biasx");
	HX_VISIT_MEMBER_NAME(gamma,"gamma");
	HX_VISIT_MEMBER_NAME(jMax,"jMax");
	HX_VISIT_MEMBER_NAME(jAccy,"jAccy");
	HX_VISIT_MEMBER_NAME(jAccx,"jAccx");
	HX_VISIT_MEMBER_NAME(kMassc,"kMassc");
	HX_VISIT_MEMBER_NAME(kMassb,"kMassb");
	HX_VISIT_MEMBER_NAME(kMassa,"kMassa");
	HX_VISIT_MEMBER_NAME(wrap_n,"wrap_n");
	HX_VISIT_MEMBER_NAME(nrely,"nrely");
	HX_VISIT_MEMBER_NAME(nrelx,"nrelx");
	HX_VISIT_MEMBER_NAME(nlocaly,"nlocaly");
	HX_VISIT_MEMBER_NAME(nlocalx,"nlocalx");
	HX_VISIT_MEMBER_NAME(zip_n,"zip_n");
	HX_VISIT_MEMBER_NAME(wrap_a2,"wrap_a2");
	HX_VISIT_MEMBER_NAME(a2rely,"a2rely");
	HX_VISIT_MEMBER_NAME(a2relx,"a2relx");
	HX_VISIT_MEMBER_NAME(a2localy,"a2localy");
	HX_VISIT_MEMBER_NAME(a2localx,"a2localx");
	HX_VISIT_MEMBER_NAME(b2,"b2");
	HX_VISIT_MEMBER_NAME(wrap_a1,"wrap_a1");
	HX_VISIT_MEMBER_NAME(a1rely,"a1rely");
	HX_VISIT_MEMBER_NAME(a1relx,"a1relx");
	HX_VISIT_MEMBER_NAME(a1localy,"a1localy");
	HX_VISIT_MEMBER_NAME(a1localx,"a1localx");
	HX_VISIT_MEMBER_NAME(b1,"b1");
	HX_VISIT_MEMBER_NAME(cx2,"cx2");
	HX_VISIT_MEMBER_NAME(cx1,"cx1");
	HX_VISIT_MEMBER_NAME(dot2,"dot2");
	HX_VISIT_MEMBER_NAME(dot1,"dot1");
	HX_VISIT_MEMBER_NAME(equal,"equal");
	HX_VISIT_MEMBER_NAME(jointMax,"jointMax");
	HX_VISIT_MEMBER_NAME(jointMin,"jointMin");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_LineJoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"b2") ) { return b2; }
		if (HX_FIELD_EQ(inName,"b1") ) { return b1; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"cx2") ) { return cx2; }
		if (HX_FIELD_EQ(inName,"cx1") ) { return cx1; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"jMax") ) { return jMax; }
		if (HX_FIELD_EQ(inName,"dot2") ) { return dot2; }
		if (HX_FIELD_EQ(inName,"dot1") ) { return dot1; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"biasy") ) { return biasy; }
		if (HX_FIELD_EQ(inName,"biasx") ) { return biasx; }
		if (HX_FIELD_EQ(inName,"gamma") ) { return gamma; }
		if (HX_FIELD_EQ(inName,"jAccy") ) { return jAccy; }
		if (HX_FIELD_EQ(inName,"jAccx") ) { return jAccx; }
		if (HX_FIELD_EQ(inName,"nrely") ) { return nrely; }
		if (HX_FIELD_EQ(inName,"nrelx") ) { return nrelx; }
		if (HX_FIELD_EQ(inName,"zip_n") ) { return zip_n; }
		if (HX_FIELD_EQ(inName,"equal") ) { return equal; }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"forest") ) { return forest_dyn(); }
		if (HX_FIELD_EQ(inName,"kMassc") ) { return kMassc; }
		if (HX_FIELD_EQ(inName,"kMassb") ) { return kMassb; }
		if (HX_FIELD_EQ(inName,"kMassa") ) { return kMassa; }
		if (HX_FIELD_EQ(inName,"wrap_n") ) { return wrap_n; }
		if (HX_FIELD_EQ(inName,"a2rely") ) { return a2rely; }
		if (HX_FIELD_EQ(inName,"a2relx") ) { return a2relx; }
		if (HX_FIELD_EQ(inName,"a1rely") ) { return a1rely; }
		if (HX_FIELD_EQ(inName,"a1relx") ) { return a1relx; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"preStep") ) { return preStep_dyn(); }
		if (HX_FIELD_EQ(inName,"stepped") ) { return stepped; }
		if (HX_FIELD_EQ(inName,"setup_n") ) { return setup_n_dyn(); }
		if (HX_FIELD_EQ(inName,"nlocaly") ) { return nlocaly; }
		if (HX_FIELD_EQ(inName,"nlocalx") ) { return nlocalx; }
		if (HX_FIELD_EQ(inName,"wrap_a2") ) { return wrap_a2; }
		if (HX_FIELD_EQ(inName,"wrap_a1") ) { return wrap_a1; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		if (HX_FIELD_EQ(inName,"setup_a2") ) { return setup_a2_dyn(); }
		if (HX_FIELD_EQ(inName,"a2localy") ) { return a2localy; }
		if (HX_FIELD_EQ(inName,"a2localx") ) { return a2localx; }
		if (HX_FIELD_EQ(inName,"setup_a1") ) { return setup_a1_dyn(); }
		if (HX_FIELD_EQ(inName,"a1localy") ) { return a1localy; }
		if (HX_FIELD_EQ(inName,"a1localx") ) { return a1localx; }
		if (HX_FIELD_EQ(inName,"jointMax") ) { return jointMax; }
		if (HX_FIELD_EQ(inName,"jointMin") ) { return jointMin; }
		if (HX_FIELD_EQ(inName,"outer_zn") ) { return outer_zn; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"warmStart") ) { return warmStart_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearcache") ) { return clearcache_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_n") ) { return validate_n_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pair_exists") ) { return pair_exists_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_a2") ) { return validate_a2_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_a1") ) { return validate_a1_dyn(); }
		if (HX_FIELD_EQ(inName,"bodyImpulse") ) { return bodyImpulse_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"invalidate_n") ) { return invalidate_n_dyn(); }
		if (HX_FIELD_EQ(inName,"activeBodies") ) { return activeBodies_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"validate_norm") ) { return validate_norm_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_a2") ) { return invalidate_a2_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_a1") ) { return invalidate_a1_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"wake_connected") ) { return wake_connected_dyn(); }
		if (HX_FIELD_EQ(inName,"inactiveBodies") ) { return inactiveBodies_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"applyImpulsePos") ) { return applyImpulsePos_dyn(); }
		if (HX_FIELD_EQ(inName,"applyImpulseVel") ) { return applyImpulseVel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_LineJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"b2") ) { b2=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b1") ) { b1=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"cx2") ) { cx2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cx1") ) { cx1=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"jMax") ) { jMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dot2") ) { dot2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dot1") ) { dot1=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"biasy") ) { biasy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"biasx") ) { biasx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gamma") ) { gamma=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jAccy") ) { jAccy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jAccx") ) { jAccx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nrely") ) { nrely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nrelx") ) { nrelx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_n") ) { zip_n=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"equal") ) { equal=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"kMassc") ) { kMassc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMassb") ) { kMassb=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMassa") ) { kMassa=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_n") ) { wrap_n=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2rely") ) { a2rely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2relx") ) { a2relx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1rely") ) { a1rely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1relx") ) { a1relx=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"stepped") ) { stepped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nlocaly") ) { nlocaly=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nlocalx") ) { nlocalx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_a2") ) { wrap_a2=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_a1") ) { wrap_a1=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"a2localy") ) { a2localy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2localx") ) { a2localx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1localy") ) { a1localy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1localx") ) { a1localx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jointMax") ) { jointMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jointMin") ) { jointMin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::constraint::LineJoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_LineJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("stepped"));
	outFields->push(HX_CSTRING("biasy"));
	outFields->push(HX_CSTRING("biasx"));
	outFields->push(HX_CSTRING("gamma"));
	outFields->push(HX_CSTRING("jMax"));
	outFields->push(HX_CSTRING("jAccy"));
	outFields->push(HX_CSTRING("jAccx"));
	outFields->push(HX_CSTRING("kMassc"));
	outFields->push(HX_CSTRING("kMassb"));
	outFields->push(HX_CSTRING("kMassa"));
	outFields->push(HX_CSTRING("wrap_n"));
	outFields->push(HX_CSTRING("nrely"));
	outFields->push(HX_CSTRING("nrelx"));
	outFields->push(HX_CSTRING("nlocaly"));
	outFields->push(HX_CSTRING("nlocalx"));
	outFields->push(HX_CSTRING("zip_n"));
	outFields->push(HX_CSTRING("wrap_a2"));
	outFields->push(HX_CSTRING("a2rely"));
	outFields->push(HX_CSTRING("a2relx"));
	outFields->push(HX_CSTRING("a2localy"));
	outFields->push(HX_CSTRING("a2localx"));
	outFields->push(HX_CSTRING("b2"));
	outFields->push(HX_CSTRING("wrap_a1"));
	outFields->push(HX_CSTRING("a1rely"));
	outFields->push(HX_CSTRING("a1relx"));
	outFields->push(HX_CSTRING("a1localy"));
	outFields->push(HX_CSTRING("a1localx"));
	outFields->push(HX_CSTRING("b1"));
	outFields->push(HX_CSTRING("cx2"));
	outFields->push(HX_CSTRING("cx1"));
	outFields->push(HX_CSTRING("dot2"));
	outFields->push(HX_CSTRING("dot1"));
	outFields->push(HX_CSTRING("equal"));
	outFields->push(HX_CSTRING("jointMax"));
	outFields->push(HX_CSTRING("jointMin"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("outer_zn"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("draw"),
	HX_CSTRING("applyImpulsePos"),
	HX_CSTRING("applyImpulseVel"),
	HX_CSTRING("warmStart"),
	HX_CSTRING("preStep"),
	HX_CSTRING("clearcache"),
	HX_CSTRING("pair_exists"),
	HX_CSTRING("forest"),
	HX_CSTRING("wake_connected"),
	HX_CSTRING("validate"),
	HX_CSTRING("copy"),
	HX_CSTRING("stepped"),
	HX_CSTRING("biasy"),
	HX_CSTRING("biasx"),
	HX_CSTRING("gamma"),
	HX_CSTRING("jMax"),
	HX_CSTRING("jAccy"),
	HX_CSTRING("jAccx"),
	HX_CSTRING("kMassc"),
	HX_CSTRING("kMassb"),
	HX_CSTRING("kMassa"),
	HX_CSTRING("validate_norm"),
	HX_CSTRING("wrap_n"),
	HX_CSTRING("setup_n"),
	HX_CSTRING("invalidate_n"),
	HX_CSTRING("validate_n"),
	HX_CSTRING("nrely"),
	HX_CSTRING("nrelx"),
	HX_CSTRING("nlocaly"),
	HX_CSTRING("nlocalx"),
	HX_CSTRING("zip_n"),
	HX_CSTRING("wrap_a2"),
	HX_CSTRING("setup_a2"),
	HX_CSTRING("invalidate_a2"),
	HX_CSTRING("validate_a2"),
	HX_CSTRING("a2rely"),
	HX_CSTRING("a2relx"),
	HX_CSTRING("a2localy"),
	HX_CSTRING("a2localx"),
	HX_CSTRING("b2"),
	HX_CSTRING("wrap_a1"),
	HX_CSTRING("setup_a1"),
	HX_CSTRING("invalidate_a1"),
	HX_CSTRING("validate_a1"),
	HX_CSTRING("a1rely"),
	HX_CSTRING("a1relx"),
	HX_CSTRING("a1localy"),
	HX_CSTRING("a1localx"),
	HX_CSTRING("b1"),
	HX_CSTRING("inactiveBodies"),
	HX_CSTRING("activeBodies"),
	HX_CSTRING("bodyImpulse"),
	HX_CSTRING("cx2"),
	HX_CSTRING("cx1"),
	HX_CSTRING("dot2"),
	HX_CSTRING("dot1"),
	HX_CSTRING("equal"),
	HX_CSTRING("jointMax"),
	HX_CSTRING("jointMin"),
	HX_CSTRING("scale"),
	HX_CSTRING("outer_zn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_LineJoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_LineJoint_obj::__mClass,"__mClass");
};

#endif

Class ZPP_LineJoint_obj::__mClass;

void ZPP_LineJoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.constraint.ZPP_LineJoint"), hx::TCanCast< ZPP_LineJoint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void ZPP_LineJoint_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace constraint
