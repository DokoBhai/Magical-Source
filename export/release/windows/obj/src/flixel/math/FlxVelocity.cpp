// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_math_FlxAngle
#include <flixel/math/FlxAngle.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVelocity
#include <flixel/math/FlxVelocity.h>
#endif
#ifndef INCLUDED_flixel_math__FlxPoint_FlxPoint_Impl_
#include <flixel/math/_FlxPoint/FlxPoint_Impl_.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util__FlxDirectionFlags_FlxDirectionFlags_Impl_
#include <flixel/util/_FlxDirectionFlags/FlxDirectionFlags_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_efb42de64cd9f379_24_moveTowardsObject,"flixel.math.FlxVelocity","moveTowardsObject",0xaf722b77,"flixel.math.FlxVelocity.moveTowardsObject","flixel/math/FlxVelocity.hx",24,0xbea30ec3)
HX_LOCAL_STACK_FRAME(_hx_pos_efb42de64cd9f379_50_accelerateTowardsObject,"flixel.math.FlxVelocity","accelerateTowardsObject",0x1ebf81eb,"flixel.math.FlxVelocity.accelerateTowardsObject","flixel/math/FlxVelocity.hx",50,0xbea30ec3)
HX_LOCAL_STACK_FRAME(_hx_pos_efb42de64cd9f379_67_moveTowardsMouse,"flixel.math.FlxVelocity","moveTowardsMouse",0x58da686d,"flixel.math.FlxVelocity.moveTowardsMouse","flixel/math/FlxVelocity.hx",67,0xbea30ec3)
HX_LOCAL_STACK_FRAME(_hx_pos_efb42de64cd9f379_95_moveTowardsTouch,"flixel.math.FlxVelocity","moveTowardsTouch",0x60a86a07,"flixel.math.FlxVelocity.moveTowardsTouch","flixel/math/FlxVelocity.hx",95,0xbea30ec3)
HX_LOCAL_STACK_FRAME(_hx_pos_efb42de64cd9f379_122_accelerateTowardsMouse,"flixel.math.FlxVelocity","accelerateTowardsMouse",0x2dba9c79,"flixel.math.FlxVelocity.accelerateTowardsMouse","flixel/math/FlxVelocity.hx",122,0xbea30ec3)
HX_LOCAL_STACK_FRAME(_hx_pos_efb42de64cd9f379_141_accelerateTowardsTouch,"flixel.math.FlxVelocity","accelerateTowardsTouch",0x35889e13,"flixel.math.FlxVelocity.accelerateTowardsTouch","flixel/math/FlxVelocity.hx",141,0xbea30ec3)
HX_LOCAL_STACK_FRAME(_hx_pos_efb42de64cd9f379_160_moveTowardsPoint,"flixel.math.FlxVelocity","moveTowardsPoint",0x13050698,"flixel.math.FlxVelocity.moveTowardsPoint","flixel/math/FlxVelocity.hx",160,0xbea30ec3)
HX_LOCAL_STACK_FRAME(_hx_pos_efb42de64cd9f379_188_accelerateTowardsPoint,"flixel.math.FlxVelocity","accelerateTowardsPoint",0xe7e53aa4,"flixel.math.FlxVelocity.accelerateTowardsPoint","flixel/math/FlxVelocity.hx",188,0xbea30ec3)
HX_LOCAL_STACK_FRAME(_hx_pos_efb42de64cd9f379_204_velocityFromAngle,"flixel.math.FlxVelocity","velocityFromAngle",0x954f2639,"flixel.math.FlxVelocity.velocityFromAngle","flixel/math/FlxVelocity.hx",204,0xbea30ec3)
HX_LOCAL_STACK_FRAME(_hx_pos_efb42de64cd9f379_219_velocityFromFacing,"flixel.math.FlxVelocity","velocityFromFacing",0x90de75f4,"flixel.math.FlxVelocity.velocityFromFacing","flixel/math/FlxVelocity.hx",219,0xbea30ec3)
HX_LOCAL_STACK_FRAME(_hx_pos_efb42de64cd9f379_233_computeVelocity,"flixel.math.FlxVelocity","computeVelocity",0xd7550d81,"flixel.math.FlxVelocity.computeVelocity","flixel/math/FlxVelocity.hx",233,0xbea30ec3)
HX_LOCAL_STACK_FRAME(_hx_pos_efb42de64cd9f379_279_accelerateFromAngle,"flixel.math.FlxVelocity","accelerateFromAngle",0x5b8d48b9,"flixel.math.FlxVelocity.accelerateFromAngle","flixel/math/FlxVelocity.hx",279,0xbea30ec3)
namespace flixel{
namespace math{

void FlxVelocity_obj::__construct() { }

Dynamic FlxVelocity_obj::__CreateEmpty() { return new FlxVelocity_obj; }

void *FlxVelocity_obj::_hx_vtable = 0;

Dynamic FlxVelocity_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxVelocity_obj > _hx_result = new FlxVelocity_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxVelocity_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x083cfec7;
}

void FlxVelocity_obj::moveTowardsObject( ::flixel::FlxSprite Source, ::flixel::FlxSprite Dest,::hx::Null< Float >  __o_Speed,::hx::Null< int >  __o_MaxTime){
            		Float Speed = __o_Speed.Default(60);
            		int MaxTime = __o_MaxTime.Default(0);
            	HX_STACKFRAME(&_hx_pos_efb42de64cd9f379_24_moveTowardsObject)
HXLINE(  25)		Float a = ::flixel::math::FlxAngle_obj::angleBetween(Source,Dest,null());
HXLINE(  27)		if ((MaxTime > 0)) {
HXLINE(  29)			Float dx = ((Source->x + Source->origin->x) - (Dest->x + Dest->origin->x));
HXDLIN(  29)			Float dy = ((Source->y + Source->origin->y) - (Dest->y + Dest->origin->y));
HXDLIN(  29)			int d = ::Std_obj::_hx_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
HXLINE(  32)			Speed = ( (Float)(::Std_obj::_hx_int((( (Float)(d) ) / (( (Float)(MaxTime) ) / ( (Float)(1000) ))))) );
            		}
HXLINE(  35)		Source->velocity->set_x((::Math_obj::cos(a) * Speed));
HXLINE(  36)		Source->velocity->set_y((::Math_obj::sin(a) * Speed));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,moveTowardsObject,(void))

void FlxVelocity_obj::accelerateTowardsObject( ::flixel::FlxSprite Source, ::flixel::FlxSprite Dest,Float Acceleration,Float MaxSpeed){
            	HX_STACKFRAME(&_hx_pos_efb42de64cd9f379_50_accelerateTowardsObject)
HXLINE(  51)		Float a = ::flixel::math::FlxAngle_obj::angleBetween(Source,Dest,null());
HXLINE(  52)		{
HXLINE(  52)			Float sinA = ::Math_obj::sin(a);
HXDLIN(  52)			Float cosA = ::Math_obj::cos(a);
HXDLIN(  52)			{
HXLINE(  52)				 ::flixel::math::FlxBasePoint this1 = Source->velocity;
HXDLIN(  52)				this1->set_x(( (Float)(0) ));
HXDLIN(  52)				this1->set_y(( (Float)(0) ));
            			}
HXDLIN(  52)			{
HXLINE(  52)				 ::flixel::math::FlxBasePoint this2 = Source->acceleration;
HXDLIN(  52)				this2->set_x((cosA * Acceleration));
HXDLIN(  52)				this2->set_y((sinA * Acceleration));
            			}
HXDLIN(  52)			{
HXLINE(  52)				 ::flixel::math::FlxBasePoint this3 = Source->maxVelocity;
HXDLIN(  52)				Float y = ::Math_obj::abs((sinA * MaxSpeed));
HXDLIN(  52)				this3->set_x(::Math_obj::abs((cosA * MaxSpeed)));
HXDLIN(  52)				this3->set_y(y);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,accelerateTowardsObject,(void))

void FlxVelocity_obj::moveTowardsMouse( ::flixel::FlxSprite Source,::hx::Null< Float >  __o_Speed,::hx::Null< int >  __o_MaxTime){
            		Float Speed = __o_Speed.Default(60);
            		int MaxTime = __o_MaxTime.Default(0);
            	HX_STACKFRAME(&_hx_pos_efb42de64cd9f379_67_moveTowardsMouse)
HXLINE(  68)		Float a = ::flixel::math::FlxAngle_obj::angleBetweenMouse(Source,null());
HXLINE(  70)		if ((MaxTime > 0)) {
HXLINE(  72)			Float dx = ((Source->x + Source->origin->x) - ( (Float)(::flixel::FlxG_obj::mouse->screenX) ));
HXDLIN(  72)			Float dy = ((Source->y + Source->origin->y) - ( (Float)(::flixel::FlxG_obj::mouse->screenY) ));
HXDLIN(  72)			int d = ::Std_obj::_hx_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
HXLINE(  75)			Speed = ( (Float)(::Std_obj::_hx_int((( (Float)(d) ) / (( (Float)(MaxTime) ) / ( (Float)(1000) ))))) );
            		}
HXLINE(  78)		Source->velocity->set_x((::Math_obj::cos(a) * Speed));
HXLINE(  79)		Source->velocity->set_y((::Math_obj::sin(a) * Speed));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxVelocity_obj,moveTowardsMouse,(void))

void FlxVelocity_obj::moveTowardsTouch( ::flixel::FlxSprite Source, ::flixel::input::touch::FlxTouch Touch,::hx::Null< Float >  __o_Speed,::hx::Null< int >  __o_MaxTime){
            		Float Speed = __o_Speed.Default(60);
            		int MaxTime = __o_MaxTime.Default(0);
            	HX_STACKFRAME(&_hx_pos_efb42de64cd9f379_95_moveTowardsTouch)
HXLINE(  96)		Float a = ::flixel::math::FlxAngle_obj::angleBetweenTouch(Source,Touch,null());
HXLINE(  98)		if ((MaxTime > 0)) {
HXLINE( 100)			Float dx = ((Source->x + Source->origin->x) - ( (Float)(Touch->screenX) ));
HXDLIN( 100)			Float dy = ((Source->y + Source->origin->y) - ( (Float)(Touch->screenY) ));
HXDLIN( 100)			int d = ::Std_obj::_hx_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
HXLINE( 103)			Speed = ( (Float)(::Std_obj::_hx_int((( (Float)(d) ) / (( (Float)(MaxTime) ) / ( (Float)(1000) ))))) );
            		}
HXLINE( 106)		Source->velocity->set_x((::Math_obj::cos(a) * Speed));
HXLINE( 107)		Source->velocity->set_y((::Math_obj::sin(a) * Speed));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,moveTowardsTouch,(void))

void FlxVelocity_obj::accelerateTowardsMouse( ::flixel::FlxSprite Source,Float Acceleration,Float MaxSpeed){
            	HX_STACKFRAME(&_hx_pos_efb42de64cd9f379_122_accelerateTowardsMouse)
HXLINE( 123)		Float a = ::flixel::math::FlxAngle_obj::angleBetweenMouse(Source,null());
HXLINE( 125)		{
HXLINE( 125)			Float sinA = ::Math_obj::sin(a);
HXDLIN( 125)			Float cosA = ::Math_obj::cos(a);
HXDLIN( 125)			{
HXLINE( 125)				 ::flixel::math::FlxBasePoint this1 = Source->velocity;
HXDLIN( 125)				this1->set_x(( (Float)(0) ));
HXDLIN( 125)				this1->set_y(( (Float)(0) ));
            			}
HXDLIN( 125)			{
HXLINE( 125)				 ::flixel::math::FlxBasePoint this2 = Source->acceleration;
HXDLIN( 125)				this2->set_x((cosA * Acceleration));
HXDLIN( 125)				this2->set_y((sinA * Acceleration));
            			}
HXDLIN( 125)			{
HXLINE( 125)				 ::flixel::math::FlxBasePoint this3 = Source->maxVelocity;
HXDLIN( 125)				Float y = ::Math_obj::abs((sinA * MaxSpeed));
HXDLIN( 125)				this3->set_x(::Math_obj::abs((cosA * MaxSpeed)));
HXDLIN( 125)				this3->set_y(y);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxVelocity_obj,accelerateTowardsMouse,(void))

void FlxVelocity_obj::accelerateTowardsTouch( ::flixel::FlxSprite Source, ::flixel::input::touch::FlxTouch Touch,Float Acceleration,Float MaxSpeed){
            	HX_STACKFRAME(&_hx_pos_efb42de64cd9f379_141_accelerateTowardsTouch)
HXLINE( 142)		Float a = ::flixel::math::FlxAngle_obj::angleBetweenTouch(Source,Touch,null());
HXLINE( 144)		{
HXLINE( 144)			Float sinA = ::Math_obj::sin(a);
HXDLIN( 144)			Float cosA = ::Math_obj::cos(a);
HXDLIN( 144)			{
HXLINE( 144)				 ::flixel::math::FlxBasePoint this1 = Source->velocity;
HXDLIN( 144)				this1->set_x(( (Float)(0) ));
HXDLIN( 144)				this1->set_y(( (Float)(0) ));
            			}
HXDLIN( 144)			{
HXLINE( 144)				 ::flixel::math::FlxBasePoint this2 = Source->acceleration;
HXDLIN( 144)				this2->set_x((cosA * Acceleration));
HXDLIN( 144)				this2->set_y((sinA * Acceleration));
            			}
HXDLIN( 144)			{
HXLINE( 144)				 ::flixel::math::FlxBasePoint this3 = Source->maxVelocity;
HXDLIN( 144)				Float y = ::Math_obj::abs((sinA * MaxSpeed));
HXDLIN( 144)				this3->set_x(::Math_obj::abs((cosA * MaxSpeed)));
HXDLIN( 144)				this3->set_y(y);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,accelerateTowardsTouch,(void))

void FlxVelocity_obj::moveTowardsPoint( ::flixel::FlxSprite Source, ::flixel::math::FlxBasePoint Target,::hx::Null< Float >  __o_Speed,::hx::Null< int >  __o_MaxTime){
            		Float Speed = __o_Speed.Default(60);
            		int MaxTime = __o_MaxTime.Default(0);
            	HX_STACKFRAME(&_hx_pos_efb42de64cd9f379_160_moveTowardsPoint)
HXLINE( 161)		Float a = ::flixel::math::FlxAngle_obj::angleBetweenPoint(Source,Target,null());
HXLINE( 163)		if ((MaxTime > 0)) {
HXLINE( 165)			Float dx = ((Source->x + Source->origin->x) - Target->x);
HXDLIN( 165)			Float dy = ((Source->y + Source->origin->y) - Target->y);
HXDLIN( 165)			{
HXLINE( 165)				 ::flixel::math::FlxBasePoint _this = Target;
HXDLIN( 165)				if (_this->_weak) {
HXLINE( 165)					_this->put();
            				}
            			}
HXDLIN( 165)			int d = ::Std_obj::_hx_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
HXLINE( 168)			Speed = ( (Float)(::Std_obj::_hx_int((( (Float)(d) ) / (( (Float)(MaxTime) ) / ( (Float)(1000) ))))) );
            		}
HXLINE( 171)		Source->velocity->set_x((::Math_obj::cos(a) * Speed));
HXLINE( 172)		Source->velocity->set_y((::Math_obj::sin(a) * Speed));
HXLINE( 174)		{
HXLINE( 174)			 ::flixel::math::FlxBasePoint _this1 = Target;
HXDLIN( 174)			if (_this1->_weak) {
HXLINE( 174)				_this1->put();
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,moveTowardsPoint,(void))

void FlxVelocity_obj::accelerateTowardsPoint( ::flixel::FlxSprite Source, ::flixel::math::FlxBasePoint Target,Float Acceleration,Float MaxSpeed){
            	HX_STACKFRAME(&_hx_pos_efb42de64cd9f379_188_accelerateTowardsPoint)
HXLINE( 189)		Float a = ::flixel::math::FlxAngle_obj::angleBetweenPoint(Source,Target,null());
HXLINE( 191)		{
HXLINE( 191)			Float sinA = ::Math_obj::sin(a);
HXDLIN( 191)			Float cosA = ::Math_obj::cos(a);
HXDLIN( 191)			{
HXLINE( 191)				 ::flixel::math::FlxBasePoint this1 = Source->velocity;
HXDLIN( 191)				this1->set_x(( (Float)(0) ));
HXDLIN( 191)				this1->set_y(( (Float)(0) ));
            			}
HXDLIN( 191)			{
HXLINE( 191)				 ::flixel::math::FlxBasePoint this2 = Source->acceleration;
HXDLIN( 191)				this2->set_x((cosA * Acceleration));
HXDLIN( 191)				this2->set_y((sinA * Acceleration));
            			}
HXDLIN( 191)			{
HXLINE( 191)				 ::flixel::math::FlxBasePoint this3 = Source->maxVelocity;
HXDLIN( 191)				Float y = ::Math_obj::abs((sinA * MaxSpeed));
HXDLIN( 191)				this3->set_x(::Math_obj::abs((cosA * MaxSpeed)));
HXDLIN( 191)				this3->set_y(y);
            			}
            		}
HXLINE( 193)		{
HXLINE( 193)			 ::flixel::math::FlxBasePoint _this = Target;
HXDLIN( 193)			if (_this->_weak) {
HXLINE( 193)				_this->put();
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,accelerateTowardsPoint,(void))

 ::flixel::math::FlxBasePoint FlxVelocity_obj::velocityFromAngle(Float Angle,Float Speed){
            	HX_STACKFRAME(&_hx_pos_efb42de64cd9f379_204_velocityFromAngle)
HXLINE( 205)		Float a = (Angle * (::Math_obj::PI / ( (Float)(180) )));
HXLINE( 207)		Float x = (::Math_obj::cos(a) * Speed);
HXDLIN( 207)		Float y = (::Math_obj::sin(a) * Speed);
HXDLIN( 207)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 207)		point->_inPool = false;
HXDLIN( 207)		return point;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVelocity_obj,velocityFromAngle,return )

 ::flixel::math::FlxBasePoint FlxVelocity_obj::velocityFromFacing( ::flixel::FlxSprite Parent,Float Speed){
            	HX_STACKFRAME(&_hx_pos_efb42de64cd9f379_219_velocityFromFacing)
HXDLIN( 219)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 219)		point->_inPool = false;
HXDLIN( 219)		Float degrees = ::flixel::util::_FlxDirectionFlags::FlxDirectionFlags_Impl__obj::get_degrees(Parent->facing);
HXDLIN( 219)		return ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::setPolarRadians(point,Speed,(degrees * (::Math_obj::PI / ( (Float)(180) ))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVelocity_obj,velocityFromFacing,return )

Float FlxVelocity_obj::computeVelocity(Float Velocity,Float Acceleration,Float Drag,Float Max,Float Elapsed){
            	HX_STACKFRAME(&_hx_pos_efb42de64cd9f379_233_computeVelocity)
HXLINE( 234)		if ((Acceleration != 0)) {
HXLINE( 236)			Velocity = (Velocity + (Acceleration * Elapsed));
            		}
            		else {
HXLINE( 238)			if ((Drag != 0)) {
HXLINE( 240)				Float drag = (Drag * Elapsed);
HXLINE( 241)				if (((Velocity - drag) > 0)) {
HXLINE( 243)					Velocity = (Velocity - drag);
            				}
            				else {
HXLINE( 245)					if (((Velocity + drag) < 0)) {
HXLINE( 247)						Velocity = (Velocity + drag);
            					}
            					else {
HXLINE( 251)						Velocity = ( (Float)(0) );
            					}
            				}
            			}
            		}
HXLINE( 254)		bool _hx_tmp;
HXDLIN( 254)		if ((Velocity != 0)) {
HXLINE( 254)			_hx_tmp = (Max != 0);
            		}
            		else {
HXLINE( 254)			_hx_tmp = false;
            		}
HXDLIN( 254)		if (_hx_tmp) {
HXLINE( 256)			if ((Velocity > Max)) {
HXLINE( 258)				Velocity = Max;
            			}
            			else {
HXLINE( 260)				if ((Velocity < -(Max))) {
HXLINE( 262)					Velocity = -(Max);
            				}
            			}
            		}
HXLINE( 265)		return Velocity;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxVelocity_obj,computeVelocity,return )

void FlxVelocity_obj::accelerateFromAngle( ::flixel::FlxSprite source,Float radians,Float acceleration,Float maxSpeed,::hx::Null< bool >  __o_resetVelocity){
            		bool resetVelocity = __o_resetVelocity.Default(true);
            	HX_STACKFRAME(&_hx_pos_efb42de64cd9f379_279_accelerateFromAngle)
HXLINE( 280)		Float sinA = ::Math_obj::sin(radians);
HXLINE( 281)		Float cosA = ::Math_obj::cos(radians);
HXLINE( 283)		if (resetVelocity) {
HXLINE( 284)			 ::flixel::math::FlxBasePoint this1 = source->velocity;
HXDLIN( 284)			this1->set_x(( (Float)(0) ));
HXDLIN( 284)			this1->set_y(( (Float)(0) ));
            		}
HXLINE( 286)		{
HXLINE( 286)			 ::flixel::math::FlxBasePoint this2 = source->acceleration;
HXDLIN( 286)			this2->set_x((cosA * acceleration));
HXDLIN( 286)			this2->set_y((sinA * acceleration));
            		}
HXLINE( 287)		{
HXLINE( 287)			 ::flixel::math::FlxBasePoint this3 = source->maxVelocity;
HXDLIN( 287)			Float y = ::Math_obj::abs((sinA * maxSpeed));
HXDLIN( 287)			this3->set_x(::Math_obj::abs((cosA * maxSpeed)));
HXDLIN( 287)			this3->set_y(y);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxVelocity_obj,accelerateFromAngle,(void))


FlxVelocity_obj::FlxVelocity_obj()
{
}

bool FlxVelocity_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"computeVelocity") ) { outValue = computeVelocity_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"moveTowardsMouse") ) { outValue = moveTowardsMouse_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"moveTowardsTouch") ) { outValue = moveTowardsTouch_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"moveTowardsPoint") ) { outValue = moveTowardsPoint_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"moveTowardsObject") ) { outValue = moveTowardsObject_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"velocityFromAngle") ) { outValue = velocityFromAngle_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"velocityFromFacing") ) { outValue = velocityFromFacing_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"accelerateFromAngle") ) { outValue = accelerateFromAngle_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"accelerateTowardsMouse") ) { outValue = accelerateTowardsMouse_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"accelerateTowardsTouch") ) { outValue = accelerateTowardsTouch_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"accelerateTowardsPoint") ) { outValue = accelerateTowardsPoint_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"accelerateTowardsObject") ) { outValue = accelerateTowardsObject_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxVelocity_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxVelocity_obj_sStaticStorageInfo = 0;
#endif

::hx::Class FlxVelocity_obj::__mClass;

static ::String FlxVelocity_obj_sStaticFields[] = {
	HX_("moveTowardsObject",6a,65,02,02),
	HX_("accelerateTowardsObject",1e,34,a0,7d),
	HX_("moveTowardsMouse",da,ed,3e,be),
	HX_("moveTowardsTouch",74,ef,0c,c6),
	HX_("accelerateTowardsMouse",a6,71,74,11),
	HX_("accelerateTowardsTouch",40,73,42,19),
	HX_("moveTowardsPoint",05,8c,69,78),
	HX_("accelerateTowardsPoint",d1,0f,9f,cb),
	HX_("velocityFromAngle",2c,60,df,e7),
	HX_("velocityFromFacing",a1,f0,80,7c),
	HX_("computeVelocity",b4,d4,7e,b6),
	HX_("accelerateFromAngle",6c,25,16,9e),
	::String(null())
};

void FlxVelocity_obj::__register()
{
	FlxVelocity_obj _hx_dummy;
	FlxVelocity_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.math.FlxVelocity",3b,6f,ef,61);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxVelocity_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxVelocity_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxVelocity_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxVelocity_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxVelocity_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace math
