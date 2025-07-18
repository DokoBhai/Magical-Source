// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_backend_ui_PsychUIEventHandler
#include <backend/ui/PsychUIEventHandler.h>
#endif
#ifndef INCLUDED_backend_ui_PsychUIInputText
#include <backend/ui/PsychUIInputText.h>
#endif
#ifndef INCLUDED_backend_ui_PsychUINumericStepper
#include <backend/ui/PsychUINumericStepper.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f396e178561f660b_41_new,"backend.ui.PsychUINumericStepper","new",0xe8da32c5,"backend.ui.PsychUINumericStepper.new","backend/ui/PsychUINumericStepper.hx",41,0x983522eb)
HX_DEFINE_STACK_FRAME(_hx_pos_f396e178561f660b_3_new,"backend.ui.PsychUINumericStepper","new",0xe8da32c5,"backend.ui.PsychUINumericStepper.new","backend/ui/PsychUINumericStepper.hx",3,0x983522eb)
static const int _hx_array_data_66366c53_2[] = {
	(int)0,
};
static const int _hx_array_data_66366c53_3[] = {
	(int)1,
};
static const int _hx_array_data_66366c53_4[] = {
	(int)0,
};
static const int _hx_array_data_66366c53_5[] = {
	(int)1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_f396e178561f660b_49_update,"backend.ui.PsychUINumericStepper","update",0x3feaf0c4,"backend.ui.PsychUINumericStepper.update","backend/ui/PsychUINumericStepper.hx",49,0x983522eb)
HX_LOCAL_STACK_FRAME(_hx_pos_f396e178561f660b_77_set_value,"backend.ui.PsychUINumericStepper","set_value",0x092683f9,"backend.ui.PsychUINumericStepper.set_value","backend/ui/PsychUINumericStepper.hx",77,0x983522eb)
HX_LOCAL_STACK_FRAME(_hx_pos_f396e178561f660b_85_set_min,"backend.ui.PsychUINumericStepper","set_min",0x29a1641a,"backend.ui.PsychUINumericStepper.set_min","backend/ui/PsychUINumericStepper.hx",85,0x983522eb)
HX_LOCAL_STACK_FRAME(_hx_pos_f396e178561f660b_94_set_max,"backend.ui.PsychUINumericStepper","set_max",0x29a15d2c,"backend.ui.PsychUINumericStepper.set_max","backend/ui/PsychUINumericStepper.hx",94,0x983522eb)
HX_LOCAL_STACK_FRAME(_hx_pos_f396e178561f660b_103_set_decimals,"backend.ui.PsychUINumericStepper","set_decimals",0x127bcb3a,"backend.ui.PsychUINumericStepper.set_decimals","backend/ui/PsychUINumericStepper.hx",103,0x983522eb)
HX_LOCAL_STACK_FRAME(_hx_pos_f396e178561f660b_109_set_isPercent,"backend.ui.PsychUINumericStepper","set_isPercent",0x8c181083,"backend.ui.PsychUINumericStepper.set_isPercent","backend/ui/PsychUINumericStepper.hx",109,0x983522eb)
HX_LOCAL_STACK_FRAME(_hx_pos_f396e178561f660b_123__updateValue,"backend.ui.PsychUINumericStepper","_updateValue",0xb3593fa4,"backend.ui.PsychUINumericStepper._updateValue","backend/ui/PsychUINumericStepper.hx",123,0x983522eb)
HX_LOCAL_STACK_FRAME(_hx_pos_f396e178561f660b_158__updateFilter,"backend.ui.PsychUINumericStepper","_updateFilter",0x703c8c25,"backend.ui.PsychUINumericStepper._updateFilter","backend/ui/PsychUINumericStepper.hx",158,0x983522eb)
HX_LOCAL_STACK_FRAME(_hx_pos_f396e178561f660b_196__internalOnChange,"backend.ui.PsychUINumericStepper","_internalOnChange",0x9dfb87d0,"backend.ui.PsychUINumericStepper._internalOnChange","backend/ui/PsychUINumericStepper.hx",196,0x983522eb)
HX_LOCAL_STACK_FRAME(_hx_pos_f396e178561f660b_202_setGraphicSize,"backend.ui.PsychUINumericStepper","setGraphicSize",0xdfaff4c2,"backend.ui.PsychUINumericStepper.setGraphicSize","backend/ui/PsychUINumericStepper.hx",202,0x983522eb)
HX_LOCAL_STACK_FRAME(_hx_pos_f396e178561f660b_5_boot,"backend.ui.PsychUINumericStepper","boot",0xce2b3a2d,"backend.ui.PsychUINumericStepper.boot","backend/ui/PsychUINumericStepper.hx",5,0x983522eb)
namespace backend{
namespace ui{

void PsychUINumericStepper_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_step,::hx::Null< Float >  __o_defValue,::hx::Null< Float >  __o_min,::hx::Null< Float >  __o_max,::hx::Null< int >  __o_decimals, ::Dynamic __o_wid, ::Dynamic __o_isPercent){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::backend::ui::PsychUINumericStepper,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_f396e178561f660b_41_new)
HXLINE(  42)			_gthis->_updateValue();
HXLINE(  43)			_gthis->_internalOnChange();
            		}
            		HX_END_LOCAL_FUNC0((void))

            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		Float step = __o_step.Default(1);
            		Float defValue = __o_defValue.Default(0);
            		Float min = __o_min.Default(-999);
            		Float max = __o_max.Default(999);
            		int decimals = __o_decimals.Default(0);
            		 ::Dynamic wid = __o_wid;
            		if (::hx::IsNull(__o_wid)) wid = 60;
            		 ::Dynamic isPercent = __o_isPercent;
            		if (::hx::IsNull(__o_isPercent)) isPercent = false;
            	HX_GC_STACKFRAME(&_hx_pos_f396e178561f660b_3_new)
