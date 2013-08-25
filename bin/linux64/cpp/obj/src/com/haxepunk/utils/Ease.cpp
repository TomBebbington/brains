#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_utils_Ease
#include <com/haxepunk/utils/Ease.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void Ease_obj::__construct()
{
	return null();
}

Ease_obj::~Ease_obj() { }

Dynamic Ease_obj::__CreateEmpty() { return  new Ease_obj; }
hx::ObjectPtr< Ease_obj > Ease_obj::__new()
{  hx::ObjectPtr< Ease_obj > result = new Ease_obj();
	result->__construct();
	return result;}

Dynamic Ease_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ease_obj > result = new Ease_obj();
	result->__construct();
	return result;}

Float Ease_obj::quadIn( Float t){
	HX_STACK_FRAME("Ease","quadIn","Ease.quadIn","com/haxepunk/utils/Ease.hx",13)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(13)
	return (t * t);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quadIn,return )

Float Ease_obj::quadOut( Float t){
	HX_STACK_FRAME("Ease","quadOut","Ease.quadOut","com/haxepunk/utils/Ease.hx",19)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(19)
	return (-(t) * ((t - (int)2)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quadOut,return )

Float Ease_obj::quadInOut( Float t){
	HX_STACK_FRAME("Ease","quadInOut","Ease.quadInOut","com/haxepunk/utils/Ease.hx",25)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(25)
	if (((t <= .5))){
		HX_STACK_LINE(25)
		return ((t * t) * (int)2);
	}
	else{
		HX_STACK_LINE(25)
		return ((int)1 - ((--(t) * t) * (int)2));
	}
	HX_STACK_LINE(25)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quadInOut,return )

Float Ease_obj::cubeIn( Float t){
	HX_STACK_FRAME("Ease","cubeIn","Ease.cubeIn","com/haxepunk/utils/Ease.hx",31)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(31)
	return ((t * t) * t);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,cubeIn,return )

Float Ease_obj::cubeOut( Float t){
	HX_STACK_FRAME("Ease","cubeOut","Ease.cubeOut","com/haxepunk/utils/Ease.hx",37)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(37)
	return ((int)1 + ((--(t) * t) * t));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,cubeOut,return )

Float Ease_obj::cubeInOut( Float t){
	HX_STACK_FRAME("Ease","cubeInOut","Ease.cubeInOut","com/haxepunk/utils/Ease.hx",43)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(43)
	if (((t <= .5))){
		HX_STACK_LINE(43)
		return (((t * t) * t) * (int)4);
	}
	else{
		HX_STACK_LINE(43)
		return ((int)1 + (((--(t) * t) * t) * (int)4));
	}
	HX_STACK_LINE(43)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,cubeInOut,return )

Float Ease_obj::quartIn( Float t){
	HX_STACK_FRAME("Ease","quartIn","Ease.quartIn","com/haxepunk/utils/Ease.hx",49)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(49)
	return (((t * t) * t) * t);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quartIn,return )

Float Ease_obj::quartOut( Float t){
	HX_STACK_FRAME("Ease","quartOut","Ease.quartOut","com/haxepunk/utils/Ease.hx",55)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(55)
	return ((int)1 - ((((hx::SubEq(t,(int)1)) * t) * t) * t));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quartOut,return )

Float Ease_obj::quartInOut( Float t){
	HX_STACK_FRAME("Ease","quartInOut","Ease.quartInOut","com/haxepunk/utils/Ease.hx",61)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(61)
	if (((t <= .5))){
		HX_STACK_LINE(61)
		return ((((t * t) * t) * t) * (int)8);
	}
	else{
		HX_STACK_LINE(61)
		return ((Float((((int)1 - ((((t = ((t * (int)2) - (int)2)) * t) * t) * t)))) / Float((int)2)) + .5);
	}
	HX_STACK_LINE(61)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quartInOut,return )

Float Ease_obj::quintIn( Float t){
	HX_STACK_FRAME("Ease","quintIn","Ease.quintIn","com/haxepunk/utils/Ease.hx",67)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(67)
	return ((((t * t) * t) * t) * t);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quintIn,return )

Float Ease_obj::quintOut( Float t){
	HX_STACK_FRAME("Ease","quintOut","Ease.quintOut","com/haxepunk/utils/Ease.hx",73)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(73)
	return ((((((t = (t - (int)1)) * t) * t) * t) * t) + (int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quintOut,return )

Float Ease_obj::quintInOut( Float t){
	HX_STACK_FRAME("Ease","quintInOut","Ease.quintInOut","com/haxepunk/utils/Ease.hx",79)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(79)
	if ((((hx::MultEq(t,(int)2)) < (int)1))){
		HX_STACK_LINE(79)
		return (Float(((((t * t) * t) * t) * t)) / Float((int)2));
	}
	else{
		HX_STACK_LINE(79)
		return (Float((((((((hx::SubEq(t,(int)2)) * t) * t) * t) * t) + (int)2))) / Float((int)2));
	}
	HX_STACK_LINE(79)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quintInOut,return )

Float Ease_obj::sineIn( Float t){
	HX_STACK_FRAME("Ease","sineIn","Ease.sineIn","com/haxepunk/utils/Ease.hx",85)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(85)
	return (-(::Math_obj::cos((::com::haxepunk::utils::Ease_obj::get_PI2() * t))) + (int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,sineIn,return )

Float Ease_obj::sineOut( Float t){
	HX_STACK_FRAME("Ease","sineOut","Ease.sineOut","com/haxepunk/utils/Ease.hx",91)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(91)
	return ::Math_obj::sin((::com::haxepunk::utils::Ease_obj::get_PI2() * t));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,sineOut,return )

Float Ease_obj::sineInOut( Float t){
	HX_STACK_FRAME("Ease","sineInOut","Ease.sineInOut","com/haxepunk/utils/Ease.hx",97)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(97)
	return ((Float(-(::Math_obj::cos((::com::haxepunk::utils::Ease_obj::get_PI() * t)))) / Float((int)2)) + .5);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,sineInOut,return )

Float Ease_obj::bounceIn( Float t){
	HX_STACK_FRAME("Ease","bounceIn","Ease.bounceIn","com/haxepunk/utils/Ease.hx",102)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(103)
	t = ((int)1 - t);
	HX_STACK_LINE(104)
	if (((t < (Float((int)1) / Float(2.75))))){
		HX_STACK_LINE(104)
		return ((int)1 - ((7.5625 * t) * t));
	}
	HX_STACK_LINE(105)
	if (((t < (Float((int)2) / Float(2.75))))){
		HX_STACK_LINE(105)
		return ((int)1 - ((((7.5625 * ((t - (Float(1.5) / Float(2.75))))) * ((t - (Float(1.5) / Float(2.75))))) + .75)));
	}
	HX_STACK_LINE(106)
	if (((t < (Float(2.5) / Float(2.75))))){
		HX_STACK_LINE(106)
		return ((int)1 - ((((7.5625 * ((t - (Float(2.25) / Float(2.75))))) * ((t - (Float(2.25) / Float(2.75))))) + .9375)));
	}
	HX_STACK_LINE(107)
	return ((int)1 - ((((7.5625 * ((t - (Float(2.625) / Float(2.75))))) * ((t - (Float(2.625) / Float(2.75))))) + .984375)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,bounceIn,return )

Float Ease_obj::bounceOut( Float t){
	HX_STACK_FRAME("Ease","bounceOut","Ease.bounceOut","com/haxepunk/utils/Ease.hx",112)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(113)
	if (((t < (Float((int)1) / Float(2.75))))){
		HX_STACK_LINE(113)
		return ((7.5625 * t) * t);
	}
	HX_STACK_LINE(114)
	if (((t < (Float((int)2) / Float(2.75))))){
		HX_STACK_LINE(114)
		return (((7.5625 * ((t - (Float(1.5) / Float(2.75))))) * ((t - (Float(1.5) / Float(2.75))))) + .75);
	}
	HX_STACK_LINE(115)
	if (((t < (Float(2.5) / Float(2.75))))){
		HX_STACK_LINE(115)
		return (((7.5625 * ((t - (Float(2.25) / Float(2.75))))) * ((t - (Float(2.25) / Float(2.75))))) + .9375);
	}
	HX_STACK_LINE(116)
	return (((7.5625 * ((t - (Float(2.625) / Float(2.75))))) * ((t - (Float(2.625) / Float(2.75))))) + .984375);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,bounceOut,return )

Float Ease_obj::bounceInOut( Float t){
	HX_STACK_FRAME("Ease","bounceInOut","Ease.bounceInOut","com/haxepunk/utils/Ease.hx",121)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(122)
	if (((t < .5))){
		HX_STACK_LINE(124)
		t = ((int)1 - (t * (int)2));
		HX_STACK_LINE(125)
		if (((t < (Float((int)1) / Float(2.75))))){
			HX_STACK_LINE(125)
			return (Float((((int)1 - ((7.5625 * t) * t)))) / Float((int)2));
		}
		HX_STACK_LINE(126)
		if (((t < (Float((int)2) / Float(2.75))))){
			HX_STACK_LINE(126)
			return (Float((((int)1 - ((((7.5625 * ((t - (Float(1.5) / Float(2.75))))) * ((t - (Float(1.5) / Float(2.75))))) + .75))))) / Float((int)2));
		}
		HX_STACK_LINE(127)
		if (((t < (Float(2.5) / Float(2.75))))){
			HX_STACK_LINE(127)
			return (Float((((int)1 - ((((7.5625 * ((t - (Float(2.25) / Float(2.75))))) * ((t - (Float(2.25) / Float(2.75))))) + .9375))))) / Float((int)2));
		}
		HX_STACK_LINE(128)
		return (Float((((int)1 - ((((7.5625 * ((t - (Float(2.625) / Float(2.75))))) * ((t - (Float(2.625) / Float(2.75))))) + .984375))))) / Float((int)2));
	}
	HX_STACK_LINE(130)
	t = ((t * (int)2) - (int)1);
	HX_STACK_LINE(131)
	if (((t < (Float((int)1) / Float(2.75))))){
		HX_STACK_LINE(131)
		return ((Float(((7.5625 * t) * t)) / Float((int)2)) + .5);
	}
	HX_STACK_LINE(132)
	if (((t < (Float((int)2) / Float(2.75))))){
		HX_STACK_LINE(132)
		return ((Float(((((7.5625 * ((t - (Float(1.5) / Float(2.75))))) * ((t - (Float(1.5) / Float(2.75))))) + .75))) / Float((int)2)) + .5);
	}
	HX_STACK_LINE(133)
	if (((t < (Float(2.5) / Float(2.75))))){
		HX_STACK_LINE(133)
		return ((Float(((((7.5625 * ((t - (Float(2.25) / Float(2.75))))) * ((t - (Float(2.25) / Float(2.75))))) + .9375))) / Float((int)2)) + .5);
	}
	HX_STACK_LINE(134)
	return ((Float(((((7.5625 * ((t - (Float(2.625) / Float(2.75))))) * ((t - (Float(2.625) / Float(2.75))))) + .984375))) / Float((int)2)) + .5);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,bounceInOut,return )

Float Ease_obj::circIn( Float t){
	HX_STACK_FRAME("Ease","circIn","Ease.circIn","com/haxepunk/utils/Ease.hx",140)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(140)
	return -(((::Math_obj::sqrt(((int)1 - (t * t))) - (int)1)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,circIn,return )

Float Ease_obj::circOut( Float t){
	HX_STACK_FRAME("Ease","circOut","Ease.circOut","com/haxepunk/utils/Ease.hx",146)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(146)
	return ::Math_obj::sqrt(((int)1 - (((t - (int)1)) * ((t - (int)1)))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,circOut,return )

Float Ease_obj::circInOut( Float t){
	HX_STACK_FRAME("Ease","circInOut","Ease.circInOut","com/haxepunk/utils/Ease.hx",152)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(152)
	if (((t <= .5))){
		HX_STACK_LINE(152)
		return (Float(((::Math_obj::sqrt(((int)1 - ((t * t) * (int)4))) - (int)1))) / Float((int)-2));
	}
	else{
		HX_STACK_LINE(152)
		return (Float(((::Math_obj::sqrt(((int)1 - ((((t * (int)2) - (int)2)) * (((t * (int)2) - (int)2))))) + (int)1))) / Float((int)2));
	}
	HX_STACK_LINE(152)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,circInOut,return )

Float Ease_obj::expoIn( Float t){
	HX_STACK_FRAME("Ease","expoIn","Ease.expoIn","com/haxepunk/utils/Ease.hx",158)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(158)
	return ::Math_obj::pow((int)2,((int)10 * ((t - (int)1))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,expoIn,return )

Float Ease_obj::expoOut( Float t){
	HX_STACK_FRAME("Ease","expoOut","Ease.expoOut","com/haxepunk/utils/Ease.hx",164)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(164)
	return (-(::Math_obj::pow((int)2,((int)-10 * t))) + (int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,expoOut,return )

Float Ease_obj::expoInOut( Float t){
	HX_STACK_FRAME("Ease","expoInOut","Ease.expoInOut","com/haxepunk/utils/Ease.hx",170)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(170)
	if (((t < .5))){
		HX_STACK_LINE(170)
		return (Float(::Math_obj::pow((int)2,((int)10 * (((t * (int)2) - (int)1))))) / Float((int)2));
	}
	else{
		HX_STACK_LINE(170)
		return (Float(((-(::Math_obj::pow((int)2,((int)-10 * (((t * (int)2) - (int)1))))) + (int)2))) / Float((int)2));
	}
	HX_STACK_LINE(170)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,expoInOut,return )

Float Ease_obj::backIn( Float t){
	HX_STACK_FRAME("Ease","backIn","Ease.backIn","com/haxepunk/utils/Ease.hx",176)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(176)
	return ((t * t) * (((2.70158 * t) - 1.70158)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,backIn,return )

Float Ease_obj::backOut( Float t){
	HX_STACK_FRAME("Ease","backOut","Ease.backOut","com/haxepunk/utils/Ease.hx",182)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(182)
	return ((int)1 - ((--(t) * t) * (((-2.70158 * t) - 1.70158))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,backOut,return )

Float Ease_obj::backInOut( Float t){
	HX_STACK_FRAME("Ease","backInOut","Ease.backInOut","com/haxepunk/utils/Ease.hx",187)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(188)
	hx::MultEq(t,(int)2);
	HX_STACK_LINE(189)
	if (((t < (int)1))){
		HX_STACK_LINE(189)
		return (Float(((t * t) * (((2.70158 * t) - 1.70158)))) / Float((int)2));
	}
	HX_STACK_LINE(190)
	(t)--;
	HX_STACK_LINE(191)
	return ((Float((((int)1 - ((--(t) * t) * (((-2.70158 * t) - 1.70158)))))) / Float((int)2)) + .5);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,backInOut,return )

Float Ease_obj::get_PI( ){
	HX_STACK_FRAME("Ease","get_PI","Ease.get_PI","com/haxepunk/utils/Ease.hx",204)
	HX_STACK_LINE(204)
	return ::Math_obj::PI;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Ease_obj,get_PI,return )

Float Ease_obj::get_PI2( ){
	HX_STACK_FRAME("Ease","get_PI2","Ease.get_PI2","com/haxepunk/utils/Ease.hx",205)
	HX_STACK_LINE(205)
	return (Float(::Math_obj::PI) / Float((int)2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Ease_obj,get_PI2,return )

Float Ease_obj::get_EL( ){
	HX_STACK_FRAME("Ease","get_EL","Ease.get_EL","com/haxepunk/utils/Ease.hx",206)
	HX_STACK_LINE(206)
	return (Float(((int)2 * ::com::haxepunk::utils::Ease_obj::get_PI())) / Float(0.45));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Ease_obj,get_EL,return )


Ease_obj::Ease_obj()
{
}

void Ease_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ease);
	HX_MARK_END_CLASS();
}

void Ease_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Ease_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"PI") ) { return get_PI(); }
		if (HX_FIELD_EQ(inName,"EL") ) { return get_EL(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"PI2") ) { return get_PI2(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"quadIn") ) { return quadIn_dyn(); }
		if (HX_FIELD_EQ(inName,"cubeIn") ) { return cubeIn_dyn(); }
		if (HX_FIELD_EQ(inName,"sineIn") ) { return sineIn_dyn(); }
		if (HX_FIELD_EQ(inName,"circIn") ) { return circIn_dyn(); }
		if (HX_FIELD_EQ(inName,"expoIn") ) { return expoIn_dyn(); }
		if (HX_FIELD_EQ(inName,"backIn") ) { return backIn_dyn(); }
		if (HX_FIELD_EQ(inName,"get_PI") ) { return get_PI_dyn(); }
		if (HX_FIELD_EQ(inName,"get_EL") ) { return get_EL_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quadOut") ) { return quadOut_dyn(); }
		if (HX_FIELD_EQ(inName,"cubeOut") ) { return cubeOut_dyn(); }
		if (HX_FIELD_EQ(inName,"quartIn") ) { return quartIn_dyn(); }
		if (HX_FIELD_EQ(inName,"quintIn") ) { return quintIn_dyn(); }
		if (HX_FIELD_EQ(inName,"sineOut") ) { return sineOut_dyn(); }
		if (HX_FIELD_EQ(inName,"circOut") ) { return circOut_dyn(); }
		if (HX_FIELD_EQ(inName,"expoOut") ) { return expoOut_dyn(); }
		if (HX_FIELD_EQ(inName,"backOut") ) { return backOut_dyn(); }
		if (HX_FIELD_EQ(inName,"get_PI2") ) { return get_PI2_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"quartOut") ) { return quartOut_dyn(); }
		if (HX_FIELD_EQ(inName,"quintOut") ) { return quintOut_dyn(); }
		if (HX_FIELD_EQ(inName,"bounceIn") ) { return bounceIn_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"quadInOut") ) { return quadInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"cubeInOut") ) { return cubeInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"sineInOut") ) { return sineInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"bounceOut") ) { return bounceOut_dyn(); }
		if (HX_FIELD_EQ(inName,"circInOut") ) { return circInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"expoInOut") ) { return expoInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"backInOut") ) { return backInOut_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quartInOut") ) { return quartInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"quintInOut") ) { return quintInOut_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bounceInOut") ) { return bounceInOut_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Ease_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Ease_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("quadIn"),
	HX_CSTRING("quadOut"),
	HX_CSTRING("quadInOut"),
	HX_CSTRING("cubeIn"),
	HX_CSTRING("cubeOut"),
	HX_CSTRING("cubeInOut"),
	HX_CSTRING("quartIn"),
	HX_CSTRING("quartOut"),
	HX_CSTRING("quartInOut"),
	HX_CSTRING("quintIn"),
	HX_CSTRING("quintOut"),
	HX_CSTRING("quintInOut"),
	HX_CSTRING("sineIn"),
	HX_CSTRING("sineOut"),
	HX_CSTRING("sineInOut"),
	HX_CSTRING("bounceIn"),
	HX_CSTRING("bounceOut"),
	HX_CSTRING("bounceInOut"),
	HX_CSTRING("circIn"),
	HX_CSTRING("circOut"),
	HX_CSTRING("circInOut"),
	HX_CSTRING("expoIn"),
	HX_CSTRING("expoOut"),
	HX_CSTRING("expoInOut"),
	HX_CSTRING("backIn"),
	HX_CSTRING("backOut"),
	HX_CSTRING("backInOut"),
	HX_CSTRING("get_PI"),
	HX_CSTRING("get_PI2"),
	HX_CSTRING("get_EL"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ease_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ease_obj::__mClass,"__mClass");
};

#endif

Class Ease_obj::__mClass;

void Ease_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.utils.Ease"), hx::TCanCast< Ease_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void Ease_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
