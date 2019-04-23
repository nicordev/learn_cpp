#include <iostream>

using namespace std;

int main()
{
    int age = 21;
    int &referenceSurAge = age;

    cout << referenceSurAge << endl;
    cout << age << endl;

    referenceSurAge = 40;

    cout << referenceSurAge << endl;
    cout << age << endl;

    return 0;
}

/*
// Using pointers instead of references

int main()
{
    int age = 21;
    int *pointeurSurAge = &age;

    cout << *pointeurSurAge;

    *pointeurSurAge  = 40;

    cout << *pointeurSurAge;

    return 0;
}
*/