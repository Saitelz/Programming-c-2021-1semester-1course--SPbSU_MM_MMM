#include "mylib.h"

using namespace std;

int a = 0;

int func(int n)
{
    if (n == 1)
    {
        int count = a;

        a = 0;

        return count;
    }

    ++a;

    return (n % 2 == 0 ? func(n / 2) : func(3 * n + 1));
}

void circle(int r)
{
    for (double i = 0; i <= 2 * r; ++i)
    {
        int h = 0;

        h = cos(asin(i / r - 1)) * r;

        for (int j = 0; j <= 2 * r; ++j)
        {
            cout << (j == r - h ? "*" : (j == r + h ? " *" : "  "));
        }

        cout << endl;
    }
}