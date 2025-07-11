// Generated by Haxe 4.3.6
#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flxanimate_animate_FlxKeyFrame
#include <flxanimate/animate/FlxKeyFrame.h>
#endif
#ifndef INCLUDED_flxanimate_animate_FlxLayer
#include <flxanimate/animate/FlxLayer.h>
#endif
#ifndef INCLUDED_flxanimate_animate_FlxSymbol
#include <flxanimate/animate/FlxSymbol.h>
#endif
#ifndef INCLUDED_flxanimate_animate_FlxTimeline
#include <flxanimate/animate/FlxTimeline.h>
#endif
#ifndef INCLUDED_flxanimate_data__AnimationData_Timeline_Impl_
#include <flxanimate/data/_AnimationData/Timeline_Impl_.h>
#endif
#ifndef INCLUDED_flxanimate_interfaces_IFilterable
#include <flxanimate/interfaces/IFilterable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_28c2c011c1601b38_27_new,"flxanimate.animate.FlxTimeline","new",0x05d17299,"flxanimate.animate.FlxTimeline.new","flxanimate/animate/FlxTimeline.hx",27,0xbcd00b79)
HX_LOCAL_STACK_FRAME(_hx_pos_28c2c011c1601b38_40_getListNames,"flxanimate.animate.FlxTimeline","getListNames",0x8f6eb9bb,"flxanimate.animate.FlxTimeline.getListNames","flxanimate/animate/FlxTimeline.hx",40,0xbcd00b79)
HX_LOCAL_STACK_FRAME(_hx_pos_28c2c011c1601b38_50_getList,"flxanimate.animate.FlxTimeline","getList",0xde037ecd,"flxanimate.animate.FlxTimeline.getList","flxanimate/animate/FlxTimeline.hx",50,0xbcd00b79)
HX_LOCAL_STACK_FRAME(_hx_pos_28c2c011c1601b38_60_get,"flxanimate.animate.FlxTimeline","get",0x05cc22cf,"flxanimate.animate.FlxTimeline.get","flxanimate/animate/FlxTimeline.hx",60,0xbcd00b79)
HX_LOCAL_STACK_FRAME(_hx_pos_28c2c011c1601b38_75_hide,"flxanimate.animate.FlxTimeline","hide",0x0d7e8469,"flxanimate.animate.FlxTimeline.hide","flxanimate/animate/FlxTimeline.hx",75,0xbcd00b79)
HX_LOCAL_STACK_FRAME(_hx_pos_28c2c011c1601b38_95_show,"flxanimate.animate.FlxTimeline","show",0x14c324a4,"flxanimate.animate.FlxTimeline.show","flxanimate/animate/FlxTimeline.hx",95,0xbcd00b79)
HX_LOCAL_STACK_FRAME(_hx_pos_28c2c011c1601b38_118_add,"flxanimate.animate.FlxTimeline","add",0x05c7945a,"flxanimate.animate.FlxTimeline.add","flxanimate/animate/FlxTimeline.hx",118,0xbcd00b79)
HX_LOCAL_STACK_FRAME(_hx_pos_28c2c011c1601b38_138_remove,"flxanimate.animate.FlxTimeline","remove",0x056963ab,"flxanimate.animate.FlxTimeline.remove","flxanimate/animate/FlxTimeline.hx",138,0xbcd00b79)
HX_LOCAL_STACK_FRAME(_hx_pos_28c2c011c1601b38_160_updateRender,"flxanimate.animate.FlxTimeline","updateRender",0xd83fe0e6,"flxanimate.animate.FlxTimeline.updateRender","flxanimate/animate/FlxTimeline.hx",160,0xbcd00b79)
HX_LOCAL_STACK_FRAME(_hx_pos_28c2c011c1601b38_168_get_length,"flxanimate.animate.FlxTimeline","get_length",0x8c250b96,"flxanimate.animate.FlxTimeline.get_length","flxanimate/animate/FlxTimeline.hx",168,0xbcd00b79)
HX_LOCAL_STACK_FRAME(_hx_pos_28c2c011c1601b38_171_get_totalFrames,"flxanimate.animate.FlxTimeline","get_totalFrames",0x57e1edda,"flxanimate.animate.FlxTimeline.get_totalFrames","flxanimate/animate/FlxTimeline.hx",171,0xbcd00b79)
HX_LOCAL_STACK_FRAME(_hx_pos_28c2c011c1601b38_182_destroy,"flxanimate.animate.FlxTimeline","destroy",0xe853dfb3,"flxanimate.animate.FlxTimeline.destroy","flxanimate/animate/FlxTimeline.hx",182,0xbcd00b79)
HX_LOCAL_STACK_FRAME(_hx_pos_28c2c011c1601b38_195_fromJSON,"flxanimate.animate.FlxTimeline","fromJSON",0x344a5bb9,"flxanimate.animate.FlxTimeline.fromJSON","flxanimate/animate/FlxTimeline.hx",195,0xbcd00b79)
namespace flxanimate{
namespace animate{

void FlxTimeline_obj::__construct(::Array< ::Dynamic> layers){
            	HX_STACKFRAME(&_hx_pos_28c2c011c1601b38_27_new)
HXLINE(  28)		::Array< ::Dynamic> _hx_tmp;
HXDLIN(  28)		if (::hx::IsNotNull( layers )) {
HXLINE(  28)			_hx_tmp = layers;
            		}
            		else {
HXLINE(  28)			_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXDLIN(  28)		this->_layers = _hx_tmp;
HXLINE(  29)		{
HXLINE(  29)			int _g = 0;
HXDLIN(  29)			::Array< ::Dynamic> _g1 = this->_layers;
HXDLIN(  29)			while((_g < _g1->length)){
HXLINE(  29)				 ::flxanimate::animate::FlxLayer layer = _g1->__get(_g).StaticCast<  ::flxanimate::animate::FlxLayer >();
HXDLIN(  29)				_g = (_g + 1);
HXLINE(  30)				layer->set__parent(::hx::ObjectPtr<OBJ_>(this));
            			}
            		}
            	}

Dynamic FlxTimeline_obj::__CreateEmpty() { return new FlxTimeline_obj; }

void *FlxTimeline_obj::_hx_vtable = 0;

Dynamic FlxTimeline_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTimeline_obj > _hx_result = new FlxTimeline_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxTimeline_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1c609c21;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flxanimate_animate_FlxTimeline__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flxanimate::animate::FlxTimeline_obj::destroy,
};

void *FlxTimeline_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flxanimate_animate_FlxTimeline__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

::Array< ::String > FlxTimeline_obj::getListNames(){
            	HX_STACKFRAME(&_hx_pos_28c2c011c1601b38_40_getListNames)
HXDLIN(  40)		::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN(  40)		{
HXDLIN(  40)			int _g1 = 0;
HXDLIN(  40)			::Array< ::Dynamic> _g2 = this->_layers;
HXDLIN(  40)			while((_g1 < _g2->length)){
HXDLIN(  40)				 ::flxanimate::animate::FlxLayer layer = _g2->__get(_g1).StaticCast<  ::flxanimate::animate::FlxLayer >();
HXDLIN(  40)				_g1 = (_g1 + 1);
HXDLIN(  40)				_g->push(layer->name);
            			}
            		}
HXDLIN(  40)		return _g;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimeline_obj,getListNames,return )

::Array< ::Dynamic> FlxTimeline_obj::getList(){
            	HX_STACKFRAME(&_hx_pos_28c2c011c1601b38_50_getList)
HXDLIN(  50)		return this->_layers;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimeline_obj,getList,return )

 ::flxanimate::animate::FlxLayer FlxTimeline_obj::get( ::Dynamic name){
            	HX_STACKFRAME(&_hx_pos_28c2c011c1601b38_60_get)
HXLINE(  61)		if (::Std_obj::isOfType(name,::hx::ClassOf< int >())) {
HXLINE(  61)			return this->_layers->__get(( (int)(name) )).StaticCast<  ::flxanimate::animate::FlxLayer >();
            		}
HXLINE(  63)		{
HXLINE(  63)			int _g = 0;
HXDLIN(  63)			::Array< ::Dynamic> _g1 = this->_layers;
HXDLIN(  63)			while((_g < _g1->length)){
HXLINE(  63)				 ::flxanimate::animate::FlxLayer layer = _g1->__get(_g).StaticCast<  ::flxanimate::animate::FlxLayer >();
HXDLIN(  63)				_g = (_g + 1);
HXLINE(  65)				if (::hx::IsEq( layer->name,name )) {
HXLINE(  65)					return layer;
            				}
            			}
            		}
HXLINE(  68)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTimeline_obj,get,return )

void FlxTimeline_obj::hide( ::Dynamic name){
            	HX_STACKFRAME(&_hx_pos_28c2c011c1601b38_75_hide)
HXLINE(  76)		 ::flxanimate::animate::FlxLayer layer = this->get(name);
HXLINE(  77)		::String name1;
HXDLIN(  77)		if (::Std_obj::isOfType(name,::hx::ClassOf< ::String >())) {
HXLINE(  77)			name1 = ( (::String)(name) );
            		}
            		else {
HXLINE(  77)			name1 = layer->name;
            		}
HXLINE(  78)		if (::hx::IsNull( layer )) {
HXLINE(  80)			::flixel::FlxG_obj::log->advanced(((HX_("There's no layer called \"",7d,e4,11,ee) + name1) + HX_("\"!",bf,1d,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
HXLINE(  81)			return;
            		}
HXLINE(  83)		if (!(layer->visible)) {
HXLINE(  85)			::flixel::FlxG_obj::log->advanced(((HX_("The layer called \"",dd,88,f0,6b) + name1) + HX_("\" is already hidden!",f7,89,ae,96)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
HXLINE(  86)			return;
            		}
HXLINE(  88)		layer->hide();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTimeline_obj,hide,(void))

void FlxTimeline_obj::show( ::Dynamic name){
            	HX_STACKFRAME(&_hx_pos_28c2c011c1601b38_95_show)
HXLINE(  96)		 ::flxanimate::animate::FlxLayer layer = this->get(name);
HXLINE(  98)		::String name1;
HXDLIN(  98)		if (::Std_obj::isOfType(name,::hx::ClassOf< ::String >())) {
HXLINE(  98)			name1 = ( (::String)(name) );
            		}
            		else {
HXLINE(  98)			name1 = layer->name;
            		}
HXLINE(  99)		if (::hx::IsNull( layer )) {
HXLINE( 101)			::flixel::FlxG_obj::log->advanced(((HX_("There's no layer called \"",7d,e4,11,ee) + name1) + HX_("\"!",bf,1d,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
HXLINE( 102)			return;
            		}
HXLINE( 104)		if (layer->visible) {
HXLINE( 106)			::flixel::FlxG_obj::log->advanced(((HX_("The layer called \"",dd,88,f0,6b) + name1) + HX_("\" is not hidden!",72,1a,8e,ac)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
HXLINE( 107)			return;
            		}
HXLINE( 110)		layer->show();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTimeline_obj,show,(void))

 ::flxanimate::animate::FlxLayer FlxTimeline_obj::add( ::Dynamic __o_position, ::Dynamic name){
            		 ::Dynamic position = __o_position;
            		if (::hx::IsNull(__o_position)) position = 0;
            	HX_GC_STACKFRAME(&_hx_pos_28c2c011c1601b38_118_add)
HXLINE( 119)		 ::flxanimate::animate::FlxLayer layer = null();
HXLINE( 120)		bool _hx_tmp;
HXDLIN( 120)		if (!(::Std_obj::isOfType(name,::hx::ClassOf< ::String >()))) {
HXLINE( 120)			_hx_tmp = ::hx::IsNull( name );
            		}
            		else {
HXLINE( 120)			_hx_tmp = true;
            		}
HXDLIN( 120)		if (_hx_tmp) {
HXLINE( 122)			layer =  ::flxanimate::animate::FlxLayer_obj::__alloc( HX_CTX ,( (::String)(name) ),null());
            		}
            		else {
HXLINE( 126)			layer = ( ( ::flxanimate::animate::FlxLayer)(name) );
            		}
HXLINE( 129)		layer->set__parent(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 130)		this->_layers->insert(( (int)(position) ),layer);
HXLINE( 131)		return layer;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTimeline_obj,add,return )

 ::flxanimate::animate::FlxLayer FlxTimeline_obj::remove( ::Dynamic name){
            	HX_STACKFRAME(&_hx_pos_28c2c011c1601b38_138_remove)
HXLINE( 139)		 ::flxanimate::animate::FlxLayer layer = null();
HXLINE( 140)		bool _hx_tmp;
HXDLIN( 140)		if (!(::Std_obj::isOfType(name,::hx::ClassOf< ::String >()))) {
HXLINE( 140)			_hx_tmp = ::hx::IsNull( name );
            		}
            		else {
HXLINE( 140)			_hx_tmp = true;
            		}
HXDLIN( 140)		if (_hx_tmp) {
HXLINE( 142)			layer = this->get(name);
            		}
            		else {
HXLINE( 144)			if ((this->_layers->indexOf(name,null()) != -1)) {
HXLINE( 146)				layer = ( ( ::flxanimate::animate::FlxLayer)(name) );
            			}
            		}
HXLINE( 148)		if (::hx::IsNull( layer )) {
HXLINE( 150)			::flixel::FlxG_obj::log->advanced(((HX_("There's no layer called \"",7d,e4,11,ee) + name) + HX_("\"!",bf,1d,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
HXLINE( 151)			return null();
            		}
HXLINE( 153)		layer->set__parent(null());
HXLINE( 154)		this->_layers->remove(layer);
HXLINE( 155)		return layer;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTimeline_obj,remove,return )

void FlxTimeline_obj::updateRender(Float elapsed,int curFrame, ::haxe::ds::StringMap dictionary, ::Dynamic __o_swfRender){
            		 ::Dynamic swfRender = __o_swfRender;
            		if (::hx::IsNull(__o_swfRender)) swfRender = false;
            	HX_STACKFRAME(&_hx_pos_28c2c011c1601b38_160_updateRender)
HXDLIN( 160)		int _g = 0;
HXDLIN( 160)		::Array< ::Dynamic> _g1 = this->_layers;
HXDLIN( 160)		while((_g < _g1->length)){
HXDLIN( 160)			 ::flxanimate::animate::FlxLayer layer = _g1->__get(_g).StaticCast<  ::flxanimate::animate::FlxLayer >();
HXDLIN( 160)			_g = (_g + 1);
HXLINE( 162)			layer->updateRender(elapsed,curFrame,dictionary,swfRender);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTimeline_obj,updateRender,(void))

int FlxTimeline_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_28c2c011c1601b38_168_get_length)
HXDLIN( 168)		return this->_layers->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimeline_obj,get_length,return )

int FlxTimeline_obj::get_totalFrames(){
            	HX_STACKFRAME(&_hx_pos_28c2c011c1601b38_171_get_totalFrames)
HXLINE( 172)		int _length = 0;
HXLINE( 173)		{
HXLINE( 173)			int _g = 0;
HXDLIN( 173)			::Array< ::Dynamic> _g1 = this->_layers;
HXDLIN( 173)			while((_g < _g1->length)){
HXLINE( 173)				 ::flxanimate::animate::FlxLayer layer = _g1->__get(_g).StaticCast<  ::flxanimate::animate::FlxLayer >();
HXDLIN( 173)				_g = (_g + 1);
HXLINE( 175)				int length = layer->get_length();
HXLINE( 176)				if ((_length < length)) {
HXLINE( 177)					_length = length;
            				}
            			}
            		}
HXLINE( 179)		return _length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimeline_obj,get_totalFrames,return )

void FlxTimeline_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_28c2c011c1601b38_182_destroy)
HXLINE( 183)		{
HXLINE( 183)			int _g = 0;
HXDLIN( 183)			::Array< ::Dynamic> _g1 = this->_layers;
HXDLIN( 183)			while((_g < _g1->length)){
HXLINE( 183)				 ::flxanimate::animate::FlxLayer layer = _g1->__get(_g).StaticCast<  ::flxanimate::animate::FlxLayer >();
HXDLIN( 183)				_g = (_g + 1);
HXLINE( 185)				layer->destroy();
            			}
            		}
HXLINE( 187)		this->_layers = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimeline_obj,destroy,(void))

 ::flxanimate::animate::FlxTimeline FlxTimeline_obj::fromJSON( ::Dynamic timeline){
            	HX_GC_STACKFRAME(&_hx_pos_28c2c011c1601b38_195_fromJSON)
HXLINE( 196)		bool _hx_tmp;
HXDLIN( 196)		if (::hx::IsNotNull( timeline )) {
HXLINE( 196)			_hx_tmp = ::hx::IsNull( ::flxanimate::data::_AnimationData::Timeline_Impl__obj::get_L(timeline) );
            		}
            		else {
HXLINE( 196)			_hx_tmp = true;
            		}
HXDLIN( 196)		if (_hx_tmp) {
HXLINE( 196)			return null();
            		}
HXLINE( 197)		::Array< ::Dynamic> layers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 198)		{
HXLINE( 198)			int _g = 0;
HXDLIN( 198)			::Array< ::Dynamic> _g1 = ::flxanimate::data::_AnimationData::Timeline_Impl__obj::get_L(timeline);
HXDLIN( 198)			while((_g < _g1->length)){
HXLINE( 198)				 ::Dynamic layer = _g1->__get(_g);
HXDLIN( 198)				_g = (_g + 1);
HXLINE( 200)				layers->push(::flxanimate::animate::FlxLayer_obj::fromJSON(layer));
            			}
            		}
HXLINE( 203)		return  ::flxanimate::animate::FlxTimeline_obj::__alloc( HX_CTX ,layers);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTimeline_obj,fromJSON,return )


::hx::ObjectPtr< FlxTimeline_obj > FlxTimeline_obj::__new(::Array< ::Dynamic> layers) {
	::hx::ObjectPtr< FlxTimeline_obj > __this = new FlxTimeline_obj();
	__this->__construct(layers);
	return __this;
}

::hx::ObjectPtr< FlxTimeline_obj > FlxTimeline_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> layers) {
	FlxTimeline_obj *__this = (FlxTimeline_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTimeline_obj), true, "flxanimate.animate.FlxTimeline"));
	*(void **)__this = FlxTimeline_obj::_hx_vtable;
	__this->__construct(layers);
	return __this;
}

FlxTimeline_obj::FlxTimeline_obj()
{
}

void FlxTimeline_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTimeline);
	HX_MARK_MEMBER_NAME(_parent,"_parent");
	HX_MARK_MEMBER_NAME(_layers,"_layers");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(totalFrames,"totalFrames");
	HX_MARK_END_CLASS();
}

void FlxTimeline_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_parent,"_parent");
	HX_VISIT_MEMBER_NAME(_layers,"_layers");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(totalFrames,"totalFrames");
}

::hx::Val FlxTimeline_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"hide") ) { return ::hx::Val( hide_dyn() ); }
		if (HX_FIELD_EQ(inName,"show") ) { return ::hx::Val( show_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_length() : length ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { return ::hx::Val( _parent ); }
		if (HX_FIELD_EQ(inName,"_layers") ) { return ::hx::Val( _layers ); }
		if (HX_FIELD_EQ(inName,"getList") ) { return ::hx::Val( getList_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalFrames") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_totalFrames() : totalFrames ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getListNames") ) { return ::hx::Val( getListNames_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateRender") ) { return ::hx::Val( updateRender_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_totalFrames") ) { return ::hx::Val( get_totalFrames_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxTimeline_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromJSON") ) { outValue = fromJSON_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxTimeline_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { _parent=inValue.Cast<  ::flxanimate::animate::FlxSymbol >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layers") ) { _layers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalFrames") ) { totalFrames=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTimeline_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_parent",c9,16,f5,5b));
	outFields->push(HX_("_layers",21,27,28,c7));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("totalFrames",8a,a2,bb,72));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTimeline_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flxanimate::animate::FlxSymbol */ ,(int)offsetof(FlxTimeline_obj,_parent),HX_("_parent",c9,16,f5,5b)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxTimeline_obj,_layers),HX_("_layers",21,27,28,c7)},
	{::hx::fsInt,(int)offsetof(FlxTimeline_obj,length),HX_("length",e6,94,07,9f)},
	{::hx::fsInt,(int)offsetof(FlxTimeline_obj,totalFrames),HX_("totalFrames",8a,a2,bb,72)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTimeline_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTimeline_obj_sMemberFields[] = {
	HX_("_parent",c9,16,f5,5b),
	HX_("_layers",21,27,28,c7),
	HX_("length",e6,94,07,9f),
	HX_("totalFrames",8a,a2,bb,72),
	HX_("getListNames",14,eb,1b,bc),
	HX_("getList",14,cc,35,1a),
	HX_("get",96,80,4e,00),
	HX_("hide",c2,34,0e,45),
	HX_("show",fd,d4,52,4c),
	HX_("add",21,f2,49,00),
	HX_("remove",44,9c,88,04),
	HX_("updateRender",3f,12,ed,04),
	HX_("get_length",af,04,8f,8f),
	HX_("get_totalFrames",21,5a,9d,33),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

::hx::Class FlxTimeline_obj::__mClass;

static ::String FlxTimeline_obj_sStaticFields[] = {
	HX_("fromJSON",92,ac,1b,a4),
	::String(null())
};

void FlxTimeline_obj::__register()
{
	FlxTimeline_obj _hx_dummy;
	FlxTimeline_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flxanimate.animate.FlxTimeline",27,32,74,9f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTimeline_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxTimeline_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTimeline_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTimeline_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTimeline_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTimeline_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flxanimate
} // end namespace animate
