#include <iostream>

using namespace std;

int main()
{
    //Variable Declaration
    const int LENGTH = 5;
    int positiveCount = 0, negativeCount = 0;

    //Array Declaration
    int num [LENGTH] = {0};

    //Prompt and Read Input
    for (int i = 0; i < LENGTH; i++)
    {
        cout << "Enter a number: ";
        cin >> num[i];

        if (num[i] >= 0)
        {
            positiveCount ++;
        }
        else
        {
            negativeCount ++;
        }
    }

    //Display
    cout << "\nTotal number of +ve integers: " << positiveCount << endl;
    cout << "Total number of -ve integers: " << negativeCount << endl;

    //Control - Selection (Display)
    if (positiveCount > 0 && negativeCount == 0)
    {
        cout << "\nThere is no negative integer entered" << endl;
    }
    else if (negativeCount > 0 && positiveCount == 0)
    {
        cout << "\nThere is no positive integer entered" << endl;
    }
    else
    {

      cout << "\nThe integers entered are both positive and negative" << endl;
    }
    return 0;
}
