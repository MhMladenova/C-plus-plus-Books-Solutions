#include<iostream>
#include "Person.h"
#include "SmartArray.h"
using namespace std;

//http://en.cppreference.com/w/cpp/language/operators

int main() {
    //Person p("Ivan Ivanov", 42, 1.69, 130);
    Person p;

    cin >> p;
    // NOTE: We have declared this operation in Person.h and implemented it in Person.cpp
    cout << p << endl;

    SmartArray arr1(SmartArray::fromString("1 2 3"));
    SmartArray arr2(SmartArray::fromString("4 5 6"));

    // NOTE: += is a bit questionable, << would have been a better overload for this behavior (it is called an "insertion" operator and that's what is done here, the QT framework uses that),
    // Just testing another operator overload
    arr1 += arr2;

    cout << arr1.toString() << endl;
    cout << arr2.toString() << endl;

    return 0;
}
