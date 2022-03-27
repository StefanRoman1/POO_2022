#pragma once
#include <vector>
#include "Car.h"
#include "Weather.h"

class Circuit
{
	int length;
	Weather weather;
	Car* cars[10];
	int index = 0;
public:
	Circuit()
	{
		length = 0;
		weather = Rain;
	}
	void SetLength(int length)
	{
		this->length = length;
	}
	void SetWeather(Weather weather)
	{
		this->weather = weather;
	}
	void AddCar(Car* car)
	{
		cars[index] = car;
		index++;
	}
	void Race()
	{
		cout << "3..2..1.." << endl << "GO" << endl;
		for (int i = 0; i < index - 1; i++)
		{
			for (int j = i + 1; j < index; j++)
			{
				if (cars[i]->GetSpeed() < cars[j]->GetSpeed())
				{
					swap(cars[i], cars[j]);
				}
			}
		}
	}
	void ShowFinalRanks()
	{
		int raceIndex = 1;
		cout << "Final ranks : " << endl;
		for (int i = 0; i < index; i++)
		{
			if (cars[i]->GetFuelTank() >= length)
			{
				cout << raceIndex << ": " << cars[i]->GetName() << endl;
				raceIndex++;
			}
		}
		cout << "#######################################################\n";
	}
	void ShowWhoDidNotFinish()
	{
		int lastIndex = 1;
		cout << "Didn`t finish : " << endl;
		for (int i = index - 1; i > 0; i--)
		{
			if (cars[i]->GetFuelTank() < length)
			{
				cout << lastIndex << cars[i]->GetName() << endl;
				lastIndex++;
			}
		}
		cout << "#######################################################\n";
	}
};

