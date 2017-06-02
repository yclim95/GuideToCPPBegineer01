#include <iostream>

using namespace std;

int main()
{
    //Declaration
    int sum = 0, num = 0;
    cout << "Calculating the sum of 1 to n....";
    cout << "Please enter the value for n (2-250): ";
    cin >> num;

    while(num < 2 || num > 50)
    {
        cout << "Invalid input!" << endl;
        cout << "Please enter a valid value: ";
        cin >> num;
    }

    //Loop to calculate the sum of 1 to n
    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }

    cout << "The sum of 1 to " << num << " is: "  << sum;

    return 0;
}
