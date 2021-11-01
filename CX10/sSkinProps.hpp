﻿// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sSkinProps.pas' rev: 30.00 (Windows)

#ifndef SskinpropsHPP
#define SskinpropsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Vcl.StdCtrls.hpp>
#include <sConst.hpp>

//-- user supplied -----------------------------------------------------------

namespace Sskinprops
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
typedef System::StaticArray<System::StaticArray<System::UnicodeString, 4>, 4> Sskinprops__1;

typedef System::StaticArray<System::UnicodeString, 4> Sskinprops__2;

typedef System::StaticArray<System::UnicodeString, 4> Sskinprops__3;

typedef System::StaticArray<System::UnicodeString, 4> Sskinprops__4;

typedef System::StaticArray<System::UnicodeString, 2> Sskinprops__5;

typedef System::StaticArray<System::UnicodeString, 2> Sskinprops__6;

typedef System::StaticArray<System::UnicodeString, 3> Sskinprops__7;

typedef System::StaticArray<System::UnicodeString, 3> Sskinprops__8;

//-- var, const, procedure ---------------------------------------------------
#define s_BordersMask L"BORDERSMASK"
#define s_OuterMask L"OUTERMASK"
#define s_ExBorder L"EXBORDER"
#define s_LightRegion L"LRGN"
#define s_Glow L"GLOW"
#define s_GlowMargin L"GLOWMARGIN"
#define s_GripImage L"GRIPIMAGE"
#define s_GripHorz L"GRIPHORZ"
#define s_GripVert L"GRIPVERT"
#define s_StatusPanelMask L"STATUSPANELMASK"
#define s_SliderChannelMask L"SLIDERCHANNEL"
#define s_ImgTopLeft L"IMGTOPLEFT"
#define s_ImgTopRight L"IMGTOPRIGHT"
#define s_ImgBottomLeft L"IMGBTMLEFT"
#define s_ImgBottomRight L"IMGBTMRIGHT"
#define s_NormalTitleBar L"TITLEBAR"
#define s_BorderIconClose L"BICONCLOSE"
#define s_BorderIconCloseAlone L"BICLOSEALONE"
#define s_BorderIconMaximize L"BICONMAX"
#define s_BorderIconNormalize L"BICONNORM"
#define s_BorderIconMinimize L"BICONMIN"
#define s_BorderIconHelp L"BICONHELP"
#define s_TitleButtonMask L"TITLEBUTTON"
#define s_SmallIconNormalize L"SICONNORM"
#define s_SmallIconMinimize L"SICONMIN"
#define s_SmallIconMaximize L"SICONMAX"
#define s_SmallIconClose L"SICONCLOSE"
#define s_SmallIconHelp L"SICONHELP"
#define s_ItemGlyph L"GLYPHMASK"
#define s_SliderHorzMask L"SLIDERMASK"
#define s_SliderVertMask L"SLIDERVMASK"
#define s_TickVert L"TICKVERT"
#define s_TickHorz L"TICKHORZ"
#define s_ProgVert L"PROGVERT"
#define s_ProgHorz L"PROGHORZ"
#define s_ParentClass L"PARENTCLASS"
#define s_ReservedBoolean L"RESERVEDBOOLEAN"
#define s_GiveOwnFont L"GIVEOWNFONT"
#define s_ShowFocus L"SHOWFOCUS"
#define s_UseState2 L"USESTATE2"
#define s_FontColor L"FONTCOLOR"
#define s_TCLeft L"TCLEFT"
#define s_TCTop L"TCTOP"
#define s_TCRight L"TCRIGHT"
#define s_TCBottom L"TCBOTTOM"
#define s_Color L"COLOR"
#define s_Transparency L"TRANSPARENCY"
#define s_GradientPercent L"GRADIENTPERCENT"
#define s_GradientData L"GRADIENTDATA"
#define s_ImagePercent L"IMAGEPERCENT"
#define s_Pattern L"PATTERN"
#define s_GlowColor L"GCOL"
#define s_GlowSize L"GSIZE"
#define s_HotFontColor L"HOTFONTCOLOR"
#define s_HotTCLeft L"HOTTCLEFT"
#define s_HotTCTop L"HOTTCTOP"
#define s_HotTCRight L"HOTTCRIGHT"
#define s_HotTCBottom L"HOTTCBOTTOM"
#define s_HotColor L"HOTCOLOR"
#define s_HotTransparency L"HOTTRANSPARENCY"
#define s_HotGradientPercent L"HOTGRADIENTPERCENT"
#define s_HotGradientData L"HOTGRADIENTDATA"
#define s_HotImagePercent L"HOTIMAGEPERCENT"
#define s_HotPattern L"HOTPATTERN"
#define s_HotGlowColor L"HGCOL"
#define s_HotGlowSize L"HGSIZE"
#define s_FontColor2 L"FONTCOLOR2"
#define s_TCLeft2 L"TCLEFT2"
#define s_TCTop2 L"TCTOP2"
#define s_TCRight2 L"TCRIGHT2"
#define s_TCBottom2 L"TCBOTTOM2"
#define s_Color2 L"COLOR2"
#define s_Transparency2 L"TRANSPARENCY2"
#define s_GradientPercent2 L"GRADIENTPERCENT2"
#define s_GradientData2 L"GRADIENTDATA2"
#define s_ImagePercent2 L"IMAGEPERCENT2"
#define s_Pattern2 L"PATTERN2"
#define s_GlowColor2 L"GCOL2"
#define s_GlowSize2 L"GSIZE2"
#define s_BorderColor1 L"BORDERCOLOR1"
#define s_BorderColor2 L"BORDERCOLOR2"
#define s_BorderWidth L"BORDERWIDTH"
#define s_TitleHeight L"TITLEHEIGHT"
#define s_FormOffset L"FORMOFFSET"
#define s_ShadowOffset L"ALIGNOFFSET"
#define s_ShadowOffsetR L"ALIGNOFFSETR"
#define s_ShadowOffsetT L"ALIGNOFFSETT"
#define s_ShadowOffsetB L"ALIGNOFFSETB"
#define s_CenterOffset L"CENTEROFFSET"
#define s_MaxTitleHeight L"MAXHEIGHT"
#define s_BorderMode L"BORDERMODE"
#define s_BrightMin L"BRIGHTMIN"
#define s_BrightMax L"BRIGHTMAX"
#define s_BorderColor L"BORDERCOLOR"
#define s_EditTextOk L"EDITTEXT_OK"
#define s_EditTextWarning L"EDITTEXT_WARN"
#define s_EditTextAlert L"EDITTEXT_ALERT"
#define s_EditTextHighlight1 L"EDITTEXT_H1"
#define s_EditTextHighlight2 L"EDITTEXT_H2"
#define s_EditTextHighlight3 L"EDITTEXT_H3"
#define s_EditText_Inverted L"EDITTEXT_INV"
#define s_EditBG_Inverted L"EDITBG_INV"
#define s_EditBG_OddRow L"EDITBG_ODD"
#define s_EditBG_EvenRow L"EDITBG_EVEN"
#define s_EditBGOk L"EDITBG_OK"
#define s_EditBGWarning L"EDITBG_WARN"
#define s_EditBGAlert L"EDITBG_ALERT"
#define s_EditGridLine L"GRIDLINE"
#define s_MainColor L"MAINCOLOR"
#define s_BtnColor1Active L"BTNCOLOR1ACTIVE"
#define s_BtnColor2Active L"BTNCOLOR2ACTIVE"
#define s_BtnBorderActive L"BTNBORDERACTIVE"
#define s_BtnFontActive L"BTNFONTACTIVE"
#define s_BtnColor1Normal L"BTNCOLOR1NORMAL"
#define s_BtnColor2Normal L"BTNCOLOR2NORMAL"
#define s_BtnBorderNormal L"BTNBORDERNORMAL"
#define s_BtnFontNormal L"BTNFONTNORMAL"
#define s_BtnColor1Pressed L"BTNCOLOR1PRESSED"
#define s_BtnColor2Pressed L"BTNCOLOR2PRESSED"
#define s_BtnBorderPressed L"BTNBORDERPRESSED"
#define s_BtnFontPressed L"BTNFONTPRESSED"
#define s_GlobalInfo L"GLOBALINFO"
#define s_Transparent L"TRANSPARENT"
#define s_Caption L"CAPTION"
#define s_FormTitle L"FORMTITLE"
#define s_Form L"FORM"
#define s_Dialog L"DIALOG"
#define s_Hint L"HINT"
#define s_MDIArea L"MDIAREA"
#define s_MainMenu L"MAINMENU"
#define s_MenuItem L"MENUITEM"
#define s_Selection L"SELECTION"
#define s_MenuIcoLine L"ICOLINE"
#define s_MenuExtraLine L"EXTRALINE"
#define s_ScrollBar1H L"SCROLLBAR1H"
#define s_ScrollBar1V L"SCROLLBAR1V"
#define s_ScrollBar2H L"SCROLLBAR2H"
#define s_ScrollBar2V L"SCROLLBAR2V"
#define s_ScrollSliderV L"SCROLLSLIDERV"
#define s_ScrollSliderH L"SCROLLSLIDERH"
#define s_ScrollBtnLeft L"SCROLLBTNLEFT"
#define s_ScrollBtnTop L"SCROLLBTNTOP"
#define s_ScrollBtnRight L"SCROLLBTNRIGHT"
#define s_ScrollBtnBottom L"SCROLLBTNBOTTOM"
#define s_Divider L"DIVIDER"
#define s_DividerV L"DIVIDERV"
#define s_ColHeader L"COLHEADER"
#define s_ProgressH L"PROGRESSH"
#define s_ProgressV L"PROGRESSV"
#define s_AlphaEdit L"ALPHAEDIT"
#define s_TabTop L"TABTOP"
#define s_RibbonTab L"RIBBONTAB"
#define s_TabBottom L"TABBOTTOM"
#define s_TabLeft L"TABLEFT"
#define s_TabRight L"TABRIGHT"
#define s_Edit L"EDIT"
#define s_ToolButton L"TOOLBUTTON"
#define s_ComboBox L"COMBOBOX"
#define s_ComboBtn L"COMBOBTN"
#define s_AlphaComboBox L"ALPHACOMBOBOX"
#define s_ComboNoEdit L"COMBONOEDIT"
#define s_UpDown L"UPDOWNBTN"
#define s_Button L"BUTTON"
#define s_ButtonBig L"BUTTON_BIG"
#define s_ButtonHuge L"BUTTON_HUGE"
#define s_SpeedButton L"SPEEDBUTTON"
#define s_SpeedButton_Small L"SPEEDBUTTON_SMALL"
#define s_Panel L"PANEL"
#define s_PanelLow L"PANEL_LOW"
#define s_TabControl L"TABCONTROL"
#define s_PageControl L"PAGECONTROL"
#define s_RibbonPage L"RIBBONPAGE"
#define s_TabSheet L"TABSHEET"
#define s_StatusBar L"STATUSBAR"
#define s_ToolBar L"TOOLBAR"
#define s_Splitter L"SPLITTER"
#define s_GroupBox L"GROUPBOX"
#define s_Gauge L"GAUGE"
#define s_TrackBar L"TRACKBAR"
#define s_CheckBox L"CHECKBOX"
#define s_RadioButton L"CHECKBOX"
#define s_DragBar L"DRAGBAR"
#define s_Bar L"BAR"
#define s_BarTitle L"BARTITLE"
#define s_BarPanel L"BARPANEL"
#define s_WebBtn L"WEBBUTTON"
#define s_GripH L"GRIPH"
#define s_GripV L"GRIPV"
#define s_MenuCaption L"MENUCAPTION"
#define s_DialogTitle L"DIALOGTITLE"
#define s_MenuButton L"MENUBTN"
#define s_MenuLine L"MENULINE"
#define s_FormHeader L"FORMHEADER"
#define s_TBBtn L"TB_BTN"
#define s_TBMenuBtn L"TB_MENUBTN"
#define s_TBTab L"TB_TAB"
#define s_ColHeaderA L"COLHEADERA"
#define s_ColHeaderL L"COLHEADERL"
#define s_ColHeaderR L"COLHEADERR"
#define s_Slider_Off L"SLIDER_OFF"
#define s_Slider_On L"SLIDER_ON"
#define s_Thumb_Off L"THUMB_OFF"
#define s_Thumb_On L"THUMB_ON"
#define s_TabLeftFirst L"TABLEFTFIRST"
#define s_TabTopFirst L"TABTOPFIRST"
#define s_TabRightFirst L"TABRIGHTFIRST"
#define s_TabBottomFirst L"TABBOTTOMFIRST"
#define s_TabLeftLast L"TABLEFTLAST"
#define s_TabTopLast L"TABTOPLAST"
#define s_TabRightLast L"TABRIGHTLAST"
#define s_TabBottomLast L"TABBOTTOMLAST"
#define s_TabLeftMiddle L"TABLEFTMIDDLE"
#define s_TabTopMiddle L"TABTOPMIDDLE"
#define s_TabRightMiddle L"TABRIGHTMIDDLE"
#define s_TabBottomMiddle L"TABBOTTOMMIDDLE"
#define s_MasterBitmap L"MASTERBITMAP"
#define s_Preview L"PREVIEW"
#define s_CheckGlyph L"CHECK"
#define s_CheckBoxChecked L"BOXCHECKED"
#define s_CheckBoxUnChecked L"BOXUNCHECKED"
#define s_CheckBoxGrayed L"BOXGRAYED"
#define s_RadioButtonChecked L"RADIOCHECKED"
#define s_RadioButtonUnChecked L"RADIOUNCHECKED"
#define s_SmallBoxChecked L"SMALLCHECKED"
#define s_SmallBoxUnChecked L"SMALLUNCHECKED"
#define s_SmallBoxGrayed L"SMALLGRAYED"
#define s_Version L"VERSION"
#define s_Author L"AUTHOR"
#define s_Description L"DESCRIPTION"
#define s_Shadow1Color L"SHADOW1COLOR"
#define s_Shadow1Offset L"SHADOW1OFFSET"
#define s_Shadow1Blur L"SHADOW1BLUR"
#define s_Shadow1Transparency L"SHADOW1TRANSPARENCY"
#define s_BISpacing L"BISPACE"
#define s_BIVAlign L"BIVALIGN"
#define s_BIRightMargin L"BIRIGHT"
#define s_BILeftMargin L"BILEFT"
#define s_BITopMargin L"BITOP"
#define s_BIKeepHUE L"BIKEEPHUE"
#define s_TabsCovering L"TABSCOVERING"
#define s_ArrowLineWidth L"ARROWLINE"
#define s_ArrowStyle L"ARROWSTYLE"
#define s_States L"STATES"
#define s_UseAeroBluring L"AEROBLUR"
#define s_ComboMargin L"COMBOMARGIN"
#define s_SliderMargin L"SLIDERMARGIN"
#define s_OuterOffsL L"OUTOFFSL"
#define s_OuterOffsT L"OUTOFFST"
#define s_OuterOffsR L"OUTOFFSR"
#define s_OuterOffsB L"OUTOFFSB"
#define s_OuterMode L"OUTERMODE"
#define s_OuterOpacity L"OUTOPACITY"
#define s_ShadowColorL L"SH_COLORL"
#define s_ShadowColorT L"SH_COLORT"
#define s_ShadowColorR L"SH_COLORR"
#define s_ShadowColorB L"SH_COLORB"
#define s_ShadowWidthL L"SH_WIDTHL"
#define s_ShadowWidthT L"SH_WIDTHT"
#define s_ShadowWidthR L"SH_WIDTHR"
#define s_ShadowWidthB L"SH_WIDTHB"
#define s_ShadowOffsL L"SH_OFFSETL"
#define s_ShadowOffsT L"SH_OFFSETT"
#define s_ShadowOffsR L"SH_OFFSETR"
#define s_ShadowOffsB L"SH_OFFSETB"
#define s_ShadowSource L"SH_SOURCE"
#define s_ShadowOpacity L"SH_OPACITY"
#define s_ShadowMask L"SH_MASK"
#define s_LowColorL L"LO_COLORL"
#define s_LowColorT L"LO_COLORT"
#define s_LowColorR L"LO_COLORR"
#define s_LowColorB L"LO_COLORB"
#define s_LowWidthL L"LO_WIDTHL"
#define s_LowWidthT L"LO_WIDTHT"
#define s_LowWidthR L"LO_WIDTHR"
#define s_LowWidthB L"LO_WIDTHB"
#define s_LowOffsL L"LO_OFFSETL"
#define s_LowOffsT L"LO_OFFSETT"
#define s_LowOffsR L"LO_OFFSETR"
#define s_LowOffsB L"LO_OFFSETB"
#define s_LowSource L"LO_SOURCE"
#define s_LowOpacity L"LO_OPACITY"
#define s_LowMask L"LO_MASK"
extern DELPHI_PACKAGE Sskinprops__1 acTabSections;
extern DELPHI_PACKAGE Sskinprops__2 acScrollBtns;
extern DELPHI_PACKAGE Sskinprops__3 acScrollParts;
extern DELPHI_PACKAGE Sskinprops__4 acUpDownBtns;
extern DELPHI_PACKAGE Sskinprops__5 acScrollSliders;
extern DELPHI_PACKAGE Sskinprops__6 acRadioGlyphs;
extern DELPHI_PACKAGE Sskinprops__7 acCheckGlyphs;
extern DELPHI_PACKAGE Sskinprops__8 acSmallChecks;
}	/* namespace Sskinprops */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SSKINPROPS)
using namespace Sskinprops;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SskinpropsHPP
