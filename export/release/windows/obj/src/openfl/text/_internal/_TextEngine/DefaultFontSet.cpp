// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text__internal__TextEngine_DefaultFontSet
#include <openfl/text/_internal/_TextEngine/DefaultFontSet.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eeef98c53cb575cc_2014_new,"openfl.text._internal._TextEngine.DefaultFontSet","new",0xe216cf59,"openfl.text._internal._TextEngine.DefaultFontSet.new","openfl/text/_internal/TextEngine.hx",2014,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_eeef98c53cb575cc_2022_getFont,"openfl.text._internal._TextEngine.DefaultFontSet","getFont",0x27237cfe,"openfl.text._internal._TextEngine.DefaultFontSet.getFont","openfl/text/_internal/TextEngine.hx",2022,0xb85e1839)
namespace openfl{
namespace text{
namespace _internal{
namespace _TextEngine{

void DefaultFontSet_obj::__construct( ::openfl::text::Font normal, ::openfl::text::Font bold, ::openfl::text::Font italic, ::openfl::text::Font boldItalic){
            	HX_STACKFRAME(&_hx_pos_eeef98c53cb575cc_2014_new)
HXLINE(2015)		this->normal = normal;
HXLINE(2016)		this->bold = bold;
HXLINE(2017)		this->italic = italic;
HXLINE(2018)		this->boldItalic = boldItalic;
            	}

Dynamic DefaultFontSet_obj::__CreateEmpty() { return new DefaultFontSet_obj; }

void *DefaultFontSet_obj::_hx_vtable = 0;

Dynamic DefaultFontSet_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DefaultFontSet_obj > _hx_result = new DefaultFontSet_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool DefaultFontSet_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4e0ac161;
}

 ::openfl::text::Font DefaultFontSet_obj::getFont(bool isBold,bool isItalic){
            	HX_STACKFRAME(&_hx_pos_eeef98c53cb575cc_2022_getFont)
HXLINE(2023)		bool _hx_tmp;
HXDLIN(2023)		bool _hx_tmp1;
HXDLIN(2023)		if (isBold) {
HXLINE(2023)			_hx_tmp1 = isItalic;
            		}
            		else {
HXLINE(2023)			_hx_tmp1 = false;
            		}
HXDLIN(2023)		if (_hx_tmp1) {
HXLINE(2023)			_hx_tmp = ::hx::IsNotNull( this->boldItalic );
            		}
            		else {
HXLINE(2023)			_hx_tmp = false;
            		}
HXDLIN(2023)		if (_hx_tmp) {
HXLINE(2025)			return this->boldItalic;
            		}
HXLINE(2027)		bool _hx_tmp2;
HXDLIN(2027)		if (isItalic) {
HXLINE(2027)			_hx_tmp2 = ::hx::IsNotNull( this->italic );
            		}
            		else {
HXLINE(2027)			_hx_tmp2 = false;
            		}
HXDLIN(2027)		if (_hx_tmp2) {
HXLINE(2029)			return this->italic;
            		}
HXLINE(2031)		bool _hx_tmp3;
HXDLIN(2031)		if (isBold) {
HXLINE(2031)			_hx_tmp3 = ::hx::IsNotNull( this->bold );
            		}
            		else {
HXLINE(2031)			_hx_tmp3 = false;
            		}
HXDLIN(2031)		if (_hx_tmp3) {
HXLINE(2033)			return this->bold;
            		}
HXLINE(2035)		return this->normal;
            	}


HX_DEFINE_DYNAMIC_FUNC2(DefaultFontSet_obj,getFont,return )


::hx::ObjectPtr< DefaultFontSet_obj > DefaultFontSet_obj::__new( ::openfl::text::Font normal, ::openfl::text::Font bold, ::openfl::text::Font italic, ::openfl::text::Font boldItalic) {
	::hx::ObjectPtr< DefaultFontSet_obj > __this = new DefaultFontSet_obj();
	__this->__construct(normal,bold,italic,boldItalic);
	return __this;
}

::hx::ObjectPtr< DefaultFontSet_obj > DefaultFontSet_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::text::Font normal, ::openfl::text::Font bold, ::openfl::text::Font italic, ::openfl::text::Font boldItalic) {
	DefaultFontSet_obj *__this = (DefaultFontSet_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DefaultFontSet_obj), true, "openfl.text._internal._TextEngine.DefaultFontSet"));
	*(void **)__this = DefaultFontSet_obj::_hx_vtable;
	__this->__construct(normal,bold,italic,boldItalic);
	return __this;
}

DefaultFontSet_obj::DefaultFontSet_obj()
{
}

void DefaultFontSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefaultFontSet);
	HX_MARK_MEMBER_NAME(bold,"bold");
	HX_MARK_MEMBER_NAME(boldItalic,"boldItalic");
	HX_MARK_MEMBER_NAME(italic,"italic");
	HX_MARK_MEMBER_NAME(normal,"normal");
	HX_MARK_END_CLASS();
}

void DefaultFontSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bold,"bold");
	HX_VISIT_MEMBER_NAME(boldItalic,"boldItalic");
	HX_VISIT_MEMBER_NAME(italic,"italic");
	HX_VISIT_MEMBER_NAME(normal,"normal");
}

::hx::Val DefaultFontSet_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bold") ) { return ::hx::Val( bold ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { return ::hx::Val( italic ); }
		if (HX_FIELD_EQ(inName,"normal") ) { return ::hx::Val( normal ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { return ::hx::Val( getFont_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"boldItalic") ) { return ::hx::Val( boldItalic ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DefaultFontSet_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bold") ) { bold=inValue.Cast<  ::openfl::text::Font >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { italic=inValue.Cast<  ::openfl::text::Font >(); return inValue; }
		if (HX_FIELD_EQ(inName,"normal") ) { normal=inValue.Cast<  ::openfl::text::Font >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"boldItalic") ) { boldItalic=inValue.Cast<  ::openfl::text::Font >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DefaultFontSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bold",85,81,1b,41));
	outFields->push(HX_("boldItalic",55,96,d1,ad));
	outFields->push(HX_("italic",f0,2e,64,06));
	outFields->push(HX_("normal",27,72,69,30));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DefaultFontSet_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::text::Font */ ,(int)offsetof(DefaultFontSet_obj,bold),HX_("bold",85,81,1b,41)},
	{::hx::fsObject /*  ::openfl::text::Font */ ,(int)offsetof(DefaultFontSet_obj,boldItalic),HX_("boldItalic",55,96,d1,ad)},
	{::hx::fsObject /*  ::openfl::text::Font */ ,(int)offsetof(DefaultFontSet_obj,italic),HX_("italic",f0,2e,64,06)},
	{::hx::fsObject /*  ::openfl::text::Font */ ,(int)offsetof(DefaultFontSet_obj,normal),HX_("normal",27,72,69,30)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DefaultFontSet_obj_sStaticStorageInfo = 0;
#endif

static ::String DefaultFontSet_obj_sMemberFields[] = {
	HX_("bold",85,81,1b,41),
	HX_("boldItalic",55,96,d1,ad),
	HX_("italic",f0,2e,64,06),
	HX_("normal",27,72,69,30),
	HX_("getFont",85,0d,43,16),
	::String(null()) };

::hx::Class DefaultFontSet_obj::__mClass;

void DefaultFontSet_obj::__register()
{
	DefaultFontSet_obj _hx_dummy;
	DefaultFontSet_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.text._internal._TextEngine.DefaultFontSet",e7,2e,1c,95);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DefaultFontSet_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DefaultFontSet_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DefaultFontSet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DefaultFontSet_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace text
} // end namespace _internal
} // end namespace _TextEngine
