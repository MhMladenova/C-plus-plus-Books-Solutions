/*
 Write a function
 void sort2(double* p, double* p)
 that receives two pointers and sorts the values to which they point.
 If you call sort2(&x, &y) then x <= y after the call
*/

#include <iostream>
using namespace std;

void sort2(double* p, double* q)
{
    if (*p > *q)
    {
        double bufVar = *p;
        *p = *q;
        *q = bufVar;
    }
}

int main()
{
    double a = 3.4;
    double b = 2.5;

    cout << a << ", " << b << endl;

    sort2(&a, &b);

    cout << a << ", " << b << endl;

    return 0;
}
