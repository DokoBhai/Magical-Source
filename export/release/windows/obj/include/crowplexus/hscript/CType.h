// Generated by Haxe 4.3.6
#ifndef INCLUDED_crowplexus_hscript_CType
#define INCLUDED_crowplexus_hscript_CType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(crowplexus,hscript,CType)
namespace crowplexus{
namespace hscript{


class CType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef CType_obj OBJ_;

	public:
		CType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("crowplexus.hscript.CType",d8,3a,8f,d2); }
		::String __ToString() const { return HX_("CType.",f1,0c,e2,77) + _hx_tag; }

		static ::crowplexus::hscript::CType CTAnon(::Array< ::Dynamic> fields);
		static ::Dynamic CTAnon_dyn();
		static ::crowplexus::hscript::CType CTExtend(::Array< ::Dynamic> t,::Array< ::Dynamic> fields);
		static ::Dynamic CTExtend_dyn();
		static ::crowplexus::hscript::CType CTFun(::Array< ::Dynamic> args, ::crowplexus::hscript::CType ret);
		static ::Dynamic CTFun_dyn();
		static ::crowplexus::hscript::CType CTIntersection(::Array< ::Dynamic> types);
		static ::Dynamic CTIntersection_dyn();
		static ::crowplexus::hscript::CType CTNamed(::String n, ::crowplexus::hscript::CType t);
		static ::Dynamic CTNamed_dyn();
		static ::crowplexus::hscript::CType CTOpt( ::crowplexus::hscript::CType t);
		static ::Dynamic CTOpt_dyn();
		static ::crowplexus::hscript::CType CTParent( ::crowplexus::hscript::CType t);
		static ::Dynamic CTParent_dyn();
		static ::crowplexus::hscript::CType CTPath( ::Dynamic path);
		static ::Dynamic CTPath_dyn();
};

} // end namespace crowplexus
} // end namespace hscript

#endif /* INCLUDED_crowplexus_hscript_CType */ 
