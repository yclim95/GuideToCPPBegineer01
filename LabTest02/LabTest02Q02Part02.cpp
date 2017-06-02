#include <iostream>

using namespace std;

int main()
{
    int celcius = 0;
    double fahrenheit = 0;

    //Prompt and Read input
    //Do While Loop 10 times
    do
    {
        cout << "Enter temperature in Celcius (-1 to stop): ";
        cin >> celcius;

        if (celcius != -1)
        {
            fahrenheit = celcius*1.8 + 32.0;
            cout << "Temperature in Fahrenheit: " << fahrenheit << endl << endl;
        }
        else
        {
            break;
        }
    }while (celcius != -1);

    cout << "\nAll temperature have been processed." << endl;

    return 0;
}
