// less_04_dll.h - Contains declarations of functions
/*
Created by Antonenko Andry
IDE: Visual Studio 2019
*/

#pragma once

#ifdef LESS_04_DLL_EXPORTS
#define LESS_04_DLL_DLL __declspec(dllexport)
#else
#define LESS_04_DLL_API __declspec(dllimport)
#endif

#include <string>

extern "C++" LESS_04_DLL_API bool task_01(int nD1, int nD2);

extern "C++" LESS_04_DLL_API bool task_02(int nD1, int nD2);

extern "C++" LESS_04_DLL_API std::string task_03(int nD);

extern "C++" LESS_04_DLL_API bool task_04(int nD);

extern "C++" LESS_04_DLL_API bool task_05(int nYear);

