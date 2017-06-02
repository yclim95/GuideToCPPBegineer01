#include <iostream>

using namespace std;

int main()
{
    //Declaration
    double marks = 0, total = 0, average = 0;
    int studentNo = 0;

    cout << "How many student's marks do you want to enter?: ";
    cin >> studentNo;

    cout << endl;
    //Loop & Prompt input (Read 5 student marks)
    for (int i = 1; i <= studentNo; i++)
    {
        cout << "Student #" << i << " marks: ";
        cin >> marks;

        total += marks;
    }

    average = total/studentNo;
    cout << "\nAverage marks of " << studentNo << " students: " << average << "%";

    return 0;
}
