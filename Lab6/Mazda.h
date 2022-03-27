#pragma once
#include "Car.h"

class Mazda : public Car
{
public:
	Mazda()
	{
		name = "Mazda";
		fuelTank = 115;
		speed = 90;
	}
	string GetName()
	{
		return name;
	}
};

