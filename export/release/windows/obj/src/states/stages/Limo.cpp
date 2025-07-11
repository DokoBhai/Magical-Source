// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_backend_Achievements
#include <backend/Achievements.h>
#endif
#ifndef INCLUDED_backend_BaseStage
#include <backend/BaseStage.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSound
#include <flixel/sound/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSoundGroup
#include <flixel/sound/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_objects_BGSprite
#include <objects/BGSprite.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
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
#ifndef INCLUDED_states_stages_HenchmenKillState
#include <states/stages/HenchmenKillState.h>
#endif
#ifndef INCLUDED_states_stages_Limo
#include <states/stages/Limo.h>
#endif
#ifndef INCLUDED_states_stages_objects_BackgroundDancer
#include <states/stages/objects/BackgroundDancer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_14_new,"states.stages.Limo","new",0xf3018c1e,"states.stages.Limo.new","states/stages/Limo.hx",14,0xc615f2f2)
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_31_create,"states.stages.Limo","create",0xcbff15fe,"states.stages.Limo.create","states/stages/Limo.hx",31,0xc615f2f2)
static const ::String _hx_array_data_914de52c_2[] = {
	HX_("background limo pink",65,40,fe,9c),
};
static const ::String _hx_array_data_914de52c_3[] = {
	HX_("Henchmen on rail",13,dc,25,64),
};
static const ::String _hx_array_data_914de52c_4[] = {
	HX_("henchmen death",34,87,54,b2),
};
static const ::String _hx_array_data_914de52c_5[] = {
	HX_("blood",ba,7f,fc,b4),
};
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_79_createPost,"states.stages.Limo","createPost",0x16aa9d7e,"states.stages.Limo.createPost","states/stages/Limo.hx",79,0xc615f2f2)
static const ::String _hx_array_data_914de52c_7[] = {
	HX_("Limo stage",1d,b3,df,4c),
};
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_89_update,"states.stages.Limo","update",0xd6f5350b,"states.stages.Limo.update","states/stages/Limo.hx",89,0xc615f2f2)
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_92_update,"states.stages.Limo","update",0xd6f5350b,"states.stages.Limo.update","states/stages/Limo.hx",92,0xc615f2f2)
static const ::String _hx_array_data_914de52c_11[] = {
	HX_("blood",ba,7f,fc,b4),
};
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_173_beatHit,"states.stages.Limo","beatHit",0x15ce5d3b,"states.stages.Limo.beatHit","states/stages/Limo.hx",173,0xc615f2f2)
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_177_beatHit,"states.stages.Limo","beatHit",0x15ce5d3b,"states.stages.Limo.beatHit","states/stages/Limo.hx",177,0xc615f2f2)
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_188_closeSubState,"states.stages.Limo","closeSubState",0x0e8b2d87,"states.stages.Limo.closeSubState","states/stages/Limo.hx",188,0xc615f2f2)
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_196_openSubState,"states.stages.Limo","openSubState",0x23d042dd,"states.stages.Limo.openSubState","states/stages/Limo.hx",196,0xc615f2f2)
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_204_eventCalled,"states.stages.Limo","eventCalled",0xd8c249f5,"states.stages.Limo.eventCalled","states/stages/Limo.hx",204,0xc615f2f2)
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_212_dancersParenting,"states.stages.Limo","dancersParenting",0xf60e1326,"states.stages.Limo.dancersParenting","states/stages/Limo.hx",212,0xc615f2f2)
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_220_resetLimoKill,"states.stages.Limo","resetLimoKill",0x1ad1a08a,"states.stages.Limo.resetLimoKill","states/stages/Limo.hx",220,0xc615f2f2)
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_232_resetFastCar,"states.stages.Limo","resetFastCar",0x3c86154b,"states.stages.Limo.resetFastCar","states/stages/Limo.hx",232,0xc615f2f2)
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_248_fastCarDrive,"states.stages.Limo","fastCarDrive",0xab5a7394,"states.stages.Limo.fastCarDrive","states/stages/Limo.hx",248,0xc615f2f2)
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_241_fastCarDrive,"states.stages.Limo","fastCarDrive",0xab5a7394,"states.stages.Limo.fastCarDrive","states/stages/Limo.hx",241,0xc615f2f2)
HX_LOCAL_STACK_FRAME(_hx_pos_e0f45c1d92f097d3_256_killHenchmen,"states.stages.Limo","killHenchmen",0x1f2dda60,"states.stages.Limo.killHenchmen","states/stages/Limo.hx",256,0xc615f2f2)
namespace states{
namespace stages{

void Limo_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_14_new)
HXLINE(  87)		this->limoSpeed = ((Float)0);
HXLINE(  28)		this->dancersDiff = ((Float)320);
HXLINE(  21)		this->limoKillingState = ::states::stages::HenchmenKillState_obj::WAIT_dyn();
HXLINE(  18)		this->fastCarCanDrive = true;
HXLINE(  14)		super::__construct();
            	}

