// Generated by Haxe 4.3.6
#ifndef INCLUDED_sys_thread__FixedThreadPool_ShutdownException
#define INCLUDED_sys_thread__FixedThreadPool_ShutdownException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
HX_DECLARE_CLASS1(haxe,Exception)
HX_DECLARE_CLASS3(sys,thread,_FixedThreadPool,ShutdownException)

namespace sys{
namespace thread{
namespace _FixedThreadPool{


class HXCPP_CLASS_ATTRIBUTES ShutdownException_obj : public  ::haxe::Exception_obj
{
	public:
		typedef  ::haxe::Exception_obj super;
		typedef ShutdownException_obj OBJ_;
		ShutdownException_obj();

	public:
		enum { _hx_ClassId = 0x74de5cef };

		void __construct(::String message, ::haxe::Exception previous, ::Dynamic native);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="sys.thread._FixedThreadPool.ShutdownException")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"sys.thread._FixedThreadPool.ShutdownException"); }
		static ::hx::ObjectPtr< ShutdownException_obj > __new(::String message, ::haxe::Exception previous, ::Dynamic native);
		static ::hx::ObjectPtr< ShutdownException_obj > __alloc(::hx::Ctx *_hx_ctx,::String message, ::haxe::Exception previous, ::Dynamic native);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShutdownException_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShutdownException",b9,70,29,e2); }

};

} // end namespace sys
} // end namespace thread
} // end namespace _FixedThreadPool

#endif /* INCLUDED_sys_thread__FixedThreadPool_ShutdownException */ 
