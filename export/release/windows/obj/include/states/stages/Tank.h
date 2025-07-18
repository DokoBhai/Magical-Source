// Generated by Haxe 4.3.6
#ifndef INCLUDED_states_stages_Tank
#define INCLUDED_states_stages_Tank

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_backend_BaseStage
#include <backend/BaseStage.h>
#endif
HX_DECLARE_CLASS1(backend,BaseStage)
HX_DECLARE_CLASS1(backend,Countdown)
HX_DECLARE_CLASS1(cutscenes,CutsceneHandler)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,sound,FlxSound)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(flxanimate,FlxAnimate)
HX_DECLARE_CLASS1(flxanimate,PsychFlxAnimate)
HX_DECLARE_CLASS1(objects,BGSprite)
HX_DECLARE_CLASS2(states,stages,Tank)
HX_DECLARE_CLASS3(states,stages,objects,BackgroundTank)

namespace states{
namespace stages{


class HXCPP_CLASS_ATTRIBUTES Tank_obj : public  ::backend::BaseStage_obj
{
	public:
		typedef  ::backend::BaseStage_obj super;
		typedef Tank_obj OBJ_;
		Tank_obj();

	public:
		enum { _hx_ClassId = 0x73e389c1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.stages.Tank")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.stages.Tank"); }
		static ::hx::ObjectPtr< Tank_obj > __new();
		static ::hx::ObjectPtr< Tank_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Tank_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Tank",0a,e7,cf,37); }

		 ::objects::BGSprite tankWatchtower;
		 ::states::stages::objects::BackgroundTank tankGround;
		 ::flixel::group::FlxTypedGroup tankmanRun;
		 ::flixel::group::FlxTypedGroup foregroundSprites;
		void create();

		void createPost();

		void countdownTick( ::backend::Countdown count,int num);

		void beatHit();

		void everyoneDance();
		::Dynamic everyoneDance_dyn();

		 ::cutscenes::CutsceneHandler cutsceneHandler;
		 ::flxanimate::PsychFlxAnimate tankman;
		 ::flxanimate::PsychFlxAnimate pico;
		 ::flixel::FlxSprite boyfriendCutscene;
		 ::flixel::sound::FlxSound audioPlaying;
		void prepareCutscene();
		::Dynamic prepareCutscene_dyn();

		void ughIntro();
		::Dynamic ughIntro_dyn();

		void gunsIntro();
		::Dynamic gunsIntro_dyn();

		int dualWieldAnimPlayed;
		void stressIntro();
		::Dynamic stressIntro_dyn();

		void zoomBack();
		::Dynamic zoomBack_dyn();

};

} // end namespace states
} // end namespace stages

#endif /* INCLUDED_states_stages_Tank */ 
