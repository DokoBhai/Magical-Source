// Generated by Haxe 4.3.6
#ifndef INCLUDED_openfl_system_System
#define INCLUDED_openfl_system_System

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_hx_system,System)

namespace openfl{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES System_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef System_obj OBJ_;
		System_obj();

	public:
		enum { _hx_ClassId = 0x00b3b4ce };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.system.System")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.system.System"); }

		inline static ::hx::ObjectPtr< System_obj > __new() {
			::hx::ObjectPtr< System_obj > __this = new System_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< System_obj > __alloc(::hx::Ctx *_hx_ctx) {
			System_obj *__this = (System_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(System_obj), false, "openfl.system.System"));
			*(void **)__this = System_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~System_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("System",0f,0b,77,27); }

		static void __boot();
		static bool useCodePage;
		static void disposeXML( ::Dynamic node);
		static ::Dynamic disposeXML_dyn();

		static void exit(int code);
		static ::Dynamic exit_dyn();

		static void gc();
		static ::Dynamic gc_dyn();

		static void pause();
		static ::Dynamic pause_dyn();

		static void resume();
		static ::Dynamic resume_dyn();

		static void setClipboard(::String string);
		static ::Dynamic setClipboard_dyn();

		static int get_totalMemory();
		static ::Dynamic get_totalMemory_dyn();

		static ::String get_vmVersion();
		static ::Dynamic get_vmVersion_dyn();

};

} // end namespace openfl
} // end namespace system

#endif /* INCLUDED_openfl_system_System */ 
