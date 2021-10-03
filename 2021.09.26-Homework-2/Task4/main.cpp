#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int x = 0;

    cin >> a >> b >> c >> d;

    x = (-b / a);

    if (((a * x + b) == 0) && ((c * x + d) != 0))
    {
        cout << x;
    }
    else
        if (((c * x + d) == 0) || ((a * x + b) != 0))
        {
            cout << "NO";
        }
        else
        {
            cout << "INF";
        }

    return EXIT_SUCCESS;
}
