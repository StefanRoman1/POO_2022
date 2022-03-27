#include <iostream>
#include "Number.h"

using namespace std;

int main()
{
    Number n1("1012", 10);
    Number n2("734", 10);
    Number n3("15", 10);
    printf("n1 has %d digits and it is written in base %d\n", n1.GetDigitsCount(), n1.GetBase());
    for (int tr = 0; tr < n1.GetDigitsCount(); tr++)
    {
        printf("n1[%d]=%c\n", tr, n1[tr]);
    }
    n1.Print();
    n2.Print();
    n1 = (n2 + n3 - n1) + n1;
    n1.SwitchBase(10);
    n1.Print();
    if (n1 > n2) printf("n1 is bigger than n2\n"); else printf("n2 is bigger than n1\n");
    //Number n4 = 12345;
    n1 = 2255;
    n1.Print();
    n3 += n1;
    n3.Print();
    --n1;
    n1.Print();
    n1--;
    n1.Print();



    return 0;
}

