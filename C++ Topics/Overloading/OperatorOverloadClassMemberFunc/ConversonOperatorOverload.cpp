#include <string>
#include "Fraction.h"

using namespace std;

// useful for std::cout
std::ostream & operator << (std::ostream & o, const Fraction & r)
{
	return o << r.numerator() << '/' << r.denominator();
}

int main()
{
	Fraction a = 7;     // 7/1

	string s = "Fraction number as a string: ";
	s += a;
	cout << s << endl;
	
	return 0;
}