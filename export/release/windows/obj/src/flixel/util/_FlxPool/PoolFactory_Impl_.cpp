// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_util__FlxPool_PoolFactory_Impl_
#include <flixel/util/_FlxPool/PoolFactory_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b4715700ec045f9f_18_fromClass,"flixel.util._FlxPool.PoolFactory_Impl_","fromClass",0x66403e89,"flixel.util._FlxPool.PoolFactory_Impl_.fromClass","flixel/util/FlxPool.hx",18,0xdd4de86a)
HX_LOCAL_STACK_FRAME(_hx_pos_b4715700ec045f9f_24_fromFunction,"flixel.util._FlxPool.PoolFactory_Impl_","fromFunction",0x7694ed67,"flixel.util._FlxPool.PoolFactory_Impl_.fromFunction","flixel/util/FlxPool.hx",24,0xdd4de86a)
HX_LOCAL_STACK_FRAME(_hx_pos_b4715700ec045f9f_30_getFunction,"flixel.util._FlxPool.PoolFactory_Impl_","getFunction",0xde28c6a9,"flixel.util._FlxPool.PoolFactory_Impl_.getFunction","flixel/util/FlxPool.hx",30,0xdd4de86a)
namespace flixel{
namespace util{
namespace _FlxPool{

void PoolFactory_Impl__obj::__construct() { }

Dynamic PoolFactory_Impl__obj::__CreateEmpty() { return new PoolFactory_Impl__obj; }

void *PoolFactory_Impl__obj::_hx_vtable = 0;

Dynamic PoolFactory_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PoolFactory_Impl__obj > _hx_result = new PoolFactory_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PoolFactory_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4b202ac1;
}

 ::Dynamic PoolFactory_Impl__obj::fromClass(::hx::Class classRef){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::hx::Class,classRef) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_STACKFRAME(&_hx_pos_b4715700ec045f9f_18_fromClass)
HXDLIN(  18)			return ::Type_obj::createInstance(classRef,::cpp::VirtualArray_obj::__new(0));
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_b4715700ec045f9f_18_fromClass)
HXDLIN(  18)		return  ::Dynamic(new _hx_Closure_0(classRef));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PoolFactory_Impl__obj,fromClass,return )

 ::Dynamic PoolFactory_Impl__obj::fromFunction( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_b4715700ec045f9f_24_fromFunction)
HXDLIN(  24)		return func;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PoolFactory_Impl__obj,fromFunction,return )

 ::Dynamic PoolFactory_Impl__obj::getFunction( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_b4715700ec045f9f_30_getFunction)
HXDLIN(  30)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PoolFactory_Impl__obj,getFunction,return )


PoolFactory_Impl__obj::PoolFactory_Impl__obj()
{
}

bool PoolFactory_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromClass") ) { outValue = fromClass_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getFunction") ) { outValue = getFunction_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromFunction") ) { outValue = fromFunction_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PoolFactory_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PoolFactory_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class PoolFactory_Impl__obj::__mClass;

static ::String PoolFactory_Impl__obj_sStaticFields[] = {
	HX_("fromClass",6e,62,e1,fc),
	HX_("fromFunction",a2,86,69,b4),
	HX_("getFunction",ce,6d,46,3a),
	::String(null())
};

void PoolFactory_Impl__obj::__register()
{
	PoolFactory_Impl__obj _hx_dummy;
	PoolFactory_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util._FlxPool.PoolFactory_Impl_",c9,1c,a0,11);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PoolFactory_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PoolFactory_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< PoolFactory_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PoolFactory_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PoolFactory_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
} // end namespace _FlxPool
