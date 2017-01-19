/*
	Write a program that reads in the name and salary of an employee. Here the salary
	will denote an hourly wage, such as $9.25. Then ask how many hours the employee
	worked in the past week. Be sure to accept fractional hours. Any overtime work
	(over 40 hours per week) is paid at 150 percent of the regular wage. Compute the
	pay. Print a paycheck for the employee.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Eneter employee's name: ";
	string name;
	cin >> name;

	cout << "Enter empolyee's hourly payment: ";
	float wage;
	cin >> wage;

	cout << "How manu hours did the employee work in the past week: ";
	float hours;
	cin >> hours;

	float salary = hours * wage;
	if (hours > 40)
	{
		salary += ((hours - 40) * wage / 2);
	}

	cout << "Name: " << name << endl;
	cout << "Salary: " << salary << endl;

	return 0;
}