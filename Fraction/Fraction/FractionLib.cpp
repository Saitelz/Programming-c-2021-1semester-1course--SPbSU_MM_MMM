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

void Fraction::normalize()
{
    long long gcd = 1;

    for (int i = 1; i <= std::max(std::abs(this->numerator), std::abs(this->denominator)); ++i)
    {
        if ((this->numerator % i == 0) && (this->denominator % i == 0))
        {
            gcd = i;
        }

        if(((this->numerator < 0) && (this->denominator < 0)) || (this->denominator < 0))
        {
            this->numerator *= (-1);
            this->denominator *= (-1);
        }
    }

    this->numerator /= gcd;
    this->denominator /= gcd;
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
    Fraction var = (*this);

    for (int i = 0; i < n; ++i)
    {
        var = var * (*this);
    }

    return var;
}

bool operator==(const Fraction& a, const Fraction& b)
{
    bool flag = (a.numerator * a.denominator * b.numerator * b.denominator >= 0);

    return ((abs(a.numerator) == abs(b.numerator)) && (abs(b.denominator) == abs(a.denominator)) && flag);
}

bool operator>(const Fraction& a, const Fraction& b)
{
    bool flag = false;

    if ((a.denominator * b.denominator) >= 0)
    {
        flag = true;
    }

    return (((a.numerator * b.denominator - a.denominator * b.numerator) * (int)flag) > 0);
}

bool operator<(const Fraction& a, const Fraction& b)
{
    if ((!(a == b)) && !(a > b))
    {
        return true;
    }

    return false;
}

bool operator>=(const Fraction& a, const Fraction& b)
{
    if ((a == b) || (a > b))
    {
        return true;
    }

    return false;
}

bool operator<=(const Fraction& a, const Fraction& b)
{
    if ((a == b) || (a < b))
    {
        return true;
    }

    return false;
}

Fraction operator+(const Fraction& a, const Fraction& b)
{
    Fraction var((a.numerator * b.denominator + b.numerator * a.denominator), (a.denominator * b.denominator));
    var.normalize();

    return var;
}

Fraction operator-(const Fraction& a, const Fraction& b)
{
    Fraction var(-b.numerator, b.denominator);

    return a + b;
}

Fraction operator*(const Fraction& a, const Fraction& b)
{
    Fraction var(a.numerator * b.numerator, a.denominator * b.denominator);
    var.normalize();

    return var;
}
Fraction operator*(long long a, const Fraction& b)
{
    Fraction var(a * b.numerator, b.denominator);
    var.normalize();

    return var;
}
Fraction operator*(const Fraction& a, long long b)
{
    Fraction var(a.numerator * b, a.denominator);
    var.normalize();

    return var;
}

Fraction operator/(const Fraction& a, Fraction& b)
{
    Fraction var;
    var = a * b.reverse();
    var.normalize();

    return var;
}
Fraction operator/(long long a, const Fraction& b)
{
    Fraction var(a * b.denominator, b.numerator);
    var.normalize();

    return var;
}
Fraction operator/(const Fraction& a, long long b)
{
    Fraction var(a.numerator, a.denominator * b);
    var.normalize();

    return var;
}

std::ostream& operator<<(std::ostream& stream, const Fraction& fraction)
{
        stream << fraction.numerator << " / " << fraction.denominator;

    return stream;
}