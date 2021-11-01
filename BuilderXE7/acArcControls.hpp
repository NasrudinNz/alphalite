// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acArcControls.pas' rev: 28.00 (Windows)

#ifndef AcarccontrolsHPP
#define AcarccontrolsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <Vcl.ImgList.hpp>	// Pascal unit
#include <Vcl.Buttons.hpp>	// Pascal unit
#include <Vcl.ActnList.hpp>	// Pascal unit
#include <sCommonData.hpp>	// Pascal unit
#include <acThdTimer.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <acntTypes.hpp>	// Pascal unit
#include <sSkinManager.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit
#include <Vcl.Menus.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acarccontrols
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TsArcControl;
class PASCALIMPLEMENTATION TsArcControl : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
private:
	int FBaseAngle;
	int FGlyphBlend;
	int FGlyphIndex;
	bool FShowText;
	bool FGlyphGrayed;
	bool FUseEllipsis;
	bool FGlyphReflected;
	Vcl::Graphics::TCanvas* FCanvas;
	Vcl::Imglist::TCustomImageList* FImages;
	Scommondata::TsCommonData* FCommonData;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	Vcl::Graphics::TBitmap* FGlyph;
	bool FTransparent;
	void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	virtual void __fastcall SetInteger(const int Index, const int Value);
	virtual void __fastcall SetBoolean(const int Index, const bool Value);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkGnd(Winapi::Messages::TWMPaint &Message);
	virtual int __fastcall GetGlyphIndex(void);
	void __fastcall SetGlyph(Vcl::Graphics::TBitmap* const Value);
	
protected:
	System::Types::TPoint Center;
	void __fastcall Init(void);
	virtual void __fastcall Paint(void);
	virtual int __fastcall CurrentState(void);
	virtual void __fastcall PrepareCache(void) = 0 ;
	void __fastcall PaintGlyph(const System::Types::TRect &R, System::Uitypes::TColor GrayColor = (System::Uitypes::TColor)(0x1fffffff));
	int __fastcall Diameter(void);
	System::Uitypes::TColor __fastcall FontColor(void);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	__property Vcl::Graphics::TCanvas* Canvas = {read=FCanvas};
	
public:
	__fastcall virtual TsArcControl(System::Classes::TComponent* AOwner);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	__fastcall virtual ~TsArcControl(void);
	virtual void __fastcall Loaded(void);
	__property int GlyphIndex = {read=FGlyphIndex, write=SetInteger, index=0, default=-1};
	__property int BaseAngle = {read=FBaseAngle, write=SetInteger, index=1, default=-90};
	__property bool Transparent = {read=FTransparent, write=SetBoolean, index=4, default=0};
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property Font;
	__property Constraints;
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property Height = {default=82};
	__property Width = {default=82};
	__property Visible = {default=1};
	__property Vcl::Graphics::TBitmap* Glyph = {read=FGlyph, write=SetGlyph};
	__property int GlyphBlend = {read=FGlyphBlend, write=SetInteger, index=2, default=0};
	__property bool ShowText = {read=FShowText, write=SetBoolean, index=0, default=1};
	__property bool GlyphReflected = {read=FGlyphReflected, write=SetBoolean, index=1, default=0};
	__property bool GlyphGrayed = {read=FGlyphGrayed, write=SetBoolean, index=2, default=0};
	__property bool UseEllipsis = {read=FUseEllipsis, write=SetBoolean, index=3, default=1};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property Scommondata::TsCommonData* SkinData = {read=FCommonData, write=FCommonData};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TWinControl.CreateParented */ inline __fastcall TsArcControl(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	
};


struct DECLSPEC_DRECORD TacGaugePaintData
{
public:
	System::Uitypes::TColor ABaseColor;
	System::Uitypes::TColor AFontColor;
	System::Uitypes::TColor AProgressColor;
	int ALineWidth;
	System::UnicodeString AText;
};


typedef void __fastcall (__closure *TOnGetGaugePaintData)(System::TObject* Sender, TacGaugePaintData &PaintData);

