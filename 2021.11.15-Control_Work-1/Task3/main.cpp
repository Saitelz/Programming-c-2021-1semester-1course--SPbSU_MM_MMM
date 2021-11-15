#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int NOK = 0;
    int NOD = 1;

    cin >> a >> b;

    int ca = a;
    int cb = b;

    while (b != 0)
    {
        a %= b;
        a ^= b;
        b ^= a;
        a ^= b;

        NOD = a;
    }

    NOK = ca * cb / NOD;

    cout << NOK;

    return EXIT_SUCCESS;
}
