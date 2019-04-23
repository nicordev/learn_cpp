#include <iostream>

struct Coordinates
{
    int x;
    int y;
};

int main()
{
    Coordinates point;

    point.x = 5;
    point.y = 7;

    std::cout << "x: " << point.x << std::endl;
    std::cout << "y: " << point.y << std::endl;

    return 0;
}