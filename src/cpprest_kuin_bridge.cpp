#include "common.h"

BOOL WINAPI DllMain(HINSTANCE, DWORD, LPVOID)
{
	return TRUE;
}

extern "C" _declspec(dllexport) U8* HttpGet(U8* host_name, U8* path)
{
	wprintf(L"%lls\n", KuinStrToWStr(host_name).c_str());
	//http_client client(L"https://pinfort.me"); //ƒRƒƒ“ƒg‚ğŠO‚·‚Æ‚È‚º‚©“®‚©‚È‚¢

	const std::wstring body(LR"(test string)");
	return WStrToKuinStr(body);
}
