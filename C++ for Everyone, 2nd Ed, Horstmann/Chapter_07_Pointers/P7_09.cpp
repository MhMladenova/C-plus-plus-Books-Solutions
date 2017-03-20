/*
Using the strncpy and strncat functions, implement a function
void safe_concat(const char a[], const char b[], char result[], int result_maxlength)
that concatenates the strings a and b to the buffer result.
Be sure not to overrun the buffer.
It can hold result_maxlength characters, not counting the '\0' terminator. (
That is, the buffer has result_maxlength + 1 bytes available.)
*/

#include <iostream>
#include <string.h>
using namespace std;

void safeConcat(const char str1[], const char str2[], char result[], int resultMaxLength)
{
    if (strlen(str1) < resultMaxLength)
    {
        strcpy (result, str1);

        if (strlen(result) + strlen(str2)< resultMaxLength)
        {
            strcat (result, str2);
        }
    }
}

int main()
{
    char str1Test[] = "String 1 content";
    char str2Test[] = "String 2 content";

    char resultStr[100] = "";

    cout << resultStr << endl;

    safeConcat(str1Test, str2Test, resultStr, 100);

    cout << resultStr << endl;
    return 0;
}
