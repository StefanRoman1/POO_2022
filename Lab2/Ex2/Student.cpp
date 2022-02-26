#include "Student.h"
#include <iostream>

using namespace std;

string Student::GetName()
{
	return name;
}

float Student::GetIstorie()
{
	return istorie;
}

float Student::GetEngleza()
{
	return engleza;
}

float Student::GetMate()
{
	return mate;
}

float Student::GetAverage()
{
	media = (mate + engleza + istorie) / 3;
	return media;
}

void Student::SetName(string n)
{
	name = n;
}

void Student::SetMate(float x)
{
	if (x >= 1 && x <=10)
	{
		mate = x;
	}
}

void Student::SetEngleza(float x)
{
	if (x >= 1 && x <= 10)
	{
		engleza = x;
	}
}

void Student::SetIstorie(float x)
{
	if (x >= 1 && x <= 10)
	{
		istorie = x;
	}
}
