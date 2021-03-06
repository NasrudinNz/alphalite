// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sSpeedButton.pas' rev: 30.00 (Windows)

#ifndef SspeedbuttonHPP
#define SspeedbuttonHPP

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
#include <Vcl.ImgList.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <System.Types.hpp>
#include <acntTypes.hpp>
#include <sCommonData.hpp>
#include <sConst.hpp>
#include <sDefaults.hpp>
#include <sFade.hpp>
#include <System.UITypes.hpp>
#include <System.Actions.hpp>

//-- user supplied -----------------------------------------------------------

namespace Sspeedbutton
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TsSpeedButton;
class DELPHICLASS TacSpeedButtonActionLink;
class DELPHICLASS TsTimerSpeedButton;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TsSpeedButton : public Vcl::Buttons::TSpeedButton
{
	typedef Vcl::Buttons::TSpeedButton inherited;
	
private:
	int FBlend;
	int FOffset;
	int FOldSpacing;
	int FImageIndex;
	int FOldNumGlyphs;
	int FImageIndexHot;
	int FImageIndexPressed;
	int FImageIndexDisabled;
	int FImageIndexSelected;
	bool OldFlat;
	bool FWordWrap;
	bool FReflected;
	bool FStdParent;
	bool FBGCopying;
	bool FStoredDown;
	bool FUseEllipsis;
	bool FShowCaption;
	bool SkipDropDown;
	bool FDrawOverBorder;
	System::Classes::TNotifyEvent FOnMouseEnter;
	System::Classes::TNotifyEvent FOnMouseLeave;
	System::Classes::TAlignment FAlignment;
	System::Classes::TAlignment FTextAlignment;
	System::Uitypes::TColor FGlyphColorTone;
	Vcl::Graphics::TBitmap* FStdBG;
	Vcl::Menus::TPopupMenu* FDropdownMenu;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	Sconst::TacGrayedMode FGrayedMode;
	Scommondata::TsCtrlSkinData* FCommonData;
	Sconst::TsDisabledKind FDisabledKind;
	Sconst::TsDisabledGlyphKind FDisabledGlyphKind;
	Vcl::Imglist::TCustomImageList* FImages;
	Vcl::Comctrls::TToolButtonStyle FButtonStyle;
	Sconst::TBmpPaintEvent FOnPaint;
	Sconst::TacAnimatEvents FAnimatEvents;
	void __fastcall SetGlyphColorTone(const System::Uitypes::TColor Value);
	void __fastcall SetDropdownMenu(Vcl::Menus::TPopupMenu* const Value);
	void __fastcall SetDisabledKind(const Sconst::TsDisabledKind Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetButtonStyle(const Vcl::Comctrls::TToolButtonStyle Value);
	void __fastcall SetDisabledGlyphKind(const Sconst::TsDisabledGlyphKind Value);
	void __fastcall SetInteger(const int Index, const int Value);
	void __fastcall SetBoolean(const int Index, const bool Value);
	void __fastcall SetAlignment(const int Index, const System::Classes::TAlignment Value);
	void __fastcall ImageListChange(System::TObject* Sender);
	
protected:
	bool FGrayed;
	bool FHotState;
	bool DroppedDown;
	bool MenuVisible;
	bool FMenuOwnerMode;
	int OldMargin;
	System::UnicodeString OldCaption;
	Vcl::Buttons::TButtonLayout OldLayout;
	System::Classes::TNotifyEvent OldOnChange;
	void __fastcall DrawCaption(void);
	int __fastcall ArrowWidth(void);
	int __fastcall GenMargin(void);
	void __fastcall DoDrawText(System::Types::TRect &R, unsigned Flags);
	virtual void __fastcall DrawGlyph(void);
	virtual int __fastcall GlyphWidth(void);
	virtual int __fastcall GlyphHeight(void);
	virtual void __fastcall CopyFromCache(HDC aDC);
	virtual bool __fastcall PrepareCache(void);
	int __fastcall ScaledAddWidth(void);
	void __fastcall PaintArrow(const System::Types::PRect pR, int Mode);
	void __fastcall ActionChanged(System::TObject* Sender);
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	HIDESBASE void __fastcall GlyphChanged(System::TObject* Sender);
	virtual void __fastcall Ac_CMMouseEnter(void);
	virtual void __fastcall Ac_CMMouseLeave(void);
	virtual void __fastcall StdPaint(bool PaintButton = true);
	virtual void __fastcall Paint(void);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	DYNAMIC Vcl::Controls::TControlActionLinkClass __fastcall GetActionLinkClass(void);
	
public:
	virtual int __fastcall CurrentState(void);
	int __fastcall CurrentImageIndex(void);
	System::Types::TRect __fastcall CaptionRect(bool ShiftClicked = true);
	System::Types::TRect __fastcall ImgRect(bool ShiftClicked = true);
	System::Types::TRect __fastcall ArrowRect(void);
	__fastcall virtual TsSpeedButton(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsSpeedButton(void);
	void __fastcall GraphRepaint(void);
	void __fastcall UpdateControl(void);
	virtual void __fastcall AfterConstruction(void);
	virtual void __fastcall Invalidate(void);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	System::Types::TSize __fastcall TextRectSize(void);
	__property Canvas;
	
__published:
	__property Align = {default=0};
	__property OnDragDrop;
	__property OnDragOver;
	__property DragKind = {default=0};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Sconst::TBmpPaintEvent OnPaint = {read=FOnPaint, write=FOnPaint};
	__property System::Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property System::Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property Sconst::TacAnimatEvents AnimatEvents = {read=FAnimatEvents, write=FAnimatEvents, default=16};
	__property Vcl::Comctrls::TToolButtonStyle ButtonStyle = {read=FButtonStyle, write=SetButtonStyle, default=0};
	__property Scommondata::TsCtrlSkinData* SkinData = {read=FCommonData, write=FCommonData};
	__property Sconst::TsDisabledGlyphKind DisabledGlyphKind = {read=FDisabledGlyphKind, write=SetDisabledGlyphKind, default=0};
	__property Sconst::TsDisabledKind DisabledKind = {read=FDisabledKind, write=SetDisabledKind, default=1};
	__property Vcl::Menus::TPopupMenu* DropdownMenu = {read=FDropdownMenu, write=SetDropdownMenu};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property Sconst::TacGrayedMode GrayedMode = {read=FGrayedMode, write=FGrayedMode, default=1};
	__property System::Uitypes::TColor GlyphColorTone = {read=FGlyphColorTone, write=SetGlyphColorTone, default=536870911};
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, index=0, default=2};
	__property System::Classes::TAlignment TextAlignment = {read=FTextAlignment, write=SetAlignment, index=1, default=2};
	__property int Blend = {read=FBlend, write=SetInteger, index=0, default=0};
	__property int ImageIndex = {read=FImageIndex, write=SetInteger, index=1, default=-1};
	__property int TextOffset = {read=FOffset, write=SetInteger, index=2, default=0};
	__property int ImageIndexHot = {read=FImageIndexHot, write=SetInteger, index=3, default=-1};
	__property int ImageIndexPressed = {read=FImageIndexPressed, write=SetInteger, index=4, default=-1};
	__property int ImageIndexDisabled = {read=FImageIndexDisabled, write=SetInteger, index=5, default=-1};
	__property int ImageIndexSelected = {read=FImageIndexSelected, write=SetInteger, index=6, default=-1};
	__property bool DrawOverBorder = {read=FDrawOverBorder, write=SetBoolean, index=0, default=1};
	__property bool Grayed = {read=FGrayed, write=SetBoolean, index=1, default=0};
	__property bool Reflected = {read=FReflected, write=SetBoolean, index=2, default=0};
	__property bool ShowCaption = {read=FShowCaption, write=SetBoolean, index=3, default=1};
	__property bool WordWrap = {read=FWordWrap, write=SetBoolean, index=4, default=1};
	__property bool UseEllipsis = {read=FUseEllipsis, write=SetBoolean, index=5, default=1};
	__property Margin = {default=-1};
};


class PASCALIMPLEMENTATION TacSpeedButtonActionLink : public Vcl::Buttons::TSpeedButtonActionLink
{
	typedef Vcl::Buttons::TSpeedButtonActionLink inherited;
	
protected:
	virtual void __fastcall SetImageIndex(int Value);
public:
	/* TSpeedButtonActionLink.Create */ inline __fastcall virtual TacSpeedButtonActionLink(System::TObject* AClient) : Vcl::Buttons::TSpeedButtonActionLink(AClient) { }
	
public:
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TacSpeedButtonActionLink(void) { }
	
};


class PASCALIMPLEMENTATION TsTimerSpeedButton : public TsSpeedButton
{
	typedef TsSpeedButton inherited;
	
private:
	bool FAllowTimer;
	
public:
	__fastcall virtual TsTimerSpeedButton(System::Classes::TComponent* AOwner);
	
__published:
	__property bool AllowTimer = {read=FAllowTimer, write=FAllowTimer, default=1};
public:
	/* TsSpeedButton.Destroy */ inline __fastcall virtual ~TsTimerSpeedButton(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Sspeedbutton */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SSPEEDBUTTON)
using namespace Sspeedbutton;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SspeedbuttonHPP
