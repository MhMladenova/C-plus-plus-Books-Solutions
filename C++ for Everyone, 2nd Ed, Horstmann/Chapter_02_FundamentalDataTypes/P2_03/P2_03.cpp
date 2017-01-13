//Write a program that reads a number and displays the square, cube, and fourth
//power.Use the  pow function only for the fourth power.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double num,
		numSquare,
		numCube,
		numQuod;

	cout << "Enter a number: ";
	cin >> num;

	numSquare = num * num;
	numCube = num * num * num;
	numQuod = pow(num, 4);

	cout << "The square, cube, and fourth power of " << num << " are: "
		<< numSquare << ", " << numCube << " and " << numQuod << endl;

	return 0;
}