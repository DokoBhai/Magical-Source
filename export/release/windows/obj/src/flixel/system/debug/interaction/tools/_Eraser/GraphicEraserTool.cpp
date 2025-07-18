// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_interaction_tools__Eraser_GraphicEraserTool
#include <flixel/system/debug/interaction/tools/_Eraser/GraphicEraserTool.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_15f406bf53dbc147_47_new,"flixel.system.debug.interaction.tools._Eraser.GraphicEraserTool","new",0x3c381404,"flixel.system.debug.interaction.tools._Eraser.GraphicEraserTool.new","openfl/utils/_internal/AssetsMacro.hx",47,0xfdd54705)
HX_LOCAL_STACK_FRAME(_hx_pos_1119b9aa6c07881a_11_boot,"flixel.system.debug.interaction.tools._Eraser.GraphicEraserTool","boot",0x6cf2700e,"flixel.system.debug.interaction.tools._Eraser.GraphicEraserTool.boot","flixel/system/debug/interaction/tools/Eraser.hx",11,0xa546bf98)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace interaction{
namespace tools{
namespace _Eraser{

void GraphicEraserTool_obj::__construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA){
            		 ::Dynamic transparent = __o_transparent;
            		if (::hx::IsNull(__o_transparent)) transparent = true;
            		 ::Dynamic fillRGBA = __o_fillRGBA;
            		if (::hx::IsNull(__o_fillRGBA)) fillRGBA = -1;
            	HX_STACKFRAME(&_hx_pos_15f406bf53dbc147_47_new)
HXLINE(  71)		super::__construct(0,0,transparent,fillRGBA);
HXLINE(  73)		 ::openfl::utils::ByteArrayData byteArray = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(::haxe::Resource_obj::getBytes(::flixel::_hx_system::debug::interaction::tools::_Eraser::GraphicEraserTool_obj::resourceName));
HXLINE(  74)		{
HXLINE(  74)			 ::openfl::utils::ByteArrayData rawAlpha = null();
HXDLIN(  74)			 ::lime::graphics::Image image = ::lime::graphics::Image_obj::fromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(byteArray));
HXDLIN(  74)			this->_hx___fromImage(image);
HXDLIN(  74)			if (::hx::IsNotNull( rawAlpha )) {
HXLINE(  74)				this->_hx___applyAlpha(rawAlpha);
            			}
            		}
            	}

Dynamic GraphicEraserTool_obj::__CreateEmpty() { return new GraphicEraserTool_obj; }

void *GraphicEraserTool_obj::_hx_vtable = 0;

Dynamic GraphicEraserTool_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicEraserTool_obj > _hx_result = new GraphicEraserTool_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicEraserTool_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x23e86b72;
	}
}

::String GraphicEraserTool_obj::resourceName;


::hx::ObjectPtr< GraphicEraserTool_obj > GraphicEraserTool_obj::__new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	::hx::ObjectPtr< GraphicEraserTool_obj > __this = new GraphicEraserTool_obj();
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

::hx::ObjectPtr< GraphicEraserTool_obj > GraphicEraserTool_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	GraphicEraserTool_obj *__this = (GraphicEraserTool_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicEraserTool_obj), true, "flixel.system.debug.interaction.tools._Eraser.GraphicEraserTool"));
	*(void **)__this = GraphicEraserTool_obj::_hx_vtable;
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

GraphicEraserTool_obj::GraphicEraserTool_obj()
{
}

bool GraphicEraserTool_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool GraphicEraserTool_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicEraserTool_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GraphicEraserTool_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &GraphicEraserTool_obj::resourceName,HX_("resourceName",39,7a,62,90)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void GraphicEraserTool_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicEraserTool_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicEraserTool_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicEraserTool_obj::resourceName,"resourceName");
};

#endif

::hx::Class GraphicEraserTool_obj::__mClass;

static ::String GraphicEraserTool_obj_sStaticFields[] = {
	HX_("resourceName",39,7a,62,90),
	::String(null())
};

void GraphicEraserTool_obj::__register()
{
	GraphicEraserTool_obj _hx_dummy;
	GraphicEraserTool_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.interaction.tools._Eraser.GraphicEraserTool",12,02,9d,e0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicEraserTool_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicEraserTool_obj::__SetStatic;
	__mClass->mMarkFunc = GraphicEraserTool_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GraphicEraserTool_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicEraserTool_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicEraserTool_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicEraserTool_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicEraserTool_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicEraserTool_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_1119b9aa6c07881a_11_boot)
HXDLIN(  11)		resourceName = HX_("__ASSET__:bitmap_flixel_system_debug_interaction_tools__Eraser_GraphicEraserTool",08,fb,52,67);
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools
} // end namespace _Eraser
