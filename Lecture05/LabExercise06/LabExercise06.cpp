#include <iostream>

using namespace std;

int main()
{
    //Declaration
    double marks = 0, total = 0, average = 0;
    const int STUDENTNO = 5;

    //Loop & Prompt input (Read 5 student marks)
    for (int i = 1; i <= STUDENTNO; i++)
    {
        cout << "Student #" << i << " marks: ";
        cin >> marks;

        total += marks;
    }

    average = total/STUDENTNO;
    cout << "\nAverage marks of " << STUDENTNO << " students: " << average << "%";

    return 0;
}
