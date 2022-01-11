#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_transition_GraphicTransTileSquare
#include <flixel/addons/transition/GraphicTransTileSquare.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_db140143a68fea04_47_new,"flixel.addons.transition.GraphicTransTileSquare","new",0x0a713f4d,"flixel.addons.transition.GraphicTransTileSquare.new","openfl/utils/_internal/AssetsMacro.hx",47,0xfdd54705)
HX_LOCAL_STACK_FRAME(_hx_pos_44db7221ae9d3cdb_19_boot,"flixel.addons.transition.GraphicTransTileSquare","boot",0x10bf24a5,"flixel.addons.transition.GraphicTransTileSquare.boot","flixel/addons/transition/FlxTransitionSprite.hx",19,0xd14f1ac3)
namespace flixel{
namespace addons{
namespace transition{

void GraphicTransTileSquare_obj::__construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA){
            		 ::Dynamic transparent = __o_transparent;
            		if (::hx::IsNull(__o_transparent)) transparent = true;
            		 ::Dynamic fillRGBA = __o_fillRGBA;
            		if (::hx::IsNull(__o_fillRGBA)) fillRGBA = -1;
            	HX_STACKFRAME(&_hx_pos_db140143a68fea04_47_new)
HXLINE(  71)		super::__construct(0,0,transparent,fillRGBA);
HXLINE(  73)		 ::openfl::utils::ByteArrayData byteArray = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(::haxe::Resource_obj::getBytes(::flixel::addons::transition::GraphicTransTileSquare_obj::resourceName));
HXLINE(  74)		{
HXLINE(  74)			 ::openfl::utils::ByteArrayData rawAlpha = null();
HXDLIN(  74)			 ::lime::graphics::Image image = ::lime::graphics::Image_obj::fromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(byteArray));
HXDLIN(  74)			this->_hx___fromImage(image);
HXDLIN(  74)			if (::hx::IsNotNull( rawAlpha )) {
HXLINE(  74)				this->_hx___applyAlpha(rawAlpha);
            			}
            		}
            	}

Dynamic GraphicTransTileSquare_obj::__CreateEmpty() { return new GraphicTransTileSquare_obj; }

void *GraphicTransTileSquare_obj::_hx_vtable = 0;

Dynamic GraphicTransTileSquare_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicTransTileSquare_obj > _hx_result = new GraphicTransTileSquare_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicTransTileSquare_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x26767837;
	}
}

::String GraphicTransTileSquare_obj::resourceName;


::hx::ObjectPtr< GraphicTransTileSquare_obj > GraphicTransTileSquare_obj::__new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	::hx::ObjectPtr< GraphicTransTileSquare_obj > __this = new GraphicTransTileSquare_obj();
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

::hx::ObjectPtr< GraphicTransTileSquare_obj > GraphicTransTileSquare_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	GraphicTransTileSquare_obj *__this = (GraphicTransTileSquare_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicTransTileSquare_obj), true, "flixel.addons.transition.GraphicTransTileSquare"));
	*(void **)__this = GraphicTransTileSquare_obj::_hx_vtable;
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

GraphicTransTileSquare_obj::GraphicTransTileSquare_obj()
{
}

bool GraphicTransTileSquare_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool GraphicTransTileSquare_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicTransTileSquare_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GraphicTransTileSquare_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &GraphicTransTileSquare_obj::resourceName,HX_("resourceName",39,7a,62,90)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void GraphicTransTileSquare_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicTransTileSquare_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicTransTileSquare_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicTransTileSquare_obj::resourceName,"resourceName");
};

#endif

::hx::Class GraphicTransTileSquare_obj::__mClass;

static ::String GraphicTransTileSquare_obj_sStaticFields[] = {
	HX_("resourceName",39,7a,62,90),
	::String(null())
};

void GraphicTransTileSquare_obj::__register()
{
	GraphicTransTileSquare_obj _hx_dummy;
	GraphicTransTileSquare_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.transition.GraphicTransTileSquare",db,94,1a,70);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicTransTileSquare_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicTransTileSquare_obj::__SetStatic;
	__mClass->mMarkFunc = GraphicTransTileSquare_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GraphicTransTileSquare_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicTransTileSquare_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicTransTileSquare_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicTransTileSquare_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicTransTileSquare_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicTransTileSquare_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_44db7221ae9d3cdb_19_boot)
HXDLIN(  19)		resourceName = HX_("__ASSET__:bitmap_flixel_addons_transition_GraphicTransTileSquare",06,2a,6a,6d);
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace transition
