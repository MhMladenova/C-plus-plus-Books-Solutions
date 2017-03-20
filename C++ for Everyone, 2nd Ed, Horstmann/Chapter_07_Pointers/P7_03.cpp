/*
 Write a function that computes the average value of an array of floating-point data:
 double average(double* a, int size)
 In the function, use a pointer variable, not an integer index, to traverse the array  elements
*/

#include <iostream>
using namespace std;

double average(double* a, int arrSize)
{
    double avg = 0;
    double* p = a;

    for(int i = 0; i < arrSize; i++)
    {
        avg += *p;
        p++;
    }

    return avg;
}

int main()
{
    double testArr[] {1, 2, 3, 4, 5, 6};

    double avg = average(testArr, 6);

    cout << avg << endl;

    return 0;
}
