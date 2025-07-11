// Generated by Haxe 4.3.6
#ifndef INCLUDED_states_stages_MallEvil
#define INCLUDED_states_stages_MallEvil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_backend_BaseStage
#include <backend/BaseStage.h>
#endif
HX_DECLARE_CLASS1(backend,BaseStage)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(states,stages,MallEvil)

namespace states{
namespace stages{


class HXCPP_CLASS_ATTRIBUTES MallEvil_obj : public  ::backend::BaseStage_obj
{
	public:
		typedef  ::backend::BaseStage_obj super;
		typedef MallEvil_obj OBJ_;
		MallEvil_obj();

	public:
		enum { _hx_ClassId = 0x0b7659df };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.stages.MallEvil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.stages.MallEvil"); }
		static ::hx::ObjectPtr< MallEvil_obj > __new();
		static ::hx::ObjectPtr< MallEvil_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MallEvil_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MallEvil",a8,8f,95,81); }

		void create();

		void winterHorrorlandCutscene();
		::Dynamic winterHorrorlandCutscene_dyn();

};

} // end namespace states
} // end namespace stages

#endif /* INCLUDED_states_stages_MallEvil */ 
