#include <iostream>

using namespace std;

int main()
{
    //Variable Declaration
    bool flag = false;
    char answer = ' ';
    //Initialize series of vowels(a,e,i,o,u)
    char vowels [] = {'a', 'e', 'i', 'o', 'u'};

    //Prompt & Read a character
    cout << "Enter a character: ";
    cin >> answer;

    //Check if the character is a vowel & Display
    for (int i = 0; i < sizeof(vowels); i++)
    {
        //If match
        if (answer == vowels[i])
        {
            //Display
            cout << "The character you entered is a vowel\n";
            flag = true;
            break;
        }
    }

    //If NOT (Match)
    if (!flag)
    {
        cout << "The character is NOT a vowel!\n";
    }
    return 0;
}
