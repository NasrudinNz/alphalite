// CodeGear C++Builder
// Copyright (c) 1995, 2008 by CodeGear
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Acsbutils.pas' rev: 20.00

#ifndef AcsbutilsHPP
#define AcsbutilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Extctrls.hpp>	// Pascal unit
#include <Grids.hpp>	// Pascal unit
#include <Commctrl.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Comctrls.hpp>	// Pascal unit
#include <Stdctrls.hpp>	// Pascal unit
#include <Typinfo.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Sskinmanager.hpp>	// Pascal unit
#include <Scommondata.hpp>	// Pascal unit
#include <Sconst.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acsbutils
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TDropMarkMode { dmmNone, dmmLeft, dmmRight };
#pragma option pop

#pragma option push -b-
enum Acsbutils__1 { hpeBackground, hpeDropMark, hpeHeaderGlyph, hpeSortGlyph, hpeText };
#pragma option pop

typedef Set<Acsbutils__1, hpeBackground, hpeText>  THeaderPaintElements;

struct TacSkinParams
{
	
public:
	Controls::TControl* Control;
	System::UnicodeString SkinSection;
	bool UseSkinColor;
	bool UseSkinFontColor;
	int VertScrollSize;
	int HorzScrollSize;
	int VertScrollBtnSize;
	int HorzScrollBtnSize;
};


struct THeaderPaintInfo
{
	
public:
	Graphics::TCanvas* TargetCanvas;
	Classes::TCollectionItem* Column;
	Types::TRect PaintRectangle;
	Types::TRect TextRectangle;
	bool IsHoverIndex;
	bool IsDownIndex;
	bool IsEnabled;
	bool ShowHeaderGlyph;
	bool ShowSortGlyph;
	bool ShowRightBorder;
	TDropMarkMode DropMark;
	Types::TPoint GlyphPos;
	Types::TPoint SortGlyphPos;
};


class DELPHICLASS TacScrollBar;
class DELPHICLASS TacScrollWnd;
class PASCALIMPLEMENTATION TacScrollBar : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::Word fScrollFlags;
	System::Word nBarType;
	int nArrowWidth;
	int nArrowLength;
	int nButSizeAfter;
	int nButSizeBefore;
	int nMinThumbSize;
	bool fButVisibleBefore;
	bool fButVisibleAfter;
	TacScrollWnd* sw;
	
public:
	bool fScrollVisible;
	#pragma pack(push,1)
	tagSCROLLINFO ScrollInfo;
	#pragma pack(pop)
	__fastcall TacScrollBar(void);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TacScrollBar(void) { }
	
};


class DELPHICLASS TacSpeedButtonHandler;
class PASCALIMPLEMENTATION TacSpeedButtonHandler : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	Controls::TControl* Ctrl;
	Controls::TControl* *PCtrl;
	bool Destroyed;
	Classes::TWndMethod OldWndProc;
	Scommondata::TsCommonData* SkinData;
	Sskinmanager::TsSkinManager* SkinManager;
	__fastcall virtual TacSpeedButtonHandler(Controls::TControl* Btn, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const System::UnicodeString SkinSection, bool Repaint);
	__fastcall virtual ~TacSpeedButtonHandler(void);
	int __fastcall CallPrevWndProc(const int Msg, const int WParam, int &lParam);
	void __fastcall acWndProc(Messages::TMessage &Message);
	void __fastcall AC_WMPaint(Messages::TWMPaint &Message);
	bool __fastcall PrepareCache(void);
	void __fastcall DrawCaption(void);
	void __fastcall DrawGlyph(void);
	System::UnicodeString __fastcall Caption();
	Types::TRect __fastcall ImgRect();
	int __fastcall GlyphHeight(void);
	Types::TRect __fastcall CaptionRect();
	tagSIZE __fastcall TextRectSize();
	int __fastcall GlyphWidth(void);
	void __fastcall DoDrawText(const Types::TRect &Rect, int Flags);
	int __fastcall CurrentState(void);
};


class DELPHICLASS TacMainWnd;
class PASCALIMPLEMENTATION TacMainWnd : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	bool DlgMode;
	bool Destroyed;
	bool DontRepaint;
	bool OwnSkinData;
	bool InDestroying;
	bool ParamsChanged;
	Types::TRect WndRect;
	Types::TRect ParentRect;
	Graphics::TColor StdColor;
	Graphics::TColor StdFontColor;
	HWND ParentWnd;
	HWND CtrlHandle;
	tagSIZE WndSize;
	Types::TPoint WndPos;
	System::UnicodeString Caption;
	int Tag;
	Controls::TControlStyle OldCtrlStyle;
	Classes::TWndMethod OldWndProc;
	void *OldProc;
	Sskinmanager::TsSkinManager* SkinManager;
	Scommondata::TsCommonData* SkinData;
	void *NewWndProcInstance;
	System::TObject* Adapter;
	virtual void __fastcall AfterCreation(void);
	virtual void __fastcall SaveStdParams(void);
	virtual void __fastcall RestoreStdParams(void);
	virtual void __fastcall SetSkinParams(void);
	virtual void __fastcall InitSkinData(void);
	__fastcall virtual TacMainWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint);
	__fastcall virtual ~TacMainWnd(void);
	int __fastcall CallPrevWndProc(const HWND Handle, const int Msg, const int WParam, int &LParam);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	int __fastcall ProcessMessage(unsigned Msg, int WPar = 0x0, int LPar = 0x0);
};


