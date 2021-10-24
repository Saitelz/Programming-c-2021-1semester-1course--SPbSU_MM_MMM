#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    const int N = 100;
    int a[N] = { 0 };
    int n = 0;
    int sum = 0;
    int neg_p = 1;
    int min_index = 0;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    cout << "ARRAY: ";

    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }

    cout << endl << "EVEN: ";

    for (int i = 0; i < n; ++i)
    {
        if (a[i] % 2 == 0)
        {
            cout << a[i] << " ";
        }
    }

    cout << endl << "SUM: ";

    for (int i = 0; i < n; ++i)
    {
        sum += a[i];
    }

    cout << sum << endl << "PRODUCT OF NEGATIVE: ";

    for (int i = 0; i < n; ++i)
    {
        if (a[i] < 0)
        {
            neg_p *= a[i];
        }
    }

    if (neg_p == 1)
    {
        neg_p = 0;
    }

    cout << neg_p << endl << "FIRST MIN INDEX: ";

    for (int i = 1; i < n; ++i)
    {
        if (a[i] < a[min_index])
        {
             min_index = i;
        }
    }

    cout << min_index << endl << "SECOND MAX: ";

    int max = a[0];
    int second_max = a[0];

    for (int i = 1; i < n; ++i)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    for (int i = 1; i < n; ++i)
    {
        if (a[i] > second_max)
        {
            if (a[i] != max)
            {
                second_max = a[i];
            }
        }
    }

    cout << second_max << endl << "REVERSE: ";

    for (int i = n - 1; i >= 0; --i)
    {
        cout << a[i] << " ";
    }

    cout << endl << "ODD INDEXES: ";

    for (int i = 0; i < n; ++i)
    {
        if (i % 2 != 0)
        {
            cout << a[i] << " ";
        }
    }

    return EXIT_SUCCESS;
}
