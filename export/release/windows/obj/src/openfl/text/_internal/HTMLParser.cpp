// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_StyleSheet
#include <openfl/text/StyleSheet.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text__TextFormatAlign_TextFormatAlign_Impl_
#include <openfl/text/_TextFormatAlign/TextFormatAlign_Impl_.h>
#endif
#ifndef INCLUDED_openfl_text__internal_HTMLParser
#include <openfl/text/_internal/HTMLParser.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextFormatRange
#include <openfl/text/_internal/TextFormatRange.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3bb4449bb595d1dc_48_parse,"openfl.text._internal.HTMLParser","parse",0x9be4eec4,"openfl.text._internal.HTMLParser.parse","openfl/text/_internal/HTMLParser.hx",48,0x306d2ade)
HX_LOCAL_STACK_FRAME(_hx_pos_3bb4449bb595d1dc_35_parse,"openfl.text._internal.HTMLParser","parse",0x9be4eec4,"openfl.text._internal.HTMLParser.parse","openfl/text/_internal/HTMLParser.hx",35,0x306d2ade)
HX_LOCAL_STACK_FRAME(_hx_pos_3bb4449bb595d1dc_310___getAttributeMatch,"openfl.text._internal.HTMLParser","__getAttributeMatch",0xa72995f0,"openfl.text._internal.HTMLParser.__getAttributeMatch","openfl/text/_internal/HTMLParser.hx",310,0x306d2ade)
HX_LOCAL_STACK_FRAME(_hx_pos_3bb4449bb595d1dc_15_boot,"openfl.text._internal.HTMLParser","boot",0xb97ee2c1,"openfl.text._internal.HTMLParser.boot","openfl/text/_internal/HTMLParser.hx",15,0x306d2ade)
HX_LOCAL_STACK_FRAME(_hx_pos_3bb4449bb595d1dc_17_boot,"openfl.text._internal.HTMLParser","boot",0xb97ee2c1,"openfl.text._internal.HTMLParser.boot","openfl/text/_internal/HTMLParser.hx",17,0x306d2ade)
HX_LOCAL_STACK_FRAME(_hx_pos_3bb4449bb595d1dc_18_boot,"openfl.text._internal.HTMLParser","boot",0xb97ee2c1,"openfl.text._internal.HTMLParser.boot","openfl/text/_internal/HTMLParser.hx",18,0x306d2ade)
HX_LOCAL_STACK_FRAME(_hx_pos_3bb4449bb595d1dc_19_boot,"openfl.text._internal.HTMLParser","boot",0xb97ee2c1,"openfl.text._internal.HTMLParser.boot","openfl/text/_internal/HTMLParser.hx",19,0x306d2ade)
HX_LOCAL_STACK_FRAME(_hx_pos_3bb4449bb595d1dc_20_boot,"openfl.text._internal.HTMLParser","boot",0xb97ee2c1,"openfl.text._internal.HTMLParser.boot","openfl/text/_internal/HTMLParser.hx",20,0x306d2ade)
HX_LOCAL_STACK_FRAME(_hx_pos_3bb4449bb595d1dc_21_boot,"openfl.text._internal.HTMLParser","boot",0xb97ee2c1,"openfl.text._internal.HTMLParser.boot","openfl/text/_internal/HTMLParser.hx",21,0x306d2ade)
HX_LOCAL_STACK_FRAME(_hx_pos_3bb4449bb595d1dc_22_boot,"openfl.text._internal.HTMLParser","boot",0xb97ee2c1,"openfl.text._internal.HTMLParser.boot","openfl/text/_internal/HTMLParser.hx",22,0x306d2ade)
HX_LOCAL_STACK_FRAME(_hx_pos_3bb4449bb595d1dc_23_boot,"openfl.text._internal.HTMLParser","boot",0xb97ee2c1,"openfl.text._internal.HTMLParser.boot","openfl/text/_internal/HTMLParser.hx",23,0x306d2ade)
HX_LOCAL_STACK_FRAME(_hx_pos_3bb4449bb595d1dc_24_boot,"openfl.text._internal.HTMLParser","boot",0xb97ee2c1,"openfl.text._internal.HTMLParser.boot","openfl/text/_internal/HTMLParser.hx",24,0x306d2ade)
HX_LOCAL_STACK_FRAME(_hx_pos_3bb4449bb595d1dc_25_boot,"openfl.text._internal.HTMLParser","boot",0xb97ee2c1,"openfl.text._internal.HTMLParser.boot","openfl/text/_internal/HTMLParser.hx",25,0x306d2ade)
HX_LOCAL_STACK_FRAME(_hx_pos_3bb4449bb595d1dc_26_boot,"openfl.text._internal.HTMLParser","boot",0xb97ee2c1,"openfl.text._internal.HTMLParser.boot","openfl/text/_internal/HTMLParser.hx",26,0x306d2ade)
HX_LOCAL_STACK_FRAME(_hx_pos_3bb4449bb595d1dc_27_boot,"openfl.text._internal.HTMLParser","boot",0xb97ee2c1,"openfl.text._internal.HTMLParser.boot","openfl/text/_internal/HTMLParser.hx",27,0x306d2ade)
HX_LOCAL_STACK_FRAME(_hx_pos_3bb4449bb595d1dc_28_boot,"openfl.text._internal.HTMLParser","boot",0xb97ee2c1,"openfl.text._internal.HTMLParser.boot","openfl/text/_internal/HTMLParser.hx",28,0x306d2ade)
HX_LOCAL_STACK_FRAME(_hx_pos_3bb4449bb595d1dc_29_boot,"openfl.text._internal.HTMLParser","boot",0xb97ee2c1,"openfl.text._internal.HTMLParser.boot","openfl/text/_internal/HTMLParser.hx",29,0x306d2ade)
HX_LOCAL_STACK_FRAME(_hx_pos_3bb4449bb595d1dc_30_boot,"openfl.text._internal.HTMLParser","boot",0xb97ee2c1,"openfl.text._internal.HTMLParser.boot","openfl/text/_internal/HTMLParser.hx",30,0x306d2ade)
HX_LOCAL_STACK_FRAME(_hx_pos_3bb4449bb595d1dc_31_boot,"openfl.text._internal.HTMLParser","boot",0xb97ee2c1,"openfl.text._internal.HTMLParser.boot","openfl/text/_internal/HTMLParser.hx",31,0x306d2ade)
HX_LOCAL_STACK_FRAME(_hx_pos_3bb4449bb595d1dc_32_boot,"openfl.text._internal.HTMLParser","boot",0xb97ee2c1,"openfl.text._internal.HTMLParser.boot","openfl/text/_internal/HTMLParser.hx",32,0x306d2ade)
namespace openfl{
namespace text{
namespace _internal{

void HTMLParser_obj::__construct() { }

Dynamic HTMLParser_obj::__CreateEmpty() { return new HTMLParser_obj; }

void *HTMLParser_obj::_hx_vtable = 0;

Dynamic HTMLParser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HTMLParser_obj > _hx_result = new HTMLParser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HTMLParser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x61969729;
}