class DELPHICLASS TacSBWnd;
class PASCALIMPLEMENTATION TacSBWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
private:
	int FCurrPos;
	int FBar1State;
	int FBar2State;
	int FBtn1State;
	int FBtn2State;
	int FSliderState;
	#pragma pack(push,1)
	tagSCROLLINFO FSI;
	#pragma pack(pop)
	void __fastcall SetInteger(const int Index, const int Value);
	
public:
	Types::TRect FBtn1Rect;
	Types::TRect FBtn2Rect;
	Types::TRect FBar1Rect;
	Types::TRect FBar2Rect;
	Types::TRect FSliderRect;
	Types::TPoint p;
	Sconst::TCacheInfo CI;
	Stdctrls::TScrollBar* Control;
	bool FRepainting;
	int FLockCount;
	int MouseOffset;
	int ScrollCode;
	Types::TRect __fastcall Bar1Rect();
	Types::TRect __fastcall Bar2Rect();
	Types::TRect __fastcall Btn1Rect();
	Types::TRect __fastcall Btn2Rect();
	bool __fastcall BarIsHot(void);
	Types::TRect __fastcall SliderRect();
	int __fastcall SliderSize(void);
	int __fastcall WorkSize(void);
	int __fastcall PositionToCoord(void);
	void __fastcall DrawSlider(Graphics::TBitmap* b);
	int __fastcall SysBtnSize(void);
	int __fastcall CoordToPosition(const Types::TPoint &ap);
	void __fastcall UpdateBar(void);
	void __fastcall WMNCHitTest(Messages::TWMNCHitTest &Message);
	virtual void __fastcall AfterCreation(void);
	void __fastcall InitScrollData(void);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	void __fastcall WMPaint(Messages::TWMPaint &Msg);
	void __fastcall CMMouseLeave(void);
	void __fastcall CMMouseEnter(void);
	void __fastcall LMouseDown(const int X, const int Y);
	void __fastcall LMouseUp(const int X, const int Y);
	__property int Btn1State = {read=FBtn1State, write=SetInteger, index=0, nodefault};
	__property int Btn2State = {read=FBtn2State, write=SetInteger, index=1, nodefault};
	__property int Bar1State = {read=FBar1State, write=SetInteger, index=2, nodefault};
	__property int Bar2State = {read=FBar2State, write=SetInteger, index=3, nodefault};
	__property int SliderState = {read=FSliderState, write=SetInteger, index=4, nodefault};
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacSBWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacSBWnd(void) { }
	
};


class DELPHICLASS TacStaticWnd;
class PASCALIMPLEMENTATION TacStaticWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
public:
	virtual void __fastcall AfterCreation(void);
	virtual void __fastcall AC_WMPaint(Messages::TWMPaint &Message);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	virtual bool __fastcall PaintText(void);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacStaticWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacStaticWnd(void) { }
	
};


class DELPHICLASS TacEdgeWnd;
class PASCALIMPLEMENTATION TacEdgeWnd : public TacStaticWnd
{
	typedef TacStaticWnd inherited;
	
public:
	virtual void __fastcall AC_WMPaint(Messages::TWMPaint &Message);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacEdgeWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacStaticWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacEdgeWnd(void) { }
	
};


class DELPHICLASS TacIconWnd;
class PASCALIMPLEMENTATION TacIconWnd : public TacStaticWnd
{
	typedef TacStaticWnd inherited;
	
public:
	bool IsBmp;
	Graphics::TBitmap* FBmp;
	virtual void __fastcall AfterCreation(void);
	__fastcall virtual ~TacIconWnd(void);
	virtual bool __fastcall PaintText(void);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacIconWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacStaticWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
};


class DELPHICLASS TacLinkWnd;
class PASCALIMPLEMENTATION TacLinkWnd : public TacStaticWnd
{
	typedef TacStaticWnd inherited;
	
public:
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	virtual bool __fastcall PaintText(void);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacLinkWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacStaticWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacLinkWnd(void) { }
	
};


class DELPHICLASS TacBtnWnd;
class PASCALIMPLEMENTATION TacBtnWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
protected:
	bool FMouseClicked;
	
public:
	virtual void __fastcall AfterCreation(void);
	unsigned __fastcall CtrlStyle(void);
	bool __fastcall Down(void);
	virtual int __fastcall CurrentState(void);
	void __fastcall DrawCaption(void);
	virtual void __fastcall DrawGlyph(void);
	virtual tagSIZE __fastcall GlyphSize();
	void __fastcall DoDrawText(Types::TRect &Rect, const int Flags);
	virtual Types::TRect __fastcall CaptionRect();
	virtual int __fastcall MaxCaptionWidth(void);
	tagSIZE __fastcall TextRectSize();
	void __fastcall Repaint(void);
	virtual void __fastcall PrepareCache(void);
	void __fastcall ac_WMPaint(const Messages::TWMPaint &Message);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacBtnWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacBtnWnd(void) { }
	
};


