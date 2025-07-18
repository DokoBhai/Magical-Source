// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_addons_transition_TransitionTiles
#define INCLUDED_flixel_addons_transition_TransitionTiles

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_transition_TransitionEffect
#include <flixel/addons/transition/TransitionEffect.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionEffect)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionTiles)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace transition{


class HXCPP_CLASS_ATTRIBUTES TransitionTiles_obj : public  ::flixel::addons::transition::TransitionEffect_obj
{
	public:
		typedef  ::flixel::addons::transition::TransitionEffect_obj super;
		typedef TransitionTiles_obj OBJ_;
		TransitionTiles_obj();

	public:
		enum { _hx_ClassId = 0x18b077c8 };

		void __construct( ::flixel::addons::transition::TransitionData data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.transition.TransitionTiles")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.transition.TransitionTiles"); }
		static ::hx::ObjectPtr< TransitionTiles_obj > __new( ::flixel::addons::transition::TransitionData data);
		static ::hx::ObjectPtr< TransitionTiles_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TransitionTiles_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TransitionTiles",90,8b,ec,b5); }

		 ::flixel::group::FlxTypedSpriteGroup _grpSprites;
		bool _isCenter;
		void destroy();

		void start(int NewStatus);

		void setStatus(int NewStatus);

		void update(Float elapsed);

};

} // end namespace flixel
} // end namespace addons
} // end namespace transition

#endif /* INCLUDED_flixel_addons_transition_TransitionTiles */ 
