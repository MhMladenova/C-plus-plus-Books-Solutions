#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <stdlib.h>

using namespace std;

class Person
{
private:
    const int personalId;
    string name;
    int age;
public:
    Person(int personalId, string name, int age) :
        personalId(personalId), name(name), age(age) {}

    void changeName(string newName)
    {
        this->name = newName;
    }

    void changeAge(int years)
    {
        this->age = years;
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
    const int id;
    const string manifacturer;
    const string model;
    const int horsepower;
    Person* owner;
    string regNumber;

public:
    Car(const int id, string manifacturer, string model,
        int horsepower, Person* owner, string regNumber) :
        id(id), manifacturer(manifacturer), model(model),
        horsepower(horsepower),owner(owner), regNumber(regNumber) {}

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
                << "Horsepower: " << this->horsepower << "\n"
                << "ID: " << this->id << "\n";

        return info.str();
    }
};

void printCarInformation(const Car* car);

void showMenuOptions();

void listAllPersons();

void listAllCarRegistrations();

int choosePerson();

void changePersonName();

void changePersonAge();

void changeCarRegistration();

void processUserChoice(int userChoice);

void generatePersons();

void genRandomCarNumber(char ( &s )[7] ,  const int len);

void generateCarRegistrations();

void createNewPerson();

bool checkExistance(int id, string type);

void createCarRergistration();

void resetAllData();

//global variables to hold the list of Persons and Cars objects
//and the data needed for their random creating

int lastPersonId = -1;
int lastCarId = -1;

vector<Person> persons;
vector<Car> cars;

const string personsFirstNames[15] {"Pesho", "Gosho", "Kiril", "Petq", "Ganka", "Kseniq", "David", "Joana", "Mihaela", "Mario", "Christian", "Putin", "Pavel", "Miro", "Zori"};
const string personsLastNames[13] {"Blue", "Purple", "Pink", "Green", "Grey", "Red", "Orange", "Red", "Brown", "Yellow", "Olive", "White", "Black"};
const string carsManifacturers[5] {"BMW", "HONDA", "KIA", "PEUGEOUT", "RENAULT"};
const string carsModels[5] {"Mod 1", "Mod 2", "Mod 3", "Mod 4", "Mod 5"};

int main()
{
    int userChoice;

    do
    {
        showMenuOptions();
        cout << "+++++++++++++++++++++++++++++++++++++++++++" << endl
            << "Select an option: ";

        cin >> userChoice;
        processUserChoice(userChoice);
    }
    while (userChoice != 0);

    return 0;
}

