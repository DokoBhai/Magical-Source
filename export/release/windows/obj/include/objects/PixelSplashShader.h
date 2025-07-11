// Generated by Haxe 4.3.6
#ifndef INCLUDED_objects_PixelSplashShader
#define INCLUDED_objects_PixelSplashShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS1(objects,PixelSplashShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Float)

namespace objects{


class HXCPP_CLASS_ATTRIBUTES PixelSplashShader_obj : public  ::flixel::graphics::tile::FlxGraphicsShader_obj
{
	public:
		typedef  ::flixel::graphics::tile::FlxGraphicsShader_obj super;
		typedef PixelSplashShader_obj OBJ_;
		PixelSplashShader_obj();

	public:
		enum { _hx_ClassId = 0x25f51fe6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="objects.PixelSplashShader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"objects.PixelSplashShader"); }
		static ::hx::ObjectPtr< PixelSplashShader_obj > __new();
		static ::hx::ObjectPtr< PixelSplashShader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PixelSplashShader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PixelSplashShader",72,bf,d5,57); }

		 ::openfl::display::ShaderParameter_Float r;
		 ::openfl::display::ShaderParameter_Float g;
		 ::openfl::display::ShaderParameter_Float b;
		 ::openfl::display::ShaderParameter_Float mult;
		 ::openfl::display::ShaderParameter_Float uBlocksize;
};

} // end namespace objects

#endif /* INCLUDED_objects_PixelSplashShader */ 
