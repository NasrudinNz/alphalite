// CodeGear C++Builder
// Copyright (c) 1995, 2008 by CodeGear
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Ac3dnewclass.pas' rev: 20.00

#ifndef Ac3dnewclassHPP
#define Ac3dnewclassHPP

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
#include <Dialogs.hpp>	// Pascal unit
#include <Stdctrls.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <Variants.hpp>	// Pascal unit
#include <Sbitbtn.hpp>	// Pascal unit
#include <Scombobox.hpp>	// Pascal unit
#include <Sedit.hpp>	// Pascal unit
#include <Sskinprovider.hpp>	// Pascal unit
#include <Imglist.hpp>	// Pascal unit
#include <Acalphaimagelist.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Ac3dnewclass
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TFormNewThirdClass;
class PASCALIMPLEMENTATION TFormNewThirdClass : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Sedit::TsEdit* sEdit1;
	Scombobox::TsComboBox* sComboBox1;
	Sbitbtn::TsBitBtn* sBitBtn1;
	Sbitbtn::TsBitBtn* sBitBtn2;
	Sskinprovider::TsSkinProvider* sSkinProvider1;
	Acalphaimagelist::TsAlphaImageList* sAlphaImageList1;
	void __fastcall FormCreate(System::TObject* Sender);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TFormNewThirdClass(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TFormNewThirdClass(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TFormNewThirdClass(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TFormNewThirdClass(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TFormNewThirdClass* FormNewThirdClass;

}	/* namespace Ac3dnewclass */
using namespace Ac3dnewclass;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Ac3dnewclassHPP
