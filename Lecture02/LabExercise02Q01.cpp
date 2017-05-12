/*
A program to calculate the product of three integers
*/
#include <iostream>

using namespace std;

int main()
{
    int x = 0, y = 0, z = 0;
    double result = 0;

    cout << "1st Integer : ";
    cin >> x;
    cout << "2nd Integer : ";
    cin >> y;
    cout << "3rd Integer : ";
    cin >> z;

    //Products
    result = x * y * z;

    //Display
    cout << "The result of " << x << " X " << y << " X " << z << " = " << result;

	return 0;
}
