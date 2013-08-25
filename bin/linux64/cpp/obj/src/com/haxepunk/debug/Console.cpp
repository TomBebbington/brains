#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_com_haxepunk_Engine
#include <com/haxepunk/Engine.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_Console
#include <com/haxepunk/debug/Console.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_LayerList
#include <com/haxepunk/debug/LayerList.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Input
#include <com/haxepunk/utils/Input.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_CapsStyle
#include <flash/display/CapsStyle.h>
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
#ifndef INCLUDED_flash_display_JointStyle
#include <flash/display/JointStyle.h>
#endif
#ifndef INCLUDED_flash_display_LineScaleMode
#include <flash/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
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
#ifndef INCLUDED_flash_system_System
#include <flash/system/System.h>
#endif
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_flash_text_TextFormatAlign
#include <flash/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace com{
namespace haxepunk{
namespace debug{

Void Console_obj::__construct()
{
HX_STACK_FRAME("Console","new","Console.new","com/haxepunk/debug/Console.hx",37)
{
	HX_STACK_LINE(38)
	this->init();
	HX_STACK_LINE(40)
	::com::haxepunk::utils::Input_obj::define(HX_CSTRING("_ARROWS"),Array_obj< int >::__new().Add((int)39).Add((int)37).Add((int)40).Add((int)38));
}
;
	return null();
}

Console_obj::~Console_obj() { }

Dynamic Console_obj::__CreateEmpty() { return  new Console_obj; }
hx::ObjectPtr< Console_obj > Console_obj::__new()
{  hx::ObjectPtr< Console_obj > result = new Console_obj();
	result->__construct();
	return result;}

Dynamic Console_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Console_obj > result = new Console_obj();
	result->__construct();
	return result;}

int Console_obj::get_height( ){
	HX_STACK_FRAME("Console","get_height","Console.get_height","com/haxepunk/debug/Console.hx",1026)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1026)
	return ::com::haxepunk::HXP_obj::windowHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,get_height,return )

int Console_obj::get_width( ){
	HX_STACK_FRAME("Console","get_width","Console.get_width","com/haxepunk/debug/Console.hx",1023)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1023)
	return ::com::haxepunk::HXP_obj::windowWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,get_width,return )

::flash::text::TextFormat Console_obj::format( hx::Null< int >  __o_size,hx::Null< int >  __o_color,::String __o_align){
int size = __o_size.Default(16);
int color = __o_color.Default(16777215);
::String align = __o_align.Default(HX_CSTRING("left"));
	HX_STACK_FRAME("Console","format","Console.format","com/haxepunk/debug/Console.hx",1002)
	HX_STACK_THIS(this)
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(align,"align")
{
		HX_STACK_LINE(1003)
		this->_format->size = size;
		HX_STACK_LINE(1004)
		this->_format->color = color;
		HX_STACK_LINE(1005)
		::String _switch_1 = (align);
		if (  ( _switch_1==HX_CSTRING("left"))){
			HX_STACK_LINE(1008)
			this->_format->align = ::flash::text::TextFormatAlign_obj::LEFT;
		}
		else if (  ( _switch_1==HX_CSTRING("right"))){
			HX_STACK_LINE(1010)
			this->_format->align = ::flash::text::TextFormatAlign_obj::RIGHT;
		}
		else if (  ( _switch_1==HX_CSTRING("center"))){
			HX_STACK_LINE(1012)
			this->_format->align = ::flash::text::TextFormatAlign_obj::CENTER;
		}
		else if (  ( _switch_1==HX_CSTRING("justify"))){
			HX_STACK_LINE(1014)
			this->_format->align = ::flash::text::TextFormatAlign_obj::JUSTIFY;
		}
		HX_STACK_LINE(1016)
		return this->_format;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Console_obj,format,return )

Void Console_obj::updateButtons( ){
{
		HX_STACK_FRAME("Console","updateButtons","Console.updateButtons","com/haxepunk/debug/Console.hx",962)
		HX_STACK_THIS(this)
		HX_STACK_LINE(964)
		this->_butRead->set_x((((this->_fpsInfo->get_x() + this->_fpsInfo->get_width()) + ::Std_obj::_int((Float(((this->_entRead->get_x() - ((this->_fpsInfo->get_x() + this->_fpsInfo->get_width()))))) / Float((int)2)))) - (int)30));
		HX_STACK_LINE(965)
		this->_butDebug->set_visible((bool(this->_paused) && bool(!(this->_debug))));
		HX_STACK_LINE(966)
		this->_butOutput->set_visible((bool(this->_paused) && bool(this->_debug)));
		HX_STACK_LINE(967)
		this->_butPlay->set_visible(::com::haxepunk::HXP_obj::engine->paused);
		HX_STACK_LINE(968)
		this->_butPause->set_visible(!(::com::haxepunk::HXP_obj::engine->paused));
		HX_STACK_LINE(969)
		this->_butStep->set_visible(this->_paused);
		HX_STACK_LINE(972)
		if ((this->_butDebug->bitmapData->get_rect()->contains(this->_butDebug->get_mouseX(),this->_butDebug->get_mouseY()))){
			HX_STACK_LINE(974)
			this->_butDebug->set_alpha(this->_butOutput->set_alpha((int)1));
			HX_STACK_LINE(975)
			if ((::com::haxepunk::utils::Input_obj::mousePressed)){
				HX_STACK_LINE(975)
				this->set_debug(!(this->_debug));
			}
		}
		else{
			HX_STACK_LINE(977)
			this->_butDebug->set_alpha(this->_butOutput->set_alpha(0.5));
		}
		HX_STACK_LINE(980)
		if ((this->_butPlay->bitmapData->get_rect()->contains(this->_butPlay->get_mouseX(),this->_butPlay->get_mouseY()))){
			HX_STACK_LINE(982)
			this->_butPlay->set_alpha(this->_butPause->set_alpha((int)1));
			HX_STACK_LINE(983)
			if ((::com::haxepunk::utils::Input_obj::mousePressed)){
				HX_STACK_LINE(985)
				::com::haxepunk::HXP_obj::engine->paused = !(::com::haxepunk::HXP_obj::engine->paused);
				HX_STACK_LINE(986)
				this->renderEntities();
			}
		}
		else{
			HX_STACK_LINE(989)
			this->_butPlay->set_alpha(this->_butPause->set_alpha(0.5));
		}
		HX_STACK_LINE(992)
		if ((this->_butStep->bitmapData->get_rect()->contains(this->_butStep->get_mouseX(),this->_butStep->get_mouseY()))){
			HX_STACK_LINE(994)
			this->_butStep->set_alpha((int)1);
			HX_STACK_LINE(995)
			if ((::com::haxepunk::utils::Input_obj::mousePressed)){
				HX_STACK_LINE(995)
				this->stepFrame();
			}
		}
		else{
			HX_STACK_LINE(997)
			this->_butStep->set_alpha(.5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateButtons,(void))

Void Console_obj::updateEntityCount( ){
{
		HX_STACK_FRAME("Console","updateEntityCount","Console.updateEntityCount","com/haxepunk/debug/Console.hx",957)
		HX_STACK_THIS(this)
		HX_STACK_LINE(957)
		this->_entReadText->set_text((::Std_obj::string(::com::haxepunk::HXP_obj::_scene->_count) + HX_CSTRING(" Entities")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateEntityCount,(void))

Void Console_obj::updateDebugRead( ){
{
		HX_STACK_FRAME("Console","updateDebugRead","Console.updateDebugRead","com/haxepunk/debug/Console.hx",901)
		HX_STACK_THIS(this)
		HX_STACK_LINE(902)
		::String str;		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(904)
		bool big = (this->get_width() >= (int)480);		HX_STACK_VAR(big,"big");
		HX_STACK_LINE(908)
		::String s = (((((((HX_CSTRING("Mouse: ") + ::Std_obj::string(::Std_obj::_int((::com::haxepunk::HXP_obj::screen->get_mouseX() + ::com::haxepunk::HXP_obj::_scene->camera->x)))) + HX_CSTRING(", ")) + ::Std_obj::string(::Std_obj::_int((::com::haxepunk::HXP_obj::screen->get_mouseY() + ::com::haxepunk::HXP_obj::_scene->camera->y)))) + HX_CSTRING("\nCamera: ")) + ::Std_obj::string(::com::haxepunk::HXP_obj::camera->x)) + HX_CSTRING(", ")) + ::Std_obj::string(::com::haxepunk::HXP_obj::camera->y));		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(910)
		if (((this->SELECT_LIST->length != (int)0))){
			HX_STACK_LINE(912)
			if (((this->SELECT_LIST->length > (int)1))){
				HX_STACK_LINE(914)
				hx::AddEq(s,(HX_CSTRING("\n\nSelected: ") + ::Std_obj::string(this->SELECT_LIST->length)));
			}
			else{
				HX_STACK_LINE(918)
				::com::haxepunk::Entity e = this->SELECT_LIST->first();		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(919)
				hx::AddEq(s,((HX_CSTRING("\n\n- ") + ::Type_obj::getClassName(::Type_obj::getClass(e))) + HX_CSTRING(" -\n")));
				HX_STACK_LINE(920)
				for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->WATCH_LIST->iterator());  __it->hasNext(); ){
					::String str1 = __it->next();
					{
						HX_STACK_LINE(925)
						Dynamic field = ::Reflect_obj::field(e,str1);		HX_STACK_VAR(field,"field");
						HX_STACK_LINE(927)
						if (((field != null()))){
							HX_STACK_LINE(929)
							hx::AddEq(s,(((HX_CSTRING("\n") + str1) + HX_CSTRING(": ")) + ::Std_obj::string(field)));
						}
					}
;
				}
			}
		}
		HX_STACK_LINE(936)
		this->_debReadText1->set_text(s);
		HX_STACK_LINE(937)
		this->_debReadText1->setTextFormat(this->format((  ((big)) ? int((int)16) : int((int)8) ),null(),null()),null(),null());
		HX_STACK_LINE(938)
		this->_debReadText1->set_width(::Math_obj::max((this->_debReadText1->get_textWidth() + (int)4),this->_debReadText0->get_width()));
		HX_STACK_LINE(939)
		this->_debReadText1->set_height(((this->_debReadText1->get_y() + this->_debReadText1->get_textHeight()) + (int)4));
		HX_STACK_LINE(942)
		this->_debRead->set_y(::Std_obj::_int((this->get_height() - this->_debReadText1->get_height())));
		HX_STACK_LINE(943)
		this->_debRead->get_graphics()->clear();
		HX_STACK_LINE(944)
		this->_debRead->get_graphics()->beginFill((int)0,.75);
		HX_STACK_LINE(949)
		this->_debRead->get_graphics()->drawRect((int)0,(int)0,this->_debReadText0->get_width(),(int)20);
		HX_STACK_LINE(950)
		this->_debRead->get_graphics()->drawRect((int)0,(int)20,(this->_debReadText1->get_width() + (int)20),((this->get_height() - this->_debRead->get_y()) - (int)20));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateDebugRead,(void))

Void Console_obj::updateFPSRead( ){
{
		HX_STACK_FRAME("Console","updateFPSRead","Console.updateFPSRead","com/haxepunk/debug/Console.hx",887)
		HX_STACK_THIS(this)
		HX_STACK_LINE(888)
		this->_fpsReadText->set_text((HX_CSTRING("FPS: ") + ::Std_obj::_int(::com::haxepunk::HXP_obj::frameRate)));
		HX_STACK_LINE(889)
		this->_fpsInfoText0->set_text((((((HX_CSTRING("Update: ") + ::Std_obj::string(::com::haxepunk::HXP_obj::_updateTime)) + HX_CSTRING("ms\n")) + HX_CSTRING("Render: ")) + ::Std_obj::string(::com::haxepunk::HXP_obj::_renderTime)) + HX_CSTRING("ms")));
		HX_STACK_LINE(892)
		this->_fpsInfoText1->set_text((((((HX_CSTRING("System: ") + ::Std_obj::string(::com::haxepunk::HXP_obj::_systemTime)) + HX_CSTRING("ms\n")) + HX_CSTRING("Game: ")) + ::Std_obj::string(::com::haxepunk::HXP_obj::_gameTime)) + HX_CSTRING("ms")));
		struct _Function_1_1{
			inline static Float Block( ){
				HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/debug/Console.hx",896)
				{
					HX_STACK_LINE(896)
					Float num = (Float((Float(::flash::system::System_obj::get_totalMemory()) / Float((int)1024))) / Float((int)1024));		HX_STACK_VAR(num,"num");
					HX_STACK_LINE(896)
					Float exp = ::Math_obj::pow((int)10,(int)2);		HX_STACK_VAR(exp,"exp");
					HX_STACK_LINE(896)
					return (Float(::Math_obj::round((num * exp))) / Float(exp));
				}
				return null();
			}
		};
		HX_STACK_LINE(895)
		this->_memReadText->set_text(((HX_CSTRING("Mem: ") + _Function_1_1::Block()) + HX_CSTRING("MB")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateFPSRead,(void))

Void Console_obj::updateLog( ){
{
		HX_STACK_FRAME("Console","updateLog","Console.updateLog","com/haxepunk/debug/Console.hx",791)
		HX_STACK_THIS(this)
		HX_STACK_LINE(792)
		this->_logHeight = (this->get_height() - (int)60);
		HX_STACK_LINE(793)
		this->_logBar->height = (this->_logHeight - (int)8);
		HX_STACK_LINE(796)
		if ((this->_paused)){
			HX_STACK_LINE(799)
			this->_logRead->set_y((int)40);
			HX_STACK_LINE(800)
			this->_logRead->get_graphics()->clear();
			HX_STACK_LINE(801)
			this->_logRead->get_graphics()->beginFill((int)0,.75);
			HX_STACK_LINE(805)
			this->_logRead->get_graphics()->drawRect((int)0,(int)0,this->_logReadText0->get_width(),(int)20);
			HX_STACK_LINE(807)
			this->_logRead->get_graphics()->drawRect((int)0,(int)20,this->get_width(),this->_logHeight);
			HX_STACK_LINE(810)
			this->_logRead->get_graphics()->beginFill((int)2105376,(int)1);
			HX_STACK_LINE(814)
			this->_logRead->get_graphics()->drawRoundRect(this->_logBar->x,this->_logBar->y,this->_logBar->width,this->_logBar->height,(int)8,(int)8);
			HX_STACK_LINE(818)
			if (((this->LOG->length > this->_logLines))){
				HX_STACK_LINE(821)
				this->_logRead->get_graphics()->beginFill((int)16777215,(int)1);
				HX_STACK_LINE(822)
				int y = ::Std_obj::_int(((this->_logBar->y + (int)2) + (((this->_logBar->height - (int)16)) * this->_logScroll)));		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(826)
				this->_logRead->get_graphics()->drawRoundRect((this->_logBar->x + (int)2),y,(int)12,(int)12,(int)6,(int)6);
			}
			HX_STACK_LINE(831)
			if (((this->LOG->length != (int)0))){
				HX_STACK_LINE(833)
				int i;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(833)
				if (((this->LOG->length > this->_logLines))){
					HX_STACK_LINE(833)
					i = ::Std_obj::_int(::Math_obj::round((((this->LOG->length - this->_logLines)) * this->_logScroll)));
				}
				else{
					HX_STACK_LINE(833)
					i = (int)0;
				}
				HX_STACK_LINE(834)
				int n = ::Std_obj::_int((i + ::Math_obj::min(this->_logLines,this->LOG->length)));		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(835)
				::String s = HX_CSTRING("");		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(836)
				while(((i < n))){
					HX_STACK_LINE(836)
					hx::AddEq(s,(this->LOG->__get((i)++) + HX_CSTRING("\n")));
				}
				HX_STACK_LINE(837)
				this->_logReadText1->set_text(s);
			}
			else{
				HX_STACK_LINE(839)
				this->_logReadText1->set_text(HX_CSTRING(""));
			}
			HX_STACK_LINE(842)
			this->_logReadText1->set_height(this->_logHeight);
			HX_STACK_LINE(843)
			this->_logReadText1->set_x((int)32);
			HX_STACK_LINE(844)
			this->_logReadText1->set_y((int)24);
			HX_STACK_LINE(847)
			this->_fpsReadText->set_selectable(true);
			HX_STACK_LINE(848)
			this->_fpsInfoText0->set_selectable(true);
			HX_STACK_LINE(849)
			this->_fpsInfoText1->set_selectable(true);
			HX_STACK_LINE(850)
			this->_memReadText->set_selectable(true);
			HX_STACK_LINE(851)
			this->_entReadText->set_selectable(true);
			HX_STACK_LINE(852)
			this->_debReadText1->set_selectable(true);
		}
		else{
			HX_STACK_LINE(857)
			this->_logRead->set_y((this->get_height() - (int)40));
			HX_STACK_LINE(858)
			this->_logReadText1->set_height((int)20);
			HX_STACK_LINE(859)
			this->_logRead->get_graphics()->clear();
			HX_STACK_LINE(860)
			this->_logRead->get_graphics()->beginFill((int)0,.75);
			HX_STACK_LINE(864)
			this->_logRead->get_graphics()->drawRect((int)0,(int)0,this->_logReadText0->get_width(),(int)20);
			HX_STACK_LINE(866)
			this->_logRead->get_graphics()->drawRect((int)0,(int)20,this->get_width(),(int)20);
			HX_STACK_LINE(869)
			this->_logReadText1->set_text((  (((this->LOG->length != (int)0))) ? ::String(this->LOG->__get((this->LOG->length - (int)1))) : ::String(HX_CSTRING("")) ));
			HX_STACK_LINE(870)
			this->_logReadText1->set_x((int)2);
			HX_STACK_LINE(871)
			this->_logReadText1->set_y((int)21);
			HX_STACK_LINE(874)
			this->_logReadText1->set_selectable(false);
			HX_STACK_LINE(875)
			this->_fpsReadText->set_selectable(false);
			HX_STACK_LINE(876)
			this->_fpsInfoText0->set_selectable(false);
			HX_STACK_LINE(877)
			this->_fpsInfoText1->set_selectable(false);
			HX_STACK_LINE(878)
			this->_memReadText->set_selectable(false);
			HX_STACK_LINE(879)
			this->_entReadText->set_selectable(false);
			HX_STACK_LINE(880)
			this->_debReadText0->set_selectable(false);
			HX_STACK_LINE(881)
			this->_debReadText1->set_selectable(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateLog,(void))

Void Console_obj::renderEntities( ){
{
		HX_STACK_FRAME("Console","renderEntities","Console.renderEntities","com/haxepunk/debug/Console.hx",735)
		HX_STACK_THIS(this)
		HX_STACK_LINE(736)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(738)
		this->_entScreen->set_visible(this->_debug);
		HX_STACK_LINE(739)
		if ((this->_debug)){
			HX_STACK_LINE(741)
			::flash::display::Graphics g = this->_entScreen->get_graphics();		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(742)
			Float sx = ::com::haxepunk::HXP_obj::screen->fullScaleX;		HX_STACK_VAR(sx,"sx");
			HX_STACK_LINE(743)
			Float sy = ::com::haxepunk::HXP_obj::screen->fullScaleY;		HX_STACK_VAR(sy,"sy");
			HX_STACK_LINE(744)
			g->clear();
			HX_STACK_LINE(745)
			for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >(this->SCREEN_LIST->iterator());  __it->hasNext(); ){
				::com::haxepunk::Entity e1 = __it->next();
				{
					HX_STACK_LINE(747)
					Float graphicScrollX;		HX_STACK_VAR(graphicScrollX,"graphicScrollX");
					HX_STACK_LINE(747)
					if (((e1->_graphic != null()))){
						HX_STACK_LINE(747)
						graphicScrollX = e1->_graphic->scrollX;
					}
					else{
						HX_STACK_LINE(747)
						graphicScrollX = (int)1;
					}
					HX_STACK_LINE(748)
					Float graphicScrollY;		HX_STACK_VAR(graphicScrollY,"graphicScrollY");
					HX_STACK_LINE(748)
					if (((e1->_graphic != null()))){
						HX_STACK_LINE(748)
						graphicScrollY = e1->_graphic->scrollY;
					}
					else{
						HX_STACK_LINE(748)
						graphicScrollY = (int)1;
					}
					HX_STACK_LINE(751)
					if (((::Lambda_obj::indexOf(this->SELECT_LIST,e1) < (int)0))){
						HX_STACK_LINE(754)
						if (((bool((e1->width != (int)0)) && bool((e1->height != (int)0))))){
							HX_STACK_LINE(756)
							g->lineStyle((int)1,(int)16711680,null(),null(),null(),null(),null(),null());
							HX_STACK_LINE(757)
							g->drawRect(((((e1->x - e1->originX) - (::com::haxepunk::HXP_obj::camera->x * graphicScrollX))) * sx),((((e1->y - e1->originY) - (::com::haxepunk::HXP_obj::camera->y * graphicScrollY))) * sy),(e1->width * sx),(e1->height * sy));
							HX_STACK_LINE(759)
							if (((e1->_mask != null()))){
								HX_STACK_LINE(761)
								g->lineStyle((int)1,(int)255,null(),null(),null(),null(),null(),null());
								HX_STACK_LINE(762)
								e1->_mask->debugDraw(g,sx,sy);
							}
						}
						HX_STACK_LINE(765)
						g->lineStyle((int)1,(int)65280,null(),null(),null(),null(),null(),null());
						HX_STACK_LINE(766)
						g->drawRect(((((e1->x - (::com::haxepunk::HXP_obj::camera->x * graphicScrollX))) * sx) - (int)3),((((e1->y - (::com::haxepunk::HXP_obj::camera->y * graphicScrollY))) * sy) - (int)3),(int)6,(int)6);
					}
					else{
						HX_STACK_LINE(771)
						if (((bool((e1->width != (int)0)) && bool((e1->height != (int)0))))){
							HX_STACK_LINE(773)
							g->lineStyle((int)1,(int)16777215,null(),null(),null(),null(),null(),null());
							HX_STACK_LINE(774)
							g->drawRect(((((e1->x - e1->originX) - (::com::haxepunk::HXP_obj::camera->x * graphicScrollX))) * sx),((((e1->y - e1->originY) - (::com::haxepunk::HXP_obj::camera->y * graphicScrollY))) * sy),(e1->width * sx),(e1->height * sy));
							HX_STACK_LINE(776)
							if (((e1->_mask != null()))){
								HX_STACK_LINE(778)
								g->lineStyle((int)1,(int)255,null(),null(),null(),null(),null(),null());
								HX_STACK_LINE(779)
								e1->_mask->debugDraw(g,sx,sy);
							}
						}
						HX_STACK_LINE(782)
						g->lineStyle((int)1,(int)16777215,null(),null(),null(),null(),null(),null());
						HX_STACK_LINE(783)
						g->drawRect(((((e1->x - (::com::haxepunk::HXP_obj::camera->x * graphicScrollX))) * sx) - (int)3),((((e1->y - (::com::haxepunk::HXP_obj::camera->y * graphicScrollY))) * sy) - (int)3),(int)6,(int)6);
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,renderEntities,(void))

Void Console_obj::updateEntityLists( hx::Null< bool >  __o_fetchList){
bool fetchList = __o_fetchList.Default(true);
	HX_STACK_FRAME("Console","updateEntityLists","Console.updateEntityLists","com/haxepunk/debug/Console.hx",709)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fetchList,"fetchList")
{
		HX_STACK_LINE(711)
		if ((fetchList)){
			HX_STACK_LINE(713)
			{
				HX_STACK_LINE(713)
				Dynamic array = this->ENTITY_LIST;		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(713)
				array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
			}
			HX_STACK_LINE(714)
			{
				HX_STACK_LINE(714)
				Dynamic array = this->LAYER_LIST;		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(714)
				array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
			}
			HX_STACK_LINE(715)
			::com::haxepunk::HXP_obj::_scene->getAll(this->ENTITY_LIST);
		}
		HX_STACK_LINE(719)
		this->SCREEN_LIST->clear();
		HX_STACK_LINE(720)
		{
			HX_STACK_LINE(720)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(720)
			Array< ::Dynamic > _g1 = this->ENTITY_LIST;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(720)
			while(((_g < _g1->length))){
				HX_STACK_LINE(720)
				::com::haxepunk::Entity e = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(720)
				++(_g);
				HX_STACK_LINE(722)
				if (((  (((e->_scene == null()))) ? bool(false) : bool(e->collideRect(e->x,e->y,e->_scene->camera->x,e->_scene->camera->y,::com::haxepunk::HXP_obj::width,::com::haxepunk::HXP_obj::height)) ))){
					HX_STACK_LINE(723)
					this->SCREEN_LIST->push(e);
				}
				HX_STACK_LINE(725)
				if (((::Lambda_obj::indexOf(this->LAYER_LIST,e->_layer) < (int)0))){
					HX_STACK_LINE(726)
					this->LAYER_LIST->push(e->_layer);
				}
			}
		}

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int run(int a,int b){
			HX_STACK_FRAME("*","_Function_1_1","*._Function_1_1","com/haxepunk/debug/Console.hx",729)
			HX_STACK_ARG(a,"a")
			HX_STACK_ARG(b,"b")
			{
				HX_STACK_LINE(729)
				return (a - b);
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(729)
		this->LAYER_LIST->sort( Dynamic(new _Function_1_1()));
		HX_STACK_LINE(730)
		this->_layerList->set(this->LAYER_LIST);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,updateEntityLists,(void))

Void Console_obj::updateKeyPanning( ){
{
		HX_STACK_FRAME("Console","updateKeyPanning","Console.updateKeyPanning","com/haxepunk/debug/Console.hx",701)
		HX_STACK_THIS(this)
		HX_STACK_LINE(702)
		::com::haxepunk::HXP_obj::point->x = (((  ((::com::haxepunk::utils::Input_obj::check((int)39))) ? int((int)1) : int((int)0) )) - ((  ((::com::haxepunk::utils::Input_obj::check((int)37))) ? int((int)1) : int((int)0) )));
		HX_STACK_LINE(703)
		::com::haxepunk::HXP_obj::point->y = (((  ((::com::haxepunk::utils::Input_obj::check((int)40))) ? int((int)1) : int((int)0) )) - ((  ((::com::haxepunk::utils::Input_obj::check((int)38))) ? int((int)1) : int((int)0) )));
		HX_STACK_LINE(704)
		if (((bool((::com::haxepunk::HXP_obj::point->x != (int)0)) || bool((::com::haxepunk::HXP_obj::point->y != (int)0))))){
			HX_STACK_LINE(704)
			this->panCamera(::Std_obj::_int(::com::haxepunk::HXP_obj::point->x),::Std_obj::_int(::com::haxepunk::HXP_obj::point->y));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateKeyPanning,(void))

Void Console_obj::updateKeyMoving( ){
{
		HX_STACK_FRAME("Console","updateKeyMoving","Console.updateKeyMoving","com/haxepunk/debug/Console.hx",693)
		HX_STACK_THIS(this)
		HX_STACK_LINE(694)
		::com::haxepunk::HXP_obj::point->x = (((  ((::com::haxepunk::utils::Input_obj::pressed((int)39))) ? int((int)1) : int((int)0) )) - ((  ((::com::haxepunk::utils::Input_obj::pressed((int)37))) ? int((int)1) : int((int)0) )));
		HX_STACK_LINE(695)
		::com::haxepunk::HXP_obj::point->y = (((  ((::com::haxepunk::utils::Input_obj::pressed((int)40))) ? int((int)1) : int((int)0) )) - ((  ((::com::haxepunk::utils::Input_obj::pressed((int)38))) ? int((int)1) : int((int)0) )));
		HX_STACK_LINE(696)
		if (((bool((::com::haxepunk::HXP_obj::point->x != (int)0)) || bool((::com::haxepunk::HXP_obj::point->y != (int)0))))){
			HX_STACK_LINE(696)
			this->moveSelected(::Std_obj::_int(::com::haxepunk::HXP_obj::point->x),::Std_obj::_int(::com::haxepunk::HXP_obj::point->y));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateKeyMoving,(void))

Void Console_obj::updateScrolling( ){
{
		HX_STACK_FRAME("Console","updateScrolling","Console.updateScrolling","com/haxepunk/debug/Console.hx",685)
		HX_STACK_THIS(this)
		HX_STACK_LINE(686)
		this->_scrolling = ::com::haxepunk::utils::Input_obj::mouseDown;
		HX_STACK_LINE(687)
		this->_logScroll = ::com::haxepunk::HXP_obj::scaleClamp(::com::haxepunk::utils::Input_obj::get_mouseFlashY(),this->_logBarGlobal->y,this->_logBarGlobal->get_bottom(),(int)0,(int)1);
		HX_STACK_LINE(688)
		this->updateLog();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateScrolling,(void))

Void Console_obj::startScrolling( ){
{
		HX_STACK_FRAME("Console","startScrolling","Console.startScrolling","com/haxepunk/debug/Console.hx",680)
		HX_STACK_THIS(this)
		HX_STACK_LINE(680)
		if (((this->LOG->length > this->_logLines))){
			HX_STACK_LINE(680)
			this->_scrolling = this->_logBarGlobal->contains(::com::haxepunk::utils::Input_obj::get_mouseFlashX(),::com::haxepunk::utils::Input_obj::get_mouseFlashY());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,startScrolling,(void))

Void Console_obj::selectAll( ){
{
		HX_STACK_FRAME("Console","selectAll","Console.selectAll","com/haxepunk/debug/Console.hx",670)
		HX_STACK_THIS(this)
		HX_STACK_LINE(671)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(672)
		this->SELECT_LIST->clear();
		HX_STACK_LINE(673)
		for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >(this->SCREEN_LIST->iterator());  __it->hasNext(); ){
			::com::haxepunk::Entity e1 = __it->next();
			this->SELECT_LIST->push(e1);
		}
		HX_STACK_LINE(674)
		this->renderEntities();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,selectAll,(void))

Void Console_obj::selectEntities( ::flash::geom::Rectangle rect){
{
		HX_STACK_FRAME("Console","selectEntities","Console.selectEntities","com/haxepunk/debug/Console.hx",631)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_LINE(632)
		if (((rect->width < (int)0))){
			HX_STACK_LINE(632)
			hx::SubEq(rect->x,rect->width = -(rect->width));
		}
		else{
			HX_STACK_LINE(633)
			if (((rect->width == (int)0))){
				HX_STACK_LINE(633)
				rect->width = (int)1;
			}
		}
		HX_STACK_LINE(634)
		if (((rect->height < (int)0))){
			HX_STACK_LINE(634)
			hx::SubEq(rect->y,rect->height = -(rect->height));
		}
		else{
			HX_STACK_LINE(635)
			if (((rect->height == (int)0))){
				HX_STACK_LINE(635)
				rect->height = (int)1;
			}
		}
		HX_STACK_LINE(637)
		::com::haxepunk::HXP_obj::rect->width = ::com::haxepunk::HXP_obj::rect->height = (int)6;
		HX_STACK_LINE(638)
		Float sx = ::com::haxepunk::HXP_obj::screen->fullScaleX;		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(639)
		Float sy = ::com::haxepunk::HXP_obj::screen->fullScaleY;		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(638)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(642)
		if ((::com::haxepunk::utils::Input_obj::check((int)17))){
			HX_STACK_LINE(645)
			for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >(this->SCREEN_LIST->iterator());  __it->hasNext(); ){
				::com::haxepunk::Entity e1 = __it->next();
				if (((::Lambda_obj::indexOf(this->SELECT_LIST,e1) < (int)0))){
					HX_STACK_LINE(649)
					::com::haxepunk::HXP_obj::rect->x = ((((e1->x - ::com::haxepunk::HXP_obj::camera->x)) * sx) - (int)3);
					HX_STACK_LINE(650)
					::com::haxepunk::HXP_obj::rect->y = ((((e1->y - ::com::haxepunk::HXP_obj::camera->y)) * sy) - (int)3);
					HX_STACK_LINE(651)
					if ((rect->intersects(::com::haxepunk::HXP_obj::rect))){
						HX_STACK_LINE(651)
						this->SELECT_LIST->push(e1);
					}
				}
;
			}
		}
		else{
			HX_STACK_LINE(658)
			this->SELECT_LIST->clear();
			HX_STACK_LINE(659)
			for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >(this->SCREEN_LIST->iterator());  __it->hasNext(); ){
				::com::haxepunk::Entity e1 = __it->next();
				{
					HX_STACK_LINE(661)
					::com::haxepunk::HXP_obj::rect->x = ((((e1->x - ::com::haxepunk::HXP_obj::camera->x)) * sx) - (int)3);
					HX_STACK_LINE(662)
					::com::haxepunk::HXP_obj::rect->y = ((((e1->y - ::com::haxepunk::HXP_obj::camera->y)) * sy) - (int)3);
					HX_STACK_LINE(663)
					if ((rect->intersects(::com::haxepunk::HXP_obj::rect))){
						HX_STACK_LINE(663)
						this->SELECT_LIST->push(e1);
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,selectEntities,(void))

Void Console_obj::updateSelection( ){
{
		HX_STACK_FRAME("Console","updateSelection","Console.updateSelection","com/haxepunk/debug/Console.hx",611)
		HX_STACK_THIS(this)
		HX_STACK_LINE(612)
		this->_entRect->width = (::com::haxepunk::utils::Input_obj::get_mouseFlashX() - this->_entRect->x);
		HX_STACK_LINE(613)
		this->_entRect->height = (::com::haxepunk::utils::Input_obj::get_mouseFlashY() - this->_entRect->y);
		HX_STACK_LINE(614)
		if ((::com::haxepunk::utils::Input_obj::mouseReleased)){
			HX_STACK_LINE(616)
			this->selectEntities(this->_entRect);
			HX_STACK_LINE(617)
			this->renderEntities();
			HX_STACK_LINE(618)
			this->_selecting = false;
			HX_STACK_LINE(619)
			this->_entSelect->get_graphics()->clear();
		}
		else{
			HX_STACK_LINE(623)
			this->_entSelect->get_graphics()->clear();
			HX_STACK_LINE(624)
			this->_entSelect->get_graphics()->lineStyle((int)1,(int)16777215,null(),null(),null(),null(),null(),null());
			HX_STACK_LINE(625)
			this->_entSelect->get_graphics()->drawRect(this->_entRect->x,this->_entRect->y,this->_entRect->width,this->_entRect->height);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateSelection,(void))

Void Console_obj::startSelection( ){
{
		HX_STACK_FRAME("Console","startSelection","Console.startSelection","com/haxepunk/debug/Console.hx",601)
		HX_STACK_THIS(this)
		HX_STACK_LINE(602)
		this->_selecting = true;
		HX_STACK_LINE(603)
		this->_entRect->x = ::com::haxepunk::utils::Input_obj::get_mouseFlashX();
		HX_STACK_LINE(604)
		this->_entRect->y = ::com::haxepunk::utils::Input_obj::get_mouseFlashY();
		HX_STACK_LINE(605)
		this->_entRect->width = (int)0;
		HX_STACK_LINE(606)
		this->_entRect->height = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,startSelection,(void))

Void Console_obj::setCamera( int x,int y){
{
		HX_STACK_FRAME("Console","setCamera","Console.setCamera","com/haxepunk/debug/Console.hx",591)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(592)
		::com::haxepunk::HXP_obj::camera->x = x;
		HX_STACK_LINE(593)
		::com::haxepunk::HXP_obj::camera->y = y;
		HX_STACK_LINE(594)
		::com::haxepunk::HXP_obj::engine->render();
		HX_STACK_LINE(595)
		this->updateEntityLists(true);
		HX_STACK_LINE(596)
		this->renderEntities();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,setCamera,(void))

Void Console_obj::panCamera( int xDelta,int yDelta){
{
		HX_STACK_FRAME("Console","panCamera","Console.panCamera","com/haxepunk/debug/Console.hx",581)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xDelta,"xDelta")
		HX_STACK_ARG(yDelta,"yDelta")
		HX_STACK_LINE(582)
		hx::AddEq(::com::haxepunk::HXP_obj::camera->x,xDelta);
		HX_STACK_LINE(583)
		hx::AddEq(::com::haxepunk::HXP_obj::camera->y,yDelta);
		HX_STACK_LINE(584)
		::com::haxepunk::HXP_obj::engine->render();
		HX_STACK_LINE(585)
		this->updateEntityLists(true);
		HX_STACK_LINE(586)
		this->renderEntities();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,panCamera,(void))

Void Console_obj::updatePanning( ){
{
		HX_STACK_FRAME("Console","updatePanning","Console.updatePanning","com/haxepunk/debug/Console.hx",572)
		HX_STACK_THIS(this)
		HX_STACK_LINE(573)
		if ((::com::haxepunk::utils::Input_obj::mouseReleased)){
			HX_STACK_LINE(573)
			this->_panning = false;
		}
		HX_STACK_LINE(574)
		this->panCamera(::Std_obj::_int((this->_entRect->x - ::com::haxepunk::utils::Input_obj::get_mouseX())),::Std_obj::_int((this->_entRect->y - ::com::haxepunk::utils::Input_obj::get_mouseY())));
		HX_STACK_LINE(575)
		this->_entRect->x = ::com::haxepunk::utils::Input_obj::get_mouseX();
		HX_STACK_LINE(576)
		this->_entRect->y = ::com::haxepunk::utils::Input_obj::get_mouseY();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updatePanning,(void))

Void Console_obj::startPanning( ){
{
		HX_STACK_FRAME("Console","startPanning","Console.startPanning","com/haxepunk/debug/Console.hx",564)
		HX_STACK_THIS(this)
		HX_STACK_LINE(565)
		this->_panning = true;
		HX_STACK_LINE(566)
		this->_entRect->x = ::com::haxepunk::utils::Input_obj::get_mouseX();
		HX_STACK_LINE(567)
		this->_entRect->y = ::com::haxepunk::utils::Input_obj::get_mouseY();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,startPanning,(void))

Void Console_obj::moveSelected( int xDelta,int yDelta){
{
		HX_STACK_FRAME("Console","moveSelected","Console.moveSelected","com/haxepunk/debug/Console.hx",551)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xDelta,"xDelta")
		HX_STACK_ARG(yDelta,"yDelta")
		HX_STACK_LINE(552)
		for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >(this->SELECT_LIST->iterator());  __it->hasNext(); ){
			::com::haxepunk::Entity e = __it->next();
			{
				HX_STACK_LINE(554)
				hx::AddEq(e->x,xDelta);
				HX_STACK_LINE(555)
				hx::AddEq(e->y,yDelta);
			}
;
		}
		HX_STACK_LINE(557)
		::com::haxepunk::HXP_obj::engine->render();
		HX_STACK_LINE(558)
		this->renderEntities();
		HX_STACK_LINE(559)
		this->updateEntityLists(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,moveSelected,(void))

Void Console_obj::updateDragging( ){
{
		HX_STACK_FRAME("Console","updateDragging","Console.updateDragging","com/haxepunk/debug/Console.hx",542)
		HX_STACK_THIS(this)
		HX_STACK_LINE(543)
		this->moveSelected(::Std_obj::_int((::com::haxepunk::utils::Input_obj::get_mouseX() - this->_entRect->x)),::Std_obj::_int((::com::haxepunk::utils::Input_obj::get_mouseY() - this->_entRect->y)));
		HX_STACK_LINE(544)
		this->_entRect->x = ::com::haxepunk::utils::Input_obj::get_mouseX();
		HX_STACK_LINE(545)
		this->_entRect->y = ::com::haxepunk::utils::Input_obj::get_mouseY();
		HX_STACK_LINE(546)
		if ((::com::haxepunk::utils::Input_obj::mouseReleased)){
			HX_STACK_LINE(546)
			this->_dragging = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateDragging,(void))

Void Console_obj::startDragging( ){
{
		HX_STACK_FRAME("Console","startDragging","Console.startDragging","com/haxepunk/debug/Console.hx",534)
		HX_STACK_THIS(this)
		HX_STACK_LINE(535)
		this->_dragging = true;
		HX_STACK_LINE(536)
		this->_entRect->x = ::com::haxepunk::utils::Input_obj::get_mouseX();
		HX_STACK_LINE(537)
		this->_entRect->y = ::com::haxepunk::utils::Input_obj::get_mouseY();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,startDragging,(void))

Void Console_obj::stepFrame( ){
{
		HX_STACK_FRAME("Console","stepFrame","Console.stepFrame","com/haxepunk/debug/Console.hx",524)
		HX_STACK_THIS(this)
		HX_STACK_LINE(525)
		::com::haxepunk::HXP_obj::engine->update();
		HX_STACK_LINE(526)
		::com::haxepunk::HXP_obj::engine->render();
		HX_STACK_LINE(527)
		this->updateEntityCount();
		HX_STACK_LINE(528)
		this->updateEntityLists(null());
		HX_STACK_LINE(529)
		this->renderEntities();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,stepFrame,(void))

bool Console_obj::set_debug( bool value){
	HX_STACK_FRAME("Console","set_debug","Console.set_debug","com/haxepunk/debug/Console.hx",505)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(507)
	if ((!(this->_enabled))){
		HX_STACK_LINE(507)
		return false;
	}
	HX_STACK_LINE(510)
	this->_debug = value;
	HX_STACK_LINE(511)
	this->_debRead->set_visible(value);
	HX_STACK_LINE(512)
	this->_layerList->set_visible(value);
	HX_STACK_LINE(513)
	this->_logRead->set_visible(!(value));
	HX_STACK_LINE(516)
	if ((value)){
		HX_STACK_LINE(516)
		this->updateEntityLists(null());
	}
	else{
		HX_STACK_LINE(517)
		this->updateLog();
	}
	HX_STACK_LINE(518)
	this->renderEntities();
	HX_STACK_LINE(519)
	return this->_debug;
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,set_debug,return )

bool Console_obj::get_debug( ){
	HX_STACK_FRAME("Console","get_debug","Console.get_debug","com/haxepunk/debug/Console.hx",503)
	HX_STACK_THIS(this)
	HX_STACK_LINE(503)
	return this->_debug;
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,get_debug,return )

bool Console_obj::set_paused( bool value){
	HX_STACK_FRAME("Console","set_paused","Console.set_paused","com/haxepunk/debug/Console.hx",463)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(465)
	if ((!(this->_enabled))){
		HX_STACK_LINE(465)
		return false;
	}
	HX_STACK_LINE(468)
	this->_paused = value;
	HX_STACK_LINE(469)
	::com::haxepunk::HXP_obj::engine->paused = value;
	HX_STACK_LINE(472)
	this->_back->set_visible(value);
	HX_STACK_LINE(473)
	this->_entScreen->set_visible(value);
	HX_STACK_LINE(474)
	this->_layerList->set_visible(value);
	HX_STACK_LINE(476)
	this->_butRead->set_visible(value);
	HX_STACK_LINE(480)
	if ((value)){
		HX_STACK_LINE(483)
		if ((this->_debug)){
			HX_STACK_LINE(483)
			this->set_debug(true);
		}
		else{
			HX_STACK_LINE(484)
			this->updateLog();
		}
	}
	else{
		HX_STACK_LINE(489)
		this->_debRead->set_visible(false);
		HX_STACK_LINE(490)
		this->_logRead->set_visible(true);
		HX_STACK_LINE(491)
		this->updateLog();
		HX_STACK_LINE(492)
		{
			HX_STACK_LINE(492)
			Dynamic array = this->ENTITY_LIST;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(492)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(493)
		this->SCREEN_LIST->clear();
		HX_STACK_LINE(494)
		this->SELECT_LIST->clear();
	}
	HX_STACK_LINE(496)
	return this->_paused;
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,set_paused,return )

bool Console_obj::get_paused( ){
	HX_STACK_FRAME("Console","get_paused","Console.get_paused","com/haxepunk/debug/Console.hx",461)
	HX_STACK_THIS(this)
	HX_STACK_LINE(461)
	return this->_paused;
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,get_paused,return )

Void Console_obj::update( ){
{
		HX_STACK_FRAME("Console","update","Console.update","com/haxepunk/debug/Console.hx",361)
		HX_STACK_THIS(this)
		HX_STACK_LINE(363)
		if ((!(this->_enabled))){
			HX_STACK_LINE(363)
			return null();
		}
		HX_STACK_LINE(366)
		this->_entRead->set_x((this->get_width() - this->_entReadText->get_width()));
		HX_STACK_LINE(367)
		this->_layerList->set_x(((this->get_width() - this->_layerList->get_width()) - (int)20));
		HX_STACK_LINE(368)
		this->_layerList->set_y((Float(((this->get_height() - this->_layerList->get_height()))) / Float((int)2)));
		HX_STACK_LINE(372)
		if ((this->_butRead->get_visible())){
			HX_STACK_LINE(372)
			this->updateButtons();
		}
		HX_STACK_LINE(375)
		if ((this->_paused)){
			HX_STACK_LINE(379)
			if ((this->_debug)){
				HX_STACK_LINE(382)
				if ((::com::haxepunk::HXP_obj::engine->paused)){
					HX_STACK_LINE(385)
					if ((::com::haxepunk::utils::Input_obj::mousePressed)){
						HX_STACK_LINE(388)
						if (((bool((::com::haxepunk::utils::Input_obj::get_mouseFlashY() > (int)20)) && bool(((bool((::com::haxepunk::utils::Input_obj::get_mouseFlashX() > this->_debReadText1->get_width())) || bool((::com::haxepunk::utils::Input_obj::get_mouseFlashY() < this->_debRead->get_y())))))))){
							HX_STACK_LINE(390)
							if ((::com::haxepunk::utils::Input_obj::check((int)16))){
								HX_STACK_LINE(392)
								if (((this->SELECT_LIST->length != (int)0))){
									HX_STACK_LINE(392)
									this->startDragging();
								}
								else{
									HX_STACK_LINE(393)
									this->startPanning();
								}
							}
							else{
								HX_STACK_LINE(395)
								this->startSelection();
							}
						}
					}
					else{
						HX_STACK_LINE(401)
						if ((this->_selecting)){
							HX_STACK_LINE(401)
							this->updateSelection();
						}
						HX_STACK_LINE(402)
						if ((this->_dragging)){
							HX_STACK_LINE(402)
							this->updateDragging();
						}
						HX_STACK_LINE(403)
						if ((this->_panning)){
							HX_STACK_LINE(403)
							this->updatePanning();
						}
					}
					HX_STACK_LINE(407)
					if ((::com::haxepunk::utils::Input_obj::pressed((int)65))){
						HX_STACK_LINE(407)
						this->selectAll();
					}
					HX_STACK_LINE(410)
					if ((::com::haxepunk::utils::Input_obj::check((int)16))){
						HX_STACK_LINE(413)
						if (((this->SELECT_LIST->length != (int)0))){
							HX_STACK_LINE(416)
							if ((::com::haxepunk::utils::Input_obj::pressed(HX_CSTRING("_ARROWS")))){
								HX_STACK_LINE(416)
								this->updateKeyMoving();
							}
						}
						else{
							HX_STACK_LINE(421)
							if ((::com::haxepunk::utils::Input_obj::check(HX_CSTRING("_ARROWS")))){
								HX_STACK_LINE(421)
								this->updateKeyPanning();
							}
						}
					}
					HX_STACK_LINE(425)
					this->_layerList->update();
				}
				else{
					HX_STACK_LINE(430)
					this->updateEntityLists((::com::haxepunk::HXP_obj::_scene->_count != this->ENTITY_LIST->length));
					HX_STACK_LINE(431)
					this->renderEntities();
					HX_STACK_LINE(432)
					this->updateFPSRead();
					HX_STACK_LINE(433)
					this->updateEntityCount();
				}
				HX_STACK_LINE(437)
				this->updateDebugRead();
			}
			else{
				HX_STACK_LINE(442)
				if ((this->_scrolling)){
					HX_STACK_LINE(442)
					this->updateScrolling();
				}
				else{
					HX_STACK_LINE(443)
					if ((::com::haxepunk::utils::Input_obj::mousePressed)){
						HX_STACK_LINE(443)
						this->startScrolling();
					}
				}
			}
		}
		else{
			HX_STACK_LINE(449)
			this->updateFPSRead();
			HX_STACK_LINE(450)
			this->updateEntityCount();
		}
		HX_STACK_LINE(454)
		if ((::com::haxepunk::utils::Input_obj::pressed(this->toggleKey))){
			HX_STACK_LINE(454)
			this->set_paused(!(this->_paused));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,update,(void))

bool Console_obj::set_visible( bool value){
	HX_STACK_FRAME("Console","set_visible","Console.set_visible","com/haxepunk/debug/Console.hx",351)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(352)
	this->_sprite->set_visible(value);
	HX_STACK_LINE(353)
	if (((bool(this->_enabled) && bool(value)))){
		HX_STACK_LINE(353)
		this->updateLog();
	}
	HX_STACK_LINE(354)
	return this->_sprite->get_visible();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,set_visible,return )

bool Console_obj::get_visible( ){
	HX_STACK_FRAME("Console","get_visible","Console.get_visible","com/haxepunk/debug/Console.hx",349)
	HX_STACK_THIS(this)
	HX_STACK_LINE(349)
	return this->_sprite->get_visible();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,get_visible,return )

Void Console_obj::onResize( ::flash::events::Event e){
{
		HX_STACK_FRAME("Console","onResize","Console.onResize","com/haxepunk/debug/Console.hx",329)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(330)
		if (((this->_back->bitmapData != null()))){
			HX_STACK_LINE(332)
			this->_back->bitmapData->dispose();
		}
		HX_STACK_LINE(334)
		this->_back->set_bitmapData(::com::haxepunk::HXP_obj::createBitmap(this->get_width(),this->get_height(),true,(int)-1));
		HX_STACK_LINE(335)
		::com::haxepunk::HXP_obj::matrix->identity();
		HX_STACK_LINE(336)
		::com::haxepunk::HXP_obj::matrix->tx = ::Math_obj::max((Float(((this->_back->bitmapData->get_width() - this->_bmpLogo->get_width()))) / Float((int)2)),(int)0);
		HX_STACK_LINE(337)
		::com::haxepunk::HXP_obj::matrix->ty = ::Math_obj::max((Float(((this->_back->bitmapData->get_height() - this->_bmpLogo->get_height()))) / Float((int)2)),(int)0);
		HX_STACK_LINE(338)
		::com::haxepunk::HXP_obj::matrix->scale(::Math_obj::min((Float(this->get_width()) / Float(this->_back->bitmapData->get_width())),(int)1),::Math_obj::min((Float(this->get_height()) / Float(this->_back->bitmapData->get_height())),(int)1));
		HX_STACK_LINE(339)
		this->_back->bitmapData->draw(this->_bmpLogo,::com::haxepunk::HXP_obj::matrix,null(),::flash::display::BlendMode_obj::MULTIPLY,null(),null());
		HX_STACK_LINE(340)
		this->_back->bitmapData->draw(this->_back->bitmapData,null(),null(),::flash::display::BlendMode_obj::INVERT,null(),null());
		HX_STACK_LINE(341)
		this->_back->bitmapData->colorTransform(this->_back->bitmapData->get_rect(),::flash::geom::ColorTransform_obj::__new((int)1,(int)1,(int)1,0.5,null(),null(),null(),null()));
		HX_STACK_LINE(342)
		this->updateLog();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,onResize,(void))

Void Console_obj::enable( ){
{
		HX_STACK_FRAME("Console","enable","Console.enable","com/haxepunk/debug/Console.hx",156)
		HX_STACK_THIS(this)
		HX_STACK_LINE(158)
		if ((this->_enabled)){
			HX_STACK_LINE(158)
			return null();
		}
		HX_STACK_LINE(161)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(163)
			this->_bmpLogo = ::flash::display::Bitmap_obj::__new(::openfl::Assets_obj::getBitmapData(HX_CSTRING("gfx/debug/console_logo.png"),null()),null(),null());
			HX_STACK_LINE(164)
			this->_butDebug = ::flash::display::Bitmap_obj::__new(::openfl::Assets_obj::getBitmapData(HX_CSTRING("gfx/debug/console_debug.png"),null()),null(),null());
			HX_STACK_LINE(165)
			this->_butOutput = ::flash::display::Bitmap_obj::__new(::openfl::Assets_obj::getBitmapData(HX_CSTRING("gfx/debug/console_output.png"),null()),null(),null());
			HX_STACK_LINE(166)
			this->_butPlay = ::flash::display::Bitmap_obj::__new(::openfl::Assets_obj::getBitmapData(HX_CSTRING("gfx/debug/console_play.png"),null()),null(),null());
			HX_STACK_LINE(167)
			this->_butPause = ::flash::display::Bitmap_obj::__new(::openfl::Assets_obj::getBitmapData(HX_CSTRING("gfx/debug/console_pause.png"),null()),null(),null());
			HX_STACK_LINE(168)
			this->_butStep = ::flash::display::Bitmap_obj::__new(::openfl::Assets_obj::getBitmapData(HX_CSTRING("gfx/debug/console_step.png"),null()),null(),null());
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(170)
					return null();
				}
			}
		}
		HX_STACK_LINE(174)
		this->_enabled = true;
		HX_STACK_LINE(175)
		::com::haxepunk::HXP_obj::stage->addChild(this->_sprite);
		HX_STACK_LINE(178)
		bool big = (this->get_width() >= (int)480);		HX_STACK_VAR(big,"big");
		HX_STACK_LINE(181)
		this->_sprite->addChild(this->_back);
		HX_STACK_LINE(184)
		this->_sprite->addChild(this->_entScreen);
		HX_STACK_LINE(185)
		this->_entScreen->addChild(this->_entSelect);
		HX_STACK_LINE(188)
		this->_sprite->addChild(this->_entRead);
		HX_STACK_LINE(189)
		this->_entRead->addChild(this->_entReadText);
		HX_STACK_LINE(190)
		this->_entReadText->set_defaultTextFormat(this->format((int)16,(int)16777215,HX_CSTRING("right")));
		HX_STACK_LINE(194)
		this->_entReadText->set_width((int)100);
		HX_STACK_LINE(195)
		this->_entReadText->set_height((int)20);
		HX_STACK_LINE(198)
		this->_entRead->get_graphics()->clear();
		HX_STACK_LINE(199)
		this->_entRead->get_graphics()->beginFill((int)0,.5);
		HX_STACK_LINE(203)
		this->_entRead->get_graphics()->drawRoundRect((int)0,(int)-20,(this->_entReadText->get_width() + (int)40),(int)40,(int)20,(int)20);
		HX_STACK_LINE(207)
		this->_sprite->addChild(this->_fpsRead);
		HX_STACK_LINE(208)
		this->_fpsRead->addChild(this->_fpsReadText);
		HX_STACK_LINE(209)
		this->_fpsReadText->set_defaultTextFormat(this->format((int)16,null(),null()));
		HX_STACK_LINE(213)
		this->_fpsReadText->set_width((int)70);
		HX_STACK_LINE(214)
		this->_fpsReadText->set_height((int)20);
		HX_STACK_LINE(215)
		this->_fpsReadText->set_x((int)2);
		HX_STACK_LINE(216)
		this->_fpsReadText->set_y((int)1);
		HX_STACK_LINE(219)
		this->_fpsRead->get_graphics()->clear();
		HX_STACK_LINE(220)
		this->_fpsRead->get_graphics()->beginFill((int)0,.75);
		HX_STACK_LINE(224)
		this->_fpsRead->get_graphics()->drawRoundRect((int)-20,(int)-20,(  ((big)) ? Float((int)220) : Float((int)120) ),(int)40,(int)20,(int)20);
		HX_STACK_LINE(230)
		if ((big)){
			HX_STACK_LINE(230)
			this->_sprite->addChild(this->_fpsInfo);
		}
		HX_STACK_LINE(231)
		this->_fpsInfo->addChild(this->_fpsInfoText0);
		HX_STACK_LINE(232)
		this->_fpsInfo->addChild(this->_fpsInfoText1);
		HX_STACK_LINE(233)
		this->_fpsInfoText0->set_defaultTextFormat(this->format((int)8,(int)11184810,null()));
		HX_STACK_LINE(234)
		this->_fpsInfoText1->set_defaultTextFormat(this->format((int)8,(int)11184810,null()));
		HX_STACK_LINE(239)
		this->_fpsInfoText0->set_width(this->_fpsInfoText1->set_width((int)60));
		HX_STACK_LINE(240)
		this->_fpsInfoText0->set_height(this->_fpsInfoText1->set_height((int)20));
		HX_STACK_LINE(241)
		this->_fpsInfo->set_x((int)75);
		HX_STACK_LINE(242)
		this->_fpsInfoText1->set_x((int)60);
		HX_STACK_LINE(244)
		this->_fpsRead->addChild(this->_memReadText);
		HX_STACK_LINE(245)
		this->_memReadText->set_defaultTextFormat(this->format((int)16,null(),null()));
		HX_STACK_LINE(246)
		this->_memReadText->set_embedFonts(true);
		HX_STACK_LINE(247)
		this->_memReadText->set_width((int)110);
		HX_STACK_LINE(248)
		this->_memReadText->set_height((int)20);
		HX_STACK_LINE(249)
		this->_memReadText->set_x((int)2);
		HX_STACK_LINE(250)
		this->_memReadText->set_y((this->_fpsInfo->get_height() + (int)2));
		HX_STACK_LINE(253)
		this->_sprite->addChild(this->_logRead);
		HX_STACK_LINE(254)
		this->_logRead->addChild(this->_logReadText0);
		HX_STACK_LINE(255)
		this->_logRead->addChild(this->_logReadText1);
		HX_STACK_LINE(256)
		this->_logReadText0->set_defaultTextFormat(this->format((int)16,(int)16777215,null()));
		HX_STACK_LINE(257)
		this->_logReadText1->set_defaultTextFormat(this->format((  ((big)) ? int((int)16) : int((int)8) ),(int)16777215,null()));
		HX_STACK_LINE(262)
		this->_logReadText0->set_selectable(false);
		HX_STACK_LINE(263)
		this->_logReadText0->set_width((int)80);
		HX_STACK_LINE(264)
		this->_logReadText0->set_height((int)20);
		HX_STACK_LINE(265)
		this->_logReadText1->set_width(this->get_width());
		HX_STACK_LINE(266)
		this->_logReadText0->set_x((int)2);
		HX_STACK_LINE(267)
		this->_logReadText0->set_y((int)3);
		HX_STACK_LINE(268)
		this->_logReadText0->set_text(HX_CSTRING("OUTPUT:"));
		HX_STACK_LINE(269)
		this->_logHeight = (this->get_height() - (int)60);
		HX_STACK_LINE(270)
		this->_logBar = ::flash::geom::Rectangle_obj::__new((int)8,(int)24,(int)16,(this->_logHeight - (int)8));
		HX_STACK_LINE(271)
		this->_logBarGlobal = this->_logBar->clone();
		HX_STACK_LINE(272)
		hx::AddEq(this->_logBarGlobal->y,(int)40);
		HX_STACK_LINE(273)
		this->_logLines = ::Std_obj::_int((Float(this->_logHeight) / Float(((  ((big)) ? Float(16.5) : Float(8.5) )))));
		HX_STACK_LINE(276)
		this->_sprite->addChild(this->_debRead);
		HX_STACK_LINE(277)
		this->_debRead->addChild(this->_debReadText0);
		HX_STACK_LINE(278)
		this->_debRead->addChild(this->_debReadText1);
		HX_STACK_LINE(279)
		this->_debReadText0->set_defaultTextFormat(this->format((int)16,(int)16777215,null()));
		HX_STACK_LINE(280)
		this->_debReadText1->set_defaultTextFormat(this->format((int)8,(int)16777215,null()));
		HX_STACK_LINE(285)
		this->_debReadText0->set_selectable(false);
		HX_STACK_LINE(286)
		this->_debReadText0->set_width((int)80);
		HX_STACK_LINE(287)
		this->_debReadText0->set_height((int)20);
		HX_STACK_LINE(288)
		this->_debReadText1->set_width((int)160);
		HX_STACK_LINE(289)
		this->_debReadText1->set_height(::Std_obj::_int((Float(this->get_height()) / Float((int)4))));
		HX_STACK_LINE(290)
		this->_debReadText0->set_x((int)2);
		HX_STACK_LINE(291)
		this->_debReadText0->set_y((int)3);
		HX_STACK_LINE(292)
		this->_debReadText1->set_x((int)2);
		HX_STACK_LINE(293)
		this->_debReadText1->set_y((int)24);
		HX_STACK_LINE(294)
		this->_debReadText0->set_text(HX_CSTRING("DEBUG:"));
		HX_STACK_LINE(295)
		this->_debRead->set_y((this->get_height() - ((this->_debReadText1->get_y() + this->_debReadText1->get_height()))));
		HX_STACK_LINE(298)
		this->_sprite->addChild(this->_butRead);
		HX_STACK_LINE(299)
		this->_butRead->addChild(this->_butDebug);
		HX_STACK_LINE(300)
		this->_butRead->addChild(this->_butOutput);
		HX_STACK_LINE(301)
		this->_butRead->addChild(this->_butPlay)->set_x((int)20);
		HX_STACK_LINE(302)
		this->_butRead->addChild(this->_butPause)->set_x((int)20);
		HX_STACK_LINE(303)
		this->_butRead->addChild(this->_butStep)->set_x((int)40);
		HX_STACK_LINE(304)
		this->updateButtons();
		HX_STACK_LINE(307)
		this->_butRead->get_graphics()->clear();
		HX_STACK_LINE(308)
		this->_butRead->get_graphics()->beginFill((int)0,.75);
		HX_STACK_LINE(312)
		this->_butRead->get_graphics()->drawRoundRect((int)-20,(int)-20,(int)100,(int)40,(int)20,(int)20);
		HX_STACK_LINE(314)
		this->set_debug(true);
		HX_STACK_LINE(317)
		::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::Event_obj::RESIZE,this->onResize_dyn(),null(),null(),null());
		HX_STACK_LINE(318)
		this->onResize(null());
		HX_STACK_LINE(321)
		this->set_paused(false);
		HX_STACK_LINE(323)
		::haxe::Log_obj::trace = this->traceLog_dyn();
		HX_STACK_LINE(324)
		this->LOG->push(((HX_CSTRING("-- HaxePunk v") + HX_CSTRING("2.3.2")) + HX_CSTRING(" --")));
		HX_STACK_LINE(325)
		if (((bool(this->_enabled) && bool(this->_sprite->get_visible())))){
			HX_STACK_LINE(325)
			this->updateLog();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,enable,(void))

Void Console_obj::watch( Dynamic properties){
{
		HX_STACK_FRAME("Console","watch","Console.watch","com/haxepunk/debug/Console.hx",140)
		HX_STACK_THIS(this)
		HX_STACK_ARG(properties,"properties")
		HX_STACK_LINE(141)
		::String i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(142)
		if (((properties->__Field(HX_CSTRING("length"),true) > (int)1))){
			HX_STACK_LINE(144)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(144)
			while(((_g < properties->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(144)
				Dynamic i1 = properties->__GetItem(_g);		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(144)
				++(_g);
				HX_STACK_LINE(144)
				this->WATCH_LIST->add(i1);
			}
		}
		else{
			HX_STACK_LINE(148)
			this->WATCH_LIST->add(properties->__GetItem((int)0));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,watch,(void))

Void Console_obj::log( Dynamic data){
{
		HX_STACK_FRAME("Console","log","Console.log","com/haxepunk/debug/Console.hx",113)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(114)
		::String s;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(115)
		if (((data->__Field(HX_CSTRING("length"),true) > (int)1))){
			HX_STACK_LINE(117)
			s = HX_CSTRING("");
			HX_STACK_LINE(118)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(119)
			while(((i < data->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(121)
				if (((i > (int)0))){
					HX_STACK_LINE(121)
					hx::AddEq(s,HX_CSTRING(" "));
				}
				HX_STACK_LINE(122)
				hx::AddEq(s,::Std_obj::string(data->__GetItem((i)++)));
			}
		}
		else{
			HX_STACK_LINE(125)
			s = data->__GetItem((int)0)->toString();
		}
		HX_STACK_LINE(126)
		if (((s.indexOf(HX_CSTRING("\n"),null()) >= (int)0))){
			HX_STACK_LINE(128)
			Array< ::String > a = s.split(HX_CSTRING("\n"));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(129)
			{
				HX_STACK_LINE(129)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(129)
				while(((_g < a->length))){
					HX_STACK_LINE(129)
					::String s1 = a->__get(_g);		HX_STACK_VAR(s1,"s1");
					HX_STACK_LINE(129)
					++(_g);
					HX_STACK_LINE(129)
					this->LOG->push(s1);
				}
			}
		}
		else{
			HX_STACK_LINE(131)
			this->LOG->push(s);
		}
		HX_STACK_LINE(132)
		if (((bool(this->_enabled) && bool(this->_sprite->get_visible())))){
			HX_STACK_LINE(132)
			this->updateLog();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,log,(void))

Void Console_obj::traceLog( Dynamic v,Dynamic infos){
{
		HX_STACK_FRAME("Console","traceLog","Console.traceLog","com/haxepunk/debug/Console.hx",99)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_ARG(infos,"infos")
		HX_STACK_LINE(100)
		::String log = ((((infos->__Field(HX_CSTRING("className"),true) + HX_CSTRING("(")) + infos->__Field(HX_CSTRING("lineNumber"),true)) + HX_CSTRING("): ")) + ::Std_obj::string(v));		HX_STACK_VAR(log,"log");
		HX_STACK_LINE(101)
		this->LOG->push(log);
		HX_STACK_LINE(103)
		::Sys_obj::println(log);
		HX_STACK_LINE(105)
		if (((bool(this->_enabled) && bool(this->_sprite->get_visible())))){
			HX_STACK_LINE(105)
			this->updateLog();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,traceLog,(void))

Void Console_obj::init( ){
{
		HX_STACK_FRAME("Console","init","Console.init","com/haxepunk/debug/Console.hx",45)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		this->toggleKey = (int)192;
		HX_STACK_LINE(48)
		this->_sprite = ::flash::display::Sprite_obj::__new();
		HX_STACK_LINE(49)
		::flash::text::Font font = ::openfl::Assets_obj::getFont(HX_CSTRING("font/04B_03__.ttf"));		HX_STACK_VAR(font,"font");
		HX_STACK_LINE(50)
		if (((font == null()))){
			HX_STACK_LINE(52)
			font = ::openfl::Assets_obj::getFont(::com::haxepunk::HXP_obj::defaultFont);
		}
		HX_STACK_LINE(54)
		this->_format = ::flash::text::TextFormat_obj::__new(font->fontName,(int)8,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(55)
		this->_back = ::flash::display::Bitmap_obj::__new(null(),null(),null());
		HX_STACK_LINE(57)
		this->_fpsRead = ::flash::display::Sprite_obj::__new();
		HX_STACK_LINE(58)
		this->_fpsReadText = ::flash::text::TextField_obj::__new();
		HX_STACK_LINE(59)
		this->_fpsInfo = ::flash::display::Sprite_obj::__new();
		HX_STACK_LINE(60)
		this->_fpsInfoText0 = ::flash::text::TextField_obj::__new();
		HX_STACK_LINE(61)
		this->_fpsInfoText1 = ::flash::text::TextField_obj::__new();
		HX_STACK_LINE(62)
		this->_memReadText = ::flash::text::TextField_obj::__new();
		HX_STACK_LINE(64)
		this->_layerList = ::com::haxepunk::debug::LayerList_obj::__new(null(),null());
		HX_STACK_LINE(66)
		this->_logRead = ::flash::display::Sprite_obj::__new();
		HX_STACK_LINE(67)
		this->_logReadText0 = ::flash::text::TextField_obj::__new();
		HX_STACK_LINE(68)
		this->_logReadText1 = ::flash::text::TextField_obj::__new();
		HX_STACK_LINE(69)
		this->_logScroll = (int)0;
		HX_STACK_LINE(70)
		this->_logLines = (int)33;
		HX_STACK_LINE(72)
		this->_entRead = ::flash::display::Sprite_obj::__new();
		HX_STACK_LINE(73)
		this->_entReadText = ::flash::text::TextField_obj::__new();
		HX_STACK_LINE(75)
		this->_debRead = ::flash::display::Sprite_obj::__new();
		HX_STACK_LINE(76)
		this->_debReadText0 = ::flash::text::TextField_obj::__new();
		HX_STACK_LINE(77)
		this->_debReadText1 = ::flash::text::TextField_obj::__new();
		HX_STACK_LINE(79)
		this->_butRead = ::flash::display::Sprite_obj::__new();
		HX_STACK_LINE(81)
		this->_entScreen = ::flash::display::Sprite_obj::__new();
		HX_STACK_LINE(82)
		this->_entSelect = ::flash::display::Sprite_obj::__new();
		HX_STACK_LINE(83)
		this->_entRect = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
		HX_STACK_LINE(85)
		this->LOG = Array_obj< ::String >::__new();
		HX_STACK_LINE(87)
		this->LAYER_LIST = Array_obj< int >::__new();
		HX_STACK_LINE(88)
		this->ENTITY_LIST = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(89)
		this->SCREEN_LIST = ::List_obj::__new();
		HX_STACK_LINE(90)
		this->SELECT_LIST = ::List_obj::__new();
		HX_STACK_LINE(92)
		this->WATCH_LIST = ::List_obj::__new();
		HX_STACK_LINE(93)
		this->WATCH_LIST->add(HX_CSTRING("x"));
		HX_STACK_LINE(94)
		this->WATCH_LIST->add(HX_CSTRING("y"));
		HX_STACK_LINE(95)
		this->WATCH_LIST->add(HX_CSTRING("layer"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,init,(void))


Console_obj::Console_obj()
{
}

void Console_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Console);
	HX_MARK_MEMBER_NAME(WATCH_LIST,"WATCH_LIST");
	HX_MARK_MEMBER_NAME(SELECT_LIST,"SELECT_LIST");
	HX_MARK_MEMBER_NAME(SCREEN_LIST,"SCREEN_LIST");
	HX_MARK_MEMBER_NAME(ENTITY_LIST,"ENTITY_LIST");
	HX_MARK_MEMBER_NAME(LAYER_LIST,"LAYER_LIST");
	HX_MARK_MEMBER_NAME(LOG,"LOG");
	HX_MARK_MEMBER_NAME(_logLines,"_logLines");
	HX_MARK_MEMBER_NAME(_entRect,"_entRect");
	HX_MARK_MEMBER_NAME(_entSelect,"_entSelect");
	HX_MARK_MEMBER_NAME(_entScreen,"_entScreen");
	HX_MARK_MEMBER_NAME(_bmpLogo,"_bmpLogo");
	HX_MARK_MEMBER_NAME(_butStep,"_butStep");
	HX_MARK_MEMBER_NAME(_butPause,"_butPause");
	HX_MARK_MEMBER_NAME(_butPlay,"_butPlay");
	HX_MARK_MEMBER_NAME(_butOutput,"_butOutput");
	HX_MARK_MEMBER_NAME(_butDebug,"_butDebug");
	HX_MARK_MEMBER_NAME(_butRead,"_butRead");
	HX_MARK_MEMBER_NAME(_debReadText1,"_debReadText1");
	HX_MARK_MEMBER_NAME(_debReadText0,"_debReadText0");
	HX_MARK_MEMBER_NAME(_debRead,"_debRead");
	HX_MARK_MEMBER_NAME(_entReadText,"_entReadText");
	HX_MARK_MEMBER_NAME(_entRead,"_entRead");
	HX_MARK_MEMBER_NAME(_logScroll,"_logScroll");
	HX_MARK_MEMBER_NAME(_logBarGlobal,"_logBarGlobal");
	HX_MARK_MEMBER_NAME(_logBar,"_logBar");
	HX_MARK_MEMBER_NAME(_logHeight,"_logHeight");
	HX_MARK_MEMBER_NAME(_logReadText1,"_logReadText1");
	HX_MARK_MEMBER_NAME(_logReadText0,"_logReadText0");
	HX_MARK_MEMBER_NAME(_logRead,"_logRead");
	HX_MARK_MEMBER_NAME(_layerList,"_layerList");
	HX_MARK_MEMBER_NAME(_memReadText,"_memReadText");
	HX_MARK_MEMBER_NAME(_fpsInfoText1,"_fpsInfoText1");
	HX_MARK_MEMBER_NAME(_fpsInfoText0,"_fpsInfoText0");
	HX_MARK_MEMBER_NAME(_fpsInfo,"_fpsInfo");
	HX_MARK_MEMBER_NAME(_fpsReadText,"_fpsReadText");
	HX_MARK_MEMBER_NAME(_fpsRead,"_fpsRead");
	HX_MARK_MEMBER_NAME(_back,"_back");
	HX_MARK_MEMBER_NAME(_format,"_format");
	HX_MARK_MEMBER_NAME(_sprite,"_sprite");
	HX_MARK_MEMBER_NAME(_panning,"_panning");
	HX_MARK_MEMBER_NAME(_dragging,"_dragging");
	HX_MARK_MEMBER_NAME(_selecting,"_selecting");
	HX_MARK_MEMBER_NAME(_scrolling,"_scrolling");
	HX_MARK_MEMBER_NAME(_debug,"_debug");
	HX_MARK_MEMBER_NAME(_paused,"_paused");
	HX_MARK_MEMBER_NAME(_enabled,"_enabled");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(toggleKey,"toggleKey");
	HX_MARK_END_CLASS();
}

void Console_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(WATCH_LIST,"WATCH_LIST");
	HX_VISIT_MEMBER_NAME(SELECT_LIST,"SELECT_LIST");
	HX_VISIT_MEMBER_NAME(SCREEN_LIST,"SCREEN_LIST");
	HX_VISIT_MEMBER_NAME(ENTITY_LIST,"ENTITY_LIST");
	HX_VISIT_MEMBER_NAME(LAYER_LIST,"LAYER_LIST");
	HX_VISIT_MEMBER_NAME(LOG,"LOG");
	HX_VISIT_MEMBER_NAME(_logLines,"_logLines");
	HX_VISIT_MEMBER_NAME(_entRect,"_entRect");
	HX_VISIT_MEMBER_NAME(_entSelect,"_entSelect");
	HX_VISIT_MEMBER_NAME(_entScreen,"_entScreen");
	HX_VISIT_MEMBER_NAME(_bmpLogo,"_bmpLogo");
	HX_VISIT_MEMBER_NAME(_butStep,"_butStep");
	HX_VISIT_MEMBER_NAME(_butPause,"_butPause");
	HX_VISIT_MEMBER_NAME(_butPlay,"_butPlay");
	HX_VISIT_MEMBER_NAME(_butOutput,"_butOutput");
	HX_VISIT_MEMBER_NAME(_butDebug,"_butDebug");
	HX_VISIT_MEMBER_NAME(_butRead,"_butRead");
	HX_VISIT_MEMBER_NAME(_debReadText1,"_debReadText1");
	HX_VISIT_MEMBER_NAME(_debReadText0,"_debReadText0");
	HX_VISIT_MEMBER_NAME(_debRead,"_debRead");
	HX_VISIT_MEMBER_NAME(_entReadText,"_entReadText");
	HX_VISIT_MEMBER_NAME(_entRead,"_entRead");
	HX_VISIT_MEMBER_NAME(_logScroll,"_logScroll");
	HX_VISIT_MEMBER_NAME(_logBarGlobal,"_logBarGlobal");
	HX_VISIT_MEMBER_NAME(_logBar,"_logBar");
	HX_VISIT_MEMBER_NAME(_logHeight,"_logHeight");
	HX_VISIT_MEMBER_NAME(_logReadText1,"_logReadText1");
	HX_VISIT_MEMBER_NAME(_logReadText0,"_logReadText0");
	HX_VISIT_MEMBER_NAME(_logRead,"_logRead");
	HX_VISIT_MEMBER_NAME(_layerList,"_layerList");
	HX_VISIT_MEMBER_NAME(_memReadText,"_memReadText");
	HX_VISIT_MEMBER_NAME(_fpsInfoText1,"_fpsInfoText1");
	HX_VISIT_MEMBER_NAME(_fpsInfoText0,"_fpsInfoText0");
	HX_VISIT_MEMBER_NAME(_fpsInfo,"_fpsInfo");
	HX_VISIT_MEMBER_NAME(_fpsReadText,"_fpsReadText");
	HX_VISIT_MEMBER_NAME(_fpsRead,"_fpsRead");
	HX_VISIT_MEMBER_NAME(_back,"_back");
	HX_VISIT_MEMBER_NAME(_format,"_format");
	HX_VISIT_MEMBER_NAME(_sprite,"_sprite");
	HX_VISIT_MEMBER_NAME(_panning,"_panning");
	HX_VISIT_MEMBER_NAME(_dragging,"_dragging");
	HX_VISIT_MEMBER_NAME(_selecting,"_selecting");
	HX_VISIT_MEMBER_NAME(_scrolling,"_scrolling");
	HX_VISIT_MEMBER_NAME(_debug,"_debug");
	HX_VISIT_MEMBER_NAME(_paused,"_paused");
	HX_VISIT_MEMBER_NAME(_enabled,"_enabled");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(toggleKey,"toggleKey");
}

Dynamic Console_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"LOG") ) { return LOG; }
		if (HX_FIELD_EQ(inName,"log") ) { return log_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_back") ) { return _back; }
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp ? get_width() : width; }
		if (HX_FIELD_EQ(inName,"debug") ) { return get_debug(); }
		if (HX_FIELD_EQ(inName,"watch") ) { return watch_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_debug") ) { return _debug; }
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp ? get_height() : height; }
		if (HX_FIELD_EQ(inName,"format") ) { return format_dyn(); }
		if (HX_FIELD_EQ(inName,"paused") ) { return get_paused(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_logBar") ) { return _logBar; }
		if (HX_FIELD_EQ(inName,"_format") ) { return _format; }
		if (HX_FIELD_EQ(inName,"_sprite") ) { return _sprite; }
		if (HX_FIELD_EQ(inName,"_paused") ) { return _paused; }
		if (HX_FIELD_EQ(inName,"visible") ) { return get_visible(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_entRect") ) { return _entRect; }
		if (HX_FIELD_EQ(inName,"_bmpLogo") ) { return _bmpLogo; }
		if (HX_FIELD_EQ(inName,"_butStep") ) { return _butStep; }
		if (HX_FIELD_EQ(inName,"_butPlay") ) { return _butPlay; }
		if (HX_FIELD_EQ(inName,"_butRead") ) { return _butRead; }
		if (HX_FIELD_EQ(inName,"_debRead") ) { return _debRead; }
		if (HX_FIELD_EQ(inName,"_entRead") ) { return _entRead; }
		if (HX_FIELD_EQ(inName,"_logRead") ) { return _logRead; }
		if (HX_FIELD_EQ(inName,"_fpsInfo") ) { return _fpsInfo; }
		if (HX_FIELD_EQ(inName,"_fpsRead") ) { return _fpsRead; }
		if (HX_FIELD_EQ(inName,"_panning") ) { return _panning; }
		if (HX_FIELD_EQ(inName,"_enabled") ) { return _enabled; }
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		if (HX_FIELD_EQ(inName,"traceLog") ) { return traceLog_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_logLines") ) { return _logLines; }
		if (HX_FIELD_EQ(inName,"_butPause") ) { return _butPause; }
		if (HX_FIELD_EQ(inName,"_butDebug") ) { return _butDebug; }
		if (HX_FIELD_EQ(inName,"_dragging") ) { return _dragging; }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"updateLog") ) { return updateLog_dyn(); }
		if (HX_FIELD_EQ(inName,"selectAll") ) { return selectAll_dyn(); }
		if (HX_FIELD_EQ(inName,"setCamera") ) { return setCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"panCamera") ) { return panCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"stepFrame") ) { return stepFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"set_debug") ) { return set_debug_dyn(); }
		if (HX_FIELD_EQ(inName,"get_debug") ) { return get_debug_dyn(); }
		if (HX_FIELD_EQ(inName,"toggleKey") ) { return toggleKey; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"WATCH_LIST") ) { return WATCH_LIST; }
		if (HX_FIELD_EQ(inName,"LAYER_LIST") ) { return LAYER_LIST; }
		if (HX_FIELD_EQ(inName,"_entSelect") ) { return _entSelect; }
		if (HX_FIELD_EQ(inName,"_entScreen") ) { return _entScreen; }
		if (HX_FIELD_EQ(inName,"_butOutput") ) { return _butOutput; }
		if (HX_FIELD_EQ(inName,"_logScroll") ) { return _logScroll; }
		if (HX_FIELD_EQ(inName,"_logHeight") ) { return _logHeight; }
		if (HX_FIELD_EQ(inName,"_layerList") ) { return _layerList; }
		if (HX_FIELD_EQ(inName,"_selecting") ) { return _selecting; }
		if (HX_FIELD_EQ(inName,"_scrolling") ) { return _scrolling; }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_paused") ) { return set_paused_dyn(); }
		if (HX_FIELD_EQ(inName,"get_paused") ) { return get_paused_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"SELECT_LIST") ) { return SELECT_LIST; }
		if (HX_FIELD_EQ(inName,"SCREEN_LIST") ) { return SCREEN_LIST; }
		if (HX_FIELD_EQ(inName,"ENTITY_LIST") ) { return ENTITY_LIST; }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_entReadText") ) { return _entReadText; }
		if (HX_FIELD_EQ(inName,"_memReadText") ) { return _memReadText; }
		if (HX_FIELD_EQ(inName,"_fpsReadText") ) { return _fpsReadText; }
		if (HX_FIELD_EQ(inName,"startPanning") ) { return startPanning_dyn(); }
		if (HX_FIELD_EQ(inName,"moveSelected") ) { return moveSelected_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_debReadText1") ) { return _debReadText1; }
		if (HX_FIELD_EQ(inName,"_debReadText0") ) { return _debReadText0; }
		if (HX_FIELD_EQ(inName,"_logBarGlobal") ) { return _logBarGlobal; }
		if (HX_FIELD_EQ(inName,"_logReadText1") ) { return _logReadText1; }
		if (HX_FIELD_EQ(inName,"_logReadText0") ) { return _logReadText0; }
		if (HX_FIELD_EQ(inName,"_fpsInfoText1") ) { return _fpsInfoText1; }
		if (HX_FIELD_EQ(inName,"_fpsInfoText0") ) { return _fpsInfoText0; }
		if (HX_FIELD_EQ(inName,"updateButtons") ) { return updateButtons_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFPSRead") ) { return updateFPSRead_dyn(); }
		if (HX_FIELD_EQ(inName,"updatePanning") ) { return updatePanning_dyn(); }
		if (HX_FIELD_EQ(inName,"startDragging") ) { return startDragging_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"renderEntities") ) { return renderEntities_dyn(); }
		if (HX_FIELD_EQ(inName,"startScrolling") ) { return startScrolling_dyn(); }
		if (HX_FIELD_EQ(inName,"selectEntities") ) { return selectEntities_dyn(); }
		if (HX_FIELD_EQ(inName,"startSelection") ) { return startSelection_dyn(); }
		if (HX_FIELD_EQ(inName,"updateDragging") ) { return updateDragging_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateDebugRead") ) { return updateDebugRead_dyn(); }
		if (HX_FIELD_EQ(inName,"updateKeyMoving") ) { return updateKeyMoving_dyn(); }
		if (HX_FIELD_EQ(inName,"updateScrolling") ) { return updateScrolling_dyn(); }
		if (HX_FIELD_EQ(inName,"updateSelection") ) { return updateSelection_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateKeyPanning") ) { return updateKeyPanning_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateEntityCount") ) { return updateEntityCount_dyn(); }
		if (HX_FIELD_EQ(inName,"updateEntityLists") ) { return updateEntityLists_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Console_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"LOG") ) { LOG=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_back") ) { _back=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debug") ) { return set_debug(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_debug") ) { _debug=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paused") ) { return set_paused(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_logBar") ) { _logBar=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_format") ) { _format=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sprite") ) { _sprite=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_paused") ) { _paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { return set_visible(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_entRect") ) { _entRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bmpLogo") ) { _bmpLogo=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_butStep") ) { _butStep=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_butPlay") ) { _butPlay=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_butRead") ) { _butRead=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_debRead") ) { _debRead=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_entRead") ) { _entRead=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logRead") ) { _logRead=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fpsInfo") ) { _fpsInfo=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fpsRead") ) { _fpsRead=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_panning") ) { _panning=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_enabled") ) { _enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_logLines") ) { _logLines=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_butPause") ) { _butPause=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_butDebug") ) { _butDebug=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dragging") ) { _dragging=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"toggleKey") ) { toggleKey=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"WATCH_LIST") ) { WATCH_LIST=inValue.Cast< ::List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LAYER_LIST") ) { LAYER_LIST=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_entSelect") ) { _entSelect=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_entScreen") ) { _entScreen=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_butOutput") ) { _butOutput=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logScroll") ) { _logScroll=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logHeight") ) { _logHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layerList") ) { _layerList=inValue.Cast< ::com::haxepunk::debug::LayerList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_selecting") ) { _selecting=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrolling") ) { _scrolling=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"SELECT_LIST") ) { SELECT_LIST=inValue.Cast< ::List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SCREEN_LIST") ) { SCREEN_LIST=inValue.Cast< ::List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ENTITY_LIST") ) { ENTITY_LIST=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_entReadText") ) { _entReadText=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_memReadText") ) { _memReadText=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fpsReadText") ) { _fpsReadText=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_debReadText1") ) { _debReadText1=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_debReadText0") ) { _debReadText0=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logBarGlobal") ) { _logBarGlobal=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logReadText1") ) { _logReadText1=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logReadText0") ) { _logReadText0=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fpsInfoText1") ) { _fpsInfoText1=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fpsInfoText0") ) { _fpsInfoText0=inValue.Cast< ::flash::text::TextField >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Console_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("WATCH_LIST"));
	outFields->push(HX_CSTRING("SELECT_LIST"));
	outFields->push(HX_CSTRING("SCREEN_LIST"));
	outFields->push(HX_CSTRING("ENTITY_LIST"));
	outFields->push(HX_CSTRING("LAYER_LIST"));
	outFields->push(HX_CSTRING("LOG"));
	outFields->push(HX_CSTRING("_logLines"));
	outFields->push(HX_CSTRING("_entRect"));
	outFields->push(HX_CSTRING("_entSelect"));
	outFields->push(HX_CSTRING("_entScreen"));
	outFields->push(HX_CSTRING("_bmpLogo"));
	outFields->push(HX_CSTRING("_butStep"));
	outFields->push(HX_CSTRING("_butPause"));
	outFields->push(HX_CSTRING("_butPlay"));
	outFields->push(HX_CSTRING("_butOutput"));
	outFields->push(HX_CSTRING("_butDebug"));
	outFields->push(HX_CSTRING("_butRead"));
	outFields->push(HX_CSTRING("_debReadText1"));
	outFields->push(HX_CSTRING("_debReadText0"));
	outFields->push(HX_CSTRING("_debRead"));
	outFields->push(HX_CSTRING("_entReadText"));
	outFields->push(HX_CSTRING("_entRead"));
	outFields->push(HX_CSTRING("_logScroll"));
	outFields->push(HX_CSTRING("_logBarGlobal"));
	outFields->push(HX_CSTRING("_logBar"));
	outFields->push(HX_CSTRING("_logHeight"));
	outFields->push(HX_CSTRING("_logReadText1"));
	outFields->push(HX_CSTRING("_logReadText0"));
	outFields->push(HX_CSTRING("_logRead"));
	outFields->push(HX_CSTRING("_layerList"));
	outFields->push(HX_CSTRING("_memReadText"));
	outFields->push(HX_CSTRING("_fpsInfoText1"));
	outFields->push(HX_CSTRING("_fpsInfoText0"));
	outFields->push(HX_CSTRING("_fpsInfo"));
	outFields->push(HX_CSTRING("_fpsReadText"));
	outFields->push(HX_CSTRING("_fpsRead"));
	outFields->push(HX_CSTRING("_back"));
	outFields->push(HX_CSTRING("_format"));
	outFields->push(HX_CSTRING("_sprite"));
	outFields->push(HX_CSTRING("_panning"));
	outFields->push(HX_CSTRING("_dragging"));
	outFields->push(HX_CSTRING("_selecting"));
	outFields->push(HX_CSTRING("_scrolling"));
	outFields->push(HX_CSTRING("_debug"));
	outFields->push(HX_CSTRING("_paused"));
	outFields->push(HX_CSTRING("_enabled"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("debug"));
	outFields->push(HX_CSTRING("paused"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("toggleKey"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("WATCH_LIST"),
	HX_CSTRING("SELECT_LIST"),
	HX_CSTRING("SCREEN_LIST"),
	HX_CSTRING("ENTITY_LIST"),
	HX_CSTRING("LAYER_LIST"),
	HX_CSTRING("LOG"),
	HX_CSTRING("_logLines"),
	HX_CSTRING("_entRect"),
	HX_CSTRING("_entSelect"),
	HX_CSTRING("_entScreen"),
	HX_CSTRING("_bmpLogo"),
	HX_CSTRING("_butStep"),
	HX_CSTRING("_butPause"),
	HX_CSTRING("_butPlay"),
	HX_CSTRING("_butOutput"),
	HX_CSTRING("_butDebug"),
	HX_CSTRING("_butRead"),
	HX_CSTRING("_debReadText1"),
	HX_CSTRING("_debReadText0"),
	HX_CSTRING("_debRead"),
	HX_CSTRING("_entReadText"),
	HX_CSTRING("_entRead"),
	HX_CSTRING("_logScroll"),
	HX_CSTRING("_logBarGlobal"),
	HX_CSTRING("_logBar"),
	HX_CSTRING("_logHeight"),
	HX_CSTRING("_logReadText1"),
	HX_CSTRING("_logReadText0"),
	HX_CSTRING("_logRead"),
	HX_CSTRING("_layerList"),
	HX_CSTRING("_memReadText"),
	HX_CSTRING("_fpsInfoText1"),
	HX_CSTRING("_fpsInfoText0"),
	HX_CSTRING("_fpsInfo"),
	HX_CSTRING("_fpsReadText"),
	HX_CSTRING("_fpsRead"),
	HX_CSTRING("_back"),
	HX_CSTRING("_format"),
	HX_CSTRING("_sprite"),
	HX_CSTRING("_panning"),
	HX_CSTRING("_dragging"),
	HX_CSTRING("_selecting"),
	HX_CSTRING("_scrolling"),
	HX_CSTRING("_debug"),
	HX_CSTRING("_paused"),
	HX_CSTRING("_enabled"),
	HX_CSTRING("get_height"),
	HX_CSTRING("height"),
	HX_CSTRING("get_width"),
	HX_CSTRING("width"),
	HX_CSTRING("format"),
	HX_CSTRING("updateButtons"),
	HX_CSTRING("updateEntityCount"),
	HX_CSTRING("updateDebugRead"),
	HX_CSTRING("updateFPSRead"),
	HX_CSTRING("updateLog"),
	HX_CSTRING("renderEntities"),
	HX_CSTRING("updateEntityLists"),
	HX_CSTRING("updateKeyPanning"),
	HX_CSTRING("updateKeyMoving"),
	HX_CSTRING("updateScrolling"),
	HX_CSTRING("startScrolling"),
	HX_CSTRING("selectAll"),
	HX_CSTRING("selectEntities"),
	HX_CSTRING("updateSelection"),
	HX_CSTRING("startSelection"),
	HX_CSTRING("setCamera"),
	HX_CSTRING("panCamera"),
	HX_CSTRING("updatePanning"),
	HX_CSTRING("startPanning"),
	HX_CSTRING("moveSelected"),
	HX_CSTRING("updateDragging"),
	HX_CSTRING("startDragging"),
	HX_CSTRING("stepFrame"),
	HX_CSTRING("set_debug"),
	HX_CSTRING("get_debug"),
	HX_CSTRING("set_paused"),
	HX_CSTRING("get_paused"),
	HX_CSTRING("update"),
	HX_CSTRING("set_visible"),
	HX_CSTRING("get_visible"),
	HX_CSTRING("onResize"),
	HX_CSTRING("enable"),
	HX_CSTRING("watch"),
	HX_CSTRING("log"),
	HX_CSTRING("traceLog"),
	HX_CSTRING("init"),
	HX_CSTRING("toggleKey"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Console_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Console_obj::__mClass,"__mClass");
};

#endif

Class Console_obj::__mClass;

void Console_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.debug.Console"), hx::TCanCast< Console_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void Console_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace debug