Dynamic Limo_obj::__CreateEmpty() { return new Limo_obj; }

void *Limo_obj::_hx_vtable = 0;

Dynamic Limo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Limo_obj > _hx_result = new Limo_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Limo_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6e9fe5f6) {
		if (inClassId<=(int)0x230cab9d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x230cab9d;
		} else {
			return inClassId==(int)0x6e9fe5f6;
		}
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void Limo_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_31_create)
HXLINE(  32)		 ::objects::BGSprite skyBG =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("limo/limoSunset",45,de,4f,6e),-120,-50,((Float)0.1),((Float)0.1),null(),null());
HXLINE(  33)		this->add(skyBG);
HXLINE(  35)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE(  36)			this->limoMetalPole =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("gore/metalPole",6b,f5,62,65),-500,220,((Float)0.4),((Float)0.4),null(),null());
HXLINE(  37)			this->add(this->limoMetalPole);
HXLINE(  39)			this->bgLimo =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("limo/bgLimo",b4,c7,45,2c),-150,480,((Float)0.4),((Float)0.4),::Array_obj< ::String >::fromData( _hx_array_data_914de52c_2,1),true);
HXLINE(  40)			this->add(this->bgLimo);
HXLINE(  42)			this->limoCorpse =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("gore/noooooo",da,20,24,22),-500,(this->limoMetalPole->y - ( (Float)(130) )),((Float)0.4),((Float)0.4),::Array_obj< ::String >::fromData( _hx_array_data_914de52c_3,1),true);
HXLINE(  43)			this->add(this->limoCorpse);
HXLINE(  45)			this->limoCorpseTwo =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("gore/noooooo",da,20,24,22),-500,this->limoMetalPole->y,((Float)0.4),((Float)0.4),::Array_obj< ::String >::fromData( _hx_array_data_914de52c_4,1),true);
HXLINE(  46)			this->add(this->limoCorpseTwo);
HXLINE(  48)			this->grpLimoDancers =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  49)			this->add(this->grpLimoDancers);
HXLINE(  51)			{
HXLINE(  52)				{
HXLINE(  53)					 ::states::stages::objects::BackgroundDancer dancer =  ::states::stages::objects::BackgroundDancer_obj::__alloc( HX_CTX ,(this->dancersDiff + this->bgLimo->x),(this->bgLimo->y - ( (Float)(400) )));
HXLINE(  54)					{
HXLINE(  54)						 ::flixel::math::FlxBasePoint this1 = dancer->scrollFactor;
HXDLIN(  54)						this1->set_x(((Float)0.4));
HXDLIN(  54)						this1->set_y(((Float)0.4));
            					}
HXLINE(  55)					this->grpLimoDancers->add(dancer).StaticCast<  ::states::stages::objects::BackgroundDancer >();
            				}
HXLINE(  52)				{
HXLINE(  53)					 ::states::stages::objects::BackgroundDancer dancer1 =  ::states::stages::objects::BackgroundDancer_obj::__alloc( HX_CTX ,((370 + this->dancersDiff) + this->bgLimo->x),(this->bgLimo->y - ( (Float)(400) )));
HXLINE(  54)					{
HXLINE(  54)						 ::flixel::math::FlxBasePoint this2 = dancer1->scrollFactor;
HXDLIN(  54)						this2->set_x(((Float)0.4));
HXDLIN(  54)						this2->set_y(((Float)0.4));
            					}
HXLINE(  55)					this->grpLimoDancers->add(dancer1).StaticCast<  ::states::stages::objects::BackgroundDancer >();
            				}
HXLINE(  52)				{
HXLINE(  53)					 ::states::stages::objects::BackgroundDancer dancer2 =  ::states::stages::objects::BackgroundDancer_obj::__alloc( HX_CTX ,((740 + this->dancersDiff) + this->bgLimo->x),(this->bgLimo->y - ( (Float)(400) )));
HXLINE(  54)					{
HXLINE(  54)						 ::flixel::math::FlxBasePoint this3 = dancer2->scrollFactor;
HXDLIN(  54)						this3->set_x(((Float)0.4));
HXDLIN(  54)						this3->set_y(((Float)0.4));
            					}
HXLINE(  55)					this->grpLimoDancers->add(dancer2).StaticCast<  ::states::stages::objects::BackgroundDancer >();
            				}
HXLINE(  52)				{
HXLINE(  53)					 ::states::stages::objects::BackgroundDancer dancer3 =  ::states::stages::objects::BackgroundDancer_obj::__alloc( HX_CTX ,((1110 + this->dancersDiff) + this->bgLimo->x),(this->bgLimo->y - ( (Float)(400) )));
HXLINE(  54)					{
HXLINE(  54)						 ::flixel::math::FlxBasePoint this4 = dancer3->scrollFactor;
HXDLIN(  54)						this4->set_x(((Float)0.4));
HXDLIN(  54)						this4->set_y(((Float)0.4));
            					}
HXLINE(  55)					this->grpLimoDancers->add(dancer3).StaticCast<  ::states::stages::objects::BackgroundDancer >();
            				}
HXLINE(  52)				{
HXLINE(  53)					 ::states::stages::objects::BackgroundDancer dancer4 =  ::states::stages::objects::BackgroundDancer_obj::__alloc( HX_CTX ,((1480 + this->dancersDiff) + this->bgLimo->x),(this->bgLimo->y - ( (Float)(400) )));
HXLINE(  54)					{
HXLINE(  54)						 ::flixel::math::FlxBasePoint this5 = dancer4->scrollFactor;
HXDLIN(  54)						this5->set_x(((Float)0.4));
HXDLIN(  54)						this5->set_y(((Float)0.4));
            					}
HXLINE(  55)					this->grpLimoDancers->add(dancer4).StaticCast<  ::states::stages::objects::BackgroundDancer >();
            				}
            			}
