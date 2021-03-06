// Borland C++ Builder
// Copyright (c) 1995, 2005 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Acnttypes.pas' rev: 10.00

#ifndef AcnttypesHPP
#define AcnttypesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Jpeg.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Sconst.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acnttypes
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TacArrowsStyle { arsSolid1, arsLines1, arsSolid2, arsLines2, arsDefault };
#pragma option pop

class DELPHICLASS TacItemDrawData;
class PASCALIMPLEMENTATION TacItemDrawData : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	int ImageIndex;
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TacItemDrawData(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TacItemDrawData(void) { }
	#pragma option pop
	
};


struct TacBounds
{
	
public:
	int BLeft;
	int BTop;
	int BWidth;
	int BHeight;
} ;

#pragma pack(push,1)
struct TSrcRect
{
	
public:
	int SLeft;
	int STop;
	int SRight;
	int SBottom;
} ;
#pragma pack(pop)

#pragma pack(push,1)
struct TDstRect
{
	
public:
	int DLeft;
	int DTop;
	int DRight;
	int DBottom;
} ;
#pragma pack(pop)

struct TacLayerPos;
typedef TacLayerPos *PacLayerPos;

struct TacLayerPos
{
	
public:
	TacBounds Bounds;
	Byte LayerBlend;
} ;

typedef DynamicArray<Classes::TStringList* >  TStringLists;

typedef DynamicArray<Types::TRect >  TRects;

typedef TJPEGImage TacJpegClass;
;

typedef TMenuItem TacMenuItem;
;

class DELPHICLASS TacAccessControl;
class PASCALIMPLEMENTATION TacAccessControl : public Controls::TControl 
{
	typedef Controls::TControl inherited;
	
public:
	__property AutoSize  = {default=0};
	__property ParentColor  = {default=1};
	__property Color  = {default=-16777211};
	__property ParentFont  = {default=1};
	__property PopupMenu ;
	__property Font ;
public:
	#pragma option push -w-inl
	/* TControl.Create */ inline __fastcall virtual TacAccessControl(Classes::TComponent* AOwner) : Controls::TControl(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TControl.Destroy */ inline __fastcall virtual ~TacAccessControl(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacAccessCanvas;
class PASCALIMPLEMENTATION TacAccessCanvas : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
public:
	HDC FHandle;
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacAccessCanvas(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TacAccessCanvas(void) : Classes::TPersistent() { }
	#pragma option pop
	
};


class DELPHICLASS TacGlowForm;
class PASCALIMPLEMENTATION TacGlowForm : public Forms::TCustomForm 
{
	typedef Forms::TCustomForm inherited;
	
public:
	bool TransparentMouse;
	virtual void __fastcall AfterConstruction(void);
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
public:
	#pragma option push -w-inl
	/* TCustomForm.Create */ inline __fastcall virtual TacGlowForm(Classes::TComponent* AOwner) : Forms::TCustomForm(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TacGlowForm(Classes::TComponent* AOwner, int Dummy) : Forms::TCustomForm(AOwner, Dummy) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TacGlowForm(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TacGlowForm(HWND ParentWindow) : Forms::TCustomForm(ParentWindow) { }
	#pragma option pop
	
};


struct TacButtonPaintData
{
	
public:
	Graphics::TColor AColor1;
	Graphics::TColor AColor2;
	Graphics::TColor ABorderColor;
	Graphics::TColor AFontColor;
	AnsiString AText;
	int AState;
	int ABevelWidth;
	int ABorderWidth;
	bool ATransparent;
} ;

class DELPHICLASS TacDataNormal;
class DELPHICLASS TacPaintButtonOptions;
class DELPHICLASS TacDataActive;
class PASCALIMPLEMENTATION TacDataNormal : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	Graphics::TColor FColor1;
	Graphics::TColor FColor2;
	Graphics::TColor FFontColor;
	Graphics::TColor FBorderColor;
	TacPaintButtonOptions* FOwner;
	
public:
	__fastcall TacDataNormal(TacPaintButtonOptions* AOwner);
	void __fastcall SetColor(const int Index, const Graphics::TColor Value);
	
__published:
	__property Graphics::TColor Color1 = {read=FColor1, write=SetColor, index=0, default=-16777201};
	__property Graphics::TColor Color2 = {read=FColor2, write=SetColor, index=1, default=-16777194};
	__property Graphics::TColor FontColor = {read=FFontColor, write=SetColor, index=2, default=-16777198};
	__property Graphics::TColor BorderColor = {read=FBorderColor, write=SetColor, index=3, default=-16777206};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacDataNormal(void) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TacDataActive : public TacDataNormal 
{
	typedef TacDataNormal inherited;
	
public:
	__fastcall TacDataActive(TacPaintButtonOptions* AOwner);
	
__published:
	__property Color1  = {index=0, default=-16777196};
	__property Color2  = {index=1, default=-16777201};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacDataActive(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacDataPressed;
class PASCALIMPLEMENTATION TacDataPressed : public TacDataNormal 
{
	typedef TacDataNormal inherited;
	
public:
	__fastcall TacDataPressed(TacPaintButtonOptions* AOwner);
	
__published:
	__property Color1  = {index=0, default=-16777194};
	__property Color2  = {index=1, default=-16777194};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacDataPressed(void) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TacPaintButtonOptions : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	int FBevelWidth;
	int FBorderWidth;
	TacDataActive* FDataActive;
	TacDataNormal* FDataNormal;
	TacDataPressed* FDataPressed;
	void __fastcall SetInteger(const int Index, const int Value);
	
protected:
	Classes::TNotifyEvent FOnInvalidate;
	
public:
	__fastcall TacPaintButtonOptions(void);
	__fastcall virtual ~TacPaintButtonOptions(void);
	__property Classes::TNotifyEvent OnInvalidate = {read=FOnInvalidate, write=FOnInvalidate};
	
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
using namespace Acnttypes;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Acnttypes
