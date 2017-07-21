/*
Write to File
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    //File Declaration
    ofstream outFile;
    outFile.open("students.txt", ios::out|ios::app);

    string name = " ";
    float mark1 = 0.0, mark2 = 0.0;

    //Check if File Exist
    if (outFile.is_open())
    {
        cout << "Enter student's name (-1 to quit): ";
        getline(cin, name);

        while(name != "-1")
        {
            cout << "Enter Test 1 marks: ";
            cin >> mark1;
            cout << "Enter Test 2 marks: ";
            cin >> mark2;

            cin.ignore();

            //Write to File
            outFile << name << "," << mark1 << "," << mark2 << endl;

            cout << "\nEnter student's name (-1 to quit): ";
            getline(cin, name);
        }
        cout << "Records successfully written to students.txt..." << endl;
    }
    else
    {
        cout << "File is not Found" << endl;
    }


    //Close the File
    outFile.close();


    return 0;
}
