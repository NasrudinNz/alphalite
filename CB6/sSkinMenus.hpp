// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sSkinMenus.pas' rev: 6.00

#ifndef sSkinMenusHPP
#define sSkinMenusHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <sConst.hpp>	// Pascal unit
#include <acntTypes.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sskinmenus
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TsMenuItemType { smCaption, smDivider, smNormal, smTopLine };
#pragma option pop

typedef void __fastcall (__closure *TsMenuManagerDrawItemEvent)(System::TObject* Sender, Graphics::TCanvas* ACanvas, const Types::TRect &ARect, Windows::TOwnerDrawState State, TsMenuItemType ItemType);

class DELPHICLASS TacMenuSupport;
class PASCALIMPLEMENTATION TacMenuSupport : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	AnsiString FIcoLineSkin;
	int FExtraLineWidth;
	bool FCustomFont;
	bool FUseExtraLine;
	Graphics::TFont* FExtraLineFont;
	Byte FAlphaBlend;
	Graphics::TFont* FFont;
	void __fastcall SetExtraLineFont(const Graphics::TFont* Value);
	void __fastcall SetCustomFont(const bool Value);
	void __fastcall SetFont(const Graphics::TFont* Value);
	bool __fastcall FontStored(void);
	bool __fastcall ExtraFontStored(void);
	bool __fastcall LineSkinStored(void);
	
public:
	__fastcall TacMenuSupport(void);
	__fastcall virtual ~TacMenuSupport(void);
	
__published:
	__property Byte AlphaBlend = {read=FAlphaBlend, write=FAlphaBlend, default=255};
	__property Graphics::TFont* ExtraLineFont = {read=FExtraLineFont, write=SetExtraLineFont, stored=ExtraFontStored};
	__property int ExtraLineWidth = {read=FExtraLineWidth, write=FExtraLineWidth, default=32};
	__property AnsiString IcoLineSkin = {read=FIcoLineSkin, write=FIcoLineSkin, stored=LineSkinStored};
	__property Graphics::TFont* Font = {read=FFont, write=SetFont, stored=FontStored};
	__property bool CustomFont = {read=FCustomFont, write=SetCustomFont, default=0};
	__property bool UseExtraLine = {read=FUseExtraLine, write=FUseExtraLine, default=0};
};


#pragma pack(push, 4)
struct TMenuItemData
{
	Menus::TMenuItem* Item;
	Types::TRect R;
} ;
#pragma pack(pop)

#pragma pack(push, 4)
struct TacMenuInfo
{
	Menus::TMenuItem* FirstItem;
	Graphics::TBitmap* Bmp;
	HWND Wnd;
	bool HaveExtraLine;
	bool ItemsIterated;
} ;
#pragma pack(pop)

class DELPHICLASS TsSkinableMenus;
class PASCALIMPLEMENTATION TsSkinableMenus : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	int FMargin;
	int FSpacing;
	int FBevelWidth;
	int FBorderWidth;
	int FSkinBorderWidth;
	TsMenuItemType it;
	Graphics::TFont* FCaptionFont;
	Classes::TAlignment FAlignment;
	void __fastcall SetCaptionFont(const Graphics::TFont* Value);
	void __fastcall SetAlignment(const Classes::TAlignment Value);
	void __fastcall SetBevelWidth(const int Value);
	void __fastcall SetBorderWidth(const int Value);
	int __fastcall GetSkinBorderWidth(void);
	Graphics::TFont* __fastcall GetCaptionFont(void);
	
protected:
	TsMenuManagerDrawItemEvent FOnDrawItem;
	int __fastcall ParentHeight(Graphics::TCanvas* aCanvas, Menus::TMenuItem* Item);
	int __fastcall GetItemHeight(Graphics::TCanvas* aCanvas, Menus::TMenuItem* Item);
	int __fastcall ParentWidth(Graphics::TCanvas* aCanvas, Menus::TMenuItem* Item);
	int __fastcall GetItemWidth(Graphics::TCanvas* aCanvas, Menus::TMenuItem* Item, const TacMenuInfo &mi);
	void __fastcall PaintDivider(Graphics::TCanvas* aCanvas, const Types::TRect &aRect, Menus::TMenuItem* Item, Graphics::TBitmap* MenuBmp, const TacMenuInfo &mi);
	void __fastcall PaintCaption(Graphics::TCanvas* aCanvas, const Types::TRect &aRect, Menus::TMenuItem* Item, Graphics::TBitmap* BG, const TacMenuInfo &mi);
	bool __fastcall IsDivText(Menus::TMenuItem* Item);
	Types::TRect __fastcall ItemRect(Menus::TMenuItem* Item, const Types::TRect &aRect);
	int __fastcall CursorMarginH(void);
	int __fastcall CursorMarginV(void);
	void __fastcall UpdateFont(Graphics::TCanvas* aCanvas, Menus::TMenuItem* aItem, bool aBold, bool aCaption = false);
	
