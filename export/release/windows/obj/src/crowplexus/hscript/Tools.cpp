// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_crowplexus_hscript_CType
#include <crowplexus/hscript/CType.h>
#endif
#ifndef INCLUDED_crowplexus_hscript_Const
#include <crowplexus/hscript/Const.h>
#endif
#ifndef INCLUDED_crowplexus_hscript_Expr
#include <crowplexus/hscript/Expr.h>
#endif
#ifndef INCLUDED_crowplexus_hscript_ExprDef
#include <crowplexus/hscript/ExprDef.h>
#endif
#ifndef INCLUDED_crowplexus_hscript_ObjectDecl
#include <crowplexus/hscript/ObjectDecl.h>
#endif
#ifndef INCLUDED_crowplexus_hscript_SwitchCase
#include <crowplexus/hscript/SwitchCase.h>
#endif
#ifndef INCLUDED_crowplexus_hscript_Tools
#include <crowplexus/hscript/Tools.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_1b0b0a898a4e415f_29_iter,"crowplexus.hscript.Tools","iter",0x145bb050,"crowplexus.hscript.Tools.iter","crowplexus/hscript/Tools.hx",29,0x1731c34a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b0b0a898a4e415f_111_map,"crowplexus.hscript.Tools","map",0x61ae6e64,"crowplexus.hscript.Tools.map","crowplexus/hscript/Tools.hx",111,0x1731c34a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b0b0a898a4e415f_146_expr,"crowplexus.hscript.Tools","expr",0x11b9e86d,"crowplexus.hscript.Tools.expr","crowplexus/hscript/Tools.hx",146,0x1731c34a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b0b0a898a4e415f_151_mk,"crowplexus.hscript.Tools","mk",0xc14c8c96,"crowplexus.hscript.Tools.mk","crowplexus/hscript/Tools.hx",151,0x1731c34a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b0b0a898a4e415f_163_removeInnerClass,"crowplexus.hscript.Tools","removeInnerClass",0x6835335e,"crowplexus.hscript.Tools.removeInnerClass","crowplexus/hscript/Tools.hx",163,0x1731c34a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b0b0a898a4e415f_174_getClass,"crowplexus.hscript.Tools","getClass",0xc90d6efa,"crowplexus.hscript.Tools.getClass","crowplexus/hscript/Tools.hx",174,0x1731c34a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b0b0a898a4e415f_196_last,"crowplexus.hscript.Tools","last",0x1648f58e,"crowplexus.hscript.Tools.last","crowplexus/hscript/Tools.hx",196,0x1731c34a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b0b0a898a4e415f_200_isIterable,"crowplexus.hscript.Tools","isIterable",0x8fcbd5f4,"crowplexus.hscript.Tools.isIterable","crowplexus/hscript/Tools.hx",200,0x1731c34a)
HX_LOCAL_STACK_FRAME(_hx_pos_1b0b0a898a4e415f_208_argCount,"crowplexus.hscript.Tools","argCount",0x5ddce5d1,"crowplexus.hscript.Tools.argCount","crowplexus/hscript/Tools.hx",208,0x1731c34a)
namespace crowplexus{
namespace hscript{

void Tools_obj::__construct() { }

Dynamic Tools_obj::__CreateEmpty() { return new Tools_obj; }

void *Tools_obj::_hx_vtable = 0;

Dynamic Tools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Tools_obj > _hx_result = new Tools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Tools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x200f2970;
}

void Tools_obj::iter( ::crowplexus::hscript::Expr e, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_1b0b0a898a4e415f_29_iter)
HXDLIN(  29)		 ::crowplexus::hscript::ExprDef _g = e->e;
HXDLIN(  29)		switch((int)(_g->_hx_getIndex())){
            			case (int)1: {
HXLINE(  30)				 ::crowplexus::hscript::Const _g1 = _g->_hx_getObject(0).StaticCast<  ::crowplexus::hscript::Const >();
            			}
            			break;
            			case (int)2: {
HXLINE(  30)				::String _g2 = _g->_hx_getString(0);
            			}
            			break;
            			case (int)4: {
HXLINE(  31)				::String _g3 = _g->_hx_getString(0);
HXDLIN(  31)				 ::crowplexus::hscript::CType _g4 = _g->_hx_getObject(1).StaticCast<  ::crowplexus::hscript::CType >();
HXDLIN(  31)				 ::Dynamic _g5 = _g->_hx_getObject(3);
HXDLIN(  31)				{
HXLINE(  31)					 ::crowplexus::hscript::Expr e1 = _g->_hx_getObject(2).StaticCast<  ::crowplexus::hscript::Expr >();
HXLINE(  32)					if (::hx::IsNotNull( e1 )) {
HXLINE(  33)						f(e1);
            					}
            				}
            			}
            			break;
            			case (int)5: {
HXLINE(  34)				 ::crowplexus::hscript::Expr e2 = _g->_hx_getObject(0).StaticCast<  ::crowplexus::hscript::Expr >();
HXLINE(  35)				f(e2);
            			}
            			break;
            			case (int)6: {
HXLINE(  36)				::Array< ::Dynamic> el = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  37)				{
HXLINE(  37)					int _g6 = 0;
HXDLIN(  37)					while((_g6 < el->length)){
HXLINE(  37)						 ::crowplexus::hscript::Expr e3 = el->__get(_g6).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN(  37)						_g6 = (_g6 + 1);
HXLINE(  38)						f(e3);
            					}
            				}
            			}
            			break;
            			case (int)7: {
HXLINE(  39)				::String _g7 = _g->_hx_getString(1);
HXDLIN(  39)				bool _g8 = _g->_hx_getBool(2);
HXDLIN(  39)				{
HXLINE(  39)					 ::crowplexus::hscript::Expr e4 = _g->_hx_getObject(0).StaticCast<  ::crowplexus::hscript::Expr >();
HXLINE(  40)					f(e4);
            				}
            			}
            			break;
            			case (int)8: {
HXLINE(  41)				::String _g9 = _g->_hx_getString(0);
HXDLIN(  41)				{
HXLINE(  41)					 ::crowplexus::hscript::Expr e11 = _g->_hx_getObject(1).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN(  41)					 ::crowplexus::hscript::Expr e21 = _g->_hx_getObject(2).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN(  41)					{
HXLINE(  42)						f(e11);
HXLINE(  43)						f(e21);
            					}
            				}
            			}
            			break;
            			case (int)9: {
HXLINE(  44)				::String _g10 = _g->_hx_getString(0);
HXDLIN(  44)				bool _g11 = _g->_hx_getBool(1);
HXDLIN(  44)				{
HXLINE(  44)					 ::crowplexus::hscript::Expr e5 = _g->_hx_getObject(2).StaticCast<  ::crowplexus::hscript::Expr >();
HXLINE(  45)					f(e5);
            				}
            			}
            			break;
            			case (int)10: {
HXLINE(  46)				 ::crowplexus::hscript::Expr e6 = _g->_hx_getObject(0).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN(  46)				::Array< ::Dynamic> args = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  46)				{
HXLINE(  47)					f(e6);
HXLINE(  48)					{
HXLINE(  48)						int _g12 = 0;
HXDLIN(  48)						while((_g12 < args->length)){
HXLINE(  48)							 ::crowplexus::hscript::Expr a = args->__get(_g12).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN(  48)							_g12 = (_g12 + 1);
HXLINE(  49)							f(a);
            						}
            					}
            				}
            			}
            			break;
            			case (int)11: {
HXLINE(  50)				 ::crowplexus::hscript::Expr c = _g->_hx_getObject(0).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN(  50)				 ::crowplexus::hscript::Expr e12 = _g->_hx_getObject(1).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN(  50)				 ::crowplexus::hscript::Expr e22 = _g->_hx_getObject(2).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN(  50)				{
HXLINE(  51)					f(c);
HXLINE(  52)					f(e12);
HXLINE(  53)					if (::hx::IsNotNull( e22 )) {
HXLINE(  54)						f(e22);
            					}
            				}
            			}
            			break;
            			case (int)12: {
HXLINE(  55)				 ::crowplexus::hscript::Expr c1 = _g->_hx_getObject(0).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN(  55)				 ::crowplexus::hscript::Expr e7 = _g->_hx_getObject(1).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN(  55)				{
HXLINE(  56)					f(c1);
HXLINE(  57)					f(e7);
            				}
            			}
            			break;
            			case (int)13: {
HXLINE(  61)				::String _g13 = _g->_hx_getString(0);
HXDLIN(  61)				{
HXLINE(  61)					 ::crowplexus::hscript::Expr it = _g->_hx_getObject(1).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN(  61)					 ::crowplexus::hscript::Expr e8 = _g->_hx_getObject(2).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN(  61)					{
HXLINE(  62)						f(it);
HXLINE(  63)						f(e8);
            					}
            				}
            			}
            			break;
            			case (int)14: case (int)15: {
            			}
            			break;
            			case (int)16: {
HXLINE(  65)				::Array< ::Dynamic> _g14 = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  65)				::String _g15 = _g->_hx_getString(2);
HXDLIN(  65)				 ::crowplexus::hscript::CType _g16 = _g->_hx_getObject(3).StaticCast<  ::crowplexus::hscript::CType >();
HXDLIN(  65)				{
HXLINE(  65)					 ::crowplexus::hscript::Expr e9 = _g->_hx_getObject(1).StaticCast<  ::crowplexus::hscript::Expr >();
HXLINE(  66)					f(e9);
            				}
            			}
            			break;
            			case (int)17: {
HXLINE(  67)				 ::crowplexus::hscript::Expr e10 = _g->_hx_getObject(0).StaticCast<  ::crowplexus::hscript::Expr >();
HXLINE(  68)				if (::hx::IsNotNull( e10 )) {
HXLINE(  69)					f(e10);
            				}
            			}
            			break;
            			case (int)18: {
HXLINE(  70)				 ::crowplexus::hscript::Expr e13 = _g->_hx_getObject(0).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN(  70)				 ::crowplexus::hscript::Expr i = _g->_hx_getObject(1).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN(  70)				{
HXLINE(  71)					f(e13);
HXLINE(  72)					f(i);
            				}
            			}
            			break;
            			case (int)19: {
HXLINE(  73)				::Array< ::Dynamic> el1 = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  74)				{
HXLINE(  74)					int _g17 = 0;
HXDLIN(  74)					while((_g17 < el1->length)){
HXLINE(  74)						 ::crowplexus::hscript::Expr e14 = el1->__get(_g17).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN(  74)						_g17 = (_g17 + 1);
HXLINE(  75)						f(e14);
            					}
            				}
            			}
            			break;
            			case (int)20: {
HXLINE(  76)				::String _g18 = _g->_hx_getString(0);
HXDLIN(  76)				{
HXLINE(  76)					::Array< ::Dynamic> el2 = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  77)					{
HXLINE(  77)						int _g19 = 0;
HXDLIN(  77)						while((_g19 < el2->length)){
HXLINE(  77)							 ::crowplexus::hscript::Expr e15 = el2->__get(_g19).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN(  77)							_g19 = (_g19 + 1);
HXLINE(  78)							f(e15);
            						}
            					}
            				}
            			}
            			break;
            			case (int)21: {
HXLINE(  79)				 ::crowplexus::hscript::Expr e16 = _g->_hx_getObject(0).StaticCast<  ::crowplexus::hscript::Expr >();
HXLINE(  80)				f(e16);
            			}
            			break;
            			case (int)22: {
HXLINE(  81)				::String _g20 = _g->_hx_getString(1);
HXDLIN(  81)				 ::crowplexus::hscript::CType _g21 = _g->_hx_getObject(2).StaticCast<  ::crowplexus::hscript::CType >();
HXDLIN(  81)				{
HXLINE(  81)					 ::crowplexus::hscript::Expr e17 = _g->_hx_getObject(0).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN(  81)					 ::crowplexus::hscript::Expr c2 = _g->_hx_getObject(3).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN(  81)					{
HXLINE(  82)						f(e17);
HXLINE(  83)						f(c2);
            					}
            				}
            			}
            			break;
            			case (int)23: {
HXLINE(  84)				::Array< ::Dynamic> fl = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  85)				{
HXLINE(  85)					int _g22 = 0;
HXDLIN(  85)					while((_g22 < fl->length)){
HXLINE(  85)						 ::crowplexus::hscript::ObjectDecl fi = fl->__get(_g22).StaticCast<  ::crowplexus::hscript::ObjectDecl >();
HXDLIN(  85)						_g22 = (_g22 + 1);
HXLINE(  86)						f(fi->e);
            					}
            				}
            			}
            			break;
            			case (int)24: {
HXLINE(  87)				 ::crowplexus::hscript::Expr c3 = _g->_hx_getObject(0).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN(  87)				 ::crowplexus::hscript::Expr e18 = _g->_hx_getObject(1).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN(  87)				 ::crowplexus::hscript::Expr e23 = _g->_hx_getObject(2).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN(  87)				{
HXLINE(  88)					f(c3);
HXLINE(  89)					f(e18);
HXLINE(  90)					f(e23);
            				}
            			}
            			break;
            			case (int)25: {
HXLINE(  91)				 ::crowplexus::hscript::Expr e19 = _g->_hx_getObject(0).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN(  91)				::Array< ::Dynamic> cases = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  91)				 ::crowplexus::hscript::Expr def = _g->_hx_getObject(2).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN(  91)				{
HXLINE(  92)					f(e19);
HXLINE(  93)					{
HXLINE(  93)						int _g23 = 0;
HXDLIN(  93)						while((_g23 < cases->length)){
HXLINE(  93)							 ::crowplexus::hscript::SwitchCase c4 = cases->__get(_g23).StaticCast<  ::crowplexus::hscript::SwitchCase >();
HXDLIN(  93)							_g23 = (_g23 + 1);
HXLINE(  94)							{
HXLINE(  94)								int _g24 = 0;
HXDLIN(  94)								::Array< ::Dynamic> _g25 = c4->values;
HXDLIN(  94)								while((_g24 < _g25->length)){
HXLINE(  94)									 ::crowplexus::hscript::Expr v = _g25->__get(_g24).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN(  94)									_g24 = (_g24 + 1);
HXLINE(  95)									f(v);
            								}
            							}
HXLINE(  96)							f(c4->expr);
            						}
            					}
HXLINE(  98)					if (::hx::IsNotNull( def )) {
HXLINE(  99)						f(def);
            					}
            				}
            			}
            			break;
            			case (int)26: {
HXLINE(  58)				 ::crowplexus::hscript::Expr c5 = _g->_hx_getObject(0).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN(  58)				 ::crowplexus::hscript::Expr e20 = _g->_hx_getObject(1).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN(  58)				{
HXLINE(  59)					f(c5);
HXLINE(  60)					f(e20);
            				}
            			}
            			break;
            			case (int)27: {
HXLINE( 100)				::String name = _g->_hx_getString(0);
HXDLIN( 100)				::Array< ::Dynamic> args1 = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 100)				 ::crowplexus::hscript::Expr e24 = _g->_hx_getObject(2).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 100)				{
HXLINE( 101)					if (::hx::IsNotNull( args1 )) {
HXLINE( 102)						int _g26 = 0;
HXDLIN( 102)						while((_g26 < args1->length)){
HXLINE( 102)							 ::crowplexus::hscript::Expr a1 = args1->__get(_g26).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 102)							_g26 = (_g26 + 1);
HXLINE( 103)							f(a1);
            						}
            					}
