// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_system_CFFI
#include <lime/system/CFFI.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a915f6dcce8b5bed_26___init__,"::lime::_hx_system::CFFI_obj","__init__",0xd08dc78c,"::lime::_hx_system::CFFI_obj.__init__","lime/system/CFFI.hx",26,0x441ad672)
HX_LOCAL_STACK_FRAME(_hx_pos_9b11a74d7222574a_52_load,"lime.system.CFFI","load",0x60b2e828,"lime.system.CFFI.load","lime/system/CFFI.hx",52,0x441ad672)
HX_LOCAL_STACK_FRAME(_hx_pos_9b11a74d7222574a_66_load,"lime.system.CFFI","load",0x60b2e828,"lime.system.CFFI.load","lime/system/CFFI.hx",66,0x441ad672)
HX_LOCAL_STACK_FRAME(_hx_pos_9b11a74d7222574a_208___findHaxelib,"lime.system.CFFI","__findHaxelib",0xf1a39a44,"lime.system.CFFI.__findHaxelib","lime/system/CFFI.hx",208,0x441ad672)
HX_LOCAL_STACK_FRAME(_hx_pos_9b11a74d7222574a_246___loaderTrace,"lime.system.CFFI","__loaderTrace",0x9278b410,"lime.system.CFFI.__loaderTrace","lime/system/CFFI.hx",246,0x441ad672)
HX_LOCAL_STACK_FRAME(_hx_pos_9b11a74d7222574a_322___sysName,"lime.system.CFFI","__sysName",0x178f5196,"lime.system.CFFI.__sysName","lime/system/CFFI.hx",322,0x441ad672)
HX_LOCAL_STACK_FRAME(_hx_pos_9b11a74d7222574a_336___tryLoad,"lime.system.CFFI","__tryLoad",0xe7c4e49f,"lime.system.CFFI.__tryLoad","lime/system/CFFI.hx",336,0x441ad672)
HX_LOCAL_STACK_FRAME(_hx_pos_9b11a74d7222574a_16_boot,"lime.system.CFFI","boot",0x5a16d234,"lime.system.CFFI.boot","lime/system/CFFI.hx",16,0x441ad672)
namespace lime{
namespace _hx_system{

void CFFI_obj::__construct() { }

Dynamic CFFI_obj::__CreateEmpty() { return new CFFI_obj; }

void *CFFI_obj::_hx_vtable = 0;

Dynamic CFFI_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CFFI_obj > _hx_result = new CFFI_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CFFI_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x277adf4e;
}

void CFFI_obj::__init__(){
            	HX_STACKFRAME(&_hx_pos_a915f6dcce8b5bed_26___init__)
HXLINE(  28)		::lime::_hx_system::CFFI_obj::available = true;
HXLINE(  29)		::lime::_hx_system::CFFI_obj::enabled = true;
            	}


 ::haxe::ds::StringMap CFFI_obj::_hx___moduleNames;

bool CFFI_obj::available;

bool CFFI_obj::enabled;