class DELPHICLASS TacBitBtnWnd;
class PASCALIMPLEMENTATION TacBitBtnWnd : public TacBtnWnd
{
	typedef TacBtnWnd inherited;
	
public:
	Types::TRect __fastcall GlyphRect();
	virtual Types::TRect __fastcall CaptionRect();
	virtual int __fastcall CurrentState(void);
	virtual int __fastcall MaxCaptionWidth(void);
	virtual tagSIZE __fastcall GlyphSize();
	virtual void __fastcall DrawGlyph(void);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacBitBtnWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacBtnWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacBitBtnWnd(void) { }
	
};


class DELPHICLASS TacSplitBtnWnd;
class PASCALIMPLEMENTATION TacSplitBtnWnd : public TacBtnWnd
{
	typedef TacBtnWnd inherited;
	
public:
	int ArrowWidth;
	Types::TRect __fastcall ArrowRect();
	virtual Types::TRect __fastcall CaptionRect();
	virtual void __fastcall PrepareCache(void);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacSplitBtnWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacBtnWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacSplitBtnWnd(void) { }
	
};


class DELPHICLASS TacButtonWnd;
class PASCALIMPLEMENTATION TacButtonWnd : public TacBtnWnd
{
	typedef TacBtnWnd inherited;
	
public:
	Stdctrls::TButton* Btn;
	bool __fastcall HaveImage(void);
	virtual Types::TRect __fastcall CaptionRect();
	int __fastcall GlyphIndex(void);
	Types::TRect __fastcall GlyphRect();
	virtual tagSIZE __fastcall GlyphSize();
	virtual void __fastcall DrawGlyph(void);
	virtual void __fastcall AfterCreation(void);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacButtonWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacBtnWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacButtonWnd(void) { }
	
};


class DELPHICLASS TacSizerWnd;
class PASCALIMPLEMENTATION TacSizerWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
public:
	virtual void __fastcall AfterCreation(void);
	void __fastcall AC_WMPaint(const Messages::TWMPaint &Message);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacSizerWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacSizerWnd(void) { }
	
};


class DELPHICLASS TacSpinWnd;
class PASCALIMPLEMENTATION TacSpinWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
public:
	int lOffset;
	int Btn1State;
	int Btn2State;
	bool bMousePressed;
	bool __fastcall IsVertical(void);
	virtual void __fastcall AfterCreation(void);
	void __fastcall PrepareCache(void);
	void __fastcall AC_WMPaint(const Messages::TWMPaint &Message);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacSpinWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacSpinWnd(void) { }
	
};


typedef DynamicArray<Types::TPoint> TAPoint;

class DELPHICLASS TacTrackWnd;
class PASCALIMPLEMENTATION TacTrackWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
public:
	int TickHeight;
	bool bMousePressed;
	double iStep;
	bool __fastcall IsVertical(void);
	virtual void __fastcall AfterCreation(void);
	void __fastcall PrepareCache(void);
	void __fastcall PaintBody(void);
	void __fastcall PaintBar(void);
	void __fastcall PaintThumb(int i);
	void __fastcall PaintTicksHor(void);
	void __fastcall PaintTicksVer(void);
	void __fastcall PaintTick(const Types::TPoint &P, bool Horz);
	Comctrls::TTickMark __fastcall TickMarks(void);
	Comctrls::TTickStyle __fastcall TickStyle(void);
	int __fastcall TickCount(void);
	TAPoint __fastcall TicksArray();
	int __fastcall TickPos(const int i);
	Types::TRect __fastcall ThumbRect();
	Types::TRect __fastcall ChannelRect();
	int __fastcall Mode(void);
	void __fastcall AC_WMPaint(const Messages::TWMPaint &Message);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacTrackWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacTrackWnd(void) { }
	
};


class DELPHICLASS TacCheckBoxWnd;
class PASCALIMPLEMENTATION TacCheckBoxWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
public:
	bool OwnerDraw;
	Stdctrls::TCheckBoxState __fastcall State(void);
	int __fastcall CtlState(void);
	Types::TRect __fastcall CheckRect();
	Types::TRect __fastcall SkinCheckRect(const int i);
	int __fastcall SkinGlyphWidth(const int i);
	int __fastcall SkinGlyphHeight(const int i);
	void __fastcall DrawSkinGlyph(const int i);
	void __fastcall DrawCheckText(void);
	short __fastcall GlyphMaskIndex(const Stdctrls::TCheckBoxState AState);
	void __fastcall PrepareCache(void);
	void __fastcall AC_WMPaint(const Messages::TWMPaint &Message);
	virtual void __fastcall AfterCreation(void);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacCheckBoxWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacCheckBoxWnd(void) { }
	
};


class DELPHICLASS TacContainerWnd;
class PASCALIMPLEMENTATION TacContainerWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
public:
	Types::TRect ClientRect;
	int BorderWidth;
	void __fastcall PrepareCache(void);
	virtual void __fastcall AfterCreation(void);
	void __fastcall AC_WMPaint(const Messages::TWMPaint &Message);
	void __fastcall AC_WMPrint(const Messages::TWMPaint &Message);
	void __fastcall AC_WMNCPaint(const Messages::TMessage &Message);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacContainerWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacContainerWnd(void) { }
	
};


