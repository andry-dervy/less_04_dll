
// less_04_dll.cpp : Defines the exported functions for the DLL.
/*
Created by Antonenko Andry
IDE: Visual Studio 2019
*/

#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include <utility>
#include <limits.h>
#include "less_04_dll.h"

using namespace std;

bool task_01(int nD1, int nD2)
{
    int sum = nD1 + nD2;
    if (sum >= 10 && sum <= 20)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool task_02(int nD1, int nD2)
{
    if ((nD1 == 10 && nD2 == 10) ||
        (nD1 + nD2) == 10)
    {
        return true;
    }
    else
    {
        return false;
    }
}

string task_03(int nD)
{
    string s;
    for (int i = 1; i < nD; i += 2)
    {
        s = s + std::to_string(i) + " ";
    }
    return s;
}

bool task_04(int nD)
{
    int nSqrt = (int)sqrt(nD);

    int nDivider;
    int nIter = 0;
    if (nD > 3)
    {
        do
        {
            nDivider = 2 + nIter;
            if (nIter < 1) nIter++;
            else nIter += 2;

            if ((nD % nDivider) == 0)
            {
                return false;
            }
            else if (nDivider > nSqrt)
            {
                return true;
            }
        } while (true);
    }
    else
    {
        return true;
    }
}

bool task_05(int nYear)
{
    bool bLeapYear = false;
    if (nYear % 4 == 0)
    {
        if (nYear % 100 == 0)
        {
            if (nYear % 400 == 0) bLeapYear = true;
        }
        else bLeapYear = true;
    }
    return bLeapYear;
}
