#ifndef INCLUDED_Main
#define INCLUDED_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS1(flixel,FlxGame)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,FPS)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)



class HXCPP_CLASS_ATTRIBUTES Main_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef Main_obj OBJ_;
		Main_obj();

	public:
		enum { _hx_ClassId = 0x07825a7d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Main")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Main"); }
		static ::hx::ObjectPtr< Main_obj > __new();
		static ::hx::ObjectPtr< Main_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Main_obj();

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
		::String __ToString() const { return HX_("Main",59,64,2f,33); }

		static void __boot();
		static bool watermarks;
		static void main();
		static ::Dynamic main_dyn();

		int gameWidth;
		int gameHeight;
		::hx::Class initialState;
		Float zoom;
		int framerate;
		bool skipSplash;
		bool startFullscreen;
		void init( ::openfl::events::Event E);
		::Dynamic init_dyn();

		void setupGame();
		::Dynamic setupGame_dyn();

		 ::flixel::FlxGame game;
		 ::openfl::display::FPS fpsCounter;
		void toggleFPS(bool fpsEnabled);
		::Dynamic toggleFPS_dyn();

		void changeFPSColor(int color);
		::Dynamic changeFPSColor_dyn();

		void setFPSCap(Float cap);
		::Dynamic setFPSCap_dyn();

		Float getFPSCap();
		::Dynamic getFPSCap_dyn();

		Float getFPS();
		::Dynamic getFPS_dyn();

};


#endif /* INCLUDED_Main */ 