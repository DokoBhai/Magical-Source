// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_Language
#include <backend/Language.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_states_stages_objects_BackgroundGirls
#include <states/stages/objects/BackgroundGirls.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ba0947b87f4f6853_3_new,"states.stages.objects.BackgroundGirls","new",0xf867f034,"states.stages.objects.BackgroundGirls.new","states/stages/objects/BackgroundGirls.hx",3,0x40c9c01d)
HX_LOCAL_STACK_FRAME(_hx_pos_ba0947b87f4f6853_23_swapDanceType,"states.stages.objects.BackgroundGirls","swapDanceType",0x61b6b34e,"states.stages.objects.BackgroundGirls.swapDanceType","states/stages/objects/BackgroundGirls.hx",23,0x40c9c01d)
HX_LOCAL_STACK_FRAME(_hx_pos_ba0947b87f4f6853_36_dance,"states.stages.objects.BackgroundGirls","dance",0x11be4007,"states.stages.objects.BackgroundGirls.dance","states/stages/objects/BackgroundGirls.hx",36,0x40c9c01d)
namespace states{
namespace stages{
namespace objects{

void BackgroundGirls_obj::__construct(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_ba0947b87f4f6853_3_new)
HXLINE(  20)		this->danceDir = false;
HXLINE(   5)		this->isPissed = true;
HXLINE(   8)		super::__construct(x,y,null());
HXLINE(  11)		::String parentFolder = null();
HXDLIN(  11)		if ((HX_("weeb/bgFreaks",d9,71,bd,0f).indexOf(HX_("psychic",d5,09,aa,19),null()) != -1)) {
HXLINE(  11)			::haxe::Log_obj::trace(HX_("weeb/bgFreaks",d9,71,bd,0f), ::Dynamic(::hx::Anon_obj::Create(5)
            				->setFixed(0,HX_("className",a3,92,3d,dc),HX_("backend.Paths",34,17,99,92))
            				->setFixed(1,HX_("customParams",d7,51,18,ed),::cpp::VirtualArray_obj::__new(2)->init(0,parentFolder)->init(1,true))
            				->setFixed(2,HX_("methodName",cc,19,0f,12),HX_("getSparrowAtlas",55,ab,b7,a7))
            				->setFixed(3,HX_("fileName",e7,5a,43,62),HX_("source/backend/Paths.hx",ff,43,8c,3d))
            				->setFixed(4,HX_("lineNumber",dd,81,22,76),372)));
            		}
HXDLIN(  11)		 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(HX_("weeb/bgFreaks",d9,71,bd,0f),parentFolder,true);
HXDLIN(  11)		bool xmlExists = false;
HXDLIN(  11)		::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("weeb/bgFreaks",d9,71,bd,0f)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN(  11)		if (::sys::FileSystem_obj::exists(xml)) {
HXLINE(  11)			xmlExists = true;
            		}
HXDLIN(  11)		 ::Dynamic _hx_tmp;
HXDLIN(  11)		if (xmlExists) {
HXLINE(  11)			_hx_tmp = ::sys::io::File_obj::getContent(xml);
            		}
            		else {
HXLINE(  11)			::String key = (HX_("images/",77,50,74,c1) + HX_("weeb/bgFreaks",d9,71,bd,0f));
HXDLIN(  11)			::Dynamic this1 = ::backend::Language_obj::phrases;
HXDLIN(  11)			::String str = ( ( ::haxe::ds::StringMap)(this1) )->get_string(::StringTools_obj::trim(key).toLowerCase());
HXDLIN(  11)			if (::hx::IsNotNull( str )) {
HXLINE(  11)				key = str;
            			}
HXDLIN(  11)			_hx_tmp = ::backend::Paths_obj::getPath((key + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),parentFolder,null());
            		}
HXDLIN(  11)		this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(imageLoaded,_hx_tmp));
HXLINE(  12)		this->set_antialiasing(false);
HXLINE(  13)		this->swapDanceType();
HXLINE(  15)		Float _hx_tmp1 = this->get_width();
HXDLIN(  15)		this->setGraphicSize(::Std_obj::_hx_int((_hx_tmp1 * ::states::PlayState_obj::daPixelZoom)),null());
HXLINE(  16)		this->updateHitbox();
HXLINE(  17)		this->animation->play(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            	}

Dynamic BackgroundGirls_obj::__CreateEmpty() { return new BackgroundGirls_obj; }

void *BackgroundGirls_obj::_hx_vtable = 0;

Dynamic BackgroundGirls_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BackgroundGirls_obj > _hx_result = new BackgroundGirls_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool BackgroundGirls_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x1c3621cc) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1c3621cc;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void BackgroundGirls_obj::swapDanceType(){
            	HX_STACKFRAME(&_hx_pos_ba0947b87f4f6853_23_swapDanceType)
HXLINE(  24)		this->isPissed = !(this->isPissed);
HXLINE(  25)		if (!(this->isPissed)) {
HXLINE(  26)			 ::flixel::animation::FlxAnimationController _hx_tmp = this->animation;
HXDLIN(  26)			::Array< int > dumbArray = ::Array_obj< int >::__new(0);
HXDLIN(  26)			{
HXLINE(  26)				int _g = 0;
HXDLIN(  26)				int _g1 = 14;
HXDLIN(  26)				while((_g < _g1)){
HXLINE(  26)					_g = (_g + 1);
HXDLIN(  26)					int i = (_g - 1);
HXDLIN(  26)					dumbArray->push(i);
            				}
            			}
HXDLIN(  26)			_hx_tmp->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("BG girls group",1b,d2,55,9d),dumbArray,HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  27)			 ::flixel::animation::FlxAnimationController _hx_tmp1 = this->animation;
HXDLIN(  27)			 ::Dynamic min = 15;
HXDLIN(  27)			if (::hx::IsNull( min )) {
HXLINE(  27)				min = 0;
            			}
HXDLIN(  27)			::Array< int > dumbArray1 = ::Array_obj< int >::__new(0);
HXDLIN(  27)			{
HXLINE(  27)				int _g2 = ( (int)(min) );
HXDLIN(  27)				int _g3 = 30;
HXDLIN(  27)				while((_g2 < _g3)){
HXLINE(  27)					_g2 = (_g2 + 1);
HXDLIN(  27)					int i1 = (_g2 - 1);
HXDLIN(  27)					dumbArray1->push(i1);
            				}
            			}
HXDLIN(  27)			_hx_tmp1->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("BG girls group",1b,d2,55,9d),dumbArray1,HX_("",00,00,00,00),24,false,null(),null());
            		}
            		else {
HXLINE(  29)			 ::flixel::animation::FlxAnimationController _hx_tmp2 = this->animation;
HXDLIN(  29)			::Array< int > dumbArray2 = ::Array_obj< int >::__new(0);
HXDLIN(  29)			{
HXLINE(  29)				int _g4 = 0;
HXDLIN(  29)				int _g5 = 14;
HXDLIN(  29)				while((_g4 < _g5)){
HXLINE(  29)					_g4 = (_g4 + 1);
HXDLIN(  29)					int i2 = (_g4 - 1);
HXDLIN(  29)					dumbArray2->push(i2);
            				}
            			}
HXDLIN(  29)			_hx_tmp2->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("BG fangirls dissuaded",b1,42,22,06),dumbArray2,HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  30)			 ::flixel::animation::FlxAnimationController _hx_tmp3 = this->animation;
HXDLIN(  30)			 ::Dynamic min1 = 15;
HXDLIN(  30)			if (::hx::IsNull( min1 )) {
HXLINE(  30)				min1 = 0;
            			}
HXDLIN(  30)			::Array< int > dumbArray3 = ::Array_obj< int >::__new(0);
HXDLIN(  30)			{
HXLINE(  30)				int _g6 = ( (int)(min1) );
HXDLIN(  30)				int _g7 = 30;
HXDLIN(  30)				while((_g6 < _g7)){
HXLINE(  30)					_g6 = (_g6 + 1);
HXDLIN(  30)					int i3 = (_g6 - 1);
HXDLIN(  30)					dumbArray3->push(i3);
            				}
            			}
HXDLIN(  30)			_hx_tmp3->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("BG fangirls dissuaded",b1,42,22,06),dumbArray3,HX_("",00,00,00,00),24,false,null(),null());
            		}
HXLINE(  32)		this->dance();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BackgroundGirls_obj,swapDanceType,(void))

void BackgroundGirls_obj::dance(){
            	HX_STACKFRAME(&_hx_pos_ba0947b87f4f6853_36_dance)
HXLINE(  37)		this->danceDir = !(this->danceDir);
HXLINE(  39)		if (this->danceDir) {
HXLINE(  40)			this->animation->play(HX_("danceRight",a9,7f,a6,91),true,null(),null());
            		}
            		else {
HXLINE(  42)			this->animation->play(HX_("danceLeft",da,cc,f9,df),true,null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BackgroundGirls_obj,dance,(void))


::hx::ObjectPtr< BackgroundGirls_obj > BackgroundGirls_obj::__new(Float x,Float y) {
	::hx::ObjectPtr< BackgroundGirls_obj > __this = new BackgroundGirls_obj();
	__this->__construct(x,y);
	return __this;
}

::hx::ObjectPtr< BackgroundGirls_obj > BackgroundGirls_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y) {
	BackgroundGirls_obj *__this = (BackgroundGirls_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BackgroundGirls_obj), true, "states.stages.objects.BackgroundGirls"));
	*(void **)__this = BackgroundGirls_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

BackgroundGirls_obj::BackgroundGirls_obj()
{
}

::hx::Val BackgroundGirls_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"dance") ) { return ::hx::Val( dance_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPissed") ) { return ::hx::Val( isPissed ); }
		if (HX_FIELD_EQ(inName,"danceDir") ) { return ::hx::Val( danceDir ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"swapDanceType") ) { return ::hx::Val( swapDanceType_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BackgroundGirls_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"isPissed") ) { isPissed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"danceDir") ) { danceDir=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BackgroundGirls_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("isPissed",02,13,d0,e1));
	outFields->push(HX_("danceDir",da,33,3a,58));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BackgroundGirls_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(BackgroundGirls_obj,isPissed),HX_("isPissed",02,13,d0,e1)},
	{::hx::fsBool,(int)offsetof(BackgroundGirls_obj,danceDir),HX_("danceDir",da,33,3a,58)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BackgroundGirls_obj_sStaticStorageInfo = 0;
#endif

static ::String BackgroundGirls_obj_sMemberFields[] = {
	HX_("isPissed",02,13,d0,e1),
	HX_("danceDir",da,33,3a,58),
	HX_("swapDanceType",7a,02,75,61),
	HX_("dance",33,83,83,d4),
	::String(null()) };

::hx::Class BackgroundGirls_obj::__mClass;

void BackgroundGirls_obj::__register()
{
	BackgroundGirls_obj _hx_dummy;
	BackgroundGirls_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.stages.objects.BackgroundGirls",42,06,3f,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BackgroundGirls_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BackgroundGirls_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BackgroundGirls_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BackgroundGirls_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
} // end namespace stages
} // end namespace objects
