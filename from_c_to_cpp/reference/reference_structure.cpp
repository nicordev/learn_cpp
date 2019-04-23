#include <iostream>

using namespace std;

struct Coordinates
{
    int x;
    int y;
};

int main()
{
    Coordinates point = {5, 7};
    Coordinates &pointReference = point;

    cout << "x : " << pointReference.x << endl;
    cout << "y : " << pointReference.y << endl;

    pointReference.x = 10;
    pointReference.y = -6;

    cout << "x : " << pointReference.x << endl;
    cout << "y : " << pointReference.y << endl;

    return 0;
}