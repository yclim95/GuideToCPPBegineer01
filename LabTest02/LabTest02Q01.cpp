#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double amount = 0, total = 0;

    //Prompt and Read
    cout << fixed << setprecision(2);
    cout << "Please enter Payroll amount for the month of June (-1 to quit the program):\n\n";
    //While Loop
    while (amount != -1)
    {
        cout << "RM ";
        cin >> amount;

        if (amount > 0)
        {
            total += amount;
        }
    }

    //Display
    cout << "\n\nTotal payroll amount: " << "RM" << total << endl;

    return 0;
}
