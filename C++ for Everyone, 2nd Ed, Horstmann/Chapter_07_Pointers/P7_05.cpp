/*
Write a function that reverses the values of an array of floating-point data:
void reverse(double* a, int size)
In the function, use two pointer variables, not integer indexes, to traverse the array elements.
*/

#include <iostream>
using namespace std;

void reverse(double*a, int arrSize)
{
    int itterations = arrSize / 2;
    for (int i = 0; i < itterations; i++)
    {
        double* startPtr = (a + i);
        double* endPtr = &a[arrSize - 1 - i];
        double buffVar = *startPtr;
        *startPtr = *endPtr;
        *endPtr = buffVar;
    }
}

int main()
{
    double testData[] {1.0, 2.0, 4.0, 5.0};
    reverse(testData, 4);

    for (int i = 0; i < 4; i++)
    {
        cout << testData[i] << ", ";
    }

    return 0;
}
