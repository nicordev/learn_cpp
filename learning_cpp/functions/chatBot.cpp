#include <iostream>
#include <string>

using namespace std;

void menu(bool& quit);
void hello();
string askName();
int askAge();

int main()
{
    bool quit(false);

    while (!quit) {
        menu(quit);
    }
    
    return 0;
}

void menu(bool& quit)
{
    cout << "Hello world!" << endl;

    string name = askName();
    cout << "Nice to meet you " << name << "!" << endl;

    int age(-1);
    while ((age = askAge()) <= 0) {
        cout << "You have to be older than that!" << endl;
    }

    cout << "\nQuit?\n0: no\n1: yes" << endl;
    cin >> quit;
}

void hello()
{
    cout << "Hello world!" << endl;
}

string askName()
{
    cout << "What's your name?" << endl;
    string name;
    cin >> name;

    return name;
}

int askAge()
{
    cout << "How old are you?" << endl;
    int age;
    cin >> age;

    return age;
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