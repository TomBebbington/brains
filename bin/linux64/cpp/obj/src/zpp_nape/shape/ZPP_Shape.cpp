#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_FluidProperties
#include <zpp_nape/phys/ZPP_FluidProperties.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Material
#include <zpp_nape/phys/ZPP_Material.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Circle
#include <zpp_nape/shape/ZPP_Circle.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBNode
#include <zpp_nape/space/ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_SweepData
#include <zpp_nape/space/ZPP_SweepData.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_AABBPair
#include <zpp_nape/util/ZNPList_ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace zpp_nape{
namespace shape{

Void ZPP_Shape_obj::__construct(int type)
{
HX_STACK_FRAME("ZPP_Shape","new","ZPP_Shape.new","zpp_nape/shape/Shape.hx",174)

HX_STACK_ARG(type,"type")
{
	HX_STACK_LINE(230)
	this->zip_aabb = false;
	HX_STACK_LINE(229)
	this->aabb = null();
	HX_STACK_LINE(224)
	this->pairs = null();
	HX_STACK_LINE(223)
	this->node = null();
	HX_STACK_LINE(222)
	this->sweep = null();
	HX_STACK_LINE(221)
	this->sensorEnabled = false;
	HX_STACK_LINE(220)
	this->fluidEnabled = false;
	HX_STACK_LINE(219)
	this->fluidProperties = null();
	HX_STACK_LINE(218)
	this->filter = null();
	HX_STACK_LINE(217)
	this->material = null();
	HX_STACK_LINE(216)
	this->refmaterial = null();
	HX_STACK_LINE(215)
	this->polygon = null();
	HX_STACK_LINE(214)
	this->circle = null();
	HX_STACK_LINE(201)
	this->sweepCoef = 0.0;
	HX_STACK_LINE(200)
	this->zip_sweepRadius = false;
	HX_STACK_LINE(199)
	this->sweepRadius = 0.0;
	HX_STACK_LINE(198)
	this->wrap_worldCOM = null();
	HX_STACK_LINE(197)
	this->wrap_localCOM = null();
	HX_STACK_LINE(196)
	this->zip_worldCOM = false;
	HX_STACK_LINE(195)
	this->worldCOMy = 0.0;
	HX_STACK_LINE(194)
	this->worldCOMx = 0.0;
	HX_STACK_LINE(193)
	this->zip_localCOM = false;
	HX_STACK_LINE(192)
	this->localCOMy = 0.0;
	HX_STACK_LINE(191)
	this->localCOMx = 0.0;
	HX_STACK_LINE(190)
	this->zip_angDrag = false;
	HX_STACK_LINE(189)
	this->angDrag = 0.0;
	HX_STACK_LINE(188)
	this->inertia = 0.0;
	HX_STACK_LINE(187)
	this->zip_area_inertia = false;
	HX_STACK_LINE(186)
	this->area = 0.0;
	HX_STACK_LINE(177)
	this->type = (int)0;
	HX_STACK_LINE(176)
	this->body = null();
	HX_STACK_LINE(175)
	this->outer = null();
	HX_STACK_LINE(391)
	super::__construct();
	HX_STACK_LINE(392)
	this->pairs = ::zpp_nape::util::ZNPList_ZPP_AABBPair_obj::__new();
	HX_STACK_LINE(393)
	this->ishape = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(394)
	this->type = type;
	HX_STACK_LINE(395)
	{
		HX_STACK_LINE(395)
		::zpp_nape::geom::ZPP_AABB ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(395)
		{
			HX_STACK_LINE(395)
			if (((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool == null()))){
				HX_STACK_LINE(395)
				ret = ::zpp_nape::geom::ZPP_AABB_obj::__new();
			}
			else{
				HX_STACK_LINE(395)
				ret = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
				HX_STACK_LINE(395)
				::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = ret->next;
				HX_STACK_LINE(395)
				ret->next = null();
			}
			HX_STACK_LINE(395)
			Dynamic();
		}
		HX_STACK_LINE(395)
		{
			HX_STACK_LINE(395)
			ret->minx = (int)0;
			HX_STACK_LINE(395)
			ret->miny = (int)0;
			HX_STACK_LINE(395)
			{
			}
		}
		HX_STACK_LINE(395)
		{
			HX_STACK_LINE(395)
			ret->maxx = (int)0;
			HX_STACK_LINE(395)
			ret->maxy = (int)0;
			HX_STACK_LINE(395)
			{
			}
		}
		HX_STACK_LINE(395)
		this->aabb = ret;
	}
	HX_STACK_LINE(396)
	this->aabb->_immutable = true;
	HX_STACK_LINE(397)
	::zpp_nape::shape::ZPP_Shape me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
	HX_STACK_LINE(398)
	this->aabb->_validate = this->aabb_validate_dyn();
	HX_STACK_LINE(399)
	this->zip_area_inertia = this->zip_angDrag = this->zip_localCOM = this->zip_sweepRadius = true;
	HX_STACK_LINE(400)
	{
		HX_STACK_LINE(401)
		this->localCOMx = (int)0;
		HX_STACK_LINE(402)
		this->localCOMy = (int)0;
		HX_STACK_LINE(411)
		{
		}
	}
	HX_STACK_LINE(420)
	{
		HX_STACK_LINE(421)
		this->worldCOMx = (int)0;
		HX_STACK_LINE(422)
		this->worldCOMy = (int)0;
		HX_STACK_LINE(431)
		{
		}
	}
	HX_STACK_LINE(440)
	this->fluidEnabled = false;
	HX_STACK_LINE(441)
	this->sensorEnabled = false;
	HX_STACK_LINE(442)
	this->fluidProperties = null();
	HX_STACK_LINE(443)
	this->body = null();
	HX_STACK_LINE(444)
	this->refmaterial = ::zpp_nape::phys::ZPP_Material_obj::__new();
	HX_STACK_LINE(445)
	this->sweepRadius = this->sweepCoef = (int)0;
}
;
	return null();
}

ZPP_Shape_obj::~ZPP_Shape_obj() { }

Dynamic ZPP_Shape_obj::__CreateEmpty() { return  new ZPP_Shape_obj; }
hx::ObjectPtr< ZPP_Shape_obj > ZPP_Shape_obj::__new(int type)
{  hx::ObjectPtr< ZPP_Shape_obj > result = new ZPP_Shape_obj();
	result->__construct(type);
	return result;}

Dynamic ZPP_Shape_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Shape_obj > result = new ZPP_Shape_obj();
	result->__construct(inArgs[0]);
	return result;}

::nape::shape::Shape ZPP_Shape_obj::copy( ){
	HX_STACK_FRAME("ZPP_Shape","copy","ZPP_Shape.copy","zpp_nape/shape/Shape.hx",500)
	HX_STACK_THIS(this)
	HX_STACK_LINE(501)
	::zpp_nape::shape::ZPP_Shape ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(502)
	if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
		HX_STACK_LINE(502)
		ret = this->circle->__copy();
	}
	else{
		HX_STACK_LINE(503)
		ret = this->polygon->__copy();
	}
	HX_STACK_LINE(504)
	if ((!(this->zip_area_inertia))){
		HX_STACK_LINE(505)
		ret->area = this->area;
		HX_STACK_LINE(506)
		ret->inertia = this->inertia;
	}
	else{
		HX_STACK_LINE(508)
		ret->invalidate_area_inertia();
	}
	HX_STACK_LINE(509)
	if ((!(this->zip_sweepRadius))){
		HX_STACK_LINE(510)
		ret->sweepRadius = this->sweepRadius;
		HX_STACK_LINE(511)
		ret->sweepCoef = this->sweepCoef;
	}
	else{
		HX_STACK_LINE(513)
		ret->zip_sweepRadius = true;
	}
	HX_STACK_LINE(514)
	if ((!(this->zip_angDrag))){
		HX_STACK_LINE(514)
		ret->angDrag = this->angDrag;
	}
	else{
		HX_STACK_LINE(515)
		ret->invalidate_angDrag();
	}
	HX_STACK_LINE(516)
	if ((!(this->zip_aabb))){
		HX_STACK_LINE(517)
		{
			HX_STACK_LINE(518)
			ret->aabb->minx = this->aabb->minx;
			HX_STACK_LINE(519)
			ret->aabb->miny = this->aabb->miny;
			HX_STACK_LINE(528)
			{
			}
		}
		HX_STACK_LINE(537)
		{
			HX_STACK_LINE(538)
			ret->aabb->maxx = this->aabb->maxx;
			HX_STACK_LINE(539)
			ret->aabb->maxy = this->aabb->maxy;
			HX_STACK_LINE(548)
			{
			}
		}
	}
	else{
		HX_STACK_LINE(558)
		ret->zip_aabb = true;
		HX_STACK_LINE(558)
		if (((ret->body != null()))){
			HX_STACK_LINE(558)
			ret->body->zip_aabb = true;
		}
	}
	HX_STACK_LINE(559)
	{
		HX_STACK_LINE(560)
		::zpp_nape::phys::ZPP_Material o = ret->material;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(569)
		o->outer = null();
		HX_STACK_LINE(570)
		o->next = ::zpp_nape::phys::ZPP_Material_obj::zpp_pool;
		HX_STACK_LINE(571)
		::zpp_nape::phys::ZPP_Material_obj::zpp_pool = o;
	}
	HX_STACK_LINE(576)
	{
		HX_STACK_LINE(577)
		::zpp_nape::dynamics::ZPP_InteractionFilter o = ret->filter;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(586)
		o->outer = null();
		HX_STACK_LINE(587)
		o->next = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool;
		HX_STACK_LINE(588)
		::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool = o;
	}
	HX_STACK_LINE(593)
	ret->material = this->material;
	HX_STACK_LINE(594)
	ret->filter = this->filter;
	HX_STACK_LINE(595)
	if (((this->fluidProperties != null()))){
		HX_STACK_LINE(595)
		ret->fluidProperties = this->fluidProperties;
	}
	HX_STACK_LINE(596)
	ret->fluidEnabled = this->fluidEnabled;
	HX_STACK_LINE(597)
	ret->sensorEnabled = this->sensorEnabled;
	HX_STACK_LINE(598)
	if (((this->userData != null()))){
		HX_STACK_LINE(598)
		ret->userData = ::Reflect_obj::copy(this->userData);
	}
	HX_STACK_LINE(599)
	this->copyto(ret->outer);
	HX_STACK_LINE(600)
	return ret->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,copy,return )

