// Borland C++ Builder
// Copyright (c) 1995, 2005 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Acdials.pas' rev: 10.00

#ifndef AcdialsHPP
#define AcdialsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Sysutils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <Stdctrls.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Acnttypes.hpp>	// Pascal unit
#include <Sskinprovider.hpp>	// Pascal unit
#include <Acsbutils.hpp>	// Pascal unit
#include <Scommondata.hpp>	// Pascal unit
#include <Sskinmanager.hpp>	// Pascal unit
#include <Sconst.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acdials
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TacBorderStyle { acbsDialog, acbsSingle, acbsNone, acbsSizeable, acbsToolWindow, acbsSizeToolWin };
#pragma option pop

class DELPHICLASS TacSystemMenu;
class DELPHICLASS TacDialogWnd;
class DELPHICLASS TacProvider;
class PASCALIMPLEMENTATION TacProvider : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
public:
	unsigned CtrlHandle;
	Sskinprovider::TsSkinProvider* sp;
	TacDialogWnd* ListSW;
	Classes::TList* acSkinnedCtrls;
	__fastcall virtual ~TacProvider(void);
	void __fastcall InitForm(Forms::TCustomForm* Form);
	bool __fastcall InitSkin(HWND aHandle);
	bool __fastcall InitHwndControls(HWND hWnd);
	bool __fastcall PrintHwndControls(HWND hWnd, HDC DC);
	bool __fastcall AddControl(HWND aHwnd);
public:
	#pragma option push -w-inl
	/* TComponent.Create */ inline __fastcall virtual TacProvider(Classes::TComponent* AOwner) : Classes::TComponent(AOwner) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TacDialogWnd : public Acsbutils::TacScrollWnd 
{
	typedef Acsbutils::TacScrollWnd inherited;
	
protected:
	int CurrentHT;
	int FCaptionSkinIndex;
	bool Initialized;
	bool FFormActive;
	bool AnimClosing;
	bool FWMPaintForbidden;
	Sskinprovider::TacMoveTimer* MoveTimer;
	void __fastcall InitExBorders(const bool Active);
	
public:
	DynamicArray<Types::TRect >  ArOR;
	Sskinprovider::TsCaptionButton ButtonMin;
	Sskinprovider::TsCaptionButton ButtonMax;
	Sskinprovider::TsCaptionButton ButtonHelp;
	Sskinprovider::TsCaptionButton ButtonClose;
	Graphics::TBitmap* TitleBG;
	Graphics::TBitmap* TempBmp;
	Graphics::TBitmap* TitleGlyph;
	int dwStyle;
	int dwExStyle;
	Acnttypes::TacGlowForm* CoverForm;
	Sskinprovider::TacBorderForm* BorderForm;
	#pragma pack(push,1)
	Types::TRect LastClientRect;
	#pragma pack(pop)
	HICON TitleIcon;
	Graphics::TFont* TitleFont;
	unsigned FormState;
	bool RgnChanged;
	TacBorderStyle BorderStyle;
	Sskinprovider::TacCtrlAdapter* Adapter;
	TacSystemMenu* SystemMenu;
	TacProvider* Provider;
	int TitleIndex;
	void __fastcall SendToAdapter(const Messages::TMessage &Message);
	void __fastcall MakeTitleBG(void);
	void __fastcall PaintAll(void);
	void __fastcall PaintBorderIcons(void);
	void __fastcall PaintCaption(const HDC DC);
	void __fastcall PaintForm(HDC &DC);
	void __fastcall PrepareTitleGlyph(void);
	void __fastcall RepaintButton(int i);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	virtual void __fastcall AfterCreation(void);
	__fastcall virtual ~TacDialogWnd(void);
	void __fastcall InitParams(void);
	void __fastcall UpdateIconsIndexes(void);
	void __fastcall KillAnimations(void);
	void __fastcall Ac_WMPaint(Messages::TWMPaint &Message);
	void __fastcall Ac_WMNCPaint(Messages::TMessage &Message);
	void __fastcall Ac_WMNCHitTest(Messages::TMessage &Message);
	void __fastcall Ac_WMNCLButtonDown(Messages::TWMNCHitMessage &Message);
	void __fastcall Ac_WMLButtonUp(Messages::TMessage &Message);
	void __fastcall Ac_WMNCActivate(Messages::TMessage &Message);
	void __fastcall Ac_DrawStaticItem(Messages::TWMDrawItem &Message);
	int __fastcall HTProcess(Messages::TWMNCHitTest &Message);
	void __fastcall SetHotHT(int i, bool Repaint = true);
	void __fastcall SetPressedHT(int i);
	void __fastcall DropSysMenu(int x, int y);
	bool __fastcall AboveBorder(const Messages::TWMNCHitTest &Message);
	int __fastcall BorderHeight(void);
	int __fastcall ButtonHeight(const Sskinprovider::TsCaptionButton &Btn);
	int __fastcall CaptionHeight(bool CheckSkin = true);
	Types::TPoint __fastcall CursorToPoint(int x, int y);
	bool __fastcall FormActive(void);
	int __fastcall HeaderHeight(void);
	int __fastcall OffsetX(void);
	int __fastcall OffsetY(void);
	Types::TRect __fastcall IconRect();
	Types::TRect __fastcall ShadowSize();
	int __fastcall SysButtonWidth(const Sskinprovider::TsCaptionButton &Btn);
	int __fastcall TitleBtnsWidth(void);
	bool __fastcall VisibleMax(void);
	bool __fastcall VisibleMin(void);
	bool __fastcall VisibleHelp(void);
	bool __fastcall VisibleClose(void);
	bool __fastcall VisibleRestore(void);
	bool __fastcall EnabledMax(void);
	bool __fastcall EnabledMin(void);
	bool __fastcall EnabledClose(void);
	bool __fastcall EnabledRestore(void);
public:
	#pragma option push -w-inl
	/* TacMainWnd.Create */ inline __fastcall virtual TacDialogWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const Acsbutils::TacSkinParams &SkinParams, bool Repaint) : Acsbutils::TacScrollWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TacSystemMenu : public Sskinprovider::TsCustomSysMenu 
{
	typedef Sskinprovider::TsCustomSysMenu inherited;
	
public:
	TacDialogWnd* FOwner;
	Menus::TMenuItem* ItemMove;
	Menus::TMenuItem* ItemSize;
	Menus::TMenuItem* ItemClose;
	Menus::TMenuItem* ItemRestore;
	Menus::TMenuItem* ItemMinimize;
	Menus::TMenuItem* ItemMaximize;
	__fastcall virtual TacSystemMenu(Classes::TComponent* AOwner);
	bool __fastcall EnabledMove(void);
	bool __fastcall EnabledSize(void);
	HIDESBASE void __fastcall UpdateItems(void);
	void __fastcall RestoreClick(System::TObject* Sender);
	void __fastcall MoveClick(System::TObject* Sender);
	void __fastcall SizeClick(System::TObject* Sender);
	void __fastcall MinClick(System::TObject* Sender);
	void __fastcall MaxClick(System::TObject* Sender);
	void __fastcall CloseClick(System::TObject* Sender);
	virtual bool __fastcall EnabledMax(void);
	virtual bool __fastcall EnabledMin(void);
	virtual bool __fastcall EnabledRestore(void);
	virtual bool __fastcall VisibleClose(void);
	virtual bool __fastcall VisibleMax(void);
	virtual bool __fastcall VisibleMin(void);
	bool __fastcall VisibleSize(void);
public:
	#pragma option push -w-inl
	/* TPopupMenu.Destroy */ inline __fastcall virtual ~TacSystemMenu(void) { }
	#pragma option pop
	
};


typedef DynamicArray<Acsbutils::TacMnuWnd* >  TacMnuArray;

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE HHOOK HookCallback;
extern PACKAGE Classes::TList* acSupportedList;
extern PACKAGE int DlgLeft;
extern PACKAGE int DlgTop;
extern PACKAGE DynamicArray<Acsbutils::TacMnuWnd* >  MnuArray;
extern PACKAGE void __fastcall StartBlendOnMovingDlg(TacDialogWnd* dw);
extern PACKAGE void __fastcall CleanSupportedList(void);
extern PACKAGE int __stdcall SkinHookCBT(int code, int wParam, int lParam);
extern PACKAGE bool __fastcall AddSupportedForm(unsigned hwnd, Windows::PCreateStructA cStruct = (void *)(0x0));
extern PACKAGE WideString __fastcall GetWndText(unsigned hwnd);
extern PACKAGE void __fastcall FillDlgArOR(TacDialogWnd* ListSW);
extern PACKAGE void __fastcall UpdateRgn(TacDialogWnd* ListSW, bool Repaint = true);
extern PACKAGE void __fastcall ClearMnuArray(void);

}	/* namespace Acdials */
using namespace Acdials;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Acdials
