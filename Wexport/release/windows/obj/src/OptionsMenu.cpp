#include <hxcpp.h>

#ifndef INCLUDED_AccuracyDOption
#include <AccuracyDOption.h>
#endif
#ifndef INCLUDED_AccuracyOption
#include <AccuracyOption.h>
#endif
#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_BotPlay
#include <BotPlay.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CpuStrums
#include <CpuStrums.h>
#endif
#ifndef INCLUDED_CustomizeGameplay
#include <CustomizeGameplay.h>
#endif
#ifndef INCLUDED_DFJKOption
#include <DFJKOption.h>
#endif
#ifndef INCLUDED_DistractionsAndEffectsOption
#include <DistractionsAndEffectsOption.h>
#endif
#ifndef INCLUDED_DownscrollOption
#include <DownscrollOption.h>
#endif
#ifndef INCLUDED_FPSCapOption
#include <FPSCapOption.h>
#endif
#ifndef INCLUDED_FPSOption
#include <FPSOption.h>
#endif
#ifndef INCLUDED_FlashingLightsOption
#include <FlashingLightsOption.h>
#endif
#ifndef INCLUDED_GhostTapOption
#include <GhostTapOption.h>
#endif
#ifndef INCLUDED_HelperFunctions
#include <HelperFunctions.h>
#endif
#ifndef INCLUDED_Judgement
#include <Judgement.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_NPSDisplayOption
#include <NPSDisplayOption.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_OptionCategory
#include <OptionCategory.h>
#endif
#ifndef INCLUDED_OptionsMenu
#include <OptionsMenu.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_RainbowFPSOption
#include <RainbowFPSOption.h>
#endif
#ifndef INCLUDED_ReplayOption
#include <ReplayOption.h>
#endif
#ifndef INCLUDED_ResetButtonOption
#include <ResetButtonOption.h>
#endif
#ifndef INCLUDED_ScrollSpeedOption
#include <ScrollSpeedOption.h>
#endif
#ifndef INCLUDED_SongPositionOption
#include <SongPositionOption.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_WatermarkOption
#include <WatermarkOption.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b7c1b117f8362d86_19_new,"OptionsMenu","new",0x0f1d276f,"OptionsMenu.new","OptionsMenu.hx",19,0x7ae6dae1)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c1b117f8362d86_75_create,"OptionsMenu","create",0x9c60a34d,"OptionsMenu.create","OptionsMenu.hx",75,0x7ae6dae1)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c1b117f8362d86_121_update,"OptionsMenu","update",0xa756c25a,"OptionsMenu.update","OptionsMenu.hx",121,0x7ae6dae1)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c1b117f8362d86_242_changeSelection,"OptionsMenu","changeSelection",0x61ecca4b,"OptionsMenu.changeSelection","OptionsMenu.hx",242,0x7ae6dae1)

void OptionsMenu_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_GC_STACKFRAME(&_hx_pos_b7c1b117f8362d86_19_new)
HXLINE( 239)		this->isSettingControl = false;
HXLINE( 117)		this->isCat = false;
HXLINE(  68)		this->currentDescription = HX_("",00,00,00,00);
HXLINE(  66)		this->acceptInput = true;
HXLINE(  28)		 ::DFJKOption _hx_tmp =  ::DFJKOption_obj::__alloc( HX_CTX ,::PlayerSettings_obj::player1->controls);
HXLINE(  29)		 ::DownscrollOption _hx_tmp1 =  ::DownscrollOption_obj::__alloc( HX_CTX ,HX_("Change the layout of the strumline.",32,91,e6,a0));
HXLINE(  30)		 ::GhostTapOption _hx_tmp2 =  ::GhostTapOption_obj::__alloc( HX_CTX ,HX_("Ghost Tapping is when you tap a direction and it doesn't give you a miss.",23,ec,73,95));
HXLINE(  31)		 ::Judgement _hx_tmp3 =  ::Judgement_obj::__alloc( HX_CTX ,HX_("Customize your Hit Timings (LEFT or RIGHT)",45,15,ea,ec));
HXLINE(  33)		 ::FPSCapOption _hx_tmp4 =  ::FPSCapOption_obj::__alloc( HX_CTX ,HX_("Cap your FPS",ca,e4,93,19));
HXLINE(  35)		 ::ScrollSpeedOption _hx_tmp5 =  ::ScrollSpeedOption_obj::__alloc( HX_CTX ,HX_("Change your scroll speed (1 = Chart dependent)",37,03,dc,f1));
HXLINE(  36)		 ::AccuracyDOption _hx_tmp6 =  ::AccuracyDOption_obj::__alloc( HX_CTX ,HX_("Change how accuracy is calculated. (Accurate = Simple, Complex = Milisecond Based)",8a,fa,fc,fc));
HXLINE(  37)		 ::ResetButtonOption _hx_tmp7 =  ::ResetButtonOption_obj::__alloc( HX_CTX ,HX_("Toggle pressing R to gameover.",26,82,70,70));
HXLINE(  27)		 ::OptionCategory _hx_tmp8 =  ::OptionCategory_obj::__alloc( HX_CTX ,HX_("Gameplay",06,bf,58,a5),::Array_obj< ::Dynamic>::__new(9)->init(0,_hx_tmp)->init(1,_hx_tmp1)->init(2,_hx_tmp2)->init(3,_hx_tmp3)->init(4,_hx_tmp4)->init(5,_hx_tmp5)->init(6,_hx_tmp6)->init(7,_hx_tmp7)->init(8, ::CustomizeGameplay_obj::__alloc( HX_CTX ,HX_("Drag'n'Drop Gameplay Modules around to your preference",88,b2,13,61))));
HXLINE(  43)		 ::DistractionsAndEffectsOption _hx_tmp9 =  ::DistractionsAndEffectsOption_obj::__alloc( HX_CTX ,HX_("Toggle stage distractions that can hinder your gameplay.",0f,37,95,93));
HXLINE(  44)		 ::RainbowFPSOption _hx_tmp10 =  ::RainbowFPSOption_obj::__alloc( HX_CTX ,HX_("Make the FPS Counter Rainbow",3a,c0,5e,60));
HXLINE(  45)		 ::AccuracyOption _hx_tmp11 =  ::AccuracyOption_obj::__alloc( HX_CTX ,HX_("Display accuracy information.",0b,46,c5,44));
HXLINE(  46)		 ::NPSDisplayOption _hx_tmp12 =  ::NPSDisplayOption_obj::__alloc( HX_CTX ,HX_("Shows your current Notes Per Second.",0e,4d,64,b3));
HXLINE(  47)		 ::SongPositionOption _hx_tmp13 =  ::SongPositionOption_obj::__alloc( HX_CTX ,HX_("Show the songs current position (as a bar)",37,bf,46,18));
HXLINE(  41)		 ::OptionCategory _hx_tmp14 =  ::OptionCategory_obj::__alloc( HX_CTX ,HX_("Appearance",04,ca,4d,37),::Array_obj< ::Dynamic>::__new(6)->init(0,_hx_tmp9)->init(1,_hx_tmp10)->init(2,_hx_tmp11)->init(3,_hx_tmp12)->init(4,_hx_tmp13)->init(5, ::CpuStrums_obj::__alloc( HX_CTX ,HX_("CPU's strumline lights up when a note hits it.",dd,99,9c,45))));
HXLINE(  56)		 ::FPSOption _hx_tmp15 =  ::FPSOption_obj::__alloc( HX_CTX ,HX_("Toggle the FPS Counter",ea,68,c5,9e));
HXLINE(  57)		 ::ReplayOption _hx_tmp16 =  ::ReplayOption_obj::__alloc( HX_CTX ,HX_("View replays",d1,8a,98,ae));
HXLINE(  59)		 ::FlashingLightsOption _hx_tmp17 =  ::FlashingLightsOption_obj::__alloc( HX_CTX ,HX_("Toggle flashing lights that can cause epileptic seizures and strain.",c8,92,75,4d));
HXLINE(  60)		 ::WatermarkOption _hx_tmp18 =  ::WatermarkOption_obj::__alloc( HX_CTX ,HX_("Enable and disable all watermarks from the engine.",bb,b5,df,79));
HXLINE(  26)		this->options = ::Array_obj< ::Dynamic>::__new(3)->init(0,_hx_tmp8)->init(1,_hx_tmp14)->init(2, ::OptionCategory_obj::__alloc( HX_CTX ,HX_("Misc",0c,7f,35,33),::Array_obj< ::Dynamic>::__new(5)->init(0,_hx_tmp15)->init(1,_hx_tmp16)->init(2,_hx_tmp17)->init(3,_hx_tmp18)->init(4, ::BotPlay_obj::__alloc( HX_CTX ,HX_("Showcase your charts and mods with autoplay.",86,b2,aa,76)))));
HXLINE(  24)		this->curSelected = 0;
HXLINE(  19)		super::__construct(TransIn,TransOut);
            	}

Dynamic OptionsMenu_obj::__CreateEmpty() { return new OptionsMenu_obj; }

void *OptionsMenu_obj::_hx_vtable = 0;

Dynamic OptionsMenu_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OptionsMenu_obj > _hx_result = new OptionsMenu_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool OptionsMenu_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x109e893d) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x109e893d;
			} else {
				return inClassId==(int)0x23a57bae;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void OptionsMenu_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_b7c1b117f8362d86_75_create)
HXLINE(  76)		::OptionsMenu_obj::instance = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  77)		 ::flixel::FlxSprite menuBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  77)		::String library = null();
HXDLIN(  77)		 ::flixel::FlxSprite menuBG1 = menuBG->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuDesat",26,91,04,72)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  79)		menuBG1->set_color(-1412611);
HXLINE(  80)		menuBG1->setGraphicSize(::Std_obj::_hx_int((menuBG1->get_width() * ((Float)1.1))),null());
HXLINE(  81)		menuBG1->updateHitbox();
HXLINE(  82)		menuBG1->screenCenter(null());
HXLINE(  83)		menuBG1->set_antialiasing(true);
HXLINE(  84)		this->add(menuBG1);
HXLINE(  86)		this->grpControls =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  87)		this->add(this->grpControls);
HXLINE(  89)		{
HXLINE(  89)			int _g = 0;
HXDLIN(  89)			int _g1 = this->options->length;
HXDLIN(  89)			while((_g < _g1)){
HXLINE(  89)				_g = (_g + 1);
HXDLIN(  89)				int i = (_g - 1);
HXLINE(  91)				 ::Alphabet controlLabel =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->options->__get(i).StaticCast<  ::OptionCategory >()->getName(),true,false,true);
HXLINE(  92)				controlLabel->isMenuItem = true;
HXLINE(  93)				controlLabel->targetY = ( (Float)(i) );
HXLINE(  94)				this->grpControls->add(controlLabel).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE(  98)		this->currentDescription = HX_("none",b8,12,0a,49);
HXLINE( 100)		int _hx_tmp = (::flixel::FlxG_obj::height + 40);
HXDLIN( 100)		::String _hx_tmp1 = ((HX_("Offset (Left, Right, Shift for slow): ",bf,2c,df,41) + ::HelperFunctions_obj::truncateFloat(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)) ),2)) + HX_(" - Description - ",ca,32,1d,cd));
HXDLIN( 100)		::OptionsMenu_obj::versionShit =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,5,_hx_tmp,0,(_hx_tmp1 + this->currentDescription),12,null());
HXLINE( 101)		::OptionsMenu_obj::versionShit->scrollFactor->set(null(),null());
HXLINE( 102)		::OptionsMenu_obj::versionShit->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),16,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 104)		 ::flixel::FlxSprite _hx_tmp2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-30,(::flixel::FlxG_obj::height + 40),null());
HXDLIN( 104)		int _hx_tmp3 = ::Std_obj::_hx_int((::OptionsMenu_obj::versionShit->get_width() + 900));
HXDLIN( 104)		this->blackBorder = _hx_tmp2->makeGraphic(_hx_tmp3,::Std_obj::_hx_int((::OptionsMenu_obj::versionShit->get_height() + 600)),-16777216,null(),null());
HXLINE( 105)		this->blackBorder->set_alpha(((Float)0.5));
HXLINE( 107)		this->add(this->blackBorder);
HXLINE( 109)		this->add(::OptionsMenu_obj::versionShit);
HXLINE( 111)		::flixel::tweens::FlxTween_obj::tween(::OptionsMenu_obj::versionShit, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("y",79,00,00,00),(::flixel::FlxG_obj::height - 18))),2, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::elasticInOut_dyn())));
HXLINE( 112)		::flixel::tweens::FlxTween_obj::tween(this->blackBorder, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("y",79,00,00,00),(::flixel::FlxG_obj::height - 18))),2, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::elasticInOut_dyn())));
HXLINE( 114)		this->super::create();
            	}


void OptionsMenu_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_b7c1b117f8362d86_121_update)
HXLINE( 122)		this->super::update(elapsed);
HXLINE( 124)		if (this->acceptInput) {
HXLINE( 126)			bool _hx_tmp;
HXDLIN( 126)			if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 126)				_hx_tmp = !(this->isCat);
            			}
            			else {
HXLINE( 126)				_hx_tmp = false;
            			}
HXDLIN( 126)			if (_hx_tmp) {
HXLINE( 127)				 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 127)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 127)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            			else {
HXLINE( 128)				if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 130)					this->isCat = false;
HXLINE( 131)					this->grpControls->clear();
HXLINE( 132)					{
HXLINE( 132)						int _g = 0;
HXDLIN( 132)						int _g1 = this->options->length;
HXDLIN( 132)						while((_g < _g1)){
HXLINE( 132)							_g = (_g + 1);
HXDLIN( 132)							int i = (_g - 1);
HXLINE( 134)							 ::Alphabet controlLabel =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->options->__get(i).StaticCast<  ::OptionCategory >()->getName(),true,false,null());
HXLINE( 135)							controlLabel->isMenuItem = true;
HXLINE( 136)							controlLabel->targetY = ( (Float)(i) );
HXLINE( 137)							this->grpControls->add(controlLabel).StaticCast<  ::Alphabet >();
            						}
            					}
HXLINE( 140)					this->curSelected = 0;
            				}
            			}
HXLINE( 142)			if (::PlayerSettings_obj::player1->controls->_upP->check()) {
HXLINE( 143)				this->changeSelection(-1);
            			}
HXLINE( 144)			if (::PlayerSettings_obj::player1->controls->_downP->check()) {
HXLINE( 145)				this->changeSelection(1);
            			}
HXLINE( 147)			if (this->isCat) {
HXLINE( 150)				if (this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->getAccept()) {
HXLINE( 152)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 152)					if (_this->keyManager->checkStatus(16,_this->status)) {
HXLINE( 154)						 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 154)						if (_this->keyManager->checkStatus(39,_this->status)) {
HXLINE( 155)							this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->right();
            						}
HXLINE( 156)						 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 156)						if (_this1->keyManager->checkStatus(37,_this1->status)) {
HXLINE( 157)							this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->left();
            						}
            					}
            					else {
HXLINE( 161)						 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 161)						if (_this->keyManager->checkStatus(39,_this->status)) {
HXLINE( 162)							this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->right();
            						}
HXLINE( 163)						 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 163)						if (_this1->keyManager->checkStatus(37,_this1->status)) {
HXLINE( 164)							this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->left();
            						}
            					}
            				}
            				else {
HXLINE( 170)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 170)					if (_this->keyManager->checkStatus(16,_this->status)) {
HXLINE( 172)						 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 172)						if (_this->keyManager->checkStatus(39,_this->status)) {
HXLINE( 173)							 ::Dynamic fh = ::flixel::FlxG_obj::save->data;
HXDLIN( 173)							fh->__SetField(HX_("offset",93,97,3f,60),(fh->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic) + ((Float)0.1)),::hx::paccDynamic);
            						}
            						else {
HXLINE( 174)							 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 174)							if (_this->keyManager->checkStatus(37,_this->status)) {
HXLINE( 175)								 ::Dynamic fh = ::flixel::FlxG_obj::save->data;
HXDLIN( 175)								fh->__SetField(HX_("offset",93,97,3f,60),( ::Dynamic(fh->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)) - ((Float)0.1)),::hx::paccDynamic);
            							}
            						}
            					}
            					else {
HXLINE( 177)						 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 177)						if (_this->keyManager->checkStatus(39,_this->status)) {
HXLINE( 178)							 ::Dynamic fh = ::flixel::FlxG_obj::save->data;
HXDLIN( 178)							fh->__SetField(HX_("offset",93,97,3f,60),(fh->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic) + ((Float)0.1)),::hx::paccDynamic);
            						}
            						else {
HXLINE( 179)							 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 179)							if (_this->keyManager->checkStatus(37,_this->status)) {
HXLINE( 180)								 ::Dynamic fh = ::flixel::FlxG_obj::save->data;
HXDLIN( 180)								fh->__SetField(HX_("offset",93,97,3f,60),( ::Dynamic(fh->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)) - ((Float)0.1)),::hx::paccDynamic);
            							}
            						}
            					}
            				}
HXLINE( 184)				if (this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->getAccept()) {
HXLINE( 185)					 ::flixel::text::FlxText _hx_tmp = ::OptionsMenu_obj::versionShit;
HXDLIN( 185)					::String _hx_tmp1 = (this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->getValue() + HX_(" - Description - ",ca,32,1d,cd));
HXDLIN( 185)					_hx_tmp->set_text((_hx_tmp1 + this->currentDescription));
            				}
            				else {
HXLINE( 187)					 ::flixel::text::FlxText _hx_tmp = ::OptionsMenu_obj::versionShit;
HXDLIN( 187)					::String _hx_tmp1 = ((HX_("Offset (Left, Right, Shift for slow): ",bf,2c,df,41) + ::HelperFunctions_obj::truncateFloat(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)) ),2)) + HX_(" - Description - ",ca,32,1d,cd));
HXDLIN( 187)					_hx_tmp->set_text((_hx_tmp1 + this->currentDescription));
            				}
            			}
            			else {
HXLINE( 191)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 191)				if (_this->keyManager->checkStatus(16,_this->status)) {
HXLINE( 193)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 193)					if (_this->keyManager->checkStatus(39,_this->status)) {
HXLINE( 194)						 ::Dynamic fh = ::flixel::FlxG_obj::save->data;
HXDLIN( 194)						fh->__SetField(HX_("offset",93,97,3f,60),(fh->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic) + ((Float)0.1)),::hx::paccDynamic);
            					}
            					else {
HXLINE( 195)						 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 195)						if (_this->keyManager->checkStatus(37,_this->status)) {
HXLINE( 196)							 ::Dynamic fh = ::flixel::FlxG_obj::save->data;
HXDLIN( 196)							fh->__SetField(HX_("offset",93,97,3f,60),( ::Dynamic(fh->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)) - ((Float)0.1)),::hx::paccDynamic);
            						}
            					}
            				}
            				else {
HXLINE( 198)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 198)					if (_this->keyManager->checkStatus(39,_this->status)) {
HXLINE( 199)						 ::Dynamic fh = ::flixel::FlxG_obj::save->data;
HXDLIN( 199)						fh->__SetField(HX_("offset",93,97,3f,60),(fh->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic) + ((Float)0.1)),::hx::paccDynamic);
            					}
            					else {
HXLINE( 200)						 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 200)						if (_this->keyManager->checkStatus(37,_this->status)) {
HXLINE( 201)							 ::Dynamic fh = ::flixel::FlxG_obj::save->data;
HXDLIN( 201)							fh->__SetField(HX_("offset",93,97,3f,60),( ::Dynamic(fh->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)) - ((Float)0.1)),::hx::paccDynamic);
            						}
            					}
            				}
            			}
HXLINE( 205)			if (::PlayerSettings_obj::player1->controls->_reset->check()) {
HXLINE( 206)				::flixel::FlxG_obj::save->data->__SetField(HX_("offset",93,97,3f,60),0,::hx::paccDynamic);
            			}
HXLINE( 208)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 210)				if (this->isCat) {
HXLINE( 212)					if (this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->press()) {
HXLINE( 213)						this->grpControls->remove(Dynamic( this->grpControls->members->__get(this->curSelected)).StaticCast<  ::Alphabet >(),null()).StaticCast<  ::Alphabet >();
HXLINE( 214)						int ctrl = ((70 * this->curSelected) + 30);
HXDLIN( 214)						 ::Alphabet ctrl1 =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(ctrl) ),this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->getDisplay(),true,false,null());
HXLINE( 215)						ctrl1->isMenuItem = true;
HXLINE( 216)						this->grpControls->add(ctrl1).StaticCast<  ::Alphabet >();
            					}
            				}
            				else {
HXLINE( 221)					this->currentSelectedCat = this->options->__get(this->curSelected).StaticCast<  ::OptionCategory >();
HXLINE( 222)					this->isCat = true;
HXLINE( 223)					this->grpControls->clear();
HXLINE( 224)					{
HXLINE( 224)						int _g = 0;
HXDLIN( 224)						int _g1 = this->currentSelectedCat->getOptions()->length;
HXDLIN( 224)						while((_g < _g1)){
HXLINE( 224)							_g = (_g + 1);
HXDLIN( 224)							int i = (_g - 1);
HXLINE( 226)							 ::Alphabet controlLabel =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->currentSelectedCat->getOptions()->__get(i).StaticCast<  ::Option >()->getDisplay(),true,false,null());
HXLINE( 227)							controlLabel->isMenuItem = true;
HXLINE( 228)							controlLabel->targetY = ( (Float)(i) );
HXLINE( 229)							this->grpControls->add(controlLabel).StaticCast<  ::Alphabet >();
            						}
            					}
HXLINE( 232)					this->curSelected = 0;
            				}
            			}
            		}
HXLINE( 236)		::flixel::FlxG_obj::save->flush(null(),null());
            	}


void OptionsMenu_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_b7c1b117f8362d86_242_changeSelection)
HXLINE( 247)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 247)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 249)		 ::OptionsMenu _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 249)		_hx_tmp1->curSelected = (_hx_tmp1->curSelected + change);
HXLINE( 251)		if ((this->curSelected < 0)) {
HXLINE( 252)			this->curSelected = (this->grpControls->length - 1);
            		}
HXLINE( 253)		if ((this->curSelected >= this->grpControls->length)) {
HXLINE( 254)			this->curSelected = 0;
            		}
HXLINE( 256)		if (this->isCat) {
HXLINE( 257)			this->currentDescription = this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->getDescription();
            		}
            		else {
HXLINE( 259)			this->currentDescription = HX_("Please select a category",ab,e3,01,d1);
            		}
HXLINE( 260)		if (this->isCat) {
HXLINE( 262)			if (this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->getAccept()) {
HXLINE( 263)				 ::flixel::text::FlxText _hx_tmp = ::OptionsMenu_obj::versionShit;
HXDLIN( 263)				::String _hx_tmp1 = (this->currentSelectedCat->getOptions()->__get(this->curSelected).StaticCast<  ::Option >()->getValue() + HX_(" - Description - ",ca,32,1d,cd));
HXDLIN( 263)				_hx_tmp->set_text((_hx_tmp1 + this->currentDescription));
            			}
            			else {
HXLINE( 265)				 ::flixel::text::FlxText _hx_tmp = ::OptionsMenu_obj::versionShit;
HXDLIN( 265)				::String _hx_tmp1 = ((HX_("Offset (Left, Right, Shift for slow): ",bf,2c,df,41) + ::HelperFunctions_obj::truncateFloat(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)) ),2)) + HX_(" - Description - ",ca,32,1d,cd));
HXDLIN( 265)				_hx_tmp->set_text((_hx_tmp1 + this->currentDescription));
            			}
            		}
            		else {
HXLINE( 268)			 ::flixel::text::FlxText _hx_tmp = ::OptionsMenu_obj::versionShit;
HXDLIN( 268)			::String _hx_tmp1 = ((HX_("Offset (Left, Right, Shift for slow): ",bf,2c,df,41) + ::HelperFunctions_obj::truncateFloat(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)) ),2)) + HX_(" - Description - ",ca,32,1d,cd));
HXDLIN( 268)			_hx_tmp->set_text((_hx_tmp1 + this->currentDescription));
            		}
HXLINE( 271)		int bullShit = 0;
HXLINE( 273)		{
HXLINE( 273)			int _g = 0;
HXDLIN( 273)			::Array< ::Dynamic> _g1 = this->grpControls->members;
HXDLIN( 273)			while((_g < _g1->length)){
HXLINE( 273)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 273)				_g = (_g + 1);
HXLINE( 275)				item->targetY = ( (Float)((bullShit - this->curSelected)) );
HXLINE( 276)				bullShit = (bullShit + 1);
HXLINE( 278)				item->set_alpha(((Float)0.6));
HXLINE( 281)				if ((item->targetY == 0)) {
HXLINE( 283)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionsMenu_obj,changeSelection,(void))

 ::OptionsMenu OptionsMenu_obj::instance;

 ::flixel::text::FlxText OptionsMenu_obj::versionShit;


::hx::ObjectPtr< OptionsMenu_obj > OptionsMenu_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< OptionsMenu_obj > __this = new OptionsMenu_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< OptionsMenu_obj > OptionsMenu_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	OptionsMenu_obj *__this = (OptionsMenu_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OptionsMenu_obj), true, "OptionsMenu"));
	*(void **)__this = OptionsMenu_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

OptionsMenu_obj::OptionsMenu_obj()
{
}

void OptionsMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionsMenu);
	HX_MARK_MEMBER_NAME(selector,"selector");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(acceptInput,"acceptInput");
	HX_MARK_MEMBER_NAME(currentDescription,"currentDescription");
	HX_MARK_MEMBER_NAME(grpControls,"grpControls");
	HX_MARK_MEMBER_NAME(currentSelectedCat,"currentSelectedCat");
	HX_MARK_MEMBER_NAME(blackBorder,"blackBorder");
	HX_MARK_MEMBER_NAME(isCat,"isCat");
	HX_MARK_MEMBER_NAME(isSettingControl,"isSettingControl");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OptionsMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(selector,"selector");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(acceptInput,"acceptInput");
	HX_VISIT_MEMBER_NAME(currentDescription,"currentDescription");
	HX_VISIT_MEMBER_NAME(grpControls,"grpControls");
	HX_VISIT_MEMBER_NAME(currentSelectedCat,"currentSelectedCat");
	HX_VISIT_MEMBER_NAME(blackBorder,"blackBorder");
	HX_VISIT_MEMBER_NAME(isCat,"isCat");
	HX_VISIT_MEMBER_NAME(isSettingControl,"isSettingControl");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val OptionsMenu_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"isCat") ) { return ::hx::Val( isCat ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return ::hx::Val( options ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selector") ) { return ::hx::Val( selector ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		if (HX_FIELD_EQ(inName,"acceptInput") ) { return ::hx::Val( acceptInput ); }
		if (HX_FIELD_EQ(inName,"grpControls") ) { return ::hx::Val( grpControls ); }
		if (HX_FIELD_EQ(inName,"blackBorder") ) { return ::hx::Val( blackBorder ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isSettingControl") ) { return ::hx::Val( isSettingControl ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"currentDescription") ) { return ::hx::Val( currentDescription ); }
		if (HX_FIELD_EQ(inName,"currentSelectedCat") ) { return ::hx::Val( currentSelectedCat ); }
	}
	return super::__Field(inName,inCallProp);
}

bool OptionsMenu_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( instance ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"versionShit") ) { outValue = ( versionShit ); return true; }
	}
	return false;
}

::hx::Val OptionsMenu_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"isCat") ) { isCat=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selector") ) { selector=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"acceptInput") ) { acceptInput=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grpControls") ) { grpControls=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blackBorder") ) { blackBorder=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isSettingControl") ) { isSettingControl=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"currentDescription") ) { currentDescription=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentSelectedCat") ) { currentSelectedCat=inValue.Cast<  ::OptionCategory >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool OptionsMenu_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::OptionsMenu >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"versionShit") ) { versionShit=ioValue.Cast<  ::flixel::text::FlxText >(); return true; }
	}
	return false;
}

void OptionsMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("selector",1f,33,6d,b1));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("options",5e,33,fe,df));
	outFields->push(HX_("acceptInput",e2,a3,6a,39));
	outFields->push(HX_("currentDescription",43,ed,b8,d6));
	outFields->push(HX_("grpControls",7b,bb,b2,d5));
	outFields->push(HX_("currentSelectedCat",c2,90,9e,a7));
	outFields->push(HX_("blackBorder",0b,f0,b1,7a));
	outFields->push(HX_("isCat",4c,9e,49,c1));
	outFields->push(HX_("isSettingControl",37,39,d8,de));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OptionsMenu_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(OptionsMenu_obj,selector),HX_("selector",1f,33,6d,b1)},
	{::hx::fsInt,(int)offsetof(OptionsMenu_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(OptionsMenu_obj,options),HX_("options",5e,33,fe,df)},
	{::hx::fsBool,(int)offsetof(OptionsMenu_obj,acceptInput),HX_("acceptInput",e2,a3,6a,39)},
	{::hx::fsString,(int)offsetof(OptionsMenu_obj,currentDescription),HX_("currentDescription",43,ed,b8,d6)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(OptionsMenu_obj,grpControls),HX_("grpControls",7b,bb,b2,d5)},
	{::hx::fsObject /*  ::OptionCategory */ ,(int)offsetof(OptionsMenu_obj,currentSelectedCat),HX_("currentSelectedCat",c2,90,9e,a7)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(OptionsMenu_obj,blackBorder),HX_("blackBorder",0b,f0,b1,7a)},
	{::hx::fsBool,(int)offsetof(OptionsMenu_obj,isCat),HX_("isCat",4c,9e,49,c1)},
	{::hx::fsBool,(int)offsetof(OptionsMenu_obj,isSettingControl),HX_("isSettingControl",37,39,d8,de)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo OptionsMenu_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::OptionsMenu */ ,(void *) &OptionsMenu_obj::instance,HX_("instance",95,1f,e1,59)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(void *) &OptionsMenu_obj::versionShit,HX_("versionShit",f8,4e,3b,e2)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String OptionsMenu_obj_sMemberFields[] = {
	HX_("selector",1f,33,6d,b1),
	HX_("curSelected",fb,eb,ab,32),
	HX_("options",5e,33,fe,df),
	HX_("acceptInput",e2,a3,6a,39),
	HX_("currentDescription",43,ed,b8,d6),
	HX_("grpControls",7b,bb,b2,d5),
	HX_("currentSelectedCat",c2,90,9e,a7),
	HX_("blackBorder",0b,f0,b1,7a),
	HX_("create",fc,66,0f,7c),
	HX_("isCat",4c,9e,49,c1),
	HX_("update",09,86,05,87),
	HX_("isSettingControl",37,39,d8,de),
	HX_("changeSelection",bc,98,b5,48),
	::String(null()) };

static void OptionsMenu_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OptionsMenu_obj::instance,"instance");
	HX_MARK_MEMBER_NAME(OptionsMenu_obj::versionShit,"versionShit");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OptionsMenu_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OptionsMenu_obj::instance,"instance");
	HX_VISIT_MEMBER_NAME(OptionsMenu_obj::versionShit,"versionShit");
};

#endif

::hx::Class OptionsMenu_obj::__mClass;

static ::String OptionsMenu_obj_sStaticFields[] = {
	HX_("instance",95,1f,e1,59),
	HX_("versionShit",f8,4e,3b,e2),
	::String(null())
};

void OptionsMenu_obj::__register()
{
	OptionsMenu_obj _hx_dummy;
	OptionsMenu_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("OptionsMenu",fd,43,a3,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OptionsMenu_obj::__GetStatic;
	__mClass->mSetStaticField = &OptionsMenu_obj::__SetStatic;
	__mClass->mMarkFunc = OptionsMenu_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OptionsMenu_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OptionsMenu_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OptionsMenu_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OptionsMenu_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OptionsMenu_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OptionsMenu_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

