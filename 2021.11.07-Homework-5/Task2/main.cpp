#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    double d = 0;

    cin >> d;

    unsigned long long* p = (unsigned long long*)&d;
    unsigned long long number = *p;

    int size = sizeof(unsigned long long) * 8;

    for (int i = 1; i <= size; ++i)
    {
        unsigned long long digit = (number & (1ll << (size - i))) >> (size - i);

        cout << digit;

        if (i % 4 == 0)
        {
            cout << " ";
        }
    }

    return EXIT_SUCCESS;
}