 ::EReg HTMLParser_obj::_hx___regexAlign;

 ::EReg HTMLParser_obj::_hx___regexBreakTag;

 ::EReg HTMLParser_obj::_hx___regexBlockIndent;

 ::EReg HTMLParser_obj::_hx___regexClass;

 ::EReg HTMLParser_obj::_hx___regexColor;

::Array< ::Dynamic> HTMLParser_obj::_hx___regexEntities;

 ::EReg HTMLParser_obj::_hx___regexCharEntity;

 ::EReg HTMLParser_obj::_hx___regexFace;

 ::EReg HTMLParser_obj::_hx___regexHTMLTag;

 ::EReg HTMLParser_obj::_hx___regexHref;

 ::EReg HTMLParser_obj::_hx___regexIndent;

 ::EReg HTMLParser_obj::_hx___regexLeading;

 ::EReg HTMLParser_obj::_hx___regexLeftMargin;

 ::EReg HTMLParser_obj::_hx___regexRightMargin;

 ::EReg HTMLParser_obj::_hx___regexSize;

 ::EReg HTMLParser_obj::_hx___regexTabStops;

::String HTMLParser_obj::parse(::String value,bool multiline, ::openfl::text::StyleSheet styleSheet, ::openfl::text::TextFormat textFormat, ::openfl::_Vector::ObjectVector textFormatRanges){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		::String _hx_run( ::EReg ereg){
            			HX_STACKFRAME(&_hx_pos_3bb4449bb595d1dc_48_parse)
HXLINE(  49)			::String decimalStr = ereg->matched(1);
HXLINE(  50)			::String hexStr = ereg->matched(2);
HXLINE(  51)			if (::hx::IsNotNull( decimalStr )) {
HXLINE(  53)				 ::Dynamic decimal = ::Std_obj::parseInt(decimalStr);
HXLINE(  54)				if (::hx::IsNotNull( decimal )) {
HXLINE(  56)					return ::String::fromCharCode(( (int)(decimal) ));
            				}
            			}
HXLINE(  59)			if (::hx::IsNotNull( hexStr )) {
HXLINE(  61)				 ::Dynamic hex = ::Std_obj::parseInt((HX_("0",30,00,00,00) + hexStr));
HXLINE(  62)				if (::hx::IsNotNull( hex )) {
HXLINE(  64)					return ::String::fromCharCode(( (int)(hex) ));
            				}
            			}
HXLINE(  68)			return ereg->matched(0);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_3bb4449bb595d1dc_35_parse)
HXLINE(  36)		if (multiline) {
HXLINE(  38)			value = ::openfl::text::_internal::HTMLParser_obj::_hx___regexBreakTag->replace(value,HX_("\n",0a,00,00,00));
            		}
            		else {
HXLINE(  42)			value = ::openfl::text::_internal::HTMLParser_obj::_hx___regexBreakTag->replace(value,HX_("",00,00,00,00));
            		}
HXLINE(  45)		value = ::openfl::text::_internal::HTMLParser_obj::_hx___regexEntities->__get(5).StaticCast<  ::EReg >()->replace(value,HX_(" ",20,00,00,00));
HXLINE(  47)		value = ::openfl::text::_internal::HTMLParser_obj::_hx___regexCharEntity->map(value, ::Dynamic(new _hx_Closure_0()));
HXLINE(  73)		::Array< ::String > segments = value.split(HX_("<",3c,00,00,00));
HXLINE(  75)		if ((segments->length == 1)) {
HXLINE(  77)			value = ::StringTools_obj::htmlUnescape(::openfl::text::_internal::HTMLParser_obj::_hx___regexHTMLTag->replace(value,HX_("",00,00,00,00)));
HXLINE(  79)			if ((textFormatRanges->get_length() > 1)) {
HXLINE(  81)				int deleteCount = (textFormatRanges->get_length() - 1);
HXDLIN(  81)				textFormatRanges->_hx___tempIndex = 1;
HXDLIN(  81)				{
HXLINE(  81)					int _g_current = 0;
HXDLIN(  81)					::cpp::VirtualArray _g_args = ::cpp::VirtualArray_obj::__new(0);
HXDLIN(  81)					while((_g_current < _g_args->get_length())){
HXLINE(  81)						_g_current = (_g_current + 1);
HXDLIN(  81)						 ::Dynamic item = _g_args->__get((_g_current - 1));
HXDLIN(  81)						textFormatRanges->insertAt(textFormatRanges->_hx___tempIndex,( ( ::openfl::text::_internal::TextFormatRange)(item) ));
HXDLIN(  81)						textFormatRanges->_hx___tempIndex++;
            					}
            				}
HXDLIN(  81)				textFormatRanges->splice(textFormatRanges->_hx___tempIndex,deleteCount);
            			}
HXLINE(  84)			 ::openfl::text::_internal::TextFormatRange range = textFormatRanges->get(0).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXLINE(  85)			range->format = textFormat;
HXLINE(  86)			range->start = 0;
HXLINE(  87)			range->end = value.length;
HXLINE(  89)			return value;
            		}
            		else {
HXLINE(  93)			{
HXLINE(  93)				int deleteCount1 = textFormatRanges->get_length();
HXDLIN(  93)				textFormatRanges->_hx___tempIndex = 0;
HXDLIN(  93)				{
HXLINE(  93)					int _g_current1 = 0;
HXDLIN(  93)					::cpp::VirtualArray _g_args1 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN(  93)					while((_g_current1 < _g_args1->get_length())){
HXLINE(  93)						_g_current1 = (_g_current1 + 1);
HXDLIN(  93)						 ::Dynamic item1 = _g_args1->__get((_g_current1 - 1));
HXDLIN(  93)						textFormatRanges->insertAt(textFormatRanges->_hx___tempIndex,( ( ::openfl::text::_internal::TextFormatRange)(item1) ));
HXDLIN(  93)						textFormatRanges->_hx___tempIndex++;
            					}
            				}
HXDLIN(  93)				textFormatRanges->splice(textFormatRanges->_hx___tempIndex,deleteCount1);
            			}
HXLINE(  95)			value = HX_("",00,00,00,00);
HXLINE(  98)			::Array< ::Dynamic> formatStack = ::Array_obj< ::Dynamic>::__new(1)->init(0,textFormat->clone());
HXLINE(  99)			::Array< ::String > tagStack = ::Array_obj< ::String >::__new(0);
HXLINE( 100)			::String sub;
HXLINE( 101)			bool noLineBreak = false;
HXLINE( 103)			{
HXLINE( 103)				int _g = 0;
HXDLIN( 103)				while((_g < segments->length)){
HXLINE( 103)					::String segment = segments->__get(_g);
HXDLIN( 103)					_g = (_g + 1);
HXLINE( 105)					if ((segment == HX_("",00,00,00,00))) {
HXLINE( 105)						continue;
            					}
HXLINE( 107)					bool isClosingTag = (segment.substr(0,1) == HX_("/",2f,00,00,00));
HXLINE( 108)					int tagEndIndex = segment.indexOf(HX_(">",3e,00,00,00),null());
HXLINE( 109)					int start = (tagEndIndex + 1);
HXLINE( 110)					int spaceIndex = segment.indexOf(HX_(" ",20,00,00,00),null());
HXLINE( 111)					int tagName;
HXDLIN( 111)					if (isClosingTag) {
HXLINE( 111)						tagName = 1;
            					}
            					else {
HXLINE( 111)						tagName = 0;
            					}
HXDLIN( 111)					 ::Dynamic tagName1;
HXDLIN( 111)					bool tagName2;
HXDLIN( 111)					if ((spaceIndex > -1)) {
HXLINE( 111)						tagName2 = (spaceIndex < tagEndIndex);
            					}
            					else {
HXLINE( 111)						tagName2 = false;
            					}
HXDLIN( 111)					if (tagName2) {
HXLINE( 111)						tagName1 = spaceIndex;
            					}
            					else {
HXLINE( 111)						tagName1 = tagEndIndex;
            					}
HXDLIN( 111)					::String tagName3 = segment.substring(tagName,tagName1).toLowerCase();
HXLINE( 113)					 ::openfl::text::TextFormat format;
HXLINE( 115)					if (isClosingTag) {
HXLINE( 117)						bool _hx_tmp;
HXDLIN( 117)						if ((tagStack->length != 0)) {
HXLINE( 117)							_hx_tmp = (tagName3 != tagStack->__get((tagStack->length - 1)));
            						}
            						else {
HXLINE( 117)							_hx_tmp = true;
            						}
HXDLIN( 117)						if (_hx_tmp) {
HXLINE( 123)							continue;
            						}
HXLINE( 126)						tagStack->pop();
HXLINE( 127)						formatStack->pop().StaticCast<  ::openfl::text::TextFormat >();
HXLINE( 128)						format = formatStack->__get((formatStack->length - 1)).StaticCast<  ::openfl::text::TextFormat >()->clone();
HXLINE( 130)						bool _hx_tmp1;
HXDLIN( 130)						bool _hx_tmp2;
HXDLIN( 130)						if ((tagName3 != HX_("p",70,00,00,00))) {
HXLINE( 130)							_hx_tmp2 = (tagName3 == HX_("li",7d,5e,00,00));
            						}
            						else {
HXLINE( 130)							_hx_tmp2 = true;
            						}
HXDLIN( 130)						if (_hx_tmp2) {
HXLINE( 130)							_hx_tmp1 = (textFormatRanges->get_length() > 0);
            						}
            						else {
HXLINE( 130)							_hx_tmp1 = false;
            						}
HXDLIN( 130)						if (_hx_tmp1) {
HXLINE( 132)							if (multiline) {
HXLINE( 134)								value = (value + HX_("\n",0a,00,00,00));
            							}
HXLINE( 136)							noLineBreak = true;
            						}
HXLINE( 139)						if ((start < segment.length)) {
HXLINE( 141)							sub = ::StringTools_obj::htmlUnescape(segment.substr(start,null()));
HXLINE( 142)							textFormatRanges->push( ::openfl::text::_internal::TextFormatRange_obj::__alloc( HX_CTX ,format,value.length,(value.length + sub.length)));
HXLINE( 143)							value = (value + sub);
HXLINE( 144)							noLineBreak = false;
            						}
            					}
            					else {
HXLINE( 149)						format = formatStack->__get((formatStack->length - 1)).StaticCast<  ::openfl::text::TextFormat >()->clone();
HXLINE( 151)						if ((tagEndIndex > -1)) {
HXLINE( 153)							if (::hx::IsNotNull( styleSheet )) {
HXLINE( 155)								styleSheet->_hx___applyStyle(tagName3,format);
HXLINE( 157)								if (::openfl::text::_internal::HTMLParser_obj::_hx___regexClass->match(segment)) {
HXLINE( 159)									styleSheet->_hx___applyStyle((HX_(".",2e,00,00,00) + ::openfl::text::_internal::HTMLParser_obj::_hx___getAttributeMatch(::openfl::text::_internal::HTMLParser_obj::_hx___regexClass)),format);
HXLINE( 160)									styleSheet->_hx___applyStyle(((tagName3 + HX_(".",2e,00,00,00)) + ::openfl::text::_internal::HTMLParser_obj::_hx___getAttributeMatch(::openfl::text::_internal::HTMLParser_obj::_hx___regexClass)),format);
            								}
            							}
HXLINE( 164)							::String _hx_switch_0 = tagName3;
            							if (  (_hx_switch_0==HX_("a",61,00,00,00)) ){
HXLINE( 168)								if (::hx::IsNotNull( styleSheet )) {
HXLINE( 170)									styleSheet->_hx___applyStyle(HX_("a:link",33,bd,8e,75),format);
            								}
HXLINE( 173)								if (::openfl::text::_internal::HTMLParser_obj::_hx___regexHref->match(segment)) {
HXLINE( 175)									format->url = ::openfl::text::_internal::HTMLParser_obj::_hx___getAttributeMatch(::openfl::text::_internal::HTMLParser_obj::_hx___regexHref);
            								}
HXLINE( 166)								goto _hx_goto_3;
            							}
            							if (  (_hx_switch_0==HX_("b",62,00,00,00)) ){
HXLINE( 230)								format->bold = true;
HXDLIN( 230)								goto _hx_goto_3;
            							}
            							if (  (_hx_switch_0==HX_("em",68,58,00,00)) ||  (_hx_switch_0==HX_("i",69,00,00,00)) ){
HXLINE( 236)								format->italic = true;
HXDLIN( 236)								goto _hx_goto_3;
            							}
            							if (  (_hx_switch_0==HX_("font",cf,5d,c0,43)) ){
HXLINE( 203)								if (::openfl::text::_internal::HTMLParser_obj::_hx___regexFace->match(segment)) {
HXLINE( 205)									format->font = ::openfl::text::_internal::HTMLParser_obj::_hx___getAttributeMatch(::openfl::text::_internal::HTMLParser_obj::_hx___regexFace);
            								}
HXLINE( 208)								if (::openfl::text::_internal::HTMLParser_obj::_hx___regexColor->match(segment)) {
HXLINE( 210)									format->color = ::Std_obj::parseInt((HX_("0x",48,2a,00,00) + ::openfl::text::_internal::HTMLParser_obj::_hx___getAttributeMatch(::openfl::text::_internal::HTMLParser_obj::_hx___regexColor)));
            								}
HXLINE( 213)								if (::openfl::text::_internal::HTMLParser_obj::_hx___regexSize->match(segment)) {
HXLINE( 215)									::String sizeAttr = ::openfl::text::_internal::HTMLParser_obj::_hx___getAttributeMatch(::openfl::text::_internal::HTMLParser_obj::_hx___regexSize);
HXLINE( 216)									 ::Dynamic firstChar = sizeAttr.charCodeAt(0);
HXLINE( 218)									bool _hx_tmp3;
HXDLIN( 218)									if (::hx::IsNotEq( firstChar,43 )) {
HXLINE( 218)										_hx_tmp3 = ::hx::IsEq( firstChar,45 );
            									}
            									else {
HXLINE( 218)										_hx_tmp3 = true;
            									}
HXDLIN( 218)									if (_hx_tmp3) {
HXLINE( 220)										 ::openfl::text::TextFormat parentFormat;
HXDLIN( 220)										if ((formatStack->length >= 2)) {
HXLINE( 220)											parentFormat = formatStack->__get((formatStack->length - 2)).StaticCast<  ::openfl::text::TextFormat >();
            										}
            										else {
HXLINE( 220)											parentFormat = textFormat;
            										}
HXLINE( 221)										 ::Dynamic parentFormat1 = parentFormat->size;
HXDLIN( 221)										format->size = (parentFormat1 + ::Std_obj::parseInt(sizeAttr));
            									}
            									else {
HXLINE( 225)										format->size = ::Std_obj::parseInt(sizeAttr);
            									}
            								}
HXLINE( 202)								goto _hx_goto_3;
            							}
            							if (  (_hx_switch_0==HX_("li",7d,5e,00,00)) ){
HXLINE( 191)								bool _hx_tmp4;
HXDLIN( 191)								if ((textFormatRanges->get_length() > 0)) {
HXLINE( 191)									_hx_tmp4 = !(noLineBreak);
            								}
            								else {
HXLINE( 191)									_hx_tmp4 = false;
            								}
HXDLIN( 191)								if (_hx_tmp4) {
HXLINE( 193)									value = (value + HX_("\n",0a,00,00,00));
            								}
HXLINE( 195)								::String bullet = HX_W(u"\u2022 ",e61c,95c3);
HXLINE( 197)								 ::openfl::text::TextFormat bulletFormat = format->clone();
HXLINE( 198)								bulletFormat->underline = false;
HXLINE( 199)								textFormatRanges->push( ::openfl::text::_internal::TextFormatRange_obj::__alloc( HX_CTX ,bulletFormat,value.length,(value.length + bullet.length)));
HXLINE( 200)								value = (value + bullet);
HXLINE( 190)								goto _hx_goto_3;
            							}
            							if (  (_hx_switch_0==HX_("p",70,00,00,00)) ){
HXLINE( 179)								bool _hx_tmp5;
HXDLIN( 179)								if ((textFormatRanges->get_length() > 0)) {
HXLINE( 179)									_hx_tmp5 = !(noLineBreak);
            								}
            								else {
HXLINE( 179)									_hx_tmp5 = false;
            								}
HXDLIN( 179)								if (_hx_tmp5) {
HXLINE( 181)									value = (value + HX_("\n",0a,00,00,00));
            								}
HXLINE( 184)								if (::openfl::text::_internal::HTMLParser_obj::_hx___regexAlign->match(segment)) {
HXLINE( 186)									::String align = ::openfl::text::_internal::HTMLParser_obj::_hx___getAttributeMatch(::openfl::text::_internal::HTMLParser_obj::_hx___regexAlign).toLowerCase();
HXLINE( 187)									format->align = ::openfl::text::_TextFormatAlign::TextFormatAlign_Impl__obj::fromString(align);
            								}
HXLINE( 178)								goto _hx_goto_3;
            							}
            							if (  (_hx_switch_0==HX_("textformat",a4,9b,ea,ff)) ){
HXLINE( 239)								if (::openfl::text::_internal::HTMLParser_obj::_hx___regexBlockIndent->match(segment)) {
HXLINE( 241)									format->blockIndent = ::Std_obj::parseInt(::openfl::text::_internal::HTMLParser_obj::_hx___getAttributeMatch(::openfl::text::_internal::HTMLParser_obj::_hx___regexBlockIndent));
            								}
HXLINE( 244)								if (::openfl::text::_internal::HTMLParser_obj::_hx___regexIndent->match(segment)) {
HXLINE( 246)									format->indent = ::Std_obj::parseInt(::openfl::text::_internal::HTMLParser_obj::_hx___getAttributeMatch(::openfl::text::_internal::HTMLParser_obj::_hx___regexIndent));
            								}
HXLINE( 249)								if (::openfl::text::_internal::HTMLParser_obj::_hx___regexLeading->match(segment)) {
HXLINE( 251)									format->leading = ::Std_obj::parseInt(::openfl::text::_internal::HTMLParser_obj::_hx___getAttributeMatch(::openfl::text::_internal::HTMLParser_obj::_hx___regexLeading));
            								}
HXLINE( 254)								if (::openfl::text::_internal::HTMLParser_obj::_hx___regexLeftMargin->match(segment)) {
HXLINE( 256)									format->leftMargin = ::Std_obj::parseInt(::openfl::text::_internal::HTMLParser_obj::_hx___getAttributeMatch(::openfl::text::_internal::HTMLParser_obj::_hx___regexLeftMargin));
            								}
HXLINE( 259)								if (::openfl::text::_internal::HTMLParser_obj::_hx___regexRightMargin->match(segment)) {
HXLINE( 261)									format->rightMargin = ::Std_obj::parseInt(::openfl::text::_internal::HTMLParser_obj::_hx___getAttributeMatch(::openfl::text::_internal::HTMLParser_obj::_hx___regexRightMargin));
            								}
HXLINE( 264)								if (::openfl::text::_internal::HTMLParser_obj::_hx___regexTabStops->match(segment)) {
HXLINE( 266)									::Array< ::String > values = ::openfl::text::_internal::HTMLParser_obj::_hx___getAttributeMatch(::openfl::text::_internal::HTMLParser_obj::_hx___regexTabStops).split(HX_(" ",20,00,00,00));
HXLINE( 267)									::Array< ::Dynamic> tabStops = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 269)									{
HXLINE( 269)										int _g1 = 0;
HXDLIN( 269)										while((_g1 < values->length)){
HXLINE( 269)											::String stop = values->__get(_g1);
HXDLIN( 269)											_g1 = (_g1 + 1);
HXLINE( 271)											tabStops->push(::Std_obj::parseInt(stop));
            										}
            									}
HXLINE( 274)									format->tabStops = tabStops;
            								}
HXLINE( 238)								goto _hx_goto_3;
            							}
            							if (  (_hx_switch_0==HX_("u",75,00,00,00)) ){
HXLINE( 233)								format->underline = true;
HXDLIN( 233)								goto _hx_goto_3;
            							}
            							_hx_goto_3:;
HXLINE( 278)							formatStack->push(format);
HXLINE( 279)							tagStack->push(tagName3);
HXLINE( 281)							if ((start < segment.length)) {
HXLINE( 283)								sub = ::StringTools_obj::htmlUnescape(segment.substring(start,null()));
HXLINE( 284)								textFormatRanges->push( ::openfl::text::_internal::TextFormatRange_obj::__alloc( HX_CTX ,format,value.length,(value.length + sub.length)));
HXLINE( 285)								value = (value + sub);
HXLINE( 286)								noLineBreak = false;
            							}
            						}
            						else {
HXLINE( 291)							sub = ::StringTools_obj::htmlUnescape(segment);
HXLINE( 292)							textFormatRanges->push( ::openfl::text::_internal::TextFormatRange_obj::__alloc( HX_CTX ,format,value.length,(value.length + sub.length)));
HXLINE( 293)							value = (value + sub);
HXLINE( 294)							noLineBreak = false;
            						}
            					}
            				}
            			}
HXLINE( 299)			if ((textFormatRanges->get_length() == 0)) {
HXLINE( 301)				textFormatRanges->push( ::openfl::text::_internal::TextFormatRange_obj::__alloc( HX_CTX ,formatStack->__get(0).StaticCast<  ::openfl::text::TextFormat >(),0,0));
            			}
            		}
HXLINE( 305)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(HTMLParser_obj,parse,return )

::String HTMLParser_obj::_hx___getAttributeMatch( ::EReg regex){
            	HX_STACKFRAME(&_hx_pos_3bb4449bb595d1dc_310___getAttributeMatch)
HXDLIN( 310)		if (::hx::IsNotNull( regex->matched(2) )) {
HXDLIN( 310)			return regex->matched(2);
            		}
            		else {
HXDLIN( 310)			return regex->matched(3);
            		}
HXDLIN( 310)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HTMLParser_obj,_hx___getAttributeMatch,return )


HTMLParser_obj::HTMLParser_obj()
{
}

bool HTMLParser_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__regexFace") ) { outValue = ( _hx___regexFace ); return true; }
		if (HX_FIELD_EQ(inName,"__regexHref") ) { outValue = ( _hx___regexHref ); return true; }
		if (HX_FIELD_EQ(inName,"__regexSize") ) { outValue = ( _hx___regexSize ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__regexAlign") ) { outValue = ( _hx___regexAlign ); return true; }
		if (HX_FIELD_EQ(inName,"__regexClass") ) { outValue = ( _hx___regexClass ); return true; }
		if (HX_FIELD_EQ(inName,"__regexColor") ) { outValue = ( _hx___regexColor ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__regexIndent") ) { outValue = ( _hx___regexIndent ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__regexHTMLTag") ) { outValue = ( _hx___regexHTMLTag ); return true; }
		if (HX_FIELD_EQ(inName,"__regexLeading") ) { outValue = ( _hx___regexLeading ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__regexBreakTag") ) { outValue = ( _hx___regexBreakTag ); return true; }
		if (HX_FIELD_EQ(inName,"__regexEntities") ) { outValue = ( _hx___regexEntities ); return true; }
		if (HX_FIELD_EQ(inName,"__regexTabStops") ) { outValue = ( _hx___regexTabStops ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__regexCharEntity") ) { outValue = ( _hx___regexCharEntity ); return true; }
		if (HX_FIELD_EQ(inName,"__regexLeftMargin") ) { outValue = ( _hx___regexLeftMargin ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__regexBlockIndent") ) { outValue = ( _hx___regexBlockIndent ); return true; }
		if (HX_FIELD_EQ(inName,"__regexRightMargin") ) { outValue = ( _hx___regexRightMargin ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__getAttributeMatch") ) { outValue = _hx___getAttributeMatch_dyn(); return true; }
	}
	return false;
}

bool HTMLParser_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"__regexFace") ) { _hx___regexFace=ioValue.Cast<  ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexHref") ) { _hx___regexHref=ioValue.Cast<  ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexSize") ) { _hx___regexSize=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__regexAlign") ) { _hx___regexAlign=ioValue.Cast<  ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexClass") ) { _hx___regexClass=ioValue.Cast<  ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexColor") ) { _hx___regexColor=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__regexIndent") ) { _hx___regexIndent=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__regexHTMLTag") ) { _hx___regexHTMLTag=ioValue.Cast<  ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexLeading") ) { _hx___regexLeading=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__regexBreakTag") ) { _hx___regexBreakTag=ioValue.Cast<  ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexEntities") ) { _hx___regexEntities=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexTabStops") ) { _hx___regexTabStops=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__regexCharEntity") ) { _hx___regexCharEntity=ioValue.Cast<  ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexLeftMargin") ) { _hx___regexLeftMargin=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__regexBlockIndent") ) { _hx___regexBlockIndent=ioValue.Cast<  ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexRightMargin") ) { _hx___regexRightMargin=ioValue.Cast<  ::EReg >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HTMLParser_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo HTMLParser_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::EReg */ ,(void *) &HTMLParser_obj::_hx___regexAlign,HX_("__regexAlign",9e,21,d1,2d)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &HTMLParser_obj::_hx___regexBreakTag,HX_("__regexBreakTag",a2,f1,6b,e6)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &HTMLParser_obj::_hx___regexBlockIndent,HX_("__regexBlockIndent",32,61,a3,a8)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &HTMLParser_obj::_hx___regexClass,HX_("__regexClass",11,43,98,54)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &HTMLParser_obj::_hx___regexColor,HX_("__regexColor",3c,3c,9c,56)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &HTMLParser_obj::_hx___regexEntities,HX_("__regexEntities",08,59,3f,8c)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &HTMLParser_obj::_hx___regexCharEntity,HX_("__regexCharEntity",20,ed,f0,82)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &HTMLParser_obj::_hx___regexFace,HX_("__regexFace",e4,c7,66,12)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &HTMLParser_obj::_hx___regexHTMLTag,HX_("__regexHTMLTag",e8,74,f4,76)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &HTMLParser_obj::_hx___regexHref,HX_("__regexHref",32,1d,c6,13)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &HTMLParser_obj::_hx___regexIndent,HX_("__regexIndent",73,bf,84,3f)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &HTMLParser_obj::_hx___regexLeading,HX_("__regexLeading",df,25,4c,7d)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &HTMLParser_obj::_hx___regexLeftMargin,HX_("__regexLeftMargin",1c,6e,33,f3)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &HTMLParser_obj::_hx___regexRightMargin,HX_("__regexRightMargin",c3,30,d7,98)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &HTMLParser_obj::_hx___regexSize,HX_("__regexSize",08,b4,04,1b)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &HTMLParser_obj::_hx___regexTabStops,HX_("__regexTabStops",63,56,64,ec)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void HTMLParser_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexAlign,"__regexAlign");
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexBreakTag,"__regexBreakTag");
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexBlockIndent,"__regexBlockIndent");
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexClass,"__regexClass");
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexColor,"__regexColor");
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexEntities,"__regexEntities");
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexCharEntity,"__regexCharEntity");
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexFace,"__regexFace");
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexHTMLTag,"__regexHTMLTag");
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexHref,"__regexHref");
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexIndent,"__regexIndent");
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexLeading,"__regexLeading");
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexLeftMargin,"__regexLeftMargin");
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexRightMargin,"__regexRightMargin");
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexSize,"__regexSize");
	HX_MARK_MEMBER_NAME(HTMLParser_obj::_hx___regexTabStops,"__regexTabStops");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HTMLParser_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexAlign,"__regexAlign");
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexBreakTag,"__regexBreakTag");
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexBlockIndent,"__regexBlockIndent");
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexClass,"__regexClass");
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexColor,"__regexColor");
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexEntities,"__regexEntities");
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexCharEntity,"__regexCharEntity");
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexFace,"__regexFace");
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexHTMLTag,"__regexHTMLTag");
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexHref,"__regexHref");
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexIndent,"__regexIndent");
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexLeading,"__regexLeading");
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexLeftMargin,"__regexLeftMargin");
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexRightMargin,"__regexRightMargin");
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexSize,"__regexSize");
	HX_VISIT_MEMBER_NAME(HTMLParser_obj::_hx___regexTabStops,"__regexTabStops");
};

