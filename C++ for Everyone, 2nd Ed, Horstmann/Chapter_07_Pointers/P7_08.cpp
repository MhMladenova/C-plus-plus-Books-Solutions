/*
Write a function
void reverse(char s[]) that reverses a character string.
For example, "Harry" becomes "yrraH".
*/

#include <iostream>
#include <string.h>
using namespace std;

void reverse(char str[])
{
    int strSize = strlen(str);
    int itterations = strSize / 2;
    for (int i = 0; i < itterations; i++)
    {
        char* startPtr = (str + i);
        char* endPtr = &str[strSize - 1 - i];
        char buffVar = *startPtr;
        *startPtr = *endPtr;
        *endPtr = buffVar;
    }
}

int main()
{
    char strTest[] = "Harry";
    cout << strTest << endl;
    reverse(strTest);

    cout << strTest << endl;
    return 0;
}
