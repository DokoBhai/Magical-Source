// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flxanimate_data_AnimationData
#include <flxanimate/data/AnimationData.h>
#endif
#ifndef INCLUDED_flxanimate_data_ColorEffect
#include <flxanimate/data/ColorEffect.h>
#endif
#ifndef INCLUDED_flxanimate_data__AnimationData_AdjustColorFilter_Impl_
#include <flxanimate/data/_AnimationData/AdjustColorFilter_Impl_.h>
#endif
#ifndef INCLUDED_flxanimate_data__AnimationData_BevelFilter_Impl_
#include <flxanimate/data/_AnimationData/BevelFilter_Impl_.h>
#endif
#ifndef INCLUDED_flxanimate_data__AnimationData_BlurFilter_Impl_
#include <flxanimate/data/_AnimationData/BlurFilter_Impl_.h>
#endif
#ifndef INCLUDED_flxanimate_data__AnimationData_ColorEffects_Impl_
#include <flxanimate/data/_AnimationData/ColorEffects_Impl_.h>
#endif
#ifndef INCLUDED_flxanimate_data__AnimationData_DropShadowFilter_Impl_
#include <flxanimate/data/_AnimationData/DropShadowFilter_Impl_.h>
#endif
#ifndef INCLUDED_flxanimate_data__AnimationData_GlowFilter_Impl_
#include <flxanimate/data/_AnimationData/GlowFilter_Impl_.h>
#endif
#ifndef INCLUDED_flxanimate_data__AnimationData_GradientEntry_Impl_
#include <flxanimate/data/_AnimationData/GradientEntry_Impl_.h>
#endif
#ifndef INCLUDED_flxanimate_data__AnimationData_GradientFilter_Impl_
#include <flxanimate/data/_AnimationData/GradientFilter_Impl_.h>
#endif
#ifndef INCLUDED_flxanimate_effects_FlxAdvanced
#include <flxanimate/effects/FlxAdvanced.h>
#endif
#ifndef INCLUDED_flxanimate_effects_FlxAlpha
#include <flxanimate/effects/FlxAlpha.h>
#endif
#ifndef INCLUDED_flxanimate_effects_FlxBrightness
#include <flxanimate/effects/FlxBrightness.h>
#endif
#ifndef INCLUDED_flxanimate_effects_FlxColorEffect
#include <flxanimate/effects/FlxColorEffect.h>
#endif
#ifndef INCLUDED_flxanimate_effects_FlxTint
#include <flxanimate/effects/FlxTint.h>
#endif
#ifndef INCLUDED_flxanimate_filters_BevelFilter
#include <flxanimate/filters/BevelFilter.h>
#endif
#ifndef INCLUDED_flxanimate_filters_GradientBevelFilter
#include <flxanimate/filters/GradientBevelFilter.h>
#endif
#ifndef INCLUDED_flxanimate_filters_GradientGlowFilter
#include <flxanimate/filters/GradientGlowFilter.h>
#endif
#ifndef INCLUDED_flxanimate_motion_AdjustColor
#include <flxanimate/motion/AdjustColor.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_BlurFilter
#include <openfl/filters/BlurFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_ColorMatrixFilter
#include <openfl/filters/ColorMatrixFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_DropShadowFilter
#include <openfl/filters/DropShadowFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_GlowFilter
#include <openfl/filters/GlowFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_00525f223802bb12_26_setFieldBool,"flxanimate.data.AnimationData","setFieldBool",0xf2e61f07,"flxanimate.data.AnimationData.setFieldBool","flxanimate/data/AnimationData.hx",26,0xa9372435)
HX_LOCAL_STACK_FRAME(_hx_pos_00525f223802bb12_51_fromColorJson,"flxanimate.data.AnimationData","fromColorJson",0x064139bc,"flxanimate.data.AnimationData.fromColorJson","flxanimate/data/AnimationData.hx",51,0xa9372435)
HX_LOCAL_STACK_FRAME(_hx_pos_00525f223802bb12_84_colorFromString,"flxanimate.data.AnimationData","colorFromString",0xdccd5939,"flxanimate.data.AnimationData.colorFromString","flxanimate/data/AnimationData.hx",84,0xa9372435)
HX_LOCAL_STACK_FRAME(_hx_pos_00525f223802bb12_92_fromFilterJson,"flxanimate.data.AnimationData","fromFilterJson",0x4c405c4f,"flxanimate.data.AnimationData.fromFilterJson","flxanimate/data/AnimationData.hx",92,0xa9372435)
HX_LOCAL_STACK_FRAME(_hx_pos_00525f223802bb12_179_parseColorEffect,"flxanimate.data.AnimationData","parseColorEffect",0x28816666,"flxanimate.data.AnimationData.parseColorEffect","flxanimate/data/AnimationData.hx",179,0xa9372435)
namespace flxanimate{
namespace data{

void AnimationData_obj::__construct() { }

Dynamic AnimationData_obj::__CreateEmpty() { return new AnimationData_obj; }

void *AnimationData_obj::_hx_vtable = 0;

Dynamic AnimationData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AnimationData_obj > _hx_result = new AnimationData_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AnimationData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0c259335;
}

 ::Dynamic AnimationData_obj::setFieldBool( ::Dynamic abstracto,::Array< ::String > things, ::Dynamic set){
            	HX_STACKFRAME(&_hx_pos_00525f223802bb12_26_setFieldBool)
HXLINE(  30)		if (::hx::IsNull( abstracto )) {
HXLINE(  31)			return ::Reflect_obj::field( ::Dynamic(::hx::Anon_obj::Create(0)),HX_("",00,00,00,00));
            		}
HXLINE(  32)		{
HXLINE(  32)			int _g = 0;
HXDLIN(  32)			while((_g < things->length)){
HXLINE(  32)				::String thing = things->__get(_g);
HXDLIN(  32)				_g = (_g + 1);
HXLINE(  34)				if (::hx::IsNotNull( set )) {
HXLINE(  36)					::Reflect_obj::setField(abstracto,thing,set);
HXLINE(  37)					return set;
            				}
HXLINE(  39)				if (::Reflect_obj::hasField(abstracto,thing)) {
HXLINE(  41)					return ::Reflect_obj::field(abstracto,thing);
            				}
            			}
            		}
HXLINE(  44)		return ::Reflect_obj::field(abstracto,HX_("",00,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AnimationData_obj,setFieldBool,return )

 ::flxanimate::data::ColorEffect AnimationData_obj::fromColorJson( ::Dynamic effect){
            	HX_GC_STACKFRAME(&_hx_pos_00525f223802bb12_51_fromColorJson)
HXLINE(  52)		 ::flxanimate::data::ColorEffect colorEffect = ::flxanimate::data::ColorEffect_obj::None_dyn();
HXLINE(  54)		if (::hx::IsNull( effect )) {
HXLINE(  54)			return colorEffect;
            		}
HXLINE(  56)		::String _hx_switch_0 = ::flxanimate::data::_AnimationData::ColorEffects_Impl__obj::get_M(effect);
            		if (  (_hx_switch_0==HX_("AD",e3,38,00,00)) ||  (_hx_switch_0==HX_("Advanced",c2,25,2d,15)) ){
HXLINE(  66)			 ::openfl::geom::ColorTransform CT =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  67)			CT->redMultiplier = ::flxanimate::data::_AnimationData::ColorEffects_Impl__obj::get_RM(effect);
HXLINE(  68)			CT->redOffset = ( (Float)(::flxanimate::data::_AnimationData::ColorEffects_Impl__obj::get_RO(effect)) );
HXLINE(  69)			CT->greenMultiplier = ::flxanimate::data::_AnimationData::ColorEffects_Impl__obj::get_GM(effect);
HXLINE(  70)			CT->greenOffset = ( (Float)(::flxanimate::data::_AnimationData::ColorEffects_Impl__obj::get_GO(effect)) );
HXLINE(  71)			CT->blueMultiplier = ::flxanimate::data::_AnimationData::ColorEffects_Impl__obj::get_BM(effect);
HXLINE(  72)			CT->blueOffset = ( (Float)(::flxanimate::data::_AnimationData::ColorEffects_Impl__obj::get_BO(effect)) );
HXLINE(  73)			CT->alphaMultiplier = ::flxanimate::data::_AnimationData::ColorEffects_Impl__obj::get_AM(effect);
HXLINE(  74)			CT->alphaOffset = ( (Float)(::flxanimate::data::_AnimationData::ColorEffects_Impl__obj::get_AO(effect)) );
HXLINE(  75)			colorEffect = ::flxanimate::data::ColorEffect_obj::Advanced(CT);
HXLINE(  65)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Alpha",3e,17,c4,b4)) ||  (_hx_switch_0==HX_("CA",9e,3a,00,00)) ){
HXLINE(  61)			colorEffect = ::flxanimate::data::ColorEffect_obj::Alpha(::flxanimate::data::_AnimationData::ColorEffects_Impl__obj::get_AM(effect));
HXDLIN(  61)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Brightness",f1,91,22,5c)) ||  (_hx_switch_0==HX_("CBRT",21,a8,7b,2c)) ){
HXLINE(  63)			colorEffect = ::flxanimate::data::ColorEffect_obj::Brightness(::flxanimate::data::_AnimationData::ColorEffects_Impl__obj::get_BRT(effect));
HXDLIN(  63)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("T",54,00,00,00)) ||  (_hx_switch_0==HX_("Tint",1b,f9,d5,37)) ){
HXLINE(  59)			 ::Dynamic colorEffect1 = ::flxanimate::data::AnimationData_obj::colorFromString(::flxanimate::data::_AnimationData::ColorEffects_Impl__obj::get_TC(effect));
HXDLIN(  59)			colorEffect = ::flxanimate::data::ColorEffect_obj::Tint(colorEffect1,::flxanimate::data::_AnimationData::ColorEffects_Impl__obj::get_TM(effect));
HXDLIN(  59)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  78)			 ::flixel::_hx_system::frontEnds::LogFrontEnd _this = ::flixel::FlxG_obj::log;
HXDLIN(  78)			 ::Dynamic data = ((HX_("color Effect mode \"",37,e4,ad,de) + ::flxanimate::data::_AnimationData::ColorEffects_Impl__obj::get_M(effect)) + HX_("\" is invalid or not supported!",1c,7e,a6,56));
HXDLIN(  78)			_this->advanced(data,::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
            		}
            		_hx_goto_2:;
HXLINE(  80)		return colorEffect;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AnimationData_obj,fromColorJson,return )

 ::Dynamic AnimationData_obj::colorFromString(::String color){
            	HX_STACKFRAME(&_hx_pos_00525f223802bb12_84_colorFromString)
HXDLIN(  84)		return ::Std_obj::parseInt((HX_("0x",48,2a,00,00) + color.substring(1,null())));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AnimationData_obj,colorFromString,return )

::Array< ::Dynamic> AnimationData_obj::fromFilterJson( ::Dynamic filters){
            	HX_GC_STACKFRAME(&_hx_pos_00525f223802bb12_92_fromFilterJson)
HXLINE(  93)		if (::hx::IsNull( filters )) {
HXLINE(  93)			return null();
            		}
HXLINE(  95)		::Array< ::Dynamic> bitmapFilter = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  97)		{
HXLINE(  97)			int _g = 0;
HXDLIN(  97)			::Array< ::String > _g1 = ::Reflect_obj::fields(filters);
HXDLIN(  97)			while((_g < _g1->length)){
HXLINE(  97)				::String filter = _g1->__get(_g);
HXDLIN(  97)				_g = (_g + 1);
HXLINE(  99)				::String _hx_switch_0 = filter.split(HX_("_",5f,00,00,00))->__get(0);
            				if (  (_hx_switch_0==HX_("ACF",24,8d,31,00)) ||  (_hx_switch_0==HX_("AdjustColorFilter",0c,f9,e5,fb)) ){
HXLINE( 123)					 ::Dynamic adjustColor = ::Reflect_obj::field(filters,filter);
HXLINE( 125)					 ::flxanimate::motion::AdjustColor colorAdjust =  ::flxanimate::motion::AdjustColor_obj::__alloc( HX_CTX );
HXLINE( 127)					colorAdjust->set_hue(::flxanimate::data::_AnimationData::AdjustColorFilter_Impl__obj::get_H(adjustColor));
HXLINE( 128)					colorAdjust->set_brightness(::flxanimate::data::_AnimationData::AdjustColorFilter_Impl__obj::get_BRT(adjustColor));
HXLINE( 129)					colorAdjust->set_contrast(::flxanimate::data::_AnimationData::AdjustColorFilter_Impl__obj::get_CT(adjustColor));
HXLINE( 130)					colorAdjust->set_saturation(::flxanimate::data::_AnimationData::AdjustColorFilter_Impl__obj::get_SAT(adjustColor));
HXLINE( 132)					bitmapFilter->unshift( ::openfl::filters::ColorMatrixFilter_obj::__alloc( HX_CTX ,colorAdjust->calculateFinalFlatArray()));
HXLINE( 122)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("BF",c4,39,00,00)) ||  (_hx_switch_0==HX_("BevelFilter",b2,0b,be,27)) ){
HXLINE( 113)					 ::Dynamic bevel = ::Reflect_obj::field(filters,filter);
HXLINE( 114)					Float _hx_tmp = ::flxanimate::data::_AnimationData::BevelFilter_Impl__obj::get_DST(bevel);
HXDLIN( 114)					Float _hx_tmp1 = ::flxanimate::data::_AnimationData::BevelFilter_Impl__obj::get_AL(bevel);
HXDLIN( 114)					 ::Dynamic _hx_tmp2 = ::flxanimate::data::AnimationData_obj::colorFromString(::flxanimate::data::_AnimationData::BevelFilter_Impl__obj::get_HC(bevel));
HXDLIN( 114)					Float _hx_tmp3 = ::flxanimate::data::_AnimationData::BevelFilter_Impl__obj::get_HA(bevel);
HXDLIN( 114)					 ::Dynamic _hx_tmp4 = ::flxanimate::data::AnimationData_obj::colorFromString(::flxanimate::data::_AnimationData::BevelFilter_Impl__obj::get_SC(bevel));
HXDLIN( 114)					Float _hx_tmp5 = ::flxanimate::data::_AnimationData::BevelFilter_Impl__obj::get_SA(bevel);
HXDLIN( 114)					Float _hx_tmp6 = ::flxanimate::data::_AnimationData::BlurFilter_Impl__obj::get_BLX(bevel);
HXDLIN( 114)					Float _hx_tmp7 = ::flxanimate::data::_AnimationData::BlurFilter_Impl__obj::get_BLY(bevel);
HXDLIN( 114)					Float _hx_tmp8 = ::flxanimate::data::_AnimationData::BevelFilter_Impl__obj::get_STR(bevel);
HXDLIN( 114)					int _hx_tmp9 = ::flxanimate::data::_AnimationData::BlurFilter_Impl__obj::get_Q(bevel);
HXDLIN( 114)					::String _hx_tmp10 = ::flxanimate::data::_AnimationData::BevelFilter_Impl__obj::get_TP(bevel);
HXDLIN( 114)					bitmapFilter->unshift( ::flxanimate::filters::BevelFilter_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,_hx_tmp2,_hx_tmp3,_hx_tmp4,_hx_tmp5,_hx_tmp6,_hx_tmp7,_hx_tmp8,_hx_tmp9,_hx_tmp10,::flxanimate::data::_AnimationData::BevelFilter_Impl__obj::get_KK(bevel)));
HXLINE( 112)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("BLF",3c,57,32,00)) ||  (_hx_switch_0==HX_("BlurFilter",df,d1,71,f3)) ){
HXLINE( 118)					 ::Dynamic blur = ::Reflect_obj::field(filters,filter);
HXLINE( 119)					Float _hx_tmp11 = ::flxanimate::data::_AnimationData::BlurFilter_Impl__obj::get_BLX(blur);
HXDLIN( 119)					Float _hx_tmp12 = ::flxanimate::data::_AnimationData::BlurFilter_Impl__obj::get_BLY(blur);
HXDLIN( 119)					bitmapFilter->unshift( ::openfl::filters::BlurFilter_obj::__alloc( HX_CTX ,_hx_tmp11,_hx_tmp12,::flxanimate::data::_AnimationData::BlurFilter_Impl__obj::get_Q(blur)));
HXLINE( 117)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("DSF",d7,e1,33,00)) ||  (_hx_switch_0==HX_("DropShadowFilter",a7,ee,49,f7)) ){
HXLINE( 103)					 ::Dynamic drop = ::Reflect_obj::field(filters,filter);
HXLINE( 104)					Float _hx_tmp13 = ::flxanimate::data::_AnimationData::DropShadowFilter_Impl__obj::get_DST(drop);
HXDLIN( 104)					Float _hx_tmp14 = ::flxanimate::data::_AnimationData::DropShadowFilter_Impl__obj::get_AL(drop);
HXDLIN( 104)					 ::Dynamic _hx_tmp15 = ::flxanimate::data::AnimationData_obj::colorFromString(::flxanimate::data::_AnimationData::GlowFilter_Impl__obj::get_C(drop));
HXDLIN( 104)					Float _hx_tmp16 = ::flxanimate::data::_AnimationData::GlowFilter_Impl__obj::get_A(drop);
HXDLIN( 104)					Float _hx_tmp17 = ::flxanimate::data::_AnimationData::BlurFilter_Impl__obj::get_BLX(drop);
HXDLIN( 104)					Float _hx_tmp18 = ::flxanimate::data::_AnimationData::BlurFilter_Impl__obj::get_BLY(drop);
HXDLIN( 104)					Float _hx_tmp19 = ::flxanimate::data::_AnimationData::GlowFilter_Impl__obj::get_STR(drop);
HXDLIN( 104)					int _hx_tmp20 = ::flxanimate::data::_AnimationData::BlurFilter_Impl__obj::get_Q(drop);
HXDLIN( 104)					bool _hx_tmp21 = ::flxanimate::data::_AnimationData::GlowFilter_Impl__obj::get_IN(drop);
HXDLIN( 104)					bitmapFilter->unshift( ::openfl::filters::DropShadowFilter_obj::__alloc( HX_CTX ,_hx_tmp13,_hx_tmp14,_hx_tmp15,_hx_tmp16,_hx_tmp17,_hx_tmp18,_hx_tmp19,_hx_tmp20,_hx_tmp21,::flxanimate::data::_AnimationData::GlowFilter_Impl__obj::get_KK(drop),null()));
HXLINE( 102)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("GF",1f,3e,00,00)) ||  (_hx_switch_0==HX_("GlowFilter",45,ce,a2,2d)) ){
HXLINE( 108)					 ::Dynamic glow = ::Reflect_obj::field(filters,filter);
HXLINE( 109)					 ::Dynamic _hx_tmp22 = ::flxanimate::data::AnimationData_obj::colorFromString(::flxanimate::data::_AnimationData::GlowFilter_Impl__obj::get_C(glow));
HXDLIN( 109)					Float _hx_tmp23 = ::flxanimate::data::_AnimationData::GlowFilter_Impl__obj::get_A(glow);
HXDLIN( 109)					Float _hx_tmp24 = ::flxanimate::data::_AnimationData::BlurFilter_Impl__obj::get_BLX(glow);
HXDLIN( 109)					Float _hx_tmp25 = ::flxanimate::data::_AnimationData::BlurFilter_Impl__obj::get_BLY(glow);
HXDLIN( 109)					Float _hx_tmp26 = ::flxanimate::data::_AnimationData::GlowFilter_Impl__obj::get_STR(glow);
HXDLIN( 109)					int _hx_tmp27 = ::flxanimate::data::_AnimationData::BlurFilter_Impl__obj::get_Q(glow);
HXDLIN( 109)					bool _hx_tmp28 = ::flxanimate::data::_AnimationData::GlowFilter_Impl__obj::get_IN(glow);
HXDLIN( 109)					bitmapFilter->unshift( ::openfl::filters::GlowFilter_obj::__alloc( HX_CTX ,_hx_tmp22,_hx_tmp23,_hx_tmp24,_hx_tmp25,_hx_tmp26,_hx_tmp27,_hx_tmp28,::flxanimate::data::_AnimationData::GlowFilter_Impl__obj::get_KK(glow)));
HXLINE( 107)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("GBF",cb,19,36,00)) ||  (_hx_switch_0==HX_("GradientBevelFilter",a2,af,1b,d9)) ){
HXLINE( 154)					 ::Dynamic gradient = ::Reflect_obj::field(filters,filter);
HXLINE( 155)					::Array< int > colors = ::Array_obj< int >::__new(0);
HXLINE( 156)					::Array< Float > alphas = ::Array_obj< Float >::__new(0);
HXLINE( 157)					::Array< int > ratios = ::Array_obj< int >::__new(0);
HXLINE( 159)					{
HXLINE( 159)						int _g2 = 0;
HXDLIN( 159)						::Array< ::Dynamic> _g3 = ::flxanimate::data::_AnimationData::GradientFilter_Impl__obj::get_GE(gradient);
HXDLIN( 159)						while((_g2 < _g3->length)){
HXLINE( 159)							 ::Dynamic entry = _g3->__get(_g2);
HXDLIN( 159)							_g2 = (_g2 + 1);
HXLINE( 161)							colors->push(::flxanimate::data::AnimationData_obj::colorFromString(::flxanimate::data::_AnimationData::GradientEntry_Impl__obj::get_C(entry)));
HXLINE( 162)							alphas->push(::flxanimate::data::_AnimationData::GradientEntry_Impl__obj::get_A(entry));
HXLINE( 163)							ratios->push(::Math_obj::round((::flxanimate::data::_AnimationData::GradientEntry_Impl__obj::get_R(entry) * ( (Float)(255) ))));
            						}
            					}
HXLINE( 167)					Float _hx_tmp29 = ::flxanimate::data::_AnimationData::GradientFilter_Impl__obj::get_DST(gradient);
HXDLIN( 167)					Float _hx_tmp30 = ::flxanimate::data::_AnimationData::GradientFilter_Impl__obj::get_AL(gradient);
HXDLIN( 167)					Float _hx_tmp31 = ::flxanimate::data::_AnimationData::BlurFilter_Impl__obj::get_BLX(gradient);
HXDLIN( 167)					Float _hx_tmp32 = ::flxanimate::data::_AnimationData::BlurFilter_Impl__obj::get_BLY(gradient);
HXDLIN( 167)					Float _hx_tmp33 = ::flxanimate::data::_AnimationData::GradientFilter_Impl__obj::get_STR(gradient);
HXDLIN( 167)					int _hx_tmp34 = ::flxanimate::data::_AnimationData::BlurFilter_Impl__obj::get_Q(gradient);
HXDLIN( 167)					::String _hx_tmp35 = ::flxanimate::data::_AnimationData::GradientFilter_Impl__obj::get_TP(gradient);
HXDLIN( 167)					bitmapFilter->unshift( ::flxanimate::filters::GradientBevelFilter_obj::__alloc( HX_CTX ,_hx_tmp29,_hx_tmp30,colors,alphas,ratios,_hx_tmp31,_hx_tmp32,_hx_tmp33,_hx_tmp34,_hx_tmp35,::flxanimate::data::_AnimationData::GradientFilter_Impl__obj::get_KK(gradient)));
HXLINE( 153)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("GGF",26,1e,36,00)) ||  (_hx_switch_0==HX_("GradientGlowFilter",55,f8,89,46)) ){
HXLINE( 137)					 ::Dynamic gradient1 = ::Reflect_obj::field(filters,filter);
HXLINE( 138)					::Array< int > colors1 = ::Array_obj< int >::__new(0);
HXLINE( 139)					::Array< Float > alphas1 = ::Array_obj< Float >::__new(0);
HXLINE( 140)					::Array< int > ratios1 = ::Array_obj< int >::__new(0);
HXLINE( 142)					{
HXLINE( 142)						int _g4 = 0;
HXDLIN( 142)						::Array< ::Dynamic> _g5 = ::flxanimate::data::_AnimationData::GradientFilter_Impl__obj::get_GE(gradient1);
HXDLIN( 142)						while((_g4 < _g5->length)){
HXLINE( 142)							 ::Dynamic entry1 = _g5->__get(_g4);
HXDLIN( 142)							_g4 = (_g4 + 1);
HXLINE( 144)							colors1->push(::flxanimate::data::AnimationData_obj::colorFromString(::flxanimate::data::_AnimationData::GradientEntry_Impl__obj::get_C(entry1)));
HXLINE( 145)							alphas1->push(::flxanimate::data::_AnimationData::GradientEntry_Impl__obj::get_A(entry1));
HXLINE( 146)							ratios1->push(::Std_obj::_hx_int((::flxanimate::data::_AnimationData::GradientEntry_Impl__obj::get_R(entry1) * ( (Float)(255) ))));
            						}
            					}
HXLINE( 150)					Float _hx_tmp36 = ::flxanimate::data::_AnimationData::GradientFilter_Impl__obj::get_DST(gradient1);
HXDLIN( 150)					Float _hx_tmp37 = ::flxanimate::data::_AnimationData::GradientFilter_Impl__obj::get_AL(gradient1);
HXDLIN( 150)					Float _hx_tmp38 = ::flxanimate::data::_AnimationData::BlurFilter_Impl__obj::get_BLX(gradient1);
HXDLIN( 150)					Float _hx_tmp39 = ::flxanimate::data::_AnimationData::BlurFilter_Impl__obj::get_BLY(gradient1);
HXDLIN( 150)					Float _hx_tmp40 = ::flxanimate::data::_AnimationData::GradientFilter_Impl__obj::get_STR(gradient1);
HXDLIN( 150)					int _hx_tmp41 = ::flxanimate::data::_AnimationData::BlurFilter_Impl__obj::get_Q(gradient1);
HXDLIN( 150)					::String _hx_tmp42 = ::flxanimate::data::_AnimationData::GradientFilter_Impl__obj::get_TP(gradient1);
HXDLIN( 150)					bitmapFilter->unshift( ::flxanimate::filters::GradientGlowFilter_obj::__alloc( HX_CTX ,_hx_tmp36,_hx_tmp37,colors1,alphas1,ratios1,_hx_tmp38,_hx_tmp39,_hx_tmp40,_hx_tmp41,_hx_tmp42,::flxanimate::data::_AnimationData::GradientFilter_Impl__obj::get_KK(gradient1)));
HXLINE( 136)					goto _hx_goto_6;
            				}
            				_hx_goto_6:;
            			}
            		}
HXLINE( 172)		return bitmapFilter;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AnimationData_obj,fromFilterJson,return )

 ::flxanimate::effects::FlxColorEffect AnimationData_obj::parseColorEffect( ::flxanimate::data::ColorEffect __o_colorEffect){
            		 ::flxanimate::data::ColorEffect colorEffect = __o_colorEffect;
            		if (::hx::IsNull(__o_colorEffect)) colorEffect = ::flxanimate::data::ColorEffect_obj::None_dyn();
            	HX_GC_STACKFRAME(&_hx_pos_00525f223802bb12_179_parseColorEffect)
HXLINE( 180)		 ::flxanimate::effects::FlxColorEffect CT = null();
HXLINE( 183)		bool _hx_tmp;
HXDLIN( 183)		if (::hx::IsPointerNotEq( colorEffect,::flxanimate::data::ColorEffect_obj::None_dyn() )) {
HXLINE( 183)			_hx_tmp = ::hx::IsNotNull( colorEffect );
            		}
            		else {
HXLINE( 183)			_hx_tmp = false;
            		}
HXDLIN( 183)		if (_hx_tmp) {
HXLINE( 185)			::cpp::VirtualArray params = ::Type_obj::enumParameters(colorEffect);
HXLINE( 186)			::String _hx_switch_0 = ::Type_obj::enumConstructor(colorEffect);
            			if (  (_hx_switch_0==HX_("Advanced",c2,25,2d,15)) ){
HXLINE( 191)				CT =  ::flxanimate::effects::FlxAdvanced_obj::__alloc( HX_CTX ,( ( ::openfl::geom::ColorTransform)(params->__get(0)) ));
HXDLIN( 191)				goto _hx_goto_10;
            			}
            			if (  (_hx_switch_0==HX_("Alpha",3e,17,c4,b4)) ){
HXLINE( 189)				CT =  ::flxanimate::effects::FlxAlpha_obj::__alloc( HX_CTX ,( (Float)(params->__get(0)) ));
HXDLIN( 189)				goto _hx_goto_10;
            			}
            			if (  (_hx_switch_0==HX_("Brightness",f1,91,22,5c)) ){
HXLINE( 190)				CT =  ::flxanimate::effects::FlxBrightness_obj::__alloc( HX_CTX ,( (Float)(params->__get(0)) ));
HXDLIN( 190)				goto _hx_goto_10;
            			}
            			if (  (_hx_switch_0==HX_("Tint",1b,f9,d5,37)) ){
HXLINE( 188)				CT =  ::flxanimate::effects::FlxTint_obj::__alloc( HX_CTX ,( (int)(params->__get(0)) ),( (Float)(params->__get(1)) ));
HXDLIN( 188)				goto _hx_goto_10;
            			}
            			/* default */{
HXLINE( 192)				CT =  ::flxanimate::effects::FlxColorEffect_obj::__alloc( HX_CTX );
            			}
            			_hx_goto_10:;
            		}
HXLINE( 197)		return CT;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AnimationData_obj,parseColorEffect,return )


AnimationData_obj::AnimationData_obj()
{
}

bool AnimationData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"setFieldBool") ) { outValue = setFieldBool_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromColorJson") ) { outValue = fromColorJson_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromFilterJson") ) { outValue = fromFilterJson_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"colorFromString") ) { outValue = colorFromString_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"parseColorEffect") ) { outValue = parseColorEffect_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AnimationData_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AnimationData_obj_sStaticStorageInfo = 0;
#endif

::hx::Class AnimationData_obj::__mClass;

static ::String AnimationData_obj_sStaticFields[] = {
	HX_("setFieldBool",02,ea,b9,fc),
	HX_("fromColorJson",61,0a,bf,95),
	HX_("colorFromString",1e,5d,dc,a3),
	HX_("fromFilterJson",0a,1c,d9,4a),
	HX_("parseColorEffect",e1,ca,95,8e),
	::String(null())
};

void AnimationData_obj::__register()
{
	AnimationData_obj _hx_dummy;
	AnimationData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flxanimate.data.AnimationData",89,36,82,47);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AnimationData_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AnimationData_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AnimationData_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimationData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimationData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flxanimate
} // end namespace data
