// Generated by Haxe 4.3.6
#ifndef INCLUDED_objects_Alignment
#define INCLUDED_objects_Alignment

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(objects,Alignment)
namespace objects{


class Alignment_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Alignment_obj OBJ_;

	public:
		Alignment_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("objects.Alignment",a9,86,44,48); }
		::String __ToString() const { return HX_("Alignment.",0b,a8,99,02) + _hx_tag; }

		static ::objects::Alignment CENTERED;
		static inline ::objects::Alignment CENTERED_dyn() { return CENTERED; }
		static ::objects::Alignment LEFT;
		static inline ::objects::Alignment LEFT_dyn() { return LEFT; }
		static ::objects::Alignment RIGHT;
		static inline ::objects::Alignment RIGHT_dyn() { return RIGHT; }
};

} // end namespace objects

#endif /* INCLUDED_objects_Alignment */ 
