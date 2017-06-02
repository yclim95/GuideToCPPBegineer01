#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const int SQUARE = 2, CUBE = 3;

    //Deco
    cout << "-----------------------------\n";
    cout << "Number\tSquare\tCube\n";
    cout << "-----------------------------\n";
    //For Loop to display square and cubers of the 1st 20 numbers
    for (int num = 1; num <= 20; num++)
    {
        cout << num << "\t" << pow(num, SQUARE) << "\t" << pow(num, CUBE) << endl;
    }
    return 0;
}