HXLINE( 104)					f(e24);
            				}
            			}
            			break;
            			case (int)28: {
HXLINE( 105)				 ::crowplexus::hscript::CType _g27 = _g->_hx_getObject(1).StaticCast<  ::crowplexus::hscript::CType >();
HXDLIN( 105)				{
HXLINE( 105)					 ::crowplexus::hscript::Expr e25 = _g->_hx_getObject(0).StaticCast<  ::crowplexus::hscript::Expr >();
HXLINE( 106)					f(e25);
            				}
            			}
            			break;
            			default:{
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,iter,(void))

 ::Dynamic Tools_obj::map( ::crowplexus::hscript::Expr e, ::Dynamic f){
            	HX_GC_STACKFRAME(&_hx_pos_1b0b0a898a4e415f_111_map)
HXLINE( 112)		 ::crowplexus::hscript::ExprDef edef;
HXDLIN( 112)		 ::crowplexus::hscript::ExprDef _g = e->e;
HXDLIN( 112)		switch((int)(_g->_hx_getIndex())){
            			case (int)1: {
HXLINE( 113)				 ::crowplexus::hscript::Const _g1 = _g->_hx_getObject(0).StaticCast<  ::crowplexus::hscript::Const >();
HXLINE( 112)				edef = e->e;
            			}
            			break;
            			case (int)2: {
HXLINE( 113)				::String _g2 = _g->_hx_getString(0);
HXLINE( 112)				edef = e->e;
            			}
            			break;
            			case (int)4: {
HXLINE( 114)				::String n = _g->_hx_getString(0);
HXDLIN( 114)				 ::crowplexus::hscript::CType t = _g->_hx_getObject(1).StaticCast<  ::crowplexus::hscript::CType >();
HXDLIN( 114)				 ::crowplexus::hscript::Expr e1 = _g->_hx_getObject(2).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 114)				 ::Dynamic c = _g->_hx_getObject(3);
HXDLIN( 114)				 ::crowplexus::hscript::Expr edef1;
HXDLIN( 114)				if (::hx::IsNotNull( e1 )) {
HXLINE( 114)					edef1 = ( ( ::crowplexus::hscript::Expr)(f(e1)) );
            				}
            				else {
HXLINE( 114)					edef1 = null();
            				}
HXLINE( 112)				edef = ::crowplexus::hscript::ExprDef_obj::EVar(n,t,edef1,c);
            			}
            			break;
            			case (int)5: {
HXLINE( 115)				 ::crowplexus::hscript::Expr e2 = _g->_hx_getObject(0).StaticCast<  ::crowplexus::hscript::Expr >();
HXLINE( 112)				edef = ::crowplexus::hscript::ExprDef_obj::EParent(f(e2));
            			}
            			break;
            			case (int)6: {
HXLINE( 116)				::Array< ::Dynamic> el = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 116)				::Array< ::Dynamic> _g3 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 116)				{
HXLINE( 116)					int _g4 = 0;
HXDLIN( 116)					while((_g4 < el->length)){
HXLINE( 116)						 ::crowplexus::hscript::Expr e3 = el->__get(_g4).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 116)						_g4 = (_g4 + 1);
HXDLIN( 116)						_g3->push(f(e3));
            					}
            				}
HXLINE( 112)				edef = ::crowplexus::hscript::ExprDef_obj::EBlock(_g3);
            			}
            			break;
            			case (int)7: {
HXLINE( 117)				 ::crowplexus::hscript::Expr e4 = _g->_hx_getObject(0).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 117)				::String fi = _g->_hx_getString(1);
HXDLIN( 117)				bool s = _g->_hx_getBool(2);
HXLINE( 112)				edef = ::crowplexus::hscript::ExprDef_obj::EField(f(e4),fi,s);
            			}
            			break;
            			case (int)8: {
HXLINE( 118)				::String op = _g->_hx_getString(0);
HXDLIN( 118)				 ::crowplexus::hscript::Expr e11 = _g->_hx_getObject(1).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 118)				 ::crowplexus::hscript::Expr e21 = _g->_hx_getObject(2).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 118)				 ::crowplexus::hscript::Expr edef2 = ( ( ::crowplexus::hscript::Expr)(f(e11)) );
HXLINE( 112)				edef = ::crowplexus::hscript::ExprDef_obj::EBinop(op,edef2,f(e21));
            			}
            			break;
            			case (int)9: {
HXLINE( 119)				::String op1 = _g->_hx_getString(0);
HXDLIN( 119)				bool pre = _g->_hx_getBool(1);
HXDLIN( 119)				 ::crowplexus::hscript::Expr e5 = _g->_hx_getObject(2).StaticCast<  ::crowplexus::hscript::Expr >();
HXLINE( 112)				edef = ::crowplexus::hscript::ExprDef_obj::EUnop(op1,pre,f(e5));
            			}
            			break;
            			case (int)10: {
HXLINE( 120)				 ::crowplexus::hscript::Expr e6 = _g->_hx_getObject(0).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 120)				::Array< ::Dynamic> args = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 120)				 ::crowplexus::hscript::Expr edef3 = ( ( ::crowplexus::hscript::Expr)(f(e6)) );
HXDLIN( 120)				::Array< ::Dynamic> _g5 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 120)				{
HXLINE( 120)					int _g6 = 0;
HXDLIN( 120)					while((_g6 < args->length)){
HXLINE( 120)						 ::crowplexus::hscript::Expr a = args->__get(_g6).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 120)						_g6 = (_g6 + 1);
HXDLIN( 120)						_g5->push(f(a));
            					}
            				}
HXLINE( 112)				edef = ::crowplexus::hscript::ExprDef_obj::ECall(edef3,_g5);
            			}
            			break;
            			case (int)11: {
HXLINE( 121)				 ::crowplexus::hscript::Expr c1 = _g->_hx_getObject(0).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 121)				 ::crowplexus::hscript::Expr e12 = _g->_hx_getObject(1).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 121)				 ::crowplexus::hscript::Expr e22 = _g->_hx_getObject(2).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 121)				 ::crowplexus::hscript::Expr edef4 = ( ( ::crowplexus::hscript::Expr)(f(c1)) );
HXDLIN( 121)				 ::crowplexus::hscript::Expr edef5 = ( ( ::crowplexus::hscript::Expr)(f(e12)) );
HXDLIN( 121)				 ::crowplexus::hscript::Expr edef6;
HXDLIN( 121)				if (::hx::IsNotNull( e22 )) {
HXLINE( 121)					edef6 = ( ( ::crowplexus::hscript::Expr)(f(e22)) );
            				}
            				else {
HXLINE( 121)					edef6 = null();
            				}
HXLINE( 112)				edef = ::crowplexus::hscript::ExprDef_obj::EIf(edef4,edef5,edef6);
            			}
            			break;
            			case (int)12: {
HXLINE( 122)				 ::crowplexus::hscript::Expr c2 = _g->_hx_getObject(0).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 122)				 ::crowplexus::hscript::Expr e7 = _g->_hx_getObject(1).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 122)				 ::crowplexus::hscript::Expr edef7 = ( ( ::crowplexus::hscript::Expr)(f(c2)) );
HXLINE( 112)				edef = ::crowplexus::hscript::ExprDef_obj::EWhile(edef7,f(e7));
            			}
            			break;
            			case (int)13: {
HXLINE( 124)				::String v = _g->_hx_getString(0);
HXDLIN( 124)				 ::crowplexus::hscript::Expr it = _g->_hx_getObject(1).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 124)				 ::crowplexus::hscript::Expr e8 = _g->_hx_getObject(2).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 124)				 ::crowplexus::hscript::Expr edef8 = ( ( ::crowplexus::hscript::Expr)(f(it)) );
HXLINE( 112)				edef = ::crowplexus::hscript::ExprDef_obj::EFor(v,edef8,f(e8));
            			}
            			break;
            			case (int)14: case (int)15: {
HXLINE( 112)				edef = e->e;
            			}
            			break;
            			case (int)16: {
HXLINE( 125)				::Array< ::Dynamic> args1 = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 125)				 ::crowplexus::hscript::Expr e9 = _g->_hx_getObject(1).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 125)				::String name = _g->_hx_getString(2);
HXDLIN( 125)				 ::crowplexus::hscript::CType t1 = _g->_hx_getObject(3).StaticCast<  ::crowplexus::hscript::CType >();
HXLINE( 112)				edef = ::crowplexus::hscript::ExprDef_obj::EFunction(args1,f(e9),name,t1);
            			}
            			break;
            			case (int)17: {
HXLINE( 126)				 ::crowplexus::hscript::Expr e10 = _g->_hx_getObject(0).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 126)				 ::crowplexus::hscript::Expr edef9;
HXDLIN( 126)				if (::hx::IsNotNull( e10 )) {
HXLINE( 126)					edef9 = ( ( ::crowplexus::hscript::Expr)(f(e10)) );
            				}
            				else {
HXLINE( 126)					edef9 = null();
            				}
