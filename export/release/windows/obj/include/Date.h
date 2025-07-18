// Generated by Haxe 4.3.6
#ifndef INCLUDED_Date
#define INCLUDED_Date

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_c0151d669b9b886e_26_new)
HX_DECLARE_CLASS0(Date)



class HXCPP_CLASS_ATTRIBUTES Date_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Date_obj OBJ_;
		Date_obj();

	public:
		enum { _hx_ClassId = 0x018f7872 };

		void __construct(int year,int month,int day,int hour,int min,int sec);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Date")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"Date"); }

		inline static ::hx::ObjectPtr< Date_obj > __new(int year,int month,int day,int hour,int min,int sec) {
			::hx::ObjectPtr< Date_obj > __this = new Date_obj();
			__this->__construct(year,month,day,hour,min,sec);
			return __this;
		}

		inline static ::hx::ObjectPtr< Date_obj > __alloc(::hx::Ctx *_hx_ctx,int year,int month,int day,int hour,int min,int sec) {
			Date_obj *__this = (Date_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Date_obj), false, "Date"));
			*(void **)__this = Date_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_c0151d669b9b886e_26_new)
HXDLIN(  26)		( ( ::Date)(__this) )->mSeconds =  ::__hxcpp_new_date(year,month,day,hour,min,sec);
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Date_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Date",4e,82,3c,2d); }

		static  ::Date now();
		static ::Dynamic now_dyn();

		static  ::Date fromTime(Float t);
		static ::Dynamic fromTime_dyn();

		static  ::Date fromString(::String s);
		static ::Dynamic fromString_dyn();

		Float mSeconds;
		Float getTime();
		::Dynamic getTime_dyn();

		int getHours();
		::Dynamic getHours_dyn();

		int getMinutes();
		::Dynamic getMinutes_dyn();

		int getSeconds();
		::Dynamic getSeconds_dyn();

		int getFullYear();
		::Dynamic getFullYear_dyn();

		int getMonth();
		::Dynamic getMonth_dyn();

		int getDate();
		::Dynamic getDate_dyn();

		int getDay();
		::Dynamic getDay_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};


#endif /* INCLUDED_Date */ 
