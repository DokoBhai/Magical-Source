// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Controls
#include <backend/Controls.h>
#endif
#ifndef INCLUDED_backend_DiscordClient
#include <backend/DiscordClient.h>
#endif
#ifndef INCLUDED_backend_Language
#include <backend/Language.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_backend_MusicBeatSubstate
#include <backend/MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
#endif
#ifndef INCLUDED_backend_StageData
#include <backend/StageData.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSound
#include <flixel/sound/FlxSound.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_objects_Alphabet
#include <objects/Alphabet.h>
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
#ifndef INCLUDED_options_BaseOptionsMenu
#include <options/BaseOptionsMenu.h>
#endif
#ifndef INCLUDED_options_ControlsSubState
#include <options/ControlsSubState.h>
#endif
#ifndef INCLUDED_options_GameplaySettingsSubState
#include <options/GameplaySettingsSubState.h>
#endif
#ifndef INCLUDED_options_GraphicsSettingsSubState
#include <options/GraphicsSettingsSubState.h>
#endif
#ifndef INCLUDED_options_LanguageSubState
#include <options/LanguageSubState.h>
#endif
#ifndef INCLUDED_options_NoteOffsetState
#include <options/NoteOffsetState.h>
#endif
#ifndef INCLUDED_options_NotesColorSubState
#include <options/NotesColorSubState.h>
#endif
#ifndef INCLUDED_options_OptionsState
#include <options/OptionsState.h>
#endif
#ifndef INCLUDED_options_VisualsSettingsSubState
#include <options/VisualsSettingsSubState.h>
#endif
#ifndef INCLUDED_states_LoadingState
#include <states/LoadingState.h>
#endif
#ifndef INCLUDED_states_MainMenuState
#include <states/MainMenuState.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bddb8806f8971119_6_new,"options.OptionsState","new",0xe72cff75,"options.OptionsState.new","options/OptionsState.hx",6,0xaa608eba)
static const ::String _hx_array_data_14992103_1[] = {
	HX_("Note Colors",1e,54,23,f8),HX_("Controls",96,42,6e,11),HX_("Adjust Delay and Combo",b7,c9,c3,05),HX_("Graphics",eb,b4,19,ec),HX_("Visuals",93,6d,63,78),HX_("Gameplay",06,bf,58,a5),HX_("Language",78,3c,c3,53),
};
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_23_openSelectedSubstate,"options.OptionsState","openSelectedSubstate",0x28c3b341,"options.OptionsState.openSelectedSubstate","options/OptionsState.hx",23,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_46_create,"options.OptionsState","create",0xc1bf1307,"options.OptionsState.create","options/OptionsState.hx",46,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_82_closeSubState,"options.OptionsState","closeSubState",0xbc3ad39e,"options.OptionsState.closeSubState","options/OptionsState.hx",82,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_90_update,"options.OptionsState","update",0xccb53214,"options.OptionsState.update","options/OptionsState.hx",90,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_113_changeSelection,"options.OptionsState","changeSelection",0xa0e39351,"options.OptionsState.changeSelection","options/OptionsState.hx",113,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_133_destroy,"options.OptionsState","destroy",0xd88d0a8f,"options.OptionsState.destroy","options/OptionsState.hx",133,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_18_boot,"options.OptionsState","boot",0x584b877d,"options.OptionsState.boot","options/OptionsState.hx",18,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_20_boot,"options.OptionsState","boot",0x584b877d,"options.OptionsState.boot","options/OptionsState.hx",20,0xaa608eba)
namespace options{

void OptionsState_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_bddb8806f8971119_6_new)
HXLINE(   8)		this->options = ::Array_obj< ::String >::fromData( _hx_array_data_14992103_1,7);
HXLINE(   6)		super::__construct();
            	}

Dynamic OptionsState_obj::__CreateEmpty() { return new OptionsState_obj; }

void *OptionsState_obj::_hx_vtable = 0;

Dynamic OptionsState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OptionsState_obj > _hx_result = new OptionsState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OptionsState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x53aaab8a) {
			if (inClassId<=(int)0x3b1d59ed) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x3b1d59ed;
			} else {
				return inClassId==(int)0x53aaab8a;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void OptionsState_obj::openSelectedSubstate(::String label){
            	HX_GC_STACKFRAME(&_hx_pos_bddb8806f8971119_23_openSelectedSubstate)
HXDLIN(  23)		::String _hx_switch_0 = label;
            		if (  (_hx_switch_0==HX_("Adjust Delay and Combo",b7,c9,c3,05)) ){
HXLINE(  36)			::backend::MusicBeatState_obj::switchState( ::options::NoteOffsetState_obj::__alloc( HX_CTX ));
HXDLIN(  36)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Controls",96,42,6e,11)) ){
HXLINE(  28)			this->openSubState( ::options::ControlsSubState_obj::__alloc( HX_CTX ));
HXDLIN(  28)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Gameplay",06,bf,58,a5)) ){
HXLINE(  34)			this->openSubState( ::options::GameplaySettingsSubState_obj::__alloc( HX_CTX ));
HXDLIN(  34)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Graphics",eb,b4,19,ec)) ){
HXLINE(  30)			this->openSubState( ::options::GraphicsSettingsSubState_obj::__alloc( HX_CTX ));
HXDLIN(  30)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Language",78,3c,c3,53)) ){
HXLINE(  38)			this->openSubState( ::options::LanguageSubState_obj::__alloc( HX_CTX ));
HXDLIN(  38)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Note Colors",1e,54,23,f8)) ){
HXLINE(  26)			this->openSubState( ::options::NotesColorSubState_obj::__alloc( HX_CTX ));
HXDLIN(  26)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Visuals",93,6d,63,78)) ){
HXLINE(  32)			this->openSubState( ::options::VisualsSettingsSubState_obj::__alloc( HX_CTX ));
HXDLIN(  32)			goto _hx_goto_2;
            		}
            		_hx_goto_2:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionsState_obj,openSelectedSubstate,(void))

void OptionsState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_bddb8806f8971119_46_create)
HXLINE(  48)		::backend::DiscordClient_obj::changePresence(HX_("Options Menu",e1,25,4c,98),null(),null(),null(),null(),null());
HXLINE(  51)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  51)		 ::flixel::FlxSprite bg1 = bg->loadGraphic(::backend::Paths_obj::image(HX_("menuDesat",26,91,04,72),null(),null()),null(),null(),null(),null(),null());
HXLINE(  52)		bg1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  53)		bg1->set_color(-1412611);
HXLINE(  54)		bg1->updateHitbox();
HXLINE(  56)		{
HXLINE(  56)			int axes = 17;
HXDLIN(  56)			bool _hx_tmp;
HXDLIN(  56)			if ((axes != 1)) {
HXLINE(  56)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  56)				_hx_tmp = true;
            			}