void showMenuOptions()
{
    cout << endl
        << "0 - Exit" << endl
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

void printMenuTitle(const string& title)
{
    cout << endl
        << "------------------------------" << endl
        << title << endl
        << "------------------------------" << endl;
}

void processUserChoice(int userChoice)
{
    switch (userChoice)
    {
        case 0:
            break;
        case 1:
            printMenuTitle("List of all registered persons");
            listAllPersons();
            break;
        case 2:
            printMenuTitle("List of all registered cars");
            listAllCarRegistrations();
            break;
        case 3:
            printMenuTitle("Change person name menu");
            changePersonName();
            break;
        case 4:
            printMenuTitle("Change person age menu");
            changePersonAge();
            break;
        case 5:
            printMenuTitle("Change car registration details menu");
            changeCarRegistration();
            break;
        case 6:
            printMenuTitle("Generate random persons menu");
            generatePersons();
            break;
        case 7:
            printMenuTitle("Generate random registrations menu");
            generateCarRegistrations();
            break;
        case 8:
            printMenuTitle("Create a new person menu");
            createNewPerson();
            break;
        case 9:
            printMenuTitle("Create a new registration menu");
            createCarRergistration();
            break;
        case 13:
            printMenuTitle("Resetting all data...");
            resetAllData();
            break;
        default:
            cout << "Invalid input!" << endl;
            break;
    };
}

void printCarInformation(const Car* car)
{
    Person* owner = car->getOwner();
    cout << "**************" << endl
    << car->getInfo() << endl
    << "--------------" << endl
    << "Owner details: " << endl
    << owner->getInfo() << endl;
}

void listAllPersons()
{
    if(persons.size())
    {
        for (int i=0; i < persons.size(); i++)
        {
            cout << persons.at(i).getInfo() << endl;
            cout << "---------------------" << endl;
        }
    }
    else
    {
        cout << "Persons list is empty!!!" << endl;
    }
}

void listAllCarRegistrations()
{
    if(cars.size())
    {
        for (int i=0; i < cars.size(); i++)
        {
            printCarInformation(&cars.at(i));
        }
    }
    else
    {
        cout << "Cars registrations list is empty!!!" << endl;
    }
}

int choosePerson()
{
    int id;
    bool exist = true;

    do
    {
        if(!exist)
        {
            cout << "There is no person with this id. Please enter new id: ";
        }
        cin >> id;
        exist = checkExistance(id, "persons");
    }
    while (!exist);

    return id;
}

void changePersonName()
{
    cout << "Enter person's id: ";
    int id = choosePerson();

    string firstName;
    string lastName;

    cout << "Enter a new first name: ";
    cin >> firstName;

    cout << "Enter a new last name: ";
    cin >> lastName;

    persons.at(id).changeName(firstName + " " + lastName);
}

void changePersonAge()
{
    cout << "Enter person's id: ";
    int id = choosePerson();

    int age;

    cout << "Enter a new age: ";
    cin >> age;

    persons.at(id).changeAge(age);
}

void changeCarRegistration()
{
    int id;
    bool exist = true;

    cout << "Enter car id: ";
    do
    {
        if(!exist)
        {
            cout << "There is no car with this id. Please enter new id: ";
        }
        cin >> id;
        exist = checkExistance(id, "cars");
    }
    while (!exist);

    cout << "Enter new person's id: ";
    int ownerId = choosePerson();

    string carNumber;

    cout << "Enter a new car number: ";
    cin >> carNumber;

    cars.at(id).changeRegistration(&persons.at(ownerId), carNumber);
}

void generatePersons()
{
    cout << "Enter number of random persons to generate:" << endl;

    int num = 0;
    cin >> num;

    for (int i=0; i < num; i++)
    {
        persons.push_back(Person( ++lastPersonId, personsFirstNames[rand() % 15] + " " + personsLastNames[rand() % 13], rand() % 50 + 18));
    }
}

void genRandomCarNumber(char ( &s )[7] ,  const int len) {
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (int i = 0; i < len; ++i) {
        s[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
    }

    s[len] = 0;
}

void generateCarRegistrations()
{
    if(persons.size() == 0)
    {
            cout << "There are no registered persons. You should first register owners details!" << endl;
    }
    else
    {
        cout << "Enter number of random cars to generate:" << endl;

        int num = 0;
        cin >> num;

        for (int car=0; car < num; car++)
        {
            char carNumber[7];
            genRandomCarNumber(carNumber, 6);
            cars.push_back(Car(++lastCarId, carsManifacturers[rand() % 5], carsModels[rand() % 5], rand() % 60 + 40, &persons.at(rand() % persons.size()),carNumber));
        }
    }
}

void createNewPerson() {
    string firstName;
    string lastName;
    int age;

    cout << "Enter first name: ";
    cin >> firstName;

    cout << "Enter last name: ";
    cin >> lastName;

    cout << "Enter age: ";
    cin >> age;

    persons.push_back(Person( ++lastPersonId, firstName + " " + lastName, age));
}

bool checkExistance(int id, string type)
{
    if(type == "persons")
    {
        if(id < 0 || id > persons.size() - 1)
        {
            return false;
        }
        return true;
    }
    else
    {
        if(id < 0 || id > cars.size() - 1)
        {
            return false;
        }
        return true;
    }
}

void createCarRergistration() {
    string manifacturer;
    string model;
    int horsepower;
    int ownerId;
    string carNumber;

    cout << "Enter manifacturer: ";
    cin >> manifacturer;

    cout << "Enter model: ";
    cin >> model;

    cout << "Enter horse power: ";
    cin >> horsepower;

    cout << "Enter owner's id: ";
    int id = choosePerson();

    cout << "Enter car number: ";
    cin >> carNumber;

    cars.push_back(Car(++lastCarId, manifacturer, model, horsepower, &persons.at(ownerId),carNumber));
}

void resetAllData()
{
    lastPersonId = -1;
    lastCarId = -1;

    persons.clear();
    cars.clear();
}

