/*
	A year with 366 days is called a leap year. A year is a leap year if it is divisible by four
	(for example, 1980), except that it is not a leap year if it is divisible by 100 (for
	example, 1900); however, it is a leap year if it is divisible by 400 (for example, 2000).
	There were no exceptions before the introduction of the Gregorian calendar on
	October 15, 1582 (1500 was a leap year). Write a program that asks the user for a year
	and computes whether that year is a leap year
*/

#include <iostream>

using namespace std;

int main()
{
	cout << "Enter a year: ";
	int year;
	cin >> year;

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				cout << "Leap year." << endl;
				return 0;
			}
			cout << "Not leap year." << endl;
		}
		else
		{
			cout << "Leap year." << endl;
		}
	}
	else
	{
		cout << "Not leap year." << endl;
	}

	return 0;
}