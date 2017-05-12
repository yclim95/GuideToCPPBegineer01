/*
Doubles and squares a number entered by the user
*/
#include <iostream>

using namespace std;

int main()
{
    int num = 0;

    cout << "Enter a number: ";
    cin >> num;

    //Display
    cout << "Doubling " << num << " gives us " << num * 2 << endl;
    cout << "Squaring " << num << " gives us " << num * num;

	return 0;
}
