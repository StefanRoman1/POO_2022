#pragma once
#include "Car.h"

class Dacia : public  Car
{
public:
	Dacia()
	{
		name = "Dacia";
		fuelTank = 80;
		speed = 50;
	}
	string GetName()
	{
		return name;
	}
};

