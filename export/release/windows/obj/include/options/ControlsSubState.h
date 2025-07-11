// Generated by Haxe 4.3.6
#ifndef INCLUDED_options_ControlsSubState
#define INCLUDED_options_ControlsSubState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_backend_MusicBeatSubstate
#include <backend/MusicBeatSubstate.h>
#endif
HX_DECLARE_CLASS1(backend,MusicBeatSubstate)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,Alphabet)
HX_DECLARE_CLASS1(objects,AttachedSprite)
HX_DECLARE_CLASS1(options,ControlsSubState)

namespace options{


class HXCPP_CLASS_ATTRIBUTES ControlsSubState_obj : public  ::backend::MusicBeatSubstate_obj
{
	public:
		typedef  ::backend::MusicBeatSubstate_obj super;
		typedef ControlsSubState_obj OBJ_;
		ControlsSubState_obj();

	public:
		enum { _hx_ClassId = 0x30ee2621 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="options.ControlsSubState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"options.ControlsSubState"); }
		static ::hx::ObjectPtr< ControlsSubState_obj > __new();
		static ::hx::ObjectPtr< ControlsSubState_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ControlsSubState_obj();

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
		::String __ToString() const { return HX_("ControlsSubState",27,51,d0,d8); }

		static void __boot();
		static ::String defaultKey;
		int curSelected;
		bool curAlt;
		::cpp::VirtualArray options;
		::Array< int > curOptions;
		::Array< int > curOptionsValid;
		 ::flixel::FlxSprite bg;
		 ::flixel::group::FlxTypedGroup grpDisplay;
		 ::flixel::group::FlxTypedGroup grpBlacks;
		 ::flixel::group::FlxTypedGroup grpOptions;
		 ::flixel::group::FlxTypedGroup grpBinds;
		 ::objects::AttachedSprite selectSpr;
		int gamepadColor;
		int keyboardColor;
		bool onKeyboardMode;
		 ::flixel::FlxSprite controllerSpr;
		int lastID;
		void createTexts();
		::Dynamic createTexts_dyn();

		void addCenteredText( ::objects::Alphabet text,::cpp::VirtualArray option,int id);
		::Dynamic addCenteredText_dyn();

		void addKeyText( ::objects::Alphabet text,::cpp::VirtualArray option,int id);
		::Dynamic addKeyText_dyn();

		void playstationCheck( ::objects::Alphabet alpha);
		::Dynamic playstationCheck_dyn();

		void updateBind(int num,::String text);
		::Dynamic updateBind_dyn();

		bool binding;
		Float holdingEsc;
		 ::flixel::FlxSprite bindingBlack;
		 ::objects::Alphabet bindingText;
		 ::objects::Alphabet bindingText2;
		Float timeForMoving;
		void update(Float elapsed);

		void closeBinding();
		::Dynamic closeBinding_dyn();

		void updateText( ::Dynamic change);
		::Dynamic updateText_dyn();

		void swapMode();
		::Dynamic swapMode_dyn();

		void updateAlt( ::Dynamic doSwap);
		::Dynamic updateAlt_dyn();

};

} // end namespace options

#endif /* INCLUDED_options_ControlsSubState */ 
