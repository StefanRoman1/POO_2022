#pragma once
#include <iostream>

using namespace std;

class Car
{
	
public:
	int fuelTank;
	int speed;
	string name;
	virtual string GetName() = 0;
	int GetFuelTank()
	{
		return fuelTank;
	}
	int GetSpeed()
	{
		return speed;
	}
};

