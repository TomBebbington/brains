#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Canvas
#include <com/haxepunk/graphics/Canvas.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
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

Void Canvas_obj::__construct(int width,int height)
{
HX_STACK_FRAME("Canvas","new","Canvas.new","com/haxepunk/graphics/Canvas.hx",16)

HX_STACK_ARG(width,"width")

HX_STACK_ARG(height,"height")
{
	HX_STACK_LINE(326)
	this->_maxHeight = (int)4000;
	HX_STACK_LINE(325)
	this->_maxWidth = (int)4000;
	HX_STACK_LINE(30)
	super::__construct();
	HX_STACK_LINE(31)
	this->_color = (int)16777215;
	HX_STACK_LINE(32)
	this->_red = this->_green = this->_blue = (int)1;
	HX_STACK_LINE(33)
	this->_alpha = (int)1;
	HX_STACK_LINE(34)
	this->_graphics = ::com::haxepunk::HXP_obj::sprite->get_graphics();
	HX_STACK_LINE(35)
	this->_matrix = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(36)
	this->_rect = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(37)
	this->_colorTransform = ::flash::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(38)
	this->_buffers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(40)
	this->_width = width;
	HX_STACK_LINE(41)
	this->_height = height;
	HX_STACK_LINE(43)
	if (((((int(::com::haxepunk::HXP_obj::renderMode) & int((int((int)1) << int(::com::haxepunk::RenderMode_obj::BUFFER->__Index()))))) != (int)0))){
		HX_STACK_LINE(45)
		this->_refWidth = ::Math_obj::ceil((Float(width) / Float(this->_maxWidth)));
		HX_STACK_LINE(46)
		this->_refHeight = ::Math_obj::ceil((Float(height) / Float(this->_maxHeight)));
		HX_STACK_LINE(47)
		this->_ref = ::com::haxepunk::HXP_obj::createBitmap(this->_refWidth,this->_refHeight,null(),null());
		HX_STACK_LINE(48)
		int x = (int)0;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(48)
		int y = (int)0;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(48)
		int w;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(48)
		int h;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(48)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(49)
		int ww = hx::Mod(this->_width,this->_maxWidth);		HX_STACK_VAR(ww,"ww");
		HX_STACK_LINE(50)
		int hh = hx::Mod(this->_height,this->_maxHeight);		HX_STACK_VAR(hh,"hh");
		HX_STACK_LINE(51)
		if (((ww == (int)0))){
			HX_STACK_LINE(51)
			ww = this->_maxWidth;
		}
		HX_STACK_LINE(52)
		if (((hh == (int)0))){
			HX_STACK_LINE(52)
			hh = this->_maxHeight;
		}
		HX_STACK_LINE(53)
		while(((y < this->_refHeight))){
			HX_STACK_LINE(55)
			if (((y < (this->_refHeight - (int)1)))){
				HX_STACK_LINE(55)
				h = this->_maxHeight;
			}
			else{
				HX_STACK_LINE(55)
				h = hh;
			}
			HX_STACK_LINE(56)
			while(((x < this->_refWidth))){
				HX_STACK_LINE(58)
				if (((x < (this->_refWidth - (int)1)))){
					HX_STACK_LINE(58)
					w = this->_maxWidth;
				}
				else{
					HX_STACK_LINE(58)
					w = ww;
				}
				HX_STACK_LINE(59)
				this->_ref->setPixel(x,y,i);
				HX_STACK_LINE(60)
				this->_buffers[i] = ::com::haxepunk::HXP_obj::createBitmap(w,h,true,null());
				HX_STACK_LINE(61)
				(i)++;
				HX_STACK_LINE(61)
				(x)++;
			}
			HX_STACK_LINE(63)
			x = (int)0;
			HX_STACK_LINE(63)
			(y)++;
		}
	}
}
;
	return null();
}

Canvas_obj::~Canvas_obj() { }

Dynamic Canvas_obj::__CreateEmpty() { return  new Canvas_obj; }
hx::ObjectPtr< Canvas_obj > Canvas_obj::__new(int width,int height)
{  hx::ObjectPtr< Canvas_obj > result = new Canvas_obj();
	result->__construct(width,height);
	return result;}