Void ZPP_Shape_obj::removedFromSpace( ){
{
		HX_STACK_FRAME("ZPP_Shape","removedFromSpace","ZPP_Shape.removedFromSpace","zpp_nape/shape/Shape.hx",494)
		HX_STACK_THIS(this)
		HX_STACK_LINE(495)
		this->__iremovedFromSpace();
		HX_STACK_LINE(496)
		this->material->shapes->remove(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(497)
		this->filter->shapes->remove(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(498)
		if (((this->fluidProperties != null()))){
			HX_STACK_LINE(498)
			this->fluidProperties->shapes->remove(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,removedFromSpace,(void))

Void ZPP_Shape_obj::addedToSpace( ){
{
		HX_STACK_FRAME("ZPP_Shape","addedToSpace","ZPP_Shape.addedToSpace","zpp_nape/shape/Shape.hx",488)
		HX_STACK_THIS(this)
		HX_STACK_LINE(489)
		this->__iaddedToSpace();
		HX_STACK_LINE(490)
		this->material->shapes->add(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(491)
		this->filter->shapes->add(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(492)
		if (((this->fluidProperties != null()))){
			HX_STACK_LINE(492)
			this->fluidProperties->shapes->add(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,addedToSpace,(void))

Void ZPP_Shape_obj::removedFromBody( ){
{
		HX_STACK_FRAME("ZPP_Shape","removedFromBody","ZPP_Shape.removedFromBody","zpp_nape/shape/Shape.hx",487)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,removedFromBody,(void))

Void ZPP_Shape_obj::addedToBody( ){
{
		HX_STACK_FRAME("ZPP_Shape","addedToBody","ZPP_Shape.addedToBody","zpp_nape/shape/Shape.hx",483)
		HX_STACK_THIS(this)
		HX_STACK_LINE(484)
		this->invalidate_worldCOM();
		HX_STACK_LINE(485)
		{
			HX_STACK_LINE(485)
			this->zip_aabb = true;
			HX_STACK_LINE(485)
			if (((this->body != null()))){
				HX_STACK_LINE(485)
				this->body->zip_aabb = true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,addedToBody,(void))

Void ZPP_Shape_obj::__immutable_midstep( ::String name){
{
		HX_STACK_FRAME("ZPP_Shape","__immutable_midstep","ZPP_Shape.__immutable_midstep","zpp_nape/shape/Shape.hx",480)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(480)
		if (((bool((bool((this->body != null())) && bool((this->body->space != null())))) && bool(this->body->space->midstep)))){
			HX_STACK_LINE(480)
			HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + name) + HX_CSTRING(" cannot be set during a space step()")));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Shape_obj,__immutable_midstep,(void))

Void ZPP_Shape_obj::setFluid( ::zpp_nape::phys::ZPP_FluidProperties fluid){
{
		HX_STACK_FRAME("ZPP_Shape","setFluid","ZPP_Shape.setFluid","zpp_nape/shape/Shape.hx",469)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fluid,"fluid")
		HX_STACK_LINE(469)
		if (((this->fluidProperties != fluid))){
			HX_STACK_LINE(470)
			if (((bool((this->body != null())) && bool((this->body->space != null()))))){
				HX_STACK_LINE(471)
				if (((this->fluidProperties != null()))){
					HX_STACK_LINE(471)
					this->fluidProperties->shapes->remove(hx::ObjectPtr<OBJ_>(this));
				}
			}
			HX_STACK_LINE(473)
			this->fluidProperties = fluid;
			HX_STACK_LINE(474)
			if (((bool((this->body != null())) && bool((this->body->space != null()))))){
				HX_STACK_LINE(474)
				fluid->shapes->add(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(475)
			if ((this->fluidEnabled)){
				HX_STACK_LINE(475)
				this->wake();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Shape_obj,setFluid,(void))

Void ZPP_Shape_obj::setFilter( ::zpp_nape::dynamics::ZPP_InteractionFilter filter){
{
		HX_STACK_FRAME("ZPP_Shape","setFilter","ZPP_Shape.setFilter","zpp_nape/shape/Shape.hx",459)
		HX_STACK_THIS(this)
		HX_STACK_ARG(filter,"filter")
		HX_STACK_LINE(459)
		if (((this->filter != filter))){
			HX_STACK_LINE(460)
			if (((bool((this->body != null())) && bool((this->body->space != null()))))){
				HX_STACK_LINE(461)
				if (((this->filter != null()))){
					HX_STACK_LINE(461)
					this->filter->shapes->remove(hx::ObjectPtr<OBJ_>(this));
				}
			}
			HX_STACK_LINE(463)
			this->filter = filter;
			HX_STACK_LINE(464)
			if (((bool((this->body != null())) && bool((this->body->space != null()))))){
				HX_STACK_LINE(464)
				filter->shapes->add(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(465)
			this->wake();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Shape_obj,setFilter,(void))

Void ZPP_Shape_obj::setMaterial( ::zpp_nape::phys::ZPP_Material material){
{
		HX_STACK_FRAME("ZPP_Shape","setMaterial","ZPP_Shape.setMaterial","zpp_nape/shape/Shape.hx",448)
		HX_STACK_THIS(this)
		HX_STACK_ARG(material,"material")
		HX_STACK_LINE(448)
		if (((this->material != material))){
			HX_STACK_LINE(449)
			if (((bool((this->body != null())) && bool((this->body->space != null()))))){
				HX_STACK_LINE(450)
				if (((this->material != null()))){
					HX_STACK_LINE(450)
					this->material->shapes->remove(hx::ObjectPtr<OBJ_>(this));
				}
			}
			HX_STACK_LINE(452)
			this->material = material;
			HX_STACK_LINE(453)
			if (((bool((this->body != null())) && bool((this->body->space != null()))))){
				HX_STACK_LINE(453)
				material->shapes->add(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(454)
			this->wake();
			HX_STACK_LINE(455)
			if (((this->body != null()))){
				HX_STACK_LINE(455)
				this->body->refreshArbiters();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Shape_obj,setMaterial,(void))

Void ZPP_Shape_obj::aabb_validate( ){
{
		HX_STACK_FRAME("ZPP_Shape","aabb_validate","ZPP_Shape.aabb_validate","zpp_nape/shape/Shape.hx",384)
		HX_STACK_THIS(this)
		HX_STACK_LINE(386)
		if (((this->body == null()))){
			HX_STACK_LINE(386)
			HX_STACK_DO_THROW(HX_CSTRING("Error: bounds only makes sense when Shape belongs to a Body"));
		}
		HX_STACK_LINE(388)
		if ((this->zip_aabb)){
			HX_STACK_LINE(388)
			if (((this->body != null()))){
				HX_STACK_LINE(388)
				this->zip_aabb = false;
				HX_STACK_LINE(388)
				if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
					HX_STACK_LINE(388)
					::zpp_nape::shape::ZPP_Circle _this = this->circle;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(388)
					if ((_this->zip_worldCOM)){
						HX_STACK_LINE(388)
						if (((_this->body != null()))){
							HX_STACK_LINE(388)
							_this->zip_worldCOM = false;
							HX_STACK_LINE(388)
							if ((_this->zip_localCOM)){
								HX_STACK_LINE(388)
								_this->zip_localCOM = false;
								HX_STACK_LINE(388)
								if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
									HX_STACK_LINE(388)
									::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(388)
									if (((_this1->lverts->next == null()))){
										HX_STACK_LINE(388)
										HX_STACK_DO_THROW(HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
									}
									HX_STACK_LINE(388)
									if (((_this1->lverts->next->next == null()))){
										HX_STACK_LINE(388)
										_this1->localCOMx = _this1->lverts->next->x;
										HX_STACK_LINE(388)
										_this1->localCOMy = _this1->lverts->next->y;
										HX_STACK_LINE(388)
										Dynamic();
									}
									else{
										HX_STACK_LINE(388)
										if (((_this1->lverts->next->next->next == null()))){
											HX_STACK_LINE(388)
											{
												HX_STACK_LINE(388)
												_this1->localCOMx = _this1->lverts->next->x;
												HX_STACK_LINE(388)
												_this1->localCOMy = _this1->lverts->next->y;
												HX_STACK_LINE(388)
												{
												}
											}
											HX_STACK_LINE(388)
											{
												HX_STACK_LINE(388)
												Float t = 1.0;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(388)
												hx::AddEq(_this1->localCOMx,(_this1->lverts->next->next->x * t));
												HX_STACK_LINE(388)
												hx::AddEq(_this1->localCOMy,(_this1->lverts->next->next->y * t));
											}
											HX_STACK_LINE(388)
											{
												HX_STACK_LINE(388)
												Float t = 0.5;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(388)
												hx::MultEq(_this1->localCOMx,t);
												HX_STACK_LINE(388)
												hx::MultEq(_this1->localCOMy,t);
											}
										}
										else{
											HX_STACK_LINE(388)
											{
												HX_STACK_LINE(388)
												_this1->localCOMx = (int)0;
												HX_STACK_LINE(388)
												_this1->localCOMy = (int)0;
												HX_STACK_LINE(388)
												{
												}
											}
											HX_STACK_LINE(388)
											Float area = 0.0;		HX_STACK_VAR(area,"area");
											HX_STACK_LINE(388)
											{
												HX_STACK_LINE(388)
												::zpp_nape::geom::ZPP_Vec2 cx_ite = _this1->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
												HX_STACK_LINE(388)
												::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
												HX_STACK_LINE(388)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(388)
												::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(388)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(388)
												while(((cx_ite != null()))){
													HX_STACK_LINE(388)
													::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
													HX_STACK_LINE(388)
													{
														HX_STACK_LINE(388)
														hx::AddEq(area,(v->x * ((w->y - u->y))));
														HX_STACK_LINE(388)
														Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
														HX_STACK_LINE(388)
														hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
														HX_STACK_LINE(388)
														hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
													}
													HX_STACK_LINE(388)
													u = v;
													HX_STACK_LINE(388)
													v = w;
													HX_STACK_LINE(388)
													cx_ite = cx_ite->next;
												}
												HX_STACK_LINE(388)
												cx_ite = _this1->lverts->next;
												HX_STACK_LINE(388)
												::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
												HX_STACK_LINE(388)
												{
													HX_STACK_LINE(388)
													hx::AddEq(area,(v->x * ((w->y - u->y))));
													HX_STACK_LINE(388)
													Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(388)
													hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
													HX_STACK_LINE(388)
													hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
												}
												HX_STACK_LINE(388)
												u = v;
												HX_STACK_LINE(388)
												v = w;
												HX_STACK_LINE(388)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(388)
												::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
												HX_STACK_LINE(388)
												{
													HX_STACK_LINE(388)
													hx::AddEq(area,(v->x * ((w1->y - u->y))));
													HX_STACK_LINE(388)
													Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(388)
													hx::AddEq(_this1->localCOMx,(((v->x + w1->x)) * cf));
													HX_STACK_LINE(388)
													hx::AddEq(_this1->localCOMy,(((v->y + w1->y)) * cf));
												}
											}
											HX_STACK_LINE(388)
											area = (Float((int)1) / Float((((int)3 * area))));
											HX_STACK_LINE(388)
											{
												HX_STACK_LINE(388)
												Float t = area;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(388)
												hx::MultEq(_this1->localCOMx,t);
												HX_STACK_LINE(388)
												hx::MultEq(_this1->localCOMy,t);
											}
										}
									}
								}
								HX_STACK_LINE(388)
								if (((_this->wrap_localCOM != null()))){
									HX_STACK_LINE(388)
									_this->wrap_localCOM->zpp_inner->x = _this->localCOMx;
									HX_STACK_LINE(388)
									_this->wrap_localCOM->zpp_inner->y = _this->localCOMy;
									HX_STACK_LINE(388)
									{
									}
								}
							}
							HX_STACK_LINE(388)
							{
								HX_STACK_LINE(388)
								::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(388)
								if ((_this1->zip_axis)){
									HX_STACK_LINE(388)
									_this1->zip_axis = false;
									HX_STACK_LINE(388)
									{
										HX_STACK_LINE(388)
										_this1->axisx = ::Math_obj::sin(_this1->rot);
										HX_STACK_LINE(388)
										_this1->axisy = ::Math_obj::cos(_this1->rot);
										HX_STACK_LINE(388)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(388)
							{
								HX_STACK_LINE(388)
								_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
								HX_STACK_LINE(388)
								_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
							}
						}
					}
					HX_STACK_LINE(388)
					Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
					HX_STACK_LINE(388)
					Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
					HX_STACK_LINE(388)
					{
						HX_STACK_LINE(388)
						_this->aabb->minx = (_this->worldCOMx - rx);
						HX_STACK_LINE(388)
						_this->aabb->miny = (_this->worldCOMy - ry);
					}
					HX_STACK_LINE(388)
					{
						HX_STACK_LINE(388)
						_this->aabb->maxx = (_this->worldCOMx + rx);
						HX_STACK_LINE(388)
						_this->aabb->maxy = (_this->worldCOMy + ry);
					}
				}
				else{
					HX_STACK_LINE(388)
					::zpp_nape::shape::ZPP_Polygon _this = this->polygon;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(388)
					if ((_this->zip_gverts)){
						HX_STACK_LINE(388)
						if (((_this->body != null()))){
							HX_STACK_LINE(388)
							_this->zip_gverts = false;
							HX_STACK_LINE(388)
							_this->validate_lverts();
							HX_STACK_LINE(388)
							{
								HX_STACK_LINE(388)
								::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(388)
								if ((_this1->zip_axis)){
									HX_STACK_LINE(388)
									_this1->zip_axis = false;
									HX_STACK_LINE(388)
									{
										HX_STACK_LINE(388)
										_this1->axisx = ::Math_obj::sin(_this1->rot);
										HX_STACK_LINE(388)
										_this1->axisy = ::Math_obj::cos(_this1->rot);
										HX_STACK_LINE(388)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(388)
							::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
							HX_STACK_LINE(388)
							{
								HX_STACK_LINE(388)
								::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(388)
								while(((cx_ite != null()))){
									HX_STACK_LINE(388)
									::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(388)
									{
										HX_STACK_LINE(388)
										::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
										HX_STACK_LINE(388)
										li = li->next;
										HX_STACK_LINE(388)
										{
											HX_STACK_LINE(388)
											g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
											HX_STACK_LINE(388)
											g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
										}
									}
									HX_STACK_LINE(388)
									cx_ite = cx_ite->next;
								}
							}
						}
					}
					HX_STACK_LINE(388)
					if (((_this->lverts->next == null()))){
						HX_STACK_LINE(388)
						HX_STACK_DO_THROW(HX_CSTRING("Error: An empty polygon has no meaningful bounds"));
					}
					HX_STACK_LINE(388)
					::zpp_nape::geom::ZPP_Vec2 p0 = _this->gverts->next;		HX_STACK_VAR(p0,"p0");
					HX_STACK_LINE(388)
					{
						HX_STACK_LINE(388)
						_this->aabb->minx = p0->x;
						HX_STACK_LINE(388)
						_this->aabb->miny = p0->y;
						HX_STACK_LINE(388)
						{
						}
					}
					HX_STACK_LINE(388)
					{
						HX_STACK_LINE(388)
						_this->aabb->maxx = p0->x;
						HX_STACK_LINE(388)
						_this->aabb->maxy = p0->y;
						HX_STACK_LINE(388)
						{
						}
					}
					HX_STACK_LINE(388)
					{
						HX_STACK_LINE(388)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(388)
						while(((cx_ite != null()))){
							HX_STACK_LINE(388)
							::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(388)
							{
								HX_STACK_LINE(388)
								if (((p->x < _this->aabb->minx))){
									HX_STACK_LINE(388)
									_this->aabb->minx = p->x;
								}
								HX_STACK_LINE(388)
								if (((p->x > _this->aabb->maxx))){
									HX_STACK_LINE(388)
									_this->aabb->maxx = p->x;
								}
								HX_STACK_LINE(388)
								if (((p->y < _this->aabb->miny))){
									HX_STACK_LINE(388)
									_this->aabb->miny = p->y;
								}
								HX_STACK_LINE(388)
								if (((p->y > _this->aabb->maxy))){
									HX_STACK_LINE(388)
									_this->aabb->maxy = p->y;
								}
							}
							HX_STACK_LINE(388)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,aabb_validate,(void))

Void ZPP_Shape_obj::invalidate_fluidprops( ){
{
		HX_STACK_FRAME("ZPP_Shape","invalidate_fluidprops","ZPP_Shape.invalidate_fluidprops","zpp_nape/shape/Shape.hx",382)
		HX_STACK_THIS(this)
		HX_STACK_LINE(382)
		if ((this->fluidEnabled)){
			HX_STACK_LINE(382)
			this->wake();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,invalidate_fluidprops,(void))

Void ZPP_Shape_obj::invalidate_filter( ){
{
		HX_STACK_FRAME("ZPP_Shape","invalidate_filter","ZPP_Shape.invalidate_filter","zpp_nape/shape/Shape.hx",379)
		HX_STACK_THIS(this)
		HX_STACK_LINE(379)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,invalidate_filter,(void))

Void ZPP_Shape_obj::invalidate_material( int flags){
{
		HX_STACK_FRAME("ZPP_Shape","invalidate_material","ZPP_Shape.invalidate_material","zpp_nape/shape/Shape.hx",361)
		HX_STACK_THIS(this)
		HX_STACK_ARG(flags,"flags")
		HX_STACK_LINE(362)
		if (((((int(flags) & int(::zpp_nape::phys::ZPP_Material_obj::WAKE))) != (int)0))){
			HX_STACK_LINE(362)
			this->wake();
		}
		HX_STACK_LINE(363)
		if (((((int(flags) & int(::zpp_nape::phys::ZPP_Material_obj::ARBITERS))) != (int)0))){
			HX_STACK_LINE(364)
			if (((this->body != null()))){
				HX_STACK_LINE(364)
				this->body->refreshArbiters();
			}
		}
		HX_STACK_LINE(366)
		if (((((int(flags) & int(::zpp_nape::phys::ZPP_Material_obj::PROPS))) != (int)0))){
			HX_STACK_LINE(367)
			if (((this->body != null()))){
				HX_STACK_LINE(368)
				{
					HX_STACK_LINE(368)
					::zpp_nape::phys::ZPP_Body _this = this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(368)
					_this->zip_localCOM = true;
					HX_STACK_LINE(368)
					_this->zip_worldCOM = true;
				}
				HX_STACK_LINE(369)
				this->body->invalidate_mass();
				HX_STACK_LINE(370)
				this->body->invalidate_inertia();
			}
		}
		HX_STACK_LINE(373)
		if (((((int(flags) & int(::zpp_nape::phys::ZPP_Material_obj::ANGDRAG))) != (int)0))){
			HX_STACK_LINE(374)
			this->invalidate_angDrag();
		}
		HX_STACK_LINE(376)
		this->refmaterial->set(this->material);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Shape_obj,invalidate_material,(void))

Void ZPP_Shape_obj::invalidate_worldCOM( ){
{
		HX_STACK_FRAME("ZPP_Shape","invalidate_worldCOM","ZPP_Shape.invalidate_worldCOM","zpp_nape/shape/Shape.hx",357)
		HX_STACK_THIS(this)
		HX_STACK_LINE(358)
		this->zip_worldCOM = true;
		HX_STACK_LINE(359)
		{
			HX_STACK_LINE(359)
			this->zip_aabb = true;
			HX_STACK_LINE(359)
			if (((this->body != null()))){
				HX_STACK_LINE(359)
				this->body->zip_aabb = true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,invalidate_worldCOM,(void))

Void ZPP_Shape_obj::invalidate_localCOM( ){
{
		HX_STACK_FRAME("ZPP_Shape","invalidate_localCOM","ZPP_Shape.invalidate_localCOM","zpp_nape/shape/Shape.hx",349)
		HX_STACK_THIS(this)
		HX_STACK_LINE(350)
		this->zip_localCOM = true;
		HX_STACK_LINE(351)
		this->invalidate_area_inertia();
		HX_STACK_LINE(352)
		if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
			HX_STACK_LINE(352)
			this->zip_sweepRadius = true;
		}
		HX_STACK_LINE(353)
		this->invalidate_angDrag();
		HX_STACK_LINE(354)
		this->invalidate_worldCOM();
		HX_STACK_LINE(355)
		if (((this->body != null()))){
			HX_STACK_LINE(355)
			::zpp_nape::phys::ZPP_Body _this = this->body;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(355)
			_this->zip_localCOM = true;
			HX_STACK_LINE(355)
			_this->zip_worldCOM = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,invalidate_localCOM,(void))

Void ZPP_Shape_obj::invalidate_angDrag( ){
{
		HX_STACK_FRAME("ZPP_Shape","invalidate_angDrag","ZPP_Shape.invalidate_angDrag","zpp_nape/shape/Shape.hx",347)
		HX_STACK_THIS(this)
		HX_STACK_LINE(347)
		this->zip_angDrag = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,invalidate_angDrag,(void))

Void ZPP_Shape_obj::invalidate_area_inertia( ){
{
		HX_STACK_FRAME("ZPP_Shape","invalidate_area_inertia","ZPP_Shape.invalidate_area_inertia","zpp_nape/shape/Shape.hx",338)
		HX_STACK_THIS(this)
		HX_STACK_LINE(339)
		this->zip_area_inertia = true;
		HX_STACK_LINE(340)
		if (((this->body != null()))){
			HX_STACK_LINE(341)
			{
				HX_STACK_LINE(341)
				::zpp_nape::phys::ZPP_Body _this = this->body;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(341)
				_this->zip_localCOM = true;
				HX_STACK_LINE(341)
				_this->zip_worldCOM = true;
			}
			HX_STACK_LINE(342)
			this->body->invalidate_mass();
			HX_STACK_LINE(343)
			this->body->invalidate_inertia();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,invalidate_area_inertia,(void))

Void ZPP_Shape_obj::getworldCOM( ){
{
		HX_STACK_FRAME("ZPP_Shape","getworldCOM","ZPP_Shape.getworldCOM","zpp_nape/shape/Shape.hx",312)
		HX_STACK_THIS(this)
		HX_STACK_LINE(314)
		if (((this->body == null()))){
			HX_STACK_LINE(314)
			HX_STACK_DO_THROW(HX_CSTRING("Error: worldCOM only makes sense when Shape belongs to a Body"));
		}
		HX_STACK_LINE(316)
		if ((this->zip_worldCOM)){
			HX_STACK_LINE(316)
			if (((this->body != null()))){
				HX_STACK_LINE(316)
				this->zip_worldCOM = false;
				HX_STACK_LINE(316)
				if ((this->zip_localCOM)){
					HX_STACK_LINE(316)
					this->zip_localCOM = false;
					HX_STACK_LINE(316)
					if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
						HX_STACK_LINE(316)
						::zpp_nape::shape::ZPP_Polygon _this = this->polygon;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(316)
						if (((_this->lverts->next == null()))){
							HX_STACK_LINE(316)
							HX_STACK_DO_THROW(HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
						}
						HX_STACK_LINE(316)
						if (((_this->lverts->next->next == null()))){
							HX_STACK_LINE(316)
							_this->localCOMx = _this->lverts->next->x;
							HX_STACK_LINE(316)
							_this->localCOMy = _this->lverts->next->y;
							HX_STACK_LINE(316)
							Dynamic();
						}
						else{
							HX_STACK_LINE(316)
							if (((_this->lverts->next->next->next == null()))){
								HX_STACK_LINE(316)
								{
									HX_STACK_LINE(316)
									_this->localCOMx = _this->lverts->next->x;
									HX_STACK_LINE(316)
									_this->localCOMy = _this->lverts->next->y;
									HX_STACK_LINE(316)
									{
									}
								}
								HX_STACK_LINE(316)
								{
									HX_STACK_LINE(316)
									Float t = 1.0;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(316)
									hx::AddEq(_this->localCOMx,(_this->lverts->next->next->x * t));
									HX_STACK_LINE(316)
									hx::AddEq(_this->localCOMy,(_this->lverts->next->next->y * t));
								}
								HX_STACK_LINE(316)
								{
									HX_STACK_LINE(316)
									Float t = 0.5;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(316)
									hx::MultEq(_this->localCOMx,t);
									HX_STACK_LINE(316)
									hx::MultEq(_this->localCOMy,t);
								}
							}
							else{
								HX_STACK_LINE(316)
								{
									HX_STACK_LINE(316)
									_this->localCOMx = (int)0;
									HX_STACK_LINE(316)
									_this->localCOMy = (int)0;
									HX_STACK_LINE(316)
									{
									}
								}
								HX_STACK_LINE(316)
								Float area = 0.0;		HX_STACK_VAR(area,"area");
								HX_STACK_LINE(316)
								{
									HX_STACK_LINE(316)
									::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(316)
									::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
									HX_STACK_LINE(316)
									cx_ite = cx_ite->next;
									HX_STACK_LINE(316)
									::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(316)
									cx_ite = cx_ite->next;
									HX_STACK_LINE(316)
									while(((cx_ite != null()))){
										HX_STACK_LINE(316)
										::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
										HX_STACK_LINE(316)
										{
											HX_STACK_LINE(316)
											hx::AddEq(area,(v->x * ((w->y - u->y))));
											HX_STACK_LINE(316)
											Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
											HX_STACK_LINE(316)
											hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
											HX_STACK_LINE(316)
											hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
										}
										HX_STACK_LINE(316)
										u = v;
										HX_STACK_LINE(316)
										v = w;
										HX_STACK_LINE(316)
										cx_ite = cx_ite->next;
									}
									HX_STACK_LINE(316)
									cx_ite = _this->lverts->next;
									HX_STACK_LINE(316)
									::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
									HX_STACK_LINE(316)
									{
										HX_STACK_LINE(316)
										hx::AddEq(area,(v->x * ((w->y - u->y))));
										HX_STACK_LINE(316)
										Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
										HX_STACK_LINE(316)
										hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
										HX_STACK_LINE(316)
										hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
									}
									HX_STACK_LINE(316)
									u = v;
									HX_STACK_LINE(316)
									v = w;
									HX_STACK_LINE(316)
									cx_ite = cx_ite->next;
									HX_STACK_LINE(316)
									::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
									HX_STACK_LINE(316)
									{
										HX_STACK_LINE(316)
										hx::AddEq(area,(v->x * ((w1->y - u->y))));
										HX_STACK_LINE(316)
										Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
										HX_STACK_LINE(316)
										hx::AddEq(_this->localCOMx,(((v->x + w1->x)) * cf));
										HX_STACK_LINE(316)
										hx::AddEq(_this->localCOMy,(((v->y + w1->y)) * cf));
									}
								}
								HX_STACK_LINE(316)
								area = (Float((int)1) / Float((((int)3 * area))));
								HX_STACK_LINE(316)
								{
									HX_STACK_LINE(316)
									Float t = area;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(316)
									hx::MultEq(_this->localCOMx,t);
									HX_STACK_LINE(316)
									hx::MultEq(_this->localCOMy,t);
								}
							}
						}
					}
					HX_STACK_LINE(316)
					if (((this->wrap_localCOM != null()))){
						HX_STACK_LINE(316)
						this->wrap_localCOM->zpp_inner->x = this->localCOMx;
						HX_STACK_LINE(316)
						this->wrap_localCOM->zpp_inner->y = this->localCOMy;
						HX_STACK_LINE(316)
						{
						}
					}
				}
				HX_STACK_LINE(316)
				{
					HX_STACK_LINE(316)
					::zpp_nape::phys::ZPP_Body _this = this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(316)
					if ((_this->zip_axis)){
						HX_STACK_LINE(316)
						_this->zip_axis = false;
						HX_STACK_LINE(316)
						{
							HX_STACK_LINE(316)
							_this->axisx = ::Math_obj::sin(_this->rot);
							HX_STACK_LINE(316)
							_this->axisy = ::Math_obj::cos(_this->rot);
							HX_STACK_LINE(316)
							Dynamic();
						}
					}
				}
				HX_STACK_LINE(316)
				{
					HX_STACK_LINE(316)
					this->worldCOMx = (this->body->posx + (((this->body->axisy * this->localCOMx) - (this->body->axisx * this->localCOMy))));
					HX_STACK_LINE(316)
					this->worldCOMy = (this->body->posy + (((this->localCOMx * this->body->axisx) + (this->localCOMy * this->body->axisy))));
				}
			}
		}
		HX_STACK_LINE(317)
		{
			HX_STACK_LINE(318)
			this->wrap_worldCOM->zpp_inner->x = this->worldCOMx;
			HX_STACK_LINE(319)
			this->wrap_worldCOM->zpp_inner->y = this->worldCOMy;
			HX_STACK_LINE(328)
			{
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,getworldCOM,(void))

Void ZPP_Shape_obj::validate_worldCOM( ){
{
		HX_STACK_FRAME("ZPP_Shape","validate_worldCOM","ZPP_Shape.validate_worldCOM","zpp_nape/shape/Shape.hx",300)
		HX_STACK_THIS(this)
		HX_STACK_LINE(300)
		if ((this->zip_worldCOM)){
			HX_STACK_LINE(301)
			if (((this->body != null()))){
				HX_STACK_LINE(302)
				this->zip_worldCOM = false;
				HX_STACK_LINE(303)
				if ((this->zip_localCOM)){
					HX_STACK_LINE(303)
					this->zip_localCOM = false;
					HX_STACK_LINE(303)
					if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
						HX_STACK_LINE(303)
						::zpp_nape::shape::ZPP_Polygon _this = this->polygon;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(303)
						if (((_this->lverts->next == null()))){
							HX_STACK_LINE(303)
							HX_STACK_DO_THROW(HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
						}
						HX_STACK_LINE(303)
						if (((_this->lverts->next->next == null()))){
							HX_STACK_LINE(303)
							_this->localCOMx = _this->lverts->next->x;
							HX_STACK_LINE(303)
							_this->localCOMy = _this->lverts->next->y;
							HX_STACK_LINE(303)
							Dynamic();
						}
						else{
							HX_STACK_LINE(303)
							if (((_this->lverts->next->next->next == null()))){
								HX_STACK_LINE(303)
								{
									HX_STACK_LINE(303)
									_this->localCOMx = _this->lverts->next->x;
									HX_STACK_LINE(303)
									_this->localCOMy = _this->lverts->next->y;
									HX_STACK_LINE(303)
									{
									}
								}
								HX_STACK_LINE(303)
								{
									HX_STACK_LINE(303)
									Float t = 1.0;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(303)
									hx::AddEq(_this->localCOMx,(_this->lverts->next->next->x * t));
									HX_STACK_LINE(303)
									hx::AddEq(_this->localCOMy,(_this->lverts->next->next->y * t));
								}
								HX_STACK_LINE(303)
								{
									HX_STACK_LINE(303)
									Float t = 0.5;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(303)
									hx::MultEq(_this->localCOMx,t);
									HX_STACK_LINE(303)
									hx::MultEq(_this->localCOMy,t);
								}
							}
							else{
								HX_STACK_LINE(303)
								{
									HX_STACK_LINE(303)
									_this->localCOMx = (int)0;
									HX_STACK_LINE(303)
									_this->localCOMy = (int)0;
									HX_STACK_LINE(303)
									{
									}
								}
								HX_STACK_LINE(303)
								Float area = 0.0;		HX_STACK_VAR(area,"area");
								HX_STACK_LINE(303)
								{
									HX_STACK_LINE(303)
									::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(303)
									::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
									HX_STACK_LINE(303)
									cx_ite = cx_ite->next;
									HX_STACK_LINE(303)
									::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(303)
									cx_ite = cx_ite->next;
									HX_STACK_LINE(303)
									while(((cx_ite != null()))){
										HX_STACK_LINE(303)
										::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
										HX_STACK_LINE(303)
										{
											HX_STACK_LINE(303)
											hx::AddEq(area,(v->x * ((w->y - u->y))));
											HX_STACK_LINE(303)
											Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
											HX_STACK_LINE(303)
											hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
											HX_STACK_LINE(303)
											hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
										}
										HX_STACK_LINE(303)
										u = v;
										HX_STACK_LINE(303)
										v = w;
										HX_STACK_LINE(303)
										cx_ite = cx_ite->next;
									}
									HX_STACK_LINE(303)
									cx_ite = _this->lverts->next;
									HX_STACK_LINE(303)
									::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
									HX_STACK_LINE(303)
									{
										HX_STACK_LINE(303)
										hx::AddEq(area,(v->x * ((w->y - u->y))));
										HX_STACK_LINE(303)
										Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
										HX_STACK_LINE(303)
										hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
										HX_STACK_LINE(303)
										hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
									}
									HX_STACK_LINE(303)
									u = v;
									HX_STACK_LINE(303)
									v = w;
									HX_STACK_LINE(303)
									cx_ite = cx_ite->next;
									HX_STACK_LINE(303)
									::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
									HX_STACK_LINE(303)
									{
										HX_STACK_LINE(303)
										hx::AddEq(area,(v->x * ((w1->y - u->y))));
										HX_STACK_LINE(303)
										Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
										HX_STACK_LINE(303)
										hx::AddEq(_this->localCOMx,(((v->x + w1->x)) * cf));
										HX_STACK_LINE(303)
										hx::AddEq(_this->localCOMy,(((v->y + w1->y)) * cf));
									}
								}
								HX_STACK_LINE(303)
								area = (Float((int)1) / Float((((int)3 * area))));
								HX_STACK_LINE(303)
								{
									HX_STACK_LINE(303)
									Float t = area;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(303)
									hx::MultEq(_this->localCOMx,t);
									HX_STACK_LINE(303)
									hx::MultEq(_this->localCOMy,t);
								}
							}
						}
					}
					HX_STACK_LINE(303)
					if (((this->wrap_localCOM != null()))){
						HX_STACK_LINE(303)
						this->wrap_localCOM->zpp_inner->x = this->localCOMx;
						HX_STACK_LINE(303)
						this->wrap_localCOM->zpp_inner->y = this->localCOMy;
						HX_STACK_LINE(303)
						{
						}
					}
				}
				HX_STACK_LINE(304)
				{
					HX_STACK_LINE(304)
					::zpp_nape::phys::ZPP_Body _this = this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(304)
					if ((_this->zip_axis)){
						HX_STACK_LINE(304)
						_this->zip_axis = false;
						HX_STACK_LINE(304)
						{
							HX_STACK_LINE(304)
							_this->axisx = ::Math_obj::sin(_this->rot);
							HX_STACK_LINE(304)
							_this->axisy = ::Math_obj::cos(_this->rot);
							HX_STACK_LINE(304)
							Dynamic();
						}
					}
				}
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(306)
					this->worldCOMx = (this->body->posx + (((this->body->axisy * this->localCOMx) - (this->body->axisx * this->localCOMy))));
					HX_STACK_LINE(307)
					this->worldCOMy = (this->body->posy + (((this->localCOMx * this->body->axisx) + (this->localCOMy * this->body->axisy))));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,validate_worldCOM,(void))

Void ZPP_Shape_obj::validate_localCOM( ){
{
		HX_STACK_FRAME("ZPP_Shape","validate_localCOM","ZPP_Shape.validate_localCOM","zpp_nape/shape/Shape.hx",272)
		HX_STACK_THIS(this)
		HX_STACK_LINE(272)
		if ((this->zip_localCOM)){
			HX_STACK_LINE(273)
			this->zip_localCOM = false;
			HX_STACK_LINE(274)
			if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
				HX_STACK_LINE(274)
				::zpp_nape::shape::ZPP_Polygon _this = this->polygon;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(274)
				if (((_this->lverts->next == null()))){
					HX_STACK_LINE(274)
					HX_STACK_DO_THROW(HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
				}
				HX_STACK_LINE(274)
				if (((_this->lverts->next->next == null()))){
					HX_STACK_LINE(274)
					_this->localCOMx = _this->lverts->next->x;
					HX_STACK_LINE(274)
					_this->localCOMy = _this->lverts->next->y;
					HX_STACK_LINE(274)
					Dynamic();
				}
				else{
					HX_STACK_LINE(274)
					if (((_this->lverts->next->next->next == null()))){
						HX_STACK_LINE(274)
						{
							HX_STACK_LINE(274)
							_this->localCOMx = _this->lverts->next->x;
							HX_STACK_LINE(274)
							_this->localCOMy = _this->lverts->next->y;
							HX_STACK_LINE(274)
							{
							}
						}
						HX_STACK_LINE(274)
						{
							HX_STACK_LINE(274)
							Float t = 1.0;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(274)
							hx::AddEq(_this->localCOMx,(_this->lverts->next->next->x * t));
							HX_STACK_LINE(274)
							hx::AddEq(_this->localCOMy,(_this->lverts->next->next->y * t));
						}
						HX_STACK_LINE(274)
						{
							HX_STACK_LINE(274)
							Float t = 0.5;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(274)
							hx::MultEq(_this->localCOMx,t);
							HX_STACK_LINE(274)
							hx::MultEq(_this->localCOMy,t);
						}
					}
					else{
						HX_STACK_LINE(274)
						{
							HX_STACK_LINE(274)
							_this->localCOMx = (int)0;
							HX_STACK_LINE(274)
							_this->localCOMy = (int)0;
							HX_STACK_LINE(274)
							{
							}
						}
						HX_STACK_LINE(274)
						Float area = 0.0;		HX_STACK_VAR(area,"area");
						HX_STACK_LINE(274)
						{
							HX_STACK_LINE(274)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(274)
							::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
							HX_STACK_LINE(274)
							cx_ite = cx_ite->next;
							HX_STACK_LINE(274)
							::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(274)
							cx_ite = cx_ite->next;
							HX_STACK_LINE(274)
							while(((cx_ite != null()))){
								HX_STACK_LINE(274)
								::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
								HX_STACK_LINE(274)
								{
									HX_STACK_LINE(274)
									hx::AddEq(area,(v->x * ((w->y - u->y))));
									HX_STACK_LINE(274)
									Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
									HX_STACK_LINE(274)
									hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
									HX_STACK_LINE(274)
									hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
								}
								HX_STACK_LINE(274)
								u = v;
								HX_STACK_LINE(274)
								v = w;
								HX_STACK_LINE(274)
								cx_ite = cx_ite->next;
							}
							HX_STACK_LINE(274)
							cx_ite = _this->lverts->next;
							HX_STACK_LINE(274)
							::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
							HX_STACK_LINE(274)
							{
								HX_STACK_LINE(274)
								hx::AddEq(area,(v->x * ((w->y - u->y))));
								HX_STACK_LINE(274)
								Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
								HX_STACK_LINE(274)
								hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
								HX_STACK_LINE(274)
								hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
							}
							HX_STACK_LINE(274)
							u = v;
							HX_STACK_LINE(274)
							v = w;
							HX_STACK_LINE(274)
							cx_ite = cx_ite->next;
							HX_STACK_LINE(274)
							::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
							HX_STACK_LINE(274)
							{
								HX_STACK_LINE(274)
								hx::AddEq(area,(v->x * ((w1->y - u->y))));
								HX_STACK_LINE(274)
								Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
								HX_STACK_LINE(274)
								hx::AddEq(_this->localCOMx,(((v->x + w1->x)) * cf));
								HX_STACK_LINE(274)
								hx::AddEq(_this->localCOMy,(((v->y + w1->y)) * cf));
							}
						}
						HX_STACK_LINE(274)
						area = (Float((int)1) / Float((((int)3 * area))));
						HX_STACK_LINE(274)
						{
							HX_STACK_LINE(274)
							Float t = area;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(274)
							hx::MultEq(_this->localCOMx,t);
							HX_STACK_LINE(274)
							hx::MultEq(_this->localCOMy,t);
						}
					}
				}
			}
			HX_STACK_LINE(275)
			if (((this->wrap_localCOM != null()))){
				HX_STACK_LINE(276)
				this->wrap_localCOM->zpp_inner->x = this->localCOMx;
				HX_STACK_LINE(277)
				this->wrap_localCOM->zpp_inner->y = this->localCOMy;
				HX_STACK_LINE(286)
				{
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,validate_localCOM,(void))

Void ZPP_Shape_obj::validate_angDrag( ){
{
		HX_STACK_FRAME("ZPP_Shape","validate_angDrag","ZPP_Shape.validate_angDrag","zpp_nape/shape/Shape.hx",262)
		HX_STACK_THIS(this)
		HX_STACK_LINE(262)
		if (((bool(this->zip_angDrag) || bool((this->refmaterial->dynamicFriction != this->material->dynamicFriction))))){
			HX_STACK_LINE(263)
			this->zip_angDrag = false;
			HX_STACK_LINE(264)
			this->refmaterial->dynamicFriction = this->material->dynamicFriction;
			HX_STACK_LINE(265)
			if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
				HX_STACK_LINE(265)
				this->circle->__validate_angDrag();
			}
			else{
				HX_STACK_LINE(266)
				this->polygon->__validate_angDrag();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,validate_angDrag,(void))

Void ZPP_Shape_obj::validate_area_inertia( ){
{
		HX_STACK_FRAME("ZPP_Shape","validate_area_inertia","ZPP_Shape.validate_area_inertia","zpp_nape/shape/Shape.hx",255)
		HX_STACK_THIS(this)
		HX_STACK_LINE(255)
		if ((this->zip_area_inertia)){
			HX_STACK_LINE(256)
			this->zip_area_inertia = false;
			HX_STACK_LINE(257)
			if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
				HX_STACK_LINE(257)
				this->circle->__validate_area_inertia();
			}
			else{
				HX_STACK_LINE(258)
				this->polygon->__validate_area_inertia();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,validate_area_inertia,(void))

Void ZPP_Shape_obj::invalidate_aabb( ){
{
		HX_STACK_FRAME("ZPP_Shape","invalidate_aabb","ZPP_Shape.invalidate_aabb","zpp_nape/shape/Shape.hx",250)
		HX_STACK_THIS(this)
		HX_STACK_LINE(251)
		this->zip_aabb = true;
		HX_STACK_LINE(252)
		if (((this->body != null()))){
			HX_STACK_LINE(252)
			this->body->zip_aabb = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,invalidate_aabb,(void))

Void ZPP_Shape_obj::force_validate_aabb( ){
{
		HX_STACK_FRAME("ZPP_Shape","force_validate_aabb","ZPP_Shape.force_validate_aabb","zpp_nape/shape/Shape.hx",245)
		HX_STACK_THIS(this)
		HX_STACK_LINE(245)
		if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
			HX_STACK_LINE(245)
			::zpp_nape::shape::ZPP_Circle _this = this->circle;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(245)
				_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
				HX_STACK_LINE(245)
				_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
			}
			HX_STACK_LINE(245)
			_this->aabb->minx = (_this->worldCOMx - _this->radius);
			HX_STACK_LINE(245)
			_this->aabb->miny = (_this->worldCOMy - _this->radius);
			HX_STACK_LINE(245)
			_this->aabb->maxx = (_this->worldCOMx + _this->radius);
			HX_STACK_LINE(245)
			_this->aabb->maxy = (_this->worldCOMy + _this->radius);
		}
		else{
			HX_STACK_LINE(246)
			::zpp_nape::shape::ZPP_Polygon _this = this->polygon;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(246)
			::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
			HX_STACK_LINE(246)
			::zpp_nape::geom::ZPP_Vec2 p0 = _this->gverts->next;		HX_STACK_VAR(p0,"p0");
			HX_STACK_LINE(246)
			::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(246)
			li = li->next;
			HX_STACK_LINE(246)
			{
				HX_STACK_LINE(246)
				p0->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
				HX_STACK_LINE(246)
				p0->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
			}
			HX_STACK_LINE(246)
			{
				HX_STACK_LINE(246)
				_this->aabb->minx = p0->x;
				HX_STACK_LINE(246)
				_this->aabb->miny = p0->y;
				HX_STACK_LINE(246)
				{
				}
			}
			HX_STACK_LINE(246)
			{
				HX_STACK_LINE(246)
				_this->aabb->maxx = p0->x;
				HX_STACK_LINE(246)
				_this->aabb->maxy = p0->y;
				HX_STACK_LINE(246)
				{
				}
			}
			HX_STACK_LINE(246)
			{
				HX_STACK_LINE(246)
				::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next->next;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(246)
				while(((cx_ite != null()))){
					HX_STACK_LINE(246)
					::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(246)
					{
						HX_STACK_LINE(246)
						::zpp_nape::geom::ZPP_Vec2 l1 = li;		HX_STACK_VAR(l1,"l1");
						HX_STACK_LINE(246)
						li = li->next;
						HX_STACK_LINE(246)
						{
							HX_STACK_LINE(246)
							p->x = (_this->body->posx + (((_this->body->axisy * l1->x) - (_this->body->axisx * l1->y))));
							HX_STACK_LINE(246)
							p->y = (_this->body->posy + (((l1->x * _this->body->axisx) + (l1->y * _this->body->axisy))));
						}
						HX_STACK_LINE(246)
						if (((p->x < _this->aabb->minx))){
							HX_STACK_LINE(246)
							_this->aabb->minx = p->x;
						}
						HX_STACK_LINE(246)
						if (((p->x > _this->aabb->maxx))){
							HX_STACK_LINE(246)
							_this->aabb->maxx = p->x;
						}
						HX_STACK_LINE(246)
						if (((p->y < _this->aabb->miny))){
							HX_STACK_LINE(246)
							_this->aabb->miny = p->y;
						}
						HX_STACK_LINE(246)
						if (((p->y > _this->aabb->maxy))){
							HX_STACK_LINE(246)
							_this->aabb->maxy = p->y;
						}
					}
					HX_STACK_LINE(246)
					cx_ite = cx_ite->next;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,force_validate_aabb,(void))

Void ZPP_Shape_obj::validate_aabb( ){
{
		HX_STACK_FRAME("ZPP_Shape","validate_aabb","ZPP_Shape.validate_aabb","zpp_nape/shape/Shape.hx",234)
		HX_STACK_THIS(this)
		HX_STACK_LINE(234)
		if ((this->zip_aabb)){
			HX_STACK_LINE(235)
			if (((this->body != null()))){
				HX_STACK_LINE(236)
				this->zip_aabb = false;
				HX_STACK_LINE(237)
				if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
					HX_STACK_LINE(237)
					::zpp_nape::shape::ZPP_Circle _this = this->circle;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(237)
					if ((_this->zip_worldCOM)){
						HX_STACK_LINE(237)
						if (((_this->body != null()))){
							HX_STACK_LINE(237)
							_this->zip_worldCOM = false;
							HX_STACK_LINE(237)
							if ((_this->zip_localCOM)){
								HX_STACK_LINE(237)
								_this->zip_localCOM = false;
								HX_STACK_LINE(237)
								if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
									HX_STACK_LINE(237)
									::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(237)
									if (((_this1->lverts->next == null()))){
										HX_STACK_LINE(237)
										HX_STACK_DO_THROW(HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
									}
									HX_STACK_LINE(237)
									if (((_this1->lverts->next->next == null()))){
										HX_STACK_LINE(237)
										_this1->localCOMx = _this1->lverts->next->x;
										HX_STACK_LINE(237)
										_this1->localCOMy = _this1->lverts->next->y;
										HX_STACK_LINE(237)
										Dynamic();
									}
									else{
										HX_STACK_LINE(237)
										if (((_this1->lverts->next->next->next == null()))){
											HX_STACK_LINE(237)
											{
												HX_STACK_LINE(237)
												_this1->localCOMx = _this1->lverts->next->x;
												HX_STACK_LINE(237)
												_this1->localCOMy = _this1->lverts->next->y;
												HX_STACK_LINE(237)
												{
												}
											}
											HX_STACK_LINE(237)
											{
												HX_STACK_LINE(237)
												Float t = 1.0;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(237)
												hx::AddEq(_this1->localCOMx,(_this1->lverts->next->next->x * t));
												HX_STACK_LINE(237)
												hx::AddEq(_this1->localCOMy,(_this1->lverts->next->next->y * t));
											}
											HX_STACK_LINE(237)
											{
												HX_STACK_LINE(237)
												Float t = 0.5;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(237)
												hx::MultEq(_this1->localCOMx,t);
												HX_STACK_LINE(237)
												hx::MultEq(_this1->localCOMy,t);
											}
										}
										else{
											HX_STACK_LINE(237)
											{
												HX_STACK_LINE(237)
												_this1->localCOMx = (int)0;
												HX_STACK_LINE(237)
												_this1->localCOMy = (int)0;
												HX_STACK_LINE(237)
												{
												}
											}
											HX_STACK_LINE(237)
											Float area = 0.0;		HX_STACK_VAR(area,"area");
											HX_STACK_LINE(237)
											{
												HX_STACK_LINE(237)
												::zpp_nape::geom::ZPP_Vec2 cx_ite = _this1->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
												HX_STACK_LINE(237)
												::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
												HX_STACK_LINE(237)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(237)
												::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(237)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(237)
												while(((cx_ite != null()))){
													HX_STACK_LINE(237)
													::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
													HX_STACK_LINE(237)
													{
														HX_STACK_LINE(237)
														hx::AddEq(area,(v->x * ((w->y - u->y))));
														HX_STACK_LINE(237)
														Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
														HX_STACK_LINE(237)
														hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
														HX_STACK_LINE(237)
														hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
													}
													HX_STACK_LINE(237)
													u = v;
													HX_STACK_LINE(237)
													v = w;
													HX_STACK_LINE(237)
													cx_ite = cx_ite->next;
												}
												HX_STACK_LINE(237)
												cx_ite = _this1->lverts->next;
												HX_STACK_LINE(237)
												::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
												HX_STACK_LINE(237)
												{
													HX_STACK_LINE(237)
													hx::AddEq(area,(v->x * ((w->y - u->y))));
													HX_STACK_LINE(237)
													Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(237)
													hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
													HX_STACK_LINE(237)
													hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
												}
												HX_STACK_LINE(237)
												u = v;
												HX_STACK_LINE(237)
												v = w;
												HX_STACK_LINE(237)
												cx_ite = cx_ite->next;
												HX_STACK_LINE(237)
												::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
												HX_STACK_LINE(237)
												{
													HX_STACK_LINE(237)
													hx::AddEq(area,(v->x * ((w1->y - u->y))));
													HX_STACK_LINE(237)
													Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(237)
													hx::AddEq(_this1->localCOMx,(((v->x + w1->x)) * cf));
													HX_STACK_LINE(237)
													hx::AddEq(_this1->localCOMy,(((v->y + w1->y)) * cf));
												}
											}
											HX_STACK_LINE(237)
											area = (Float((int)1) / Float((((int)3 * area))));
											HX_STACK_LINE(237)
											{
												HX_STACK_LINE(237)
												Float t = area;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(237)
												hx::MultEq(_this1->localCOMx,t);
												HX_STACK_LINE(237)
												hx::MultEq(_this1->localCOMy,t);
											}
										}
									}
								}
								HX_STACK_LINE(237)
								if (((_this->wrap_localCOM != null()))){
									HX_STACK_LINE(237)
									_this->wrap_localCOM->zpp_inner->x = _this->localCOMx;
									HX_STACK_LINE(237)
									_this->wrap_localCOM->zpp_inner->y = _this->localCOMy;
									HX_STACK_LINE(237)
									{
									}
								}
							}
							HX_STACK_LINE(237)
							{
								HX_STACK_LINE(237)
								::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(237)
								if ((_this1->zip_axis)){
									HX_STACK_LINE(237)
									_this1->zip_axis = false;
									HX_STACK_LINE(237)
									{
										HX_STACK_LINE(237)
										_this1->axisx = ::Math_obj::sin(_this1->rot);
										HX_STACK_LINE(237)
										_this1->axisy = ::Math_obj::cos(_this1->rot);
										HX_STACK_LINE(237)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(237)
							{
								HX_STACK_LINE(237)
								_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
								HX_STACK_LINE(237)
								_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
							}
						}
					}
					HX_STACK_LINE(237)
					Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
					HX_STACK_LINE(237)
					Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
					HX_STACK_LINE(237)
					{
						HX_STACK_LINE(237)
						_this->aabb->minx = (_this->worldCOMx - rx);
						HX_STACK_LINE(237)
						_this->aabb->miny = (_this->worldCOMy - ry);
					}
					HX_STACK_LINE(237)
					{
						HX_STACK_LINE(237)
						_this->aabb->maxx = (_this->worldCOMx + rx);
						HX_STACK_LINE(237)
						_this->aabb->maxy = (_this->worldCOMy + ry);
					}
				}
				else{
					HX_STACK_LINE(238)
					::zpp_nape::shape::ZPP_Polygon _this = this->polygon;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(238)
					if ((_this->zip_gverts)){
						HX_STACK_LINE(238)
						if (((_this->body != null()))){
							HX_STACK_LINE(238)
							_this->zip_gverts = false;
							HX_STACK_LINE(238)
							_this->validate_lverts();
							HX_STACK_LINE(238)
							{
								HX_STACK_LINE(238)
								::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(238)
								if ((_this1->zip_axis)){
									HX_STACK_LINE(238)
									_this1->zip_axis = false;
									HX_STACK_LINE(238)
									{
										HX_STACK_LINE(238)
										_this1->axisx = ::Math_obj::sin(_this1->rot);
										HX_STACK_LINE(238)
										_this1->axisy = ::Math_obj::cos(_this1->rot);
										HX_STACK_LINE(238)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(238)
							::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
							HX_STACK_LINE(238)
							{
								HX_STACK_LINE(238)
								::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(238)
								while(((cx_ite != null()))){
									HX_STACK_LINE(238)
									::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(238)
									{
										HX_STACK_LINE(238)
										::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
										HX_STACK_LINE(238)
										li = li->next;
										HX_STACK_LINE(238)
										{
											HX_STACK_LINE(238)
											g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
											HX_STACK_LINE(238)
											g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
										}
									}
									HX_STACK_LINE(238)
									cx_ite = cx_ite->next;
								}
							}
						}
					}
					HX_STACK_LINE(238)
					if (((_this->lverts->next == null()))){
						HX_STACK_LINE(238)
						HX_STACK_DO_THROW(HX_CSTRING("Error: An empty polygon has no meaningful bounds"));
					}
					HX_STACK_LINE(238)
					::zpp_nape::geom::ZPP_Vec2 p0 = _this->gverts->next;		HX_STACK_VAR(p0,"p0");
					HX_STACK_LINE(238)
					{
						HX_STACK_LINE(238)
						_this->aabb->minx = p0->x;
						HX_STACK_LINE(238)
						_this->aabb->miny = p0->y;
						HX_STACK_LINE(238)
						{
						}
					}
					HX_STACK_LINE(238)
					{
						HX_STACK_LINE(238)
						_this->aabb->maxx = p0->x;
						HX_STACK_LINE(238)
						_this->aabb->maxy = p0->y;
						HX_STACK_LINE(238)
						{
						}
					}
					HX_STACK_LINE(238)
					{
						HX_STACK_LINE(238)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(238)
						while(((cx_ite != null()))){
							HX_STACK_LINE(238)
							::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(238)
							{
								HX_STACK_LINE(238)
								if (((p->x < _this->aabb->minx))){
									HX_STACK_LINE(238)
									_this->aabb->minx = p->x;
								}
								HX_STACK_LINE(238)
								if (((p->x > _this->aabb->maxx))){
									HX_STACK_LINE(238)
									_this->aabb->maxx = p->x;
								}
								HX_STACK_LINE(238)
								if (((p->y < _this->aabb->miny))){
									HX_STACK_LINE(238)
									_this->aabb->miny = p->y;
								}
								HX_STACK_LINE(238)
								if (((p->y > _this->aabb->maxy))){
									HX_STACK_LINE(238)
									_this->aabb->maxy = p->y;
								}
							}
							HX_STACK_LINE(238)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,validate_aabb,(void))

Void ZPP_Shape_obj::clear( ){
{
		HX_STACK_FRAME("ZPP_Shape","clear","ZPP_Shape.clear","zpp_nape/shape/Shape.hx",226)
		HX_STACK_THIS(this)
		HX_STACK_LINE(226)
		if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
			HX_STACK_LINE(226)
			this->circle->__clear();
		}
		else{
			HX_STACK_LINE(227)
			this->polygon->__clear();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,clear,(void))

Void ZPP_Shape_obj::validate_sweepRadius( ){
{
		HX_STACK_FRAME("ZPP_Shape","validate_sweepRadius","ZPP_Shape.validate_sweepRadius","zpp_nape/shape/Shape.hx",208)
		HX_STACK_THIS(this)
		HX_STACK_LINE(208)
		if ((this->zip_sweepRadius)){
			HX_STACK_LINE(209)
			this->zip_sweepRadius = false;
			HX_STACK_LINE(210)
			if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
				HX_STACK_LINE(210)
				this->circle->__validate_sweepRadius();
			}
			else{
				HX_STACK_LINE(211)
				this->polygon->__validate_sweepRadius();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,validate_sweepRadius,(void))

Void ZPP_Shape_obj::invalidate_sweepRadius( ){
{
		HX_STACK_FRAME("ZPP_Shape","invalidate_sweepRadius","ZPP_Shape.invalidate_sweepRadius","zpp_nape/shape/Shape.hx",205)
		HX_STACK_THIS(this)
		HX_STACK_LINE(205)
		this->zip_sweepRadius = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,invalidate_sweepRadius,(void))

bool ZPP_Shape_obj::isPolygon( ){
	HX_STACK_FRAME("ZPP_Shape","isPolygon","ZPP_Shape.isPolygon","zpp_nape/shape/Shape.hx",184)
	HX_STACK_THIS(this)
	HX_STACK_LINE(184)
	return (this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,isPolygon,return )

bool ZPP_Shape_obj::isCircle( ){
	HX_STACK_FRAME("ZPP_Shape","isCircle","ZPP_Shape.isCircle","zpp_nape/shape/Shape.hx",180)
	HX_STACK_THIS(this)
	HX_STACK_LINE(180)
	return (this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,isCircle,return )


ZPP_Shape_obj::ZPP_Shape_obj()
{
}

void ZPP_Shape_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Shape);
	HX_MARK_MEMBER_NAME(zip_aabb,"zip_aabb");
	HX_MARK_MEMBER_NAME(aabb,"aabb");
	HX_MARK_MEMBER_NAME(pairs,"pairs");
	HX_MARK_MEMBER_NAME(node,"node");
	HX_MARK_MEMBER_NAME(sweep,"sweep");
	HX_MARK_MEMBER_NAME(sensorEnabled,"sensorEnabled");
	HX_MARK_MEMBER_NAME(fluidEnabled,"fluidEnabled");
	HX_MARK_MEMBER_NAME(fluidProperties,"fluidProperties");
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(material,"material");
	HX_MARK_MEMBER_NAME(refmaterial,"refmaterial");
	HX_MARK_MEMBER_NAME(polygon,"polygon");
	HX_MARK_MEMBER_NAME(circle,"circle");
	HX_MARK_MEMBER_NAME(sweepCoef,"sweepCoef");
	HX_MARK_MEMBER_NAME(zip_sweepRadius,"zip_sweepRadius");
	HX_MARK_MEMBER_NAME(sweepRadius,"sweepRadius");
	HX_MARK_MEMBER_NAME(wrap_worldCOM,"wrap_worldCOM");
	HX_MARK_MEMBER_NAME(wrap_localCOM,"wrap_localCOM");
	HX_MARK_MEMBER_NAME(zip_worldCOM,"zip_worldCOM");
	HX_MARK_MEMBER_NAME(worldCOMy,"worldCOMy");
	HX_MARK_MEMBER_NAME(worldCOMx,"worldCOMx");
	HX_MARK_MEMBER_NAME(zip_localCOM,"zip_localCOM");
	HX_MARK_MEMBER_NAME(localCOMy,"localCOMy");
	HX_MARK_MEMBER_NAME(localCOMx,"localCOMx");
	HX_MARK_MEMBER_NAME(zip_angDrag,"zip_angDrag");
	HX_MARK_MEMBER_NAME(angDrag,"angDrag");
	HX_MARK_MEMBER_NAME(inertia,"inertia");
	HX_MARK_MEMBER_NAME(zip_area_inertia,"zip_area_inertia");
	HX_MARK_MEMBER_NAME(area,"area");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_MEMBER_NAME(outer,"outer");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_Shape_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zip_aabb,"zip_aabb");
	HX_VISIT_MEMBER_NAME(aabb,"aabb");
	HX_VISIT_MEMBER_NAME(pairs,"pairs");
	HX_VISIT_MEMBER_NAME(node,"node");
	HX_VISIT_MEMBER_NAME(sweep,"sweep");
	HX_VISIT_MEMBER_NAME(sensorEnabled,"sensorEnabled");
	HX_VISIT_MEMBER_NAME(fluidEnabled,"fluidEnabled");
	HX_VISIT_MEMBER_NAME(fluidProperties,"fluidProperties");
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(material,"material");
	HX_VISIT_MEMBER_NAME(refmaterial,"refmaterial");
	HX_VISIT_MEMBER_NAME(polygon,"polygon");
	HX_VISIT_MEMBER_NAME(circle,"circle");
	HX_VISIT_MEMBER_NAME(sweepCoef,"sweepCoef");
	HX_VISIT_MEMBER_NAME(zip_sweepRadius,"zip_sweepRadius");
	HX_VISIT_MEMBER_NAME(sweepRadius,"sweepRadius");
	HX_VISIT_MEMBER_NAME(wrap_worldCOM,"wrap_worldCOM");
	HX_VISIT_MEMBER_NAME(wrap_localCOM,"wrap_localCOM");
	HX_VISIT_MEMBER_NAME(zip_worldCOM,"zip_worldCOM");
	HX_VISIT_MEMBER_NAME(worldCOMy,"worldCOMy");
	HX_VISIT_MEMBER_NAME(worldCOMx,"worldCOMx");
	HX_VISIT_MEMBER_NAME(zip_localCOM,"zip_localCOM");
	HX_VISIT_MEMBER_NAME(localCOMy,"localCOMy");
	HX_VISIT_MEMBER_NAME(localCOMx,"localCOMx");
	HX_VISIT_MEMBER_NAME(zip_angDrag,"zip_angDrag");
	HX_VISIT_MEMBER_NAME(angDrag,"angDrag");
	HX_VISIT_MEMBER_NAME(inertia,"inertia");
	HX_VISIT_MEMBER_NAME(zip_area_inertia,"zip_area_inertia");
	HX_VISIT_MEMBER_NAME(area,"area");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(body,"body");
	HX_VISIT_MEMBER_NAME(outer,"outer");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_Shape_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"aabb") ) { return aabb; }
		if (HX_FIELD_EQ(inName,"node") ) { return node; }
		if (HX_FIELD_EQ(inName,"area") ) { return area; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"body") ) { return body; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"pairs") ) { return pairs; }
		if (HX_FIELD_EQ(inName,"sweep") ) { return sweep; }
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return filter; }
		if (HX_FIELD_EQ(inName,"circle") ) { return circle; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"polygon") ) { return polygon; }
		if (HX_FIELD_EQ(inName,"angDrag") ) { return angDrag; }
		if (HX_FIELD_EQ(inName,"inertia") ) { return inertia; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setFluid") ) { return setFluid_dyn(); }
		if (HX_FIELD_EQ(inName,"zip_aabb") ) { return zip_aabb; }
		if (HX_FIELD_EQ(inName,"material") ) { return material; }
		if (HX_FIELD_EQ(inName,"isCircle") ) { return isCircle_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setFilter") ) { return setFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"sweepCoef") ) { return sweepCoef; }
		if (HX_FIELD_EQ(inName,"worldCOMy") ) { return worldCOMy; }
		if (HX_FIELD_EQ(inName,"worldCOMx") ) { return worldCOMx; }
		if (HX_FIELD_EQ(inName,"localCOMy") ) { return localCOMy; }
		if (HX_FIELD_EQ(inName,"localCOMx") ) { return localCOMx; }
		if (HX_FIELD_EQ(inName,"isPolygon") ) { return isPolygon_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addedToBody") ) { return addedToBody_dyn(); }
		if (HX_FIELD_EQ(inName,"setMaterial") ) { return setMaterial_dyn(); }
		if (HX_FIELD_EQ(inName,"getworldCOM") ) { return getworldCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"refmaterial") ) { return refmaterial; }
		if (HX_FIELD_EQ(inName,"sweepRadius") ) { return sweepRadius; }
		if (HX_FIELD_EQ(inName,"zip_angDrag") ) { return zip_angDrag; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addedToSpace") ) { return addedToSpace_dyn(); }
		if (HX_FIELD_EQ(inName,"fluidEnabled") ) { return fluidEnabled; }
		if (HX_FIELD_EQ(inName,"zip_worldCOM") ) { return zip_worldCOM; }
		if (HX_FIELD_EQ(inName,"zip_localCOM") ) { return zip_localCOM; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"aabb_validate") ) { return aabb_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_aabb") ) { return validate_aabb_dyn(); }
		if (HX_FIELD_EQ(inName,"sensorEnabled") ) { return sensorEnabled; }
		if (HX_FIELD_EQ(inName,"wrap_worldCOM") ) { return wrap_worldCOM; }
		if (HX_FIELD_EQ(inName,"wrap_localCOM") ) { return wrap_localCOM; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removedFromBody") ) { return removedFromBody_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_aabb") ) { return invalidate_aabb_dyn(); }
		if (HX_FIELD_EQ(inName,"fluidProperties") ) { return fluidProperties; }
		if (HX_FIELD_EQ(inName,"zip_sweepRadius") ) { return zip_sweepRadius; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removedFromSpace") ) { return removedFromSpace_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_angDrag") ) { return validate_angDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"zip_area_inertia") ) { return zip_area_inertia; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"invalidate_filter") ) { return invalidate_filter_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_worldCOM") ) { return validate_worldCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_localCOM") ) { return validate_localCOM_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"invalidate_angDrag") ) { return invalidate_angDrag_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__immutable_midstep") ) { return __immutable_midstep_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_material") ) { return invalidate_material_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_worldCOM") ) { return invalidate_worldCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_localCOM") ) { return invalidate_localCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"force_validate_aabb") ) { return force_validate_aabb_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"validate_sweepRadius") ) { return validate_sweepRadius_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"invalidate_fluidprops") ) { return invalidate_fluidprops_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_area_inertia") ) { return validate_area_inertia_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"invalidate_sweepRadius") ) { return invalidate_sweepRadius_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"invalidate_area_inertia") ) { return invalidate_area_inertia_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Shape_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"aabb") ) { aabb=inValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return inValue; }
		if (HX_FIELD_EQ(inName,"node") ) { node=inValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"area") ) { area=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pairs") ) { pairs=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_AABBPair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sweep") ) { sweep=inValue.Cast< ::zpp_nape::space::ZPP_SweepData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::shape::Shape >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast< ::zpp_nape::dynamics::ZPP_InteractionFilter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"circle") ) { circle=inValue.Cast< ::zpp_nape::shape::ZPP_Circle >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"polygon") ) { polygon=inValue.Cast< ::zpp_nape::shape::ZPP_Polygon >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angDrag") ) { angDrag=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inertia") ) { inertia=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zip_aabb") ) { zip_aabb=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"material") ) { material=inValue.Cast< ::zpp_nape::phys::ZPP_Material >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sweepCoef") ) { sweepCoef=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"worldCOMy") ) { worldCOMy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"worldCOMx") ) { worldCOMx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localCOMy") ) { localCOMy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localCOMx") ) { localCOMx=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"refmaterial") ) { refmaterial=inValue.Cast< ::zpp_nape::phys::ZPP_Material >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sweepRadius") ) { sweepRadius=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_angDrag") ) { zip_angDrag=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fluidEnabled") ) { fluidEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_worldCOM") ) { zip_worldCOM=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_localCOM") ) { zip_localCOM=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sensorEnabled") ) { sensorEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_worldCOM") ) { wrap_worldCOM=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_localCOM") ) { wrap_localCOM=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fluidProperties") ) { fluidProperties=inValue.Cast< ::zpp_nape::phys::ZPP_FluidProperties >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_sweepRadius") ) { zip_sweepRadius=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"zip_area_inertia") ) { zip_area_inertia=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Shape_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zip_aabb"));
	outFields->push(HX_CSTRING("aabb"));
	outFields->push(HX_CSTRING("pairs"));
	outFields->push(HX_CSTRING("node"));
	outFields->push(HX_CSTRING("sweep"));
	outFields->push(HX_CSTRING("sensorEnabled"));
	outFields->push(HX_CSTRING("fluidEnabled"));
	outFields->push(HX_CSTRING("fluidProperties"));
	outFields->push(HX_CSTRING("filter"));
	outFields->push(HX_CSTRING("material"));
	outFields->push(HX_CSTRING("refmaterial"));
	outFields->push(HX_CSTRING("polygon"));
	outFields->push(HX_CSTRING("circle"));
	outFields->push(HX_CSTRING("sweepCoef"));
	outFields->push(HX_CSTRING("zip_sweepRadius"));
	outFields->push(HX_CSTRING("sweepRadius"));
	outFields->push(HX_CSTRING("wrap_worldCOM"));
	outFields->push(HX_CSTRING("wrap_localCOM"));
	outFields->push(HX_CSTRING("zip_worldCOM"));
	outFields->push(HX_CSTRING("worldCOMy"));
	outFields->push(HX_CSTRING("worldCOMx"));
	outFields->push(HX_CSTRING("zip_localCOM"));
	outFields->push(HX_CSTRING("localCOMy"));
	outFields->push(HX_CSTRING("localCOMx"));
	outFields->push(HX_CSTRING("zip_angDrag"));
	outFields->push(HX_CSTRING("angDrag"));
	outFields->push(HX_CSTRING("inertia"));
	outFields->push(HX_CSTRING("zip_area_inertia"));
	outFields->push(HX_CSTRING("area"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("body"));
	outFields->push(HX_CSTRING("outer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("copy"),
	HX_CSTRING("removedFromSpace"),
	HX_CSTRING("addedToSpace"),
	HX_CSTRING("removedFromBody"),
	HX_CSTRING("addedToBody"),
	HX_CSTRING("__immutable_midstep"),
	HX_CSTRING("setFluid"),
	HX_CSTRING("setFilter"),
	HX_CSTRING("setMaterial"),
	HX_CSTRING("aabb_validate"),
	HX_CSTRING("invalidate_fluidprops"),
	HX_CSTRING("invalidate_filter"),
	HX_CSTRING("invalidate_material"),
	HX_CSTRING("invalidate_worldCOM"),
	HX_CSTRING("invalidate_localCOM"),
	HX_CSTRING("invalidate_angDrag"),
	HX_CSTRING("invalidate_area_inertia"),
	HX_CSTRING("getworldCOM"),
	HX_CSTRING("validate_worldCOM"),
	HX_CSTRING("validate_localCOM"),
	HX_CSTRING("validate_angDrag"),
	HX_CSTRING("validate_area_inertia"),
	HX_CSTRING("invalidate_aabb"),
	HX_CSTRING("force_validate_aabb"),
	HX_CSTRING("validate_aabb"),
	HX_CSTRING("zip_aabb"),
	HX_CSTRING("aabb"),
	HX_CSTRING("clear"),
	HX_CSTRING("pairs"),
	HX_CSTRING("node"),
	HX_CSTRING("sweep"),
	HX_CSTRING("sensorEnabled"),
	HX_CSTRING("fluidEnabled"),
	HX_CSTRING("fluidProperties"),
	HX_CSTRING("filter"),
	HX_CSTRING("material"),
	HX_CSTRING("refmaterial"),
	HX_CSTRING("polygon"),
	HX_CSTRING("circle"),
	HX_CSTRING("validate_sweepRadius"),
	HX_CSTRING("invalidate_sweepRadius"),
	HX_CSTRING("sweepCoef"),
	HX_CSTRING("zip_sweepRadius"),
	HX_CSTRING("sweepRadius"),
	HX_CSTRING("wrap_worldCOM"),
	HX_CSTRING("wrap_localCOM"),
	HX_CSTRING("zip_worldCOM"),
	HX_CSTRING("worldCOMy"),
	HX_CSTRING("worldCOMx"),
	HX_CSTRING("zip_localCOM"),
	HX_CSTRING("localCOMy"),
	HX_CSTRING("localCOMx"),
	HX_CSTRING("zip_angDrag"),
	HX_CSTRING("angDrag"),
	HX_CSTRING("inertia"),
	HX_CSTRING("zip_area_inertia"),
	HX_CSTRING("area"),
	HX_CSTRING("isPolygon"),
	HX_CSTRING("isCircle"),
	HX_CSTRING("type"),
	HX_CSTRING("body"),
	HX_CSTRING("outer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Shape_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Shape_obj::__mClass,"__mClass");
};

#endif

Class ZPP_Shape_obj::__mClass;

void ZPP_Shape_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.shape.ZPP_Shape"), hx::TCanCast< ZPP_Shape_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void ZPP_Shape_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace shape
