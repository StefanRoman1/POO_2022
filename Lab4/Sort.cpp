#include "Sort.h"

using namespace std;

void Sort::InsertSort(bool ascendent)
{
	
	int i, key, j;
	for (i = 1; i < list.size(); i++)
	{
		key = list[i];
		j = i - 1;
		if (ascendent == true)
		{
			while (j >= 0 && list[j] > key)
			{
				list[j + 1] = list[j];
				j = j - 1;
			}
		}
		else
		{
			while (j >= 0 && list[j] < key)
			{
				list[j + 1] = list[j];
				j = j - 1;
			}
		}
		list[j + 1] = key;
	}
	
}

//........................................................................................

/*void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}*/
int partition(vector<int> arr, int low, int high)
{
	int pivot = arr[high]; // pivot
	int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far

	for (int j = low; j <= high - 1; j++)
	{
		// If current element is smaller than the pivot
		if (arr[j] < pivot)
		{
			i++; // increment index of smaller element
			//swap(&arr[i], &arr[j]);
		}
	}
	//swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}
void QuickSort1(vector<int> arr, int low, int high)
{
	if (low < high)
	{
		/* pi is partitioning index, arr[p] is now
		at right place */
		int pi = partition(arr, low, high);

		// Separately sort elements before
		// partition and after partition
		QuickSort1(arr, low, pi - 1);
		QuickSort1(arr, pi + 1, high);
	}
}
void Sort::QuickSort(bool ascendent)
{
	QuickSort1(list, 0, list.size()-1);
}
//.........................................................................................

void Sort::BubbleSort(bool ascendent)
{
	for (int i = 0; i < list.size()-1; i++)
	{
		for (int j = i + 1; j < list.size(); j++)
		{
			if (ascendent == true)
			{
				if (list[i] > list[j])
				{
					swap(list[i], list[j]);
				}
			}
			else
			{
				if (list[i] < list[j])
				{
					swap(list[i], list[j]);
				}
			}
		}
	}
}
//........................................................................................

void Sort::Print()
{
	cout << "Elementele listei sunt : ";
	for (auto i : list)
		cout << i << ' ';
	cout << '\n';
}

int Sort::GetElementsCount()
{
	return list.size();

}

int  Sort::GetElementFromIndex(int index)
{
	return list[index];
}

Sort::Sort(int NumarElemente, int minim, int maxim)
{
	srand(time(0));
	for (int i = 0; i < NumarElemente; i++)
	{
		list.push_back(rand() % (maxim - minim + 1) + minim);
	}
}

Sort::Sort(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		list.push_back(arr[i]);
	}
}

Sort::Sort(string sir_string)
{
	int n = sir_string.length();
	char* sir_char;
	sir_char = &sir_string[0];
	char* p;
	p = strtok(sir_char, ",");
	while (p != NULL)
	{
		list.push_back(atoi(p));
		p = strtok(NULL, ",");
	}
}

Sort::Sort(int count, ...)
{
	va_list ap;
	va_start(ap, count);
	for (int i = 0; i < count; i++)
	{
		list.push_back(va_arg(ap, int));
	}
	va_end(ap);
}