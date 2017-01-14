/*
	Write a program that asks the user to input
	• The number of gallons of gas in the tank
	• The fuel efficiency in miles per gallon
	• The price of gas per gallon
	Then print the cost per 100 miles and how far the car can go with the gas in the tank.
*/

#include <iostream>

using namespace std;

int main()
{
	double tank_gas;
	cout << "Enter number of gallons of gas in the tank: ";
	cin >> tank_gas;

	double miles_per_gallon;
	cout << "Enter the fuel efficieny in miles per gallon: ";
	cin >> miles_per_gallon;

	double price;
	cout << "Enter the price of gas per gallon: ";
	cin >> price;

	//compute and print the cost per 100 miles
	cout << "The cost of fuel per 100 miles is " <<
		(100 / miles_per_gallon) * price << endl;

	//compute and print how far the car can go
	cout << "The car can reach the distance of " <<
		tank_gas * miles_per_gallon <<
		" miles with the current gas quantity in the tank." << endl;

	return 0;
}