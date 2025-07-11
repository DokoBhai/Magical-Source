// Generated by Haxe 4.3.6
#ifndef INCLUDED_flixel_FlxBasic
#define INCLUDED_flixel_FlxBasic

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{


class HXCPP_CLASS_ATTRIBUTES FlxBasic_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxBasic_obj OBJ_;
		FlxBasic_obj();

	public:
		enum { _hx_ClassId = 0x7ccf8994 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.FlxBasic")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.FlxBasic"); }
		static ::hx::ObjectPtr< FlxBasic_obj > __new();
		static ::hx::ObjectPtr< FlxBasic_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxBasic_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxBasic",fc,34,94,6a); }

		static void __boot();
		static int idEnumerator;
		int ID;
		bool active;
		bool visible;
		bool alive;
		bool exists;
		int flixelType;
		::Array< ::Dynamic> _cameras;
		virtual void destroy();
		::Dynamic destroy_dyn();

		virtual void kill();
		::Dynamic kill_dyn();

		virtual void revive();
		::Dynamic revive_dyn();

		virtual void update(Float elapsed);
		::Dynamic update_dyn();

		virtual void draw();
		::Dynamic draw_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		virtual bool set_visible(bool Value);
		::Dynamic set_visible_dyn();

		virtual bool set_active(bool Value);
		::Dynamic set_active_dyn();

		virtual bool set_exists(bool Value);
		::Dynamic set_exists_dyn();

		virtual bool set_alive(bool Value);
		::Dynamic set_alive_dyn();

		virtual  ::flixel::FlxCamera get_camera();
		::Dynamic get_camera_dyn();

		virtual  ::flixel::FlxCamera set_camera( ::flixel::FlxCamera Value);
		::Dynamic set_camera_dyn();

		virtual ::Array< ::Dynamic> get_cameras();
		::Dynamic get_cameras_dyn();

		virtual ::Array< ::Dynamic> set_cameras(::Array< ::Dynamic> Value);
		::Dynamic set_cameras_dyn();

};

} // end namespace flixel

#endif /* INCLUDED_flixel_FlxBasic */ 
