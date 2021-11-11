#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    unsigned int a = 0;
    unsigned int n = 0;
    unsigned int m = 0;

    cin >> a >> n >> m;

    int bitn = (a & (1 << n)) >> n;
    int bitm = (a & (1 << m)) >> m;

    a = a & (~(1 << n));
    a = a & (~(1 << m));

    a = a | (bitn << m) | (bitm << n);

    cout << a << endl;

    return EXIT_SUCCESS;
}