class DELPHICLASS TsArcGauge;
class PASCALIMPLEMENTATION TsArcGauge : public TsArcControl
{
	typedef TsArcControl inherited;
	
private:
	__int64 FMin;
	__int64 FMax;
	__int64 FProgress;
	int FBaseBlend;
	int FLineWidth;
	System::Uitypes::TColor FBaseColor;
	System::Uitypes::TColor FProgressColor;
	bool FShowTextValue;
	TOnGetGaugePaintData FOnGetPaintData;
	virtual void __fastcall SetInteger(const int Index, const int Value);
	void __fastcall SetInt64(const int Index, __int64 Value);
	void __fastcall SetShowTextValue(const bool Value);
	HIDESBASE void __fastcall SetColor(const int Index, const System::Uitypes::TColor Value);
	
protected:
	virtual void __fastcall PrepareCache(void);
	System::UnicodeString __fastcall ShownText(void);
	
public:
	__fastcall virtual TsArcGauge(System::Classes::TComponent* AOwner);
	DYNAMIC bool __fastcall CanFocus(void);
	
__published:
	__property __int64 Min = {read=FMin, write=SetInt64, index=10};
	__property __int64 Max = {read=FMax, write=SetInt64, index=11, default=100};
	__property __int64 Progress = {read=FProgress, write=SetInt64, index=12, default=47};
	__property int LineWidth = {read=FLineWidth, write=SetInteger, index=10, default=6};
	__property int BaseBlend = {read=FBaseBlend, write=SetInteger, index=12, default=222};
	__property System::Uitypes::TColor BaseColor = {read=FBaseColor, write=SetColor, index=10, default=9868950};
	__property System::Uitypes::TColor ProgressColor = {read=FProgressColor, write=SetColor, index=11, default=16748834};
	__property bool ShowTextValue = {read=FShowTextValue, write=SetShowTextValue, default=1};
	__property BaseAngle = {index=1, default=-90};
	__property GlyphIndex = {index=0, default=-1};
	__property Text = {default=0};
	__property TOnGetGaugePaintData OnGetPaintData = {read=FOnGetPaintData, write=FOnGetPaintData};
public:
	/* TsArcControl.Destroy */ inline __fastcall virtual ~TsArcGauge(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TsArcGauge(HWND ParentWindow) : TsArcControl(ParentWindow) { }
	
};


struct DECLSPEC_DRECORD TacPreloaderPaintData
{
public:
	System::Uitypes::TColor ABaseColor;
	System::Uitypes::TColor ALineColor;
	System::Uitypes::TColor AFontColor;
	int ALineWidth;
	System::UnicodeString AText;
};


typedef void __fastcall (__closure *TOnGetPreloaderPaintData)(System::TObject* Sender, TacPreloaderPaintData &PaintData);

class DELPHICLASS TacPreAnimTimer;
class DELPHICLASS TsArcPreloader;
class PASCALIMPLEMENTATION TacPreAnimTimer : public Acthdtimer::TacThreadedTimer
{
	typedef Acthdtimer::TacThreadedTimer inherited;
	
protected:
	TsArcPreloader* FOwner;
	
public:
	void __fastcall OnTimerProc(System::TObject* Sender);
	__fastcall virtual TacPreAnimTimer(System::Classes::TComponent* AOwner);
public:
	/* TacThreadedTimer.CreateOwned */ inline __fastcall virtual TacPreAnimTimer(System::Classes::TComponent* AOwner, bool ChangeEvent) : Acthdtimer::TacThreadedTimer(AOwner, ChangeEvent) { }
	/* TacThreadedTimer.Destroy */ inline __fastcall virtual ~TacPreAnimTimer(void) { }
	
};


enum DECLSPEC_DENUM TacMotionType : unsigned char { mtNormal, mtAcceleration };

enum DECLSPEC_DENUM TacImageType : unsigned char { itLine, itMask1, itMask2, itCustomMask, itCustomImage };

class PASCALIMPLEMENTATION TsArcPreloader : public TsArcControl
{
	typedef TsArcControl inherited;
	
private:
	int FSpace;
	int FAnimStep;
	int FBaseBlend;
	int FLineAngle;
	int FLineWidth;
	int FProgressAngle;
	System::Uitypes::TColor FBaseColor;
	System::Uitypes::TColor FLineColor;
	bool FStretched;
	bool FAnimated;
	Vcl::Graphics::TBitmap* FCustomImage;
	Vcl::Graphics::TBitmap* StretchBmp;
	double ActualProgress;
	TacMotionType FMotionType;
	TOnGetPreloaderPaintData FOnGetPaintData;
	TacPreAnimTimer* AnimTimer;
	TacImageType FImageType;
	void __fastcall SetImageType(const TacImageType Value);
	void __fastcall SetCustomImage(Vcl::Graphics::TBitmap* const Value);
	virtual void __fastcall SetInteger(const int Index, const int Value);
	HIDESBASE void __fastcall SetColor(const int Index, const System::Uitypes::TColor Value);
	virtual void __fastcall SetBoolean(const int Index, const bool Value);
	
protected:
	void __fastcall InitAnimation(bool Active);
	virtual void __fastcall PrepareCache(void);
	
public:
	__fastcall virtual TsArcPreloader(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsArcPreloader(void);
	DYNAMIC bool __fastcall CanFocus(void);
	void __fastcall DoProgress(System::UnicodeString ANewText = System::UnicodeString(), int AStep = 0x0);
	virtual void __fastcall Loaded(void);
	
__published:
	__property bool Animated = {read=FAnimated, write=SetBoolean, index=10, default=1};
	__property bool Stretched = {read=FStretched, write=SetBoolean, index=11, default=1};
	__property int LineWidth = {read=FLineWidth, write=SetInteger, index=10, default=6};
	__property int Space = {read=FSpace, write=SetInteger, index=11, default=4};
	__property int LineAngle = {read=FLineAngle, write=SetInteger, index=12, default=120};
	__property int AnimStep = {read=FAnimStep, write=SetInteger, index=13, default=4};
	__property int BaseBlend = {read=FBaseBlend, write=SetInteger, index=14, default=222};
	__property System::Uitypes::TColor BaseColor = {read=FBaseColor, write=SetColor, index=10, default=9868950};
	__property System::Uitypes::TColor LineColor = {read=FLineColor, write=SetColor, index=11, default=16748834};
	__property TacMotionType MotionType = {read=FMotionType, write=FMotionType, default=0};
	__property TacImageType ImageType = {read=FImageType, write=SetImageType, default=0};
	__property Vcl::Graphics::TBitmap* CustomImage = {read=FCustomImage, write=SetCustomImage};
	__property BaseAngle = {index=1, default=-90};
	__property GlyphIndex = {index=0, default=-1};
	__property Text = {default=0};
	__property TOnGetPreloaderPaintData OnGetPaintData = {read=FOnGetPaintData, write=FOnGetPaintData};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsArcPreloader(HWND ParentWindow) : TsArcControl(ParentWindow) { }
	
};


struct DECLSPEC_DRECORD TacHandlePaintData
{
public:
	System::Uitypes::TColor AFontColor;
	System::Uitypes::TColor ABaseColor;
	System::Uitypes::TColor ABorderColor;
	int ABorderWidth;
	System::UnicodeString AText;
};


typedef void __fastcall (__closure *TOnGetButtonPaintData)(System::TObject* Sender, Acnttypes::TacButtonPaintData &PaintData);

enum DECLSPEC_DENUM TacKnobPosition : unsigned char { kpCircle, kpBevel };

class DELPHICLASS TsArcKnobControl;
class PASCALIMPLEMENTATION TsArcKnobControl : public TsArcControl
{
	typedef TsArcControl inherited;
	
private:
	int FMin;
	int FMax;
	int FValue;
	int FKnobSize;
	int FBorderWidth;
	System::Uitypes::TColor FBaseColor;
	System::Uitypes::TColor FBorderColor;
	bool FPressed;
	bool FShowValue;
	double Multiplier;
	System::Classes::TNotifyEvent FOnChange;
	TacKnobPosition FKnobPosition;
	Acnttypes::TacPaintButtonOptions* FPaintOptions;
	TOnGetButtonPaintData FOnGetHandlePaintData;
	virtual void __fastcall SetInteger(const int Index, const int Value);
	void __fastcall SetKnobPosition(const TacKnobPosition Value);
	
protected:
	double RealPosition;
	System::Types::TPoint CurrentMouse;
	System::Types::TSize __fastcall GlyphSize(void);
	System::Types::TSize __fastcall ContentSize(void);
	virtual System::UnicodeString __fastcall HandleText(void) = 0 ;
	void __fastcall DoInvalidate(System::TObject* Sender);
	void __fastcall PaintHandle(const System::Types::TRect &ARect);
	virtual int __fastcall ValueToAngle(int AValue) = 0 ;
	void __fastcall PaintBG(void);
	void __fastcall ChangePosition(const System::Types::TPoint &pSrc, const System::Types::TPoint &pDst);
	virtual bool __fastcall CanChange(double &ADelta);
	virtual System::Types::TRect __fastcall HandleRect(void) = 0 ;
	
public:
	int __fastcall AngleToValue(int AAngle);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	__fastcall virtual TsArcKnobControl(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsArcKnobControl(void);
	virtual void __fastcall Loaded(void);
	
__published:
	__property int Value = {read=FValue, write=SetInteger, index=10, default=0};
	__property int Min = {read=FMin, write=SetInteger, index=11, default=0};
	__property int Max = {read=FMax, write=SetInteger, index=12, default=0};
	__property int KnobSize = {read=FKnobSize, write=SetInteger, index=14, default=5};
	__property TacKnobPosition KnobPosition = {read=FKnobPosition, write=SetKnobPosition, default=0};
	__property Acnttypes::TacPaintButtonOptions* PaintOptions = {read=FPaintOptions, write=FPaintOptions};
	__property GlyphIndex = {index=0, default=-1};
	__property Text = {default=0};
	__property Transparent = {index=4, default=0};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property TOnGetButtonPaintData OnGetHandlePaintData = {read=FOnGetHandlePaintData, write=FOnGetHandlePaintData};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsArcKnobControl(HWND ParentWindow) : TsArcControl(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TacTextContent : unsigned char { tcValue, tcPercent, tcAngle, tcCustom };

class DELPHICLASS TsArcHandle;
class PASCALIMPLEMENTATION TsArcHandle : public TsArcKnobControl
{
	typedef TsArcKnobControl inherited;
	
private:
	int FRotationAngle;
	TacTextContent FTextContent;
	void __fastcall SetTextContent(const TacTextContent Value);
	virtual void __fastcall SetInteger(const int Index, const int Value);
	
protected:
	virtual int __fastcall ValueToAngle(int AValue);
	virtual System::UnicodeString __fastcall HandleText(void);
	virtual void __fastcall PrepareCache(void);
	virtual System::Types::TRect __fastcall HandleRect(void);
	
public:
	__fastcall virtual TsArcHandle(System::Classes::TComponent* AOwner);
	
__published:
	__property int RotationAngle = {read=FRotationAngle, write=SetInteger, index=100, default=0};
	__property TacTextContent TextContent = {read=FTextContent, write=SetTextContent, default=2};
public:
	/* TsArcKnobControl.Destroy */ inline __fastcall virtual ~TsArcHandle(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TsArcHandle(HWND ParentWindow) : TsArcKnobControl(ParentWindow) { }
	
};


struct DECLSPEC_DRECORD TacDialPaintData
{
public:
	System::Uitypes::TColor APenColor;
	System::Uitypes::TColor ABaseColor;
	System::Uitypes::TColor AFontColor;
	int APenWidth;
};


typedef void __fastcall (__closure *TOnGetDialPaintData)(System::TObject* Sender, TacDialPaintData &PaintData);

class DELPHICLASS TsArcDial;
class PASCALIMPLEMENTATION TsArcDial : public TsArcKnobControl
{
	typedef TsArcKnobControl inherited;
	
private:
	int StartAngle;
	int TextWidthD2;
	int TextHeightD2;
	int FTicksBigStep;
	int FTickBigLength;
	int FTicksSmallStep;
	int TickSmallBeginRadius;
	int TickBigBeginRadius;
	int CenterTextRadius;
	int TickEndRadius;
	int HandleRadius;
	System::Types::TSize TextSize;
	TOnGetDialPaintData FOnGetDialPaintData;
	
protected:
	virtual System::UnicodeString __fastcall HandleText(void);
	void __fastcall PaintDial(void);
	void __fastcall ShowValueText(void);
	virtual void __fastcall PrepareCache(void);
	void __fastcall InitPaintData(void);
	virtual int __fastcall ValueToAngle(int AValue);
	virtual void __fastcall SetInteger(const int Index, const int Value);
	virtual System::Types::TRect __fastcall HandleRect(void);
	
public:
	__fastcall virtual TsArcDial(System::Classes::TComponent* AOwner);
	
__published:
	__property int TicksBigStep = {read=FTicksBigStep, write=SetInteger, index=100, default=10};
	__property int TicksSmallStep = {read=FTicksSmallStep, write=SetInteger, index=101, default=2};
	__property int TickBigLength = {read=FTickBigLength, write=SetInteger, index=102, default=6};
	__property Enabled = {default=1};
	__property Width = {default=200};
	__property Height = {default=200};
	__property Max = {index=12, default=100};
	__property TOnGetDialPaintData OnGetDialPaintData = {read=FOnGetDialPaintData, write=FOnGetDialPaintData};
public:
	/* TsArcKnobControl.Destroy */ inline __fastcall virtual ~TsArcDial(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TsArcDial(HWND ParentWindow) : TsArcKnobControl(ParentWindow) { }
	
};


class DELPHICLASS TacCustomRoundBtn;
class PASCALIMPLEMENTATION TacCustomRoundBtn : public TsArcControl
{
	typedef TsArcControl inherited;
	
private:
	System::Classes::TNotifyEvent FOnMouseEnter;
	System::Classes::TNotifyEvent FOnMouseLeave;
	bool FPressed;
	bool FWordWrap;
	bool FReflected;
	bool FShowCaption;
	System::UnicodeString FCaption;
	Acnttypes::TacPaintButtonOptions* FPaintOptions;
	TOnGetButtonPaintData FOnGetButtonPaintData;
	int FImageIndex;
	int FImageIndexHot;
	int FImageIndexPressed;
	int FImageIndexSelected;
	int FImageIndexDisabled;
	Vcl::Buttons::TButtonLayout FLayout;
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyUp(Winapi::Messages::TWMKey &Message);
	void __fastcall SetLayout(const Vcl::Buttons::TButtonLayout Value);
	void __fastcall SetCaption(const System::UnicodeString Value);
	
protected:
	void __fastcall PaintBG(void);
	void __fastcall PaintContent(void);
	System::Types::TSize __fastcall GlyphSize(void);
	System::Types::TSize __fastcall ContentSize(void);
	System::Types::TSize __fastcall GetTextSize(void);
	virtual void __fastcall PrepareCache(void);
	virtual int __fastcall CurrentState(void);
	virtual void __fastcall SetInteger(const int Index, const int Value);
	virtual void __fastcall SetBoolean(const int Index, const bool Value);
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	virtual int __fastcall GetGlyphIndex(void);
	void __fastcall DoInvalidate(System::TObject* Sender);
	
public:
	__fastcall virtual TacCustomRoundBtn(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TacCustomRoundBtn(void);
	DYNAMIC void __fastcall Click(void);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
__published:
	__property Action;
	__property Enabled = {default=1};
	__property int ImageIndex = {read=FImageIndex, write=SetInteger, index=10, default=-1};
	__property int ImageIndexHot = {read=FImageIndexHot, write=SetInteger, index=11, default=-1};
	__property int ImageIndexPressed = {read=FImageIndexPressed, write=SetInteger, index=12, default=-1};
	__property int ImageIndexDisabled = {read=FImageIndexDisabled, write=SetInteger, index=13, default=-1};
	__property int ImageIndexSelected = {read=FImageIndexSelected, write=SetInteger, index=14, default=-1};
	__property bool ShowCaption = {read=FShowCaption, write=SetBoolean, index=10, default=1};
	__property bool Reflected = {read=FReflected, write=SetBoolean, index=11, default=0};
	__property bool WordWrap = {read=FWordWrap, write=SetBoolean, index=12, default=1};
	__property System::UnicodeString Caption = {read=FCaption, write=SetCaption};
	__property Acnttypes::TacPaintButtonOptions* PaintOptions = {read=FPaintOptions, write=FPaintOptions};
	__property Vcl::Buttons::TButtonLayout Layout = {read=FLayout, write=SetLayout, default=0};
	__property Transparent = {index=4, default=0};
	__property TabStop = {default=1};
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property TOnGetButtonPaintData OnGetButtonPaintData = {read=FOnGetButtonPaintData, write=FOnGetButtonPaintData};
	__property System::Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property System::Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
public:
	/* TWinControl.CreateParented */ inline __fastcall TacCustomRoundBtn(HWND ParentWindow) : TsArcControl(ParentWindow) { }
	
};


class DELPHICLASS TsRoundBtn;
class PASCALIMPLEMENTATION TsRoundBtn : public TacCustomRoundBtn
{
	typedef TacCustomRoundBtn inherited;
	
public:
	/* TacCustomRoundBtn.Create */ inline __fastcall virtual TsRoundBtn(System::Classes::TComponent* AOwner) : TacCustomRoundBtn(AOwner) { }
	/* TacCustomRoundBtn.Destroy */ inline __fastcall virtual ~TsRoundBtn(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TsRoundBtn(HWND ParentWindow) : TacCustomRoundBtn(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 DefaultSize = System::Int8(0x52);
static const System::Byte DefaultBaseBlend = System::Byte(0xde);
extern DELPHI_PACKAGE void __fastcall InitBtnPaintData(Sskinmanager::TsSkinManager* SM, Scommondata::TsCommonData* SkinData, int State, Acnttypes::TacPaintButtonOptions* PaintOptions, Acnttypes::TacButtonPaintData &dpData);
extern DELPHI_PACKAGE void __fastcall DrawRoundButton(HDC DC, int Left, int Top, int Diameter, const Acnttypes::TacButtonPaintData &dpData);
}	/* namespace Acarccontrols */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ACARCCONTROLS)
using namespace Acarccontrols;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AcarccontrolsHPP
