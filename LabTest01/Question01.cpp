#include <iostream>

using namespace std;

int main()
{
    //Prompt and read input
    int num1 = 0, num2 = 0;

    cout << "Please enter 2 numbers : ";
    cin >> num1 >> num2;

    //Selection & Display
    if (num1 < num2 )
    {
        cout << num1 << " is smaller. " << num2 << " is bigger." << endl;
    }
    else if (num1 > num2)
    {
        cout << num2 << " is smaller. " << num1 << " is bigger." << endl;
    }
    else
    {
        cout << "These numbers are equal." << endl;
    }


    return 0;
}