HXLINE(  58)			this->limoLight =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("gore/coldHeartKiller",79,ac,4a,05),(this->limoMetalPole->x - ( (Float)(180) )),(this->limoMetalPole->y - ( (Float)(80) )),((Float)0.4),((Float)0.4),null(),null());
HXLINE(  59)			this->add(this->limoLight);
HXLINE(  61)			this->grpLimoParticles =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  62)			this->add(this->grpLimoParticles);
HXLINE(  65)			 ::objects::BGSprite particle =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("gore/stupidBlood",af,b8,f7,cb),-400,-400,((Float)0.4),((Float)0.4),::Array_obj< ::String >::fromData( _hx_array_data_914de52c_5,1),false);
HXLINE(  66)			particle->set_alpha(((Float)0.01));
HXLINE(  67)			this->grpLimoParticles->add(particle).StaticCast<  ::objects::BGSprite >();
HXLINE(  68)			this->resetLimoKill();
HXLINE(  71)			::backend::Paths_obj::returnSound((HX_("sounds/",eb,02,a5,b6) + HX_("dancerdeath",f5,1c,1c,c9)),null(),true,null());
HXLINE(  72)			this->setDefaultGF(HX_("gf-car",a6,63,ab,07));
            		}
HXLINE(  75)		this->fastCar =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("limo/fastCarLol",c1,b0,ed,94),-300,160,null(),null(),null(),null());
HXLINE(  76)		this->fastCar->set_active(true);
            	}


void Limo_obj::createPost(){
            	HX_GC_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_79_createPost)
HXLINE(  80)		this->resetFastCar();
HXLINE(  81)		this->addBehindGF(this->fastCar);
HXLINE(  83)		 ::objects::BGSprite limo =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("limo/limoDrive",3b,67,64,e6),-120,550,1,1,::Array_obj< ::String >::fromData( _hx_array_data_914de52c_7,1),true);
HXLINE(  84)		this->addBehindGF(limo);
            	}


void Limo_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_89_update)
HXDLIN(  89)		 ::states::stages::Limo _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  90)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::stages::Limo,_gthis) HXARGC(1)
            			void _hx_run( ::objects::BGSprite spr){
            				HX_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_92_update)
