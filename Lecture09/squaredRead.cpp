#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    //File Declare
    ifstream inFile;
    string number = " ", square = " ";
    //Input File
    inFile.open("squared.txt");

    //Check if File Exist
    if (inFile.is_open())
    {
        cout <<"Reading from squared.txt\n";
        cout <<"\n----------------------------------------------\n";
        cout <<"\nNumber\t\tSquare\n";
        cout <<"\n----------------------------------------------\n";

        while(getline(inFile, number, ','))
        {
           getline(inFile,square);

           cout << number << "\t\t" << square << endl;
        }
    }
    else
    {
        cout << "File not Exist" << endl;
    }
    //Close File
    inFile.close();
    return 0;
}
