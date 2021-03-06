// CodeGear C++Builder
// Copyright (c) 1995, 2011 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acTitleBar.pas' rev: 23.00 (Win32)

#ifndef ActitlebarHPP
#define ActitlebarHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.ImgList.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.Menus.hpp>	// Pascal unit
#include <Vcl.ExtCtrls.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit
#include <acntTypes.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Actitlebar
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacTitleBarItem;
typedef void __fastcall (__closure *TacInternalDrawEvent)(TacTitleBarItem* Item, const System::Types::TRect &R, Vcl::Graphics::TBitmap* Bmp);

struct DECLSPEC_DRECORD TacTitleItemDrawData
{
	
public:
	System::Types::TRect ARect;
	Vcl::Graphics::TBitmap* Bmp;
};


typedef void __fastcall (__closure *TacDrawItemEvent)(TacTitleBarItem* Item, const TacTitleItemDrawData &ADrawData);

class DELPHICLASS TacItemAnimation;
class PASCALIMPLEMENTATION TacItemAnimation : public Vcl::Extctrls::TTimer
{
	typedef Vcl::Extctrls::TTimer inherited;
	
public:
	int CurrentLevel;
	int CurrentState;
	int MaxIterations;
	Acnttypes::TacGlowForm* AForm;
	Acnttypes::TacGlowForm* OldForm;
	bool ToShow;
	Vcl::Graphics::TBitmap* NewBmp;
	HWND FormHandle;
	TacTitleBarItem* Item;
	__fastcall virtual TacItemAnimation(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TacItemAnimation(void);
	System::Types::TRect __fastcall GetFormBounds(void);
	int __fastcall Offset(void);
	int __fastcall Step(void);
	void __fastcall MakeForm(void);
	void __fastcall UpdateForm(int Blend);
	void __fastcall StartAnimation(int NewState, bool Show);
	void __fastcall ChangeState(int NewState, bool Show);
	void __fastcall MakeImg(void);
	void __fastcall CheckMouseLeave(void);
	void __fastcall OnAnimTimer(System::TObject* Sender);
};


class DELPHICLASS TacFontData;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacFontData : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FUseSysSize;
	bool FUseSysStyle;
	bool FUseSysColor;
	bool FUseSysGlowing;
	bool FUseSysFontName;
	Vcl::Graphics::TFont* FFont;
	HWND WndHandle;
	int FGlowSize;
	System::Uitypes::TColor FGlowColor;
	bool __fastcall GetBool(const int Index);
	void __fastcall SetBool(const int Index, const bool Value);
	void __fastcall SetFont(const Vcl::Graphics::TFont* Value);
	void __fastcall SetGlowSize(const int Value);
	void __fastcall SetGlowColor(const System::Uitypes::TColor Value);
	
public:
	Vcl::Graphics::TFont* UsedFont;
	Vcl::Graphics::TBitmap* GlowMask;
	__fastcall TacFontData(void);
	__fastcall virtual ~TacFontData(void);
	void __fastcall Invalidate(void);
	
__published:
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property System::Uitypes::TColor GlowColor = {read=FGlowColor, write=SetGlowColor, default=8421504};
	__property int GlowSize = {read=FGlowSize, write=SetGlowSize, default=0};
	__property bool UseSysColor = {read=GetBool, write=SetBool, index=0, default=1};
	__property bool UseSysFontName = {read=GetBool, write=SetBool, index=1, default=1};
	__property bool UseSysGlowing = {read=GetBool, write=SetBool, index=2, default=1};
	__property bool UseSysSize = {read=GetBool, write=SetBool, index=3, default=1};
	__property bool UseSysStyle = {read=GetBool, write=SetBool, index=4, default=1};
};

#pragma pack(pop)

#pragma option push -b-
enum TacBtnStyle : unsigned char { bsButton, bsMenu, bsTab, bsSpacing, bsInfo };
#pragma option pop

#pragma option push -b-
enum TacItemAlign : unsigned char { tbaLeft, tbaRight, tbaCenter, tbaCenterInSpace };
#pragma option pop