HXLINE(  92)				if (spr->animation->_curAnim->finished) {
HXLINE(  93)					spr->kill();
HXLINE(  94)					_gthis->grpLimoParticles->remove(spr,true).StaticCast<  ::objects::BGSprite >();
HXLINE(  95)					spr->destroy();
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  91)			this->grpLimoParticles->forEach( ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE(  99)			switch((int)(this->limoKillingState->_hx_getIndex())){
            				case (int)1: {
HXLINE( 101)					 ::objects::BGSprite fh = this->limoMetalPole;
HXDLIN( 101)					fh->set_x((fh->x + (( (Float)(5000) ) * elapsed)));
HXLINE( 102)					this->limoLight->set_x((this->limoMetalPole->x - ( (Float)(180) )));
HXLINE( 103)					this->limoCorpse->set_x((this->limoLight->x - ( (Float)(50) )));
HXLINE( 104)					this->limoCorpseTwo->set_x((this->limoLight->x + 35));
HXLINE( 106)					::Array< ::Dynamic> dancers = this->grpLimoDancers->members;
HXLINE( 107)					{
HXLINE( 107)						int _g = 0;
HXDLIN( 107)						int _g1 = dancers->length;
HXDLIN( 107)						while((_g < _g1)){
HXLINE( 107)							_g = (_g + 1);
HXDLIN( 107)							int i = (_g - 1);
HXLINE( 108)							bool _hx_tmp;
HXDLIN( 108)							if ((dancers->__get(i).StaticCast<  ::states::stages::objects::BackgroundDancer >()->x < (( (Float)(::flixel::FlxG_obj::width) ) * ((Float)1.5)))) {
HXLINE( 108)								_hx_tmp = (this->limoLight->x > ((370 * i) + 170));
            							}
            							else {
HXLINE( 108)								_hx_tmp = false;
            							}
HXDLIN( 108)							if (_hx_tmp) {
HXLINE( 109)								switch((int)(i)){
            									case (int)1: {
HXLINE( 126)										this->limoCorpse->set_visible(true);
            									}
            									break;
            									case (int)2: {
HXLINE( 128)										this->limoCorpseTwo->set_visible(true);
            									}
            									break;
            									case (int)0: case (int)3: {
HXLINE( 111)										if ((i == 0)) {
HXLINE( 111)											 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 111)											_hx_tmp1->play(::backend::Paths_obj::returnSound((HX_("sounds/",eb,02,a5,b6) + HX_("dancerdeath",f5,1c,1c,c9)),null(),true,null()),((Float)0.5),null(),null(),null(),null());
            										}
HXLINE( 113)										::String diffStr;
HXDLIN( 113)										if ((i == 3)) {
HXLINE( 113)											diffStr = HX_(" 2 ",ce,73,18,00);
            										}
            										else {
HXLINE( 113)											diffStr = HX_(" ",20,00,00,00);
            										}
HXLINE( 114)										 ::objects::BGSprite particle =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("gore/noooooo",da,20,24,22),(dancers->__get(i).StaticCast<  ::states::stages::objects::BackgroundDancer >()->x + 200),dancers->__get(i).StaticCast<  ::states::stages::objects::BackgroundDancer >()->y,((Float)0.4),((Float)0.4),::Array_obj< ::String >::__new(1)->init(0,((HX_("hench leg spin",fe,64,3b,9f) + diffStr) + HX_("PINK",76,ba,18,35))),false);
HXLINE( 115)										this->grpLimoParticles->add(particle).StaticCast<  ::objects::BGSprite >();
HXLINE( 116)										 ::objects::BGSprite particle1 =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("gore/noooooo",da,20,24,22),(dancers->__get(i).StaticCast<  ::states::stages::objects::BackgroundDancer >()->x + 160),(dancers->__get(i).StaticCast<  ::states::stages::objects::BackgroundDancer >()->y + 200),((Float)0.4),((Float)0.4),::Array_obj< ::String >::__new(1)->init(0,((HX_("hench arm spin",b0,af,cb,ac) + diffStr) + HX_("PINK",76,ba,18,35))),false);
HXLINE( 117)										this->grpLimoParticles->add(particle1).StaticCast<  ::objects::BGSprite >();
HXLINE( 118)										 ::objects::BGSprite particle2 =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("gore/noooooo",da,20,24,22),dancers->__get(i).StaticCast<  ::states::stages::objects::BackgroundDancer >()->x,(dancers->__get(i).StaticCast<  ::states::stages::objects::BackgroundDancer >()->y + 50),((Float)0.4),((Float)0.4),::Array_obj< ::String >::__new(1)->init(0,((HX_("hench head spin",d8,df,79,d7) + diffStr) + HX_("PINK",76,ba,18,35))),false);
HXLINE( 119)										this->grpLimoParticles->add(particle2).StaticCast<  ::objects::BGSprite >();
HXLINE( 121)										 ::objects::BGSprite particle3 =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("gore/stupidBlood",af,b8,f7,cb),(dancers->__get(i).StaticCast<  ::states::stages::objects::BackgroundDancer >()->x - ( (Float)(110) )),(dancers->__get(i).StaticCast<  ::states::stages::objects::BackgroundDancer >()->y + 20),((Float)0.4),((Float)0.4),::Array_obj< ::String >::fromData( _hx_array_data_914de52c_11,1),false);
HXLINE( 122)										particle3->set_flipX(true);
HXLINE( 123)										particle3->set_angle(((Float)-57.5));
HXLINE( 124)										this->grpLimoParticles->add(particle3).StaticCast<  ::objects::BGSprite >();
            									}
            									break;
            								}
HXLINE( 130)								 ::states::stages::objects::BackgroundDancer fh1 = dancers->__get(i).StaticCast<  ::states::stages::objects::BackgroundDancer >();
HXDLIN( 130)								fh1->set_x((fh1->x + (::flixel::FlxG_obj::width * 2)));
            							}
            						}
            					}
