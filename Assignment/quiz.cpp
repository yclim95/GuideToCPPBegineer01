#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <string>
#include <iomanip>
#include <fstream>
#include <cctype>
#include <vector>
#include "system.h"
#include "quiz.h"

using namespace std;

void Quiz::setQuestions(vector<string> &questions)
{
  questions.push_back("You find it difficult to introduce yourself to other people.");
  questions.push_back("You often get so lost in thoughts that you ignore or forget your surroundings.");
  questions.push_back("You try to respond to your e-mails as soon as possible and cannot stand a messy inbox.");
  questions.push_back("You find it easy to stay relaxed and focused even when there is some pressure.");
  questions.push_back("You do not usually initiate conversations.");
  questions.push_back("You rarely do something just out of sheer curiosity.");
  questions.push_back("You feel superior to other people.");
  questions.push_back("Being organized is more important to you than being adaptable.");
  questions.push_back("You are usually highly motivated and energetic.");
  questions.push_back("Winning a debate matters less to you than making sure no one gets upset.");
  questions.push_back("You often feel as if you have to justify yourself to other people.");
  questions.push_back("Your home and work environments are quite tidy.");
}

void Quiz::displayChoices(int &choice)
{
  cout << "1. Strongly Agree" << endl;
  cout << "2. Agree" << endl;
  cout << "3. Neither Agree Nor Disagree" << endl;
  cout << "4. Disagree" << endl;
  cout << "5. Strongly Disagree" << endl;
  cout << "6. Exit" << endl;
  cin >> choice;

  if (choice == 6)
  {
    exit();
  }
}

void Quiz::displayQuestions(vector<string> &questions, int &choice)
{
  for (int i = 0; i < questions.size(); i++)
  {
    cout << "Question #" << (i + 1) << endl;
    cout << questions[i] << endl;
    displayChoices(choice);
    clear_screen();
  }
}