HXDLIN(  56)			if (_hx_tmp) {
HXLINE(  56)				int _hx_tmp1 = ::flixel::FlxG_obj::width;
HXDLIN(  56)				bg1->set_x(((( (Float)(_hx_tmp1) ) - bg1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  56)			bool _hx_tmp2;
HXDLIN(  56)			if ((axes != 16)) {
HXLINE(  56)				_hx_tmp2 = (axes == 17);
            			}
            			else {
HXLINE(  56)				_hx_tmp2 = true;
            			}
HXDLIN(  56)			if (_hx_tmp2) {
HXLINE(  56)				int _hx_tmp3 = ::flixel::FlxG_obj::height;
HXDLIN(  56)				bg1->set_y(((( (Float)(_hx_tmp3) ) - bg1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  57)		this->add(bg1);
HXLINE(  59)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  60)		this->add(this->grpOptions);
HXLINE(  62)		{
HXLINE(  62)			int _g_current = 0;
HXDLIN(  62)			::Array< ::String > _g_array = this->options;
HXDLIN(  62)			while((_g_current < _g_array->length)){
HXLINE(  62)				::String _g_value = _g_array->__get(_g_current);
HXDLIN(  62)				_g_current = (_g_current + 1);
HXDLIN(  62)				int _g_key = (_g_current - 1);
HXDLIN(  62)				int num = _g_key;
HXDLIN(  62)				::String option = _g_value;
HXLINE(  63)				{
HXLINE(  64)					::String key = (HX_("options_",41,bf,6e,1e) + option);
HXDLIN(  64)					::cpp::VirtualArray values = null();
HXDLIN(  64)					::Dynamic this1 = ::backend::Language_obj::phrases;
HXDLIN(  64)					 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\/;:<>#.,'\"%?!]",85,3f,6d,6d),HX_("g",67,00,00,00));
HXDLIN(  64)					::String str = ( ( ::haxe::ds::StringMap)(this1) )->get_string(::StringTools_obj::trim(hideChars->replace(::StringTools_obj::replace(key,HX_(" ",20,00,00,00),HX_("_",5f,00,00,00)),HX_("",00,00,00,00)).toLowerCase()));
HXDLIN(  64)					if (::hx::IsNull( str )) {
HXLINE(  62)						str = option;
            					}
HXLINE(  64)					if (::hx::IsNull( str )) {
HXLINE(  68)						str = key;
            					}
HXLINE(  64)					if (::hx::IsNotNull( values )) {
HXLINE(  64)						int _g_current1 = 0;
HXDLIN(  64)						::cpp::VirtualArray _g_array1 = values;
HXDLIN(  64)						while((_g_current1 < _g_array1->get_length())){
HXLINE(  64)							 ::Dynamic _g_value1 = _g_array1->__get(_g_current1);
HXDLIN(  64)							_g_current1 = (_g_current1 + 1);
HXDLIN(  64)							int _g_key1 = (_g_current1 - 1);
HXDLIN(  64)							int num1 = _g_key1;
HXDLIN(  64)							 ::Dynamic value = _g_value1;
HXLINE(  72)							str = ::StringTools_obj::replace(str,((HX_("{",7b,00,00,00) + (num1 + 1)) + HX_("}",7d,00,00,00)),( (::String)(value) ));
            						}
            					}
HXLINE(  64)					 ::objects::Alphabet optionText =  ::objects::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),str,true);
HXLINE(  65)					{
HXLINE(  65)						int axes1 = 17;
HXDLIN(  65)						bool _hx_tmp4;
HXDLIN(  65)						if ((axes1 != 1)) {
HXLINE(  65)							_hx_tmp4 = (axes1 == 17);
            						}
            						else {
HXLINE(  65)							_hx_tmp4 = true;
            						}
HXDLIN(  65)						if (_hx_tmp4) {
HXLINE(  65)							int _hx_tmp5 = ::flixel::FlxG_obj::width;
HXDLIN(  65)							optionText->set_x(((( (Float)(_hx_tmp5) ) - optionText->get_width()) / ( (Float)(2) )));
            						}
HXDLIN(  65)						bool _hx_tmp6;
HXDLIN(  65)						if ((axes1 != 16)) {
HXLINE(  65)							_hx_tmp6 = (axes1 == 17);
            						}
            						else {
HXLINE(  65)							_hx_tmp6 = true;
            						}
HXDLIN(  65)						if (_hx_tmp6) {
HXLINE(  65)							int _hx_tmp7 = ::flixel::FlxG_obj::height;
HXDLIN(  65)							optionText->set_y(((( (Float)(_hx_tmp7) ) - optionText->get_height()) / ( (Float)(2) )));
            						}
            					}
HXLINE(  66)					optionText->set_y((optionText->y + ((( (Float)(92) ) * (( (Float)(num) ) - (( (Float)(this->options->length) ) / ( (Float)(2) )))) + 45)));
HXLINE(  67)					this->grpOptions->add(optionText).StaticCast<  ::objects::Alphabet >();
            				}
            			}
            		}
HXLINE(  70)		this->selectorLeft =  ::objects::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_(">",3e,00,00,00),true);
HXLINE(  71)		this->add(this->selectorLeft);
HXLINE(  72)		this->selectorRight =  ::objects::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_("<",3c,00,00,00),true);
HXLINE(  73)		this->add(this->selectorRight);
HXLINE(  75)		this->changeSelection(null());
HXLINE(  76)		::backend::ClientPrefs_obj::saveSettings();
HXLINE(  78)		this->super::create();
            	}


void OptionsState_obj::closeSubState(){
            	HX_STACKFRAME(&_hx_pos_bddb8806f8971119_82_closeSubState)
HXLINE(  83)		this->super::closeSubState();
HXLINE(  84)		::backend::ClientPrefs_obj::saveSettings();
HXLINE(  86)		::backend::DiscordClient_obj::changePresence(HX_("Options Menu",e1,25,4c,98),null(),null(),null(),null(),null());
            	}


