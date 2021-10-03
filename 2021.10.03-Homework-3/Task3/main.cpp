#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    int str = 1;
    int tstr = 1;

    cin >> n;


    for (int i = 1; i <= n; ++i)
    {
        if (tstr == 0)
        {
            cout << endl;
            ++str;
            tstr = str - 1;
        }
        else
        {
            --tstr;
        }
        cout << i << " ";
    }

    return EXIT_SUCCESS;
}