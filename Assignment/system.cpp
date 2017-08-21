#include "system.h"
#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <string>
#include <iomanip>
#include <fstream>
#include <cctype>
#include <vector>

using namespace std;

//Clear Console Screen
void clear_screen()
{
#ifdef WINDOWS
    system("CLS");
#else
    // Assume POSIX
    system("clear");
#endif
}

//Pause the console
void mySleep(int sleepMs)
{
#ifdef WINDOWS
    Sleep(sleepMs);
#else
    usleep(sleepMs * 1000); // usleep takes sleep time in us (1 millionth of a second)
#endif
}

//Exit Console
void exit()
{
    clear_screen();
    mySleep(1000);
    cout << "E";
    mySleep(1000);
    cout << "X";
    mySleep(1000);
    cout << "I";
    mySleep(1000);
    cout << "T" << endl;
    terminate();
}