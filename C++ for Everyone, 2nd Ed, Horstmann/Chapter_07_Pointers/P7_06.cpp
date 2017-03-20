/*
Implement the strncpy function of the standard library.
*/

#include <iostream>
#include <string.h>
using namespace std;

char* myStrncpy ( char* dest, const char* src, size_t num )
{
    size_t i;

    for (i = 0; i < num && src[i] != '\0'; i++)
        dest[i] = src[i];
    for ( ; i < num; i++)
        dest[i] = '\0';

    return dest;
}

int main()
{
    char str1[]= "Checkin my strncpy function";
    char str2[40] = "";

    cout << str1 << endl;
    cout << str2 << endl;

    myStrncpy ( str2, str1, sizeof(str2) );

    cout << str1 << endl;
    cout << str2 << endl;

    return 0;
}