 ::Dynamic CFFI_obj::load(::String library,::String method,::hx::Null< int >  __o_args,::hx::Null< bool >  __o_lazy){
            		int args = __o_args.Default(0);
            		bool lazy = __o_lazy.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_9b11a74d7222574a_52_load)
HXLINE(  64)		if (!(::lime::_hx_system::CFFI_obj::enabled)) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			 ::Dynamic _hx_run(::cpp::VirtualArray _hx___){
            				HX_STACKFRAME(&_hx_pos_9b11a74d7222574a_66_load)
HXLINE(  66)				return  ::Dynamic(::hx::Anon_obj::Create(0));
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE(  66)			return ::Reflect_obj::makeVarArgs( ::Dynamic(new _hx_Closure_0()));
            		}
HXLINE(  69)		 ::Dynamic result = null();
HXLINE(  73)		if (::hx::IsNull( ::lime::_hx_system::CFFI_obj::_hx___moduleNames )) {
HXLINE(  73)			::lime::_hx_system::CFFI_obj::_hx___moduleNames =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  75)		if (lazy) {
HXLINE(  77)			::lime::_hx_system::CFFI_obj::_hx___moduleNames->set(library,library);
HXLINE(  79)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  86)				result = ::cpp::Lib_obj::loadLazy(library,method,args);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE(  89)					{
HXLINE(  89)						null();
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            		else {
HXLINE(  97)			if (::lime::_hx_system::CFFI_obj::_hx___moduleNames->exists(library)) {
HXLINE( 100)				return ::cpp::Lib_obj::load(::lime::_hx_system::CFFI_obj::_hx___moduleNames->get_string(library),method,args);
            			}
HXLINE( 137)			::lime::_hx_system::CFFI_obj::_hx___moduleNames->set(library,library);
HXLINE( 139)			::String programPath = HX_(".",2e,00,00,00);
HXLINE( 141)			programPath = ::haxe::io::Path_obj::directory(::Sys_obj::programPath());
HXLINE( 144)			result = ::lime::_hx_system::CFFI_obj::_hx___tryLoad(((programPath + HX_("/",2f,00,00,00)) + library),library,method,args);
HXLINE( 146)			if (::hx::IsNull( result )) {
HXLINE( 148)				result = ::lime::_hx_system::CFFI_obj::_hx___tryLoad(((programPath + HX_("\\",5c,00,00,00)) + library),library,method,args);
            			}
HXLINE( 151)			if (::hx::IsNull( result )) {
HXLINE( 153)				result = ::lime::_hx_system::CFFI_obj::_hx___tryLoad(library,library,method,args);
            			}
HXLINE( 156)			if (::hx::IsNull( result )) {
HXLINE( 158)				::String haxelib = ::lime::_hx_system::CFFI_obj::_hx___findHaxelib(HX_("lime",15,17,b3,47));
HXLINE( 160)				if ((haxelib != HX_("",00,00,00,00))) {
HXLINE( 162)					result = ::lime::_hx_system::CFFI_obj::_hx___tryLoad(((((haxelib + HX_("/ndll/",aa,6c,45,63)) + ::lime::_hx_system::CFFI_obj::_hx___sysName()) + HX_("/",2f,00,00,00)) + library),library,method,args);
HXLINE( 164)					if (::hx::IsNull( result )) {
HXLINE( 166)						result = ::lime::_hx_system::CFFI_obj::_hx___tryLoad(((((haxelib + HX_("/ndll/",aa,6c,45,63)) + ::lime::_hx_system::CFFI_obj::_hx___sysName()) + HX_("64/",31,27,29,00)) + library),library,method,args);
            					}
            				}
            			}
HXLINE( 171)			::lime::_hx_system::CFFI_obj::_hx___loaderTrace((HX_("Result : ",e9,19,2c,14) + ::Std_obj::string(result)));
            		}
HXLINE( 188)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CFFI_obj,load,return )

::String CFFI_obj::_hx___findHaxelib(::String library){
            	HX_GC_STACKFRAME(&_hx_pos_9b11a74d7222574a_208___findHaxelib)
HXLINE( 210)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 212)			 ::sys::io::Process proc =  ::sys::io::Process_obj::__alloc( HX_CTX ,HX_("haxelib",df,b6,80,08),::Array_obj< ::String >::__new(2)->init(0,HX_("path",a5,e5,51,4a))->init(1,library),null());
HXLINE( 214)			if (::hx::IsNotNull( proc )) {
HXLINE( 216)				 ::haxe::io::Input stream = proc->_hx_stdout;
HXLINE( 218)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 220)					while(true){
HXLINE( 222)						::String s = stream->readLine();
HXLINE( 224)						if ((s.substr(0,1) != HX_("-",2d,00,00,00))) {
HXLINE( 226)							stream->close();
HXLINE( 227)							proc->close();
HXLINE( 228)							::lime::_hx_system::CFFI_obj::_hx___loaderTrace((HX_("Found haxelib ",1f,a6,4d,c9) + s));
HXLINE( 229)							return s;
            						}
            					}
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 233)						{
HXLINE( 233)							null();
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
HXLINE( 235)				stream->close();
HXLINE( 236)				proc->close();
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g1 = _hx_e;
HXLINE( 239)				{
HXLINE( 239)					null();
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 242)		return HX_("",00,00,00,00);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CFFI_obj,_hx___findHaxelib,return )