Dynamic Canvas_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Canvas_obj > result = new Canvas_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

int Canvas_obj::get_height( ){
	HX_STACK_FRAME("Canvas","get_height","Canvas.get_height","com/haxepunk/graphics/Canvas.hx",319)
	HX_STACK_THIS(this)
	HX_STACK_LINE(319)
	return this->_height;
}


HX_DEFINE_DYNAMIC_FUNC0(Canvas_obj,get_height,return )

int Canvas_obj::get_width( ){
	HX_STACK_FRAME("Canvas","get_width","Canvas.get_width","com/haxepunk/graphics/Canvas.hx",313)
	HX_STACK_THIS(this)
	HX_STACK_LINE(313)
	return this->_width;
}


HX_DEFINE_DYNAMIC_FUNC0(Canvas_obj,get_width,return )

Void Canvas_obj::shift( hx::Null< int >  __o_x,hx::Null< int >  __o_y){
int x = __o_x.Default(0);
int y = __o_y.Default(0);
	HX_STACK_FRAME("Canvas","shift","Canvas.shift","com/haxepunk/graphics/Canvas.hx",306)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(306)
		this->drawGraphic(x,y,hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Canvas_obj,shift,(void))

Float Canvas_obj::set_alpha( Float value){
	HX_STACK_FRAME("Canvas","set_alpha","Canvas.set_alpha","com/haxepunk/graphics/Canvas.hx",281)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(282)
	if (((value < (int)0))){
		HX_STACK_LINE(282)
		value = (int)0;
	}
	HX_STACK_LINE(283)
	if (((value > (int)1))){
		HX_STACK_LINE(283)
		value = (int)1;
	}
	HX_STACK_LINE(284)
	if (((this->_alpha == value))){
		HX_STACK_LINE(284)
		return this->_alpha;
	}
	HX_STACK_LINE(285)
	this->_alpha = value;
	HX_STACK_LINE(286)
	if (((bool((this->_alpha == (int)1)) && bool((this->_color == (int)16777215))))){
		HX_STACK_LINE(288)
		this->_tint = null();
		HX_STACK_LINE(289)
		return this->_alpha;
	}
	HX_STACK_LINE(291)
	this->_tint = this->_colorTransform;
	HX_STACK_LINE(292)
	this->_tint->redMultiplier = this->_red;
	HX_STACK_LINE(293)
	this->_tint->greenMultiplier = this->_green;
	HX_STACK_LINE(294)
	this->_tint->blueMultiplier = this->_blue;
	HX_STACK_LINE(295)
	this->_tint->alphaMultiplier = this->_alpha;
	HX_STACK_LINE(296)
	return this->_alpha;
}


HX_DEFINE_DYNAMIC_FUNC1(Canvas_obj,set_alpha,return )

Float Canvas_obj::get_alpha( ){
	HX_STACK_FRAME("Canvas","get_alpha","Canvas.get_alpha","com/haxepunk/graphics/Canvas.hx",279)
	HX_STACK_THIS(this)
	HX_STACK_LINE(279)
	return this->_alpha;
}


HX_DEFINE_DYNAMIC_FUNC0(Canvas_obj,get_alpha,return )

int Canvas_obj::set_color( int value){
	HX_STACK_FRAME("Canvas","set_color","Canvas.set_color","com/haxepunk/graphics/Canvas.hx",254)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(255)
	hx::ModEq(value,(int)16777215);
	HX_STACK_LINE(256)
	if (((this->_color == value))){
		HX_STACK_LINE(256)
		return this->_color;
	}
	HX_STACK_LINE(257)
	this->_color = value;
	struct _Function_1_1{
		inline static int Block( ::com::haxepunk::graphics::Canvas_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/graphics/Canvas.hx",258)
			{
				HX_STACK_LINE(258)
				int color = __this->get_color();		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(258)
				return (int((int(color) >> int((int)16))) & int((int)255));
			}
			return null();
		}
	};
	HX_STACK_LINE(258)
	this->_red = (Float(_Function_1_1::Block(this)) / Float((int)255));
	struct _Function_1_2{
		inline static int Block( ::com::haxepunk::graphics::Canvas_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/graphics/Canvas.hx",259)
			{
				HX_STACK_LINE(259)
				int color = __this->get_color();		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(259)
				return (int((int(color) >> int((int)8))) & int((int)255));
			}
			return null();
		}
	};
	HX_STACK_LINE(259)
	this->_green = (Float(_Function_1_2::Block(this)) / Float((int)255));
	struct _Function_1_3{
		inline static int Block( ::com::haxepunk::graphics::Canvas_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/graphics/Canvas.hx",260)
			{
				HX_STACK_LINE(260)
				int color = __this->get_color();		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(260)
				return (int(color) & int((int)255));
			}
			return null();
		}
	};
	HX_STACK_LINE(260)
	this->_blue = (Float(_Function_1_3::Block(this)) / Float((int)255));
	HX_STACK_LINE(262)
	if (((bool((this->_alpha == (int)1)) && bool((this->_color == (int)16777215))))){
		HX_STACK_LINE(264)
		this->_tint = null();
		HX_STACK_LINE(265)
		return this->_color;
	}
	HX_STACK_LINE(267)
	this->_tint = this->_colorTransform;
	HX_STACK_LINE(268)
	this->_tint->redMultiplier = this->_red;
	HX_STACK_LINE(269)
	this->_tint->greenMultiplier = this->_green;
	HX_STACK_LINE(270)
	this->_tint->blueMultiplier = this->_blue;
	HX_STACK_LINE(271)
	this->_tint->alphaMultiplier = this->_alpha;
	HX_STACK_LINE(272)
	return this->_color;
}


HX_DEFINE_DYNAMIC_FUNC1(Canvas_obj,set_color,return )

int Canvas_obj::get_color( ){
	HX_STACK_FRAME("Canvas","get_color","Canvas.get_color","com/haxepunk/graphics/Canvas.hx",252)
	HX_STACK_THIS(this)
	HX_STACK_LINE(252)
	return this->_color;
}


HX_DEFINE_DYNAMIC_FUNC0(Canvas_obj,get_color,return )

Void Canvas_obj::drawGraphic( int x,int y,::com::haxepunk::Graphic source){
{
		HX_STACK_FRAME("Canvas","drawGraphic","Canvas.drawGraphic","com/haxepunk/graphics/Canvas.hx",232)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(233)
		int xx = (int)0;		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(233)
		int yy = (int)0;		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(234)
		{
			HX_STACK_LINE(234)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(234)
			Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(234)
			while(((_g < _g1->length))){
				HX_STACK_LINE(234)
				::flash::display::BitmapData buffer = _g1->__get(_g).StaticCast< ::flash::display::BitmapData >();		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(234)
				++(_g);
				HX_STACK_LINE(236)
				this->_point->x = (x - xx);
				HX_STACK_LINE(237)
				this->_point->y = (y - yy);
				HX_STACK_LINE(238)
				source->render(buffer,this->_point,::com::haxepunk::HXP_obj::zero);
				HX_STACK_LINE(239)
				hx::AddEq(xx,this->_maxWidth);
				HX_STACK_LINE(240)
				if (((xx >= this->_width))){
					HX_STACK_LINE(242)
					xx = (int)0;
					HX_STACK_LINE(243)
					hx::AddEq(yy,this->_maxHeight);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Canvas_obj,drawGraphic,(void))

Void Canvas_obj::fillTexture( ::flash::geom::Rectangle rect,::flash::display::BitmapData texture){
{
		HX_STACK_FRAME("Canvas","fillTexture","Canvas.fillTexture","com/haxepunk/graphics/Canvas.hx",207)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(208)
		int xx = (int)0;		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(208)
		int yy = (int)0;		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(209)
		{
			HX_STACK_LINE(209)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(209)
			Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(209)
			while(((_g < _g1->length))){
				HX_STACK_LINE(209)
				::flash::display::BitmapData buffer = _g1->__get(_g).StaticCast< ::flash::display::BitmapData >();		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(209)
				++(_g);
				HX_STACK_LINE(211)
				this->_graphics->clear();
				HX_STACK_LINE(212)
				this->_graphics->beginBitmapFill(texture,null(),null(),null());
				HX_STACK_LINE(213)
				this->_graphics->drawRect((rect->x - xx),(rect->y - yy),rect->width,rect->height);
				HX_STACK_LINE(214)
				buffer->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),null(),null(),null());
				HX_STACK_LINE(215)
				hx::AddEq(xx,this->_maxWidth);
				HX_STACK_LINE(216)
				if (((xx >= this->_width))){
					HX_STACK_LINE(218)
					xx = (int)0;
					HX_STACK_LINE(219)
					hx::AddEq(yy,this->_maxHeight);
				}
			}
		}
		HX_STACK_LINE(222)
		this->_graphics->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Canvas_obj,fillTexture,(void))

Void Canvas_obj::drawRect( ::flash::geom::Rectangle rect,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("Canvas","drawRect","Canvas.drawRect","com/haxepunk/graphics/Canvas.hx",164)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(165)
		int xx = (int)0;		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(165)
		int yy = (int)0;		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(165)
		::flash::display::BitmapData buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(166)
		if (((alpha >= (int)1))){
			HX_STACK_LINE(168)
			this->_rect->width = rect->width;
			HX_STACK_LINE(169)
			this->_rect->height = rect->height;
			HX_STACK_LINE(171)
			{
				HX_STACK_LINE(171)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(171)
				Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(171)
				while(((_g < _g1->length))){
					HX_STACK_LINE(171)
					::flash::display::BitmapData buffer1 = _g1->__get(_g).StaticCast< ::flash::display::BitmapData >();		HX_STACK_VAR(buffer1,"buffer1");
					HX_STACK_LINE(171)
					++(_g);
					HX_STACK_LINE(173)
					this->_rect->x = (rect->x - xx);
					HX_STACK_LINE(174)
					this->_rect->y = (rect->y - yy);
					HX_STACK_LINE(175)
					buffer1->fillRect(this->_rect,(int((int)-16777216) | int(color)));
					HX_STACK_LINE(176)
					hx::AddEq(xx,this->_maxWidth);
					HX_STACK_LINE(177)
					if (((xx >= this->_width))){
						HX_STACK_LINE(179)
						xx = (int)0;
						HX_STACK_LINE(180)
						hx::AddEq(yy,this->_maxHeight);
					}
				}
			}
			HX_STACK_LINE(183)
			return null();
		}
		HX_STACK_LINE(185)
		{
			HX_STACK_LINE(185)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(185)
			Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(185)
			while(((_g < _g1->length))){
				HX_STACK_LINE(185)
				::flash::display::BitmapData buffer1 = _g1->__get(_g).StaticCast< ::flash::display::BitmapData >();		HX_STACK_VAR(buffer1,"buffer1");
				HX_STACK_LINE(185)
				++(_g);
				HX_STACK_LINE(187)
				this->_graphics->clear();
				HX_STACK_LINE(188)
				this->_graphics->beginFill(color,alpha);
				HX_STACK_LINE(189)
				this->_graphics->drawRect((rect->x - xx),(rect->y - yy),rect->width,rect->height);
				HX_STACK_LINE(190)
				buffer1->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),null(),null(),null());
				HX_STACK_LINE(191)
				hx::AddEq(xx,this->_maxWidth);
				HX_STACK_LINE(192)
				if (((xx >= this->_width))){
					HX_STACK_LINE(194)
					xx = (int)0;
					HX_STACK_LINE(195)
					hx::AddEq(yy,this->_maxHeight);
				}
			}
		}
		HX_STACK_LINE(198)
		this->_graphics->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Canvas_obj,drawRect,(void))

Void Canvas_obj::fill( ::flash::geom::Rectangle rect,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("Canvas","fill","Canvas.fill","com/haxepunk/graphics/Canvas.hx",136)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(137)
		int xx = (int)0;		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(137)
		int yy = (int)0;		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(137)
		::flash::display::BitmapData buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(138)
		this->_rect->width = rect->width;
		HX_STACK_LINE(139)
		this->_rect->height = rect->height;
		HX_STACK_LINE(140)
		if (((alpha >= (int)1))){
			HX_STACK_LINE(140)
			hx::OrEq(color,(int)-16777216);
		}
		else{
			HX_STACK_LINE(141)
			if (((alpha <= (int)0))){
				HX_STACK_LINE(141)
				color = (int)0;
			}
			else{
				HX_STACK_LINE(142)
				color = (int((int(::Std_obj::_int((alpha * (int)255))) << int((int)24))) | int((int((int)16777215) & int(color))));
			}
		}
		HX_STACK_LINE(143)
		{
			HX_STACK_LINE(143)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(143)
			Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(143)
			while(((_g < _g1->length))){
				HX_STACK_LINE(143)
				::flash::display::BitmapData buffer1 = _g1->__get(_g).StaticCast< ::flash::display::BitmapData >();		HX_STACK_VAR(buffer1,"buffer1");
				HX_STACK_LINE(143)
				++(_g);
				HX_STACK_LINE(145)
				this->_rect->x = (rect->x - xx);
				HX_STACK_LINE(146)
				this->_rect->y = (rect->y - yy);
				HX_STACK_LINE(147)
				buffer1->fillRect(this->_rect,color);
				HX_STACK_LINE(148)
				hx::AddEq(xx,this->_maxWidth);
				HX_STACK_LINE(149)
				if (((xx >= this->_width))){
					HX_STACK_LINE(151)
					xx = (int)0;
					HX_STACK_LINE(152)
					hx::AddEq(yy,this->_maxHeight);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Canvas_obj,fill,(void))

Void Canvas_obj::draw( int x,int y,::flash::display::BitmapData source,::flash::geom::Rectangle rect){
{
		HX_STACK_FRAME("Canvas","draw","Canvas.draw","com/haxepunk/graphics/Canvas.hx",113)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_LINE(114)
		int xx = (int)0;		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(114)
		int yy = (int)0;		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(115)
		{
			HX_STACK_LINE(115)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(115)
			Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(115)
			while(((_g < _g1->length))){
				HX_STACK_LINE(115)
				::flash::display::BitmapData buffer = _g1->__get(_g).StaticCast< ::flash::display::BitmapData >();		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(115)
				++(_g);
				HX_STACK_LINE(117)
				this->_point->x = (x - xx);
				HX_STACK_LINE(118)
				this->_point->y = (y - yy);
				HX_STACK_LINE(119)
				buffer->copyPixels(source,(  (((rect != null()))) ? ::flash::geom::Rectangle(rect) : ::flash::geom::Rectangle(source->get_rect()) ),this->_point,null(),null(),true);
				HX_STACK_LINE(120)
				hx::AddEq(xx,this->_maxWidth);
				HX_STACK_LINE(121)
				if (((xx >= this->_width))){
					HX_STACK_LINE(123)
					xx = (int)0;
					HX_STACK_LINE(124)
					hx::AddEq(yy,this->_maxHeight);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Canvas_obj,draw,(void))

Void Canvas_obj::render( ::flash::display::BitmapData target,::flash::geom::Point point,::flash::geom::Point camera){
{
		HX_STACK_FRAME("Canvas","render","Canvas.render","com/haxepunk/graphics/Canvas.hx",70)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(72)
		this->_point->x = ((point->x + this->x) - (camera->x * this->scrollX));
		HX_STACK_LINE(73)
		this->_point->y = ((point->y + this->y) - (camera->y * this->scrollY));
		HX_STACK_LINE(75)
		this->_rect->x = this->_rect->y = (int)0;
		HX_STACK_LINE(76)
		this->_rect->width = this->_maxWidth;
		HX_STACK_LINE(77)
		this->_rect->height = this->_maxHeight;
		HX_STACK_LINE(80)
		int xx = (int)0;		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(80)
		int yy = (int)0;		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(80)
		::flash::display::BitmapData buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(80)
		Float px = this->_point->x;		HX_STACK_VAR(px,"px");
		HX_STACK_LINE(81)
		target->lock();
		HX_STACK_LINE(82)
		while(((yy < this->_refHeight))){
			HX_STACK_LINE(84)
			while(((xx < this->_refWidth))){
				HX_STACK_LINE(86)
				buffer = this->_buffers->__get(this->_ref->getPixel(xx,yy)).StaticCast< ::flash::display::BitmapData >();
				HX_STACK_LINE(87)
				if (((bool((this->_tint != null())) || bool((this->blend != null()))))){
					HX_STACK_LINE(89)
					this->_matrix->tx = this->_point->x;
					HX_STACK_LINE(90)
					this->_matrix->ty = this->_point->y;
					HX_STACK_LINE(91)
					target->draw(buffer,this->_matrix,this->_tint,this->blend,null(),null());
				}
				else{
					HX_STACK_LINE(93)
					target->copyPixels(buffer,this->_rect,this->_point,null(),null(),true);
				}
				HX_STACK_LINE(94)
				hx::AddEq(this->_point->x,this->_maxWidth);
				HX_STACK_LINE(95)
				(xx)++;
			}
			HX_STACK_LINE(97)
			this->_point->x = px;
			HX_STACK_LINE(98)
			hx::AddEq(this->_point->y,this->_maxHeight);
			HX_STACK_LINE(99)
			xx = (int)0;
			HX_STACK_LINE(100)
			(yy)++;
		}
		HX_STACK_LINE(102)
		target->unlock(null());
	}
return null();
}



Canvas_obj::Canvas_obj()
{
}

void Canvas_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Canvas);
	HX_MARK_MEMBER_NAME(_graphics,"_graphics");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	HX_MARK_MEMBER_NAME(_refHeight,"_refHeight");
	HX_MARK_MEMBER_NAME(_refWidth,"_refWidth");
	HX_MARK_MEMBER_NAME(_ref,"_ref");
	HX_MARK_MEMBER_NAME(_blue,"_blue");
	HX_MARK_MEMBER_NAME(_green,"_green");
	HX_MARK_MEMBER_NAME(_red,"_red");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_MARK_MEMBER_NAME(_tint,"_tint");
	HX_MARK_MEMBER_NAME(_alpha,"_alpha");
	HX_MARK_MEMBER_NAME(_color,"_color");
	HX_MARK_MEMBER_NAME(_maxHeight,"_maxHeight");
	HX_MARK_MEMBER_NAME(_maxWidth,"_maxWidth");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_buffers,"_buffers");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(blend,"blend");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Canvas_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_graphics,"_graphics");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	HX_VISIT_MEMBER_NAME(_refHeight,"_refHeight");
	HX_VISIT_MEMBER_NAME(_refWidth,"_refWidth");
	HX_VISIT_MEMBER_NAME(_ref,"_ref");
	HX_VISIT_MEMBER_NAME(_blue,"_blue");
	HX_VISIT_MEMBER_NAME(_green,"_green");
	HX_VISIT_MEMBER_NAME(_red,"_red");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_VISIT_MEMBER_NAME(_tint,"_tint");
	HX_VISIT_MEMBER_NAME(_alpha,"_alpha");
	HX_VISIT_MEMBER_NAME(_color,"_color");
	HX_VISIT_MEMBER_NAME(_maxHeight,"_maxHeight");
	HX_VISIT_MEMBER_NAME(_maxWidth,"_maxWidth");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_buffers,"_buffers");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Canvas_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { return _ref; }
		if (HX_FIELD_EQ(inName,"_red") ) { return _red; }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		if (HX_FIELD_EQ(inName,"_blue") ) { return _blue; }
		if (HX_FIELD_EQ(inName,"_tint") ) { return _tint; }
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp ? get_width() : width; }
		if (HX_FIELD_EQ(inName,"shift") ) { return shift_dyn(); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return get_alpha(); }
		if (HX_FIELD_EQ(inName,"color") ) { return get_color(); }
		if (HX_FIELD_EQ(inName,"blend") ) { return blend; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_green") ) { return _green; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { return _alpha; }
		if (HX_FIELD_EQ(inName,"_color") ) { return _color; }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp ? get_height() : height; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buffers") ) { return _buffers; }
		if (HX_FIELD_EQ(inName,"drawRect") ) { return drawRect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_graphics") ) { return _graphics; }
		if (HX_FIELD_EQ(inName,"_refWidth") ) { return _refWidth; }
		if (HX_FIELD_EQ(inName,"_maxWidth") ) { return _maxWidth; }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_refHeight") ) { return _refHeight; }
		if (HX_FIELD_EQ(inName,"_maxHeight") ) { return _maxHeight; }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawGraphic") ) { return drawGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"fillTexture") ) { return fillTexture_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { return _colorTransform; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Canvas_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { _ref=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_red") ) { _red=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blue") ) { _blue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tint") ) { _tint=inValue.Cast< ::flash::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return set_alpha(inValue); }
		if (HX_FIELD_EQ(inName,"color") ) { return set_color(inValue); }
		if (HX_FIELD_EQ(inName,"blend") ) { blend=inValue.Cast< ::flash::display::BlendMode >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_green") ) { _green=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { _alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_color") ) { _color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buffers") ) { _buffers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_graphics") ) { _graphics=inValue.Cast< ::flash::display::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_refWidth") ) { _refWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxWidth") ) { _maxWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_refHeight") ) { _refHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxHeight") ) { _maxHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { _colorTransform=inValue.Cast< ::flash::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Canvas_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_graphics"));
	outFields->push(HX_CSTRING("_rect"));
	outFields->push(HX_CSTRING("_refHeight"));
	outFields->push(HX_CSTRING("_refWidth"));
	outFields->push(HX_CSTRING("_ref"));
	outFields->push(HX_CSTRING("_blue"));
	outFields->push(HX_CSTRING("_green"));
	outFields->push(HX_CSTRING("_red"));
	outFields->push(HX_CSTRING("_matrix"));
	outFields->push(HX_CSTRING("_colorTransform"));
	outFields->push(HX_CSTRING("_tint"));
	outFields->push(HX_CSTRING("_alpha"));
	outFields->push(HX_CSTRING("_color"));
	outFields->push(HX_CSTRING("_maxHeight"));
	outFields->push(HX_CSTRING("_maxWidth"));
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_buffers"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("blend"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_graphics"),
	HX_CSTRING("_rect"),
	HX_CSTRING("_refHeight"),
	HX_CSTRING("_refWidth"),
	HX_CSTRING("_ref"),
	HX_CSTRING("_blue"),
	HX_CSTRING("_green"),
	HX_CSTRING("_red"),
	HX_CSTRING("_matrix"),
	HX_CSTRING("_colorTransform"),
	HX_CSTRING("_tint"),
	HX_CSTRING("_alpha"),
	HX_CSTRING("_color"),
	HX_CSTRING("_maxHeight"),
	HX_CSTRING("_maxWidth"),
	HX_CSTRING("_height"),
	HX_CSTRING("_width"),
	HX_CSTRING("_buffers"),
	HX_CSTRING("get_height"),
	HX_CSTRING("height"),
	HX_CSTRING("get_width"),
	HX_CSTRING("width"),
	HX_CSTRING("shift"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("get_alpha"),
	HX_CSTRING("set_color"),
	HX_CSTRING("get_color"),
	HX_CSTRING("drawGraphic"),
	HX_CSTRING("fillTexture"),
	HX_CSTRING("drawRect"),
	HX_CSTRING("fill"),
	HX_CSTRING("draw"),
	HX_CSTRING("render"),
	HX_CSTRING("blend"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Canvas_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Canvas_obj::__mClass,"__mClass");
};

#endif

Class Canvas_obj::__mClass;

void Canvas_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.Canvas"), hx::TCanCast< Canvas_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void Canvas_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
