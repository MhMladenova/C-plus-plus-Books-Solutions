/*
  Write a program that reads in three floating-point numbers and prints the largest of
  the three inputs. For example:
  Please enter three numbers: 4 9 2.5
  The largest number is 9.
*/

#include <iostream>

using namespace std;

int main()
{
	float num1, num2, num3;

	cout << "Please enter three floating-point numbers: ";
	cin >> num1 >> num2 >> num3;

	float max;
	max = num1;

	if (max < num2)
	{
		max = num2;
	}

	if (max < num3)
	{
		max = num3;
	}

	cout << "The larges number is " << max << endl;

	return 0;
}