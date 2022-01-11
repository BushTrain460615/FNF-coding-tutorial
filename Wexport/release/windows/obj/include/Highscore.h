#ifndef INCLUDED_Highscore
#define INCLUDED_Highscore

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Highscore)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)



class HXCPP_CLASS_ATTRIBUTES Highscore_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Highscore_obj OBJ_;
		Highscore_obj();

	public:
		enum { _hx_ClassId = 0x55f38dd0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Highscore")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"Highscore"); }

		inline static ::hx::ObjectPtr< Highscore_obj > __new() {
			::hx::ObjectPtr< Highscore_obj > __this = new Highscore_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Highscore_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Highscore_obj *__this = (Highscore_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Highscore_obj), false, "Highscore"));
			*(void **)__this = Highscore_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Highscore_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Highscore",90,18,b0,92); }

		static void __boot();
		static  ::haxe::ds::StringMap songScores;
		static void saveScore(::String song,::hx::Null< int >  score, ::Dynamic diff);
		static ::Dynamic saveScore_dyn();

		static void saveWeekScore(::hx::Null< int >  week,::hx::Null< int >  score, ::Dynamic diff);
		static ::Dynamic saveWeekScore_dyn();

		static void setScore(::String song,int score);
		static ::Dynamic setScore_dyn();

		static ::String formatSong(::String song,int diff);
		static ::Dynamic formatSong_dyn();

		static int getScore(::String song,int diff);
		static ::Dynamic getScore_dyn();

		static int getWeekScore(int week,int diff);
		static ::Dynamic getWeekScore_dyn();

		static void load();
		static ::Dynamic load_dyn();

};


#endif /* INCLUDED_Highscore */ 
