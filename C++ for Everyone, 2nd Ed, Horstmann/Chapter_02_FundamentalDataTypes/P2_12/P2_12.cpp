/*
The following pseudocode describes how to turn a string containing a ten-digit
phone number (such as "4155551212") into a more readable string with parentheses
and dashes, like this: "(415) 555-1212".
Take the substring consisting of the first three characters and surround it with "(" and ")". This is the
area code.
Concatenate the area code, the substring consisting of the next three characters, a hyphen, and the
substring consisting of the last four characters. This is the formatted number.
Translate this pseudocode into a C++ program that reads a telephone number into a
string variable, com putes the formatted number, and prints it.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string phone_input;
	cout << "Enter a ten-digit tel. number ( ex: 4155551212 ): ";
	cin >> phone_input;

	cout << "The formatted number is : ("
		<< phone_input.substr(0, 3) << ") " << phone_input.substr(3, 3) + "-" + phone_input.substr(6) << endl;

	return 0;
}