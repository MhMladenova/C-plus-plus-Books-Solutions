#include<iostream>
using namespace std;

int main() {
    cout << 42 << " " << endl   //decimal
        << 052 << " " << endl   //octal
        << 0x2a << " " << endl  //hexadecimal
        << 0x2A << " " << endl  //hexadecimal
        << 0.42 << " " << endl  //floating point literals are double by default
        << .42f << " " << endl  //floating point literals with f is a float literal
        << 42e-2 << " " << endl //floating point in an exponential way

    cout << 2000000000 << endl
        << -2000000000 << endl
        << 4000000000UL << endl //unsigned long long
        << 5000000000LL << endl //NOTE: LL is guaranteed in C++11
        << 'Z' << endl          //character literals
        << true << endl;        //boolean literals

    return 0;
}
