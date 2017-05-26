#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int marks1 = 0, marks2 = 0, marks3 = 0;
    float total = 0.0, average = 0.0;

    //Prompt and Read
    cout << "Enter marks (%) for Assignment 1: ";
    cin >> marks1;
    cout << "Enter marks (%) for Assignment 2: ";
    cin >> marks2;
    cout << "Enter marks (%) for Assignment 3: ";
    cin >> marks3;

    //Calculate
    total = marks1 + marks2 + marks3;
    average = total/3;

    //Display
    cout << "\nAssignment1: " << abs(marks1) << "%" << endl;
    cout << "Assignment2: " << abs(marks2) << "%" << endl;
    cout << "Assignment3: " << abs(marks3) << "%" << endl;

    cout << "\nTotal marks (out of 300): " << abs(total) << endl;
    cout << "Average marks: " << abs(average) << "%" << endl;

    //If average == 40 is pass
    if (abs(average) >= 40 && abs(average) <= 100)
    {
        cout << "Pass!" << endl;
    }
    else
    {
        cout << "Fail!" << endl;
    }
    return 0;
}
