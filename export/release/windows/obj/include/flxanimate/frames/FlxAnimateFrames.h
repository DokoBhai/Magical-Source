// Generated by Haxe 4.3.6
#ifndef INCLUDED_flxanimate_frames_FlxAnimateFrames
#define INCLUDED_flxanimate_frames_FlxAnimateFrames

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(flixel,graphics,FlxGraphic)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxAtlasFrames)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(flxanimate,frames,FlxAnimateFrames)
HX_DECLARE_CLASS2(haxe,ds,List)

namespace flxanimate{
namespace frames{


class HXCPP_CLASS_ATTRIBUTES FlxAnimateFrames_obj : public  ::flixel::graphics::frames::FlxAtlasFrames_obj
{
	public:
		typedef  ::flixel::graphics::frames::FlxAtlasFrames_obj super;
		typedef FlxAnimateFrames_obj OBJ_;
		FlxAnimateFrames_obj();

	public:
		enum { _hx_ClassId = 0x42bbdcd2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flxanimate.frames.FlxAnimateFrames")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flxanimate.frames.FlxAnimateFrames"); }
		static ::hx::ObjectPtr< FlxAnimateFrames_obj > __new();
		static ::hx::ObjectPtr< FlxAnimateFrames_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxAnimateFrames_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxAnimateFrames",75,35,08,65); }

		static void __boot();
		static  ::Dynamic data;
		static  ::haxe::ds::List zip;
		static  ::flxanimate::frames::FlxAnimateFrames fromTextureAtlas(::String Path);
		static ::Dynamic fromTextureAtlas_dyn();

		static  ::flixel::graphics::frames::FlxAtlasFrames fromSpriteMap( ::Dynamic Path, ::Dynamic Image);
		static ::Dynamic fromSpriteMap_dyn();

		static  ::flixel::graphics::frames::FlxAtlasFrames fromSparrow( ::Dynamic Path, ::Dynamic Image);
		static ::Dynamic fromSparrow_dyn();

		static  ::flixel::graphics::frames::FlxAtlasFrames fromSparrowDirect( ::flixel::graphics::FlxGraphic source, ::Xml xml);
		static ::Dynamic fromSparrowDirect_dyn();

		static  ::flixel::graphics::frames::FlxAtlasFrames fromJson( ::Dynamic Path, ::Dynamic Image);
		static ::Dynamic fromJson_dyn();

		static  ::flixel::graphics::frames::FlxAtlasFrames fromSequence(::String Path,::String ext);
		static ::Dynamic fromSequence_dyn();

		static  ::flixel::graphics::frames::FlxAtlasFrames fromEdgeAnimate(::String Path, ::Dynamic Image);
		static ::Dynamic fromEdgeAnimate_dyn();

		static  ::flixel::graphics::frames::FlxAtlasFrames fromStarling( ::Dynamic Path, ::Dynamic Image);
		static ::Dynamic fromStarling_dyn();

		static  ::flixel::graphics::frames::FlxAtlasFrames fromCocos2D(::String Path, ::Dynamic Image);
		static ::Dynamic fromCocos2D_dyn();

		static  ::flxanimate::frames::FlxAnimateFrames fromEaselJS(::String Path, ::Dynamic Image);
		static ::Dynamic fromEaselJS_dyn();

		static void sliceFrame(::String name,bool rotated, ::flixel::math::FlxRect dimensions, ::flixel::math::FlxBasePoint sourceSize, ::flixel::math::FlxBasePoint offset, ::flixel::graphics::frames::FlxAtlasFrames Frames);
		static ::Dynamic sliceFrame_dyn();

		static  ::Dynamic findImage( ::Dynamic Image,::String Path);
		static ::Dynamic findImage_dyn();

		::Array< ::Dynamic> parents;
};

} // end namespace flxanimate
} // end namespace frames

#endif /* INCLUDED_flxanimate_frames_FlxAnimateFrames */ 
