/*
Write a program that reads a number between 1,000 and 999,999 from the user and
prints it with a comma separating the thousands. Here is a sample dialog; the user
input is in color:
Please enter an integer between 1000 and 999999: 23456
23,456
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string num_input;
	cout << "Please enter an integer between 1000 and 999999: ";
	cin >> num_input;

	int pos = num_input.length() - 3;
	cout << num_input.substr(0, pos) << "," << num_input.substr(pos, 3) << endl;

	return 0;
}