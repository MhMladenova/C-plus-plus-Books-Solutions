/*
	The following algorithm yields the season (Spring, Summer, Fall, or Winter) for a
	given month and day.
		If month is 1, 2, or 3, season = "Winter"
		Else if month is 4, 5, or 6, season = "Spring"
		Else if month is 7, 8, or 9, season = "Summer"
		Else if month is 10, 11, or 12, season = "Fall"
		If month is divisible by 3 and day >= 21
			If season is "Winter", season = "Spring"
			Else if season is "Spring", season = "Summer"
			Else if season is "Summer", season = "Fall"
			Else season = "Winter"
	Write a program that prompts the user for a month
	and day and then prints the season, as determined
	by this algorithm
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter number for the month: ";
	int month;
	cin >> month;

	cout << "Enter number for the day: ";
	int day;
	cin >> day;

	string season;
	if (month >= 1 && month <= 3)
	{
		season = "Winter";
	}
	else if (month >= 4 && month <= 6)
	{
		season = "Spring";
	}
	else if (month >= 7 && month <= 9)
	{
		season = "Summer";
	}
	else if (month >= 10 && month <= 12)
	{
		season = "Fall";
	}

	if ((month % 3) == 0 && day >= 21)
	{
		if (season == "Winter")
		{
			season = "Spring";
		}
		else if (season == "Spring")
		{
			season = "Summer";
		}
		else if (season == "Summer")
		{
			season = "Fall";
		}
		else
		{
			season = "Winter";
		}
	}

	cout << day << "." << month << " is during the " << season << endl;

	return 0;
}