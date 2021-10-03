#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;

    cin >> a >> b;

    for (int i = a; i <= b; ++i)
    {
        for (int k = 0; k * k <= i; ++k)
        {
            if (k * k == i)
            {
                cout << i << " ";
            }
        }
    }

    return EXIT_SUCCESS;
}