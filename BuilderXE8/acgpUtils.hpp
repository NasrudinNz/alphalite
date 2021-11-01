// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acgpUtils.pas' rev: 29.00 (Windows)

#ifndef AcgputilsHPP
#define AcgputilsHPP

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
#include <sConst.hpp>
#include <sGradient.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acgputils
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall acgpDrawEllipse(HDC DC, float X, float Y, float Width, float Height, System::Uitypes::TColor Color, float PenWidth = 1.000000E+00f);
extern DELPHI_PACKAGE void __fastcall acgpDrawLine(HDC DC, float X1, float Y1, float X2, float Y2, System::Uitypes::TColor Color, float PenWidth = 1.000000E+00f);
extern DELPHI_PACKAGE void __fastcall acgpFillEllipse(HDC DC, float X, float Y, float Width, float Height, System::Uitypes::TColor Color)/* overload */;
extern DELPHI_PACKAGE void __fastcall acgpDrawArc(HDC DC, float X, float Y, float Width, float Height, float StartAngle, float SweepAngle, System::Uitypes::TColor Color, float PenWidth = 1.000000E+00f);
extern DELPHI_PACKAGE void __fastcall acgpStretchRect(Vcl::Graphics::TBitmap* DstBmp, Vcl::Graphics::TBitmap* SrcBmp, int SrcX, int SrcY, int SrcWidth, int SrcHeight);
extern DELPHI_PACKAGE void * __fastcall acgpCreateLineBrush(HDC DC, const System::Types::TPoint &Point1, const System::Types::TPoint &Point2, System::Uitypes::TColor Color1, System::Uitypes::TColor Color2);
extern DELPHI_PACKAGE void __fastcall acgpFillRectangle(HDC DC, void * Brush, float X, float Y, float Width, float Height);
extern DELPHI_PACKAGE void __fastcall acgpGradientRing(HDC DC, float X, float Y, float Width, float Height, System::Uitypes::TColor Color1, System::Uitypes::TColor Color2, float PenWidth = 1.000000E+00f);
extern DELPHI_PACKAGE void __fastcall acgpGradientEllipse(HDC DC, float X, float Y, float Width, float Height, System::Uitypes::TColor Color1, System::Uitypes::TColor Color2);
extern DELPHI_PACKAGE void __fastcall acgpGradientRectangleH(HDC DC, float X, float Y, float Width, float Height, System::Uitypes::TColor Color1, System::Uitypes::TColor Color2);
extern DELPHI_PACKAGE void __fastcall acgpGradientRectangleV(HDC DC, float X, float Y, float Width, float Height, System::Uitypes::TColor Color1, System::Uitypes::TColor Color2);
extern DELPHI_PACKAGE void __fastcall acgpGradientRectangle(HDC DC, float X, float Y, float Width, float Height, const Sgradient::TGradPoints &Points, const Sgradient::TGradColors &Colors, Sconst::TsColor CenterColor);
}	/* namespace Acgputils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ACGPUTILS)
using namespace Acgputils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AcgputilsHPP
