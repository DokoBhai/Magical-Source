// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_TypeError
#include <openfl/errors/TypeError.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5bc3dc96f52a961d_11_new,"openfl.errors.TypeError","new",0x4857781b,"openfl.errors.TypeError.new","openfl/errors/TypeError.hx",11,0xef0d65d5)
namespace openfl{
namespace errors{

void TypeError_obj::__construct(::String __o_message){
            		::String message = __o_message;
            		if (::hx::IsNull(__o_message)) message = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_5bc3dc96f52a961d_11_new)
HXDLIN(  11)		{
HXLINE(  12)			super::__construct(message,0);
HXLINE(  14)			this->name = HX_("TypeError",8e,06,d5,d9);
            		}
HXLINE(  11)		{
HXDLIN(  11)			this->_hx___skipStack++;
            		}
            	}

Dynamic TypeError_obj::__CreateEmpty() { return new TypeError_obj; }

void *TypeError_obj::_hx_vtable = 0;

Dynamic TypeError_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TypeError_obj > _hx_result = new TypeError_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TypeError_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3495c9c5) {
		if (inClassId<=(int)0x285b9d0f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x285b9d0f;
		} else {
			return inClassId==(int)0x3495c9c5;
		}
	} else {
		return inClassId==(int)0x677ddc49;
	}
}


::hx::ObjectPtr< TypeError_obj > TypeError_obj::__new(::String __o_message) {
	::hx::ObjectPtr< TypeError_obj > __this = new TypeError_obj();
	__this->__construct(__o_message);
	return __this;
}

::hx::ObjectPtr< TypeError_obj > TypeError_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o_message) {
	TypeError_obj *__this = (TypeError_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TypeError_obj), true, "openfl.errors.TypeError"));
	*(void **)__this = TypeError_obj::_hx_vtable;
	__this->__construct(__o_message);
	return __this;
}

TypeError_obj::TypeError_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TypeError_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TypeError_obj_sStaticStorageInfo = 0;
#endif

::hx::Class TypeError_obj::__mClass;

void TypeError_obj::__register()
{
	TypeError_obj _hx_dummy;
	TypeError_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.errors.TypeError",a9,ce,64,cd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TypeError_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TypeError_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TypeError_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace errors