#endif

::hx::Class HTMLParser_obj::__mClass;

static ::String HTMLParser_obj_sStaticFields[] = {
	HX_("__regexAlign",9e,21,d1,2d),
	HX_("__regexBreakTag",a2,f1,6b,e6),
	HX_("__regexBlockIndent",32,61,a3,a8),
	HX_("__regexClass",11,43,98,54),
	HX_("__regexColor",3c,3c,9c,56),
	HX_("__regexEntities",08,59,3f,8c),
	HX_("__regexCharEntity",20,ed,f0,82),
	HX_("__regexFace",e4,c7,66,12),
	HX_("__regexHTMLTag",e8,74,f4,76),
	HX_("__regexHref",32,1d,c6,13),
	HX_("__regexIndent",73,bf,84,3f),
	HX_("__regexLeading",df,25,4c,7d),
	HX_("__regexLeftMargin",1c,6e,33,f3),
	HX_("__regexRightMargin",c3,30,d7,98),
	HX_("__regexSize",08,b4,04,1b),
	HX_("__regexTabStops",63,56,64,ec),
	HX_("parse",33,90,55,bd),
	HX_("__getAttributeMatch",9f,3b,2c,45),
	::String(null())
};

void HTMLParser_obj::__register()
{
	HTMLParser_obj _hx_dummy;
	HTMLParser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.text._internal.HTMLParser",3f,8c,2b,4f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HTMLParser_obj::__GetStatic;
	__mClass->mSetStaticField = &HTMLParser_obj::__SetStatic;
	__mClass->mMarkFunc = HTMLParser_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HTMLParser_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< HTMLParser_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HTMLParser_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HTMLParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HTMLParser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void HTMLParser_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3bb4449bb595d1dc_15_boot)
HXDLIN(  15)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_3bb4449bb595d1dc_17_boot)
HXDLIN(  17)		_hx___regexAlign =  ::EReg_obj::__alloc( HX_CTX ,HX_("align\\s?=\\s?(\"([^\"]+)\"|'([^']+)')",10,13,6b,f0),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_3bb4449bb595d1dc_18_boot)
HXDLIN(  18)		_hx___regexBreakTag =  ::EReg_obj::__alloc( HX_CTX ,HX_("<br\\s*/?>",47,ed,43,f6),HX_("gi",22,5a,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_3bb4449bb595d1dc_19_boot)
HXDLIN(  19)		_hx___regexBlockIndent =  ::EReg_obj::__alloc( HX_CTX ,HX_("blockindent\\s?=\\s?(\"([^\"]+)\"|'([^']+)')",c4,9b,f6,bd),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_3bb4449bb595d1dc_20_boot)
HXDLIN(  20)		_hx___regexClass =  ::EReg_obj::__alloc( HX_CTX ,HX_("class\\s?=\\s?(\"([^\"]+)\"|'([^']+)')",03,6b,9a,76),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_3bb4449bb595d1dc_21_boot)
HXDLIN(  21)		_hx___regexColor =  ::EReg_obj::__alloc( HX_CTX ,HX_("color\\s?=\\s?(\"#([^\"]+)\"|'#([^']+)')",00,b9,16,dd),HX_("i",69,00,00,00));
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		::Array< ::Dynamic> _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_3bb4449bb595d1dc_22_boot)
HXDLIN(  22)			 ::EReg _hx_tmp =  ::EReg_obj::__alloc( HX_CTX ,HX_("&quot;",2c,d9,81,8f),HX_("g",67,00,00,00));
HXDLIN(  22)			 ::EReg _hx_tmp1 =  ::EReg_obj::__alloc( HX_CTX ,HX_("&apos;",22,7f,ca,55),HX_("g",67,00,00,00));
HXDLIN(  22)			 ::EReg _hx_tmp2 =  ::EReg_obj::__alloc( HX_CTX ,HX_("&amp;",dd,d4,aa,21),HX_("g",67,00,00,00));
HXDLIN(  22)			 ::EReg _hx_tmp3 =  ::EReg_obj::__alloc( HX_CTX ,HX_("&lt;",4d,74,70,19),HX_("g",67,00,00,00));
HXDLIN(  22)			 ::EReg _hx_tmp4 =  ::EReg_obj::__alloc( HX_CTX ,HX_("&gt;",08,a9,6c,19),HX_("g",67,00,00,00));
HXDLIN(  22)			return ::Array_obj< ::Dynamic>::__new(6)->init(0,_hx_tmp)->init(1,_hx_tmp1)->init(2,_hx_tmp2)->init(3,_hx_tmp3)->init(4,_hx_tmp4)->init(5, ::EReg_obj::__alloc( HX_CTX ,HX_("&nbsp;",64,13,c2,c8),HX_("g",67,00,00,00)));
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_3bb4449bb595d1dc_22_boot)
HXDLIN(  22)		_hx___regexEntities = ( (::Array< ::Dynamic>)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_3bb4449bb595d1dc_23_boot)
HXDLIN(  23)		_hx___regexCharEntity =  ::EReg_obj::__alloc( HX_CTX ,HX_("&#(?:([0-9]+)|(x[0-9a-fA-F]+));",d8,c6,5b,5a),HX_("g",67,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_3bb4449bb595d1dc_24_boot)
HXDLIN(  24)		_hx___regexFace =  ::EReg_obj::__alloc( HX_CTX ,HX_("face\\s?=\\s?(\"([^\"]+)\"|'([^']+)')",e8,04,9c,29),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_3bb4449bb595d1dc_25_boot)
HXDLIN(  25)		_hx___regexHTMLTag =  ::EReg_obj::__alloc( HX_CTX ,HX_("<.*?>",97,b4,92,aa),HX_("g",67,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_3bb4449bb595d1dc_26_boot)
HXDLIN(  26)		_hx___regexHref =  ::EReg_obj::__alloc( HX_CTX ,HX_("href\\s?=\\s?(\"([^\"]+)\"|'([^']+)')",36,13,db,a4),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_3bb4449bb595d1dc_27_boot)
HXDLIN(  27)		_hx___regexIndent =  ::EReg_obj::__alloc( HX_CTX ,HX_(" indent\\s?=\\s?(\"([^\"]+)\"|'([^']+)')",57,ed,d3,82),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_3bb4449bb595d1dc_28_boot)
HXDLIN(  28)		_hx___regexLeading =  ::EReg_obj::__alloc( HX_CTX ,HX_("leading\\s?=\\s?(\"([^\"]+)\"|'([^']+)')",91,3e,34,39),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_3bb4449bb595d1dc_29_boot)
HXDLIN(  29)		_hx___regexLeftMargin =  ::EReg_obj::__alloc( HX_CTX ,HX_("leftmargin\\s?=\\s?(\"([^\"]+)\"|'([^']+)')",c0,1b,9a,30),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_3bb4449bb595d1dc_30_boot)
HXDLIN(  30)		_hx___regexRightMargin =  ::EReg_obj::__alloc( HX_CTX ,HX_("rightmargin\\s?=\\s?(\"([^\"]+)\"|'([^']+)')",d5,f2,36,34),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_3bb4449bb595d1dc_31_boot)
HXDLIN(  31)		_hx___regexSize =  ::EReg_obj::__alloc( HX_CTX ,HX_("size\\s?=\\s?(\"([^\"]+)\"|'([^']+)')",0c,1f,8b,76),HX_("i",69,00,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_3bb4449bb595d1dc_32_boot)
HXDLIN(  32)		_hx___regexTabStops =  ::EReg_obj::__alloc( HX_CTX ,HX_("tabstops\\s?=\\s?(\"([^\"]+)\"|'([^']+)')",87,94,2e,ca),HX_("i",69,00,00,00));
            	}
}

} // end namespace openfl
} // end namespace text
} // end namespace _internal
