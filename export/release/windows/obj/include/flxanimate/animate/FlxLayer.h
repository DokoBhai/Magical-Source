// Generated by Haxe 4.3.6
#ifndef INCLUDED_flxanimate_animate_FlxLayer
#define INCLUDED_flxanimate_animate_FlxLayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flxanimate_interfaces_IFilterable
#include <flxanimate/interfaces/IFilterable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS2(flixel,math,FlxMatrix)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flxanimate,animate,FlxKeyFrame)
HX_DECLARE_CLASS2(flxanimate,animate,FlxLayer)
HX_DECLARE_CLASS2(flxanimate,animate,FlxTimeline)
HX_DECLARE_CLASS2(flxanimate,data,LayerType)
HX_DECLARE_CLASS2(flxanimate,interfaces,IFilterable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace flxanimate{
namespace animate{


class HXCPP_CLASS_ATTRIBUTES FlxLayer_obj : public  ::flixel::FlxObject_obj
{
	public:
		typedef  ::flixel::FlxObject_obj super;
		typedef FlxLayer_obj OBJ_;
		FlxLayer_obj();

	public:
		enum { _hx_ClassId = 0x588c9031 };

		void __construct(::String name,::Array< ::Dynamic> keyframes);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flxanimate.animate.FlxLayer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flxanimate.animate.FlxLayer"); }
		static ::hx::ObjectPtr< FlxLayer_obj > __new(::String name,::Array< ::Dynamic> keyframes);
		static ::hx::ObjectPtr< FlxLayer_obj > __alloc(::hx::Ctx *_hx_ctx,::String name,::Array< ::Dynamic> keyframes);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxLayer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxLayer",1f,8c,9a,2c); }

		static  ::flxanimate::animate::FlxLayer fromJSON( ::Dynamic layer);
		static ::Dynamic fromJSON_dyn();

		 ::flixel::FlxCamera _filterCamera;
		 ::Dynamic onFrameUpdate;
		Dynamic onFrameUpdate_dyn() { return onFrameUpdate;}
		 ::haxe::ds::StringMap _mcMap;
		 ::flixel::graphics::frames::FlxFrame _filterFrame;
		 ::openfl::display::BitmapData _bmp1;
		 ::openfl::display::BitmapData _bmp2;
		 ::flixel::math::FlxMatrix _filterMatrix;
		bool _renderable;
		 ::flxanimate::animate::FlxTimeline _parent;
		::String name;
		 ::haxe::ds::StringMap _labels;
		 ::flxanimate::data::LayerType type;
		::Array< ::Dynamic> _keyframes;
		bool _correctClip;
		 ::flxanimate::animate::FlxLayer _clipper;
		int length;
		 ::flxanimate::animate::FlxKeyFrame _currFrame;
		void hide();
		::Dynamic hide_dyn();

		void show();
		::Dynamic show_dyn();

		void destroy();

		void updateRender(Float elapsed,int curFrame, ::haxe::ds::StringMap dictionary, ::Dynamic swfRender);
		::Dynamic updateRender_dyn();

		 ::flxanimate::animate::FlxKeyFrame get( ::Dynamic frame);
		::Dynamic get_dyn();

		 ::flxanimate::animate::FlxKeyFrame _get( ::Dynamic frame,::hx::Null< bool >  _animateRendering);
		::Dynamic _get_dyn();

		 ::flxanimate::animate::FlxKeyFrame add( ::flxanimate::animate::FlxKeyFrame keyFrame);
		::Dynamic add_dyn();

		 ::Dynamic remove( ::Dynamic frame);
		::Dynamic remove_dyn();

		void rename(::String name);
		::Dynamic rename_dyn();

		 ::flxanimate::animate::FlxTimeline set__parent( ::flxanimate::animate::FlxTimeline par);
		::Dynamic set__parent_dyn();

		int get_length();
		::Dynamic get_length_dyn();

		 ::flxanimate::data::LayerType set_type( ::flxanimate::data::LayerType value);
		::Dynamic set_type_dyn();

		void _setCurFrame(int frame);
		::Dynamic _setCurFrame_dyn();

		void updateBitmaps( ::openfl::geom::Rectangle rect);
		::Dynamic updateBitmaps_dyn();

};

} // end namespace flxanimate
} // end namespace animate

#endif /* INCLUDED_flxanimate_animate_FlxLayer */ 
