// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ac3rdPartyEditor.pas' rev: 22.00

#ifndef Ac3rdpartyeditorHPP
#define Ac3rdpartyeditorHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <Variants.hpp>	// Pascal unit
#include <acntTypes.hpp>	// Pascal unit
#include <sBitBtn.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <sListView.hpp>	// Pascal unit
#include <sSkinManager.hpp>	// Pascal unit
#include <sSkinProvider.hpp>	// Pascal unit
#include <sSpeedButton.hpp>	// Pascal unit
#include <sPanel.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <sCheckListBox.hpp>	// Pascal unit
#include <sCheckBox.hpp>	// Pascal unit
#include <sLabel.hpp>	// Pascal unit
#include <sListBox.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Ac3rdpartyeditor
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TForm3rdPartyEditor;
class PASCALIMPLEMENTATION TForm3rdPartyEditor : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Slistview::TsListView* sListView1;
	Sbitbtn::TsBitBtn* sBitBtn1;
	Sspeedbutton::TsSpeedButton* sBitBtn2;
	Sspeedbutton::TsSpeedButton* sBitBtn3;
	Sskinprovider::TsSkinProvider* sSkinProvider1;
	Menus::TPopupMenu* PopupMenu1;
	Menus::TMenuItem* Addnew1;
	Menus::TMenuItem* Delete1;
	Menus::TMenuItem* Defaultsettings1;
	Menus::TMenuItem* N1;
	Menus::TMenuItem* Exit1;
	Sspeedbutton::TsSpeedButton* sSpeedButton1;
	Sspeedbutton::TsSpeedButton* sSpeedButton4;
	Sspeedbutton::TsSpeedButton* sSpeedButton5;
	Dialogs::TSaveDialog* SaveDialog1;
	Dialogs::TOpenDialog* OpenDialog1;
	Sspeedbutton::TsSpeedButton* sSpeedButton6;
	Spanel::TsPanel* sPanel1;
	Slistbox::TsListBox* sListBox1;
	Spanel::TsPanel* sPanel2;
	Schecklistbox::TsCheckListBox* sListBox2;
	Menus::TMenuItem* Edit1;
	Sspeedbutton::TsSpeedButton* sSpeedButton2;
	Scheckbox::TsCheckBox* sCheckBox1;
	void __fastcall sBitBtn2Click(System::TObject* Sender);
	void __fastcall sBitBtn1Click(System::TObject* Sender);
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall sBitBtn3Click(System::TObject* Sender);
	void __fastcall sSpeedButton1Click(System::TObject* Sender);
	void __fastcall sListView1Change(System::TObject* Sender, Comctrls::TListItem* Item, Comctrls::TItemChange Change);
	void __fastcall sListBox1Click(System::TObject* Sender);
	void __fastcall sSpeedButton2Click(System::TObject* Sender);
	void __fastcall sListView1ColumnClick(System::TObject* Sender, Comctrls::TListColumn* Column);
	void __fastcall sSpeedButton4Click(System::TObject* Sender);
	void __fastcall sSpeedButton5Click(System::TObject* Sender);
	void __fastcall sSpeedButton6Click(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall Edit1Click(System::TObject* Sender);
	void __fastcall sCheckBox1Click(System::TObject* Sender);
	void __fastcall sListView1DblClick(System::TObject* Sender);
	
public:
	Acnttypes::TStringLists Lists;
	Classes::TComponent* Cmp;
	void __fastcall UpdateNames(void);
	void __fastcall Populate(bool ControlRepaint = true);
	void __fastcall SelectCtrls(int TypeIndex);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TForm3rdPartyEditor(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TForm3rdPartyEditor(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TForm3rdPartyEditor(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TForm3rdPartyEditor(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


typedef System::StaticArray<System::UnicodeString, 18> Ac3rdpartyeditor__2;

typedef System::StaticArray<System::UnicodeString, 15> Ac3rdpartyeditor__3;

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TForm3rdPartyEditor* Form3rdPartyEditor;
extern PACKAGE Ac3rdpartyeditor__2 acLiteCtrls;
extern PACKAGE Ac3rdpartyeditor__3 acCtrlsArray;

}	/* namespace Ac3rdpartyeditor */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Ac3rdpartyeditor;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Ac3rdpartyeditorHPP
