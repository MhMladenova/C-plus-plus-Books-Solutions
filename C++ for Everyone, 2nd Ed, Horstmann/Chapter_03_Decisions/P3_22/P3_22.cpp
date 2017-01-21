/*
	Write a program that prompts the user to provide a single character from the alphabet.
	Print Vowel or Consonant, depending on the user input. If the user input is not a
	letter (between a and z or A and Z), or is a string of length > 1, print an error message. 
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter a single character from the alphabet: ";
	string ch;
	cin >> ch;

	if (ch.length() != 1 || !((ch <= "z" && ch >= "a") || (ch <= "Z" && ch >= "A")))
	{
		cout << "Input must bes a single character from the alphabet!" << endl;
	}
	else
	{
		if (ch == "a" || ch == "A" || ch == "e" || ch == "E"
			|| ch == "i" || ch == "I" || ch == "o" || ch == "O"
			|| ch == "u" || ch == "U")
		{
			cout << ch << " is a Vowel" << endl;
		}
		else
		{
			cout << ch << " is a Consonant" << endl;
		}
	}
	return 0;
}