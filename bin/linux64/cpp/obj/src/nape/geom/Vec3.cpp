#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec3
#include <zpp_nape/geom/ZPP_Vec3.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace geom{

Void Vec3_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z)
{
HX_STACK_FRAME("Vec3","new","Vec3.new","nape/geom/Vec3.hx",181)

HX_STACK_ARG(__o_x,"x")

HX_STACK_ARG(__o_y,"y")

HX_STACK_ARG(__o_z,"z")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float z = __o_z.Default(0);
{
	HX_STACK_LINE(189)
	this->zpp_pool = null();
	HX_STACK_LINE(185)
	this->zpp_inner = null();
	HX_STACK_LINE(361)
	this->zpp_inner = ::zpp_nape::geom::ZPP_Vec3_obj::__new();
	HX_STACK_LINE(362)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(363)
	{
		HX_STACK_LINE(364)
		{
			HX_STACK_LINE(365)
			{
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					if ((this->zpp_disp)){
						HX_STACK_LINE(365)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(365)
					if ((this->zpp_inner->immutable)){
						HX_STACK_LINE(365)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 is immutable"));
					}
					HX_STACK_LINE(365)
					this->zpp_inner->x = x;
				}
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					if ((this->zpp_disp)){
						HX_STACK_LINE(365)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(365)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(365)
							_this->_validate();
						}
					}
					HX_STACK_LINE(365)
					this->zpp_inner->x;
				}
			}
			HX_STACK_LINE(366)
			{
				HX_STACK_LINE(366)
				{
					HX_STACK_LINE(366)
					if ((this->zpp_disp)){
						HX_STACK_LINE(366)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(366)
					if ((this->zpp_inner->immutable)){
						HX_STACK_LINE(366)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 is immutable"));
					}
					HX_STACK_LINE(366)
					this->zpp_inner->y = y;
				}
				HX_STACK_LINE(366)
				{
					HX_STACK_LINE(366)
					if ((this->zpp_disp)){
						HX_STACK_LINE(366)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(366)
					{
						HX_STACK_LINE(366)
						::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(366)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(366)
							_this->_validate();
						}
					}
					HX_STACK_LINE(366)
					this->zpp_inner->y;
				}
			}
			HX_STACK_LINE(375)
			{
			}
		}
		HX_STACK_LINE(384)
		{
			HX_STACK_LINE(384)
			{
				HX_STACK_LINE(384)
				if ((this->zpp_disp)){
					HX_STACK_LINE(384)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(384)
				if ((this->zpp_inner->immutable)){
					HX_STACK_LINE(384)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 is immutable"));
				}
				HX_STACK_LINE(384)
				this->zpp_inner->z = z;
			}
			HX_STACK_LINE(384)
			{
				HX_STACK_LINE(384)
				if ((this->zpp_disp)){
					HX_STACK_LINE(384)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(384)
				{
					HX_STACK_LINE(384)
					::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(384)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(384)
						_this->_validate();
					}
				}
				HX_STACK_LINE(384)
				this->zpp_inner->z;
			}
		}
	}
}
;
	return null();
}

Vec3_obj::~Vec3_obj() { }

Dynamic Vec3_obj::__CreateEmpty() { return  new Vec3_obj; }
hx::ObjectPtr< Vec3_obj > Vec3_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z)
{  hx::ObjectPtr< Vec3_obj > result = new Vec3_obj();
	result->__construct(__o_x,__o_y,__o_z);
	return result;}

Dynamic Vec3_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vec3_obj > result = new Vec3_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::String Vec3_obj::toString( ){
	HX_STACK_FRAME("Vec3","toString","Vec3.toString","nape/geom/Vec3.hx",608)
	HX_STACK_THIS(this)
	HX_STACK_LINE(611)
	if ((this->zpp_disp)){
		HX_STACK_LINE(611)
		HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::geom::Vec3_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",614)
			{
				HX_STACK_LINE(614)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(614)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(614)
				{
					HX_STACK_LINE(614)
					::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(614)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(614)
						_this->_validate();
					}
				}
				HX_STACK_LINE(614)
				return __this->zpp_inner->x;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::nape::geom::Vec3_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",614)
			{
				HX_STACK_LINE(614)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(614)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(614)
				{
					HX_STACK_LINE(614)
					::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(614)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(614)
						_this->_validate();
					}
				}
				HX_STACK_LINE(614)
				return __this->zpp_inner->y;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static Float Block( ::nape::geom::Vec3_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",614)
			{
				HX_STACK_LINE(614)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(614)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(614)
				{
					HX_STACK_LINE(614)
					::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(614)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(614)
						_this->_validate();
					}
				}
				HX_STACK_LINE(614)
				return __this->zpp_inner->z;
			}
			return null();
		}
	};
	HX_STACK_LINE(614)
	return ((((((HX_CSTRING("{ x: ") + _Function_1_1::Block(this)) + HX_CSTRING(" y: ")) + _Function_1_2::Block(this)) + HX_CSTRING(" z: ")) + _Function_1_3::Block(this)) + HX_CSTRING(" }"));
}


HX_DEFINE_DYNAMIC_FUNC0(Vec3_obj,toString,return )

