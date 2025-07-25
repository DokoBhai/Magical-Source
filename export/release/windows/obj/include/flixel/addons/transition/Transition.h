// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_addons_transition_Transition
#define INCLUDED_flixel_addons_transition_Transition

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS3(flixel,addons,transition,Transition)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionEffect)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace transition{


class HXCPP_CLASS_ATTRIBUTES Transition_obj : public  ::flixel::FlxSubState_obj
{
	public:
		typedef  ::flixel::FlxSubState_obj super;
		typedef Transition_obj OBJ_;
		Transition_obj();

	public:
		enum { _hx_ClassId = 0x30aafc19 };

		void __construct( ::flixel::addons::transition::TransitionData data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.transition.Transition")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.transition.Transition"); }
		static ::hx::ObjectPtr< Transition_obj > __new( ::flixel::addons::transition::TransitionData data);
		static ::hx::ObjectPtr< Transition_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Transition_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Transition",b5,91,60,4f); }

		 ::flixel::addons::transition::TransitionEffect _effect;
		void destroy();

		void start(int newStatus);
		::Dynamic start_dyn();

		void setStatus(int newStatus);
		::Dynamic setStatus_dyn();

		 ::flixel::addons::transition::TransitionEffect createEffect( ::flixel::addons::transition::TransitionData data);
		::Dynamic createEffect_dyn();

		 ::Dynamic get_finishCallback();
		::Dynamic get_finishCallback_dyn();

		 ::Dynamic set_finishCallback( ::Dynamic callback);
		::Dynamic set_finishCallback_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace transition

#endif /* INCLUDED_flixel_addons_transition_Transition */ 
