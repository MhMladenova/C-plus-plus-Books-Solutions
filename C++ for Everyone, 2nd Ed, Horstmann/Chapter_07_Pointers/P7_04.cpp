/*
Write a function that returns a pointer to the maximum value of an array of float ing points data:
double* maximum(double* a, int size)
If size is 0, return NULL
*/

#include <iostream>
using namespace std;

double* maximum(double* a, int arrSize)
{
    double* maxElPtr = NULL;

    if (arrSize > 0)
    {
        maxElPtr = a;
        for (int i = 1; i < arrSize; i++)
        {
            if(a[i] > *maxElPtr)
            {
                maxElPtr = &a[i];
            }
        }
    }

    return maxElPtr;

}

int main()
{
    double testData[] {0, 1, 2, 3, 25, 5, 6, 7};
    double* maxElPtr = maximum(testData, 8);

    double testData[0];
    double* maxElPtr = maximum(testData, 0);

    if( maxElPtr != NULL)
    {
        cout << "max element in the array is " << *maxElPtr <<
            " and its address is " << maxElPtr << endl;
    }
    else
    {
        cout << "Empty array!";
    }


    return 0;
}
