// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sConst.pas' rev: 6.00

#ifndef sConstHPP
#define sConstHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <StdCtrls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sconst
{
//-- type declarations -------------------------------------------------------
typedef int TacIntProperty;

#pragma option push -b-
enum TacOuterEffectStyle { oeNone, oeShadow, oeLowered };
#pragma option pop

#pragma option push -b-
enum TacOuterVisibility { ovNone, ovAlways };
#pragma option pop

#pragma option push -b-
enum TacGrayedMode { gmAlways, gmInactive };
#pragma option pop

#pragma option push -b-
enum TacSide { asLeft, asTop, asRight, asBottom };
#pragma option pop

#pragma option push -b-
enum TacTabLayout { tlFirst, tlLast, tlMiddle, tlSingle };
#pragma option pop

class DELPHICLASS TsAccessControl;
class PASCALIMPLEMENTATION TsAccessControl : public Controls::TControl 
{
	typedef Controls::TControl inherited;
	
public:
	__property AutoSize  = {default=0};
	__property ParentColor  = {default=1};
	__property Color  = {default=-2147483643};
	__property ParentFont  = {default=1};
	__property PopupMenu ;
	__property Font ;
public:
	#pragma option push -w-inl
	/* TControl.Create */ inline __fastcall virtual TsAccessControl(Classes::TComponent* AOwner) : Controls::TControl(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TControl.Destroy */ inline __fastcall virtual ~TsAccessControl(void) { }
	#pragma option pop
	
};


typedef AnsiString ACString;

typedef char ACChar;

typedef char *PACChar;

typedef int ACNativeInt;

typedef int ACLongInt;

typedef unsigned ACUInt;

typedef unsigned ACNativeUInt;

#pragma option push -b-
enum TVerticalAlignment { taAlignTop, taAlignBottom, taVerticalCenter };
#pragma option pop

typedef char OldChar;

typedef char *POldChar;

typedef AnsiString OldString;

typedef AnsiString *POldString;

typedef AnsiString *PACString;

typedef void __fastcall (__closure *TPaintEvent)(System::TObject* Sender, Graphics::TCanvas* Canvas);

typedef void __fastcall (__closure *TBmpPaintEvent)(System::TObject* Sender, Graphics::TBitmap* Bmp);

typedef AnsiString TsSkinName;

typedef AnsiString TsDirectory;

typedef AnsiString TsSkinSection;

typedef AnsiString TacStrValue;

typedef AnsiString TacRoot;

#pragma option push -b-
enum TFadeDirection { fdNone, fdUp, fdDown };
#pragma option pop

#pragma option push -b-
enum TacAnimType { atFading, atAero, atDropDown };
#pragma option pop

#pragma option push -b-
enum TacAnimTypeCtrl { atcFade, atcAero, atcBlur };
#pragma option pop

#pragma option push -b-
enum TacBtnEvent { beMouseEnter, beMouseLeave, beMouseDown, beMouseUp };
#pragma option pop

typedef Set<TacBtnEvent, beMouseEnter, beMouseUp>  TacBtnEvents;

#pragma option push -b-
enum TacAnimatEvent { aeMouseEnter, aeMouseLeave, aeMouseDown, aeMouseUp, aeGlobalDef };
#pragma option pop

typedef Set<TacAnimatEvent, aeMouseEnter, aeGlobalDef>  TacAnimatEvents;

#pragma option push -b-
enum TacImgType { itisaBorder, itisaTexture, itisaGlyph, itisaGlow, itisaPngGlyph };
#pragma option pop

#pragma option push -b-
enum TacFillMode { fmTiled, fmStretched, fmTiledHorz, fmTiledVert, fmStretchHorzTop, fmStretchVertLeft, fmTileHorBtm, fmTileVertRight, fmStretchHorBtm, fmStretchVertRight, fmDisTiled, fmStretchHorz, fmStretchVert, fmFromBottomToTop, fmReserved1 };
#pragma option pop

#pragma option push -b-
enum TvaAlign { vaTop, vaMiddle, vaBottom };
#pragma option pop

struct TacBGInfo;
typedef TacBGInfo *PacBGInfo;

#pragma option push -b-
enum TacBGType { btUnknown, btFill, btCache, btNotReady };
#pragma option pop

#pragma pack(push, 4)
struct TacBGInfo
{
	Graphics::TBitmap* Bmp;
	Graphics::TColor Color;
	Types::TPoint Offset;
	Types::TRect R;
	Types::TRect FillRect;
	TacBGType BgType;
	bool PleaseDraw;
	HDC DrawDC;
} ;
#pragma pack(pop)

#pragma pack(push, 4)
struct TCacheInfo
{
	Graphics::TBitmap* Bmp;
	int X;
	int Y;
	Graphics::TColor FillColor;
	Types::TRect FillRect;
	bool Ready;
} ;
#pragma pack(pop)

#pragma pack(push, 4)
struct TacPaintInfo
{
	int State;
	int FontIndex;
	Types::TRect R;
	System::TObject* SkinManager;
} ;
#pragma pack(pop)

typedef TacPaintInfo *PacPaintInfo;

typedef DynamicArray<Types::TPoint >  TPoints;

typedef TPoints *PPoints;

typedef Shortint TPercent;

typedef Set<Byte, 1, 255>  TsCodes;

#pragma option push -b-
enum TsShadowingShape { ssRectangle, ssEllipse };
#pragma option pop

#pragma option push -b-
enum TsWindowShowMode { soHide, soNormal, soShowMinimized, soMaximize, soShowNoActivate, soShow, soMinimize, soShowMinNoActive, soShowNA, soRestore, soDefault };
#pragma option pop

#pragma pack(push, 1)
struct TsColor
{
	
	union
	{
		struct 
		{
			int I;
			
		};
		struct 
		{
			Byte R;
			Byte G;
			Byte B;
			Byte A;
			
		};
		struct 
		{
			Graphics::TColor C;
			
		};
		
	};
} ;
#pragma pack(pop)

#pragma pack(push, 1)
struct TsColor_RGB
{
	
	union
	{
		struct 
		{
			int Intg;
			
		};
		struct 
		{
			Byte Red;
			Byte Green;
			Byte Blue;
			Byte Alpha;
			
		};
		struct 
		{
			Graphics::TColor Col;
			
		};
		
	};
} ;
#pragma pack(pop)

#pragma pack(push, 1)
struct TsColor_D
{
	
	union
	{
		struct 
		{
			int DI;
			
		};
		struct 
		{
			Byte DB;
			Byte DG;
			Byte DR;
			Byte DA;
			
		};
		struct 
		{
			Graphics::TColor DC;
			
		};
		
	};
} ;
#pragma pack(pop)

#pragma pack(push, 1)
struct TsColor_S
{
	
	union
	{
		struct 
		{
			int SI;
			
		};
		struct 
		{
			Byte SB;
			Byte SG;
			Byte SR;
			Byte SA;
			
		};
		struct 
		{
			Graphics::TColor SC;
			
		};
		
	};
} ;
#pragma pack(pop)

#pragma pack(push, 1)
struct TsColor_M
{
	
	union
	{
		struct 
		{
			int MI;
			
		};
		struct 
		{
			Byte MB;
			Byte MG;
			Byte MR;
			Byte MA;
			
		};
		struct 
		{
			Graphics::TColor MC;
			
		};
		
	};
} ;
#pragma pack(pop)

#pragma pack(push, 1)
struct TsColor_
{
	
	union
	{
		struct 
		{
			int I;
			
		};
		struct 
		{
			Byte B;
			Byte G;
			Byte R;
			Byte A;
			
		};
		struct 
		{
			Graphics::TColor C;
			
		};
		
	};
} ;
#pragma pack(pop)

#pragma pack(push, 1)
struct TsColor_RGB_
{
	
	union
	{
		struct 
		{
			int Intg;
			
		};
		struct 
		{
			Byte Blue;
			Byte Green;
			Byte Red;
			Byte Alpha;
			
		};
		struct 
		{
			Graphics::TColor Col;
			
		};
		
	};
} ;
#pragma pack(pop)

typedef TsColor TRGBAArray[10001];

typedef TsColor *PRGBAArray;

typedef TsColor_ TRGBAArray_[10001];

typedef TsColor_ *PRGBAArray_;

typedef TsColor_D TRGBAArray_D[10001];

typedef TsColor_D *PRGBAArray_D;

typedef TsColor_S TRGBAArray_S[10001];

typedef TsColor_S *PRGBAArray_S;

typedef TsColor_M TRGBAArray_M[10001];

typedef TsColor_M *PRGBAArray_M;

#pragma option push -b-
enum sConst__2 { dgBlended, dgGrayed };
#pragma option pop

typedef Set<sConst__2, dgBlended, dgGrayed>  TsDisabledGlyphKind;

#pragma option push -b-
enum sConst__3 { dkBlended, dkGrayed };
#pragma option pop

typedef Set<sConst__3, dkBlended, dkGrayed>  TsDisabledKind;

typedef TsDisabledKind *PsDisabledKind;

#pragma pack(push, 1)
struct TsGradPoint
{
	Word Index;
	int Mode;
	TsColor Color;
	TPercent Percent;
} ;
#pragma pack(pop)

typedef DynamicArray<TsGradPoint >  TsGradArray;

typedef AnsiString sConst__4[4];

typedef AnsiString sConst__5[4];

#pragma option push -b-
enum TsCaptionLayout { sclLeft, sclTopLeft, sclTopCenter, sclTopRight, sclLeftTop, sclBottomLeft, sclBottomCenter, sclBottomRight, sclRight, sclRightTop, sclLeftLeft };
#pragma option pop

typedef Set<Comctrls::TCalDayOfWeek, dowMonday, dowLocaleDefault>  TDaysOfWeek;

#pragma option push -b-
enum TDateOrder { doMDY, doDMY, doYMD };
#pragma option pop

#pragma option push -b-
enum TPopupWindowAlign { pwaRight, pwaLeft };
#pragma option pop

#pragma option push -b-
enum TacOptimizingPriority { opSpeed, opMemory };
#pragma option pop

//-- var, const, procedure ---------------------------------------------------
#define CompatibleSkinVersion  (8.450000E+00)
#define MaxCompSkinVersion  (1.299000E+01)
static const char TexChar = '\x7e';
static const char ZeroChar = '\x30';
static const char CharOne = '\x31';
static const char CharQuest = '\x3f';
static const char CharDiez = '\x23';
static const char CharExt = '\x21';
static const char CharGlyph = '\x40';
static const char CharMask = '\x5e';
static const char CharMinus = '\x2d';
static const char CharPlus = '\x2b';
static const char CharSemicolon = '\x3b';
static const Word i360 = 0x168;
static const Word i270 = 0x10e;
static const Byte i180 = 0xb4;
static const Shortint i90 = 0x5a;
static const Word ACS_PRINTING = 0x200;
static const Word ACS_MNUPDATING = 0x400;
static const Word ACS_LOCKED = 0x800;
static const Word ACS_FOCUSCHANGING = 0x1000;
static const Word ACS_CHANGING = 0x2000;
static const Word ACS_BGRECEIVING = 0x4000;
static const Word ACS_REPAINTNEEDH = 0x8000;
static const int ACS_REPAINTNEEDV = 0x10000;
static const Shortint BGT_NONE = 0x0;
static const Shortint BGT_GRADIENTHORZ = 0x1;
static const Shortint BGT_GRADIENTVERT = 0x2;
static const Shortint BGT_STRETCH = 0x4;
static const Shortint BGT_TEXTURELEFT = 0x10;
static const Shortint BGT_TEXTURETOP = 0x20;
static const Shortint BGT_TEXTURERIGHT = 0x40;
static const Byte BGT_TEXTUREBOTTOM = 0x80;
static const Shortint BGT_TEXTUREVERT = 0x50;
static const Byte BGT_TEXTUREHORZ = 0xa0;
static const Shortint BGT_STRETCHVERT = 0x54;
static const Byte BGT_STRETCHHORZ = 0xa4;
static const Word BGT_TOPLEFT = 0x100;
static const Word BGT_TOPRIGHT = 0x200;
static const Word BGT_BOTTOMLEFT = 0x400;
static const Word BGT_BOTTOMRIGHT = 0x800;
static const Word RDWA_FRAME = 0x421;
static const Word RDWA_FRAMENOW = 0x521;
static const Word RDWA_REPAINT = 0x405;
static const Word RDWA_ERASENOW = 0x105;
static const Word RDWA_ALL = 0x485;
static const Word RDWA_ALLNOW = 0x585;
static const Byte RDWA_ALLCHILDREN = 0xb1;
static const Word RDWA_NOCHILDREN = 0x445;
static const Word RDWA_NOCHILDRENNOW = 0x545;
static const Word SWPA_FRAMECHANGED = 0x727;
static const Word SWPA_NOCOPYBITS = 0x70f;
static const Word SWPA_SHOW = 0x658;
static const Word SWPA_HIDE = 0x698;
static const Word SWPA_SHOWZORDER = 0x659;
static const Word SWPA_SHOWZORDERONLY = 0x65b;
static const Word SWPA_ZORDER = 0x61b;
static const int EllipsFlags = 0x4c000;
static const Shortint ACT_RELCAPT = 0xffffffff;
extern PACKAGE Byte PNGMagic[8];
extern PACKAGE Stdctrls::TCheckBoxState CheckBoxStates[3];
extern PACKAGE Word acAlignmentArray[3];
extern PACKAGE unsigned TextWrapping[2];
extern PACKAGE unsigned TextEllips[2];
static const int NCS_DROPSHADOW = 0x20000;
static const Shortint BS_SPLITBUTTON = 0xc;
static const Shortint BS_DEFSPLITBUTTON = 0xd;
static const Shortint BS_COMMANDLINK = 0xe;
static const Shortint BS_DEFCOMMANDLINK = 0xf;
extern PACKAGE TCacheInfo EmptyCI;
extern PACKAGE TsColor sFuchsia;
extern PACKAGE AnsiString sTabPositions[4];
extern PACKAGE int aScalePercents[4];
extern PACKAGE AnsiString aSfxs[4];
#define s_RegName "AlphaSkins"
#define s_IntSkinsPath "IntSkinsPath"
#define s_WinControlForm "TWinControlForm"
#define s_NoFocusProp "ACNOFOCUS"
#define s_acScale "ACSCALE"
#define s_Arial "Arial"
#define s_MSSansSerif "MS Sans Serif"
#define s_Webdings "Webdings"
#define s_PreviewKey "/acpreview"
#define s_EditorCapt "AlphaSkins Editor"
static const Shortint ASE_CLOSE = 0x1;
static const Shortint ASE_UPDATE = 0x2;
static const Shortint ASE_HELLO = 0x3;
static const Shortint ASE_ALIVE = 0x4;
static const Word ASE_MSG = 0xa400;
#define MasterBmpName "Master.bmp"
#define OptionsDatName "Options.dat"
#define acSkinExt "asz"
#define acPngExt "png"
#define acIcoExt "ico"
#define s_MinusOne "-1"
#define s_TrueStr "TRUE"
#define s_NewFolder "New folder"
#define s_SkinSelectItemName "SkinSelectItem"
#define s_SkinData "SkinData"
static const char s_Slash = '\x5c';
static const char s_Space = '\x20';
static const char s_Comma = '\x2c';
static const char s_Dot = '\x2e';
#define s_0D0A "\r\n"
#define s_Ellipsis "..."
static const Shortint ac_MaxPropsIndex = 0x2;
static const Shortint NOCHILDRENPRINT = 0xfffffffe;
static const Shortint BDM_STRETCH = 0x1;
static const Shortint BDM_ACTIVEONLY = 0x2;
static const Shortint BDM_FILL = 0x4;
static const Shortint HTSB_LEFT_BUTTON = 0x64;
static const Shortint HTSB_RIGHT_BUTTON = 0x65;
static const Shortint HTSB_TOP_BUTTON = 0x66;
static const Shortint HTSB_BOTTOM_BUTTON = 0x67;
static const Shortint HTSB_H_SCROLL = 0x68;
static const Shortint HTSB_HB_SCROLL = 0x69;
static const Shortint HTSB_V_SCROLL = 0x6a;
static const Shortint HTSB_VB_SCROLL = 0x6b;
static const Shortint HTCHILDCLOSE = 0x65;
static const Shortint HTCHILDMAX = 0x66;
static const Shortint HTCHILDMIN = 0x67;
static const Shortint acCloseBtnSize = 0xf;
static const Shortint acMultipNormal = 0x2;
static const Shortint acMaxIterations = 0x6;
static const Shortint acTimerInterval = 0xc;
extern PACKAGE TacImgType acImgTypes[5];
extern PACKAGE TacFillMode acFillModes[15];
extern PACKAGE TacBtnEvent acBtnEvents[5];
static const Shortint COC_TsCustom = 0x1;
static const Shortint COC_TsSpinEdit = 0x2;
static const Shortint COC_TsEdit = 0x3;
static const Shortint COC_TsMemo = 0x7;
static const Shortint COC_TsListBox = 0x8;
static const Shortint COC_TsColorBox = 0x9;
static const Shortint COC_TsListView = 0xa;
static const Shortint COC_TsCurrencyEdit = 0xc;
static const Shortint COC_TsComboBox = 0xd;
static const Shortint COC_TsTreeView = 0xe;
static const Shortint COC_TsComboBoxEx = 0x12;
static const Shortint COC_TsFrameBar = 0x13;
static const Shortint COC_TsBarTitle = 0x14;
static const Shortint COC_TsCheckBox = 0x20;
static const Shortint COC_TsDBCheckBox = 0x20;
static const Shortint COC_TsRadioButton = 0x21;
static const Shortint COC_TsSlider = 0x22;
static const Shortint COC_TsImage = 0x32;
static const Shortint COC_TsPanel = 0x33;
static const Shortint COC_TsCoolBar = 0x35;
static const Shortint COC_TsToolBar = 0x36;
static const Shortint COC_TsDragBar = 0x38;
static const Shortint COC_TsTabSheet = 0x39;
static const Shortint COC_TsScrollBox = 0x3a;
static const Shortint COC_TsMonthCalendar = 0x3b;
static const Shortint COC_TsGroupBox = 0x4a;
static const Shortint COC_TsSplitter = 0x4b;
static const Shortint COC_TsDBEdit = 0x4c;
static const Shortint COC_TsDBMemo = 0x4e;
static const Shortint COC_TsDBComboBox = 0x51;
static const Shortint COC_TsDBLookupComboBox = 0x52;
static const Shortint COC_TsDBListBox = 0x53;
static const Shortint COC_TsDBLookupListBox = 0x54;
static const Shortint COC_TsDBGrid = 0x55;
static const Shortint COC_TsSpeedButton = 0x5c;
static const Shortint COC_TsButton = 0x5d;
static const Shortint COC_TsBitBtn = 0x5e;
static const Shortint COC_TsNavButton = 0x62;
static const Shortint COC_TsBevel = 0x6e;
static const Byte COC_TsFileDirEdit = 0x84;
static const Byte COC_TsFilenameEdit = 0x85;
static const Byte COC_TsDirectoryEdit = 0x86;
static const Byte COC_TsCustomDateEdit = 0x89;
static const Byte COC_TsComboEdit = 0x8a;
static const Byte COC_TsDateEdit = 0x8c;
static const Byte COC_TsPageControl = 0x8d;
static const Byte COC_TsScrollBar = 0x8e;
static const Byte COC_TsTabControl = 0x8f;
static const Byte COC_TsStatusBar = 0x97;
static const Byte COC_TsHeaderControl = 0x98;
static const Byte COC_TsGauge = 0xa1;
static const Byte COC_TsTrackBar = 0xa5;
static const Byte COC_TsSkinProvider = 0xe0;
static const Byte COC_TsMDIForm = 0xe1;
static const Byte COC_TsFrameAdapter = 0xe2;
static const Byte COC_TsCircleControl = 0xe3;
static const Byte COC_TsAdapter = 0xe6;
static const Byte COC_TsAdapterEdit = 0xe7;
static const Byte COC_Unknown = 0xfa;
extern PACKAGE TsCodes sForbidMouse;
extern PACKAGE TsCodes sNoHotEdits;
extern PACKAGE TsCodes sCanNotBeHot;
extern PACKAGE TsCodes sEditCtrls;
extern PACKAGE TsCodes ssScrolledEdits;
extern PACKAGE TsCodes ssButtons;
extern PACKAGE int ExceptTag;
extern PACKAGE int acWinVer;
extern PACKAGE int SysPopupCount;
extern PACKAGE Forms::TForm* sPopupCalendar;
extern PACKAGE bool acDebugMode;
extern PACKAGE unsigned acPreviewHandle;
extern PACKAGE bool acPreviewNeeded;
extern PACKAGE bool acSkinPreviewUpdating;
extern PACKAGE bool acIgnoreMenuOwnerDraw;
extern PACKAGE int acScrollBtnLength;
extern PACKAGE int acAddedTabSpacing;
extern PACKAGE bool acHtmlStdBreak;
extern PACKAGE int acArrowSize;
extern PACKAGE int acLineWidth;
extern PACKAGE int acAnimCount;
extern PACKAGE int acSpacing;
extern PACKAGE bool ShowHintStored;
extern PACKAGE bool FadingForbidden;
extern PACKAGE bool x64woAero;
extern PACKAGE bool AppShowHint;
extern PACKAGE void *TempControl;
extern PACKAGE bool fGlobalFlag;
extern PACKAGE Controls::TWinControl* acMagnForm;
extern PACKAGE char cMenuCaption;
extern PACKAGE bool ac_UseSysCharSet;
extern PACKAGE bool ac_KeepOwnFont;
extern PACKAGE bool DrawSkinnedMDIWall;
extern PACKAGE bool DrawSkinnedMDIScrolls;
extern PACKAGE int ac_DialogsLevel;
extern PACKAGE bool ac_ChangeThumbPreviews;
extern PACKAGE bool ac_AllowHotEdits;
extern PACKAGE int ac_CXSIZEFRAME;
extern PACKAGE int ac_CXFIXEDFRAME;
extern PACKAGE int ac_CYCAPTION;
extern PACKAGE int ac_CYSMCAPTION;
extern PACKAGE int ac_ArrowWidth;
extern PACKAGE int ac_ArrowHeight;
static const Word SC_DRAGMOVE = 0xf012;
extern PACKAGE _BLENDFUNCTION DefBlend;
extern PACKAGE AnsiString acs_MsgDlgOK;
extern PACKAGE AnsiString acs_MsgDlgCancel;
extern PACKAGE AnsiString acs_MsgDlgHelp;
extern PACKAGE AnsiString acs_RestoreStr;
extern PACKAGE AnsiString acs_MoveStr;
extern PACKAGE AnsiString acs_SizeStr;
extern PACKAGE AnsiString acs_MinimizeStr;
extern PACKAGE AnsiString acs_MaximizeStr;
extern PACKAGE AnsiString acs_CloseStr;
extern PACKAGE AnsiString acs_Calculator;
extern PACKAGE AnsiString acs_FileOpen;
extern PACKAGE AnsiString acs_AvailSkins;
extern PACKAGE AnsiString acs_InternalSkin;
extern PACKAGE AnsiString acs_InvalidDate;
extern PACKAGE AnsiString acs_ColorDlgAdd;
extern PACKAGE AnsiString acs_ColorDlgDefine;
extern PACKAGE AnsiString acs_ColorDlgAddPal;
extern PACKAGE AnsiString acs_ColorDlgTitle;
extern PACKAGE AnsiString acs_ColorDlgRed;
extern PACKAGE AnsiString acs_ColorDlgGreen;
extern PACKAGE AnsiString acs_ColorDlgBlue;
extern PACKAGE AnsiString acs_ColorDlgDecimal;
extern PACKAGE AnsiString acs_ColorDlgHex;
extern PACKAGE AnsiString acs_FrameAdapterError1;
extern PACKAGE AnsiString acs_Font;
extern PACKAGE AnsiString acs_FontColor;
extern PACKAGE AnsiString acs_Root;
extern PACKAGE AnsiString acs_SelectDir;
extern PACKAGE AnsiString acs_Create;
extern PACKAGE AnsiString acs_DirWithSkins;
extern PACKAGE AnsiString acs_SelectSkinTitle;
extern PACKAGE AnsiString acs_SkinPreview;
extern PACKAGE unsigned Lib;
extern PACKAGE void __fastcall InitSysVariables(void);

}	/* namespace Sconst */
using namespace Sconst;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// sConst
