// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sSkinMenus.pas' rev: 31.00 (Windows)

#ifndef SskinmenusHPP
#define SskinmenusHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <acntTypes.hpp>
#include <sConst.hpp>

//-- user supplied -----------------------------------------------------------

namespace Sskinmenus
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TacMenuSupport;
struct TMenuItemData;
struct TacMenuInfo;
class DELPHICLASS TsSkinableMenus;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TsMenuItemType : unsigned char { smCaption, smDivider, smNormal, smTopLine };

typedef void __fastcall (__closure *TsMenuManagerDrawItemEvent)(System::TObject* Sender, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState State, TsMenuItemType ItemType);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TacMenuSupport : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::UnicodeString FIcoLineSkin;
	int FExtraLineWidth;
	bool FCustomFont;
	bool FUseExtraLine;
	Vcl::Graphics::TFont* FExtraLineFont;
	System::Byte FAlphaBlend;
	Vcl::Graphics::TFont* FFont;
	void __fastcall SetExtraLineFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetCustomFont(const bool Value);
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	bool __fastcall FontStored(void);
	bool __fastcall ExtraFontStored(void);
	bool __fastcall LineSkinStored(void);
	
public:
	__fastcall TacMenuSupport(void);
	__fastcall virtual ~TacMenuSupport(void);
	
__published:
	__property System::Byte AlphaBlend = {read=FAlphaBlend, write=FAlphaBlend, default=255};
	__property Vcl::Graphics::TFont* ExtraLineFont = {read=FExtraLineFont, write=SetExtraLineFont, stored=ExtraFontStored};
	__property int ExtraLineWidth = {read=FExtraLineWidth, write=FExtraLineWidth, default=32};
	__property System::UnicodeString IcoLineSkin = {read=FIcoLineSkin, write=FIcoLineSkin, stored=LineSkinStored};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont, stored=FontStored};
	__property bool CustomFont = {read=FCustomFont, write=SetCustomFont, default=0};
	__property bool UseExtraLine = {read=FUseExtraLine, write=FUseExtraLine, default=0};
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TMenuItemData
{
public:
	Vcl::Menus::TMenuItem* Item;
	System::Types::TRect R;
};


struct DECLSPEC_DRECORD TacMenuInfo
{
public:
	Vcl::Menus::TMenuItem* FirstItem;
	Vcl::Graphics::TBitmap* Bmp;
	HWND Wnd;
	bool HaveExtraLine;
	bool ItemsIterated;
};


class PASCALIMPLEMENTATION TsSkinableMenus : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	int FMargin;
	int FSpacing;
	int FBevelWidth;
	int FBorderWidth;
	int FSkinBorderWidth;
	TsMenuItemType it;
	Vcl::Graphics::TFont* FCaptionFont;
	System::Classes::TAlignment FAlignment;
	void __fastcall SetCaptionFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetAlignment(const System::Classes::TAlignment Value);
	void __fastcall SetBevelWidth(const int Value);
	void __fastcall SetBorderWidth(const int Value);
	int __fastcall GetSkinBorderWidth(void);
	Vcl::Graphics::TFont* __fastcall GetCaptionFont(void);
	
protected:
	TsMenuManagerDrawItemEvent FOnDrawItem;
	int __fastcall ParentHeight(Vcl::Graphics::TCanvas* aCanvas, Vcl::Menus::TMenuItem* Item);
	int __fastcall GetItemHeight(Vcl::Graphics::TCanvas* aCanvas, Vcl::Menus::TMenuItem* Item);
	int __fastcall ParentWidth(Vcl::Graphics::TCanvas* aCanvas, Vcl::Menus::TMenuItem* Item);
	int __fastcall GetItemWidth(Vcl::Graphics::TCanvas* aCanvas, Vcl::Menus::TMenuItem* Item, const TacMenuInfo &mi);
	void __fastcall PaintDivider(Vcl::Graphics::TCanvas* aCanvas, const System::Types::TRect &aRect, Vcl::Menus::TMenuItem* Item, Vcl::Graphics::TBitmap* MenuBmp, const TacMenuInfo &mi);
	void __fastcall PaintCaption(Vcl::Graphics::TCanvas* aCanvas, const System::Types::TRect &aRect, Vcl::Menus::TMenuItem* Item, Vcl::Graphics::TBitmap* BG, const TacMenuInfo &mi);
	bool __fastcall IsDivText(Vcl::Menus::TMenuItem* Item);
	System::Types::TRect __fastcall ItemRect(Vcl::Menus::TMenuItem* Item, const System::Types::TRect &aRect);
	int __fastcall CursorMarginH(void);
	int __fastcall CursorMarginV(void);
	void __fastcall UpdateFont(Vcl::Graphics::TCanvas* aCanvas, Vcl::Menus::TMenuItem* aItem, bool aBold, bool aCaption = false);
	
public:
	bool Pressed;
	bool FActive;
	bool BorderDrawing;
	Acnttypes::TRects ArOR;
	System::Classes::TComponent* FOwner;
	System::TObject* MenuProvider;
	bool __fastcall IsTopLine(Vcl::Menus::TMenuItem* Item);
	void __fastcall sMeasureItem(System::TObject* Sender, Vcl::Graphics::TCanvas* ACanvas, int &Width, int &Height);
	void __fastcall sAdvancedDrawItem(System::TObject* Sender, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState State);
	void __fastcall DrawWndBorder(HWND Wnd, Vcl::Graphics::TBitmap* MenuBmp);
	Vcl::Graphics::TBitmap* __fastcall PrepareMenuBG(Vcl::Menus::TMenuItem* Item, int Width, int Height, HWND Wnd = (HWND)(0x0));
	void __fastcall sMeasureLineItem(System::TObject* Sender, Vcl::Graphics::TCanvas* ACanvas, int &Width, int &Height);
	void __fastcall sAdvancedDrawLineItem(System::TObject* Sender, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState State);
	void __fastcall SetActive(const bool Value);
	__fastcall TsSkinableMenus(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsSkinableMenus(void);
	bool __fastcall NoBorder(void);
	int __fastcall RealBorderWidth(void);
	void __fastcall InitItem(Vcl::Menus::TMenuItem* Item, bool A);
	void __fastcall InitItems(bool A);
	void __fastcall InitMenuLine(Vcl::Menus::TMainMenu* Menu, bool A);
	void __fastcall HookItem(Vcl::Menus::TMenuItem* MenuItem, bool AActive);
	void __fastcall HookPopupMenu(Vcl::Menus::TPopupMenu* Menu, bool Active);
	void __fastcall UpdateMenus(void);
	bool __fastcall LastItem(Vcl::Menus::TMenuItem* Item);
	bool __fastcall IsPopupItem(Vcl::Menus::TMenuItem* Item);
	TacMenuInfo __fastcall GetMenuInfo(Vcl::Menus::TMenuItem* Item, const int aWidth, const int aHeight, Vcl::Graphics::TCanvas* aCanvas, HWND aWnd = (HWND)(0x0));
	int __fastcall ExtraWidth(const TacMenuInfo &mi);
	
__published:
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, nodefault};
	__property int BevelWidth = {read=FBevelWidth, write=SetBevelWidth, default=0};
	__property int BorderWidth = {read=FBorderWidth, write=SetBorderWidth, default=3};
	__property Vcl::Graphics::TFont* CaptionFont = {read=GetCaptionFont, write=SetCaptionFont};
	__property int SkinBorderWidth = {read=GetSkinBorderWidth, write=FSkinBorderWidth, nodefault};
	__property int Margin = {read=FMargin, write=FMargin, default=2};
	__property int Spacing = {read=FSpacing, write=FSpacing, default=8};
	__property TsMenuManagerDrawItemEvent OnDrawItem = {read=FOnDrawItem, write=FOnDrawItem};
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::TObject* MDISkinProvider;
extern DELPHI_PACKAGE bool acCanHookMenu;
extern DELPHI_PACKAGE Vcl::Graphics::TFont* CustomMenuFont;
extern DELPHI_PACKAGE int iDefIcoLineWidth;
#define s_SysMenu L"acSysMenu"
extern DELPHI_PACKAGE bool __fastcall ChildIconPresent(void);
extern DELPHI_PACKAGE Vcl::Menus::TMenuItem* __fastcall GetFirstItem(Vcl::Menus::TMenuItem* Item);
extern DELPHI_PACKAGE void __fastcall DeleteUnusedBmps(bool DeleteAll);
extern DELPHI_PACKAGE void __fastcall ClearCache(void);
}	/* namespace Sskinmenus */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SSKINMENUS)
using namespace Sskinmenus;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SskinmenusHPP
