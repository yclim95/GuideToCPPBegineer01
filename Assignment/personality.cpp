#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <string>
#include <iomanip>
#include <fstream>
#include <cctype>

using namespace std;

//Function Declaration
void clear_screen();
void mySleep(int sleepMs);
void displayError(string error);
void menu(int &choice);
void exit();
void displayInstruction();
void choice();
void displayPersonality();
void displayQuizInstruction();
void run();
bool is_alpha(string name);
void displayProfile();
void removeWhitespace(string &str);
void displayProfile(string fileName);
void displayChoices(int &choice);

//Main Function (Start)
int main()
{
    //Local Variable
    int choice = 0;
    string fileName = "profile.txt";
    clear_screen();
    menu(choice);

   
    while (choice < 1 || choice > 5)
    {
        clear_screen();
        displayError("Accept only integer (1-5)");
        menu(choice);
    }

    if (choice == 1)
    {
        displayQuizInstruction();
    }

    else if (choice == 2)
    {
        displayInstruction();
    }

    else if (choice == 3)
    {
        displayPersonality();
    }

    else if (choice == 4)
    {
        displayProfile(fileName);
    }

    else
    {
        exit();
    }


    return 0;
}

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

//ErrorMessage
void displayError(string error)
{
    cout << "Error: " << error << ". Please try again." << endl;
}

