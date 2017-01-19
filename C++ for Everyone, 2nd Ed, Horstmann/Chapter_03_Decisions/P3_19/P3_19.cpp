/*
The original U.S. income tax of 1913 was quite simple. The tax was
	• 1 percent on the first $50,000.
	• 2 percent on the amount over $50,000 up to $75,000.
	• 3 percent on the amount over $75,000 up to $100,000.
	• 4 percent on the amount over $100,000 up to $250,000.
	• 5 percent on the amount over $250,000 up to $500,000.
	• 6 percent on the amount over $500,000.
There was no separate schedule for single or married taxpayers. Write a program that
computes the income tax according to this schedule.
*/

#include <iostream>

using namespace std;

int main()
{
	cout << "Enter income: ";
	double income;
	cin >> income;

	if (cin.fail())
	{
		cout << "Wrong input\n";
		return 1;
	}
	else
	{
		double tax = income * 0.01;
		if (income > 50000 && income <= 75000)
		{
			tax = income * 0.02;
		}
		else if (income > 75000 && income <= 100000)
		{
			tax = income * 0.03;
		}
		else if (income > 100000 && income <= 250000)
		{
			tax = income * 0.04;
		}
		else if (income > 250000 && income <= 500000)
		{
			tax = income * 0.05;
		}
		else if (income > 500000)
		{
			tax = income * 0.06;
		}

		cout << "Tax for " << income << " is " << tax << endl;
	}

	return 0;
}