/*
	Write a program that reads two times in military format (0900, 1730) and prints the
	number of hours and minutes between the two times. Here is a sample run. User
	input is in color.
		Please enter the first time: 0900
		Please enter the second time: 1730
		8 hours 30 minutes
	Extra credit if you can deal with the case where the first time is later than the second:
		Please enter the first time: 1730
		Please enter the second time: 0900
		15 hours 30 minutes
*/

#include <iostream>

using namespace std;

int main()
{
	int time1,
		time2;
	int const MINUTES_IN_A_DAY = 24 * 60;
	cout << "Please enter the first time: ";
	cin >> time1;

	cout << "Please enter the second time: ";
	cin >> time2;

	int time1_hours = time1 / 100;
	int time1_in_minutes = time1 % 100 + time1_hours * 60;

	int time2_hours = time2 / 100;
	int time2_in_minutes = time2 % 100 + time2_hours * 60;

	int difference = ( time2_in_minutes - time1_in_minutes + MINUTES_IN_A_DAY) % MINUTES_IN_A_DAY;

	cout << difference / 60 << " h abd " << difference - difference / 60 * 60 << " min" << endl;

	return 0;
}

