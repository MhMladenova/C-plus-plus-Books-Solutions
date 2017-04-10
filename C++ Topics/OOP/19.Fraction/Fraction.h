#include<ostream>
#include<istream>

class Fraction {
private:
    int nominator;
    int denominator;
public:
    Fraction();

    Fraction(int nominator, int denominator);

    friend Fraction operator+(const Fraction &a, const Fraction &b);

    friend std::ostream& operator<<(std::ostream& stream, const Fraction fraction);
    friend std::istream& operator>>(std::istream& stream, Fraction& fraction);

    //Prefix operator ++fraction
    Fraction& operator++();

    //Postfix operator fraction++
    Fraction operator++(int);
};


