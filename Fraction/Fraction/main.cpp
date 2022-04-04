#include "FractionLib.h"
#include <iostream>

using namespace std;

int main()
{
    Fraction fr1(3, 1);

    Fraction fr2(5, -2);

    cout << fr1 * fr2 << endl;
    cout << fr1 / fr2 << endl;
    cout << 1 / (3 * fr1 + 4 * fr2) << endl;
    cout << fr1.mod() << endl; //модуль числа
    cout << fr1.reverse() << endl; //обратное число

    return 0;
}