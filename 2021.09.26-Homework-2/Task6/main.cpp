#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int CorQ1 = 0;
    int CorQ2 = 0;
    int CorF1 = 0;
    int CorF2 = 0;

    cin >> CorQ1 >> CorQ2 >> CorF1 >> CorF2;

    if ((CorQ1 == CorF1) || (CorQ2 == CorF2) || (abs(CorQ1 - CorF1) == abs(CorQ2 - CorF2)))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return EXIT_SUCCESS;
}
