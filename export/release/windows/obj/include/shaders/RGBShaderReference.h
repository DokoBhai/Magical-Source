// Generated by Haxe 4.3.6
#ifndef INCLUDED_shaders_RGBShaderReference
#define INCLUDED_shaders_RGBShaderReference

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(shaders,RGBPalette)
HX_DECLARE_CLASS1(shaders,RGBShaderReference)

namespace shaders{


class HXCPP_CLASS_ATTRIBUTES RGBShaderReference_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef RGBShaderReference_obj OBJ_;
		RGBShaderReference_obj();

	public:
		enum { _hx_ClassId = 0x14837897 };

		void __construct( ::flixel::FlxSprite owner, ::shaders::RGBPalette ref);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shaders.RGBShaderReference")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shaders.RGBShaderReference"); }
		static ::hx::ObjectPtr< RGBShaderReference_obj > __new( ::flixel::FlxSprite owner, ::shaders::RGBPalette ref);
		static ::hx::ObjectPtr< RGBShaderReference_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::FlxSprite owner, ::shaders::RGBPalette ref);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RGBShaderReference_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RGBShaderReference",79,ff,42,86); }

		int r;
		int g;
		int b;
		Float mult;
		bool enabled;
		 ::shaders::RGBPalette parent;
		 ::flixel::FlxSprite _owner;
		 ::shaders::RGBPalette _original;
		int set_r(int value);
		::Dynamic set_r_dyn();

		int set_g(int value);
		::Dynamic set_g_dyn();

		int set_b(int value);
		::Dynamic set_b_dyn();

		Float set_mult(Float value);
		::Dynamic set_mult_dyn();

		bool set_enabled(bool value);
		::Dynamic set_enabled_dyn();

		bool allowNew;
		void cloneOriginal();
		::Dynamic cloneOriginal_dyn();

};

} // end namespace shaders

#endif /* INCLUDED_shaders_RGBShaderReference */ 
