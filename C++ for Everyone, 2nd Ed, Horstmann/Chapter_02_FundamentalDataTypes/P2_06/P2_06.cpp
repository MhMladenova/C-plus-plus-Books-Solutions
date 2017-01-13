/*
Write a program that prompts the user for a measurement in meters and then
con verts it to miles, feet, and inches.
*/

#include <iostream>

using namespace std;

int main()
{
	double meters;

	cout << "Enter a measurement in meteres: ";
	cin >> meters;

	double const METER_TO_MILE = 0.000621371192;
	double const METER_TO_FEET = 3.2808399;
	double const METER_TO_INCH = 39.3700787;

	cout << meters << " meters = " << meters * METER_TO_MILE << " miles" << endl;
	cout << meters << " meters = " << meters * METER_TO_FEET << " feet" << endl;
	cout << meters << " meters = " << meters * METER_TO_INCH << " inches" << endl;

	return 0;
}