/*
Write a program that reads a number between 1,000 and 999,999 from the user,
where the user enters a comma in the input. Then print the number without a
comma. Here is a sample dialog; the user input is in color:
Please enter an integer between 1,000 and 999,999: 23,456
23456
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string num_input;
	cout << "Please enter an integer between 1,000 and 999,999: ";
	cin >> num_input;

	int pos = num_input.length() - 4;
	cout << num_input.substr(0, pos) + num_input.substr(pos+1, 3) << endl;

	return 0;
}