// Generated by Haxe 4.3.6
#ifndef INCLUDED_flxanimate_filters__BevelFilter_InnerCombineShader
#define INCLUDED_flxanimate_filters__BevelFilter_InnerCombineShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flxanimate_filters__BevelFilter_BevelShader
#include <flxanimate/filters/_BevelFilter/BevelShader.h>
#endif
HX_DECLARE_CLASS3(flxanimate,filters,_BevelFilter,BevelShader)
HX_DECLARE_CLASS3(flxanimate,filters,_BevelFilter,InnerCombineShader)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilterShader)

namespace flxanimate{
namespace filters{
namespace _BevelFilter{


class HXCPP_CLASS_ATTRIBUTES InnerCombineShader_obj : public  ::flxanimate::filters::_BevelFilter::BevelShader_obj
{
	public:
		typedef  ::flxanimate::filters::_BevelFilter::BevelShader_obj super;
		typedef InnerCombineShader_obj OBJ_;
		InnerCombineShader_obj();

	public:
		enum { _hx_ClassId = 0x6fa093a1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flxanimate.filters._BevelFilter.InnerCombineShader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flxanimate.filters._BevelFilter.InnerCombineShader"); }
		static ::hx::ObjectPtr< InnerCombineShader_obj > __new();
		static ::hx::ObjectPtr< InnerCombineShader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~InnerCombineShader_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("InnerCombineShader",ae,43,5f,a3); }

};

} // end namespace flxanimate
} // end namespace filters
} // end namespace _BevelFilter

#endif /* INCLUDED_flxanimate_filters__BevelFilter_InnerCombineShader */ 
