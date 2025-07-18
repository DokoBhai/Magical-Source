// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_shaders_ErrorHandledShader
#include <shaders/ErrorHandledShader.h>
#endif
#ifndef INCLUDED_shaders_IErrorHandler
#include <shaders/IErrorHandler.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_edd39a253398bd8c_8_new,"shaders.ErrorHandledShader","new",0x45847b6b,"shaders.ErrorHandledShader.new","shaders/ErrorHandledShader.hx",8,0x5f0564c4)
HX_LOCAL_STACK_FRAME(_hx_pos_edd39a253398bd8c_11___default_onError,"shaders.ErrorHandledShader","__default_onError",0x898bbe96,"shaders.ErrorHandledShader.__default_onError","shaders/ErrorHandledShader.hx",11,0x5f0564c4)
HX_LOCAL_STACK_FRAME(_hx_pos_edd39a253398bd8c_20___createGLProgram,"shaders.ErrorHandledShader","__createGLProgram",0x336a458e,"shaders.ErrorHandledShader.__createGLProgram","shaders/ErrorHandledShader.hx",20,0x5f0564c4)
HX_LOCAL_STACK_FRAME(_hx_pos_edd39a253398bd8c_33_crashSave,"shaders.ErrorHandledShader","crashSave",0xca40fc0f,"shaders.ErrorHandledShader.crashSave","shaders/ErrorHandledShader.hx",33,0x5f0564c4)
namespace shaders{

void ErrorHandledShader_obj::__construct(::String shaderName){
            	HX_STACKFRAME(&_hx_pos_edd39a253398bd8c_8_new)
HXLINE(  10)		this->shaderName = HX_("",00,00,00,00);
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\tgl_FragColor = flixel_texture2D(bitmap, openfl_TextureCoordv);\n\t\t}",71,0e,7a,59);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE(  14)		this->shaderName = shaderName;
HXLINE(  15)		super::__construct();
HXLINE(   8)		this->_hx___isGenerated = true;
HXDLIN(   8)		this->_hx___initGL();
            	}

Dynamic ErrorHandledShader_obj::__CreateEmpty() { return new ErrorHandledShader_obj; }

void *ErrorHandledShader_obj::_hx_vtable = 0;

Dynamic ErrorHandledShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ErrorHandledShader_obj > _hx_result = new ErrorHandledShader_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ErrorHandledShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efca5b6) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1efca5b6;
		}
	} else {
		return inClassId==(int)0x736497e7 || inClassId==(int)0x78d8d737;
	}
}

static ::shaders::IErrorHandler_obj _hx_shaders_ErrorHandledShader__hx_shaders_IErrorHandler= {
};

void *ErrorHandledShader_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x2df1521d: return &_hx_shaders_ErrorHandledShader__hx_shaders_IErrorHandler;
	}
	return super::_hx_getInterface(inHash);
}

HX_BEGIN_DEFAULT_FUNC(__default_onError,ErrorHandledShader_obj)
void _hx_run( ::Dynamic error){
            	HX_STACKFRAME(&_hx_pos_edd39a253398bd8c_11___default_onError)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

 ::lime::graphics::opengl::GLObject ErrorHandledShader_obj::_hx___createGLProgram(::String vertexSource,::String fragmentSource){
            	HX_STACKFRAME(&_hx_pos_edd39a253398bd8c_20___createGLProgram)
HXDLIN(  20)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  22)			 ::lime::graphics::opengl::GLObject res = this->super::_hx___createGLProgram(vertexSource,fragmentSource);
HXLINE(  23)			return res;
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  25)				 ::haxe::Exception error = ::haxe::Exception_obj::caught(_g);
HXLINE(  27)				::shaders::ErrorHandledShader_obj::crashSave(this->shaderName,error,this->onError);
HXLINE(  28)				return null();
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  20)		return null();
            	}


void ErrorHandledShader_obj::crashSave(::String shaderName, ::Dynamic error, ::Dynamic onError){
            	HX_STACKFRAME(&_hx_pos_edd39a253398bd8c_33_crashSave)
HXLINE(  34)		if (::hx::IsNull( shaderName )) {
HXLINE(  34)			shaderName = HX_("unnamed",c0,86,15,93);
            		}
HXLINE(  35)		::String alertTitle = ((HX_("Error on Shader: \"",ce,69,44,b7) + shaderName) + HX_("\"",22,00,00,00));
HXLINE(  37)		::haxe::Log_obj::trace(error,::hx::SourceInfo(HX_("source/shaders/ErrorHandledShader.hx",50,e5,05,75),37,HX_("shaders.ErrorHandledShader",f9,e9,59,ca),HX_("crashSave",c4,f6,51,e1)));
HXLINE(  41)		::String errMsg = HX_("",00,00,00,00);
HXLINE(  42)		::String dateNow = ::StringTools_obj::replace(::StringTools_obj::replace(::Date_obj::now()->toString(),HX_(" ",20,00,00,00),HX_("_",5f,00,00,00)),HX_(":",3a,00,00,00),HX_("'",27,00,00,00));
HXLINE(  44)		if (!(::sys::FileSystem_obj::exists(HX_("./crash/",69,79,f9,62)))) {
HXLINE(  45)			::sys::FileSystem_obj::createDirectory(HX_("./crash/",69,79,f9,62));
            		}
HXLINE(  47)		::String crashLogPath = ((((HX_("./crash/shader_",51,f7,4e,8b) + shaderName) + HX_("_",5f,00,00,00)) + dateNow) + HX_(".txt",02,3f,c0,1e));
HXLINE(  48)		::sys::io::File_obj::saveContent(crashLogPath,( (::String)(error) ));
HXLINE(  49)		::lime::app::Application_obj::current->_hx___window->alert((HX_("Error log saved at: ",26,da,97,d0) + crashLogPath),alertTitle);
HXLINE(  54)		onError(error);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ErrorHandledShader_obj,crashSave,(void))


void ErrorHandledShader_obj::__alloc_dynamic_functions(::hx::Ctx *_hx_ctx,ErrorHandledShader_obj *_hx_obj) {
	if (!_hx_obj->onError.mPtr) _hx_obj->onError = new __default_onError(_hx_obj);
}
::hx::ObjectPtr< ErrorHandledShader_obj > ErrorHandledShader_obj::__new(::String shaderName) {
	::hx::ObjectPtr< ErrorHandledShader_obj > __this = new ErrorHandledShader_obj();
	__this->__construct(shaderName);
	return __this;
}

::hx::ObjectPtr< ErrorHandledShader_obj > ErrorHandledShader_obj::__alloc(::hx::Ctx *_hx_ctx,::String shaderName) {
	ErrorHandledShader_obj *__this = (ErrorHandledShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ErrorHandledShader_obj), true, "shaders.ErrorHandledShader"));
	*(void **)__this = ErrorHandledShader_obj::_hx_vtable;
	shaders::ErrorHandledShader_obj::__alloc_dynamic_functions(_hx_ctx,__this);
	__this->__construct(shaderName);
	return __this;
}

ErrorHandledShader_obj::ErrorHandledShader_obj()
{
	onError = new __default_onError(this);
}

void ErrorHandledShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ErrorHandledShader);
	HX_MARK_MEMBER_NAME(shaderName,"shaderName");
	HX_MARK_MEMBER_NAME(onError,"onError");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ErrorHandledShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shaderName,"shaderName");
	HX_VISIT_MEMBER_NAME(onError,"onError");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ErrorHandledShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { return ::hx::Val( onError ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"shaderName") ) { return ::hx::Val( shaderName ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__createGLProgram") ) { return ::hx::Val( _hx___createGLProgram_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ErrorHandledShader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"crashSave") ) { outValue = crashSave_dyn(); return true; }
	}
	return false;
}

::hx::Val ErrorHandledShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { onError=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"shaderName") ) { shaderName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ErrorHandledShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shaderName",10,54,98,37));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ErrorHandledShader_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(ErrorHandledShader_obj,shaderName),HX_("shaderName",10,54,98,37)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ErrorHandledShader_obj,onError),HX_("onError",29,6a,67,09)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ErrorHandledShader_obj_sStaticStorageInfo = 0;
#endif

static ::String ErrorHandledShader_obj_sMemberFields[] = {
	HX_("shaderName",10,54,98,37),
	HX_("onError",29,6a,67,09),
	HX_("__createGLProgram",43,7d,b4,bf),
	::String(null()) };

::hx::Class ErrorHandledShader_obj::__mClass;

static ::String ErrorHandledShader_obj_sStaticFields[] = {
	HX_("crashSave",c4,f6,51,e1),
	::String(null())
};

void ErrorHandledShader_obj::__register()
{
	ErrorHandledShader_obj _hx_dummy;
	ErrorHandledShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.ErrorHandledShader",f9,e9,59,ca);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ErrorHandledShader_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ErrorHandledShader_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ErrorHandledShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ErrorHandledShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ErrorHandledShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ErrorHandledShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
