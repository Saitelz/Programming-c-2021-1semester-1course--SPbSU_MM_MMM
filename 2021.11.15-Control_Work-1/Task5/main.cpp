#include <iostream>
#include <set>

using namespace std;

int main(int argc, char *argv[])
{
    int m = 0;
    int n = 0;
    cin >> m >> n;

    set<int> a = {};
    set<int> b = {};

    for (int i = 0; i < m; ++i)
    {
        int t;
        cin >> t;
        a.insert(t);
    }

    for (int i = 0; i < n; ++i)
    {
        int t;
        cin >> t;
        b.insert(t);
    }

    for (int i : a)
    {
        if (b.find(i) != b.end())
        {
            cout << i << " ";
        }
    }
    return EXIT_SUCCESS;
}