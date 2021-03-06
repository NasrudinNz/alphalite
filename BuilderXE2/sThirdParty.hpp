// CodeGear C++Builder
// Copyright (c) 1995, 2011 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sThirdParty.pas' rev: 23.00 (Win32)

#ifndef SthirdpartyHPP
#define SthirdpartyHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.ImgList.hpp>	// Pascal unit
#include <Vcl.ComCtrls.hpp>	// Pascal unit
#include <Vcl.StdCtrls.hpp>	// Pascal unit
#include <acntTypes.hpp>	// Pascal unit
#include <sSkinManager.hpp>	// Pascal unit
#include <sCommonData.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <sBitBtn.hpp>	// Pascal unit
#include <sSpeedButton.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sthirdparty
{
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TacDrawGlyphData
{
	
public:
	int Blend;
	int SkinIndex;
	int NumGlyphs;
	int ImageIndex;
	int CurrentState;
	bool Down;
	bool Grayed;
	bool Enabled;
	bool Reflected;
	Vcl::Graphics::TBitmap* Glyph;
	Vcl::Graphics::TBitmap* DstBmp;
	System::Types::TRect ImgRect;
	Vcl::Graphics::TCanvas* Canvas;
	System::Uitypes::TColor BGColor;
	Vcl::Imglist::TCustomImageList* Images;
	Sskinmanager::TsSkinManager* SkinManager;
	Sconst::TsDisabledGlyphKind DisabledGlyphKind;
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE System::Classes::TStringList* ThirdPartySkipForms;
extern PACKAGE void __fastcall (*InitDevEx)(const bool Active);
extern PACKAGE bool __fastcall (*CheckDevEx)(const Vcl::Controls::TControl* Control);
extern PACKAGE void __fastcall (*RefreshDevEx)(void);
extern PACKAGE int __fastcall GetImageCount(Vcl::Imglist::TCustomImageList* ImgList);
extern PACKAGE int __fastcall GetImageWidth(Vcl::Imglist::TCustomImageList* ImgList);
extern PACKAGE int __fastcall GetImageHeight(Vcl::Imglist::TCustomImageList* ImgList);
extern PACKAGE void __fastcall acDrawGlyphEx(const TacDrawGlyphData &DrawData);
extern PACKAGE void __fastcall DrawBtnGlyph(Vcl::Controls::TControl* Button, Vcl::Graphics::TCanvas* Canvas = (Vcl::Graphics::TCanvas*)(0x0));
extern PACKAGE void __fastcall CopyToolBtnGlyph(Vcl::Comctrls::TToolBar* ToolBar, Vcl::Comctrls::TToolButton* Button, Vcl::Comctrls::TCustomDrawState State, Vcl::Comctrls::TCustomDrawStage Stage, Vcl::Comctrls::TTBCustomDrawFlags &Flags, Vcl::Graphics::TBitmap* BtnBmp);

}	/* namespace Sthirdparty */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_STHIRDPARTY)
using namespace Sthirdparty;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SthirdpartyHPP
