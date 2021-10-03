#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    int z = 0;
    int p = 0;
    int m = 0;

    cin >> n;

    while (n--)
    {
        int k = 0;

        cin >> k;

        if (k == 0)
        {
            ++z;
        }
        else
            if (k > 0)
            {
                ++p;
            }
            else
            {
                ++m;
            }
    }

    cout << z << " " << p << " " << m << endl;

    return EXIT_SUCCESS;
}
