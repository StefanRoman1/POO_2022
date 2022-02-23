// 2222.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#pragma warning (disable : 4996)

using namespace std;

int main()
{
    char text[100];
    char matr[100][100];
    int vect[100], i = 0;
    char* p;
    scanf("%[^\n]s", text);
    p = strtok(text, " ");
    while (p != NULL)
    {
        strcpy(matr[i], p);
        vect[i] = strlen(p);
        i++;
        p = strtok(NULL, " ");
    }
    for (int j = 0; j < i - 1; j++)
    {
        for (int k = j + 1; k < i; k++)
        {
            if (vect[j] < vect[k])
            {
                swap(vect[j], vect[k]);
                swap(matr[j], matr[k]);
            }
            else if (vect[j] == vect[k])
            {
                if (strcmp(matr[j], matr[k]) > 0)
                {
                    swap(vect[j], vect[k]);
                    swap(matr[j], matr[k]);
                }
            }
        }
    }
    for (int j = 0; j < i; j++)
    {
        cout << matr[j] << endl;
    }



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
