// CodeGear C++Builder
// Copyright (c) 1995, 2011 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acgpUtils.pas' rev: 23.00 (Win32)

#ifndef AcgputilsHPP
#define AcgputilsHPP

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
#include <sConst.hpp>	// Pascal unit
#include <sGradient.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acgputils
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall acgpDrawEllipse(HDC DC, float X, float Y, float Width, float Height, System::Uitypes::TColor Color, float PenWidth = 1.000000E+00);
extern PACKAGE void __fastcall acgpDrawLine(HDC DC, float X1, float Y1, float X2, float Y2, System::Uitypes::TColor Color, float PenWidth = 1.000000E+00);
extern PACKAGE void __fastcall acgpFillEllipse(HDC DC, float X, float Y, float Width, float Height, System::Uitypes::TColor Color)/* overload */;
extern PACKAGE void __fastcall acgpDrawArc(HDC DC, float X, float Y, float Width, float Height, float StartAngle, float SweepAngle, System::Uitypes::TColor Color, float PenWidth = 1.000000E+00);
extern PACKAGE void __fastcall acgpStretchRect(Vcl::Graphics::TBitmap* DstBmp, Vcl::Graphics::TBitmap* SrcBmp, int SrcX, int SrcY, int SrcWidth, int SrcHeight);
extern PACKAGE void * __fastcall acgpCreateLineBrush(HDC DC, const System::Types::TPoint &Point1, const System::Types::TPoint &Point2, System::Uitypes::TColor Color1, System::Uitypes::TColor Color2);
extern PACKAGE void __fastcall acgpFillRectangle(HDC DC, void * Brush, float X, float Y, float Width, float Height);
extern PACKAGE void __fastcall acgpGradientRing(HDC DC, float X, float Y, float Width, float Height, System::Uitypes::TColor Color1, System::Uitypes::TColor Color2, float PenWidth = 1.000000E+00);
extern PACKAGE void __fastcall acgpGradientEllipse(HDC DC, float X, float Y, float Width, float Height, System::Uitypes::TColor Color1, System::Uitypes::TColor Color2);
extern PACKAGE void __fastcall acgpGradientRectangleH(HDC DC, float X, float Y, float Width, float Height, System::Uitypes::TColor Color1, System::Uitypes::TColor Color2);
extern PACKAGE void __fastcall acgpGradientRectangleV(HDC DC, float X, float Y, float Width, float Height, System::Uitypes::TColor Color1, System::Uitypes::TColor Color2);
extern PACKAGE void __fastcall acgpGradientRectangle(HDC DC, float X, float Y, float Width, float Height, System::Types::TPoint *Points, Sconst::TsColor *Colors, Sconst::TsColor CenterColor);

}	/* namespace Acgputils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ACGPUTILS)
using namespace Acgputils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AcgputilsHPP
