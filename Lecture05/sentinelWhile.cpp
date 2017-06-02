#include <iostream>

using namespace std;

int main()
{
    //Initialize
    double num = 0.0, total = 0.0;

    //Prompt and Read
    cout << "Enter your score (-1 to quit): ";
    cin >> num;

    //While Loop
    while (num != -1)
    {
        total += num;
        cout << "Enter your score (-1 to quit): ";
        cin >> num;
    }

    //Display
    cout << "The total score is " << total;
}
