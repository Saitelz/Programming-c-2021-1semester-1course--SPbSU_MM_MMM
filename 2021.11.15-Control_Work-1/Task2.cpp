#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0;
    int maxa = -10001;
    int mina = 10001;
    bool flag = false;

    while (cin >> a)
    {
        if (flag)
        {
            maxa = max(a, maxa);
        }
        else
        {
            mina = min(a, mina);
        }

        flag = !flag;
    }

    cout << maxa + mina;

    return EXIT_SUCCESS;
}
