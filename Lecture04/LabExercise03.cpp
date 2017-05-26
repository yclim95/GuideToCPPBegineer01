#include <iostream>

using namespace std;

int main()
{
    int choice = 0;
    //Prompt and Read
    cout << "1. Pepsi 2. Coke 3. Water\nPlease enter your choice: ";
    cin >> choice;

    cout << endl;
    //Selection & Display
    switch(choice)
    {
        case 1:
            cout << "You choose Pepsi\nPrice: RM2.50" << endl;
            break;
        case 2:
            cout << "You choose Coke\nPrice: RM2.60" << endl;
            break;
        case 3:
            cout << "You choose Water\nPrice: RM1.50" << endl;
            break;
        default:
            cout << "Invalid Input" << endl;
    }

    return 0;
}
