// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_addons_display_FlxTiledSprite
#define INCLUDED_flixel_addons_display_FlxTiledSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxStrip
#include <flixel/FlxStrip.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxStrip)
HX_DECLARE_CLASS3(flixel,addons,display,FlxTiledSprite)
HX_DECLARE_CLASS2(flixel,graphics,FlxGraphic)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace display{


class HXCPP_CLASS_ATTRIBUTES FlxTiledSprite_obj : public  ::flixel::FlxStrip_obj
{
	public:
		typedef  ::flixel::FlxStrip_obj super;
		typedef FlxTiledSprite_obj OBJ_;
		FlxTiledSprite_obj();

	public:
		enum { _hx_ClassId = 0x16cfa598 };

		void __construct( ::Dynamic Graphic,Float Width,Float Height,::hx::Null< bool >  __o_RepeatX,::hx::Null< bool >  __o_RepeatY);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.display.FlxTiledSprite")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.display.FlxTiledSprite"); }
		static ::hx::ObjectPtr< FlxTiledSprite_obj > __new( ::Dynamic Graphic,Float Width,Float Height,::hx::Null< bool >  __o_RepeatX,::hx::Null< bool >  __o_RepeatY);
		static ::hx::ObjectPtr< FlxTiledSprite_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic Graphic,Float Width,Float Height,::hx::Null< bool >  __o_RepeatX,::hx::Null< bool >  __o_RepeatY);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTiledSprite_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxTiledSprite",e9,82,27,67); }

		Float scrollX;
		Float scrollY;
		bool repeatX;
		bool repeatY;
		 ::flixel::FlxSprite renderSprite;
		bool regen;
		bool graphicVisible;
		void destroy();

		 ::flixel::FlxSprite loadGraphic( ::Dynamic Graphic,::hx::Null< bool >  Animated,::hx::Null< int >  Width,::hx::Null< int >  Height,::hx::Null< bool >  Unique,::String Key);

		 ::flixel::addons::display::FlxTiledSprite loadFrame( ::flixel::graphics::frames::FlxFrame Frame);
		::Dynamic loadFrame_dyn();

		 ::flixel::graphics::FlxGraphic set_graphic( ::flixel::graphics::FlxGraphic Value);

		void regenGraphic();
		::Dynamic regenGraphic_dyn();

		void draw();

		void updateRenderSprite();
		::Dynamic updateRenderSprite_dyn();

		void updateVerticesData();
		::Dynamic updateVerticesData_dyn();

		Float set_width(Float Width);

		Float set_height(Float Height);

		Float set_scrollX(Float Value);
		::Dynamic set_scrollX_dyn();

		Float set_scrollY(Float Value);
		::Dynamic set_scrollY_dyn();

		bool set_repeatX(bool Value);
		::Dynamic set_repeatX_dyn();

		bool set_repeatY(bool Value);
		::Dynamic set_repeatY_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace display

#endif /* INCLUDED_flixel_addons_display_FlxTiledSprite */ 
