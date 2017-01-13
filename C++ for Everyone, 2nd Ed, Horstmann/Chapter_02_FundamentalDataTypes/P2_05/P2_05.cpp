/* Write a program that prompts the user for two integers and then prints
	• The distance (absolute value of the difference)
	• The maximum (the larger of the two)
	• The minimum (the smaller of the two) */

#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{

	int num1,
		num2;

	cout << "Enter two integer numbers: ";
	cin >> num1 >> num2;


	int diff = abs(num1 - num2);
	int maxNum = max(num1, num2);
	int minNum = min(num1, num2);

	cout << "The distance of " << num1 << " and " << num2 << " is " << diff << endl;
	cout << "The maximum of " << num1 << " and " << num2 << " is " << maxNum << endl;
	cout << "The minimum of " << num1 << " and " << num2 << " is " << minNum << endl;


	return 0;
}