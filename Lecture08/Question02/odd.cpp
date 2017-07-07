#include <iostream>

using namespace std;

//Function Prototype
void accept(int *num);
bool isodd(int *num);

int main()
{
    int num = 0;

    //Accept
    accept(&num);


    //Determine
    if (isodd(&num))
    {
        cout << num << " Is Odd" << endl;
    }
    else
    {
        cout << num << " Is Even" << endl;
    }
    return 0;
}


void accept(int *num)
{
    cout << "Enter a number: ";
    cin >> *num;
}

bool isodd(int *num)
{
    return *num%2 == 0 ? false : true;
}
