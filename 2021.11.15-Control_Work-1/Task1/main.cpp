#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    const int N = 10000;
    int k = 0;
    int n[N] = {0};
    int m[N] = {0};
    int d[N] = {0};

    cin >> k;

    for (int i = 0; i < k; ++i)
    {
        cin >> n[i] >> m[i];
    }

    for (int i = 0; i < k; ++i)
    {
        d[i] = 19 * m[i] + (n[i] + 239) * (n[i] + 366) / 2;
    }

    for (int i = 0; i < k; ++i)
    {
        cout << d[i] << endl;
    }

    return EXIT_SUCCESS;
}
