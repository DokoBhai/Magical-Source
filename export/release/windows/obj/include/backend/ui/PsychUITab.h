// Generated by Haxe 4.3.6
#ifndef INCLUDED_backend_ui_PsychUITab
#define INCLUDED_backend_ui_PsychUITab

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS2(backend,ui,PsychUIBox)
HX_DECLARE_CLASS2(backend,ui,PsychUITab)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace backend{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES PsychUITab_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef PsychUITab_obj OBJ_;
		PsychUITab_obj();

	public:
		enum { _hx_ClassId = 0x511d7c8e };

		void __construct(::String name);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="backend.ui.PsychUITab")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"backend.ui.PsychUITab"); }
		static ::hx::ObjectPtr< PsychUITab_obj > __new(::String name);
		static ::hx::ObjectPtr< PsychUITab_obj > __alloc(::hx::Ctx *_hx_ctx,::String name);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PsychUITab_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PsychUITab",66,f9,09,ae); }

		::String name;
		 ::flixel::text::FlxText text;
		 ::flixel::group::FlxTypedSpriteGroup menu;
		void draw();

		void destroy();

		void updateMenu( ::backend::ui::PsychUIBox parent,Float elapsed);
		::Dynamic updateMenu_dyn();

		void drawMenu( ::backend::ui::PsychUIBox parent);
		::Dynamic drawMenu_dyn();

		void resize(int width,int height);
		::Dynamic resize_dyn();

		::String set_name(::String v);
		::Dynamic set_name_dyn();

		::Array< ::Dynamic> set_cameras(::Array< ::Dynamic> v);

		 ::flixel::FlxCamera set_camera( ::flixel::FlxCamera v);

};

} // end namespace backend
} // end namespace ui

#endif /* INCLUDED_backend_ui_PsychUITab */ 
