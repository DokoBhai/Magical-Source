// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_81bdcfb19984cb04_11_new,"openfl.errors.ArgumentError","new",0x72c6c578,"openfl.errors.ArgumentError.new","openfl/errors/ArgumentError.hx",11,0xb16d4318)
namespace openfl{
namespace errors{

void ArgumentError_obj::__construct(::String __o_message){
            		::String message = __o_message;
            		if (::hx::IsNull(__o_message)) message = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_81bdcfb19984cb04_11_new)
HXDLIN(  11)		{
HXLINE(  12)			super::__construct(message,null());
HXLINE(  14)			this->name = HX_("ArgumentError",eb,77,4b,60);
            		}
HXLINE(  11)		{
HXDLIN(  11)			this->_hx___skipStack++;
            		}
            	}

Dynamic ArgumentError_obj::__CreateEmpty() { return new ArgumentError_obj; }

void *ArgumentError_obj::_hx_vtable = 0;

Dynamic ArgumentError_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ArgumentError_obj > _hx_result = new ArgumentError_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ArgumentError_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x677ddc49) {
		if (inClassId<=(int)0x3495c9c5) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3495c9c5;
		} else {
			return inClassId==(int)0x677ddc49;
		}
	} else {
		return inClassId==(int)0x7ed4a0f0;
	}
}


::hx::ObjectPtr< ArgumentError_obj > ArgumentError_obj::__new(::String __o_message) {
	::hx::ObjectPtr< ArgumentError_obj > __this = new ArgumentError_obj();
	__this->__construct(__o_message);
	return __this;
}

::hx::ObjectPtr< ArgumentError_obj > ArgumentError_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o_message) {
	ArgumentError_obj *__this = (ArgumentError_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ArgumentError_obj), true, "openfl.errors.ArgumentError"));
	*(void **)__this = ArgumentError_obj::_hx_vtable;
	__this->__construct(__o_message);
	return __this;
}

ArgumentError_obj::ArgumentError_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ArgumentError_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ArgumentError_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ArgumentError_obj::__mClass;

void ArgumentError_obj::__register()
{
	ArgumentError_obj _hx_dummy;
	ArgumentError_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.errors.ArgumentError",86,e9,30,77);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ArgumentError_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArgumentError_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArgumentError_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace errors
