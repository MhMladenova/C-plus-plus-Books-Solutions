#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	const double R0 = 1075;
	const double T0 = 85;
	const double B = 3969 - 273;

	double resistance;
	cout << "Please enter the thermistor resitance: ";
	cin >> resistance;

	double temp = (( B * T0) / ( (T0 * log( resistance / R0 ) ) + B) ) - 273;

	cout << "The liquid temperatur in Celsius is " << temp << endl;

	return 0;
}