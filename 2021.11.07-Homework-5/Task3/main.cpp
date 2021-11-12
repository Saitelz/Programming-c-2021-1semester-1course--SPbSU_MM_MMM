#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0;

    cin >> a;

    int size = sizeof(int) * 8;
    int sign = a >> (size - 1);

    if (sign != 0)
    {
        a = ~a;

        bool flag = false;

        for (int i = 0; !flag; ++i)
        {
            if (a & (1 << (i)))
            {
                a = a & (~(1 << (i)));
            }
            else
            {
                a = a | ((1 << (i)));

                flag = true;

                cout << a;
            }
        }
    }
    else
    {
        cout << a;
    }

    return EXIT_SUCCESS;
}
