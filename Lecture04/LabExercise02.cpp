#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int kilowatt = 0;
    float total = 0;

    //1. Prompt
    cout << "Please enter the number of Kilowatt Hours (KWH) used: ";

    //2. Accept
     cin >> kilowatt;

    //Selection Statement
    //3. Calculates
    if (kilowatt > 1000)
    {
        total = kilowatt * 0.45;
    }
    else
    {
        total = kilowatt * 0.60;
    }

    //4. Display
    cout << fixed << setprecision(2);
    cout << kilowatt << " KWH" << endl;
    cout << "Total Electric Bill : RM " << total << endl;

    return 0;
}
