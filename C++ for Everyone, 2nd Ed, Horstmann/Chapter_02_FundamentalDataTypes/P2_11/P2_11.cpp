/*
The following pseudocode describes how a bookstore computes the price of an
order from the total price and the number of the books that were ordered.
Read the total book price and the number of books.
Compute the tax (7.5% of the total book price).
Compute the shipping charge ($2 per book).
The price of the order is the sum of the total book price, the tax, and the shipping charge.
Print the price of the order.
Translate this pseudocode into a C++ program.
*/

#include <iostream>

using namespace std;

int main()
{
	double total_book_price;
	int books_count;

	cout << "Enter the total book price: ";
	cin >> total_book_price;
	cout << "Enter the number of books: ";
	cin >> books_count;

	double tax = 0.075 * total_book_price;
	int shipping = 2 * books_count;

	cout << "The price of the order is "
		<< total_book_price + tax + shipping << endl;
	
	return 0;
}