// Generated by Haxe 4.3.6
#ifndef INCLUDED_hxdiscord_rpc_Types
#define INCLUDED_hxdiscord_rpc_Types

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxdiscord_rpc,Types)

namespace hxdiscord_rpc{


class HXCPP_CLASS_ATTRIBUTES Types_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Types_obj OBJ_;
		Types_obj();

	public:
		enum { _hx_ClassId = 0x106a617b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxdiscord_rpc.Types")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxdiscord_rpc.Types"); }

		inline static ::hx::ObjectPtr< Types_obj > __new() {
			::hx::ObjectPtr< Types_obj > __this = new Types_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Types_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Types_obj *__this = (Types_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Types_obj), false, "hxdiscord_rpc.Types"));
			*(void **)__this = Types_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Types_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Types",59,e0,f8,ad); }

};

} // end namespace hxdiscord_rpc

#endif /* INCLUDED_hxdiscord_rpc_Types */ 
