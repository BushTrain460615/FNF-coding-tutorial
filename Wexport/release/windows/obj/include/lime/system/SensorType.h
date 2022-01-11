#ifndef INCLUDED_lime_system_SensorType
#define INCLUDED_lime_system_SensorType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,_hx_system,SensorType)
namespace lime{
namespace _hx_system{


class SensorType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef SensorType_obj OBJ_;

	public:
		SensorType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("lime.system.SensorType",ba,2d,f6,ed); }
		::String __ToString() const { return HX_("SensorType.",7a,f3,58,45) + _hx_tag; }

		static ::lime::_hx_system::SensorType ACCELEROMETER;
		static inline ::lime::_hx_system::SensorType ACCELEROMETER_dyn() { return ACCELEROMETER; }
};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_SensorType */ 
