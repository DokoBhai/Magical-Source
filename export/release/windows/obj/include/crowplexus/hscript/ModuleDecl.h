// Generated by Haxe 4.3.6
#ifndef INCLUDED_crowplexus_hscript_ModuleDecl
#define INCLUDED_crowplexus_hscript_ModuleDecl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(crowplexus,hscript,ModuleDecl)
namespace crowplexus{
namespace hscript{


class ModuleDecl_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ModuleDecl_obj OBJ_;

	public:
		ModuleDecl_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("crowplexus.hscript.ModuleDecl",3b,c7,72,99); }
		::String __ToString() const { return HX_("ModuleDecl.",18,70,f2,04) + _hx_tag; }

		static ::crowplexus::hscript::ModuleDecl DClass( ::Dynamic c);
		static ::Dynamic DClass_dyn();
		static ::crowplexus::hscript::ModuleDecl DImport(::Array< ::String > path, ::Dynamic everything,::String as);
		static ::Dynamic DImport_dyn();
		static ::crowplexus::hscript::ModuleDecl DPackage(::Array< ::String > path);
		static ::Dynamic DPackage_dyn();
		static ::crowplexus::hscript::ModuleDecl DTypedef( ::Dynamic c);
		static ::Dynamic DTypedef_dyn();
};

} // end namespace crowplexus
} // end namespace hscript

#endif /* INCLUDED_crowplexus_hscript_ModuleDecl */ 
