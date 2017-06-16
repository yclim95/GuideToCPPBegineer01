#include <iostream>

using namespace std;

//Function Declaration
int sumArray(int num[], int length);


int main()
{
    //Variable Declaration
    int length = 0;
    //Prompt and READ input (Array Length)
    cout << "Enter the size for the array: ";
    cin >> length;

    //Array Declaration
    int num[length] = {0};

    cout << "\nEntering elements into the array....\n";
    //Read Number (Input)
    for (int i = 0; i < length; i++)
    {
        cout << "Enter a number: ";
        //Store
        cin >> num[i];
    }

    //Display SUM (Output)
    cout << "\nThe sum of all the element in the array is: " << sumArray(num, length) << endl;
    return 0;
}

int sumArray(int num[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += num[i];

    }

    return sum;
}
