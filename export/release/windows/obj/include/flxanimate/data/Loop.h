// Generated by Haxe 4.3.6
#ifndef INCLUDED_flxanimate_data_Loop
#define INCLUDED_flxanimate_data_Loop

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flxanimate,data,Loop)
namespace flxanimate{
namespace data{


class Loop_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Loop_obj OBJ_;

	public:
		Loop_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flxanimate.data.Loop",89,06,1c,c0); }
		::String __ToString() const { return HX_("Loop.",2a,61,27,0c) + _hx_tag; }

		static ::flxanimate::data::Loop Loop;
		static inline ::flxanimate::data::Loop Loop_dyn() { return Loop; }
		static ::flxanimate::data::Loop PlayOnce;
		static inline ::flxanimate::data::Loop PlayOnce_dyn() { return PlayOnce; }
		static ::flxanimate::data::Loop SingleFrame;
		static inline ::flxanimate::data::Loop SingleFrame_dyn() { return SingleFrame; }
};

} // end namespace flxanimate
} // end namespace data

#endif /* INCLUDED_flxanimate_data_Loop */ 