HXLINE( 194)		this->broadcastStepperEvent = true;
HXLINE(  11)		this->isPercent = false;
HXLINE(  10)		this->decimals = 0;
HXLINE(   9)		this->max = ((Float)0);
HXLINE(   8)		this->min = ((Float)0);
HXLINE(   7)		this->step = ((Float)0);
HXLINE(  18)		 ::backend::ui::PsychUINumericStepper _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  19)		super::__construct(x,y,wid,HX_("",00,00,00,00),null());
HXLINE(  20)		this->set_fieldWidth(::Std_obj::_hx_int((this->behindText->get_width() + 2)));
HXLINE(  21)		this->decimals = decimals;
HXLINE(  22)		this->isPercent = ( (bool)(isPercent) );
HXLINE(  23)		this->min = min;
HXLINE(  24)		this->max = max;
HXLINE(  25)		this->step = step;
HXLINE(  26)		this->_updateFilter();
HXLINE(  28)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,this->fieldWidth,null(),null());
HXDLIN(  28)		this->buttonPlus = _hx_tmp->loadGraphic(::backend::Paths_obj::image(HX_("psych-ui/stepper_plus",11,e2,e3,43),HX_("embed",d9,8d,cf,6f),null()),true,16,16,null(),null());
HXLINE(  29)		this->buttonPlus->animation->add(HX_("normal",27,72,69,30),::Array_obj< int >::fromData( _hx_array_data_66366c53_2,1),null(),false,null(),null());
HXLINE(  30)		this->buttonPlus->animation->add(HX_("pressed",a2,d2,e6,39),::Array_obj< int >::fromData( _hx_array_data_66366c53_3,1),null(),false,null(),null());
HXLINE(  31)		this->buttonPlus->animation->play(HX_("normal",27,72,69,30),null(),null(),null());
HXLINE(  32)		this->add(this->buttonPlus);
HXLINE(  34)		int _hx_tmp1 = this->fieldWidth;
HXDLIN(  34)		 ::flixel::FlxSprite _hx_tmp2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(_hx_tmp1 + this->buttonPlus->get_width()),null(),null());
HXDLIN(  34)		this->buttonMinus = _hx_tmp2->loadGraphic(::backend::Paths_obj::image(HX_("psych-ui/stepper_minus",d9,3d,4d,67),HX_("embed",d9,8d,cf,6f),null()),true,16,16,null(),null());
HXLINE(  35)		this->buttonMinus->animation->add(HX_("normal",27,72,69,30),::Array_obj< int >::fromData( _hx_array_data_66366c53_4,1),null(),false,null(),null());
HXLINE(  36)		this->buttonMinus->animation->add(HX_("pressed",a2,d2,e6,39),::Array_obj< int >::fromData( _hx_array_data_66366c53_5,1),null(),false,null(),null());
HXLINE(  37)		this->buttonMinus->animation->play(HX_("normal",27,72,69,30),null(),null(),null());
HXLINE(  38)		this->add(this->buttonMinus);
HXLINE(  40)		this->unfocus =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE(  45)		this->set_value(defValue);
            	}

Dynamic PsychUINumericStepper_obj::__CreateEmpty() { return new PsychUINumericStepper_obj; }

void *PsychUINumericStepper_obj::_hx_vtable = 0;

Dynamic PsychUINumericStepper_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PsychUINumericStepper_obj > _hx_result = new PsychUINumericStepper_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return _hx_result;
}

bool PsychUINumericStepper_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x288ce903) {
			if (inClassId<=(int)0x0c9f742b) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0c9f742b;
			} else {
				return inClassId==(int)0x288ce903;
			}
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		if (inClassId<=(int)0x7dab0655) {
			return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
		} else {
			return inClassId==(int)0x7fb5dc94;
		}
	}
}

void PsychUINumericStepper_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_f396e178561f660b_49_update)
HXLINE(  50)		this->super::update(elapsed);
HXLINE(  52)		if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE(  54)			bool _hx_tmp;
HXDLIN(  54)			bool _hx_tmp1;
HXDLIN(  54)			if (::hx::IsNotNull( this->buttonPlus )) {
HXLINE(  54)				_hx_tmp1 = this->buttonPlus->exists;
            			}
            			else {
HXLINE(  54)				_hx_tmp1 = false;
            			}
HXDLIN(  54)			if (_hx_tmp1) {
HXLINE(  54)				 ::flixel::input::mouse::FlxMouse _hx_tmp2 = ::flixel::FlxG_obj::mouse;
HXDLIN(  54)				 ::flixel::FlxSprite _hx_tmp3 = this->buttonPlus;
HXDLIN(  54)				_hx_tmp = _hx_tmp2->overlaps(_hx_tmp3,this->get_camera());
            			}
            			else {
HXLINE(  54)				_hx_tmp = false;
            			}
HXDLIN(  54)			if (_hx_tmp) {
HXLINE(  56)				this->buttonPlus->animation->play(HX_("pressed",a2,d2,e6,39),null(),null(),null());
HXLINE(  57)				this->set_value((this->value + this->step));
HXLINE(  58)				this->_internalOnChange();
            			}
            			else {
HXLINE(  60)				bool _hx_tmp4;
HXDLIN(  60)				bool _hx_tmp5;
HXDLIN(  60)				if (::hx::IsNotNull( this->buttonMinus )) {
HXLINE(  60)					_hx_tmp5 = this->buttonMinus->exists;
            				}
            				else {
HXLINE(  60)					_hx_tmp5 = false;
            				}
HXDLIN(  60)				if (_hx_tmp5) {
HXLINE(  60)					 ::flixel::input::mouse::FlxMouse _hx_tmp6 = ::flixel::FlxG_obj::mouse;
HXDLIN(  60)					 ::flixel::FlxSprite _hx_tmp7 = this->buttonMinus;
HXDLIN(  60)					_hx_tmp4 = _hx_tmp6->overlaps(_hx_tmp7,this->get_camera());
            				}
            				else {
HXLINE(  60)					_hx_tmp4 = false;
            				}
HXDLIN(  60)				if (_hx_tmp4) {
HXLINE(  62)					this->buttonMinus->animation->play(HX_("pressed",a2,d2,e6,39),null(),null(),null());
HXLINE(  63)					this->set_value((this->value - this->step));
HXLINE(  64)					this->_internalOnChange();
            				}
            			}
            		}
            		else {
HXLINE(  67)			 ::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;
HXDLIN(  67)			bool _hx_tmp8;
HXDLIN(  67)			if ((_this->current != 0)) {
HXLINE(  67)				_hx_tmp8 = (_this->current == -1);
            			}
            			else {
HXLINE(  67)				_hx_tmp8 = true;
            			}
HXDLIN(  67)			if (_hx_tmp8) {
HXLINE(  69)				bool _hx_tmp9;
HXDLIN(  69)				bool _hx_tmp10;
HXDLIN(  69)				bool _hx_tmp11;
HXDLIN(  69)				if (::hx::IsNotNull( this->buttonPlus )) {
HXLINE(  69)					_hx_tmp11 = this->buttonPlus->exists;
            				}
            				else {
HXLINE(  69)					_hx_tmp11 = false;
            				}
HXDLIN(  69)				if (_hx_tmp11) {
HXLINE(  69)					_hx_tmp10 = ::hx::IsNotNull( this->buttonPlus->animation->_curAnim );
            				}
            				else {
HXLINE(  69)					_hx_tmp10 = false;
            				}
HXDLIN(  69)				if (_hx_tmp10) {
HXLINE(  69)					_hx_tmp9 = (this->buttonPlus->animation->_curAnim->name != HX_("normal",27,72,69,30));
            				}
            				else {
HXLINE(  69)					_hx_tmp9 = false;
            				}
HXDLIN(  69)				if (_hx_tmp9) {
HXLINE(  70)					this->buttonPlus->animation->play(HX_("normal",27,72,69,30),null(),null(),null());
            				}
HXLINE(  71)				bool _hx_tmp12;
HXDLIN(  71)				bool _hx_tmp13;
HXDLIN(  71)				bool _hx_tmp14;
HXDLIN(  71)				if (::hx::IsNotNull( this->buttonMinus )) {
HXLINE(  71)					_hx_tmp14 = this->buttonMinus->exists;
            				}
            				else {
HXLINE(  71)					_hx_tmp14 = false;
            				}
HXDLIN(  71)				if (_hx_tmp14) {
HXLINE(  71)					_hx_tmp13 = ::hx::IsNotNull( this->buttonMinus->animation->_curAnim );
            				}
            				else {
HXLINE(  71)					_hx_tmp13 = false;
            				}
HXDLIN(  71)				if (_hx_tmp13) {
HXLINE(  71)					_hx_tmp12 = (this->buttonMinus->animation->_curAnim->name != HX_("normal",27,72,69,30));
            				}
            				else {
HXLINE(  71)					_hx_tmp12 = false;
            				}
HXDLIN(  71)				if (_hx_tmp12) {
HXLINE(  72)					this->buttonMinus->animation->play(HX_("normal",27,72,69,30),null(),null(),null());
            				}
            			}
            		}
            	}


