#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //declaration
    int num = 0;

    //Do-while loop
    do
    {
        cout << "Enter a number (0 to quite the program): ";
        cin >> num;

        cout << "It's triple is " << pow(num,3) << endl << endl;

    }while (num != 0);

    return 0;
}