::nape::geom::Vec2 Vec3_obj::xy( hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("Vec3","xy","Vec3.xy","nape/geom/Vec3.hx",597)
	HX_STACK_THIS(this)
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(600)
		if ((this->zpp_disp)){
			HX_STACK_LINE(600)
			HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(603)
		Float x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(603)
		{
			HX_STACK_LINE(603)
			if ((this->zpp_disp)){
				HX_STACK_LINE(603)
				HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(603)
			{
				HX_STACK_LINE(603)
				::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(603)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(603)
					_this->_validate();
				}
			}
			HX_STACK_LINE(603)
			x = this->zpp_inner->x;
		}
		HX_STACK_LINE(603)
		Float y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(603)
		{
			HX_STACK_LINE(603)
			if ((this->zpp_disp)){
				HX_STACK_LINE(603)
				HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(603)
			{
				HX_STACK_LINE(603)
				::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(603)
				if (((_this->_validate != null()))){
					HX_STACK_LINE(603)
					_this->_validate();
				}
			}
			HX_STACK_LINE(603)
			y = this->zpp_inner->y;
		}
		HX_STACK_LINE(603)
		if (((bool((x != x)) || bool((y != y))))){
			HX_STACK_LINE(603)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
		}
		HX_STACK_LINE(603)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(603)
		if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
			HX_STACK_LINE(603)
			ret = ::nape::geom::Vec2_obj::__new(null(),null());
		}
		else{
			HX_STACK_LINE(603)
			ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
			HX_STACK_LINE(603)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
			HX_STACK_LINE(603)
			ret->zpp_pool = null();
			HX_STACK_LINE(603)
			ret->zpp_disp = false;
			HX_STACK_LINE(603)
			if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
				HX_STACK_LINE(603)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
			}
		}
		HX_STACK_LINE(603)
		if (((ret->zpp_inner == null()))){
			HX_STACK_LINE(603)
			{
				HX_STACK_LINE(603)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(603)
				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(603)
				{
					HX_STACK_LINE(603)
					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(603)
						ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
					}
					else{
						HX_STACK_LINE(603)
						ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(603)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(603)
						ret1->next = null();
					}
					HX_STACK_LINE(603)
					ret1->weak = false;
				}
				HX_STACK_LINE(603)
				ret1->_immutable = immutable;
				HX_STACK_LINE(603)
				{
					HX_STACK_LINE(603)
					ret1->x = x;
					HX_STACK_LINE(603)
					ret1->y = y;
					HX_STACK_LINE(603)
					{
					}
				}
				HX_STACK_LINE(603)
				ret->zpp_inner = ret1;
			}
			HX_STACK_LINE(603)
			ret->zpp_inner->outer = ret;
		}
		else{
			HX_STACK_LINE(603)
			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
				HX_STACK_LINE(603)
				HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(603)
			{
				HX_STACK_LINE(603)
				::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(603)
				if ((_this->_immutable)){
					HX_STACK_LINE(603)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(603)
				if (((_this->_isimmutable != null()))){
					HX_STACK_LINE(603)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(603)
			if (((bool((x != x)) || bool((y != y))))){
				HX_STACK_LINE(603)
				HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 components cannot be NaN"));
			}
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &ret){
					HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",603)
					{
						HX_STACK_LINE(603)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(603)
							HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(603)
						{
							HX_STACK_LINE(603)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(603)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(603)
								_this->_validate();
							}
						}
						HX_STACK_LINE(603)
						return ret->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &ret){
					HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",603)
					{
						HX_STACK_LINE(603)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(603)
							HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(603)
						{
							HX_STACK_LINE(603)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(603)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(603)
								_this->_validate();
							}
						}
						HX_STACK_LINE(603)
						return ret->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(603)
			if ((!(((bool((_Function_2_1::Block(ret) == x)) && bool((_Function_2_2::Block(ret) == y))))))){
				HX_STACK_LINE(603)
				{
					HX_STACK_LINE(603)
					ret->zpp_inner->x = x;
					HX_STACK_LINE(603)
					ret->zpp_inner->y = y;
					HX_STACK_LINE(603)
					{
					}
				}
				HX_STACK_LINE(603)
				{
					HX_STACK_LINE(603)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(603)
					if (((_this->_invalidate != null()))){
						HX_STACK_LINE(603)
						_this->_invalidate(_this);
					}
				}
			}
			HX_STACK_LINE(603)
			ret;
		}
		HX_STACK_LINE(603)
		ret->zpp_inner->weak = weak;
		HX_STACK_LINE(603)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Vec3_obj,xy,return )

::nape::geom::Vec3 Vec3_obj::setxyz( Float x,Float y,Float z){
	HX_STACK_FRAME("Vec3","setxyz","Vec3.setxyz","nape/geom/Vec3.hx",552)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_LINE(555)
	if ((this->zpp_disp)){
		HX_STACK_LINE(555)
		HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(558)
	{
		HX_STACK_LINE(559)
		{
			HX_STACK_LINE(560)
			{
				HX_STACK_LINE(560)
				{
					HX_STACK_LINE(560)
					if ((this->zpp_disp)){
						HX_STACK_LINE(560)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(560)
					if ((this->zpp_inner->immutable)){
						HX_STACK_LINE(560)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 is immutable"));
					}
					HX_STACK_LINE(560)
					this->zpp_inner->x = x;
				}
				HX_STACK_LINE(560)
				{
					HX_STACK_LINE(560)
					if ((this->zpp_disp)){
						HX_STACK_LINE(560)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(560)
					{
						HX_STACK_LINE(560)
						::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(560)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(560)
							_this->_validate();
						}
					}
					HX_STACK_LINE(560)
					this->zpp_inner->x;
				}
			}
			HX_STACK_LINE(561)
			{
				HX_STACK_LINE(561)
				{
					HX_STACK_LINE(561)
					if ((this->zpp_disp)){
						HX_STACK_LINE(561)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(561)
					if ((this->zpp_inner->immutable)){
						HX_STACK_LINE(561)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 is immutable"));
					}
					HX_STACK_LINE(561)
					this->zpp_inner->y = y;
				}
				HX_STACK_LINE(561)
				{
					HX_STACK_LINE(561)
					if ((this->zpp_disp)){
						HX_STACK_LINE(561)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(561)
					{
						HX_STACK_LINE(561)
						::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(561)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(561)
							_this->_validate();
						}
					}
					HX_STACK_LINE(561)
					this->zpp_inner->y;
				}
			}
			HX_STACK_LINE(570)
			{
			}
		}
		HX_STACK_LINE(579)
		{
			HX_STACK_LINE(579)
			{
				HX_STACK_LINE(579)
				if ((this->zpp_disp)){
					HX_STACK_LINE(579)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(579)
				if ((this->zpp_inner->immutable)){
					HX_STACK_LINE(579)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 is immutable"));
				}
				HX_STACK_LINE(579)
				this->zpp_inner->z = z;
			}
			HX_STACK_LINE(579)
			{
				HX_STACK_LINE(579)
				if ((this->zpp_disp)){
					HX_STACK_LINE(579)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(579)
				{
					HX_STACK_LINE(579)
					::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(579)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(579)
						_this->_validate();
					}
				}
				HX_STACK_LINE(579)
				this->zpp_inner->z;
			}
		}
	}
	HX_STACK_LINE(581)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(Vec3_obj,setxyz,return )

::nape::geom::Vec3 Vec3_obj::set( ::nape::geom::Vec3 vector){
	HX_STACK_FRAME("Vec3","set","Vec3.set","nape/geom/Vec3.hx",524)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_LINE(527)
	if ((this->zpp_disp)){
		HX_STACK_LINE(527)
		HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(532)
	if (((bool((vector != null())) && bool(vector->zpp_disp)))){
		HX_STACK_LINE(532)
		HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(536)
	if (((vector == null()))){
		HX_STACK_LINE(537)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot assign null Vec3"));
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::geom::Vec3 &vector){
			HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",540)
			{
				HX_STACK_LINE(540)
				if (((bool((vector != null())) && bool(vector->zpp_disp)))){
					HX_STACK_LINE(540)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(540)
				{
					HX_STACK_LINE(540)
					::zpp_nape::geom::ZPP_Vec3 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(540)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(540)
						_this->_validate();
					}
				}
				HX_STACK_LINE(540)
				return vector->zpp_inner->x;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::nape::geom::Vec3 &vector){
			HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",540)
			{
				HX_STACK_LINE(540)
				if (((bool((vector != null())) && bool(vector->zpp_disp)))){
					HX_STACK_LINE(540)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(540)
				{
					HX_STACK_LINE(540)
					::zpp_nape::geom::ZPP_Vec3 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(540)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(540)
						_this->_validate();
					}
				}
				HX_STACK_LINE(540)
				return vector->zpp_inner->y;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static Float Block( ::nape::geom::Vec3 &vector){
			HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",540)
			{
				HX_STACK_LINE(540)
				if (((bool((vector != null())) && bool(vector->zpp_disp)))){
					HX_STACK_LINE(540)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(540)
				{
					HX_STACK_LINE(540)
					::zpp_nape::geom::ZPP_Vec3 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(540)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(540)
						_this->_validate();
					}
				}
				HX_STACK_LINE(540)
				return vector->zpp_inner->z;
			}
			return null();
		}
	};
	HX_STACK_LINE(540)
	return this->setxyz(_Function_1_1::Block(vector),_Function_1_2::Block(vector),_Function_1_3::Block(vector));
}


HX_DEFINE_DYNAMIC_FUNC1(Vec3_obj,set,return )

Float Vec3_obj::lsq( ){
	HX_STACK_FRAME("Vec3","lsq","Vec3.lsq","nape/geom/Vec3.hx",507)
	HX_STACK_THIS(this)
	HX_STACK_LINE(510)
	if ((this->zpp_disp)){
		HX_STACK_LINE(510)
		HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::geom::Vec3_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",513)
			{
				HX_STACK_LINE(513)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(513)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(513)
				{
					HX_STACK_LINE(513)
					::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(513)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(513)
						_this->_validate();
					}
				}
				HX_STACK_LINE(513)
				return __this->zpp_inner->x;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::nape::geom::Vec3_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",513)
			{
				HX_STACK_LINE(513)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(513)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(513)
				{
					HX_STACK_LINE(513)
					::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(513)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(513)
						_this->_validate();
					}
				}
				HX_STACK_LINE(513)
				return __this->zpp_inner->x;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static Float Block( ::nape::geom::Vec3_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",513)
			{
				HX_STACK_LINE(513)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(513)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(513)
				{
					HX_STACK_LINE(513)
					::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(513)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(513)
						_this->_validate();
					}
				}
				HX_STACK_LINE(513)
				return __this->zpp_inner->y;
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::nape::geom::Vec3_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",513)
			{
				HX_STACK_LINE(513)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(513)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(513)
				{
					HX_STACK_LINE(513)
					::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(513)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(513)
						_this->_validate();
					}
				}
				HX_STACK_LINE(513)
				return __this->zpp_inner->y;
			}
			return null();
		}
	};
	struct _Function_1_5{
		inline static Float Block( ::nape::geom::Vec3_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",513)
			{
				HX_STACK_LINE(513)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(513)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(513)
				{
					HX_STACK_LINE(513)
					::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(513)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(513)
						_this->_validate();
					}
				}
				HX_STACK_LINE(513)
				return __this->zpp_inner->z;
			}
			return null();
		}
	};
	struct _Function_1_6{
		inline static Float Block( ::nape::geom::Vec3_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",513)
			{
				HX_STACK_LINE(513)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(513)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(513)
				{
					HX_STACK_LINE(513)
					::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(513)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(513)
						_this->_validate();
					}
				}
				HX_STACK_LINE(513)
				return __this->zpp_inner->z;
			}
			return null();
		}
	};
	HX_STACK_LINE(513)
	return (((_Function_1_1::Block(this) * _Function_1_2::Block(this)) + (_Function_1_3::Block(this) * _Function_1_4::Block(this))) + (_Function_1_5::Block(this) * _Function_1_6::Block(this)));
}


HX_DEFINE_DYNAMIC_FUNC0(Vec3_obj,lsq,return )

Float Vec3_obj::set_length( Float length){
	HX_STACK_FRAME("Vec3","set_length","Vec3.set_length","nape/geom/Vec3.hx",465)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(466)
	{
		HX_STACK_LINE(469)
		if ((this->zpp_disp)){
			HX_STACK_LINE(469)
			HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(473)
		if (((length != length))){
			HX_STACK_LINE(474)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3::length cannot be NaN"));
		}
		struct _Function_2_1{
			inline static Float Block( ::nape::geom::Vec3_obj *__this){
				HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",476)
				{
					HX_STACK_LINE(476)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(476)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(476)
					{
						HX_STACK_LINE(476)
						::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(476)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(476)
							_this->_validate();
						}
					}
					HX_STACK_LINE(476)
					return __this->zpp_inner->x;
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static Float Block( ::nape::geom::Vec3_obj *__this){
				HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",476)
				{
					HX_STACK_LINE(476)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(476)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(476)
					{
						HX_STACK_LINE(476)
						::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(476)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(476)
							_this->_validate();
						}
					}
					HX_STACK_LINE(476)
					return __this->zpp_inner->x;
				}
				return null();
			}
		};
		struct _Function_2_3{
			inline static Float Block( ::nape::geom::Vec3_obj *__this){
				HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",476)
				{
					HX_STACK_LINE(476)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(476)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(476)
					{
						HX_STACK_LINE(476)
						::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(476)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(476)
							_this->_validate();
						}
					}
					HX_STACK_LINE(476)
					return __this->zpp_inner->y;
				}
				return null();
			}
		};
		struct _Function_2_4{
			inline static Float Block( ::nape::geom::Vec3_obj *__this){
				HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",476)
				{
					HX_STACK_LINE(476)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(476)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(476)
					{
						HX_STACK_LINE(476)
						::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(476)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(476)
							_this->_validate();
						}
					}
					HX_STACK_LINE(476)
					return __this->zpp_inner->y;
				}
				return null();
			}
		};
		struct _Function_2_5{
			inline static Float Block( ::nape::geom::Vec3_obj *__this){
				HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",476)
				{
					HX_STACK_LINE(476)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(476)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(476)
					{
						HX_STACK_LINE(476)
						::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(476)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(476)
							_this->_validate();
						}
					}
					HX_STACK_LINE(476)
					return __this->zpp_inner->z;
				}
				return null();
			}
		};
		struct _Function_2_6{
			inline static Float Block( ::nape::geom::Vec3_obj *__this){
				HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",476)
				{
					HX_STACK_LINE(476)
					if ((__this->zpp_disp)){
						HX_STACK_LINE(476)
						HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(476)
					{
						HX_STACK_LINE(476)
						::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(476)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(476)
							_this->_validate();
						}
					}
					HX_STACK_LINE(476)
					return __this->zpp_inner->z;
				}
				return null();
			}
		};
		HX_STACK_LINE(476)
		if ((((((_Function_2_1::Block(this) * _Function_2_2::Block(this)) + (_Function_2_3::Block(this) * _Function_2_4::Block(this))) + (_Function_2_5::Block(this) * _Function_2_6::Block(this))) == (int)0))){
			HX_STACK_LINE(477)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot set length of a zero vector"));
		}
		HX_STACK_LINE(480)
		{
			HX_STACK_LINE(481)
			Float t;		HX_STACK_VAR(t,"t");
			struct _Function_3_1{
				inline static Float Block( ::nape::geom::Vec3_obj *__this){
					HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",481)
					{
						HX_STACK_LINE(481)
						if ((__this->zpp_disp)){
							HX_STACK_LINE(481)
							HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec3_obj *__this){
								HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",481)
								{
									HX_STACK_LINE(481)
									if ((__this->zpp_disp)){
										HX_STACK_LINE(481)
										HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(481)
									{
										HX_STACK_LINE(481)
										::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(481)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(481)
											_this->_validate();
										}
									}
									HX_STACK_LINE(481)
									return __this->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec3_obj *__this){
								HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",481)
								{
									HX_STACK_LINE(481)
									if ((__this->zpp_disp)){
										HX_STACK_LINE(481)
										HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(481)
									{
										HX_STACK_LINE(481)
										::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(481)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(481)
											_this->_validate();
										}
									}
									HX_STACK_LINE(481)
									return __this->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_3{
							inline static Float Block( ::nape::geom::Vec3_obj *__this){
								HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",481)
								{
									HX_STACK_LINE(481)
									if ((__this->zpp_disp)){
										HX_STACK_LINE(481)
										HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(481)
									{
										HX_STACK_LINE(481)
										::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(481)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(481)
											_this->_validate();
										}
									}
									HX_STACK_LINE(481)
									return __this->zpp_inner->y;
								}
								return null();
							}
						};
						struct _Function_4_4{
							inline static Float Block( ::nape::geom::Vec3_obj *__this){
								HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",481)
								{
									HX_STACK_LINE(481)
									if ((__this->zpp_disp)){
										HX_STACK_LINE(481)
										HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(481)
									{
										HX_STACK_LINE(481)
										::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(481)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(481)
											_this->_validate();
										}
									}
									HX_STACK_LINE(481)
									return __this->zpp_inner->y;
								}
								return null();
							}
						};
						struct _Function_4_5{
							inline static Float Block( ::nape::geom::Vec3_obj *__this){
								HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",481)
								{
									HX_STACK_LINE(481)
									if ((__this->zpp_disp)){
										HX_STACK_LINE(481)
										HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(481)
									{
										HX_STACK_LINE(481)
										::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(481)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(481)
											_this->_validate();
										}
									}
									HX_STACK_LINE(481)
									return __this->zpp_inner->z;
								}
								return null();
							}
						};
						struct _Function_4_6{
							inline static Float Block( ::nape::geom::Vec3_obj *__this){
								HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",481)
								{
									HX_STACK_LINE(481)
									if ((__this->zpp_disp)){
										HX_STACK_LINE(481)
										HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(481)
									{
										HX_STACK_LINE(481)
										::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(481)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(481)
											_this->_validate();
										}
									}
									HX_STACK_LINE(481)
									return __this->zpp_inner->z;
								}
								return null();
							}
						};
						HX_STACK_LINE(481)
						return ::Math_obj::sqrt((((_Function_4_1::Block(__this) * _Function_4_2::Block(__this)) + (_Function_4_3::Block(__this) * _Function_4_4::Block(__this))) + (_Function_4_5::Block(__this) * _Function_4_6::Block(__this))));
					}
					return null();
				}
			};
			HX_STACK_LINE(481)
			t = (Float(length) / Float(_Function_3_1::Block(this)));
			HX_STACK_LINE(482)
			{
				HX_STACK_LINE(483)
				Float t1 = t;		HX_STACK_VAR(t1,"t1");
				HX_STACK_LINE(492)
				{
					HX_STACK_LINE(492)
					::nape::geom::Vec3 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(492)
					{
						HX_STACK_LINE(492)
						Float x;		HX_STACK_VAR(x,"x");
						struct _Function_6_1{
							inline static Float Block( ::nape::geom::Vec3 &_g){
								HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",492)
								{
									HX_STACK_LINE(492)
									if (((bool((_g != null())) && bool(_g->zpp_disp)))){
										HX_STACK_LINE(492)
										HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(492)
									{
										HX_STACK_LINE(492)
										::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(492)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(492)
											_this->_validate();
										}
									}
									HX_STACK_LINE(492)
									return _g->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(492)
						x = (_Function_6_1::Block(_g) * t1);
						HX_STACK_LINE(492)
						{
							HX_STACK_LINE(492)
							if (((bool((_g != null())) && bool(_g->zpp_disp)))){
								HX_STACK_LINE(492)
								HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(492)
							if ((_g->zpp_inner->immutable)){
								HX_STACK_LINE(492)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 is immutable"));
							}
							HX_STACK_LINE(492)
							_g->zpp_inner->x = x;
						}
						HX_STACK_LINE(492)
						{
							HX_STACK_LINE(492)
							if (((bool((_g != null())) && bool(_g->zpp_disp)))){
								HX_STACK_LINE(492)
								HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(492)
							{
								HX_STACK_LINE(492)
								::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(492)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(492)
									_this->_validate();
								}
							}
							HX_STACK_LINE(492)
							_g->zpp_inner->x;
						}
					}
				}
				HX_STACK_LINE(493)
				{
					HX_STACK_LINE(493)
					::nape::geom::Vec3 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(493)
					{
						HX_STACK_LINE(493)
						Float y;		HX_STACK_VAR(y,"y");
						struct _Function_6_1{
							inline static Float Block( ::nape::geom::Vec3 &_g){
								HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",493)
								{
									HX_STACK_LINE(493)
									if (((bool((_g != null())) && bool(_g->zpp_disp)))){
										HX_STACK_LINE(493)
										HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(493)
									{
										HX_STACK_LINE(493)
										::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(493)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(493)
											_this->_validate();
										}
									}
									HX_STACK_LINE(493)
									return _g->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(493)
						y = (_Function_6_1::Block(_g) * t1);
						HX_STACK_LINE(493)
						{
							HX_STACK_LINE(493)
							if (((bool((_g != null())) && bool(_g->zpp_disp)))){
								HX_STACK_LINE(493)
								HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(493)
							if ((_g->zpp_inner->immutable)){
								HX_STACK_LINE(493)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 is immutable"));
							}
							HX_STACK_LINE(493)
							_g->zpp_inner->y = y;
						}
						HX_STACK_LINE(493)
						{
							HX_STACK_LINE(493)
							if (((bool((_g != null())) && bool(_g->zpp_disp)))){
								HX_STACK_LINE(493)
								HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(493)
							{
								HX_STACK_LINE(493)
								::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(493)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(493)
									_this->_validate();
								}
							}
							HX_STACK_LINE(493)
							_g->zpp_inner->y;
						}
					}
				}
			}
			HX_STACK_LINE(495)
			{
				HX_STACK_LINE(495)
				::nape::geom::Vec3 _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(495)
				{
					HX_STACK_LINE(495)
					Float z;		HX_STACK_VAR(z,"z");
					struct _Function_5_1{
						inline static Float Block( ::nape::geom::Vec3 &_g){
							HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",495)
							{
								HX_STACK_LINE(495)
								if (((bool((_g != null())) && bool(_g->zpp_disp)))){
									HX_STACK_LINE(495)
									HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(495)
								{
									HX_STACK_LINE(495)
									::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(495)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(495)
										_this->_validate();
									}
								}
								HX_STACK_LINE(495)
								return _g->zpp_inner->z;
							}
							return null();
						}
					};
					HX_STACK_LINE(495)
					z = (_Function_5_1::Block(_g) * t);
					HX_STACK_LINE(495)
					{
						HX_STACK_LINE(495)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(495)
							HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(495)
						if ((_g->zpp_inner->immutable)){
							HX_STACK_LINE(495)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 is immutable"));
						}
						HX_STACK_LINE(495)
						_g->zpp_inner->z = z;
					}
					HX_STACK_LINE(495)
					{
						HX_STACK_LINE(495)
						if (((bool((_g != null())) && bool(_g->zpp_disp)))){
							HX_STACK_LINE(495)
							HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(495)
						{
							HX_STACK_LINE(495)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(495)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(495)
								_this->_validate();
							}
						}
						HX_STACK_LINE(495)
						_g->zpp_inner->z;
					}
				}
			}
		}
	}
	HX_STACK_LINE(498)
	if ((this->zpp_disp)){
		HX_STACK_LINE(498)
		HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::geom::Vec3_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",498)
			{
				HX_STACK_LINE(498)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(498)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(498)
				{
					HX_STACK_LINE(498)
					::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(498)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(498)
						_this->_validate();
					}
				}
				HX_STACK_LINE(498)
				return __this->zpp_inner->x;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::nape::geom::Vec3_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",498)
			{
				HX_STACK_LINE(498)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(498)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(498)
				{
					HX_STACK_LINE(498)
					::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(498)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(498)
						_this->_validate();
					}
				}
				HX_STACK_LINE(498)
				return __this->zpp_inner->x;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static Float Block( ::nape::geom::Vec3_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",498)
			{
				HX_STACK_LINE(498)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(498)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(498)
				{
					HX_STACK_LINE(498)
					::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(498)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(498)
						_this->_validate();
					}
				}
				HX_STACK_LINE(498)
				return __this->zpp_inner->y;
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::nape::geom::Vec3_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",498)
			{
				HX_STACK_LINE(498)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(498)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(498)
				{
					HX_STACK_LINE(498)
					::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(498)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(498)
						_this->_validate();
					}
				}
				HX_STACK_LINE(498)
				return __this->zpp_inner->y;
			}
			return null();
		}
	};
	struct _Function_1_5{
		inline static Float Block( ::nape::geom::Vec3_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",498)
			{
				HX_STACK_LINE(498)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(498)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(498)
				{
					HX_STACK_LINE(498)
					::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(498)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(498)
						_this->_validate();
					}
				}
				HX_STACK_LINE(498)
				return __this->zpp_inner->z;
			}
			return null();
		}
	};
	struct _Function_1_6{
		inline static Float Block( ::nape::geom::Vec3_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",498)
			{
				HX_STACK_LINE(498)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(498)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(498)
				{
					HX_STACK_LINE(498)
					::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(498)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(498)
						_this->_validate();
					}
				}
				HX_STACK_LINE(498)
				return __this->zpp_inner->z;
			}
			return null();
		}
	};
	HX_STACK_LINE(498)
	return ::Math_obj::sqrt((((_Function_1_1::Block(this) * _Function_1_2::Block(this)) + (_Function_1_3::Block(this) * _Function_1_4::Block(this))) + (_Function_1_5::Block(this) * _Function_1_6::Block(this))));
}


HX_DEFINE_DYNAMIC_FUNC1(Vec3_obj,set_length,return )

Float Vec3_obj::get_length( ){
	HX_STACK_FRAME("Vec3","get_length","Vec3.get_length","nape/geom/Vec3.hx",457)
	HX_STACK_THIS(this)
	HX_STACK_LINE(460)
	if ((this->zpp_disp)){
		HX_STACK_LINE(460)
		HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::geom::Vec3_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",463)
			{
				HX_STACK_LINE(463)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(463)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(463)
				{
					HX_STACK_LINE(463)
					::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(463)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(463)
						_this->_validate();
					}
				}
				HX_STACK_LINE(463)
				return __this->zpp_inner->x;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::nape::geom::Vec3_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",463)
			{
				HX_STACK_LINE(463)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(463)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(463)
				{
					HX_STACK_LINE(463)
					::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(463)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(463)
						_this->_validate();
					}
				}
				HX_STACK_LINE(463)
				return __this->zpp_inner->x;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static Float Block( ::nape::geom::Vec3_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",463)
			{
				HX_STACK_LINE(463)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(463)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(463)
				{
					HX_STACK_LINE(463)
					::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(463)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(463)
						_this->_validate();
					}
				}
				HX_STACK_LINE(463)
				return __this->zpp_inner->y;
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::nape::geom::Vec3_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",463)
			{
				HX_STACK_LINE(463)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(463)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(463)
				{
					HX_STACK_LINE(463)
					::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(463)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(463)
						_this->_validate();
					}
				}
				HX_STACK_LINE(463)
				return __this->zpp_inner->y;
			}
			return null();
		}
	};
	struct _Function_1_5{
		inline static Float Block( ::nape::geom::Vec3_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",463)
			{
				HX_STACK_LINE(463)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(463)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(463)
				{
					HX_STACK_LINE(463)
					::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(463)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(463)
						_this->_validate();
					}
				}
				HX_STACK_LINE(463)
				return __this->zpp_inner->z;
			}
			return null();
		}
	};
	struct _Function_1_6{
		inline static Float Block( ::nape::geom::Vec3_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","nape/geom/Vec3.hx",463)
			{
				HX_STACK_LINE(463)
				if ((__this->zpp_disp)){
					HX_STACK_LINE(463)
					HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(463)
				{
					HX_STACK_LINE(463)
					::zpp_nape::geom::ZPP_Vec3 _this = __this->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(463)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(463)
						_this->_validate();
					}
				}
				HX_STACK_LINE(463)
				return __this->zpp_inner->z;
			}
			return null();
		}
	};
	HX_STACK_LINE(463)
	return ::Math_obj::sqrt((((_Function_1_1::Block(this) * _Function_1_2::Block(this)) + (_Function_1_3::Block(this) * _Function_1_4::Block(this))) + (_Function_1_5::Block(this) * _Function_1_6::Block(this))));
}


HX_DEFINE_DYNAMIC_FUNC0(Vec3_obj,get_length,return )

Void Vec3_obj::dispose( ){
{
		HX_STACK_FRAME("Vec3","dispose","Vec3.dispose","nape/geom/Vec3.hx",406)
		HX_STACK_THIS(this)
		HX_STACK_LINE(409)
		if ((this->zpp_disp)){
			HX_STACK_LINE(409)
			HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(413)
		if ((this->zpp_inner->immutable)){
			HX_STACK_LINE(414)
			HX_STACK_DO_THROW(HX_CSTRING("Error: This Vec3 is not disposable"));
		}
		HX_STACK_LINE(417)
		{
			HX_STACK_LINE(418)
			::nape::geom::Vec3 o = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(428)
			o->zpp_pool = null();
			HX_STACK_LINE(429)
			if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec3 != null()))){
				HX_STACK_LINE(429)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec3->zpp_pool = o;
			}
			else{
				HX_STACK_LINE(430)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec3 = o;
			}
			HX_STACK_LINE(431)
			::zpp_nape::util::ZPP_PubPool_obj::nextVec3 = o;
			HX_STACK_LINE(441)
			o->zpp_disp = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vec3_obj,dispose,(void))

Float Vec3_obj::set_z( Float z){
	HX_STACK_FRAME("Vec3","set_z","Vec3.set_z","nape/geom/Vec3.hx",296)
	HX_STACK_THIS(this)
	HX_STACK_ARG(z,"z")
	HX_STACK_LINE(297)
	{
		HX_STACK_LINE(300)
		if ((this->zpp_disp)){
			HX_STACK_LINE(300)
			HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(304)
		if ((this->zpp_inner->immutable)){
			HX_STACK_LINE(305)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 is immutable"));
		}
		HX_STACK_LINE(308)
		this->zpp_inner->z = z;
	}
	HX_STACK_LINE(310)
	if ((this->zpp_disp)){
		HX_STACK_LINE(310)
		HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(310)
	{
		HX_STACK_LINE(310)
		::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(310)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(310)
			_this->_validate();
		}
	}
	HX_STACK_LINE(310)
	return this->zpp_inner->z;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec3_obj,set_z,return )

Float Vec3_obj::get_z( ){
	HX_STACK_FRAME("Vec3","get_z","Vec3.get_z","nape/geom/Vec3.hx",287)
	HX_STACK_THIS(this)
	HX_STACK_LINE(290)
	if ((this->zpp_disp)){
		HX_STACK_LINE(290)
		HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(293)
	{
		HX_STACK_LINE(293)
		::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(293)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(293)
			_this->_validate();
		}
	}
	HX_STACK_LINE(294)
	return this->zpp_inner->z;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec3_obj,get_z,return )

Float Vec3_obj::set_y( Float y){
	HX_STACK_FRAME("Vec3","set_y","Vec3.set_y","nape/geom/Vec3.hx",265)
	HX_STACK_THIS(this)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(266)
	{
		HX_STACK_LINE(269)
		if ((this->zpp_disp)){
			HX_STACK_LINE(269)
			HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(273)
		if ((this->zpp_inner->immutable)){
			HX_STACK_LINE(274)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 is immutable"));
		}
		HX_STACK_LINE(277)
		this->zpp_inner->y = y;
	}
	HX_STACK_LINE(279)
	if ((this->zpp_disp)){
		HX_STACK_LINE(279)
		HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(279)
	{
		HX_STACK_LINE(279)
		::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(279)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(279)
			_this->_validate();
		}
	}
	HX_STACK_LINE(279)
	return this->zpp_inner->y;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec3_obj,set_y,return )

Float Vec3_obj::get_y( ){
	HX_STACK_FRAME("Vec3","get_y","Vec3.get_y","nape/geom/Vec3.hx",256)
	HX_STACK_THIS(this)
	HX_STACK_LINE(259)
	if ((this->zpp_disp)){
		HX_STACK_LINE(259)
		HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(262)
	{
		HX_STACK_LINE(262)
		::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(262)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(262)
			_this->_validate();
		}
	}
	HX_STACK_LINE(263)
	return this->zpp_inner->y;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec3_obj,get_y,return )

Float Vec3_obj::set_x( Float x){
	HX_STACK_FRAME("Vec3","set_x","Vec3.set_x","nape/geom/Vec3.hx",234)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(235)
	{
		HX_STACK_LINE(238)
		if ((this->zpp_disp)){
			HX_STACK_LINE(238)
			HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(242)
		if ((this->zpp_inner->immutable)){
			HX_STACK_LINE(243)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 is immutable"));
		}
		HX_STACK_LINE(246)
		this->zpp_inner->x = x;
	}
	HX_STACK_LINE(248)
	if ((this->zpp_disp)){
		HX_STACK_LINE(248)
		HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(248)
	{
		HX_STACK_LINE(248)
		::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(248)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(248)
			_this->_validate();
		}
	}
	HX_STACK_LINE(248)
	return this->zpp_inner->x;
}


HX_DEFINE_DYNAMIC_FUNC1(Vec3_obj,set_x,return )

Float Vec3_obj::get_x( ){
	HX_STACK_FRAME("Vec3","get_x","Vec3.get_x","nape/geom/Vec3.hx",225)
	HX_STACK_THIS(this)
	HX_STACK_LINE(228)
	if ((this->zpp_disp)){
		HX_STACK_LINE(228)
		HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(231)
	{
		HX_STACK_LINE(231)
		::zpp_nape::geom::ZPP_Vec3 _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(231)
		if (((_this->_validate != null()))){
			HX_STACK_LINE(231)
			_this->_validate();
		}
	}
	HX_STACK_LINE(232)
	return this->zpp_inner->x;
}


HX_DEFINE_DYNAMIC_FUNC0(Vec3_obj,get_x,return )

::nape::geom::Vec3 Vec3_obj::get( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float z = __o_z.Default(0);
	HX_STACK_FRAME("Vec3","get","Vec3.get","nape/geom/Vec3.hx",322)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
{
		HX_STACK_LINE(323)
		::nape::geom::Vec3 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(325)
		if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec3 == null()))){
			HX_STACK_LINE(326)
			ret = ::nape::geom::Vec3_obj::__new(null(),null(),null());
		}
		else{
			HX_STACK_LINE(332)
			ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec3;
			HX_STACK_LINE(333)
			::zpp_nape::util::ZPP_PubPool_obj::poolVec3 = ret->zpp_pool;
			HX_STACK_LINE(334)
			ret->zpp_pool = null();
			HX_STACK_LINE(336)
			ret->zpp_disp = false;
			HX_STACK_LINE(337)
			if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec3))){
				HX_STACK_LINE(337)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec3 = null();
			}
		}
		HX_STACK_LINE(344)
		ret->setxyz(x,y,z);
		HX_STACK_LINE(345)
		ret->zpp_inner->immutable = false;
		HX_STACK_LINE(346)
		ret->zpp_inner->_validate = null();
		HX_STACK_LINE(347)
		return ret;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vec3_obj,get,return )


Vec3_obj::Vec3_obj()
{
}

void Vec3_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Vec3);
	HX_MARK_MEMBER_NAME(zpp_disp,"zpp_disp");
	HX_MARK_MEMBER_NAME(zpp_pool,"zpp_pool");
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Vec3_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_disp,"zpp_disp");
	HX_VISIT_MEMBER_NAME(zpp_pool,"zpp_pool");
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic Vec3_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"z") ) { return get_z(); }
		if (HX_FIELD_EQ(inName,"y") ) { return get_y(); }
		if (HX_FIELD_EQ(inName,"x") ) { return get_x(); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"xy") ) { return xy_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"lsq") ) { return lsq_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_z") ) { return set_z_dyn(); }
		if (HX_FIELD_EQ(inName,"get_z") ) { return get_z_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"setxyz") ) { return setxyz_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return get_length(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_disp") ) { return zpp_disp; }
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_length") ) { return set_length_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Vec3_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"z") ) { return set_z(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { return set_y(inValue); }
		if (HX_FIELD_EQ(inName,"x") ) { return set_x(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return set_length(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_disp") ) { zpp_disp=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::nape::geom::Vec3 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_Vec3 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vec3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("z"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("zpp_disp"));
	outFields->push(HX_CSTRING("zpp_pool"));
	outFields->push(HX_CSTRING("zpp_inner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("xy"),
	HX_CSTRING("setxyz"),
	HX_CSTRING("set"),
	HX_CSTRING("lsq"),
	HX_CSTRING("set_length"),
	HX_CSTRING("get_length"),
	HX_CSTRING("dispose"),
	HX_CSTRING("set_z"),
	HX_CSTRING("get_z"),
	HX_CSTRING("set_y"),
	HX_CSTRING("get_y"),
	HX_CSTRING("set_x"),
	HX_CSTRING("get_x"),
	HX_CSTRING("zpp_disp"),
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("zpp_inner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vec3_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vec3_obj::__mClass,"__mClass");
};

#endif

Class Vec3_obj::__mClass;

void Vec3_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.geom.Vec3"), hx::TCanCast< Vec3_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void Vec3_obj::__boot()
{
}

} // end namespace nape
} // end namespace geom
