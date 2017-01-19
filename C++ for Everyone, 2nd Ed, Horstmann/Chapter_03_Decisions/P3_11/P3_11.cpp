/*
	Write a program that takes user input describing a playing card in the following
	shorthand notation:
		A Ace
		2 ... 10 Card values
		J Jack
		Q Queen
		K King
		D Diamonds
		H Hearts
		S Spades
		C Clubs

	Your program should print the full description of the card. For example,
		Enter the card notation: QS
		Queen of Spades
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	cout << "Enter the card notation: ";
	cin >> input;

	string value_code;
	string suit_code;

	if (input.length() == 3)
	{
		value_code = input.substr(0, 2);
		suit_code = input.substr(2, 1);
	}
	else
	{
		value_code = input.substr(0, 1);
		suit_code = input.substr(1, 1);
	}

	string value;
	if (value_code == "A")
	{
		value = "Ace";
	}
	else if (value_code == "K")
	{
		value = "King";
	}
	else if (value_code == "Q")
	{
		value = "Queen";
	}
	else if (value_code == "J")
	{
		value = "Jack";
	}
	else
	{
		value = value_code;
	}

	string color = "Clubs";
	if (suit_code == "D")
	{
		color = "Diamonds";
	}
	else if (suit_code == "H")
	{
		color = "Hearts";
	}
	else if (suit_code == "S")
	{
		color = "Spades";
	}

	cout << "That card is the " << value << " of " << color << endl;

	return 0;
}