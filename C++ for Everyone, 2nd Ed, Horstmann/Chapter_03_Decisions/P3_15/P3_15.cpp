/*
	Write a program to simulate a bank transaction. There are two bank accounts: checking
	and savings. First, ask for the initial balances of the bank accounts; reject negative
	balances. Then ask for the transactions; options are deposit, withdrawal, and transfer.
	Then ask for the account; options are checking and savings. Then ask for the
	amount; reject transactions that overdraw an account. At the end, print the balances
	of both accounts.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter balance for the 'checking' account: ";
	float balance_checking;
	cin >> balance_checking;

	if (cin.fail()) {
		cout << "Balance should be a number." << endl;
		return 1;
	}
	else if (balance_checking < 0)
	{
		cout << "Balance should not be negative." << endl;
		return 1;
	}
	else
	{
		cout << "Enter balance for the 'savings' account: ";
		float balance_savings;
		cin >> balance_savings;

		if (cin.fail()) {
			cout << "Balance should be a number." << endl;
			return 1;
		}
		else if (balance_checking < 0)
		{
			cout << "Balance should not be negative." << endl;
			return 1;
		}
		else
		{
			cout << "Choose type of transaction (deposit, withdraw or transfer): ";
			string trans;
			cin >> trans;

			cout << "Choose account (checking or savings): ";
			string current;
			cin >> current;

			cout << "Enter amount for the transaction: ";
			float amount;
			cin >> amount;

			if (current == "checking")
			{
				if (trans == "deposit")
				{
					balance_checking += amount;
				}
				else if (trans == "withdraw" || trans == "transfer")
				{
					if ((balance_checking - amount) < 0)
					{
						cout << "The transaction cannot be done. Not enough balance." << endl;
					}
					else
					{
						balance_checking -= amount;
					}

					if (trans == "transfer")
					{
						balance_savings += amount;
					}
				}
			}
			else
			{
				if (trans == "deposit")
				{
					balance_savings += amount;
				}
				else if (trans == "withdraw" || trans == "transfer")
				{
					if ((balance_savings - amount) < 0)
					{
						cout << "The transaction cannot be done. Not enough balance." << endl;
					}
					else
					{
						balance_savings -= amount;
					}

					if (trans == "transfer")
					{
						balance_checking += amount;
					}
				}
			}

			cout << "Transaction compeleted." << endl;
			cout << "'checking' account balance is " << balance_checking << endl;
			cout << "'savings' account balance is " << balance_savings << endl;
		}	
	}

	return 0;
}