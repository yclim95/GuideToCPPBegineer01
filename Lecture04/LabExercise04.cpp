#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    //1. Prompt and Read
    cout << "Enter an integer: ";
    cin >> num;

    //2. Selection(Process) && Display
    //Even
    if (num % 2 == 0)
    {
        cout << "This integer is even." <<endl;
    }
    //Odd
    else
    {
        cout << "This integer is odd." <<endl;
    }

    return 0;
}
