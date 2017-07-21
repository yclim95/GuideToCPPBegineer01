#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //File Declare
    ofstream outFile;
    //Write File
    outFile.open("squared.txt");

    //Check if File Exist
    if (outFile.is_open())
    {
        cout <<"Write to File\n";
        for (int i = 10; i <= 25; i++)
        {
            cout << i << "\t" << (i*i) << endl;
            outFile << i << "," << (i*i) << endl;
        }

        cout <<"\nSuccessfully Written\n";
    }
    else
    {
        cout << "File not Exist" << endl;
    }
    //Close File
    outFile.close();
    return 0;
}