HXLINE( 134)					if ((this->limoMetalPole->x > (::flixel::FlxG_obj::width * 2))) {
HXLINE( 135)						this->resetLimoKill();
HXLINE( 136)						this->limoSpeed = ( (Float)(800) );
HXLINE( 137)						this->limoKillingState = ::states::stages::HenchmenKillState_obj::SPEEDING_OFFSCREEN_dyn();
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 141)					 ::states::stages::Limo _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 141)					_hx_tmp2->limoSpeed = (_hx_tmp2->limoSpeed - (( (Float)(4000) ) * elapsed));
HXLINE( 142)					 ::objects::BGSprite fh2 = this->bgLimo;
HXDLIN( 142)					fh2->set_x((fh2->x - (this->limoSpeed * elapsed)));
HXLINE( 143)					if ((this->bgLimo->x > (( (Float)(::flixel::FlxG_obj::width) ) * ((Float)1.5)))) {
HXLINE( 144)						this->limoSpeed = ( (Float)(3000) );
HXLINE( 145)						this->limoKillingState = ::states::stages::HenchmenKillState_obj::SPEEDING_dyn();
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 149)					 ::states::stages::Limo _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 149)					_hx_tmp3->limoSpeed = (_hx_tmp3->limoSpeed - (( (Float)(2000) ) * elapsed));
HXLINE( 150)					if ((this->limoSpeed < 1000)) {
HXLINE( 150)						this->limoSpeed = ( (Float)(1000) );
            					}
HXLINE( 152)					 ::objects::BGSprite fh3 = this->bgLimo;
HXDLIN( 152)					fh3->set_x((fh3->x - (this->limoSpeed * elapsed)));
HXLINE( 153)					if ((this->bgLimo->x < -275)) {
HXLINE( 154)						this->limoKillingState = ::states::stages::HenchmenKillState_obj::STOPPING_dyn();
HXLINE( 155)						this->limoSpeed = ( (Float)(800) );
            					}
HXLINE( 157)					this->dancersParenting();
            				}
            				break;
            				case (int)4: {
HXLINE( 160)					this->bgLimo->set_x((-150 + (::Math_obj::exp((-(elapsed) * ( (Float)(9) ))) * (this->bgLimo->x - ( (Float)(-150) )))));
HXLINE( 161)					if ((::Math_obj::round(this->bgLimo->x) == -150)) {
HXLINE( 162)						this->bgLimo->set_x(( (Float)(-150) ));
HXLINE( 163)						this->limoKillingState = ::states::stages::HenchmenKillState_obj::WAIT_dyn();
            					}
HXLINE( 165)					this->dancersParenting();
            				}
            				break;
            				default:{
            				}
            			}
            		}
            	}


void Limo_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_173_beatHit)
HXLINE( 174)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			void _hx_run( ::states::stages::objects::BackgroundDancer dancer){
            				HX_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_177_beatHit)
HXLINE( 177)				dancer->dance();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 175)			this->grpLimoDancers->forEach( ::Dynamic(new _hx_Closure_0()),null());
            		}
HXLINE( 181)		bool _hx_tmp;
HXDLIN( 181)		if ((::flixel::FlxG_obj::random->_hx_float(0,100,null()) < 10)) {
HXLINE( 181)			_hx_tmp = this->fastCarCanDrive;
            		}
            		else {
HXLINE( 181)			_hx_tmp = false;
            		}
HXDLIN( 181)		if (_hx_tmp) {
HXLINE( 182)			this->fastCarDrive();
            		}
            	}


void Limo_obj::closeSubState(){
            	HX_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_188_closeSubState)
HXDLIN( 188)		if (( (bool)(::flixel::FlxG_obj::game->_state->__Field(HX_("paused",ae,40,84,ef),::hx::paccDynamic)) )) {
HXLINE( 190)			if (::hx::IsNotNull( this->carTimer )) {
HXLINE( 190)				this->carTimer->active = true;
            			}
            		}
            	}


void Limo_obj::openSubState( ::flixel::FlxSubState SubState){
            	HX_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_196_openSubState)
HXDLIN( 196)		if (( (bool)(::flixel::FlxG_obj::game->_state->__Field(HX_("paused",ae,40,84,ef),::hx::paccDynamic)) )) {
HXLINE( 198)			if (::hx::IsNotNull( this->carTimer )) {
HXLINE( 198)				this->carTimer->active = false;
            			}
            		}
            	}


void Limo_obj::eventCalled(::String eventName,::String value1,::String value2, ::Dynamic flValue1, ::Dynamic flValue2,Float strumTime){
            	HX_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_204_eventCalled)
HXDLIN( 204)		if ((eventName == HX_("Kill Henchmen",e2,fc,7b,01))) {
HXLINE( 207)			this->killHenchmen();
            		}
            	}


void Limo_obj::dancersParenting(){
            	HX_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_212_dancersParenting)
