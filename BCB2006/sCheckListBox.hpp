// Borland C++ Builder
// Copyright (c) 1995, 2005 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Schecklistbox.pas' rev: 10.00

#ifndef SchecklistboxHPP
#define SchecklistboxHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Sysutils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Stdctrls.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Slistbox.hpp>	// Pascal unit
#include <Sconst.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Schecklistbox
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TsCheckListBox;
class PASCALIMPLEMENTATION TsCheckListBox : public Slistbox::TsListBox 
{
	typedef Slistbox::TsListBox inherited;
	
private:
	Graphics::TColor FHeaderColor;
	Graphics::TColor FHeaderBackgroundColor;
	Classes::TList* FSaveStates;
	bool FAllowGrayed;
	AnsiString FHeaderSkin;
	Classes::TNotifyEvent FOnClickCheck;
	bool FDblClickToggle;
	void __fastcall DrawCheck(const Types::TRect &R, Stdctrls::TCheckBoxState AState, bool AEnabled, Graphics::TBitmap* Bmp, const Sconst::TCacheInfo &CI)/* overload */;
	void __fastcall DrawCheck(const Types::TRect &R, Stdctrls::TCheckBoxState AState, bool AEnabled, Graphics::TCanvas* C)/* overload */;
	void __fastcall ToggleClickCheck(int Index);
	void __fastcall InvalidateCheck(int Index);
	System::TObject* __fastcall CreateWrapper(int Index);
	System::TObject* __fastcall ExtractWrapper(int Index);
	bool __fastcall HaveWrapper(int Index);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMLButtonDblClick(Messages::TWMMouse &Message);
	bool __fastcall GetHeader(int Index);
	System::TObject* __fastcall GetWrapper(int Index);
	bool __fastcall GetChecked(int Index);
	bool __fastcall GetItemEnabled(int Index);
	Stdctrls::TCheckBoxState __fastcall GetState(int Index);
	void __fastcall SetItemEnabled(int Index, const bool Value);
	void __fastcall SetHeader(int Index, const bool Value);
	void __fastcall SetState(int Index, Stdctrls::TCheckBoxState AState);
	void __fastcall SetChecked(int Index, bool Checked);
	void __fastcall SetHeaderBackgroundColor(const Graphics::TColor Value);
	void __fastcall SetHeaderColor(const Graphics::TColor Value);
	void __fastcall SetHeaderSkin(const AnsiString Value);
	
protected:
	virtual void __fastcall DrawItem(int Index, const Types::TRect &Rect, Windows::TOwnerDrawState State);
	DYNAMIC int __fastcall InternalGetItemData(int Index);
	DYNAMIC int __fastcall GetItemData(int Index);
	DYNAMIC void __fastcall InternalSetItemData(int Index, int AData);
	DYNAMIC void __fastcall SetItemData(int Index, int AData);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	DYNAMIC void __fastcall KeyPress(char &Key);
	DYNAMIC void __fastcall KeyDown(Word &Key, Classes::TShiftState Shift);
	int __fastcall SearchNextItem(bool GoForward);
	HIDESBASE MESSAGE void __fastcall WMDestroy(Messages::TWMNoParams &Msg);
	virtual void __fastcall DestroyWnd(void);
	DYNAMIC void __fastcall ResetContent(void);
	DYNAMIC void __fastcall DeleteString(int Index);
	virtual void __fastcall ClickCheck(void);
	int __fastcall GetCheckWidth(void);
	
public:
	__fastcall virtual TsCheckListBox(Classes::TComponent* AOwner);
	virtual void __fastcall CreateWnd(void);
	__fastcall virtual ~TsCheckListBox(void);
	__property bool Checked[int Index] = {read=GetChecked, write=SetChecked};
	__property bool ItemEnabled[int Index] = {read=GetItemEnabled, write=SetItemEnabled};
	__property Stdctrls::TCheckBoxState State[int Index] = {read=GetState, write=SetState};
	__property bool Header[int Index] = {read=GetHeader, write=SetHeader};
	
__published:
	__property Classes::TNotifyEvent OnClickCheck = {read=FOnClickCheck, write=FOnClickCheck};
	__property bool AllowGrayed = {read=FAllowGrayed, write=FAllowGrayed, default=0};
	__property bool DblClickToggle = {read=FDblClickToggle, write=FDblClickToggle, default=0};
	__property Graphics::TColor HeaderColor = {read=FHeaderColor, write=SetHeaderColor, default=-16777193};
	__property Graphics::TColor HeaderBackgroundColor = {read=FHeaderBackgroundColor, write=SetHeaderBackgroundColor, default=-16777192};
	__property AnsiString HeaderSkin = {read=FHeaderSkin, write=SetHeaderSkin};
	__property Align  = {default=0};
	__property Anchors  = {default=3};
	__property BiDiMode ;
	__property BorderStyle  = {default=0};
	__property Color  = {default=-16777211};
	__property Columns  = {default=0};
	__property Constraints ;
	__property Ctl3D ;
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property Font ;
	__property ImeMode  = {default=3};
	__property ImeName ;
	__property IntegralHeight  = {default=0};
	__property ItemHeight ;
	__property Items ;
	__property ParentBiDiMode  = {default=1};
	__property ParentColor  = {default=0};
	__property ParentCtl3D  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property Sorted  = {default=0};
	__property Style  = {default=0};
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=1};
	__property TabWidth  = {default=0};
	__property Visible  = {default=1};
	__property OnClick ;
	__property OnContextPopup ;
	__property OnDblClick ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnDrawItem ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
	__property OnMeasureItem ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnStartDock ;
	__property OnStartDrag ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TsCheckListBox(HWND ParentWindow) : Slistbox::TsListBox(ParentWindow) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Schecklistbox */
using namespace Schecklistbox;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Schecklistbox
