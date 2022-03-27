#pragma once
#include "Car.h"

class Mercedes : public Car
{

public:
	Mercedes()
	{
		name = "Mercedes";
		fuelTank = 120;
		speed = 100;
	}
	string GetName()
	{
		return name;
	}
};

