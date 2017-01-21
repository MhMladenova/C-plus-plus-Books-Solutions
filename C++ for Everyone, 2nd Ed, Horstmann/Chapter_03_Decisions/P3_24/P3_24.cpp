/*
  Write a program that asks the user to enter a month (1 for January, 2 for February,
  and so on) and then prints the number of days in the month. For February, print “28
  or 29 days”.
	  Enter a month: 5
	  30 days
  Do not use a separate if/else branch for each month. Use Boolean operators
*/

#include <iostream>
#include <string>
 
using namespace std;

int main()
{
	cout << "Enter a number for the month: ";
	int month;
	cin >> month;

	if (!cin.fail())
	{
		string days;
		if (month > 12 || month < 1)
		{
			cout << "Number must be between 1 and 12" << endl;
			return 1;
		}

		if (month == 2)
		{
			days = "28 or 29";
		}
		else if (month == 1 || month == 3 || month == 5
			|| month == 7 || month == 8 || month == 10 || month == 12)
		{
			days = "31";
		}
		else
		{
			days = "30" ;
		}
		cout << days << " days" << endl;
	}
	else
	{
		cout << "Wrong input!" << endl;
		return 1;
	}

	return 0;
}