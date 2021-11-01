// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acAlphaImageList.pas' rev: 27.00 (Windows)

#ifndef AcalphaimagelistHPP
#define AcalphaimagelistHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Winapi.CommCtrl.hpp>	// Pascal unit
#include <Vcl.ImgList.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <acntUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acalphaimagelist
{
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TsImageFormat : unsigned char { ifPNG, ifICO, ifBMP32 };

class DELPHICLASS TsImgListItem;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TsImgListItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	System::UnicodeString FText;
	System::UnicodeString FImageName;
	TsImageFormat FImageFormat;
	Vcl::Graphics::TPixelFormat FPixelFormat;
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	void __fastcall ReadData(System::Classes::TStream* Reader);
	void __fastcall WriteData(System::Classes::TStream* Writer);
	
public:
	int OrigWidth;
	int OrigHeight;
	Vcl::Graphics::TBitmap* CacheBmp;
	System::Classes::TMemoryStream* ImgData;
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	__fastcall virtual TsImgListItem(System::Classes::TCollection* ACollection);
	__fastcall virtual ~TsImgListItem(void);
	
__published:
	__property TsImageFormat ImageFormat = {read=FImageFormat, write=FImageFormat, nodefault};
	__property System::UnicodeString ImageName = {read=FImageName, write=FImageName, stored=true};
	__property Vcl::Graphics::TPixelFormat PixelFormat = {read=FPixelFormat, write=FPixelFormat, default=7};
	__property System::UnicodeString Text = {read=FText, write=FText};
};

#pragma pack(pop)

class DELPHICLASS TsImgListItems;
class DELPHICLASS TsAlphaImageList;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TsImgListItems : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TsImgListItem* operator[](int Index) { return Items[Index]; }
	
protected:
	TsAlphaImageList* FOwner;
	HIDESBASE TsImgListItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TsImgListItem* Value);
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner(void);
	
public:
	__fastcall TsImgListItems(TsAlphaImageList* AOwner);
	__fastcall virtual ~TsImgListItems(void);
	__property TsImgListItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TsAlphaImageList : public Vcl::Controls::TImageList
{
	typedef Vcl::Controls::TImageList inherited;
	
private:
	bool FLoaded;
	bool FUseCache;
	bool AcChanging;
	bool FAllowScale;
	bool StdListIsGenerated;
	TsImgListItems* FItems;
	System::Uitypes::TColor FBkColor;
	HIDESBASE System::Uitypes::TColor __fastcall GetBkColor(void);
	void __fastcall SetItems(TsImgListItems* const Value);
	HIDESBASE void __fastcall SetBkColor(const System::Uitypes::TColor Value);
	void __fastcall SetUseCache(const bool Value);
	int __fastcall GetDimension(const int Index);
	void __fastcall SetDimension(const int Index, const int Value);
	
protected:
	int FSavedScale;
	int SavedHeight;
	int SavedWidth;
	void __fastcall ScaleSize(void);
	void __fastcall SetNewScale(int Value);
	void __fastcall CreateImgList(void);
	bool __fastcall CanScale(void);
	virtual void __fastcall DoDraw(int Index, Vcl::Graphics::TCanvas* Canvas, int X, int Y, unsigned Style, bool Enabled = true);
	void __fastcall KillImgList(void);
	bool __fastcall IsDuplicated(void);
	virtual void __fastcall ReadData(System::Classes::TStream* Stream);
	virtual void __fastcall WriteData(System::Classes::TStream* Stream);
	void __fastcall ItemsClear(void);
	
public:
	bool DoubleData;
	bool IgnoreTransparency;
	void __fastcall AcBeginUpdate(void);
	void __fastcall AcEndUpdate(bool DoChange = true);
	DYNAMIC void __fastcall Change(void);
	HIDESBASE void __fastcall Clear(void);
	HIDESBASE void __fastcall Replace(int AIndex, Vcl::Graphics::TBitmap* ABmp32);
	HIDESBASE int __fastcall Add(Vcl::Graphics::TBitmap* Image, Vcl::Graphics::TBitmap* Mask);
	virtual void __fastcall AfterConstruction(void);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	HIDESBASE void __fastcall CopyImages(TsAlphaImageList* const ImgList);
	__fastcall virtual TsAlphaImageList(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsAlphaImageList(void);
	void __fastcall GenerateStdList(void);
	bool __fastcall GetBitmap32(int Index, Vcl::Graphics::TBitmap* Image);
	Vcl::Graphics::TBitmap* __fastcall CreateBitmap32(int Index, int aWidth, int aHeight);
	virtual void __fastcall Loaded(void);
	void __fastcall LoadFromFile(const System::UnicodeString FileName);
	void __fastcall LoadFromPngStream(System::Classes::TStream* const Stream);
	bool __fastcall TryLoadFromFile(const System::UnicodeString FileName);
	bool __fastcall TryLoadFromPngStream(System::Classes::TStream* Stream);
	void __fastcall MoveItem(int CurIndex, int NewIndex);
	HIDESBASE void __fastcall SetNewDimensions(NativeUInt Value);
	__property int ScaleValue = {read=FSavedScale, write=SetNewScale, default=0};
	__property bool AllowScale = {read=FAllowScale, write=FAllowScale, default=1};
	
__published:
	__property Height = {read=GetDimension, write=SetDimension, index=0, default=16};
	__property Width = {read=GetDimension, write=SetDimension, index=1, default=16};
	__property System::Uitypes::TColor BkColor = {read=GetBkColor, write=SetBkColor, default=536870911};
	__property TsImgListItems* Items = {read=FItems, write=SetItems};
	__property bool UseCache = {read=FUseCache, write=SetUseCache, default=1};
public:
	/* TCustomImageList.CreateSize */ inline __fastcall TsAlphaImageList(int AWidth, int AHeight) : Vcl::Controls::TImageList(AWidth, AHeight) { }
	
};


class DELPHICLASS TsVirtualImageList;
class PASCALIMPLEMENTATION TsVirtualImageList : public Vcl::Imglist::TCustomImageList
{
	typedef Vcl::Imglist::TCustomImageList inherited;
	
private:
	typedef System::DynamicArray<Vcl::Graphics::TBitmap*> _TsVirtualImageList__1;
	
	
private:
	int FWidth;
	int FHeight;
	bool FUseCache;
	bool AcChanging;
	bool StdListIsGenerated;
	_TsVirtualImageList__1 CachedImages;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	TsAlphaImageList* FAlphaImageList;
	void __fastcall SetAlphaImageList(TsAlphaImageList* const Value);
	void __fastcall SetUseCache(const bool Value);
	void __fastcall SetInteger(const int Index, const int Value);
	
protected:
	virtual void __fastcall ReadData(System::Classes::TStream* Stream);
	virtual void __fastcall WriteData(System::Classes::TStream* Stream);
	void __fastcall CreateImgList(void);
	virtual void __fastcall DoDraw(int Index, Vcl::Graphics::TCanvas* Canvas, int X, int Y, unsigned Style, bool Enabled = true);
	void __fastcall KillImgList(void);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	void __fastcall ImageListChange(System::TObject* Sender);
	
public:
	int CurrentScale;
	void __fastcall AcBeginUpdate(void);
	void __fastcall AcEndUpdate(bool DoChange = true);
	DYNAMIC void __fastcall Change(void);
	virtual void __fastcall AfterConstruction(void);
	__fastcall virtual TsVirtualImageList(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsVirtualImageList(void);
	HIDESBASE int __fastcall Count(void);
	void __fastcall GenerateStdList(void);
	bool __fastcall GetBitmap32(int Index, Vcl::Graphics::TBitmap* Image);
	Vcl::Graphics::TBitmap* __fastcall CreateBitmap32(int Index);
	void __fastcall ClearItems(void);
	virtual void __fastcall Loaded(void);
	void __fastcall RenderCacheNow(int ItemIndex = 0xffffffff);
	void __fastcall UpdateList(bool IgnoreGenerated = true);
	
__published:
	__property int Height = {read=FHeight, write=SetInteger, index=0, default=16};
	__property int Width = {read=FWidth, write=SetInteger, index=1, default=16};
	__property TsAlphaImageList* AlphaImageList = {read=FAlphaImageList, write=SetAlphaImageList};
	__property bool UseCache = {read=FUseCache, write=SetUseCache, default=1};
public:
	/* TCustomImageList.CreateSize */ inline __fastcall TsVirtualImageList(int AWidth, int AHeight) : Vcl::Imglist::TCustomImageList(AWidth, AHeight) { }
	
};


typedef void __fastcall (*TIterImagesProc)(Vcl::Imglist::TCustomImageList* ImgList, int Data);

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall IterateImageLists(TIterImagesProc CallBack, int Data);
extern DELPHI_PACKAGE bool __fastcall GetImageFormat(const System::UnicodeString FileName, TsImageFormat &ImageFormat)/* overload */;
extern DELPHI_PACKAGE bool __fastcall GetImageFormat(System::Classes::TStream* const Stream, TsImageFormat &ImageFormat)/* overload */;
extern DELPHI_PACKAGE System::Types::TSize __fastcall DrawAlphaImgList(Vcl::Imglist::TCustomImageList* const ImgList, Vcl::Graphics::TBitmap* const DestBmp, const int Left, const int Top, const int ImageIndex, const int Blend, const System::Uitypes::TColor GrayedColor, int State, const int NumGlyphs, const bool Reflected);
extern DELPHI_PACKAGE void __fastcall DrawAlphaImgListDC(Vcl::Imglist::TCustomImageList* const ImgList, const HDC DC, const int Left, const int Top, const int ImageIndex, const int Blend, const System::Uitypes::TColor GrayedColor, const int State, const int NumGlyphs, const bool Reflected);
extern DELPHI_PACKAGE bool __fastcall AddImageFromRes(unsigned aInstance, TsAlphaImageList* ImageList, const System::UnicodeString ResName, TsImageFormat aImageFormat);
}	/* namespace Acalphaimagelist */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ACALPHAIMAGELIST)
using namespace Acalphaimagelist;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AcalphaimagelistHPP
