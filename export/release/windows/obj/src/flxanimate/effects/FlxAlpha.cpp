// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_flxanimate_effects_FlxAlpha
#include <flxanimate/effects/FlxAlpha.h>
#endif
#ifndef INCLUDED_flxanimate_effects_FlxColorEffect
#include <flxanimate/effects/FlxColorEffect.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e8a03002fe0cf485_8_new,"flxanimate.effects.FlxAlpha","new",0x73893229,"flxanimate.effects.FlxAlpha.new","flxanimate/effects/FlxAlpha.hx",8,0x24a417a5)
HX_LOCAL_STACK_FRAME(_hx_pos_e8a03002fe0cf485_16_process,"flxanimate.effects.FlxAlpha","process",0x3ccf1cb8,"flxanimate.effects.FlxAlpha.process","flxanimate/effects/FlxAlpha.hx",16,0x24a417a5)
HX_LOCAL_STACK_FRAME(_hx_pos_e8a03002fe0cf485_19_set_alpha,"flxanimate.effects.FlxAlpha","set_alpha",0xd9df4e4a,"flxanimate.effects.FlxAlpha.set_alpha","flxanimate/effects/FlxAlpha.hx",19,0x24a417a5)
namespace flxanimate{
namespace effects{

void FlxAlpha_obj::__construct(Float alpha){
            	HX_STACKFRAME(&_hx_pos_e8a03002fe0cf485_8_new)
HXLINE(   9)		this->set_alpha(alpha);
HXLINE(  11)		super::__construct();
            	}

Dynamic FlxAlpha_obj::__CreateEmpty() { return new FlxAlpha_obj; }

void *FlxAlpha_obj::_hx_vtable = 0;

Dynamic FlxAlpha_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxAlpha_obj > _hx_result = new FlxAlpha_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxAlpha_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4fae23f1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4fae23f1;
	} else {
		return inClassId==(int)0x7febcda3;
	}
}

void FlxAlpha_obj::process(){
            	HX_STACKFRAME(&_hx_pos_e8a03002fe0cf485_16_process)
HXDLIN(  16)		this->c_Transform->alphaMultiplier = this->alpha;
            	}


Float FlxAlpha_obj::set_alpha(Float value){
            	HX_STACKFRAME(&_hx_pos_e8a03002fe0cf485_19_set_alpha)
HXLINE(  20)		if ((this->alpha != value)) {
HXLINE(  20)			this->renderDirty = true;
            		}
HXLINE(  22)		return (this->alpha = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxAlpha_obj,set_alpha,return )


::hx::ObjectPtr< FlxAlpha_obj > FlxAlpha_obj::__new(Float alpha) {
	::hx::ObjectPtr< FlxAlpha_obj > __this = new FlxAlpha_obj();
	__this->__construct(alpha);
	return __this;
}

::hx::ObjectPtr< FlxAlpha_obj > FlxAlpha_obj::__alloc(::hx::Ctx *_hx_ctx,Float alpha) {
	FlxAlpha_obj *__this = (FlxAlpha_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxAlpha_obj), true, "flxanimate.effects.FlxAlpha"));
	*(void **)__this = FlxAlpha_obj::_hx_vtable;
	__this->__construct(alpha);
	return __this;
}

FlxAlpha_obj::FlxAlpha_obj()
{
}

::hx::Val FlxAlpha_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return ::hx::Val( alpha ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"process") ) { return ::hx::Val( process_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return ::hx::Val( set_alpha_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxAlpha_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alpha(inValue.Cast< Float >()) );alpha=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAlpha_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("alpha",5e,a7,96,21));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxAlpha_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(FlxAlpha_obj,alpha),HX_("alpha",5e,a7,96,21)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxAlpha_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxAlpha_obj_sMemberFields[] = {
	HX_("alpha",5e,a7,96,21),
	HX_("process",6f,a2,4a,f1),
	HX_("set_alpha",c1,ef,90,48),
	::String(null()) };

::hx::Class FlxAlpha_obj::__mClass;

void FlxAlpha_obj::__register()
{
	FlxAlpha_obj _hx_dummy;
	FlxAlpha_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flxanimate.effects.FlxAlpha",b7,e9,50,b1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxAlpha_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxAlpha_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAlpha_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAlpha_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flxanimate
} // end namespace effects
