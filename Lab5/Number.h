#pragma once
#include <cstring>
#include <iostream>

#pragma warning(disable : 4996)

using namespace std;

class Number
{
	int digitCount = 0;
	int base = 0;
	string value;
public:
	Number(const char* value, int base)
	{
		this->value = value;
		this->base = base;
	}
	Number(const Number& n)
	{
		digitCount = n.digitCount;
		base = n.base;
		value = n.value;
	}
	~Number()
	{
		//cout << "S-o apelat destructorul pentru " << this->GetValue() << endl;
	}

	char operator [] (int poz)
	{
		return value[poz];
	}

	string operator = (int nr)
	{
		char buff[100];
		itoa(nr, buff, 10);
		value = buff;
		return value;
	}

	Number operator + ( Number& n)
	{
		int newvalue;
		char buff[100];
		int n1 = atoi(value.c_str());
		int n2 = atoi(n.value.c_str());
		newvalue = n1 + n2;
		itoa(newvalue, buff, base);
		return Number(buff,10);

	}

	Number operator--()
	{
		value.erase(0,1);
		return Number(value.c_str(), 10);
	}

	Number operator--(int)
	{
		value.erase(value.size() - 1, 1);
		return Number(value.c_str(), 10);
	}

	Number operator += (Number& n)
	{
		int newvalue;
		char buff[100];
		int n1 = atoi(value.c_str());
		int n2 = atoi(n.value.c_str());
		n1 = n1 + n2;
		itoa(n1, buff, 10);
		return Number(buff,10);
	}

	Number operator - (Number& n)
	{
		int newvalue;
		char buff[100];
		int n1 = atoi(value.c_str());
		int n2 = atoi(n.value.c_str());
		newvalue = n1 - n2;
		itoa(newvalue, buff, base);
		return Number(buff, base);

	}

	bool operator > (Number& n)
	{
		int n1 = atoi(value.c_str());
		int n2 = atoi(n.value.c_str());
		if (n1 > n2)
		{
			return true;
		}
		return false;
	}

	int GetDigitsCount()
	{
		string sir = string(value);
		return sir.length();
	}

	int GetBase()
	{
		return base;
	}

	string GetValue()
	{
		return value;
	}

	void SwitchBase(int newBase)
	{
		base = newBase;
	}

	void Print()
	{
		cout << "Numarul are valoarea " << value << " scrisa in baza " << base << endl;
	}
};

