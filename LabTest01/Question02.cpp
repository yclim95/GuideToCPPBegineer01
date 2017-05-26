#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char month = ' ';
    //Prompt and Read

    cout << "Enter Month (by alphabet): ";
    cin >> month;
    month = toupper(month);
    // Selection and Display
    //'j', 'f', 'm', 'a', 's', 'o', 'n', 'd'
    //'a', 'd', 'f', 'j', 'm', 'n', 'o', 's'
    switch (month)
    {
        case 'A':
            cout << "April and August" << endl;
            break;
        case 'D':
            cout << "December" << endl;
            break;
        case 'F':
            cout << "February" << endl;
            break;
        case 'J':
            cout << "January, Jun, July" << endl;
            break;
        case 'M':
            cout << "March and May" << endl;
            break;
        case 'N':
            cout << "November" << endl;
            break;
        case 'O':
            cout << "October" << endl;
            break;
        case 'S':
            cout << "September" << endl;
            break;
        default:
            cout << "Sorry, there are no months starting with that alphabet" << endl;
    }
    return 0;
}
