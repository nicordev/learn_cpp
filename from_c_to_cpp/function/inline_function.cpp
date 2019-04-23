#include <iostream>

using namespace std;

inline int square(int number);

int main()
{
    cout << square(10) << endl; // square(10) will be replaced by the function content in the compiler

    return 0;
}

inline int square(int number)
{
    return number * number;
}
