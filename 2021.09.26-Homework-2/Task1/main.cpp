#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;

    cin >> n;

    int n1 = n / 100;
    int n2 = (n % 100);
    int n3 = n % 10;

    if ((n % 10) == 0 && (n % 100) == 0)
    {
        switch (n / 100)
        {
            case 1:
                cout << "Сто бананов";
                break;

            case 2:
                cout << "Двести бананов";
                break;

            case 3:
                cout << "Триста бананов";
                break;

            case 4:
                cout << "Четыреста бананов";
                break;

            case 5:
                cout << "Пятьсот бананов";
                break;

            case 6:
                cout << "Шестьсот бананов";
                break;

            case 7:
                cout << "Семьсот бананов";
                break;

            case 8:
                cout << "Восемьсот бананов";
                break;

            case 9:
                cout << "Девятьсот бананов";
                break;
            default:
                break;
        }
        exit(0);
    }

    switch (n / 100)
    {
        case 1:
            cout << "Сто ";
            break;

        case 2:
            cout << "Двести ";
            break;

        case 3:
            cout << "Триста ";
            break;

        case 4:
            cout << "Четыреста ";
            break;

        case 5:
            cout << "Пятьсот ";
            break;

        case 6:
            cout << "Шестьсот ";
            break;

        case 7:
            cout << "Семьсот ";
            break;

        case 8:
            cout << "Восемьсот ";
            break;

        case 9:
            cout << "Девятьсот ";
            break;
        default:
            break;
    }

    if (((n % 100) >= 10) && ((n % 100) < 20))
    {
        switch (n % 100)
        {
            case 10:
                cout << "десять бананов";
                break;

            case 11:
                cout << "одиннадцать бананов";
                break;

            case 12:
                cout << "двенадцать бананов";
                break;

            case 13:
                cout << "тренадцать бананов";
                break;

            case 14:
                cout << "четырнадцать бананов";
                break;

            case 15:
                cout << "пятнадцать бананов";
                break;

            case 16:
                cout << "шестнадцать бананов";
                break;

            case 17:
                cout << "семьнадцать бананов";
                break;

            case 18:
                cout << "восемнадцать бананов";
                break;

            case 19:
                cout << "девятнадцать бананов";
                break;

            default:
                break;
        }
    }
    else
    {
        if ((n % 10) == 0)
        {
            switch ((n % 100) / 10)
            {
                case 2:
                    cout << "двадцать бананов";
                    break;
                case 3:
                    cout << "тридцать бананов";
                    break;
                case 4:
                    cout << "сорок бананов";
                    break;
                case 5:
                    cout << "пятьдесят бананов";
                    break;
                case 6:
                    cout << "шестьдесят бананрв";
                    break;
                case 7:
                    cout << "семьдесят бананов";
                    break;
                case 8:
                    cout << "восемьдесят бананов";
                    break;
                case 9:
                    cout << "девяносто бананов";
                    break;
                default:
                    break;
            }
            exit(0);
        }
        switch ((n % 100) / 10)
        {
            case 2:
                cout << "двадцать ";
                break;
            case 3:
                cout << "тридцать ";
                break;
            case 4:
                cout << "сорок ";
                break;
            case 5:
                cout << "пятьдесят ";
                break;
            case 6:
                cout << "шестьдесят ";
                break;
            case 7:
                cout << "семьдесят ";
                break;
            case 8:
                cout << "восемьдесят ";
                break;
            case 9:
                cout << "девяносто ";
                break;
            default:
                break;
        }
        switch (n % 10)
        {
            case 1:
                cout << "один банан";
                break;
            case 2:
                cout << "два банана";
                break;
            case 3:
                cout << "три банана";
                break;
            case 4:
                cout << "четыре банана";
                break;
            case 5:
                cout << "пять бананов";
                break;
            case 6:
                cout << "шесть бананов";
                break;
            case 7:
                cout << "семь бананов";
                break;
            case 8:
                cout << "восемь бананов";
                break;
            case 9:
                cout << "девять бананов";
                break;
            default:
                break;
        }
    }

    return EXIT_SUCCESS;
}
