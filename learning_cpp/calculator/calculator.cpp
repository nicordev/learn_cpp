#include <iostream>

using namespace std;

int main()
{
    double a(0.0);
    double b(0.0);

    while (true) {
        cout << "Enter a number:" << endl;
        cin >> a;

        cout << "Enter another number:" << endl;
        cin >> b;

        cout << "Results:" << endl;
        cout << a << " + " << b << " = " << a + b << endl;
        cout << a << " - " << b << " = " << a - b << endl;
        cout << a << " * " << b << " = " << a * b << endl;
        cout << a << " / " << b << " = " << a / b << endl;
        cout << a << " / " << b << " = " << int(a) / int(b) << " modulo " << int(a) % int(b) << endl;
        cout << endl;
    }
    
    return 0;
}