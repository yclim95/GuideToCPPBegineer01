#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 6;
    //Array Declaration
    int num[SIZE] = {0};

    cout << "Entering elements into the array...\n";
    for (int i = 0; i < SIZE; i++)
    {
        //Prompt and read
        cout << "Enter a num: ";
        //Store
        cin >> num[i];
    }

    //Display (1st - last)
    cout << "\nElements from first to last:\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << num[i] << " ";
    }

    //Display (last - 1st)
    cout << "\nElements from last to first:\n";
    for (int i = 5; i >= 0; i--)
    {
        cout << num[i] << " ";
    }


    return 0;
}
