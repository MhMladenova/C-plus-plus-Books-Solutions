#include<iostream>
using namespace std;

int main() {
    bool sizesGuarantees =
    sizeof(char)	<=sizeof(short) &&
    sizeof(short)	<=sizeof(int) &&
    sizeof(int)		<=sizeof(long) &&
    sizeof(long) 	<=sizeof(long long) == 1; //in bytes

    cout << sizesGuarantees << endl;

    cout << "size of char is: " << sizeof(char) << endl;
    cout << "size of short is: " << sizeof(short) << endl;
    cout << "size of int is: " << sizeof(int) << endl;
    cout << "size of long is: " << sizeof(long) << endl;
    cout << "size of long long is: " << sizeof(long long) << endl;


    // All of these do the same thing (on a 32-bit system or a Windows system):
    //signed negative = -200;
    //signed long negative = -200;
    //signed long int negative = -200;
    int signed long negative = -200;
    cout << negative << endl;

    cout << sizeof(signed) << endl;
    cout << sizeof(signed long) << endl;
    cout << sizeof(signed long int) << endl;
    cout << sizeof(int signed long) << endl;
}
