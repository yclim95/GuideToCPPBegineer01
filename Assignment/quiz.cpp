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
  //24
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
  questions.push_back("You do not mind being at the center of attention.");
  questions.push_back("Being organized is more important to you than being adaptable.");
  questions.push_back("You are usually highly motivated and energetic.");
  questions.push_back("Winning a debate matters less to you than making sure no one gets upset.");
  questions.push_back("You often feel as if you have to justify yourself to other people.");
  questions.push_back("Your home and work environments are quite tidy.");
  questions.push_back("You do not mind being at the center of attention.");
  questions.push_back("You consider yourself more practical than creative.");
  questions.push_back("People can rarely upset you.");
  questions.push_back("Your travel plans are usually well thought out.");
  questions.push_back("It is often difficult for you to relate to other people’s feelings.");
  questions.push_back("Your mood can change very quickly.");
  questions.push_back("In a discussion, truth should be more important than people’s sensitivities.");
  questions.push_back("You rarely worry about how your actions affect other people.");
  questions.push_back("Your work style is closer to random energy spikes than to a methodical and organized approach.");
  questions.push_back("You are often envious of others.");
  questions.push_back("An interesting book or a video game is often better than a social event.");
  questions.push_back("Being able to develop a plan and stick to it is the most important part of every project.");
  //24
  questions.push_back("You rarely get carried away by fantasies and ideas.");
  questions.push_back("You often find yourself lost in thought when you are walking in nature.");
  questions.push_back("If someone does not respond to your e-mail quickly, you start worrying if you said something wrong.");
  questions.push_back("As a parent, you would rather see your child grow up kind than smart.");
  questions.push_back("You do not let other people influence your actions.");
  questions.push_back("Your dreams tend to focus on the real world and its events.");
  questions.push_back("It does not take you much time to start getting involved in social activities at your new workplace.");
  questions.push_back("You are more of a natural improviser than a careful planner.");
  questions.push_back("Your emotions control you more than you control them.");
  questions.push_back("You enjoy going to social events that involve dress-up or role-play activities.");
  questions.push_back("You often spend time exploring unrealistic and impractical yet intriguing ideas.");
  questions.push_back("You would rather improvise than spend time coming up with a detailed plan.");
  questions.push_back("You are a relatively reserved and quiet person.");
  questions.push_back("If you had a business, you would find it very difficult to fire loyal but underperforming employees.");
  questions.push_back("You often contemplate the reasons for human existence.");
  questions.push_back("Logic is usually more important than heart when it comes to making important decisions.");
  questions.push_back("Keeping your options open is more important than having a to-do list.");
  questions.push_back("If your friend is sad about something, you are more likely to offer emotional support than suggest ways to deal with the problem.");
  questions.push_back("You rarely feel insecure.");
  questions.push_back("You have no difficulties coming up with a personal timetable and sticking to it.");
  questions.push_back("Being right is more important than being cooperative when it comes to teamwork.");
  questions.push_back("You think that everyone’s views should be respected regardless of whether they are supported by facts or not.");
  questions.push_back("You feel more energetic after spending time with a group of people.");
  questions.push_back("You frequently misplace your things.");
  //12
  questions.push_back("You see yourself as very emotionally stable.");
  questions.push_back("Your mind is always buzzing with unexplored ideas and plans.");
  questions.push_back("You would not call yourself a dreamer.");
  questions.push_back("You usually find it difficult to relax when talking in front of many people.");
  questions.push_back("Generally speaking, you rely more on your experience than your imagination.");
  questions.push_back("You worry too much about what other people think.");
  questions.push_back("If the room is full, you stay closer to the walls, avoiding the center.");
  questions.push_back("You have a tendency to procrastinate until there is not enough time to do everything.");
  questions.push_back("You feel very anxious in stressful situations.");
  questions.push_back("You believe that it is more rewarding to be liked by others than to be powerful.");
  questions.push_back("You have always been interested in unconventional and ambiguous things, e.g. in books, art, or movies.");
  questions.push_back("You often take initiative in social situations.");
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

void Quiz::getCategoriesTotal()
{
  return categoriesTotal;
}

void Quiz::getPersonalitiesTotal()
{
  return personalitiesTotal;
}

void Quiz::getRoles()
{
  return roles;
}

void Quiz::getStrategies()
{
  return strategies;
}

void Quiz::getPersonalityCode()
{
  return personalityCode;
}

string Quiz::setPersonalityCode(string personalityCode)
{
  this->personalityCode = personalityCode;
}

void Quiz::getPersonalityType()
{
  return personalityType;
}

string Quiz::setPersonalityType(string personalityType)
{
  this->personalityType = personalityType;
}

void Quiz::getStrategyType()
{
  return strategyType;
}

string Quiz::setStrategyType(string strategyType)
{
  this->strategyType = strategyType;
}

