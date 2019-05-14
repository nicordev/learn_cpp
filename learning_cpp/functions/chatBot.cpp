#include <iostream>
#include <string>

using namespace std;

void menu(bool& quit);
void hello();
string ask(string question);
void answerAge(int age);

int main()
{
    bool quit(false);

    while (!quit) {
        menu(quit);
    }

    cout << "Bye!" << endl;
    
    return 0;
}

void menu(bool& quit)
{
    cout << "Hello world!" << endl;

    string question = "What's your name?";
    string name = ask(question);
    cout << "Nice to meet you " << name << "!" << endl;

    question = "How old are you?";
    int age(-1);
    
    while (age <= 0) {
        age = stoi(ask(question)); // BUG: unable to cast to int
        if (age <= 0) {
        cout << "\nYou're kidding..." << endl;
        }
    }
    
    answerAge(age);

    cout << "\nQuit?\n0: no\n1: yes" << endl;
    cin >> quit;
}

void hello()
{
    cout << "Hello world!" << endl;
}

string ask(string question)
{
    cout << question << endl;
    string answer;
    cin >> answer;
    return answer;
}

void answerAge(int age)
{
    if (age < 10) {
        cout << "You have all your life ahead of you!" << endl;
    } else if (age < 20) {
        cout << "You should learn a programming language" << endl;
    } else {
        cout << "Thank you." << endl;
    }
}