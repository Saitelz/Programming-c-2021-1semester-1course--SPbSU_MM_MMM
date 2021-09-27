#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;

    cin >> n;

    n1 = n / 100;
    n2 = n / 10 - (n / 100) * 10;
    n3 = n % 10;

    cout << n1 + n2 + n3 << endl;

    return EXIT_SUCCESS;
}
