#include <iostream>

using namespace std;

int main()
{
    int choice;
    float num1, num2;

    cout << "**************************\n";
    cout << "*  1. Addition             *\n";
    cout << "*  2. Subtraction          *\n";
    cout << "*  3. Multiplication       *\n";
    cout << "*  4. Division             *\n";
    cout << "*  5. Quit                 *\n";
    cout << "**************************\n";

    cout << "\nEnter your choice: ";
    cin >> choice;

    cout << "\nEnter 2 numbers: ";
    cin >> num1 >> num2;

    if (choice == 4)
    {
        while (num2 == 0)
        {
            cout << "\nThe second number can't be a 0!" << endl;
            cout << "Please enter the numbers again: ";
            cin >> num1 >> num2;
        }
    }
    cout << endl;
    switch(choice)
    {
        case 1:
            cout << num1 << "+" << num2 << " is: " << num1+num2 << endl;
            break;

        case 2:
            cout << num1 << "-" << num2 << " is: " << num1-num2 << endl;
            break;

        case 3:
            cout << num1 << "*" << num2 << " is: " << num1*num2 << endl;
            break;

        case 4:
            cout << num1 << "/" << num2 << " is: " << num1/num2 << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;

    }

    return 0;
}
