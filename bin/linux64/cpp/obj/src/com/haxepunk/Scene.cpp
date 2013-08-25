#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
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
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
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
#ifndef INCLUDED_com_haxepunk_graphics_atlas_Atlas
#include <com/haxepunk/graphics/atlas/Atlas.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasData
#include <com/haxepunk/graphics/atlas/AtlasData.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_Layer
#include <com/haxepunk/graphics/atlas/Layer.h>
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
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace com{
namespace haxepunk{

Void Scene_obj::__construct()
{
HX_STACK_FRAME("Scene","new","Scene.new","com/haxepunk/Scene.hx",30)
{
	HX_STACK_LINE(31)
	super::__construct();
	HX_STACK_LINE(32)
	this->visible = true;
	HX_STACK_LINE(33)
	this->camera = ::flash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(34)
	this->_count = (int)0;
	HX_STACK_LINE(36)
	this->_layerList = Array_obj< int >::__new();
	HX_STACK_LINE(37)
	this->_layerCount = Array_obj< int >::__new();
	HX_STACK_LINE(38)
	this->_sprite = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(40)
	this->_add = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(41)
	this->_remove = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(42)
	this->_recycle = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(45)
	this->_layerSprites = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(46)
	this->_renderFirst = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(47)
	this->_renderLast = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(48)
	this->_typeFirst = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(50)
	this->_classCount = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(51)
	this->_typeCount = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(52)
	this->_recycled = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(53)
	this->_entityNames = ::haxe::ds::StringMap_obj::__new();
}
;
	return null();
}

Scene_obj::~Scene_obj() { }

Dynamic Scene_obj::__CreateEmpty() { return  new Scene_obj; }
hx::ObjectPtr< Scene_obj > Scene_obj::__new()
{  hx::ObjectPtr< Scene_obj > result = new Scene_obj();
	result->__construct();
	return result;}

Dynamic Scene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scene_obj > result = new Scene_obj();
	result->__construct();
	return result;}

Void Scene_obj::unregisterName( ::com::haxepunk::Entity e){
{
		HX_STACK_FRAME("Scene","unregisterName","Scene.unregisterName","com/haxepunk/Scene.hx",1293)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(1294)
		Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1295)
		this->_entityNames->remove(fe->__Field(HX_CSTRING("_name"),true));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,unregisterName,(void))

Void Scene_obj::registerName( ::com::haxepunk::Entity e){
{
		HX_STACK_FRAME("Scene","registerName","Scene.registerName","com/haxepunk/Scene.hx",1286)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(1287)
		Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1288)
		this->_entityNames->set(fe->__Field(HX_CSTRING("_name"),true),e);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,registerName,(void))

Void Scene_obj::removeType( ::com::haxepunk::Entity e){
{
		HX_STACK_FRAME("Scene","removeType","Scene.removeType","com/haxepunk/Scene.hx",1274)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(1275)
		Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1277)
		if (((this->_typeFirst->get(fe->__Field(HX_CSTRING("_type"),true)) == e))){
			HX_STACK_LINE(1277)
			this->_typeFirst->set(fe->__Field(HX_CSTRING("_type"),true),fe->__Field(HX_CSTRING("_typeNext"),true));
		}
		HX_STACK_LINE(1278)
		if (((fe->__Field(HX_CSTRING("_typeNext"),true) != null()))){
			HX_STACK_LINE(1278)
			fe->__Field(HX_CSTRING("_typeNext"),true)->__FieldRef(HX_CSTRING("_typePrev")) = fe->__Field(HX_CSTRING("_typePrev"),true);
		}
		HX_STACK_LINE(1279)
		if (((fe->__Field(HX_CSTRING("_typePrev"),true) != null()))){
			HX_STACK_LINE(1279)
			fe->__Field(HX_CSTRING("_typePrev"),true)->__FieldRef(HX_CSTRING("_typeNext")) = fe->__Field(HX_CSTRING("_typeNext"),true);
		}
		HX_STACK_LINE(1280)
		fe->__FieldRef(HX_CSTRING("_typeNext")) = fe->__FieldRef(HX_CSTRING("_typePrev")) = null();
		HX_STACK_LINE(1281)
		{
			HX_STACK_LINE(1281)
			int value = (this->_typeCount->get(fe->__Field(HX_CSTRING("_type"),true)) - (int)1);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(1281)
			this->_typeCount->set(fe->__Field(HX_CSTRING("_type"),true),value);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeType,(void))

Void Scene_obj::addType( ::com::haxepunk::Entity e){
{
		HX_STACK_FRAME("Scene","addType","Scene.addType","com/haxepunk/Scene.hx",1254)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(1255)
		Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1257)
		if (((this->_typeFirst->get(fe->__Field(HX_CSTRING("_type"),true)) != null()))){
			HX_STACK_LINE(1259)
			this->_typeFirst->get(fe->__Field(HX_CSTRING("_type"),true))->__FieldRef(HX_CSTRING("_typePrev")) = e;
			HX_STACK_LINE(1260)
			fe->__FieldRef(HX_CSTRING("_typeNext")) = this->_typeFirst->get(fe->__Field(HX_CSTRING("_type"),true));
			HX_STACK_LINE(1261)
			{
				HX_STACK_LINE(1261)
				int value = (this->_typeCount->get(fe->__Field(HX_CSTRING("_type"),true)) + (int)1);		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(1261)
				this->_typeCount->set(fe->__Field(HX_CSTRING("_type"),true),value);
			}
		}
		else{
			HX_STACK_LINE(1265)
			fe->__FieldRef(HX_CSTRING("_typeNext")) = null();
			HX_STACK_LINE(1266)
			this->_typeCount->set(fe->__Field(HX_CSTRING("_type"),true),(int)1);
		}
		HX_STACK_LINE(1268)
		fe->__FieldRef(HX_CSTRING("_typePrev")) = null();
		HX_STACK_LINE(1269)
		this->_typeFirst->set(fe->__Field(HX_CSTRING("_type"),true),e);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addType,(void))

Void Scene_obj::removeRender( ::com::haxepunk::Entity e){
{
		HX_STACK_FRAME("Scene","removeRender","Scene.removeRender","com/haxepunk/Scene.hx",1227)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(1228)
		Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1229)
		if (((fe->__Field(HX_CSTRING("_renderNext"),true) != null()))){
			HX_STACK_LINE(1229)
			fe->__Field(HX_CSTRING("_renderNext"),true)->__FieldRef(HX_CSTRING("_renderPrev")) = fe->__Field(HX_CSTRING("_renderPrev"),true);
		}
		else{
			HX_STACK_LINE(1230)
			this->_renderLast->set(fe->__Field(HX_CSTRING("_layer"),true),fe->__Field(HX_CSTRING("_renderPrev"),true));
		}
		HX_STACK_LINE(1231)
		if (((fe->__Field(HX_CSTRING("_renderPrev"),true) != null()))){
			HX_STACK_LINE(1231)
			fe->__Field(HX_CSTRING("_renderPrev"),true)->__FieldRef(HX_CSTRING("_renderNext")) = fe->__Field(HX_CSTRING("_renderNext"),true);
		}
		else{
			HX_STACK_LINE(1235)
			this->_renderFirst->set(fe->__Field(HX_CSTRING("_layer"),true),fe->__Field(HX_CSTRING("_renderNext"),true));
			HX_STACK_LINE(1236)
			if (((fe->__Field(HX_CSTRING("_renderNext"),true) == null()))){
				HX_STACK_LINE(1239)
				if (((this->_layerList->length > (int)1))){
					HX_STACK_LINE(1241)
					this->_layerList[::Lambda_obj::indexOf(this->_layerList,fe->__Field(HX_CSTRING("_layer"),true))] = this->_layerList->__get((this->_layerList->length - (int)1));
					HX_STACK_LINE(1242)
					this->_layerSort = true;
				}
				HX_STACK_LINE(1244)
				this->_layerList->pop();
			}
		}
		HX_STACK_LINE(1247)
		if (((e->_graphic != null()))){
			HX_STACK_LINE(1247)
			e->_graphic->destroy();
		}
		HX_STACK_LINE(1248)
		(this->_layerCount[fe->__Field(HX_CSTRING("_layer"),true)])--;
		HX_STACK_LINE(1249)
		fe->__FieldRef(HX_CSTRING("_renderNext")) = fe->__FieldRef(HX_CSTRING("_renderPrev")) = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeRender,(void))

Void Scene_obj::addRender( ::com::haxepunk::Entity e){
{
		HX_STACK_FRAME("Scene","addRender","Scene.addRender","com/haxepunk/Scene.hx",1202)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(1203)
		Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1204)
		Dynamic f = this->_renderFirst->get(fe->__Field(HX_CSTRING("_layer"),true));		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(1205)
		if (((f != null()))){
			HX_STACK_LINE(1208)
			fe->__FieldRef(HX_CSTRING("_renderNext")) = f;
			HX_STACK_LINE(1209)
			f->__FieldRef(HX_CSTRING("_renderPrev")) = e;
			HX_STACK_LINE(1210)
			(this->_layerCount[fe->__Field(HX_CSTRING("_layer"),true)])++;
		}
		else{
			HX_STACK_LINE(1215)
			this->_renderLast->set(fe->__Field(HX_CSTRING("_layer"),true),e);
			HX_STACK_LINE(1216)
			this->_layerList[this->_layerList->length] = fe->__Field(HX_CSTRING("_layer"),true);
			HX_STACK_LINE(1217)
			this->_layerSort = true;
			HX_STACK_LINE(1218)
			fe->__FieldRef(HX_CSTRING("_renderNext")) = null();
			HX_STACK_LINE(1219)
			this->_layerCount[fe->__Field(HX_CSTRING("_layer"),true)] = (int)1;
		}
		HX_STACK_LINE(1221)
		this->_renderFirst->set(fe->__Field(HX_CSTRING("_layer"),true),e);
		HX_STACK_LINE(1222)
		fe->__FieldRef(HX_CSTRING("_renderPrev")) = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addRender,(void))

Void Scene_obj::removeUpdate( ::com::haxepunk::Entity e){
{
		HX_STACK_FRAME("Scene","removeUpdate","Scene.removeUpdate","com/haxepunk/Scene.hx",1188)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(1189)
		Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1192)
		if (((this->_updateFirst == e))){
			HX_STACK_LINE(1192)
			this->_updateFirst = fe->__Field(HX_CSTRING("_updateNext"),true);
		}
		HX_STACK_LINE(1193)
		if (((fe->__Field(HX_CSTRING("_updateNext"),true) != null()))){
			HX_STACK_LINE(1193)
			fe->__Field(HX_CSTRING("_updateNext"),true)->__FieldRef(HX_CSTRING("_updatePrev")) = fe->__Field(HX_CSTRING("_updatePrev"),true);
		}
		HX_STACK_LINE(1194)
		if (((fe->__Field(HX_CSTRING("_updatePrev"),true) != null()))){
			HX_STACK_LINE(1194)
			fe->__Field(HX_CSTRING("_updatePrev"),true)->__FieldRef(HX_CSTRING("_updateNext")) = fe->__Field(HX_CSTRING("_updateNext"),true);
		}
		HX_STACK_LINE(1195)
		fe->__FieldRef(HX_CSTRING("_updateNext")) = fe->__FieldRef(HX_CSTRING("_updatePrev")) = null();
		HX_STACK_LINE(1196)
		(this->_count)--;
		HX_STACK_LINE(1197)
		{
			HX_STACK_LINE(1197)
			int value = (this->_classCount->get(fe->__Field(HX_CSTRING("_class"),true)) - (int)1);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(1197)
			this->_classCount->set(fe->__Field(HX_CSTRING("_class"),true),value);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeUpdate,(void))

Void Scene_obj::addUpdate( ::com::haxepunk::Entity e){
{
		HX_STACK_FRAME("Scene","addUpdate","Scene.addUpdate","com/haxepunk/Scene.hx",1169)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(1170)
		Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1173)
		if (((this->_updateFirst != null()))){
			HX_STACK_LINE(1175)
			this->_updateFirst->__FieldRef(HX_CSTRING("_updatePrev")) = e;
			HX_STACK_LINE(1176)
			fe->__FieldRef(HX_CSTRING("_updateNext")) = this->_updateFirst;
		}
		else{
			HX_STACK_LINE(1178)
			fe->__FieldRef(HX_CSTRING("_updateNext")) = null();
		}
		HX_STACK_LINE(1179)
		fe->__FieldRef(HX_CSTRING("_updatePrev")) = null();
		HX_STACK_LINE(1180)
		this->_updateFirst = e;
		HX_STACK_LINE(1181)
		(this->_count)++;
		HX_STACK_LINE(1182)
		if (((this->_classCount->get(fe->__Field(HX_CSTRING("_class"),true)) != (int)0))){
			HX_STACK_LINE(1182)
			this->_classCount->set(fe->__Field(HX_CSTRING("_class"),true),(int)0);
		}
		HX_STACK_LINE(1183)
		{
			HX_STACK_LINE(1183)
			int value = (this->_classCount->get(fe->__Field(HX_CSTRING("_class"),true)) + (int)1);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(1183)
			this->_classCount->set(fe->__Field(HX_CSTRING("_class"),true),value);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addUpdate,(void))

Void Scene_obj::clearSprites( ){
{
		HX_STACK_FRAME("Scene","clearSprites","Scene.clearSprites","com/haxepunk/Scene.hx",1161)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1161)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->_layerSprites->keys());  __it->hasNext(); ){
			int sprite = __it->next();
			this->_layerSprites->get(sprite)->__Field(HX_CSTRING("get_graphics"),true)()->__Field(HX_CSTRING("clear"),true)();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,clearSprites,(void))

int Scene_obj::layerSort( int a,int b){
	HX_STACK_FRAME("Scene","layerSort","Scene.layerSort","com/haxepunk/Scene.hx",1150)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(1151)
	if (((a > b))){
		HX_STACK_LINE(1152)
		return (int)1;
	}
	else{
		HX_STACK_LINE(1153)
		if (((a < b))){
			HX_STACK_LINE(1154)
			return (int)-1;
		}
	}
	HX_STACK_LINE(1156)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,layerSort,return )

Void Scene_obj::updateLists( hx::Null< bool >  __o_shouldAdd){
bool shouldAdd = __o_shouldAdd.Default(true);
	HX_STACK_FRAME("Scene","updateLists","Scene.updateLists","com/haxepunk/Scene.hx",1087)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shouldAdd,"shouldAdd")
{
		HX_STACK_LINE(1088)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(1089)
		Dynamic fe;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1092)
		if (((this->_remove->length > (int)0))){
			HX_STACK_LINE(1094)
			{
				HX_STACK_LINE(1094)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1094)
				Array< ::Dynamic > _g1 = this->_remove;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1094)
				while(((_g < _g1->length))){
					HX_STACK_LINE(1094)
					::com::haxepunk::Entity e1 = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(1094)
					++(_g);
					HX_STACK_LINE(1096)
					fe = e1;
					HX_STACK_LINE(1097)
					if (((fe->__Field(HX_CSTRING("_scene"),true) == null()))){
						HX_STACK_LINE(1099)
						int idx = ::Lambda_obj::indexOf(this->_add,e1);		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(1100)
						if (((idx >= (int)0))){
							HX_STACK_LINE(1100)
							this->_add->splice(idx,(int)1);
						}
						HX_STACK_LINE(1101)
						continue;
					}
					HX_STACK_LINE(1103)
					if (((fe->__Field(HX_CSTRING("_scene"),true) != hx::ObjectPtr<OBJ_>(this)))){
						HX_STACK_LINE(1104)
						continue;
					}
					HX_STACK_LINE(1105)
					e1->removed();
					HX_STACK_LINE(1106)
					fe->__FieldRef(HX_CSTRING("_scene")) = null();
					HX_STACK_LINE(1107)
					this->removeUpdate(e1);
					HX_STACK_LINE(1108)
					this->removeRender(e1);
					HX_STACK_LINE(1109)
					if (((fe->__Field(HX_CSTRING("_type"),true) != HX_CSTRING("")))){
						HX_STACK_LINE(1109)
						this->removeType(e1);
					}
					HX_STACK_LINE(1110)
					if (((fe->__Field(HX_CSTRING("_name"),true) != HX_CSTRING("")))){
						HX_STACK_LINE(1110)
						this->unregisterName(e1);
					}
					HX_STACK_LINE(1111)
					if (((bool(e1->autoClear) && bool(e1->get_hasTween())))){
						HX_STACK_LINE(1111)
						e1->clearTweens();
					}
				}
			}
			HX_STACK_LINE(1113)
			{
				HX_STACK_LINE(1113)
				Dynamic array = this->_remove;		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(1113)
				array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
			}
		}
		HX_STACK_LINE(1117)
		if (((bool(shouldAdd) && bool((this->_add->length > (int)0))))){
			HX_STACK_LINE(1119)
			{
				HX_STACK_LINE(1119)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1119)
				Array< ::Dynamic > _g1 = this->_add;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1119)
				while(((_g < _g1->length))){
					HX_STACK_LINE(1119)
					::com::haxepunk::Entity e1 = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(1119)
					++(_g);
					HX_STACK_LINE(1121)
					fe = e1;
					HX_STACK_LINE(1122)
					if (((fe->__Field(HX_CSTRING("_scene"),true) != null()))){
						HX_STACK_LINE(1122)
						continue;
					}
					HX_STACK_LINE(1123)
					fe->__FieldRef(HX_CSTRING("_scene")) = hx::ObjectPtr<OBJ_>(this);
					HX_STACK_LINE(1124)
					this->addUpdate(e1);
					HX_STACK_LINE(1125)
					this->addRender(e1);
					HX_STACK_LINE(1126)
					if (((fe->__Field(HX_CSTRING("_type"),true) != HX_CSTRING("")))){
						HX_STACK_LINE(1126)
						this->addType(e1);
					}
					HX_STACK_LINE(1127)
					if (((fe->__Field(HX_CSTRING("_name"),true) != HX_CSTRING("")))){
						HX_STACK_LINE(1127)
						this->registerName(e1);
					}
					HX_STACK_LINE(1128)
					e1->added();
				}
			}
			HX_STACK_LINE(1130)
			{
				HX_STACK_LINE(1130)
				Dynamic array = this->_add;		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(1130)
				array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
			}
		}
		HX_STACK_LINE(1134)
		if (((this->_recycle->length > (int)0))){
			HX_STACK_LINE(1136)
			{
				HX_STACK_LINE(1136)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1136)
				Array< ::Dynamic > _g1 = this->_recycle;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1136)
				while(((_g < _g1->length))){
					HX_STACK_LINE(1136)
					::com::haxepunk::Entity e1 = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(1136)
					++(_g);
					HX_STACK_LINE(1138)
					fe = e1;
					HX_STACK_LINE(1139)
					if (((bool((fe->__Field(HX_CSTRING("_scene"),true) != null())) || bool((fe->__Field(HX_CSTRING("_recycleNext"),true) != null()))))){
						HX_STACK_LINE(1140)
						continue;
					}
					HX_STACK_LINE(1142)
					fe->__FieldRef(HX_CSTRING("_recycleNext")) = this->_recycled->get(fe->__Field(HX_CSTRING("_class"),true));
					HX_STACK_LINE(1143)
					this->_recycled->set(fe->__Field(HX_CSTRING("_class"),true),e1);
				}
			}
			HX_STACK_LINE(1145)
			{
				HX_STACK_LINE(1145)
				Dynamic array = this->_recycle;		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(1145)
				array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,updateLists,(void))

::com::haxepunk::Entity Scene_obj::getInstance( ::String name){
	HX_STACK_FRAME("Scene","getInstance","Scene.getInstance","com/haxepunk/Scene.hx",1080)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(1080)
	return this->_entityNames->get(name);
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,getInstance,return )

Void Scene_obj::getAll( Dynamic into){
{
		HX_STACK_FRAME("Scene","getAll","Scene.getAll","com/haxepunk/Scene.hx",1061)
		HX_STACK_THIS(this)
		HX_STACK_ARG(into,"into")
		HX_STACK_LINE(1062)
		Dynamic e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(1063)
		Dynamic fe = this->_updateFirst;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1064)
		int n = into->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(1065)
		while(((fe != null()))){
			HX_STACK_LINE(1067)
			e = fe;
			HX_STACK_LINE(1068)
			hx::IndexRef((into).mPtr,(n)++) = e;
			HX_STACK_LINE(1069)
			fe = fe->__Field(HX_CSTRING("_updateNext"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,getAll,(void))

Void Scene_obj::getLayer( int layer,Dynamic into){
{
		HX_STACK_FRAME("Scene","getLayer","Scene.getLayer","com/haxepunk/Scene.hx",1043)
		HX_STACK_THIS(this)
		HX_STACK_ARG(layer,"layer")
		HX_STACK_ARG(into,"into")
		HX_STACK_LINE(1044)
		Dynamic e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(1045)
		Dynamic fe = this->_renderLast->get(layer);		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1046)
		int n = into->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(1047)
		while(((fe != null()))){
			HX_STACK_LINE(1049)
			e = fe;
			HX_STACK_LINE(1050)
			hx::IndexRef((into).mPtr,(n)++) = e;
			HX_STACK_LINE(1051)
			fe = fe->__Field(HX_CSTRING("_updatePrev"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,getLayer,(void))

Void Scene_obj::getClass( ::Class c,Dynamic into){
{
		HX_STACK_FRAME("Scene","getClass","Scene.getClass","com/haxepunk/Scene.hx",1025)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(into,"into")
		HX_STACK_LINE(1026)
		Dynamic fe = this->_updateFirst;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1027)
		int n = into->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(1028)
		while(((fe != null()))){
			HX_STACK_LINE(1030)
			if ((::Std_obj::is(fe,c))){
				HX_STACK_LINE(1031)
				hx::IndexRef((into).mPtr,(n)++) = fe;
			}
			HX_STACK_LINE(1032)
			fe = fe->__Field(HX_CSTRING("_updateNext"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,getClass,(void))

Void Scene_obj::getType( ::String type,Dynamic into){
{
		HX_STACK_FRAME("Scene","getType","Scene.getType","com/haxepunk/Scene.hx",1008)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(into,"into")
		HX_STACK_LINE(1009)
		Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(1010)
		int n = into->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(1011)
		while(((fe != null()))){
			HX_STACK_LINE(1013)
			hx::IndexRef((into).mPtr,(n)++) = fe;
			HX_STACK_LINE(1014)
			fe = fe->__Field(HX_CSTRING("_typeNext"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,getType,(void))

int Scene_obj::get_uniqueTypes( ){
	HX_STACK_FRAME("Scene","get_uniqueTypes","Scene.get_uniqueTypes","com/haxepunk/Scene.hx",995)
	HX_STACK_THIS(this)
	HX_STACK_LINE(996)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	struct _Function_1_1{
		inline static Dynamic Block( ::com::haxepunk::Scene_obj *__this){
			HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/Scene.hx",997)
			{
				HX_STACK_LINE(997)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->_typeCount);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_FRAME("*","_Function_2_1","*._Function_2_1","com/haxepunk/Scene.hx",997)
					{
						HX_STACK_LINE(997)
						return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(997)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(997)
	for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >((_Function_1_1::Block(this))());  __it->hasNext(); ){
		int type = __it->next();
		(i)++;
	}
	HX_STACK_LINE(998)
	return i;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_uniqueTypes,return )

int Scene_obj::get_layerNearest( ){
	HX_STACK_FRAME("Scene","get_layerNearest","Scene.get_layerNearest","com/haxepunk/Scene.hx",985)
	HX_STACK_THIS(this)
	HX_STACK_LINE(986)
	if (((this->_updateFirst == null()))){
		HX_STACK_LINE(986)
		return (int)0;
	}
	HX_STACK_LINE(987)
	return this->_layerList->__get((int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_layerNearest,return )

int Scene_obj::get_layerFarthest( ){
	HX_STACK_FRAME("Scene","get_layerFarthest","Scene.get_layerFarthest","com/haxepunk/Scene.hx",975)
	HX_STACK_THIS(this)
	HX_STACK_LINE(976)
	if (((this->_updateFirst == null()))){
		HX_STACK_LINE(976)
		return (int)0;
	}
	HX_STACK_LINE(977)
	return this->_layerList->__get((this->_layerList->length - (int)1));
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_layerFarthest,return )

::com::haxepunk::Entity Scene_obj::get_nearest( ){
	HX_STACK_FRAME("Scene","get_nearest","Scene.get_nearest","com/haxepunk/Scene.hx",965)
	HX_STACK_THIS(this)
	HX_STACK_LINE(966)
	if (((this->_updateFirst == null()))){
		HX_STACK_LINE(966)
		return null();
	}
	HX_STACK_LINE(967)
	return hx::TCast< com::haxepunk::Entity >::cast(this->_renderFirst->get(this->_layerList->__get((int)0)));
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_nearest,return )

::com::haxepunk::Entity Scene_obj::get_farthest( ){
	HX_STACK_FRAME("Scene","get_farthest","Scene.get_farthest","com/haxepunk/Scene.hx",955)
	HX_STACK_THIS(this)
	HX_STACK_LINE(956)
	if (((this->_updateFirst == null()))){
		HX_STACK_LINE(956)
		return null();
	}
	HX_STACK_LINE(957)
	return hx::TCast< com::haxepunk::Entity >::cast(this->_renderLast->get(this->_layerList->__get((this->_layerList->length - (int)1))));
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_farthest,return )

::flash::display::Sprite Scene_obj::getSpriteByLayer( int layer){
	HX_STACK_FRAME("Scene","getSpriteByLayer","Scene.getSpriteByLayer","com/haxepunk/Scene.hx",926)
	HX_STACK_THIS(this)
	HX_STACK_ARG(layer,"layer")
	HX_STACK_LINE(926)
	if ((this->_layerSprites->exists(layer))){
		HX_STACK_LINE(928)
		return this->_layerSprites->get(layer);
	}
	else{
		HX_STACK_LINE(932)
		::flash::display::Sprite sprite = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(sprite,"sprite");
		HX_STACK_LINE(933)
		int idx = (int)0;		HX_STACK_VAR(idx,"idx");
		HX_STACK_LINE(935)
		Array< int > layers = Array_obj< int >::__new();		HX_STACK_VAR(layers,"layers");
		HX_STACK_LINE(936)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->_layerSprites->keys());  __it->hasNext(); ){
			int l = __it->next();
			layers->push(l);
		}

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
		int run(int a,int b){
			HX_STACK_FRAME("*","_Function_2_1","*._Function_2_1","com/haxepunk/Scene.hx",937)
			HX_STACK_ARG(a,"a")
			HX_STACK_ARG(b,"b")
			{
				HX_STACK_LINE(937)
				return (b - a);
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(937)
		layers->sort( Dynamic(new _Function_2_1()));
		HX_STACK_LINE(939)
		{
			HX_STACK_LINE(939)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(939)
			while(((_g < layers->length))){
				HX_STACK_LINE(939)
				int l = layers->__get(_g);		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(939)
				++(_g);
				HX_STACK_LINE(941)
				if (((layer > l))){
					HX_STACK_LINE(941)
					break;
				}
				HX_STACK_LINE(942)
				hx::AddEq(idx,(int)1);
			}
		}
		HX_STACK_LINE(944)
		this->_layerSprites->set(layer,sprite);
		HX_STACK_LINE(945)
		this->_sprite->addChildAt(sprite,idx);
		HX_STACK_LINE(946)
		return sprite;
	}
	HX_STACK_LINE(926)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,getSpriteByLayer,return )

::com::haxepunk::Entity Scene_obj::layerLast( int layer){
	HX_STACK_FRAME("Scene","layerLast","Scene.layerLast","com/haxepunk/Scene.hx",914)
	HX_STACK_THIS(this)
	HX_STACK_ARG(layer,"layer")
	HX_STACK_LINE(915)
	if (((this->_updateFirst == null()))){
		HX_STACK_LINE(915)
		return null();
	}
	HX_STACK_LINE(916)
	return hx::TCast< com::haxepunk::Entity >::cast(this->_renderLast->get(layer));
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,layerLast,return )

::com::haxepunk::Entity Scene_obj::layerFirst( int layer){
	HX_STACK_FRAME("Scene","layerFirst","Scene.layerFirst","com/haxepunk/Scene.hx",903)
	HX_STACK_THIS(this)
	HX_STACK_ARG(layer,"layer")
	HX_STACK_LINE(904)
	if (((this->_updateFirst == null()))){
		HX_STACK_LINE(904)
		return null();
	}
	HX_STACK_LINE(905)
	return hx::TCast< com::haxepunk::Entity >::cast(this->_renderFirst->get(layer));
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,layerFirst,return )

Dynamic Scene_obj::classFirst( ::Class c){
	HX_STACK_FRAME("Scene","classFirst","Scene.classFirst","com/haxepunk/Scene.hx",886)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(887)
	if (((this->_updateFirst == null()))){
		HX_STACK_LINE(887)
		return null();
	}
	HX_STACK_LINE(888)
	Dynamic fe = this->_updateFirst;		HX_STACK_VAR(fe,"fe");
	HX_STACK_LINE(889)
	while(((fe != null()))){
		HX_STACK_LINE(891)
		if ((::Std_obj::is(fe,c))){
			HX_STACK_LINE(891)
			return fe;
		}
		HX_STACK_LINE(892)
		fe = fe->__Field(HX_CSTRING("_updateNext"),true);
	}
	HX_STACK_LINE(894)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,classFirst,return )

::com::haxepunk::Entity Scene_obj::typeFirst( ::String type){
	HX_STACK_FRAME("Scene","typeFirst","Scene.typeFirst","com/haxepunk/Scene.hx",875)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(876)
	if (((this->_updateFirst == null()))){
		HX_STACK_LINE(876)
		return null();
	}
	HX_STACK_LINE(877)
	return hx::TCast< com::haxepunk::Entity >::cast(this->_typeFirst->get(type));
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,typeFirst,return )

int Scene_obj::get_layers( ){
	HX_STACK_FRAME("Scene","get_layers","Scene.get_layers","com/haxepunk/Scene.hx",867)
	HX_STACK_THIS(this)
	HX_STACK_LINE(867)
	return this->_layerList->length;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_layers,return )

::com::haxepunk::Entity Scene_obj::get_first( ){
	HX_STACK_FRAME("Scene","get_first","Scene.get_first","com/haxepunk/Scene.hx",861)
	HX_STACK_THIS(this)
	HX_STACK_LINE(861)
	return hx::TCast< com::haxepunk::Entity >::cast(this->_updateFirst);
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_first,return )

int Scene_obj::layerCount( int layer){
	HX_STACK_FRAME("Scene","layerCount","Scene.layerCount","com/haxepunk/Scene.hx",854)
	HX_STACK_THIS(this)
	HX_STACK_ARG(layer,"layer")
	HX_STACK_LINE(854)
	return this->_layerCount->__get(layer);
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,layerCount,return )

int Scene_obj::classCount( ::String c){
	HX_STACK_FRAME("Scene","classCount","Scene.classCount","com/haxepunk/Scene.hx",844)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(844)
	return this->_classCount->get(c);
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,classCount,return )

int Scene_obj::typeCount( ::String type){
	HX_STACK_FRAME("Scene","typeCount","Scene.typeCount","com/haxepunk/Scene.hx",834)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(834)
	return this->_typeCount->get(type);
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,typeCount,return )

int Scene_obj::get_count( ){
	HX_STACK_FRAME("Scene","get_count","Scene.get_count","com/haxepunk/Scene.hx",825)
	HX_STACK_THIS(this)
	HX_STACK_LINE(825)
	return this->_count;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_count,return )

::com::haxepunk::Entity Scene_obj::nearestToPoint( ::String type,Float x,Float y,hx::Null< bool >  __o_useHitboxes){
bool useHitboxes = __o_useHitboxes.Default(false);
	HX_STACK_FRAME("Scene","nearestToPoint","Scene.nearestToPoint","com/haxepunk/Scene.hx",786)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(useHitboxes,"useHitboxes")
{
		HX_STACK_LINE(787)
		::com::haxepunk::Entity n;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(788)
		Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(789)
		Float nearDist = ((int)179 * ::Math_obj::pow((int)10,(int)306));		HX_STACK_VAR(nearDist,"nearDist");
		HX_STACK_LINE(790)
		::com::haxepunk::Entity near = null();		HX_STACK_VAR(near,"near");
		HX_STACK_LINE(787)
		Float dist;		HX_STACK_VAR(dist,"dist");
		HX_STACK_LINE(792)
		if ((useHitboxes)){
			HX_STACK_LINE(794)
			while(((fe != null()))){
				HX_STACK_LINE(796)
				n = hx::TCast< com::haxepunk::Entity >::cast(fe);
				HX_STACK_LINE(797)
				dist = ::com::haxepunk::Scene_obj::squarePointRect(x,y,(n->x - n->originX),(n->y - n->originY),n->width,n->height);
				HX_STACK_LINE(798)
				if (((dist < nearDist))){
					HX_STACK_LINE(800)
					nearDist = dist;
					HX_STACK_LINE(801)
					near = n;
				}
				HX_STACK_LINE(803)
				fe = fe->__Field(HX_CSTRING("_typeNext"),true);
			}
			HX_STACK_LINE(805)
			return near;
		}
		HX_STACK_LINE(807)
		while(((fe != null()))){
			HX_STACK_LINE(809)
			n = hx::TCast< com::haxepunk::Entity >::cast(fe);
			HX_STACK_LINE(810)
			dist = ((((x - n->x)) * ((x - n->x))) + (((y - n->y)) * ((y - n->y))));
			HX_STACK_LINE(811)
			if (((dist < nearDist))){
				HX_STACK_LINE(813)
				nearDist = dist;
				HX_STACK_LINE(814)
				near = n;
			}
			HX_STACK_LINE(816)
			fe = fe->__Field(HX_CSTRING("_typeNext"),true);
		}
		HX_STACK_LINE(818)
		return near;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Scene_obj,nearestToPoint,return )

::com::haxepunk::Entity Scene_obj::nearestToClass( ::String type,::com::haxepunk::Entity e,Dynamic classType,hx::Null< bool >  __o_useHitboxes){
bool useHitboxes = __o_useHitboxes.Default(false);
	HX_STACK_FRAME("Scene","nearestToClass","Scene.nearestToClass","com/haxepunk/Scene.hx",754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(classType,"classType")
	HX_STACK_ARG(useHitboxes,"useHitboxes")
{
		HX_STACK_LINE(755)
		if ((useHitboxes)){
			HX_STACK_LINE(755)
			return this->nearestToRect(type,(e->x - e->originX),(e->y - e->originY),e->width,e->height);
		}
		HX_STACK_LINE(756)
		::com::haxepunk::Entity n;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(757)
		Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(758)
		Float nearDist = ((int)179 * ::Math_obj::pow((int)10,(int)306));		HX_STACK_VAR(nearDist,"nearDist");
		HX_STACK_LINE(759)
		::com::haxepunk::Entity near = null();		HX_STACK_VAR(near,"near");
		HX_STACK_LINE(756)
		Float dist;		HX_STACK_VAR(dist,"dist");
		HX_STACK_LINE(761)
		Float x = (e->x - e->originX);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(762)
		Float y = (e->y - e->originY);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(763)
		while(((fe != null()))){
			HX_STACK_LINE(765)
			n = hx::TCast< com::haxepunk::Entity >::cast(fe);
			HX_STACK_LINE(766)
			dist = ((((x - n->x)) * ((x - n->x))) + (((y - n->y)) * ((y - n->y))));
			HX_STACK_LINE(767)
			if (((bool((dist < nearDist)) && bool(::Std_obj::is(e,classType))))){
				HX_STACK_LINE(769)
				nearDist = dist;
				HX_STACK_LINE(770)
				near = n;
			}
			HX_STACK_LINE(772)
			fe = fe->__Field(HX_CSTRING("_typeNext"),true);
		}
		HX_STACK_LINE(774)
		return near;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Scene_obj,nearestToClass,return )

::com::haxepunk::Entity Scene_obj::nearestToEntity( ::String type,::com::haxepunk::Entity e,hx::Null< bool >  __o_useHitboxes){
bool useHitboxes = __o_useHitboxes.Default(false);
	HX_STACK_FRAME("Scene","nearestToEntity","Scene.nearestToEntity","com/haxepunk/Scene.hx",722)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(useHitboxes,"useHitboxes")
{
		HX_STACK_LINE(723)
		if ((useHitboxes)){
			HX_STACK_LINE(723)
			return this->nearestToRect(type,(e->x - e->originX),(e->y - e->originY),e->width,e->height);
		}
		HX_STACK_LINE(724)
		::com::haxepunk::Entity n;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(725)
		Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(726)
		Float nearDist = ((int)179 * ::Math_obj::pow((int)10,(int)306));		HX_STACK_VAR(nearDist,"nearDist");
		HX_STACK_LINE(727)
		::com::haxepunk::Entity near = null();		HX_STACK_VAR(near,"near");
		HX_STACK_LINE(724)
		Float dist;		HX_STACK_VAR(dist,"dist");
		HX_STACK_LINE(729)
		Float x = (e->x - e->originX);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(730)
		Float y = (e->y - e->originY);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(731)
		while(((fe != null()))){
			HX_STACK_LINE(733)
			n = hx::TCast< com::haxepunk::Entity >::cast(fe);
			HX_STACK_LINE(734)
			dist = ((((x - n->x)) * ((x - n->x))) + (((y - n->y)) * ((y - n->y))));
			HX_STACK_LINE(735)
			if (((dist < nearDist))){
				HX_STACK_LINE(737)
				nearDist = dist;
				HX_STACK_LINE(738)
				near = n;
			}
			HX_STACK_LINE(740)
			fe = fe->__Field(HX_CSTRING("_typeNext"),true);
		}
		HX_STACK_LINE(742)
		return near;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Scene_obj,nearestToEntity,return )

::com::haxepunk::Entity Scene_obj::nearestToRect( ::String type,Float x,Float y,Float width,Float height){
	HX_STACK_FRAME("Scene","nearestToRect","Scene.nearestToRect","com/haxepunk/Scene.hx",695)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(696)
	::com::haxepunk::Entity n;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(697)
	Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
	HX_STACK_LINE(698)
	Float nearDist = ((int)179 * ::Math_obj::pow((int)10,(int)306));		HX_STACK_VAR(nearDist,"nearDist");
	HX_STACK_LINE(699)
	::com::haxepunk::Entity near = null();		HX_STACK_VAR(near,"near");
	HX_STACK_LINE(696)
	Float dist;		HX_STACK_VAR(dist,"dist");
	HX_STACK_LINE(700)
	while(((fe != null()))){
		HX_STACK_LINE(702)
		n = hx::TCast< com::haxepunk::Entity >::cast(fe);
		HX_STACK_LINE(703)
		dist = ::com::haxepunk::Scene_obj::squareRects(x,y,width,height,(n->x - n->originX),(n->y - n->originY),n->width,n->height);
		HX_STACK_LINE(704)
		if (((dist < nearDist))){
			HX_STACK_LINE(706)
			nearDist = dist;
			HX_STACK_LINE(707)
			near = n;
		}
		HX_STACK_LINE(709)
		fe = fe->__Field(HX_CSTRING("_typeNext"),true);
	}
	HX_STACK_LINE(711)
	return near;
}


HX_DEFINE_DYNAMIC_FUNC5(Scene_obj,nearestToRect,return )

Void Scene_obj::collidePointInto( ::String type,Float pX,Float pY,Dynamic into){
{
		HX_STACK_FRAME("Scene","collidePointInto","Scene.collidePointInto","com/haxepunk/Scene.hx",673)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(pX,"pX")
		HX_STACK_ARG(pY,"pY")
		HX_STACK_ARG(into,"into")
		HX_STACK_LINE(674)
		Dynamic e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(675)
		Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(676)
		int n = into->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(677)
		while(((fe != null()))){
			HX_STACK_LINE(679)
			e = fe;
			HX_STACK_LINE(680)
			if ((e->__Field(HX_CSTRING("collidePoint"),true)(e->__Field(HX_CSTRING("x"),true),e->__Field(HX_CSTRING("y"),true),pX,pY))){
				HX_STACK_LINE(680)
				hx::IndexRef((into).mPtr,(n)++) = e;
			}
			HX_STACK_LINE(681)
			fe = fe->__Field(HX_CSTRING("_typeNext"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Scene_obj,collidePointInto,(void))

Void Scene_obj::collideCircleInto( ::String type,Float circleX,Float circleY,Float radius,Dynamic into){
{
		HX_STACK_FRAME("Scene","collideCircleInto","Scene.collideCircleInto","com/haxepunk/Scene.hx",649)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(circleX,"circleX")
		HX_STACK_ARG(circleY,"circleY")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(into,"into")
		HX_STACK_LINE(650)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(651)
		Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(652)
		int n = into->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(654)
		hx::MultEq(radius,radius);
		HX_STACK_LINE(655)
		while(((fe != null()))){
			HX_STACK_LINE(657)
			e = fe;
			struct _Function_2_1{
				inline static Float Block( ::com::haxepunk::Entity &e,Float &circleX,Float &circleY){
					HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/Scene.hx",658)
					{
						HX_STACK_LINE(658)
						Float x2 = e->x;		HX_STACK_VAR(x2,"x2");
						HX_STACK_LINE(658)
						Float y2 = e->y;		HX_STACK_VAR(y2,"y2");
						HX_STACK_LINE(658)
						return ((((x2 - circleX)) * ((x2 - circleX))) + (((y2 - circleY)) * ((y2 - circleY))));
					}
					return null();
				}
			};
			HX_STACK_LINE(658)
			if (((_Function_2_1::Block(e,circleX,circleY) < radius))){
				HX_STACK_LINE(658)
				hx::IndexRef((into).mPtr,(n)++) = e;
			}
			HX_STACK_LINE(659)
			fe = fe->__Field(HX_CSTRING("_typeNext"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Scene_obj,collideCircleInto,(void))

Void Scene_obj::collideRectInto( ::String type,Float rX,Float rY,Float rWidth,Float rHeight,Dynamic into){
{
		HX_STACK_FRAME("Scene","collideRectInto","Scene.collideRectInto","com/haxepunk/Scene.hx",627)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(rX,"rX")
		HX_STACK_ARG(rY,"rY")
		HX_STACK_ARG(rWidth,"rWidth")
		HX_STACK_ARG(rHeight,"rHeight")
		HX_STACK_ARG(into,"into")
		HX_STACK_LINE(628)
		Dynamic e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(629)
		Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(630)
		int n = into->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(631)
		while(((fe != null()))){
			HX_STACK_LINE(633)
			e = fe;
			HX_STACK_LINE(634)
			if ((e->__Field(HX_CSTRING("collideRect"),true)(e->__Field(HX_CSTRING("x"),true),e->__Field(HX_CSTRING("y"),true),rX,rY,rWidth,rHeight))){
				HX_STACK_LINE(634)
				hx::IndexRef((into).mPtr,(n)++) = e;
			}
			HX_STACK_LINE(635)
			fe = fe->__Field(HX_CSTRING("_typeNext"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Scene_obj,collideRectInto,(void))

::com::haxepunk::Entity Scene_obj::collideLine( ::String type,int fromX,int fromY,int toX,int toY,hx::Null< int >  __o_precision,::flash::geom::Point p){
int precision = __o_precision.Default(1);
	HX_STACK_FRAME("Scene","collideLine","Scene.collideLine","com/haxepunk/Scene.hx",498)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(fromX,"fromX")
	HX_STACK_ARG(fromY,"fromY")
	HX_STACK_ARG(toX,"toX")
	HX_STACK_ARG(toY,"toY")
	HX_STACK_ARG(precision,"precision")
	HX_STACK_ARG(p,"p")
{
		HX_STACK_LINE(500)
		if (((precision < (int)1))){
			HX_STACK_LINE(500)
			precision = (int)1;
		}
		HX_STACK_LINE(501)
		if (((::Math_obj::sqrt(((((toX - fromX)) * ((toX - fromX))) + (((toY - fromY)) * ((toY - fromY))))) < precision))){
			HX_STACK_LINE(503)
			if (((p != null()))){
				HX_STACK_LINE(505)
				if (((bool((fromX == toX)) && bool((fromY == toY))))){
					HX_STACK_LINE(507)
					p->x = toX;
					HX_STACK_LINE(507)
					p->y = toY;
					HX_STACK_LINE(508)
					return this->collidePoint(type,toX,toY);
				}
				HX_STACK_LINE(510)
				return this->collideLine(type,fromX,fromY,toX,toY,(int)1,p);
			}
			else{
				HX_STACK_LINE(512)
				return this->collidePoint(type,fromX,toY);
			}
		}
		HX_STACK_LINE(516)
		int xDelta = ::Std_obj::_int(::Math_obj::abs((toX - fromX)));		HX_STACK_VAR(xDelta,"xDelta");
		HX_STACK_LINE(517)
		int yDelta = ::Std_obj::_int(::Math_obj::abs((toY - fromY)));		HX_STACK_VAR(yDelta,"yDelta");
		HX_STACK_LINE(518)
		Float xSign;		HX_STACK_VAR(xSign,"xSign");
		HX_STACK_LINE(518)
		if (((toX > fromX))){
			HX_STACK_LINE(518)
			xSign = precision;
		}
		else{
			HX_STACK_LINE(518)
			xSign = -(precision);
		}
		HX_STACK_LINE(519)
		Float ySign;		HX_STACK_VAR(ySign,"ySign");
		HX_STACK_LINE(519)
		if (((toY > fromY))){
			HX_STACK_LINE(519)
			ySign = precision;
		}
		else{
			HX_STACK_LINE(519)
			ySign = -(precision);
		}
		HX_STACK_LINE(520)
		Float x = fromX;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(520)
		Float y = fromY;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(516)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(523)
		if (((xDelta > yDelta))){
			HX_STACK_LINE(525)
			hx::MultEq(ySign,(Float(yDelta) / Float(xDelta)));
			HX_STACK_LINE(526)
			if (((xSign > (int)0))){
				HX_STACK_LINE(528)
				while(((x < toX))){
					HX_STACK_LINE(530)
					if ((((e = this->collidePoint(type,x,y)) != null()))){
						HX_STACK_LINE(532)
						if (((p == null()))){
							HX_STACK_LINE(532)
							return e;
						}
						HX_STACK_LINE(533)
						if (((precision < (int)2))){
							HX_STACK_LINE(535)
							p->x = (x - xSign);
							HX_STACK_LINE(535)
							p->y = (y - ySign);
							HX_STACK_LINE(536)
							return e;
						}
						HX_STACK_LINE(538)
						return this->collideLine(type,::Std_obj::_int((x - xSign)),::Std_obj::_int((y - ySign)),toX,toY,(int)1,p);
					}
					HX_STACK_LINE(540)
					hx::AddEq(x,xSign);
					HX_STACK_LINE(540)
					hx::AddEq(y,ySign);
				}
			}
			else{
				HX_STACK_LINE(545)
				while(((x > toX))){
					HX_STACK_LINE(547)
					if ((((e = this->collidePoint(type,x,y)) != null()))){
						HX_STACK_LINE(549)
						if (((p == null()))){
							HX_STACK_LINE(549)
							return e;
						}
						HX_STACK_LINE(550)
						if (((precision < (int)2))){
							HX_STACK_LINE(552)
							p->x = (x - xSign);
							HX_STACK_LINE(552)
							p->y = (y - ySign);
							HX_STACK_LINE(553)
							return e;
						}
						HX_STACK_LINE(555)
						return this->collideLine(type,::Std_obj::_int((x - xSign)),::Std_obj::_int((y - ySign)),toX,toY,(int)1,p);
					}
					HX_STACK_LINE(557)
					hx::AddEq(x,xSign);
					HX_STACK_LINE(557)
					hx::AddEq(y,ySign);
				}
			}
		}
		else{
			HX_STACK_LINE(563)
			hx::MultEq(xSign,(Float(xDelta) / Float(yDelta)));
			HX_STACK_LINE(564)
			if (((ySign > (int)0))){
				HX_STACK_LINE(566)
				while(((y < toY))){
					HX_STACK_LINE(568)
					if ((((e = this->collidePoint(type,x,y)) != null()))){
						HX_STACK_LINE(570)
						if (((p == null()))){
							HX_STACK_LINE(570)
							return e;
						}
						HX_STACK_LINE(571)
						if (((precision < (int)2))){
							HX_STACK_LINE(573)
							p->x = (x - xSign);
							HX_STACK_LINE(573)
							p->y = (y - ySign);
							HX_STACK_LINE(574)
							return e;
						}
						HX_STACK_LINE(576)
						return this->collideLine(type,::Std_obj::_int((x - xSign)),::Std_obj::_int((y - ySign)),toX,toY,(int)1,p);
					}
					HX_STACK_LINE(578)
					hx::AddEq(x,xSign);
					HX_STACK_LINE(578)
					hx::AddEq(y,ySign);
				}
			}
			else{
				HX_STACK_LINE(583)
				while(((y > toY))){
					HX_STACK_LINE(585)
					if ((((e = this->collidePoint(type,x,y)) != null()))){
						HX_STACK_LINE(587)
						if (((p == null()))){
							HX_STACK_LINE(587)
							return e;
						}
						HX_STACK_LINE(588)
						if (((precision < (int)2))){
							HX_STACK_LINE(590)
							p->x = (x - xSign);
							HX_STACK_LINE(590)
							p->y = (y - ySign);
							HX_STACK_LINE(591)
							return e;
						}
						HX_STACK_LINE(593)
						return this->collideLine(type,::Std_obj::_int((x - xSign)),::Std_obj::_int((y - ySign)),toX,toY,(int)1,p);
					}
					HX_STACK_LINE(595)
					hx::AddEq(x,xSign);
					HX_STACK_LINE(595)
					hx::AddEq(y,ySign);
				}
			}
		}
		HX_STACK_LINE(601)
		if (((precision > (int)1))){
			HX_STACK_LINE(603)
			if (((p == null()))){
				HX_STACK_LINE(603)
				return this->collidePoint(type,toX,toY);
			}
			HX_STACK_LINE(604)
			if (((this->collidePoint(type,toX,toY) != null()))){
				HX_STACK_LINE(604)
				return this->collideLine(type,::Std_obj::_int((x - xSign)),::Std_obj::_int((y - ySign)),toX,toY,(int)1,p);
			}
		}
		HX_STACK_LINE(608)
		if (((p != null()))){
			HX_STACK_LINE(610)
			p->x = toX;
			HX_STACK_LINE(611)
			p->y = toY;
		}
		HX_STACK_LINE(613)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC7(Scene_obj,collideLine,return )

::com::haxepunk::Entity Scene_obj::collidePoint( ::String type,Float pX,Float pY){
	HX_STACK_FRAME("Scene","collidePoint","Scene.collidePoint","com/haxepunk/Scene.hx",464)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(pX,"pX")
	HX_STACK_ARG(pY,"pY")
	HX_STACK_LINE(465)
	::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(466)
	Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
	HX_STACK_LINE(467)
	::com::haxepunk::Entity result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(468)
	while(((fe != null()))){
		HX_STACK_LINE(470)
		e = hx::TCast< com::haxepunk::Entity >::cast(fe);
		HX_STACK_LINE(472)
		if (((bool(e->collidable) && bool(e->collidePoint(e->x,e->y,pX,pY))))){
			HX_STACK_LINE(474)
			if (((result == null()))){
				HX_STACK_LINE(475)
				result = e;
			}
			else{
				HX_STACK_LINE(477)
				if (((e->_layer < result->_layer))){
					HX_STACK_LINE(478)
					result = e;
				}
			}
		}
		HX_STACK_LINE(481)
		fe = fe->__Field(HX_CSTRING("_typeNext"),true);
	}
	HX_STACK_LINE(483)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC3(Scene_obj,collidePoint,return )

::com::haxepunk::Entity Scene_obj::collideRect( ::String type,Float rX,Float rY,Float rWidth,Float rHeight){
	HX_STACK_FRAME("Scene","collideRect","Scene.collideRect","com/haxepunk/Scene.hx",444)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(rX,"rX")
	HX_STACK_ARG(rY,"rY")
	HX_STACK_ARG(rWidth,"rWidth")
	HX_STACK_ARG(rHeight,"rHeight")
	HX_STACK_LINE(445)
	::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(446)
	Dynamic fe = this->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
	HX_STACK_LINE(447)
	while(((fe != null()))){
		HX_STACK_LINE(449)
		e = hx::TCast< com::haxepunk::Entity >::cast(fe);
		HX_STACK_LINE(450)
		if ((e->collideRect(e->x,e->y,rX,rY,rWidth,rHeight))){
			HX_STACK_LINE(450)
			return e;
		}
		HX_STACK_LINE(451)
		fe = fe->__Field(HX_CSTRING("_typeNext"),true);
	}
	HX_STACK_LINE(453)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Scene_obj,collideRect,return )

bool Scene_obj::isAtBack( ::com::haxepunk::Entity e){
	HX_STACK_FRAME("Scene","isAtBack","Scene.isAtBack","com/haxepunk/Scene.hx",429)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(430)
	Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
	HX_STACK_LINE(431)
	return (fe->__Field(HX_CSTRING("_renderNext"),true) == null());
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,isAtBack,return )

bool Scene_obj::isAtFront( ::com::haxepunk::Entity e){
	HX_STACK_FRAME("Scene","isAtFront","Scene.isAtFront","com/haxepunk/Scene.hx",418)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(419)
	Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
	HX_STACK_LINE(420)
	return (fe->__Field(HX_CSTRING("_renderPrev"),true) == null());
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,isAtFront,return )

bool Scene_obj::sendBackward( ::com::haxepunk::Entity e){
	HX_STACK_FRAME("Scene","sendBackward","Scene.sendBackward","com/haxepunk/Scene.hx",396)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(397)
	Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
	HX_STACK_LINE(398)
	if (((bool((fe->__Field(HX_CSTRING("_scene"),true) != hx::ObjectPtr<OBJ_>(this))) || bool((fe->__Field(HX_CSTRING("_renderNext"),true) == null()))))){
		HX_STACK_LINE(398)
		return false;
	}
	HX_STACK_LINE(400)
	fe->__Field(HX_CSTRING("_renderNext"),true)->__FieldRef(HX_CSTRING("_renderPrev")) = fe->__Field(HX_CSTRING("_renderPrev"),true);
	HX_STACK_LINE(401)
	if (((fe->__Field(HX_CSTRING("_renderPrev"),true) != null()))){
		HX_STACK_LINE(401)
		fe->__Field(HX_CSTRING("_renderPrev"),true)->__FieldRef(HX_CSTRING("_renderNext")) = fe->__Field(HX_CSTRING("_renderNext"),true);
	}
	else{
		HX_STACK_LINE(402)
		this->_renderFirst->set(fe->__Field(HX_CSTRING("_layer"),true),fe->__Field(HX_CSTRING("_renderNext"),true));
	}
	HX_STACK_LINE(404)
	fe->__FieldRef(HX_CSTRING("_renderPrev")) = fe->__Field(HX_CSTRING("_renderNext"),true);
	HX_STACK_LINE(405)
	fe->__FieldRef(HX_CSTRING("_renderNext")) = fe->__Field(HX_CSTRING("_renderNext"),true)->__Field(HX_CSTRING("_renderNext"),true);
	HX_STACK_LINE(406)
	fe->__Field(HX_CSTRING("_renderPrev"),true)->__FieldRef(HX_CSTRING("_renderNext")) = e;
	HX_STACK_LINE(407)
	if (((fe->__Field(HX_CSTRING("_renderNext"),true) != null()))){
		HX_STACK_LINE(407)
		fe->__Field(HX_CSTRING("_renderNext"),true)->__FieldRef(HX_CSTRING("_renderPrev")) = e;
	}
	else{
		HX_STACK_LINE(408)
		this->_renderLast->set(fe->__Field(HX_CSTRING("_layer"),true),e);
	}
	HX_STACK_LINE(409)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,sendBackward,return )

bool Scene_obj::bringForward( ::com::haxepunk::Entity e){
	HX_STACK_FRAME("Scene","bringForward","Scene.bringForward","com/haxepunk/Scene.hx",374)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(375)
	Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
	HX_STACK_LINE(376)
	if (((bool((fe->__Field(HX_CSTRING("_scene"),true) != hx::ObjectPtr<OBJ_>(this))) || bool((fe->__Field(HX_CSTRING("_renderPrev"),true) == null()))))){
		HX_STACK_LINE(376)
		return false;
	}
	HX_STACK_LINE(378)
	fe->__Field(HX_CSTRING("_renderPrev"),true)->__FieldRef(HX_CSTRING("_renderNext")) = fe->__Field(HX_CSTRING("_renderNext"),true);
	HX_STACK_LINE(379)
	if (((fe->__Field(HX_CSTRING("_renderNext"),true) != null()))){
		HX_STACK_LINE(379)
		fe->__Field(HX_CSTRING("_renderNext"),true)->__FieldRef(HX_CSTRING("_renderPrev")) = fe->__Field(HX_CSTRING("_renderPrev"),true);
	}
	else{
		HX_STACK_LINE(380)
		this->_renderLast->set(fe->__Field(HX_CSTRING("_layer"),true),fe->__Field(HX_CSTRING("_renderPrev"),true));
	}
	HX_STACK_LINE(382)
	fe->__FieldRef(HX_CSTRING("_renderNext")) = fe->__Field(HX_CSTRING("_renderPrev"),true);
	HX_STACK_LINE(383)
	fe->__FieldRef(HX_CSTRING("_renderPrev")) = fe->__Field(HX_CSTRING("_renderPrev"),true)->__Field(HX_CSTRING("_renderPrev"),true);
	HX_STACK_LINE(384)
	fe->__Field(HX_CSTRING("_renderNext"),true)->__FieldRef(HX_CSTRING("_renderPrev")) = e;
	HX_STACK_LINE(385)
	if (((fe->__Field(HX_CSTRING("_renderPrev"),true) != null()))){
		HX_STACK_LINE(385)
		fe->__Field(HX_CSTRING("_renderPrev"),true)->__FieldRef(HX_CSTRING("_renderNext")) = e;
	}
	else{
		HX_STACK_LINE(386)
		this->_renderFirst->set(fe->__Field(HX_CSTRING("_layer"),true),e);
	}
	HX_STACK_LINE(387)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,bringForward,return )

bool Scene_obj::sendToBack( ::com::haxepunk::Entity e){
	HX_STACK_FRAME("Scene","sendToBack","Scene.sendToBack","com/haxepunk/Scene.hx",353)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(354)
	Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
	HX_STACK_LINE(355)
	if (((bool((fe->__Field(HX_CSTRING("_scene"),true) != hx::ObjectPtr<OBJ_>(this))) || bool((fe->__Field(HX_CSTRING("_renderNext"),true) == null()))))){
		HX_STACK_LINE(355)
		return false;
	}
	HX_STACK_LINE(357)
	fe->__Field(HX_CSTRING("_renderNext"),true)->__FieldRef(HX_CSTRING("_renderPrev")) = fe->__Field(HX_CSTRING("_renderPrev"),true);
	HX_STACK_LINE(358)
	if (((fe->__Field(HX_CSTRING("_renderPrev"),true) != null()))){
		HX_STACK_LINE(358)
		fe->__Field(HX_CSTRING("_renderPrev"),true)->__FieldRef(HX_CSTRING("_renderNext")) = fe->__Field(HX_CSTRING("_renderNext"),true);
	}
	else{
		HX_STACK_LINE(359)
		this->_renderFirst->set(fe->__Field(HX_CSTRING("_layer"),true),fe->__Field(HX_CSTRING("_renderNext"),true));
	}
	HX_STACK_LINE(361)
	fe->__FieldRef(HX_CSTRING("_renderPrev")) = this->_renderLast->get(fe->__Field(HX_CSTRING("_layer"),true));
	HX_STACK_LINE(362)
	fe->__Field(HX_CSTRING("_renderPrev"),true)->__FieldRef(HX_CSTRING("_renderNext")) = e;
	HX_STACK_LINE(363)
	this->_renderLast->set(fe->__Field(HX_CSTRING("_layer"),true),e);
	HX_STACK_LINE(364)
	fe->__FieldRef(HX_CSTRING("_renderNext")) = null();
	HX_STACK_LINE(365)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,sendToBack,return )

bool Scene_obj::bringToFront( ::com::haxepunk::Entity e){
	HX_STACK_FRAME("Scene","bringToFront","Scene.bringToFront","com/haxepunk/Scene.hx",332)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(333)
	Dynamic fe = e;		HX_STACK_VAR(fe,"fe");
	HX_STACK_LINE(334)
	if (((bool((fe->__Field(HX_CSTRING("_scene"),true) != hx::ObjectPtr<OBJ_>(this))) || bool((fe->__Field(HX_CSTRING("_renderPrev"),true) == null()))))){
		HX_STACK_LINE(334)
		return false;
	}
	HX_STACK_LINE(336)
	fe->__Field(HX_CSTRING("_renderPrev"),true)->__FieldRef(HX_CSTRING("_renderNext")) = fe->__Field(HX_CSTRING("_renderNext"),true);
	HX_STACK_LINE(337)
	if (((fe->__Field(HX_CSTRING("_renderNext"),true) != null()))){
		HX_STACK_LINE(337)
		fe->__Field(HX_CSTRING("_renderNext"),true)->__FieldRef(HX_CSTRING("_renderPrev")) = fe->__Field(HX_CSTRING("_renderPrev"),true);
	}
	else{
		HX_STACK_LINE(338)
		this->_renderLast->set(fe->__Field(HX_CSTRING("_layer"),true),fe->__Field(HX_CSTRING("_renderPrev"),true));
	}
	HX_STACK_LINE(340)
	fe->__FieldRef(HX_CSTRING("_renderNext")) = this->_renderFirst->get(fe->__Field(HX_CSTRING("_layer"),true));
	HX_STACK_LINE(341)
	fe->__Field(HX_CSTRING("_renderNext"),true)->__FieldRef(HX_CSTRING("_renderPrev")) = e;
	HX_STACK_LINE(342)
	this->_renderFirst->set(fe->__Field(HX_CSTRING("_layer"),true),e);
	HX_STACK_LINE(343)
	fe->__FieldRef(HX_CSTRING("_renderPrev")) = null();
	HX_STACK_LINE(344)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,bringToFront,return )

Void Scene_obj::clearRecycledAll( ){
{
		HX_STACK_FRAME("Scene","clearRecycledAll","Scene.clearRecycledAll","com/haxepunk/Scene.hx",316)
		HX_STACK_THIS(this)
		HX_STACK_LINE(317)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(317)
		Dynamic fe;		HX_STACK_VAR(fe,"fe");
		struct _Function_1_1{
			inline static Dynamic Block( ::com::haxepunk::Scene_obj *__this){
				HX_STACK_FRAME("*","closure","*.closure","com/haxepunk/Scene.hx",319)
				{
					HX_STACK_LINE(319)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->_recycled);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_FRAME("*","_Function_2_1","*._Function_2_1","com/haxepunk/Scene.hx",319)
						{
							HX_STACK_LINE(319)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(319)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(319)
		for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::com::haxepunk::Entity e1 = __it->next();
			{
				HX_STACK_LINE(321)
				fe = e1;
				HX_STACK_LINE(322)
				this->clearRecycled(fe->__Field(HX_CSTRING("_class"),true));
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,clearRecycledAll,(void))

Void Scene_obj::clearRecycled( ::String classType){
{
		HX_STACK_FRAME("Scene","clearRecycled","Scene.clearRecycled","com/haxepunk/Scene.hx",298)
		HX_STACK_THIS(this)
		HX_STACK_ARG(classType,"classType")
		HX_STACK_LINE(299)
		::com::haxepunk::Entity e = this->_recycled->get(classType);		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(299)
		Dynamic fe;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(299)
		::com::haxepunk::Entity n;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(302)
		while(((e != null()))){
			HX_STACK_LINE(304)
			fe = e;
			HX_STACK_LINE(305)
			n = fe->__Field(HX_CSTRING("_recycleNext"),true);
			HX_STACK_LINE(306)
			fe->__FieldRef(HX_CSTRING("_recycleNext")) = null();
			HX_STACK_LINE(307)
			e = n;
		}
		HX_STACK_LINE(309)
		this->_recycled->set(classType,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,clearRecycled,(void))

Dynamic Scene_obj::recycle( Dynamic e){
	HX_STACK_FRAME("Scene","recycle","Scene.recycle","com/haxepunk/Scene.hx",288)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(289)
	this->_recycle[this->_recycle->length] = e;
	HX_STACK_LINE(290)
	return this->remove(e);
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,recycle,return )

Dynamic Scene_obj::create( ::Class classType,hx::Null< bool >  __o_addToScene){
bool addToScene = __o_addToScene.Default(true);
	HX_STACK_FRAME("Scene","create","Scene.create","com/haxepunk/Scene.hx",267)
	HX_STACK_THIS(this)
	HX_STACK_ARG(classType,"classType")
	HX_STACK_ARG(addToScene,"addToScene")
{
		HX_STACK_LINE(268)
		::String className = ::Type_obj::getClassName(classType);		HX_STACK_VAR(className,"className");
		HX_STACK_LINE(269)
		Dynamic fe = this->_recycled->get(className);		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(270)
		if (((fe != null()))){
			HX_STACK_LINE(272)
			this->_recycled->set(className,fe->__Field(HX_CSTRING("_recycleNext"),true));
			HX_STACK_LINE(273)
			fe->__FieldRef(HX_CSTRING("_recycleNext")) = null();
		}
		else{
			HX_STACK_LINE(275)
			fe = ::Type_obj::createInstance(classType,Dynamic( Array_obj<Dynamic>::__new()));
		}
		HX_STACK_LINE(276)
		Dynamic e = fe;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(277)
		if ((addToScene)){
			HX_STACK_LINE(277)
			return this->add(e);
		}
		HX_STACK_LINE(278)
		return e;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,create,return )

::com::haxepunk::Entity Scene_obj::addMask( ::com::haxepunk::Mask mask,::String type,hx::Null< int >  __o_x,hx::Null< int >  __o_y){
int x = __o_x.Default(0);
int y = __o_y.Default(0);
	HX_STACK_FRAME("Scene","addMask","Scene.addMask","com/haxepunk/Scene.hx",253)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(254)
		::com::haxepunk::Entity e = ::com::haxepunk::Entity_obj::__new(x,y,null(),mask);		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(255)
		if (((type != HX_CSTRING("")))){
			HX_STACK_LINE(255)
			e->set_type(type);
		}
		HX_STACK_LINE(256)
		e->active = e->visible = false;
		HX_STACK_LINE(257)
		return this->add(e);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Scene_obj,addMask,return )

::com::haxepunk::Entity Scene_obj::addGraphic( ::com::haxepunk::Graphic graphic,hx::Null< int >  __o_layer,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
int layer = __o_layer.Default(10);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_FRAME("Scene","addGraphic","Scene.addGraphic","com/haxepunk/Scene.hx",237)
	HX_STACK_THIS(this)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_ARG(layer,"layer")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(238)
		::com::haxepunk::Entity e = ::com::haxepunk::Entity_obj::__new(x,y,graphic,null());		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(239)
		if (((layer != (int)10))){
			HX_STACK_LINE(239)
			e->set_layer(layer);
		}
		HX_STACK_LINE(240)
		e->active = false;
		HX_STACK_LINE(241)
		return this->add(e);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Scene_obj,addGraphic,return )

Void Scene_obj::removeList( Dynamic list){
{
		HX_STACK_FRAME("Scene","removeList","Scene.removeList","com/haxepunk/Scene.hx",225)
		HX_STACK_THIS(this)
		HX_STACK_ARG(list,"list")
		HX_STACK_LINE(225)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(list->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			Dynamic e = __it->next();
			this->remove(e);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeList,(void))

Void Scene_obj::addList( Dynamic list){
{
		HX_STACK_FRAME("Scene","addList","Scene.addList","com/haxepunk/Scene.hx",216)
		HX_STACK_THIS(this)
		HX_STACK_ARG(list,"list")
		HX_STACK_LINE(216)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(list->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			Dynamic e = __it->next();
			this->add(e);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addList,(void))

Void Scene_obj::removeAll( ){
{
		HX_STACK_FRAME("Scene","removeAll","Scene.removeAll","com/haxepunk/Scene.hx",201)
		HX_STACK_THIS(this)
		HX_STACK_LINE(202)
		Dynamic fe = this->_updateFirst;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(203)
		while(((fe != null()))){
			HX_STACK_LINE(205)
			this->_remove[this->_remove->length] = hx::TCast< com::haxepunk::Entity >::cast(fe);
			HX_STACK_LINE(206)
			fe = fe->__Field(HX_CSTRING("_updateNext"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,removeAll,(void))

Dynamic Scene_obj::remove( Dynamic e){
	HX_STACK_FRAME("Scene","remove","Scene.remove","com/haxepunk/Scene.hx",192)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(193)
	this->_remove[this->_remove->length] = e;
	HX_STACK_LINE(194)
	return e;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,remove,return )

Dynamic Scene_obj::add( Dynamic e){
	HX_STACK_FRAME("Scene","add","Scene.add","com/haxepunk/Scene.hx",181)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(182)
	this->_add[this->_add->length] = e;
	HX_STACK_LINE(183)
	return e;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,add,return )

::flash::display::Sprite Scene_obj::get_sprite( ){
	HX_STACK_FRAME("Scene","get_sprite","Scene.get_sprite","com/haxepunk/Scene.hx",172)
	HX_STACK_THIS(this)
	HX_STACK_LINE(172)
	return this->_sprite;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_sprite,return )

int Scene_obj::get_mouseY( ){
	HX_STACK_FRAME("Scene","get_mouseY","Scene.get_mouseY","com/haxepunk/Scene.hx",163)
	HX_STACK_THIS(this)
	HX_STACK_LINE(163)
	return ::Std_obj::_int((::com::haxepunk::HXP_obj::screen->get_mouseY() + this->camera->y));
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_mouseY,return )

int Scene_obj::get_mouseX( ){
	HX_STACK_FRAME("Scene","get_mouseX","Scene.get_mouseX","com/haxepunk/Scene.hx",154)
	HX_STACK_THIS(this)
	HX_STACK_LINE(154)
	return ::Std_obj::_int((::com::haxepunk::HXP_obj::screen->get_mouseX() + this->camera->x));
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_mouseX,return )

Void Scene_obj::render( ){
{
		HX_STACK_FRAME("Scene","render","Scene.render","com/haxepunk/Scene.hx",116)
		HX_STACK_THIS(this)
		HX_STACK_LINE(118)
		if ((this->_layerSort)){
			HX_STACK_LINE(120)
			if (((this->_layerList->length > (int)1))){
				HX_STACK_LINE(120)
				this->_layerList->sort(this->layerSort_dyn());
			}
			HX_STACK_LINE(121)
			this->_layerSort = false;
		}
		HX_STACK_LINE(124)
		if (((((int(::com::haxepunk::HXP_obj::renderMode) & int((int((int)1) << int(::com::haxepunk::RenderMode_obj::HARDWARE->__Index()))))) != (int)0))){
			HX_STACK_LINE(126)
			this->clearSprites();
			HX_STACK_LINE(127)
			::com::haxepunk::graphics::atlas::AtlasData_obj::_scene = hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(131)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(131)
		Dynamic fe;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(133)
		int i = this->_layerList->length;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(134)
		while((((i)-- > (int)0))){
			HX_STACK_LINE(136)
			fe = this->_renderLast->get(this->_layerList->__get(i));
			HX_STACK_LINE(137)
			while(((fe != null()))){
				HX_STACK_LINE(139)
				e = hx::TCast< com::haxepunk::Entity >::cast(fe);
				HX_STACK_LINE(140)
				if ((e->visible)){
					HX_STACK_LINE(140)
					e->render();
				}
				HX_STACK_LINE(141)
				fe = fe->__Field(HX_CSTRING("_renderPrev"),true);
			}
		}
		HX_STACK_LINE(145)
		if (((((int(::com::haxepunk::HXP_obj::renderMode) & int((int((int)1) << int(::com::haxepunk::RenderMode_obj::HARDWARE->__Index()))))) != (int)0))){
			HX_STACK_LINE(145)
			if (((::com::haxepunk::graphics::atlas::AtlasData_obj::_atlases->length > (int)0))){
				HX_STACK_LINE(145)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(145)
				Array< ::Dynamic > _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_atlases;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(145)
				while(((_g < _g1->length))){
					HX_STACK_LINE(145)
					::com::haxepunk::graphics::atlas::AtlasData atlas = _g1->__get(_g).StaticCast< ::com::haxepunk::graphics::atlas::AtlasData >();		HX_STACK_VAR(atlas,"atlas");
					HX_STACK_LINE(145)
					++(_g);
					HX_STACK_LINE(145)
					{
						HX_STACK_LINE(145)
						::com::haxepunk::graphics::atlas::Layer l;		HX_STACK_VAR(l,"l");
						HX_STACK_LINE(145)
						for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(atlas->_layers->keys());  __it->hasNext(); ){
							int layer = __it->next();
							{
								HX_STACK_LINE(145)
								l = atlas->_layers->get(layer);
								HX_STACK_LINE(145)
								if ((l->dirty)){
									HX_STACK_LINE(145)
									{
										HX_STACK_LINE(145)
										if (((l->index < l->data->length))){
											HX_STACK_LINE(145)
											l->data->splice(l->index,(l->data->length - l->index));
										}
										HX_STACK_LINE(145)
										l->index = (int)0;
										HX_STACK_LINE(145)
										l->dirty = false;
									}
									HX_STACK_LINE(145)
									atlas->_tilesheet->drawTiles(::com::haxepunk::graphics::atlas::AtlasData_obj::_scene->getSpriteByLayer(layer)->get_graphics(),l->data,::com::haxepunk::graphics::atlas::Atlas_obj::smooth,atlas->_renderFlags);
								}
							}
;
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,render,(void))

Void Scene_obj::update( ){
{
		HX_STACK_FRAME("Scene","update","Scene.update","com/haxepunk/Scene.hx",93)
		HX_STACK_THIS(this)
		HX_STACK_LINE(95)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(96)
		Dynamic fe = this->_updateFirst;		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(97)
		while(((fe != null()))){
			HX_STACK_LINE(99)
			e = hx::TCast< com::haxepunk::Entity >::cast(fe);
			HX_STACK_LINE(100)
			if ((e->active)){
				HX_STACK_LINE(102)
				if ((e->get_hasTween())){
					HX_STACK_LINE(102)
					e->updateTweens();
				}
				HX_STACK_LINE(103)
				e->update();
			}
			HX_STACK_LINE(105)
			if (((bool((e->_graphic != null())) && bool(e->_graphic->active)))){
				HX_STACK_LINE(105)
				e->_graphic->update();
			}
			HX_STACK_LINE(106)
			fe = fe->__Field(HX_CSTRING("_updateNext"),true);
		}
	}
return null();
}


Void Scene_obj::focusLost( ){
{
		HX_STACK_FRAME("Scene","focusLost","Scene.focusLost","com/haxepunk/Scene.hx",85)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,focusLost,(void))

Void Scene_obj::focusGained( ){
{
		HX_STACK_FRAME("Scene","focusGained","Scene.focusGained","com/haxepunk/Scene.hx",80)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,focusGained,(void))

Void Scene_obj::end( ){
{
		HX_STACK_FRAME("Scene","end","Scene.end","com/haxepunk/Scene.hx",75)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,end,(void))

Void Scene_obj::begin( ){
{
		HX_STACK_FRAME("Scene","begin","Scene.begin","com/haxepunk/Scene.hx",70)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,begin,(void))

Float Scene_obj::squareRects( Float x1,Float y1,Float w1,Float h1,Float x2,Float y2,Float w2,Float h2){
	HX_STACK_FRAME("Scene","squareRects","Scene.squareRects","com/haxepunk/Scene.hx",1300)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(w1,"w1")
	HX_STACK_ARG(h1,"h1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(w2,"w2")
	HX_STACK_ARG(h2,"h2")
	HX_STACK_LINE(1301)
	if (((bool((x1 < (x2 + w2))) && bool((x2 < (x1 + w1)))))){
		HX_STACK_LINE(1303)
		if (((bool((y1 < (y2 + h2))) && bool((y2 < (y1 + h1)))))){
			HX_STACK_LINE(1303)
			return (int)0;
		}
		HX_STACK_LINE(1304)
		if (((y1 > y2))){
			HX_STACK_LINE(1304)
			return (((y1 - ((y2 + h2)))) * ((y1 - ((y2 + h2)))));
		}
		HX_STACK_LINE(1305)
		return (((y2 - ((y1 + h1)))) * ((y2 - ((y1 + h1)))));
	}
	HX_STACK_LINE(1307)
	if (((bool((y1 < (y2 + h2))) && bool((y2 < (y1 + h1)))))){
		HX_STACK_LINE(1309)
		if (((x1 > x2))){
			HX_STACK_LINE(1309)
			return (((x1 - ((x2 + w2)))) * ((x1 - ((x2 + w2)))));
		}
		HX_STACK_LINE(1310)
		return (((x2 - ((x1 + w1)))) * ((x2 - ((x1 + w1)))));
	}
	HX_STACK_LINE(1312)
	if (((x1 > x2))){
		HX_STACK_LINE(1314)
		if (((y1 > y2))){
			HX_STACK_LINE(1314)
			return ::com::haxepunk::Scene_obj::squarePoints(x1,y1,(x2 + w2),(y2 + h2));
		}
		HX_STACK_LINE(1315)
		return ::com::haxepunk::Scene_obj::squarePoints(x1,(y1 + h1),(x2 + w2),y2);
	}
	HX_STACK_LINE(1317)
	if (((y1 > y2))){
		HX_STACK_LINE(1317)
		return ::com::haxepunk::Scene_obj::squarePoints((x1 + w1),y1,x2,(y2 + h2));
	}
	HX_STACK_LINE(1318)
	return ::com::haxepunk::Scene_obj::squarePoints((x1 + w1),(y1 + h1),x2,y2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(Scene_obj,squareRects,return )

Float Scene_obj::squarePoints( Float x1,Float y1,Float x2,Float y2){
	HX_STACK_FRAME("Scene","squarePoints","Scene.squarePoints","com/haxepunk/Scene.hx",1324)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_LINE(1324)
	return ((((x1 - x2)) * ((x1 - x2))) + (((y1 - y2)) * ((y1 - y2))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Scene_obj,squarePoints,return )

Float Scene_obj::squarePointRect( Float px,Float py,Float rx,Float ry,Float rw,Float rh){
	HX_STACK_FRAME("Scene","squarePointRect","Scene.squarePointRect","com/haxepunk/Scene.hx",1329)
	HX_STACK_ARG(px,"px")
	HX_STACK_ARG(py,"py")
	HX_STACK_ARG(rx,"rx")
	HX_STACK_ARG(ry,"ry")
	HX_STACK_ARG(rw,"rw")
	HX_STACK_ARG(rh,"rh")
	HX_STACK_LINE(1330)
	if (((bool((px >= rx)) && bool((px <= (rx + rw)))))){
		HX_STACK_LINE(1332)
		if (((bool((py >= ry)) && bool((py <= (ry + rh)))))){
			HX_STACK_LINE(1332)
			return (int)0;
		}
		HX_STACK_LINE(1333)
		if (((py > ry))){
			HX_STACK_LINE(1333)
			return (((py - ((ry + rh)))) * ((py - ((ry + rh)))));
		}
		HX_STACK_LINE(1334)
		return (((ry - py)) * ((ry - py)));
	}
	HX_STACK_LINE(1336)
	if (((bool((py >= ry)) && bool((py <= (ry + rh)))))){
		HX_STACK_LINE(1338)
		if (((px > rx))){
			HX_STACK_LINE(1338)
			return (((px - ((rx + rw)))) * ((px - ((rx + rw)))));
		}
		HX_STACK_LINE(1339)
		return (((rx - px)) * ((rx - px)));
	}
	HX_STACK_LINE(1341)
	if (((px > rx))){
		HX_STACK_LINE(1343)
		if (((py > ry))){
			HX_STACK_LINE(1343)
			return ::com::haxepunk::Scene_obj::squarePoints(px,py,(rx + rw),(ry + rh));
		}
		HX_STACK_LINE(1344)
		return ::com::haxepunk::Scene_obj::squarePoints(px,py,(rx + rw),ry);
	}
	HX_STACK_LINE(1346)
	if (((py > ry))){
		HX_STACK_LINE(1346)
		return ::com::haxepunk::Scene_obj::squarePoints(px,py,rx,(ry + rh));
	}
	HX_STACK_LINE(1347)
	return ::com::haxepunk::Scene_obj::squarePoints(px,py,rx,ry);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Scene_obj,squarePointRect,return )


Scene_obj::Scene_obj()
{
}

void Scene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scene);
	HX_MARK_MEMBER_NAME(_entityNames,"_entityNames");
	HX_MARK_MEMBER_NAME(_recycled,"_recycled");
	HX_MARK_MEMBER_NAME(_typeCount,"_typeCount");
	HX_MARK_MEMBER_NAME(_typeFirst,"_typeFirst");
	HX_MARK_MEMBER_NAME(_classCount,"_classCount");
	HX_MARK_MEMBER_NAME(_renderLast,"_renderLast");
	HX_MARK_MEMBER_NAME(_renderFirst,"_renderFirst");
	HX_MARK_MEMBER_NAME(_layerSprites,"_layerSprites");
	HX_MARK_MEMBER_NAME(_layerCount,"_layerCount");
	HX_MARK_MEMBER_NAME(_layerList,"_layerList");
	HX_MARK_MEMBER_NAME(_layerSort,"_layerSort");
	HX_MARK_MEMBER_NAME(_sprite,"_sprite");
	HX_MARK_MEMBER_NAME(_count,"_count");
	HX_MARK_MEMBER_NAME(_updateFirst,"_updateFirst");
	HX_MARK_MEMBER_NAME(_recycle,"_recycle");
	HX_MARK_MEMBER_NAME(_remove,"_remove");
	HX_MARK_MEMBER_NAME(_add,"_add");
	HX_MARK_MEMBER_NAME(uniqueTypes,"uniqueTypes");
	HX_MARK_MEMBER_NAME(layerNearest,"layerNearest");
	HX_MARK_MEMBER_NAME(layerFarthest,"layerFarthest");
	HX_MARK_MEMBER_NAME(nearest,"nearest");
	HX_MARK_MEMBER_NAME(farthest,"farthest");
	HX_MARK_MEMBER_NAME(layers,"layers");
	HX_MARK_MEMBER_NAME(first,"first");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(mouseY,"mouseY");
	HX_MARK_MEMBER_NAME(mouseX,"mouseX");
	HX_MARK_MEMBER_NAME(camera,"camera");
	HX_MARK_MEMBER_NAME(visible,"visible");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Scene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_entityNames,"_entityNames");
	HX_VISIT_MEMBER_NAME(_recycled,"_recycled");
	HX_VISIT_MEMBER_NAME(_typeCount,"_typeCount");
	HX_VISIT_MEMBER_NAME(_typeFirst,"_typeFirst");
	HX_VISIT_MEMBER_NAME(_classCount,"_classCount");
	HX_VISIT_MEMBER_NAME(_renderLast,"_renderLast");
	HX_VISIT_MEMBER_NAME(_renderFirst,"_renderFirst");
	HX_VISIT_MEMBER_NAME(_layerSprites,"_layerSprites");
	HX_VISIT_MEMBER_NAME(_layerCount,"_layerCount");
	HX_VISIT_MEMBER_NAME(_layerList,"_layerList");
	HX_VISIT_MEMBER_NAME(_layerSort,"_layerSort");
	HX_VISIT_MEMBER_NAME(_sprite,"_sprite");
	HX_VISIT_MEMBER_NAME(_count,"_count");
	HX_VISIT_MEMBER_NAME(_updateFirst,"_updateFirst");
	HX_VISIT_MEMBER_NAME(_recycle,"_recycle");
	HX_VISIT_MEMBER_NAME(_remove,"_remove");
	HX_VISIT_MEMBER_NAME(_add,"_add");
	HX_VISIT_MEMBER_NAME(uniqueTypes,"uniqueTypes");
	HX_VISIT_MEMBER_NAME(layerNearest,"layerNearest");
	HX_VISIT_MEMBER_NAME(layerFarthest,"layerFarthest");
	HX_VISIT_MEMBER_NAME(nearest,"nearest");
	HX_VISIT_MEMBER_NAME(farthest,"farthest");
	HX_VISIT_MEMBER_NAME(layers,"layers");
	HX_VISIT_MEMBER_NAME(first,"first");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(mouseY,"mouseY");
	HX_VISIT_MEMBER_NAME(mouseX,"mouseX");
	HX_VISIT_MEMBER_NAME(camera,"camera");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Scene_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"end") ) { return end_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_add") ) { return _add; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { return inCallProp ? get_first() : first; }
		if (HX_FIELD_EQ(inName,"count") ) { return get_count(); }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_count") ) { return _count; }
		if (HX_FIELD_EQ(inName,"getAll") ) { return getAll_dyn(); }
		if (HX_FIELD_EQ(inName,"layers") ) { return inCallProp ? get_layers() : layers; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"sprite") ) { return inCallProp ? get_sprite() : sprite; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return inCallProp ? get_mouseY() : mouseY; }
		if (HX_FIELD_EQ(inName,"mouseX") ) { return inCallProp ? get_mouseX() : mouseX; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"camera") ) { return camera; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_sprite") ) { return _sprite; }
		if (HX_FIELD_EQ(inName,"_remove") ) { return _remove; }
		if (HX_FIELD_EQ(inName,"addType") ) { return addType_dyn(); }
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		if (HX_FIELD_EQ(inName,"nearest") ) { return inCallProp ? get_nearest() : nearest; }
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"addMask") ) { return addMask_dyn(); }
		if (HX_FIELD_EQ(inName,"addList") ) { return addList_dyn(); }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_recycle") ) { return _recycle; }
		if (HX_FIELD_EQ(inName,"getLayer") ) { return getLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"getClass") ) { return getClass_dyn(); }
		if (HX_FIELD_EQ(inName,"farthest") ) { return inCallProp ? get_farthest() : farthest; }
		if (HX_FIELD_EQ(inName,"isAtBack") ) { return isAtBack_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_recycled") ) { return _recycled; }
		if (HX_FIELD_EQ(inName,"addRender") ) { return addRender_dyn(); }
		if (HX_FIELD_EQ(inName,"addUpdate") ) { return addUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"layerSort") ) { return layerSort_dyn(); }
		if (HX_FIELD_EQ(inName,"layerLast") ) { return layerLast_dyn(); }
		if (HX_FIELD_EQ(inName,"typeFirst") ) { return typeFirst_dyn(); }
		if (HX_FIELD_EQ(inName,"get_first") ) { return get_first_dyn(); }
		if (HX_FIELD_EQ(inName,"typeCount") ) { return typeCount_dyn(); }
		if (HX_FIELD_EQ(inName,"get_count") ) { return get_count_dyn(); }
		if (HX_FIELD_EQ(inName,"isAtFront") ) { return isAtFront_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		if (HX_FIELD_EQ(inName,"focusLost") ) { return focusLost_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_typeCount") ) { return _typeCount; }
		if (HX_FIELD_EQ(inName,"_typeFirst") ) { return _typeFirst; }
		if (HX_FIELD_EQ(inName,"_layerList") ) { return _layerList; }
		if (HX_FIELD_EQ(inName,"_layerSort") ) { return _layerSort; }
		if (HX_FIELD_EQ(inName,"removeType") ) { return removeType_dyn(); }
		if (HX_FIELD_EQ(inName,"layerFirst") ) { return layerFirst_dyn(); }
		if (HX_FIELD_EQ(inName,"classFirst") ) { return classFirst_dyn(); }
		if (HX_FIELD_EQ(inName,"get_layers") ) { return get_layers_dyn(); }
		if (HX_FIELD_EQ(inName,"layerCount") ) { return layerCount_dyn(); }
		if (HX_FIELD_EQ(inName,"classCount") ) { return classCount_dyn(); }
		if (HX_FIELD_EQ(inName,"sendToBack") ) { return sendToBack_dyn(); }
		if (HX_FIELD_EQ(inName,"addGraphic") ) { return addGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"removeList") ) { return removeList_dyn(); }
		if (HX_FIELD_EQ(inName,"get_sprite") ) { return get_sprite_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"squareRects") ) { return squareRects_dyn(); }
		if (HX_FIELD_EQ(inName,"_classCount") ) { return _classCount; }
		if (HX_FIELD_EQ(inName,"_renderLast") ) { return _renderLast; }
		if (HX_FIELD_EQ(inName,"_layerCount") ) { return _layerCount; }
		if (HX_FIELD_EQ(inName,"updateLists") ) { return updateLists_dyn(); }
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
		if (HX_FIELD_EQ(inName,"uniqueTypes") ) { return inCallProp ? get_uniqueTypes() : uniqueTypes; }
		if (HX_FIELD_EQ(inName,"get_nearest") ) { return get_nearest_dyn(); }
		if (HX_FIELD_EQ(inName,"collideLine") ) { return collideLine_dyn(); }
		if (HX_FIELD_EQ(inName,"collideRect") ) { return collideRect_dyn(); }
		if (HX_FIELD_EQ(inName,"focusGained") ) { return focusGained_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"squarePoints") ) { return squarePoints_dyn(); }
		if (HX_FIELD_EQ(inName,"_entityNames") ) { return _entityNames; }
		if (HX_FIELD_EQ(inName,"_renderFirst") ) { return _renderFirst; }
		if (HX_FIELD_EQ(inName,"_updateFirst") ) { return _updateFirst; }
		if (HX_FIELD_EQ(inName,"registerName") ) { return registerName_dyn(); }
		if (HX_FIELD_EQ(inName,"removeRender") ) { return removeRender_dyn(); }
		if (HX_FIELD_EQ(inName,"removeUpdate") ) { return removeUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"clearSprites") ) { return clearSprites_dyn(); }
		if (HX_FIELD_EQ(inName,"layerNearest") ) { return inCallProp ? get_layerNearest() : layerNearest; }
		if (HX_FIELD_EQ(inName,"get_farthest") ) { return get_farthest_dyn(); }
		if (HX_FIELD_EQ(inName,"collidePoint") ) { return collidePoint_dyn(); }
		if (HX_FIELD_EQ(inName,"sendBackward") ) { return sendBackward_dyn(); }
		if (HX_FIELD_EQ(inName,"bringForward") ) { return bringForward_dyn(); }
		if (HX_FIELD_EQ(inName,"bringToFront") ) { return bringToFront_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_layerSprites") ) { return _layerSprites; }
		if (HX_FIELD_EQ(inName,"layerFarthest") ) { return inCallProp ? get_layerFarthest() : layerFarthest; }
		if (HX_FIELD_EQ(inName,"nearestToRect") ) { return nearestToRect_dyn(); }
		if (HX_FIELD_EQ(inName,"clearRecycled") ) { return clearRecycled_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"unregisterName") ) { return unregisterName_dyn(); }
		if (HX_FIELD_EQ(inName,"nearestToPoint") ) { return nearestToPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"nearestToClass") ) { return nearestToClass_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"squarePointRect") ) { return squarePointRect_dyn(); }
		if (HX_FIELD_EQ(inName,"get_uniqueTypes") ) { return get_uniqueTypes_dyn(); }
		if (HX_FIELD_EQ(inName,"nearestToEntity") ) { return nearestToEntity_dyn(); }
		if (HX_FIELD_EQ(inName,"collideRectInto") ) { return collideRectInto_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_layerNearest") ) { return get_layerNearest_dyn(); }
		if (HX_FIELD_EQ(inName,"getSpriteByLayer") ) { return getSpriteByLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"collidePointInto") ) { return collidePointInto_dyn(); }
		if (HX_FIELD_EQ(inName,"clearRecycledAll") ) { return clearRecycledAll_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_layerFarthest") ) { return get_layerFarthest_dyn(); }
		if (HX_FIELD_EQ(inName,"collideCircleInto") ) { return collideCircleInto_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Scene_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_add") ) { _add=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { first=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_count") ) { _count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layers") ) { layers=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { mouseY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseX") ) { mouseX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camera") ) { camera=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_sprite") ) { _sprite=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_remove") ) { _remove=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nearest") ) { nearest=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_recycle") ) { _recycle=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"farthest") ) { farthest=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_recycled") ) { _recycled=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_typeCount") ) { _typeCount=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_typeFirst") ) { _typeFirst=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layerList") ) { _layerList=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layerSort") ) { _layerSort=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_classCount") ) { _classCount=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderLast") ) { _renderLast=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layerCount") ) { _layerCount=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uniqueTypes") ) { uniqueTypes=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_entityNames") ) { _entityNames=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderFirst") ) { _renderFirst=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updateFirst") ) { _updateFirst=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layerNearest") ) { layerNearest=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_layerSprites") ) { _layerSprites=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layerFarthest") ) { layerFarthest=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Scene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_entityNames"));
	outFields->push(HX_CSTRING("_recycled"));
	outFields->push(HX_CSTRING("_typeCount"));
	outFields->push(HX_CSTRING("_typeFirst"));
	outFields->push(HX_CSTRING("_classCount"));
	outFields->push(HX_CSTRING("_renderLast"));
	outFields->push(HX_CSTRING("_renderFirst"));
	outFields->push(HX_CSTRING("_layerSprites"));
	outFields->push(HX_CSTRING("_layerCount"));
	outFields->push(HX_CSTRING("_layerList"));
	outFields->push(HX_CSTRING("_layerSort"));
	outFields->push(HX_CSTRING("_sprite"));
	outFields->push(HX_CSTRING("_count"));
	outFields->push(HX_CSTRING("_updateFirst"));
	outFields->push(HX_CSTRING("_recycle"));
	outFields->push(HX_CSTRING("_remove"));
	outFields->push(HX_CSTRING("_add"));
	outFields->push(HX_CSTRING("uniqueTypes"));
	outFields->push(HX_CSTRING("layerNearest"));
	outFields->push(HX_CSTRING("layerFarthest"));
	outFields->push(HX_CSTRING("nearest"));
	outFields->push(HX_CSTRING("farthest"));
	outFields->push(HX_CSTRING("layers"));
	outFields->push(HX_CSTRING("first"));
	outFields->push(HX_CSTRING("count"));
	outFields->push(HX_CSTRING("sprite"));
	outFields->push(HX_CSTRING("mouseY"));
	outFields->push(HX_CSTRING("mouseX"));
	outFields->push(HX_CSTRING("camera"));
	outFields->push(HX_CSTRING("visible"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("squareRects"),
	HX_CSTRING("squarePoints"),
	HX_CSTRING("squarePointRect"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_entityNames"),
	HX_CSTRING("_recycled"),
	HX_CSTRING("_typeCount"),
	HX_CSTRING("_typeFirst"),
	HX_CSTRING("_classCount"),
	HX_CSTRING("_renderLast"),
	HX_CSTRING("_renderFirst"),
	HX_CSTRING("_layerSprites"),
	HX_CSTRING("_layerCount"),
	HX_CSTRING("_layerList"),
	HX_CSTRING("_layerSort"),
	HX_CSTRING("_sprite"),
	HX_CSTRING("_count"),
	HX_CSTRING("_updateFirst"),
	HX_CSTRING("_recycle"),
	HX_CSTRING("_remove"),
	HX_CSTRING("_add"),
	HX_CSTRING("unregisterName"),
	HX_CSTRING("registerName"),
	HX_CSTRING("removeType"),
	HX_CSTRING("addType"),
	HX_CSTRING("removeRender"),
	HX_CSTRING("addRender"),
	HX_CSTRING("removeUpdate"),
	HX_CSTRING("addUpdate"),
	HX_CSTRING("clearSprites"),
	HX_CSTRING("layerSort"),
	HX_CSTRING("updateLists"),
	HX_CSTRING("getInstance"),
	HX_CSTRING("getAll"),
	HX_CSTRING("getLayer"),
	HX_CSTRING("getClass"),
	HX_CSTRING("getType"),
	HX_CSTRING("get_uniqueTypes"),
	HX_CSTRING("uniqueTypes"),
	HX_CSTRING("get_layerNearest"),
	HX_CSTRING("layerNearest"),
	HX_CSTRING("get_layerFarthest"),
	HX_CSTRING("layerFarthest"),
	HX_CSTRING("get_nearest"),
	HX_CSTRING("nearest"),
	HX_CSTRING("get_farthest"),
	HX_CSTRING("farthest"),
	HX_CSTRING("getSpriteByLayer"),
	HX_CSTRING("layerLast"),
	HX_CSTRING("layerFirst"),
	HX_CSTRING("classFirst"),
	HX_CSTRING("typeFirst"),
	HX_CSTRING("get_layers"),
	HX_CSTRING("layers"),
	HX_CSTRING("get_first"),
	HX_CSTRING("first"),
	HX_CSTRING("layerCount"),
	HX_CSTRING("classCount"),
	HX_CSTRING("typeCount"),
	HX_CSTRING("get_count"),
	HX_CSTRING("nearestToPoint"),
	HX_CSTRING("nearestToClass"),
	HX_CSTRING("nearestToEntity"),
	HX_CSTRING("nearestToRect"),
	HX_CSTRING("collidePointInto"),
	HX_CSTRING("collideCircleInto"),
	HX_CSTRING("collideRectInto"),
	HX_CSTRING("collideLine"),
	HX_CSTRING("collidePoint"),
	HX_CSTRING("collideRect"),
	HX_CSTRING("isAtBack"),
	HX_CSTRING("isAtFront"),
	HX_CSTRING("sendBackward"),
	HX_CSTRING("bringForward"),
	HX_CSTRING("sendToBack"),
	HX_CSTRING("bringToFront"),
	HX_CSTRING("clearRecycledAll"),
	HX_CSTRING("clearRecycled"),
	HX_CSTRING("recycle"),
	HX_CSTRING("create"),
	HX_CSTRING("addMask"),
	HX_CSTRING("addGraphic"),
	HX_CSTRING("removeList"),
	HX_CSTRING("addList"),
	HX_CSTRING("removeAll"),
	HX_CSTRING("remove"),
	HX_CSTRING("add"),
	HX_CSTRING("get_sprite"),
	HX_CSTRING("sprite"),
	HX_CSTRING("get_mouseY"),
	HX_CSTRING("mouseY"),
	HX_CSTRING("get_mouseX"),
	HX_CSTRING("mouseX"),
	HX_CSTRING("render"),
	HX_CSTRING("update"),
	HX_CSTRING("focusLost"),
	HX_CSTRING("focusGained"),
	HX_CSTRING("end"),
	HX_CSTRING("begin"),
	HX_CSTRING("camera"),
	HX_CSTRING("visible"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
};

#endif

Class Scene_obj::__mClass;

void Scene_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.Scene"), hx::TCanCast< Scene_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void Scene_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
