#ifndef INCLUDED_flixel_tweens_motion_LinearMotion
#define INCLUDED_flixel_tweens_motion_LinearMotion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,tweens,FlxTweenManager)
HX_DECLARE_CLASS3(flixel,tweens,motion,LinearMotion)
HX_DECLARE_CLASS3(flixel,tweens,motion,Motion)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace tweens{
namespace motion{


class HXCPP_CLASS_ATTRIBUTES LinearMotion_obj : public  ::flixel::tweens::motion::Motion_obj
{
	public:
		typedef  ::flixel::tweens::motion::Motion_obj super;
		typedef LinearMotion_obj OBJ_;
		LinearMotion_obj();

	public:
		enum { _hx_ClassId = 0x57b2119d };

		void __construct( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.tweens.motion.LinearMotion")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.tweens.motion.LinearMotion"); }
		static ::hx::ObjectPtr< LinearMotion_obj > __new( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager);
		static ::hx::ObjectPtr< LinearMotion_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LinearMotion_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LinearMotion",1b,92,ea,69); }

		Float _fromX;
		Float _fromY;
		Float _moveX;
		Float _moveY;
		Float _distance;
		 ::flixel::tweens::motion::LinearMotion setMotion(Float FromX,Float FromY,Float ToX,Float ToY,Float DurationOrSpeed,::hx::Null< bool >  UseDuration);
		::Dynamic setMotion_dyn();

		void update(Float elapsed);

		Float get_distance();
		::Dynamic get_distance_dyn();

};

} // end namespace flixel
} // end namespace tweens
} // end namespace motion

#endif /* INCLUDED_flixel_tweens_motion_LinearMotion */ 
