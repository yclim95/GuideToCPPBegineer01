#include <iostream>

using namespace std;

int main()
{
    //Variable Declaration
    const int LENGTH = 5;
    //Array Declaration
    int num[LENGTH] = {0};

    cout << "Entering FIVE +VE integers into the array...\n";

    //Prompt and Read Input
    for (int i = 0; i < LENGTH; i++)
    {
        cout << "Enter a +ve integers: ";
        cin >> num[i];

        //Check if is >0 (Positive)
        while (num[i] < 0)
        {
            //Re-ENTER
            cout << "\nInvalid input! The value must be POSITIVE\n";
            cout << "Please re-enter: ";
            cin >> num[i];
            if (num[i] > 0) cout << endl;
        }
    }

    //Display 5 elements of POSITIVE Integers
    cout << "\nDisplaying on the +ve integers in the array:\n";
    for (int i = 0; i < LENGTH; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
    return 0;
}
