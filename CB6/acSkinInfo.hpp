// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acSkinInfo.pas' rev: 6.00

#ifndef acSkinInfoHPP
#define acSkinInfoHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <sLabel.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <sMemo.hpp>	// Pascal unit
#include <sBitBtn.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <sSkinProvider.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acskininfo
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TSkinInfoForm;
class PASCALIMPLEMENTATION TSkinInfoForm : public Forms::TForm 
{
	typedef Forms::TForm inherited;
	
__published:
	Sbitbtn::TsBitBtn* sBitBtn1;
	Sskinprovider::TsSkinProvider* sSkinProvider1;
	Smemo::TsMemo* sMemo1;
	Stdctrls::TLabel* Label1;
public:
	#pragma option push -w-inl
	/* TCustomForm.Create */ inline __fastcall virtual TSkinInfoForm(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TSkinInfoForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TSkinInfoForm(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TSkinInfoForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TSkinInfoForm* SkinInfoForm;

}	/* namespace Acskininfo */
using namespace Acskininfo;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acSkinInfo
