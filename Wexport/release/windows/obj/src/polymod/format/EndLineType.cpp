#include <hxcpp.h>

#ifndef INCLUDED_polymod_format_EndLineType
#include <polymod/format/EndLineType.h>
#endif
namespace polymod{
namespace format{

::polymod::format::EndLineType EndLineType_obj::ANY;

::polymod::format::EndLineType EndLineType_obj::CR;

::polymod::format::EndLineType EndLineType_obj::CRLF;

::polymod::format::EndLineType EndLineType_obj::LF;

bool EndLineType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ANY",cc,96,31,00)) { outValue = EndLineType_obj::ANY; return true; }
	if (inName==HX_("CR",af,3a,00,00)) { outValue = EndLineType_obj::CR; return true; }
	if (inName==HX_("CRLF",e9,c6,87,2c)) { outValue = EndLineType_obj::CRLF; return true; }
	if (inName==HX_("LF",7a,42,00,00)) { outValue = EndLineType_obj::LF; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(EndLineType_obj)

int EndLineType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ANY",cc,96,31,00)) return 3;
	if (inName==HX_("CR",af,3a,00,00)) return 1;
	if (inName==HX_("CRLF",e9,c6,87,2c)) return 2;
	if (inName==HX_("LF",7a,42,00,00)) return 0;
	return super::__FindIndex(inName);
}

int EndLineType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ANY",cc,96,31,00)) return 0;
	if (inName==HX_("CR",af,3a,00,00)) return 0;
	if (inName==HX_("CRLF",e9,c6,87,2c)) return 0;
	if (inName==HX_("LF",7a,42,00,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val EndLineType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ANY",cc,96,31,00)) return ANY;
	if (inName==HX_("CR",af,3a,00,00)) return CR;
	if (inName==HX_("CRLF",e9,c6,87,2c)) return CRLF;
	if (inName==HX_("LF",7a,42,00,00)) return LF;
	return super::__Field(inName,inCallProp);
}

static ::String EndLineType_obj_sStaticFields[] = {
	HX_("LF",7a,42,00,00),
	HX_("CR",af,3a,00,00),
	HX_("CRLF",e9,c6,87,2c),
	HX_("ANY",cc,96,31,00),
	::String(null())
};

::hx::Class EndLineType_obj::__mClass;

Dynamic __Create_EndLineType_obj() { return new EndLineType_obj; }

void EndLineType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("polymod.format.EndLineType",6a,c9,1c,17), ::hx::TCanCast< EndLineType_obj >,EndLineType_obj_sStaticFields,0,
	&__Create_EndLineType_obj, &__Create,
	&super::__SGetClass(), &CreateEndLineType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &EndLineType_obj::__GetStatic;
}

void EndLineType_obj::__boot()
{
ANY = ::hx::CreateConstEnum< EndLineType_obj >(HX_("ANY",cc,96,31,00),3);
CR = ::hx::CreateConstEnum< EndLineType_obj >(HX_("CR",af,3a,00,00),1);
CRLF = ::hx::CreateConstEnum< EndLineType_obj >(HX_("CRLF",e9,c6,87,2c),2);
LF = ::hx::CreateConstEnum< EndLineType_obj >(HX_("LF",7a,42,00,00),0);
}


} // end namespace polymod
} // end namespace format