void CFFI_obj::_hx___loaderTrace(::String message){
            	HX_STACKFRAME(&_hx_pos_9b11a74d7222574a_246___loaderTrace)
HXLINE( 252)		bool debug = ::hx::IsNotNull( ::Sys_obj::getEnv(HX_("OPENFL_LOAD_DEBUG",a9,1b,ff,9b)) );
HXLINE( 255)		if (debug) {
HXLINE( 257)			::Sys_obj::println(message);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CFFI_obj,_hx___loaderTrace,(void))

::String CFFI_obj::_hx___sysName(){
            	HX_STACKFRAME(&_hx_pos_9b11a74d7222574a_322___sysName)
HXLINE( 325)		 ::Dynamic sys_string = ::cpp::Lib_obj::load(HX_("std",a3,a8,57,00),HX_("sys_string",03,f9,de,46),0);
HXLINE( 326)		return ( (::String)(sys_string()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CFFI_obj,_hx___sysName,return )

 ::Dynamic CFFI_obj::_hx___tryLoad(::String name,::String library,::String func,int args){
            	HX_STACKFRAME(&_hx_pos_9b11a74d7222574a_336___tryLoad)
HXLINE( 338)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 341)			 ::Dynamic result = ::cpp::Lib_obj::load(name,func,args);
HXLINE( 354)			if (::hx::IsNotNull( result )) {
HXLINE( 356)				::lime::_hx_system::CFFI_obj::_hx___loaderTrace((HX_("Got result ",af,e9,02,45) + name));
HXLINE( 357)				::lime::_hx_system::CFFI_obj::_hx___moduleNames->set(library,name);
HXLINE( 358)				return result;
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 361)				{
HXLINE( 361)					null();
            				}
HXLINE( 363)				::lime::_hx_system::CFFI_obj::_hx___loaderTrace((HX_("Failed to load : ",1e,ca,38,9b) + name));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 367)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CFFI_obj,_hx___tryLoad,return )


CFFI_obj::CFFI_obj()
{
}

bool CFFI_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { outValue = ( enabled ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"available") ) { outValue = ( available ); return true; }
		if (HX_FIELD_EQ(inName,"__sysName") ) { outValue = _hx___sysName_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__tryLoad") ) { outValue = _hx___tryLoad_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__moduleNames") ) { outValue = ( _hx___moduleNames ); return true; }
		if (HX_FIELD_EQ(inName,"__findHaxelib") ) { outValue = _hx___findHaxelib_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__loaderTrace") ) { outValue = _hx___loaderTrace_dyn(); return true; }
	}
	return false;
}

bool CFFI_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=ioValue.Cast< bool >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"available") ) { available=ioValue.Cast< bool >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__moduleNames") ) { _hx___moduleNames=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CFFI_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CFFI_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &CFFI_obj::_hx___moduleNames,HX_("__moduleNames",5c,9c,9c,28)},
	{::hx::fsBool,(void *) &CFFI_obj::available,HX_("available",c9,59,83,77)},
	{::hx::fsBool,(void *) &CFFI_obj::enabled,HX_("enabled",81,04,31,7e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void CFFI_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CFFI_obj::_hx___moduleNames,"__moduleNames");
	HX_MARK_MEMBER_NAME(CFFI_obj::available,"available");
	HX_MARK_MEMBER_NAME(CFFI_obj::enabled,"enabled");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CFFI_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CFFI_obj::_hx___moduleNames,"__moduleNames");
	HX_VISIT_MEMBER_NAME(CFFI_obj::available,"available");
	HX_VISIT_MEMBER_NAME(CFFI_obj::enabled,"enabled");
};

#endif

::hx::Class CFFI_obj::__mClass;

static ::String CFFI_obj_sStaticFields[] = {
	HX_("__moduleNames",5c,9c,9c,28),
	HX_("available",c9,59,83,77),
	HX_("enabled",81,04,31,7e),
	HX_("load",26,9a,b7,47),
	HX_("__findHaxelib",86,b8,e3,50),
	HX_("__loaderTrace",52,d2,b8,f1),
	HX_("__sysName",d8,a6,8e,fb),
	HX_("__tryLoad",e1,39,c4,cb),
	::String(null())
};

void CFFI_obj::__register()
{
	CFFI_obj _hx_dummy;
	CFFI_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.system.CFFI",ac,d1,df,76);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CFFI_obj::__GetStatic;
	__mClass->mSetStaticField = &CFFI_obj::__SetStatic;
	__mClass->mMarkFunc = CFFI_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CFFI_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CFFI_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CFFI_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CFFI_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CFFI_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CFFI_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9b11a74d7222574a_16_boot)
HXDLIN(  16)		_hx___moduleNames = null();
            	}
}

} // end namespace lime
} // end namespace system
