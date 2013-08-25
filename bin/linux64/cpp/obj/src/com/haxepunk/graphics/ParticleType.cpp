#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_ParticleType
#include <com/haxepunk/graphics/ParticleType.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{

Void ParticleType_obj::__construct(::String name,Array< int > frames,int width,int frameWidth,int frameHeight)
{
HX_STACK_FRAME("ParticleType","new","ParticleType.new","com/haxepunk/graphics/ParticleType.hx",25)

HX_STACK_ARG(name,"name")

HX_STACK_ARG(frames,"frames")

HX_STACK_ARG(width,"width")

HX_STACK_ARG(frameWidth,"frameWidth")

HX_STACK_ARG(frameHeight,"frameHeight")
{
	HX_STACK_LINE(26)
	this->_red = this->_green = this->_blue = this->_alpha = (int)1;
	HX_STACK_LINE(27)
	this->_redRange = this->_greenRange = this->_blueRange = this->_alphaRange = (int)0;
	HX_STACK_LINE(29)
	this->_name = name;
	HX_STACK_LINE(30)
	this->_frame = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,frameWidth,frameHeight);
	HX_STACK_LINE(31)
	if (((frames == null()))){
		HX_STACK_LINE(31)
		frames = Array_obj< int >::__new();
	}
	HX_STACK_LINE(32)
	this->_frames = frames;
	HX_STACK_LINE(34)
	this->_angle = this->_angleRange = (int)0;
	HX_STACK_LINE(35)
	this->_gravity = this->_gravityRange = (int)0;
	HX_STACK_LINE(36)
	this->_duration = this->_durationRange = (int)0;
	HX_STACK_LINE(37)
	this->_distance = this->_distanceRange = (int)0;
	HX_STACK_LINE(38)
	this->_alpha = this->_alphaRange = (int)0;
	HX_STACK_LINE(40)
	this->_red = this->_green = this->_blue = (int)1;
	HX_STACK_LINE(41)
	this->_redRange = this->_greenRange = this->_blueRange = (int)0;
}
;
	return null();
}

ParticleType_obj::~ParticleType_obj() { }

Dynamic ParticleType_obj::__CreateEmpty() { return  new ParticleType_obj; }
hx::ObjectPtr< ParticleType_obj > ParticleType_obj::__new(::String name,Array< int > frames,int width,int frameWidth,int frameHeight)
{  hx::ObjectPtr< ParticleType_obj > result = new ParticleType_obj();
	result->__construct(name,frames,width,frameWidth,frameHeight);
	return result;}

Dynamic ParticleType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ParticleType_obj > result = new ParticleType_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void ParticleType_obj::createBuffer( ){
{
		HX_STACK_FRAME("ParticleType","createBuffer","ParticleType.createBuffer","com/haxepunk/graphics/ParticleType.hx",141)
		HX_STACK_THIS(this)
		HX_STACK_LINE(142)
		if (((this->_buffer != null()))){
			HX_STACK_LINE(142)
			return null();
		}
		HX_STACK_LINE(143)
		this->_buffer = ::com::haxepunk::HXP_obj::createBitmap(::Std_obj::_int(this->_frame->width),::Std_obj::_int(this->_frame->height),true,null());
		HX_STACK_LINE(144)
		this->_bufferRect = this->_buffer->get_rect();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ParticleType_obj,createBuffer,(void))

::com::haxepunk::graphics::ParticleType ParticleType_obj::setColor( hx::Null< int >  __o_start,hx::Null< int >  __o_finish,Dynamic ease){
int start = __o_start.Default(16777215);
int finish = __o_finish.Default(0);
	HX_STACK_FRAME("ParticleType","setColor","ParticleType.setColor","com/haxepunk/graphics/ParticleType.hx",125)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(finish,"finish")
	HX_STACK_ARG(ease,"ease")
{
		HX_STACK_LINE(126)
		hx::AndEq(start,(int)16777215);
		HX_STACK_LINE(127)
		hx::AndEq(finish,(int)16777215);
		HX_STACK_LINE(128)
		this->_red = (Float(((int((int(start) >> int((int)16))) & int((int)255)))) / Float((int)255));
		HX_STACK_LINE(129)
		this->_green = (Float(((int((int(start) >> int((int)8))) & int((int)255)))) / Float((int)255));
		HX_STACK_LINE(130)
		this->_blue = (Float(((int(start) & int((int)255)))) / Float((int)255));
		HX_STACK_LINE(131)
		this->_redRange = ((Float(((int((int(finish) >> int((int)16))) & int((int)255)))) / Float((int)255)) - this->_red);
		HX_STACK_LINE(132)
		this->_greenRange = ((Float(((int((int(finish) >> int((int)8))) & int((int)255)))) / Float((int)255)) - this->_green);
		HX_STACK_LINE(133)
		this->_blueRange = ((Float(((int(finish) & int((int)255)))) / Float((int)255)) - this->_blue);
		HX_STACK_LINE(134)
		this->_colorEase = ease;
		HX_STACK_LINE(135)
		this->createBuffer();
		HX_STACK_LINE(136)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(ParticleType_obj,setColor,return )

::com::haxepunk::graphics::ParticleType ParticleType_obj::setAlpha( hx::Null< Float >  __o_start,hx::Null< Float >  __o_finish,Dynamic ease){
Float start = __o_start.Default(1);
Float finish = __o_finish.Default(0);
	HX_STACK_FRAME("ParticleType","setAlpha","ParticleType.setAlpha","com/haxepunk/graphics/ParticleType.hx",107)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(finish,"finish")
	HX_STACK_ARG(ease,"ease")
{
		HX_STACK_LINE(108)
		if (((start < (int)0))){
			HX_STACK_LINE(108)
			start = (int)0;
		}
		else{
			HX_STACK_LINE(108)
			if (((start > (int)1))){
				HX_STACK_LINE(108)
				start = (int)1;
			}
			else{
				HX_STACK_LINE(108)
				start = start;
			}
		}
		HX_STACK_LINE(109)
		if (((finish < (int)0))){
			HX_STACK_LINE(109)
			finish = (int)0;
		}
		else{
			HX_STACK_LINE(109)
			if (((finish > (int)1))){
				HX_STACK_LINE(109)
				finish = (int)1;
			}
			else{
				HX_STACK_LINE(109)
				finish = finish;
			}
		}
		HX_STACK_LINE(110)
		this->_alpha = start;
		HX_STACK_LINE(111)
		this->_alphaRange = (finish - start);
		HX_STACK_LINE(112)
		this->_alphaEase = ease;
		HX_STACK_LINE(113)
		this->createBuffer();
		HX_STACK_LINE(114)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(ParticleType_obj,setAlpha,return )

::com::haxepunk::graphics::ParticleType ParticleType_obj::setGravity( hx::Null< Float >  __o_gravity,hx::Null< Float >  __o_gravityRange){
Float gravity = __o_gravity.Default(0);
Float gravityRange = __o_gravityRange.Default(0);
	HX_STACK_FRAME("ParticleType","setGravity","ParticleType.setGravity","com/haxepunk/graphics/ParticleType.hx",93)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gravity,"gravity")
	HX_STACK_ARG(gravityRange,"gravityRange")
{
		HX_STACK_LINE(94)
		this->_gravity = gravity;
		HX_STACK_LINE(95)
		this->_gravityRange = gravityRange;
		HX_STACK_LINE(96)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ParticleType_obj,setGravity,return )

::com::haxepunk::graphics::ParticleType ParticleType_obj::setMotionVector( Float x,Float y,Float duration,hx::Null< Float >  __o_durationRange,Dynamic ease){
Float durationRange = __o_durationRange.Default(0);
	HX_STACK_FRAME("ParticleType","setMotionVector","ParticleType.setMotionVector","com/haxepunk/graphics/ParticleType.hx",77)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(durationRange,"durationRange")
	HX_STACK_ARG(ease,"ease")
{
		HX_STACK_LINE(78)
		this->_angle = ::Math_obj::atan2(y,x);
		HX_STACK_LINE(79)
		this->_angleRange = (int)0;
		HX_STACK_LINE(80)
		this->_duration = duration;
		HX_STACK_LINE(81)
		this->_durationRange = durationRange;
		HX_STACK_LINE(82)
		this->_ease = ease;
		HX_STACK_LINE(83)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(ParticleType_obj,setMotionVector,return )

::com::haxepunk::graphics::ParticleType ParticleType_obj::setMotion( Float angle,Float distance,Float duration,hx::Null< Float >  __o_angleRange,hx::Null< Float >  __o_distanceRange,hx::Null< Float >  __o_durationRange,Dynamic ease){
Float angleRange = __o_angleRange.Default(0);
Float distanceRange = __o_distanceRange.Default(0);
Float durationRange = __o_durationRange.Default(0);
	HX_STACK_FRAME("ParticleType","setMotion","ParticleType.setMotion","com/haxepunk/graphics/ParticleType.hx",56)
	HX_STACK_THIS(this)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(distance,"distance")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(angleRange,"angleRange")
	HX_STACK_ARG(distanceRange,"distanceRange")
	HX_STACK_ARG(durationRange,"durationRange")
	HX_STACK_ARG(ease,"ease")
{
		HX_STACK_LINE(57)
		this->_angle = (angle * ((Float(::Math_obj::PI) / Float((int)-180))));
		HX_STACK_LINE(58)
		this->_distance = distance;
		HX_STACK_LINE(59)
		this->_duration = duration;
		HX_STACK_LINE(60)
		this->_angleRange = (angleRange * ((Float(::Math_obj::PI) / Float((int)-180))));
		HX_STACK_LINE(61)
		this->_distanceRange = distanceRange;
		HX_STACK_LINE(62)
		this->_durationRange = durationRange;
		HX_STACK_LINE(63)
		this->_ease = ease;
		HX_STACK_LINE(64)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC7(ParticleType_obj,setMotion,return )


ParticleType_obj::ParticleType_obj()
{
}

void ParticleType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ParticleType);
	HX_MARK_MEMBER_NAME(_bufferRect,"_bufferRect");
	HX_MARK_MEMBER_NAME(_buffer,"_buffer");
	HX_MARK_MEMBER_NAME(_colorEase,"_colorEase");
	HX_MARK_MEMBER_NAME(_blueRange,"_blueRange");
	HX_MARK_MEMBER_NAME(_blue,"_blue");
	HX_MARK_MEMBER_NAME(_greenRange,"_greenRange");
	HX_MARK_MEMBER_NAME(_green,"_green");
	HX_MARK_MEMBER_NAME(_redRange,"_redRange");
	HX_MARK_MEMBER_NAME(_red,"_red");
	HX_MARK_MEMBER_NAME(_alphaEase,"_alphaEase");
	HX_MARK_MEMBER_NAME(_alphaRange,"_alphaRange");
	HX_MARK_MEMBER_NAME(_alpha,"_alpha");
	HX_MARK_MEMBER_NAME(_gravityRange,"_gravityRange");
	HX_MARK_MEMBER_NAME(_gravity,"_gravity");
	HX_MARK_MEMBER_NAME(_ease,"_ease");
	HX_MARK_MEMBER_NAME(_durationRange,"_durationRange");
	HX_MARK_MEMBER_NAME(_duration,"_duration");
	HX_MARK_MEMBER_NAME(_distanceRange,"_distanceRange");
	HX_MARK_MEMBER_NAME(_distance,"_distance");
	HX_MARK_MEMBER_NAME(_angleRange,"_angleRange");
	HX_MARK_MEMBER_NAME(_angle,"_angle");
	HX_MARK_MEMBER_NAME(_frames,"_frames");
	HX_MARK_MEMBER_NAME(_frame,"_frame");
	HX_MARK_MEMBER_NAME(_name,"_name");
	HX_MARK_END_CLASS();
}

void ParticleType_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_bufferRect,"_bufferRect");
	HX_VISIT_MEMBER_NAME(_buffer,"_buffer");
	HX_VISIT_MEMBER_NAME(_colorEase,"_colorEase");
	HX_VISIT_MEMBER_NAME(_blueRange,"_blueRange");
	HX_VISIT_MEMBER_NAME(_blue,"_blue");
	HX_VISIT_MEMBER_NAME(_greenRange,"_greenRange");
	HX_VISIT_MEMBER_NAME(_green,"_green");
	HX_VISIT_MEMBER_NAME(_redRange,"_redRange");
	HX_VISIT_MEMBER_NAME(_red,"_red");
	HX_VISIT_MEMBER_NAME(_alphaEase,"_alphaEase");
	HX_VISIT_MEMBER_NAME(_alphaRange,"_alphaRange");
	HX_VISIT_MEMBER_NAME(_alpha,"_alpha");
	HX_VISIT_MEMBER_NAME(_gravityRange,"_gravityRange");
	HX_VISIT_MEMBER_NAME(_gravity,"_gravity");
	HX_VISIT_MEMBER_NAME(_ease,"_ease");
	HX_VISIT_MEMBER_NAME(_durationRange,"_durationRange");
	HX_VISIT_MEMBER_NAME(_duration,"_duration");
	HX_VISIT_MEMBER_NAME(_distanceRange,"_distanceRange");
	HX_VISIT_MEMBER_NAME(_distance,"_distance");
	HX_VISIT_MEMBER_NAME(_angleRange,"_angleRange");
	HX_VISIT_MEMBER_NAME(_angle,"_angle");
	HX_VISIT_MEMBER_NAME(_frames,"_frames");
	HX_VISIT_MEMBER_NAME(_frame,"_frame");
	HX_VISIT_MEMBER_NAME(_name,"_name");
}

Dynamic ParticleType_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_red") ) { return _red; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_blue") ) { return _blue; }
		if (HX_FIELD_EQ(inName,"_ease") ) { return _ease; }
		if (HX_FIELD_EQ(inName,"_name") ) { return _name; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_green") ) { return _green; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { return _alpha; }
		if (HX_FIELD_EQ(inName,"_angle") ) { return _angle; }
		if (HX_FIELD_EQ(inName,"_frame") ) { return _frame; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_buffer") ) { return _buffer; }
		if (HX_FIELD_EQ(inName,"_frames") ) { return _frames; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_gravity") ) { return _gravity; }
		if (HX_FIELD_EQ(inName,"setColor") ) { return setColor_dyn(); }
		if (HX_FIELD_EQ(inName,"setAlpha") ) { return setAlpha_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_redRange") ) { return _redRange; }
		if (HX_FIELD_EQ(inName,"_duration") ) { return _duration; }
		if (HX_FIELD_EQ(inName,"_distance") ) { return _distance; }
		if (HX_FIELD_EQ(inName,"setMotion") ) { return setMotion_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_colorEase") ) { return _colorEase; }
		if (HX_FIELD_EQ(inName,"_blueRange") ) { return _blueRange; }
		if (HX_FIELD_EQ(inName,"_alphaEase") ) { return _alphaEase; }
		if (HX_FIELD_EQ(inName,"setGravity") ) { return setGravity_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bufferRect") ) { return _bufferRect; }
		if (HX_FIELD_EQ(inName,"_greenRange") ) { return _greenRange; }
		if (HX_FIELD_EQ(inName,"_alphaRange") ) { return _alphaRange; }
		if (HX_FIELD_EQ(inName,"_angleRange") ) { return _angleRange; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return createBuffer_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_gravityRange") ) { return _gravityRange; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_durationRange") ) { return _durationRange; }
		if (HX_FIELD_EQ(inName,"_distanceRange") ) { return _distanceRange; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setMotionVector") ) { return setMotionVector_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ParticleType_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_red") ) { _red=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_blue") ) { _blue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ease") ) { _ease=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_name") ) { _name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_green") ) { _green=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { _alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_angle") ) { _angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_frame") ) { _frame=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_buffer") ) { _buffer=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_frames") ) { _frames=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_gravity") ) { _gravity=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_redRange") ) { _redRange=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_duration") ) { _duration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_distance") ) { _distance=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_colorEase") ) { _colorEase=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blueRange") ) { _blueRange=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alphaEase") ) { _alphaEase=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bufferRect") ) { _bufferRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_greenRange") ) { _greenRange=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alphaRange") ) { _alphaRange=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_angleRange") ) { _angleRange=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_gravityRange") ) { _gravityRange=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_durationRange") ) { _durationRange=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_distanceRange") ) { _distanceRange=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ParticleType_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_bufferRect"));
	outFields->push(HX_CSTRING("_buffer"));
	outFields->push(HX_CSTRING("_blueRange"));
	outFields->push(HX_CSTRING("_blue"));
	outFields->push(HX_CSTRING("_greenRange"));
	outFields->push(HX_CSTRING("_green"));
	outFields->push(HX_CSTRING("_redRange"));
	outFields->push(HX_CSTRING("_red"));
	outFields->push(HX_CSTRING("_alphaRange"));
	outFields->push(HX_CSTRING("_alpha"));
	outFields->push(HX_CSTRING("_gravityRange"));
	outFields->push(HX_CSTRING("_gravity"));
	outFields->push(HX_CSTRING("_durationRange"));
	outFields->push(HX_CSTRING("_duration"));
	outFields->push(HX_CSTRING("_distanceRange"));
	outFields->push(HX_CSTRING("_distance"));
	outFields->push(HX_CSTRING("_angleRange"));
	outFields->push(HX_CSTRING("_angle"));
	outFields->push(HX_CSTRING("_frames"));
	outFields->push(HX_CSTRING("_frame"));
	outFields->push(HX_CSTRING("_name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_bufferRect"),
	HX_CSTRING("_buffer"),
	HX_CSTRING("_colorEase"),
	HX_CSTRING("_blueRange"),
	HX_CSTRING("_blue"),
	HX_CSTRING("_greenRange"),
	HX_CSTRING("_green"),
	HX_CSTRING("_redRange"),
	HX_CSTRING("_red"),
	HX_CSTRING("_alphaEase"),
	HX_CSTRING("_alphaRange"),
	HX_CSTRING("_alpha"),
	HX_CSTRING("_gravityRange"),
	HX_CSTRING("_gravity"),
	HX_CSTRING("_ease"),
	HX_CSTRING("_durationRange"),
	HX_CSTRING("_duration"),
	HX_CSTRING("_distanceRange"),
	HX_CSTRING("_distance"),
	HX_CSTRING("_angleRange"),
	HX_CSTRING("_angle"),
	HX_CSTRING("_frames"),
	HX_CSTRING("_frame"),
	HX_CSTRING("_name"),
	HX_CSTRING("createBuffer"),
	HX_CSTRING("setColor"),
	HX_CSTRING("setAlpha"),
	HX_CSTRING("setGravity"),
	HX_CSTRING("setMotionVector"),
	HX_CSTRING("setMotion"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ParticleType_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ParticleType_obj::__mClass,"__mClass");
};

#endif

Class ParticleType_obj::__mClass;

void ParticleType_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.ParticleType"), hx::TCanCast< ParticleType_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void ParticleType_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
