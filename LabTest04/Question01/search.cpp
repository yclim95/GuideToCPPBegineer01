#include <iostream>

using namespace std;

int main()
{
    //Variable Declaration
    float num[] = {14.5, 90.1, 21.8, 34.5, 11.0, 78.3, 30.0, 5.4, 3.1, 67.2};
    float answer = 0;
    bool flag = false;
    int category1 = 0 , category2 = 0, category3 = 0;

    //ScanRead the values in the array
    for (int i = 0; i < sizeof(num)/sizeof(num[0]); i++)
    {
        //Control - Selection
        // < 20.0
        if (num[i] < 20.0)
        {
            category1++;
        }
        // 20.0 <= x => 30.0
        if (num[i] >= 20.0 && num[i] <= 30.0)
        {
            category2++;
        }
        // >30.0
        if (num[i] > 30.0)
        {
            category3++;
        }


    }//ENDof For Loop

    //Display value
    cout << "Less than 20.0: " << category1 << endl;
    cout << "Between  20.0 and 30.0: " << category2 << endl;
    cout << "More than 30.0: " << category3 << endl;

    //Prompt and Read Input
    cout << "\nEnter a number: ";
    cin >> answer;
    cout << "Searching....";

    //Search
    for (int i = 0; i < sizeof(num)/sizeof(num[0]); i++)
    {
        //Match
        //Display
        if (num[i] == answer)
        {
            cout << "The number you entered is in the array!" << endl;
            flag = true;
            break;
        }

    }

    if (!flag)
    {
        cout << "The number you entered is NOT in the array!" << endl;
    }

    return 0;
}
