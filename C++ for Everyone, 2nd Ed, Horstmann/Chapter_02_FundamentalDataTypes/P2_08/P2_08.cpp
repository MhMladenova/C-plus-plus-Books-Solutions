/*
Write a program that asks the user for the lengths of the sides of a
rectangle and then prints
• The area and perimeter of the rectangle
• The length of the diagonal (use the Pythagorean theorem)
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double side1,
		side2;

	cout << "Enter the dimensions of a rectangular: ";
	cin >> side1 >> side2;

	cout << "Rectangular's perimeter is " << 2 * side1 + 2 * side2 << endl;
	cout << "Rectangular's area is " << side1 * side2 << endl;
	cout << "Rectangular's diagonal is " << sqrt(pow(side1, 2) + pow(side2, 2)) << endl;

	return 0;
}