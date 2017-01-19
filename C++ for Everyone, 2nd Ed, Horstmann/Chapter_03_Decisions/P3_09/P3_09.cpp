/*
	Write a program that translates a letter grade into a number grade. Letter grades are
	A, B, C, D, and F, possibly followed by + or –. Their numeric values are 4, 3, 2, 1,
	and 0. There is no F+ or F–. A + increases the numeric value by 0.3, a – decreases it
	by 0.3. However, an A+ has value 4.0.
		Enter a letter grade: B-
		The numeric value is 2.7.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter a letter grade: ";
	string letter;
	cin >> letter;

	float grade = 0;

	if (letter[0] == 'A')
	{
		grade = 4;
	}
	else if (letter[0] == 'B')
	{
		grade = 3;
	}
	else if (letter[0] == 'C')
	{
		grade = 2;
	}
	else if (letter[0] == 'D')
	{
		grade = 1;
	}

	if (letter[1] == '+' && letter[0] != 'A' && letter[0] != 'F')
	{
		grade += 0.3;
	}
	else if (letter[1] == '-' && letter[0] != 'F')
	{
		grade -= 0.3;
	}

	cout << "The numeric value is " << grade << endl;

	return 0;
}