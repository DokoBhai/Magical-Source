// Generated by Haxe 4.3.6
#ifndef INCLUDED_backend_Language
#define INCLUDED_backend_Language

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
HX_DECLARE_CLASS1(backend,Language)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace backend{


class HXCPP_CLASS_ATTRIBUTES Language_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Language_obj OBJ_;
		Language_obj();

	public:
		enum { _hx_ClassId = 0x7feff96c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="backend.Language")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"backend.Language"); }

		inline static ::hx::ObjectPtr< Language_obj > __new() {
			::hx::ObjectPtr< Language_obj > __this = new Language_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Language_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Language_obj *__this = (Language_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Language_obj), false, "backend.Language"));
			*(void **)__this = Language_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Language_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Language",78,3c,c3,53); }

		static void __boot();
		static ::String defaultLangName;
		static  ::haxe::ds::StringMap phrases;
		static void reloadPhrases();
		static ::Dynamic reloadPhrases_dyn();

		static ::String getPhrase(::String key,::String defaultPhrase,::cpp::VirtualArray values);
		static ::Dynamic getPhrase_dyn();

		static ::String getFileTranslation(::String key);
		static ::Dynamic getFileTranslation_dyn();

		static ::String formatKey(::String key);
		static ::Dynamic formatKey_dyn();

		static void addLuaCallbacks( cpp::Reference<lua_State> lua);
		static ::Dynamic addLuaCallbacks_dyn();

};

} // end namespace backend

#endif /* INCLUDED_backend_Language */ 
