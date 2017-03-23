#include <iostream>
#include <string>
using namespace std;

int convertHexCharToDec(char letter)
{
    int number = 0;

    switch(letter)
    {
        case 'a':
            number = 10;
            break;
        case 'b':
            number = 11;
            break;
        case 'c':
            number = 12;
            break;
        case 'd':
            number = 13;
            break;
        case 'e':
            number = 14;
            break;
        case 'f':
            number = 15;
            break;
        default:
            number = letter - '0';
            break;
    }

    return number;
}

int convertHexToDecimal(string hex)
{
    int rightN = convertHexCharToDec(hex[1]);
    int leftN = convertHexCharToDec(hex[0]);

    int dec = rightN+ leftN * 16;

    return dec;
}

int calcAvgColorSegment(string colorSeg1Hex, string colorSeg2Hex)
{
    int fNum = convertHexToDecimal(colorSeg1Hex);
    int sNum = convertHexToDecimal(colorSeg2Hex);

    int avg =  (fNum + sNum) / 2;

    return avg;
}

void printHexSegment(const int& segment)
{
    cout << hex << segment;

    if(segment == 0)
    {
        cout << hex << segment;
    }
}

int main()
{
    string color1, color2;

    cin >> color1 >> color2;
    color1.erase(0, 1);
    color2.erase(0, 1);

    int redResultSegment = calcAvgColorSegment(color1.substr(0, 2), color2.substr(0, 2));
    int greenResultSegment = calcAvgColorSegment(color1.substr(2, 2), color2.substr(2, 2));
    int blueResultSegment = calcAvgColorSegment(color1.substr(4, 2), color2.substr(4, 2));

    cout << "#";
    printHexSegment(redResultSegment);
    printHexSegment(greenResultSegment);
    printHexSegment(blueResultSegment);

    return 0;
}
