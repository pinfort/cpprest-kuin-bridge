#include "common.h"

BOOL WINAPI DllMain(HINSTANCE, DWORD, LPVOID)
{
	return TRUE;
}

extern "C" _declspec(dllexport) U8* HttpGet(U8* host_name, U8* path)
{
	wprintf(L"%lls\n", KuinStrToWStr(host_name).c_str());
	//http_client client(L"https://pinfort.me"); //�R�����g���O���ƂȂ��������Ȃ�

	const std::wstring body(LR"(test string)");
	return WStrToKuinStr(body);
}
