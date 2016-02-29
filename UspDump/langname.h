#pragma once
struct ID_NAME
{
	const int id;
	const WCHAR name[50];
};
const wchar_t* GetLangName(int id);