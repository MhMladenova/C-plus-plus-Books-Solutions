#include<iostream>
using namespace std;

int main() {
    int number1 = 113;
    int number2 = 271;

    int * pointer = &number1;  //initialize a pointer to number1 => it holds the address of number1
    *pointer = 271;            //changes the value of the address that the pointer is holding => number1 = 271;
    pointer = &number2;        //changes the value of the pointer itself => it points to number2 now and holds its address
    *pointer = 113;            //changes the value of the address that the pointer is holding => number2 = 113

    cout << number1 << "(" << &number1 << ")" << endl;
    cout << number2 << "(" << &number2 << ")" << endl;
    cout << pointer << endl;

    string s = "the quick brown fox jumps over the lazy dog";
    string * objPointer = &s;
    cout << objPointer->find("quick") << endl;

    int numbers[] = {13, 42, 69};
    int * arrPointer = &numbers[0];
    int * pointerIndex1 = arrPointer + 1;
    int * pointerIndex2 = arrPointer + 2;
    cout << *arrPointer << "(" << arrPointer << ")" << endl;
    cout << *pointerIndex1 << "(" << pointerIndex1 << ")" << endl;
    cout << *pointerIndex2 << "(" << pointerIndex2 << ")" << endl;

    int * arr = numbers;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;

    return 0;
}
