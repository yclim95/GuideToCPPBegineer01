#include <iostream>

using namespace std;

int main()
{
    int choice = 0;
    //Prompt and Read
    cout << "1. Pepsi 2. Coke 3. Water\nPlease enter your choice: ";
    cin >> choice;

    //Looping
    while (choice <= 0 ||  choice >= 4)
    {
        cout << "\nInvalid choice!" << endl;
        cout << "Please enter again: ";
        cin >> choice;
    }
    //Selection & Display
    switch(choice)
    {
        case 1:
            cout << "\nYou choose Pepsi\nPrice: RM2.50" << endl;
            break;
        case 2:
            cout << "\nYou choose Coke\nPrice: RM2.60" << endl;
            break;
        case 3:
            cout << "\nYou choose Water\nPrice: RM1.50" << endl;
            break;
        default:
            cout << "\nInvalid Input" << endl;
    }

    return 0;
}
