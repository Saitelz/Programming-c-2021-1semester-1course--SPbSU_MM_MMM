#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    int k = 0;
    int factn = 1;
    int factk = 1;
    int factnk = 1;

    cin >> n >> k;

    for (int i = 2; i <= n; ++i)
    {
        factn = factn * i;
    }

    for (int i = 2; i <= k; ++i)
    {
        factk = factk * i;
    }

    for (int i = 2; i <= (n - k); ++i)
    {
        factnk = factnk * i;
    }

    cout << factn / (factk * factnk) << endl;

    return EXIT_SUCCESS;
}
