// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_crowplexus_hscript__Interp_Stop
#include <crowplexus/hscript/_Interp/Stop.h>
#endif
namespace crowplexus{
namespace hscript{
namespace _Interp{

::crowplexus::hscript::_Interp::Stop Stop_obj::SBreak;

::crowplexus::hscript::_Interp::Stop Stop_obj::SContinue;

::crowplexus::hscript::_Interp::Stop Stop_obj::SReturn;

bool Stop_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("SBreak",6c,87,b8,7b)) { outValue = Stop_obj::SBreak; return true; }
	if (inName==HX_("SContinue",da,a7,bf,6f)) { outValue = Stop_obj::SContinue; return true; }
	if (inName==HX_("SReturn",63,99,37,b9)) { outValue = Stop_obj::SReturn; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Stop_obj)

int Stop_obj::__FindIndex(::String inName)
{
	if (inName==HX_("SBreak",6c,87,b8,7b)) return 0;
	if (inName==HX_("SContinue",da,a7,bf,6f)) return 1;
	if (inName==HX_("SReturn",63,99,37,b9)) return 2;
	return super::__FindIndex(inName);
}

int Stop_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("SBreak",6c,87,b8,7b)) return 0;
	if (inName==HX_("SContinue",da,a7,bf,6f)) return 0;
	if (inName==HX_("SReturn",63,99,37,b9)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Stop_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("SBreak",6c,87,b8,7b)) return SBreak;
	if (inName==HX_("SContinue",da,a7,bf,6f)) return SContinue;
	if (inName==HX_("SReturn",63,99,37,b9)) return SReturn;
	return super::__Field(inName,inCallProp);
}

static ::String Stop_obj_sStaticFields[] = {
	HX_("SBreak",6c,87,b8,7b),
	HX_("SContinue",da,a7,bf,6f),
	HX_("SReturn",63,99,37,b9),
	::String(null())
};

::hx::Class Stop_obj::__mClass;

Dynamic __Create_Stop_obj() { return new Stop_obj; }

void Stop_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("crowplexus.hscript._Interp.Stop",02,46,db,8d), ::hx::TCanCast< Stop_obj >,Stop_obj_sStaticFields,0,
	&__Create_Stop_obj, &__Create,
	&super::__SGetClass(), &CreateStop_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Stop_obj::__GetStatic;
}

void Stop_obj::__boot()
{
SBreak = ::hx::CreateConstEnum< Stop_obj >(HX_("SBreak",6c,87,b8,7b),0);
SContinue = ::hx::CreateConstEnum< Stop_obj >(HX_("SContinue",da,a7,bf,6f),1);
SReturn = ::hx::CreateConstEnum< Stop_obj >(HX_("SReturn",63,99,37,b9),2);
}


} // end namespace crowplexus
} // end namespace hscript
} // end namespace _Interp
