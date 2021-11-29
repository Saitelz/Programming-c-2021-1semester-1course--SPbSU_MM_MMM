#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    const int N = 10000;
    int n = 0;
    int a[N] = {0};
    int maxa = -1001;
    int mina = 1001;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];

        maxa = max(maxa, a[i]);
        mina = min(mina, a[i]);
    }

    for (int i = 0; i < n; ++i)
    {
        if (a[i] == maxa)
        {
            a[i] = mina;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }

    return EXIT_SUCCESS;
}