class DELPHICLASS TacSearchWnd;
class PASCALIMPLEMENTATION TacSearchWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
public:
	Types::TRect ClientRect;
	virtual void __fastcall AfterCreation(void);
	void __fastcall PrepareCache(void);
	void __fastcall AC_WMNCPaint(const Messages::TMessage &Message);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacSearchWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacSearchWnd(void) { }
	
};


class DELPHICLASS TacToolBarWnd;
class PASCALIMPLEMENTATION TacToolBarWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
public:
	Types::TRect ClientRect;
	int BorderWidth;
	void __fastcall PrepareCache(void);
	void __fastcall DrawButtons(const Graphics::TBitmap* Bmp);
	void __fastcall DrawBtn(const int Index, const Types::TRect &R, const HDC DC);
	Types::TRect __fastcall GetButtonRect(const int Index);
	void __fastcall AC_WMPaint(const Messages::TWMPaint &Message);
	void __fastcall AC_WMPrint(const Messages::TWMPaint &Message);
	void __fastcall AC_WMNCPaint(const Messages::TMessage &Message);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	int __fastcall Count(void);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacToolBarWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacToolBarWnd(void) { }
	
};


class DELPHICLASS TacTransPanelWnd;
class PASCALIMPLEMENTATION TacTransPanelWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
public:
	virtual void __fastcall AfterCreation(void);
	void __fastcall AC_WMPaint(const Messages::TWMPaint &Message);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacTransPanelWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacTransPanelWnd(void) { }
	
};


class DELPHICLASS TacGroupBoxWnd;
class PASCALIMPLEMENTATION TacGroupBoxWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
public:
	virtual void __fastcall AfterCreation(void);
	Types::TRect __fastcall CaptionRect();
	void __fastcall PrepareCache(void);
	void __fastcall WriteText(const Types::TRect &R);
	void __fastcall AC_WMPaint(const Messages::TWMPaint &Message);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacGroupBoxWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacGroupBoxWnd(void) { }
	
};


class DELPHICLASS TacTabWnd;
class PASCALIMPLEMENTATION TacTabWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
public:
	Types::TRect __fastcall DisplayRect();
	void __fastcall PrepareCache(void);
	void __fastcall AC_WMPaint(const Messages::TWMPaint &Message);
	void __fastcall AC_WMNCPaint(const Messages::TWMPaint &Message);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacTabWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacTabWnd(void) { }
	
};


class PASCALIMPLEMENTATION TacScrollWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
public:
	bool fThumbTracking;
	bool fLeftScrollbar;
	bool ScrollsInitialized;
	bool bPreventStyleChange;
	TacScrollBar* sBarHorz;
	TacScrollBar* sBarVert;
	int cxLeftEdge;
	int cxRightEdge;
	int cyTopEdge;
	int cyBottomEdge;
	virtual void __fastcall InitSkinData(void);
	__fastcall virtual ~TacScrollWnd(void);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacScrollWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
};


class DELPHICLASS TacAccessPanel;
class PASCALIMPLEMENTATION TacAccessPanel : public Extctrls::TCustomPanel
{
	typedef Extctrls::TCustomPanel inherited;
	
public:
	/* TCustomPanel.Create */ inline __fastcall virtual TacAccessPanel(Classes::TComponent* AOwner) : Extctrls::TCustomPanel(AOwner) { }
	
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TacAccessPanel(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TacAccessPanel(HWND ParentWindow) : Extctrls::TCustomPanel(ParentWindow) { }
	
};


class DELPHICLASS TacPanelWnd;
class PASCALIMPLEMENTATION TacPanelWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
public:
	TacAccessPanel* Panel;
	virtual void __fastcall AfterCreation(void);
	bool __fastcall PrepareCache(void);
	void __fastcall AC_WMNCPaint(HDC aDC = (HDC)(0x0));
	void __fastcall AC_WMPaint(HDC aDC);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	void __fastcall WriteText(const Types::TRect &R, Graphics::TCanvas* aCanvas = (Graphics::TCanvas*)(0x0));
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacPanelWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacPanelWnd(void) { }
	
};


class DELPHICLASS TacStaticTextWnd;
class PASCALIMPLEMENTATION TacStaticTextWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
public:
	Controls::TWinControl* Control;
	virtual void __fastcall AfterCreation(void);
	bool __fastcall PrepareCache(void);
	void __fastcall AC_WMNCPaint(HDC aDC = (HDC)(0x0));
	void __fastcall AC_WMPaint(HDC aDC);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	void __fastcall WriteText(const Types::TRect &R, Graphics::TCanvas* aCanvas = (Graphics::TCanvas*)(0x0));
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacStaticTextWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacStaticTextWnd(void) { }
	
};


class DELPHICLASS TacMnuWnd;
class PASCALIMPLEMENTATION TacMnuWnd : public TacScrollWnd
{
	typedef TacScrollWnd inherited;
	
protected:
	bool Shown;
	bool bFlag;
	
public:
	int RgnChanged;
	void __fastcall PrepareCache(void);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	virtual void __fastcall AfterCreation(void);
public:
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacMnuWnd(void) { }
	
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacMnuWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacScrollWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
};


class DELPHICLASS TacBaseWnd;
class PASCALIMPLEMENTATION TacBaseWnd : public TacScrollWnd
{
	typedef TacScrollWnd inherited;
	
public:
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacBaseWnd(void) { }
	
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacBaseWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacScrollWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
};


class DELPHICLASS TacMDIWnd;
class PASCALIMPLEMENTATION TacMDIWnd : public TacBaseWnd
{
	typedef TacBaseWnd inherited;
	
public:
	Forms::TForm* FForm;
	System::TObject* SkinProvider;
	Scommondata::TsCommonData* MDISkinData;
	__fastcall virtual ~TacMDIWnd(void);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	void __fastcall UpdateGraphControls(void);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacMDIWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacBaseWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
};


#pragma option push -b-
enum Acsbutils__13 { csPaintNeeded, csNCPaintNeeded };
#pragma option pop

typedef Set<Acsbutils__13, csPaintNeeded, csNCPaintNeeded>  TacCtrlState;

class DELPHICLASS TacEditWnd;
class PASCALIMPLEMENTATION TacEditWnd : public TacBaseWnd
{
	typedef TacBaseWnd inherited;
	
public:
	Types::TRect FClientRect;
	int FrameColor;
	TacCtrlState CtrlState;
	bool StdNCPaint;
	bool SingleLineEdit;
	bool CtrlListChanged;
	Graphics::TColor Color;
	Graphics::TColor FocusColor;
	Graphics::TColor FixedGradientFrom;
	Graphics::TColor FixedGradientTo;
	__fastcall virtual TacEditWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	bool __fastcall HandleAlphaCmd(Messages::TMessage &Message);
	bool __fastcall NCContent(void);
	virtual void __fastcall SaveStdParams(void);
	virtual void __fastcall SetSkinParams(void);
	virtual void __fastcall RestoreStdParams(void);
	Types::TRect __fastcall ClientRect();
public:
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacEditWnd(void) { }
	
};


class DELPHICLASS TacScrollBoxWnd;
class PASCALIMPLEMENTATION TacScrollBoxWnd : public TacScrollWnd
{
	typedef TacScrollWnd inherited;
	
public:
	void __fastcall PrepareCache(void);
	void __fastcall AC_WMNCPaint(HDC aDC);
	void __fastcall AC_WMPaint(HDC aDC);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	virtual void __fastcall AfterCreation(void);
public:
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacScrollBoxWnd(void) { }
	
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacScrollBoxWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacScrollWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
};


class DELPHICLASS TacNativePaint;
class PASCALIMPLEMENTATION TacNativePaint : public TacScrollBoxWnd
{
	typedef TacScrollBoxWnd inherited;
	
public:
	virtual void __fastcall AfterCreation(void);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacNativePaint(void) { }
	
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacNativePaint(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacScrollBoxWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
};


class DELPHICLASS TacComboListWnd;
class PASCALIMPLEMENTATION TacComboListWnd : public TacEditWnd
{
	typedef TacEditWnd inherited;
	
public:
	bool Showed;
	bool DBScroll;
	bool SimplyBox;
	virtual void __fastcall AfterCreation(void);
	__fastcall TacComboListWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const System::UnicodeString SkinSection, bool Repaint, bool Simply);
	virtual void __fastcall SetSkinParams(void);
	__fastcall virtual ~TacComboListWnd(void);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	/* TacEditWnd.Create */ inline __fastcall virtual TacComboListWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacEditWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
};


class DELPHICLASS TacListViewWnd;
class PASCALIMPLEMENTATION TacListViewWnd : public TacEditWnd
{
	typedef TacEditWnd inherited;
	
public:
	HWND FhWndHeader;
	void *FhHeaderProc;
	void *FhDefHeaderProc;
	int FPressedColumn;
	int HoverColIndex;
	bool __fastcall AutoSizedCols(void);
	Comctrls::TViewStyle __fastcall ViewStyle(void);
	virtual void __fastcall AfterCreation(void);
	virtual void __fastcall SaveStdParams(void);
	virtual void __fastcall SetSkinParams(void);
	virtual void __fastcall RestoreStdParams(void);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	void __fastcall ColumnSkinPaint(const Types::TRect &ControlRect, int cIndex, HDC DC);
	bool __fastcall HotTrack(void);
	void __fastcall HeaderWndProc(Messages::TMessage &Message);
	Types::TRect __fastcall GetHeaderColumnRect(int Index);
	void __fastcall PaintHeader(HDC DC);
public:
	/* TacEditWnd.Create */ inline __fastcall virtual TacListViewWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacEditWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
public:
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacListViewWnd(void) { }
	
};


class DELPHICLASS TacGridWnd;
class PASCALIMPLEMENTATION TacGridWnd : public TacEditWnd
{
	typedef TacEditWnd inherited;
	
public:
	Graphics::TColor IndColor;
	Graphics::TColor FixedColor;
	Graphics::TColor TitleColor;
	Graphics::TColor EvenRowColor;
	Graphics::TColor OddRowColor;
	Graphics::TColor FooterColor;
	Graphics::TColor GridLineColor;
	Graphics::TColor TitleFontColor;
	Graphics::TColor SelectionColor;
	Graphics::TColor FooterCellColor;
	Graphics::TColor SelectionTextColor;
	Graphics::TColor GridFixedLineColor;
	Graphics::TColor FixedGradientMirrorTo;
	Graphics::TColor FixedGradientMirrorFrom;
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	virtual void __fastcall SaveStdParams(void);
	virtual void __fastcall SetSkinParams(void);
	virtual void __fastcall RestoreStdParams(void);
public:
	/* TacEditWnd.Create */ inline __fastcall virtual TacGridWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacEditWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
public:
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacGridWnd(void) { }
	
};


class DELPHICLASS TacGridEhWnd;
class PASCALIMPLEMENTATION TacGridEhWnd : public TacGridWnd
{
	typedef TacGridWnd inherited;
	
public:
	bool Fixed3D;
	Graphics::TColor DarkColor;
	Graphics::TColor BrightColor;
	Graphics::TColor DataHorzColor;
	Graphics::TColor DataVertColor;
	Graphics::TColor DataGroupColor;
	Graphics::TColor CategoriesColor;
	Graphics::TColor CategoriesFontColor;
	Graphics::TColor RowDetailColor;
	int IndHorzLines;
	int IndVertLines;
	int InfFillStyle;
	int TitleHorzLines;
	int TitleFillStyle;
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	virtual void __fastcall SaveStdParams(void);
	virtual void __fastcall SetSkinParams(void);
	virtual void __fastcall RestoreStdParams(void);
public:
	/* TacEditWnd.Create */ inline __fastcall virtual TacGridEhWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacGridWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
public:
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacGridEhWnd(void) { }
	
};


class DELPHICLASS TacTreeViewWnd;
class PASCALIMPLEMENTATION TacTreeViewWnd : public TacEditWnd
{
	typedef TacEditWnd inherited;
	
protected:
	bool SkipBG;
	
public:
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	virtual void __fastcall SetSkinParams(void);
	virtual void __fastcall RestoreStdParams(void);
public:
	/* TacEditWnd.Create */ inline __fastcall virtual TacTreeViewWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacEditWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
public:
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacTreeViewWnd(void) { }
	
};


class DELPHICLASS TacComboBoxWnd;
class PASCALIMPLEMENTATION TacComboBoxWnd : public TacEditWnd
{
	typedef TacEditWnd inherited;
	
public:
	HWND FListHandle;
	bool LBoxOpening;
	TacComboListWnd* ListSW;
	Scommondata::TsCommonData* LBSkinData;
	int __fastcall ButtonHeight(void);
	virtual Types::TRect __fastcall ButtonRect();
	void __fastcall PaintButton(HDC DC);
	void __fastcall RepaintButton(void);
	void __fastcall PaintText(void);
	void __fastcall PrepareSimple(void);
	virtual void __fastcall AfterCreation(void);
	__fastcall virtual ~TacComboBoxWnd(void);
	void __fastcall Invalidate(void);
	bool __fastcall EasyComboBox(void);
	void __fastcall CNDrawItem(Messages::TWMDrawItem &Message);
	void __fastcall DrawItem(int Index, const Types::TRect &Rect, Windows::TOwnerDrawState State, HDC DC);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	/* TacEditWnd.Create */ inline __fastcall virtual TacComboBoxWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacEditWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
};


class DELPHICLASS TacVirtualTreeViewWnd;
class PASCALIMPLEMENTATION TacVirtualTreeViewWnd : public TacEditWnd
{
	typedef TacEditWnd inherited;
	
public:
	Graphics::TColor HotColor;
	Graphics::TColor FileTextColor;
	Graphics::TColor FolderTextColor;
	Graphics::TColor SelectionTextColor;
	Graphics::TColor CompressedTextColor;
	Graphics::TColor FocusedSelectionColor;
	Graphics::TColor UnfocusedSelectionColor;
	Graphics::TColor FocusedSelectionBorderColor;
	Graphics::TColor UnfocusedSelectionBorderColor;
	bool OwnerDraw;
	Typinfo::TPropInfo *PropInfo;
	void __fastcall AdvancedHeaderDraw(Classes::TPersistent* Sender, THeaderPaintInfo &PaintInfo, const THeaderPaintElements Elements);
	void __fastcall HeaderDrawQueryElements(Classes::TPersistent* Sender, THeaderPaintInfo &PaintInfo, THeaderPaintElements &Elements);
	virtual void __fastcall SaveStdParams(void);
	virtual void __fastcall SetSkinParams(void);
	virtual void __fastcall RestoreStdParams(void);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	/* TacEditWnd.Create */ inline __fastcall virtual TacVirtualTreeViewWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacEditWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
public:
	/* TacScrollWnd.Destroy */ inline __fastcall virtual ~TacVirtualTreeViewWnd(void) { }
	
};


class DELPHICLASS TacWWComboBoxWnd;
class PASCALIMPLEMENTATION TacWWComboBoxWnd : public TacComboBoxWnd
{
	typedef TacComboBoxWnd inherited;
	
private:
	bool FShowButton;
	Stdctrls::TCustomListBox* ListBox;
	TacScrollWnd* ListBoxSW;
	Scommondata::TsScrollWndData* ListBoxSkinData;
	bool __fastcall GetShowButton(Controls::TWinControl* aCtrl);
	
public:
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	virtual Types::TRect __fastcall ButtonRect();
	virtual void __fastcall AfterCreation(void);
	__fastcall virtual ~TacWWComboBoxWnd(void);
public:
	/* TacEditWnd.Create */ inline __fastcall virtual TacWWComboBoxWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacComboBoxWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
};


class DELPHICLASS TacTabControlWnd;
class PASCALIMPLEMENTATION TacTabControlWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
public:
	TacSpinWnd* BtnSW;
	int __fastcall TabCount(void);
	virtual Types::TRect __fastcall ClientRect();
	virtual Types::TRect __fastcall PageRect();
	Types::TRect __fastcall TabRect(const int Index);
	int __fastcall TabRow(int TabIndex);
	Types::TRect __fastcall TabsRect();
	Comctrls::TTabPosition __fastcall TabPosition(void);
	Comctrls::TTabStyle __fastcall Style(void);
	int __fastcall ActiveTabIndex(void);
	Types::TRect __fastcall SkinTabRect(int Index, bool Active);
	void __fastcall CheckUpDown(void);
	void __fastcall DrawSkinTabs(const Sconst::TCacheInfo &CI);
	void __fastcall DrawSkinTab(int Index, int State, Graphics::TBitmap* Bmp, const Types::TPoint &OffsetPoint)/* overload */;
	void __fastcall DrawSkinTab(int Index, int State, HDC DC)/* overload */;
	void __fastcall AC_WMPaint(Messages::TWMPaint &Message);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	virtual void __fastcall AfterCreation(void);
	__fastcall virtual ~TacTabControlWnd(void);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacTabControlWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
};


class DELPHICLASS TacPageWnd;
class PASCALIMPLEMENTATION TacPageWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
public:
	Comctrls::TTabSheet* Page;
	Comctrls::TTabPosition __fastcall TabPosition(void);
	void __fastcall AC_WMEraseBKGnd(Messages::TWMPaint &Message);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
	virtual void __fastcall AfterCreation(void);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacPageWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacPageWnd(void) { }
	
};


class DELPHICLASS TacPageControlWnd;
class PASCALIMPLEMENTATION TacPageControlWnd : public TacTabControlWnd
{
	typedef TacTabControlWnd inherited;
	
public:
	void __fastcall InitPages(void);
	virtual void __fastcall AfterCreation(void);
	virtual Types::TRect __fastcall PageRect();
	virtual Types::TRect __fastcall ClientRect();
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	/* TacTabControlWnd.Destroy */ inline __fastcall virtual ~TacPageControlWnd(void) { }
	
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacPageControlWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacTabControlWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
};


class DELPHICLASS TacToolBarVCLWnd;
class PASCALIMPLEMENTATION TacToolBarVCLWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
public:
	Comctrls::TToolBar* ToolBar;
	int HotButtonIndex;
	Comctrls::TToolButton* DroppedButton;
	void __fastcall PrepareCache(void);
	Types::TRect __fastcall DisplayRect();
	virtual void __fastcall AfterCreation(void);
	void __fastcall WMNCPaint(const HDC aDC = (HDC)(0x0));
	Types::TRect __fastcall GetButtonRect(int Index);
	int __fastcall IndexByMouse(const Types::TPoint &MousePos);
	void __fastcall OurAdvancedCustomDraw(Comctrls::TToolBar* Sender, const Types::TRect &ARect, Comctrls::TCustomDrawStage Stage, bool &DefaultDraw);
	void __fastcall RepaintButton(int Index);
	void __fastcall OurAdvancedCustomDrawButton(Comctrls::TToolBar* Sender, Comctrls::TToolButton* Button, Comctrls::TCustomDrawState State, Comctrls::TCustomDrawStage Stage, Comctrls::TTBCustomDrawFlags &Flags, bool &DefaultDraw);
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacToolBarVCLWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacToolBarVCLWnd(void) { }
	
};


class DELPHICLASS TacStatusBarWnd;
class PASCALIMPLEMENTATION TacStatusBarWnd : public TacMainWnd
{
	typedef TacMainWnd inherited;
	
public:
	Comctrls::TStatusBar* StatusBar;
	bool __fastcall SimplePanel(void);
	int __fastcall PartsCount(void);
	System::UnicodeString __fastcall PartText(const int Index);
	Types::TRect __fastcall PartRect(const int Index);
	virtual void __fastcall AfterCreation(void);
	void __fastcall PaintPanels(void);
	void __fastcall PaintGrip(void);
	void __fastcall DrawPanel(const int Index, const Types::TRect &Rect);
	void __fastcall InternalDrawPanel(const int Index, const Types::TRect &Rect);
	void __fastcall DoDrawText(const System::UnicodeString Text, Types::TRect &Rect, const int Flags);
	void __fastcall PrepareCache(void);
	void __fastcall WMPaint(const HDC aDC = (HDC)(0x0));
	void __fastcall WMNCPaint(const HDC aDC = (HDC)(0x0));
	virtual void __fastcall acWndProc(Messages::TMessage &Message);
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacStatusBarWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const TacSkinParams &SkinParams, bool Repaint) : TacMainWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	/* TacMainWnd.Destroy */ inline __fastcall virtual ~TacStatusBarWnd(void) { }
	
};


