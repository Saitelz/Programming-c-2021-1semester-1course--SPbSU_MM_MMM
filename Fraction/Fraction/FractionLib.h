#pragma once
#include <iostream>


class Fraction
{
private:

    long long numerator;
    long long denominator;

public:

    Fraction();
    Fraction(long long numerator, long long denominator);
    Fraction(const Fraction& fraction);
    ~Fraction();

    long long getNumerator();
    void setNumerator(long long numerator);

    long long getDenominator();
    void setDenominator(long long denominator);

    void set(long long numerator, long long denominator);

    void normalize();

    Fraction reverse();

    Fraction mod();

    Fraction exp(long long n);


    friend bool operator==(const Fraction& a, const Fraction& b);

    friend bool operator>(const Fraction& a, const Fraction& b);
    friend bool operator<(const Fraction& a, const Fraction& b);

    friend bool operator>=(const Fraction& a, const Fraction& b);
    friend bool operator<=(const Fraction& a, const Fraction& b);

    friend Fraction operator+(const Fraction& a, const Fraction& b);
    friend Fraction operator-(const Fraction& a, const Fraction& b);

    friend Fraction operator*(const Fraction& a, const Fraction& b);
    friend Fraction operator*(const Fraction& a, long long b);
    friend Fraction operator*(long long a, const Fraction& b);

    friend Fraction operator/(const Fraction& a, Fraction& b);
    friend Fraction operator/(long long a, const Fraction& b);
    friend Fraction operator/(const Fraction& a, long long b);

    friend std::ostream& operator<<(std::ostream& stream, const Fraction& fraction);
};