HXLINE( 213)		::Array< ::Dynamic> dancers = this->grpLimoDancers->members;
HXLINE( 214)		{
HXLINE( 214)			int _g = 0;
HXDLIN( 214)			int _g1 = dancers->length;
HXDLIN( 214)			while((_g < _g1)){
HXLINE( 214)				_g = (_g + 1);
HXDLIN( 214)				int i = (_g - 1);
HXLINE( 215)				dancers->__get(i).StaticCast<  ::states::stages::objects::BackgroundDancer >()->set_x((((370 * i) + this->dancersDiff) + this->bgLimo->x));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Limo_obj,dancersParenting,(void))

void Limo_obj::resetLimoKill(){
            	HX_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_220_resetLimoKill)
HXLINE( 221)		this->limoMetalPole->set_x(( (Float)(-500) ));
HXLINE( 222)		this->limoMetalPole->set_visible(false);
HXLINE( 223)		this->limoLight->set_x(( (Float)(-500) ));
HXLINE( 224)		this->limoLight->set_visible(false);
HXLINE( 225)		this->limoCorpse->set_x(( (Float)(-500) ));
HXLINE( 226)		this->limoCorpse->set_visible(false);
HXLINE( 227)		this->limoCorpseTwo->set_x(( (Float)(-500) ));
HXLINE( 228)		this->limoCorpseTwo->set_visible(false);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Limo_obj,resetLimoKill,(void))

void Limo_obj::resetFastCar(){
            	HX_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_232_resetFastCar)
HXLINE( 233)		this->fastCar->set_x(( (Float)(-12600) ));
HXLINE( 234)		 ::objects::BGSprite _hx_tmp = this->fastCar;
HXDLIN( 234)		_hx_tmp->set_y(( (Float)(::flixel::FlxG_obj::random->_hx_int(140,250,null())) ));
HXLINE( 235)		this->fastCar->velocity->set_x(( (Float)(0) ));
HXLINE( 236)		this->fastCarCanDrive = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Limo_obj,resetFastCar,(void))

void Limo_obj::fastCarDrive(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::stages::Limo,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_248_fastCarDrive)
HXLINE( 249)			_gthis->resetFastCar();
HXLINE( 250)			_gthis->carTimer = null();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_241_fastCarDrive)
HXDLIN( 241)		 ::states::stages::Limo _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 243)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 243)		::String key = (HX_("carPass",05,1f,44,b6) + ::flixel::FlxG_obj::random->_hx_int(0,1,null()));
HXDLIN( 243)		 ::Dynamic modsAllowed = true;
HXDLIN( 243)		if (::hx::IsNull( modsAllowed )) {
HXLINE( 243)			modsAllowed = true;
            		}
HXDLIN( 243)		_hx_tmp->play(::backend::Paths_obj::returnSound((HX_("sounds/",eb,02,a5,b6) + key),null(),modsAllowed,null()),((Float)0.7),null(),null(),null(),null());
HXLINE( 245)		{
HXLINE( 245)			 ::flixel::math::FlxBasePoint this1 = this->fastCar->velocity;
HXDLIN( 245)			this1->set_x(( (Float)(::flixel::FlxG_obj::random->_hx_int(30600,39600,null())) ));
            		}
HXLINE( 246)		this->fastCarCanDrive = false;
HXLINE( 247)		this->carTimer =  ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(2, ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Limo_obj,fastCarDrive,(void))

void Limo_obj::killHenchmen(){
            	HX_STACKFRAME(&_hx_pos_e0f45c1d92f097d3_256_killHenchmen)
HXDLIN( 256)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE( 257)			if (::hx::IsPointerEq( this->limoKillingState,::states::stages::HenchmenKillState_obj::WAIT_dyn() )) {
HXLINE( 258)				this->limoMetalPole->set_x(( (Float)(-400) ));
HXLINE( 259)				this->limoMetalPole->set_visible(true);
HXLINE( 260)				this->limoLight->set_visible(true);
HXLINE( 261)				this->limoCorpse->set_visible(false);
HXLINE( 262)				this->limoCorpseTwo->set_visible(false);
HXLINE( 263)				this->limoKillingState = ::states::stages::HenchmenKillState_obj::KILLING_dyn();
HXLINE( 266)				Float kills = ::backend::Achievements_obj::addScore(HX_("roadkill_enthusiast",15,e2,55,56),null(),null());
HXLINE( 267)				::flixel::FlxG_obj::log->advanced((HX_("Henchmen kills: ",1b,81,91,7c) + kills),::flixel::_hx_system::debug::log::LogStyle_obj::NORMAL,null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Limo_obj,killHenchmen,(void))


::hx::ObjectPtr< Limo_obj > Limo_obj::__new() {
	::hx::ObjectPtr< Limo_obj > __this = new Limo_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Limo_obj > Limo_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Limo_obj *__this = (Limo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Limo_obj), true, "states.stages.Limo"));
	*(void **)__this = Limo_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Limo_obj::Limo_obj()
{
}

void Limo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Limo);
	HX_MARK_MEMBER_NAME(grpLimoDancers,"grpLimoDancers");
	HX_MARK_MEMBER_NAME(fastCar,"fastCar");
	HX_MARK_MEMBER_NAME(fastCarCanDrive,"fastCarCanDrive");
	HX_MARK_MEMBER_NAME(limoKillingState,"limoKillingState");
	HX_MARK_MEMBER_NAME(limoMetalPole,"limoMetalPole");
	HX_MARK_MEMBER_NAME(limoLight,"limoLight");
	HX_MARK_MEMBER_NAME(limoCorpse,"limoCorpse");
	HX_MARK_MEMBER_NAME(limoCorpseTwo,"limoCorpseTwo");
	HX_MARK_MEMBER_NAME(bgLimo,"bgLimo");
	HX_MARK_MEMBER_NAME(grpLimoParticles,"grpLimoParticles");
	HX_MARK_MEMBER_NAME(dancersDiff,"dancersDiff");
	HX_MARK_MEMBER_NAME(limoSpeed,"limoSpeed");
	HX_MARK_MEMBER_NAME(carTimer,"carTimer");
	 ::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Limo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(grpLimoDancers,"grpLimoDancers");
	HX_VISIT_MEMBER_NAME(fastCar,"fastCar");
	HX_VISIT_MEMBER_NAME(fastCarCanDrive,"fastCarCanDrive");
	HX_VISIT_MEMBER_NAME(limoKillingState,"limoKillingState");
	HX_VISIT_MEMBER_NAME(limoMetalPole,"limoMetalPole");
	HX_VISIT_MEMBER_NAME(limoLight,"limoLight");
	HX_VISIT_MEMBER_NAME(limoCorpse,"limoCorpse");
	HX_VISIT_MEMBER_NAME(limoCorpseTwo,"limoCorpseTwo");
	HX_VISIT_MEMBER_NAME(bgLimo,"bgLimo");
	HX_VISIT_MEMBER_NAME(grpLimoParticles,"grpLimoParticles");
	HX_VISIT_MEMBER_NAME(dancersDiff,"dancersDiff");
	HX_VISIT_MEMBER_NAME(limoSpeed,"limoSpeed");
	HX_VISIT_MEMBER_NAME(carTimer,"carTimer");
	 ::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Limo_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bgLimo") ) { return ::hx::Val( bgLimo ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fastCar") ) { return ::hx::Val( fastCar ); }
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"carTimer") ) { return ::hx::Val( carTimer ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"limoLight") ) { return ::hx::Val( limoLight ); }
		if (HX_FIELD_EQ(inName,"limoSpeed") ) { return ::hx::Val( limoSpeed ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"limoCorpse") ) { return ::hx::Val( limoCorpse ); }
		if (HX_FIELD_EQ(inName,"createPost") ) { return ::hx::Val( createPost_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"dancersDiff") ) { return ::hx::Val( dancersDiff ); }
		if (HX_FIELD_EQ(inName,"eventCalled") ) { return ::hx::Val( eventCalled_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"openSubState") ) { return ::hx::Val( openSubState_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetFastCar") ) { return ::hx::Val( resetFastCar_dyn() ); }
		if (HX_FIELD_EQ(inName,"fastCarDrive") ) { return ::hx::Val( fastCarDrive_dyn() ); }
		if (HX_FIELD_EQ(inName,"killHenchmen") ) { return ::hx::Val( killHenchmen_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"limoMetalPole") ) { return ::hx::Val( limoMetalPole ); }
		if (HX_FIELD_EQ(inName,"limoCorpseTwo") ) { return ::hx::Val( limoCorpseTwo ); }
		if (HX_FIELD_EQ(inName,"closeSubState") ) { return ::hx::Val( closeSubState_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetLimoKill") ) { return ::hx::Val( resetLimoKill_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"grpLimoDancers") ) { return ::hx::Val( grpLimoDancers ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fastCarCanDrive") ) { return ::hx::Val( fastCarCanDrive ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"limoKillingState") ) { return ::hx::Val( limoKillingState ); }
		if (HX_FIELD_EQ(inName,"grpLimoParticles") ) { return ::hx::Val( grpLimoParticles ); }
		if (HX_FIELD_EQ(inName,"dancersParenting") ) { return ::hx::Val( dancersParenting_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Limo_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bgLimo") ) { bgLimo=inValue.Cast<  ::objects::BGSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fastCar") ) { fastCar=inValue.Cast<  ::objects::BGSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"carTimer") ) { carTimer=inValue.Cast<  ::flixel::util::FlxTimer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"limoLight") ) { limoLight=inValue.Cast<  ::objects::BGSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"limoSpeed") ) { limoSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"limoCorpse") ) { limoCorpse=inValue.Cast<  ::objects::BGSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"dancersDiff") ) { dancersDiff=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"limoMetalPole") ) { limoMetalPole=inValue.Cast<  ::objects::BGSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"limoCorpseTwo") ) { limoCorpseTwo=inValue.Cast<  ::objects::BGSprite >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"grpLimoDancers") ) { grpLimoDancers=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fastCarCanDrive") ) { fastCarCanDrive=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"limoKillingState") ) { limoKillingState=inValue.Cast<  ::states::stages::HenchmenKillState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grpLimoParticles") ) { grpLimoParticles=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Limo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("grpLimoDancers",70,18,93,51));
	outFields->push(HX_("fastCar",d8,f2,1f,de));
	outFields->push(HX_("fastCarCanDrive",d2,f1,13,ee));
	outFields->push(HX_("limoKillingState",2c,a9,3f,1b));
	outFields->push(HX_("limoMetalPole",c0,48,0e,ac));
	outFields->push(HX_("limoLight",37,b9,f3,91));
	outFields->push(HX_("limoCorpse",fb,fc,ca,05));
	outFields->push(HX_("limoCorpseTwo",51,37,63,6c));
	outFields->push(HX_("bgLimo",84,5f,cb,af));
	outFields->push(HX_("grpLimoParticles",29,25,41,c8));
	outFields->push(HX_("dancersDiff",d9,cb,54,56));
	outFields->push(HX_("limoSpeed",e8,bf,60,9e));
	outFields->push(HX_("carTimer",11,73,36,18));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Limo_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(Limo_obj,grpLimoDancers),HX_("grpLimoDancers",70,18,93,51)},
	{::hx::fsObject /*  ::objects::BGSprite */ ,(int)offsetof(Limo_obj,fastCar),HX_("fastCar",d8,f2,1f,de)},
	{::hx::fsBool,(int)offsetof(Limo_obj,fastCarCanDrive),HX_("fastCarCanDrive",d2,f1,13,ee)},
	{::hx::fsObject /*  ::states::stages::HenchmenKillState */ ,(int)offsetof(Limo_obj,limoKillingState),HX_("limoKillingState",2c,a9,3f,1b)},
	{::hx::fsObject /*  ::objects::BGSprite */ ,(int)offsetof(Limo_obj,limoMetalPole),HX_("limoMetalPole",c0,48,0e,ac)},
	{::hx::fsObject /*  ::objects::BGSprite */ ,(int)offsetof(Limo_obj,limoLight),HX_("limoLight",37,b9,f3,91)},
	{::hx::fsObject /*  ::objects::BGSprite */ ,(int)offsetof(Limo_obj,limoCorpse),HX_("limoCorpse",fb,fc,ca,05)},
	{::hx::fsObject /*  ::objects::BGSprite */ ,(int)offsetof(Limo_obj,limoCorpseTwo),HX_("limoCorpseTwo",51,37,63,6c)},
	{::hx::fsObject /*  ::objects::BGSprite */ ,(int)offsetof(Limo_obj,bgLimo),HX_("bgLimo",84,5f,cb,af)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(Limo_obj,grpLimoParticles),HX_("grpLimoParticles",29,25,41,c8)},
	{::hx::fsFloat,(int)offsetof(Limo_obj,dancersDiff),HX_("dancersDiff",d9,cb,54,56)},
	{::hx::fsFloat,(int)offsetof(Limo_obj,limoSpeed),HX_("limoSpeed",e8,bf,60,9e)},
	{::hx::fsObject /*  ::flixel::util::FlxTimer */ ,(int)offsetof(Limo_obj,carTimer),HX_("carTimer",11,73,36,18)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Limo_obj_sStaticStorageInfo = 0;
#endif

static ::String Limo_obj_sMemberFields[] = {
	HX_("grpLimoDancers",70,18,93,51),
	HX_("fastCar",d8,f2,1f,de),
	HX_("fastCarCanDrive",d2,f1,13,ee),
	HX_("limoKillingState",2c,a9,3f,1b),
	HX_("limoMetalPole",c0,48,0e,ac),
	HX_("limoLight",37,b9,f3,91),
	HX_("limoCorpse",fb,fc,ca,05),
	HX_("limoCorpseTwo",51,37,63,6c),
	HX_("bgLimo",84,5f,cb,af),
	HX_("grpLimoParticles",29,25,41,c8),
	HX_("dancersDiff",d9,cb,54,56),
	HX_("create",fc,66,0f,7c),
	HX_("createPost",7c,45,ea,5c),
	HX_("limoSpeed",e8,bf,60,9e),
	HX_("update",09,86,05,87),
	HX_("beatHit",7d,ea,04,74),
	HX_("closeSubState",49,18,32,04),
	HX_("openSubState",5b,66,48,37),
	HX_("eventCalled",37,a0,35,0a),
	HX_("dancersParenting",a4,cd,50,b8),
	HX_("resetLimoKill",4c,8b,78,10),
	HX_("resetFastCar",c9,38,fe,4f),
	HX_("carTimer",11,73,36,18),
	HX_("fastCarDrive",12,97,d2,be),
	HX_("killHenchmen",de,fd,a5,32),
	::String(null()) };

::hx::Class Limo_obj::__mClass;

void Limo_obj::__register()
{
	Limo_obj _hx_dummy;
	Limo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.stages.Limo",2c,e5,4d,91);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Limo_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Limo_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Limo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Limo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
} // end namespace stages
