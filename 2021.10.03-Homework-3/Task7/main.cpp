#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    cin >> a >> b >> c >> d;

    for (int x = 0; x <= 1000; ++x)
    {
        if ((a * x * x * x + b * x * x + c * x + d) == 0)
        {
            cout << x << " ";
        }
    }

    return EXIT_SUCCESS;
}
