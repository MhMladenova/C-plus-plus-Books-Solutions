/*
	Write a program that reads in three strings and sorts them lexicographically.
	Enter three strings: Charlie Able Baker
		Able
		Baker
		Charlie
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1, str2, str3;

	cout << "Enter three strings: ";
	cin >> str1 >> str2 >> str3;

	//if str1 is the first one
	if (str1 < str2 && str1 < str3)
	{
		cout << str1 << endl;
		if (str2 < str3)
		{
			cout << str2 << endl;
			cout << str3 << endl;
		}
		else
		{
			cout << str3 << endl;
			cout << str2 << endl;
		}
	}

	//if str2 is the first one
	if (str2 < str1 && str2 < str3)
	{
		cout << str2 << endl;
		if (str1 < str3)
		{
			cout << str1 << endl;
			cout << str3 << endl;
		}
		else
		{
			cout << str3 << endl;
			cout << str1 << endl;
		}
	}

	//if str3 is the first one
	if (str3 < str2 && str3 < str1)
	{
		cout << str3 << endl;
		if (str1 < str2)
		{
			cout << str1 << endl;
			cout << str2 << endl;
		}
		else
		{
			cout << str2 << endl;
			cout << str1 << endl;
		}
	}


	return 0;
}