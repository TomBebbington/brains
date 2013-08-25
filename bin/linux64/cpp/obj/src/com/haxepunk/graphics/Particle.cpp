#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_graphics_Particle
#include <com/haxepunk/graphics/Particle.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_ParticleType
#include <com/haxepunk/graphics/ParticleType.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{

Void Particle_obj::__construct()
{
HX_STACK_FRAME("Particle","new","Particle.new","com/haxepunk/graphics/Particle.hx",16)
{
	HX_STACK_LINE(17)
	this->_time = (int)0;
	HX_STACK_LINE(18)
	this->_duration = (int)0;
	HX_STACK_LINE(19)
	this->_x = this->_y = (int)0;
	HX_STACK_LINE(20)
	this->_moveX = this->_moveY = (int)0;
	HX_STACK_LINE(21)
	this->_gravity = (int)0;
}
;
	return null();
}

Particle_obj::~Particle_obj() { }

Dynamic Particle_obj::__CreateEmpty() { return  new Particle_obj; }
hx::ObjectPtr< Particle_obj > Particle_obj::__new()
{  hx::ObjectPtr< Particle_obj > result = new Particle_obj();
	result->__construct();
	return result;}

Dynamic Particle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Particle_obj > result = new Particle_obj();
	result->__construct();
	return result;}


Particle_obj::Particle_obj()
{
}

void Particle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Particle);
	HX_MARK_MEMBER_NAME(_next,"_next");
	HX_MARK_MEMBER_NAME(_prev,"_prev");
	HX_MARK_MEMBER_NAME(_gravity,"_gravity");
	HX_MARK_MEMBER_NAME(_moveY,"_moveY");
	HX_MARK_MEMBER_NAME(_moveX,"_moveX");
	HX_MARK_MEMBER_NAME(_y,"_y");
	HX_MARK_MEMBER_NAME(_x,"_x");
	HX_MARK_MEMBER_NAME(_duration,"_duration");
	HX_MARK_MEMBER_NAME(_time,"_time");
	HX_MARK_MEMBER_NAME(_type,"_type");
	HX_MARK_END_CLASS();
}

void Particle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_next,"_next");
	HX_VISIT_MEMBER_NAME(_prev,"_prev");
	HX_VISIT_MEMBER_NAME(_gravity,"_gravity");
	HX_VISIT_MEMBER_NAME(_moveY,"_moveY");
	HX_VISIT_MEMBER_NAME(_moveX,"_moveX");
	HX_VISIT_MEMBER_NAME(_y,"_y");
	HX_VISIT_MEMBER_NAME(_x,"_x");
	HX_VISIT_MEMBER_NAME(_duration,"_duration");
	HX_VISIT_MEMBER_NAME(_time,"_time");
	HX_VISIT_MEMBER_NAME(_type,"_type");
}

Dynamic Particle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_y") ) { return _y; }
		if (HX_FIELD_EQ(inName,"_x") ) { return _x; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_next") ) { return _next; }
		if (HX_FIELD_EQ(inName,"_prev") ) { return _prev; }
		if (HX_FIELD_EQ(inName,"_time") ) { return _time; }
		if (HX_FIELD_EQ(inName,"_type") ) { return _type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_moveY") ) { return _moveY; }
		if (HX_FIELD_EQ(inName,"_moveX") ) { return _moveX; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_gravity") ) { return _gravity; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_duration") ) { return _duration; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Particle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_y") ) { _y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_x") ) { _x=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_next") ) { _next=inValue.Cast< ::com::haxepunk::graphics::Particle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prev") ) { _prev=inValue.Cast< ::com::haxepunk::graphics::Particle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_type") ) { _type=inValue.Cast< ::com::haxepunk::graphics::ParticleType >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_moveY") ) { _moveY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_moveX") ) { _moveX=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_gravity") ) { _gravity=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_duration") ) { _duration=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Particle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_next"));
	outFields->push(HX_CSTRING("_prev"));
	outFields->push(HX_CSTRING("_gravity"));
	outFields->push(HX_CSTRING("_moveY"));
	outFields->push(HX_CSTRING("_moveX"));
	outFields->push(HX_CSTRING("_y"));
	outFields->push(HX_CSTRING("_x"));
	outFields->push(HX_CSTRING("_duration"));
	outFields->push(HX_CSTRING("_time"));
	outFields->push(HX_CSTRING("_type"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_next"),
	HX_CSTRING("_prev"),
	HX_CSTRING("_gravity"),
	HX_CSTRING("_moveY"),
	HX_CSTRING("_moveX"),
	HX_CSTRING("_y"),
	HX_CSTRING("_x"),
	HX_CSTRING("_duration"),
	HX_CSTRING("_time"),
	HX_CSTRING("_type"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Particle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Particle_obj::__mClass,"__mClass");
};

#endif

Class Particle_obj::__mClass;

void Particle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.Particle"), hx::TCanCast< Particle_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void Particle_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
