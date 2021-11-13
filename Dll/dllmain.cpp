// dllmain.cpp : Определяет точку входа для приложения DLL.
#include "pch.h"
#include <iostream>
#define DllExport __declspec(dllexport)
extern "C" DllExport void __cdecl DoSomething() {
    std::cout << "Hi";
}