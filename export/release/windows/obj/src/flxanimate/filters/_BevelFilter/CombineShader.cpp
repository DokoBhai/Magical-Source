// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_flxanimate_filters__BevelFilter_BevelShader
#include <flxanimate/filters/_BevelFilter/BevelShader.h>
#endif
#ifndef INCLUDED_flxanimate_filters__BevelFilter_CombineShader
#include <flxanimate/filters/_BevelFilter/CombineShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilterShader
#include <openfl/filters/BitmapFilterShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_893c7bf91056a8fc_673_new,"flxanimate.filters._BevelFilter.CombineShader","new",0xcaf8a1cd,"flxanimate.filters._BevelFilter.CombineShader.new","flxanimate/filters/BevelFilter.hx",673,0xf3eb9040)
namespace flxanimate{
namespace filters{
namespace _BevelFilter{

void CombineShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_893c7bf91056a8fc_673_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\r\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform sampler2D openfl_Texture;\n\t\tuniform vec2 openfl_TextureSize;\n\r\n\t\tuniform vec4 uColorH;\r\n\t\tuniform vec4 uColorS;\r\n\t\tuniform float uStrength;\r\n\t\tuniform int knockout;\r\n\t\tuniform sampler2D sourceBitmap;\r\n\t\tvarying vec4 textureCoords;\r\n\t\n\r\n\r\n\t\tvoid main(void) {\r\n\r\n\t\t\tgl_FragColor = texture2D (openfl_Texture, openfl_TextureCoordv);\n\r\n\t\tfloat HA = texture2D(openfl_Texture, textureCoords.zw).a * uStrength;\r\n\t\tfloat SA = texture2D(openfl_Texture, textureCoords.xy).a * uStrength;\r\n\r\n\t\tfloat a = SA;\r\n\r\n\r\n\t\tSA -= HA;\r\n\t\tHA -= a;\r\n\r\n\t\tSA = clamp(SA, 0., 1.);\r\n\t\tHA = clamp(HA, 0., 1.);\r\n\r\n\r\n\t\tvec4 bevel = ((uColorS * SA) + (uColorH * HA));\r\n\r\n\t\tvec4 src = texture2D(sourceBitmap, openfl_TextureCoordv);\r\n\t\n\r\n\r\n\t\t\tif (knockout == 0)\r\n\t\t\t\tgl_FragColor = src + bevel * (1.0 - src.a);\r\n\t\t\telse\r\n\t\t\t\tgl_FragColor = bevel * (1.0 - src.a);\r\n\t\t}\r\n\t",76,fc,d6,24);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("attribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform vec2 openfl_TextureSize;\n\r\n\t\tuniform vec2 offset;\r\n\t\tvarying vec4 textureCoords;\r\n\t\n\n\n\t\tvoid main(void) {\n\n\t\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\ntextureCoords = vec4(openfl_TextureCoord - offset / openfl_TextureSize, openfl_TextureCoord + offset / openfl_TextureSize);\n\n\n\t\t}",66,aa,6f,a6);
            		}
HXLINE( 674)		super::__construct();
HXLINE( 657)		this->_hx___isGenerated = true;
HXDLIN( 657)		this->_hx___initGL();
            	}

Dynamic CombineShader_obj::__CreateEmpty() { return new CombineShader_obj; }

void *CombineShader_obj::_hx_vtable = 0;

Dynamic CombineShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CombineShader_obj > _hx_result = new CombineShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CombineShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x253b4db3) {
		if (inClassId<=(int)0x02778b94) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x02778b94;
		} else {
			return inClassId==(int)0x253b4db3;
		}
	} else {
		return inClassId==(int)0x2b37dfa5 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< CombineShader_obj > CombineShader_obj::__new() {
	::hx::ObjectPtr< CombineShader_obj > __this = new CombineShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< CombineShader_obj > CombineShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	CombineShader_obj *__this = (CombineShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CombineShader_obj), true, "flxanimate.filters._BevelFilter.CombineShader"));
	*(void **)__this = CombineShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CombineShader_obj::CombineShader_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CombineShader_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CombineShader_obj_sStaticStorageInfo = 0;
#endif

::hx::Class CombineShader_obj::__mClass;

void CombineShader_obj::__register()
{
	CombineShader_obj _hx_dummy;
	CombineShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flxanimate.filters._BevelFilter.CombineShader",5b,b7,9e,cb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CombineShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CombineShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CombineShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flxanimate
} // end namespace filters
} // end namespace _BevelFilter
