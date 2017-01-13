/*
Write a program that prompts the user for a radius and then prints
• The area and circumference of a circle with that radius
• The volume and surface area of a sphere with that radius
*/

#include <iostream>

using namespace std;

int main()
{
	double radius;
	cout << "Enter radius: ";
	cin >> radius;

	cout << "The area and circumference of a circle with radius " << radius << " are: "
		<< 3.14 * radius * radius << " and " << 3.14 * radius * 2 << endl;

	return 0;
}