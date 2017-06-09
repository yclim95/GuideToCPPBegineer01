#include <iostream>

using namespace std;

//Function Declaration
void add10(int &x, int &y, int &z);
int multiply(int num1, int num2, int num3);

int main()
{
    //Local Declaration
    int a = 10, b = 20, c = 5, x = a, y = b, z = c;

    //Display
    //Original values
    cout << "Original values:-" << endl;
    cout << "a: " << a << "\nb: " << b << "\nc: " << c << endl << endl;

    //After (Addition) of 10
    cout << "After addition of 10:" << endl;
    add10(x, y, z);

    //Multiplication (Original)
    cout << "Multiplication of original values: " << multiply(a, b, c) << endl;

    //Multiplication(Addition of 10)
    cout << "Multiplication of original values: " << multiply(x, y, z) << endl;
    return 0;
}

void add10(int &x, int &y, int &z)
{
    x += 10;
    y += 10;
    z += 10;
    cout << "x: " << x << "\ny: " << y << "\nz: " << z << endl << endl;
}

int multiply(int num1, int num2, int num3)
{
    return num1 * num2 * num3;
}
