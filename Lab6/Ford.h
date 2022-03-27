#pragma once
#include "Car.h"

class Ford : public Car
{
public:
	Ford()
	{
		name = "Ford";
		fuelTank = 98;
		speed = 90;
	}
	string GetName()
	{
		return name;
	}
};

