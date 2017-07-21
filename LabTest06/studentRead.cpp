#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    //Variable Declaration
    string name = " ";
    float test1 = 0, test2 = 0, average = 0;
    //Open File
    ifstream inFile ("students.txt");

    cout << fixed << setprecision(1);
    //Check if File Exist
    if(inFile.is_open())
    {
        //Display to console
        cout << "Reading from students.txt\n";
        cout << "\n======================================================================\n";
        cout << "\nProgramming test scores\n\n";
        cout << "\n======================================================================\n";
        cout << "Student Name" << "\t\t" << "Test 1(%)" << "\t" << "Test 2(%)" << "\t" << "Average(%)\n";
        cout << "\n-----------------------------------------------------------------------\n";
        //Read Data from File
        while (getline(inFile, name , ','))
        {
            inFile >> test1;
            inFile.ignore();
            inFile >> test2;
            inFile.ignore();

            average = (test1 + test2)/2;



            cout << name << "\t\t" << test1 << "\t\t" << test2 << "\t\t" << average << endl;
        }
    }
    else
    {
        cout << "File is not Found" << endl;
    }




    //Close File
    inFile.close();

    return 0;
}
