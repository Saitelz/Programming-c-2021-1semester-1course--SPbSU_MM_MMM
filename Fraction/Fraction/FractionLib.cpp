#include "FractionLib.h"
#include <iostream>
#include <math.h>

Fraction::Fraction() :numerator(0), denominator(1) {}
Fraction::Fraction(long long numerator, long long denominator) :numerator(numerator), denominator(denominator)
{
    this->normalize();
}
Fraction::Fraction(const Fraction& fraction) :numerator(fraction.numerator), denominator(fraction.denominator) {}
Fraction::~Fraction()
{
    this->numerator = 0;
    this->denominator = 1;
}


long long Fraction::getNumerator()
{
    return this->numerator;
}

void Fraction::setNumerator(long long numerator)
{
    this->numerator = numerator;
}

long long Fraction::getDenominator()
{
    return this->denominator;
}

void Fraction::setDenominator(long long denominator)
{
    this->denominator = denominator;
}

void Fraction::set(long long numerator, long long denominator)
{
    this->numerator = numerator;
    this->denominator = denominator;
}

long long gcd(long long a, long long b)
{
    long long res = 1;
    for (int i = 1; i <= std::max(std::abs(a), std::abs(b)); ++i)
    {
        if ((a % i == 0) && (b % i == 0))
        {
            res = i;
        }
    }
    return res;
}

void Fraction::normalize()
{
    long long g = gcd(this->numerator, this->denominator);
    this->numerator /= g;
    this->denominator /= g;
}

Fraction Fraction::reverse()
{
    return Fraction(this->denominator, this->numerator);
}

Fraction Fraction::mod()
{
    return Fraction(abs(this->numerator), abs(this->denominator));
}

Fraction Fraction::exp(long long n)
{
    Fraction tmp = (*this);

    for (int i = 0; i < n; ++i)
    {
        tmp = tmp * (*this);
    }

    return tmp;
}

bool operator==(const Fraction& a, const Fraction& b)
{
    return ((a.numerator * b.denominator) == (a.denominator * b.numerator));
}

bool operator>(const Fraction& a, const Fraction& b)
{
    int sign = ((a.denominator * b.denominator) >= 0) ? 1 : -1;

    return (((a.numerator * b.denominator - a.denominator * b.numerator) * sign) > 0);
}

bool operator<(const Fraction& a, const Fraction& b)
{
    return ((!(a == b)) && !(a > b));
}

bool operator>=(const Fraction& a, const Fraction& b)
{
    return ((a == b) || (a > b));
}

bool operator<=(const Fraction& a, const Fraction& b)
{
    return ((a == b) || (a < b));
}

Fraction operator+(const Fraction& a, const Fraction& b)
{
    Fraction tmp((a.numerator * b.denominator + b.numerator * a.denominator), (a.denominator * b.denominator));
    tmp.normalize();

    return tmp;
}

Fraction operator-(const Fraction& a, const Fraction& b)
{
    Fraction tmp((a.numerator * b.denominator - b.numerator * a.denominator), (a.denominator * b.denominator));
    tmp.normalize();

    return tmp;
}

Fraction operator*(const Fraction& a, const Fraction& b)
{
    Fraction tmp(a.numerator * b.numerator, a.denominator * b.denominator);
    tmp.normalize();

    return tmp;
}
Fraction operator*(long long a, const Fraction& b)
{
    Fraction tmp(a * b.numerator, b.denominator);
    tmp.normalize();

    return tmp;
}
Fraction operator*(const Fraction& a, long long b)
{
    Fraction tmp(a.numerator * b, a.denominator);
    tmp.normalize();

    return tmp;
}

Fraction operator/(const Fraction& a, const Fraction& b)
{
    Fraction tmp(a.numerator * b.denominator, a.denominator * b.numerator);
    tmp.normalize();

    return tmp;
}
Fraction operator/(long long a, const Fraction& b)
{
    Fraction tmp(a * b.denominator, b.numerator);
    tmp.normalize();

    return tmp;
}
Fraction operator/(const Fraction& a, long long b)
{
    Fraction tmp(a.numerator, a.denominator * b);
    tmp.normalize();

    return tmp;
}

std::ostream& operator<<(std::ostream& stream, const Fraction& fraction)
{
        stream << fraction.numerator << " / " << fraction.denominator;

    return stream;
}