class PASCALIMPLEMENTATION TacTitleBarItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	Vcl::Graphics::TBitmap* FGlyph;
	Vcl::Graphics::TBitmap* FDefaultMenuBtn;
	bool FEnabled;
	bool FVisible;
	bool FAutoSize;
	bool FShowHint;
	bool FDroppedDown;
	System::UnicodeString FHint;
	System::UnicodeString FCaption;
	Vcl::Controls::TMouseEvent FOnMouseUp;
	Vcl::Controls::TMouseEvent FOnMouseDown;
	System::Classes::TNotifyEvent FOnClick;
	System::Classes::TNotifyEvent FOnChanged;
	System::Classes::TNotifyEvent FOnMouseLeave;
	System::Classes::TNotifyEvent FOnMouseEnter;
	int FWidth;
	int FHeight;
	int FSpacing;
	int FNumGlyphs;
	int FImageIndex;
	int FGroupIndex;
	System::UnicodeString FName;
	System::Uitypes::TCursor FCursor;
	TacBtnStyle FStyle;
	System::Types::TSize FContentSize;
	TacItemAlign FAlign;
	TacFontData* FFontData;
	Vcl::Menus::TPopupMenu* FDropdownMenu;
	TacInternalDrawEvent FOnInternalDraw;
	System::Classes::TAlignment FAlignment;
	int FTag;
	TacDrawItemEvent FOnDrawItem;
	int FPressedImageIndex;
	int FDisabledImageIndex;
	int FHotImageIndex;
	System::UnicodeString FSkinSection;
	void __fastcall SetSkinSection(const System::UnicodeString Value);
	void __fastcall SetAlignment(const System::Classes::TAlignment Value);
	void __fastcall SetGlyph(const Vcl::Graphics::TBitmap* Value);
	void __fastcall SetName(const System::UnicodeString Value);
	void __fastcall SetAlign(const TacItemAlign Value);
	void __fastcall SetCaption(const System::UnicodeString Value);
	void __fastcall SetStyle(const TacBtnStyle Value);
	void __fastcall SetState(const int Value);
	void __fastcall SetInteger(const int AIndex, const int Value);
	void __fastcall SetBoolean(const int Index, const bool Value);
	int __fastcall GetState(void);
	void __fastcall OnGlyphChange(System::TObject* Sender);
	
protected:
	bool FDown;
	int FState;
	
public:
	Vcl::Controls::THintWindow* HintWnd;
	bool FPressed;
	System::Types::TRect Rect;
	System::TObject* *Data;
	TacItemAnimation* Timer;
	Acnttypes::TacGlowForm* ExtForm;
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	__fastcall virtual TacTitleBarItem(System::Classes::TCollection* ACollection);
	__fastcall virtual ~TacTitleBarItem(void);
	void __fastcall ScaleItem(int NewValue, int OldValue);
	void __fastcall InitFont(void);
	void __fastcall DoMouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall DoMouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall DoClick(void);
	HIDESBASE void __fastcall Changed(void);
	void __fastcall UpdateSize(bool ContentOnly = false);
	void __fastcall Invalidate(bool RecalcSize = false);
	virtual System::UnicodeString __fastcall GetDisplayName(void);
	int __fastcall IntXMargin(void);
	__property Vcl::Graphics::TBitmap* DefaultMenuBtn = {read=FDefaultMenuBtn};
	__property bool DroppedDown = {read=FDroppedDown, nodefault};
	__property int GroupIndex = {read=FGroupIndex, write=SetInteger, index=8, default=0};
	__property System::Types::TSize ContentSize = {read=FContentSize};
	__property bool Pressed = {read=FPressed, nodefault};
	__property int State = {read=GetState, write=SetState, nodefault};
	__property TacInternalDrawEvent OnInternalDraw = {read=FOnInternalDraw, write=FOnInternalDraw};
	__property System::Classes::TNotifyEvent OnChanged = {read=FOnChanged, write=FOnChanged};
	
__published:
	__property TacItemAlign Align = {read=FAlign, write=SetAlign, default=0};
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property System::UnicodeString Caption = {read=FCaption, write=SetCaption};
	__property Vcl::Menus::TPopupMenu* DropdownMenu = {read=FDropdownMenu, write=FDropdownMenu};
	__property TacFontData* FontData = {read=FFontData, write=FFontData};
	__property Vcl::Graphics::TBitmap* Glyph = {read=FGlyph, write=SetGlyph};
	__property System::Uitypes::TCursor Cursor = {read=FCursor, write=FCursor, default=0};
	__property bool AutoSize = {read=FAutoSize, write=SetBoolean, index=0, default=1};
	__property bool Down = {read=FDown, write=SetBoolean, index=1, default=0};
	__property bool Enabled = {read=FEnabled, write=SetBoolean, index=2, default=1};
	__property bool Visible = {read=FVisible, write=SetBoolean, index=3, default=1};
	__property System::UnicodeString Hint = {read=FHint, write=FHint};
	__property int DisabledImageIndex = {read=FDisabledImageIndex, write=SetInteger, index=0, default=-1};
	__property int ImageIndex = {read=FImageIndex, write=SetInteger, index=1, default=-1};
	__property int HotImageIndex = {read=FHotImageIndex, write=SetInteger, index=2, default=-1};
	__property int PressedImageIndex = {read=FPressedImageIndex, write=SetInteger, index=3, default=-1};
	__property int NumGlyphs = {read=FNumGlyphs, write=SetInteger, index=4, default=1};
	__property int Spacing = {read=FSpacing, write=SetInteger, index=5, default=4};
	__property int Height = {read=FHeight, write=SetInteger, index=6, default=18};
	__property int Width = {read=FWidth, write=SetInteger, index=7, default=22};
	__property Index;
	__property System::UnicodeString Name = {read=FName, write=SetName};
	__property bool ShowHint = {read=FShowHint, write=FShowHint, nodefault};
	__property System::UnicodeString SkinSection = {read=FSkinSection, write=SetSkinSection};
	__property TacBtnStyle Style = {read=FStyle, write=SetStyle, default=0};
	__property int Tag = {read=FTag, write=FTag, default=0};
	__property System::Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
	__property TacDrawItemEvent OnDrawItem = {read=FOnDrawItem, write=FOnDrawItem};
	__property Vcl::Controls::TMouseEvent OnMouseDown = {read=FOnMouseDown, write=FOnMouseDown};
	__property System::Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property System::Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property Vcl::Controls::TMouseEvent OnMouseUp = {read=FOnMouseUp, write=FOnMouseUp};
};


class DELPHICLASS TacTitleItems;
class DELPHICLASS TsTitleBar;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacTitleItems : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TacTitleBarItem* operator[](int Index) { return Items[Index]; }
	
private:
	TsTitleBar* FOwner;
	HIDESBASE TacTitleBarItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TacTitleBarItem* Value);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner(void);
	
public:
	__fastcall TacTitleItems(System::Classes::TPersistent* AOwner);
	HIDESBASE TacTitleBarItem* __fastcall Add(void);
	HIDESBASE TacTitleBarItem* __fastcall Insert(int Index);
	__property TacTitleBarItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TacTitleItems(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TsTitleBar : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	int FLeftWidth;
	int FRightWidth;
	int FItemsMargin;
	int FCenterWidth;
	int FCenterWidthS;
	int FItemsSpacing;
	Vcl::Forms::TForm* Form;
	#pragma pack(push,8)
	System::Types::TRect FCaptionRect;
	#pragma pack(pop)
	TacTitleItems* FItems;
	bool FShowCaption;
	int FRightSpacing;
	Vcl::Imglist::TCustomImageList* FImages;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	void __fastcall SetItems(const TacTitleItems* Value);
	void __fastcall SetImages(const Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetShowCaption(const bool Value);
	
protected:
	int FFullRight;
	int FBarVCenter;
	int OldScaleValue;
	#pragma pack(push,8)
	System::Types::TRect FBarRect;
	#pragma pack(pop)
	bool FUpdating;
	void __fastcall ImageListChange(System::TObject* Sender);
	
public:
	Vcl::Graphics::TBitmap* FDefaultMenuBtn;
	void __fastcall CalcSizes(void);
	__fastcall virtual TsTitleBar(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsTitleBar(void);
	virtual void __fastcall Loaded(void);
	void __fastcall UpdateScale(int NewValue);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	void __fastcall Invalidate(void);
	__property System::Types::TRect BarRect = {read=FBarRect};
	__property System::Types::TRect CaptionRect = {read=FCaptionRect};
	__property int LeftWidth = {read=FLeftWidth, nodefault};
	__property int RightWidth = {read=FRightWidth, nodefault};
	
__published:
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property TacTitleItems* Items = {read=FItems, write=SetItems};
	__property int ItemsMargin = {read=FItemsMargin, write=FItemsMargin, default=3};
	__property int ItemsSpacing = {read=FItemsSpacing, write=FItemsSpacing, default=0};
	__property int RightSpacing = {read=FRightSpacing, write=FRightSpacing, default=0};
	__property bool ShowCaption = {read=FShowCaption, write=SetShowCaption, nodefault};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::WideChar acDownChar = (System::WideChar)(0x75);
#define acDownFont L"Marlett"
extern PACKAGE void __fastcall StartItemAnimation(const TacTitleBarItem* Item, const int Iterations, const bool Show, Acnttypes::TacGlowForm* ExtendedForm = (Acnttypes::TacGlowForm*)(0x0));
extern PACKAGE void __fastcall ShowHintWnd(TacTitleBarItem* Item);
extern PACKAGE void __fastcall HideHintWnd(TacTitleBarItem* Item);
extern PACKAGE void __fastcall PaintItemNoAlpha(const Vcl::Graphics::TBitmap* DstBmp, const Vcl::Graphics::TBitmap* SrcBmp, const System::Types::TRect &DstRect, const System::Types::TRect &SrcRect, const System::Types::TRect &BorderWidths);

}	/* namespace Actitlebar */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ACTITLEBAR)
using namespace Actitlebar;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ActitlebarHPP
