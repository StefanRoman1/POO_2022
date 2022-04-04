#include <iostream>
#include "Template.h"

using namespace std;

float operator""_kelvin(unsigned long long x)
{
    x = x + 273.15;
    return x;
}
float operator""_Fahrenheit(unsigned long long x)
{
    x = (x * 1.8) + 3.2;
    return x;
}

int main()
{
    float a = 300_kelvin;
    float b = 120_Fahrenheit;
    cout << a << '\n' << b << '\n';
    vectorulMeu<int> v;
    v.push(1);
    v.push(2);
    v.push(3);
    v.print();
    v.remove(1);
    v.print();
    v.insert(0, 5);
    v.print();
    cout << v.contor() << endl;
    v.sort();
    v.print();
}