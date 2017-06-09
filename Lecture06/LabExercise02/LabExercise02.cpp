#include <iostream>
#include <cmath>

using namespace std;

//Function Declaration
int cube (int counter);

int main()
{
    //Display cube of (1 - 10)
    cout << "~The result~" << endl << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Cube(" << i << ") is: " << cube(i) << endl;
    }
    return 0;
}

int cube (int counter)
{
    return pow(counter,3);
}
