// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_addons_text_TypeSound
#define INCLUDED_flixel_addons_text_TypeSound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
HX_DECLARE_CLASS3(flixel,addons,text,TypeSound)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,Sound)
HX_DECLARE_CLASS2(openfl,media,SoundLoaderContext)
HX_DECLARE_CLASS2(openfl,net,URLRequest)

namespace flixel{
namespace addons{
namespace text{


class HXCPP_CLASS_ATTRIBUTES TypeSound_obj : public  ::openfl::media::Sound_obj
{
	public:
		typedef  ::openfl::media::Sound_obj super;
		typedef TypeSound_obj OBJ_;
		TypeSound_obj();

	public:
		enum { _hx_ClassId = 0x16e33749 };

		void __construct( ::openfl::net::URLRequest stream, ::openfl::media::SoundLoaderContext context);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.text.TypeSound")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.text.TypeSound"); }
		static ::hx::ObjectPtr< TypeSound_obj > __new( ::openfl::net::URLRequest stream, ::openfl::media::SoundLoaderContext context);
		static ::hx::ObjectPtr< TypeSound_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::net::URLRequest stream, ::openfl::media::SoundLoaderContext context);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TypeSound_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TypeSound",95,c7,77,e7); }

		static void __boot();
		static ::String resourceName;
};

} // end namespace flixel
} // end namespace addons
} // end namespace text

#endif /* INCLUDED_flixel_addons_text_TypeSound */ 
