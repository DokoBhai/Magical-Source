// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Language
#include <backend/Language.h>
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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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
#ifndef INCLUDED_objects_CheckboxThingie
#include <objects/CheckboxThingie.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_887251bd35cceed3_3_new,"objects.CheckboxThingie","new",0x22c556ff,"objects.CheckboxThingie.new","objects/CheckboxThingie.hx",3,0x5ebfe192)
HX_LOCAL_STACK_FRAME(_hx_pos_887251bd35cceed3_28_update,"objects.CheckboxThingie","update",0xbce4acca,"objects.CheckboxThingie.update","objects/CheckboxThingie.hx",28,0x5ebfe192)
HX_LOCAL_STACK_FRAME(_hx_pos_887251bd35cceed3_38_set_daValue,"objects.CheckboxThingie","set_daValue",0x38a57776,"objects.CheckboxThingie.set_daValue","objects/CheckboxThingie.hx",38,0x5ebfe192)
HX_LOCAL_STACK_FRAME(_hx_pos_887251bd35cceed3_53_animationFinished,"objects.CheckboxThingie","animationFinished",0x1eda2175,"objects.CheckboxThingie.animationFinished","objects/CheckboxThingie.hx",53,0x5ebfe192)
namespace objects{

void CheckboxThingie_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_checked){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		 ::Dynamic checked = __o_checked;
            		if (::hx::IsNull(__o_checked)) checked = false;
            	HX_STACKFRAME(&_hx_pos_887251bd35cceed3_3_new)
HXLINE(   9)		this->offsetY = ((Float)0);
HXLINE(   8)		this->offsetX = ((Float)0);
HXLINE(   7)		this->copyAlpha = true;
HXLINE(  11)		super::__construct(x,y,null());
HXLINE(  13)		::String parentFolder = null();
HXDLIN(  13)		if ((HX_("checkboxanim",d4,35,91,c5).indexOf(HX_("psychic",d5,09,aa,19),null()) != -1)) {
HXLINE(  13)			::haxe::Log_obj::trace(HX_("checkboxanim",d4,35,91,c5), ::Dynamic(::hx::Anon_obj::Create(5)
            				->setFixed(0,HX_("className",a3,92,3d,dc),HX_("backend.Paths",34,17,99,92))
            				->setFixed(1,HX_("customParams",d7,51,18,ed),::cpp::VirtualArray_obj::__new(2)->init(0,parentFolder)->init(1,true))
            				->setFixed(2,HX_("methodName",cc,19,0f,12),HX_("getSparrowAtlas",55,ab,b7,a7))
            				->setFixed(3,HX_("fileName",e7,5a,43,62),HX_("source/backend/Paths.hx",ff,43,8c,3d))
            				->setFixed(4,HX_("lineNumber",dd,81,22,76),372)));
            		}
HXDLIN(  13)		 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(HX_("checkboxanim",d4,35,91,c5),parentFolder,true);
HXDLIN(  13)		bool xmlExists = false;
HXDLIN(  13)		::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("checkboxanim",d4,35,91,c5)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN(  13)		if (::sys::FileSystem_obj::exists(xml)) {
HXLINE(  13)			xmlExists = true;
            		}
HXDLIN(  13)		 ::Dynamic _hx_tmp;
HXDLIN(  13)		if (xmlExists) {
HXLINE(  13)			_hx_tmp = ::sys::io::File_obj::getContent(xml);
            		}
            		else {
HXLINE(  13)			::String key = (HX_("images/",77,50,74,c1) + HX_("checkboxanim",d4,35,91,c5));
HXDLIN(  13)			::Dynamic this1 = ::backend::Language_obj::phrases;
HXDLIN(  13)			::String str = ( ( ::haxe::ds::StringMap)(this1) )->get_string(::StringTools_obj::trim(key).toLowerCase());
HXDLIN(  13)			if (::hx::IsNotNull( str )) {
HXLINE(  13)				key = str;
            			}
HXDLIN(  13)			_hx_tmp = ::backend::Paths_obj::getPath((key + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),parentFolder,null());
            		}
HXDLIN(  13)		this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(imageLoaded,_hx_tmp));
HXLINE(  14)		this->animation->addByPrefix(HX_("unchecked",ee,b9,26,0f),HX_("checkbox0",8d,28,22,aa),24,false,null(),null());
HXLINE(  15)		this->animation->addByPrefix(HX_("unchecking",73,08,bf,32),HX_("checkbox anim reverse",10,6c,75,b1),24,false,null(),null());
HXLINE(  16)		this->animation->addByPrefix(HX_("checking",1a,21,fb,ac),HX_("checkbox anim0",62,bb,8c,be),24,false,null(),null());
HXLINE(  17)		this->animation->addByPrefix(HX_("checked",27,b3,24,13),HX_("checkbox finish",90,64,aa,1e),24,false,null(),null());
HXLINE(  19)		this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  20)		this->setGraphicSize(::Std_obj::_hx_int((((Float)0.9) * this->get_width())),null());
HXLINE(  21)		this->updateHitbox();
HXLINE(  23)		::String _hx_tmp1;
HXDLIN(  23)		if (( (bool)(checked) )) {
HXLINE(  23)			_hx_tmp1 = HX_("checking",1a,21,fb,ac);
            		}
            		else {
HXLINE(  23)			_hx_tmp1 = HX_("unchecking",73,08,bf,32);
            		}
HXDLIN(  23)		this->animationFinished(_hx_tmp1);
HXLINE(  24)		this->animation->finishCallback = this->animationFinished_dyn();
HXLINE(  25)		this->set_daValue(( (bool)(checked) ));
            	}

Dynamic CheckboxThingie_obj::__CreateEmpty() { return new CheckboxThingie_obj; }

void *CheckboxThingie_obj::_hx_vtable = 0;

Dynamic CheckboxThingie_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CheckboxThingie_obj > _hx_result = new CheckboxThingie_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool CheckboxThingie_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x02ec3fff) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x02ec3fff;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void CheckboxThingie_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_887251bd35cceed3_28_update)
HXLINE(  29)		if (::hx::IsNotNull( this->sprTracker )) {
HXLINE(  30)			this->setPosition(((this->sprTracker->x - ( (Float)(130) )) + this->offsetX),((this->sprTracker->y + 30) + this->offsetY));
HXLINE(  31)			if (this->copyAlpha) {
HXLINE(  32)				this->set_alpha(this->sprTracker->alpha);
            			}
            		}
HXLINE(  35)		this->super::update(elapsed);
            	}


bool CheckboxThingie_obj::set_daValue(bool check){
            	HX_STACKFRAME(&_hx_pos_887251bd35cceed3_38_set_daValue)
HXLINE(  39)		if (check) {
HXLINE(  40)			bool _hx_tmp;
HXDLIN(  40)			if ((this->animation->_curAnim->name != HX_("checked",27,b3,24,13))) {
HXLINE(  40)				_hx_tmp = (this->animation->_curAnim->name != HX_("checking",1a,21,fb,ac));
            			}
            			else {
HXLINE(  40)				_hx_tmp = false;
            			}
HXDLIN(  40)			if (_hx_tmp) {
HXLINE(  41)				this->animation->play(HX_("checking",1a,21,fb,ac),true,null(),null());
HXLINE(  42)				{
HXLINE(  42)					 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN(  42)					this1->set_x(( (Float)(34) ));
HXDLIN(  42)					this1->set_y(( (Float)(25) ));
            				}
            			}
            		}
            		else {
HXLINE(  44)			bool _hx_tmp1;
HXDLIN(  44)			if ((this->animation->_curAnim->name != HX_("unchecked",ee,b9,26,0f))) {
HXLINE(  44)				_hx_tmp1 = (this->animation->_curAnim->name != HX_("unchecking",73,08,bf,32));
            			}
            			else {
HXLINE(  44)				_hx_tmp1 = false;
            			}
HXDLIN(  44)			if (_hx_tmp1) {
HXLINE(  45)				this->animation->play(HX_("unchecking",73,08,bf,32),true,null(),null());
HXLINE(  46)				{
HXLINE(  46)					 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN(  46)					this2->set_x(( (Float)(25) ));
HXDLIN(  46)					this2->set_y(( (Float)(28) ));
            				}
            			}
            		}
HXLINE(  48)		return check;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CheckboxThingie_obj,set_daValue,return )

void CheckboxThingie_obj::animationFinished(::String name){
            	HX_STACKFRAME(&_hx_pos_887251bd35cceed3_53_animationFinished)
HXDLIN(  53)		::String _hx_switch_0 = name;
            		if (  (_hx_switch_0==HX_("checking",1a,21,fb,ac)) ){
HXLINE(  56)			this->animation->play(HX_("checked",27,b3,24,13),true,null(),null());
HXLINE(  57)			{
HXLINE(  57)				 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN(  57)				this1->set_x(( (Float)(3) ));
HXDLIN(  57)				this1->set_y(( (Float)(12) ));
            			}
HXLINE(  55)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("unchecking",73,08,bf,32)) ){
HXLINE(  60)			this->animation->play(HX_("unchecked",ee,b9,26,0f),true,null(),null());
HXLINE(  61)			{
HXLINE(  61)				 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN(  61)				this2->set_x(( (Float)(0) ));
HXDLIN(  61)				this2->set_y(( (Float)(2) ));
            			}
HXLINE(  59)			goto _hx_goto_3;
            		}
            		_hx_goto_3:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CheckboxThingie_obj,animationFinished,(void))


::hx::ObjectPtr< CheckboxThingie_obj > CheckboxThingie_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_checked) {
	::hx::ObjectPtr< CheckboxThingie_obj > __this = new CheckboxThingie_obj();
	__this->__construct(__o_x,__o_y,__o_checked);
	return __this;
}

::hx::ObjectPtr< CheckboxThingie_obj > CheckboxThingie_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y, ::Dynamic __o_checked) {
	CheckboxThingie_obj *__this = (CheckboxThingie_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CheckboxThingie_obj), true, "objects.CheckboxThingie"));
	*(void **)__this = CheckboxThingie_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,__o_checked);
	return __this;
}

CheckboxThingie_obj::CheckboxThingie_obj()
{
}

void CheckboxThingie_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CheckboxThingie);
	HX_MARK_MEMBER_NAME(sprTracker,"sprTracker");
	HX_MARK_MEMBER_NAME(daValue,"daValue");
	HX_MARK_MEMBER_NAME(copyAlpha,"copyAlpha");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CheckboxThingie_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprTracker,"sprTracker");
	HX_VISIT_MEMBER_NAME(daValue,"daValue");
	HX_VISIT_MEMBER_NAME(copyAlpha,"copyAlpha");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CheckboxThingie_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"daValue") ) { return ::hx::Val( daValue ); }
		if (HX_FIELD_EQ(inName,"offsetX") ) { return ::hx::Val( offsetX ); }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return ::hx::Val( offsetY ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyAlpha") ) { return ::hx::Val( copyAlpha ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { return ::hx::Val( sprTracker ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_daValue") ) { return ::hx::Val( set_daValue_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"animationFinished") ) { return ::hx::Val( animationFinished_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CheckboxThingie_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"daValue") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_daValue(inValue.Cast< bool >()) );daValue=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyAlpha") ) { copyAlpha=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { sprTracker=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CheckboxThingie_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sprTracker",03,a3,e2,78));
	outFields->push(HX_("daValue",b4,52,e6,cb));
	outFields->push(HX_("copyAlpha",69,cb,91,a7));
	outFields->push(HX_("offsetX",65,09,65,d7));
	outFields->push(HX_("offsetY",66,09,65,d7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CheckboxThingie_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CheckboxThingie_obj,sprTracker),HX_("sprTracker",03,a3,e2,78)},
	{::hx::fsBool,(int)offsetof(CheckboxThingie_obj,daValue),HX_("daValue",b4,52,e6,cb)},
	{::hx::fsBool,(int)offsetof(CheckboxThingie_obj,copyAlpha),HX_("copyAlpha",69,cb,91,a7)},
	{::hx::fsFloat,(int)offsetof(CheckboxThingie_obj,offsetX),HX_("offsetX",65,09,65,d7)},
	{::hx::fsFloat,(int)offsetof(CheckboxThingie_obj,offsetY),HX_("offsetY",66,09,65,d7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CheckboxThingie_obj_sStaticStorageInfo = 0;
#endif

static ::String CheckboxThingie_obj_sMemberFields[] = {
	HX_("sprTracker",03,a3,e2,78),
	HX_("daValue",b4,52,e6,cb),
	HX_("copyAlpha",69,cb,91,a7),
	HX_("offsetX",65,09,65,d7),
	HX_("offsetY",66,09,65,d7),
	HX_("update",09,86,05,87),
	HX_("set_daValue",d7,b9,4d,5c),
	HX_("animationFinished",96,e2,c1,ba),
	::String(null()) };

::hx::Class CheckboxThingie_obj::__mClass;

void CheckboxThingie_obj::__register()
{
	CheckboxThingie_obj _hx_dummy;
	CheckboxThingie_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.CheckboxThingie",8d,6b,78,58);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CheckboxThingie_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CheckboxThingie_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CheckboxThingie_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CheckboxThingie_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace objects