//MenuList
void menu(int &choice)
{
    cout << "1. Start Personality Test" << endl;
    cout << "2. Instructions " << endl;
    cout << "3. Personality Description/Theory" << endl;
    cout << "4. Profile" << endl;
    cout << "5. Exit" << endl;
    cin >> choice;
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

//Display Instructions 
void displayInstruction()
{
    clear_screen();
    cout << "---------------------------------------------------------------" << endl;
    cout << "I  N  S  T  R  U   C  T  I  O  N  S" << endl;
    cout << "---------------------------------------------------------------" << endl;
    cout << "Instructions before taking the quiz" << endl;
    cout << "1. Quiz : 60 Questions" << endl;
    cout << "2. 5 Multiple Answers" << endl;
    cout << "3. Answer honestly, even if you don't like the answer." << endl;
    cout << "4. Always trust your first instinct." << endl;
    cout << "5. Try not to leave any \"neutral\" answers." << endl;
    cout << "---------------------------------------------------------------" << endl;
    
    choice();
}

void displayPersonality()
{
    clear_screen();
    cout << "---------------------------------------------------------------" << endl;
    cout << "PERSONALITY DESCRIPTION/THEORY " << endl;
    cout << "---------------------------------------------------------------" << endl;
    cout << "1.Mind:\t\t" << "This aspect shows how we interact with our surroundings" << endl;
    cout << setw(25) << "A. Introverted (I): " << setw(8) << "Introverted " << 
        "individuals prefer solitary activities and\n" << setw(76)<<
        "get exhausted by social interaction. They tend to be quite sensitive to\n" <<
        setw(66) << "external stimulation (e.g. sound, sight or smell) in general." << endl;
    cout << setw(25) << "B. Extraverted (E): " << setw(8) << "Extraverted " <<
        "individuals prefer group activities and\n" << setw(76) << 
        "get energized by social interaction. They tend to be more enthusiastic\n" <<
        setw(45) << "and more easily excited than introverts." << endl << endl;

    cout << "2.Energy:\t" << "The second aspect determines how we see the world" <<
        "and process\n\t" << setw(20) << "information:" << endl;
    cout << setw(25) << "A. Observant (S): " << setw(8) << "Observant " << 
        "individuals are highly practical, pragmatic\n" << setw(76) << 
        "and down-to-earth. They tend to have strong habits and focus on what\n" <<
        setw(66) << "is happening or has already happened." << endl;
    cout << setw(25) << "B. Intuitive (N): " << setw(8) << "Intuitive " << 
        "individuals are very imaginative,\n" << setw(76) << 
        "open-minded and curious. They prefer novelty over stability and focus\n" << 
        setw(66) << "on hidden meanings and future possibilities." << endl << endl;

    cout << "3.Nature:\t" << "This aspect determines how we make decisions and" <<
        "cope with\n\t" << setw(20) << "emotions:" << endl;
    cout << setw(25) << "A. Thinking (T): " << setw(8) << "Thinking individuals " <<
        "focus on objectivity and rationality,\n" << setw(76) << 
        "prioritizing logic over emotions. They tend to hide their feelings and\n" <<
        setw(66) << "see efficiency as more important than cooperation." << endl;
    cout << setw(25) << "B. Feeling (F): " << setw(8) << "Feeling individuals "
         << "are sensitive and emotionally\nexpressive."
         << setw(76) << "They are more empathic and less competitive than Thinking types, and\n"
         << setw(66) << "focus on social harmony and cooperation." << endl << endl;

    cout << "4.Tactics:\t" << "This aspect reflects our approach to work, " << 
        "planning\n\t" << setw(30) << "and decision-making:" << endl;
    cout << setw(25) << "A. Judging (J): " << setw(8) << "Judging individuals " <<
        "are decisive, thorough and highly\n" << setw(76) << 
        "organized. They value clarity, predictability and closure, preferring\n" << 
        setw(66) << "structure and planning to spontaneity." << endl;
    cout << setw(25) << "B. Prospecting (P): " << setw(8) << "Prospecting individuals " <<
        "are very good at improvising\nand" << setw(76) << 
        "spotting opportunities. They tend to be flexible, relaxed nonconformists\n" <<
        setw(66) << "who prefer keeping their options open." << endl << endl;

    cout << "5. Identity:\t" << "Finally, the Identity aspect underpins all " << 
        "others,\n\t" << setw(30) << "showing how confident we are in our abilities and decisions:" << endl;
    cout << setw(25) << "A. Assertive (A): " << setw(8) << "Assertive (-A) " << 
        "individuals are self-assured,\n" << setw(76) << 
        "even-tempered and resistant to stress. They refuse to worry too much\n" << 
        setw(66) << "and do not push themselves too hard when it comes to achieving goals." << endl;
    cout << setw(25) << "B. Turbelent (T): " << setw(8) << "Turbulent (-T) " << 
        "individuals are self-conscious\n" << setw(76) <<
        "and sensitive to stress. They are likely to experience a wide range\n" << 
        setw(66) << "of emotions and to be success-driven, perfectionistic and eager to improve." << endl << endl << endl;

    cout << "---------------------------------------------------------------" << endl;
    cout << "16 PERSONALITIES TYPE - Roles & Strategies" << endl;
    cout << "---------------------------------------------------------------" << endl;
    cout << "Roles: ANALYSTS" << endl;
    cout << "1. ARCHITECT (INTJ, -A/-T)\n" <<
        "Imaginative and strategic thinkers, with a plan for everything." << endl;
    cout << "2. LOGICIANS (INTP, -A/-T)\n" <<
        "Innovative inventors with an unquenchable thirst for knowledge." << endl;
    cout << "3. COMMANDER (ENTJ, -A/-T)\n" <<
        "Bold, imaginative and strong-willed leaders, always finding a way – or making one." << endl;
    cout << "4. DEBATER (ENTP, -A/-T)\n"
         << "Smart and curious thinkers who cannot resist an intellectual challenge." << endl << endl;
    
    cout << "Roles: DIPLOMATS" << endl;
    cout << "1. ADVOCATE (INFJ, -A/-T)\n"
         << "Quiet and mystical, yet very inspiring and tireless idealists." << endl;
    cout << "1. MEDIATOR (INFP, -A/-T)\n"
         << "Poetic, kind and altruistic people, always eager to help a good cause." << endl;
    cout << "1. PROTAGONIST (ENFJ, -A/-T)\n"
         << "Poetic, kind and altruistic people, always eager to help a good cause." << endl;
    cout << "1. CAMPAIGNER (ENFP, -A/-T)\n"
         << "Enthusiastic, creative and sociable free spirits, who can always find a reason to smile." << endl << endl;

    cout << "Roles: SENTINELS" << endl;
    cout << "1. LOGISTICIAN (ISTJ, -A/-T)\n"
         << "Practical and fact-minded individuals, whose reliability cannot be doubted." << endl;
    cout << "1. DEFENDER (INFP, -A/-T)\n"
         << "Very dedicated and warm protectors, always ready to defend their loved ones." << endl;
    cout << "1. EXECUTIVE (ESTJ, -A/-T)\n"
         << "Excellent administrators, unsurpassed at managing things – or people." << endl;
    cout << "1. CONSUL (ESFJ, -A/-T)\n"
         << "Extraordinarily caring, social and popular people, always eager to help." << endl << endl;

    cout << "Roles: EXPLORERS" << endl;
    cout << "1. VIRTUOSO (ISTP, -A/-T)\n"
         << "Bold and practical experimenters, masters of all kinds of tools." << endl;
    cout << "1. ADVENTURER (ISFP, -A/-T)\n"
         << "Flexible and charming artists, always ready to explore and experience something new." << endl;
    cout << "1. ENTREPRENEUR (ESTP, -A/-T)\n"
         << "Smart, energetic and very perceptive people, who truly enjoy living on the edge." << endl;
    cout << "1. ENTERTAINER (ESFP, -A/-T)\n"
         << "Spontaneous, energetic and enthusiastic people – life is never boring around them." << endl << endl << endl;

    cout << "Strategies: CONFIDENT INDIVIDUALISM (Introverted and Assertive [ I___-A ] types)" << endl;
    cout << "Strategies: PEOPLE MASTERY (Extraverted and Assertive [ E___-A ] types)" << endl;
    cout << "Strategies: Constant Improvement (Introverted and Turbulent [ I___-T ] types)" << endl;
    cout << "Strategies: Social Engagement (Extraverted and Turbulent [ E___-T ] types)" << endl;
    cout << "---------------------------------------------------------------" << endl << endl;
    choice();
}

void choice()
{
    int choice = 0;
    cout << "1. Exit " << endl;
    cout << "2. Back to Menu " << endl;
    cin >> choice;

    if (choice == 1)
        exit();
    else
        main();
}

void displayQuizInstruction()
{
    int choice = 0;
    clear_screen();
    cout << "---------------------------------------------------------------" << endl;
    cout << "I  N  S  T  R  U   C  T  I  O  N  S" << endl;
    cout << "---------------------------------------------------------------" << endl;
    cout << "Instructions before taking the quiz" << endl;
    cout << "1. Quiz : 60 Questions" << endl;
    cout << "2. 5 Multiple Answers" << endl;
    cout << "3. Answer honestly, even if you don't like the answer." << endl;
    cout << "4. Always trust your first instinct." << endl;
    cout << "5. Try not to leave any \"neutral\" answers." << endl;
    cout << "---------------------------------------------------------------" << endl;
    cout << "1. Begin Quiz" << endl;
    cout << "2. Back to Menu" << endl;
    cout << "3. Exit" << endl;
    cin >> choice ;

    if (choice == 1)
    {
        clear_screen();
        run();
    }
        
    else if (choice == 2)
        main();
    else
        exit();
}

void run()
{
    string name = " ";
    int age = 0;
    int choice = 0;
    ofstream outProfile;
    string questions[] = {"You find it difficult to introduce yourself to other people.",
                          "You often get so lost in thoughts that you ignore or forget your surroundings.",
                          "You try to respond to your e-mails as soon as possible and cannot stand a messy inbox.",
                          "You find it easy to stay relaxed and focused even when there is some pressure.",
                          "You do not usually initiate conversations.",
                          "You rarely do something just out of sheer curiosity.",
                          "You feel superior to other people."};

    outProfile.open("profile.txt");
    if (outProfile.is_open())
    {
        cout << "---------------------------------------------------------------" << endl;
        cout << "PERSONALITY TEST" << endl;
        cout << "---------------------------------------------------------------" << endl;
        cin.ignore();
        cout << "Name: ";
        getline(cin, name);
        cout << "Age: ";
        cin >> age;
    
        while(!is_alpha(name))
        {
            clear_screen();
            displayError("Please don't enter numbers or other special characters. (Name)");
            displayError("Positive integer only accepted. (Age)");
            cout << "---------------------------------------------------------------" << endl;
            cout << "PERSONALITY TEST" << endl;
            cout << "---------------------------------------------------------------" << endl;
            cin.ignore();
            cout << "Name: ";
            getline(cin, name);
            cout << "Age: ";
            cin >> age;
        }

        outProfile << name << "," << age << endl;

        for (int i = 0; i < sizeof(questions) / sizeof(questions[0]);
             i++)
        {
            cout << "Questions #" << (i+1) << endl;
            cout << questions[i] << endl;
            displayChoices(choice);
        }
    }
    else
    {
        displayError("The File \"profile.txt\" has problem.");
    }

    outProfile.close();
    cout << "\nRecords successfully written to employee.txt \n";
}

bool is_alpha(string name)
{
    int count = 0;
    removeWhitespace(name);
    for (int i = 0; i < name.length(); i++)
    {
        if (isalpha(name[i]))
            count++;
    }
    return (count == name.length()) ? true : false; 
}


void removeWhitespace(string &str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        {
            str.erase(i, 1);
            i--;
        }
    }
}

void displayProfile(string fileName)
{
    ifstream inProfile;
    inProfile.open(fileName);
    string name = " ";
    int age = 0;

    if (inProfile.is_open())
    {
        cout << "---------------------------------------------------------------" << endl;
        cout << "P   R   O   F  I  L  E" << endl;
        cout << "---------------------------------------------------------------" << endl;

        while(getline(inProfile, name, ','))
        {
            inProfile >> age;
            inProfile.ignore();
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
    }
    else
    {
        cout << "\" " << fileName << "\" does not exist!" << endl;
    }

    inProfile.close();
}

void displayChoices(int &choice)
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