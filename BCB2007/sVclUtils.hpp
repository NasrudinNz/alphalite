// CodeGear C++Builder
// Copyright (c) 1995, 2007 by CodeGear
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Svclutils.pas' rev: 11.00

#ifndef SvclutilsHPP
#define SvclutilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Sysutils.hpp>	// Pascal unit
#include <Stdctrls.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Extctrls.hpp>	// Pascal unit
#include <Comctrls.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Themes.hpp>	// Pascal unit
#include <Acnttypes.hpp>	// Pascal unit
#include <Sskinprovider.hpp>	// Pascal unit
#include <Acsbutils.hpp>	// Pascal unit
#include <Sconst.hpp>	// Pascal unit
#include <Acntutils.hpp>	// Pascal unit
#include <Scommondata.hpp>	// Pascal unit
#include <Acdials.hpp>	// Pascal unit
#include <Acthdtimer.hpp>	// Pascal unit
#include <Sgraphutils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Svclutils
{
//-- type declarations -------------------------------------------------------
typedef void __fastcall (*TacIterProc)(Controls::TControl* Ctrl, int Data);

class DELPHICLASS TOutputWindow;
class PASCALIMPLEMENTATION TOutputWindow : public Controls::TCustomControl 
{
	typedef Controls::TCustomControl inherited;
	
private:
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Messages::TWMEraseBkgnd &Message);
	
protected:
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	
public:
	__fastcall virtual TOutputWindow(Classes::TComponent* AOwner);
	__property Canvas ;
public:
	#pragma option push -w-inl
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TOutputWindow(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TOutputWindow(HWND ParentWindow) : Controls::TCustomControl(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TacHideTimer;
class PASCALIMPLEMENTATION TacHideTimer : public Acthdtimer::TacThreadedTimer 
{
	typedef Acthdtimer::TacThreadedTimer inherited;
	
public:
	Acdials::TacDialogWnd* Dlg;
	unsigned ParentWnd;
	HDC DC;
	Acnttypes::TacGlowForm* Form;
	#pragma pack(push,1)
	tagSIZE FBmpSize;
	#pragma pack(pop)
	#pragma pack(push,1)
	Types::TPoint FBmpTopLeft;
	#pragma pack(pop)
	#pragma pack(push,1)
	_BLENDFUNCTION FBlend;
	#pragma pack(pop)
	double Trans;
	double p;
	double dx;
	double dy;
	double l;
	double t;
	double r;
	double b;
	int i;
	int StartBlendValue;
	int StepCount;
	Sconst::TacAnimType AnimType;
	bool EventCalled;
	Graphics::TBitmap* SrcBmp;
	Graphics::TBitmap* DstBmp;
	void __fastcall Anim_Init(void);
	void __fastcall CallEvent(void);
	void __fastcall Anim_DoNext(void);
	void __fastcall Anim_GoToNext(void);
	void __fastcall OnTimerProc(System::TObject* Sender);
	__fastcall virtual TacHideTimer(Classes::TComponent* AOwner);
	__fastcall virtual ~TacHideTimer(void);
public:
	#pragma option push -w-inl
	/* TacThreadedTimer.CreateOwned */ inline __fastcall virtual TacHideTimer(Classes::TComponent* AOwner, bool ChangeEvent) : Acthdtimer::TacThreadedTimer(AOwner, ChangeEvent) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE int AlignToInt[3];
extern PACKAGE TOutputWindow* ow;
extern PACKAGE bool InAnimationProcess;
extern PACKAGE bool acGraphPainting;
extern PACKAGE unsigned uxthemeLib;
extern PACKAGE HRESULT __stdcall (*Ac_SetWindowTheme)(HWND hwnd, WideChar * pszSubAppName, WideChar * pszSubIdList);
extern PACKAGE TacHideTimer* acHideTimer;
extern PACKAGE Themes::TThemeServices* acThemeServices;
extern PACKAGE Types::TPoint __fastcall acMousePos();
extern PACKAGE unsigned __fastcall GetRootParent(unsigned Handle);
extern PACKAGE bool __fastcall acMouseInControl(Controls::TControl* Control);
extern PACKAGE bool __fastcall acMouseInControlDC(unsigned Handle);
extern PACKAGE bool __fastcall ContainsWnd(unsigned AHandle, unsigned AParent);
extern PACKAGE Controls::TControl* __fastcall CtrlUnderMouse(void);
extern PACKAGE bool __fastcall LeftToRight(const Controls::TControl* Control, const bool NormalAlignment = true);
extern PACKAGE void __fastcall AddToAdapter(const Controls::TWinControl* Frame);
extern PACKAGE void __fastcall BroadCastMsg(const HWND Ctrl, const Messages::TMessage &Message);
extern PACKAGE void __fastcall IterateControls(Controls::TWinControl* Owner, int Data, TacIterProc CallBack);
extern PACKAGE void __fastcall PaintChildCtrls(Controls::TWinControl* Ctrl, Graphics::TBitmap* Bmp);
extern PACKAGE void __fastcall SkinPaintTo(const Graphics::TBitmap* Bmp, const Controls::TControl* Ctrl, const int Left = 0x0, const int Top = 0x0, const Classes::TComponent* SkinProvider = (Classes::TComponent*)(0x0), bool RootCtrl = false);
extern PACKAGE void __fastcall AnimShowForm(Sskinprovider::TsSkinProvider* sp, Word wTime = (Word)(0x0), int MaxTransparency = 0xff, Sconst::TacAnimType AnimType = (Sconst::TacAnimType)(0x1));
extern PACKAGE void __fastcall AnimHideForm(System::TObject* SkinProvider);
extern PACKAGE void __fastcall PrintDlgClient(Acdials::TacDialogWnd* ListSW, Graphics::TBitmap* acDstBmp, bool CopyScreen = false);
extern PACKAGE void __fastcall AnimHideDlg(Acdials::TacDialogWnd* ListSW);
extern PACKAGE bool __fastcall DoLayered(HWND FormHandle, bool Layered, Byte AlphaValue = (Byte)(0x1));
extern PACKAGE Controls::THintWindow* __fastcall acShowHintWnd(AnsiString HintText, const Types::TPoint &Pos);
extern PACKAGE Types::TRect __fastcall acWorkRect(Forms::TForm* Form)/* overload */;
extern PACKAGE Types::TRect __fastcall acWorkRect(const Types::TPoint &Coord)/* overload */;
extern PACKAGE void __fastcall AnimShowDlg(Acdials::TacDialogWnd* ListSW, Word wTime = (Word)(0x0), int MaxTransparency = 0xff, Sconst::TacAnimType AnimType = (Sconst::TacAnimType)(0x1));
extern PACKAGE void __fastcall PrepareForAnimation(const Controls::TWinControl* Ctrl, Sconst::TacAnimTypeCtrl AnimType = (Sconst::TacAnimTypeCtrl)(0x0));
extern PACKAGE void __fastcall AnimShowControl(Controls::TWinControl* Ctrl, Word wTime = (Word)(0x0), int MaxTransparency = 0xff, Sconst::TacAnimTypeCtrl AnimType = (Sconst::TacAnimTypeCtrl)(0x0));
extern PACKAGE void __fastcall SetParentUpdated(const Controls::TWinControl* wc)/* overload */;
extern PACKAGE void __fastcall SetParentUpdated(const HWND pHwnd)/* overload */;
extern PACKAGE void __fastcall ChangeControlColors(Controls::TControl* AControl, Graphics::TColor AFontColor, Graphics::TColor AColor);
extern PACKAGE Graphics::TColor __fastcall GetControlColor(const Controls::TControl* Control)/* overload */;
extern PACKAGE Graphics::TColor __fastcall GetControlColor(const unsigned Handle)/* overload */;
extern PACKAGE Graphics::TColor __fastcall GetControlFontColor(const Controls::TControl* Control, System::TObject* SkinManager);
extern PACKAGE bool __fastcall AllEditSelected(Stdctrls::TCustomEdit* Ctrl);
extern PACKAGE void __fastcall PaintControls(HDC DC, Controls::TWinControl* OwnerControl, bool ChangeCache, const Types::TPoint &Offset, unsigned AHandle = (unsigned)(0x0), bool CheckVisible = true);
extern PACKAGE void __fastcall PaintParentBG(Controls::TControl* AControl, Graphics::TBitmap* ABitmap);
extern PACKAGE void __fastcall SetRedraw(unsigned Handle, int Value = 0x0)/* overload */;
extern PACKAGE void __fastcall SetRedraw(Controls::TGraphicControl* Ctrl, int Value = 0x0)/* overload */;
extern PACKAGE int __fastcall SendAMessage(const HWND Handle, const int Cmd, int LParam = 0x0)/* overload */;
extern PACKAGE int __fastcall SendAMessage(const Controls::TControl* Control, const int Cmd, int LParam = 0x0)/* overload */;
extern PACKAGE int __fastcall TrySendMessage(const Controls::TControl* Control, const Messages::TMessage &Message)/* overload */;
extern PACKAGE int __fastcall TrySendMessage(const Controls::TControl* Control, unsigned Msg, int WParam, int LParam = 0x0)/* overload */;
extern PACKAGE int __fastcall TrySendMessage(unsigned AHandle, unsigned Msg, int WParam, int LParam = 0x0)/* overload */;
extern PACKAGE bool __fastcall GetBoolMsg(const Controls::TWinControl* Control, const unsigned Cmd)/* overload */;
extern PACKAGE bool __fastcall GetBoolMsg(const HWND CtrlHandle, const unsigned Cmd)/* overload */;
extern PACKAGE bool __fastcall ControlIsReady(const Controls::TControl* Control);
extern PACKAGE Forms::TCustomForm* __fastcall GetOwnerForm(const Classes::TComponent* Component);
extern PACKAGE Forms::TCustomFrame* __fastcall GetOwnerFrame(const Classes::TComponent* Component);
extern PACKAGE void __fastcall SetControlsEnabled(Controls::TWinControl* Parent, bool Value, bool Recursion = false);
extern PACKAGE unsigned __fastcall GetStringFlags(const Controls::TControl* Control, const Classes::TAlignment al);
extern PACKAGE void __fastcall RepaintsControls(const Controls::TWinControl* Owner, const bool BGChanged);
extern PACKAGE void __fastcall AlphaBroadCast(const Controls::TWinControl* Control, void *Message)/* overload */;
extern PACKAGE void __fastcall AlphaBroadCast(const HWND Handle, void *Message)/* overload */;
extern PACKAGE Types::TRect __fastcall acClientRect(const HWND Handle);
extern PACKAGE bool __fastcall TrySetSkinSection(const Controls::TControl* Control, const AnsiString SectionName);
extern PACKAGE AnsiString __fastcall GetWndClassName(const unsigned Hwnd);
extern PACKAGE int __fastcall GetAlignShift(const Controls::TWinControl* Ctrl, const Controls::TAlign Align, const bool GraphCtrlsToo = false);
extern PACKAGE HWND __fastcall GetParentFormHandle(const HWND CtrlHandle);
extern PACKAGE void __fastcall SetFormBlendValue(unsigned FormHandle, Graphics::TBitmap* Bmp, int Value, Types::PPoint NewPos = (void *)(0x0));
extern PACKAGE Classes::TShiftState __fastcall GetShiftState(void);
extern PACKAGE bool __fastcall acThemesEnabled(void);

}	/* namespace Svclutils */
using namespace Svclutils;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Svclutils
