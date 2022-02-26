#pragma once
#include <iostream>

using namespace std;



class Student
{
private:
	string name;
	float mate;
	float engleza;
	float istorie;
	float media;
public:
	string GetName();
	void SetName(string n);
	float GetMate();
	float GetEngleza();
	float GetIstorie();
	void SetMate(float x);
	void SetIstorie(float x);
	void SetEngleza(float x);
	float GetAverage();

};

