#pragma once
#include <vector>
#include <iostream>
#include <cstring>
#include <cstdarg>

#pragma warning(disable:4996)

using namespace std;

class Sort
{
public:

	vector<int> list;

	Sort(int NumarElemente, int minim, int maxim);
	
	Sort(int arr[], int n);
	
	Sort(string sir_string);
	
	Sort(int count, ...);
	
	void InsertSort(bool ascendent);
	void QuickSort(bool ascendent);
	void BubbleSort(bool ascendent);
	void Print();
	int  GetElementsCount();
	int  GetElementFromIndex(int index);
};

