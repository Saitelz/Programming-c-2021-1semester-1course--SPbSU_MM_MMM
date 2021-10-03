#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    int t = 1;

    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        t = t * 2;
    }

    cout << t;

    return EXIT_SUCCESS;
}