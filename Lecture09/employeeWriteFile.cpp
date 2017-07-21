/*
Write Records from File
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream outEmployee;
    string name = " ";
    float salary = 0.0, bonus = 0.0;

    outEmployee.open("employee.txt", ios::out|ios::app);

    if (outEmployee.is_open())
    {
        cout << "Enter employee name: ";
        getline(cin, name);
        while (name != "-1")
        {

            cout << "Enter Employee's salary: ";
            cin >> salary;
            cout << "Enter Employee's bonus: ";
            cin >> bonus;
            cin.ignore();

            cout << name << endl;
            cout << endl;
            //Write to File
            outEmployee << name << "," << salary << "," << bonus << endl;

            cout << "Enter employee name: ";
            getline(cin, name);

        }

        outEmployee.close();
        cout << "\nRecords successfully written to employee.txt \n";
    }
    else
    {
        cout << "File could not be found" << endl;
    }
    return 0;
}
