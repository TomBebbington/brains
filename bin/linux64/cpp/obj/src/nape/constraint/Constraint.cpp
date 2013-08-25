#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeList
#include <nape/callbacks/CbTypeList.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintList
#include <nape/constraint/ConstraintList.h>
#endif
#ifndef INCLUDED_nape_geom_MatMN
#include <nape/geom/MatMN.h>
#endif
#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Compound
#include <nape/phys/Compound.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_CopyHelper
#include <zpp_nape/constraint/ZPP_CopyHelper.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_ConstraintList
#include <zpp_nape/util/ZPP_ConstraintList.h>
#endif
namespace nape{
namespace constraint{

Void Constraint_obj::__construct()
{
HX_STACK_FRAME("Constraint","new","Constraint.new","nape/constraint/Constraint.hx",177)
{
	HX_STACK_LINE(208)
	this->debugDraw = true;
	HX_STACK_LINE(642)
	this->zpp_inner->insert_cbtype(::zpp_nape::callbacks::ZPP_CbType_obj::ANY_CONSTRAINT->zpp_inner);
	HX_STACK_LINE(644)
	HX_STACK_DO_THROW(HX_CSTRING("Error: Constraint cannot be instantiated derp!"));
}
;
	return null();
}

Constraint_obj::~Constraint_obj() { }

Dynamic Constraint_obj::__CreateEmpty() { return  new Constraint_obj; }
hx::ObjectPtr< Constraint_obj > Constraint_obj::__new()
{  hx::ObjectPtr< Constraint_obj > result = new Constraint_obj();
	result->__construct();
	return result;}

Dynamic Constraint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Constraint_obj > result = new Constraint_obj();
	result->__construct();
	return result;}

::nape::constraint::Constraint Constraint_obj::copy( ){
	HX_STACK_FRAME("Constraint","copy","Constraint.copy","nape/constraint/Constraint.hx",662)
	HX_STACK_THIS(this)
	HX_STACK_LINE(662)
	return this->zpp_inner->copy(null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,copy,return )

::String Constraint_obj::toString( ){
	HX_STACK_FRAME("Constraint","toString","Constraint.toString","nape/constraint/Constraint.hx",651)
	HX_STACK_THIS(this)
	HX_STACK_LINE(651)
	return HX_CSTRING("{Constraint}");
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,toString,return )

::nape::callbacks::CbTypeList Constraint_obj::get_cbTypes( ){
	HX_STACK_FRAME("Constraint","get_cbTypes","Constraint.get_cbTypes","nape/constraint/Constraint.hx",632)
	HX_STACK_THIS(this)
	HX_STACK_LINE(633)
	if (((this->zpp_inner->wrap_cbTypes == null()))){
		HX_STACK_LINE(634)
		this->zpp_inner->setupcbTypes();
	}
	HX_STACK_LINE(636)
	return this->zpp_inner->wrap_cbTypes;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_cbTypes,return )

Void Constraint_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_FRAME("Constraint","visitBodies","Constraint.visitBodies","nape/constraint/Constraint.hx",622)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,visitBodies,(void))

::nape::geom::Vec3 Constraint_obj::bodyImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("Constraint","bodyImpulse","Constraint.bodyImpulse","nape/constraint/Constraint.hx",611)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(611)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,bodyImpulse,return )

::nape::geom::MatMN Constraint_obj::impulse( ){
	HX_STACK_FRAME("Constraint","impulse","Constraint.impulse","nape/constraint/Constraint.hx",598)
	HX_STACK_THIS(this)
	HX_STACK_LINE(598)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,impulse,return )

