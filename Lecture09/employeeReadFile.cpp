/*
Read Records from File
*/
#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
    ifstream inEmployee;
    string name = " ";
    float salary = 0.0;
    float bonus = 0.0;
    float total = 0.0;

    //Open File
    inEmployee.open("employee.txt");


    if (inEmployee.is_open())
    {
        cout << "Reading from employee.txt" << endl;
        cout << "\n---------------------------------------------------------------\n";
        cout << "Employee Name \t\tSalary(RM)\tBonus\t\tTotal" << endl;
        cout << "---------------------------------------------------------------" << endl;

        while(getline(inEmployee, name, ','))
        {
            inEmployee >> salary;
            inEmployee.ignore();
            inEmployee >> bonus;
            inEmployee.ignore();


            cout << name << "\t\tRM " << salary << "\t\tRM " << bonus;
            cout << "\t\tRM " << (salary + bonus) << endl;

            total += (salary+bonus);
        }

        cout << "Total Employee's salary:\t\t\t\tRM " << total << endl;
        //Close File
        inEmployee.close();

    }
    else
    {
        cout << "File could not be found" << endl;
    }

    return 0;
}
