#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;

    cin >> x1 >> y1 >> x2 >> y2;

    if ((x1 == x2) || (y1 == y2) || (abs(x1 - x2) == abs(y1 - y2)))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return EXIT_SUCCESS;
}
