//Write a program that computes and displays the circumference of a letter-size (8.5 ×
//11 inches) sheet of paper and the length of its diagonal.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	// Define constants for paper size in inches
	double const PAPER_WIDTH = 8.5;
	double const PAPER_HEIGHT = 11;

	// Define a variable and calculate the circumference
	double circum = 2 * PAPER_WIDTH + 2 * PAPER_HEIGHT;

	// Define a variable and calculate the diagonal 
	double diagonal = sqrt(sqrt(PAPER_WIDTH) + sqrt(PAPER_HEIGHT));

	// Display (print to screen) the circumference and diagonal
	cout << "The circumference of a letter-sized sheet of paper is " << circum << " inches." << endl;
	cout << "Its diagonal is " << diagonal << " inches." << endl;

	return 0;
}