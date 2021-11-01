// CodeGear C++Builder
// Copyright (c) 1995, 2009 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Sstylesimply.pas' rev: 21.00

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

typedef StaticArray<System::UnicodeString, 53> Sstylesimply__1;

typedef StaticArray<System::UnicodeString, 13> Sstylesimply__2;

typedef StaticArray<System::UnicodeString, 2> Sstylesimply__3;

typedef StaticArray<System::UnicodeString, 2> Sstylesimply__4;

class DELPHICLASS TsSkinData;
class PASCALIMPLEMENTATION TsSkinData : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	bool Active;
	bool UseAeroBluring;
	System::UnicodeString Author;
	System::UnicodeString SkinPath;
	System::UnicodeString Description;
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
	System::Byte TabsCovering;
	System::Byte RibbonCovering;
	Graphics::TColor FXColor;
	Graphics::TColor Shadow1Color;
	Graphics::TColor SysInactiveBorderColor;
	double Version;
	__fastcall virtual ~TsSkinData(void);
public:
	/* TObject.Create */ inline __fastcall TsSkinData(void) : System::TObject() { }
	
};


struct TacConstElementData
{
	
public:
	int SkinIndex;
	int MaskIndex;
	int GlyphIndex;
	StaticArray<int, 3> BGIndex;
	System::UnicodeString SkinSection;
};


struct TacTrackBarData
{
	
public:
	int SkinIndex;
	int MaskIndex;
	int GlyphIndex;
	StaticArray<int, 3> BGIndex;
	int TickIndex;
	int ProgIndex;
	int SlideIndex;
};


typedef StaticArray<int, 53> TacIntSections;

typedef StaticArray<TacConstElementData, 4> TacSideElements;

typedef StaticArray<TacConstElementData, 2> TacBoolElements;

typedef StaticArray<StaticArray<TacConstElementData, 4>, 4> TacAllTabs;

typedef DynamicArray<int> _TConstantSkinData__1;

struct TConstantSkinData
{
	
private:
	typedef StaticArray<_TConstantSkinData__1, 7> _TConstantSkinData__2;
	
	
public:
	int IndexGLobalInfo;
	TacIntSections Sections;
	TacAllTabs Tabs;
	TacSideElements Scrolls;
	TacSideElements ScrollBtns;
	TacSideElements UpDownBtns;
	TacBoolElements Sliders;
	TacConstElementData MenuItem;
	TacConstElementData ComboBtn;
	_TConstantSkinData__2 TitleGlows;
	StaticArray<int, 7> GlowMargins;
	StaticArray<int, 13> TitleGlyphs;
	StaticArray<int, 2> RadioButton;
	StaticArray<int, 3> CheckBox;
	StaticArray<int, 3> SmallCheckBox;
	StaticArray<TacTrackBarData, 2> TrackBar;
	int ExBorder;
	int GripRightBottom;
	int GripHorizontal;
	int GripVertical;
};


typedef void __fastcall (*TacFormCallBack)(Classes::TComponent* SkinProvider, int Data = 0x0);

typedef DynamicArray<Classes::TComponent*> Sstylesimply__6;

//-- var, const, procedure ---------------------------------------------------
#define acGlowedGlyphs (Set<TacTitleGlyph, tgCloseAlone, tgNone> () << tgCloseAlone << tgClose << tgMax << tgMin << tgNormal )
extern PACKAGE StaticArray<TacSection, 14> acAuxReplacement;
extern PACKAGE Sstylesimply__1 acSectNames;
extern PACKAGE Sstylesimply__2 acTitleGlyphs;
extern PACKAGE Sstylesimply__3 ProgArray;
extern PACKAGE Sstylesimply__4 ThickArray;
extern PACKAGE Graphics::TIcon* AppIcon;
extern PACKAGE Graphics::TIcon* AppIconLarge;
extern PACKAGE bool aSkinChanging;
extern PACKAGE Sstylesimply__6 HookedComponents;
extern PACKAGE bool __fastcall SectionInArray(int const *Sections, const int Value, TacSection RangeMin = (TacSection)(0x0), TacSection RangeMax = (TacSection)(0x8));
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
#endif	// SstylesimplyHPP
