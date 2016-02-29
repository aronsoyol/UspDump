#pragma once
#include <Windows.h>
#include <string>
using namespace std; 
namespace FileVersion
{


	class CFileVersionInfo
	{
		void  *m_pVersionInfo;
		DWORD *m_dwTrans;
		bool  m_ok;
	public:
		CFileVersionInfo(const WCHAR * filePath);
		wstring GetVersion();
		virtual ~CFileVersionInfo(void);
	};
}

