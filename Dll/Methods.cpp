#include "pch.h"
void __cdecl DoSomething() {
	HANDLE hProcess = GetCurrentProcess();
	if (hProcess)
    std::cout << "Hi";
}