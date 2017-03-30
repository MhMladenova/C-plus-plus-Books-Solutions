#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Person
{
private:
    const int personalId;
    string name;
    int age;
public:
    Person(int personalId, string name, int age) :
        personalId(personalId), name(name), age(age)
        {
        }

    void changeName(string newName)
    {
        this->name = newName;
    }

    void changeAge(int years)
    {
        this->age += years;
    }

    string getInfo() const
    {
        stringstream info;

        info << "Name: " << this->name << "\n"
                << "Age: " << this->age << "\n"
                << "ID: " << this->personalId << "\n";

        return info.str();
    }
};


class Car
{
private:
    const string manifacturer;
    const string model;
    const int horsepower;
    Person* owner;
    string regNumber;
public:
    Car(string manifacturer, string model,
        int horsepower, Person* owner, string regNumber) :
        manifacturer(manifacturer), model(model),
        horsepower(horsepower),owner(owner), regNumber(regNumber)
        {
        }

    void changeRegistration(Person* newOwner, string newRegNumber)
    {
        this->owner = newOwner;
        this->regNumber = newRegNumber;
    }

    Person* getOwner() const
    {
        return this->owner;
    }

    string getInfo() const
    {
        stringstream info;

        info << "Registration Number: " << this->regNumber << "\n"
                << "Manufacturer: " << this->manifacturer << "\n"
                << "Model: " << this->model << "\n"
                << "Horsepower: " << this->horsepower << "\n";

        return info.str();
    }
};

void printCarInformation(const Car* car)
{
    Person* owner = car->getOwner();
    cout << "**************" << endl
    << car->getInfo() << endl
    << "***************" << endl
    << "Owner details: " << endl
    << owner->getInfo() << endl;
}

void showMenuOptions()
{
    cout << "0 - Exit" << endl
        << "1 - List all persons" << endl
        << "2 - List all registrations" << endl
        << "3 - Change person name..." << endl
        << "4 - Change person age..." << endl
        << "5 - Change car registration..." << endl
        << "6 - Generate random persons..." << endl
        << "7 - Generate random registrations..." << endl
        << "8 - Create a new person..." << endl
        << "9 - Create a new registration..." << endl
        << "10- System Information" << endl
        << "11- Export all persons to file..." << endl
        << "12- Export all registrations to file..." << endl
        << "13- Reset all data" << endl
        << "14- Save all data to file..." << endl
        << "15- Restore all data from file..." << endl
        << "16- Automated test" << endl
        << "17- List persons by start name letter..." << endl
        << "18- Persons statistics by start name letter" << endl;
}

void listAllPersons()
{
    cout << "listing all persons function" << endl;
}

void listAllRegistrations()
{
    cout << "listing all registrations function" << endl;
}

void changePersonName()
{
    cout << "changing person name function" << endl;
}

void changePersonAge()
{
    cout << "changing person age function" << endl;
}

void changeCarRegistration()
{
    cout << "changing car registration function" << endl;
}

void processUserChoice(int userChoice)
{
    switch (userChoice)
    {
        case 0:
            break;
        case 1:
            cout << "choice is 1 - List all persons" << endl;
            listAllPersons();
            break;
        case 2:
            cout << "choice is 2 - List all registrations" << endl;
            listAllRegistrations();
            break;
        case 3:
            cout << "choice is 3 - Change person name..." << endl;
            changePersonName();
            break;
        case 4:
            cout << "choice is 04 - Change person age..." << endl;
            changePersonAge();
            break;
        case 5:
            cout << "choice is 5 - Change car registration..." << endl;
            changeCarRegistration();
            break;
        default:
            cout << "Invalid input!" << endl;
            break;
    };
}



int main()
{
    int userChoice;

    do
    {
        showMenuOptions();
        cout << "--------------" << endl
            << "Select an option: ";

        cin >> userChoice;
        processUserChoice(userChoice);
    }
    while (userChoice != 0);

    int personId = 0;
    Person p(personId, "Ivan Pink", 21);

    Car c("BMW", "3 Series", 49, &p, "AU-24901");

    printCarInformation(&c);

    return 0;
}
