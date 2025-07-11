// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_backend_MusicBeatSubstate
#include <backend/MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSoundGroup
#include <flixel/sound/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_states_editors_MasterEditorMenu
#include <states/editors/MasterEditorMenu.h>
#endif
#ifndef INCLUDED_states_editors_content_BasePrompt
#include <states/editors/content/BasePrompt.h>
#endif
#ifndef INCLUDED_states_editors_content_ExitConfirmationPrompt
#include <states/editors/content/ExitConfirmationPrompt.h>
#endif
#ifndef INCLUDED_states_editors_content_Prompt
#include <states/editors/content/Prompt.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_37ef4b65bc4ae906_11_new,"states.editors.content.ExitConfirmationPrompt","new",0x7c936092,"states.editors.content.ExitConfirmationPrompt.new","states/editors/content/Prompt.hx",11,0x558b4a2e)
HX_DEFINE_STACK_FRAME(_hx_pos_37ef4b65bc4ae906_10_new,"states.editors.content.ExitConfirmationPrompt","new",0x7c936092,"states.editors.content.ExitConfirmationPrompt.new","states/editors/content/Prompt.hx",10,0x558b4a2e)
namespace states{
namespace editors{
namespace content{

void ExitConfirmationPrompt_obj::__construct( ::Dynamic finishCallback){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,finishCallback) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_37ef4b65bc4ae906_11_new)
HXLINE(  12)			::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE(  13)			::backend::MusicBeatState_obj::switchState( ::states::editors::MasterEditorMenu_obj::__alloc( HX_CTX ));
HXLINE(  14)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  14)			_hx_tmp->playMusic(::backend::Paths_obj::returnSound((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu",15,c9,93,86)),null(),true,null()),null(),null(),null());
HXLINE(  15)			if (::hx::IsNotNull( finishCallback )) {
HXLINE(  15)				finishCallback();
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_37ef4b65bc4ae906_10_new)
HXDLIN(  10)		super::__construct(HX_("There's unsaved progress,\nare you sure you want to exit?",7a,7e,df,d7), ::Dynamic(new _hx_Closure_0(finishCallback)),null(),HX_("Exit",3e,23,f7,2d),null());
            	}

Dynamic ExitConfirmationPrompt_obj::__CreateEmpty() { return new ExitConfirmationPrompt_obj; }

void *ExitConfirmationPrompt_obj::_hx_vtable = 0;

Dynamic ExitConfirmationPrompt_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ExitConfirmationPrompt_obj > _hx_result = new ExitConfirmationPrompt_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ExitConfirmationPrompt_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4efe98ac) {
		if (inClassId<=(int)0x3c0818b8) {
			if (inClassId<=(int)0x29854721) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x29854721;
			} else {
				return inClassId==(int)0x3c0818b8;
			}
		} else {
			return inClassId==(int)0x4d35a1ca || inClassId==(int)0x4efe98ac;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			if (inClassId<=(int)0x62817b24) {
				return inClassId==(int)0x5661ffbf || inClassId==(int)0x62817b24;
			} else {
				return inClassId==(int)0x7c795c9f;
			}
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}


::hx::ObjectPtr< ExitConfirmationPrompt_obj > ExitConfirmationPrompt_obj::__new( ::Dynamic finishCallback) {
	::hx::ObjectPtr< ExitConfirmationPrompt_obj > __this = new ExitConfirmationPrompt_obj();
	__this->__construct(finishCallback);
	return __this;
}

::hx::ObjectPtr< ExitConfirmationPrompt_obj > ExitConfirmationPrompt_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic finishCallback) {
	ExitConfirmationPrompt_obj *__this = (ExitConfirmationPrompt_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ExitConfirmationPrompt_obj), true, "states.editors.content.ExitConfirmationPrompt"));
	*(void **)__this = ExitConfirmationPrompt_obj::_hx_vtable;
	__this->__construct(finishCallback);
	return __this;
}

ExitConfirmationPrompt_obj::ExitConfirmationPrompt_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ExitConfirmationPrompt_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ExitConfirmationPrompt_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ExitConfirmationPrompt_obj::__mClass;

void ExitConfirmationPrompt_obj::__register()
{
	ExitConfirmationPrompt_obj _hx_dummy;
	ExitConfirmationPrompt_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.editors.content.ExitConfirmationPrompt",a0,6f,d7,8b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ExitConfirmationPrompt_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ExitConfirmationPrompt_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ExitConfirmationPrompt_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
} // end namespace editors
} // end namespace content
