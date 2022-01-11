#include <hxcpp.h>

#ifndef INCLUDED_polymod_Polymod
#include <polymod/Polymod.h>
#endif
#ifndef INCLUDED_polymod_backends_IBackend
#include <polymod/backends/IBackend.h>
#endif
#ifndef INCLUDED_polymod_backends_NMEBackend
#include <polymod/backends/NMEBackend.h>
#endif
#ifndef INCLUDED_polymod_backends_StubBackend
#include <polymod/backends/StubBackend.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4201ab7811db0480_50_new,"polymod.backends.NMEBackend","new",0x01681ab7,"polymod.backends.NMEBackend.new","polymod/backends/NMEBackend.hx",50,0x186804b9)
namespace polymod{
namespace backends{

void NMEBackend_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4201ab7811db0480_50_new)
HXLINE(  51)		super::__construct();
HXLINE(  52)		::polymod::Polymod_obj::error(HX_("failed_create_backend",13,58,1e,db),HX_("NMEBackend requires the nme library, did you forget to install it?",f5,f5,d7,1a),null());
            	}

Dynamic NMEBackend_obj::__CreateEmpty() { return new NMEBackend_obj; }

void *NMEBackend_obj::_hx_vtable = 0;

Dynamic NMEBackend_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NMEBackend_obj > _hx_result = new NMEBackend_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NMEBackend_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x66589f31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x66589f31;
	} else {
		return inClassId==(int)0x7f44c37b;
	}
}


::hx::ObjectPtr< NMEBackend_obj > NMEBackend_obj::__new() {
	::hx::ObjectPtr< NMEBackend_obj > __this = new NMEBackend_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< NMEBackend_obj > NMEBackend_obj::__alloc(::hx::Ctx *_hx_ctx) {
	NMEBackend_obj *__this = (NMEBackend_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NMEBackend_obj), true, "polymod.backends.NMEBackend"));
	*(void **)__this = NMEBackend_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

NMEBackend_obj::NMEBackend_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NMEBackend_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *NMEBackend_obj_sStaticStorageInfo = 0;
#endif

::hx::Class NMEBackend_obj::__mClass;

void NMEBackend_obj::__register()
{
	NMEBackend_obj _hx_dummy;
	NMEBackend_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.backends.NMEBackend",45,f3,10,01);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< NMEBackend_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NMEBackend_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NMEBackend_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace backends
