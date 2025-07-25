// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFont
#define INCLUDED_flixel_graphics_frames_bmfont_BMFont

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS4(flixel,graphics,frames,bmfont,BMFont)
HX_DECLARE_CLASS4(flixel,graphics,frames,bmfont,BMFontChar)
HX_DECLARE_CLASS4(flixel,graphics,frames,bmfont,BMFontCommon)
HX_DECLARE_CLASS4(flixel,graphics,frames,bmfont,BMFontInfo)
HX_DECLARE_CLASS4(flixel,graphics,frames,bmfont,BMFontKerning)
HX_DECLARE_CLASS4(flixel,graphics,frames,bmfont,BMFontPage)
HX_DECLARE_CLASS5(flixel,graphics,frames,bmfont,_BMFont,BMFontFileType)
HX_DECLARE_CLASS2(haxe,io,Bytes)

namespace flixel{
namespace graphics{
namespace frames{
namespace bmfont{


class HXCPP_CLASS_ATTRIBUTES BMFont_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BMFont_obj OBJ_;
		BMFont_obj();

	public:
		enum { _hx_ClassId = 0x5bdb70e1 };

		void __construct( ::flixel::graphics::frames::bmfont::BMFontInfo info, ::flixel::graphics::frames::bmfont::BMFontCommon common,::Array< ::Dynamic> pages,::Array< ::Dynamic> chars,::Array< ::Dynamic> kerning);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.graphics.frames.bmfont.BMFont")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.graphics.frames.bmfont.BMFont"); }
		static ::hx::ObjectPtr< BMFont_obj > __new( ::flixel::graphics::frames::bmfont::BMFontInfo info, ::flixel::graphics::frames::bmfont::BMFontCommon common,::Array< ::Dynamic> pages,::Array< ::Dynamic> chars,::Array< ::Dynamic> kerning);
		static ::hx::ObjectPtr< BMFont_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::graphics::frames::bmfont::BMFontInfo info, ::flixel::graphics::frames::bmfont::BMFontCommon common,::Array< ::Dynamic> pages,::Array< ::Dynamic> chars,::Array< ::Dynamic> kerning);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BMFont_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BMFont",3a,05,02,e8); }

		static  ::flixel::graphics::frames::bmfont::BMFont fromXml( ::Xml xml);
		static ::Dynamic fromXml_dyn();

		static  ::flixel::graphics::frames::bmfont::BMFont fromText(::String text);
		static ::Dynamic fromText_dyn();

		static  ::flixel::graphics::frames::bmfont::BMFont fromBytes( ::haxe::io::Bytes bytes);
		static ::Dynamic fromBytes_dyn();

		static  ::flixel::graphics::frames::bmfont::BMFont parse( ::Dynamic data);
		static ::Dynamic parse_dyn();

		static  ::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType guessType( ::Dynamic data);
		static ::Dynamic guessType_dyn();

		static  ::Xml safeParseXML(::String str);
		static ::Dynamic safeParseXML_dyn();

		static  ::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType detectFromText(::String text);
		static ::Dynamic detectFromText_dyn();

		static bool isValidBytes( ::haxe::io::Bytes bytes);
		static ::Dynamic isValidBytes_dyn();

		 ::flixel::graphics::frames::bmfont::BMFontInfo info;
		 ::flixel::graphics::frames::bmfont::BMFontCommon common;
		::Array< ::Dynamic> pages;
		::Array< ::Dynamic> chars;
		::Array< ::Dynamic> kerning;
};

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
} // end namespace bmfont

#endif /* INCLUDED_flixel_graphics_frames_bmfont_BMFont */ 
