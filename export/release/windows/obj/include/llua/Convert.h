// Generated by Haxe 4.3.6
#ifndef INCLUDED_llua_Convert
#define INCLUDED_llua_Convert

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(llua,Convert)

namespace llua{


class HXCPP_CLASS_ATTRIBUTES Convert_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Convert_obj OBJ_;
		Convert_obj();

	public:
		enum { _hx_ClassId = 0x70578207 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="llua.Convert")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"llua.Convert"); }

		inline static ::hx::ObjectPtr< Convert_obj > __new() {
			::hx::ObjectPtr< Convert_obj > __this = new Convert_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Convert_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Convert_obj *__this = (Convert_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Convert_obj), false, "llua.Convert"));
			*(void **)__this = Convert_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Convert_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Convert",d3,25,1b,e8); }

		static void __boot();
		static bool enableUnsupportedTraces;
		static bool allowFunctions;
		static  ::haxe::ds::StringMap functionReferences;
		static void cleanFunctionRefs();
		static ::Dynamic cleanFunctionRefs_dyn();

		static bool toLua( cpp::Reference<lua_State> l, ::Dynamic val);
		static ::Dynamic toLua_dyn();

		static int callback_handler( ::Dynamic cbf, cpp::Reference<lua_State> l);
		static ::Dynamic callback_handler_dyn();

		static void arrayToLua( cpp::Reference<lua_State> l,::cpp::VirtualArray arr);
		static ::Dynamic arrayToLua_dyn();

		static void mapToLua( cpp::Reference<lua_State> l, ::haxe::ds::StringMap res);
		static ::Dynamic mapToLua_dyn();

		static void objectToLua( cpp::Reference<lua_State> l, ::Dynamic res);
		static ::Dynamic objectToLua_dyn();

		static  ::Dynamic fromLua( cpp::Reference<lua_State> l,int v);
		static ::Dynamic fromLua_dyn();

		static  ::Dynamic toHaxeObj( cpp::Reference<lua_State> l,int i);
		static ::Dynamic toHaxeObj_dyn();

};

} // end namespace llua

#endif /* INCLUDED_llua_Convert */ 