Float PsychUINumericStepper_obj::set_value(Float v){
            	HX_STACKFRAME(&_hx_pos_f396e178561f660b_77_set_value)
HXLINE(  78)		this->value = ::Math_obj::max(this->min,::Math_obj::min(this->max,v));
HXLINE(  79)		 ::Dynamic _hx_tmp;
HXDLIN(  79)		if (this->isPercent) {
HXLINE(  79)			_hx_tmp = (this->value * ( (Float)(100) ));
            		}
            		else {
HXLINE(  79)			_hx_tmp = this->value;
            		}
HXDLIN(  79)		this->set_text(::Std_obj::string(_hx_tmp));
HXLINE(  80)		this->_updateValue();
HXLINE(  81)		return this->value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PsychUINumericStepper_obj,set_value,return )

Float PsychUINumericStepper_obj::set_min(Float v){
            	HX_STACKFRAME(&_hx_pos_f396e178561f660b_85_set_min)
HXLINE(  86)		this->min = v;
HXLINE(  87)		if ((this->min > this->max)) {
HXLINE(  87)			this->set_max(this->min);
            		}
HXLINE(  88)		this->_updateFilter();
HXLINE(  89)		this->_updateValue();
HXLINE(  90)		return this->min;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PsychUINumericStepper_obj,set_min,return )

Float PsychUINumericStepper_obj::set_max(Float v){
            	HX_STACKFRAME(&_hx_pos_f396e178561f660b_94_set_max)
HXLINE(  95)		this->max = v;
HXLINE(  96)		if ((this->max < this->min)) {
HXLINE(  96)			this->set_min(this->max);
            		}
HXLINE(  97)		this->_updateFilter();
HXLINE(  98)		this->_updateValue();
HXLINE(  99)		return this->max;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PsychUINumericStepper_obj,set_max,return )

int PsychUINumericStepper_obj::set_decimals(int v){
            	HX_STACKFRAME(&_hx_pos_f396e178561f660b_103_set_decimals)
HXLINE( 104)		this->decimals = v;
HXLINE( 105)		this->_updateFilter();
HXLINE( 106)		return this->decimals;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PsychUINumericStepper_obj,set_decimals,return )

bool PsychUINumericStepper_obj::set_isPercent(bool v){
            	HX_STACKFRAME(&_hx_pos_f396e178561f660b_109_set_isPercent)
HXLINE( 110)		bool changed = (this->isPercent != v);
HXLINE( 111)		this->isPercent = v;
HXLINE( 112)		this->_updateFilter();
HXLINE( 114)		if (changed) {
HXLINE( 116)			this->set_text(::Std_obj::string((this->value * ( (Float)(100) ))));
HXLINE( 117)			this->_updateValue();
            		}
HXLINE( 119)		return this->isPercent;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PsychUINumericStepper_obj,set_isPercent,return )

void PsychUINumericStepper_obj::_updateValue(){
            	HX_STACKFRAME(&_hx_pos_f396e178561f660b_123__updateValue)
HXLINE( 124)		::String txt = ::StringTools_obj::replace(this->text,HX_("%",25,00,00,00),HX_("",00,00,00,00));
HXLINE( 125)		if ((txt.indexOf(HX_("-",2d,00,00,00),null()) > 0)) {
HXLINE( 126)			::StringTools_obj::replace(txt,HX_("-",2d,00,00,00),HX_("",00,00,00,00));
            		}
HXLINE( 128)		while(true){
HXLINE( 128)			bool _hx_tmp;
HXDLIN( 128)			if ((txt.indexOf(HX_(".",2e,00,00,00),null()) > -1)) {
HXLINE( 128)				int _hx_tmp1 = txt.indexOf(HX_(".",2e,00,00,00),null());
HXDLIN( 128)				_hx_tmp = (_hx_tmp1 != txt.lastIndexOf(HX_(".",2e,00,00,00),null()));
            			}
            			else {
HXLINE( 128)				_hx_tmp = false;
            			}
HXDLIN( 128)			if (!(_hx_tmp)) {
HXLINE( 128)				goto _hx_goto_12;
            			}
HXLINE( 130)			int lastId = txt.lastIndexOf(HX_(".",2e,00,00,00),null());
HXLINE( 131)			::String txt1 = txt.substr(0,lastId);
HXDLIN( 131)			txt = (txt1 + txt.substring((lastId + 1),null()));
            		}
            		_hx_goto_12:;
HXLINE( 134)		Float val = ::Std_obj::parseFloat(txt);
HXLINE( 135)		if (::Math_obj::isNaN(val)) {
HXLINE( 136)			val = ( (Float)(0) );
            		}
HXLINE( 138)		if (this->isPercent) {
HXLINE( 138)			val = (val / ( (Float)(100) ));
            		}
HXLINE( 140)		if ((val < this->min)) {
HXLINE( 140)			val = this->min;
            		}
            		else {
HXLINE( 141)			if ((val > this->max)) {
HXLINE( 141)				val = this->max;
            			}
            		}
HXLINE( 142)		val = ::flixel::math::FlxMath_obj::roundDecimal(val,this->decimals);
HXLINE( 143)		this->value = val;
HXLINE( 145)		if (this->isPercent) {
HXLINE( 147)			this->set_text(::Std_obj::string((val * ( (Float)(100) ))));
HXLINE( 148)			this->set_text((this->text + HX_("%",25,00,00,00)));
            		}
            		else {
HXLINE( 150)			this->set_text(::Std_obj::string(val));
            		}
HXLINE( 152)		if ((this->caretIndex > this->text.length)) {
HXLINE( 152)			this->set_caretIndex(this->text.length);
            		}
HXLINE( 153)		if ((this->selectIndex > this->text.length)) {
HXLINE( 153)			this->selectIndex = this->text.length;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(PsychUINumericStepper_obj,_updateValue,(void))

void PsychUINumericStepper_obj::_updateFilter(){
            	HX_GC_STACKFRAME(&_hx_pos_f396e178561f660b_158__updateFilter)
HXDLIN( 158)		if ((this->min < 0)) {
HXLINE( 160)			if ((this->decimals > 0)) {
HXLINE( 162)				if (this->isPercent) {
HXLINE( 163)					this->set_customFilterPattern( ::EReg_obj::__alloc( HX_CTX ,HX_("[^0-9.%\\-]*",0e,7c,01,37),HX_("g",67,00,00,00)));
            				}
            				else {
HXLINE( 165)					this->set_customFilterPattern( ::EReg_obj::__alloc( HX_CTX ,HX_("[^0-9.\\-]*",73,c8,90,5b),HX_("g",67,00,00,00)));
            				}
            			}
            			else {
HXLINE( 169)				if (this->isPercent) {
HXLINE( 170)					this->set_customFilterPattern( ::EReg_obj::__alloc( HX_CTX ,HX_("[^0-9%\\-]*",ea,8f,f5,2c),HX_("g",67,00,00,00)));
            				}
            				else {
HXLINE( 172)					this->set_customFilterPattern( ::EReg_obj::__alloc( HX_CTX ,HX_("[^0-9\\-]*",17,e4,34,d5),HX_("g",67,00,00,00)));
            				}
            			}
            		}
            		else {
HXLINE( 177)			if ((this->decimals > 0)) {
HXLINE( 179)				if (this->isPercent) {
HXLINE( 180)					this->set_customFilterPattern( ::EReg_obj::__alloc( HX_CTX ,HX_("[^0-9.%]*",7d,01,c7,b6),HX_("g",67,00,00,00)));
            				}
            				else {
HXLINE( 182)					this->set_customFilterPattern( ::EReg_obj::__alloc( HX_CTX ,HX_("[^0-9.]*",a2,fa,c9,d9),HX_("g",67,00,00,00)));
            				}
            			}
            			else {
HXLINE( 186)				if (this->isPercent) {
HXLINE( 187)					this->set_customFilterPattern( ::EReg_obj::__alloc( HX_CTX ,HX_("[^0-9%]*",59,26,c3,d9),HX_("g",67,00,00,00)));
            				}
            				else {
HXLINE( 189)					this->set_customFilterPattern( ::EReg_obj::__alloc( HX_CTX ,HX_("[^0-9]*",46,25,d3,1e),HX_("g",67,00,00,00)));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(PsychUINumericStepper_obj,_updateFilter,(void))

void PsychUINumericStepper_obj::_internalOnChange(){
            	HX_STACKFRAME(&_hx_pos_f396e178561f660b_196__internalOnChange)
HXLINE( 197)		if (::hx::IsNotNull( this->onValueChange )) {
HXLINE( 197)			this->onValueChange();
            		}
HXLINE( 198)		if (this->broadcastStepperEvent) {
HXLINE( 198)			::backend::ui::PsychUIEventHandler_obj::event(::backend::ui::PsychUINumericStepper_obj::CHANGE_EVENT,::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(PsychUINumericStepper_obj,_internalOnChange,(void))

void PsychUINumericStepper_obj::setGraphicSize(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height){
            		Float width = __o_width.Default(0);
            		Float height = __o_height.Default(0);
            	HX_STACKFRAME(&_hx_pos_f396e178561f660b_202_setGraphicSize)
HXLINE( 203)		this->super::setGraphicSize(width,height);
HXLINE( 204)		this->behindText->setGraphicSize((width - ( (Float)(32) )),(height - ( (Float)(2) )));
            	}


::String PsychUINumericStepper_obj::CHANGE_EVENT;


::hx::ObjectPtr< PsychUINumericStepper_obj > PsychUINumericStepper_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_step,::hx::Null< Float >  __o_defValue,::hx::Null< Float >  __o_min,::hx::Null< Float >  __o_max,::hx::Null< int >  __o_decimals, ::Dynamic __o_wid, ::Dynamic __o_isPercent) {
	::hx::ObjectPtr< PsychUINumericStepper_obj > __this = new PsychUINumericStepper_obj();
	__this->__construct(__o_x,__o_y,__o_step,__o_defValue,__o_min,__o_max,__o_decimals,__o_wid,__o_isPercent);
	return __this;
}

::hx::ObjectPtr< PsychUINumericStepper_obj > PsychUINumericStepper_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_step,::hx::Null< Float >  __o_defValue,::hx::Null< Float >  __o_min,::hx::Null< Float >  __o_max,::hx::Null< int >  __o_decimals, ::Dynamic __o_wid, ::Dynamic __o_isPercent) {
	PsychUINumericStepper_obj *__this = (PsychUINumericStepper_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PsychUINumericStepper_obj), true, "backend.ui.PsychUINumericStepper"));
	*(void **)__this = PsychUINumericStepper_obj::_hx_vtable;
	backend::ui::PsychUIInputText_obj::__alloc_dynamic_functions(_hx_ctx,__this);
	__this->__construct(__o_x,__o_y,__o_step,__o_defValue,__o_min,__o_max,__o_decimals,__o_wid,__o_isPercent);
	return __this;
}

PsychUINumericStepper_obj::PsychUINumericStepper_obj()
{
}

void PsychUINumericStepper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PsychUINumericStepper);
	HX_MARK_MEMBER_NAME(step,"step");
	HX_MARK_MEMBER_NAME(min,"min");
	HX_MARK_MEMBER_NAME(max,"max");
	HX_MARK_MEMBER_NAME(decimals,"decimals");
	HX_MARK_MEMBER_NAME(isPercent,"isPercent");
	HX_MARK_MEMBER_NAME(buttonPlus,"buttonPlus");
	HX_MARK_MEMBER_NAME(buttonMinus,"buttonMinus");
	HX_MARK_MEMBER_NAME(onValueChange,"onValueChange");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(broadcastStepperEvent,"broadcastStepperEvent");
	 ::backend::ui::PsychUIInputText_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PsychUINumericStepper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(step,"step");
	HX_VISIT_MEMBER_NAME(min,"min");
	HX_VISIT_MEMBER_NAME(max,"max");
	HX_VISIT_MEMBER_NAME(decimals,"decimals");
	HX_VISIT_MEMBER_NAME(isPercent,"isPercent");
	HX_VISIT_MEMBER_NAME(buttonPlus,"buttonPlus");
	HX_VISIT_MEMBER_NAME(buttonMinus,"buttonMinus");
	HX_VISIT_MEMBER_NAME(onValueChange,"onValueChange");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(broadcastStepperEvent,"broadcastStepperEvent");
	 ::backend::ui::PsychUIInputText_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PsychUINumericStepper_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return ::hx::Val( min ); }
		if (HX_FIELD_EQ(inName,"max") ) { return ::hx::Val( max ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { return ::hx::Val( step ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( value ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"set_min") ) { return ::hx::Val( set_min_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_max") ) { return ::hx::Val( set_max_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"decimals") ) { return ::hx::Val( decimals ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isPercent") ) { return ::hx::Val( isPercent ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return ::hx::Val( set_value_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonPlus") ) { return ::hx::Val( buttonPlus ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buttonMinus") ) { return ::hx::Val( buttonMinus ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_decimals") ) { return ::hx::Val( set_decimals_dyn() ); }
		if (HX_FIELD_EQ(inName,"_updateValue") ) { return ::hx::Val( _updateValue_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onValueChange") ) { return ::hx::Val( onValueChange ); }
		if (HX_FIELD_EQ(inName,"set_isPercent") ) { return ::hx::Val( set_isPercent_dyn() ); }
		if (HX_FIELD_EQ(inName,"_updateFilter") ) { return ::hx::Val( _updateFilter_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setGraphicSize") ) { return ::hx::Val( setGraphicSize_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_internalOnChange") ) { return ::hx::Val( _internalOnChange_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"broadcastStepperEvent") ) { return ::hx::Val( broadcastStepperEvent ); }
	}
	return super::__Field(inName,inCallProp);
}

bool PsychUINumericStepper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"CHANGE_EVENT") ) { outValue = ( CHANGE_EVENT ); return true; }
	}
	return false;
}

::hx::Val PsychUINumericStepper_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_min(inValue.Cast< Float >()) );min=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_max(inValue.Cast< Float >()) );max=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { step=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_value(inValue.Cast< Float >()) );value=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"decimals") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_decimals(inValue.Cast< int >()) );decimals=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isPercent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_isPercent(inValue.Cast< bool >()) );isPercent=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonPlus") ) { buttonPlus=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buttonMinus") ) { buttonMinus=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onValueChange") ) { onValueChange=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"broadcastStepperEvent") ) { broadcastStepperEvent=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PsychUINumericStepper_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"CHANGE_EVENT") ) { CHANGE_EVENT=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void PsychUINumericStepper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("step",4c,e7,5b,4c));
	outFields->push(HX_("min",92,11,53,00));
	outFields->push(HX_("max",a4,0a,53,00));
	outFields->push(HX_("decimals",c2,4a,6a,12));
	outFields->push(HX_("isPercent",fb,27,d9,7c));
	outFields->push(HX_("buttonPlus",6c,ae,50,b4));
	outFields->push(HX_("buttonMinus",1e,41,13,56));
	outFields->push(HX_("value",71,7f,b8,31));
	outFields->push(HX_("broadcastStepperEvent",ea,21,c6,5e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PsychUINumericStepper_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(PsychUINumericStepper_obj,step),HX_("step",4c,e7,5b,4c)},
	{::hx::fsFloat,(int)offsetof(PsychUINumericStepper_obj,min),HX_("min",92,11,53,00)},
	{::hx::fsFloat,(int)offsetof(PsychUINumericStepper_obj,max),HX_("max",a4,0a,53,00)},
	{::hx::fsInt,(int)offsetof(PsychUINumericStepper_obj,decimals),HX_("decimals",c2,4a,6a,12)},
	{::hx::fsBool,(int)offsetof(PsychUINumericStepper_obj,isPercent),HX_("isPercent",fb,27,d9,7c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PsychUINumericStepper_obj,buttonPlus),HX_("buttonPlus",6c,ae,50,b4)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PsychUINumericStepper_obj,buttonMinus),HX_("buttonMinus",1e,41,13,56)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(PsychUINumericStepper_obj,onValueChange),HX_("onValueChange",e2,4c,8c,1b)},
	{::hx::fsFloat,(int)offsetof(PsychUINumericStepper_obj,value),HX_("value",71,7f,b8,31)},
	{::hx::fsBool,(int)offsetof(PsychUINumericStepper_obj,broadcastStepperEvent),HX_("broadcastStepperEvent",ea,21,c6,5e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo PsychUINumericStepper_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &PsychUINumericStepper_obj::CHANGE_EVENT,HX_("CHANGE_EVENT",ab,38,ff,8d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String PsychUINumericStepper_obj_sMemberFields[] = {
	HX_("step",4c,e7,5b,4c),
	HX_("min",92,11,53,00),
	HX_("max",a4,0a,53,00),
	HX_("decimals",c2,4a,6a,12),
	HX_("isPercent",fb,27,d9,7c),
	HX_("buttonPlus",6c,ae,50,b4),
	HX_("buttonMinus",1e,41,13,56),
	HX_("onValueChange",e2,4c,8c,1b),
	HX_("value",71,7f,b8,31),
	HX_("update",09,86,05,87),
	HX_("set_value",d4,c7,b2,58),
	HX_("set_min",35,6b,c9,19),
	HX_("set_max",47,64,c9,19),
	HX_("set_decimals",3f,22,7d,dc),
	HX_("set_isPercent",de,dd,42,83),
	HX_("_updateValue",a9,96,5a,7d),
	HX_("_updateFilter",80,59,67,67),
	HX_("broadcastStepperEvent",ea,21,c6,5e),
	HX_("_internalOnChange",ab,9e,87,fc),
	HX_("setGraphicSize",07,d7,f8,2d),
	::String(null()) };

static void PsychUINumericStepper_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PsychUINumericStepper_obj::CHANGE_EVENT,"CHANGE_EVENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PsychUINumericStepper_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PsychUINumericStepper_obj::CHANGE_EVENT,"CHANGE_EVENT");
};

#endif

::hx::Class PsychUINumericStepper_obj::__mClass;

static ::String PsychUINumericStepper_obj_sStaticFields[] = {
	HX_("CHANGE_EVENT",ab,38,ff,8d),
	::String(null())
};

void PsychUINumericStepper_obj::__register()
{
	PsychUINumericStepper_obj _hx_dummy;
	PsychUINumericStepper_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("backend.ui.PsychUINumericStepper",53,6c,36,66);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PsychUINumericStepper_obj::__GetStatic;
	__mClass->mSetStaticField = &PsychUINumericStepper_obj::__SetStatic;
	__mClass->mMarkFunc = PsychUINumericStepper_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PsychUINumericStepper_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PsychUINumericStepper_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PsychUINumericStepper_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PsychUINumericStepper_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PsychUINumericStepper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PsychUINumericStepper_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PsychUINumericStepper_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f396e178561f660b_5_boot)
HXDLIN(   5)		CHANGE_EVENT = HX_("numericstepper_change",ab,21,65,85);
            	}
}

} // end namespace backend
} // end namespace ui