typedef Stdctrls::TCheckBoxState __fastcall (*TGetDBFieldCheckState)(System::TObject* DataLink);

typedef TMetaClass* TacScrollWndClass;

class DELPHICLASS TacWinControl;
class PASCALIMPLEMENTATION TacWinControl : public Controls::TWinControl
{
	typedef Controls::TWinControl inherited;
	
public:
	/* TWinControl.Create */ inline __fastcall virtual TacWinControl(Classes::TComponent* AOwner) : Controls::TWinControl(AOwner) { }
	/* TWinControl.CreateParented */ inline __fastcall TacWinControl(HWND ParentWindow) : Controls::TWinControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TacWinControl(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const ShortInt SM_BTNSIZE = 0x0;
static const ShortInt SM_SCROLLWIDTH = 0x1;
static const ShortInt TopOffset = 0x4;
static const ShortInt BottomOffset = 0x2;
static const ShortInt LeftOffset = 0x1;
static const ShortInt RightOffset = 0x1;
extern PACKAGE StaticArray<Sconst::TacSide, 4> acTabSides;
extern PACKAGE int nLastSBPos;
extern PACKAGE int acMinThumbSize;
extern PACKAGE bool acDlgMode;
extern PACKAGE void __stdcall (*Ac_UninitializeFlatSB)(HWND hWnd);
extern PACKAGE BOOL __stdcall (*Ac_InitializeFlatSB)(HWND hWnd);
extern PACKAGE TGetDBFieldCheckState GetDBFieldCheckState;
extern PACKAGE void __fastcall AlphaBroadCastCheck(const Controls::TControl* Control, const HWND Handle, void *Message);
extern PACKAGE bool __fastcall MayBeHot(const Scommondata::TsCommonData* SkinData, const bool ByMouse = true);
extern PACKAGE void __fastcall InitCtrlData(HWND Wnd, HWND &ParentWnd, Types::TRect &WndRect, Types::TRect &ParentRect, tagSIZE &WndSize, Types::TPoint &WndPos);
extern PACKAGE void __fastcall RefreshScrolls(Scommondata::TsScrollWndData* SkinData, TacScrollWnd* &ListSW);
extern PACKAGE void __fastcall RefreshEditScrolls(Scommondata::TsScrollWndData* SkinData, TacScrollWnd* &ListSW);
extern PACKAGE void __fastcall RefreshTreeScrolls(Scommondata::TsScrollWndData* SkinData, TacScrollWnd* &ListSW, bool SkipBGMessage);
extern PACKAGE void __fastcall UpdateScrolls(const TacScrollWnd* sw, const bool Repaint = false);
extern PACKAGE void __fastcall PrepareCache(Scommondata::TsCommonData* SkinData, HWND CtrlHandle = (HWND)(0x0), bool DlgMode = false);
extern PACKAGE void __fastcall UninitializeACScroll(HWND Handle, bool FreeSW, bool Repaint, TacScrollWnd* &ListSW);
extern PACKAGE TacScrollWnd* __fastcall Ac_GetScrollWndFromHwnd(const HWND AHandle);
extern PACKAGE void __fastcall UninitializeACWnd(HWND Handle, bool FreeSW, bool Repaint, TacMainWnd* &ListSW);
extern PACKAGE int __fastcall GetScrollMetric(TacScrollBar* sBar, int metric, bool Btn = false);
extern PACKAGE void __fastcall ac_GetHScrollRect(TacScrollWnd* sw, HWND Handle, Types::TRect &R);
extern PACKAGE void __fastcall ac_GetVScrollRect(TacScrollWnd* sw, HWND Handle, Types::TRect &R);
extern PACKAGE void __fastcall ac_DrawScrollBtn(const Types::TRect &bRect, int State, Graphics::TBitmap* Bmp, Scommondata::TsCommonData* cd, Sconst::TacSide Side);
extern PACKAGE void __fastcall ac_DrawSlider(const Types::TRect &bRect, int State, Graphics::TBitmap* Bmp, Sskinmanager::TsSkinManager* sm, bool Vert);
extern PACKAGE int __fastcall ac_NCDraw(TacScrollWnd* sw, HWND Handle, int ThumbPos = 0xffffffff, HDC aDC = (HDC)(0x0));
extern PACKAGE void __fastcall SendScrollMessage(const HWND Handle, const int scrMsg, const int scrId, const int pos);
extern PACKAGE Types::TRect __fastcall BtnDrawRect(const Types::TRect &R, Scommondata::TsCommonData* cd, Sconst::TacSide Side);

}	/* namespace Acsbutils */
using namespace Acsbutils;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AcsbutilsHPP
