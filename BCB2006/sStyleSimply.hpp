// Borland C++ Builder
// Copyright (c) 1995, 2005 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Sstylesimply.pas' rev: 10.00

#ifndef SstylesimplyHPP
#define SstylesimplyHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Sysutils.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Stdctrls.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Acnttypes.hpp>	// Pascal unit
#include <Acntutils.hpp>	// Pascal unit
#include <Sconst.hpp>	// Pascal unit
#include <Sskinprops.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sstylesimply
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TacSection { ssMenuItem, ssCheckBox, ssSpeedButton, ssSpeedButton_Small, ssToolButton, ssTransparent, ssGroupBox, ssDivider, ssWebBtn, ssButton, ssComboNoEdit, ssButtonHuge, ssToolBar, ssEdit, ssGauge, ssSelection, ssStatusBar, ssPanel, ssPanelLow, ssTrackBar, ssProgressV, ssDragBar, ssGripH, ssGripV, ssProgressH, ssTabSheet, ssUpDown, ssComboBox, ssCaption, ssMainMenu, ssSplitter, ssComboBtn, ssFormTitle, ssHint, ssDividerV, ssPageControl, ssTabTop, ssBarPanel, ssBarTitle, ssMenuCaption, ssDialogTitle, ssMenuButton, ssMenuLine, ssFormHeader, ssTBBtn, ssTBMenuBtn, ssTBTab, ssColHeader, ssColHeaderA, ssColHeaderL, ssColHeaderR, ssSlider_Off, ssSlider_On };
#pragma option pop

#pragma option push -b-
enum TacTitleGlyph { tgCloseAlone, tgClose, tgMax, tgMin, tgNormal, tgHelp, tgSmallClose, tgSmallMax, tgSmallMin, tgSmallNormal, tgSmallHelp, tgUser, tgNone };
#pragma option pop

typedef AnsiString sStyleSimply__1[53];

typedef AnsiString sStyleSimply__2[13];

typedef AnsiString sStyleSimply__3[2];

typedef AnsiString sStyleSimply__4[2];

class DELPHICLASS TsSkinData;
class PASCALIMPLEMENTATION TsSkinData : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	bool Active;
	bool UseAeroBluring;
	AnsiString Author;
	AnsiString SkinPath;
	AnsiString Description;
	int Shadow1Offset;
	int Shadow1Blur;
	int Shadow1Transparency;
	int ExBorderWidth;
	int ExTitleHeight;
	int ExMaxHeight;
	int ExContentOffs;
	int ExCenterOffs;
	int ExDrawMode;
	int ExShadowOffs;
	int ExShadowOffsR;
	int ExShadowOffsT;
	int ExShadowOffsB;
	int BISpacing;
	int BIVAlign;
	int BIRightMargin;
	int BILeftMargin;
	int BITopMargin;
	int BIKeepHUE;
	int ComboBoxMargin;
	int SliderMargin;
	int BrightMin;
	int BrightMax;
	Acnttypes::TacArrowsStyle ArrowStyle;
	Byte TabsCovering;
	Byte RibbonCovering;
	Graphics::TColor FXColor;
	Graphics::TColor Shadow1Color;
	Graphics::TColor SysInactiveBorderColor;
	double Version;
	__fastcall virtual ~TsSkinData(void);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TsSkinData(void) : System::TObject() { }
	#pragma option pop
	
};


struct TacConstElementData
{
	
public:
	int SkinIndex;
	int MaskIndex;
	int GlyphIndex;
	int BGIndex[3];
	AnsiString SkinSection;
} ;

struct TacTrackBarData
{
	
public:
	int SkinIndex;
	int MaskIndex;
	int GlyphIndex;
	int BGIndex[3];
	int TickIndex;
	int ProgIndex;
	int SlideIndex;
} ;

typedef int TacIntSections[53];

typedef TacConstElementData TacSideElements[4];

typedef TacConstElementData TacBoolElements[2];

typedef TacConstElementData TacAllTabs[4][4];

typedef DynamicArray<int >  sStyleSimply__6;

typedef DynamicArray<int >  sStyleSimply__7[7];

struct TConstantSkinData
{
	
public:
	int IndexGLobalInfo;
	int Sections[53];
	TacConstElementData Tabs[4][4];
	TacConstElementData Scrolls[4];
	TacConstElementData ScrollBtns[4];
	TacConstElementData UpDownBtns[4];
	TacConstElementData Sliders[2];
	TacConstElementData MenuItem;
	TacConstElementData ComboBtn;
	DynamicArray<int >  TitleGlows[7];
	int GlowMargins[7];
	int TitleGlyphs[13];
	int RadioButton[2];
	int CheckBox[3];
	int SmallCheckBox[3];
	TacTrackBarData TrackBar[2];
	int ExBorder;
	int GripRightBottom;
	int GripHorizontal;
	int GripVertical;
} ;

typedef void __fastcall (*TacFormCallBack)(Classes::TComponent* SkinProvider, int Data = 0x0);

typedef DynamicArray<Classes::TComponent* >  sStyleSimply__8;

//-- var, const, procedure ---------------------------------------------------
#define acGlowedGlyphs (Set<TacTitleGlyph, tgCloseAlone, tgNone> () << TacTitleGlyph(0) << TacTitleGlyph(1) << TacTitleGlyph(2) << TacTitleGlyph(3) << TacTitleGlyph(4) )
extern PACKAGE TacSection acAuxReplacement[14];
extern PACKAGE AnsiString acSectNames[53];
extern PACKAGE AnsiString acTitleGlyphs[13];
extern PACKAGE AnsiString ProgArray[2];
extern PACKAGE AnsiString ThickArray[2];
extern PACKAGE Graphics::TIcon* AppIcon;
extern PACKAGE Graphics::TIcon* AppIconLarge;
extern PACKAGE bool aSkinChanging;
extern PACKAGE DynamicArray<Classes::TComponent* >  HookedComponents;
extern PACKAGE bool __fastcall SectionInArray(int const * Sections, const int Value, TacSection RangeMin = (TacSection)(0x0), TacSection RangeMax = (TacSection)(0x8));
extern PACKAGE void __fastcall IterateForms(Classes::TComponent* sm, TacFormCallBack FormCallBack, int Data = 0x0);
extern PACKAGE void __fastcall CopyExForms(Classes::TComponent* SkinManager);
extern PACKAGE void __fastcall LockForms(Classes::TComponent* SkinManager);
extern PACKAGE void __fastcall UnLockForms(Classes::TComponent* SkinManager, bool Repaint = true);
extern PACKAGE void __fastcall AppBroadCastS(void *Message);
extern PACKAGE void __fastcall SendToHooked(void *Message);
extern PACKAGE void __fastcall IntSkinForm(Forms::TCustomForm* Form);
extern PACKAGE void __fastcall IntUnSkinForm(Forms::TCustomForm* Form);

}	/* namespace Sstylesimply */
using namespace Sstylesimply;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Sstylesimply
