// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_addons_transition_TransitionEffect
#define INCLUDED_flixel_addons_transition_TransitionEffect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionEffect)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace transition{


class HXCPP_CLASS_ATTRIBUTES TransitionEffect_obj : public  ::flixel::group::FlxTypedSpriteGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedSpriteGroup_obj super;
		typedef TransitionEffect_obj OBJ_;
		TransitionEffect_obj();

	public:
		enum { _hx_ClassId = 0x7fcf2fe2 };

		void __construct( ::flixel::addons::transition::TransitionData data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.transition.TransitionEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.transition.TransitionEffect"); }
		static ::hx::ObjectPtr< TransitionEffect_obj > __new( ::flixel::addons::transition::TransitionData data);
		static ::hx::ObjectPtr< TransitionEffect_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TransitionEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TransitionEffect",26,16,88,bb); }

		 ::Dynamic finishCallback;
		Dynamic finishCallback_dyn() { return finishCallback;}
		bool finished;
		bool _started;
		int _endStatus;
		Float _finalDelayTime;
		 ::flixel::FlxCamera _customCamera;
		 ::flixel::addons::transition::TransitionData _data;
		virtual void destroy();

		virtual void start(int newStatus);
		::Dynamic start_dyn();

		virtual void setStatus(int newStatus);
		::Dynamic setStatus_dyn();

		void delayThenFinish();
		::Dynamic delayThenFinish_dyn();

		void onFinish( ::flixel::util::FlxTimer f);
		::Dynamic onFinish_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace transition

#endif /* INCLUDED_flixel_addons_transition_TransitionEffect */ 
