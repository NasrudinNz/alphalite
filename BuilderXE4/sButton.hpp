// CodeGear C++Builder
// Copyright (c) 1995, 2013 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sButton.pas' rev: 25.00 (Windows)

#ifndef SbuttonHPP
#define SbuttonHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
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
#include <Vcl.ImgList.hpp>	// Pascal unit
#include <Vcl.Menus.hpp>	// Pascal unit
#include <Vcl.StdCtrls.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit
#include <acntTypes.hpp>	// Pascal unit
#include <sCommonData.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <sDefaults.hpp>	// Pascal unit
#include <sFade.hpp>	// Pascal unit
#include <sSkinManager.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sbutton
{
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TButtonStyle : unsigned char { bsPushButton, bsCommandLink, bsSplitButton };

class DELPHICLASS TsButton;
class PASCALIMPLEMENTATION TsButton : public Vcl::Stdctrls::TButton
{
	typedef Vcl::Stdctrls::TButton inherited;
	
private:
	System::Classes::TNotifyEvent FOnMouseEnter;
	System::Classes::TNotifyEvent FOnMouseLeave;
	bool FDown;
	bool FShowFocus;
	bool FReflected;
	bool FMouseClicked;
	bool FCustomCommandLinkFont;
	int FFocusMargin;
	int FContentMargin;
	TButtonStyle FStyle;
	Vcl::Graphics::TFont* FCommandLinkFont;
	Sconst::TsDisabledKind FDisabledKind;
	Sconst::TacAnimatEvents FAnimatEvents;
	Scommondata::TsCtrlSkinData* FCommonData;
	int OldImageIndex;
	void __fastcall SetFocusMargin(const int Value);
	void __fastcall SetContentMargin(const int Value);
	HIDESBASE void __fastcall SetStyle(const TButtonStyle Value);
	void __fastcall SetDisabledKind(const Sconst::TsDisabledKind Value);
	HIDESBASE MESSAGE void __fastcall WMKeyUp(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall CNDrawItem(Winapi::Messages::TWMDrawItem &Message);
	MESSAGE void __fastcall CNMeasureItem(Winapi::Messages::TWMMeasureItem &Message);
	void __fastcall SetCommandLinkFont(Vcl::Graphics::TFont* const Value);
	System::Uitypes::TImageIndex __fastcall GetImageIndex(void);
	HIDESBASE void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	HIDESBASE bool __fastcall IsImageIndexStored(void);
	void __fastcall SetBoolean(const int Index, const bool Value);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	bool __fastcall IsCmdFontStored(void);
	
protected:
	bool IsFocused;
	bool DroppedDown;
	virtual void __fastcall UpdateImages(void);
	virtual void __fastcall UpdateImageList(void);
	void __fastcall StdDrawItem(const tagDRAWITEMSTRUCT &DrawItemStruct);
	virtual void __fastcall SetButtonStyle(bool ADefault);
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall OurPaintHandler(HDC aDC);
	void __fastcall DrawCaption(Vcl::Graphics::TCanvas* Canvas = (Vcl::Graphics::TCanvas*)(0x0));
	void __fastcall DrawGlyph(Vcl::Graphics::TCanvas* Canvas = (Vcl::Graphics::TCanvas*)(0x0));
	void __fastcall CustomFontChanged(System::TObject* Sender);
	int __fastcall ScaledDropWidth(void);
	System::Types::TRect __fastcall CaptionRect(void);
	bool __fastcall GlyphExist(void);
	bool __fastcall PrepareCache(void);
	System::Types::TSize __fastcall ImageSize(void);
	void __fastcall DrawElevation(Vcl::Graphics::TCanvas* ACanvas);
	
public:
	__fastcall virtual TsButton(System::Classes::TComponent* AOwner);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	int __fastcall CurrentState(void);
	int __fastcall GlyphIndex(void);
	System::Types::TRect __fastcall GlyphRect(void);
	__fastcall virtual ~TsButton(void);
	virtual void __fastcall AfterConstruction(void);
	virtual void __fastcall Invalidate(void);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
__published:
	__property Sconst::TacAnimatEvents AnimatEvents = {read=FAnimatEvents, write=FAnimatEvents, default=16};
	__property Scommondata::TsCtrlSkinData* SkinData = {read=FCommonData, write=FCommonData};
	__property Sconst::TsDisabledKind DisabledKind = {read=FDisabledKind, write=SetDisabledKind, default=1};
	__property int FocusMargin = {read=FFocusMargin, write=SetFocusMargin, default=1};
	__property Vcl::Graphics::TFont* CommandLinkFont = {read=FCommandLinkFont, write=SetCommandLinkFont, stored=IsCmdFontStored};
	__property bool Down = {read=FDown, write=SetBoolean, index=0, default=0};
	__property bool ShowFocus = {read=FShowFocus, write=SetBoolean, index=1, default=1};
	__property bool Reflected = {read=FReflected, write=SetBoolean, index=2, default=0};
	__property bool CustomCommandLinkFont = {read=FCustomCommandLinkFont, write=SetBoolean, index=3, default=0};
	__property System::Uitypes::TImageIndex ImageIndex = {read=GetImageIndex, write=SetImageIndex, stored=IsImageIndexStored, default=-1};
	__property TButtonStyle Style = {read=FStyle, write=SetStyle, default=0};
	__property int ContentMargin = {read=FContentMargin, write=SetContentMargin, default=6};
	__property WordWrap = {default=1};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsButton(HWND ParentWindow) : Vcl::Stdctrls::TButton(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Sbutton */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SBUTTON)
using namespace Sbutton;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SbuttonHPP
