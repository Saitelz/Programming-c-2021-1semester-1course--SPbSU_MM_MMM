#include <iostream>

using namespace std;


int main(int argc, char* argv[])
{
    int n = 0;
    int fact = 1;

    cin >> n;

    for (int i = 2; i <= n; ++i)
    {
        fact = fact * i;
    }

    cout << fact;

    return EXIT_SUCCESS;
}