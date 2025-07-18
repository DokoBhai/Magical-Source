// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_addons_display_FlxRuntimeShader
#define INCLUDED_flixel_addons_display_FlxRuntimeShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
HX_DECLARE_CLASS3(flixel,addons,display,FlxRuntimeShader)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Shader)

namespace flixel{
namespace addons{
namespace display{


class HXCPP_CLASS_ATTRIBUTES FlxRuntimeShader_obj : public  ::flixel::graphics::tile::FlxGraphicsShader_obj
{
	public:
		typedef  ::flixel::graphics::tile::FlxGraphicsShader_obj super;
		typedef FlxRuntimeShader_obj OBJ_;
		FlxRuntimeShader_obj();

	public:
		enum { _hx_ClassId = 0x7517ccbe };

		void __construct(::String fragmentSource,::String vertexSource);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.display.FlxRuntimeShader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.display.FlxRuntimeShader"); }
		static ::hx::ObjectPtr< FlxRuntimeShader_obj > __new(::String fragmentSource,::String vertexSource);
		static ::hx::ObjectPtr< FlxRuntimeShader_obj > __alloc(::hx::Ctx *_hx_ctx,::String fragmentSource,::String vertexSource);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxRuntimeShader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxRuntimeShader",6b,22,33,11); }

		static void __boot();
		static ::String BASE_VERTEX_HEADER;
		static ::String BASE_VERTEX_BODY;
		static ::String BASE_VERTEX_SOURCE;
		static ::String BASE_FRAGMENT_HEADER;
		static ::String BASE_FRAGMENT_BODY;
		static ::String BASE_FRAGMENT_SOURCE;
		void setFloat(::String name,Float value);
		::Dynamic setFloat_dyn();

		 ::Dynamic getFloat(::String name);
		::Dynamic getFloat_dyn();

		void setFloatArray(::String name,::Array< Float > value);
		::Dynamic setFloatArray_dyn();

		::Array< Float > getFloatArray(::String name);
		::Dynamic getFloatArray_dyn();

		void setInt(::String name,int value);
		::Dynamic setInt_dyn();

		 ::Dynamic getInt(::String name);
		::Dynamic getInt_dyn();

		void setIntArray(::String name,::Array< int > value);
		::Dynamic setIntArray_dyn();

		::Array< int > getIntArray(::String name);
		::Dynamic getIntArray_dyn();

		void setBool(::String name,bool value);
		::Dynamic setBool_dyn();

		 ::Dynamic getBool(::String name);
		::Dynamic getBool_dyn();

		void setBoolArray(::String name,::Array< bool > value);
		::Dynamic setBoolArray_dyn();

		::Array< bool > getBoolArray(::String name);
		::Dynamic getBoolArray_dyn();

		void setSampler2D(::String name, ::openfl::display::BitmapData value);
		::Dynamic setSampler2D_dyn();

		 ::openfl::display::BitmapData getSampler2D(::String name);
		::Dynamic getSampler2D_dyn();

		void _hx___processGLData(::String source,::String storageType);

		::String set_glFragmentSource(::String value);

		::String set_glVertexSource(::String value);

};

} // end namespace flixel
} // end namespace addons
} // end namespace display

#endif /* INCLUDED_flixel_addons_display_FlxRuntimeShader */ 
