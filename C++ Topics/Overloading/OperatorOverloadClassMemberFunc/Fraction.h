#ifndef _FRACTION_H
#define _FRACTION_H

#include <cstdio>
#include <iostream>

class Fraction
{
	int _num = 0;
	int _denom = 1;
public:
	Fraction(int numerator = 0, int denominator = 1) : _num(numerator), _denom(denominator) {};
	~Fraction();
	inline int numerator() const { return _num; };
	inline int denominator() const { return _denom; };
	operator std::string() const;
};

#endif /* _FRACTION_H */