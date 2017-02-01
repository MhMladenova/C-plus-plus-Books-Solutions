#include "Fraction.h"

Fraction::~Fraction()
{
	_num = 0;
	_denom = 0;
}

Fraction::operator std::string() const
{
	const static int maxstring = 64;
	char s[maxstring];
	snprintf(s, maxstring, "%d/%d", _num, _denom);
	return std::string(s);
}