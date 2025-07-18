// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#define INCLUDED_flixel_system_frontEnds_SoundFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,sound,FlxSound)
HX_DECLARE_CLASS2(flixel,sound,FlxSoundGroup)
HX_DECLARE_CLASS3(flixel,_hx_system,frontEnds,SoundFrontEnd)
HX_DECLARE_CLASS3(flixel,_hx_system,ui,FlxSoundTray)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,Sound)

namespace flixel{
namespace _hx_system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES SoundFrontEnd_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SoundFrontEnd_obj OBJ_;
		SoundFrontEnd_obj();

	public:
		enum { _hx_ClassId = 0x3aad4c0f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.frontEnds.SoundFrontEnd")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.frontEnds.SoundFrontEnd"); }
		static ::hx::ObjectPtr< SoundFrontEnd_obj > __new();
		static ::hx::ObjectPtr< SoundFrontEnd_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SoundFrontEnd_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SoundFrontEnd",81,32,49,38); }

		 ::flixel::sound::FlxSound music;
		bool muted;
		 ::Dynamic volumeHandler;
		Dynamic volumeHandler_dyn() { return volumeHandler;}
		::Array< int > volumeUpKeys;
		::Array< int > volumeDownKeys;
		::Array< int > muteKeys;
		bool soundTrayEnabled;
		 ::flixel::_hx_system::ui::FlxSoundTray get_soundTray();
		::Dynamic get_soundTray_dyn();

		 ::flixel::sound::FlxSoundGroup defaultMusicGroup;
		 ::flixel::sound::FlxSoundGroup defaultSoundGroup;
		 ::flixel::group::FlxTypedGroup list;
		Float volume;
		void playMusic( ::Dynamic embeddedMusic,::hx::Null< Float >  volume,::hx::Null< bool >  looped, ::flixel::sound::FlxSoundGroup group);
		::Dynamic playMusic_dyn();

		 ::flixel::sound::FlxSound load( ::Dynamic embeddedSound,::hx::Null< Float >  volume,::hx::Null< bool >  looped, ::flixel::sound::FlxSoundGroup group,::hx::Null< bool >  autoDestroy,::hx::Null< bool >  autoPlay,::String url, ::Dynamic onComplete, ::Dynamic onLoad);
		::Dynamic load_dyn();

		 ::flixel::sound::FlxSound loadHelper( ::flixel::sound::FlxSound sound,Float volume, ::flixel::sound::FlxSoundGroup group,::hx::Null< bool >  autoPlay);
		::Dynamic loadHelper_dyn();

		 ::openfl::media::Sound cache(::String embeddedSound);
		::Dynamic cache_dyn();

		void cacheAll();
		::Dynamic cacheAll_dyn();

		 ::flixel::sound::FlxSound play( ::Dynamic embeddedSound,::hx::Null< Float >  volume,::hx::Null< bool >  looped, ::flixel::sound::FlxSoundGroup group,::hx::Null< bool >  autoDestroy, ::Dynamic onComplete);
		::Dynamic play_dyn();

		 ::flixel::sound::FlxSound stream(::String url,::hx::Null< Float >  volume,::hx::Null< bool >  looped, ::flixel::sound::FlxSoundGroup group,::hx::Null< bool >  autoDestroy, ::Dynamic onComplete, ::Dynamic onLoad);
		::Dynamic stream_dyn();

		void pause();
		::Dynamic pause_dyn();

		void resume();
		::Dynamic resume_dyn();

		void destroy(::hx::Null< bool >  forceDestroy);
		::Dynamic destroy_dyn();

		void destroySound( ::flixel::sound::FlxSound sound);
		::Dynamic destroySound_dyn();

		void toggleMuted();
		::Dynamic toggleMuted_dyn();

		void changeVolume(Float Amount);
		::Dynamic changeVolume_dyn();

		void showSoundTray(::hx::Null< bool >  up);
		::Dynamic showSoundTray_dyn();

		void update(Float elapsed);
		::Dynamic update_dyn();

		void onFocusLost();
		::Dynamic onFocusLost_dyn();

		void onFocus();
		::Dynamic onFocus_dyn();

		void loadSavedPrefs();
		::Dynamic loadSavedPrefs_dyn();

		Float set_volume(Float Volume);
		::Dynamic set_volume_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_SoundFrontEnd */ 
