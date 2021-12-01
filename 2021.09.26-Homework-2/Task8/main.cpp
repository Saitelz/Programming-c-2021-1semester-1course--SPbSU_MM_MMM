#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;

    cin >> a >> b >> c;

    if ((c >= a) & (c >= b) & (c < a + b))
    {
        if (c * c < a * a + b * b)
        {
            cout << "acute";
        }
        else if (c * c == a * a + b * b)
        {
            cout << "right";
        }
        else
        {
            cout << "obtuse";
        }
    }
    else if ((a >= b) & (a >= c) & (a < b + c))
    {
        if (a * a < b * b + c * c)
        {
            cout << "acute";
        }
        else if (a * a == b * b + c * c)
        {
            cout << "right";
        }
        else
        {
            cout << "obtuse";
        }
    }
    else if ((b >= a) & (b >= c) & (b < a + c))
    {
        if (b * b < a * a + c * c)
        {
            cout << "acute";
        }
        else if (b * b == a * a + c * c)
        {
            cout << "right";
        }
        else
        {
            cout << "obtuse";
        }
    }
    else
    {
        cout << "impossible";
    }

    return EXIT_SUCCESS;
}
