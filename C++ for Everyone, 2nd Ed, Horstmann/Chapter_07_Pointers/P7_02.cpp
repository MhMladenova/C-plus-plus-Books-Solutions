/*
Write a function
double replace_if_greater(double* p, double x)
that replaces the value to which p points with x if x is greater.
Return the old value to which p pointed.
*/

#include <iostream>
using namespace std;

double replaceIfGreater(double* p, double x)
{
    double oldValue = *p;
    if(oldValue < x)
    {
        *p = x;
    }

    return oldValue;
}

int main()
{
    double a = 13.5;
    double x = 24.0;

    double* p = &a;

    cout << "the value of the variable to which p points is: " << *p << endl;

    double resultVal = replaceIfGreater(p, x);

    cout << resultVal << endl;
    cout << "the value of the variable to which p points is: " << *p << endl;

    return 0;
}
