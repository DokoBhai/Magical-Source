// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_crowplexus_hscript_Expr
#include <crowplexus/hscript/Expr.h>
#endif
#ifndef INCLUDED_crowplexus_hscript_SwitchCase
#include <crowplexus/hscript/SwitchCase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_67ec89ecb84ac291_101_new,"crowplexus.hscript.SwitchCase","new",0xc9ca283b,"crowplexus.hscript.SwitchCase.new","crowplexus/hscript/Expr.hx",101,0x8be9fac2)
HX_LOCAL_STACK_FRAME(_hx_pos_67ec89ecb84ac291_107_toString,"crowplexus.hscript.SwitchCase","toString",0xffc51ef1,"crowplexus.hscript.SwitchCase.toString","crowplexus/hscript/Expr.hx",107,0x8be9fac2)
namespace crowplexus{
namespace hscript{

void SwitchCase_obj::__construct(::Array< ::Dynamic> values, ::crowplexus::hscript::Expr expr, ::crowplexus::hscript::Expr ifExpr){
            	HX_STACKFRAME(&_hx_pos_67ec89ecb84ac291_101_new)
HXDLIN( 101)		this->values = values;
HXDLIN( 101)		this->expr = expr;
HXDLIN( 101)		this->ifExpr = ifExpr;
            	}

Dynamic SwitchCase_obj::__CreateEmpty() { return new SwitchCase_obj; }

void *SwitchCase_obj::_hx_vtable = 0;

Dynamic SwitchCase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SwitchCase_obj > _hx_result = new SwitchCase_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool SwitchCase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x071a0c33;
}

::String SwitchCase_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_67ec89ecb84ac291_107_toString)
HXDLIN( 107)		return ::Std_obj::string( ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("ifExpr",b2,37,4f,e4),this->ifExpr)
            			->setFixed(1,HX_("expr",35,fd,1d,43),this->expr)
            			->setFixed(2,HX_("values",e2,03,b7,4f),this->values)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(SwitchCase_obj,toString,return )


::hx::ObjectPtr< SwitchCase_obj > SwitchCase_obj::__new(::Array< ::Dynamic> values, ::crowplexus::hscript::Expr expr, ::crowplexus::hscript::Expr ifExpr) {
	::hx::ObjectPtr< SwitchCase_obj > __this = new SwitchCase_obj();
	__this->__construct(values,expr,ifExpr);
	return __this;
}

::hx::ObjectPtr< SwitchCase_obj > SwitchCase_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> values, ::crowplexus::hscript::Expr expr, ::crowplexus::hscript::Expr ifExpr) {
	SwitchCase_obj *__this = (SwitchCase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SwitchCase_obj), true, "crowplexus.hscript.SwitchCase"));
	*(void **)__this = SwitchCase_obj::_hx_vtable;
	__this->__construct(values,expr,ifExpr);
	return __this;
}

SwitchCase_obj::SwitchCase_obj()
{
}

void SwitchCase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SwitchCase);
	HX_MARK_MEMBER_NAME(values,"values");
	HX_MARK_MEMBER_NAME(expr,"expr");
	HX_MARK_MEMBER_NAME(ifExpr,"ifExpr");
	HX_MARK_END_CLASS();
}

void SwitchCase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(values,"values");
	HX_VISIT_MEMBER_NAME(expr,"expr");
	HX_VISIT_MEMBER_NAME(ifExpr,"ifExpr");
}

::hx::Val SwitchCase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"expr") ) { return ::hx::Val( expr ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { return ::hx::Val( values ); }
		if (HX_FIELD_EQ(inName,"ifExpr") ) { return ::hx::Val( ifExpr ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SwitchCase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"expr") ) { expr=inValue.Cast<  ::crowplexus::hscript::Expr >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { values=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ifExpr") ) { ifExpr=inValue.Cast<  ::crowplexus::hscript::Expr >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SwitchCase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("values",e2,03,b7,4f));
	outFields->push(HX_("expr",35,fd,1d,43));
	outFields->push(HX_("ifExpr",b2,37,4f,e4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SwitchCase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(SwitchCase_obj,values),HX_("values",e2,03,b7,4f)},
	{::hx::fsObject /*  ::crowplexus::hscript::Expr */ ,(int)offsetof(SwitchCase_obj,expr),HX_("expr",35,fd,1d,43)},
	{::hx::fsObject /*  ::crowplexus::hscript::Expr */ ,(int)offsetof(SwitchCase_obj,ifExpr),HX_("ifExpr",b2,37,4f,e4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SwitchCase_obj_sStaticStorageInfo = 0;
#endif

static ::String SwitchCase_obj_sMemberFields[] = {
	HX_("values",e2,03,b7,4f),
	HX_("expr",35,fd,1d,43),
	HX_("ifExpr",b2,37,4f,e4),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class SwitchCase_obj::__mClass;

void SwitchCase_obj::__register()
{
	SwitchCase_obj _hx_dummy;
	SwitchCase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("crowplexus.hscript.SwitchCase",c9,ee,74,c7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SwitchCase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SwitchCase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SwitchCase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SwitchCase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace crowplexus
} // end namespace hscript
