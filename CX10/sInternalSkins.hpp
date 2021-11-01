// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sInternalSkins.pas' rev: 30.00 (Windows)

#ifndef SinternalskinsHPP
#define SinternalskinsHPP

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
#include <Vcl.Dialogs.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.FileCtrl.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.UITypes.hpp>
#include <sSkinManager.hpp>
#include <acntUtils.hpp>
#include <sSkinProvider.hpp>
#include <sPanel.hpp>
#include <sButton.hpp>
#include <sListBox.hpp>
#include <sLabel.hpp>
#include <Vcl.ComCtrls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Sinternalskins
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TFormInternalSkins;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TFormInternalSkins : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Actnlist::TActionList* ActionList1;
	Vcl::Actnlist::TAction* ActionAddNew;
	Vcl::Actnlist::TAction* ActionDelete;
	Vcl::Actnlist::TAction* ActionRename;
	Vcl::Actnlist::TAction* ActionClose;
	Sskinprovider::TsSkinProvider* sSkinProvider1;
	Vcl::Actnlist::TAction* ActionClear;
	Vcl::Actnlist::TAction* ActionExtract;
	Vcl::Actnlist::TAction* ActionUpdateAll;
	Spanel::TsPanel* sPanel1;
	Spanel::TsPanel* sPanel2;
	Slistbox::TsListBox* ListBox1;
	Spanel::TsPanel* sPanel3;
	Spanel::TsPanel* sPanel4;
	Sbutton::TsButton* sButton2;
	Sbutton::TsButton* sButton3;
	Sbutton::TsButton* sButton4;
	Sbutton::TsButton* sButton1;
	Sbutton::TsButton* sButton5;
	Sbutton::TsButton* sButton6;
	Spanel::TsPanel* sPanel5;
	Sbutton::TsButton* sBitBtn1;
	Spanel::TsPanel* sPanel6;
	Slabel::TsLabel* sLabel1;
	Slabel::TsLabel* sLabel2;
	void __fastcall ActionAddNewExecute(System::TObject* Sender);
	void __fastcall ActionCloseExecute(System::TObject* Sender);
	void __fastcall ActionRenameExecute(System::TObject* Sender);
	void __fastcall ActionDeleteExecute(System::TObject* Sender);
	void __fastcall ListBox1Click(System::TObject* Sender);
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall ActionExtractExecute(System::TObject* Sender);
	void __fastcall ActionClearExecute(System::TObject* Sender);
	void __fastcall ActionUpdateAllExecute(System::TObject* Sender);
	
public:
	System::UnicodeString NewName;
	System::UnicodeString NewDir;
	Sskinmanager::TsSkinManager* SkinManager;
	void __fastcall AddNewSkin(void);
	void __fastcall UpdateMyActions(void);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TFormInternalSkins(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TFormInternalSkins(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TFormInternalSkins(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TFormInternalSkins(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TFormInternalSkins* FormInternalSkins;
}	/* namespace Sinternalskins */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SINTERNALSKINS)
using namespace Sinternalskins;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SinternalskinsHPP
