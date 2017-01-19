/*
  Repeat Exercise P3.7, but before reading the numbers, ask the user whether increasing/decreasing
  should be “strict” or “lenient”. In lenient mode, the sequence 3 4 4 is
  increasing and the sequence 4 4 4 is both increasing and decreasing.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num1, num2, num3;
	cout << "Enter three numbers: ";
	cin >> num1 >> num2 >> num3;

	cout << "Choose increasing/decreasing should be 'strict' or 'lenient': ";
	string type;
	cin >> type;

	if (type == "strict")
	{
		if (num1 < num2 && num2 < num3)
		{
			cout << "increasing" << endl;
		}
		else if (num1 > num2 && num2 > num3)
		{
			cout << "decreasing" << endl;
		}
		else
		{
			cout << "neither" << endl;
		}
	}
	else
	{
		if (num1 == num2 && num2 == num3)
		{
			cout << "increasing and decreasing" << endl;
		}
		else if (num1 <= num2 && num2 <= num3)
		{
			cout << "increasing" << endl;
		}
		else if (num1 >= num2 && num2 >= num3)
		{
			cout << "decreasing" << endl;
		}
		else
		{
			cout << "neither" << endl;
		}
	}

	

	return 0;
}