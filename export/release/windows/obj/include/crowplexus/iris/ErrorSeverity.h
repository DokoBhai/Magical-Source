// Generated by Haxe 4.3.6
#ifndef INCLUDED_crowplexus_iris_ErrorSeverity
#define INCLUDED_crowplexus_iris_ErrorSeverity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(crowplexus,iris,ErrorSeverity)
namespace crowplexus{
namespace iris{


class ErrorSeverity_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ErrorSeverity_obj OBJ_;

	public:
		ErrorSeverity_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("crowplexus.iris.ErrorSeverity",b4,7b,51,46); }
		::String __ToString() const { return HX_("ErrorSeverity.",09,47,d2,bc) + _hx_tag; }

		static ::crowplexus::iris::ErrorSeverity ERROR;
		static inline ::crowplexus::iris::ErrorSeverity ERROR_dyn() { return ERROR; }
		static ::crowplexus::iris::ErrorSeverity FATAL;
		static inline ::crowplexus::iris::ErrorSeverity FATAL_dyn() { return FATAL; }
		static ::crowplexus::iris::ErrorSeverity NONE;
		static inline ::crowplexus::iris::ErrorSeverity NONE_dyn() { return NONE; }
		static ::crowplexus::iris::ErrorSeverity WARN;
		static inline ::crowplexus::iris::ErrorSeverity WARN_dyn() { return WARN; }
};

} // end namespace crowplexus
} // end namespace iris

#endif /* INCLUDED_crowplexus_iris_ErrorSeverity */ 
