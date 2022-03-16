#include <iostream>
#include "Math.h"

using namespace std;

int main()
{
    int i1 = 1;
    int i2 = 2;
    int i3 = 3;
    double d1 = 1.2;
    double d2 = 2.3;
    double d3 = 3.4;
    char c1 = 'a';
    char c2 = 'a';
    cout << Add(i1, i2) << " " << Add(i1, i2, i3) << endl;
    cout << Add(d1, d2) << " " << Add(d1, d2, d3) << endl;
    cout << Mul(i1, i2) << " " << Mul(i1, i2, i3) << endl;
    cout << Mul(d1, d2) << " " << Mul(d1, d2, d3) << endl;
    cout << Add(5, i1, i2, i3, 10, 11) << endl;
    cout << Add(c1, c2);

}