HXLINE( 112)				edef = ::crowplexus::hscript::ExprDef_obj::EReturn(edef9);
            			}
            			break;
            			case (int)18: {
HXLINE( 127)				 ::crowplexus::hscript::Expr e13 = _g->_hx_getObject(0).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 127)				 ::crowplexus::hscript::Expr i = _g->_hx_getObject(1).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 127)				 ::crowplexus::hscript::Expr edef10 = ( ( ::crowplexus::hscript::Expr)(f(e13)) );
HXLINE( 112)				edef = ::crowplexus::hscript::ExprDef_obj::EArray(edef10,f(i));
            			}
            			break;
            			case (int)19: {
HXLINE( 128)				::Array< ::Dynamic> el1 = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 128)				::Array< ::Dynamic> _g7 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 128)				{
HXLINE( 128)					int _g8 = 0;
HXDLIN( 128)					while((_g8 < el1->length)){
HXLINE( 128)						 ::crowplexus::hscript::Expr e14 = el1->__get(_g8).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 128)						_g8 = (_g8 + 1);
HXDLIN( 128)						_g7->push(f(e14));
            					}
            				}
HXLINE( 112)				edef = ::crowplexus::hscript::ExprDef_obj::EArrayDecl(_g7);
            			}
            			break;
            			case (int)20: {
HXLINE( 129)				::String cl = _g->_hx_getString(0);
HXDLIN( 129)				::Array< ::Dynamic> el2 = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 129)				::Array< ::Dynamic> _g9 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 129)				{
HXLINE( 129)					int _g10 = 0;
HXDLIN( 129)					while((_g10 < el2->length)){
HXLINE( 129)						 ::crowplexus::hscript::Expr e15 = el2->__get(_g10).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 129)						_g10 = (_g10 + 1);
HXDLIN( 129)						_g9->push(f(e15));
            					}
            				}
HXLINE( 112)				edef = ::crowplexus::hscript::ExprDef_obj::ENew(cl,_g9);
            			}
            			break;
            			case (int)21: {
HXLINE( 130)				 ::crowplexus::hscript::Expr e16 = _g->_hx_getObject(0).StaticCast<  ::crowplexus::hscript::Expr >();
HXLINE( 112)				edef = ::crowplexus::hscript::ExprDef_obj::EThrow(f(e16));
            			}
            			break;
            			case (int)22: {
HXLINE( 131)				 ::crowplexus::hscript::Expr e17 = _g->_hx_getObject(0).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 131)				::String v1 = _g->_hx_getString(1);
HXDLIN( 131)				 ::crowplexus::hscript::CType t2 = _g->_hx_getObject(2).StaticCast<  ::crowplexus::hscript::CType >();
HXDLIN( 131)				 ::crowplexus::hscript::Expr c3 = _g->_hx_getObject(3).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 131)				 ::crowplexus::hscript::Expr edef11 = ( ( ::crowplexus::hscript::Expr)(f(e17)) );
HXLINE( 112)				edef = ::crowplexus::hscript::ExprDef_obj::ETry(edef11,v1,t2,f(c3));
            			}
            			break;
            			case (int)23: {
HXLINE( 132)				::Array< ::Dynamic> fl = _g->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 132)				::Array< ::Dynamic> _g11 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 132)				{
HXLINE( 132)					int _g12 = 0;
HXDLIN( 132)					while((_g12 < fl->length)){
HXLINE( 132)						 ::crowplexus::hscript::ObjectDecl fi1 = fl->__get(_g12).StaticCast<  ::crowplexus::hscript::ObjectDecl >();
HXDLIN( 132)						_g12 = (_g12 + 1);
HXDLIN( 132)						::String _g13 = fi1->name;
HXDLIN( 132)						_g11->push( ::crowplexus::hscript::ObjectDecl_obj::__alloc( HX_CTX ,_g13,( ( ::crowplexus::hscript::Expr)(f(fi1->e)) )));
            					}
            				}
HXLINE( 112)				edef = ::crowplexus::hscript::ExprDef_obj::EObject(_g11);
            			}
            			break;
            			case (int)24: {
HXLINE( 133)				 ::crowplexus::hscript::Expr c4 = _g->_hx_getObject(0).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 133)				 ::crowplexus::hscript::Expr e18 = _g->_hx_getObject(1).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 133)				 ::crowplexus::hscript::Expr e23 = _g->_hx_getObject(2).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 133)				 ::crowplexus::hscript::Expr edef12 = ( ( ::crowplexus::hscript::Expr)(f(c4)) );
HXDLIN( 133)				 ::crowplexus::hscript::Expr edef13 = ( ( ::crowplexus::hscript::Expr)(f(e18)) );
HXLINE( 112)				edef = ::crowplexus::hscript::ExprDef_obj::ETernary(edef12,edef13,f(e23));
            			}
            			break;
            			case (int)25: {
HXLINE( 134)				 ::crowplexus::hscript::Expr e19 = _g->_hx_getObject(0).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 134)				::Array< ::Dynamic> cases = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 134)				 ::crowplexus::hscript::Expr def = _g->_hx_getObject(2).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 134)				 ::crowplexus::hscript::Expr edef14 = ( ( ::crowplexus::hscript::Expr)(f(e19)) );
HXDLIN( 134)				::Array< ::Dynamic> _g14 = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 135)				{
HXLINE( 135)					int _g15 = 0;
HXDLIN( 135)					while((_g15 < cases->length)){
HXLINE( 135)						 ::crowplexus::hscript::SwitchCase c5 = cases->__get(_g15).StaticCast<  ::crowplexus::hscript::SwitchCase >();
HXDLIN( 135)						_g15 = (_g15 + 1);
HXLINE( 136)						::Array< ::Dynamic> _g16 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 136)						{
HXLINE( 136)							int _g17 = 0;
HXDLIN( 136)							::Array< ::Dynamic> _g18 = c5->values;
HXDLIN( 136)							while((_g17 < _g18->length)){
HXLINE( 136)								 ::crowplexus::hscript::Expr v2 = _g18->__get(_g17).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 136)								_g17 = (_g17 + 1);
HXDLIN( 136)								_g16->push(f(v2));
            							}
            						}
HXDLIN( 136)						 ::crowplexus::hscript::Expr _g19 = ( ( ::crowplexus::hscript::Expr)(f(c5->expr)) );
HXDLIN( 136)						_g14->push( ::crowplexus::hscript::SwitchCase_obj::__alloc( HX_CTX ,_g16,_g19,( ( ::crowplexus::hscript::Expr)(f(c5->ifExpr)) )));
            					}
            				}
HXLINE( 137)				 ::crowplexus::hscript::Expr edef15;
HXDLIN( 137)				if (::hx::IsNull( def )) {
HXLINE( 137)					edef15 = null();
            				}
            				else {
HXLINE( 137)					edef15 = ( ( ::crowplexus::hscript::Expr)(f(def)) );
            				}
HXLINE( 112)				edef = ::crowplexus::hscript::ExprDef_obj::ESwitch(edef14,_g14,edef15);
            			}
            			break;
            			case (int)26: {
HXLINE( 123)				 ::crowplexus::hscript::Expr c6 = _g->_hx_getObject(0).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 123)				 ::crowplexus::hscript::Expr e20 = _g->_hx_getObject(1).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 123)				 ::crowplexus::hscript::Expr edef16 = ( ( ::crowplexus::hscript::Expr)(f(c6)) );
HXLINE( 112)				edef = ::crowplexus::hscript::ExprDef_obj::EDoWhile(edef16,f(e20));
            			}
            			break;
            			case (int)27: {
HXLINE( 138)				::String name1 = _g->_hx_getString(0);
HXDLIN( 138)				::Array< ::Dynamic> args2 = _g->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 138)				 ::crowplexus::hscript::Expr e24 = _g->_hx_getObject(2).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 138)				::Array< ::Dynamic> edef17;
HXDLIN( 138)				if (::hx::IsNull( args2 )) {
HXLINE( 138)					edef17 = null();
            				}
            				else {
HXLINE( 138)					::Array< ::Dynamic> _g20 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 138)					{
HXLINE( 138)						int _g21 = 0;
HXDLIN( 138)						while((_g21 < args2->length)){
HXLINE( 138)							 ::crowplexus::hscript::Expr a1 = args2->__get(_g21).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 138)							_g21 = (_g21 + 1);
HXDLIN( 138)							_g20->push(f(a1));
            						}
            					}
HXDLIN( 138)					edef17 = _g20;
            				}
HXLINE( 112)				edef = ::crowplexus::hscript::ExprDef_obj::EMeta(name1,edef17,f(e24));
            			}
            			break;
            			case (int)28: {
HXLINE( 139)				 ::crowplexus::hscript::Expr e25 = _g->_hx_getObject(0).StaticCast<  ::crowplexus::hscript::Expr >();
HXDLIN( 139)				 ::crowplexus::hscript::CType t3 = _g->_hx_getObject(1).StaticCast<  ::crowplexus::hscript::CType >();
HXLINE( 112)				edef = ::crowplexus::hscript::ExprDef_obj::ECheckType(f(e25),t3);
            			}
            			break;
            			default:{
HXLINE( 112)				edef = e->e;
            			}
            		}
