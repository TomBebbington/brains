#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Circle
#include <com/haxepunk/masks/Circle.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Grid
#include <com/haxepunk/masks/Grid.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Masklist
#include <com/haxepunk/masks/Masklist.h>
#endif
#ifndef INCLUDED_com_haxepunk_math_Projection
#include <com/haxepunk/math/Projection.h>
#endif
#ifndef INCLUDED_com_haxepunk_math_Vector
#include <com/haxepunk/math/Vector.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace haxepunk{
namespace masks{

Void Circle_obj::__construct(hx::Null< int >  __o_radius,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{
HX_STACK_FRAME("Circle","new","Circle.new","com/haxepunk/masks/Circle.hx",24)

HX_STACK_ARG(__o_radius,"radius")

HX_STACK_ARG(__o_x,"x")

HX_STACK_ARG(__o_y,"y")
int radius = __o_radius.Default(1);
int x = __o_x.Default(0);
int y = __o_y.Default(0);
{
	HX_STACK_LINE(25)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(26)
	this->set_radius(radius);
	HX_STACK_LINE(27)
	this->_x = (x + radius);
	HX_STACK_LINE(28)
	this->_y = (y + radius);
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::Mask >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(30)
		this->_check->set(key,this->collideMask_dyn());
	}
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Circle >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(31)
		this->_check->set(key,this->collideCircle_dyn());
	}
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Hitbox >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(32)
		this->_check->set(key,this->collideHitbox_dyn());
	}
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Grid >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(33)
		this->_check->set(key,this->collideGrid_dyn());
	}
}
;
	return null();
}

Circle_obj::~Circle_obj() { }

Dynamic Circle_obj::__CreateEmpty() { return  new Circle_obj; }
hx::ObjectPtr< Circle_obj > Circle_obj::__new(hx::Null< int >  __o_radius,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{  hx::ObjectPtr< Circle_obj > result = new Circle_obj();
	result->__construct(__o_radius,__o_x,__o_y);
	return result;}

Dynamic Circle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Circle_obj > result = new Circle_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Circle_obj::update( ){
{
		HX_STACK_FRAME("Circle","update","Circle.update","com/haxepunk/masks/Circle.hx",172)
		HX_STACK_THIS(this)
		HX_STACK_LINE(172)
		if (((this->parent != null()))){
			HX_STACK_LINE(175)
			this->parent->originX = (-(this->_x) + this->_radius);
			HX_STACK_LINE(176)
			this->parent->originY = (-(this->_y) + this->_radius);
			HX_STACK_LINE(177)
			this->parent->height = this->parent->width = (this->_radius + this->_radius);
			HX_STACK_LINE(180)
			if (((this->list != null()))){
				HX_STACK_LINE(181)
				this->list->update();
			}
		}
	}
return null();
}


int Circle_obj::set_radius( int value){
	HX_STACK_FRAME("Circle","set_radius","Circle.set_radius","com/haxepunk/masks/Circle.hx",159)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(160)
	if (((this->_radius == value))){
		HX_STACK_LINE(160)
		return value;
	}
	HX_STACK_LINE(161)
	this->_radius = value;
	HX_STACK_LINE(162)
	this->_squaredRadius = (value * value);
	HX_STACK_LINE(163)
	this->set_height(this->set_width((this->_radius + this->_radius)));
	HX_STACK_LINE(164)
	if (((this->list != null()))){
		HX_STACK_LINE(164)
		this->list->update();
	}
	else{
		HX_STACK_LINE(165)
		if (((this->parent != null()))){
			HX_STACK_LINE(165)
			this->update();
		}
	}
	HX_STACK_LINE(166)
	return this->_radius;
}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,set_radius,return )

int Circle_obj::get_radius( ){
	HX_STACK_FRAME("Circle","get_radius","Circle.get_radius","com/haxepunk/masks/Circle.hx",157)
	HX_STACK_THIS(this)
	HX_STACK_LINE(157)
	return this->_radius;
}


HX_DEFINE_DYNAMIC_FUNC0(Circle_obj,get_radius,return )

int Circle_obj::get_y( ){
	HX_STACK_FRAME("Circle","get_y","Circle.get_y","com/haxepunk/masks/Circle.hx",151)
	HX_STACK_THIS(this)
	HX_STACK_LINE(151)
	return (this->_y - this->_radius);
}


int Circle_obj::get_x( ){
	HX_STACK_FRAME("Circle","get_x","Circle.get_x","com/haxepunk/masks/Circle.hx",150)
	HX_STACK_THIS(this)
	HX_STACK_LINE(150)
	return (this->_x - this->_radius);
}


Void Circle_obj::debugDraw( ::flash::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_FRAME("Circle","debugDraw","Circle.debugDraw","com/haxepunk/masks/Circle.hx",147)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(scaleX,"scaleX")
		HX_STACK_ARG(scaleY,"scaleY")
		HX_STACK_LINE(147)
		graphics->drawCircle(((((this->parent->x + this->_x) - ::com::haxepunk::HXP_obj::camera->x)) * scaleX),((((this->parent->y + this->_y) - ::com::haxepunk::HXP_obj::camera->y)) * scaleY),(this->_radius * scaleX));
	}
return null();
}


Void Circle_obj::project( ::com::haxepunk::math::Vector axis,::com::haxepunk::math::Projection projection){
{
		HX_STACK_FRAME("Circle","project","Circle.project","com/haxepunk/masks/Circle.hx",140)
		HX_STACK_THIS(this)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(projection,"projection")
		HX_STACK_LINE(141)
		projection->min = -(this->_radius);
		HX_STACK_LINE(142)
		projection->max = this->_radius;
	}
return null();
}


bool Circle_obj::collideHitbox( ::com::haxepunk::masks::Hitbox other){
	HX_STACK_FRAME("Circle","collideHitbox","Circle.collideHitbox","com/haxepunk/masks/Circle.hx",123)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(124)
	Float dx = ::Math_obj::abs((((this->parent->x + this->_x) - other->parent->x) + other->get_x()));		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(125)
	Float dy = ::Math_obj::abs((((this->parent->y + this->_y) - other->parent->y) + other->get_y()));		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(127)
	if (((bool((dx <= other->get_width())) || bool((dy <= other->get_height()))))){
		HX_STACK_LINE(129)
		return true;
	}
	HX_STACK_LINE(131)
	if (((bool((dx > (other->get_width() + this->_radius))) || bool((dy > (other->get_height() + this->_radius)))))){
		HX_STACK_LINE(133)
		return false;
	}
	HX_STACK_LINE(136)
	return (((dx * dx) + (dy * dy)) <= this->_squaredRadius);
}


bool Circle_obj::collideGrid( ::com::haxepunk::masks::Grid other){
	HX_STACK_FRAME("Circle","collideGrid","Circle.collideGrid","com/haxepunk/masks/Circle.hx",65)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(66)
	Float thisX = (this->parent->x + this->_x);		HX_STACK_VAR(thisX,"thisX");
	HX_STACK_LINE(67)
	Float thisY = (this->parent->y + this->_y);		HX_STACK_VAR(thisY,"thisY");
	HX_STACK_LINE(68)
	Float otherX = (other->parent->x + other->get_x());		HX_STACK_VAR(otherX,"otherX");
	HX_STACK_LINE(69)
	Float otherY = (other->parent->y + other->get_y());		HX_STACK_VAR(otherY,"otherY");
	HX_STACK_LINE(70)
	Float entityDistX = (thisX - otherX);		HX_STACK_VAR(entityDistX,"entityDistX");
	HX_STACK_LINE(71)
	Float entityDistY = (thisY - otherY);		HX_STACK_VAR(entityDistY,"entityDistY");
	HX_STACK_LINE(73)
	int minx = ::Math_obj::floor((Float(((entityDistX - this->_radius))) / Float(::Std_obj::_int(other->_tile->width))));		HX_STACK_VAR(minx,"minx");
	HX_STACK_LINE(74)
	int miny = ::Math_obj::floor((Float(((entityDistY - this->_radius))) / Float(::Std_obj::_int(other->_tile->height))));		HX_STACK_VAR(miny,"miny");
	HX_STACK_LINE(75)
	int maxx = ::Math_obj::ceil((Float(((entityDistX + this->_radius))) / Float(::Std_obj::_int(other->_tile->width))));		HX_STACK_VAR(maxx,"maxx");
	HX_STACK_LINE(76)
	int maxy = ::Math_obj::ceil((Float(((entityDistY + this->_radius))) / Float(::Std_obj::_int(other->_tile->height))));		HX_STACK_VAR(maxy,"maxy");
	HX_STACK_LINE(78)
	if (((minx < (int)0))){
		HX_STACK_LINE(78)
		minx = (int)0;
	}
	HX_STACK_LINE(79)
	if (((miny < (int)0))){
		HX_STACK_LINE(79)
		miny = (int)0;
	}
	HX_STACK_LINE(80)
	if (((maxx > other->columns))){
		HX_STACK_LINE(80)
		maxx = other->columns;
	}
	HX_STACK_LINE(81)
	if (((maxy > other->rows))){
		HX_STACK_LINE(81)
		maxy = other->rows;
	}
	HX_STACK_LINE(83)
	Float hTileWidth = (::Std_obj::_int(other->_tile->width) * 0.5);		HX_STACK_VAR(hTileWidth,"hTileWidth");
	HX_STACK_LINE(84)
	Float hTileHeight = (::Std_obj::_int(other->_tile->height) * 0.5);		HX_STACK_VAR(hTileHeight,"hTileHeight");
	HX_STACK_LINE(83)
	Float dx;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(83)
	Float dy;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(87)
	{
		HX_STACK_LINE(87)
		int _g = minx;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(87)
		while(((_g < maxx))){
			HX_STACK_LINE(87)
			int xx = (_g)++;		HX_STACK_VAR(xx,"xx");
			HX_STACK_LINE(89)
			{
				HX_STACK_LINE(89)
				int _g1 = miny;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(89)
				while(((_g1 < maxy))){
					HX_STACK_LINE(89)
					int yy = (_g1)++;		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(91)
					if ((other->getTile(xx,yy))){
						HX_STACK_LINE(93)
						Float mx = ((otherX + (xx * ::Std_obj::_int(other->_tile->width))) + hTileWidth);		HX_STACK_VAR(mx,"mx");
						HX_STACK_LINE(94)
						Float my = ((otherY + (yy * ::Std_obj::_int(other->_tile->height))) + hTileHeight);		HX_STACK_VAR(my,"my");
						HX_STACK_LINE(96)
						Float dx1 = ::Math_obj::abs((thisX - mx));		HX_STACK_VAR(dx1,"dx1");
						HX_STACK_LINE(98)
						if (((dx1 > (hTileWidth + this->_radius)))){
							HX_STACK_LINE(99)
							continue;
						}
						HX_STACK_LINE(101)
						Float dy1 = ::Math_obj::abs((thisY - my));		HX_STACK_VAR(dy1,"dy1");
						HX_STACK_LINE(103)
						if (((dy1 > (hTileHeight + this->_radius)))){
							HX_STACK_LINE(104)
							continue;
						}
						HX_STACK_LINE(106)
						if (((bool((dx1 <= hTileWidth)) || bool((dy1 <= hTileHeight))))){
							HX_STACK_LINE(107)
							return true;
						}
						HX_STACK_LINE(109)
						Float xCornerDist = (dx1 - hTileWidth);		HX_STACK_VAR(xCornerDist,"xCornerDist");
						HX_STACK_LINE(110)
						Float yCornerDist = (dy1 - hTileHeight);		HX_STACK_VAR(yCornerDist,"yCornerDist");
						HX_STACK_LINE(112)
						if (((((xCornerDist * xCornerDist) + (yCornerDist * yCornerDist)) <= this->_squaredRadius))){
							HX_STACK_LINE(113)
							return true;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(118)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,collideGrid,return )

bool Circle_obj::collideCircle( ::com::haxepunk::masks::Circle other){
	HX_STACK_FRAME("Circle","collideCircle","Circle.collideCircle","com/haxepunk/masks/Circle.hx",58)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(59)
	Float dx = ((this->parent->x + this->_x) - ((other->parent->x + other->_x)));		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(60)
	Float dy = ((this->parent->y + this->_y) - ((other->parent->y + other->_y)));		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(61)
	return (((dx * dx) + (dy * dy)) < ::Math_obj::pow((this->_radius + other->_radius),(int)2));
}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,collideCircle,return )

bool Circle_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_FRAME("Circle","collideMask","Circle.collideMask","com/haxepunk/masks/Circle.hx",38)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(39)
	Float distanceX = ::Math_obj::abs((((this->parent->x + this->_x) - other->parent->x) - (other->parent->width * 0.5)));		HX_STACK_VAR(distanceX,"distanceX");
	HX_STACK_LINE(40)
	Float distanceY = ::Math_obj::abs((((this->parent->y + this->_y) - other->parent->y) - (other->parent->height * 0.5)));		HX_STACK_VAR(distanceY,"distanceY");
	HX_STACK_LINE(42)
	if (((bool((distanceX > ((other->parent->width * 0.5) + this->_radius))) || bool((distanceY > ((other->parent->height * 0.5) + this->_radius)))))){
		HX_STACK_LINE(45)
		return false;
	}
	HX_STACK_LINE(47)
	if (((bool((distanceX <= (other->parent->width * 0.5))) || bool((distanceY <= (other->parent->height * 0.5)))))){
		HX_STACK_LINE(49)
		return true;
	}
	HX_STACK_LINE(51)
	Float distanceToCorner = ((((distanceX - (other->parent->width * 0.5))) * ((distanceX - (other->parent->width * 0.5)))) + (((distanceY - (other->parent->height * 0.5))) * ((distanceY - (other->parent->height * 0.5)))));		HX_STACK_VAR(distanceToCorner,"distanceToCorner");
	HX_STACK_LINE(54)
	return (distanceToCorner <= this->_squaredRadius);
}



Circle_obj::Circle_obj()
{
}

void Circle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Circle);
	HX_MARK_MEMBER_NAME(_squaredRadius,"_squaredRadius");
	HX_MARK_MEMBER_NAME(_radius,"_radius");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Circle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_squaredRadius,"_squaredRadius");
	HX_VISIT_MEMBER_NAME(_radius,"_radius");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Circle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"radius") ) { return get_radius(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { return _radius; }
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_radius") ) { return set_radius_dyn(); }
		if (HX_FIELD_EQ(inName,"get_radius") ) { return get_radius_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideGrid") ) { return collideGrid_dyn(); }
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"collideCircle") ) { return collideCircle_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_squaredRadius") ) { return _squaredRadius; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Circle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { return set_radius(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { _radius=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_squaredRadius") ) { _squaredRadius=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Circle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_squaredRadius"));
	outFields->push(HX_CSTRING("_radius"));
	outFields->push(HX_CSTRING("radius"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_squaredRadius"),
	HX_CSTRING("_radius"),
	HX_CSTRING("update"),
	HX_CSTRING("set_radius"),
	HX_CSTRING("get_radius"),
	HX_CSTRING("get_y"),
	HX_CSTRING("get_x"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("project"),
	HX_CSTRING("collideHitbox"),
	HX_CSTRING("collideGrid"),
	HX_CSTRING("collideCircle"),
	HX_CSTRING("collideMask"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Circle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Circle_obj::__mClass,"__mClass");
};

#endif

Class Circle_obj::__mClass;

void Circle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.masks.Circle"), hx::TCanCast< Circle_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void Circle_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace masks
