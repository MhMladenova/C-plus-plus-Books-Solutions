#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double rh,
		temp;

	const double A = 17.27;
	const double B = 237.7;

	cout << "Enter the relative humidity (between 0 and 1): ";
	cin >> rh;
	cout << "Enter the temperature (in degrees): ";
	cin >> temp;

	double f = ((A * temp) / (B + temp)) + log(rh);
	double dew = ((B * f) / (A - f));

	cout << "Dew point value is " << dew << endl;

	return 0;
}