#include "NumberList.h"
#include <iostream>
#include <algorithm>

void NumberList::Init()
{
	count = 0;
}

bool NumberList::Add(int x)
{
	numbers[count] = x;
	count++;
	if (count >= 10)
	{
		return false;
	}
	return true;
}

void NumberList::Sort()
{
	int i, j;
	for (i = 0; i < count; i++)
	{
		for (j = i + 1; j < count - 1; j++)
		{
			if (numbers[i] > numbers[j])
			{
				std::swap(numbers[i], numbers[j]);
			}
		}
	}
}

void NumberList::Print()
{
	for (int i = 0; i < count; i++)
	{
		std::cout << numbers[i] << " ";
	}
	std::cout << std::endl;
}
