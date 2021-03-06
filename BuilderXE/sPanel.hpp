// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sPanel.pas' rev: 22.00

#ifndef SpanelHPP
#define SpanelHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <sCommonData.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <acntTypes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Spanel
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TsPanel;
class PASCALIMPLEMENTATION TsPanel : public Extctrls::TPanel
{
	typedef Extctrls::TPanel inherited;
	
private:
	Scommondata::TsCtrlSkinData* FCommonData;
	Controls::TBevelCut FOldBevel;
	Sconst::TPaintEvent FOnPaint;
	
protected:
	virtual void __fastcall CopyCache(HDC DC);
	
public:
	__fastcall virtual TsPanel(Classes::TComponent* AOwner);
	__fastcall virtual ~TsPanel(void);
	virtual void __fastcall AfterConstruction(void);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Paint(void);
	virtual void __fastcall OurPaint(HDC DC = (HDC)(0x0), bool SendUpdated = true);
	virtual bool __fastcall PrepareCache(void);
	void __fastcall PaintDragPanel(HDC DC);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	virtual void __fastcall WriteText(const Types::TRect &R, Graphics::TCanvas* aCanvas = (Graphics::TCanvas*)(0x0), HDC aDC = (HDC)(0x0));
	virtual void __fastcall PaintWindow(HDC DC);
	
__published:
	__property Scommondata::TsCtrlSkinData* SkinData = {read=FCommonData, write=FCommonData};
	__property Sconst::TPaintEvent OnPaint = {read=FOnPaint, write=FOnPaint};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsPanel(HWND ParentWindow) : Extctrls::TPanel(ParentWindow) { }
	
};


class DELPHICLASS TsDragBar;
class PASCALIMPLEMENTATION TsDragBar : public TsPanel
{
	typedef TsPanel inherited;
	
private:
	Controls::TControl* FDraggedControl;
	MESSAGE void __fastcall WMActivateApp(Messages::TWMActivateApp &Message);
	
protected:
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	
public:
	virtual void __fastcall Loaded(void);
	virtual void __fastcall ReadState(Classes::TReader* Reader);
	__fastcall virtual TsDragBar(Classes::TComponent* AOwner);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	
__published:
	__property Alignment = {default=2};
	__property Align = {default=1};
	__property Color = {default=-16777214};
	__property Controls::TControl* DraggedControl = {read=FDraggedControl, write=FDraggedControl};
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
	/* TsPanel.Create */ inline __fastcall virtual TsContainer(Classes::TComponent* AOwner) : TsPanel(AOwner) { }
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
	Controls::TWinControl* LinkedControl;
	__fastcall virtual TsGrip(Classes::TComponent* AOwner);
	virtual void __fastcall Paint(void);
public:
	/* TsPanel.Destroy */ inline __fastcall virtual ~TsGrip(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TsGrip(HWND ParentWindow) : TsPanel(ParentWindow) { }
	
};


struct DECLSPEC_DRECORD TsColInfo
{
	
public:
	Graphics::TColor ciColor;
	Types::TRect ciRect;
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
	Classes::TStrings* FColors;
	Classes::TNotifyEvent FOnChange;
	void __fastcall SetColors(const Classes::TStrings* Value);
	void __fastcall SetInteger(const int Index, const int Value);
	
public:
	int OldSelected;
	_TsColorsPanel__1 ColorsArray;
	__fastcall virtual TsColorsPanel(Classes::TComponent* AOwner);
	__fastcall virtual ~TsColorsPanel(void);
	void __fastcall GenerateColors(void);
	virtual void __fastcall AfterConstruction(void);
	DYNAMIC void __fastcall ChangeScale(int M, int D);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall OurPaint(HDC DC = (HDC)(0x0), bool SendUpdated = true);
	void __fastcall PaintColors(const HDC DC);
	int __fastcall Count(void);
	int __fastcall GetItemByCoord(const Types::TPoint &p);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	Graphics::TColor __fastcall ColorValue(void);
	
__published:
	__property Classes::TStrings* Colors = {read=FColors, write=SetColors};
	__property int ColCount = {read=FColCount, write=SetInteger, index=0, default=5};
	__property int ItemIndex = {read=FItemIndex, write=SetInteger, index=1, default=-1};
	__property int ItemHeight = {read=FItemHeight, write=SetInteger, index=2, default=21};
	__property int ItemWidth = {read=FItemWidth, write=SetInteger, index=3, default=21};
	__property int ItemMargin = {read=FItemMargin, write=SetInteger, index=4, default=6};
	__property int RowCount = {read=FRowCount, write=SetInteger, index=5, default=2};
	__property Height = {default=60};
	__property Width = {default=140};
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsColorsPanel(HWND ParentWindow) : TsPanel(ParentWindow) { }
	
};


class DELPHICLASS TacColorData1;
class DELPHICLASS TacGradPaintData;
class PASCALIMPLEMENTATION TacColorData1 : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	TacGradPaintData* FOwner;
	bool FUseSkinColor;
	Graphics::TColor FColor;
	void __fastcall SetUseSkinColor(const bool Value);
	void __fastcall SetColor(const Graphics::TColor Value);
	
public:
	__fastcall TacColorData1(TacGradPaintData* AOwner);
	void __fastcall Invalidate(void);
	
__published:
	__property Graphics::TColor Color = {read=FColor, write=SetColor, default=16777215};
	__property bool UseSkinColor = {read=FUseSkinColor, write=SetUseSkinColor, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacColorData1(void) { }
	
};


class DELPHICLASS TacColorData2;
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


class DELPHICLASS TsGradientPanel;
class PASCALIMPLEMENTATION TacGradPaintData : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
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


class PASCALIMPLEMENTATION TsGradientPanel : public Extctrls::TPanel
{
	typedef Extctrls::TPanel inherited;
	
private:
	Sconst::TPaintEvent FOnPaint;
	TacGradPaintData* FPaintData;
	
protected:
	Graphics::TBitmap* FCacheBmp;
	virtual void __fastcall CopyCache(HDC DC);
	
public:
	bool BGChanged;
	__fastcall virtual TsGradientPanel(Classes::TComponent* AOwner);
	__fastcall virtual ~TsGradientPanel(void);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Paint(void);
	virtual void __fastcall OurPaint(HDC DC = (HDC)(0x0), bool SendUpdated = true);
	virtual bool __fastcall PrepareCache(void);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	void __fastcall WriteText(const Types::TRect &R, Graphics::TCanvas* aCanvas = (Graphics::TCanvas*)(0x0), HDC aDC = (HDC)(0x0));
	virtual void __fastcall PaintWindow(HDC DC);
	
__published:
	__property TacGradPaintData* PaintData = {read=FPaintData, write=FPaintData};
	__property Sconst::TPaintEvent OnPaint = {read=FOnPaint, write=FOnPaint};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsGradientPanel(HWND ParentWindow) : Extctrls::TPanel(ParentWindow) { }
	
};


class DELPHICLASS TsStdColorsPanel;
class PASCALIMPLEMENTATION TsStdColorsPanel : public TsColorsPanel
{
	typedef TsColorsPanel inherited;
	
public:
	/* TsColorsPanel.Create */ inline __fastcall virtual TsStdColorsPanel(Classes::TComponent* AOwner) : TsColorsPanel(AOwner) { }
	/* TsColorsPanel.Destroy */ inline __fastcall virtual ~TsStdColorsPanel(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TsStdColorsPanel(HWND ParentWindow) : TsColorsPanel(ParentWindow) { }
	
};


struct DECLSPEC_DRECORD TacContentPos
{
	
public:
	Types::TRect rBtn;
	Types::TRect rText;
	Types::TRect rGlyph;
	Types::TRect rArrow;
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
	Imglist::TCustomImageList* FImages;
	Imglist::TChangeLink* FImageChangeLink;
	Classes::TNotifyEvent FOnStateChanged;
	Controls::TCursor FTitleCursor;
	void __fastcall SetInteger(const int Index, const int Value);
	void __fastcall SetPlacement(const Sconst::TacSide Value);
	MESSAGE void __fastcall WMNCCaclSize(Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Messages::TMessage &Message);
	MESSAGE void __fastcall WMNCHitText(Messages::TWMNCHitTest &Message);
	HIDESBASE MESSAGE void __fastcall WMNCLButtonDown(Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMNCLButtonUp(Messages::TWMMouse &Message);
	void __fastcall SetImages(const Imglist::TCustomImageList* Value);
	void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall SetBoolean(const int Index, const bool Value);
	void __fastcall DoTimer(System::TObject* Sender);
	void __fastcall SetBtnState(const int Value);
	
protected:
	int RgnOffset;
	int BtnIndex;
	double ArrowAngle;
	Graphics::TBitmap* BtnCache;
	Extctrls::TTimer* ExitTimer;
	bool Arranging;
	Acnttypes::TacGlowForm* TitleForm;
	Types::TRect __fastcall BtnRect(void);
	int __fastcall BtnPaintState(void);
	bool __fastcall PtInButton(int X, int Y);
	Types::TPoint __fastcall PrepareStdCache(void);
	Types::TPoint __fastcall PrepareSkinCache(void);
	bool __fastcall GlyphExists(void);
	int __fastcall ActualImageIndex(void);
	int __fastcall ActualButtonHeight(void);
	void __fastcall CalcContentPos(TacContentPos &ContentPos);
	void __fastcall CheckAutoShowing(bool Value);
	void __fastcall ShowTitleForm(void);
	void __fastcall HideTitleForm(void);
	
public:
	__fastcall virtual TsRollOutPanel(Classes::TComponent* AOwner);
	virtual void __fastcall Paint(void);
	virtual bool __fastcall PrepareCache(void);
	void __fastcall ChangeState(bool bCollapsed, bool bAnimated);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
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
	__property Controls::TCursor TitleCursor = {read=FTitleCursor, write=FTitleCursor, default=0};
	__property Sconst::TacSide Placement = {read=FPlacement, write=SetPlacement, default=1};
	__property Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property Classes::TNotifyEvent OnStateChanged = {read=FOnStateChanged, write=FOnStateChanged};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsRollOutPanel(HWND ParentWindow) : TsPanel(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Spanel */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Spanel;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SpanelHPP
