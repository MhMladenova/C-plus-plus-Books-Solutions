#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Hello, my name is Hal!" << endl;
	cout << "What do you like me to do?" << endl;

	string user_input;
	getline(cin, user_input);

	cout << "I am sorry, I cannot do that." << endl;

	return 0;
}