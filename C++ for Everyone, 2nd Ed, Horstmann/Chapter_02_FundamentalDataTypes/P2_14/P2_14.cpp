/*
Giving change. Implement a program that directs a cashier
how to give change. The program has two inputs: the
amount due and the amount received from the customer.
Display the dollars, quarters, dimes, nickels, and pennies
that the customer should receive in return.
*/

#include <iostream>

using namespace std;

int main()
{
	double due,
		recieved;

	cout << "Enter the amount the customer need to pay: ";
	cin >> due;
	cout << "Amount recieved from the customer: ";
	cin >> recieved;

	double change = recieved - due;
	int dollars = change;
	int cents = (change - dollars) * 100 + 0.5;

	int quarters = cents / 25;
	int dimes = (cents - quarters * 25) / 10;
	int nickels = (cents - quarters * 25 - dimes * 10) / 5;
	int pennies = (cents - quarters * 25 - dimes * 10 - nickels * 5);

	cout << "The change is: " << endl;
	cout << dollars << " dollars" << endl;
	cout << quarters << " quarters" << endl;
	cout << dimes << " dimes" << endl;
	cout << nickels << " nickels" << endl;
	cout << pennies << " pennies" << endl;

	return 0;
}