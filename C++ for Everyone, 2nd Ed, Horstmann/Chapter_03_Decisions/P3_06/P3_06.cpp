/*
  Write a program that reads three numbers and prints “all the same” if they are all the
  same, “all different” if they are all different, and “neither” otherwise.
*/

#include <iostream>

using namespace std;

int main()
{
	int num1, num2, num3;
	cout << "Enter three numbers: ";
	cin >> num1 >> num2 >> num3;

	if (num1 == num2 && num2 == num3)
	{
		cout << "all the same" << endl;
	}
	else if (num1 != num2 && num1 != num3 && num2 != num3)
	{
		cout << "all different" << endl;
	}
	else
	{
		cout << "neither";
	}

	return 0;
}