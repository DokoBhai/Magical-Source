// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_flxanimate_data_AnimationData
#include <flxanimate/data/AnimationData.h>
#endif
#ifndef INCLUDED_flxanimate_data__AnimationData_GradientEntry_Impl_
#include <flxanimate/data/_AnimationData/GradientEntry_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c7adcede301cc36b_942_get_R,"flxanimate.data._AnimationData.GradientEntry_Impl_","get_R",0xcc18f4e3,"flxanimate.data._AnimationData.GradientEntry_Impl_.get_R","flxanimate/data/AnimationData.hx",942,0xa9372435)
static const ::String _hx_array_data_acb1c8a8_1[] = {
	HX_("R",52,00,00,00),HX_("ratio",0b,35,24,e4),
};
HX_LOCAL_STACK_FRAME(_hx_pos_c7adcede301cc36b_946_get_C,"flxanimate.data._AnimationData.GradientEntry_Impl_","get_C",0xcc18f4d4,"flxanimate.data._AnimationData.GradientEntry_Impl_.get_C","flxanimate/data/AnimationData.hx",946,0xa9372435)
static const ::String _hx_array_data_acb1c8a8_3[] = {
	HX_("C",43,00,00,00),HX_("color",63,71,5c,4a),
};
HX_LOCAL_STACK_FRAME(_hx_pos_c7adcede301cc36b_950_get_A,"flxanimate.data._AnimationData.GradientEntry_Impl_","get_A",0xcc18f4d2,"flxanimate.data._AnimationData.GradientEntry_Impl_.get_A","flxanimate/data/AnimationData.hx",950,0xa9372435)
static const ::String _hx_array_data_acb1c8a8_5[] = {
	HX_("A",41,00,00,00),HX_("alpha",5e,a7,96,21),
};
namespace flxanimate{
namespace data{
namespace _AnimationData{

void GradientEntry_Impl__obj::__construct() { }

Dynamic GradientEntry_Impl__obj::__CreateEmpty() { return new GradientEntry_Impl__obj; }

void *GradientEntry_Impl__obj::_hx_vtable = 0;

Dynamic GradientEntry_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GradientEntry_Impl__obj > _hx_result = new GradientEntry_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GradientEntry_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7c4fa952;
}

Float GradientEntry_Impl__obj::get_R( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_c7adcede301cc36b_942_get_R)
HXDLIN( 942)		return ( (Float)(::flxanimate::data::AnimationData_obj::setFieldBool(this1,::Array_obj< ::String >::fromData( _hx_array_data_acb1c8a8_1,2),null())) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GradientEntry_Impl__obj,get_R,return )

::String GradientEntry_Impl__obj::get_C( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_c7adcede301cc36b_946_get_C)
HXDLIN( 946)		return ( (::String)(::flxanimate::data::AnimationData_obj::setFieldBool(this1,::Array_obj< ::String >::fromData( _hx_array_data_acb1c8a8_3,2),null())) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GradientEntry_Impl__obj,get_C,return )

Float GradientEntry_Impl__obj::get_A( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_c7adcede301cc36b_950_get_A)
HXDLIN( 950)		return ( (Float)(::flxanimate::data::AnimationData_obj::setFieldBool(this1,::Array_obj< ::String >::fromData( _hx_array_data_acb1c8a8_5,2),null())) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GradientEntry_Impl__obj,get_A,return )


GradientEntry_Impl__obj::GradientEntry_Impl__obj()
{
}

bool GradientEntry_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"get_R") ) { outValue = get_R_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_C") ) { outValue = get_C_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_A") ) { outValue = get_A_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GradientEntry_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GradientEntry_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class GradientEntry_Impl__obj::__mClass;

static ::String GradientEntry_Impl__obj_sStaticFields[] = {
	HX_("get_R",29,a5,60,91),
	HX_("get_C",1a,a5,60,91),
	HX_("get_A",18,a5,60,91),
	::String(null())
};

void GradientEntry_Impl__obj::__register()
{
	GradientEntry_Impl__obj _hx_dummy;
	GradientEntry_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flxanimate.data._AnimationData.GradientEntry_Impl_",a8,c8,b1,ac);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GradientEntry_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GradientEntry_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GradientEntry_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GradientEntry_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GradientEntry_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flxanimate
} // end namespace data
} // end namespace _AnimationData
