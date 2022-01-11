#ifndef INCLUDED_polymod_format_XMLMerge
#define INCLUDED_polymod_format_XMLMerge

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(polymod,format,XMLMerge)

namespace polymod{
namespace format{


class HXCPP_CLASS_ATTRIBUTES XMLMerge_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef XMLMerge_obj OBJ_;
		XMLMerge_obj();

	public:
		enum { _hx_ClassId = 0x6b7b2bae };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="polymod.format.XMLMerge")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"polymod.format.XMLMerge"); }

		inline static ::hx::ObjectPtr< XMLMerge_obj > __new() {
			::hx::ObjectPtr< XMLMerge_obj > __this = new XMLMerge_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< XMLMerge_obj > __alloc(::hx::Ctx *_hx_ctx) {
			XMLMerge_obj *__this = (XMLMerge_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(XMLMerge_obj), false, "polymod.format.XMLMerge"));
			*(void **)__this = XMLMerge_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~XMLMerge_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("XMLMerge",81,71,5f,27); }

		static void mergeXMLWork( ::Xml a, ::Xml b,::hx::Null< bool >  children,::hx::Null< bool >  attributes);
		static ::Dynamic mergeXMLWork_dyn();

		static int countNodes( ::Xml xml,::String nodeName);
		static ::Dynamic countNodes_dyn();

		static void mergeXML( ::Xml a, ::Xml b,::Array< ::String > allSigs, ::haxe::ds::StringMap mergeMap);
		static ::Dynamic mergeXML_dyn();

		static void mergeXMLNodes( ::Xml a, ::Xml b);
		static ::Dynamic mergeXMLNodes_dyn();

		static  ::haxe::ds::StringMap getNodeMergeMap( ::Xml xml,::Array< ::String > addToArray);
		static ::Dynamic getNodeMergeMap_dyn();

		static ::String getNodeSignature( ::Xml xml);
		static ::Dynamic getNodeSignature_dyn();

		static  ::haxe::ds::StringMap mergeMapsDestructively( ::haxe::ds::StringMap a, ::haxe::ds::StringMap b);
		static ::Dynamic mergeMapsDestructively_dyn();

};

} // end namespace polymod
} // end namespace format

#endif /* INCLUDED_polymod_format_XMLMerge */ 
