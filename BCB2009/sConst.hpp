// CodeGear C++Builder
// Copyright (c) 1995, 2008 by CodeGear
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Sconst.pas' rev: 20.00

#ifndef SconstHPP
#define SconstHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Comctrls.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Stdctrls.hpp>	// Pascal unit

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
	__property AutoSize = {default=0};
	__property ParentColor = {default=1};
	__property Color = {default=-16777211};
	__property ParentFont = {default=1};
	__property PopupMenu;
	__property Font;
public:
	/* TControl.Create */ inline __fastcall virtual TsAccessControl(Classes::TComponent* AOwner) : Controls::TControl(AOwner) { }
	/* TControl.Destroy */ inline __fastcall virtual ~TsAccessControl(void) { }
	
};


typedef System::UnicodeString ACString;

typedef System::WideChar ACChar;

typedef System::WideChar * PACChar;

typedef int ACNativeInt;

typedef int ACLongInt;

typedef unsigned ACUInt;

typedef unsigned ACNativeUInt;

typedef char OldChar;

typedef char * POldChar;

typedef System::AnsiString OldString;

typedef System::PAnsiString POldString;

typedef System::UnicodeString *PACString;

typedef void __fastcall (__closure *TPaintEvent)(System::TObject* Sender, Graphics::TCanvas* Canvas);

typedef void __fastcall (__closure *TBmpPaintEvent)(System::TObject* Sender, Graphics::TBitmap* Bmp);

typedef System::UnicodeString TsSkinName;

typedef System::UnicodeString TsDirectory;

typedef System::UnicodeString TsSkinSection;

typedef System::UnicodeString TacStrValue;

typedef System::UnicodeString TacRoot;

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

struct TacBGInfo
{
	
public:
	Graphics::TBitmap* Bmp;
	Graphics::TColor Color;
	Types::TPoint Offset;
	Types::TRect R;
	Types::TRect FillRect;
	TacBGType BgType;
	bool PleaseDraw;
	HDC DrawDC;
};


struct TCacheInfo
{
	
public:
	Graphics::TBitmap* Bmp;
	int X;
	int Y;
	Graphics::TColor FillColor;
	Types::TRect FillRect;
	bool Ready;
};


struct TacPaintInfo
{
	
public:
	int State;
	int FontIndex;
	Types::TRect R;
	System::TObject* SkinManager;
};


typedef TacPaintInfo *PacPaintInfo;

typedef DynamicArray<Types::TPoint> TPoints;

typedef TPoints *PPoints;

typedef ShortInt TPercent;

typedef Set<Byte, 1, 255>  TsCodes;

#pragma option push -b-
enum TsShadowingShape { ssRectangle, ssEllipse };
#pragma option pop

#pragma option push -b-
enum TsWindowShowMode { soHide, soNormal, soShowMinimized, soMaximize, soShowNoActivate, soShow, soMinimize, soShowMinNoActive, soShowNA, soRestore, soDefault };
#pragma option pop

#pragma pack(push,1)
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
			System::Byte R;
			System::Byte G;
			System::Byte B;
			System::Byte A;
			
		};
		struct 
		{
			Graphics::TColor C;
			
		};
		
	};
};
#pragma pack(pop)


#pragma pack(push,1)
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
			System::Byte Red;
			System::Byte Green;
			System::Byte Blue;
			System::Byte Alpha;
			
		};
		struct 
		{
			Graphics::TColor Col;
			
		};
		
	};
};
#pragma pack(pop)


#pragma pack(push,1)
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
			System::Byte DB;
			System::Byte DG;
			System::Byte DR;
			System::Byte DA;
			
		};
		struct 
		{
			Graphics::TColor DC;
			
		};
		
	};
};
#pragma pack(pop)


#pragma pack(push,1)
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
			System::Byte SB;
			System::Byte SG;
			System::Byte SR;
			System::Byte SA;
			
		};
		struct 
		{
			Graphics::TColor SC;
			
		};
		
	};
};
#pragma pack(pop)


#pragma pack(push,1)
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
			System::Byte MB;
			System::Byte MG;
			System::Byte MR;
			System::Byte MA;
			
		};
		struct 
		{
			Graphics::TColor MC;
			
		};
		
	};
};
#pragma pack(pop)


#pragma pack(push,1)
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
			System::Byte B;
			System::Byte G;
			System::Byte R;
			System::Byte A;
			
		};
		struct 
		{
			Graphics::TColor C;
			
		};
		
	};
};
#pragma pack(pop)


#pragma pack(push,1)
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
			System::Byte Blue;
			System::Byte Green;
			System::Byte Red;
			System::Byte Alpha;
			
		};
		struct 
		{
			Graphics::TColor Col;
			
		};
		
	};
};
#pragma pack(pop)


typedef StaticArray<TsColor, 10001> TRGBAArray;

typedef TRGBAArray *PRGBAArray;

typedef StaticArray<TsColor_, 10001> TRGBAArray_;

typedef TRGBAArray_ *PRGBAArray_;

typedef StaticArray<TsColor_D, 10001> TRGBAArray_D;

typedef TRGBAArray_D *PRGBAArray_D;

typedef StaticArray<TsColor_S, 10001> TRGBAArray_S;

typedef TRGBAArray_S *PRGBAArray_S;

typedef StaticArray<TsColor_M, 10001> TRGBAArray_M;

typedef TRGBAArray_M *PRGBAArray_M;

#pragma option push -b-
enum Sconst__2 { dgBlended, dgGrayed };
#pragma option pop

typedef Set<Sconst__2, dgBlended, dgGrayed>  TsDisabledGlyphKind;

#pragma option push -b-
enum Sconst__3 { dkBlended, dkGrayed };
#pragma option pop

typedef Set<Sconst__3, dkBlended, dkGrayed>  TsDisabledKind;

typedef TsDisabledKind *PsDisabledKind;

#pragma pack(push,1)
struct TsGradPoint
{
	
public:
	System::Word Index;
	int Mode;
	TsColor Color;
	TPercent Percent;
};
#pragma pack(pop)


typedef DynamicArray<TsGradPoint> TsGradArray;

typedef StaticArray<System::UnicodeString, 4> Sconst__4;

typedef StaticArray<System::UnicodeString, 4> Sconst__5;

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
static const System::WideChar TexChar = (System::WideChar)(0x7e);
static const System::WideChar ZeroChar = (System::WideChar)(0x30);
static const System::WideChar CharOne = (System::WideChar)(0x31);
static const System::WideChar CharQuest = (System::WideChar)(0x3f);
static const System::WideChar CharDiez = (System::WideChar)(0x23);
static const System::WideChar CharExt = (System::WideChar)(0x21);
static const System::WideChar CharGlyph = (System::WideChar)(0x40);
static const System::WideChar CharMask = (System::WideChar)(0x5e);
static const System::WideChar CharMinus = (System::WideChar)(0x2d);
static const System::WideChar CharPlus = (System::WideChar)(0x2b);
static const System::WideChar CharSemicolon = (System::WideChar)(0x3b);
static const Word i360 = 0x168;
static const Word i270 = 0x10e;
static const Byte i180 = 0xb4;
static const ShortInt i90 = 0x5a;
static const Word ACS_PRINTING = 0x200;
static const Word ACS_MNUPDATING = 0x400;
static const Word ACS_LOCKED = 0x800;
static const Word ACS_FOCUSCHANGING = 0x1000;
static const Word ACS_CHANGING = 0x2000;
static const Word ACS_BGRECEIVING = 0x4000;
static const Word ACS_REPAINTNEEDH = 0x8000;
static const int ACS_REPAINTNEEDV = 0x10000;
static const ShortInt BGT_NONE = 0x0;
static const ShortInt BGT_GRADIENTHORZ = 0x1;
static const ShortInt BGT_GRADIENTVERT = 0x2;
static const ShortInt BGT_STRETCH = 0x4;
static const ShortInt BGT_TEXTURELEFT = 0x10;
static const ShortInt BGT_TEXTURETOP = 0x20;
static const ShortInt BGT_TEXTURERIGHT = 0x40;
static const Byte BGT_TEXTUREBOTTOM = 0x80;
static const ShortInt BGT_TEXTUREVERT = 0x50;
static const Byte BGT_TEXTUREHORZ = 0xa0;
static const ShortInt BGT_STRETCHVERT = 0x54;
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
static const ShortInt ACT_RELCAPT = -1;
extern PACKAGE StaticArray<System::Byte, 8> PNGMagic;
extern PACKAGE StaticArray<Stdctrls::TCheckBoxState, 3> CheckBoxStates;
extern PACKAGE StaticArray<System::Word, 3> acAlignmentArray;
extern PACKAGE StaticArray<unsigned, 2> TextWrapping;
extern PACKAGE StaticArray<unsigned, 2> TextEllips;
static const int NCS_DROPSHADOW = 0x20000;
static const ShortInt BS_SPLITBUTTON = 0xc;
static const ShortInt BS_DEFSPLITBUTTON = 0xd;
static const ShortInt BS_COMMANDLINK = 0xe;
static const ShortInt BS_DEFCOMMANDLINK = 0xf;
extern PACKAGE TCacheInfo EmptyCI;
extern PACKAGE TsColor sFuchsia;
extern PACKAGE Sconst__4 sTabPositions;
extern PACKAGE StaticArray<int, 4> aScalePercents;
extern PACKAGE Sconst__5 aSfxs;
#define s_RegName L"AlphaSkins"
#define s_IntSkinsPath L"IntSkinsPath"
#define s_WinControlForm L"TWinControlForm"
#define s_NoFocusProp L"ACNOFOCUS"
#define s_acScale L"ACSCALE"
#define s_Arial L"Arial"
#define s_MSSansSerif L"MS Sans Serif"
#define s_Webdings L"Webdings"
#define s_PreviewKey L"/acpreview"
#define s_EditorCapt L"AlphaSkins Editor"
static const ShortInt ASE_CLOSE = 0x1;
static const ShortInt ASE_UPDATE = 0x2;
static const ShortInt ASE_HELLO = 0x3;
static const ShortInt ASE_ALIVE = 0x4;
static const Word ASE_MSG = 0xa400;
#define MasterBmpName L"Master.bmp"
#define OptionsDatName L"Options.dat"
#define acSkinExt L"asz"
#define acPngExt L"png"
#define acIcoExt L"ico"
#define s_MinusOne L"-1"
#define s_TrueStr L"TRUE"
#define s_NewFolder L"New folder"
#define s_SkinSelectItemName L"SkinSelectItem"
#define s_SkinData L"SkinData"
static const System::WideChar s_Slash = (System::WideChar)(0x5c);
static const System::WideChar s_Space = (System::WideChar)(0x20);
static const System::WideChar s_Comma = (System::WideChar)(0x2c);
static const System::WideChar s_Dot = (System::WideChar)(0x2e);
#define s_0D0A L"\r\n"
#define s_Ellipsis L"..."
static const ShortInt ac_MaxPropsIndex = 0x2;
static const ShortInt NOCHILDRENPRINT = -2;
static const ShortInt BDM_STRETCH = 0x1;
static const ShortInt BDM_ACTIVEONLY = 0x2;
static const ShortInt BDM_FILL = 0x4;
static const ShortInt HTSB_LEFT_BUTTON = 0x64;
static const ShortInt HTSB_RIGHT_BUTTON = 0x65;
static const ShortInt HTSB_TOP_BUTTON = 0x66;
static const ShortInt HTSB_BOTTOM_BUTTON = 0x67;
static const ShortInt HTSB_H_SCROLL = 0x68;
static const ShortInt HTSB_HB_SCROLL = 0x69;
static const ShortInt HTSB_V_SCROLL = 0x6a;
static const ShortInt HTSB_VB_SCROLL = 0x6b;
static const ShortInt HTCHILDCLOSE = 0x65;
static const ShortInt HTCHILDMAX = 0x66;
static const ShortInt HTCHILDMIN = 0x67;
static const ShortInt acCloseBtnSize = 0xf;
static const ShortInt acMultipNormal = 0x2;
static const ShortInt acMaxIterations = 0x6;
static const ShortInt acTimerInterval = 0xc;
extern PACKAGE StaticArray<TacImgType, 5> acImgTypes;
extern PACKAGE StaticArray<TacFillMode, 15> acFillModes;
extern PACKAGE StaticArray<TacBtnEvent, 5> acBtnEvents;
static const ShortInt COC_TsCustom = 0x1;
static const ShortInt COC_TsSpinEdit = 0x2;
static const ShortInt COC_TsEdit = 0x3;
static const ShortInt COC_TsMemo = 0x7;
static const ShortInt COC_TsListBox = 0x8;
static const ShortInt COC_TsColorBox = 0x9;
static const ShortInt COC_TsListView = 0xa;
static const ShortInt COC_TsCurrencyEdit = 0xc;
static const ShortInt COC_TsComboBox = 0xd;
static const ShortInt COC_TsTreeView = 0xe;
static const ShortInt COC_TsComboBoxEx = 0x12;
static const ShortInt COC_TsFrameBar = 0x13;
static const ShortInt COC_TsBarTitle = 0x14;
static const ShortInt COC_TsCheckBox = 0x20;
static const ShortInt COC_TsDBCheckBox = 0x20;
static const ShortInt COC_TsRadioButton = 0x21;
static const ShortInt COC_TsSlider = 0x22;
static const ShortInt COC_TsImage = 0x32;
static const ShortInt COC_TsPanel = 0x33;
static const ShortInt COC_TsCoolBar = 0x35;
static const ShortInt COC_TsToolBar = 0x36;
static const ShortInt COC_TsDragBar = 0x38;
static const ShortInt COC_TsTabSheet = 0x39;
static const ShortInt COC_TsScrollBox = 0x3a;
static const ShortInt COC_TsMonthCalendar = 0x3b;
static const ShortInt COC_TsGroupBox = 0x4a;
static const ShortInt COC_TsSplitter = 0x4b;
static const ShortInt COC_TsDBEdit = 0x4c;
static const ShortInt COC_TsDBMemo = 0x4e;
static const ShortInt COC_TsDBComboBox = 0x51;
static const ShortInt COC_TsDBLookupComboBox = 0x52;
static const ShortInt COC_TsDBListBox = 0x53;
static const ShortInt COC_TsDBLookupListBox = 0x54;
static const ShortInt COC_TsDBGrid = 0x55;
static const ShortInt COC_TsSpeedButton = 0x5c;
static const ShortInt COC_TsButton = 0x5d;
static const ShortInt COC_TsBitBtn = 0x5e;
static const ShortInt COC_TsNavButton = 0x62;
static const ShortInt COC_TsBevel = 0x6e;
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
extern PACKAGE System::WideChar cMenuCaption;
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
extern PACKAGE System::UnicodeString acs_MsgDlgOK;
extern PACKAGE System::UnicodeString acs_MsgDlgCancel;
extern PACKAGE System::UnicodeString acs_MsgDlgHelp;
extern PACKAGE System::UnicodeString acs_RestoreStr;
extern PACKAGE System::UnicodeString acs_MoveStr;
extern PACKAGE System::UnicodeString acs_SizeStr;
extern PACKAGE System::UnicodeString acs_MinimizeStr;
extern PACKAGE System::UnicodeString acs_MaximizeStr;
extern PACKAGE System::UnicodeString acs_CloseStr;
extern PACKAGE System::UnicodeString acs_Calculator;
extern PACKAGE System::UnicodeString acs_FileOpen;
extern PACKAGE System::UnicodeString acs_AvailSkins;
extern PACKAGE System::UnicodeString acs_InternalSkin;
extern PACKAGE System::UnicodeString acs_InvalidDate;
extern PACKAGE System::UnicodeString acs_ColorDlgAdd;
extern PACKAGE System::UnicodeString acs_ColorDlgDefine;
extern PACKAGE System::UnicodeString acs_ColorDlgAddPal;
extern PACKAGE System::UnicodeString acs_ColorDlgTitle;
extern PACKAGE System::UnicodeString acs_ColorDlgRed;
extern PACKAGE System::UnicodeString acs_ColorDlgGreen;
extern PACKAGE System::UnicodeString acs_ColorDlgBlue;
extern PACKAGE System::UnicodeString acs_ColorDlgDecimal;
extern PACKAGE System::UnicodeString acs_ColorDlgHex;
extern PACKAGE System::UnicodeString acs_FrameAdapterError1;
extern PACKAGE System::UnicodeString acs_Font;
extern PACKAGE System::UnicodeString acs_FontColor;
extern PACKAGE System::UnicodeString acs_Root;
extern PACKAGE System::UnicodeString acs_SelectDir;
extern PACKAGE System::UnicodeString acs_Create;
extern PACKAGE System::UnicodeString acs_DirWithSkins;
extern PACKAGE System::UnicodeString acs_SelectSkinTitle;
extern PACKAGE System::UnicodeString acs_SkinPreview;
extern PACKAGE unsigned Lib;
extern PACKAGE void __fastcall InitSysVariables(void);

}	/* namespace Sconst */
using namespace Sconst;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SconstHPP
