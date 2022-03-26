#include <iostream>
#include "Sort.h"

using namespace std;

int main()
{
    Sort testInsertie(5, 10, 20); //nr elemente, minim, maxim
    testInsertie.Print();
    cout<<testInsertie.GetElementsCount()<<'\n';
    testInsertie.InsertSort(true);
    testInsertie.Print();
    testInsertie.InsertSort(false);
    testInsertie.Print();
    cout << "...................................................." << endl;
    int arr[5] = { 10,3,1,6,9 };
    Sort testBuble(arr,5); //un array
    testBuble.Print();
    cout << testBuble.GetElementsCount() << '\n';
    testBuble.InsertSort(true);
    testBuble.Print();
    testBuble.InsertSort(false);
    testBuble.Print();
    cout << "...................................................." << endl;
    Sort testString("12,15,16,1,3,4,6"); //un string
    testString.Print();
    testString.InsertSort(true);
    testString.Print();
    cout << "........................................................" << endl;
    Sort testVAARGS(5, 1, 6, 3, 9, 2);
    testVAARGS.Print();
    testVAARGS.BubbleSort(false);
    testVAARGS.Print();
    cout << ".................................................." << endl;
    

}
