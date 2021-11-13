#include <iostream>
#include "Methods.h"
extern "C" __declspec(dllimport) void __cdecl DoSomething();
int main()
{
	DoSomething();
	std::cin.get();
	return 0;
}