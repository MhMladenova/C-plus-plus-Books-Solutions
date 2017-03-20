/*
Implement the standard library function
int strspn(const char s[], const char t[])
that returns the length of the initial portion
of s consisting of the characters in t (in any order).
*/

#include <iostream>
#include <string.h>

using namespace std;

int myStrspn(const char str1[], const char str2[])
{
    for (int i = 0; str2[i] != '\0'; i++)
    {
        for (int j = 0; str1[j] != '\0'; j++)
        {
            if ( str2[i] == str1[j])
            {
                return j;
            }
        }
    }

    return strlen(str1);
}

int main()
{
    char str1[] = "fcba73";
    char str2[] = "1234567890";
    int i = myStrspn (str1,str2);

    cout << "The first number in str1 is at position " << i << endl;

    return 0;
}
