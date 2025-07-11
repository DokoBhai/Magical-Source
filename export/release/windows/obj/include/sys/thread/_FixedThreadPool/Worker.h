// Generated by Haxe 4.3.6
#ifndef INCLUDED_sys_thread__FixedThreadPool_Worker
#define INCLUDED_sys_thread__FixedThreadPool_Worker

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sys,thread,Deque)
HX_DECLARE_CLASS3(sys,thread,_FixedThreadPool,Worker)
HX_DECLARE_CLASS3(sys,thread,_Thread,HaxeThread)

namespace sys{
namespace thread{
namespace _FixedThreadPool{


class HXCPP_CLASS_ATTRIBUTES Worker_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Worker_obj OBJ_;
		Worker_obj();

	public:
		enum { _hx_ClassId = 0x56d87870 };

		void __construct( ::sys::thread::Deque queue);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="sys.thread._FixedThreadPool.Worker")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"sys.thread._FixedThreadPool.Worker"); }
		static ::hx::ObjectPtr< Worker_obj > __new( ::sys::thread::Deque queue);
		static ::hx::ObjectPtr< Worker_obj > __alloc(::hx::Ctx *_hx_ctx, ::sys::thread::Deque queue);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Worker_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Worker",9e,a4,32,fe); }

		 ::sys::thread::_Thread::HaxeThread thread;
		 ::sys::thread::Deque queue;
		void loop();
		::Dynamic loop_dyn();

};

} // end namespace sys
} // end namespace thread
} // end namespace _FixedThreadPool

#endif /* INCLUDED_sys_thread__FixedThreadPool_Worker */ 
