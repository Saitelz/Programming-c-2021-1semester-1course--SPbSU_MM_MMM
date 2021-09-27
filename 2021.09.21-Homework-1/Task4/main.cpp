#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int v = 0;
    int t = 0;
    int s = 0;

    cin >> v >> t;

    s = v * t;

    if (v >= 0)
    {
        cout << s % 109 << endl;
    }
    else
    {
        if (s % 109 != 0)
        {
            cout << 109 - ((-s) % 109) << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return EXIT_SUCCESS;
}
