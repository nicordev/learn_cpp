#include <iostream>

using namespace std;

int main()
{
    int const THIS_IS_A_CONSTANT(425);
    int a = 2, b = 3;
    int const THIS_CONSTANT_COMES_FROM_2_VARIABLES(a + b);

    cout << "THIS_IS_A_CONSTANT = " << THIS_IS_A_CONSTANT << endl;
    cout << "THIS_CONSTANT_COMES_FROM_2_VARIABLES a(" << a << ") + b(" << b << ") = " << THIS_CONSTANT_COMES_FROM_2_VARIABLES << endl;

    return 0;
}