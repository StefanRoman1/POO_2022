#include "Global_functions.h"
#include <iostream>

int CompNume(Student a, Student b)
{
    if (a.GetName() > b.GetName())
    {
        return 1;
    }
    else if (a.GetName() < b.GetName())
    {
        return -1;
    }
    else return 0;
}

int CompMate(Student a, Student b)
{
    if (a.GetMate() > b.GetMate())
    {
        return 1;
    }
    else if (a.GetMate() < b.GetMate())
    {
        return -1;
    }
    else return 0;
}

int CompIstorie(Student a, Student b)
{
    if (a.GetIstorie() > b.GetIstorie())
    {
        return 1;
    }
    else if (a.GetIstorie() < b.GetIstorie())
    {
        return -1;
    }
    else return 0;
}

int CompEngleza(Student a, Student b)
{
    if (a.GetEngleza() > b.GetEngleza())
    {
        return 1;
    }
    else if (a.GetEngleza() < b.GetEngleza())
    {
        return -1;
    }
    else return 0;
}

int CompAverage(Student a, Student b)
{
    if (a.GetAverage() > b.GetAverage())
    {
        return 1;
    }
    else if (a.GetAverage() < b.GetAverage())
    {
        return -1;
    }
    else return 0;
}
