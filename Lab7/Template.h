#pragma once
#include <iostream>
#include <algorithm>

using namespace std;

template <typename T>
class vectorulMeu
{
	T list[100];
	int count;
public:
	vectorulMeu()
	{
		count = 0;
	}
	void push(T value)
	{
		list[count++] = value;
	}
	T pop()
	{
		return list[--count];
	}
	void remove(int index)
	{
		for (int i = index; i < count; i++)
		{
			list[i] = list[i+1];
		}
		count--;
	}
	void print()
	{
		for (int i = 0; i < count; i++)
		{
			cout << list[i] << " ";
		}
		cout << '\n';
	}
	void insert(int index, T value)
	{
		for (int i = count - 1; i >= index; i--)
		{
			list[i + 1] = list[i];
		}
		list[index] = value;
		count++;
	}

	int contor()
	{
		return count;
	}

	void sort()
	{
		for (int i = 0; i < count - 1; i++)
		{
			for (int j = i; j < count; j++)
			{
				if (list[i] > list[j])
				{
					swap(list[i], list[j]);
				}
			}
		}
	}
};
