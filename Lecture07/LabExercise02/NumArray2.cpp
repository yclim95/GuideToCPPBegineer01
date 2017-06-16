#include <iostream>

using namespace std;

int main()
{
    //Variable Declaration
    int length = 0;
    //Prompt user - Length/Size of Array
    cout  << "Enter the size for the array: ";
    cin >> length;

    //Array Declaration
    int num [length] = {0};

    cout  << "\nEnter elements into the array...\n";
    //Prompt and Read Input
    for (int i = 0; i < length; i++)
    {
        cout << "Enter a num: ";
        //Store
        cin >> num[i];
    }

    //Display
    cout  << "\nDisplaying the elemements in the array...\n";
     for (int i = 0; i < length; i++)
    {
       cout << num[i] << endl;
    }

    return 0;
}
