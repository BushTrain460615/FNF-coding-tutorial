#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_http_HttpBase
#include <haxe/http/HttpBase.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_Http
#include <sys/Http.h>
#endif
#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif
#ifndef INCLUDED_sys_ssl_Socket
#include <sys/ssl/Socket.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4de4efe70e9aaf52_48_new,"sys.Http","new",0xa5e0041b,"sys.Http.new","C:\\HaxeToolkit\\haxe\\std/sys/Http.hx",48,0x92a61a9b)
HX_LOCAL_STACK_FRAME(_hx_pos_4de4efe70e9aaf52_60_request,"sys.Http","request",0xbb950c8a,"sys.Http.request","C:\\HaxeToolkit\\haxe\\std/sys/Http.hx",60,0x92a61a9b)
HX_LOCAL_STACK_FRAME(_hx_pos_4de4efe70e9aaf52_56_request,"sys.Http","request",0xbb950c8a,"sys.Http.request","C:\\HaxeToolkit\\haxe\\std/sys/Http.hx",56,0x92a61a9b)
static const bool _hx_array_data_00b75aa9_3[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_4de4efe70e9aaf52_90_customRequest,"sys.Http","customRequest",0xecf59319,"sys.Http.customRequest","C:\\HaxeToolkit\\haxe\\std/sys/Http.hx",90,0x92a61a9b)
static const ::String _hx_array_data_00b75aa9_9[] = {
	HX_("--",60,27,00,00),
};
static const ::String _hx_array_data_00b75aa9_10[] = {
	HX_("\r\n",5d,0b,00,00),
};
static const ::String _hx_array_data_00b75aa9_11[] = {
	HX_("Content-Disposition: form-data; name=\"",bf,46,3a,1c),
};
static const ::String _hx_array_data_00b75aa9_12[] = {
	HX_("\"",22,00,00,00),
};
static const ::String _hx_array_data_00b75aa9_13[] = {
	HX_("\r\n",5d,0b,00,00),
};
static const ::String _hx_array_data_00b75aa9_14[] = {
	HX_("\r\n",5d,0b,00,00),
};
static const ::String _hx_array_data_00b75aa9_15[] = {
	HX_("\r\n",5d,0b,00,00),
};
static const ::String _hx_array_data_00b75aa9_16[] = {
	HX_("--",60,27,00,00),
};
static const ::String _hx_array_data_00b75aa9_17[] = {
	HX_("\r\n",5d,0b,00,00),
};
static const ::String _hx_array_data_00b75aa9_18[] = {
	HX_("Content-Disposition: form-data; name=\"",bf,46,3a,1c),
};
static const ::String _hx_array_data_00b75aa9_19[] = {
	HX_("\"; filename=\"",b3,3a,e5,4f),
};
static const ::String _hx_array_data_00b75aa9_20[] = {
	HX_("\"",22,00,00,00),
};
static const ::String _hx_array_data_00b75aa9_21[] = {
	HX_("\r\n",5d,0b,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_4de4efe70e9aaf52_209_customRequest,"sys.Http","customRequest",0xecf59319,"sys.Http.customRequest","C:\\HaxeToolkit\\haxe\\std/sys/Http.hx",209,0x92a61a9b)
HX_LOCAL_STACK_FRAME(_hx_pos_4de4efe70e9aaf52_255_writeBody,"sys.Http","writeBody",0xc731a11c,"sys.Http.writeBody","C:\\HaxeToolkit\\haxe\\std/sys/Http.hx",255,0x92a61a9b)
HX_LOCAL_STACK_FRAME(_hx_pos_4de4efe70e9aaf52_280_readHttpResponse,"sys.Http","readHttpResponse",0xd67be204,"sys.Http.readHttpResponse","C:\\HaxeToolkit\\haxe\\std/sys/Http.hx",280,0x92a61a9b)
HX_LOCAL_STACK_FRAME(_hx_pos_4de4efe70e9aaf52_422_readChunk,"sys.Http","readChunk",0x940c4532,"sys.Http.readChunk","C:\\HaxeToolkit\\haxe\\std/sys/Http.hx",422,0x92a61a9b)
HX_LOCAL_STACK_FRAME(_hx_pos_4de4efe70e9aaf52_46_boot,"sys.Http","boot",0x763c9417,"sys.Http.boot","C:\\HaxeToolkit\\haxe\\std/sys/Http.hx",46,0x92a61a9b)
namespace sys{

void Http_obj::__construct(::String url){
            	HX_STACKFRAME(&_hx_pos_4de4efe70e9aaf52_48_new)
HXLINE(  49)		this->cnxTimeout = ( (Float)(10) );
HXLINE(  53)		super::__construct(url);
            	}

Dynamic Http_obj::__CreateEmpty() { return new Http_obj; }

void *Http_obj::_hx_vtable = 0;

Dynamic Http_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Http_obj > _hx_result = new Http_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Http_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x02924475) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x02924475;
	} else {
		return inClassId==(int)0x10c0921f;
	}
}

void Http_obj::request( ::Dynamic post){
            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0,::Array< bool >,err, ::sys::Http,_gthis, ::haxe::io::BytesOutput,output, ::Dynamic,old) HXARGC(1)
            		void _hx_run(::String e){
            			HX_GC_STACKFRAME(&_hx_pos_4de4efe70e9aaf52_60_request)
HXLINE(  61)			_gthis->responseBytes = output->getBytes();
HXLINE(  62)			err[0] = true;
HXLINE(  64)			_gthis->onError = old;
HXLINE(  65)			_gthis->onError(e);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_4de4efe70e9aaf52_56_request)
HXDLIN(  56)		 ::sys::Http _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  57)		 ::haxe::io::BytesOutput output =  ::haxe::io::BytesOutput_obj::__alloc( HX_CTX );
HXLINE(  58)		 ::Dynamic old = this->onError;
HXLINE(  59)		::Array< bool > err = ::Array_obj< bool >::fromData( _hx_array_data_00b75aa9_3,1);
HXLINE(  60)		this->onError =  ::Dynamic(new _hx_Closure_0(err,_gthis,output,old));
HXLINE(  67)		bool post1;
HXDLIN(  67)		if (!(( (bool)(post) ))) {
HXLINE(  67)			post1 = ::hx::IsNotNull( this->postBytes );
            		}
            		else {
HXLINE(  67)			post1 = true;
            		}
HXDLIN(  67)		if (!(post1)) {
HXLINE(  67)			post = ::hx::IsNotNull( this->postData );
            		}
            		else {
HXLINE(  67)			post = true;
            		}
HXLINE(  68)		this->customRequest(( (bool)(post) ),output,null(),null());
HXLINE(  69)		if (!(err->__get(0))) {
HXLINE(  70)			this->success(output->getBytes());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Http_obj,request,(void))

void Http_obj::customRequest(bool post, ::haxe::io::Output api, ::sys::net::Socket sock,::String method){
            	HX_GC_STACKFRAME(&_hx_pos_4de4efe70e9aaf52_90_customRequest)
HXLINE(  91)		this->responseAsString = null();
HXLINE(  92)		this->responseBytes = null();
HXLINE(  93)		 ::EReg url_regexp =  ::EReg_obj::__alloc( HX_CTX ,HX_("^(https?://)?([a-zA-Z\\.0-9_-]+)(:[0-9]+)?(.*)$",00,3e,3a,6c),HX_("",00,00,00,00));
HXLINE(  94)		if (!(url_regexp->match(this->url))) {
HXLINE(  95)			this->onError(HX_("Invalid URL",86,55,d0,76));
HXLINE(  96)			return;
            		}
HXLINE(  98)		bool secure = (url_regexp->matched(1) == HX_("https://",cf,b4,ae,3e));
HXLINE(  99)		if (::hx::IsNull( sock )) {
HXLINE( 100)			if (secure) {
HXLINE( 108)				sock =  ::sys::ssl::Socket_obj::__alloc( HX_CTX );
            			}
            			else {
HXLINE( 115)				sock =  ::sys::net::Socket_obj::__alloc( HX_CTX );
            			}
HXLINE( 117)			sock->setTimeout(this->cnxTimeout);
            		}
HXLINE( 119)		::String host = url_regexp->matched(2);
HXLINE( 120)		::String portString = url_regexp->matched(3);
HXLINE( 121)		::String request = url_regexp->matched(4);
HXLINE( 125)		if ((request.charAt(0) != HX_("/",2f,00,00,00))) {
HXLINE( 126)			request = (HX_("/",2f,00,00,00) + request);
            		}
HXLINE( 128)		 ::Dynamic port;
HXDLIN( 128)		bool port1;
HXDLIN( 128)		if (::hx::IsNotNull( portString )) {
HXLINE( 128)			port1 = (portString == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 128)			port1 = true;
            		}
HXDLIN( 128)		if (port1) {
HXLINE( 128)			if (secure) {
HXLINE( 128)				port = 443;
            			}
            			else {
HXLINE( 128)				port = 80;
            			}
            		}
            		else {
HXLINE( 128)			port = ::Std_obj::parseInt(portString.substr(1,(portString.length - 1)));
            		}
HXLINE( 130)		bool multipart = ::hx::IsNotNull( this->file );
HXLINE( 131)		::String boundary = null();
HXLINE( 132)		::String uri = null();
HXLINE( 133)		if (multipart) {
HXLINE( 134)			post = true;
HXLINE( 135)			::String boundary1 = ::Std_obj::string(::Std_obj::random(1000));
HXDLIN( 135)			::String boundary2 = (boundary1 + ::Std_obj::string(::Std_obj::random(1000)));
HXDLIN( 135)			::String boundary3 = (boundary2 + ::Std_obj::string(::Std_obj::random(1000)));
HXDLIN( 135)			boundary = (boundary3 + ::Std_obj::string(::Std_obj::random(1000)));
HXLINE( 139)			while((boundary.length < 38)){
HXLINE( 140)				boundary = (HX_("-",2d,00,00,00) + boundary);
            			}
HXLINE( 141)			 ::StringBuf b =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 142)			{
HXLINE( 142)				int _g = 0;
HXDLIN( 142)				::Array< ::Dynamic> _g1 = this->params;
HXDLIN( 142)				while((_g < _g1->length)){
HXLINE( 142)					 ::Dynamic p = _g1->__get(_g);
HXDLIN( 142)					_g = (_g + 1);
HXLINE( 143)					{
HXLINE( 143)						if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 143)							b->flush();
            						}
HXDLIN( 143)						if (::hx::IsNull( b->b )) {
HXLINE( 143)							b->b = ::Array_obj< ::String >::fromData( _hx_array_data_00b75aa9_9,1);
            						}
            						else {
HXLINE( 143)							b->b->push(HX_("--",60,27,00,00));
            						}
            					}
HXLINE( 144)					{
HXLINE( 144)						if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 144)							b->flush();
            						}
HXDLIN( 144)						if (::hx::IsNull( b->b )) {
HXLINE( 144)							b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(boundary));
            						}
            						else {
HXLINE( 144)							::Array< ::String > b1 = b->b;
HXDLIN( 144)							b1->push(::Std_obj::string(boundary));
            						}
            					}
HXLINE( 145)					{
HXLINE( 145)						if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 145)							b->flush();
            						}
HXDLIN( 145)						if (::hx::IsNull( b->b )) {
HXLINE( 145)							b->b = ::Array_obj< ::String >::fromData( _hx_array_data_00b75aa9_10,1);
            						}
            						else {
HXLINE( 145)							b->b->push(HX_("\r\n",5d,0b,00,00));
            						}
            					}
HXLINE( 146)					{
HXLINE( 146)						if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 146)							b->flush();
            						}
HXDLIN( 146)						if (::hx::IsNull( b->b )) {
HXLINE( 146)							b->b = ::Array_obj< ::String >::fromData( _hx_array_data_00b75aa9_11,1);
            						}
            						else {
HXLINE( 146)							b->b->push(HX_("Content-Disposition: form-data; name=\"",bf,46,3a,1c));
            						}
            					}
HXLINE( 147)					{
HXLINE( 147)						::String x = ( (::String)(p->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXDLIN( 147)						if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 147)							b->flush();
            						}
HXDLIN( 147)						if (::hx::IsNull( b->b )) {
HXLINE( 147)							b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 147)							::Array< ::String > b1 = b->b;
HXDLIN( 147)							b1->push(::Std_obj::string(x));
            						}
            					}
HXLINE( 148)					{
HXLINE( 148)						if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 148)							b->flush();
            						}
HXDLIN( 148)						if (::hx::IsNull( b->b )) {
HXLINE( 148)							b->b = ::Array_obj< ::String >::fromData( _hx_array_data_00b75aa9_12,1);
            						}
            						else {
HXLINE( 148)							b->b->push(HX_("\"",22,00,00,00));
            						}
            					}
HXLINE( 149)					{
HXLINE( 149)						if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 149)							b->flush();
            						}
HXDLIN( 149)						if (::hx::IsNull( b->b )) {
HXLINE( 149)							b->b = ::Array_obj< ::String >::fromData( _hx_array_data_00b75aa9_13,1);
            						}
            						else {
HXLINE( 149)							b->b->push(HX_("\r\n",5d,0b,00,00));
            						}
            					}
HXLINE( 150)					{
HXLINE( 150)						if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 150)							b->flush();
            						}
HXDLIN( 150)						if (::hx::IsNull( b->b )) {
HXLINE( 150)							b->b = ::Array_obj< ::String >::fromData( _hx_array_data_00b75aa9_14,1);
            						}
            						else {
HXLINE( 150)							b->b->push(HX_("\r\n",5d,0b,00,00));
            						}
            					}
HXLINE( 151)					{
HXLINE( 151)						::String x1 = ( (::String)(p->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic)) );
HXDLIN( 151)						if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 151)							b->flush();
            						}
HXDLIN( 151)						if (::hx::IsNull( b->b )) {
HXLINE( 151)							b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 151)							::Array< ::String > b1 = b->b;
HXDLIN( 151)							b1->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 152)					{
HXLINE( 152)						if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 152)							b->flush();
            						}
HXDLIN( 152)						if (::hx::IsNull( b->b )) {
HXLINE( 152)							b->b = ::Array_obj< ::String >::fromData( _hx_array_data_00b75aa9_15,1);
            						}
            						else {
HXLINE( 152)							b->b->push(HX_("\r\n",5d,0b,00,00));
            						}
            					}
            				}
            			}
HXLINE( 154)			{
HXLINE( 154)				if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 154)					b->flush();
            				}
HXDLIN( 154)				if (::hx::IsNull( b->b )) {
HXLINE( 154)					b->b = ::Array_obj< ::String >::fromData( _hx_array_data_00b75aa9_16,1);
            				}
            				else {
HXLINE( 154)					b->b->push(HX_("--",60,27,00,00));
            				}
            			}
HXLINE( 155)			{
HXLINE( 155)				if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 155)					b->flush();
            				}
HXDLIN( 155)				if (::hx::IsNull( b->b )) {
HXLINE( 155)					b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(boundary));
            				}
            				else {
HXLINE( 155)					::Array< ::String > b1 = b->b;
HXDLIN( 155)					b1->push(::Std_obj::string(boundary));
            				}
            			}
HXLINE( 156)			{
HXLINE( 156)				if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 156)					b->flush();
            				}
HXDLIN( 156)				if (::hx::IsNull( b->b )) {
HXLINE( 156)					b->b = ::Array_obj< ::String >::fromData( _hx_array_data_00b75aa9_17,1);
            				}
            				else {
HXLINE( 156)					b->b->push(HX_("\r\n",5d,0b,00,00));
            				}
            			}
HXLINE( 157)			{
HXLINE( 157)				if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 157)					b->flush();
            				}
HXDLIN( 157)				if (::hx::IsNull( b->b )) {
HXLINE( 157)					b->b = ::Array_obj< ::String >::fromData( _hx_array_data_00b75aa9_18,1);
            				}
            				else {
HXLINE( 157)					b->b->push(HX_("Content-Disposition: form-data; name=\"",bf,46,3a,1c));
            				}
            			}
HXLINE( 158)			{
HXLINE( 158)				::String x = ( (::String)(this->file->__Field(HX_("param",8d,80,55,bd),::hx::paccDynamic)) );
HXDLIN( 158)				if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 158)					b->flush();
            				}
HXDLIN( 158)				if (::hx::IsNull( b->b )) {
HXLINE( 158)					b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            				}
            				else {
HXLINE( 158)					::Array< ::String > b1 = b->b;
HXDLIN( 158)					b1->push(::Std_obj::string(x));
            				}
            			}
HXLINE( 159)			{
HXLINE( 159)				if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 159)					b->flush();
            				}
HXDLIN( 159)				if (::hx::IsNull( b->b )) {
HXLINE( 159)					b->b = ::Array_obj< ::String >::fromData( _hx_array_data_00b75aa9_19,1);
            				}
            				else {
HXLINE( 159)					b->b->push(HX_("\"; filename=\"",b3,3a,e5,4f));
            				}
            			}
HXLINE( 160)			{
HXLINE( 160)				::String x1 = ( (::String)(this->file->__Field(HX_("filename",c7,2e,6a,77),::hx::paccDynamic)) );
HXDLIN( 160)				if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 160)					b->flush();
            				}
HXDLIN( 160)				if (::hx::IsNull( b->b )) {
HXLINE( 160)					b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            				}
            				else {
HXLINE( 160)					::Array< ::String > b1 = b->b;
HXDLIN( 160)					b1->push(::Std_obj::string(x1));
            				}
            			}
HXLINE( 161)			{
HXLINE( 161)				if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 161)					b->flush();
            				}
HXDLIN( 161)				if (::hx::IsNull( b->b )) {
HXLINE( 161)					b->b = ::Array_obj< ::String >::fromData( _hx_array_data_00b75aa9_20,1);
            				}
            				else {
HXLINE( 161)					b->b->push(HX_("\"",22,00,00,00));
            				}
            			}
HXLINE( 162)			{
HXLINE( 162)				if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 162)					b->flush();
            				}
HXDLIN( 162)				if (::hx::IsNull( b->b )) {
HXLINE( 162)					b->b = ::Array_obj< ::String >::fromData( _hx_array_data_00b75aa9_21,1);
            				}
            				else {
HXLINE( 162)					b->b->push(HX_("\r\n",5d,0b,00,00));
            				}
            			}
HXLINE( 163)			{
HXLINE( 163)				::String x2 = ( (::String)((((HX_("Content-Type: ",f4,2b,e6,1d) + this->file->__Field(HX_("mimeType",8e,56,09,5d),::hx::paccDynamic)) + HX_("\r\n",5d,0b,00,00)) + HX_("\r\n",5d,0b,00,00))) );
HXDLIN( 163)				if (::hx::IsNotNull( b->charBuf )) {
HXLINE( 163)					b->flush();
            				}
HXDLIN( 163)				if (::hx::IsNull( b->b )) {
HXLINE( 163)					b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            				}
            				else {
HXLINE( 163)					::Array< ::String > b1 = b->b;
HXDLIN( 163)					b1->push(::Std_obj::string(x2));
            				}
            			}
HXLINE( 164)			uri = b->toString();
            		}
            		else {
HXLINE( 166)			int _g = 0;
HXDLIN( 166)			::Array< ::Dynamic> _g1 = this->params;
HXDLIN( 166)			while((_g < _g1->length)){
HXLINE( 166)				 ::Dynamic p = _g1->__get(_g);
HXDLIN( 166)				_g = (_g + 1);
HXLINE( 167)				if (::hx::IsNull( uri )) {
HXLINE( 168)					uri = HX_("",00,00,00,00);
            				}
            				else {
HXLINE( 170)					uri = (uri + HX_("&",26,00,00,00));
            				}
HXLINE( 171)				::String uri1 = (::StringTools_obj::urlEncode(( (::String)(p->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) )) + HX_("=",3d,00,00,00));
HXDLIN( 171)				uri = (uri + (uri1 + ::StringTools_obj::urlEncode(( (::String)((HX_("",00,00,00,00) + p->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic))) ))));
            			}
            		}
HXLINE( 175)		 ::haxe::io::BytesOutput b =  ::haxe::io::BytesOutput_obj::__alloc( HX_CTX );
HXLINE( 176)		if (::hx::IsNotNull( method )) {
HXLINE( 177)			b->writeString(method,null());
HXLINE( 178)			b->writeString(HX_(" ",20,00,00,00),null());
            		}
            		else {
HXLINE( 179)			if (post) {
HXLINE( 180)				b->writeString(HX_("POST ",c0,87,85,44),null());
            			}
            			else {
HXLINE( 182)				b->writeString(HX_("GET ",ea,ca,22,2f),null());
            			}
            		}
HXLINE( 184)		if (::hx::IsNotNull( ::sys::Http_obj::PROXY )) {
HXLINE( 185)			b->writeString(HX_("http://",52,75,cd,5a),null());
HXLINE( 186)			b->writeString(host,null());
HXLINE( 187)			if (::hx::IsNotEq( port,80 )) {
HXLINE( 188)				b->writeString(HX_(":",3a,00,00,00),null());
HXLINE( 189)				b->writeString((HX_("",00,00,00,00) + port),null());
            			}
            		}
HXLINE( 192)		b->writeString(request,null());
HXLINE( 194)		bool _hx_tmp;
HXDLIN( 194)		if (!(post)) {
HXLINE( 194)			_hx_tmp = ::hx::IsNotNull( uri );
            		}
            		else {
HXLINE( 194)			_hx_tmp = false;
            		}
HXDLIN( 194)		if (_hx_tmp) {
HXLINE( 195)			if ((request.indexOf(HX_("?",3f,00,00,00),0) >= 0)) {
HXLINE( 196)				b->writeString(HX_("&",26,00,00,00),null());
            			}
            			else {
HXLINE( 198)				b->writeString(HX_("?",3f,00,00,00),null());
            			}
HXLINE( 199)			b->writeString(uri,null());
            		}
HXLINE( 201)		b->writeString(((HX_(" HTTP/1.1\r\nHost: ",d8,a9,d9,24) + host) + HX_("\r\n",5d,0b,00,00)),null());
HXLINE( 202)		if (::hx::IsNotNull( this->postData )) {
HXLINE( 203)			this->postBytes = ::haxe::io::Bytes_obj::ofString(this->postData,null());
HXLINE( 204)			this->postData = null();
            		}
HXLINE( 206)		if (::hx::IsNotNull( this->postBytes )) {
HXLINE( 207)			b->writeString(((HX_("Content-Length: ",20,de,22,7c) + this->postBytes->length) + HX_("\r\n",5d,0b,00,00)),null());
            		}
            		else {
HXLINE( 208)			bool _hx_tmp;
HXDLIN( 208)			if (post) {
HXLINE( 208)				_hx_tmp = ::hx::IsNotNull( uri );
            			}
            			else {
HXLINE( 208)				_hx_tmp = false;
            			}
HXDLIN( 208)			if (_hx_tmp) {
HXLINE( 209)				bool _hx_tmp;
HXDLIN( 209)				if (!(multipart)) {
            					HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            					bool _hx_run( ::Dynamic h){
            						HX_GC_STACKFRAME(&_hx_pos_4de4efe70e9aaf52_209_customRequest)
HXLINE( 209)						return ::hx::IsEq( h->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic),HX_("Content-Type",ce,69,5d,3c) );
            					}
            					HX_END_LOCAL_FUNC1(return)

HXLINE( 209)					_hx_tmp = !(::Lambda_obj::exists(this->headers, ::Dynamic(new _hx_Closure_0())));
            				}
            				else {
HXLINE( 209)					_hx_tmp = true;
            				}
HXDLIN( 209)				if (_hx_tmp) {
HXLINE( 210)					b->writeString(HX_("Content-Type: ",f4,2b,e6,1d),null());
HXLINE( 211)					if (multipart) {
HXLINE( 212)						b->writeString(HX_("multipart/form-data",f0,f8,88,db),null());
HXLINE( 213)						b->writeString(HX_("; boundary=",ee,f7,f2,1a),null());
HXLINE( 214)						b->writeString(boundary,null());
            					}
            					else {
HXLINE( 216)						b->writeString(HX_("application/x-www-form-urlencoded",9e,61,91,fa),null());
            					}
HXLINE( 217)					b->writeString(HX_("\r\n",5d,0b,00,00),null());
            				}
HXLINE( 219)				if (multipart) {
HXLINE( 220)					b->writeString(( (::String)(((HX_("Content-Length: ",20,de,22,7c) + (((uri.length + this->file->__Field(HX_("size",c1,a0,53,4c),::hx::paccDynamic)) + boundary.length) + 6)) + HX_("\r\n",5d,0b,00,00))) ),null());
            				}
            				else {
HXLINE( 222)					b->writeString(((HX_("Content-Length: ",20,de,22,7c) + uri.length) + HX_("\r\n",5d,0b,00,00)),null());
            				}
            			}
            		}
HXLINE( 224)		b->writeString(HX_("Connection: close\r\n",31,73,d3,b4),null());
HXLINE( 225)		{
HXLINE( 225)			int _g = 0;
HXDLIN( 225)			::Array< ::Dynamic> _g1 = this->headers;
HXDLIN( 225)			while((_g < _g1->length)){
HXLINE( 225)				 ::Dynamic h = _g1->__get(_g);
HXDLIN( 225)				_g = (_g + 1);
HXLINE( 226)				b->writeString(( (::String)(h->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ),null());
HXLINE( 227)				b->writeString(HX_(": ",a6,32,00,00),null());
HXLINE( 228)				b->writeString(( (::String)(h->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic)) ),null());
HXLINE( 229)				b->writeString(HX_("\r\n",5d,0b,00,00),null());
            			}
            		}
HXLINE( 231)		b->writeString(HX_("\r\n",5d,0b,00,00),null());
HXLINE( 232)		if (::hx::IsNotNull( this->postBytes )) {
HXLINE( 233)			b->writeFullBytes(this->postBytes,0,this->postBytes->length);
            		}
            		else {
HXLINE( 234)			bool _hx_tmp;
HXDLIN( 234)			if (post) {
HXLINE( 234)				_hx_tmp = ::hx::IsNotNull( uri );
            			}
            			else {
HXLINE( 234)				_hx_tmp = false;
            			}
HXDLIN( 234)			if (_hx_tmp) {
HXLINE( 235)				b->writeString(uri,null());
            			}
            		}
HXLINE( 236)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 237)			if (::hx::IsNotNull( ::sys::Http_obj::PROXY )) {
HXLINE( 238)				sock->connect( ::sys::net::Host_obj::__alloc( HX_CTX ,( (::String)(::sys::Http_obj::PROXY->__Field(HX_("host",68,cf,12,45),::hx::paccDynamic)) )),( (int)(::sys::Http_obj::PROXY->__Field(HX_("port",81,83,5c,4a),::hx::paccDynamic)) ));
            			}
            			else {
HXLINE( 240)				sock->connect( ::sys::net::Host_obj::__alloc( HX_CTX ,host),( (int)(port) ));
            			}
HXLINE( 241)			if (multipart) {
HXLINE( 242)				this->writeBody(b,( ( ::haxe::io::Input)(this->file->__Field(HX_("io",e6,5b,00,00),::hx::paccDynamic)) ),( (int)(this->file->__Field(HX_("size",c1,a0,53,4c),::hx::paccDynamic)) ),boundary,sock);
            			}
            			else {
HXLINE( 244)				this->writeBody(b,null(),0,null(),sock);
            			}
HXLINE( 245)			this->readHttpResponse(api,sock);
HXLINE( 246)			sock->close();
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 247)				{
HXLINE( 247)					null();
            				}
HXDLIN( 247)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXDLIN( 247)				{
HXLINE( 248)					try {
            						HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 249)						sock->close();
            					} catch( ::Dynamic _hx_e) {
            						if (_hx_e.IsClass<  ::Dynamic >() ){
            							HX_STACK_BEGIN_CATCH
            							 ::Dynamic _g = _hx_e;
            						}
            						else {
            							HX_STACK_DO_THROW(_hx_e);
            						}
            					}
HXLINE( 251)					 ::Dynamic _hx_tmp = this->onError;
HXDLIN( 251)					_hx_tmp(::Std_obj::string(e));
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Http_obj,customRequest,(void))

void Http_obj::writeBody( ::haxe::io::BytesOutput body, ::haxe::io::Input fileInput,int fileSize,::String boundary, ::sys::net::Socket sock){
            	HX_STACKFRAME(&_hx_pos_4de4efe70e9aaf52_255_writeBody)
HXLINE( 256)		if (::hx::IsNotNull( body )) {
HXLINE( 257)			 ::haxe::io::Bytes bytes = body->getBytes();
HXLINE( 258)			sock->output->writeFullBytes(bytes,0,bytes->length);
            		}
HXLINE( 260)		if (::hx::IsNotNull( boundary )) {
HXLINE( 261)			int bufsize = 4096;
HXLINE( 262)			 ::haxe::io::Bytes buf = ::haxe::io::Bytes_obj::alloc(bufsize);
HXLINE( 263)			while((fileSize > 0)){
HXLINE( 264)				int size;
HXDLIN( 264)				if ((fileSize > bufsize)) {
HXLINE( 264)					size = bufsize;
            				}
            				else {
HXLINE( 264)					size = fileSize;
            				}
HXLINE( 265)				int len = 0;
HXLINE( 266)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 267)					len = fileInput->readBytes(buf,0,size);
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 268)						{
HXLINE( 268)							null();
            						}
HXLINE( 266)						if (::Std_obj::isOfType(::haxe::Exception_obj::caught(_g)->unwrap(),::hx::ClassOf< ::haxe::io::Eof >())) {
HXLINE( 269)							goto _hx_goto_23;
            						}
            						else {
HXLINE( 266)							HX_STACK_DO_THROW(_g);
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
HXLINE( 270)				sock->output->writeFullBytes(buf,0,len);
HXLINE( 271)				fileSize = (fileSize - len);
            			}
            			_hx_goto_23:;
HXLINE( 273)			sock->output->writeString(HX_("\r\n",5d,0b,00,00),null());
HXLINE( 274)			sock->output->writeString(HX_("--",60,27,00,00),null());
HXLINE( 275)			sock->output->writeString(boundary,null());
HXLINE( 276)			sock->output->writeString(HX_("--",60,27,00,00),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(Http_obj,writeBody,(void))

void Http_obj::readHttpResponse( ::haxe::io::Output api, ::sys::net::Socket sock){
            	HX_GC_STACKFRAME(&_hx_pos_4de4efe70e9aaf52_280_readHttpResponse)
HXLINE( 282)		 ::haxe::io::BytesBuffer b =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
HXLINE( 283)		int k = 4;
HXLINE( 284)		 ::haxe::io::Bytes s = ::haxe::io::Bytes_obj::alloc(4);
HXLINE( 285)		sock->setTimeout(this->cnxTimeout);
HXLINE( 286)		while(true){
HXLINE( 287)			int p = sock->input->readBytes(s,0,k);
HXLINE( 288)			while((p != k)){
HXLINE( 289)				p = (p + sock->input->readBytes(s,p,(k - p)));
            			}
HXLINE( 290)			{
HXLINE( 290)				bool _hx_tmp;
HXDLIN( 290)				if ((k >= 0)) {
HXLINE( 290)					_hx_tmp = (k > s->length);
            				}
            				else {
HXLINE( 290)					_hx_tmp = true;
            				}
HXDLIN( 290)				if (_hx_tmp) {
HXLINE( 290)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            				}
HXDLIN( 290)				::Array< unsigned char > b1 = b->b;
HXDLIN( 290)				::Array< unsigned char > b2 = s->b;
HXDLIN( 290)				{
HXLINE( 290)					int _g = 0;
HXDLIN( 290)					int _g1 = k;
HXDLIN( 290)					while((_g < _g1)){
HXLINE( 290)						_g = (_g + 1);
HXDLIN( 290)						int i = (_g - 1);
HXDLIN( 290)						b->b->push(b2->__get(i));
            					}
            				}
            			}
HXLINE( 291)			switch((int)(k)){
            				case (int)1: {
HXLINE( 293)					int c = ( (int)(s->b->__get(0)) );
HXLINE( 294)					if ((c == 10)) {
HXLINE( 295)						goto _hx_goto_25;
            					}
HXLINE( 296)					if ((c == 13)) {
HXLINE( 297)						k = 3;
            					}
            					else {
HXLINE( 299)						k = 4;
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 301)					int c = ( (int)(s->b->__get(1)) );
HXLINE( 302)					if ((c == 10)) {
HXLINE( 303)						if ((s->b->__get(0) == 13)) {
HXLINE( 304)							goto _hx_goto_25;
            						}
HXLINE( 305)						k = 4;
            					}
            					else {
HXLINE( 306)						if ((c == 13)) {
HXLINE( 307)							k = 3;
            						}
            						else {
HXLINE( 309)							k = 4;
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 311)					int c = ( (int)(s->b->__get(2)) );
HXLINE( 312)					if ((c == 10)) {
HXLINE( 313)						if ((s->b->__get(1) != 13)) {
HXLINE( 314)							k = 4;
            						}
            						else {
HXLINE( 315)							if ((s->b->__get(0) != 10)) {
HXLINE( 316)								k = 2;
            							}
            							else {
HXLINE( 318)								goto _hx_goto_25;
            							}
            						}
            					}
            					else {
HXLINE( 319)						if ((c == 13)) {
HXLINE( 320)							bool _hx_tmp;
HXDLIN( 320)							if ((s->b->__get(1) == 10)) {
HXLINE( 320)								_hx_tmp = (s->b->__get(0) != 13);
            							}
            							else {
HXLINE( 320)								_hx_tmp = true;
            							}
HXDLIN( 320)							if (_hx_tmp) {
HXLINE( 321)								k = 1;
            							}
            							else {
HXLINE( 323)								k = 3;
            							}
            						}
            						else {
HXLINE( 325)							k = 4;
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 327)					int c = ( (int)(s->b->__get(3)) );
HXLINE( 328)					if ((c == 10)) {
HXLINE( 329)						if ((s->b->__get(2) != 13)) {
HXLINE( 330)							continue;
            						}
            						else {
HXLINE( 331)							bool _hx_tmp;
HXDLIN( 331)							if ((s->b->__get(1) == 10)) {
HXLINE( 331)								_hx_tmp = (s->b->__get(0) != 13);
            							}
            							else {
HXLINE( 331)								_hx_tmp = true;
            							}
HXDLIN( 331)							if (_hx_tmp) {
HXLINE( 332)								k = 2;
            							}
            							else {
HXLINE( 334)								goto _hx_goto_25;
            							}
            						}
            					}
            					else {
HXLINE( 335)						if ((c == 13)) {
HXLINE( 336)							bool _hx_tmp;
HXDLIN( 336)							if ((s->b->__get(2) == 10)) {
HXLINE( 336)								_hx_tmp = (s->b->__get(1) != 13);
            							}
            							else {
HXLINE( 336)								_hx_tmp = true;
            							}
HXDLIN( 336)							if (_hx_tmp) {
HXLINE( 337)								k = 3;
            							}
            							else {
HXLINE( 339)								k = 1;
            							}
            						}
            					}
            				}
            				break;
            			}
            		}
            		_hx_goto_25:;
HXLINE( 346)		::Array< ::String > headers = b->getBytes()->toString().split(HX_("\r\n",5d,0b,00,00));
HXLINE( 348)		::String response = ( (::String)(headers->shift()) );
HXLINE( 349)		::Array< ::String > rp = response.split(HX_(" ",20,00,00,00));
HXLINE( 350)		 ::Dynamic status = ::Std_obj::parseInt(rp->__get(1));
HXLINE( 351)		bool _hx_tmp;
HXDLIN( 351)		if (::hx::IsNotEq( status,0 )) {
HXLINE( 351)			_hx_tmp = ::hx::IsNull( status );
            		}
            		else {
HXLINE( 351)			_hx_tmp = true;
            		}
HXDLIN( 351)		if (_hx_tmp) {
HXLINE( 352)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Response status error",39,25,42,e1)));
            		}
HXLINE( 355)		headers->pop();
HXLINE( 356)		headers->pop();
HXLINE( 357)		this->responseHeaders =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 358)		 ::Dynamic size = null();
HXLINE( 359)		bool chunked = false;
HXLINE( 360)		{
HXLINE( 360)			int _g = 0;
HXDLIN( 360)			while((_g < headers->length)){
HXLINE( 360)				::String hline = headers->__get(_g);
HXDLIN( 360)				_g = (_g + 1);
HXLINE( 361)				::Array< ::String > a = hline.split(HX_(": ",a6,32,00,00));
HXLINE( 362)				::String hname = ( (::String)(a->shift()) );
HXLINE( 363)				::String hval;
HXDLIN( 363)				if ((a->length == 1)) {
HXLINE( 363)					hval = a->__get(0);
            				}
            				else {
HXLINE( 363)					hval = a->join(HX_(": ",a6,32,00,00));
            				}
HXLINE( 364)				hval = ::StringTools_obj::ltrim(::StringTools_obj::rtrim(hval));
HXLINE( 365)				this->responseHeaders->set(hname,hval);
HXLINE( 366)				::String _hx_switch_0 = hname.toLowerCase();
            				if (  (_hx_switch_0==HX_("content-length",ba,f0,cc,86)) ){
HXLINE( 368)					size = ::Std_obj::parseInt(hval);
HXDLIN( 368)					goto _hx_goto_29;
            				}
            				if (  (_hx_switch_0==HX_("transfer-encoding",75,95,2e,69)) ){
HXLINE( 370)					chunked = (hval.toLowerCase() == HX_("chunked",0c,54,d3,50));
HXDLIN( 370)					goto _hx_goto_29;
            				}
            				_hx_goto_29:;
            			}
            		}
HXLINE( 374)		this->onStatus(status);
HXLINE( 376)		 ::EReg chunk_re =  ::EReg_obj::__alloc( HX_CTX ,HX_("^([0-9A-Fa-f]+)[ ]*\r\n",df,97,ed,19),HX_("m",6d,00,00,00));
HXLINE( 377)		this->chunk_size = null();
HXLINE( 378)		this->chunk_buf = null();
HXLINE( 380)		int bufsize = 1024;
HXLINE( 381)		 ::haxe::io::Bytes buf = ::haxe::io::Bytes_obj::alloc(bufsize);
HXLINE( 382)		if (chunked) {
HXLINE( 383)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 384)				while(true){
HXLINE( 385)					int len = sock->input->readBytes(buf,0,bufsize);
HXLINE( 386)					if (!(this->readChunk(chunk_re,api,buf,len))) {
HXLINE( 387)						goto _hx_goto_30;
            					}
            				}
            				_hx_goto_30:;
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 389)					{
HXLINE( 389)						null();
            					}
HXLINE( 383)					if (::Std_obj::isOfType(::haxe::Exception_obj::caught(_g)->unwrap(),::hx::ClassOf< ::haxe::io::Eof >())) {
HXLINE( 390)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Transfer aborted",3a,e2,d2,6a)));
            					}
            					else {
HXLINE( 383)						HX_STACK_DO_THROW(_g);
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            		else {
HXLINE( 392)			if (::hx::IsNull( size )) {
HXLINE( 393)				if (!(this->noShutdown)) {
HXLINE( 394)					sock->shutdown(false,true);
            				}
HXLINE( 395)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 396)					while(true){
HXLINE( 397)						int len = sock->input->readBytes(buf,0,bufsize);
HXLINE( 398)						if ((len == 0)) {
HXLINE( 399)							goto _hx_goto_31;
            						}
HXLINE( 400)						api->writeBytes(buf,0,len);
            					}
            					_hx_goto_31:;
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 402)						{
HXLINE( 402)							null();
            						}
HXLINE( 395)						if (!(::Std_obj::isOfType(::haxe::Exception_obj::caught(_g)->unwrap(),::hx::ClassOf< ::haxe::io::Eof >()))) {
HXLINE( 395)							HX_STACK_DO_THROW(_g);
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
            			else {
HXLINE( 404)				api->prepare(( (int)(size) ));
HXLINE( 405)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 406)					while(::hx::IsGreater( size,0 )){
HXLINE( 407)						int len;
HXDLIN( 407)						if (::hx::IsGreater( size,bufsize )) {
HXLINE( 407)							len = bufsize;
            						}
            						else {
HXLINE( 407)							len = ( (int)(size) );
            						}
HXDLIN( 407)						int len1 = sock->input->readBytes(buf,0,len);
HXLINE( 408)						api->writeBytes(buf,0,len1);
HXLINE( 409)						size = (size - len1);
            					}
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 411)						{
HXLINE( 411)							null();
            						}
HXLINE( 405)						if (::Std_obj::isOfType(::haxe::Exception_obj::caught(_g)->unwrap(),::hx::ClassOf< ::haxe::io::Eof >())) {
HXLINE( 412)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Transfer aborted",3a,e2,d2,6a)));
            						}
            						else {
HXLINE( 405)							HX_STACK_DO_THROW(_g);
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
            		}
HXLINE( 415)		bool _hx_tmp1;
HXDLIN( 415)		if (chunked) {
HXLINE( 415)			if (::hx::IsNull( this->chunk_size )) {
HXLINE( 415)				_hx_tmp1 = ::hx::IsNotNull( this->chunk_buf );
            			}
            			else {
HXLINE( 415)				_hx_tmp1 = true;
            			}
            		}
            		else {
HXLINE( 415)			_hx_tmp1 = false;
            		}
HXDLIN( 415)		if (_hx_tmp1) {
HXLINE( 416)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid chunk",64,90,fb,29)));
            		}
HXLINE( 417)		bool _hx_tmp2;
HXDLIN( 417)		if (::hx::IsGreaterEq( status,200 )) {
HXLINE( 417)			_hx_tmp2 = ::hx::IsGreaterEq( status,400 );
            		}
            		else {
HXLINE( 417)			_hx_tmp2 = true;
            		}
HXDLIN( 417)		if (_hx_tmp2) {
HXLINE( 418)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Http Error #",33,85,a5,2b) + status)));
            		}
HXLINE( 419)		api->close();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Http_obj,readHttpResponse,(void))

bool Http_obj::readChunk( ::EReg chunk_re, ::haxe::io::Output api, ::haxe::io::Bytes buf,int len){
            	HX_GC_STACKFRAME(&_hx_pos_4de4efe70e9aaf52_422_readChunk)
HXLINE( 423)		if (::hx::IsNull( this->chunk_size )) {
HXLINE( 424)			if (::hx::IsNotNull( this->chunk_buf )) {
HXLINE( 425)				 ::haxe::io::BytesBuffer b =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
HXLINE( 426)				{
HXLINE( 426)					 ::haxe::io::Bytes src = this->chunk_buf;
HXDLIN( 426)					::Array< unsigned char > b1 = b->b;
HXDLIN( 426)					::Array< unsigned char > b2 = src->b;
HXDLIN( 426)					{
HXLINE( 426)						int _g = 0;
HXDLIN( 426)						int _g1 = src->length;
HXDLIN( 426)						while((_g < _g1)){
HXLINE( 426)							_g = (_g + 1);
HXDLIN( 426)							int i = (_g - 1);
HXDLIN( 426)							b->b->push(b2->__get(i));
            						}
            					}
            				}
HXLINE( 427)				{
HXLINE( 427)					bool _hx_tmp;
HXDLIN( 427)					if ((len >= 0)) {
HXLINE( 427)						_hx_tmp = (len > buf->length);
            					}
            					else {
HXLINE( 427)						_hx_tmp = true;
            					}
HXDLIN( 427)					if (_hx_tmp) {
HXLINE( 427)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            					}
HXDLIN( 427)					::Array< unsigned char > b11 = b->b;
HXDLIN( 427)					::Array< unsigned char > b21 = buf->b;
HXDLIN( 427)					{
HXLINE( 427)						int _g2 = 0;
HXDLIN( 427)						int _g3 = len;
HXDLIN( 427)						while((_g2 < _g3)){
HXLINE( 427)							_g2 = (_g2 + 1);
HXDLIN( 427)							int i = (_g2 - 1);
HXDLIN( 427)							b->b->push(b21->__get(i));
            						}
            					}
            				}
HXLINE( 428)				buf = b->getBytes();
HXLINE( 429)				len = (len + this->chunk_buf->length);
HXLINE( 430)				this->chunk_buf = null();
            			}
HXLINE( 435)			if (chunk_re->match(buf->toString())) {
HXLINE( 437)				 ::Dynamic p = chunk_re->matchedPos();
HXLINE( 438)				if (::hx::IsLessEq( p->__Field(HX_("len",d5,4b,52,00),::hx::paccDynamic),len )) {
HXLINE( 439)					::String cstr = chunk_re->matched(1);
HXLINE( 440)					this->chunk_size = ::Std_obj::parseInt((HX_("0x",48,2a,00,00) + cstr));
HXLINE( 441)					if (::hx::IsEq( this->chunk_size,0 )) {
HXLINE( 442)						this->chunk_size = null();
HXLINE( 443)						this->chunk_buf = null();
HXLINE( 444)						return false;
            					}
HXLINE( 446)					len = (len - ( (int)(p->__Field(HX_("len",d5,4b,52,00),::hx::paccDynamic)) ));
HXLINE( 447)					return this->readChunk(chunk_re,api,buf->sub(( (int)(p->__Field(HX_("len",d5,4b,52,00),::hx::paccDynamic)) ),len),len);
            				}
            			}
HXLINE( 451)			if ((len > 10)) {
HXLINE( 452)				this->onError(HX_("Invalid chunk",64,90,fb,29));
HXLINE( 453)				return false;
            			}
HXLINE( 455)			this->chunk_buf = buf->sub(0,len);
HXLINE( 456)			return true;
            		}
HXLINE( 459)		if (::hx::IsGreater( this->chunk_size,len )) {
HXLINE( 460)			 ::sys::Http _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 460)			_hx_tmp->chunk_size = (_hx_tmp->chunk_size - len);
HXLINE( 461)			api->writeBytes(buf,0,len);
HXLINE( 462)			return true;
            		}
HXLINE( 464)		int end = (this->chunk_size + 2);
HXLINE( 465)		if ((len >= end)) {
HXLINE( 466)			if (::hx::IsGreater( this->chunk_size,0 )) {
HXLINE( 467)				api->writeBytes(buf,0,( (int)(this->chunk_size) ));
            			}
HXLINE( 468)			len = (len - end);
HXLINE( 469)			this->chunk_size = null();
HXLINE( 470)			if ((len == 0)) {
HXLINE( 471)				return true;
            			}
HXLINE( 472)			return this->readChunk(chunk_re,api,buf->sub(end,len),len);
            		}
HXLINE( 474)		if (::hx::IsGreater( this->chunk_size,0 )) {
HXLINE( 475)			api->writeBytes(buf,0,( (int)(this->chunk_size) ));
            		}
HXLINE( 476)		 ::sys::Http _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 476)		_hx_tmp->chunk_size = (_hx_tmp->chunk_size - len);
HXLINE( 477)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Http_obj,readChunk,return )

 ::Dynamic Http_obj::PROXY;


::hx::ObjectPtr< Http_obj > Http_obj::__new(::String url) {
	::hx::ObjectPtr< Http_obj > __this = new Http_obj();
	__this->__construct(url);
	return __this;
}

::hx::ObjectPtr< Http_obj > Http_obj::__alloc(::hx::Ctx *_hx_ctx,::String url) {
	Http_obj *__this = (Http_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Http_obj), true, "sys.Http"));
	*(void **)__this = Http_obj::_hx_vtable;
	haxe::http::HttpBase_obj::__alloc_dynamic_functions(_hx_ctx,__this);
	__this->__construct(url);
	return __this;
}

Http_obj::Http_obj()
{
}

void Http_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Http);
	HX_MARK_MEMBER_NAME(noShutdown,"noShutdown");
	HX_MARK_MEMBER_NAME(cnxTimeout,"cnxTimeout");
	HX_MARK_MEMBER_NAME(responseHeaders,"responseHeaders");
	HX_MARK_MEMBER_NAME(chunk_size,"chunk_size");
	HX_MARK_MEMBER_NAME(chunk_buf,"chunk_buf");
	HX_MARK_MEMBER_NAME(file,"file");
	 ::haxe::http::HttpBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Http_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(noShutdown,"noShutdown");
	HX_VISIT_MEMBER_NAME(cnxTimeout,"cnxTimeout");
	HX_VISIT_MEMBER_NAME(responseHeaders,"responseHeaders");
	HX_VISIT_MEMBER_NAME(chunk_size,"chunk_size");
	HX_VISIT_MEMBER_NAME(chunk_buf,"chunk_buf");
	HX_VISIT_MEMBER_NAME(file,"file");
	 ::haxe::http::HttpBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Http_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { return ::hx::Val( file ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"request") ) { return ::hx::Val( request_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"chunk_buf") ) { return ::hx::Val( chunk_buf ); }
		if (HX_FIELD_EQ(inName,"writeBody") ) { return ::hx::Val( writeBody_dyn() ); }
		if (HX_FIELD_EQ(inName,"readChunk") ) { return ::hx::Val( readChunk_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"noShutdown") ) { return ::hx::Val( noShutdown ); }
		if (HX_FIELD_EQ(inName,"cnxTimeout") ) { return ::hx::Val( cnxTimeout ); }
		if (HX_FIELD_EQ(inName,"chunk_size") ) { return ::hx::Val( chunk_size ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"customRequest") ) { return ::hx::Val( customRequest_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"responseHeaders") ) { return ::hx::Val( responseHeaders ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"readHttpResponse") ) { return ::hx::Val( readHttpResponse_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Http_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"PROXY") ) { outValue = ( PROXY ); return true; }
	}
	return false;
}

::hx::Val Http_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { file=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"chunk_buf") ) { chunk_buf=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"noShutdown") ) { noShutdown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cnxTimeout") ) { cnxTimeout=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"chunk_size") ) { chunk_size=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"responseHeaders") ) { responseHeaders=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Http_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"PROXY") ) { PROXY=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void Http_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("noShutdown",f7,c1,69,5b));
	outFields->push(HX_("cnxTimeout",b4,3a,75,76));
	outFields->push(HX_("responseHeaders",c5,0d,ca,43));
	outFields->push(HX_("chunk_size",13,8b,ba,d8));
	outFields->push(HX_("chunk_buf",21,09,61,a7));
	outFields->push(HX_("file",7c,ce,bb,43));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Http_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Http_obj,noShutdown),HX_("noShutdown",f7,c1,69,5b)},
	{::hx::fsFloat,(int)offsetof(Http_obj,cnxTimeout),HX_("cnxTimeout",b4,3a,75,76)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Http_obj,responseHeaders),HX_("responseHeaders",c5,0d,ca,43)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Http_obj,chunk_size),HX_("chunk_size",13,8b,ba,d8)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(Http_obj,chunk_buf),HX_("chunk_buf",21,09,61,a7)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Http_obj,file),HX_("file",7c,ce,bb,43)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Http_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Http_obj::PROXY,HX_("PROXY",4e,26,7e,46)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Http_obj_sMemberFields[] = {
	HX_("noShutdown",f7,c1,69,5b),
	HX_("cnxTimeout",b4,3a,75,76),
	HX_("responseHeaders",c5,0d,ca,43),
	HX_("chunk_size",13,8b,ba,d8),
	HX_("chunk_buf",21,09,61,a7),
	HX_("file",7c,ce,bb,43),
	HX_("request",4f,df,84,44),
	HX_("customRequest",9e,47,93,ee),
	HX_("writeBody",21,6f,cf,49),
	HX_("readHttpResponse",9f,0e,50,47),
	HX_("readChunk",37,13,aa,16),
	::String(null()) };

static void Http_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Http_obj::PROXY,"PROXY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Http_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Http_obj::PROXY,"PROXY");
};

#endif

::hx::Class Http_obj::__mClass;

static ::String Http_obj_sStaticFields[] = {
	HX_("PROXY",4e,26,7e,46),
	::String(null())
};

void Http_obj::__register()
{
	Http_obj _hx_dummy;
	Http_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("sys.Http",a9,5a,b7,00);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Http_obj::__GetStatic;
	__mClass->mSetStaticField = &Http_obj::__SetStatic;
	__mClass->mMarkFunc = Http_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Http_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Http_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Http_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Http_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Http_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Http_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Http_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4de4efe70e9aaf52_46_boot)
HXDLIN(  46)		PROXY = null();
            	}
}

} // end namespace sys
