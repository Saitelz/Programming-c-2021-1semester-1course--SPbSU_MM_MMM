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

    for (int i = 2; i <= k; ++i)
    {
        factk = factk * i;
    }

    for (int i = (n - k) + 1; i <= (n - 1); ++i)
    {
        factnk = factnk * i;
    }

    cout << n * factnk / (factk) << endl;

    return EXIT_SUCCESS;
}
