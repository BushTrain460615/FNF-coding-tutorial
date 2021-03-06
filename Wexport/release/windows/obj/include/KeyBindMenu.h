#ifndef INCLUDED_KeyBindMenu
#define INCLUDED_KeyBindMenu

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
HX_DECLARE_CLASS0(KeyBindMenu)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES KeyBindMenu_obj : public  ::flixel::FlxSubState_obj
{
	public:
		typedef  ::flixel::FlxSubState_obj super;
		typedef KeyBindMenu_obj OBJ_;
		KeyBindMenu_obj();

	public:
		enum { _hx_ClassId = 0x0a838ef3 };

		void __construct( ::Dynamic BGColor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="KeyBindMenu")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"KeyBindMenu"); }
		static ::hx::ObjectPtr< KeyBindMenu_obj > __new( ::Dynamic BGColor);
		static ::hx::ObjectPtr< KeyBindMenu_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic BGColor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~KeyBindMenu_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("KeyBindMenu",9b,9e,7a,e2); }

		 ::flixel::text::FlxText keyTextDisplay;
		 ::flixel::text::FlxText keyWarning;
		 ::flixel::tweens::FlxTween warningTween;
		::Array< ::String > keyText;
		::Array< ::String > defaultKeys;
		int curSelected;
		::Array< ::String > keys;
		::String tempKey;
		::Array< ::String > blacklist;
		 ::flixel::FlxSprite blackBox;
		 ::flixel::text::FlxText infoText;
		::String state;
		void create();

		void update(Float elapsed);

		void textUpdate();
		::Dynamic textUpdate_dyn();

		void save();
		::Dynamic save_dyn();

		void reset();
		::Dynamic reset_dyn();

		void quit();
		::Dynamic quit_dyn();

		void addKey(::String r);
		::Dynamic addKey_dyn();

		void changeItem(::hx::Null< int >  _amount);
		::Dynamic changeItem_dyn();

};


#endif /* INCLUDED_KeyBindMenu */ 
