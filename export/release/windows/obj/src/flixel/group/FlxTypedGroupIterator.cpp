// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a2c5aad29e94c731_934_new,"flixel.group.FlxTypedGroupIterator","new",0xa7153fe6,"flixel.group.FlxTypedGroupIterator.new","flixel/group/FlxGroup.hx",934,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_a2c5aad29e94c731_943_next,"flixel.group.FlxTypedGroupIterator","next",0x8b82aaad,"flixel.group.FlxTypedGroupIterator.next","flixel/group/FlxGroup.hx",943,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_a2c5aad29e94c731_947_hasNext,"flixel.group.FlxTypedGroupIterator","hasNext",0x559d4ff3,"flixel.group.FlxTypedGroupIterator.hasNext","flixel/group/FlxGroup.hx",947,0x1e89d58e)
namespace flixel{
namespace group{

void FlxTypedGroupIterator_obj::__construct(::cpp::VirtualArray groupMembers, ::Dynamic filter){
            	HX_STACKFRAME(&_hx_pos_a2c5aad29e94c731_934_new)
HXLINE( 935)		this->_groupMembers = groupMembers;
HXLINE( 936)		this->_filter = filter;
HXLINE( 937)		this->_cursor = 0;
HXLINE( 938)		this->_length = this->_groupMembers->get_length();
            	}

Dynamic FlxTypedGroupIterator_obj::__CreateEmpty() { return new FlxTypedGroupIterator_obj; }

void *FlxTypedGroupIterator_obj::_hx_vtable = 0;

Dynamic FlxTypedGroupIterator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTypedGroupIterator_obj > _hx_result = new FlxTypedGroupIterator_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxTypedGroupIterator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x60334532;
}

 ::Dynamic FlxTypedGroupIterator_obj::next(){
            	HX_STACKFRAME(&_hx_pos_a2c5aad29e94c731_943_next)
HXDLIN( 943)		if (this->hasNext()) {
HXDLIN( 943)			return this->_groupMembers->__get(this->_cursor++);
            		}
            		else {
HXDLIN( 943)			return null();
            		}
HXDLIN( 943)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroupIterator_obj,next,return )

bool FlxTypedGroupIterator_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_a2c5aad29e94c731_947_hasNext)
HXLINE( 948)		while(true){
HXLINE( 948)			bool _hx_tmp;
HXDLIN( 948)			if ((this->_cursor < this->_length)) {
HXLINE( 948)				if (::hx::IsNotNull( this->_groupMembers->__get(this->_cursor) )) {
HXLINE( 948)					if (::hx::IsNotNull( this->_filter )) {
HXLINE( 948)						_hx_tmp = !(( (bool)(this->_filter(this->_groupMembers->__get(this->_cursor))) ));
            					}
            					else {
HXLINE( 948)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 948)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 948)				_hx_tmp = false;
            			}
HXDLIN( 948)			if (!(_hx_tmp)) {
HXLINE( 948)				goto _hx_goto_2;
            			}
HXLINE( 950)			this->_cursor++;
            		}
            		_hx_goto_2:;
HXLINE( 952)		return (this->_cursor < this->_length);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroupIterator_obj,hasNext,return )


FlxTypedGroupIterator_obj::FlxTypedGroupIterator_obj()
{
}

void FlxTypedGroupIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedGroupIterator);
	HX_MARK_MEMBER_NAME(_groupMembers,"_groupMembers");
	HX_MARK_MEMBER_NAME(_filter,"_filter");
	HX_MARK_MEMBER_NAME(_cursor,"_cursor");
	HX_MARK_MEMBER_NAME(_length,"_length");
	HX_MARK_END_CLASS();
}

void FlxTypedGroupIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_groupMembers,"_groupMembers");
	HX_VISIT_MEMBER_NAME(_filter,"_filter");
	HX_VISIT_MEMBER_NAME(_cursor,"_cursor");
	HX_VISIT_MEMBER_NAME(_length,"_length");
}

::hx::Val FlxTypedGroupIterator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_filter") ) { return ::hx::Val( _filter ); }
		if (HX_FIELD_EQ(inName,"_cursor") ) { return ::hx::Val( _cursor ); }
		if (HX_FIELD_EQ(inName,"_length") ) { return ::hx::Val( _length ); }
		if (HX_FIELD_EQ(inName,"hasNext") ) { return ::hx::Val( hasNext_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_groupMembers") ) { return ::hx::Val( _groupMembers ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxTypedGroupIterator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_filter") ) { _filter=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cursor") ) { _cursor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_length") ) { _length=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_groupMembers") ) { _groupMembers=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedGroupIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_groupMembers",39,aa,f1,6f));
	outFields->push(HX_("_cursor",75,a0,5f,ad));
	outFields->push(HX_("_length",85,a6,7e,0d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTypedGroupIterator_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(FlxTypedGroupIterator_obj,_groupMembers),HX_("_groupMembers",39,aa,f1,6f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxTypedGroupIterator_obj,_filter),HX_("_filter",57,31,ac,f3)},
	{::hx::fsInt,(int)offsetof(FlxTypedGroupIterator_obj,_cursor),HX_("_cursor",75,a0,5f,ad)},
	{::hx::fsInt,(int)offsetof(FlxTypedGroupIterator_obj,_length),HX_("_length",85,a6,7e,0d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTypedGroupIterator_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTypedGroupIterator_obj_sMemberFields[] = {
	HX_("_groupMembers",39,aa,f1,6f),
	HX_("_filter",57,31,ac,f3),
	HX_("_cursor",75,a0,5f,ad),
	HX_("_length",85,a6,7e,0d),
	HX_("next",f3,84,02,49),
	HX_("hasNext",6d,a5,46,18),
	::String(null()) };

::hx::Class FlxTypedGroupIterator_obj::__mClass;

void FlxTypedGroupIterator_obj::__register()
{
	FlxTypedGroupIterator_obj _hx_dummy;
	FlxTypedGroupIterator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.group.FlxTypedGroupIterator",f4,14,fa,81);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTypedGroupIterator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTypedGroupIterator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTypedGroupIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTypedGroupIterator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace group
