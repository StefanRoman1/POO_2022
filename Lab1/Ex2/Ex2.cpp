// 1111.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#pragma warning(disable : 4996)

using namespace std;

int stringtoint(string n)
{
    if (n[n.size() - 1] == '\n')
    {
        n.pop_back();
    }
    cout << "a intrat " << n;
    int x = 0;
    int i = 0;
    while (i < n.size())
    {
        x += n[i] - '0'; //1230
        i++;
        x *= 10;
    }
    cout << " a iesit " << x / 10 << endl;
    return x/10;
}

int main()
{
    char n[100];
    int sum = 0;
    FILE* fisier;
    fisier = fopen("in.txt", "r");
    while (fgets(n,100,fisier))
    {
        cout << sum << endl;
        sum += stringtoint(n);
    }
    cout << sum << endl;
    fclose(fisier);
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
