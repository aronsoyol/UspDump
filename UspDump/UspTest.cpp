// UspTest.cpp : Defines the entry point for the console application.
//


#include <windows.h>
#include <usp10.h>
#include <memory>
#include "FileVersionInfo.h"
//#include "../TextView/TextDocument.h"
//#include "../TextView/TextRender/MNGlyfData.h"
#include "langname.h"
//LONG_MAX

void GenUsp10DllData();
int main(int argc, WCHAR* argv[])
{
//	TextDocument doc;
//	doc.Init()
	HMODULE Usp10Dll = GetModuleHandle(L"usp10.dll");
	WCHAR	Usp10Path[MAX_PATH];
	WCHAR   FileDescription[100];
	WCHAR   ProductVersion[100];

	GetModuleFileName((HMODULE) Usp10Dll, Usp10Path, MAX_PATH);
	FileVersion::CFileVersionInfo version(Usp10Path);
	std::wstring ver_str = version.GetVersion();
	wprintf(L"path of usp10.dll    [%s]\n", Usp10Path);
	wprintf(L"version of usp10.dll [%s]\n", ver_str.c_str());
	wprintf(L"Script GetProperty list:\n");
	GenUsp10DllData();
	return 0;
}

void GenUsp10DllData()
{
	WCHAR		*text = new WCHAR[0xFFFF];
	SCRIPT_ITEM *si = new SCRIPT_ITEM[0x0ffff];
	

	
	for(int i = 0; i < 0xffff; ++i)
	{
		text[i] = i + 1; 
	}
	int item_count = 0 ;
	HRESULT hr =  ScriptItemize(text, 0xffff, 0x0fffff, NULL, NULL, si, &item_count);
	wprintf(L"#,code range,scriptId\n");
	if(hr == S_OK)
	{
		WCHAR out_str[200];
		for(int j = 0; j<item_count; ++j)
		{
			wsprintf(out_str, L"%d,U%04X-U%04X,%d\n",j,text[si[j].iCharPos], text[si[j+1].iCharPos - 1],si[j].a.eScript);
			//OutputDebugString(out_str);
			wprintf(out_str);
		}
	}
	wprintf(L"\n**********************************************\n");

	wprintf(L"Script Property List:\n\n");
	
	WCHAR out_str[1000];
	wprintf(L"id,");//,                 //:16; // Primary and sublanguage associated with script
	wprintf(L"Name,");//, 
	wprintf(L"langid,");//,                 //:16; // Primary and sublanguage associated with script
	wprintf(L"Numeric,");//,               //:1;
	wprintf(L"Complex,");//,               //:1;  // Script requires special shaping or layout
	wprintf(L"NeedsWordBreaking,");//,     //:1;  // Requires ScriptBreak for word breaking information
	wprintf(L"NeedsCaretInfo,");//,        //:1;  // Requires caret restriction to cluster boundaries
	wprintf(L"CharSet,");//,               //:8;  // Charset to use when creating font
	wprintf(L"Control,");//,               //:1;  // Contains only control characters
	wprintf(L"PrivateUseArea,");//,        //:1;  // This item is from the Unicode range U+E000 through U+F8FF
	wprintf(L"NeedsCharacterJustify,");//, //:1;  // Requires inter-character justification
	wprintf(L"InvalidGlyph,");//,          //:1;  // Invalid combinations generate glyph wgInvalid in the glyph buffer
	wprintf(L"InvalidLogAttr,");//,        //:1;  // Invalid combinations are marked by fInvalid in the logical attributes
	wprintf(L"CDM,");//                   //:1;  // Contains Combining Diacritical Marks
	wprintf(L"AmbiguousCharSet,");//,      //:1;  // Script does not correspond 1:1 with a charset
	wprintf(L"ClusterSizeVaries,");//,     //:1;  // Measured cluster width depends on adjacent clusters
	wprintf(L"RejectInvalid\n");//,         //:1;  // Invalid combinations rejected,//
	const SCRIPT_PROPERTIES **propList = NULL;
	int		propCount = 0;
	ScriptGetProperties(&propList, &propCount);
	for (int i = 0; i < propCount; i++)
	{
		wprintf(L"%2d,", i);
		wprintf(L"%s,", GetLangName(propList[i]->langid));
		wprintf(L"0x%04X,", propList[i]->langid);                 //:16; // Primary and sublanguage associated with script
		wprintf(L"%d,", propList[i]->fNumeric);               //:1;
		wprintf(L"%d,", propList[i]->fComplex);               //:1;  // Script requires special shaping or layout
		wprintf(L"%d,", propList[i]->fNeedsWordBreaking);     //:1;  // Requires ScriptBreak for word breaking information
		wprintf(L"%d,", propList[i]->fNeedsCaretInfo);        //:1;  // Requires caret restriction to cluster boundaries
		wprintf(L"0x%02X,", propList[i]->bCharSet);               //:8;  // Charset to use when creating font
		wprintf(L"%d,", propList[i]->fControl);               //:1;  // Contains only control characters
		wprintf(L"%d,", propList[i]->fPrivateUseArea);        //:1;  // This item is from the Unicode range U+E000 through U+F8FF
		wprintf(L"%d,", propList[i]->fNeedsCharacterJustify); //:1;  // Requires inter-character justification
		wprintf(L"%d,", propList[i]->fInvalidGlyph);          //:1;  // Invalid combinations generate glyph wgInvalid in the glyph buffer
		wprintf(L"%d,", propList[i]->fInvalidLogAttr);        //:1;  // Invalid combinations are marked by fInvalid in the logical attributes
		wprintf(L"%d,", propList[i]->fCDM);                   //:1;  // Contains Combining Diacritical Marks
		wprintf(L"%d,", propList[i]->fAmbiguousCharSet);      //:1;  // Script does not correspond 1:1 with a charset
		wprintf(L"%d,", propList[i]->fClusterSizeVaries);     //:1;  // Measured cluster width depends on adjacent clusters
		wprintf(L"%d\n", propList[i]->fRejectInvalid);         //:1;  // Invalid combinations should be rejected


	}
	delete[] si;
	delete[] text;

}