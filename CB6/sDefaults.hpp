// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sDefaults.pas' rev: 6.00

#ifndef sDefaultsHPP
#define sDefaultsHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <sConst.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sdefaults
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TacThirdPartyTypes { tpEdit, tpButton, tpBitBtn, tpCheckBox, tpComboBox, tpGrid, tpGroupBox, tpListView, tpPanel, tpTreeView, tpwwEdit, tpGridEh, tpVirtualTree, tpPageControl, tpTabControl, tpToolBar, tpStatusBar, tpSpeedButton, tpScrollControl, tpUpDownBtn, tpScrollBar, tpStaticText, tpNativePaint };
#pragma option pop

typedef AnsiString sDefaults__1[23];

typedef AnsiString sDefaults__2[23];

//-- var, const, procedure ---------------------------------------------------
#define acLastSupportedType (TacThirdPartyTypes)(22)
static const char sl_Third_Edit = '\x20';
static const char sl_Third_Panel = '\x20';
#define sl_Third_Button "TButton"
static const char sl_Third_BitBtn = '\x20';
static const char sl_Third_CheckBox = '\x20';
static const char sl_Third_GroupBox = '\x20';
static const char sl_Third_Grid = '\x20';
static const char sl_Third_TreeView = '\x20';
static const char sl_Third_ComboBox = '\x20';
static const char sl_Third_ListView = '\x20';
static const char sl_Third_WWEdit = '\x20';
static const char sl_Third_GridEH = '\x20';
static const char sl_Third_VirtualTree = '\x20';
static const char sl_Third_PageControl = '\x20';
static const char sl_Third_TabControl = '\x20';
static const char sl_Third_ToolBar = '\x20';
static const char sl_Third_StatusBar = '\x20';
static const char sl_Third_SpeedButton = '\x20';
static const char sl_Third_ScrollControl = '\x20';
static const char sl_Third_UpDownBtn = '\x20';
static const char sl_Third_ScrollBar = '\x20';
static const char sl_Third_WebBrowser = '\x20';
static const char sl_Third_StaticText = '\x20';
static const char sl_Third_NativePaint = '\x20';
extern PACKAGE AnsiString acThirdNames[23];
extern PACKAGE AnsiString acThirdCaptions[23];
#define DefSkinsDir "c:\\Skins"
#define DefDisabledKind (System::Set<sConst__3, dkBlended, dkGrayed> () << sConst__3(0) )
#define DefDisabledGlyphKind EMPTYSET
static const bool DefBoundLabelParentFont = true;
static const bool DefMakeSkinMenu = false;
static const Shortint DefButtonMargin = 0xffffffff;
#define DefWeekends (System::Set<Comctrls::TCalDayOfWeek, dowMonday, dowLocaleDefault> () << Comctrls::TCalDayOfWeek(6) )
extern PACKAGE bool ACPngFirst;
extern PACKAGE double DefDisabledBlend;
extern PACKAGE Byte DefBlendDisabled;
extern PACKAGE int DefDisabledSaturation;

}	/* namespace Sdefaults */
using namespace Sdefaults;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// sDefaults
