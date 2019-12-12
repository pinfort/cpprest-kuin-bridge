#include "common.h"

BOOL WINAPI DllMain(HINSTANCE, DWORD, LPVOID)
{
	return TRUE;
}

extern "C" _declspec(dllexport) U8* HttpGet(U8* host_name, U8* path)
{
	wprintf(L"%lls\n", KuinStrToWStr(host_name).c_str()); //Kuin からCppに文字列を渡せる

	//http_client client(U("http://www.bing.com/")); //コメントを外すとなぜか動かない

	const std::wstring body(LR"(test string)"); //CppからKuinに文字列を渡せる
	return WStrToKuinStr(body);
}
