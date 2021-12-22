#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0;
    int sign = 0;
    int choice = 0;
    int capacity = 1;
    int* arr = new int[capacity] {0};
    bool exit = 0;


    cout << "List of program features:" << endl;
    cout << "0 -- Close the program" << endl;
    cout << "1 -- Print array" << endl;
    cout << "2 -- Add an element to the end of the array " << endl;
    cout << "3 -- Add an element to the beginning of the array" << endl;
    cout << "4 -- Remove the last element of the array" << endl;
    cout << "5 -- Remove the first element of the array" << endl;
    cout << "6 -- Expand the array" << endl;
    cout << "7 -- Back to the list" << endl;

    while (!exit)
    {
        cout << "Select an operation" << endl;
        cin >> choice;

        switch (choice)
        {
            case 0:

                exit = 1;
                cout << "Program closed";

                break;

            case 1:

                if (sign == 0)
                {
                    cout << "Array is empty";
                }
                else
                {
                    cout << "Array: ";

                    for (int i = 0; i < sign; ++i)
                    {
                        cout << arr[i] << " ";
                    }
                }

                cout << endl;

                break;

            case 2: case 3:

                if (sign == capacity)
                {
                    int* mass_n = new int[2 * capacity]{ 0 };

                    for (int i = 0; i < capacity; ++i)
                    {
                        mass_n[i] = arr[i];
                    }

                    delete[] arr;

                    arr = mass_n;
                    capacity *= 2;
                }
                switch (choice)
                {
                    case 2:

                        cout << "Add an element to the end of the array: ";

                        cin >> arr[sign];

                        break;

                    case 3:

                        cout << "Add an element to the beginning of the array: ";

                        for (int i = sign; i > 0; --i)
                        {
                            arr[i] = arr[i - 1];
                        }

                        cin >> arr[0];

                        break;
                }

                sign += 1;

                break;

            case 4:

                if (sign > 0)
                {
                    arr[sign] = 0;
                    sign -= 1;

                    cout << "The last element of the array has been removed" << endl;
                }
                else
                {
                    cout << "It is impossible to delete the last element because array is empty" << endl;
                }

                break;

            case 5:

                if (sign > 0)
                {
                    for (int i = 0; i < sign; ++i)
                    {
                        arr[i] = arr[i + 1];
                    }

                    sign -= 1;

                    cout << "The first element of the array has been removed" << endl;
                }
                else
                {
                    cout << "It is impossible to delete the last element because array is empty" << endl;
                }

                break;

            case 6:

                for (int i = 0; i <= (sign - 1) / 2; ++i)
                {
                    a = arr[i];
                    arr[i] = arr[sign - i - 1];
                    arr[sign - i - 1] = a;
                }

                cout << "Array has been expanded" << endl;

                break;

            case 7:

                cout << "List of program features:" << endl;
                cout << "0 -- Close the program" << endl;
                cout << "1 -- Print array" << endl;
                cout << "2 -- Add an element to the end of the array " << endl;
                cout << "3 -- Add an element to the beginning of the array" << endl;
                cout << "4 -- Remove the last element of the array" << endl;
                cout << "5 -- Remove the first element of the array" << endl;
                cout << "6 -- Expand the array" << endl;
                cout << "7 -- Back to the list" << endl;

                break;

            default:

                cout << "Unknown error. Try again" << endl;

                break;
        }

        cout << endl;
    }

    delete[] arr;

    return EXIT_SUCCESS;
}