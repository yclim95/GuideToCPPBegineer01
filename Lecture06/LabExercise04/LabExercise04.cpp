#include <iostream>

using namespace std;

//Function Declaration
void add10(int x, int y, int z);
int multiply(int num1, int num2, int num3);

int main()
{
    //Local Declaration
    int a = 10, b = 20, c = 5;

    //Display
    //Original values
    cout << "Original values:-" << endl;
    cout << "a: " << a << "\nb: " << b << "\nc: " << c << endl << endl;

    //After (Addition) of 10
    cout << "After addition of 10:" << endl;
    add10(a, b, c);

    //Multiplication (Original)
    cout << "Multiplication of original values: " << multiply(a, b, c) << endl;
    return 0;
}

void add10(int x, int y, int z)
{
    cout << "x: " << x+10 << "\ny: " << y+10 << "\nz: " << z+10 << endl << endl;
}

int multiply(int num1, int num2, int num3)
{
    return num1 * num2 * num3;
}
