#ifndef INCLUDED_lime_ui__JoystickHatPosition_JoystickHatPosition_Impl_
#define INCLUDED_lime_ui__JoystickHatPosition_JoystickHatPosition_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,ui,_JoystickHatPosition,JoystickHatPosition_Impl_)

namespace lime{
namespace ui{
namespace _JoystickHatPosition{


class HXCPP_CLASS_ATTRIBUTES JoystickHatPosition_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef JoystickHatPosition_Impl__obj OBJ_;
		JoystickHatPosition_Impl__obj();

	public:
		enum { _hx_ClassId = 0x2b067f36 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.ui._JoystickHatPosition.JoystickHatPosition_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.ui._JoystickHatPosition.JoystickHatPosition_Impl_"); }

		inline static ::hx::ObjectPtr< JoystickHatPosition_Impl__obj > __new() {
			::hx::ObjectPtr< JoystickHatPosition_Impl__obj > __this = new JoystickHatPosition_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< JoystickHatPosition_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			JoystickHatPosition_Impl__obj *__this = (JoystickHatPosition_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(JoystickHatPosition_Impl__obj), false, "lime.ui._JoystickHatPosition.JoystickHatPosition_Impl_"));
			*(void **)__this = JoystickHatPosition_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~JoystickHatPosition_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("JoystickHatPosition_Impl_",48,0a,82,9d); }

		static void __boot();
		static int CENTER;
		static int DOWN;
		static int LEFT;
		static int RIGHT;
		static int UP;
		static int DOWN_LEFT;
		static int DOWN_RIGHT;
		static int UP_LEFT;
		static int UP_RIGHT;
		static int _new(int value);
		static ::Dynamic _new_dyn();

		static bool get_center(int this1);
		static ::Dynamic get_center_dyn();

		static bool set_center(int this1,bool value);
		static ::Dynamic set_center_dyn();

		static bool get_down(int this1);
		static ::Dynamic get_down_dyn();

		static bool set_down(int this1,bool value);
		static ::Dynamic set_down_dyn();

		static bool get_left(int this1);
		static ::Dynamic get_left_dyn();

		static bool set_left(int this1,bool value);
		static ::Dynamic set_left_dyn();

		static bool get_right(int this1);
		static ::Dynamic get_right_dyn();

		static bool set_right(int this1,bool value);
		static ::Dynamic set_right_dyn();

		static bool get_up(int this1);
		static ::Dynamic get_up_dyn();

		static bool set_up(int this1,bool value);
		static ::Dynamic set_up_dyn();

};

} // end namespace lime
} // end namespace ui
} // end namespace _JoystickHatPosition

#endif /* INCLUDED_lime_ui__JoystickHatPosition_JoystickHatPosition_Impl_ */ 
