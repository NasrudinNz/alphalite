// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sComboBox.pas' rev: 30.00 (Windows)

#ifndef ScomboboxHPP
#define ScomboboxHPP

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
#include <Vcl.StdCtrls.hpp>
#include <System.Types.hpp>
#include <sConst.hpp>
#include <sDefaults.hpp>
#include <acSBUtils.hpp>
#include <sCommonData.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Scombobox
{
//-- forward type declarations -----------------------------------------------
struct TacItemDrawData;
class DELPHICLASS TsCustomComboBox;
class DELPHICLASS TsComboBox;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TacItemDrawData
{
public:
	Vcl::Graphics::TFont* Font;
	int ItemIndex;
	Winapi::Windows::TOwnerDrawState State;
};


typedef void __fastcall (__closure *TacGetItemDrawData)(System::TObject* Sender, TacItemDrawData &ItemDrawData);

class PASCALIMPLEMENTATION TsCustomComboBox : public Vcl::Stdctrls::TCustomComboBox
{
	typedef Vcl::Stdctrls::TCustomComboBox inherited;
	
private:
	bool FReadOnly;
	bool FShowButton;
	bool FAllowMouseWheel;
	System::Classes::TAlignment FAlignment;
	Scommondata::TsCtrlSkinData* FCommonData;
	Scommondata::TsBoundLabel* FBoundLabel;
	Sconst::TsDisabledKind FDisabledKind;
	System::Classes::TVerticalAlignment FVerticalAlignment;
	TacGetItemDrawData FOnGetItemDrawData;
	void __fastcall SetReadOnly(const bool Value);
	void __fastcall SetShowButton(const bool Value);
	void __fastcall SetAlignment(const System::Classes::TAlignment Value);
	void __fastcall SetDisabledKind(const Sconst::TsDisabledKind Value);
	void __fastcall SetVerticalAlignment(const System::Classes::TVerticalAlignment Value);
	
protected:
	int State;
	int FGlyphIndex;
	HWND lboxhandle;
	Acsbutils::TacScrollWnd* ListSW;
	bool FDropDown;
	void __fastcall PrepareCache(void);
	bool __fastcall AllowBtnStyle(void);
	DYNAMIC void __fastcall ChangeScale(int M, int D);
	void __fastcall OurPaintHandler(HDC iDC);
	virtual void __fastcall DrawItem(int Index, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	void __fastcall AnimateCtrl(int AState);
	void __fastcall UninitPopup(void);
	virtual int __fastcall GetItemHt(void);
	virtual void __fastcall SetDropDownCount(const int Value);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	bool __fastcall HandleAlphaMsg(Winapi::Messages::TMessage &Message);
	virtual void __fastcall ComboWndProc(Winapi::Messages::TMessage &Message, HWND ComboWnd, void * ComboProc);
	HIDESBASE MESSAGE void __fastcall CNMeasureItem(Winapi::Messages::TWMMeasureItem &Message);
	HIDESBASE MESSAGE void __fastcall CNDrawItem(Winapi::Messages::TWMDrawItem &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	
public:
	bool AllowDropDown;
	__fastcall virtual TsCustomComboBox(System::Classes::TComponent* AOwner);
	virtual void __fastcall AdjustDropDown(void);
	DYNAMIC void __fastcall CloseUp(void);
	__fastcall virtual ~TsCustomComboBox(void);
	int __fastcall IndexOf(const System::UnicodeString s);
	virtual void __fastcall Invalidate(void);
	System::Types::TRect __fastcall ButtonRect(void);
	void __fastcall UpdateIndexes(void);
	void __fastcall PaintButton(void);
	void __fastcall DoDropDown(void);
	int __fastcall ButtonHeight(void);
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall Loaded(void);
	DYNAMIC bool __fastcall Focused(void);
	__property bool ShowButton = {read=FShowButton, write=SetShowButton, default=1};
	
__published:
	__property AutoCloseUp = {default=0};
	__property AutoDropDown = {default=0};
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, nodefault};
	__property bool AllowMouseWheel = {read=FAllowMouseWheel, write=FAllowMouseWheel, default=1};
	__property AutoCompleteDelay = {default=500};
	__property Scommondata::TsBoundLabel* BoundLabel = {read=FBoundLabel, write=FBoundLabel};
	__property Sconst::TsDisabledKind DisabledKind = {read=FDisabledKind, write=SetDisabledKind, default=1};
	__property DropDownCount = {default=16};
	__property Scommondata::TsCtrlSkinData* SkinData = {read=FCommonData, write=FCommonData};
	__property System::Classes::TVerticalAlignment VerticalAlignment = {read=FVerticalAlignment, write=SetVerticalAlignment, nodefault};
	__property TextHint = {default=0};
	__property Touch;
	__property bool ReadOnly = {read=FReadOnly, write=SetReadOnly, default=0};
	__property TacGetItemDrawData OnGetItemDrawData = {read=FOnGetItemDrawData, write=FOnGetItemDrawData};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsCustomComboBox(HWND ParentWindow) : Vcl::Stdctrls::TCustomComboBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TsComboBox : public TsCustomComboBox
{
	typedef TsCustomComboBox inherited;
	
__published:
	__property Style = {default=0};
	__property AutoComplete = {default=1};
	__property BiDiMode;
	__property CharCase = {default=0};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property DropDownCount = {default=16};
	__property Enabled = {default=1};
	__property Font;
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property ItemHeight;
	__property ItemIndex;
	__property MaxLength = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property Sorted = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text = {default=0};
	__property Visible = {default=1};
	__property AutoDropDown = {default=0};
	__property OnCloseUp;
	__property OnSelect;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnChange;
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDrawItem;
	__property OnDropDown;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMeasureItem;
	__property OnStartDock;
	__property OnStartDrag;
	__property Items;
	__property BoundLabel;
	__property DisabledKind = {default=1};
	__property SkinData;
	__property ReadOnly = {default=0};
public:
	/* TsCustomComboBox.Create */ inline __fastcall virtual TsComboBox(System::Classes::TComponent* AOwner) : TsCustomComboBox(AOwner) { }
	/* TsCustomComboBox.Destroy */ inline __fastcall virtual ~TsComboBox(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TsComboBox(HWND ParentWindow) : TsCustomComboBox(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Scombobox */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SCOMBOBOX)
using namespace Scombobox;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ScomboboxHPP
