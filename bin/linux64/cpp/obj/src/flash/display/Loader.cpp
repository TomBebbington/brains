#include <hxcpp.h>

#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Loader
#include <flash/display/Loader.h>
#endif
#ifndef INCLUDED_flash_display_LoaderInfo
#include <flash/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
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
#ifndef INCLUDED_flash_net_URLLoader
#include <flash/net/URLLoader.h>
#endif
#ifndef INCLUDED_flash_net_URLRequest
#include <flash/net/URLRequest.h>
#endif
#ifndef INCLUDED_flash_system_LoaderContext
#include <flash/system/LoaderContext.h>
#endif
#ifndef INCLUDED_flash_utils_ByteArray
#include <flash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_flash_utils_IDataInput
#include <flash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_flash_utils_IDataOutput
#include <flash/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace flash{
namespace display{

Void Loader_obj::__construct()
{
HX_STACK_FRAME("Loader","new","Loader.new","flash/display/Loader.hx",26)
{
	HX_STACK_LINE(28)
	super::__construct();
	HX_STACK_LINE(30)
	this->contentLoaderInfo = ::flash::display::LoaderInfo_obj::create(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(31)
	this->contentLoaderInfo->__onComplete = this->__onComplete_dyn();
}
;
	return null();
}

Loader_obj::~Loader_obj() { }

Dynamic Loader_obj::__CreateEmpty() { return  new Loader_obj; }
hx::ObjectPtr< Loader_obj > Loader_obj::__new()
{  hx::ObjectPtr< Loader_obj > result = new Loader_obj();
	result->__construct();
	return result;}

Dynamic Loader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Loader_obj > result = new Loader_obj();
	result->__construct();
	return result;}

Void Loader_obj::contentLoaderInfo_onData( ::flash::events::Event event){
{
		HX_STACK_FRAME("Loader","contentLoaderInfo_onData","Loader.contentLoaderInfo_onData","flash/display/Loader.hx",130)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(132)
		event->stopImmediatePropagation();
		HX_STACK_LINE(133)
		this->__onComplete(this->contentLoaderInfo->get_bytes());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,contentLoaderInfo_onData,(void))

bool Loader_obj::__onComplete( ::flash::utils::ByteArray bytes){
	HX_STACK_FRAME("Loader","__onComplete","Loader.__onComplete","flash/display/Loader.hx",90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(92)
	if (((bytes == null()))){
		HX_STACK_LINE(94)
		return false;
	}
	HX_STACK_LINE(98)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(100)
		this->__image = ::flash::display::BitmapData_obj::loadFromBytes(bytes,null());
		HX_STACK_LINE(101)
		::flash::display::Bitmap bitmap = ::flash::display::Bitmap_obj::__new(this->__image,null(),null());		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(102)
		this->content = bitmap;
		HX_STACK_LINE(103)
		this->contentLoaderInfo->content = bitmap;
		HX_STACK_LINE(105)
		while(((this->get_numChildren() > (int)0))){
			HX_STACK_LINE(107)
			this->removeChildAt((int)0);
		}
		HX_STACK_LINE(111)
		this->addChild(bitmap);
		HX_STACK_LINE(112)
		return true;
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(116)
				return false;
			}
		}
	}
	HX_STACK_LINE(98)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,__onComplete,return )

Void Loader_obj::unload( ){
{
		HX_STACK_FRAME("Loader","unload","Loader.unload","flash/display/Loader.hx",62)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		if (((this->get_numChildren() > (int)0))){
			HX_STACK_LINE(64)
			while(((this->get_numChildren() > (int)0))){
				HX_STACK_LINE(66)
				this->removeChildAt((int)0);
			}
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(72)
				this->contentLoaderInfo->url = null();
				HX_STACK_LINE(73)
				this->contentLoaderInfo->contentType = null();
				HX_STACK_LINE(74)
				this->contentLoaderInfo->content = null();
				HX_STACK_LINE(75)
				this->contentLoaderInfo->bytesLoaded = this->contentLoaderInfo->bytesTotal = (int)0;
				HX_STACK_LINE(76)
				this->contentLoaderInfo->width = (int)0;
				HX_STACK_LINE(77)
				this->contentLoaderInfo->height = (int)0;
			}
			HX_STACK_LINE(81)
			::flash::events::Event event = ::flash::events::Event_obj::__new(::flash::events::Event_obj::UNLOAD,null(),null());		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(82)
			event->set_currentTarget(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(83)
			this->dispatchEvent(event);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,unload,(void))

Void Loader_obj::loadBytes( ::flash::utils::ByteArray bytes,::flash::system::LoaderContext context){
{
		HX_STACK_FRAME("Loader","loadBytes","Loader.loadBytes","flash/display/Loader.hx",45)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(45)
		if ((this->__onComplete(bytes))){
			HX_STACK_LINE(47)
			::flash::events::Event event = ::flash::events::Event_obj::__new(::flash::events::Event_obj::COMPLETE,null(),null());		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(48)
			event->set_currentTarget(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(49)
			this->contentLoaderInfo->dispatchEvent(event);
		}
		else{
			HX_STACK_LINE(53)
			this->contentLoaderInfo->__dispatchIOErrorEvent();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,loadBytes,(void))

Void Loader_obj::load( ::flash::net::URLRequest request,::flash::system::LoaderContext context){
{
		HX_STACK_FRAME("Loader","load","Loader.load","flash/display/Loader.hx",38)
		HX_STACK_THIS(this)
		HX_STACK_ARG(request,"request")
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(38)
		this->contentLoaderInfo->load(request);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,load,(void))


Loader_obj::Loader_obj()
{
}

void Loader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Loader);
	HX_MARK_MEMBER_NAME(__image,"__image");
	HX_MARK_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	HX_MARK_MEMBER_NAME(content,"content");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Loader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__image,"__image");
	HX_VISIT_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	HX_VISIT_MEMBER_NAME(content,"content");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Loader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__image") ) { return __image; }
		if (HX_FIELD_EQ(inName,"content") ) { return content; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__onComplete") ) { return __onComplete_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { return contentLoaderInfo; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo_onData") ) { return contentLoaderInfo_onData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Loader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__image") ) { __image=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast< ::flash::display::DisplayObject >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { contentLoaderInfo=inValue.Cast< ::flash::display::LoaderInfo >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Loader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__image"));
	outFields->push(HX_CSTRING("contentLoaderInfo"));
	outFields->push(HX_CSTRING("content"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("contentLoaderInfo_onData"),
	HX_CSTRING("__onComplete"),
	HX_CSTRING("unload"),
	HX_CSTRING("loadBytes"),
	HX_CSTRING("load"),
	HX_CSTRING("__image"),
	HX_CSTRING("contentLoaderInfo"),
	HX_CSTRING("content"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

#endif

Class Loader_obj::__mClass;

void Loader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.display.Loader"), hx::TCanCast< Loader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
);
}

void Loader_obj::__boot()
{
}

} // end namespace flash
} // end namespace display
