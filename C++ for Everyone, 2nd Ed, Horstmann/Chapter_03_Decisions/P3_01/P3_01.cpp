/*
		Write a program that reads a temperature value and the letter C for Celsius or F for
	Fahrenheit. Print whether water is liquid, solid, or gaseous at the given temperature
	at sea level.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	double temp,
		t_celcius;
	string measurement,
		condition;

	cout << "Please, enter a temperature value: ";
	cin >> temp;

	if (cin.fail())
	{
		cout << "Wrong input, temperature value must be a number.";
		return 1;
	} 
	else
	{
		t_celcius = temp;
		condition = "liquid";
		cout << "Please, enter the letter C for Celsius or F for Fahrenheit";
		cin >> measurement;

		if (measurement == "F")
		{
			t_celcius = (temp - 32) / 1.8;
		}

		if (t_celcius <= 0)
		{
			condition = "ice";
		}
		else if (t_celcius >= 100)
		{
			condition = "gaseous";
		}

		cout << "water is " << condition 
			<< " at the given temperature of "
			<< temp << measurement 
			<< " at sea level." << endl;
	}

	return 0;
}