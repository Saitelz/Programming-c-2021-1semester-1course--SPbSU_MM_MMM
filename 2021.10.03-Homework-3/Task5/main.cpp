#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int x = 0;

    cin >> x;

    for (int i = 1; i <= x; ++i)
    {
        if ((x % i) == 0)
        {
            cout << i << " ";
        }
    }

    return EXIT_SUCCESS;
}
