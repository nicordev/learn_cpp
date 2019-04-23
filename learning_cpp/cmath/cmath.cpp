#include <iostream>
#include <cmath>

using namespace std;

int chooseAFunction();
double enterANumber();

int main()
{
    bool quit = false;
    int choice(0);
    double numberA(0.0);
    double numberB(0.0);

    while (!quit) {
        choice = chooseAFunction();

        switch (choice) {
            case 1:
                numberA = enterANumber();
                cout << "square root " << numberA << " = " << sqrt(numberA) << endl;
                break;
            case 2:
                numberA = enterANumber();
                cout << "sinus " << numberA << " = " << sin(numberA) << endl;
                break;
            case 3:
                numberA = enterANumber();
                cout << "cosinus " << numberA << " = " << cos(numberA) << endl;
                break;
            case 4:
                numberA = enterANumber();
                cout << "tangent " << numberA << " = " << tan(numberA) << endl;
                break;
            case 5:
                numberA = enterANumber();
                cout << "exponential " << numberA << " = " << exp(numberA) << endl;
                break;
            case 6:
                numberA = enterANumber();
                cout << "ln " << numberA << " = " << log(numberA) << endl;
                break;
            case 7:
                numberA = enterANumber();
                cout << "log10 " << numberA << " = " << log10(numberA) << endl;
                break;
            case 8:
                numberA = enterANumber();
                cout << "absolute value " << numberA << " = " << fabs(numberA) << endl;
                break;
            case 9:
                numberA = enterANumber();
                cout << "floor round " << numberA << " = " << floor(numberA) << endl;
                break;
            case 10:
                numberA = enterANumber();
                cout << "ceil round " << numberA << " = " << ceil(numberA) << endl;
                break;
            case 11:
                numberA = enterANumber();
                numberB = enterANumber();
                cout << numberA << " power " << numberB << " = " << pow(numberA, numberB) << endl;
                break;
            default:
                cout << "Good bye!" << endl;
                quit = true;
                break;
        }
        cout << endl;
    }

    return 0;
}

int chooseAFunction()
{
    int choice(-1);

    cout << "Choose a function:" << endl;
    cout << "\t1: square root" << endl;
    cout << "\t2: sinus" << endl;
    cout << "\t3: cosinus" << endl;
    cout << "\t4: tangent" << endl;
    cout << "\t5: exponential" << endl;
    cout << "\t6: ln" << endl;
    cout << "\t7: log10" << endl;
    cout << "\t8: absolute value" << endl;
    cout << "\t9: floor round" << endl;
    cout << "\t10: ceil round" << endl;
    cout << "\t11: power" << endl;
    cout << "Another integer: quit" << endl;

    cin >> choice;

    return int(choice);
}

double enterANumber()
{
    double number(0.0);
    
    cout << "Enter a number:" << endl;
    cin >> number;

    return number;
}