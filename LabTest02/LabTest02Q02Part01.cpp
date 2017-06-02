#include <iostream>

using namespace std;

int main()
{
    int celcius = 0;
    double fahrenheit = 0;

    //Prompt and Read input
    //For Loop 10 times
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter temperature in Celcius (" << (i+1) << "): ";
        cin >> celcius;

        fahrenheit = celcius*1.8 + 32.0;
        cout << "Temperature in Fahrenheit: " << fahrenheit << endl << endl;
    }

    cout << "All temperature have been processed." << endl;

    return 0;
}
