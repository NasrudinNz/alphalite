// CodeGear C++Builder
// Copyright (c) 1995, 2011 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sMessages.pas' rev: 23.00 (Win32)

#ifndef SmessagesHPP
#define SmessagesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Smessages
{
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TacSectionInfo
{
	
public:
	System::UnicodeString siName;
	int siSkinIndex;
	bool siRepaintNeeded;
};


typedef TacSectionInfo *PacSectionInfo;

//-- var, const, procedure ---------------------------------------------------
static const System::Word SM_ALPHACMD = System::Word(0xa100);
static const System::Int8 AC_SETNEWSKIN = System::Int8(0x1);
static const System::Int8 AC_REMOVESKIN = System::Int8(0x2);
static const System::Int8 AC_REFRESH = System::Int8(0x3);
static const System::Int8 AC_GETPROVIDER = System::Int8(0x4);
static const System::Int8 AC_GETCACHE = System::Int8(0x5);
static const System::Int8 AC_ENDPARENTUPDATE = System::Int8(0x6);
static const System::Int8 AC_CTRLHANDLED = System::Int8(0x7);
static const System::Int8 AC_UPDATING = System::Int8(0x8);
static const System::Int8 AC_GETDEFINDEX = System::Int8(0x9);
static const System::Int8 AC_PREPARING = System::Int8(0xa);
static const System::Int8 AC_GETHALFVISIBLE = System::Int8(0xb);
static const System::Int8 AC_GETLISTSW = System::Int8(0xc);
static const System::Int8 AC_UPDATESECTION = System::Int8(0xd);
static const System::Int8 AC_DROPPEDDOWN = System::Int8(0xe);
static const System::Int8 AC_SETSECTION = System::Int8(0xf);
static const System::Int8 AC_STOPFADING = System::Int8(0x10);
static const System::Int8 AC_SETBGCHANGED = System::Int8(0x11);
static const System::Int8 AC_INVALIDATE = System::Int8(0x12);
static const System::Int8 AC_CHILDCHANGED = System::Int8(0x13);
static const System::Int8 AC_SETCHANGEDIFNECESSARY = System::Int8(0x14);
static const System::Int8 AC_GETCONTROLCOLOR = System::Int8(0x15);
static const System::Int8 AC_SETHALFVISIBLE = System::Int8(0x16);
static const System::Int8 AC_PREPARECACHE = System::Int8(0x17);
static const System::Int8 AC_DRAWANIMAGE = System::Int8(0x18);
static const System::Int8 AC_CONTROLLOADED = System::Int8(0x19);
static const System::Int8 AC_GETSKININDEX = System::Int8(0x1a);
static const System::Int8 AC_GETSERVICEINT = System::Int8(0x1b);
static const System::Int8 AC_UPDATECHILDREN = System::Int8(0x1c);
static const System::Int8 AC_MOUSEENTER = System::Int8(0x1d);
static const System::Int8 AC_MOUSELEAVE = System::Int8(0x1e);
static const System::Int8 AC_BEGINUPDATE = System::Int8(0x1f);
static const System::Int8 AC_ENDUPDATE = System::Int8(0x20);
static const System::Int8 AC_CLEARCACHE = System::Int8(0x21);
static const System::Int8 AC_GETBG = System::Int8(0x22);
static const System::Int8 AC_GETDISKIND = System::Int8(0x23);
static const System::Int8 AC_GETSKINDATA = System::Int8(0x25);
static const System::Int8 AC_PRINTING = System::Int8(0x26);
static const System::Int8 AC_PAINTOUTER = System::Int8(0x28);
static const System::Int8 AC_BEFORESCROLL = System::Int8(0x33);
static const System::Int8 AC_AFTERSCROLL = System::Int8(0x34);
static const System::Int8 AC_REINITSCROLLS = System::Int8(0x35);
static const System::Int8 AC_GETAPPLICATION = System::Int8(0x3c);
static const System::Int8 AC_PARENTCLOFFSET = System::Int8(0x3d);
static const System::Int8 AC_NCPAINT = System::Int8(0x3e);
static const System::Int8 AC_SETPOSCHANGING = System::Int8(0x3f);
static const System::Int8 AC_GETPOSCHANGING = System::Int8(0x40);
static const System::Int8 AC_SETALPHA = System::Int8(0x41);
static const System::Int8 AC_GETFONTINDEX = System::Int8(0x42);
static const System::Int8 AC_GETBORDERWIDTH = System::Int8(0x43);
static const System::Int8 AC_SETSCALE = System::Int8(0x44);
static const System::Int8 AC_GETSCALE = System::Int8(0x45);
static const System::Int8 AC_GETOUTRGN = System::Int8(0x46);
static const System::Int8 AC_COPYDATA = System::Int8(0x47);
static const System::Int8 AC_POPUPCLOSED = System::Int8(0x48);
static const System::Int8 AC_UPDATESHADOW = System::Int8(0x49);
static const System::Int8 AC_SKINCHANGED = System::Int8(0x4a);
static const System::Int8 AC_SKINLISTCHANGED = System::Int8(0x4b);
static const System::Int8 AC_PAINTFLOATITEMS = System::Int8(0x4c);
static const System::Int8 AC_UPDATEFLOATITEMS = System::Int8(0x4d);
static const System::Int8 AC_UPDATEITEMSALPHA = System::Int8(0x4e);
static const System::Int8 AC_GETTOPWND = System::Int8(0x4f);
static const System::Int8 AC_SETFLOATZORDER = System::Int8(0x50);
static const System::Int8 AC_UPDATEFLOATBITMAPS = System::Int8(0x51);
static const System::Int8 AC_KILLTIMERS = System::Int8(0x52);
static const unsigned AC_GETBG_HI = unsigned(0x220000);
static const unsigned AC_REFRESH_HI = unsigned(0x30000);
static const unsigned AC_UPDATING_HI = unsigned(0x80000);
static const unsigned AC_SETNEWSKIN_HI = unsigned(0x10000);
static const unsigned AC_GETSERVICEINT_HI = unsigned(0x1b0000);
static const unsigned AC_REMOVESKIN_HI = unsigned(0x20000);
static const unsigned AC_PREPARECACHE_HI = unsigned(0x170000);
static const unsigned AC_BEGINUPDATE_HI = unsigned(0x1f0000);
static const unsigned AC_ENDUPDATE_HI = unsigned(0x200000);
static const unsigned AC_PAINTOUTER_HI = unsigned(0x280000);
static const unsigned AC_SETBGCHANGED_HI = unsigned(0x110000);
static const unsigned AC_GETCONTROLCOLOR_HI = unsigned(0x150000);
static const unsigned AC_GETDEFINDEX_HI = unsigned(0x90000);
static const unsigned AC_CLEARCACHE_HI = unsigned(0x210000);
static const unsigned AC_SETSCALE_HI = unsigned(0x440000);
static const unsigned AC_GETSKINDATA_HI = unsigned(0x250000);
static const unsigned AC_MOUSELEAVE_HI = unsigned(0x1e0000);
static const unsigned AC_GETPROVIDER_HI = unsigned(0x40000);
static const unsigned AC_ENDPARENTUPDATE_HI = unsigned(0x60000);
static const unsigned AC_CTRLHANDLED_HI = unsigned(0x70000);
static const unsigned AC_GETFONTINDEX_HI = unsigned(0x420000);
static const unsigned AC_STOPFADING_HI = unsigned(0x100000);
static const System::Word WM_DRAWMENUBORDER = System::Word(0xbcb3);
static const System::Word WM_DRAWMENUBORDER2 = System::Word(0xbcb4);

}	/* namespace Smessages */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SMESSAGES)
using namespace Smessages;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SmessagesHPP
