#include <iostream>

using namespace std;

//Function Prototype

int sum(int *num1, int *num2);
int diff(int *num1, int *num2);
int prod(int *num1, int *num2);

int main()
{
    int num1 = 0, num2 = 0;

    //Prompt & Read
    cout << "Enter 2 Integers\n";
    cout << "Integer 1: ";
    cin >> num1;
    cout << "Integer 2: ";
    cin >> num2;

    //Display
    cout << "Sum: " << sum(&num1, &num2) << endl;
    cout << "Difference: " << diff(&num1, &num2) << endl;
    cout << "Product: " << prod(&num1, &num2) << endl;
    return 0;
}

//Sum
int sum(int *num1, int *num2)
{
    return (*num1) + (*num2);
}

//Difference
int diff(int *num1, int *num2)
{
    return *num1 - *num2;
}

//Product
int prod(int *num1, int *num2)
{
    return *num1 * *num2;
}
