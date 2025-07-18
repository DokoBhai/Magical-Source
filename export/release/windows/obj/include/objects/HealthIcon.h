// Generated by Haxe 4.3.6
#ifndef INCLUDED_objects_HealthIcon
#define INCLUDED_objects_HealthIcon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,HealthIcon)

namespace objects{


class HXCPP_CLASS_ATTRIBUTES HealthIcon_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef HealthIcon_obj OBJ_;
		HealthIcon_obj();

	public:
		enum { _hx_ClassId = 0x6627ca45 };

		void __construct(::String __o__hx_char,::hx::Null< bool >  __o_isPlayer, ::Dynamic __o_allowGPU);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="objects.HealthIcon")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"objects.HealthIcon"); }
		static ::hx::ObjectPtr< HealthIcon_obj > __new(::String __o__hx_char,::hx::Null< bool >  __o_isPlayer, ::Dynamic __o_allowGPU);
		static ::hx::ObjectPtr< HealthIcon_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o__hx_char,::hx::Null< bool >  __o_isPlayer, ::Dynamic __o_allowGPU);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HealthIcon_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HealthIcon",55,be,f9,f8); }

		 ::flixel::FlxSprite sprTracker;
		bool isPlayer;
		::String _hx_char;
		void update(Float elapsed);

		::Array< Float > iconOffsets;
		void changeIcon(::String _hx_char, ::Dynamic allowGPU);
		::Dynamic changeIcon_dyn();

		bool autoAdjustOffset;
		void updateHitbox();

		::String getCharacter();
		::Dynamic getCharacter_dyn();

};

} // end namespace objects

#endif /* INCLUDED_objects_HealthIcon */ 
