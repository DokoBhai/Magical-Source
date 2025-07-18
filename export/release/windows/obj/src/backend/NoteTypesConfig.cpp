// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_NoteTypesConfig
#include <backend/NoteTypesConfig.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
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
#ifndef INCLUDED_objects_Note
#include <objects/Note.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_59e44f2791909106_14_clearNoteTypesData,"backend.NoteTypesConfig","clearNoteTypesData",0x14d45b63,"backend.NoteTypesConfig.clearNoteTypesData","backend/NoteTypesConfig.hx",14,0x2e0c9590)
HX_LOCAL_STACK_FRAME(_hx_pos_59e44f2791909106_17_loadNoteTypeData,"backend.NoteTypesConfig","loadNoteTypeData",0xbdcbeddb,"backend.NoteTypesConfig.loadNoteTypeData","backend/NoteTypesConfig.hx",17,0x2e0c9590)
HX_LOCAL_STACK_FRAME(_hx_pos_59e44f2791909106_49_applyNoteTypeData,"backend.NoteTypesConfig","applyNoteTypeData",0xd01b6745,"backend.NoteTypesConfig.applyNoteTypeData","backend/NoteTypesConfig.hx",49,0x2e0c9590)
HX_LOCAL_STACK_FRAME(_hx_pos_59e44f2791909106_86__propCheckArray,"backend.NoteTypesConfig","_propCheckArray",0x1b152c34,"backend.NoteTypesConfig._propCheckArray","backend/NoteTypesConfig.hx",86,0x2e0c9590)
HX_LOCAL_STACK_FRAME(_hx_pos_59e44f2791909106_110__interpretValue,"backend.NoteTypesConfig","_interpretValue",0x35d5cb24,"backend.NoteTypesConfig._interpretValue","backend/NoteTypesConfig.hx",110,0x2e0c9590)
HX_LOCAL_STACK_FRAME(_hx_pos_59e44f2791909106_12_boot,"backend.NoteTypesConfig","boot",0x04dff831,"backend.NoteTypesConfig.boot","backend/NoteTypesConfig.hx",12,0x2e0c9590)
namespace backend{

void NoteTypesConfig_obj::__construct() { }

Dynamic NoteTypesConfig_obj::__CreateEmpty() { return new NoteTypesConfig_obj; }

void *NoteTypesConfig_obj::_hx_vtable = 0;

Dynamic NoteTypesConfig_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NoteTypesConfig_obj > _hx_result = new NoteTypesConfig_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NoteTypesConfig_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x75bbaa95;
}

 ::haxe::ds::StringMap NoteTypesConfig_obj::noteTypesData;

void NoteTypesConfig_obj::clearNoteTypesData(){
            	HX_STACKFRAME(&_hx_pos_59e44f2791909106_14_clearNoteTypesData)
HXDLIN(  14)		::backend::NoteTypesConfig_obj::noteTypesData->clear();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NoteTypesConfig_obj,clearNoteTypesData,(void))

::Array< ::Dynamic> NoteTypesConfig_obj::loadNoteTypeData(::String name){
            	HX_STACKFRAME(&_hx_pos_59e44f2791909106_17_loadNoteTypeData)
HXLINE(  18)		if (::backend::NoteTypesConfig_obj::noteTypesData->exists(name)) {
HXLINE(  18)			return ( (::Array< ::Dynamic>)(::backend::NoteTypesConfig_obj::noteTypesData->get(name)) );
            		}
HXLINE(  20)		::String path = ::backend::Paths_obj::getPath(((HX_("custom_notetypes/",16,04,18,a1) + name) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),null(),true);
HXDLIN(  20)		::String str;
HXDLIN(  20)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  20)			str = ::sys::io::File_obj::getContent(path);
            		}
            		else {
HXLINE(  20)			str = null();
            		}
HXLINE(  21)		bool _hx_tmp;
HXDLIN(  21)		bool _hx_tmp1;
HXDLIN(  21)		if (::hx::IsNotNull( str )) {
HXLINE(  21)			_hx_tmp1 = (str.indexOf(HX_(":",3a,00,00,00),null()) == -1);
            		}
            		else {
HXLINE(  21)			_hx_tmp1 = true;
            		}
HXDLIN(  21)		if (!(_hx_tmp1)) {
HXLINE(  21)			_hx_tmp = (str.indexOf(HX_("=",3d,00,00,00),null()) == -1);
            		}
            		else {
HXLINE(  21)			_hx_tmp = true;
            		}
HXDLIN(  21)		if (_hx_tmp) {
HXLINE(  21)			::Array< ::Dynamic> value = null();
HXDLIN(  21)			::backend::NoteTypesConfig_obj::noteTypesData->set(name,value);
            		}
HXLINE(  23)		::Array< ::Dynamic> parsed = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  24)		::Array< ::String > daList = ::Array_obj< ::String >::__new(0);
HXDLIN(  24)		daList = ::StringTools_obj::trim(str).split(HX_("\n",0a,00,00,00));
HXDLIN(  24)		{
HXLINE(  24)			int _g = 0;
HXDLIN(  24)			int _g1 = daList->length;
HXDLIN(  24)			while((_g < _g1)){
HXLINE(  24)				_g = (_g + 1);
HXDLIN(  24)				int i = (_g - 1);
HXDLIN(  24)				daList[i] = ::StringTools_obj::trim(daList->__get(i));
            			}
            		}
HXDLIN(  24)		::Array< ::String > lines = daList;
HXLINE(  25)		{
HXLINE(  25)			int _g2 = 0;
HXDLIN(  25)			while((_g2 < lines->length)){
HXLINE(  25)				::String line = lines->__get(_g2);
HXDLIN(  25)				_g2 = (_g2 + 1);
HXLINE(  27)				int sep = line.indexOf(HX_(":",3a,00,00,00),null());
HXLINE(  28)				if ((sep < 0)) {
HXLINE(  30)					sep = line.indexOf(HX_("=",3d,00,00,00),null());
HXLINE(  31)					if ((sep < 0)) {
HXLINE(  31)						continue;
            					}
            				}
HXLINE(  34)				::Array< ::String > arr = ::StringTools_obj::trim(line.substr(0,sep)).split(HX_(".",2e,00,00,00));
HXLINE(  35)				{
HXLINE(  35)					int _g3 = 0;
HXDLIN(  35)					int _g4 = arr->length;
HXDLIN(  35)					while((_g3 < _g4)){
HXLINE(  35)						_g3 = (_g3 + 1);
HXDLIN(  35)						int i1 = (_g3 - 1);
HXDLIN(  35)						arr[i1] = ::StringTools_obj::trim(arr->__get(i1));
            					}
            				}
HXLINE(  37)				 ::Dynamic newProp =  ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("property",55,48,38,ac),arr)
            					->setFixed(1,HX_("value",71,7f,b8,31),::backend::NoteTypesConfig_obj::_interpretValue(::StringTools_obj::trim(line.substr((sep + 1),null())))));
HXLINE(  42)				parsed->push(newProp);
            			}
            		}
HXLINE(  44)		::backend::NoteTypesConfig_obj::noteTypesData->set(name,parsed);
HXLINE(  45)		return parsed;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NoteTypesConfig_obj,loadNoteTypeData,return )

void NoteTypesConfig_obj::applyNoteTypeData( ::objects::Note note,::String name){
            	HX_STACKFRAME(&_hx_pos_59e44f2791909106_49_applyNoteTypeData)
HXLINE(  50)		::Array< ::Dynamic> data = ::backend::NoteTypesConfig_obj::loadNoteTypeData(name);
HXLINE(  51)		bool _hx_tmp;
HXDLIN(  51)		if (::hx::IsNotNull( data )) {
HXLINE(  51)			_hx_tmp = (data->length < 1);
            		}
            		else {
HXLINE(  51)			_hx_tmp = true;
            		}
HXDLIN(  51)		if (_hx_tmp) {
HXLINE(  51)			return;
            		}
HXLINE(  53)		{
HXLINE(  53)			int _g = 0;
HXDLIN(  53)			while((_g < data->length)){
HXLINE(  53)				 ::Dynamic line = data->__get(_g);
HXDLIN(  53)				_g = (_g + 1);
HXLINE(  55)				 ::Dynamic obj = note;
HXLINE(  56)				::Array< ::String > split = ( (::Array< ::String >)(line->__Field(HX_("property",55,48,38,ac),::hx::paccDynamic)) );
HXLINE(  57)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  59)					if ((split->length <= 1)) {
HXLINE(  61)						::backend::NoteTypesConfig_obj::_propCheckArray(obj,split->__get(0),true, ::Dynamic(line->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic)));
HXLINE(  62)						continue;
            					}
HXLINE(  65)					::String _hx_switch_0 = split->__get(0);
            					if (  (_hx_switch_0==HX_("extraData",da,a4,67,7c)) ){
HXLINE(  68)						note->extraData->set(split->__get(1), ::Dynamic(line->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic)));
HXLINE(  69)						continue;
HXLINE(  67)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_0==HX_("noteType",cc,17,3c,5c)) ){
HXLINE(  72)						continue;
HXDLIN(  72)						goto _hx_goto_6;
            					}
            					_hx_goto_6:;
HXLINE(  75)					{
HXLINE(  75)						int _g1 = 0;
HXDLIN(  75)						int _g2 = (split->length - 1);
HXDLIN(  75)						while((_g1 < _g2)){
HXLINE(  75)							_g1 = (_g1 + 1);
HXDLIN(  75)							int i = (_g1 - 1);
HXLINE(  77)							if ((i < (split->length - 1))) {
HXLINE(  78)								obj = ::backend::NoteTypesConfig_obj::_propCheckArray(obj,split->__get(i),null(),null());
            							}
            						}
            					}
HXLINE(  80)					::backend::NoteTypesConfig_obj::_propCheckArray(obj,split->__get((split->length - 1)),true, ::Dynamic(line->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic)));
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g3 = _hx_e;
HXLINE(  81)						 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g3);
HXDLIN(  81)						::haxe::Log_obj::trace(e,::hx::SourceInfo(HX_("source/backend/NoteTypesConfig.hx",84,85,13,1b),81,HX_("backend.NoteTypesConfig",cf,6c,42,d8),HX_("applyNoteTypeData",a4,ae,45,d7)));
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NoteTypesConfig_obj,applyNoteTypeData,(void))

 ::Dynamic NoteTypesConfig_obj::_propCheckArray( ::Dynamic obj,::String slice,::hx::Null< bool >  __o_setProp, ::Dynamic valueToSet){
            		bool setProp = __o_setProp.Default(false);
            	HX_STACKFRAME(&_hx_pos_59e44f2791909106_86__propCheckArray)
HXLINE(  87)		::Array< ::String > propArray = slice.split(HX_("[",5b,00,00,00));
HXLINE(  88)		if ((propArray->length > 1)) {
HXLINE(  90)			{
HXLINE(  90)				int _g = 0;
HXDLIN(  90)				int _g1 = propArray->length;
HXDLIN(  90)				while((_g < _g1)){
HXLINE(  90)					_g = (_g + 1);
HXDLIN(  90)					int i = (_g - 1);
HXLINE(  92)					 ::Dynamic str = propArray->__get(i);
HXLINE(  93)					int id = ( (int)(::Std_obj::parseInt(( (::String)(str->__Field(HX_("substr",31,ef,0a,9a),::hx::paccDynamic)(0,(( (Float)(str->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic)) ) - ( (Float)(1) )))->__Field(HX_("trim",e2,9c,03,4d),::hx::paccDynamic)()) ))) );
HXLINE(  94)					if ((i < (propArray->length - 1))) {
HXLINE(  94)						obj = obj->__GetItem(id);
            					}
            					else {
HXLINE(  95)						if (setProp) {
HXLINE(  95)							return (obj->__SetItem(id,valueToSet));
            						}
            					}
            				}
            			}
HXLINE(  97)			return obj;
            		}
            		else {
HXLINE(  99)			if (setProp) {
HXLINE( 102)				::Reflect_obj::setProperty(obj,slice,valueToSet);
HXLINE( 103)				return valueToSet;
            			}
            		}
HXLINE( 106)		return ::Reflect_obj::getProperty(obj,slice);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NoteTypesConfig_obj,_propCheckArray,return )

 ::Dynamic NoteTypesConfig_obj::_interpretValue(::String value){
            	HX_STACKFRAME(&_hx_pos_59e44f2791909106_110__interpretValue)
HXLINE( 111)		bool _hx_tmp;
HXDLIN( 111)		if ((value.charAt(0) != HX_("'",27,00,00,00))) {
HXLINE( 111)			_hx_tmp = (value.charAt(0) == HX_("\"",22,00,00,00));
            		}
            		else {
HXLINE( 111)			_hx_tmp = true;
            		}
HXDLIN( 111)		if (_hx_tmp) {
HXLINE( 114)			return value.substring(1,(value.length - 1));
            		}
HXLINE( 117)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("false",a3,35,4f,fb)) ){
HXLINE( 122)			return false;
HXDLIN( 122)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("null",87,9e,0e,49)) ){
HXLINE( 124)			return null();
HXDLIN( 124)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("true",4e,a7,03,4d)) ){
HXLINE( 120)			return true;
HXDLIN( 120)			goto _hx_goto_11;
            		}
            		_hx_goto_11:;
HXLINE( 127)		if ((value.indexOf(HX_(".",2e,00,00,00),null()) != -1)) {
HXLINE( 127)			return ::Std_obj::parseFloat(value);
            		}
HXLINE( 128)		return ::Std_obj::parseInt(value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NoteTypesConfig_obj,_interpretValue,return )


NoteTypesConfig_obj::NoteTypesConfig_obj()
{
}

bool NoteTypesConfig_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"noteTypesData") ) { outValue = ( noteTypesData ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_propCheckArray") ) { outValue = _propCheckArray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"_interpretValue") ) { outValue = _interpretValue_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"loadNoteTypeData") ) { outValue = loadNoteTypeData_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"applyNoteTypeData") ) { outValue = applyNoteTypeData_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"clearNoteTypesData") ) { outValue = clearNoteTypesData_dyn(); return true; }
	}
	return false;
}

bool NoteTypesConfig_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"noteTypesData") ) { noteTypesData=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NoteTypesConfig_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo NoteTypesConfig_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &NoteTypesConfig_obj::noteTypesData,HX_("noteTypesData",f1,5c,af,f4)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void NoteTypesConfig_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NoteTypesConfig_obj::noteTypesData,"noteTypesData");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NoteTypesConfig_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NoteTypesConfig_obj::noteTypesData,"noteTypesData");
};

#endif

::hx::Class NoteTypesConfig_obj::__mClass;

static ::String NoteTypesConfig_obj_sStaticFields[] = {
	HX_("noteTypesData",f1,5c,af,f4),
	HX_("clearNoteTypesData",24,87,a8,52),
	HX_("loadNoteTypeData",5c,f7,e9,70),
	HX_("applyNoteTypeData",a4,ae,45,d7),
	HX_("_propCheckArray",d3,8d,6c,94),
	HX_("_interpretValue",c3,2c,2d,af),
	::String(null())
};

void NoteTypesConfig_obj::__register()
{
	NoteTypesConfig_obj _hx_dummy;
	NoteTypesConfig_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("backend.NoteTypesConfig",cf,6c,42,d8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NoteTypesConfig_obj::__GetStatic;
	__mClass->mSetStaticField = &NoteTypesConfig_obj::__SetStatic;
	__mClass->mMarkFunc = NoteTypesConfig_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NoteTypesConfig_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< NoteTypesConfig_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NoteTypesConfig_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NoteTypesConfig_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NoteTypesConfig_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NoteTypesConfig_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_59e44f2791909106_12_boot)
HXDLIN(  12)		noteTypesData =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace backend
