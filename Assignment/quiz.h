#ifndef QUIZ_H
#define QUIZ_H

#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <string>
#include <iomanip>
#include <fstream>
#include <cctype>
#include <vector>
#include "system.h"

using namespace std;

class Quiz
{
    public:
      void setQuestions(vector<string> & questions);
      void displayChoices(int &choice);
      void displayQuestions(vector<string> & questions, int &choice);
};

#endif