#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#define INCLUDED_flixel_addons_ui_FlxUIButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ILabeled
#include <flixel/addons/ui/interfaces/ILabeled.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,ButtonLabelStyle)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIButton)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIText)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITypedButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ILabeled)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,text,FlxTextBorderStyle)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxUIButton_obj : public  ::flixel::addons::ui::FlxUITypedButton_obj
{
	public:
		typedef  ::flixel::addons::ui::FlxUITypedButton_obj super;
		typedef FlxUIButton_obj OBJ_;
		FlxUIButton_obj();

	public:
		enum { _hx_ClassId = 0x028d8cd1 };

		void __construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::String Label, ::Dynamic OnClick, ::Dynamic __o_LoadDefaultGraphics, ::Dynamic __o_LoadBlank, ::Dynamic __o_Color);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUIButton")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxUIButton"); }
		static ::hx::ObjectPtr< FlxUIButton_obj > __new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::String Label, ::Dynamic OnClick, ::Dynamic __o_LoadDefaultGraphics, ::Dynamic __o_LoadBlank, ::Dynamic __o_Color);
		static ::hx::ObjectPtr< FlxUIButton_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::String Label, ::Dynamic OnClick, ::Dynamic __o_LoadDefaultGraphics, ::Dynamic __o_LoadBlank, ::Dynamic __o_Color);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxUIButton_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxUIButton",b8,b5,38,25); }

		 ::openfl::display::BitmapData _noIconGraphicsBkup;
		 ::flixel::addons::ui::ButtonLabelStyle up_style;
		 ::flixel::addons::ui::ButtonLabelStyle over_style;
		 ::flixel::addons::ui::ButtonLabelStyle down_style;
		 ::flixel::addons::ui::ButtonLabelStyle up_toggle_style;
		 ::flixel::addons::ui::ButtonLabelStyle over_toggle_style;
		 ::flixel::addons::ui::ButtonLabelStyle down_toggle_style;
		 ::flixel::text::FlxText setLabelFormat(::String Font,::hx::Null< int >  Size,::hx::Null< int >  Color,::String Alignment, ::flixel::text::FlxTextBorderStyle BorderStyle,::hx::Null< int >  BorderColor,::hx::Null< bool >  Embedded);
		::Dynamic setLabelFormat_dyn();

		void autoCenterLabel();

		 ::flixel::FlxSprite clone();

		void copyStyle( ::flixel::addons::ui::FlxUITypedButton other);

		 ::flixel::addons::ui::FlxUIText setLabel( ::flixel::addons::ui::FlxUIText t);
		::Dynamic setLabel_dyn();

		 ::flixel::addons::ui::FlxUIText getLabel();
		::Dynamic getLabel_dyn();

		void resize(Float W,Float H);

		void addIcon( ::flixel::FlxSprite icon,::hx::Null< int >  X,::hx::Null< int >  Y, ::Dynamic center);
		::Dynamic addIcon_dyn();

		void removeIcon();
		::Dynamic removeIcon_dyn();

		void changeIcon( ::flixel::FlxSprite newIcon);
		::Dynamic changeIcon_dyn();

		void destroy();

		void loadDefaultGraphic();

		void resetHelpers();

		void onDownHandler();

		void onOverHandler();

		void onOutHandler();

		void onUpHandler();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUIButton */ 