bool Constraint_obj::set_removeOnBreak( bool removeOnBreak){
	HX_STACK_FRAME("Constraint","set_removeOnBreak","Constraint.set_removeOnBreak","nape/constraint/Constraint.hx",586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(removeOnBreak,"removeOnBreak")
	HX_STACK_LINE(588)
	this->zpp_inner->removeOnBreak = removeOnBreak;
	HX_STACK_LINE(590)
	return this->zpp_inner->removeOnBreak;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_removeOnBreak,return )

bool Constraint_obj::get_removeOnBreak( ){
	HX_STACK_FRAME("Constraint","get_removeOnBreak","Constraint.get_removeOnBreak","nape/constraint/Constraint.hx",584)
	HX_STACK_THIS(this)
	HX_STACK_LINE(584)
	return this->zpp_inner->removeOnBreak;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_removeOnBreak,return )

bool Constraint_obj::set_breakUnderError( bool breakUnderError){
	HX_STACK_FRAME("Constraint","set_breakUnderError","Constraint.set_breakUnderError","nape/constraint/Constraint.hx",564)
	HX_STACK_THIS(this)
	HX_STACK_ARG(breakUnderError,"breakUnderError")
	HX_STACK_LINE(566)
	if (((this->zpp_inner->breakUnderError != breakUnderError))){
		HX_STACK_LINE(567)
		this->zpp_inner->breakUnderError = breakUnderError;
		HX_STACK_LINE(568)
		this->zpp_inner->wake();
	}
	HX_STACK_LINE(571)
	return this->zpp_inner->breakUnderError;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_breakUnderError,return )

bool Constraint_obj::get_breakUnderError( ){
	HX_STACK_FRAME("Constraint","get_breakUnderError","Constraint.get_breakUnderError","nape/constraint/Constraint.hx",562)
	HX_STACK_THIS(this)
	HX_STACK_LINE(562)
	return this->zpp_inner->breakUnderError;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_breakUnderError,return )

bool Constraint_obj::set_breakUnderForce( bool breakUnderForce){
	HX_STACK_FRAME("Constraint","set_breakUnderForce","Constraint.set_breakUnderForce","nape/constraint/Constraint.hx",543)
	HX_STACK_THIS(this)
	HX_STACK_ARG(breakUnderForce,"breakUnderForce")
	HX_STACK_LINE(545)
	if (((this->zpp_inner->breakUnderForce != breakUnderForce))){
		HX_STACK_LINE(546)
		this->zpp_inner->breakUnderForce = breakUnderForce;
		HX_STACK_LINE(547)
		this->zpp_inner->wake();
	}
	HX_STACK_LINE(550)
	return this->zpp_inner->breakUnderForce;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_breakUnderForce,return )

bool Constraint_obj::get_breakUnderForce( ){
	HX_STACK_FRAME("Constraint","get_breakUnderForce","Constraint.get_breakUnderForce","nape/constraint/Constraint.hx",541)
	HX_STACK_THIS(this)
	HX_STACK_LINE(541)
	return this->zpp_inner->breakUnderForce;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_breakUnderForce,return )

Float Constraint_obj::set_maxError( Float maxError){
	HX_STACK_FRAME("Constraint","set_maxError","Constraint.set_maxError","nape/constraint/Constraint.hx",512)
	HX_STACK_THIS(this)
	HX_STACK_ARG(maxError,"maxError")
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(515)
		if (((maxError != maxError))){
			HX_STACK_LINE(516)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Constraint::maxError cannot be NaN"));
		}
		HX_STACK_LINE(518)
		if (((maxError < (int)0))){
			HX_STACK_LINE(519)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Constraint::maxError must be >=0"));
		}
		HX_STACK_LINE(522)
		if (((this->zpp_inner->maxError != maxError))){
			HX_STACK_LINE(523)
			this->zpp_inner->maxError = maxError;
			HX_STACK_LINE(524)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(527)
	return this->zpp_inner->maxError;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_maxError,return )

Float Constraint_obj::get_maxError( ){
	HX_STACK_FRAME("Constraint","get_maxError","Constraint.get_maxError","nape/constraint/Constraint.hx",510)
	HX_STACK_THIS(this)
	HX_STACK_LINE(510)
	return this->zpp_inner->maxError;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_maxError,return )

Float Constraint_obj::set_maxForce( Float maxForce){
	HX_STACK_FRAME("Constraint","set_maxForce","Constraint.set_maxForce","nape/constraint/Constraint.hx",478)
	HX_STACK_THIS(this)
	HX_STACK_ARG(maxForce,"maxForce")
	HX_STACK_LINE(479)
	{
		HX_STACK_LINE(481)
		if (((maxForce != maxForce))){
			HX_STACK_LINE(482)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Constraint::maxForce cannot be NaN"));
		}
		HX_STACK_LINE(484)
		if (((maxForce < (int)0))){
			HX_STACK_LINE(485)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Constraint::maxForce must be >=0"));
		}
		HX_STACK_LINE(488)
		if (((this->zpp_inner->maxForce != maxForce))){
			HX_STACK_LINE(489)
			this->zpp_inner->maxForce = maxForce;
			HX_STACK_LINE(490)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(493)
	return this->zpp_inner->maxForce;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_maxForce,return )

Float Constraint_obj::get_maxForce( ){
	HX_STACK_FRAME("Constraint","get_maxForce","Constraint.get_maxForce","nape/constraint/Constraint.hx",476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(476)
	return this->zpp_inner->maxForce;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_maxForce,return )

Float Constraint_obj::set_damping( Float damping){
	HX_STACK_FRAME("Constraint","set_damping","Constraint.set_damping","nape/constraint/Constraint.hx",442)
	HX_STACK_THIS(this)
	HX_STACK_ARG(damping,"damping")
	HX_STACK_LINE(443)
	{
		HX_STACK_LINE(445)
		if (((damping != damping))){
			HX_STACK_LINE(446)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Constraint::Damping cannot be Nan"));
		}
		HX_STACK_LINE(448)
		if (((damping < (int)0))){
			HX_STACK_LINE(449)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Constraint::Damping must be >=0"));
		}
		HX_STACK_LINE(452)
		if (((this->zpp_inner->damping != damping))){
			HX_STACK_LINE(453)
			this->zpp_inner->damping = damping;
			HX_STACK_LINE(454)
			if ((!(this->zpp_inner->stiff))){
				HX_STACK_LINE(455)
				this->zpp_inner->wake();
			}
		}
	}
	HX_STACK_LINE(459)
	return this->zpp_inner->damping;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_damping,return )

Float Constraint_obj::get_damping( ){
	HX_STACK_FRAME("Constraint","get_damping","Constraint.get_damping","nape/constraint/Constraint.hx",440)
	HX_STACK_THIS(this)
	HX_STACK_LINE(440)
	return this->zpp_inner->damping;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_damping,return )

Float Constraint_obj::set_frequency( Float frequency){
	HX_STACK_FRAME("Constraint","set_frequency","Constraint.set_frequency","nape/constraint/Constraint.hx",405)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frequency,"frequency")
	HX_STACK_LINE(406)
	{
		HX_STACK_LINE(408)
		if (((frequency != frequency))){
			HX_STACK_LINE(409)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Constraint::Frequency cannot be NaN"));
		}
		HX_STACK_LINE(411)
		if (((frequency <= (int)0))){
			HX_STACK_LINE(412)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Constraint::Frequency must be >0"));
		}
		HX_STACK_LINE(415)
		if (((this->zpp_inner->frequency != frequency))){
			HX_STACK_LINE(416)
			this->zpp_inner->frequency = frequency;
			HX_STACK_LINE(417)
			if ((!(this->zpp_inner->stiff))){
				HX_STACK_LINE(418)
				this->zpp_inner->wake();
			}
		}
	}
	HX_STACK_LINE(422)
	return this->zpp_inner->frequency;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_frequency,return )

Float Constraint_obj::get_frequency( ){
	HX_STACK_FRAME("Constraint","get_frequency","Constraint.get_frequency","nape/constraint/Constraint.hx",403)
	HX_STACK_THIS(this)
	HX_STACK_LINE(403)
	return this->zpp_inner->frequency;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_frequency,return )

bool Constraint_obj::set_stiff( bool stiff){
	HX_STACK_FRAME("Constraint","set_stiff","Constraint.set_stiff","nape/constraint/Constraint.hx",379)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stiff,"stiff")
	HX_STACK_LINE(381)
	if (((this->zpp_inner->stiff != stiff))){
		HX_STACK_LINE(382)
		this->zpp_inner->stiff = stiff;
		HX_STACK_LINE(383)
		this->zpp_inner->wake();
	}
	HX_STACK_LINE(386)
	return this->zpp_inner->stiff;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_stiff,return )

bool Constraint_obj::get_stiff( ){
	HX_STACK_FRAME("Constraint","get_stiff","Constraint.get_stiff","nape/constraint/Constraint.hx",377)
	HX_STACK_THIS(this)
	HX_STACK_LINE(377)
	return this->zpp_inner->stiff;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_stiff,return )

bool Constraint_obj::set_ignore( bool ignore){
	HX_STACK_FRAME("Constraint","set_ignore","Constraint.set_ignore","nape/constraint/Constraint.hx",350)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ignore,"ignore")
	HX_STACK_LINE(352)
	if (((this->zpp_inner->ignore != ignore))){
		HX_STACK_LINE(353)
		this->zpp_inner->ignore = ignore;
		HX_STACK_LINE(354)
		this->zpp_inner->wake();
	}
	HX_STACK_LINE(357)
	return this->zpp_inner->ignore;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_ignore,return )

bool Constraint_obj::get_ignore( ){
	HX_STACK_FRAME("Constraint","get_ignore","Constraint.get_ignore","nape/constraint/Constraint.hx",348)
	HX_STACK_THIS(this)
	HX_STACK_LINE(348)
	return this->zpp_inner->ignore;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_ignore,return )

bool Constraint_obj::set_active( bool active){
	HX_STACK_FRAME("Constraint","set_active","Constraint.set_active","nape/constraint/Constraint.hx",312)
	HX_STACK_THIS(this)
	HX_STACK_ARG(active,"active")
	HX_STACK_LINE(314)
	if (((this->zpp_inner->active != active))){
		HX_STACK_LINE(315)
		if (((this->zpp_inner->component != null()))){
			HX_STACK_LINE(315)
			this->zpp_inner->component->woken = false;
		}
		HX_STACK_LINE(316)
		this->zpp_inner->clearcache();
		HX_STACK_LINE(317)
		if ((active)){
			HX_STACK_LINE(318)
			this->zpp_inner->active = active;
			HX_STACK_LINE(319)
			this->zpp_inner->activate();
			HX_STACK_LINE(320)
			if (((this->zpp_inner->space != null()))){
				HX_STACK_LINE(321)
				if (((this->zpp_inner->component != null()))){
					HX_STACK_LINE(321)
					this->zpp_inner->component->sleeping = true;
				}
				HX_STACK_LINE(322)
				this->zpp_inner->space->wake_constraint(this->zpp_inner,true);
			}
		}
		else{
			HX_STACK_LINE(326)
			if (((this->zpp_inner->space != null()))){
				HX_STACK_LINE(327)
				this->zpp_inner->wake();
				HX_STACK_LINE(328)
				this->zpp_inner->space->live_constraints->remove(this->zpp_inner);
			}
			HX_STACK_LINE(330)
			this->zpp_inner->active = active;
			HX_STACK_LINE(331)
			this->zpp_inner->deactivate();
		}
	}
	HX_STACK_LINE(335)
	return this->zpp_inner->active;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_active,return )

bool Constraint_obj::get_active( ){
	HX_STACK_FRAME("Constraint","get_active","Constraint.get_active","nape/constraint/Constraint.hx",310)
	HX_STACK_THIS(this)
	HX_STACK_LINE(310)
	return this->zpp_inner->active;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_active,return )

bool Constraint_obj::get_isSleeping( ){
	HX_STACK_FRAME("Constraint","get_isSleeping","Constraint.get_isSleeping","nape/constraint/Constraint.hx",290)
	HX_STACK_THIS(this)
	HX_STACK_LINE(292)
	if (((bool((this->zpp_inner->space == null())) || bool(!(this->zpp_inner->active))))){
		HX_STACK_LINE(293)
		HX_STACK_DO_THROW((HX_CSTRING("Error: isSleeping only makes sense if constraint is") + HX_CSTRING(" active and inside a space")));
	}
	HX_STACK_LINE(296)
	return this->zpp_inner->component->sleeping;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_isSleeping,return )

::nape::space::Space Constraint_obj::set_space( ::nape::space::Space space){
	HX_STACK_FRAME("Constraint","set_space","Constraint.set_space","nape/constraint/Constraint.hx",251)
	HX_STACK_THIS(this)
	HX_STACK_ARG(space,"space")
	HX_STACK_LINE(252)
	{
		HX_STACK_LINE(254)
		if (((this->zpp_inner->compound != null()))){
			HX_STACK_LINE(255)
			HX_STACK_DO_THROW((HX_CSTRING("Error: Cannot set the space of a Constraint belonging to") + HX_CSTRING(" a Compound, only the root Compound space can be set")));
		}
		HX_STACK_LINE(258)
		if (((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != space))){
			HX_STACK_LINE(259)
			if (((this->zpp_inner->component != null()))){
				HX_STACK_LINE(259)
				this->zpp_inner->component->woken = false;
			}
			HX_STACK_LINE(260)
			this->zpp_inner->clearcache();
			HX_STACK_LINE(261)
			if (((this->zpp_inner->space != null()))){
				HX_STACK_LINE(262)
				this->zpp_inner->space->outer->zpp_inner->wrap_constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(264)
			if (((space != null()))){
				HX_STACK_LINE(265)
				::nape::constraint::ConstraintList _this = space->zpp_inner->wrap_constraints;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(265)
				if ((_this->zpp_inner->reverse_flag)){
					HX_STACK_LINE(265)
					_this->push(hx::ObjectPtr<OBJ_>(this));
				}
				else{
					HX_STACK_LINE(265)
					_this->unshift(hx::ObjectPtr<OBJ_>(this));
				}
			}
			else{
				HX_STACK_LINE(268)
				this->zpp_inner->space = null();
			}
		}
	}
	HX_STACK_LINE(272)
	if (((this->zpp_inner->space == null()))){
		HX_STACK_LINE(272)
		return null();
	}
	else{
		HX_STACK_LINE(272)
		return this->zpp_inner->space->outer;
	}
	HX_STACK_LINE(272)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_space,return )

::nape::space::Space Constraint_obj::get_space( ){
	HX_STACK_FRAME("Constraint","get_space","Constraint.get_space","nape/constraint/Constraint.hx",249)
	HX_STACK_THIS(this)
	HX_STACK_LINE(249)
	if (((this->zpp_inner->space == null()))){
		HX_STACK_LINE(249)
		return null();
	}
	else{
		HX_STACK_LINE(249)
		return this->zpp_inner->space->outer;
	}
	HX_STACK_LINE(249)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_space,return )

::nape::phys::Compound Constraint_obj::set_compound( ::nape::phys::Compound compound){
	HX_STACK_FRAME("Constraint","set_compound","Constraint.set_compound","nape/constraint/Constraint.hx",222)
	HX_STACK_THIS(this)
	HX_STACK_ARG(compound,"compound")
	HX_STACK_LINE(224)
	if (((((  (((this->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(this->zpp_inner->compound->outer) )) != compound))){
		HX_STACK_LINE(225)
		if (((((  (((this->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(this->zpp_inner->compound->outer) )) != null()))){
			HX_STACK_LINE(226)
			((  (((this->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(this->zpp_inner->compound->outer) ))->zpp_inner->wrap_constraints->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(228)
		if (((compound != null()))){
			HX_STACK_LINE(229)
			::nape::constraint::ConstraintList _this = compound->zpp_inner->wrap_constraints;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(229)
			if ((_this->zpp_inner->reverse_flag)){
				HX_STACK_LINE(229)
				_this->push(hx::ObjectPtr<OBJ_>(this));
			}
			else{
				HX_STACK_LINE(229)
				_this->unshift(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
	HX_STACK_LINE(233)
	if (((this->zpp_inner->compound == null()))){
		HX_STACK_LINE(233)
		return null();
	}
	else{
		HX_STACK_LINE(233)
		return this->zpp_inner->compound->outer;
	}
	HX_STACK_LINE(233)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_compound,return )

::nape::phys::Compound Constraint_obj::get_compound( ){
	HX_STACK_FRAME("Constraint","get_compound","Constraint.get_compound","nape/constraint/Constraint.hx",220)
	HX_STACK_THIS(this)
	HX_STACK_LINE(220)
	if (((this->zpp_inner->compound == null()))){
		HX_STACK_LINE(220)
		return null();
	}
	else{
		HX_STACK_LINE(220)
		return this->zpp_inner->compound->outer;
	}
	HX_STACK_LINE(220)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_compound,return )

Dynamic Constraint_obj::get_userData( ){
	HX_STACK_FRAME("Constraint","get_userData","Constraint.get_userData","nape/constraint/Constraint.hx",195)
	HX_STACK_THIS(this)
	HX_STACK_LINE(196)
	if (((this->zpp_inner->userData == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure","*.closure","nape/constraint/Constraint.hx",197)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(197)
		this->zpp_inner->userData = _Function_2_1::Block();
	}
	HX_STACK_LINE(199)
	return this->zpp_inner->userData;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_userData,return )


Constraint_obj::Constraint_obj()
{
}

void Constraint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Constraint);
	HX_MARK_MEMBER_NAME(debugDraw,"debugDraw");
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Constraint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(debugDraw,"debugDraw");
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic Constraint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stiff") ) { return get_stiff(); }
		if (HX_FIELD_EQ(inName,"space") ) { return get_space(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ignore") ) { return get_ignore(); }
		if (HX_FIELD_EQ(inName,"active") ) { return get_active(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cbTypes") ) { return get_cbTypes(); }
		if (HX_FIELD_EQ(inName,"impulse") ) { return impulse_dyn(); }
		if (HX_FIELD_EQ(inName,"damping") ) { return get_damping(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"maxError") ) { return get_maxError(); }
		if (HX_FIELD_EQ(inName,"maxForce") ) { return get_maxForce(); }
		if (HX_FIELD_EQ(inName,"compound") ) { return get_compound(); }
		if (HX_FIELD_EQ(inName,"userData") ) { return get_userData(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frequency") ) { return get_frequency(); }
		if (HX_FIELD_EQ(inName,"set_stiff") ) { return set_stiff_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stiff") ) { return get_stiff_dyn(); }
		if (HX_FIELD_EQ(inName,"set_space") ) { return set_space_dyn(); }
		if (HX_FIELD_EQ(inName,"get_space") ) { return get_space_dyn(); }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw; }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_ignore") ) { return set_ignore_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ignore") ) { return get_ignore_dyn(); }
		if (HX_FIELD_EQ(inName,"set_active") ) { return set_active_dyn(); }
		if (HX_FIELD_EQ(inName,"get_active") ) { return get_active_dyn(); }
		if (HX_FIELD_EQ(inName,"isSleeping") ) { return get_isSleeping(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_cbTypes") ) { return get_cbTypes_dyn(); }
		if (HX_FIELD_EQ(inName,"visitBodies") ) { return visitBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"bodyImpulse") ) { return bodyImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"set_damping") ) { return set_damping_dyn(); }
		if (HX_FIELD_EQ(inName,"get_damping") ) { return get_damping_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_maxError") ) { return set_maxError_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxError") ) { return get_maxError_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxForce") ) { return set_maxForce_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxForce") ) { return get_maxForce_dyn(); }
		if (HX_FIELD_EQ(inName,"set_compound") ) { return set_compound_dyn(); }
		if (HX_FIELD_EQ(inName,"get_compound") ) { return get_compound_dyn(); }
		if (HX_FIELD_EQ(inName,"get_userData") ) { return get_userData_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeOnBreak") ) { return get_removeOnBreak(); }
		if (HX_FIELD_EQ(inName,"set_frequency") ) { return set_frequency_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frequency") ) { return get_frequency_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_isSleeping") ) { return get_isSleeping_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"breakUnderError") ) { return get_breakUnderError(); }
		if (HX_FIELD_EQ(inName,"breakUnderForce") ) { return get_breakUnderForce(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_removeOnBreak") ) { return set_removeOnBreak_dyn(); }
		if (HX_FIELD_EQ(inName,"get_removeOnBreak") ) { return get_removeOnBreak_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_breakUnderError") ) { return set_breakUnderError_dyn(); }
		if (HX_FIELD_EQ(inName,"get_breakUnderError") ) { return get_breakUnderError_dyn(); }
		if (HX_FIELD_EQ(inName,"set_breakUnderForce") ) { return set_breakUnderForce_dyn(); }
		if (HX_FIELD_EQ(inName,"get_breakUnderForce") ) { return get_breakUnderForce_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Constraint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"stiff") ) { return set_stiff(inValue); }
		if (HX_FIELD_EQ(inName,"space") ) { return set_space(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ignore") ) { return set_ignore(inValue); }
		if (HX_FIELD_EQ(inName,"active") ) { return set_active(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"damping") ) { return set_damping(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxError") ) { return set_maxError(inValue); }
		if (HX_FIELD_EQ(inName,"maxForce") ) { return set_maxForce(inValue); }
		if (HX_FIELD_EQ(inName,"compound") ) { return set_compound(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frequency") ) { return set_frequency(inValue); }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { debugDraw=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::constraint::ZPP_Constraint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeOnBreak") ) { return set_removeOnBreak(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"breakUnderError") ) { return set_breakUnderError(inValue); }
		if (HX_FIELD_EQ(inName,"breakUnderForce") ) { return set_breakUnderForce(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Constraint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("cbTypes"));
	outFields->push(HX_CSTRING("removeOnBreak"));
	outFields->push(HX_CSTRING("breakUnderError"));
	outFields->push(HX_CSTRING("breakUnderForce"));
	outFields->push(HX_CSTRING("maxError"));
	outFields->push(HX_CSTRING("maxForce"));
	outFields->push(HX_CSTRING("damping"));
	outFields->push(HX_CSTRING("frequency"));
	outFields->push(HX_CSTRING("stiff"));
	outFields->push(HX_CSTRING("ignore"));
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("isSleeping"));
	outFields->push(HX_CSTRING("space"));
	outFields->push(HX_CSTRING("compound"));
	outFields->push(HX_CSTRING("debugDraw"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("zpp_inner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("copy"),
	HX_CSTRING("toString"),
	HX_CSTRING("get_cbTypes"),
	HX_CSTRING("visitBodies"),
	HX_CSTRING("bodyImpulse"),
	HX_CSTRING("impulse"),
	HX_CSTRING("set_removeOnBreak"),
	HX_CSTRING("get_removeOnBreak"),
	HX_CSTRING("set_breakUnderError"),
	HX_CSTRING("get_breakUnderError"),
	HX_CSTRING("set_breakUnderForce"),
	HX_CSTRING("get_breakUnderForce"),
	HX_CSTRING("set_maxError"),
	HX_CSTRING("get_maxError"),
	HX_CSTRING("set_maxForce"),
	HX_CSTRING("get_maxForce"),
	HX_CSTRING("set_damping"),
	HX_CSTRING("get_damping"),
	HX_CSTRING("set_frequency"),
	HX_CSTRING("get_frequency"),
	HX_CSTRING("set_stiff"),
	HX_CSTRING("get_stiff"),
	HX_CSTRING("set_ignore"),
	HX_CSTRING("get_ignore"),
	HX_CSTRING("set_active"),
	HX_CSTRING("get_active"),
	HX_CSTRING("get_isSleeping"),
	HX_CSTRING("set_space"),
	HX_CSTRING("get_space"),
	HX_CSTRING("set_compound"),
	HX_CSTRING("get_compound"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("get_userData"),
	HX_CSTRING("zpp_inner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Constraint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Constraint_obj::__mClass,"__mClass");
};

#endif

Class Constraint_obj::__mClass;

void Constraint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.constraint.Constraint"), hx::TCanCast< Constraint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void Constraint_obj::__boot()
{
}

} // end namespace nape
} // end namespace constraint
