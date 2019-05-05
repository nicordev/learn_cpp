#include <iostream>
#include <string>

using namespace std;

// Functions prototypes

/**
 * Convert degrees to radians
 */
double convertDegreesToRadians(double angle);

/**
 * Convert radians to degrees
 */
double convertRadiansToDegrees(double angle);

/**
 * Ask to enter an angle in degrees and convert it in radians
 */
void degreesToRadiansConverter();

/**
 * Ask to enter an angle in radians and convert it in degrees
 */
void radiansToDegreesConverter();

/**
 * Show the converter menu
 */
bool converterMenu();

/**
 * Launch the converter application
 */
void run();


// Main function is here!
int main()
{
    run();
    
    return 0;
}


// My functions

void run()
{
    while (!converterMenu());
}

void degreesToRadiansConverter()
{
    double angle = 0.0;

    cout << "\nEnter an angle in degrees:";
    cin >> angle;

    cout << angle << " degrees = "  << convertDegreesToRadians(angle) << " radians" << endl;
}

void radiansToDegreesConverter()
{
    double angle = 0.0;

    cout << "\nEnter an angle in radians:";
    cin >> angle;

    cout << endl << angle << " radians = "  << convertRadiansToDegrees(angle) << " degrees" << endl;
}

bool converterMenu()
{
    int choice(0);

    cout << "\nChoose a conversion:" << endl;
    cout << "1. Degrees to radians" << endl;
    cout << "2. Radians to degrees" << endl;
    cout << "0. Quit" << endl;
    
    cout << "Enter your choice:";
    cin >> choice;

    switch (choice) {
        case 0:
            cout << "Bye!";
            return true;
        case 1:
            degreesToRadiansConverter();
            break;
        case 2:
            radiansToDegreesConverter();
            break;
        default:
            cout << "\nWrong choice... Try again." << endl;
            break;
    }
    return false;
}

double convertDegreesToRadians(double angle)
{
    double const PI = 3.14159265358979323846;

    return angle * PI / 180;
}

double convertRadiansToDegrees(double angle)
{
    double const PI = 3.14159265358979323846;

    return angle * 180 / PI;
}