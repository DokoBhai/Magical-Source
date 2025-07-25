// Generated by Haxe 4.3.6
#ifndef INCLUDED_states_stages_objects_PicoBlazinHandler
#define INCLUDED_states_stages_objects_PicoBlazinHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,Character)
HX_DECLARE_CLASS1(objects,Note)
HX_DECLARE_CLASS3(states,stages,objects,PicoBlazinHandler)

namespace states{
namespace stages{
namespace objects{


class HXCPP_CLASS_ATTRIBUTES PicoBlazinHandler_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PicoBlazinHandler_obj OBJ_;
		PicoBlazinHandler_obj();

	public:
		enum { _hx_ClassId = 0x73f60160 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="states.stages.objects.PicoBlazinHandler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"states.stages.objects.PicoBlazinHandler"); }
		static ::hx::ObjectPtr< PicoBlazinHandler_obj > __new();
		static ::hx::ObjectPtr< PicoBlazinHandler_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PicoBlazinHandler_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PicoBlazinHandler",7d,bc,66,01); }

		bool cantUppercut;
		void noteHit( ::objects::Note note);
		::Dynamic noteHit_dyn();

		void noteMiss( ::objects::Note note);
		::Dynamic noteMiss_dyn();

		void noteMissPress(int direction);
		::Dynamic noteMissPress_dyn();

		void movePicoToBack();
		::Dynamic movePicoToBack_dyn();

		void movePicoToFront();
		::Dynamic movePicoToFront_dyn();

		bool alternate;
		::String doAlternate();
		::Dynamic doAlternate_dyn();

		void playBlockAnim();
		::Dynamic playBlockAnim_dyn();

		void playCringeAnim();
		::Dynamic playCringeAnim_dyn();

		void playDodgeAnim();
		::Dynamic playDodgeAnim_dyn();

		void playIdleAnim();
		::Dynamic playIdleAnim_dyn();

		void playFakeoutAnim();
		::Dynamic playFakeoutAnim_dyn();

		void playUppercutPrepAnim();
		::Dynamic playUppercutPrepAnim_dyn();

		void playUppercutAnim(bool hit);
		::Dynamic playUppercutAnim_dyn();

		void playUppercutHitAnim();
		::Dynamic playUppercutHitAnim_dyn();

		void playHitHighAnim();
		::Dynamic playHitHighAnim_dyn();

		void playHitLowAnim();
		::Dynamic playHitLowAnim_dyn();

		void playHitSpinAnim();
		::Dynamic playHitSpinAnim_dyn();

		void playPunchHighAnim();
		::Dynamic playPunchHighAnim_dyn();

		void playPunchLowAnim();
		::Dynamic playPunchLowAnim_dyn();

		void playTauntConditionalAnim();
		::Dynamic playTauntConditionalAnim_dyn();

		void playTauntAnim();
		::Dynamic playTauntAnim_dyn();

		bool willMissBeLethal();
		::Dynamic willMissBeLethal_dyn();

		bool isDarnellPreppingUppercut();
		::Dynamic isDarnellPreppingUppercut_dyn();

		bool isDarnellInUppercut();
		::Dynamic isDarnellInUppercut_dyn();

		bool wasNoteHitPoorly(::String rating);
		::Dynamic wasNoteHitPoorly_dyn();

		bool isPlayerLowHealth();
		::Dynamic isPlayerLowHealth_dyn();

		void moveToBack();
		::Dynamic moveToBack_dyn();

		void moveToFront();
		::Dynamic moveToFront_dyn();

		 ::objects::Character get_boyfriend();
		::Dynamic get_boyfriend_dyn();

		 ::objects::Character get_dad();
		::Dynamic get_dad_dyn();

		 ::flixel::group::FlxTypedSpriteGroup get_boyfriendGroup();
		::Dynamic get_boyfriendGroup_dyn();

		 ::flixel::group::FlxTypedSpriteGroup get_dadGroup();
		::Dynamic get_dadGroup_dyn();

};

} // end namespace states
} // end namespace stages
} // end namespace objects

#endif /* INCLUDED_states_stages_objects_PicoBlazinHandler */ 