public:
	bool Pressed;
	bool FActive;
	bool BorderDrawing;
	DynamicArray<Types::TRect >  ArOR;
	Classes::TComponent* FOwner;
	System::TObject* MenuProvider;
	bool __fastcall IsTopLine(Menus::TMenuItem* Item);
	void __fastcall sMeasureItem(System::TObject* Sender, Graphics::TCanvas* ACanvas, int &Width, int &Height);
	void __fastcall sAdvancedDrawItem(System::TObject* Sender, Graphics::TCanvas* ACanvas, const Types::TRect &ARect, Windows::TOwnerDrawState State);
	void __fastcall DrawWndBorder(HWND Wnd, Graphics::TBitmap* MenuBmp);
	Graphics::TBitmap* __fastcall PrepareMenuBG(Menus::TMenuItem* Item, int Width, int Height, HWND Wnd = (HWND)(0x0));
	void __fastcall sMeasureLineItem(System::TObject* Sender, Graphics::TCanvas* ACanvas, int &Width, int &Height);
	void __fastcall sAdvancedDrawLineItem(System::TObject* Sender, Graphics::TCanvas* ACanvas, const Types::TRect &ARect, Windows::TOwnerDrawState State);
	void __fastcall SetActive(const bool Value);
	__fastcall TsSkinableMenus(Classes::TComponent* AOwner);
	__fastcall virtual ~TsSkinableMenus(void);
	bool __fastcall NoBorder(void);
	int __fastcall RealBorderWidth(void);
	void __fastcall InitItem(Menus::TMenuItem* Item, bool A);
	void __fastcall InitItems(bool A);
	void __fastcall InitMenuLine(Menus::TMainMenu* Menu, bool A);
	void __fastcall HookItem(Menus::TMenuItem* MenuItem, bool AActive);
	void __fastcall HookPopupMenu(Menus::TPopupMenu* Menu, bool Active);
	void __fastcall UpdateMenus(void);
	bool __fastcall LastItem(Menus::TMenuItem* Item);
	bool __fastcall IsPopupItem(Menus::TMenuItem* Item);
	TacMenuInfo __fastcall GetMenuInfo(Menus::TMenuItem* Item, const int aWidth, const int aHeight, Graphics::TCanvas* aCanvas, HWND aWnd = (HWND)(0x0));
	int __fastcall ExtraWidth(const TacMenuInfo &mi);
	
__published:
	__property Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, nodefault};
	__property int BevelWidth = {read=FBevelWidth, write=SetBevelWidth, default=0};
	__property int BorderWidth = {read=FBorderWidth, write=SetBorderWidth, default=3};
	__property Graphics::TFont* CaptionFont = {read=GetCaptionFont, write=SetCaptionFont};
	__property int SkinBorderWidth = {read=GetSkinBorderWidth, write=FSkinBorderWidth, nodefault};
	__property int Margin = {read=FMargin, write=FMargin, default=2};
	__property int Spacing = {read=FSpacing, write=FSpacing, default=8};
	__property TsMenuManagerDrawItemEvent OnDrawItem = {read=FOnDrawItem, write=FOnDrawItem};
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE System::TObject* MDISkinProvider;
extern PACKAGE bool acCanHookMenu;
extern PACKAGE Graphics::TFont* CustomMenuFont;
extern PACKAGE int iDefIcoLineWidth;
#define s_SysMenu "acSysMenu"
extern PACKAGE bool __fastcall ChildIconPresent(void);
extern PACKAGE Menus::TMenuItem* __fastcall GetFirstItem(Menus::TMenuItem* Item);
extern PACKAGE void __fastcall DeleteUnusedBmps(bool DeleteAll);
extern PACKAGE void __fastcall ClearCache(void);

}	/* namespace Sskinmenus */
using namespace Sskinmenus;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// sSkinMenus
