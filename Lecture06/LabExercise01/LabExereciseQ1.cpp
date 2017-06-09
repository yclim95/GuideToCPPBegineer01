#include <iostream>

using namespace std;

//Function Declaration
int sum(int num1, int num2);
int difference(int num1, int num2);
int product(int num1, int num2);

//Main Begin
int main()
{
    int num1 = 0, num2 = 0;
    //Prompt & Read
    cout << "Please enter the first integer: ";
    cin >> num1;

    cout << "Please enter the second integer: ";
    cin >> num2;

    //Display
    cout << "\nThe result of addition is: " << sum(num1,num2) << endl;
    cout << "The result of subtraction is: " << difference(num1,num2) << endl;
    cout << "The result of multiplication is: " << product(num1,num2) << endl;
    return 0;
}

int sum(int num1, int num2)
{
    return num1 + num2;
}

int difference(int num1, int num2)
{
    return num1 - num2;
}

int product(int num1, int num2)
{
    return num1 * num2;
}
