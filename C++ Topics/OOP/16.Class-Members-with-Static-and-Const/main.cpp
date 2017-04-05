#include<iostream>
#include "Person.h"
#include "SmartArray.h"
using namespace std;

int main()
{
    Person a("Ivan Ivanov", 42, 1.69, 130);
    Person b("Peter Petrov", 13, 1.42, 69);
    Person c("George Georgiev", 69, 1.13, 42);

    cout << a.getInfo() << endl;
    cout << b.getInfo() << endl;
    cout << c.getInfo() << endl;

    cout << "average age: " << Person::averagePersonAge() << endl;

    SmartArray arr = SmartArray::fromString("7 15 -10");

    arr.changeLength(4);
    arr.setElement(3, 101);

    cout << arr.toString() << endl;

    return 0;
}
