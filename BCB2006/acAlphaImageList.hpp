// Borland C++ Builder
// Copyright (c) 1995, 2005 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Acalphaimagelist.pas' rev: 10.00

#ifndef AcalphaimagelistHPP
#define AcalphaimagelistHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Sysutils.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Commctrl.hpp>	// Pascal unit
#include <Imglist.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Sconst.hpp>	// Pascal unit
#include <Acntutils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acalphaimagelist
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TsImageFormat { ifPNG, ifICO, ifBMP32 };
#pragma option pop

class DELPHICLASS TsImgListItem;
class PASCALIMPLEMENTATION TsImgListItem : public Classes::TCollectionItem 
{
	typedef Classes::TCollectionItem inherited;
	
private:
	AnsiString FText;
	AnsiString FImageName;
	TsImageFormat FImageFormat;
	Graphics::TPixelFormat FPixelFormat;
	
protected:
	virtual void __fastcall DefineProperties(Classes::TFiler* Filer);
	void __fastcall ReadData(Classes::TStream* Reader);
	void __fastcall WriteData(Classes::TStream* Writer);
	
public:
	int OrigWidth;
	int OrigHeight;
	Graphics::TBitmap* CacheBmp;
	Classes::TMemoryStream* ImgData;
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	virtual void __fastcall AssignTo(Classes::TPersistent* Dest);
	__fastcall virtual TsImgListItem(Classes::TCollection* ACollection);
	__fastcall virtual ~TsImgListItem(void);
	
__published:
	__property TsImageFormat ImageFormat = {read=FImageFormat, write=FImageFormat, nodefault};
	__property AnsiString ImageName = {read=FImageName, write=FImageName, stored=true};
	__property Graphics::TPixelFormat PixelFormat = {read=FPixelFormat, write=FPixelFormat, default=7};
	__property AnsiString Text = {read=FText, write=FText};
};


class DELPHICLASS TsImgListItems;
class DELPHICLASS TsAlphaImageList;
class PASCALIMPLEMENTATION TsAlphaImageList : public Controls::TImageList 
{
	typedef Controls::TImageList inherited;
	
private:
	bool FLoaded;
	bool FUseCache;
	bool AcChanging;
	bool FAllowScale;
	bool StdListIsGenerated;
	TsImgListItems* FItems;
	Graphics::TColor FBkColor;
	HIDESBASE Graphics::TColor __fastcall GetBkColor(void);
	void __fastcall SetItems(const TsImgListItems* Value);
	HIDESBASE void __fastcall SetBkColor(const Graphics::TColor Value);
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
	virtual void __fastcall DoDraw(int Index, Graphics::TCanvas* Canvas, int X, int Y, unsigned Style, bool Enabled = true);
	void __fastcall KillImgList(void);
	bool __fastcall IsDuplicated(void);
	virtual void __fastcall ReadData(Classes::TStream* Stream);
	virtual void __fastcall WriteData(Classes::TStream* Stream);
	void __fastcall ItemsClear(void);
	
public:
	bool DoubleData;
	bool IgnoreTransparency;
	void __fastcall AcBeginUpdate(void);
	void __fastcall AcEndUpdate(bool DoChange = true);
	DYNAMIC void __fastcall Change(void);
	HIDESBASE void __fastcall Clear(void);
	HIDESBASE void __fastcall Replace(int AIndex, Graphics::TBitmap* ABmp32);
	HIDESBASE int __fastcall Add(Graphics::TBitmap* Image, Graphics::TBitmap* Mask);
	virtual void __fastcall AfterConstruction(void);
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	virtual void __fastcall AssignTo(Classes::TPersistent* Dest);
	HIDESBASE void __fastcall CopyImages(const TsAlphaImageList* ImgList);
	__fastcall virtual TsAlphaImageList(Classes::TComponent* AOwner);
	__fastcall virtual ~TsAlphaImageList(void);
	void __fastcall GenerateStdList(void);
	bool __fastcall GetBitmap32(int Index, Graphics::TBitmap* Image);
	Graphics::TBitmap* __fastcall CreateBitmap32(int Index, int aWidth, int aHeight);
	virtual void __fastcall Loaded(void);
	void __fastcall LoadFromFile(const AnsiString FileName);
	void __fastcall LoadFromPngStream(const Classes::TStream* Stream);
	bool __fastcall TryLoadFromFile(const AnsiString FileName);
	bool __fastcall TryLoadFromPngStream(Classes::TStream* Stream);
	void __fastcall MoveItem(int CurIndex, int NewIndex);
	HIDESBASE void __fastcall SetNewDimensions(unsigned Value);
	__property int ScaleValue = {read=FSavedScale, write=SetNewScale, default=0};
	__property bool AllowScale = {read=FAllowScale, write=FAllowScale, default=1};
	
__published:
	__property Height  = {read=GetDimension, write=SetDimension, index=0, default=16};
	__property Width  = {read=GetDimension, write=SetDimension, index=1, default=16};
	__property Graphics::TColor BkColor = {read=GetBkColor, write=SetBkColor, default=536870911};
	__property TsImgListItems* Items = {read=FItems, write=SetItems};
	__property bool UseCache = {read=FUseCache, write=SetUseCache, default=1};
public:
	#pragma option push -w-inl
	/* TCustomImageList.CreateSize */ inline __fastcall TsAlphaImageList(int AWidth, int AHeight) : Controls::TImageList(AWidth, AHeight) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TsImgListItems : public Classes::TCollection 
{
	typedef Classes::TCollection inherited;
	
public:
	TsImgListItem* operator[](int Index) { return Items[Index]; }
	
protected:
	TsAlphaImageList* FOwner;
	HIDESBASE TsImgListItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TsImgListItem* Value);
	DYNAMIC Classes::TPersistent* __fastcall GetOwner(void);
	
public:
	__fastcall TsImgListItems(TsAlphaImageList* AOwner);
	__fastcall virtual ~TsImgListItems(void);
	__property TsImgListItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
};


