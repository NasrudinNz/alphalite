// CodeGear C++Builder
// Copyright (c) 1995, 2011 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sPanel.pas' rev: 23.00 (Win32)

#ifndef SpanelHPP
#define SpanelHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Vcl.ExtCtrls.hpp>	// Pascal unit
#include <Vcl.ImgList.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <sCommonData.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <acntTypes.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Spanel
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TsPanel;
class PASCALIMPLEMENTATION TsPanel : public Vcl::Extctrls::TPanel
{
	typedef Vcl::Extctrls::TPanel inherited;
	
private:
	Scommondata::TsCtrlSkinData* FCommonData;
	Vcl::Controls::TBevelCut FOldBevel;
	Sconst::TPaintEvent FOnPaint;
	
protected:
	virtual void __fastcall CopyCache(HDC DC);
	
public:
	__fastcall virtual TsPanel(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsPanel(void);
	virtual void __fastcall AfterConstruction(void);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Paint(void);
	virtual void __fastcall OurPaint(HDC DC = (HDC)(0x0), bool SendUpdated = true);
	virtual bool __fastcall PrepareCache(void);
	void __fastcall PaintDragPanel(HDC DC);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall WriteText(const System::Types::TRect &R, Vcl::Graphics::TCanvas* aCanvas = (Vcl::Graphics::TCanvas*)(0x0), HDC aDC = (HDC)(0x0));
	virtual void __fastcall PaintWindow(HDC DC);
	
__published:
	__property Scommondata::TsCtrlSkinData* SkinData = {read=FCommonData, write=FCommonData};
	__property Sconst::TPaintEvent OnPaint = {read=FOnPaint, write=FOnPaint};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsPanel(HWND ParentWindow) : Vcl::Extctrls::TPanel(ParentWindow) { }
	
};


class DELPHICLASS TsDragBar;
class PASCALIMPLEMENTATION TsDragBar : public TsPanel
{
	typedef TsPanel inherited;
	
private:
	Vcl::Controls::TControl* FDraggedControl;
	MESSAGE void __fastcall WMActivateApp(Winapi::Messages::TWMActivateApp &Message);
	
protected:
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	
public:
	virtual void __fastcall Loaded(void);
	virtual void __fastcall ReadState(System::Classes::TReader* Reader);
	__fastcall virtual TsDragBar(System::Classes::TComponent* AOwner);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
__published:
	__property Alignment = {default=2};
	__property Align = {default=1};
	__property Color = {default=-16777214};
	__property Vcl::Controls::TControl* DraggedControl = {read=FDraggedControl, write=FDraggedControl};
public:
	/* TsPanel.Destroy */ inline __fastcall virtual ~TsDragBar(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TsDragBar(HWND ParentWindow) : TsPanel(ParentWindow) { }
	
};


class DELPHICLASS TsContainer;
class PASCALIMPLEMENTATION TsContainer : public TsPanel
{
	typedef TsPanel inherited;
	
public:
	/* TsPanel.Create */ inline __fastcall virtual TsContainer(System::Classes::TComponent* AOwner) : TsPanel(AOwner) { }
	/* TsPanel.Destroy */ inline __fastcall virtual ~TsContainer(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TsContainer(HWND ParentWindow) : TsPanel(ParentWindow) { }
	
};


class DELPHICLASS TsGrip;
class PASCALIMPLEMENTATION TsGrip : public TsPanel
{
	typedef TsPanel inherited;
	
public:
	bool Transparent;
	Vcl::Controls::TWinControl* LinkedControl;
	__fastcall virtual TsGrip(System::Classes::TComponent* AOwner);
	virtual void __fastcall Paint(void);
public:
	/* TsPanel.Destroy */ inline __fastcall virtual ~TsGrip(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TsGrip(HWND ParentWindow) : TsPanel(ParentWindow) { }
	
};


struct DECLSPEC_DRECORD TsColInfo
{
	
public:
	System::Uitypes::TColor ciColor;
	System::Types::TRect ciRect;
};


class DELPHICLASS TsColorsPanel;
class PASCALIMPLEMENTATION TsColorsPanel : public TsPanel
{
	typedef TsPanel inherited;
	
private:
	typedef System::DynamicArray<TsColInfo> _TsColorsPanel__1;
	
	
private:
	int FItemIndex;
	int FItemWidth;
	int FItemHeight;
	int FItemMargin;
	int FColCount;
	int FRowCount;
	System::Classes::TStrings* FColors;
	System::Classes::TNotifyEvent FOnChange;
	void __fastcall SetColors(const System::Classes::TStrings* Value);
	void __fastcall SetInteger(const int Index, const int Value);
	
public:
	int OldSelected;
	_TsColorsPanel__1 ColorsArray;
	__fastcall virtual TsColorsPanel(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsColorsPanel(void);
	void __fastcall GenerateColors(void);
	virtual void __fastcall AfterConstruction(void);
	DYNAMIC void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall OurPaint(HDC DC = (HDC)(0x0), bool SendUpdated = true);
	void __fastcall PaintColors(const HDC DC);
	int __fastcall Count(void);
	int __fastcall GetItemByCoord(const System::Types::TPoint &p);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	System::Uitypes::TColor __fastcall ColorValue(void);
	
__published:
	__property System::Classes::TStrings* Colors = {read=FColors, write=SetColors};
	__property int ColCount = {read=FColCount, write=SetInteger, index=0, default=5};
	__property int ItemIndex = {read=FItemIndex, write=SetInteger, index=1, default=-1};
	__property int ItemHeight = {read=FItemHeight, write=SetInteger, index=2, default=21};
	__property int ItemWidth = {read=FItemWidth, write=SetInteger, index=3, default=21};
	__property int ItemMargin = {read=FItemMargin, write=SetInteger, index=4, default=6};
	__property int RowCount = {read=FRowCount, write=SetInteger, index=5, default=2};
	__property Height = {default=60};
	__property Width = {default=140};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsColorsPanel(HWND ParentWindow) : TsPanel(ParentWindow) { }
	
};


class DELPHICLASS TacColorData1;
class DELPHICLASS TacGradPaintData;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacColorData1 : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TacGradPaintData* FOwner;
	bool FUseSkinColor;
	System::Uitypes::TColor FColor;
	void __fastcall SetUseSkinColor(const bool Value);
	void __fastcall SetColor(const System::Uitypes::TColor Value);
	
public:
	__fastcall TacColorData1(TacGradPaintData* AOwner);
	void __fastcall Invalidate(void);
	
__published:
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=16777215};
	__property bool UseSkinColor = {read=FUseSkinColor, write=SetUseSkinColor, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacColorData1(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TacColorData2;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacColorData2 : public TacColorData1
{
	typedef TacColorData1 inherited;
	
public:
	__fastcall TacColorData2(TacGradPaintData* AOwner);
	
__published:
	__property Color = {default=-16777201};
	__property UseSkinColor = {default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacColorData2(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TsGradientPanel;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacGradPaintData : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FIsVertical;
	TsGradientPanel* FOwner;
	TacColorData1* FColor1;
	TacColorData2* FColor2;
	System::UnicodeString FCustomGradient;
	void __fastcall SetIsVertical(const bool Value);
	void __fastcall SetCustomGradient(const System::UnicodeString Value);
	void __fastcall SetColor1(const int Index, const TacColorData1* Value);
	void __fastcall SetColor2(const int Index, const TacColorData2* Value);
	
public:
	__fastcall TacGradPaintData(TsGradientPanel* AOwner);
	__fastcall virtual ~TacGradPaintData(void);
	void __fastcall Invalidate(void);
	
__published:
	__property bool IsVertical = {read=FIsVertical, write=SetIsVertical, default=1};
	__property TacColorData1* Color1 = {read=FColor1, write=SetColor1, index=0};
	__property TacColorData2* Color2 = {read=FColor2, write=SetColor2, index=1};
	__property System::UnicodeString CustomGradient = {read=FCustomGradient, write=SetCustomGradient};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TsGradientPanel : public Vcl::Extctrls::TPanel
{
	typedef Vcl::Extctrls::TPanel inherited;
	
private:
	Sconst::TPaintEvent FOnPaint;
	TacGradPaintData* FPaintData;
	
protected:
	Vcl::Graphics::TBitmap* FCacheBmp;
	virtual void __fastcall CopyCache(HDC DC);
	
public:
	bool BGChanged;
	__fastcall virtual TsGradientPanel(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsGradientPanel(void);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Paint(void);
	virtual void __fastcall OurPaint(HDC DC = (HDC)(0x0), bool SendUpdated = true);
	virtual bool __fastcall PrepareCache(void);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	void __fastcall WriteText(const System::Types::TRect &R, Vcl::Graphics::TCanvas* aCanvas = (Vcl::Graphics::TCanvas*)(0x0), HDC aDC = (HDC)(0x0));
	virtual void __fastcall PaintWindow(HDC DC);
	
__published:
	__property TacGradPaintData* PaintData = {read=FPaintData, write=FPaintData};
	__property Sconst::TPaintEvent OnPaint = {read=FOnPaint, write=FOnPaint};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsGradientPanel(HWND ParentWindow) : Vcl::Extctrls::TPanel(ParentWindow) { }
	
};


class DELPHICLASS TsStdColorsPanel;
class PASCALIMPLEMENTATION TsStdColorsPanel : public TsColorsPanel
{
	typedef TsColorsPanel inherited;
	
public:
	/* TsColorsPanel.Create */ inline __fastcall virtual TsStdColorsPanel(System::Classes::TComponent* AOwner) : TsColorsPanel(AOwner) { }
	/* TsColorsPanel.Destroy */ inline __fastcall virtual ~TsStdColorsPanel(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TsStdColorsPanel(HWND ParentWindow) : TsColorsPanel(ParentWindow) { }
	
};


struct DECLSPEC_DRECORD TacContentPos
{
	
public:
	System::Types::TRect rBtn;
	System::Types::TRect rText;
	System::Types::TRect rGlyph;
	System::Types::TRect rArrow;
};


class DELPHICLASS TsRollOutPanel;
class PASCALIMPLEMENTATION TsRollOutPanel : public TsPanel
{
	typedef TsPanel inherited;
	
private:
	bool FAutoHide;
	bool FAutoShow;
	bool FAnimated;
	bool FCollapsed;
	bool FShowArrow;
	bool BtnChanged;
	bool MousePressed;
	int FBtnState;
	int FGroupIndex;
	int FButtonHeight;
	int FImageIndexExpanded;
	int FImageIndexCollapsed;
	Sconst::TacSide FPlacement;
	Vcl::Imglist::TCustomImageList* FImages;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	System::Classes::TNotifyEvent FOnStateChanged;
	System::Uitypes::TCursor FTitleCursor;
	void __fastcall SetInteger(const int Index, const int Value);
	void __fastcall SetPlacement(const Sconst::TacSide Value);
	MESSAGE void __fastcall WMNCCaclSize(Winapi::Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMNCHitText(Winapi::Messages::TWMNCHitTest &Message);
	HIDESBASE MESSAGE void __fastcall WMNCLButtonDown(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMNCLButtonUp(Winapi::Messages::TWMMouse &Message);
	void __fastcall SetImages(const Vcl::Imglist::TCustomImageList* Value);
	void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall SetBoolean(const int Index, const bool Value);
	void __fastcall DoTimer(System::TObject* Sender);
	void __fastcall SetBtnState(const int Value);
	
protected:
	int RgnOffset;
	int BtnIndex;
	double ArrowAngle;
	Vcl::Graphics::TBitmap* BtnCache;
	Vcl::Extctrls::TTimer* ExitTimer;
	bool Arranging;
	Acnttypes::TacGlowForm* TitleForm;
	System::Types::TRect __fastcall BtnRect(void);
	int __fastcall BtnPaintState(void);
	bool __fastcall PtInButton(int X, int Y);
	System::Types::TPoint __fastcall PrepareStdCache(void);
	System::Types::TPoint __fastcall PrepareSkinCache(void);
	bool __fastcall GlyphExists(void);
	int __fastcall ActualImageIndex(void);
	int __fastcall ActualButtonHeight(void);
	void __fastcall CalcContentPos(TacContentPos &ContentPos);
	void __fastcall CheckAutoShowing(bool Value);
	void __fastcall ShowTitleForm(void);
	void __fastcall HideTitleForm(void);
	
public:
	__fastcall virtual TsRollOutPanel(System::Classes::TComponent* AOwner);
	virtual void __fastcall Paint(void);
	virtual bool __fastcall PrepareCache(void);
	void __fastcall ChangeState(bool bCollapsed, bool bAnimated);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	__fastcall virtual ~TsRollOutPanel(void);
	virtual void __fastcall Loaded(void);
	void __fastcall Rearrange(void);
	__property int BtnState = {read=FBtnState, write=SetBtnState, nodefault};
	
__published:
	__property int GroupIndex = {read=FGroupIndex, write=SetInteger, index=0, default=0};
	__property int ButtonHeight = {read=FButtonHeight, write=SetInteger, index=1, default=22};
	__property int ImageIndexCollapsed = {read=FImageIndexCollapsed, write=SetInteger, index=2, default=-1};
	__property int ImageIndexExpanded = {read=FImageIndexExpanded, write=SetInteger, index=3, default=-1};
	__property bool Collapsed = {read=FCollapsed, write=SetBoolean, index=0, default=0};
	__property bool ShowArrow = {read=FShowArrow, write=SetBoolean, index=1, default=1};
	__property bool Animated = {read=FAnimated, write=SetBoolean, index=2, default=1};
	__property bool AutoHide = {read=FAutoHide, write=FAutoHide, default=0};
	__property bool AutoShow = {read=FAutoShow, write=FAutoShow, default=0};
	__property System::Uitypes::TCursor TitleCursor = {read=FTitleCursor, write=FTitleCursor, default=0};
	__property Sconst::TacSide Placement = {read=FPlacement, write=SetPlacement, default=1};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property System::Classes::TNotifyEvent OnStateChanged = {read=FOnStateChanged, write=FOnStateChanged};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsRollOutPanel(HWND ParentWindow) : TsPanel(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Spanel */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SPANEL)
using namespace Spanel;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SpanelHPP
