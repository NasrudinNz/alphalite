// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sSkinManager.pas' rev: 28.00 (Windows)

#ifndef SskinmanagerHPP
#define SskinmanagerHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
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
#include <Vcl.Dialogs.hpp>	// Pascal unit
#include <System.IniFiles.hpp>	// Pascal unit
#include <Vcl.Menus.hpp>	// Pascal unit
#include <Vcl.ExtCtrls.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <sMaskData.hpp>	// Pascal unit
#include <sSkinMenus.hpp>	// Pascal unit
#include <sStyleSimply.hpp>	// Pascal unit
#include <sDefaults.hpp>	// Pascal unit
#include <acntUtils.hpp>	// Pascal unit
#include <acntTypes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sskinmanager
{
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TacSkinMode : unsigned char { smInternal, smExtPacked, smExtUnpacked };

struct DECLSPEC_DRECORD TacSkinListData
{
public:
	System::UnicodeString skName;
	TacSkinMode skSkinMode;
	int skImageIndex;
};


#pragma pack(push,1)
struct DECLSPEC_DRECORD TacSkinData
{
public:
	int Magic;
	System::StaticArray<char, 128> SkinName;
	System::StaticArray<char, 512> SkinDir;
	System::StaticArray<char, 30001> Data;
};
#pragma pack(pop)


typedef TacSkinData *PacSkinData;

enum DECLSPEC_DENUM TacSkinTypes : unsigned char { stUnpacked, stPacked, stAllSkins };

enum DECLSPEC_DENUM TacSkinPlaces : unsigned char { spInternal, spExternal, spAllPlaces };

enum DECLSPEC_DENUM TacScaleMode : unsigned char { sm100, sm125, sm150, sm200, smAuto, smOldMode };

struct DECLSPEC_DRECORD TacMenuItemData
{
public:
	Vcl::Graphics::TFont* Font;
};


struct DECLSPEC_DRECORD TacSysDlgData
{
public:
	NativeUInt WindowHandle;
};


typedef void __fastcall (__closure *TacGetExtraLineData)(Vcl::Menus::TMenuItem* FirstItem, System::UnicodeString &SkinSection, System::UnicodeString &Caption, Vcl::Graphics::TBitmap* &Glyph, bool &LineVisible);

typedef void __fastcall (__closure *TacSysDlgInit)(TacSysDlgData DlgData, bool &AllowSkinning);

typedef void __fastcall (__closure *TacGetPopupItemData)(Vcl::Menus::TMenuItem* Item, Winapi::Windows::TOwnerDrawState State, TacMenuItemData ItemData);

struct DECLSPEC_DRECORD TacExtFileData
{
public:
	Vcl::Graphics::TBitmap* Bmp;
	System::UnicodeString FileName;
	int MaskType;
};


typedef System::DynamicArray<TacExtFileData> TacExtArray;

;

typedef System::UnicodeString TacSkinInfo;

class DELPHICLASS TacSkinEffects;
class DELPHICLASS TsSkinManager;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacSkinEffects : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FAllowGlowing;
	bool FAllowAnimation;
	bool FAllowAeroBluring;
	bool FDiscoloredGlyphs;
	bool FAllowOuterEffects;
	void __fastcall SetBoolean(const int Index, const bool Value);
	
public:
	TsSkinManager* Manager;
	__fastcall TacSkinEffects(void);
	
__published:
	__property bool AllowAnimation = {read=FAllowAnimation, write=FAllowAnimation, default=1};
	__property bool AllowAeroBluring = {read=FAllowAeroBluring, write=FAllowAeroBluring, default=1};
	__property bool AllowGlowing = {read=FAllowGlowing, write=FAllowGlowing, default=1};
	__property bool AllowOuterEffects = {read=FAllowOuterEffects, write=SetBoolean, index=0, default=1};
	__property bool DiscoloredGlyphs = {read=FDiscoloredGlyphs, write=SetBoolean, index=1, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacSkinEffects(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TacBtnEffects;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacBtnEffects : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	Sconst::TacBtnEvents FEvents;
	
public:
	__fastcall TacBtnEffects(void);
	
__published:
	__property Sconst::TacBtnEvents Events = {read=FEvents, write=FEvents, default=15};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacBtnEffects(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TacFormAnimation;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacFormAnimation : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Word FTime;
	bool FActive;
	Sconst::TacAnimType FMode;
	
public:
	__fastcall virtual TacFormAnimation(void);
	__property Sconst::TacAnimType Mode = {read=FMode, write=FMode, default=1};
	
__published:
	__property bool Active = {read=FActive, write=FActive, default=1};
	__property System::Word Time = {read=FTime, write=FTime, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacFormAnimation(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TacBlendOnMoving;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacBlendOnMoving : public TacFormAnimation
{
	typedef TacFormAnimation inherited;
	
private:
	System::Byte FBlendValue;
	
public:
	__fastcall virtual TacBlendOnMoving(void);
	
__published:
	__property Active = {default=0};
	__property System::Byte BlendValue = {read=FBlendValue, write=FBlendValue, default=170};
	__property Time = {default=1000};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacBlendOnMoving(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TacMinimizing;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacMinimizing : public TacFormAnimation
{
	typedef TacFormAnimation inherited;
	
public:
	__fastcall virtual TacMinimizing(void);
	
__published:
	__property Time = {default=120};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacMinimizing(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TacFormShow;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacFormShow : public TacFormAnimation
{
	typedef TacFormAnimation inherited;
	
__published:
	__property Mode = {default=1};
public:
	/* TacFormAnimation.Create */ inline __fastcall virtual TacFormShow(void) : TacFormAnimation() { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacFormShow(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TacFormHide;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacFormHide : public TacFormAnimation
{
	typedef TacFormAnimation inherited;
	
__published:
	__property Mode = {default=1};
public:
	/* TacFormAnimation.Create */ inline __fastcall virtual TacFormHide(void) : TacFormAnimation() { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacFormHide(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TacPageChange;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacPageChange : public TacFormAnimation
{
	typedef TacFormAnimation inherited;
	
public:
	/* TacFormAnimation.Create */ inline __fastcall virtual TacPageChange(void) : TacFormAnimation() { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacPageChange(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TacDialogShow;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacDialogShow : public TacFormAnimation
{
	typedef TacFormAnimation inherited;
	
public:
	__fastcall virtual TacDialogShow(void);
	
__published:
	__property Time = {default=0};
	__property Mode = {default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacDialogShow(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TacSkinChanging;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacSkinChanging : public TacFormAnimation
{
	typedef TacFormAnimation inherited;
	
public:
	__fastcall virtual TacSkinChanging(void);
	
__published:
	__property Time = {default=100};
	__property Mode = {default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacSkinChanging(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TacAnimEffects;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacAnimEffects : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TacFormHide* FFormHide;
	TacFormHide* FDialogHide;
	TacFormShow* FFormShow;
	TacBtnEffects* FButtons;
	TacPageChange* FPageChange;
	TacMinimizing* FMinimizing;
	TacDialogShow* FDialogShow;
	TacSkinChanging* FSkinChanging;
	TacBlendOnMoving* FBlendOnMoving;
	
public:
	TsSkinManager* Manager;
	__fastcall TacAnimEffects(void);
	__fastcall virtual ~TacAnimEffects(void);
	
__published:
	__property TacBlendOnMoving* BlendOnMoving = {read=FBlendOnMoving, write=FBlendOnMoving};
	__property TacBtnEffects* Buttons = {read=FButtons, write=FButtons};
	__property TacDialogShow* DialogShow = {read=FDialogShow, write=FDialogShow};
	__property TacFormShow* FormShow = {read=FFormShow, write=FFormShow};
	__property TacFormHide* FormHide = {read=FFormHide, write=FFormHide};
	__property TacFormHide* DialogHide = {read=FDialogHide, write=FDialogHide};
	__property TacMinimizing* Minimizing = {read=FMinimizing, write=FMinimizing};
	__property TacPageChange* PageChange = {read=FPageChange, write=FPageChange};
	__property TacSkinChanging* SkinChanging = {read=FSkinChanging, write=FSkinChanging};
};

#pragma pack(pop)

class DELPHICLASS TsStoredSkin;
class PASCALIMPLEMENTATION TsStoredSkin : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	System::UnicodeString FName;
	System::UnicodeString FAuthor;
	System::UnicodeString FDescription;
	int FShadow1Blur;
	int FShadow1Offset;
	int FShadow1Transparency;
	System::Uitypes::TColor FBorderColor;
	System::Uitypes::TColor FShadow1Color;
	double FVersion;
	Vcl::Graphics::TBitmap* FMasterBitmap;
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	void __fastcall ReadData(System::Classes::TStream* Reader);
	void __fastcall WriteData(System::Classes::TStream* Writer);
	void __fastcall ReadOriginName(System::Classes::TReader* Reader);
	void __fastcall WriteOriginName(System::Classes::TWriter* Writer);
	
public:
	System::UnicodeString OrigName;
	System::Classes::TMemoryStream* PackedData;
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__fastcall virtual TsStoredSkin(System::Classes::TCollection* ACollection);
	__fastcall virtual ~TsStoredSkin(void);
	
__published:
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property Vcl::Graphics::TBitmap* MasterBitmap = {read=FMasterBitmap, write=FMasterBitmap};
	__property System::Uitypes::TColor Shadow1Color = {read=FShadow1Color, write=FShadow1Color, nodefault};
	__property int Shadow1Offset = {read=FShadow1Offset, write=FShadow1Offset, nodefault};
	__property int Shadow1Blur = {read=FShadow1Blur, write=FShadow1Blur, default=-1};
	__property int Shadow1Transparency = {read=FShadow1Transparency, write=FShadow1Transparency, nodefault};
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=FBorderColor, default=16711935};
	__property double Version = {read=FVersion, write=FVersion};
	__property System::UnicodeString Author = {read=FAuthor, write=FAuthor};
	__property System::UnicodeString Description = {read=FDescription, write=FDescription};
};


class DELPHICLASS TsStoredSkins;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TsStoredSkins : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TsStoredSkin* operator[](int Index) { return Items[Index]; }
	
private:
	TsSkinManager* FOwner;
	HIDESBASE TsStoredSkin* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TsStoredSkin* Value);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner(void);
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__fastcall TsStoredSkins(TsSkinManager* AOwner);
	__fastcall virtual ~TsStoredSkins(void);
	__property TsStoredSkin* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	int __fastcall IndexOf(const System::UnicodeString SkinName);
};

#pragma pack(pop)

class DELPHICLASS TsThirdPartyList;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TsThirdPartyList : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::UnicodeString FThirdEdits;
	System::UnicodeString FThirdButtons;
	System::UnicodeString FThirdBitBtns;
	System::UnicodeString FThirdCheckBoxes;
	System::UnicodeString FThirdGroupBoxes;
	System::UnicodeString FThirdListViews;
	System::UnicodeString FThirdPanels;
	System::UnicodeString FThirdGrids;
	System::UnicodeString FThirdTreeViews;
	System::UnicodeString FThirdComboBoxes;
	System::UnicodeString FThirdWWEdits;
	System::UnicodeString FThirdVirtualTrees;
	System::UnicodeString FThirdGridEh;
	System::UnicodeString FThirdPageControl;
	System::UnicodeString FThirdTabControl;
	System::UnicodeString FThirdToolBar;
	System::UnicodeString FThirdStatusBar;
	System::UnicodeString FThirdSpeedButton;
	System::UnicodeString FThirdScrollControl;
	System::UnicodeString FThirdUpDownBtn;
	System::UnicodeString FThirdScrollBar;
	System::UnicodeString FThirdStaticText;
	System::UnicodeString FThirdNativePaint;
	
public:
	System::UnicodeString __fastcall GetString(const int Index);
	void __fastcall SetString(const int Index, const System::UnicodeString Value);
	
__published:
	__property System::UnicodeString ThirdEdits = {read=GetString, write=SetString, index=0};
	__property System::UnicodeString ThirdButtons = {read=GetString, write=SetString, index=1};
	__property System::UnicodeString ThirdBitBtns = {read=GetString, write=SetString, index=2};
	__property System::UnicodeString ThirdCheckBoxes = {read=GetString, write=SetString, index=3};
	__property System::UnicodeString ThirdGroupBoxes = {read=GetString, write=SetString, index=6};
	__property System::UnicodeString ThirdListViews = {read=GetString, write=SetString, index=7};
	__property System::UnicodeString ThirdPanels = {read=GetString, write=SetString, index=8};
	__property System::UnicodeString ThirdGrids = {read=GetString, write=SetString, index=5};
	__property System::UnicodeString ThirdTreeViews = {read=GetString, write=SetString, index=9};
	__property System::UnicodeString ThirdComboBoxes = {read=GetString, write=SetString, index=4};
	__property System::UnicodeString ThirdWWEdits = {read=GetString, write=SetString, index=10};
	__property System::UnicodeString ThirdVirtualTrees = {read=GetString, write=SetString, index=12};
	__property System::UnicodeString ThirdGridEh = {read=GetString, write=SetString, index=11};
	__property System::UnicodeString ThirdPageControl = {read=GetString, write=SetString, index=13};
	__property System::UnicodeString ThirdTabControl = {read=GetString, write=SetString, index=14};
	__property System::UnicodeString ThirdToolBar = {read=GetString, write=SetString, index=15};
	__property System::UnicodeString ThirdStatusBar = {read=GetString, write=SetString, index=16};
	__property System::UnicodeString ThirdSpeedButton = {read=GetString, write=SetString, index=17};
	__property System::UnicodeString ThirdScrollControl = {read=GetString, write=SetString, index=18};
	__property System::UnicodeString ThirdUpDown = {read=GetString, write=SetString, index=19};
	__property System::UnicodeString ThirdScrollBar = {read=GetString, write=SetString, index=20};
	__property System::UnicodeString ThirdStaticText = {read=GetString, write=SetString, index=21};
	__property System::UnicodeString ThirdNativePaint = {read=GetString, write=SetString, index=22};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TsThirdPartyList(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TsThirdPartyList(void) : System::Classes::TPersistent() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TacSkinningRule : unsigned char { srStdForms, srStdDialogs, srThirdParty };

typedef System::Set<TacSkinningRule, TacSkinningRule::srStdForms, TacSkinningRule::srThirdParty> TacSkinningRules;

enum DECLSPEC_DENUM TacPaletteColors : unsigned char { pcMainColor, pcLabelText, pcWebText, pcWebTextHot, pcEditText, pcEditBG, pcSelectionBG, pcSelectionText, pcSelectionBG_Focused, pcSelectionText_Focused, pcEditBG_Inverted, pcEditText_Inverted, pcEditBG_OddRow, pcEditBG_EvenRow, pcEditText_Ok, pcEditText_Warning, pcEditText_Alert, pcEditText_Caution, pcEditText_Bypassed, pcEditBG_Ok, pcEditBG_Warning, pcEditBG_Alert, pcEditBG_Caution, pcEditBG_Bypassed, pcEditText_Highlight1, pcEditText_Highlight2, pcEditText_Highlight3, pcBtnColor1Active, pcBtnColor2Active, pcBtnBorderActive, pcBtnFontActive, pcBtnColor1Normal, pcBtnColor2Normal, pcBtnBorderNormal, pcBtnFontNormal, pcBtnColor1Pressed, pcBtnColor2Pressed, pcBtnBorderPressed, pcBtnFontPressed, pcBorder, 
	pcGrid, pcHintBG, pcHintText };

typedef System::StaticArray<System::Uitypes::TColor, 43> TacPaletteArray;

typedef System::StaticArray<HBRUSH, 6> TacBrushes;

class DELPHICLASS TacScrollBarsSupport;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacScrollBarsSupport : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	int FScrollSize;
	int FButtonsSize;
	TsSkinManager* FOwner;
	void __fastcall SetInteger(const int Index, const int Value);
	
public:
	__fastcall TacScrollBarsSupport(TsSkinManager* AOwner);
	
__published:
	__property int ButtonsSize = {read=FButtonsSize, write=SetInteger, index=0, default=-1};
	__property int ScrollSize = {read=FScrollSize, write=SetInteger, index=1, default=-1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacScrollBarsSupport(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TacButtonsSupport;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacButtonsSupport : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FShowFocusRect;
	bool FShiftContentOnClick;
	
public:
	__fastcall TacButtonsSupport(TsSkinManager* AOwner);
	
__published:
	__property bool ShowFocusRect = {read=FShowFocusRect, write=FShowFocusRect, default=1};
	__property bool ShiftContentOnClick = {read=FShiftContentOnClick, write=FShiftContentOnClick, default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacButtonsSupport(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TacLabelsSupport;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacLabelsSupport : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FTransparentAlways;
	
public:
	__fastcall TacLabelsSupport(TsSkinManager* AOwner);
	
__published:
	__property bool TransparentAlways = {read=FTransparentAlways, write=FTransparentAlways, default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacLabelsSupport(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TacOptions;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacOptions : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FNoMouseHover;
	bool FStdGlyphsOrder;
	bool FCheckEmptyAlpha;
	bool FChangeSysColors;
	bool FStdImgTransparency;
	bool FNativeBordersMaximized;
	TsSkinManager* FOwner;
	TacScaleMode FScaleMode;
	Acnttypes::TacArrowsStyle FArrowsStyle;
	Sconst::TacOptimizingPriority FOptimizingPriority;
	bool __fastcall GetBool(const int Index);
	void __fastcall SetBool(const int Index, const bool Value);
	void __fastcall SetScaleMode(const TacScaleMode Value);
	void __fastcall SetArrowsStyle(const Acnttypes::TacArrowsStyle Value);
	
public:
	Acnttypes::TacArrowsStyle __fastcall ActualArrowStyle(void);
	__fastcall TacOptions(TsSkinManager* AOwner);
	
__published:
	__property bool NoMouseHover = {read=GetBool, write=SetBool, index=1, default=0};
	__property bool StdGlyphsOrder = {read=GetBool, write=SetBool, index=3, default=0};
	__property bool ChangeSysColors = {read=GetBool, write=SetBool, index=4, default=0};
	__property bool CheckEmptyAlpha = {read=GetBool, write=SetBool, index=0, default=0};
	__property bool StdImgTransparency = {read=GetBool, write=SetBool, index=5, default=0};
	__property bool NativeBordersMaximized = {read=GetBool, write=SetBool, index=2, default=0};
	__property TacScaleMode ScaleMode = {read=FScaleMode, write=SetScaleMode, default=5};
	__property Acnttypes::TacArrowsStyle ArrowsStyle = {read=FArrowsStyle, write=SetArrowsStyle, default=4};
	__property Sconst::TacOptimizingPriority OptimizingPriority = {read=FOptimizingPriority, write=FOptimizingPriority, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacOptions(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TacSkinListController;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacSkinListController : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	typedef System::DynamicArray<Vcl::Controls::TControl*> _TacSkinListController__1;
	
	typedef System::DynamicArray<TacSkinListData> _TacSkinListController__2;
	
	
protected:
	void __fastcall ClearList(bool DoUpdateLater = true);
	
public:
	Vcl::Extctrls::TTimer* Timer;
	Vcl::Controls::TImageList* ImgList;
	bool UpdateNeeded;
	TsSkinManager* SkinManager;
	_TacSkinListController__1 Controls;
	_TacSkinListController__2 SkinList;
	void __fastcall SendSkinChanged(void);
	void __fastcall SendListChanged(void);
	void __fastcall UpdateData(bool UpdateNow = false);
	void __fastcall UpdateIfNeeded(void);
	__fastcall TacSkinListController(TsSkinManager* AOwner);
	int __fastcall CtrlIndex(Vcl::Controls::TControl* Ctrl);
	void __fastcall AddControl(Vcl::Controls::TControl* Ctrl);
	void __fastcall DelControl(Vcl::Controls::TControl* Ctrl);
	__fastcall virtual ~TacSkinListController(void);
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TacImageItem
{
public:
	System::UnicodeString FileName;
	bool IsBitmap;
	System::Classes::TMemoryStream* FileStream;
};


typedef System::DynamicArray<TacImageItem> TacImageItems;

struct DECLSPEC_DRECORD TScaleChangeData
{
public:
	TacScaleMode OldScaleMode;
	TacScaleMode NewScaleMode;
	int OldScalePercent;
	int NewScalePercent;
};


typedef void __fastcall (__closure *TScaleChangeEvent)(System::TObject* Sended, const TScaleChangeData &ScaleChangeData);

enum DECLSPEC_DENUM TacSkinsFilterItem : unsigned char { sfiInternal, sfiExternal };

typedef System::Set<TacSkinsFilterItem, TacSkinsFilterItem::sfiInternal, TacSkinsFilterItem::sfiExternal> TacSkinsFilter;

class DELPHICLASS TacSkinConvertor;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacSkinConvertor : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
public:
	System::Classes::TMemoryStream* Options;
	System::Classes::TMemoryStream* PackedData;
	int ImageCount;
	TacImageItems Files;
	void __fastcall Clear(void);
	__fastcall virtual ~TacSkinConvertor(void);
public:
	/* TObject.Create */ inline __fastcall TacSkinConvertor(void) : System::Classes::TPersistent() { }
	
};

#pragma pack(pop)

typedef System::StaticArray<char, 16> TsCharArray;

class PASCALIMPLEMENTATION TsSkinManager : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	bool FActive;
	bool FSkinnedPopups;
	bool FExtendedBorders;
	bool GlobalHookInstalled;
	System::Classes::TNotifyEvent FOnActivate;
	System::Classes::TNotifyEvent FOnDeactivate;
	System::Classes::TNotifyEvent FOnSkinLoading;
	System::Classes::TNotifyEvent FOnAfterChange;
	System::Classes::TNotifyEvent FOnBeforeChange;
	System::Classes::TNotifyEvent FOnSkinListChanged;
	System::Classes::TStringList* FKeyList;
	System::Classes::TStringList* FCommonSections;
	System::UnicodeString FSkinName;
	System::UnicodeString FSkinDirectory;
	TsStoredSkins* FBuiltInSkins;
	TacOptions* FOptions;
	TacExtArray ExtArray;
	int FGroupIndex;
	Sskinmenus::TacMenuSupport* FMenuSupport;
	TacAnimEffects* FAnimEffects;
	HWND FActiveControl;
	TacSkinningRules FSkinningRules;
	TsThirdPartyList* FThirdParty;
	TacSkinEffects* FEffects;
	TacScrollBarsSupport* FScrollsOptions;
	TacButtonsSupport* FButtonsSupport;
	TacLabelsSupport* FLabelsSupport;
	TacSkinsFilter FSkinsFilter;
	TacGetExtraLineData FOnGetPopupLineData;
	TacGetPopupItemData FOnGetPopupItemData;
	TacSysDlgInit FOnSysDlgInit;
	TScaleChangeEvent FOnScaleModeChange;
	Sskinmenus::TsSkinableMenus* FSkinableMenus;
	void __fastcall ClearExtArray(void);
	Vcl::Graphics::TBitmap* __fastcall SearchExtFile(System::UnicodeString s);
	System::UnicodeString __fastcall GetVersion(void);
	TacSkinInfo __fastcall GetSkinInfo(void);
	void __fastcall UpdateCurrentSkin(void);
	bool __fastcall GetIsDefault(void);
	bool __fastcall MainWindowHook(Winapi::Messages::TMessage &Message);
	bool __fastcall GetExtendedBorders(void);
	void __fastcall SetActiveControl(const HWND Value);
	void __fastcall SetSkinDirectory(const System::UnicodeString Value);
	void __fastcall SetVersion(const System::UnicodeString Value);
	void __fastcall SetActive(const bool Value);
	void __fastcall SetIsDefault(const bool Value);
	void __fastcall SetExtendedBorders(const bool Value);
	void __fastcall SetSkinnedPopups(const bool Value);
	void __fastcall SetSkinName(const System::UnicodeString Value);
	void __fastcall SetSkinInfo(const TacSkinInfo Value);
	void __fastcall SetKeyList(System::Classes::TStringList* const Value);
	void __fastcall SetBuiltInSkins(TsStoredSkins* const Value);
	void __fastcall SetActiveGraphControl(Vcl::Controls::TGraphicControl* const Value);
	void __fastcall SetSkinningRules(const TacSkinningRules Value);
	void __fastcall SetCommonSections(System::Classes::TStringList* const Value);
	void __fastcall SetInteger(const int Index, const int Value);
	void __fastcall SetSkinsFilter(const TacSkinsFilter Value);
	
protected:
	Vcl::Controls::TGraphicControl* FActiveGraphControl;
	Vcl::Extctrls::TTimer* TimerCheckHot;
	void __fastcall OnCheckHot(System::TObject* Sender);
	void __fastcall SendNewSkin(bool Repaint = true);
	void __fastcall SendRemoveSkin(void);
	void __fastcall FreeBitmaps(void);
	
public:
	bool NoAutoUpdate;
	Vcl::Forms::TShowAction ShowState;
	TacSkinData PreviewBuffer;
	Sstylesimply::TsSkinData* CommonSkinData;
	bool SkinIsPacked;
	bool SkinRemoving;
	Vcl::Graphics::TBitmap* MasterBitmap;
	Vcl::Graphics::TBitmap* ShdaTemplate;
	Vcl::Graphics::TBitmap* ShdiTemplate;
	int FHueOffset;
	int FSaturation;
	int SysFontScale;
	int FBrightness;
	Smaskdata::TsMaskArray ma;
	Smaskdata::TsGeneralDataArray gd;
	Smaskdata::TacOutEffArray oe;
	Sstylesimply::TConstantSkinData ConstData;
	System::Types::TRect FormShadowSize;
	Acnttypes::TStringLists ThirdLists;
	TacPaletteArray Palette;
	TacBrushes Brushes;
	TacSkinListController* SkinListController;
	void __fastcall LoadAllMasks(void);
	void __fastcall InitMaskIndexes(void);
	void __fastcall LoadAllGeneralData(void);
	int __fastcall AddNewSection(const System::UnicodeString AName, int AParentSection, int AStates, int ATransparency, System::Uitypes::TColor AColor, System::Uitypes::TColor AFontColor);
	int __fastcall MakeNewItem(int SkinIndex, const System::UnicodeString PropertyName, const System::UnicodeString AClassName, Sconst::TacImgType ImgType, const System::Types::TRect &R, int Count, int DrawMode, short Masktype);
	void __fastcall InitConstantIndexes(void);
	void __fastcall ReloadSkin(void);
	void __fastcall ReloadPackedSkin(void);
	void __fastcall CheckVersion(void);
	void __fastcall CheckShadows(void);
	int __fastcall GetScale(void);
	System::UnicodeString __fastcall GetSkinNames(System::Classes::TStrings* sl, bool CreateDataObject = false, TacSkinTypes SkinType = (TacSkinTypes)(0x2));
	System::UnicodeString __fastcall GetExternalSkinNames(System::Classes::TStrings* sl, bool CreateDataObject = false, TacSkinTypes SkinType = (TacSkinTypes)(0x2));
	System::UnicodeString __fastcall GetFullSkinDirectory(void);
	System::UnicodeString __fastcall GetRandomSkin(void);
	int __fastcall GetSkinIndex(const System::UnicodeString SkinSection);
	int __fastcall GetMaskIndex(const System::UnicodeString SkinSection, const System::UnicodeString mask)/* overload */;
	int __fastcall GetMaskIndex(const int SkinIndex, System::UnicodeString mask)/* overload */;
	int __fastcall GetMaskIndex(const int SkinIndex, const System::UnicodeString SkinSection, const System::UnicodeString mask)/* overload */;
	int __fastcall GetTextureIndex(int aSkinIndex, const System::UnicodeString SkinSection, const System::UnicodeString PropName)/* overload */;
	int __fastcall GetTextureIndex(int aSkinIndex, const System::UnicodeString PropName)/* overload */;
	void __fastcall GetSkinSections(System::Classes::TStrings* sl);
	bool __fastcall IsValidSkinIndex(int SkinIndex);
	bool __fastcall IsValidImgIndex(int ImageIndex);
	System::Uitypes::TColor __fastcall GetGlobalColor(void);
	System::Uitypes::TColor __fastcall GetGlobalFontColor(void);
	System::Uitypes::TColor __fastcall GetActiveEditColor(void);
	System::Uitypes::TColor __fastcall GetActiveEditFontColor(void);
	System::Uitypes::TColor __fastcall GetHighLightColor(bool Focused = true);
	System::Uitypes::TColor __fastcall GetHighLightFontColor(bool Focused = true);
	void __fastcall BeginUpdate(void);
	void __fastcall EndUpdate(bool Repaint = false, bool AllowAnimation = true);
	int __fastcall ScaleInt(int Value, int SysScale = 0x0);
	void __fastcall RepaintForms(bool DoLockForms = true);
	void __fastcall UpdateSkin(bool Repaint = true);
	void __fastcall UpdateSkinSection(const System::UnicodeString SectionName);
	void __fastcall UpdateScale(Vcl::Controls::TWinControl* Ctrl, int iCurrentScale = 0x64);
	void __fastcall UpdateAllScale(void);
	void __fastcall InstallHook(void);
	void __fastcall UnInstallHook(void);
	void __fastcall ExtractInternalSkin(const System::UnicodeString NameOfSkin, const System::UnicodeString DestDir);
	void __fastcall ExtractByIndex(int Index, const System::UnicodeString DestDir);
	__fastcall virtual TsSkinManager(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsSkinManager(void);
	virtual void __fastcall AfterConstruction(void);
	virtual void __fastcall Loaded(void);
	__property int GroupIndex = {read=FGroupIndex, write=FGroupIndex, nodefault};
	__property Sskinmenus::TsSkinableMenus* SkinableMenus = {read=FSkinableMenus, write=FSkinableMenus};
	__property HWND ActiveControl = {read=FActiveControl, write=SetActiveControl, nodefault};
	__property Vcl::Controls::TGraphicControl* ActiveGraphControl = {read=FActiveGraphControl, write=SetActiveGraphControl};
	
__published:
	__property TScaleChangeEvent OnScaleModeChange = {read=FOnScaleModeChange, write=FOnScaleModeChange};
	__property TacSkinsFilter SkinsFilter = {read=FSkinsFilter, write=SetSkinsFilter, default=3};
	__property TacSkinEffects* Effects = {read=FEffects, write=FEffects};
	__property TacAnimEffects* AnimEffects = {read=FAnimEffects, write=FAnimEffects};
	__property TacButtonsSupport* ButtonsOptions = {read=FButtonsSupport, write=FButtonsSupport};
	__property bool Active = {read=FActive, write=SetActive, default=1};
	__property bool ExtendedBorders = {read=GetExtendedBorders, write=SetExtendedBorders, default=0};
	__property bool IsDefault = {read=GetIsDefault, write=SetIsDefault, default=1};
	__property bool SkinnedPopups = {read=FSkinnedPopups, write=SetSkinnedPopups, default=1};
	__property int Brightness = {read=FBrightness, write=SetInteger, index=0, default=0};
	__property int HueOffset = {read=FHueOffset, write=SetInteger, index=1, default=0};
	__property int Saturation = {read=FSaturation, write=SetInteger, index=2, default=0};
	__property System::Classes::TStringList* CommonSections = {read=FCommonSections, write=SetCommonSections};
	__property System::Classes::TStringList* KeyList = {read=FKeyList, write=SetKeyList};
	__property TsStoredSkins* InternalSkins = {read=FBuiltInSkins, write=SetBuiltInSkins};
	__property TacLabelsSupport* LabelsOptions = {read=FLabelsSupport, write=FLabelsSupport};
	__property Sskinmenus::TacMenuSupport* MenuSupport = {read=FMenuSupport, write=FMenuSupport};
	__property TacOptions* Options = {read=FOptions, write=FOptions};
	__property TacScrollBarsSupport* ScrollsOptions = {read=FScrollsOptions, write=FScrollsOptions};
	__property System::UnicodeString SkinDirectory = {read=FSkinDirectory, write=SetSkinDirectory};
	__property System::UnicodeString SkinName = {read=FSkinName, write=SetSkinName};
	__property TacSkinInfo SkinInfo = {read=GetSkinInfo, write=SetSkinInfo};
	__property TacSkinningRules SkinningRules = {read=FSkinningRules, write=SetSkinningRules, default=7};
	__property TsThirdPartyList* ThirdParty = {read=FThirdParty, write=FThirdParty};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion, stored=false};
	__property TacGetExtraLineData OnGetMenuExtraLineData = {read=FOnGetPopupLineData, write=FOnGetPopupLineData};
	__property TacGetPopupItemData OnGetPopupItemData = {read=FOnGetPopupItemData, write=FOnGetPopupItemData};
	__property TacSysDlgInit OnSysDlgInit = {read=FOnSysDlgInit, write=FOnSysDlgInit};
	__property System::Classes::TNotifyEvent OnActivate = {read=FOnActivate, write=FOnActivate};
	__property System::Classes::TNotifyEvent OnAfterChange = {read=FOnAfterChange, write=FOnAfterChange};
	__property System::Classes::TNotifyEvent OnBeforeChange = {read=FOnBeforeChange, write=FOnBeforeChange};
	__property System::Classes::TNotifyEvent OnDeactivate = {read=FOnDeactivate, write=FOnDeactivate};
	__property System::Classes::TNotifyEvent OnSkinListChanged = {read=FOnSkinListChanged, write=FOnSkinListChanged};
	__property System::Classes::TNotifyEvent OnSkinLoading = {read=FOnSkinLoading, write=FOnSkinLoading};
};


//-- var, const, procedure ---------------------------------------------------
#define acCurrentVersion L"12.21"
static const System::Word iMaxFileSize = System::Word(0x7530);
extern DELPHI_PACKAGE bool IsNT;
extern DELPHI_PACKAGE System::Inifiles::TMemIniFile* SkinFile;
extern DELPHI_PACKAGE TsSkinManager* DefaultManager;
extern DELPHI_PACKAGE bool UnPackedFirst;
extern DELPHI_PACKAGE System::Classes::TStringList* acMemSkinFile;
extern DELPHI_PACKAGE void __fastcall ReceiveData(TsSkinManager* SkinReceiver);
extern DELPHI_PACKAGE void __fastcall LoadSkinFromFile(const System::UnicodeString FileName, TacSkinConvertor* &Convertor, System::Classes::TStringList* pwds, System::Classes::TComponent* SkinManager);
extern DELPHI_PACKAGE void __fastcall UpdatePreview(HWND Handle, bool Enabled);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall SysColorToSkin(const System::Uitypes::TColor AColor, TsSkinManager* ASkinManager = (TsSkinManager*)(0x0));
extern DELPHI_PACKAGE void __fastcall UpdateCommonDlgs(TsSkinManager* sManager);
extern DELPHI_PACKAGE bool __fastcall ChangeImageInSkin(const System::UnicodeString SkinSection, const System::UnicodeString PropName, const System::UnicodeString FileName, TsSkinManager* sm);
extern DELPHI_PACKAGE void __fastcall LoadThirdNames(TsSkinManager* sm, bool Overwrite = false);
extern DELPHI_PACKAGE void __fastcall UpdateThirdNames(TsSkinManager* sm);
extern DELPHI_PACKAGE int __fastcall GetScrollSize(TsSkinManager* sm);
extern DELPHI_PACKAGE int __fastcall GetComboBtnSize(TsSkinManager* sm);
extern DELPHI_PACKAGE bool __fastcall ExtractPackedData(TacSkinConvertor* &Convertor, System::Classes::TStringList* pwds, System::Classes::TComponent* SkinManager);
extern DELPHI_PACKAGE bool __fastcall GetPreviewStream(System::Classes::TMemoryStream* aStream, System::UnicodeString SkinFileName)/* overload */;
extern DELPHI_PACKAGE bool __fastcall GetPreviewStream(System::Classes::TMemoryStream* aStream, System::Classes::TMemoryStream* SrcStream)/* overload */;
extern DELPHI_PACKAGE bool __fastcall GetPreviewImage(Vcl::Graphics::TBitmap* aBitmap, System::UnicodeString SkinFileName);
extern DELPHI_PACKAGE int __cdecl asSkinDecode(const TsCharArray &PackedData, __int64 *Keys, const int Keys_High, const int Length, const int FormSum, /* out */ int &FilesCount, /* out */ int &Offset);
}	/* namespace Sskinmanager */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SSKINMANAGER)
using namespace Sskinmanager;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SskinmanagerHPP
