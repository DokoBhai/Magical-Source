// Generated by Haxe 4.3.6
#ifndef INCLUDED_crowplexus_hscript_FieldKind
#define INCLUDED_crowplexus_hscript_FieldKind

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(crowplexus,hscript,FieldKind)
namespace crowplexus{
namespace hscript{


class FieldKind_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FieldKind_obj OBJ_;

	public:
		FieldKind_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("crowplexus.hscript.FieldKind",c9,de,9a,51); }
		::String __ToString() const { return HX_("FieldKind.",60,c5,ce,a5) + _hx_tag; }

		static ::crowplexus::hscript::FieldKind KFunction( ::Dynamic f);
		static ::Dynamic KFunction_dyn();
		static ::crowplexus::hscript::FieldKind KVar( ::Dynamic v);
		static ::Dynamic KVar_dyn();
};

} // end namespace crowplexus
} // end namespace hscript

#endif /* INCLUDED_crowplexus_hscript_FieldKind */ 
