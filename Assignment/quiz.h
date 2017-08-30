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
  private:
    vector <string> personalities {"Introvert", "Intuitive", "Judging", "Assertive", "Introvert", "Observant",
                                    "Thinking", "Judging", "Intuitive", "Feeling", "Prospecting", "Judging",
                                    "Extrovert", "Observant", "Thinking", "Judging", "Thinking", "Feeling",
                                    "Judging", "Thinking", "Intuitive", "Turbelent", "Introvert", "Judging"
                                    "Observant", "Intuitive", "Judging", "Feeling", "Assertive", "Observant",
                                    "Extrovert", "Prospecting", "Feeling", "Extrovert", "Intuitive", "Prospecting",
                                    "Introvert", "Prospecting", "Intuitive", "Thinking", "Prospecting", "Feeling",
                                    "Assertive", "Judging", "Thinking", "Feeling", "Extrovert", "Judging",
                                    "Assertive", "Intuitve", "Intuitive", "Turbelent", "Observant", "Turbelent",
                                    "Introvert", "Prospecting", "Turbelent", "Feeling", "Intuitive,", "Extrovert"};

    vector <string> categories {"Mind", "Energy", "Tactics", "Identity", "Mind", "Energy",
                                "Nature", "Tactics", "Energy", "Nature", "Tactics", "Tactics",
                                "Mind", "Energy", "Nature", "Tactics", "Nature", "Nature",
                                "Tactics", "Nature", "Energy", "Identity", "Mind", "Tactics",
                                "Energy", "Energy", "Tactics", "Nature", "Identity", "Energy",
                                "Mind", "Tactics", "Nature", "Mind", "Energy", "Tactics",
                                "Mind", "Nature", "Energy", "Nature", "Tactics", "Nature",
                                "Identity", "Tactics", "Nature", "Nature", "Mind", "Tactics",
                                "Identity", "Energy", "Energy", "Identity", "Energy", "Identity",
                                "Mind", "Tactics", "Identity", "Nature", "Energy", "Mind"};
                                
    string personalityType = "";
    string strategyType = "";
    string personalityCode = "";
    vector <float> personalitiesTotal(8, 0);
    vector <float> categoriesTotal(4,0);
    vector <string> roles {"Analyst", "Diplomats", "Sentinels", "Explorers"};
    vector <string> strategies {"Confident Individualism", "People Mastery", "Constant Improvement", "Social Engagement"};

  public:
    void setQuestions(vector<string> & questions);
    void displayChoices(int &choice);
    void displayQuestions(vector<string> & questions, int &choice);
    vector <float> getPersonalitiesTotal();
    vector <float> getCategoriesTotal();
    vector <string> getRoles();
    vector <string> getStrategies();
    string getPersonalityType();
    string setPersonalityType(string personalityType);
    string getStrategyType();
    string setStrategyType(string strategyType);
    string getPersonalityCode();
    string setPersonalityCode(string personalityCode);
};

#endif