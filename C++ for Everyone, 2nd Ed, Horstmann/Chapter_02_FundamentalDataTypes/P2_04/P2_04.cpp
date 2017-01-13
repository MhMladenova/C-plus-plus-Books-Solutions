//Write a program that prompts the user for two integers and then prints
//• The sum
//• The difference
//• The product
//• The average

#include <iostream>

using namespace std;

int main()
{
	int num1,
		num2;

	cout << "Enter two integer numbers: ";
	cin >> num1 >> num2;

	cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	cout << num1 << " X " << num2 << " = " << num1 * num2 << endl;
	cout << "The avarege of " << num1 << " and " << num2 << " is " << ( num1 + num2 ) / 2.0  << endl;

	return 0;
}