// CodeGear C++Builder
// Copyright (c) 1995, 2009 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Acgputils.pas' rev: 21.00

#ifndef AcgputilsHPP
#define AcgputilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Sysutils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Sconst.hpp>	// Pascal unit
#include <Sgradient.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acgputils
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall acgpDrawEllipse(HDC DC, float X, float Y, float Width, float Height, Graphics::TColor Color, float PenWidth = 1.000000E+00);
extern PACKAGE void __fastcall acgpDrawLine(HDC DC, float X1, float Y1, float X2, float Y2, Graphics::TColor Color, float PenWidth = 1.000000E+00);
extern PACKAGE void __fastcall acgpFillEllipse(HDC DC, float X, float Y, float Width, float Height, Graphics::TColor Color)/* overload */;
extern PACKAGE void __fastcall acgpDrawArc(HDC DC, float X, float Y, float Width, float Height, float StartAngle, float SweepAngle, Graphics::TColor Color, float PenWidth = 1.000000E+00);
extern PACKAGE void __fastcall acgpStretchRect(Graphics::TBitmap* DstBmp, Graphics::TBitmap* SrcBmp, int SrcX, int SrcY, int SrcWidth, int SrcHeight);
extern PACKAGE void * __fastcall acgpCreateLineBrush(HDC DC, const Types::TPoint &Point1, const Types::TPoint &Point2, Graphics::TColor Color1, Graphics::TColor Color2);
extern PACKAGE void __fastcall acgpFillRectangle(HDC DC, void * Brush, float X, float Y, float Width, float Height);
extern PACKAGE void __fastcall acgpGradientRing(HDC DC, float X, float Y, float Width, float Height, Graphics::TColor Color1, Graphics::TColor Color2, float PenWidth = 1.000000E+00);
extern PACKAGE void __fastcall acgpGradientEllipse(HDC DC, float X, float Y, float Width, float Height, Graphics::TColor Color1, Graphics::TColor Color2);
extern PACKAGE void __fastcall acgpGradientRectangleH(HDC DC, float X, float Y, float Width, float Height, Graphics::TColor Color1, Graphics::TColor Color2);
extern PACKAGE void __fastcall acgpGradientRectangleV(HDC DC, float X, float Y, float Width, float Height, Graphics::TColor Color1, Graphics::TColor Color2);
extern PACKAGE void __fastcall acgpGradientRectangle(HDC DC, float X, float Y, float Width, float Height, Types::TPoint *Points, Sconst::TsColor *Colors, Sconst::TsColor CenterColor);

}	/* namespace Acgputils */
using namespace Acgputils;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AcgputilsHPP
