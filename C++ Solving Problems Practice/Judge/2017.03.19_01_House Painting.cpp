#include <iostream>

using namespace std;

float calculateArea(float side1, float side2 = 0, bool isTriangle = false);

int main()
{
    float x, y, h;
    cin >> x >> y >> h;

    //calculating side walls
    float sideWalls = 2 * calculateArea(x, y) - 2 * calculateArea(1.5);

    //calculating front and back walls:
    float backWall = calculateArea(x);
    float frontWall = backWall - calculateArea(1.2, 2);

    //roof calculations
    float roof = 2 * calculateArea(x, y) + 2 * calculateArea(x, h, 1);

    float greenPaint = (sideWalls + backWall + frontWall) / 3.4;
    float redPaint = roof / 4.3;

    cout.precision(2);
    cout << fixed << greenPaint << endl
        << fixed << redPaint;

    return 0;
}

float calculateArea(float a, float b, bool isTriangle)
{
    if(!b)
    {
        b = a;
    }

    if(isTriangle)
    {
        return (a * b) / 2;
    }

    return a * b;
}
