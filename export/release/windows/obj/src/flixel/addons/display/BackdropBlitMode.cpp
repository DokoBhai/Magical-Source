// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_display_BackdropBlitMode
#include <flixel/addons/display/BackdropBlitMode.h>
#endif
namespace flixel{
namespace addons{
namespace display{

::flixel::addons::display::BackdropBlitMode BackdropBlitMode_obj::AUTO;

::flixel::addons::display::BackdropBlitMode BackdropBlitMode_obj::MAX_TILES(int tiles)
{
	return ::hx::CreateEnum< BackdropBlitMode_obj >(HX_("MAX_TILES",2a,de,d6,cd),2,1)->_hx_init(0,tiles);
}

::flixel::addons::display::BackdropBlitMode BackdropBlitMode_obj::MAX_TILES_XY(int x,int y)
{
	return ::hx::CreateEnum< BackdropBlitMode_obj >(HX_("MAX_TILES_XY",36,3b,53,d5),1,2)->_hx_init(0,x)->_hx_init(1,y);
}

::flixel::addons::display::BackdropBlitMode BackdropBlitMode_obj::SPLIT(int portions)
{
	return ::hx::CreateEnum< BackdropBlitMode_obj >(HX_("SPLIT",ba,22,5d,ff),3,1)->_hx_init(0,portions);
}

bool BackdropBlitMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AUTO",6f,a7,37,2b)) { outValue = BackdropBlitMode_obj::AUTO; return true; }
	if (inName==HX_("MAX_TILES",2a,de,d6,cd)) { outValue = BackdropBlitMode_obj::MAX_TILES_dyn(); return true; }
	if (inName==HX_("MAX_TILES_XY",36,3b,53,d5)) { outValue = BackdropBlitMode_obj::MAX_TILES_XY_dyn(); return true; }
	if (inName==HX_("SPLIT",ba,22,5d,ff)) { outValue = BackdropBlitMode_obj::SPLIT_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(BackdropBlitMode_obj)

int BackdropBlitMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("AUTO",6f,a7,37,2b)) return 0;
	if (inName==HX_("MAX_TILES",2a,de,d6,cd)) return 2;
	if (inName==HX_("MAX_TILES_XY",36,3b,53,d5)) return 1;
	if (inName==HX_("SPLIT",ba,22,5d,ff)) return 3;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(BackdropBlitMode_obj,MAX_TILES,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(BackdropBlitMode_obj,MAX_TILES_XY,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(BackdropBlitMode_obj,SPLIT,return)

int BackdropBlitMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("AUTO",6f,a7,37,2b)) return 0;
	if (inName==HX_("MAX_TILES",2a,de,d6,cd)) return 1;
	if (inName==HX_("MAX_TILES_XY",36,3b,53,d5)) return 2;
	if (inName==HX_("SPLIT",ba,22,5d,ff)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val BackdropBlitMode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AUTO",6f,a7,37,2b)) return AUTO;
	if (inName==HX_("MAX_TILES",2a,de,d6,cd)) return MAX_TILES_dyn();
	if (inName==HX_("MAX_TILES_XY",36,3b,53,d5)) return MAX_TILES_XY_dyn();
	if (inName==HX_("SPLIT",ba,22,5d,ff)) return SPLIT_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String BackdropBlitMode_obj_sStaticFields[] = {
	HX_("AUTO",6f,a7,37,2b),
	HX_("MAX_TILES_XY",36,3b,53,d5),
	HX_("MAX_TILES",2a,de,d6,cd),
	HX_("SPLIT",ba,22,5d,ff),
	::String(null())
};

::hx::Class BackdropBlitMode_obj::__mClass;

Dynamic __Create_BackdropBlitMode_obj() { return new BackdropBlitMode_obj; }

void BackdropBlitMode_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.addons.display.BackdropBlitMode",c3,62,23,a3), ::hx::TCanCast< BackdropBlitMode_obj >,BackdropBlitMode_obj_sStaticFields,0,
	&__Create_BackdropBlitMode_obj, &__Create,
	&super::__SGetClass(), &CreateBackdropBlitMode_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &BackdropBlitMode_obj::__GetStatic;
}

void BackdropBlitMode_obj::__boot()
{
AUTO = ::hx::CreateConstEnum< BackdropBlitMode_obj >(HX_("AUTO",6f,a7,37,2b),0);
}


} // end namespace flixel
} // end namespace addons
} // end namespace display