void OptionsState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_bddb8806f8971119_90_update)
HXLINE(  91)		this->super::update(elapsed);
HXLINE(  93)		if (this->get_controls()->get_UI_UP_P()) {
HXLINE(  94)			this->changeSelection(-1);
            		}
HXLINE(  95)		if (this->get_controls()->get_UI_DOWN_P()) {
HXLINE(  96)			this->changeSelection(1);
            		}
HXLINE(  98)		if (this->get_controls()->get_BACK()) {
HXLINE( 100)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 100)			_hx_tmp->play(::backend::Paths_obj::returnSound((HX_("sounds/",eb,02,a5,b6) + HX_("cancelMenu",39,a4,43,b7)),null(),true,null()),null(),null(),null(),null(),null());
HXLINE( 101)			if (::options::OptionsState_obj::onPlayState) {
HXLINE( 103)				::backend::StageData_obj::loadDirectory(::states::PlayState_obj::SONG);
HXLINE( 104)				::backend::MusicBeatState_obj::switchState(::states::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::states::PlayState_obj::__alloc( HX_CTX )) ),false,true));
HXLINE( 105)				::flixel::FlxG_obj::sound->music->set_volume(( (Float)(0) ));
            			}
            			else {
HXLINE( 107)				::backend::MusicBeatState_obj::switchState( ::states::MainMenuState_obj::__alloc( HX_CTX ));
            			}
            		}
            		else {
HXLINE( 109)			if (this->get_controls()->get_ACCEPT()) {
HXLINE( 109)				this->openSelectedSubstate(this->options->__get(::options::OptionsState_obj::curSelected));
            			}
            		}
            	}


void OptionsState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_bddb8806f8971119_113_changeSelection)
HXLINE( 114)		::options::OptionsState_obj::curSelected = ::flixel::math::FlxMath_obj::wrap((::options::OptionsState_obj::curSelected + change),0,(this->options->length - 1));
HXLINE( 116)		{
HXLINE( 116)			int _g_current = 0;
HXDLIN( 116)			::Array< ::Dynamic> _g_array = this->grpOptions->members;
HXDLIN( 116)			while((_g_current < _g_array->length)){
HXLINE( 116)				 ::objects::Alphabet _g_value = _g_array->__get(_g_current).StaticCast<  ::objects::Alphabet >();
HXDLIN( 116)				_g_current = (_g_current + 1);
HXDLIN( 116)				int _g_key = (_g_current - 1);
HXDLIN( 116)				int num = _g_key;
HXDLIN( 116)				 ::objects::Alphabet item = _g_value;
HXLINE( 117)				{
HXLINE( 118)					item->targetY = (num - ::options::OptionsState_obj::curSelected);
HXLINE( 119)					item->set_alpha(((Float)0.6));
HXLINE( 120)					if ((item->targetY == 0)) {
HXLINE( 122)						item->set_alpha(( (Float)(1) ));
HXLINE( 123)						this->selectorLeft->set_x((item->x - ( (Float)(63) )));
HXLINE( 124)						this->selectorLeft->set_y(item->y);
HXLINE( 125)						 ::objects::Alphabet _hx_tmp = this->selectorRight;
HXDLIN( 125)						Float item1 = item->x;
HXDLIN( 125)						_hx_tmp->set_x(((item1 + item->get_width()) + 15));
HXLINE( 126)						this->selectorRight->set_y(item->y);
            					}
            				}
            			}
            		}
HXLINE( 129)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 129)		_hx_tmp1->play(::backend::Paths_obj::returnSound((HX_("sounds/",eb,02,a5,b6) + HX_("scrollMenu",4c,d4,18,06)),null(),true,null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionsState_obj,changeSelection,(void))

void OptionsState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_bddb8806f8971119_133_destroy)
HXLINE( 134)		::backend::ClientPrefs_obj::loadPrefs();
HXLINE( 135)		this->super::destroy();
            	}


int OptionsState_obj::curSelected;

 ::flixel::FlxSprite OptionsState_obj::menuBG;

bool OptionsState_obj::onPlayState;


