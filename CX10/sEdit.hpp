// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sEdit.pas' rev: 30.00 (Windows)

#ifndef SeditHPP
#define SeditHPP

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
#include <Vcl.StdCtrls.hpp>
#include <System.Types.hpp>
#include <sCommonData.hpp>
#include <sConst.hpp>
#include <sDefaults.hpp>

//-- user supplied -----------------------------------------------------------

namespace Sedit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TsEdit;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TsEdit : public Vcl::Stdctrls::TEdit
{
	typedef Vcl::Stdctrls::TEdit inherited;
	
private:
	Scommondata::TsCtrlSkinData* FCommonData;
	Sconst::TsDisabledKind FDisabledKind;
	Scommondata::TsBoundLabel* FBoundLabel;
	void __fastcall SetDisabledKind(const Sconst::TsDisabledKind Value);
	
protected:
	void __fastcall PaintBorder(void);
	virtual bool __fastcall PrepareCache(void);
	virtual void __fastcall PaintText(void);
	void __fastcall OurPaintHandler(HDC aDC = (HDC)(0x0));
	virtual void __fastcall ExcludeChildControls(HDC DC);
	
public:
	virtual void __fastcall AfterConstruction(void);
	__fastcall virtual TsEdit(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsEdit(void);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
__published:
	__property Align = {default=0};
	__property MaxLength = {default=0};
	__property Sconst::TsDisabledKind DisabledKind = {read=FDisabledKind, write=SetDisabledKind, default=1};
	__property Scommondata::TsCtrlSkinData* SkinData = {read=FCommonData, write=FCommonData};
	__property Scommondata::TsBoundLabel* BoundLabel = {read=FBoundLabel, write=FBoundLabel};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsEdit(HWND ParentWindow) : Vcl::Stdctrls::TEdit(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int __fastcall EditBorderWidth(Vcl::Stdctrls::TEdit* aEditCtrl);
}	/* namespace Sedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SEDIT)
using namespace Sedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SeditHPP
