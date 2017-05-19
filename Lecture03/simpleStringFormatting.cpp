#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string name = " ";
    int year =0, age = 0;

    // Prompt and get input
    cout << setw(35) << "Enter your name: ";
    getline(cin,name);

    cout << setw(35) << "what year were your born in?: ";
    cin >> year;

    //Calculation
    age = 2017 - year;

    //Display
    cout << "Hi " << name << "! You're " << age << " years old!" << endl;

    return 0;
}
