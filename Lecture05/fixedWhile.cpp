#include <iostream>

using namespace std;

int main()
{
    //Initialize
    double score = 0.0, total = 0.0;
    //Counter
    int i = 0;
    //Looping
    while (i<3)
    {
        cout << "Enter your score: ";
        cin >> score;

        i++;
        total += score;
    }

    //Display
    cout << "The total score is: " << total << endl;
    return 0;
}
