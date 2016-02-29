#include <windows.h>
#include "langname.h"
ID_NAME IDNAMEMAP[] =
{
	{ LANG_NEUTRAL, L"LANG_NEUTRAL" },//0x00
	{ LANG_INVARIANT, L"LANG_INVARIANT" },//0x7f
	{ LANG_AFRIKAANS, L"LANG_AFRIKAANS" },//0x36
	{ LANG_ALBANIAN, L"LANG_ALBANIAN" },//0x1c
	{ LANG_ALSATIAN, L"LANG_ALSATIAN" },//0x84
	{ LANG_AMHARIC, L"LANG_AMHARIC" },//0x5e
	{ LANG_ARABIC, L"LANG_ARABIC" },//0x01
	{ LANG_ARMENIAN, L"LANG_ARMENIAN" },//0x2b
	{ LANG_ASSAMESE, L"LANG_ASSAMESE" },//0x4d
	{ LANG_AZERI, L"LANG_AZERI" },//0x2c
	{ LANG_AZERBAIJANI, L"LANG_AZERBAIJANI" },//0x2c
	{ LANG_BANGLA, L"LANG_BANGLA" },//0x45
	{ LANG_BASHKIR, L"LANG_BASHKIR" },//0x6d
	{ LANG_BASQUE, L"LANG_BASQUE" },//0x2d
	{ LANG_BELARUSIAN, L"LANG_BELARUSIAN" },//0x23
	{ LANG_BENGALI, L"LANG_BENGALI" },//0x45
	{ LANG_BRETON, L"LANG_BRETON" },//0x7e
	{ LANG_BOSNIAN, L"LANG_BOSNIAN" },//0x1a
	{ LANG_BULGARIAN, L"LANG_BULGARIAN" },//0x02
	{ LANG_CATALAN, L"LANG_CATALAN" },//0x03
	{ LANG_CENTRAL_KURDISH, L"LANG_CENTRAL_KURDISH" },//0x92
	{ LANG_CHEROKEE, L"LANG_CHEROKEE" },//0x5c
	{ LANG_CHINESE, L"LANG_CHINESE" },//0x04   
	{ LANG_CORSICAN, L"LANG_CORSICAN" },//0x83
	{ LANG_CROATIAN, L"LANG_CROATIAN" },//0x1a
	{ LANG_CZECH, L"LANG_CZECH" },//0x05
	{ LANG_DANISH, L"LANG_DANISH" },//0x06
	{ LANG_DARI, L"LANG_DARI" },//0x8c
	{ LANG_DIVEHI, L"LANG_DIVEHI" },//0x65
	{ LANG_DUTCH, L"LANG_DUTCH" },//0x13
	{ LANG_ENGLISH, L"LANG_ENGLISH" },//0x09
	{ LANG_ESTONIAN, L"LANG_ESTONIAN" },//0x25
	{ LANG_FAEROESE, L"LANG_FAEROESE" },//0x38
	{ LANG_FARSI, L"LANG_FARSI" },//0x29
	{ LANG_FILIPINO, L"LANG_FILIPINO" },//0x64
	{ LANG_FINNISH, L"LANG_FINNISH" },//0x0b
	{ LANG_FRENCH, L"LANG_FRENCH" },//0x0c
	{ LANG_FRISIAN, L"LANG_FRISIAN" },//0x62
	{ LANG_FULAH, L"LANG_FULAH" },//0x67
	{ LANG_GALICIAN, L"LANG_GALICIAN" },//0x56
	{ LANG_GEORGIAN, L"LANG_GEORGIAN" },//0x37
	{ LANG_GERMAN, L"LANG_GERMAN" },//0x07
	{ LANG_GREEK, L"LANG_GREEK" },//0x08
	{ LANG_GREENLANDIC, L"LANG_GREENLANDIC" },//0x6f
	{ LANG_GUJARATI, L"LANG_GUJARATI" },//0x47
	{ LANG_HAUSA, L"LANG_HAUSA" },//0x68
	{ LANG_HAWAIIAN, L"LANG_HAWAIIAN" },//0x75
	{ LANG_HEBREW, L"LANG_HEBREW" },//0x0d
	{ LANG_HINDI, L"LANG_HINDI" },//0x39
	{ LANG_HUNGARIAN, L"LANG_HUNGARIAN" },//0x0e
	{ LANG_ICELANDIC, L"LANG_ICELANDIC" },//0x0f
	{ LANG_IGBO, L"LANG_IGBO" },//0x70
	{ LANG_INDONESIAN, L"LANG_INDONESIAN" },//0x21
	{ LANG_INUKTITUT, L"LANG_INUKTITUT" },//0x5d
	{ LANG_IRISH, L"LANG_IRISH" },//0x3c
	{ LANG_ITALIAN, L"LANG_ITALIAN" },//0x10
	{ LANG_JAPANESE, L"LANG_JAPANESE" },//0x11
	{ LANG_KANNADA, L"LANG_KANNADA" },//0x4b
	{ LANG_KASHMIRI, L"LANG_KASHMIRI" },//0x60
	{ LANG_KAZAK, L"LANG_KAZAK" },//0x3f
	{ LANG_KHMER, L"LANG_KHMER" },//0x53
	{ LANG_KICHE, L"LANG_KICHE" },//0x86
	{ LANG_KINYARWANDA, L"LANG_KINYARWANDA" },//0x87
	{ LANG_KONKANI, L"LANG_KONKANI" },//0x57
	{ LANG_KOREAN, L"LANG_KOREAN" },//0x12
	{ LANG_KYRGYZ, L"LANG_KYRGYZ" },//0x40
	{ LANG_LAO, L"LANG_LAO" },//0x54
	{ LANG_LATVIAN, L"LANG_LATVIAN" },//0x26
	{ LANG_LITHUANIAN, L"LANG_LITHUANIAN" },//0x27
	{ LANG_LOWER_SORBIAN, L"LANG_LOWER_SORBIAN" },//0x2e
	{ LANG_LUXEMBOURGISH, L"LANG_LUXEMBOURGISH" },//0x6e
	{ LANG_MACEDONIAN, L"LANG_MACEDONIAN" },//0x2f 
	{ LANG_MALAY, L"LANG_MALAY" },//0x3e
	{ LANG_MALAYALAM, L"LANG_MALAYALAM" },//0x4c
	{ LANG_MALTESE, L"LANG_MALTESE" },//0x3a
	{ LANG_MANIPURI, L"LANG_MANIPURI" },//0x58
	{ LANG_MAORI, L"LANG_MAORI" },//0x81
	{ LANG_MAPUDUNGUN, L"LANG_MAPUDUNGUN" },//0x7a
	{ LANG_MARATHI, L"LANG_MARATHI" },//0x4e
	{ LANG_MOHAWK, L"LANG_MOHAWK" },//0x7c
	{ LANG_MONGOLIAN, L"LANG_MONGOLIAN" },//0x50
	{ LANG_NEPALI, L"LANG_NEPALI" },//0x61
	{ LANG_NORWEGIAN, L"LANG_NORWEGIAN" },//0x14
	{ LANG_OCCITAN, L"LANG_OCCITAN" },//0x82
	{ LANG_ODIA, L"LANG_ODIA" },//0x48
	{ LANG_ORIYA, L"LANG_ORIYA" },//0x48  
	{ LANG_PASHTO, L"LANG_PASHTO" },//0x63
	{ LANG_PERSIAN, L"LANG_PERSIAN" },//0x29
	{ LANG_POLISH, L"LANG_POLISH" },//0x15
	{ LANG_PORTUGUESE, L"LANG_PORTUGUESE" },//0x16
	{ LANG_PULAR, L"LANG_PULAR" },//0x67 
	{ LANG_PUNJABI, L"LANG_PUNJABI" },//0x46
	{ LANG_QUECHUA, L"LANG_QUECHUA" },//0x6b
	{ LANG_ROMANIAN, L"LANG_ROMANIAN" },//0x18
	{ LANG_ROMANSH, L"LANG_ROMANSH" },//0x17
	{ LANG_RUSSIAN, L"LANG_RUSSIAN" },//0x19
	{ LANG_SAKHA, L"LANG_SAKHA" },//0x85
	{ LANG_SAMI, L"LANG_SAMI" },//0x3b
	{ LANG_SANSKRIT, L"LANG_SANSKRIT" },//0x4f
	{ LANG_SCOTTISH_GAELIC, L"LANG_SCOTTISH_GAELIC" },//0x91
	{ LANG_SERBIAN, L"LANG_SERBIAN" },//0x1a 
	{ LANG_SINDHI, L"LANG_SINDHI" },//0x59
	{ LANG_SINHALESE, L"LANG_SINHALESE" },//0x5b
	{ LANG_SLOVAK, L"LANG_SLOVAK" },//0x1b
	{ LANG_SLOVENIAN, L"LANG_SLOVENIAN" },//0x24
	{ LANG_SOTHO, L"LANG_SOTHO" },//0x6c
	{ LANG_SPANISH, L"LANG_SPANISH" },//0x0a
	{ LANG_SWAHILI, L"LANG_SWAHILI" },//0x41
	{ LANG_SWEDISH, L"LANG_SWEDISH" },//0x1d
	{ LANG_SYRIAC, L"LANG_SYRIAC" },//0x5a
	{ LANG_TAJIK, L"LANG_TAJIK" },//0x28
	{ LANG_TAMAZIGHT, L"LANG_TAMAZIGHT" },//0x5f
	{ LANG_TAMIL, L"LANG_TAMIL" },//0x49
	{ LANG_TATAR, L"LANG_TATAR" },//0x44
	{ LANG_TELUGU, L"LANG_TELUGU" },//0x4a
	{ LANG_THAI, L"LANG_THAI" },//0x1e
	{ LANG_TIBETAN, L"LANG_TIBETAN" },//0x51
	{ LANG_TIGRIGNA, L"LANG_TIGRIGNA" },//0x73
	{ LANG_TIGRINYA, L"LANG_TIGRINYA" },//0x73
	{ LANG_TSWANA, L"LANG_TSWANA" },//0x32
	{ LANG_TURKISH, L"LANG_TURKISH" },//0x1f
	{ LANG_TURKMEN, L"LANG_TURKMEN" },//0x42
	{ LANG_UIGHUR, L"LANG_UIGHUR" },//0x80
	{ LANG_UKRAINIAN, L"LANG_UKRAINIAN" },//0x22
	{ LANG_UPPER_SORBIAN, L"LANG_UPPER_SORBIAN" },//0x2e
	{ LANG_URDU, L"LANG_URDU" },//0x20
	{ LANG_UZBEK, L"LANG_UZBEK" },//0x43
	{ LANG_VALENCIAN, L"LANG_VALENCIAN" },//0x03
	{ LANG_VIETNAMESE, L"LANG_VIETNAMESE" },//0x2a
	{ LANG_WELSH, L"LANG_WELSH" },//0x52
	{ LANG_WOLOF, L"LANG_WOLOF" },//0x88
	{ LANG_XHOSA, L"LANG_XHOSA" },//0x34
	{ LANG_YAKUT, L"LANG_YAKUT" },//0x85 
	{ LANG_YI, L"LANG_YI" },//0x78
	{ LANG_YORUBA, L"LANG_YORUBA" },//0x6a
	{ LANG_ZULU, L"LANG_ZULU" },//0x35
};
const wchar_t* GetLangName(int id)
{
	static int numOfLang = sizeof(IDNAMEMAP) / sizeof(ID_NAME);
	static wchar_t *lang_unknown = L"LANG_UNKNOWN";
	for (int i = 0; i < numOfLang; i++)
	{
		if (IDNAMEMAP[i].id == id)
			return IDNAMEMAP[i].name;
	}
	return lang_unknown;
}