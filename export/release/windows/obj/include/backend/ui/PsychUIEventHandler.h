// Generated by Haxe 4.3.6
#ifndef INCLUDED_backend_ui_PsychUIEventHandler
#define INCLUDED_backend_ui_PsychUIEventHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(backend,ui,PsychUIEventHandler)

namespace backend{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES PsychUIEventHandler_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PsychUIEventHandler_obj OBJ_;
		PsychUIEventHandler_obj();

	public:
		enum { _hx_ClassId = 0x7945f577 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="backend.ui.PsychUIEventHandler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"backend.ui.PsychUIEventHandler"); }

		inline static ::hx::ObjectPtr< PsychUIEventHandler_obj > __new() {
			::hx::ObjectPtr< PsychUIEventHandler_obj > __this = new PsychUIEventHandler_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PsychUIEventHandler_obj > __alloc(::hx::Ctx *_hx_ctx) {
			PsychUIEventHandler_obj *__this = (PsychUIEventHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PsychUIEventHandler_obj), false, "backend.ui.PsychUIEventHandler"));
			*(void **)__this = PsychUIEventHandler_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PsychUIEventHandler_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PsychUIEventHandler",9f,1d,bf,6f); }

		static void event(::String id, ::Dynamic sender);
		static ::Dynamic event_dyn();

};

} // end namespace backend
} // end namespace ui

#endif /* INCLUDED_backend_ui_PsychUIEventHandler */ 
