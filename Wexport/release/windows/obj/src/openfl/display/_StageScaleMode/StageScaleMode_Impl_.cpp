#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__StageScaleMode_StageScaleMode_Impl_
#include <openfl/display/_StageScaleMode/StageScaleMode_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2edbc9abb5fbacde_41_fromString,"openfl.display._StageScaleMode.StageScaleMode_Impl_","fromString",0xa7123530,"openfl.display._StageScaleMode.StageScaleMode_Impl_.fromString","openfl/display/StageScaleMode.hx",41,0x7043b2c3)
HX_LOCAL_STACK_FRAME(_hx_pos_2edbc9abb5fbacde_53_toString,"openfl.display._StageScaleMode.StageScaleMode_Impl_","toString",0x32c6e8c1,"openfl.display._StageScaleMode.StageScaleMode_Impl_.toString","openfl/display/StageScaleMode.hx",53,0x7043b2c3)
HX_LOCAL_STACK_FRAME(_hx_pos_2edbc9abb5fbacde_16_boot,"openfl.display._StageScaleMode.StageScaleMode_Impl_","boot",0x3976adc7,"openfl.display._StageScaleMode.StageScaleMode_Impl_.boot","openfl/display/StageScaleMode.hx",16,0x7043b2c3)
HX_LOCAL_STACK_FRAME(_hx_pos_2edbc9abb5fbacde_23_boot,"openfl.display._StageScaleMode.StageScaleMode_Impl_","boot",0x3976adc7,"openfl.display._StageScaleMode.StageScaleMode_Impl_.boot","openfl/display/StageScaleMode.hx",23,0x7043b2c3)
HX_LOCAL_STACK_FRAME(_hx_pos_2edbc9abb5fbacde_30_boot,"openfl.display._StageScaleMode.StageScaleMode_Impl_","boot",0x3976adc7,"openfl.display._StageScaleMode.StageScaleMode_Impl_.boot","openfl/display/StageScaleMode.hx",30,0x7043b2c3)
HX_LOCAL_STACK_FRAME(_hx_pos_2edbc9abb5fbacde_37_boot,"openfl.display._StageScaleMode.StageScaleMode_Impl_","boot",0x3976adc7,"openfl.display._StageScaleMode.StageScaleMode_Impl_.boot","openfl/display/StageScaleMode.hx",37,0x7043b2c3)
namespace openfl{
namespace display{
namespace _StageScaleMode{

void StageScaleMode_Impl__obj::__construct() { }

Dynamic StageScaleMode_Impl__obj::__CreateEmpty() { return new StageScaleMode_Impl__obj; }

void *StageScaleMode_Impl__obj::_hx_vtable = 0;

Dynamic StageScaleMode_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StageScaleMode_Impl__obj > _hx_result = new StageScaleMode_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StageScaleMode_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0c4dc9f3;
}

 ::Dynamic StageScaleMode_Impl__obj::EXACT_FIT;

 ::Dynamic StageScaleMode_Impl__obj::NO_BORDER;

 ::Dynamic StageScaleMode_Impl__obj::NO_SCALE;

 ::Dynamic StageScaleMode_Impl__obj::SHOW_ALL;

 ::Dynamic StageScaleMode_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_2edbc9abb5fbacde_41_fromString)
HXDLIN(  41)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("exactFit",52,58,22,25)) ){
HXLINE(  43)			return 0;
HXDLIN(  43)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("noBorder",0d,48,2a,34)) ){
HXLINE(  44)			return 1;
HXDLIN(  44)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("noScale",89,52,d2,4b)) ){
HXLINE(  45)			return 2;
HXDLIN(  45)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("showAll",24,58,96,7b)) ){
HXLINE(  46)			return 3;
HXDLIN(  46)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  47)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  41)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StageScaleMode_Impl__obj,fromString,return )

::String StageScaleMode_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_2edbc9abb5fbacde_53_toString)
HXDLIN(  53)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  55)			return HX_("exactFit",52,58,22,25);
HXDLIN(  55)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  56)			return HX_("noBorder",0d,48,2a,34);
HXDLIN(  56)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE(  57)			return HX_("noScale",89,52,d2,4b);
HXDLIN(  57)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==3) ){
HXLINE(  58)			return HX_("showAll",24,58,96,7b);
HXDLIN(  58)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  59)			return null();
            		}
            		_hx_goto_2:;
HXLINE(  53)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StageScaleMode_Impl__obj,toString,return )


StageScaleMode_Impl__obj::StageScaleMode_Impl__obj()
{
}

bool StageScaleMode_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StageScaleMode_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo StageScaleMode_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &StageScaleMode_Impl__obj::EXACT_FIT,HX_("EXACT_FIT",d1,38,ee,79)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &StageScaleMode_Impl__obj::NO_BORDER,HX_("NO_BORDER",6a,40,33,71)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &StageScaleMode_Impl__obj::NO_SCALE,HX_("NO_SCALE",ac,b8,22,35)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &StageScaleMode_Impl__obj::SHOW_ALL,HX_("SHOW_ALL",7f,39,6f,2a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void StageScaleMode_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StageScaleMode_Impl__obj::EXACT_FIT,"EXACT_FIT");
	HX_MARK_MEMBER_NAME(StageScaleMode_Impl__obj::NO_BORDER,"NO_BORDER");
	HX_MARK_MEMBER_NAME(StageScaleMode_Impl__obj::NO_SCALE,"NO_SCALE");
	HX_MARK_MEMBER_NAME(StageScaleMode_Impl__obj::SHOW_ALL,"SHOW_ALL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StageScaleMode_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StageScaleMode_Impl__obj::EXACT_FIT,"EXACT_FIT");
	HX_VISIT_MEMBER_NAME(StageScaleMode_Impl__obj::NO_BORDER,"NO_BORDER");
	HX_VISIT_MEMBER_NAME(StageScaleMode_Impl__obj::NO_SCALE,"NO_SCALE");
	HX_VISIT_MEMBER_NAME(StageScaleMode_Impl__obj::SHOW_ALL,"SHOW_ALL");
};

#endif

::hx::Class StageScaleMode_Impl__obj::__mClass;

static ::String StageScaleMode_Impl__obj_sStaticFields[] = {
	HX_("EXACT_FIT",d1,38,ee,79),
	HX_("NO_BORDER",6a,40,33,71),
	HX_("NO_SCALE",ac,b8,22,35),
	HX_("SHOW_ALL",7f,39,6f,2a),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void StageScaleMode_Impl__obj::__register()
{
	StageScaleMode_Impl__obj _hx_dummy;
	StageScaleMode_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._StageScaleMode.StageScaleMode_Impl_",f9,9e,13,b1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StageScaleMode_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StageScaleMode_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StageScaleMode_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< StageScaleMode_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StageScaleMode_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StageScaleMode_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StageScaleMode_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StageScaleMode_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2edbc9abb5fbacde_16_boot)
HXDLIN(  16)		EXACT_FIT = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2edbc9abb5fbacde_23_boot)
HXDLIN(  23)		NO_BORDER = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2edbc9abb5fbacde_30_boot)
HXDLIN(  30)		NO_SCALE = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2edbc9abb5fbacde_37_boot)
HXDLIN(  37)		SHOW_ALL = 3;
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _StageScaleMode
