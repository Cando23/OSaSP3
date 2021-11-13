#include "Windows.h"
#include "iostream"
typedef void __cdecl DoFunc();
int main()
{
	HINSTANCE lib;
	lib = LoadLibrary(L"Dll.dll");
	if (lib != NULL) {
		DoFunc* proc = (DoFunc*)GetProcAddress(lib, "DoSomething");
		if (NULL != proc) {
			proc();
		}
		else {
			std::cout << "NO";
		}
		FreeLibrary(lib);
	}
	return 0;
}