HXLINE( 142)		return  ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("e",65,00,00,00),edef)
            			->setFixed(1,HX_("line",f4,17,b3,47),e->line)
            			->setFixed(2,HX_("pmax",34,f0,5a,4a),e->pmax)
            			->setFixed(3,HX_("pmin",22,f7,5a,4a),e->pmin)
            			->setFixed(4,HX_("origin",e6,19,01,4b),e->origin));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,map,return )

 ::crowplexus::hscript::ExprDef Tools_obj::expr( ::crowplexus::hscript::Expr e){
            	HX_STACKFRAME(&_hx_pos_1b0b0a898a4e415f_146_expr)
HXDLIN( 146)		return e->e;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,expr,return )

 ::Dynamic Tools_obj::mk( ::crowplexus::hscript::ExprDef e, ::crowplexus::hscript::Expr p){
            	HX_STACKFRAME(&_hx_pos_1b0b0a898a4e415f_151_mk)
HXDLIN( 151)		return  ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("e",65,00,00,00),e)
            			->setFixed(1,HX_("line",f4,17,b3,47),p->line)
            			->setFixed(2,HX_("pmax",34,f0,5a,4a),p->pmax)
            			->setFixed(3,HX_("pmin",22,f7,5a,4a),p->pmin)
            			->setFixed(4,HX_("origin",e6,19,01,4b),p->origin));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,mk,return )

::String Tools_obj::removeInnerClass(::String name){
            	HX_STACKFRAME(&_hx_pos_1b0b0a898a4e415f_163_removeInnerClass)
HXLINE( 164)		int ll = name.lastIndexOf(HX_(".",2e,00,00,00),null());
HXLINE( 165)		if ((name.indexOf(HX_(".",2e,00,00,00),null()) != ll)) {
HXLINE( 168)			::String _hx_tmp = (name.substr(0,name.lastIndexOf(HX_(".",2e,00,00,00),(ll - 1))) + HX_(".",2e,00,00,00));
HXDLIN( 168)			return (_hx_tmp + name.substr((ll + 1),null()));
            		}
HXLINE( 171)		return name.substr((ll + 1),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,removeInnerClass,return )

 ::Dynamic Tools_obj::getClass(::String name){
            	HX_STACKFRAME(&_hx_pos_1b0b0a898a4e415f_174_getClass)
HXLINE( 175)		 ::Dynamic c = ::Type_obj::resolveClass(name);
HXLINE( 176)		if (::hx::IsNull( c )) {
HXLINE( 178)			c = ::Type_obj::resolveEnum(name);
            		}
HXLINE( 180)		if (::hx::IsNull( c )) {
HXLINE( 185)			::String className = ::crowplexus::hscript::Tools_obj::removeInnerClass(name);
HXLINE( 186)			if ((className != name)) {
HXLINE( 187)				c = ::Type_obj::resolveClass(className);
HXLINE( 188)				if (::hx::IsNull( c )) {
HXLINE( 189)					c = ::Type_obj::resolveEnum(className);
            				}
            			}
            		}
HXLINE( 192)		return c;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,getClass,return )

::String Tools_obj::last(::Array< ::String > arr){
            	HX_STACKFRAME(&_hx_pos_1b0b0a898a4e415f_196_last)
HXDLIN( 196)		return arr->__get((arr->length - 1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,last,return )

bool Tools_obj::isIterable( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_1b0b0a898a4e415f_200_isIterable)
HXDLIN( 200)		if (::hx::IsNotNull( v )) {
HXDLIN( 200)			return ::hx::IsNotNull( v->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic) );
            		}
            		else {
HXDLIN( 200)			return false;
            		}
HXDLIN( 200)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,isIterable,return )

int Tools_obj::argCount( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_1b0b0a898a4e415f_208_argCount)
HXDLIN( 208)		return func->__ArgCount();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,argCount,return )


Tools_obj::Tools_obj()
{
}

bool Tools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"mk") ) { outValue = mk_dyn(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { outValue = map_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"iter") ) { outValue = iter_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"expr") ) { outValue = expr_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"last") ) { outValue = last_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getClass") ) { outValue = getClass_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"argCount") ) { outValue = argCount_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isIterable") ) { outValue = isIterable_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removeInnerClass") ) { outValue = removeInnerClass_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Tools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Tools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Tools_obj::__mClass;

static ::String Tools_obj_sStaticFields[] = {
	HX_("iter",18,c5,bf,45),
	HX_("map",9c,0a,53,00),
	HX_("expr",35,fd,1d,43),
	HX_("mk",5e,5f,00,00),
	HX_("removeInnerClass",26,54,c9,a7),
	HX_("getClass",c2,87,2f,a8),
	HX_("last",56,0a,ad,47),
	HX_("isIterable",bc,b0,3b,0e),
	HX_("argCount",99,fe,fe,3c),
	::String(null())
};

void Tools_obj::__register()
{
	Tools_obj _hx_dummy;
	Tools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("crowplexus.hscript.Tools",36,40,30,ae);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tools_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Tools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Tools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace crowplexus
} // end namespace hscript
