#include <iostream>

using namespace std;

//Function Declaration
void evenOrodd(int num);

int main()
{
    int num = 0;
    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter a number: ";
        cin >> num;

        //Display
        evenOrodd(num);
    }
    return 0;
}

void evenOrodd(int num)
{
   if (num % 2 == 0)
   {
       cout << "The number is even" << endl << endl;
   }
   else
   {
       cout << "The number is odd" << endl << endl;
   }
}
