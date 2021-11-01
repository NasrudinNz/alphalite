// CodeGear C++Builder
// Copyright (c) 1995, 2011 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acntTypes.pas' rev: 23.00 (Win32)

#ifndef AcnttypesHPP
#define AcnttypesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Vcl.Imaging.jpeg.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.Menus.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acnttypes
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TacArrowsStyle : unsigned char { arsSolid1, arsLines1, arsSolid2, arsLines2, arsDefault };
#pragma option pop

class DELPHICLASS TacItemDrawData;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacItemDrawData : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	int ImageIndex;
public:
	/* TObject.Create */ inline __fastcall TacItemDrawData(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TacItemDrawData(void) { }
	
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TacBounds
{
	
public:
	int BLeft;
	int BTop;
	int BWidth;
	int BHeight;
};


#pragma pack(push,1)
struct DECLSPEC_DRECORD TSrcRect
{
	
public:
	int SLeft;
	int STop;
	int SRight;
	int SBottom;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TDstRect
{
	
public:
	int DLeft;
	int DTop;
	int DRight;
	int DBottom;
};
#pragma pack(pop)


struct TacLayerPos;
typedef TacLayerPos *PacLayerPos;

struct DECLSPEC_DRECORD TacLayerPos
{
	
public:
	TacBounds Bounds;
	System::Byte LayerBlend;
};


typedef System::DynamicArray<System::Classes::TStringList*> TStringLists;

typedef System::DynamicArray<System::Types::TRect> TRects;

typedef Vcl::Imaging::Jpeg::TJPEGImage TacJpegClass;

typedef Vcl::Menus::TMenuItem TacMenuItem;

class DELPHICLASS TacAccessControl;
class PASCALIMPLEMENTATION TacAccessControl : public Vcl::Controls::TControl
{
	typedef Vcl::Controls::TControl inherited;
	
public:
	__property AutoSize = {default=0};
	__property ParentColor = {default=1};
	__property Color = {default=-16777211};
	__property ParentFont = {default=1};
	__property PopupMenu;
	__property Font;
public:
	/* TControl.Create */ inline __fastcall virtual TacAccessControl(System::Classes::TComponent* AOwner) : Vcl::Controls::TControl(AOwner) { }
	/* TControl.Destroy */ inline __fastcall virtual ~TacAccessControl(void) { }
	
};


class DELPHICLASS TacAccessCanvas;
class PASCALIMPLEMENTATION TacAccessCanvas : public Vcl::Graphics::TCustomCanvas
{
	typedef Vcl::Graphics::TCustomCanvas inherited;
	
public:
	HDC FHandle;
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacAccessCanvas(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TacAccessCanvas(void) : Vcl::Graphics::TCustomCanvas() { }
	
};


class DELPHICLASS TacGlowForm;
class PASCALIMPLEMENTATION TacGlowForm : public Vcl::Forms::TCustomForm
{
	typedef Vcl::Forms::TCustomForm inherited;
	
public:
	bool TransparentMouse;
	virtual void __fastcall AfterConstruction(void);
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TacGlowForm(System::Classes::TComponent* AOwner) : Vcl::Forms::TCustomForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TacGlowForm(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TCustomForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TacGlowForm(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TacGlowForm(HWND ParentWindow) : Vcl::Forms::TCustomForm(ParentWindow) { }
	
};


struct DECLSPEC_DRECORD TacButtonPaintData
{
	
public:
	System::Uitypes::TColor AColor1;
	System::Uitypes::TColor AColor2;
	System::Uitypes::TColor ABorderColor;
	System::Uitypes::TColor AFontColor;
	System::UnicodeString AText;
	int AState;
	int ABevelWidth;
	int ABorderWidth;
	bool ATransparent;
};


class DELPHICLASS TacDataNormal;
class DELPHICLASS TacPaintButtonOptions;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacDataNormal : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Uitypes::TColor FColor1;
	System::Uitypes::TColor FColor2;
	System::Uitypes::TColor FFontColor;
	System::Uitypes::TColor FBorderColor;
	TacPaintButtonOptions* FOwner;
	
public:
	__fastcall TacDataNormal(TacPaintButtonOptions* AOwner);
	void __fastcall SetColor(const int Index, const System::Uitypes::TColor Value);
	
__published:
	__property System::Uitypes::TColor Color1 = {read=FColor1, write=SetColor, index=0, default=-16777201};
	__property System::Uitypes::TColor Color2 = {read=FColor2, write=SetColor, index=1, default=-16777194};
	__property System::Uitypes::TColor FontColor = {read=FFontColor, write=SetColor, index=2, default=-16777198};
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=SetColor, index=3, default=-16777206};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacDataNormal(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TacDataActive;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacDataActive : public TacDataNormal
{
	typedef TacDataNormal inherited;
	
public:
	__fastcall TacDataActive(TacPaintButtonOptions* AOwner);
	
__published:
	__property Color1 = {index=0, default=-16777196};
	__property Color2 = {index=1, default=-16777201};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacDataActive(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TacDataPressed;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacDataPressed : public TacDataNormal
{
	typedef TacDataNormal inherited;
	
public:
	__fastcall TacDataPressed(TacPaintButtonOptions* AOwner);
	
__published:
	__property Color1 = {index=0, default=-16777194};
	__property Color2 = {index=1, default=-16777194};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacDataPressed(void) { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TacPaintButtonOptions : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	int FBevelWidth;
	int FBorderWidth;
	TacDataActive* FDataActive;
	TacDataNormal* FDataNormal;
	TacDataPressed* FDataPressed;
	void __fastcall SetInteger(const int Index, const int Value);
	
protected:
	System::Classes::TNotifyEvent FOnInvalidate;
	
public:
	__fastcall TacPaintButtonOptions(void);
	__fastcall virtual ~TacPaintButtonOptions(void);
	__property System::Classes::TNotifyEvent OnInvalidate = {read=FOnInvalidate, write=FOnInvalidate};
	
__published:
	__property int BevelWidth = {read=FBevelWidth, write=SetInteger, index=0, default=2};
	__property int BorderWidth = {read=FBorderWidth, write=SetInteger, index=1, default=1};
	__property TacDataActive* DataActive = {read=FDataActive, write=FDataActive};
	__property TacDataNormal* DataNormal = {read=FDataNormal, write=FDataNormal};
	__property TacDataPressed* DataPressed = {read=FDataPressed, write=FDataPressed};
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TacBounds __fastcall acBounds(int Left, int Top, int Width, int Height);

}	/* namespace Acnttypes */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ACNTTYPES)
using namespace Acnttypes;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AcnttypesHPP
