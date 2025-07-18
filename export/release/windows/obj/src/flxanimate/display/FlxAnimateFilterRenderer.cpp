// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
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
#ifndef INCLUDED_flxanimate_display_FlxAnimateFilterRenderer
#include <flxanimate/display/FlxAnimateFilterRenderer.h>
#endif
#ifndef INCLUDED_flxanimate_filters_MaskShader
#include <flxanimate/filters/MaskShader.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics__WebGL2RenderContext_WebGL2RenderContext_Impl_
#include <lime/graphics/_WebGL2RenderContext/WebGL2RenderContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_BytePointerData
#include <lime/utils/BytePointerData.h>
#endif
#ifndef INCLUDED_lime_utils__BytePointer_BytePointer_Impl_
#include <lime/utils/_BytePointer/BytePointer_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CairoRenderer
#include <openfl/display/CairoRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectShader
#include <openfl/display/DisplayObjectShader.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DGraphics
#include <openfl/display/_internal/Context3DGraphics.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal_Context3DState
#include <openfl/display3D/_internal/Context3DState.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_ShaderFilter
#include <openfl/filters/ShaderFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8386f3c0461dca99_58_new,"flxanimate.display.FlxAnimateFilterRenderer","new",0x4f914de7,"flxanimate.display.FlxAnimateFilterRenderer.new","flxanimate/display/FlxAnimateFilterRenderer.hx",58,0xe66e19a7)
HX_LOCAL_STACK_FRAME(_hx_pos_8386f3c0461dca99_71_setRenderer,"flxanimate.display.FlxAnimateFilterRenderer","setRenderer",0x550d6b8c,"flxanimate.display.FlxAnimateFilterRenderer.setRenderer","flxanimate/display/FlxAnimateFilterRenderer.hx",71,0xe66e19a7)
HX_LOCAL_STACK_FRAME(_hx_pos_8386f3c0461dca99_102_applyFilter,"flxanimate.display.FlxAnimateFilterRenderer","applyFilter",0x3300bc4d,"flxanimate.display.FlxAnimateFilterRenderer.applyFilter","flxanimate/display/FlxAnimateFilterRenderer.hx",102,0xe66e19a7)
HX_LOCAL_STACK_FRAME(_hx_pos_8386f3c0461dca99_169_applyBlend,"flxanimate.display.FlxAnimateFilterRenderer","applyBlend",0xedfcb55c,"flxanimate.display.FlxAnimateFilterRenderer.applyBlend","flxanimate/display/FlxAnimateFilterRenderer.hx",169,0xe66e19a7)
HX_LOCAL_STACK_FRAME(_hx_pos_8386f3c0461dca99_202_graphicstoBitmapData,"flxanimate.display.FlxAnimateFilterRenderer","graphicstoBitmapData",0x6a383ef8,"flxanimate.display.FlxAnimateFilterRenderer.graphicstoBitmapData","flxanimate/display/FlxAnimateFilterRenderer.hx",202,0xe66e19a7)
namespace flxanimate{
namespace display{

void FlxAnimateFilterRenderer_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_8386f3c0461dca99_58_new)
HXLINE(  60)		this->renderer =  ::openfl::display::OpenGLRenderer_obj::__alloc( HX_CTX ,::flixel::FlxG_obj::game->stage->context3D,null());
HXLINE(  61)		this->renderer->_hx___worldTransform =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(  62)		this->renderer->_hx___worldColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  63)		this->maskShader =  ::flxanimate::filters::MaskShader_obj::__alloc( HX_CTX );
HXLINE(  64)		this->maskFilter =  ::openfl::filters::ShaderFilter_obj::__alloc( HX_CTX ,this->maskShader);
            	}

Dynamic FlxAnimateFilterRenderer_obj::__CreateEmpty() { return new FlxAnimateFilterRenderer_obj; }

void *FlxAnimateFilterRenderer_obj::_hx_vtable = 0;

Dynamic FlxAnimateFilterRenderer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxAnimateFilterRenderer_obj > _hx_result = new FlxAnimateFilterRenderer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxAnimateFilterRenderer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x58c662dd;
}

void FlxAnimateFilterRenderer_obj::setRenderer( ::openfl::display::DisplayObjectRenderer renderer, ::openfl::geom::Rectangle rect){
            	HX_GC_STACKFRAME(&_hx_pos_8386f3c0461dca99_71_setRenderer)
HXLINE(  72)		 ::flixel::FlxGame displayObject = ::flixel::FlxG_obj::game;
HXLINE(  73)		Float pixelRatio = ::flixel::FlxG_obj::game->stage->_hx___renderer->_hx___pixelRatio;
HXLINE(  75)		int offsetX;
HXDLIN(  75)		if ((rect->x > 0)) {
HXLINE(  75)			offsetX = ::Math_obj::ceil(rect->x);
            		}
            		else {
HXLINE(  75)			offsetX = ::Math_obj::floor(rect->x);
            		}
HXLINE(  76)		int offsetY;
HXDLIN(  76)		if ((rect->y > 0)) {
HXLINE(  76)			offsetY = ::Math_obj::ceil(rect->y);
            		}
            		else {
HXLINE(  76)			offsetY = ::Math_obj::floor(rect->y);
            		}
HXLINE(  77)		if (::hx::IsNull( renderer->_hx___worldTransform )) {
HXLINE(  79)			renderer->_hx___worldTransform =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(  80)			renderer->_hx___worldColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE(  82)		if (::hx::IsNull( displayObject->_hx___cacheBitmapColorTransform )) {
HXLINE(  82)			displayObject->_hx___cacheBitmapColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE(  84)		renderer->_hx___stage = displayObject->stage;
HXLINE(  86)		renderer->_hx___allowSmoothing = true;
HXLINE(  87)		renderer->_hx___setBlendMode(10);
HXLINE(  88)		renderer->_hx___worldAlpha = (( (Float)(1) ) / displayObject->_hx___worldAlpha);
HXLINE(  90)		renderer->_hx___worldTransform->identity();
HXLINE(  91)		renderer->_hx___worldTransform->invert();
HXLINE(  93)		 ::openfl::geom::Matrix fh = renderer->_hx___worldTransform;
HXDLIN(  93)		fh->tx = (fh->tx - ( (Float)(offsetX) ));
HXLINE(  94)		 ::openfl::geom::Matrix fh1 = renderer->_hx___worldTransform;
HXDLIN(  94)		fh1->ty = (fh1->ty - ( (Float)(offsetY) ));
HXLINE(  96)		renderer->_hx___pixelRatio = pixelRatio;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimateFilterRenderer_obj,setRenderer,(void))

void FlxAnimateFilterRenderer_obj::applyFilter( ::openfl::display::BitmapData bmp, ::openfl::display::BitmapData target, ::openfl::display::BitmapData target1, ::openfl::display::BitmapData target2,::Array< ::Dynamic> filters, ::openfl::geom::Rectangle rect, ::openfl::display::BitmapData mask, ::flixel::math::FlxBasePoint maskPos){
            	HX_STACKFRAME(&_hx_pos_8386f3c0461dca99_102_applyFilter)
HXLINE( 103)		if (::hx::IsNotNull( mask )) {
HXLINE( 105)			this->maskShader->relativePos->value[0] = maskPos->x;
HXLINE( 106)			this->maskShader->relativePos->value[1] = maskPos->y;
HXLINE( 107)			this->maskShader->mainPalette->input = mask;
HXLINE( 108)			this->maskFilter->invalidate();
HXLINE( 109)			if (::hx::IsNull( filters )) {
HXLINE( 110)				filters = ::Array_obj< ::Dynamic>::__new(1)->init(0,this->maskFilter);
            			}
            			else {
HXLINE( 112)				filters->push(this->maskFilter);
            			}
            		}
HXLINE( 114)		this->renderer->_hx___setBlendMode(10);
HXLINE( 115)		this->renderer->_hx___worldAlpha = ( (Float)(1) );
HXLINE( 117)		this->renderer->_hx___worldTransform->identity();
HXLINE( 118)		this->renderer->_hx___worldColorTransform->_hx___identity();
HXLINE( 120)		 ::openfl::display::BitmapData bitmap = target;
HXLINE( 121)		 ::openfl::display::BitmapData bitmap2 = target1;
HXLINE( 123)		 ::openfl::display::BitmapData bitmap3 = target2;
HXLINE( 126)		bmp->_hx___renderTransform->translate(::Math_obj::abs(rect->x),::Math_obj::abs(rect->y));
HXLINE( 127)		this->renderer->_hx___setRenderTarget(bitmap);
HXLINE( 128)		this->renderer->_hx___renderFilterPass(bmp,this->renderer->_hx___defaultDisplayShader,true,null());
HXLINE( 129)		bmp->_hx___renderTransform->identity();
HXLINE( 131)		if (::hx::IsNotNull( filters )) {
HXLINE( 133)			{
HXLINE( 133)				int _g = 0;
HXDLIN( 133)				while((_g < filters->length)){
HXLINE( 133)					 ::openfl::filters::BitmapFilter filter = filters->__get(_g).StaticCast<  ::openfl::filters::BitmapFilter >();
HXDLIN( 133)					_g = (_g + 1);
HXLINE( 135)					if (filter->_hx___preserveObject) {
HXLINE( 137)						this->renderer->_hx___setRenderTarget(bitmap3);
HXLINE( 138)						this->renderer->_hx___renderFilterPass(bitmap,this->renderer->_hx___defaultDisplayShader,filter->_hx___smooth,null());
            					}
HXLINE( 141)					{
HXLINE( 141)						int _g1 = 0;
HXDLIN( 141)						int _g2 = filter->_hx___numShaderPasses;
HXDLIN( 141)						while((_g1 < _g2)){
HXLINE( 141)							_g1 = (_g1 + 1);
HXDLIN( 141)							int i = (_g1 - 1);
HXLINE( 143)							this->renderer->_hx___setBlendMode(filter->_hx___shaderBlendMode);
HXLINE( 144)							this->renderer->_hx___setRenderTarget(bitmap2);
HXLINE( 145)							 ::openfl::display::OpenGLRenderer _hx_tmp = this->renderer;
HXDLIN( 145)							 ::openfl::display::BitmapData _hx_tmp1;
HXDLIN( 145)							if (filter->_hx___preserveObject) {
HXLINE( 145)								_hx_tmp1 = bitmap3;
            							}
            							else {
HXLINE( 145)								_hx_tmp1 = null();
            							}
HXDLIN( 145)							 ::openfl::display::Shader _hx_tmp2 = filter->_hx___initShader(this->renderer,i,_hx_tmp1);
HXDLIN( 145)							_hx_tmp->_hx___renderFilterPass(bitmap,_hx_tmp2,filter->_hx___smooth,null());
HXLINE( 147)							this->renderer->_hx___setRenderTarget(bitmap);
HXLINE( 148)							this->renderer->_hx___renderFilterPass(bitmap2,this->renderer->_hx___defaultDisplayShader,filter->_hx___smooth,null());
            						}
            					}
HXLINE( 151)					filter->_hx___renderDirty = false;
            				}
            			}
HXLINE( 154)			if (::hx::IsNotNull( mask )) {
HXLINE( 155)				filters->pop().StaticCast<  ::openfl::filters::BitmapFilter >();
            			}
HXLINE( 157)			 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->renderer->_hx___gl;
HXLINE( 159)			 ::openfl::display3D::textures::TextureBase renderBuffer = bitmap->getTexture(this->renderer->_hx___context3D);
HXLINE( 161)			{
HXLINE( 161)				int width = bitmap->width;
HXDLIN( 161)				int height = bitmap->height;
HXDLIN( 161)				int format = renderBuffer->_hx___format;
HXDLIN( 161)				int type = gl->UNSIGNED_BYTE;
HXDLIN( 161)				 ::lime::utils::ArrayBufferView pixels = bitmap->image->get_data();
HXDLIN( 161)				{
HXLINE( 161)					::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer,null(),pixels,null(),0);
HXDLIN( 161)					gl->readPixels(0,0,width,height,format,type,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer));
            				}
            			}
HXLINE( 162)			bitmap->image->version = 0;
HXLINE( 164)			bitmap->_hx___textureVersion = -1;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC8(FlxAnimateFilterRenderer_obj,applyFilter,(void))

 ::openfl::display::BitmapData FlxAnimateFilterRenderer_obj::applyBlend( ::Dynamic blend, ::openfl::display::BitmapData bitmap){
            	HX_GC_STACKFRAME(&_hx_pos_8386f3c0461dca99_169_applyBlend)
HXLINE( 170)		bitmap->_hx___update(false,true);
HXLINE( 171)		 ::openfl::display::BitmapData bmp =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,bitmap->width,bitmap->height,null(),0);
HXLINE( 178)		 ::openfl::display::CairoRenderer renderer =  ::openfl::display::CairoRenderer_obj::__alloc( HX_CTX , ::lime::graphics::cairo::Cairo_obj::__alloc( HX_CTX ,bmp->getSurface()));
HXLINE( 183)		 ::openfl::geom::Matrix m =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 184)		 ::openfl::geom::ColorTransform c =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 185)		renderer->_hx___allowSmoothing = true;
HXLINE( 186)		renderer->_hx___overrideBlendMode = blend;
HXLINE( 187)		renderer->_hx___worldTransform = m;
HXLINE( 188)		renderer->_hx___worldAlpha = ( (Float)(1) );
HXLINE( 189)		renderer->_hx___worldColorTransform = c;
HXLINE( 191)		renderer->_hx___setBlendMode(blend);
HXLINE( 195)		bmp->_hx___drawCairo(bitmap,renderer);
HXLINE( 198)		return bitmap;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimateFilterRenderer_obj,applyBlend,return )

 ::openfl::display::BitmapData FlxAnimateFilterRenderer_obj::graphicstoBitmapData( ::openfl::display::Graphics gfx, ::openfl::display::BitmapData target){
            	HX_GC_STACKFRAME(&_hx_pos_8386f3c0461dca99_202_graphicstoBitmapData)
HXLINE( 203)		if (::hx::IsNull( gfx->_hx___bounds )) {
HXLINE( 203)			return null();
            		}
HXLINE( 205)		 ::openfl::display3D::textures::TextureBase cacheRTT = this->renderer->_hx___context3D->_hx___state->renderToTexture;
HXLINE( 206)		bool cacheRTTDepthStencil = this->renderer->_hx___context3D->_hx___state->renderToTextureDepthStencil;
HXLINE( 207)		int cacheRTTAntiAlias = this->renderer->_hx___context3D->_hx___state->renderToTextureAntiAlias;
HXLINE( 208)		int cacheRTTSurfaceSelector = this->renderer->_hx___context3D->_hx___state->renderToTextureSurfaceSelector;
HXLINE( 210)		 ::openfl::geom::Rectangle bounds = gfx->_hx___owner->getBounds(null());
HXLINE( 213)		 ::openfl::display::BitmapData bmp;
HXDLIN( 213)		if (::hx::IsNull( target )) {
HXLINE( 213)			bmp =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,::Math_obj::ceil(bounds->width),::Math_obj::ceil(bounds->height),true,0);
            		}
            		else {
HXLINE( 213)			bmp = target;
            		}
HXLINE( 215)		this->renderer->_hx___worldTransform->translate(-(bounds->x),-(bounds->y));
HXLINE( 220)		 ::openfl::display3D::Context3D context = this->renderer->_hx___context3D;
HXLINE( 222)		this->renderer->_hx___setRenderTarget(bmp);
HXLINE( 223)		context->setRenderToTexture(bmp->getTexture(context),null(),null(),null());
HXLINE( 225)		::openfl::display::_internal::Context3DGraphics_obj::render(gfx,this->renderer);
HXLINE( 227)		this->renderer->_hx___worldTransform->identity();
HXLINE( 230)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->renderer->_hx___gl;
HXLINE( 231)		 ::openfl::display3D::textures::TextureBase renderBuffer = bmp->getTexture(context);
HXLINE( 234)		{
HXLINE( 234)			int width = ::Math_obj::round(( (Float)(bmp->width) ));
HXDLIN( 234)			int height = ::Math_obj::round(( (Float)(bmp->height) ));
HXDLIN( 234)			int format = renderBuffer->_hx___format;
HXDLIN( 234)			int type = gl->UNSIGNED_BYTE;
HXDLIN( 234)			 ::lime::utils::ArrayBufferView pixels = bmp->image->get_data();
HXDLIN( 234)			{
HXLINE( 234)				::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer,null(),pixels,null(),0);
HXDLIN( 234)				gl->readPixels(0,0,width,height,format,type,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer));
            			}
            		}
HXLINE( 237)		if (::hx::IsNotNull( cacheRTT )) {
HXLINE( 239)			this->renderer->_hx___context3D->setRenderToTexture(cacheRTT,cacheRTTDepthStencil,cacheRTTAntiAlias,cacheRTTSurfaceSelector);
            		}
            		else {
HXLINE( 243)			this->renderer->_hx___context3D->setRenderToBackBuffer();
            		}
HXLINE( 246)		return bmp;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAnimateFilterRenderer_obj,graphicstoBitmapData,return )


::hx::ObjectPtr< FlxAnimateFilterRenderer_obj > FlxAnimateFilterRenderer_obj::__new() {
	::hx::ObjectPtr< FlxAnimateFilterRenderer_obj > __this = new FlxAnimateFilterRenderer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxAnimateFilterRenderer_obj > FlxAnimateFilterRenderer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxAnimateFilterRenderer_obj *__this = (FlxAnimateFilterRenderer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxAnimateFilterRenderer_obj), true, "flxanimate.display.FlxAnimateFilterRenderer"));
	*(void **)__this = FlxAnimateFilterRenderer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxAnimateFilterRenderer_obj::FlxAnimateFilterRenderer_obj()
{
}

void FlxAnimateFilterRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAnimateFilterRenderer);
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(maskShader,"maskShader");
	HX_MARK_MEMBER_NAME(maskFilter,"maskFilter");
	HX_MARK_END_CLASS();
}

void FlxAnimateFilterRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(maskShader,"maskShader");
	HX_VISIT_MEMBER_NAME(maskFilter,"maskFilter");
}

::hx::Val FlxAnimateFilterRenderer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return ::hx::Val( context ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { return ::hx::Val( renderer ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maskShader") ) { return ::hx::Val( maskShader ); }
		if (HX_FIELD_EQ(inName,"maskFilter") ) { return ::hx::Val( maskFilter ); }
		if (HX_FIELD_EQ(inName,"applyBlend") ) { return ::hx::Val( applyBlend_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setRenderer") ) { return ::hx::Val( setRenderer_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyFilter") ) { return ::hx::Val( applyFilter_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"graphicstoBitmapData") ) { return ::hx::Val( graphicstoBitmapData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxAnimateFilterRenderer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast<  ::openfl::display::OpenGLRenderer >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maskShader") ) { maskShader=inValue.Cast<  ::flxanimate::filters::MaskShader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maskFilter") ) { maskFilter=inValue.Cast<  ::openfl::filters::ShaderFilter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAnimateFilterRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("renderer",43,c5,db,b2));
	outFields->push(HX_("context",ef,95,77,19));
	outFields->push(HX_("maskShader",31,ed,04,32));
	outFields->push(HX_("maskFilter",c4,4d,19,9a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxAnimateFilterRenderer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::OpenGLRenderer */ ,(int)offsetof(FlxAnimateFilterRenderer_obj,renderer),HX_("renderer",43,c5,db,b2)},
	{::hx::fsObject /*  ::openfl::display3D::Context3D */ ,(int)offsetof(FlxAnimateFilterRenderer_obj,context),HX_("context",ef,95,77,19)},
	{::hx::fsObject /*  ::flxanimate::filters::MaskShader */ ,(int)offsetof(FlxAnimateFilterRenderer_obj,maskShader),HX_("maskShader",31,ed,04,32)},
	{::hx::fsObject /*  ::openfl::filters::ShaderFilter */ ,(int)offsetof(FlxAnimateFilterRenderer_obj,maskFilter),HX_("maskFilter",c4,4d,19,9a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxAnimateFilterRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxAnimateFilterRenderer_obj_sMemberFields[] = {
	HX_("renderer",43,c5,db,b2),
	HX_("context",ef,95,77,19),
	HX_("maskShader",31,ed,04,32),
	HX_("maskFilter",c4,4d,19,9a),
	HX_("setRenderer",05,8f,3c,e3),
	HX_("applyFilter",c6,df,2f,c1),
	HX_("applyBlend",03,64,46,60),
	HX_("graphicstoBitmapData",5f,64,bf,2f),
	::String(null()) };

::hx::Class FlxAnimateFilterRenderer_obj::__mClass;

void FlxAnimateFilterRenderer_obj::__register()
{
	FlxAnimateFilterRenderer_obj _hx_dummy;
	FlxAnimateFilterRenderer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flxanimate.display.FlxAnimateFilterRenderer",75,ce,74,7d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxAnimateFilterRenderer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxAnimateFilterRenderer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAnimateFilterRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAnimateFilterRenderer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flxanimate
} // end namespace display
