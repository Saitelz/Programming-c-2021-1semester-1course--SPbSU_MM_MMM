#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    int m = 0;
    int k = 0;

    cin >> n >> m >> k;

    if ((k % n) == 0)
    {
        if ((k / n) <= m)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else if ((k % m) == 0)
    {
        if ((k / m) <= n)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }

    return EXIT_SUCCESS;
}
