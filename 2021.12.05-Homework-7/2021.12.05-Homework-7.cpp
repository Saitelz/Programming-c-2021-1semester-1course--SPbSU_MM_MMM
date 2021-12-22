#include "mylib.h"

using namespace std;

int main(int argc, char* argv[])
{

    int n = 0;

    cin >> n;

    cout << func(n) << endl;

    int r = 0;

    cin >> r;

    circle(r);

    return EXIT_SUCCESS;
}