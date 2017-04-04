#include <iostream>

using namespace std;

int checkForMagicSum(int& magicFirst, int& magicSecond,
                      int magicNum, int startNum, int endNum);

int main()
{
    int startNum, endNum, magicNum;

    cin >> startNum >> endNum >> magicNum;

    int magicFirst = 0;
    int magicSecond = 0;

    int combinations = checkForMagicSum(magicFirst, magicSecond,
                                        startNum, endNum, magicNum);

    if(magicFirst)
    {
        cout << "Combination N:" << combinations << " "
            << "(" << magicFirst << " + " << magicSecond
            << " = " << magicNum << ")" << endl;
    }
    else
    {
        cout << combinations << " combinations - neither equals " << magicNum;
    }

    return 0;
}

int checkForMagicSum(int& magicFirst, int& magicSecond,
                       int startNum, int endNum, int magicNum)
{
    int combination = 0;

    for (int i = startNum; i >= endNum; i--)
    {
        for (int j = startNum; j >= endNum; j--)
        {
            combination++;
            if (i + j == magicNum)
            {
                magicFirst = i;
                magicSecond = j;
                return combination;
            }
        }
    }

    return combination;
}
