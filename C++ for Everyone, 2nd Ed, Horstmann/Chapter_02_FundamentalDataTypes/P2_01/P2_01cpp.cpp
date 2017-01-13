//Write a program that displays the dimensions of a letter - size(8.5 × 11 inches) sheet
//of paper in millimeters.There are 25.4 millimeters per inch.Use con stants and com -
//ments in your program

#include <iostream>

using namespace std;

int main()
{
	double x;
	double y;

	cout << "Enter the dimensions of the sheet in inches\n";
	cin >> x >> y;

	double  const MM_PER_INCH = 25.4;

	cout << "The dimensions in milimeters are "
		<< x * MM_PER_INCH << " x " << y * MM_PER_INCH << endl;
	return 0;
}