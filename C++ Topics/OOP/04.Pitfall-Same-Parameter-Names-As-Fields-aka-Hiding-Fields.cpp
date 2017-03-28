#include<iostream>
#include<string>
using namespace std;

class Person
{
    public:
    string name;
    int age = 0;
    double heightMeters = 0;

    //NOTE: bad practice because of the doubled copying of the parameters
    //Hiding fields preview
    Person(string name, int age, double heightMeters)
    {
        name = name;
        age = age;
        heightMeters = heightMeters;
    }

    // Correct way (for using constructor body) - explicitly accessing the fields through the "this" pointer
    //Person(string name, int age, double heightMeters) {
    //    this->name = name;
    //    this->age = age;
    //    this->heightMeters = heightMeters;
    //}
};

void printPersonInfo(Person person)
{
    cout << "name: " << person.name << ", age: " << person.age
        << ", height: " << person.heightMeters
        << endl;
}

int main()
{
    printPersonInfo(Person("Just Name", 42, 1.3));
    //prints name: "", age: 0, height: 0

    return 0;
}