::hx::ObjectPtr< OptionsState_obj > OptionsState_obj::__new() {
	::hx::ObjectPtr< OptionsState_obj > __this = new OptionsState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< OptionsState_obj > OptionsState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	OptionsState_obj *__this = (OptionsState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OptionsState_obj), true, "options.OptionsState"));
	*(void **)__this = OptionsState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

OptionsState_obj::OptionsState_obj()
{
}

void OptionsState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionsState);
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(selectorLeft,"selectorLeft");
	HX_MARK_MEMBER_NAME(selectorRight,"selectorRight");
	 ::backend::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OptionsState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(selectorLeft,"selectorLeft");
	HX_VISIT_MEMBER_NAME(selectorRight,"selectorRight");
	 ::backend::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val OptionsState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return ::hx::Val( options ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectorLeft") ) { return ::hx::Val( selectorLeft ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectorRight") ) { return ::hx::Val( selectorRight ); }
		if (HX_FIELD_EQ(inName,"closeSubState") ) { return ::hx::Val( closeSubState_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"openSelectedSubstate") ) { return ::hx::Val( openSelectedSubstate_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool OptionsState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"menuBG") ) { outValue = ( menuBG ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
		if (HX_FIELD_EQ(inName,"onPlayState") ) { outValue = ( onPlayState ); return true; }
	}
	return false;
}

::hx::Val OptionsState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectorLeft") ) { selectorLeft=inValue.Cast<  ::objects::Alphabet >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectorRight") ) { selectorRight=inValue.Cast<  ::objects::Alphabet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool OptionsState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"menuBG") ) { menuBG=ioValue.Cast<  ::flixel::FlxSprite >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"onPlayState") ) { onPlayState=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void OptionsState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("options",5e,33,fe,df));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("selectorLeft",c6,e2,77,e7));
	outFields->push(HX_("selectorRight",3d,98,7b,18));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OptionsState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(OptionsState_obj,options),HX_("options",5e,33,fe,df)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(OptionsState_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /*  ::objects::Alphabet */ ,(int)offsetof(OptionsState_obj,selectorLeft),HX_("selectorLeft",c6,e2,77,e7)},
	{::hx::fsObject /*  ::objects::Alphabet */ ,(int)offsetof(OptionsState_obj,selectorRight),HX_("selectorRight",3d,98,7b,18)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo OptionsState_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &OptionsState_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(void *) &OptionsState_obj::menuBG,HX_("menuBG",24,65,6d,05)},
	{::hx::fsBool,(void *) &OptionsState_obj::onPlayState,HX_("onPlayState",5e,86,32,c7)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String OptionsState_obj_sMemberFields[] = {
	HX_("options",5e,33,fe,df),
	HX_("grpOptions",f9,45,d8,00),
	HX_("openSelectedSubstate",f6,29,af,78),
	HX_("selectorLeft",c6,e2,77,e7),
	HX_("selectorRight",3d,98,7b,18),
	HX_("create",fc,66,0f,7c),
	HX_("closeSubState",49,18,32,04),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

static void OptionsState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OptionsState_obj::curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(OptionsState_obj::menuBG,"menuBG");
	HX_MARK_MEMBER_NAME(OptionsState_obj::onPlayState,"onPlayState");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OptionsState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OptionsState_obj::curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(OptionsState_obj::menuBG,"menuBG");
	HX_VISIT_MEMBER_NAME(OptionsState_obj::onPlayState,"onPlayState");
};

#endif

::hx::Class OptionsState_obj::__mClass;

static ::String OptionsState_obj_sStaticFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("menuBG",24,65,6d,05),
	HX_("onPlayState",5e,86,32,c7),
	::String(null())
};

void OptionsState_obj::__register()
{
	OptionsState_obj _hx_dummy;
	OptionsState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.OptionsState",03,21,99,14);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OptionsState_obj::__GetStatic;
	__mClass->mSetStaticField = &OptionsState_obj::__SetStatic;
	__mClass->mMarkFunc = OptionsState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OptionsState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OptionsState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OptionsState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OptionsState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OptionsState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OptionsState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void OptionsState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_bddb8806f8971119_18_boot)
HXDLIN(  18)		curSelected = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bddb8806f8971119_20_boot)
HXDLIN(  20)		onPlayState = false;
            	}
}

} // end namespace options
