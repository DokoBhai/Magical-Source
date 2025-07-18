// Generated by Haxe 4.3.6
#ifndef INCLUDED_llua_LuaCallback
#define INCLUDED_llua_LuaCallback

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
HX_DECLARE_CLASS1(llua,LuaCallback)

namespace llua{


class HXCPP_CLASS_ATTRIBUTES LuaCallback_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LuaCallback_obj OBJ_;
		LuaCallback_obj();

	public:
		enum { _hx_ClassId = 0x7f98fc19 };

		void __construct( cpp::Reference<lua_State> lua,int ref);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="llua.LuaCallback")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"llua.LuaCallback"); }
		static ::hx::ObjectPtr< LuaCallback_obj > __new( cpp::Reference<lua_State> lua,int ref);
		static ::hx::ObjectPtr< LuaCallback_obj > __alloc(::hx::Ctx *_hx_ctx, cpp::Reference<lua_State> lua,int ref);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LuaCallback_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LuaCallback",7d,bf,41,6a); }

		 cpp::Reference<lua_State> l;
		int ref;
		void call(::cpp::VirtualArray args);
		::Dynamic call_dyn();

		void dispose();
		::Dynamic dispose_dyn();

};

} // end namespace llua

#endif /* INCLUDED_llua_LuaCallback */ 
