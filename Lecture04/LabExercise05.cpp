#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float loan = 0, deposit = 0;

    //1. Prompt & Read
    cout << "Enter Loan Amount: RM";
    cin >> loan;

    cout << fixed << setprecision(2);
    //2. Selection Process
    // 10,000 - 100,000 - Valid
    if (loan >= 10000 && loan <= 100000)
    {
        if (loan >= 10000 && loan <= 24999)
        {
            deposit = loan * 0.05;
        }

        else if (loan >= 25000 && loan <= 49999)
        {
            deposit = loan * 0.15;
        }

        else
        {
            deposit = loan * 0.3;
        }

        cout << "Required deposit: RM " << deposit << endl;
    }
    // InValid
    else
    {
        cout << "Invalid loan amount!" << endl;
    }

    //3. Display

    return 0;
}