typedef DynamicArray<Graphics::TBitmap* >  acAlphaImageList__5;

class DELPHICLASS TsVirtualImageList;
class PASCALIMPLEMENTATION TsVirtualImageList : public Imglist::TCustomImageList 
{
	typedef Imglist::TCustomImageList inherited;
	
private:
	int FWidth;
	int FHeight;
	bool FUseCache;
	bool AcChanging;
	bool StdListIsGenerated;
	DynamicArray<Graphics::TBitmap* >  CachedImages;
	Imglist::TChangeLink* FImageChangeLink;
	TsAlphaImageList* FAlphaImageList;
	void __fastcall SetAlphaImageList(const TsAlphaImageList* Value);
	void __fastcall SetUseCache(const bool Value);
	void __fastcall SetInteger(const int Index, const int Value);
	
protected:
	virtual void __fastcall ReadData(Classes::TStream* Stream);
	virtual void __fastcall WriteData(Classes::TStream* Stream);
	void __fastcall CreateImgList(void);
	virtual void __fastcall DoDraw(int Index, Graphics::TCanvas* Canvas, int X, int Y, unsigned Style, bool Enabled = true);
	void __fastcall KillImgList(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall ImageListChange(System::TObject* Sender);
	
public:
	int CurrentScale;
	void __fastcall AcBeginUpdate(void);
	void __fastcall AcEndUpdate(bool DoChange = true);
	DYNAMIC void __fastcall Change(void);
	virtual void __fastcall AfterConstruction(void);
	__fastcall virtual TsVirtualImageList(Classes::TComponent* AOwner);
	__fastcall virtual ~TsVirtualImageList(void);
	HIDESBASE int __fastcall Count(void);
	void __fastcall GenerateStdList(void);
	bool __fastcall GetBitmap32(int Index, Graphics::TBitmap* Image);
	Graphics::TBitmap* __fastcall CreateBitmap32(int Index);
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
	#pragma option push -w-inl
	/* TCustomImageList.CreateSize */ inline __fastcall TsVirtualImageList(int AWidth, int AHeight) : Imglist::TCustomImageList(AWidth, AHeight) { }
	#pragma option pop
	
};


typedef void __fastcall (*TIterImagesProc)(Imglist::TCustomImageList* ImgList, int Data);

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall IterateImageLists(TIterImagesProc CallBack, int Data);
extern PACKAGE bool __fastcall GetImageFormat(const AnsiString FileName, TsImageFormat &ImageFormat)/* overload */;
extern PACKAGE bool __fastcall GetImageFormat(const Classes::TStream* Stream, TsImageFormat &ImageFormat)/* overload */;
extern PACKAGE tagSIZE __fastcall DrawAlphaImgList(const Imglist::TCustomImageList* ImgList, const Graphics::TBitmap* DestBmp, const int Left, const int Top, const int ImageIndex, const int Blend, const Graphics::TColor GrayedColor, int State, const int NumGlyphs, const bool Reflected);
extern PACKAGE void __fastcall DrawAlphaImgListDC(const Imglist::TCustomImageList* ImgList, const HDC DC, const int Left, const int Top, const int ImageIndex, const int Blend, const Graphics::TColor GrayedColor, const int State, const int NumGlyphs, const bool Reflected);
extern PACKAGE bool __fastcall AddImageFromRes(unsigned aInstance, TsAlphaImageList* ImageList, const AnsiString ResName, TsImageFormat aImageFormat);

}	/* namespace Acalphaimagelist */
using namespace Acalphaimagelist;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Acalphaimagelist
