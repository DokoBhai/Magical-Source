// Generated by Haxe 4.3.6
#ifndef INCLUDED_flxanimate_animate_SymbolParameters
#define INCLUDED_flxanimate_animate_SymbolParameters

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flxanimate_interfaces_IFilterable
#include <flxanimate/interfaces/IFilterable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,math,FlxMatrix)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(flxanimate,animate,FlxElement)
HX_DECLARE_CLASS2(flxanimate,animate,SymbolParameters)
HX_DECLARE_CLASS2(flxanimate,data,Loop)
HX_DECLARE_CLASS2(flxanimate,data,SymbolT)
HX_DECLARE_CLASS2(flxanimate,effects,FlxColorEffect)
HX_DECLARE_CLASS2(flxanimate,interfaces,IFilterable)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace flxanimate{
namespace animate{


class HXCPP_CLASS_ATTRIBUTES SymbolParameters_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SymbolParameters_obj OBJ_;
		SymbolParameters_obj();

	public:
		enum { _hx_ClassId = 0x26325a8c };

		void __construct(::String name,::String __o_instance, ::flxanimate::data::SymbolT __o_type, ::flxanimate::data::Loop __o_loop);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flxanimate.animate.SymbolParameters")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flxanimate.animate.SymbolParameters"); }
		static ::hx::ObjectPtr< SymbolParameters_obj > __new(::String name,::String __o_instance, ::flxanimate::data::SymbolT __o_type, ::flxanimate::data::Loop __o_loop);
		static ::hx::ObjectPtr< SymbolParameters_obj > __alloc(::hx::Ctx *_hx_ctx,::String name,::String __o_instance, ::flxanimate::data::SymbolT __o_type, ::flxanimate::data::Loop __o_loop);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SymbolParameters_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("SymbolParameters",42,ec,0d,bf); }

		 ::flixel::FlxCamera _filterCamera;
		 ::flxanimate::animate::FlxElement _parent;
		 ::flixel::graphics::frames::FlxFrame _filterFrame;
		 ::openfl::display::BitmapData _bmp1;
		 ::openfl::display::BitmapData _bmp2;
		 ::flixel::math::FlxMatrix _filterMatrix;
		::String instance;
		 ::flxanimate::data::SymbolT type;
		 ::flxanimate::data::Loop loop;
		bool reverse;
		int firstFrame;
		int _curFrame;
		::String name;
		 ::flxanimate::effects::FlxColorEffect colorEffect;
		 ::Dynamic blendMode;
		bool _cacheAsBitmap;
		bool _renderDirty;
		 ::openfl::geom::ColorTransform _colorEffect;
		 ::flixel::math::FlxBasePoint transformationPoint;
		::Array< ::Dynamic> filters;
		 ::flixel::math::FlxMatrix cacheAsBitmapMatrix;
		bool _needSecondBmp;
		void destroy();
		::Dynamic destroy_dyn();

		 ::flxanimate::data::SymbolT set_type( ::flxanimate::data::SymbolT type);
		::Dynamic set_type_dyn();

		void update(int frame);
		::Dynamic update_dyn();

		 ::flxanimate::data::Loop set_loop( ::flxanimate::data::Loop loop);
		::Dynamic set_loop_dyn();

		int set_firstFrame(int value);
		::Dynamic set_firstFrame_dyn();

		void reset();
		::Dynamic reset_dyn();

		 ::openfl::geom::ColorTransform get__colorEffect();
		::Dynamic get__colorEffect_dyn();

		 ::flxanimate::effects::FlxColorEffect set_colorEffect( ::Dynamic value);
		::Dynamic set_colorEffect_dyn();

		::Array< ::Dynamic> set_filters(::Array< ::Dynamic> filters);
		::Dynamic set_filters_dyn();

		 ::Dynamic set_blendMode( ::Dynamic value);
		::Dynamic set_blendMode_dyn();

		bool get_cacheAsBitmap();
		::Dynamic get_cacheAsBitmap_dyn();

		void updateBitmaps( ::openfl::geom::Rectangle rect);
		::Dynamic updateBitmaps_dyn();

		bool set_cacheAsBitmap(bool value);
		::Dynamic set_cacheAsBitmap_dyn();

};

} // end namespace flxanimate
} // end namespace animate

#endif /* INCLUDED_flxanimate_animate_SymbolParameters */ 
