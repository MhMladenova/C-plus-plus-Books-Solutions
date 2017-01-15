/*
	Write a program that transforms numbers 1, 2, 3, …, 12
	into the corresponding month names January, February,
	March, …, December. Hint: Make a very long string "January
	February March ...", in which you add spaces such that
	each month name has the same length. Then use substr to
	extract the month you want.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string months = "January  February  March     April     May       June      July      August    September October   November  December ";

	int num_input;
	cout << "Enter integer between 1 and 12: ";
	cin >> num_input;

	int pos = num_input * 10 - 11;
	cout << num_input << " => " << months.substr(pos, 10) << endl;

	return 0;
}