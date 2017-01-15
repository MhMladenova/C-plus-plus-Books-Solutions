/*
	Consider the following circuit.
	   R1
	   |
	R2   R3

	Write a program that reads the resistances of the three resistors and computes the
	total resistance, using Ohm’s law
*/

#include <iostream>

using namespace std;

int main()
{
	double r1, r2, r3;

	cout << "Enter the resistence of the tree resistors: ";
	cin >> r1 >> r2 >> r3;

	double r123 = r1 + (r2 * r3 / (r2 + r3));

	cout << "The total resistance is " << r123 << endl;

	return 0;
}