#ifndef INCLUDED_KeyBinds
#define INCLUDED_KeyBinds

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(KeyBinds)



class HXCPP_CLASS_ATTRIBUTES KeyBinds_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef KeyBinds_obj OBJ_;
		KeyBinds_obj();

	public:
		enum { _hx_ClassId = 0x2cac64d7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="KeyBinds")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"KeyBinds"); }

		inline static ::hx::ObjectPtr< KeyBinds_obj > __new() {
			::hx::ObjectPtr< KeyBinds_obj > __this = new KeyBinds_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< KeyBinds_obj > __alloc(::hx::Ctx *_hx_ctx) {
			KeyBinds_obj *__this = (KeyBinds_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(KeyBinds_obj), false, "KeyBinds"));
			*(void **)__this = KeyBinds_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~KeyBinds_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("KeyBinds",17,72,1b,d1); }

		static void resetBinds();
		static ::Dynamic resetBinds_dyn();

		static void keyCheck();
		static ::Dynamic keyCheck_dyn();

};


#endif /* INCLUDED_KeyBinds */ 
