#include "Fraction.h"

Fraction::Fraction() :
    nominator(0),
    denominator(0)
{
}

Fraction::Fraction (int nominator, int denominator) :
        nominator(nominator), denominator(denominator)
{
}

Fraction operator+(const Fraction &a, const Fraction &b)
{
    if (a.denominator == b.denominator)
    {
        return Fraction(a.nominator + b.nominator, a.denominator);
    }
    else
    {
        int commonDenom = a.denominator * b.denominator;

        return Fraction(a.nominator * b.denominator + b.nominator * a.denominator,
                        commonDenom);
    }
}

std::ostream& operator<<(std::ostream& stream, const Fraction fraction)
{
    stream << fraction.nominator << "/" << fraction.denominator;

    return stream;
}

std::istream& operator>>(std::istream& stream, Fraction& fraction)
{
    stream >> fraction.nominator >> fraction.denominator;

    return stream;
}

Fraction& Fraction::operator++()
{
    (*this) = (*this) + Fraction(1, 1);

    return (*this);
}

Fraction Fraction::operator++(int)
{
    Fraction valueBeforeIncrement = (*this);
    ++(*this);

    return valueBeforeIncrement;
}
