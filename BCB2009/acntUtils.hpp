// CodeGear C++Builder
// Copyright (c) 1995, 2008 by CodeGear
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Acntutils.pas' rev: 20.00

#ifndef AcntutilsHPP
#define AcntutilsHPP

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
#include <Shellapi.hpp>	// Pascal unit
#include <Sconst.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acntutils
{
//-- type declarations -------------------------------------------------------
typedef Sysutils::TSearchRec TacSearchRec;

typedef Classes::TStrings TacStrings;

typedef Classes::TStringList TacStringList;

typedef _WIN32_FIND_DATAW TacWIN32FindData;

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE unsigned __stdcall (*acSHGetFileInfo)(System::WideChar * pszPath, unsigned dwFileAttributes, _SHFILEINFOW &psfi, unsigned cbFileInfo, unsigned uFlags);
extern PACKAGE int __fastcall GetCaptionFontSize(void);
extern PACKAGE HFONT __fastcall acGetTitleFont(void);
extern PACKAGE __int64 __fastcall HexToInt(System::AnsiString HexStr);
extern PACKAGE void __fastcall GetIniSections(const Classes::TStringList* IniList, const Classes::TStringList* SectionsList);
extern PACKAGE System::UnicodeString __fastcall ReadIniString(Classes::TStringList* IniList, Classes::TStringList* SectionsList, const System::UnicodeString Section, const System::UnicodeString Ident, const System::UnicodeString Default);
extern PACKAGE int __fastcall ReadIniInteger(Classes::TStringList* IniList, Classes::TStringList* SectionsList, const System::UnicodeString Section, const System::UnicodeString Ident, int Default);
extern PACKAGE int __fastcall ReadRegInt(HKEY Key, const System::UnicodeString Section, const System::UnicodeString Named);
extern PACKAGE void __fastcall Alert(void)/* overload */;
extern PACKAGE void __fastcall Alert(const System::UnicodeString s)/* overload */;
extern PACKAGE void __fastcall Alert(const int i)/* overload */;
extern PACKAGE Messages::TMessage __fastcall MakeMessage(const int aMsg, const int aWParam, const int aLParam, const int aResult);
extern PACKAGE System::UnicodeString __fastcall iff(const bool L, const System::UnicodeString s1, const System::UnicodeString s2)/* overload */;
extern PACKAGE System::TObject* __fastcall iff(const bool L, const System::TObject* o1, const System::TObject* o2)/* overload */;
extern PACKAGE int __fastcall iff(const bool L, const int i1, const int i2)/* overload */;
extern PACKAGE bool __fastcall iff(const bool L, const bool b1, const bool b2)/* overload */;
extern PACKAGE bool __fastcall Between(const int Value, const int i1, const int i2, bool Abs = false);
extern PACKAGE int __fastcall SumTrans(const int i1, const int i2);
extern PACKAGE int __fastcall Maxi(const int i1, const int i2);
extern PACKAGE int __fastcall Mini(const int i1, const int i2);
extern PACKAGE int __fastcall LimitIt(const int Value, const int MinValue, const int MaxValue);
extern PACKAGE void __fastcall Changei(int &i1, int &i2);
extern PACKAGE bool __fastcall IsValidFloat(const System::AnsiString Value, System::Extended &RetValue);
extern PACKAGE bool __fastcall IsValidIndex(int Value, int Amount, int First = 0x0);
extern PACKAGE System::UnicodeString __fastcall FormatFloatStr(const System::AnsiString S, const bool Thousands);
extern PACKAGE bool __fastcall acGetAnimation(void);
extern PACKAGE void __fastcall acSetAnimation(const bool Value);
extern PACKAGE bool __fastcall RectIsVisible(const Types::TRect &ParentRect, const Types::TRect &Rect);
extern PACKAGE bool __fastcall RectInRect(const Types::TRect &BigRect, const Types::TRect &SmallRect, bool FullInclude = true);
extern PACKAGE Types::TRect __fastcall RotateRect(const Types::TRect &R);
extern PACKAGE Types::TRect __fastcall RectsAnd(const Types::TRect &R1, const Types::TRect &R2);
extern PACKAGE Types::TRect __fastcall SumRects(const Types::TRect &R1, const Types::TRect &R2);
extern PACKAGE Types::TRect __fastcall MkRect(int Right = 0x0, int Bottom = 0x0, int Left = 0x0, int Top = 0x0)/* overload */;
extern PACKAGE Types::TRect __fastcall MkRect(Graphics::TBitmap* Bmp)/* overload */;
extern PACKAGE Types::TRect __fastcall MkRect(Controls::TControl* Ctrl)/* overload */;
extern PACKAGE Types::TRect __fastcall MkRect(const tagSIZE &Size)/* overload */;
extern PACKAGE tagSIZE __fastcall MkSize(Graphics::TBitmap* Bmp)/* overload */;
extern PACKAGE tagSIZE __fastcall MkSize(const Types::TRect &R)/* overload */;
extern PACKAGE Types::TPoint __fastcall MkPoint(const int X = 0x0, const int Y = 0x0)/* overload */;
extern PACKAGE Types::TPoint __fastcall MkPoint(Controls::TControl* Control)/* overload */;
extern PACKAGE tagSIZE __fastcall MkSize(int Width = 0x0, int Height = 0x0)/* overload */;
extern PACKAGE Types::TRect __fastcall OffsRect(const Types::TRect &aRect, int aOffset)/* overload */;
extern PACKAGE Types::TRect __fastcall OffsRect(const Types::TRect &aRect, int aOffsetX, int aOffsetY)/* overload */;
extern PACKAGE int __fastcall WidthOf(const Types::TRect &r, const bool CheckNegative = false);
extern PACKAGE int __fastcall HeightOf(const Types::TRect &r, const bool CheckNegative = false);
extern PACKAGE bool __fastcall acCharIn(const System::WideChar C, const Sysutils::TSysCharSet &SysCharSet);
extern PACKAGE int __fastcall acWordPosition(const int N, const System::UnicodeString S, const Sysutils::TSysCharSet &WordDelims);
extern PACKAGE int __fastcall GetWordNumber(const System::UnicodeString W, const System::UnicodeString S, const Sysutils::TSysCharSet &WordDelims);
extern PACKAGE int __fastcall WordPosition(const int N, const System::AnsiString S, const Sysutils::TSysCharSet &WordDelims);
extern PACKAGE System::AnsiString __fastcall ExtractWord(const int N, const System::AnsiString S, const Sysutils::TSysCharSet &WordDelims);
extern PACKAGE System::UnicodeString __fastcall acExtractWord(const int N, const System::UnicodeString S, const Sysutils::TSysCharSet &WordDelims);
extern PACKAGE int __fastcall acWordCount(const System::UnicodeString S, const Sysutils::TSysCharSet &WordDelims);
extern PACKAGE int __fastcall WordCount(const System::AnsiString S, const Sysutils::TSysCharSet &WordDelims);
extern PACKAGE System::AnsiString __fastcall MakeStr(char C, int N);
extern PACKAGE System::UnicodeString __fastcall DelRSpace(const System::UnicodeString S);
extern PACKAGE System::UnicodeString __fastcall DelESpace(const System::UnicodeString S);
extern PACKAGE System::UnicodeString __fastcall DelBSpace(const System::UnicodeString S);
extern PACKAGE System::UnicodeString __fastcall DelChars(const System::UnicodeString S, System::WideChar Chr);
extern PACKAGE System::UnicodeString __fastcall ReplaceStr(const System::UnicodeString S, const System::UnicodeString Srch, const System::UnicodeString Replace);
extern PACKAGE System::UnicodeString __fastcall ExtractSubStr(const System::AnsiString S, int &Pos, const Sysutils::TSysCharSet &Delims);
extern PACKAGE bool __fastcall IsEmptyStr(const System::AnsiString S, const Sysutils::TSysCharSet &EmptyChars);
extern PACKAGE bool __fastcall IsNTFamily(void);
extern PACKAGE Sconst::TCacheInfo __fastcall MakeCacheInfo(const Graphics::TBitmap* aBmp, const int xOffs = 0x0, const int yOffs = 0x0);
extern PACKAGE System::AnsiString __fastcall AddChar(const char C, const System::AnsiString S, const int N);
extern PACKAGE bool __fastcall DeleteRequest(void);
extern PACKAGE bool __fastcall CustomRequest(const System::UnicodeString s);
extern PACKAGE void __fastcall ShowWarning(const System::UnicodeString S);
extern PACKAGE void __fastcall ShowError(const System::UnicodeString s);
extern PACKAGE void __fastcall Delay(const int MSecs);
extern PACKAGE bool __fastcall IsIDERunning(void);
extern PACKAGE BOOL __fastcall IsWOW64Proc(void);
extern PACKAGE void __fastcall WaitTicks(unsigned ABeginTicks, int ADelay = 0xc);
extern PACKAGE void __fastcall InitBlendData(_BLENDFUNCTION &AData, System::Byte BlendValue);
extern PACKAGE bool __fastcall HasProperty(const System::TObject* Component, const System::UnicodeString PropName);
extern PACKAGE System::TObject* __fastcall GetObjProp(const System::TObject* Component, const System::UnicodeString PropName);
extern PACKAGE bool __fastcall CheckSetProp(const System::TObject* Component, const System::UnicodeString PropName, const System::UnicodeString Value);
extern PACKAGE bool __fastcall SetSetPropValue(const System::TObject* Component, const System::UnicodeString PropName, const System::UnicodeString ValueName, const bool Value);
extern PACKAGE int __fastcall GetIntProp(const System::TObject* Component, const System::UnicodeString PropName);
extern PACKAGE void __fastcall SetIntProp(const System::TObject* Component, const System::UnicodeString PropName, const int Value);
extern PACKAGE System::UnicodeString __fastcall NormalDir(const System::UnicodeString DirName);
extern PACKAGE BOOL __fastcall acFindNextFile(unsigned hFindFile, _WIN32_FIND_DATAW &lpFindFileData);
extern PACKAGE unsigned __fastcall acFindFirstFile(System::WideChar * lpFileName, _WIN32_FIND_DATAW &lpFindFileData);
extern PACKAGE bool __fastcall ValidFileName(const System::UnicodeString FileName);
extern PACKAGE bool __fastcall acDirExists(const System::UnicodeString Name);
extern PACKAGE System::UnicodeString __fastcall ShortToLongFileName(const System::UnicodeString ShortName);
extern PACKAGE System::UnicodeString __fastcall LongToShortFileName(const System::UnicodeString LongName);
extern PACKAGE System::UnicodeString __fastcall ShortToLongPath(const System::UnicodeString ShortName);
extern PACKAGE System::UnicodeString __fastcall LongToShortPath(const System::UnicodeString LongName);
extern PACKAGE bool __fastcall acCreateDir(const System::UnicodeString DirName);
extern PACKAGE bool __fastcall acRemoveDir(const System::UnicodeString DirName);
extern PACKAGE bool __fastcall acSetCurrentDir(const System::UnicodeString DirName);
extern PACKAGE bool __fastcall acDeleteFile(const System::UnicodeString FileName);
extern PACKAGE bool __fastcall acCopyFile(const System::UnicodeString ExistingFileName, const System::UnicodeString NewFileName, bool bFailIfExists);
extern PACKAGE int __fastcall acFileSetAttr(const System::UnicodeString FileName, unsigned Attr);
extern PACKAGE int __fastcall acFindFirst(const System::UnicodeString Path, int Attr, Sysutils::TSearchRec &F);
extern PACKAGE int __fastcall acFindNext(Sysutils::TSearchRec &F);
extern PACKAGE void __fastcall acFindClose(Sysutils::TSearchRec &F);
extern PACKAGE bool __fastcall ClearDir(const System::UnicodeString Path, bool Delete);
extern PACKAGE System::UnicodeString __fastcall GetAppPath();
extern PACKAGE Graphics::TIcon* __fastcall GetIconForFile(const System::UnicodeString FullFileName, int Flag);
extern PACKAGE bool __fastcall acSameText(const System::UnicodeString S1, const System::UnicodeString S2);
extern PACKAGE void __fastcall acFillString(System::UnicodeString &S, const int nCount, const System::WideChar C);
extern PACKAGE void __fastcall InitSysProc(void);

}	/* namespace Acntutils */
using namespace Acntutils;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AcntutilsHPP
